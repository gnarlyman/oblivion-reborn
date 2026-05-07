
void FUN_006701b0(char param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c42b1;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == '\0') {
    *(undefined1 *)(in_ECX + 0x4b) = 1;
    *(undefined1 *)(in_ECX + 0x1ce) = 0;
    cVar2 = FUN_0045a500(uVar3);
    if (cVar2 == '\0') {
      FUN_006765f0(0,DAT_00b3bad0,1);
      in_ECX[0x182] = 0;
      DAT_00b3bad4 = 0;
      DAT_00b3bad0 = 0;
    }
    *(undefined1 *)(in_ECX + 0x184) = 0;
    FUN_00675d50(0,0);
    pcVar1 = *(code **)(*in_ECX + 0x250);
    *(undefined1 *)(in_ECX + 0x80) = 1;
    DAT_00b3bad0 = 0;
    (*pcVar1)();
    iVar4 = FUN_009828c0();
    in_ECX[0x182] = iVar4;
    cVar2 = (**(code **)(*in_ECX + 0x354))();
    if (cVar2 != '\0') {
      FUN_004246f0();
    }
    FUN_0065fda0();
    FUN_005f0410();
  }
  else {
    FUN_006a2190(1);
    if (in_ECX[0x182] < 1) {
      in_ECX[0x182] = 1;
    }
    if (DAT_00b3bad0 == 0) {
      FUN_004a7a60("No Jail marker was found to put the Player");
      in_ECX[0x182] = 0;
    }
    else {
      FUN_004d7630();
      iVar4 = FUN_0042b410();
      if (iVar4 == 0) {
        in_ECX[0x182] = 0;
        FUN_004a7a60("No interior linked to Jail Marker");
      }
      else {
        FUN_0041e6f0();
        if (DAT_00b3bad4 != 0) {
          iVar4 = FUN_00487d20(DAT_00b35ec8,0);
          if (iVar4 != 0) {
            FUN_0048fbc0();
          }
          FUN_00492e70(in_ECX,DAT_00b3bad4,0,0,0);
          uVar9 = DAT_00b33ab0;
          if (iVar4 != 0) {
            FUN_0048f7c0(DAT_00b35ec8,0,1);
          }
          iVar10 = 0;
          iVar4 = FUN_00469570(uVar9);
          if (iVar4 != 0) {
            iVar5 = FUN_00401f00(0x14);
            uStack_4 = 0;
            if (iVar5 != 0) {
              iVar10 = FUN_00422ee0();
            }
            uStack_4 = 0xffffffff;
            FUN_004238a0(1);
            if ((iVar10 != 0) && (iVar5 = FUN_0041e900(), iVar5 == 0)) {
              FUN_0041f090(iVar4);
              uVar6 = FUN_004fbdc0();
              FUN_0041f130(uVar6);
            }
          }
          (**(code **)(*in_ECX + 0x114))(uVar9,iVar10,1);
          FUN_005faea0(uVar9,1,0,1,0);
          uVar9 = DAT_00b33ab4;
          iVar4 = FUN_00469570(DAT_00b33ab4);
          if (iVar4 != 0) {
            puStack_8 = (undefined1 *)FUN_00401f00(0x14);
            if (puStack_8 == (undefined1 *)0x0) {
              iVar10 = 0;
            }
            else {
              iVar10 = FUN_00422ee0();
            }
            FUN_004238a0(1);
            if ((iVar10 != 0) && (iVar5 = FUN_0041e900(), iVar5 == 0)) {
              FUN_0041f090(iVar4);
              uVar6 = FUN_004fbdc0();
              FUN_0041f130(uVar6);
            }
          }
          (**(code **)(*in_ECX + 0x114))(uVar9,iVar10,1);
          FUN_005faea0(uVar9,1,0,1,0);
          uVar9 = DAT_00b33ab8;
          iVar4 = FUN_00469570(DAT_00b33ab8);
          if (iVar4 != 0) {
            iVar10 = FUN_00401f00(0x14);
            if (iVar10 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = FUN_00422ee0();
            }
            FUN_004238a0(1);
            if ((iVar10 != 0) && (iVar5 = FUN_0041e900(), iVar5 == 0)) {
              FUN_0041f090(iVar4);
              uVar6 = FUN_004fbdc0();
              FUN_0041f130(uVar6);
            }
          }
          (**(code **)(*in_ECX + 0x114))(uVar9,iVar10,1);
          FUN_005faea0(uVar9,1,0,1,0);
          (**(code **)(*(int *)in_ECX[0x16] + 0x308))(0);
          iVar4 = in_ECX[0x41];
          iVar10 = FUN_004d8370();
          iVar5 = 2;
          do {
            if (iVar5 == 1) {
              iVar4 = FUN_006600d0(1);
              iVar10 = in_ECX[0x173];
            }
            (**(code **)(*(int *)in_ECX[0x16] + 0x150))(0,iVar4,iVar10);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          (**(code **)(*(int *)in_ECX[0x16] + 0x10c))(0);
          (**(code **)(*(int *)in_ECX[0x16] + 0x110))(0);
          (**(code **)(*(int *)in_ECX[0x16] + 0x108))(0);
          (**(code **)(*(int *)in_ECX[0x16] + 0x104))(0,0);
          (**(code **)(*(int *)in_ECX[0x16] + 0x308))(0);
          (**(code **)(*(int *)in_ECX[0x16] + 0x300))(0);
          FUN_0057a3b0(0);
        }
      }
    }
    *(undefined1 *)(in_ECX + 0x4b) = 0;
    if (0 < in_ECX[0x182]) {
      iVar4 = FUN_004d7630();
      if (iVar4 == 0) {
        FUN_004a7a60("no teleport on the interior jail marker");
        in_ECX[0x182] = 0;
      }
      else {
        FUN_006765f0(DAT_00b3bad0,0,1);
        puVar7 = (undefined4 *)FUN_0042b430();
        puVar8 = (undefined4 *)FUN_006899c0();
        uVar6 = 1;
        uVar9 = FUN_0042b460(1);
        FUN_0066eaf0(*puVar8,puVar8[1],puVar8[2],*puVar7,puVar7[1],puVar7[2],uVar9,uVar6);
        FUN_005e4140();
        if (((*(char *)(DAT_00b333c4 + 0x116) == '\0') && (in_ECX[0x78] != 0)) &&
           (cVar2 = FUN_004de770(DAT_00b333c4,1), cVar2 != '\0')) {
          iVar4 = FUN_004d6670();
          iVar10 = FUN_004d6670();
          if (iVar10 != iVar4) {
            FUN_0057acc0(DAT_00b38b50,0,1,0xbf800000);
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00670700(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *in_ECX;
  float10 fVar12;
  int iStack_83c;
  float fStack_838;
  float fStack_834;
  float fStack_830;
  int iStack_82c;
  float local_828 [20];
  undefined4 local_7d8;
  char local_7d4 [2000];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&iStack_83c;
  in_ECX[0x164] = in_ECX[0x182] * 0x18;
  *(undefined1 *)(in_ECX + 0x165) = 1;
  in_ECX[0x196] = in_ECX[0x196] + in_ECX[0x182];
  DAT_00b14e4c = 0;
  _sprintf(local_7d4,"\n");
  *(undefined1 *)(in_ECX + 0x80) = 0;
  iVar2 = FUN_00542ea0();
  *(uint *)(iVar2 + 0xfc) = *(uint *)(iVar2 + 0xfc) & 0xffffffdf;
  while (0 < in_ECX[0x164]) {
    FUN_0065f770();
  }
  iVar2 = FUN_00542ea0();
  *(uint *)(iVar2 + 0xfc) = *(uint *)(iVar2 + 0xfc) | 0x20;
  local_828[0] = 0.0;
  local_828[1] = 0.0;
  local_828[2] = 0.0;
  local_828[3] = 0.0;
  local_828[4] = 0.0;
  local_828[5] = 0.0;
  local_828[6] = 0.0;
  local_828[7] = 0.0;
  local_828[8] = 0.0;
  local_828[9] = 0.0;
  local_828[10] = 0.0;
  local_828[0xb] = 0.0;
  local_828[0xc] = 0.0;
  local_828[0xd] = 0.0;
  local_828[0xe] = 0.0;
  local_828[0xf] = 0.0;
  local_828[0x10] = 0.0;
  local_828[0x11] = 0.0;
  local_828[0x12] = 0.0;
  local_828[0x13] = 0.0;
  local_7d8 = 0;
  if (10 < in_ECX[0x182]) {
    in_ECX[0x182] = 10;
  }
  iVar2 = in_ECX[0x182];
  while (iVar2 != 0) {
    iVar2 = FUN_0047df80(0);
    for (iVar2 = iVar2 % 0x15; iVar2 < 0xc; iVar2 = iVar2 + iVar3 % 10) {
      iVar3 = FUN_0047df80(0);
    }
    uVar4 = FUN_00565c50(2,iVar2);
    iVar3 = FUN_00446af0(uVar4);
    (**(code **)(*in_ECX + 0x288))(*(undefined4 *)(iVar3 + 0x2c));
    iVar5 = FUN_009828c0();
    if (1 < iVar5) {
      if ((iVar2 == 0x1f) || (iVar2 == 0x1e)) {
        uVar4 = *(undefined4 *)(iVar3 + 0x2c);
        iVar3 = FUN_005f1910(uVar4);
        piVar6 = (int *)FUN_005e02e0(0);
        (**(code **)(*piVar6 + 0x134))(uVar4,iVar3 + 1);
        FUN_0057a6f0(uVar4);
        FUN_005e2670(uVar4,1);
        cVar1 = FUN_00565c50(2,iVar2);
        local_828[cVar1] = local_828[cVar1] + 1.0;
      }
      else {
        cVar1 = FUN_00565c50(2,iVar2);
        uVar4 = *(undefined4 *)(iVar3 + 0x2c);
        local_828[cVar1] = local_828[cVar1] - 1.0;
        iVar2 = FUN_005f1910(uVar4);
        piVar6 = (int *)FUN_005e02e0(0);
        (**(code **)(*piVar6 + 0x134))(uVar4,iVar2 + -1);
        FUN_0057a6f0(uVar4);
        FUN_005e2670(uVar4,1);
      }
    }
    in_ECX[0x182] = in_ECX[0x182] + -1;
    iVar2 = in_ECX[0x182];
  }
  FUN_006765f0(0,DAT_00b3bad0,1);
  if (DAT_00b3bad4 != 0) {
    iVar2 = FUN_0041e6f0();
    if (iVar2 != 0) {
      FUN_004917e0(DAT_00b3bad4,DAT_00b333c4);
    }
    FUN_0057a3b0(0);
  }
  if (DAT_00b3bad0 == (int *)0x0) goto LAB_00670b32;
  if (DAT_00b35b90 != 0) {
    thunk_FUN_004be420();
  }
  if (DAT_00b35b8c != 0) {
    thunk_FUN_004bd8c0();
  }
  iVar5 = 0x7fffffff;
  iVar3 = 0x7fffffff;
  iStack_82c = FUN_004d6670();
  iVar2 = FUN_006ecc80();
  if (iVar2 == 0) {
    if (iStack_82c == 0) goto LAB_00670b32;
    pfVar7 = (float *)(**(code **)(*DAT_00b3bad0 + 0x174))();
    fStack_838 = *pfVar7;
    iStack_83c = (int)ROUND(fStack_838);
    iVar5 = iStack_83c >> 0xc;
    iVar2 = (**(code **)(*DAT_00b3bad0 + 0x174))();
    fStack_838 = *(float *)(iVar2 + 4);
    iStack_83c = (int)ROUND(fStack_838);
    iVar3 = iStack_83c >> 0xc;
    iVar2 = FUN_004f1630(iVar5,iVar3);
    if (iVar2 == 0) goto LAB_00670b32;
  }
  FUN_004d7630();
  FUN_0042b410();
  iStack_83c = FUN_004d7630();
  if (iStack_83c != 0) {
    iVar8 = FUN_0042b460();
    if (iVar8 == 0) {
      pfVar7 = (float *)FUN_006899c0();
      fStack_834 = *pfVar7;
      fStack_838 = (float)(int)ROUND(fStack_834);
      fStack_830 = (float)((int)fStack_838 >> 0xc);
      iVar8 = FUN_006899c0();
      fStack_834 = *(float *)(iVar8 + 4);
      fStack_838 = (float)(int)ROUND(fStack_834);
      if ((fStack_830 != (float)iVar5) || (iVar3 != (int)fStack_838 >> 0xc)) {
        iVar2 = FUN_004f1630(fStack_830,(int)fStack_838 >> 0xc);
      }
    }
    else {
      iVar2 = FUN_0042b460();
    }
    puVar9 = (undefined4 *)FUN_0042b430();
    puVar10 = (undefined4 *)FUN_006899c0();
    FUN_0066eaf0(*puVar10,puVar10[1],puVar10[2],*puVar9,puVar9[1],puVar9[2],iVar2,1);
  }
LAB_00670b32:
  iVar2 = *DAT_00b333c4;
  fVar12 = (float10)(**(code **)(iVar2 + 0x250))();
  fStack_830 = (float)(fVar12 * (float10)-1.0);
  (**(code **)(iVar2 + 0x254))(fStack_830);
  in_ECX[0x182] = 0;
  DAT_00b3bad4 = 0;
  DAT_00b3bad0 = (int *)0x0;
  FUN_00675e90(in_ECX);
  iVar2 = 0xc;
  do {
    uVar4 = FUN_00565c50(2,iVar2);
    FUN_00446af0(uVar4);
    FUN_00565c50(2,iVar2);
    iVar3 = FUN_009828c0();
    uVar4 = DAT_00b38d28;
    if ((0 < iVar3) || (iVar3 < 0)) {
      uVar11 = DAT_00b383a8;
      if ((iVar2 != 0x1f) && (iVar2 != 0x1e)) {
        iVar3 = -iVar3;
        uVar11 = DAT_00b383b0;
      }
      uVar11 = FUN_0052ea90(uVar11,iVar3);
      _sprintf((char *)&local_7d8,"%s %s %s %s by %d.\n",&local_7d8,uVar4,uVar11);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x21);
  FUN_00579c10(&local_7d8,0,1,DAT_00b38cf0,0);
  for (piVar6 = (int *)(**(code **)(in_ECX[0x1a] + 8))();
      (piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0)))); piVar6 = (int *)piVar6[1]) {
    if (*(int *)(*(int *)(*(int *)(*piVar6 + 0xc) + 0x1c) + 0x98) == 0x47445553) {
      iVar2 = FUN_009832e6(*piVar6,0,&PTR_PTR_00b14914,&PTR_PTR_00b14ff8,0);
      *(undefined1 *)(iVar2 + 0x3d) = 1;
    }
  }
  return;
}



void FUN_00670ca0(char param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *in_ECX;
  int iVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 uVar13;
  
  if (param_1 == '\0') {
    FUN_0041e6f0();
    uVar13 = 0;
    (**(code **)(*in_ECX + 0x250))(0);
    uVar3 = FUN_009828c0();
    FUN_00491700(in_ECX,uVar3,uVar13);
    cVar2 = (**(code **)(*in_ECX + 0x354))();
    if (cVar2 != '\0') {
      FUN_004246f0();
    }
    iVar9 = *in_ECX;
    fVar12 = (float10)(**(code **)(iVar9 + 0x250))();
    (**(code **)(iVar9 + 0x254))((float)(fVar12 * (float10)-1.0));
    FUN_00675d50(in_ECX,0);
    *(undefined1 *)(in_ECX + 0x4b) = 1;
    FUN_0065fda0();
    if (DAT_00b3bad4 != 0) {
      FUN_004919e0(in_ECX,DAT_00b3bad4,0);
      FUN_0057a3b0(0);
    }
    FUN_00675e90(in_ECX);
    return;
  }
  iVar9 = 0;
  bVar11 = DAT_00b3bad0 == (int *)0x0;
  *(undefined1 *)(in_ECX + 0x4b) = 0;
  if (bVar11) {
    return;
  }
  if (DAT_00b35b90 != 0) {
    thunk_FUN_004be420();
  }
  if (DAT_00b35b8c != 0) {
    thunk_FUN_004bd8c0();
  }
  iVar10 = 0;
  iVar4 = FUN_006ecc80();
  if (iVar4 == 0) {
    iVar9 = FUN_004d6670();
    if (iVar9 == 0) {
      return;
    }
    pfVar5 = (float *)(**(code **)(*DAT_00b3bad0 + 0x174))();
    iVar10 = (int)ROUND(*pfVar5) >> 0xc;
    iVar9 = (**(code **)(*DAT_00b3bad0 + 0x174))();
    iVar9 = (int)ROUND(*(float *)(iVar9 + 4)) >> 0xc;
    iVar4 = FUN_004f1630(iVar10,iVar9);
    if (iVar4 == 0) {
      return;
    }
  }
  iVar6 = (**(code **)(*in_ECX + 0x380))();
  if ((iVar6 != 0) || (iVar6 = (**(code **)(*in_ECX + 0x388))(), iVar6 != 0)) {
    FUN_005f0410();
  }
  FUN_005e4140();
  FUN_004d7630();
  FUN_0042b410();
  iVar6 = FUN_004d7630();
  if (iVar6 != 0) {
    iVar6 = FUN_0042b460();
    if (iVar6 == 0) {
      pfVar5 = (float *)FUN_006899c0();
      fVar1 = *pfVar5;
      iVar6 = FUN_006899c0();
      iVar6 = (int)ROUND(*(float *)(iVar6 + 4)) >> 0xc;
      if (((int)ROUND(fVar1) >> 0xc != iVar10) || (iVar9 != iVar6)) {
        iVar4 = FUN_004f1630((int)ROUND(fVar1) >> 0xc,iVar6);
      }
    }
    else {
      iVar4 = FUN_0042b460();
    }
    puVar7 = (undefined4 *)FUN_0042b430();
    puVar8 = (undefined4 *)FUN_006899c0();
    FUN_0066eaf0(*puVar8,puVar8[1],puVar8[2],*puVar7,puVar7[1],puVar7[2],iVar4,1);
    FUN_006765f0(DAT_00b3bad0,0,0);
  }
  return;
}



void FUN_00670f50(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  undefined4 in_ECX;
  float10 fVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar5 = FUN_00420190();
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) {
    FUN_00675d50(in_ECX,0);
    pfVar6 = (float *)FUN_004d76f0();
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    pfVar6 = (float *)(**(code **)(**(int **)(iVar5 + 0x18) + 0x174))();
    fStack_8 = pfVar6[1] - fVar2;
    fStack_4 = pfVar6[2] - fVar3;
    fStack_c = *pfVar6 - fVar1;
    fVar7 = (float10)FUN_00683cb0(&fStack_c);
    iVar5 = FUN_004d6670();
    if (iVar5 != 0) {
      FUN_0066f370(fVar1,fVar2,fVar3,0,0,(float)fVar7,iVar5,0);
      FUN_004d8e60(0);
      return;
    }
    iVar5 = FUN_006ecc80();
    if (iVar5 != 0) {
      cVar4 = FUN_004c97f0();
      if (cVar4 != '\0') {
        FUN_0066eaf0(fVar1,fVar2,fVar3,0,0,(float)fVar7,iVar5,0);
      }
    }
    FUN_004d8e60(0);
  }
  return;
}



void FUN_00671170(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 uVar7;
  int *in_ECX;
  bool bVar8;
  float10 fVar9;
  float unaff_retaddr;
  
  iVar2 = FUN_00403520(0x1c,1);
  bVar8 = iVar2 != 0;
  iVar2 = FUN_00403520(0x1c,0);
  if (bVar8) {
    iVar3 = FUN_00582160(0,1);
    *(undefined4 *)(iVar3 + 0x90) = 0;
  }
  iVar3 = FUN_00582160(0,1);
  iVar3 = *(int *)(iVar3 + 0x90);
  if (iVar3 == 1) {
    iVar4 = FUN_00582160(0,1);
    *(undefined4 *)(iVar4 + 0x90) = 2;
  }
  if ((!bVar8) && (iVar2 == 0)) {
    if (in_ECX[0x15d] != 0) goto LAB_0067122c;
    if ((iVar3 != 1) && (iVar3 != 2)) {
      return;
    }
  }
  if (in_ECX[0x15d] == 0) {
    if ((!bVar8) && (iVar3 != 1)) {
      return;
    }
    if (in_ECX[0x15f] != 0) {
      return;
    }
    piVar5 = (int *)FUN_00579540();
    if (piVar5 == (int *)0x0) {
      return;
    }
    iVar2 = (**(code **)(*piVar5 + 0x154))();
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_00480340(iVar2);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(iVar2 + 0x10) == 0) {
      return;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 8);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(iVar2 + 8) == 0) {
      return;
    }
    FUN_0089da90();
    fVar9 = (float10)(**(code **)(*in_ECX + 0x288))(0);
    pfVar6 = (float *)FUN_00403c00();
    if (unaff_retaddr < *pfVar6 * (float)fVar9 == (unaff_retaddr == *pfVar6 * (float)fVar9)) {
      return;
    }
    FUN_0066d120(piVar5,1,0x447a0000);
    (**(code **)(*piVar5 + 0x40))(8);
    if (in_ECX[0x15d] == 0) {
      return;
    }
    iVar2 = FUN_004db6b0();
    if (iVar2 == 0) {
      return;
    }
    cVar1 = FUN_004de770(DAT_00b333c4,1);
    if (cVar1 != '\0') {
      return;
    }
    iVar2 = FUN_006ecc80();
    if (iVar2 == 0) {
      return;
    }
    FUN_006ecc80();
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') {
      return;
    }
    fVar9 = (float10)FUN_00470620(piVar5);
    pfVar6 = (float *)FUN_00403c00();
    (**(code **)(*(int *)in_ECX[0x16] + 0x354))(*pfVar6 * (float)fVar9);
    iVar2 = (**(code **)(*piVar5 + 0x170))();
    switch(*(undefined1 *)(iVar2 + 4)) {
    case 0x12:
    case 0x17:
    case 0x18:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
      iVar2 = *in_ECX;
      uVar7 = FUN_004db6b0(0xffffffff);
      (**(code **)(iVar2 + 0x248))(DAT_00b333c4,uVar7);
      return;
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
      iVar2 = *in_ECX;
      uVar7 = FUN_004db6b0();
      uVar7 = (**(code **)(*piVar5 + 0x170))(1,0,uVar7);
      (**(code **)(iVar2 + 0x238))(piVar5,uVar7);
      return;
    case 0x1a:
      goto switchD_006713f1_caseD_1a;
    default:
      return;
    }
  }
LAB_0067122c:
  if (in_ECX[0x15f] != 1) {
    return;
  }
  if ((iVar2 == 0) && (iVar3 != 2)) {
    FUN_0066a670();
    return;
  }
  FUN_0066d930(param_1);
  return;
switchD_006713f1_caseD_1a:
  iVar3 = (**(code **)(*piVar5 + 0x170))();
  iVar2 = *in_ECX;
  if ((*(uint *)(iVar3 + 0x7c) >> 1 & 1) == 0) {
    uVar7 = FUN_004db6b0(0xffffffff);
    (**(code **)(iVar2 + 0x248))(DAT_00b333c4,uVar7);
    return;
  }
  uVar7 = FUN_004db6b0();
  uVar7 = (**(code **)(*piVar5 + 0x170))(1,0,uVar7);
  (**(code **)(iVar2 + 0x238))(piVar5,uVar7);
  return;
}



void FUN_006714e0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined1 local_10 [12];
  
  if (((DAT_00b14f58 != '\0') && (*(char *)(DAT_00b333a0 + 0x51) == '\0')) &&
     (*(char *)(DAT_00b333a0 + 0x52) == '\0')) {
    bVar1 = false;
    if (*(char *)(in_ECX + 0x71e) == '\0') {
      if (*(int *)(in_ECX + 0x730) != 0) {
        iVar3 = in_ECX;
        if (*(int *)(in_ECX + 0xd4) != 0) {
          iVar3 = *(int *)(in_ECX + 0xd4);
        }
        FUN_004a6950(iVar3 + 0x2c);
        uVar5 = (uint)*(ushort *)(*(int *)(in_ECX + 0x730) + 10);
        uVar4 = 0;
        if (uVar5 != 0) {
          do {
            iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x730) + 4) + uVar4 * 4);
            if ((*(uint *)(iVar3 + 8) >> 5 & 1) == 0) {
              piVar6 = *(int **)(iVar3 + 0x1c);
              while ((piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0))))) {
                cVar2 = FUN_004a7330(local_10);
                if (cVar2 != '\0') {
                  bVar1 = true;
                }
                piVar6 = (int *)piVar6[1];
                if (bVar1) goto LAB_006715a8;
              }
            }
            uVar4 = uVar4 + 1;
            if (uVar5 <= uVar4) {
              FUN_0066ff10(0);
              return;
            }
          } while( true );
        }
LAB_006715e7:
        FUN_0066ff10(0);
        return;
      }
      iVar3 = FUN_004d6670();
      if ((iVar3 != 0) && (cVar2 = FUN_004ef160(), cVar2 != '\0')) goto LAB_006715e7;
    }
LAB_006715a8:
    FUN_00664320();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00671620(float param_1)

{
  float fVar1;
  uint3 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  int *in_ECX;
  int *piVar12;
  uint uVar13;
  code *pcVar14;
  undefined4 unaff_ESI;
  float fVar15;
  uint unaff_EDI;
  int *piVar16;
  float *pfVar17;
  bool bVar18;
  bool bVar19;
  float10 fVar20;
  float10 fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uStack_a0;
  uint uStack_9c;
  float fStack_98;
  int iStack_94;
  undefined8 local_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int *piStack_60;
  undefined4 local_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int *piStack_38;
  float afStack_34 [4];
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  
  uVar2 = (uint3)uStack_a0;
  uVar22 = DAT_00b333cc;
  uVar10 = *(undefined4 *)(DAT_00b33398 + 0x20);
  in_ECX[0x1ff] = 0;
  in_ECX[0x200] = 0;
  piVar16 = (int *)0x0;
  local_8c = (double)CONCAT44(uVar22,uVar10);
  local_5c = (int *)0x0;
  uStack_a0 = (uint)(uint3)uStack_a0;
  FUN_00667520();
  iVar6 = FUN_0065a2c0();
  if ((iVar6 == 0) || ((*(uint *)(iVar6 + 500) >> 0x11 & 1) == 0)) {
    *(undefined1 *)((int)in_ECX + 0x115) = 0;
  }
  else if (*(char *)((int)in_ECX + 0x115) == '\0') {
    FUN_006768c0();
    *(undefined1 *)((int)in_ECX + 0x115) = 1;
  }
  fVar20 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x4b0))();
  if (fVar20 <= (float10)0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x354))((float)(float10)0);
  }
  else {
    (**(code **)(*(int *)in_ECX[0x16] + 0x4ac))();
  }
  if ((char)in_ECX[0x1ce] != '\0') {
    fVar20 = (float10)(**(code **)(*in_ECX + 0x1d8))();
    if (fVar20 < (float10)0.0 == (fVar20 == (float10)0.0)) {
      (**(code **)(*in_ECX + 0x1dc))();
    }
    else {
      FUN_006636b0();
      (**(code **)(*(int *)in_ECX[0x16] + 0x1c0))(_DAT_00b378a8);
    }
  }
  if (0.0 < (float)in_ECX[0x186]) {
    fVar15 = (float)in_ECX[0x186] - _DAT_00b33e9c;
  }
  else {
    FUN_0067a230();
    fVar15 = _DAT_00b36ce0;
  }
  in_ECX[0x186] = (int)fVar15;
  uVar10 = DAT_00b37d30;
  iVar6 = FUN_00582160(0,1);
  *(undefined4 *)(iVar6 + 0x10) = uVar10;
  FUN_00582160(0,1);
  FUN_005806d0();
  if (*(char *)((int)in_ECX + 0x71f) != '\0') {
    *(undefined1 *)((int)in_ECX + 0x71f) = 0;
    FUN_0066ff10(1);
  }
  if (in_ECX[0x171] != 0) {
    FUN_004dd260(in_ECX,0,0,1);
    in_ECX[0x171] = 0;
    return;
  }
  if ((char)in_ECX[0x1d2] != '\0') {
    FUN_006643a0();
  }
  if ((char)in_ECX[0x162] != '\0') {
    (**(code **)(*(int *)in_ECX[0x16] + 0x90))();
  }
  iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
  if ((iVar6 == 4) &&
     (piVar16 = (int *)(**(code **)(*in_ECX + 0x380))(), local_5c = piVar16, piVar16 != (int *)0x0))
  {
    piVar12 = (int *)piVar16[0x16];
  }
  else {
    piVar12 = (int *)in_ECX[0x16];
  }
  uVar7 = (**(code **)(*piVar12 + 0x2c0))();
  cVar3 = FUN_005e0550();
  if (((cVar3 == '\0') || (piVar16 != (int *)0x0)) || (cVar3 = FUN_005e05b0(), cVar3 == '\0')) {
    cVar3 = FUN_005e0530();
    if (((cVar3 == '\0') || (piVar16 != (int *)0x0)) || (cVar3 = FUN_005e05b0(), cVar3 == '\0')) {
      if ((((uVar7 & 0x200) != 0) && (piVar16 == (int *)0x0)) &&
         (cVar3 = FUN_005e05b0(), cVar3 != '\0')) {
        if ((float)in_ECX[0x167] <= 1.0) {
          fVar15 = (float)in_ECX[0x167] + _DAT_00b33e9c;
        }
        else {
          (**(code **)(*in_ECX + 0x39c))(0xd,0,0);
          fVar15 = 0.0;
        }
        in_ECX[0x167] = (int)fVar15;
      }
    }
    else if ((float)in_ECX[0x168] <= 1.0) {
      in_ECX[0x168] = (int)(_DAT_00b33e9c + (float)in_ECX[0x168]);
    }
    else {
      (**(code **)(*in_ECX + 0x39c))(0xd,1,0);
      in_ECX[0x168] = 0;
    }
  }
  else if ((DAT_00b3b368 < 3) && ((char)in_ECX[0x16a] != '\0')) {
    if ((float)in_ECX[0x169] <= 1.0) {
      in_ECX[0x169] = (int)(_DAT_00b33e9c + (float)in_ECX[0x169]);
    }
    else {
      (**(code **)(*in_ECX + 0x39c))(0x1f,0,0);
      in_ECX[0x169] = 0;
    }
  }
  iVar6 = FUN_00403190(1);
  iVar8 = FUN_00403190(2);
  iStack_94 = FUN_00403190(3);
  fStack_78 = (float)FUN_00402f50(0,DAT_00b14ee0);
  iVar9 = FUN_009828c0();
  fVar15 = (float)(iVar6 + iVar9);
  fStack_44 = fVar15;
  fStack_78 = (float)FUN_00402f50(0,DAT_00b14ed8);
  iStack_48 = FUN_009828c0();
  iStack_48 = iVar8 + iStack_48;
  if ((char)in_ECX[0x1d2] != '\0') {
    fVar15 = 0.0;
    fStack_44 = 0.0;
    iStack_48 = 0;
    iStack_94 = 0;
  }
  if (DAT_00b14f38 != '\0') {
    iStack_48 = -iStack_48;
  }
  iVar6 = iStack_48;
  fVar1 = (float)iStack_94;
  if (fVar1 != 0.0) {
    if ((DAT_00b3bb04 != '\0') || (uStack_a0 = CONCAT13(1,uVar2), (char)in_ECX[0x162] != '\0')) {
      _DAT_00b3bb24 = _DAT_00b3bb24 - _DAT_00b36b58 * fVar1;
      cVar3 = (**(code **)(*in_ECX + 0x198))(0);
      if (cVar3 == '\0') {
        if (_DAT_00b3bb24 < _DAT_00b36b60) {
          if (DAT_00b3bb04 == '\0') {
            FUN_0066c580(1);
          }
          _DAT_00b3bb24 = _DAT_00b36b60;
        }
      }
      else if (_DAT_00b3bb24 < _DAT_00b36b80) {
        _DAT_00b3bb24 = _DAT_00b36b80;
      }
      if (_DAT_00b36b68 < _DAT_00b3bb24) {
        _DAT_00b3bb24 = _DAT_00b36b68;
      }
    }
    if ((((char)in_ECX[0x162] == '\0') && (fVar1 * _DAT_00b36b58 < 0.0)) &&
       (FUN_0066c580(0), _DAT_00b3bb24 < 50.0)) {
      _DAT_00b3bb24 = 50.0;
    }
  }
  fVar20 = (float10)(**(code **)(*in_ECX + 0x1e0))();
  _DAT_00b3bac8 = (float)fVar20;
  fVar20 = (float10)FUN_004a9720();
  _DAT_00b3bac4 = (float)fVar20;
  if ((DAT_00b3bb04 == '\0') || (iVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x47c))(), iVar8 != 0))
  {
    if ((fVar15 != 0.0) || (local_5c != (int *)0x0)) {
      fVar15 = (float)(int)fStack_44 * _DAT_00b14ee8;
      iVar8 = FUN_005e0dc0();
      if ((((iVar8 == 0) && (iVar8 = FUN_005e0ee0(), iVar8 != 8)) &&
          (*(char *)((int)in_ECX + 0x71d) == '\0')) && ((char)in_ECX[0x1c7] == '\0')) {
        iVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
        if (iVar8 == 0) {
          pfVar11 = (float *)FUN_00403c00();
          fStack_78 = ABS(fVar15);
          _DAT_00b14e5c = fStack_78 / (*pfVar11 * 24.0);
          if (1.5 < _DAT_00b14e5c) {
            _DAT_00b14e5c = 1.5;
          }
          FUN_00659b90(fVar15);
        }
        else if (iVar8 == 4) {
          fStack_78 = (float)in_ECX[0x187] + fVar15;
          in_ECX[0x187] = (int)fStack_78;
          if (-1.5707964 <= fStack_78) {
            if (1.5707964 < fStack_78) {
              iVar8 = 0x3fc90fdb;
              goto LAB_00671d12;
            }
          }
          else {
            iVar8 = -0x4036f025;
LAB_00671d12:
            in_ECX[0x187] = iVar8;
          }
          if (local_5c != (int *)0x0) {
            _DAT_00b14e5c = 1.5;
          }
        }
      }
    }
    if (iVar6 != 0) {
      fStack_78 = (float)iStack_48 * _DAT_00b14ee8;
      FUN_0065abc0(fStack_78);
    }
    cVar3 = FUN_00633250(in_ECX);
    if (cVar3 != '\0') {
      if (in_ECX[0x15d] != 0) {
        FUN_0066a670();
      }
      FUN_0065e900();
      *(bool *)(in_ECX + 0x162) = (char)in_ECX[0x162] == '\0';
      FUN_00603ca0(param_1);
      *(bool *)(in_ECX + 0x162) = (char)in_ECX[0x162] == '\0';
      FUN_00603ca0(param_1);
      FUN_0066b710(0);
      return;
    }
  }
  else {
    _DAT_00b3bb28 = _DAT_00b3bb28 + param_1 * _DAT_00b36b88 * (float)(int)fStack_44 * 0.017453292;
    _DAT_00b3bb20 = (float)iStack_48 * 0.017453292 * _DAT_00b36b90 * param_1 + _DAT_00b3bb20;
  }
  if (((*(char *)((int)in_ECX + 0x71d) != '\0') || ((char)in_ECX[0x1c7] != '\0')) ||
     (cVar3 = (**(code **)(*in_ECX + 0x198))(0), cVar3 != '\0')) {
    if (10.0 < _DAT_00b3bae0) {
      if ((*(char *)((int)in_ECX + 0x71d) != '\0') &&
         (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))(), iVar6 == 4)) {
        pcVar14 = *(code **)(*in_ECX + 0x1bc);
        *(undefined1 *)((int)in_ECX + 0x71d) = 0;
        (*pcVar14)((char)in_ECX[0x1c7] == '\0');
        (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
        _DAT_00b3bae0 = 0.0;
        return;
      }
      cVar3 = (**(code **)(*in_ECX + 0x198))(0);
      if ((cVar3 != '\0') || (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))(), iVar6 == 0)) {
        FUN_005eae70();
        pcVar14 = *(code **)(*in_ECX + 0x1bc);
        *(undefined1 *)(in_ECX + 0x1c7) = 0;
        (*pcVar14)(*(char *)((int)in_ECX + 0x71d) == '\0');
        (**(code **)(*(int *)in_ECX[0x16] + 0x370))();
      }
      _DAT_00b3bae0 = 0.0;
      return;
    }
    if ((char)in_ECX[0x1c7] == '\0') {
      if (*(char *)((int)in_ECX + 0x71d) != '\0') {
        _DAT_00b3bae0 = _DAT_00b3bae0 + _DAT_00b33e9c;
        iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
        if (iVar6 == 0) {
          *(undefined1 *)((int)in_ECX + 0x71d) = 0;
          (**(code **)(*in_ECX + 0x1bc))((char)in_ECX[0x1c7] == '\0');
          (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
          _DAT_00b3bae0 = 0.0;
        }
      }
    }
    else {
      _DAT_00b3bae0 = _DAT_00b3bae0 + _DAT_00b33e9c;
      iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
      if (((iVar6 == 4) || (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))(), iVar6 == 9)) ||
         (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar6 == 0)) {
        pcVar14 = *(code **)(*in_ECX + 0x1bc);
        *(undefined1 *)(in_ECX + 0x1c7) = 0;
        (*pcVar14)(*(char *)((int)in_ECX + 0x71d) == '\0');
        (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
        _DAT_00b3bae0 = 0.0;
        return;
      }
    }
    FUN_00605770(param_1);
    (**(code **)(*(int *)in_ECX[0x16] + 0x2cc))();
    if (_DAT_00b36c90 <= 0.0) {
      iVar6 = FUN_005e0dc0();
      if ((iVar6 == 2) && (DAT_00b3bb07 == '\0')) {
        (**(code **)(*in_ECX + 0x1c8))();
        if (*(int *)(DAT_00b33b00 + 0x1c0) == 0) {
          *(undefined1 *)(DAT_00b33398 + 1) = 1;
        }
        else {
          FUN_00579c10(DAT_00b38c08,&LAB_00663270,1,DAT_00b38c10,DAT_00b38c18,0);
        }
        DAT_00b3bb07 = '\x01';
      }
    }
    else {
      iVar6 = FUN_005e0dc0();
      if ((iVar6 == 2) || (iVar6 = FUN_005e0dc0(), iVar6 == 1)) {
        iVar6 = DAT_00b33ea0;
        if (_DAT_00b15018 < 0.0) {
          pfVar11 = (float *)FUN_00403c00();
          fVar15 = (float)iVar6;
          if (iVar6 < 0) {
            fVar15 = fVar15 + 4.2949673e+09;
          }
          _DAT_00b15018 = fVar15 / 1000.0 + *pfVar11;
        }
        fVar15 = (float)iVar6;
        if (iVar6 < 0) {
          fVar15 = fVar15 + 4.2949673e+09;
        }
        if (_DAT_00b15018 < fVar15 / 1000.0) {
          _DAT_00b15018 = -1.0;
          if (*(int *)(DAT_00b33b00 + 0x1c0) == 0) {
            *(undefined1 *)(DAT_00b33398 + 1) = 1;
          }
          else {
            FUN_005bda90();
            FUN_005aea60(0);
          }
        }
      }
      else {
        _DAT_00b15018 = -1.0;
      }
    }
    FUN_0066b710(0);
    iVar6 = FUN_00403520(0x1b,1);
    if (iVar6 == 0) {
      return;
    }
    cVar3 = FUN_00466b00();
    if (cVar3 == '\0') {
      return;
    }
    _DAT_00b15018 = -1.0;
    return;
  }
  piVar16 = *(int **)(*(int *)(DAT_00b333c4 + 0x58) + 8);
  if (piVar16 != (int *)0x0) {
    (**(code **)(*piVar16 + 0x10))(1);
    *(undefined4 *)(*(int *)(DAT_00b333c4 + 0x58) + 8) = 0;
  }
  iVar6 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x174))();
  if (iVar6 != 0) {
    (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x178))(0);
  }
  if (((char)in_ECX[0x77] != '\0') && (DAT_00b14e88 != '\0')) {
    FUN_005ace20();
    return;
  }
  FUN_006606f0();
  FUN_0065da20();
  iVar6 = FUN_00403520(8,1);
  if ((((iVar6 != 0) && (cVar3 = FUN_005e3350(), cVar3 != '\0')) && ((char)in_ECX[0x170] == '\0'))
     && (iVar6 = FUN_005e0ee0(), iVar6 == -1)) {
    cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x2fc))();
    FUN_005e6d70(cVar3 == '\0');
  }
  iVar6 = FUN_00403520(0xb,1);
  if (iVar6 != 0) {
    *(bool *)((int)in_ECX + 0x58b) = *(char *)((int)in_ECX + 0x58b) == '\0';
  }
  iVar6 = FUN_00403520(0xc,1);
  if (iVar6 != 0) {
    *(bool *)(in_ECX + 0x163) = (char)in_ECX[0x163] == '\0';
  }
  if ((char)in_ECX[0x163] != '\0') {
    iVar6 = FUN_00403520(0,0);
    if (((iVar6 == 0) && (iVar6 = FUN_00403520(1,0), iVar6 == 0)) &&
       (((iVar6 = FUN_00403520(3,0), iVar6 == 0 && (iVar6 = FUN_00403520(2,0), iVar6 == 0)) ||
        (local_5c != (int *)0x0)))) {
      FUN_00403380(0);
    }
    else {
      *(undefined1 *)(in_ECX + 0x163) = 0;
    }
  }
  if (((local_5c == (int *)0x0) && (iVar6 = FUN_00403520(9,1), iVar6 != 0)) &&
     ((cVar3 = (**(code **)(*in_ECX + 0x1a0))(), cVar3 == '\0' &&
      (((cVar3 = (**(code **)(*in_ECX + 0x198))(0), cVar3 == '\0' &&
        (cVar3 = (**(code **)(*in_ECX + 0x19c))(), cVar3 == '\0')) &&
       (iVar6 = FUN_005e0dc0(), iVar6 != 5)))))) {
    FUN_005e0dc0();
  }
  uStack_9c = 0;
  if (*(short *)(local_8c._4_4_ + 0xb6) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(local_8c._4_4_ + 0xb0);
  }
  fStack_64 = (float)in_ECX[0xc];
  piStack_60 = (int *)in_ECX[0xd];
  pfVar11 = (float *)(iVar6 + 0x30);
  pfVar17 = afStack_34;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar17 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar17 = pfVar17 + 1;
  }
  fStack_68 = (float)in_ECX[0xb];
  fStack_54 = 1.0;
  fStack_74 = afStack_34[1];
  fStack_70 = fStack_24;
  fStack_6c = fStack_18;
  fStack_50 = 0.0;
  fStack_4c = 0.0;
  fStack_40 = fStack_68;
  fStack_3c = fStack_64;
  piStack_38 = piStack_60;
  if (((uint)in_ECX[2] >> 4 & 1) == 0) {
    fStack_6c = 0.0;
    FUN_0043f350();
  }
  else {
    fStack_54 = afStack_34[0];
    fStack_50 = afStack_34[3];
    fStack_4c = fStack_1c;
  }
  if (in_ECX[0x15f] == 2) {
    FUN_0066dfd0(param_1);
  }
  FUN_00663740();
  uVar10 = FUN_00402f50(0,DAT_00b14ed0);
  local_8c = (double)CONCAT44(uVar10,(float)local_8c);
  uVar7 = FUN_009828c0();
  uVar10 = FUN_00402f50(0,DAT_00b14ec8);
  local_8c = (double)CONCAT44(uVar10,(float)local_8c);
  fStack_78 = (float)FUN_009828c0();
  uVar13 = (int)uVar7 >> 0x1f;
  if (uVar7 != 0) {
    if ((int)uVar7 < 1) {
      if ((int)uVar7 < 0) {
        uVar10 = 2;
        goto LAB_006720d9;
      }
    }
    else {
      uVar10 = 3;
LAB_006720d9:
      FUN_00403380(uVar10);
    }
    iVar6 = (uVar7 ^ uVar13) - uVar13;
    local_8c = (double)CONCAT44(iVar6,(float)local_8c);
    _DAT_00b14e5c = (float)iVar6 * 0.02;
    if (1.5 < _DAT_00b14e5c) {
      _DAT_00b14e5c = 1.5;
    }
  }
  iVar6 = ((uint)fStack_78 ^ (int)fStack_78 >> 0x1f) - ((int)fStack_78 >> 0x1f);
  iVar8 = (uVar7 ^ uVar13) - uVar13;
  local_8c = (double)CONCAT44(iVar8,(float)local_8c);
  if (iVar6 < iVar8) {
    _DAT_00b14e58 = (float)iVar8 * 0.02;
    if ((int)uVar7 < 0) {
      uStack_9c = 4;
    }
    else {
      uStack_9c = 8;
    }
  }
  else if (fStack_78 != 0.0) {
    if ((int)fStack_78 < 0) {
      uVar10 = 0;
LAB_0067216e:
      FUN_00403380(uVar10);
    }
    else if (0 < (int)fStack_78) {
      uVar10 = 1;
      goto LAB_0067216e;
    }
    _DAT_00b14e58 = (float)iVar6 * 0.02;
  }
  if (1.0 < _DAT_00b14e58) {
    _DAT_00b14e58 = 1.0;
  }
  if ((0x62 < iVar8) || (0x62 < iVar6)) {
    FUN_00403380(10);
  }
  if (*(char *)((int)in_ECX + 0x58b) == '\0') {
    iVar6 = FUN_00403520(10,1);
    if (iVar6 == 0) {
      FUN_00403520(10,0);
    }
  }
  else {
    iVar6 = FUN_00403520(10,1);
    if ((iVar6 == 0) && (iVar6 = FUN_00403520(10,0), iVar6 == 0)) {
      FUN_00403380(10);
    }
  }
  fVar20 = (float10)FUN_005e65b0();
  fVar15 = _DAT_00b14e58 * (float)fVar20;
  fStack_54 = fVar15 * fStack_54;
  fStack_50 = fStack_50 * fVar15;
  fStack_4c = fVar15 * fStack_4c;
  local_8c = (double)CONCAT44(fVar15,(float)local_8c);
  fStack_74 = fVar15 * fStack_74;
  fStack_70 = fStack_70 * fVar15;
  fStack_6c = fVar15 * fStack_6c;
  if ((char)in_ECX[0x1d2] == '\0') {
    iVar6 = FUN_00403520(0,1);
    if ((iVar6 != 0) || (iVar6 = FUN_00403520(0,0), iVar6 != 0)) {
      fStack_68 = fStack_68 + fStack_74;
      fStack_64 = fStack_64 + fStack_70;
      piStack_60 = (int *)((float)piStack_60 + fStack_6c);
    }
    iVar6 = FUN_00403520(1,1);
    if ((iVar6 != 0) || (iVar6 = FUN_00403520(1,0), iVar6 != 0)) {
      fStack_68 = fStack_68 - fStack_74;
      fStack_64 = fStack_64 - fStack_70;
      piStack_60 = (int *)((float)piStack_60 - fStack_6c);
    }
    iVar6 = FUN_00403520(2,1);
    if ((iVar6 != 0) || (iVar6 = FUN_00403520(2,0), iVar6 != 0)) {
      fStack_68 = fStack_68 - fStack_54;
      fStack_64 = fStack_64 - fStack_50;
      piStack_60 = (int *)((float)piStack_60 - fStack_4c);
      uStack_9c = uStack_9c | 4;
    }
    iVar6 = FUN_00403520(3,1);
    if ((iVar6 != 0) || (iVar6 = FUN_00403520(3,0), iVar6 != 0)) {
      fStack_68 = fStack_68 + fStack_54;
      fStack_64 = fStack_64 + fStack_50;
      piStack_60 = (int *)((float)piStack_60 + fStack_4c);
      uStack_9c = uStack_9c | 8;
    }
  }
  piVar16 = local_5c;
  if (local_5c == (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x2c8))();
    cVar3 = (char)(uStack_9c >> 0x18);
  }
  else {
    if ((uStack_9c & 4) == 0) {
      _DAT_00b3bcec = 0.0;
    }
    else {
      _DAT_00b3bcec = _DAT_00b3bcec + param_1 * (float)_DAT_00b37520;
      if ((float)_DAT_00b37518 < _DAT_00b3bcec) {
        _DAT_00b3bcec = (float)_DAT_00b37518;
      }
      fVar15 = _DAT_00b3bcec * -0.017453292 * param_1 * _DAT_00b14e5c;
      local_8c = (double)CONCAT44(fVar15,(float)local_8c);
      FUN_00659b90(fVar15);
    }
    if ((uStack_9c & 8) == 0) {
      _DAT_00b3bce8 = 0.0;
    }
    else {
      _DAT_00b3bce8 = _DAT_00b3bce8 + param_1 * (float)_DAT_00b37520;
      if ((float)_DAT_00b37518 < _DAT_00b3bce8) {
        _DAT_00b3bce8 = (float)_DAT_00b37518;
      }
      fVar15 = _DAT_00b3bce8 * 0.017453292 * param_1 * _DAT_00b14e5c;
      local_8c = (double)CONCAT44(fVar15,(float)local_8c);
      FUN_00659b90(fVar15);
    }
    cVar3 = '\0';
    (**(code **)(*(int *)piVar16[0x16] + 0x2c8))();
    if (((((uStack_a0 & 1) != 0) && ((uStack_a0 & 0x3e) == 0)) &&
        (iVar6 = FUN_00403520(0xd,1), iVar6 != 0)) &&
       ((cVar4 = (**(code **)(*in_ECX + 0x25c))(), cVar4 == '\0' &&
        (iVar6 = FUN_0065a2c0(), (*(uint *)(iVar6 + 500) >> 10 & 1) != 0)))) {
      (**(code **)(*piVar16 + 0x1b8))();
    }
    fVar20 = (float10)FUN_004a9720();
    FUN_0065a650((float)fVar20);
  }
  FUN_0066c650();
  local_5c._0_2_ = CONCAT11((char)in_ECX[0x162],(undefined1)local_5c);
  pcVar14 = *(code **)(*in_ECX + 0x19c);
  *(undefined1 *)(in_ECX + 0x162) = 1;
  cVar4 = (*pcVar14)();
  if (((cVar4 == '\0') && ((char)in_ECX[0x170] == '\0')) &&
     ((cVar4 = (**(code **)(*in_ECX + 0x1a0))(), cVar4 == '\0' &&
      (((iVar6 = FUN_005e0dc0(), iVar6 == 0 && (iVar6 = FUN_005e0ee0(), iVar6 != 8)) &&
       (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))(), iVar6 == 0)))))) {
    if ((in_ECX[0x15f] == 2) || (in_ECX[0x15f] == 3)) {
      DAT_00b3baf4 = 0;
      _DAT_00b3baf8 = 0;
    }
    else {
      cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x2dc))();
      if ((cVar4 == '\0') || ((DAT_00b3bb04 != '\0' && (DAT_00b3bb05 == '\0')))) {
        DAT_00b3baf4 = 0;
        _DAT_00b3baf8 = 0;
      }
      else {
        FUN_0065e960();
      }
      iVar6 = FUN_00403520(6,1);
      if (((iVar6 == 0) && (iVar6 = FUN_00403520(6,0), iVar6 == 0)) ||
         (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar6 == 6)) {
        iVar6 = FUN_00403520(6,2);
        if ((iVar6 != 0) || (iVar6 = FUN_00403520(6,0), iVar6 == 0)) {
          DAT_00b3baea = '\0';
          iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))();
          if (iVar6 == 6) {
            uVar10 = 0;
            goto LAB_00672815;
          }
        }
      }
      else if ((DAT_00b1501c == '\0') || (iVar6 = FUN_005e0ee0(), iVar6 != 5)) {
        DAT_00b1501c = '\x01';
        if ((DAT_00b3baea == '\0') && ((DAT_00b3bb04 == '\0' || (DAT_00b3bb05 != '\0')))) {
          uVar10 = 1;
LAB_00672815:
          FUN_005f4ae0(uVar10);
        }
      }
      else {
        DAT_00b3baea = '\x01';
        local_8c = (double)(float)in_ECX[0x166];
        DAT_00b1501c = '\0';
        pfVar11 = (float *)FUN_00403c00();
        if (*pfVar11 <= (float)local_8c) {
          pfVar11 = (float *)FUN_00403c00();
          if (*pfVar11 < _DAT_00b3bafc) {
            pfVar11 = (float *)FUN_00403c00();
            _DAT_00b3bafc = *pfVar11;
          }
        }
        else {
          pfVar11 = (float *)FUN_00403c00();
          local_8c = (double)*pfVar11;
          pfVar11 = (float *)FUN_00403c00();
          local_8c = (double)CONCAT44(local_8c._4_4_,ABS((float)local_8c - *pfVar11));
          pfVar11 = (float *)FUN_00403c00();
          local_8c = (double)((*pfVar11 - (float)in_ECX[0x166]) / (float)local_8c);
          pfVar11 = (float *)FUN_00403c00();
          local_8c = (double)(*pfVar11 * (float)local_8c);
          pfVar11 = (float *)FUN_00403c00();
          _DAT_00b3bafc = *pfVar11 + (float)local_8c;
        }
      }
      iVar6 = FUN_0065d4a0();
      if ((iVar6 != 0) && (cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x2dc))(), cVar4 != '\0')) {
        iVar6 = FUN_00403520(7,1);
        if (((iVar6 == 0) && (iVar6 = FUN_00403520(7,0), iVar6 == 0)) ||
           ((((iVar6 = FUN_005e0ee0(), iVar6 == 2 || (iVar6 = FUN_005e0ee0(), iVar6 == 4)) ||
             (iVar6 = FUN_005e0ee0(), iVar6 == 5)) || (iVar6 = FUN_005e0ee0(), iVar6 == 3)))) {
          DAT_00b3bce4 = '\0';
        }
        else if (in_ECX[0x18a] == 0) {
          piVar16 = piStack_60;
          if (DAT_00b3bce4 == '\0') {
            iVar6 = in_ECX[0x17];
            uVar10 = FUN_0065d4a0(0,0,0);
            cVar4 = (**(code **)(iVar6 + 0x1c))(uVar10);
            uVar23 = 0;
            uVar22 = 0;
            uVar10 = FUN_0065d4a0(0,0);
            FUN_00699190(uVar10,uVar22,uVar23);
            piVar16 = piStack_60;
            if (cVar4 == '\0') {
              DAT_00b3bce4 = '\x01';
            }
          }
        }
        else {
          (**(code **)(*in_ECX + 0x2d0))(in_ECX[0x18a],0);
          piVar16 = piStack_60;
        }
      }
    }
    if (((piVar16 == (int *)0x0) && (iVar6 = FUN_00403520(0xd,1), iVar6 != 0)) &&
       (cVar4 = (**(code **)(*in_ECX + 0x25c))(), cVar4 == '\0')) {
      uVar10 = 3;
      (**(code **)(*in_ECX + 0x164))(3);
      uVar10 = FUN_00470720(uVar10);
      cVar4 = FUN_0051acc0(uVar10);
      if (((cVar4 == '\0') && (iVar6 = FUN_005e0ee0(), iVar6 != 9)) &&
         ((cVar4 = FUN_005e5640(), cVar4 == '\0' || (iVar6 = FUN_005f23b0(0x1a), 0 < iVar6)))) {
        cVar4 = FUN_005ec180();
        if (cVar4 == '\0') {
          cVar4 = FUN_005e0530();
          bVar18 = true;
          if (cVar4 != '\0') goto LAB_006729d5;
        }
        else {
LAB_006729d5:
          bVar18 = false;
        }
        bVar19 = false;
        iVar6 = FUN_00403520(6,0);
        local_5c = (int *)CONCAT13(iVar6 != 0,(undefined3)local_5c);
        uVar5 = FUN_005e5670();
        local_5c._0_3_ = CONCAT12(uVar5,(undefined2)local_5c);
        if (local_5c._3_1_ == '\0') {
          iVar6 = FUN_0065a2c0();
          if ((*(uint *)(iVar6 + 500) >> 10 & 1) != 0) {
            iVar6 = (**(code **)(*in_ECX + 0x1b8))();
LAB_00672a99:
            bVar19 = iVar6 == 0;
LAB_00672a9b:
            bVar19 = !bVar19;
          }
        }
        else {
          iVar6 = FUN_00579540();
          if (((iVar6 == 0) && (iVar6 = FUN_005f23b0(0x1a), 1 < iVar6)) &&
             ((ushort)((ushort)uStack_a0 | 0xf) != 0)) {
            FUN_0065a2c0();
            iVar6 = FUN_0088d370();
            if (iVar6 == 0) {
              iVar6 = FUN_005f5050(uStack_a0);
              bVar19 = iVar6 == 0xff;
              goto LAB_00672a9b;
            }
          }
          else if ((local_5c._2_1_ == '\0') &&
                  (iVar6 = FUN_0065a2c0(), (*(uint *)(iVar6 + 500) >> 10 & 1) != 0)) {
            iVar6 = (**(code **)(*in_ECX + 0x1b8))();
            goto LAB_00672a99;
          }
        }
        FUN_0066a670();
        if (bVar18) {
          if (!bVar19) goto LAB_00672b94;
          iVar6 = FUN_0065a2c0();
          if ((*(uint *)(iVar6 + 500) >> 10 & 1) != 0) {
            (**(code **)(*in_ECX + 0x39c))(0x1a,0,0);
          }
        }
        if (bVar19) {
          iVar6 = (**(code **)(*in_ECX + 0x284))(0xb);
          local_8c = (double)iVar6;
          fVar21 = (float10)FUN_005e0d20();
          fVar20 = (float10)local_8c;
          local_8c = (double)CONCAT44(local_8c._4_4_,(float)(fVar20 / fVar21));
          fVar20 = (float10)FUN_00547f60((float)(fVar20 / fVar21));
          fStack_98 = (float)fVar20;
          iVar6 = FUN_005f23b0(0x1a);
          if (2 < iVar6) {
            pfVar11 = (float *)FUN_00403c00();
            fStack_98 = fStack_98 * *pfVar11;
          }
          iVar6 = FUN_0065a2c0();
          if (((*(uint *)(iVar6 + 500) >> 10 & 1) != 0) && (0.0 < fStack_98)) {
            FUN_005e07d0(-fStack_98);
            FUN_005c1f70();
            goto LAB_00672bd6;
          }
        }
      }
    }
LAB_00672b94:
    FUN_005c1f70();
  }
  else {
    (**(code **)(*(int *)in_ECX[0x16] + 0x2c4))(0x33f,0);
    iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
    if (iVar6 == 4) {
      FUN_005c1f70();
    }
    else if (DAT_00b3b43d != '\0') {
      FUN_005c1000();
    }
  }
LAB_00672bd6:
  iVar6 = FUN_00403520(0x10,1);
  if ((iVar6 != 0) && ((char)in_ECX[0x170] == '\0')) {
    uVar10 = DAT_00b38ad0;
    if (in_ECX[0x182] == 0) {
      cVar4 = FUN_006605a0(0);
      if (cVar4 != '\0') {
        FUN_0057acc0(DAT_00b38ae0,0,1,0x40000000);
        goto LAB_00672d94;
      }
      cVar4 = (**(code **)(*in_ECX + 0x354))();
      uVar10 = DAT_00b38ae8;
      if ((cVar4 == '\0') && (cVar4 = FUN_0065d9e0(), uVar10 = DAT_00b38ad8, cVar4 == '\0')) {
        uVar23 = 0x3f600000;
        uVar10 = FUN_006ecc80(0x3f600000);
        uVar22 = (**(code **)(*in_ECX + 0x174))(uVar10);
        cVar4 = FUN_005e06c0(uVar22,uVar10,uVar23);
        uVar10 = DAT_00b38af0;
        if (cVar4 == '\0') {
          uVar10 = FUN_004d8b90();
          cVar4 = FUN_006773b0(uVar10);
          if (cVar4 != '\0') {
            FUN_0057acc0(DAT_00b38af8,0,1,0x40000000);
            goto LAB_00672d94;
          }
          FUN_0065a2c0();
          iVar6 = FUN_0088d370();
          uVar10 = DAT_00b38b00;
          if (iVar6 != 1) {
            FUN_0065a2c0();
            iVar6 = FUN_0088d370();
            uVar10 = DAT_00b38b00;
            if (iVar6 != 2) {
              FUN_006ecc80();
              cVar4 = FUN_004ca6a0();
              uVar10 = DAT_00b38b08;
              if (cVar4 == '\0') {
                FUN_00676ee0();
                FUN_0057b420(0);
                goto LAB_00672d94;
              }
            }
          }
        }
      }
    }
    FUN_00579c10(uVar10,0,1,DAT_00b38cf0,0);
  }
LAB_00672d94:
  iVar6 = (**(code **)(*in_ECX + 0x18c))();
  if ((iVar6 == 4) && (piVar16 != (int *)0x0)) {
    iVar6 = (**(code **)(*in_ECX + 0x164))();
    iVar8 = (**(code **)(*piStack_60 + 0x164))();
    if ((iVar8 != 0) && (iVar6 != 0)) {
      *(undefined4 *)(iVar8 + 0x94) = *(undefined4 *)(iVar6 + 0x94);
    }
    (**(code **)(*piStack_60 + 0x228))(param_1);
  }
  *(undefined1 *)(in_ECX + 0x162) = 1;
  FUN_005fcab0(_DAT_00b14e58,_DAT_00b14e5c);
  *(undefined1 *)(in_ECX + 0x162) = local_5c._1_1_;
  if ((char)in_ECX[0x165] != '\0') {
    FUN_0065f770();
  }
  if ((DAT_00b33a34 == '\0') && (DAT_00b14f40 == '\0')) {
    FUN_0046a9c0(0);
  }
  else {
    if (((uint)in_ECX[2] >> 4 & 1) == 0) {
      iVar6 = FUN_0065a2c0();
      if ((iVar6 != 0) && (FUN_00452a10(&fStack_6c), *(int *)(iVar6 + 8) != 0)) {
        FUN_008ac0b0(&DAT_00ba7a40);
      }
      FUN_0046a9c0(1);
    }
    local_8c = (double)CONCAT44(local_8c._4_4_,fStack_64 - fStack_3c);
    fStack_84 = (fStack_64 - fStack_3c) * param_1;
    fStack_78 = fStack_44 + 0.0;
    fStack_74 = fStack_40 + 0.0;
    fStack_70 = fStack_3c + fStack_84;
    (**(code **)(*in_ECX + 0x1cc))(&fStack_78);
  }
  FUN_0060d0a0();
  (**(code **)(*(int *)in_ECX[0x16] + 0x2cc))();
  FUN_006714e0();
  if (((iStack_58 != 0) || (local_5c != (int *)0x0)) || ((unaff_EDI & 0xf) != 0)) {
    cVar3 = '\x01';
  }
  iVar6 = FUN_00403520(0x1a,1);
  if (iVar6 != 0) {
    FUN_00466ad0();
  }
  iVar6 = FUN_00403520(0x1b,1);
  if (iVar6 != 0) {
    FUN_00466b00();
  }
  iVar6 = FUN_00403520(0xe,1);
  if ((iVar6 == 0) && (iVar6 = FUN_00403520(0xe,0), iVar6 == 0)) {
    iVar6 = FUN_00403520(0xe,2);
    if ((iVar6 != 0) || ((DAT_00b3bb04 != '\0' && (DAT_00b3bb05 == '\0')))) {
      pfVar11 = (float *)FUN_00403c00();
      if (*pfVar11 <= _DAT_00b3bce0) {
        if (DAT_00b3bb04 != '\0') {
          DAT_00b14e4d = 1;
          DAT_00b3bb04 = '\0';
          FUN_00664f70((char)in_ECX[0x162] == '\0');
        }
        _DAT_00b3bce0 = 0.0;
        cVar3 = '\x01';
      }
      else {
        *(byte *)(in_ECX + 0x162) = *(byte *)(in_ECX + 0x162) ^ 1;
        DAT_00b14e4d = 1;
        FUN_00664f70((char)in_ECX[0x162] == '\0');
        _DAT_00b3bce0 = 0.0;
        cVar3 = '\x01';
      }
    }
  }
  else {
    cVar4 = FUN_00578f60();
    if (cVar4 == '\0') {
      cVar3 = '\x01';
      pfVar11 = (float *)FUN_00403c00();
      if ((*pfVar11 < _DAT_00b3bce0 == (*pfVar11 == _DAT_00b3bce0)) || (DAT_00b3bb04 != '\0')) {
        _DAT_00b3bce0 = _DAT_00b3bce0 + param_1;
      }
      else {
        DAT_00b3bb04 = '\x01';
        DAT_00b14e4d = 1;
        FUN_00664f70(0);
      }
    }
  }
  iVar6 = FUN_00403520(5,1);
  if ((((iVar6 != 0) && (cVar4 = FUN_00578f60(), cVar4 == '\0')) && ((char)in_ECX[0x170] == '\0'))
     && ((cVar4 = (**(code **)(*in_ECX + 0x1a0))(), cVar4 == '\0' &&
         ((char)((uint)unaff_ESI >> 0x18) == '\0')))) {
    piVar16 = (int *)FUN_00579540();
    iVar6 = (**(code **)(*in_ECX + 0x284))(0x2f);
    if (0 < iVar6) {
      FUN_006a24b0(0x49564e49,0);
    }
    bVar18 = false;
    if (piVar16 == (int *)0x0) {
LAB_0067316f:
      FUN_005a4980(0,0,0);
      if (piVar16 != (int *)0x0) {
        cVar3 = FUN_004dd260(in_ECX,0,0,1);
        if (cVar3 != '\0') goto LAB_00673226;
        iVar6 = (**(code **)(*in_ECX + 0x380))();
        if ((iVar6 != 0) &&
           ((iVar6 = FUN_004d7630(), iVar6 != 0 ||
            (iVar6 = (**(code **)(*piVar16 + 0x170))(), *(char *)(iVar6 + 4) == '\x12')))) {
          uVar23 = 1;
          uVar22 = 0;
          uVar10 = 0;
          piVar16 = in_ECX;
          (**(code **)(*in_ECX + 0x380))();
          FUN_004dd260(piVar16,uVar10,uVar22,uVar23);
        }
      }
      iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x378))();
      if (iVar6 == 0) {
        iVar6 = (**(code **)(*in_ECX + 0x380))();
        if (iVar6 == 0) goto LAB_00673226;
        pcVar14 = *(code **)(*in_ECX + 0x380);
      }
      else {
        pcVar14 = *(code **)(*(int *)in_ECX[0x16] + 0x378);
      }
      uVar23 = 1;
      uVar22 = 0;
      uVar10 = 0;
      piVar16 = in_ECX;
      (*pcVar14)();
      FUN_004dd260(piVar16,uVar10,uVar22,uVar23);
    }
    else {
      cVar3 = (**(code **)(*piVar16 + 0xe8))();
      if (((cVar3 != '\0') &&
          (iVar6 = FUN_009832e6(piVar16,0,&PTR_PTR_00b03054,&PTR_PTR_00b05ad0,0), iVar6 != 0)) &&
         (*(int *)(iVar6 + 0x60) == 0)) {
        bVar18 = true;
      }
      cVar3 = (**(code **)(*piVar16 + 400))();
      if (cVar3 == '\0') {
LAB_00673164:
        if (!bVar18) goto LAB_0067316f;
      }
      else {
        piVar12 = (int *)piVar16[0x16];
        iVar6 = (**(code **)(*piVar12 + 0x47c))();
        if ((iVar6 != 5) && (iVar6 = (**(code **)(*piVar12 + 0x47c))(), iVar6 != 6))
        goto LAB_00673164;
      }
    }
LAB_00673226:
    cVar3 = '\x01';
  }
  if (DAT_00b3bb05 == '\0') {
    if (DAT_00b3bb04 == '\0') {
      if (cVar3 == '\0') {
        _DAT_00b3bb08 = _DAT_00b3bb08 + param_1;
      }
      else {
        _DAT_00b3bb08 = 0.0;
      }
      pfVar11 = (float *)FUN_00403c00();
      if (*pfVar11 < _DAT_00b3bb08) {
        fVar20 = (float10)0;
        _DAT_00b3bb34 = (float)fVar20;
        if ((char)in_ECX[0x162] != '\0') {
          fVar20 = (float10)FUN_004a9720();
        }
        _DAT_00b3bb2c = (float)fVar20;
        DAT_00b14e4d = 1;
        DAT_00b3bb05 = '\x01';
        DAT_00b3bb04 = '\x01';
        if ((char)in_ECX[0x162] == '\0') {
          FUN_00664f70(0);
        }
      }
    }
  }
  else if (cVar3 == '\0') {
    pfVar11 = (float *)FUN_00403c00();
    _DAT_00b3bb34 = _DAT_00b3bb34 - *pfVar11 * 0.017453292 * param_1;
    pfVar11 = (float *)FUN_00403c00();
    _DAT_00b3bcdc = *pfVar11 * 0.017453292 * param_1 + _DAT_00b3bcdc;
    pfVar11 = (float *)FUN_00403c00();
    fVar20 = (float10)FUN_00986300();
    _DAT_00b3bb2c = (float)fVar20 * *pfVar11 * 0.017453292;
    if (6.2831855 < _DAT_00b3bcdc) {
      _DAT_00b3bcdc = _DAT_00b3bcdc - 6.2831855;
    }
  }
  else {
    _DAT_00b3bb08 = 0.0;
    DAT_00b3bb05 = '\0';
    DAT_00b3bb04 = '\0';
    FUN_00664f70((char)in_ECX[0x162] == '\0');
  }
  FUN_00671170(param_1);
  if ((DAT_00b3bb1c != 0) &&
     (uVar7 = DAT_00b3bcd8 + 1, bVar18 = DAT_00b3bcd8 < 0x14, DAT_00b3bcd8 = uVar7, bVar18)) {
    fStack_80 = fStack_74 + 128.0;
    fStack_84 = fStack_78 + 64.0;
    local_8c = (double)CONCAT44(fStack_7c + 64.0,(float)local_8c);
    FUN_004d69a0((int)&local_8c + 4);
    FUN_004d9960(&DAT_00b3f9a8);
  }
  if ((((DAT_00b3bb04 == '\0') && ((char)in_ECX[0x162] == '\0')) && (DAT_00b3bb05 == '\0')) &&
     (cVar3 = FUN_00578f60(), cVar3 == '\0')) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  FUN_00578cf0(uVar10);
  cVar3 = (**(code **)(*in_ECX + 0x198))(0);
  if ((cVar3 == '\0') && (cVar3 = (**(code **)(*in_ECX + 0x1f8))(), cVar3 == '\0')) {
    iVar6 = *in_ECX;
    fVar20 = (float10)FUN_00673b00();
    (**(code **)(iVar6 + 0x368))((float)fVar20);
  }
  iVar8 = FUN_004d8370();
  iVar6 = in_ECX[0x173];
  *(undefined4 *)(iVar6 + 0xbc) = *(undefined4 *)(iVar8 + 0xbc);
  *(undefined4 *)(iVar6 + 0xc0) = *(undefined4 *)(iVar8 + 0xc0);
  FUN_00666670(param_1);
  *(bool *)(in_ECX + 0x162) = (char)in_ECX[0x162] == '\0';
  FUN_00603ca0(param_1);
  *(bool *)(in_ECX + 0x162) = (char)in_ECX[0x162] == '\0';
  FUN_00603ca0(param_1);
  if ((char)in_ECX[0x1d2] == '\0') {
    FUN_0066b710(0);
  }
  iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x2e4))();
  if ((iVar6 != 0) || (cVar3 = (**(code **)(*in_ECX + 0x1a0))(), cVar3 != '\0')) {
    if ((char)in_ECX[0x162] != '\0') goto LAB_0067355c;
    FUN_0066c600();
  }
  if (((char)in_ECX[0x162] == '\0') && (cVar3 = (**(code **)(*in_ECX + 0x198))(0), cVar3 != '\0')) {
    FUN_0066c580(0);
  }
LAB_0067355c:
  FUN_004d5370();
  if ((DAT_00b3bcd4 == 0) || (iVar6 = FUN_006ecc80(), DAT_00b3bcd4 != iVar6)) {
    DAT_00b3bcd4 = FUN_006ecc80();
    uVar10 = FUN_006ecc80();
    cVar3 = FUN_0043e000(uVar10);
    if (cVar3 != '\0') {
      FUN_00440c40();
      FUN_0043df10();
      FUN_00434020(1);
      return;
    }
  }
  return;
}



undefined4 FUN_00673980(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  switch(param_1) {
  case 0:
  case 7:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1d:
  case 0x1f:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
    uVar1 = 2;
    break;
  case 1:
  case 2:
  case 3:
  case 6:
  case 9:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x17:
    return 3;
  case 4:
  case 5:
  case 10:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
  case 0x20:
    return 4;
  case 8:
  case 0xb:
  case 0x1b:
  case 0x21:
    return 5;
  }
  return uVar1;
}



int FUN_00673a50(undefined4 param_1)

{
  int in_ECX;
  
  switch(param_1) {
  case 0:
    return in_ECX + 0x68;
  case 1:
    break;
  case 2:
    return in_ECX + 0xc;
  case 3:
    return in_ECX + 0x18;
  default:
    in_ECX = 0;
  }
  return in_ECX;
}



void FUN_00673a90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int in_ECX;
  
  switch(param_2) {
  case 0:
    in_ECX = in_ECX + 0x68;
    break;
  case 1:
    break;
  case 2:
    in_ECX = in_ECX + 0xc;
    break;
  case 3:
    in_ECX = in_ECX + 0x18;
    break;
  default:
    in_ECX = 0;
  }
  iVar1 = FUN_00659a00();
  if ((iVar1 == param_2) && (in_ECX != 0)) {
    FUN_0067b260(param_1,param_3,param_4,param_5);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00673b00(void)

{
  return (float10)_DAT_00b3bcf0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00673b10(float param_1)

{
  int iVar1;
  
  _DAT_00b3bcf0 = param_1;
  if (100000.0 < param_1) {
    _DAT_00b3bcf0 = 0.0;
  }
  iVar1 = __isnan((double)_DAT_00b3bcf0);
  if ((iVar1 == 0) && (iVar1 = FUN_00983ffd((double)_DAT_00b3bcf0), iVar1 != 0)) {
    return;
  }
  _DAT_00b3bcf0 = 0.0;
  return;
}



undefined4 FUN_00673b70(void)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_004d7e90(DAT_00b333c4,0);
  fVar2 = (float10)FUN_004d7e90(DAT_00b333c4,0);
  if ((float)fVar1 < (float)fVar2) {
    return 0xffffffff;
  }
  if ((float)fVar2 < (float)fVar1) {
    return 1;
  }
  return 0;
}



void FUN_00673bd0(undefined4 param_1)

{
  int in_ECX;
  
  switch(param_1) {
  case 0:
    in_ECX = in_ECX + 0x68;
    break;
  case 1:
    break;
  case 2:
    in_ECX = in_ECX + 0xc;
    break;
  case 3:
    in_ECX = in_ECX + 0x18;
    break;
  default:
    goto switchD_00673bd9_default;
  }
  if (in_ECX != 0) {
    FUN_0067b430();
  }
switchD_00673bd9_default:
  return;
}



void FUN_00673c10(float param_1)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  float10 fVar11;
  
  piVar5 = (int *)FUN_007616d0();
  iVar7 = *piVar5;
  piVar6 = (int *)FUN_00401f00(8);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    *piVar6 = 0;
    piVar6[1] = 0;
  }
  if (iVar7 != 0) {
    bVar3 = true;
    do {
      piVar10 = (int *)piVar5[1];
      if ((piVar10 == (int *)0x0) && (*piVar5 == 0)) break;
      piVar5 = (int *)*piVar5;
      if ((piVar5 != (int *)0x0) && (uVar2 = piVar5[2], (uVar2 >> 0x15 & 1) == 0)) {
        if ((((uVar2 >> 0xb & 1) == 0) && ((uVar2 >> 5 & 1) == 0)) &&
           (iVar7 = FUN_00659a00(), iVar7 == 3)) {
          cVar4 = (**(code **)(*piVar5 + 0x1f0))();
          if ((cVar4 == '\0') &&
             ((cVar4 = (**(code **)(*piVar5 + 400))(), cVar4 == '\0' ||
              (cVar4 = (**(code **)(*piVar5 + 0x334))(1), cVar4 == '\0')))) {
            (**(code **)(*(int *)piVar5[0x16] + 0x20))();
          }
          else {
            fVar11 = (float10)FUN_006599b0();
            fVar1 = (float)fVar11;
            fVar11 = (float10)FUN_00402bd0();
            if (fVar1 == -1.0) {
              FUN_00659a20();
            }
            else if (((1.0 <= (float)fVar11 - fVar1) || ((float)fVar11 < fVar1)) || (param_1 != 0.0)
                    ) {
              (**(code **)(*piVar5 + 0x1c0))(param_1);
              cVar4 = FUN_004f9fa0();
              if (cVar4 != '\0') {
                FUN_004d7190();
              }
              cVar4 = (**(code **)(*piVar5 + 400))();
              if ((cVar4 != '\0') && (iVar7 = FUN_005e0dc0(), iVar7 == 1)) {
                FUN_0067b320(piVar5,0);
                FUN_0067b260(piVar5,1,0,0);
                piVar10 = (int *)0x0;
                bVar3 = false;
              }
              iVar7 = FUN_00659a00();
              if (iVar7 != 3) {
                piVar10 = (int *)0x0;
              }
            }
          }
        }
        else {
          if (*piVar6 != 0) {
            piVar8 = (int *)FUN_00401f00(8);
            if (piVar8 == (int *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              *piVar8 = *piVar6;
              piVar8[1] = 0;
            }
            piVar8[1] = piVar6[1];
            piVar6[1] = (int)piVar8;
          }
          *piVar6 = (int)piVar5;
        }
        if (bVar3) {
          iVar7 = FUN_007616d0();
          if ((iVar7 == 0) ||
             ((((piVar8 = (int *)FUN_007616d0(), piVar8[1] != 0 || (*piVar8 != 0)) &&
               (puVar9 = (undefined4 *)FUN_007616d0(), (int *)*puVar9 == piVar5)) &&
              (iVar7 = FUN_007616d0(), *(int **)(iVar7 + 4) == piVar10)))) {
            bVar3 = false;
          }
          else {
            piVar10 = (int *)FUN_007616d0();
          }
        }
      }
      piVar5 = piVar10;
    } while (piVar10 != (int *)0x0);
    FUN_007616d0();
    for (piVar5 = piVar6; (piVar5 != (int *)0x0 && (*piVar5 != 0)); piVar5 = (int *)piVar5[1]) {
      FUN_0067b320(*piVar5,0);
    }
    FUN_004526e0();
    FUN_00401f20(piVar6);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00673e90(float param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  float10 fVar9;
  int *local_10;
  
  piVar4 = (int *)FUN_007616d0();
  iVar5 = *piVar4;
  local_10 = (int *)FUN_00401f00(8);
  if (local_10 == (int *)0x0) {
    local_10 = (int *)0x0;
  }
  else {
    *local_10 = 0;
    local_10[1] = 0;
  }
  if (iVar5 == 0) {
    FUN_00401f20(local_10);
    return;
  }
  _DAT_00b3bcf4 = 0x83;
  bVar2 = true;
  do {
    piVar8 = (int *)piVar4[1];
    if ((piVar8 == (int *)0x0) && (*piVar4 == 0)) break;
    piVar4 = (int *)*piVar4;
    if ((piVar4 != (int *)0x0) && (((uint)piVar4[2] >> 0x15 & 1) == 0)) {
      cVar3 = (**(code **)(*piVar4 + 400))();
      piVar6 = (int *)0x0;
      if (cVar3 != '\0') {
        piVar6 = piVar4;
      }
      if (((((uint)piVar4[2] >> 0xb & 1) == 0) && (((uint)piVar4[2] >> 5 & 1) == 0)) &&
         (iVar5 = FUN_00659a00(), iVar5 == 2)) {
        cVar3 = (**(code **)(*piVar4 + 0x1f0))();
        if (((cVar3 == '\0') && (piVar6 != (int *)0x0)) &&
           (cVar3 = (**(code **)(*piVar6 + 0x334))(1), cVar3 == '\0')) {
          _DAT_00b3bcf4 = 0x85;
          (**(code **)(*(int *)piVar4[0x16] + 0x20))();
        }
        else {
          _DAT_00b3bcf4 = 0x86;
          fVar9 = (float10)FUN_006599b0();
          fVar1 = (float)fVar9;
          fVar9 = (float10)FUN_00402bd0();
          if (fVar1 == -1.0) {
            FUN_00659a20();
          }
          else {
            if (((0.3 <= (float)fVar9 - fVar1) || ((float)fVar9 < fVar1)) || (param_1 != 0.0)) {
              _DAT_00b3bcf4 = 0x87;
              fVar9 = (float10)(**(code **)(*(int *)piVar4[0x16] + 0x168))();
              if (0.0 < (float)fVar9) {
                (**(code **)(*(int *)piVar4[0x16] + 0x164))((float)fVar9 - _DAT_00b33e9c);
                _DAT_00b3bcf4 = 0x1f9;
                goto LAB_00674154;
              }
              (**(code **)(*piVar4 + 0x1c0))(param_1);
              _DAT_00b3bcf4 = 0x88;
              cVar3 = FUN_004f9fa0();
              if (cVar3 != '\0') {
                FUN_004d7190();
              }
              _DAT_00b3bcf4 = 0x89;
              cVar3 = (**(code **)(*piVar4 + 400))();
              if ((cVar3 != '\0') && (iVar5 = FUN_005e0dc0(), iVar5 == 1)) {
                _DAT_00b3bcf4 = 0x8a;
                FUN_0067b320(piVar4,0);
                FUN_0067b260(piVar4,1,0,0);
                piVar8 = (int *)0x0;
                bVar2 = false;
              }
              iVar5 = FUN_00659a00();
              if (iVar5 != 2) {
                piVar8 = (int *)0x0;
              }
            }
            _DAT_00b3bcf4 = 0x1f9;
          }
        }
      }
      else {
        _DAT_00b3bcf4 = 0x84;
        if (*local_10 != 0) {
          piVar6 = (int *)FUN_00401f00(8);
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            *piVar6 = *local_10;
            piVar6[1] = 0;
          }
          piVar6[1] = local_10[1];
          local_10[1] = (int)piVar6;
        }
        *local_10 = (int)piVar4;
      }
LAB_00674154:
      if (bVar2) {
        iVar5 = FUN_007616d0();
        if ((iVar5 == 0) ||
           ((((piVar6 = (int *)FUN_007616d0(), piVar6[1] != 0 || (*piVar6 != 0)) &&
             (puVar7 = (undefined4 *)FUN_007616d0(), (int *)*puVar7 == piVar4)) &&
            (iVar5 = FUN_007616d0(), *(int **)(iVar5 + 4) == piVar8)))) {
          bVar2 = false;
        }
        else {
          piVar8 = (int *)FUN_007616d0();
        }
      }
    }
    piVar4 = piVar8;
  } while (piVar8 != (int *)0x0);
  FUN_007616d0();
  for (piVar4 = local_10; (piVar4 != (int *)0x0 && (*piVar4 != 0)); piVar4 = (int *)piVar4[1]) {
    FUN_0067b320(*piVar4,0);
  }
  FUN_004526e0();
  FUN_00401f20(local_10);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00674200(float param_1)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  float10 fVar11;
  int *local_c;
  
  piVar5 = (int *)FUN_007616d0();
  bVar3 = true;
  if (*piVar5 != 0) {
    piVar6 = (int *)FUN_00401f00(8);
    if (piVar6 == (int *)0x0) {
      local_c = (int *)0x0;
      piVar6 = (int *)0x0;
    }
    else {
      *piVar6 = 0;
      piVar6[1] = 0;
      local_c = piVar6;
    }
    do {
      piVar10 = (int *)piVar5[1];
      if ((piVar10 == (int *)0x0) && (*piVar5 == 0)) break;
      piVar5 = (int *)*piVar5;
      if ((piVar5 != (int *)0x0) && (uVar2 = piVar5[2], (uVar2 >> 0x15 & 1) == 0)) {
        if ((((uVar2 >> 0xb & 1) == 0) && ((uVar2 >> 5 & 1) == 0)) &&
           (iVar7 = FUN_00659a00(), iVar7 == 1)) {
          fVar11 = (float10)FUN_006599b0();
          fVar1 = (float)fVar11;
          fVar11 = (float10)FUN_00402bd0();
          if (fVar1 == -1.0) {
            FUN_00659a20();
          }
          else {
            cVar4 = (**(code **)(*piVar5 + 400))();
            piVar8 = (int *)0x0;
            if (cVar4 != '\0') {
              piVar8 = piVar5;
            }
            piVar6 = local_c;
            if (((0.15 <= (float)fVar11 - fVar1) || ((float)fVar11 < fVar1)) || (param_1 != 0.0)) {
              fVar11 = (float10)(**(code **)(*(int *)piVar5[0x16] + 0x168))();
              if ((float)fVar11 <= 0.0) {
                if (((piVar8 != (int *)0x0) && (iVar7 = FUN_0065a2c0(), iVar7 == 0)) &&
                   (iVar7 = (**(code **)(*piVar8 + 0x154))(), iVar7 != 0)) {
                  (**(code **)(*piVar8 + 0x148))();
                }
                (**(code **)(*piVar5 + 0x1c0))(param_1);
                cVar4 = FUN_004f9fa0();
                if (cVar4 != '\0') {
                  FUN_004d7190();
                }
                if ((piVar8 != (int *)0x0) && (iVar7 = FUN_005e0dc0(), iVar7 == 1)) {
                  FUN_0067b320(piVar5,0);
                  FUN_0067b260(piVar5,1,0,0);
                  piVar10 = (int *)0x0;
                  bVar3 = false;
                }
                iVar7 = FUN_00659a00();
                if (iVar7 != 1) {
                  piVar10 = (int *)0x0;
                }
              }
              else {
                (**(code **)(*(int *)piVar5[0x16] + 0x164))((float)fVar11 - _DAT_00b33e9c);
              }
            }
          }
        }
        else {
          if (*piVar6 != 0) {
            piVar8 = (int *)FUN_00401f00(8);
            if (piVar8 != (int *)0x0) {
              *piVar8 = *piVar6;
              piVar8[1] = 0;
              piVar8[1] = piVar6[1];
              piVar6[1] = (int)piVar8;
              *piVar6 = (int)piVar5;
              goto LAB_00674314;
            }
            _DAT_00000004 = piVar6[1];
            piVar6[1] = 0;
          }
          *piVar6 = (int)piVar5;
        }
LAB_00674314:
        if (bVar3) {
          iVar7 = FUN_007616d0();
          if ((iVar7 == 0) ||
             ((((piVar8 = (int *)FUN_007616d0(), piVar8[1] != 0 || (*piVar8 != 0)) &&
               (puVar9 = (undefined4 *)FUN_007616d0(), (int *)*puVar9 == piVar5)) &&
              (iVar7 = FUN_007616d0(), *(int **)(iVar7 + 4) == piVar10)))) {
            bVar3 = false;
          }
          else {
            piVar10 = (int *)FUN_007616d0();
          }
        }
      }
      piVar5 = piVar10;
    } while (piVar10 != (int *)0x0);
    FUN_007616d0();
    piVar5 = local_c;
    while ((piVar5 != (int *)0x0 && (piVar5 = (int *)*piVar6, piVar5 != (int *)0x0))) {
      FUN_0067b320(piVar5,0);
      cVar4 = (**(code **)(*piVar5 + 0x1fc))();
      if (cVar4 != '\0') {
        (**(code **)(*piVar5 + 0x10))(1);
      }
      piVar6 = (int *)piVar6[1];
      piVar5 = piVar6;
    }
    FUN_004526e0();
    FUN_00401f20(local_c);
  }
  return;
}



void FUN_00674500(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = FUN_007616d0();
  *(int *)(in_ECX + 0x78) = iVar3;
  while ((iVar3 != 0 && ((piVar1 = *(int **)(in_ECX + 0x78), piVar1[1] != 0 || (*piVar1 != 0))))) {
    piVar1 = (int *)*piVar1;
    cVar2 = (**(code **)(*piVar1 + 400))();
    if (cVar2 != '\0') {
      FUN_006286b0(piVar1);
    }
    iVar3 = *(int *)(*(int *)(in_ECX + 0x78) + 4);
    *(int *)(in_ECX + 0x78) = iVar3;
  }
  return;
}



void FUN_00674550(int param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  
  FUN_00579440();
  switch(param_2) {
  case 0:
    iVar1 = in_ECX + 0x68;
    break;
  case 1:
    iVar1 = in_ECX;
    break;
  case 2:
    iVar1 = in_ECX + 0xc;
    break;
  case 3:
    iVar1 = in_ECX + 0x18;
    break;
  default:
    iVar1 = 0;
  }
  if ((*(int **)(in_ECX + 0x74) != (int *)0x0) && (param_1 == **(int **)(in_ECX + 0x74))) {
    *(undefined4 *)(in_ECX + 0x74) = 0;
  }
  if ((*(int **)(in_ECX + 0x78) != (int *)0x0) && (param_1 == **(int **)(in_ECX + 0x78))) {
    *(undefined4 *)(in_ECX + 0x78) = 0;
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_0067b320();
  return;
}



void FUN_006745d0(int *param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  
  piVar4 = (int *)FUN_00401f00(8);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = 0;
    piVar4[1] = 0;
  }
  for (; (param_1 != (int *)0x0 && ((int *)*param_1 != (int *)0x0)); param_1 = (int *)param_1[1]) {
    cVar3 = (**(code **)(*(int *)*param_1 + 400))();
    if ((cVar3 != '\0') && (iVar2 = *param_1, iVar2 != 0)) {
      if (*piVar4 != 0) {
        piVar5 = (int *)FUN_00401f00(8);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = *piVar4;
          piVar5[1] = 0;
        }
        piVar5[1] = piVar4[1];
        piVar4[1] = (int)piVar5;
      }
      *piVar4 = iVar2;
    }
  }
  if (piVar4 != (int *)0x0) {
    while (piVar5 = (int *)*piVar4, piVar5 != (int *)0x0) {
      if ((((piVar5 != DAT_00b333c4) && (piVar5[0x16] != 0)) && (((uint)piVar5[2] >> 5 & 1) == 0))
         && ((((uint)piVar5[2] >> 0xb & 1) == 0 &&
             (cVar3 = (**(code **)(*piVar5 + 0x334))(1), cVar3 == '\0')))) {
        fVar7 = (float10)FUN_006599b0();
        fVar8 = (float10)FUN_00402bd0();
        fVar1 = (float)fVar8;
        if (fVar1 < (float)fVar7) {
          fVar1 = fVar1 + 24.0;
        }
        param_1 = (int *)(fVar1 - (float)fVar7);
        if ((float)param_1 < 0.05) {
          param_1 = (int *)0x0;
        }
        if ((((*(int *)(piVar5[0x16] + 8) == 0) ||
             (*(char *)(*(int *)(piVar5[0x16] + 8) + 0x20) != '\x02')) &&
            (cVar3 = FUN_005e3220(), cVar3 == '\0')) ||
           (piVar6 = (int *)(**(code **)(*(int *)piVar5[0x16] + 0xcc))(), piVar6 != DAT_00b333c4)) {
          (**(code **)(*piVar5 + 0x1c0))(param_1);
        }
      }
      piVar5 = (int *)piVar4[1];
      if (piVar5 == (int *)0x0) {
        *piVar4 = 0;
      }
      else {
        piVar4[1] = piVar5[1];
        *piVar4 = *piVar5;
        FUN_00401f20(piVar5);
      }
    }
  }
  iVar2 = piVar4[1];
  while (iVar2 != 0) {
    iVar2 = *(int *)(piVar4[1] + 4);
    FUN_00401f20(piVar4[1]);
    piVar4[1] = iVar2;
  }
  *piVar4 = 0;
  FUN_00401f20(piVar4);
  return;
}



void FUN_006747c0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  
  piVar1 = (int *)(in_ECX + 0x60);
LAB_006747c4:
  do {
    uVar4 = 0;
    piVar3 = piVar1;
    if (piVar1 == (int *)0x0) {
      return;
    }
    do {
      if (*piVar3 != 0) {
        uVar4 = uVar4 + 1;
      }
      piVar2 = piVar3 + 1;
      piVar3 = (int *)*piVar2;
    } while ((int *)*piVar2 != (int *)0x0);
    piVar3 = piVar1;
    if (uVar4 <= DAT_00b36cd0) {
      return;
    }
    do {
      piVar2 = piVar3;
      if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_006747c4;
      piVar3 = (int *)piVar2[1];
    } while ((int *)piVar2[1] != (int *)0x0);
    FUN_0065c620(*piVar2);
  } while( true );
}



void FUN_00674820(int param_1)

{
  int in_ECX;
  int *piVar1;
  
  if (param_1 != 0) {
    for (piVar1 = (int *)(in_ECX + 0x60); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 == param_1) {
        return;
      }
    }
    FUN_00446cb0(param_1);
  }
  return;
}



void FUN_00674850(void)

{
  FUN_0065c620();
  return;
}



undefined4 FUN_00674860(int param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  
  if ((param_1 != 0) && (param_1 != DAT_00b333c4)) {
    piVar1 = (int *)(in_ECX + 0x60);
    while (((piVar1 != (int *)0x0 && (*piVar1 != 0)) && (0 < param_2))) {
      if (*piVar1 == param_1) {
        return 1;
      }
      piVar1 = (int *)piVar1[1];
    }
    return 0;
  }
  return 1;
}



void FUN_006748b0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x58);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      if ((int *)param_1[0x16] != (int *)0x0) {
        iVar3 = (**(code **)(*(int *)param_1[0x16] + 8))();
        iVar4 = FUN_0065ad00();
        cVar2 = (**(code **)(*param_1 + 0x198))(0);
        if ((((cVar2 != '\0') || (iVar3 != iVar4)) ||
            (cVar2 = (**(code **)(*(int *)param_1[0x16] + 0x248))(), cVar2 != '\0')) ||
           ((((uint)param_1[2] >> 5 & 1) != 0 || (cVar2 = FUN_0065d550(), cVar2 != '\0')))) {
          (**(code **)(*param_1 + 0xa0))(1);
          FUN_00446cb0(param_1);
        }
      }
      return;
    }
    if ((int *)*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return;
}



void FUN_00674a20(void)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  cVar4 = FUN_0065d550();
  if (cVar4 != '\0') {
    return;
  }
  piVar1 = (int *)(in_ECX + 0x58);
  piVar2 = piVar1;
joined_r0x00674a49:
  while( true ) {
    do {
      if ((piVar2 == (int *)0x0) || ((int *)*piVar2 == (int *)0x0)) {
        while( true ) {
          if (piVar1 == (int *)0x0) {
            return;
          }
          if ((int *)*piVar1 == (int *)0x0) break;
          (**(code **)(*(int *)*piVar1 + 0xa0))(1);
          piVar1 = (int *)piVar1[1];
        }
        return;
      }
      DAT_00b3bcf8 = (int *)0x0;
      cVar4 = (**(code **)(*(int *)*piVar2 + 0x188))();
      if (cVar4 != '\0') {
        DAT_00b3bcf8 = (int *)*piVar2;
      }
    } while (DAT_00b3bcf8 == (int *)0x0);
    cVar4 = (**(code **)(*DAT_00b3bcf8 + 400))();
    piVar8 = (int *)0x0;
    if (cVar4 != '\0') {
      piVar8 = DAT_00b3bcf8;
    }
    piVar2 = (int *)piVar2[1];
    if (DAT_00b3bcf8[0x16] != 0) break;
    if ((((uint)DAT_00b3bcf8[2] >> 5 & 1) == 0) || (iVar5 = FUN_0046b680(0xffffffff), iVar5 != 0)) {
      if (((((uint)DAT_00b3bcf8[2] >> 5 & 1) != 0) || (((uint)DAT_00b3bcf8[2] >> 0xb & 1) != 0)) &&
         (DAT_00b3bcf8[0x16] != 0)) {
        uVar6 = FUN_00659a00();
        FUN_00674550(DAT_00b3bcf8,uVar6);
        FUN_00659bc0();
      }
LAB_00674b2b:
      FUN_0065c620(DAT_00b3bcf8);
      piVar2 = piVar1;
    }
    else {
      if (DAT_00b3bcf8 == (int *)0x0) goto LAB_00674b2b;
      (**(code **)(*DAT_00b3bcf8 + 0x10))(1);
      FUN_0065c620(DAT_00b3bcf8);
      piVar2 = piVar1;
    }
  }
  if ((((piVar8 != (int *)0x0) && (cVar4 = (**(code **)(*piVar8 + 0x198))(0), cVar4 != '\0')) &&
      (cVar4 = FUN_005e1d30(), cVar4 == '\0')) && (cVar4 = FUN_005e1d70(), cVar4 != '\0')) {
    uVar13 = 0;
    uVar6 = FUN_006ecc80(0);
    cVar4 = FUN_0043f8c0(uVar6,uVar13);
    if ((cVar4 == '\0') &&
       (fVar9 = (float10)(**(code **)(*(int *)piVar8[0x16] + 0x4f0))(), iVar5 = DAT_00b35c1c,
       fVar9 != (float10)0.0)) {
      fVar9 = (float10)(**(code **)(*(int *)piVar8[0x16] + 0x4f0))();
      fVar10 = (float10)iVar5;
      if (iVar5 < 0) {
        fVar10 = fVar10 + (float10)4.2949673e+09;
      }
      iVar5 = FUN_00402c00();
      fVar3 = (float)iVar5;
      if (iVar5 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      fVar11 = (float10)FUN_00402bd0();
      if ((float10)(double)(fVar10 + fVar9) < fVar11 + (float10)(fVar3 * 24.0)) {
        (**(code **)(*piVar8 + 0x20c))(1,0,0);
        puVar7 = (undefined4 *)FUN_00420480();
        if (puVar7 != (undefined4 *)0x0) {
          while (cVar4 = FUN_0046cb60(), cVar4 == '\0') {
            piVar2 = (int *)*puVar7;
            FUN_004203e0(0);
            cVar4 = (**(code **)(*piVar2 + 0x78))();
            if (cVar4 == '\0') {
              FUN_004d6640();
            }
            FUN_0067f100();
          }
          FUN_004204a0();
        }
        FUN_0065c620(DAT_00b3bcf8);
        piVar2 = piVar1;
        goto joined_r0x00674a49;
      }
    }
  }
  if ((DAT_00b3bcf8[2] & 0x20000U) != 0) {
    (**(code **)(*DAT_00b3bcf8 + 0xa0))(0);
    FUN_0065c620(DAT_00b3bcf8);
    if ((((uint)DAT_00b3bcf8[2] >> 5 & 1) == 0) || (iVar5 = FUN_0046b680(0xffffffff), iVar5 != 0)) {
      if ((((uint)DAT_00b3bcf8[2] >> 5 & 1) == 0) && (((uint)DAT_00b3bcf8[2] >> 0xb & 1) == 0)) {
        if (((int *)DAT_00b3bcf8[0x16] == (int *)0x0) ||
           (cVar4 = (**(code **)(*(int *)DAT_00b3bcf8[0x16] + 0x248))(), cVar4 == '\0')) {
          (**(code **)(*DAT_00b3bcf8 + 0x1c4))();
          piVar2 = piVar1;
          if ((DAT_00b3bcf8 != (int *)0x0) && ((DAT_00b3bcf8[2] & 0x20000U) != 0)) {
            (**(code **)(*DAT_00b3bcf8 + 0xa0))(0);
          }
        }
        else {
          iVar5 = ((int *)DAT_00b3bcf8[0x16])[2];
          if ((iVar5 == 0) ||
             ((cVar4 = *(char *)(iVar5 + 0x20), piVar2 = piVar1, cVar4 != '\x01' &&
              (cVar4 != '\x02')))) {
            uVar14 = 0;
            (**(code **)(*(int *)DAT_00b3bcf8[0x16] + 0x24c))(0);
            uVar12 = 0;
            uVar13 = 0;
            uVar6 = (**(code **)(*(int *)DAT_00b3bcf8[0x16] + 8))(0,0,0);
            FUN_00673a90(DAT_00b3bcf8,uVar6,uVar13,uVar12,uVar14);
            piVar2 = piVar1;
          }
        }
      }
      else {
        piVar2 = piVar1;
        if (DAT_00b3bcf8[0x16] != 0) {
          uVar6 = FUN_00659a00();
          FUN_00674550(DAT_00b3bcf8,uVar6);
          FUN_00659bc0();
        }
      }
    }
    else {
      piVar2 = piVar1;
      if (DAT_00b3bcf8 != (int *)0x0) {
        (**(code **)(*DAT_00b3bcf8 + 0x10))(1);
      }
    }
  }
  goto joined_r0x00674a49;
}



void FUN_00674e10(int param_1)

{
  if (param_1 == DAT_00b3bcf8) {
    DAT_00b3bcf8 = 0;
  }
  FUN_0065c620();
  return;
}



int * FUN_00674e40(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_8;
  
  piVar5 = (int *)0x0;
  local_8 = 0;
  do {
    if (local_8 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = local_8;
      if ((local_8 != 1) && (local_8 != 2)) {
        iVar6 = 3;
      }
    }
    FUN_00673a50(iVar6);
    for (piVar2 = (int *)FUN_007616d0();
        (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0)))); piVar2 = (int *)piVar2[1]) {
      cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
      if ((cVar1 != '\0') && (iVar6 = *piVar2, iVar6 != 0)) {
        if (*(int **)(iVar6 + 0x58) != (int *)0x0) {
          (**(code **)(**(int **)(iVar6 + 0x58) + 0x330))(param_1);
        }
        iVar3 = FUN_005eae10();
        if (((iVar3 != 0) && (iVar3 = FUN_005eae10(), *(int *)(iVar3 + 0xc) == param_1)) &&
           (param_2 != iVar6)) {
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)FUN_00401f00(8);
            if (piVar5 == (int *)0x0) {
              piVar5 = (int *)0x0;
            }
            else {
              *piVar5 = 0;
              piVar5[1] = 0;
            }
          }
          if (*piVar5 != 0) {
            piVar4 = (int *)FUN_00401f00(8);
            if (piVar4 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              *piVar4 = *piVar5;
              piVar4[1] = 0;
            }
            piVar4[1] = piVar5[1];
            piVar5[1] = (int)piVar4;
          }
          *piVar5 = iVar6;
        }
      }
    }
    local_8 = local_8 + 1;
  } while (local_8 < 4);
  return piVar5;
}



void FUN_00674f70(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(in_ECX + 0x28);
  iVar3 = 6;
  do {
    for (piVar2 = (int *)*puVar4; (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))));
        piVar2 = (int *)piVar2[1]) {
      iVar1 = *piVar2;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == param_1)) {
        FUN_0065c620(iVar1);
        FUN_00605e80();
        FUN_00401f20(iVar1);
        piVar2 = (int *)*puVar4;
      }
    }
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



void FUN_00674fd0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (((param_1 != 0) && (DAT_00b33a98 != 0)) && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) {
    iVar1 = *(int *)(param_1 + 8);
    iVar6 = 0;
    do {
      if ((iVar6 == 0) || (iVar6 == 1)) {
        FUN_00673a50(iVar6);
        for (piVar4 = (int *)FUN_007616d0();
            (piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))));
            piVar4 = (int *)piVar4[1]) {
          cVar3 = (**(code **)(*(int *)*piVar4 + 400))();
          if ((cVar3 != '\0') &&
             ((iVar2 = *piVar4, iVar2 != 0 &&
              (iVar5 = (**(code **)(**(int **)(iVar2 + 0x58) + 0x184))(), iVar1 == iVar5)))) {
            FUN_005eae70();
            (**(code **)(**(int **)(iVar2 + 0x58) + 0x49c))();
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
  }
  return;
}



void FUN_00675090(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_4;
  
  local_4 = 0;
  do {
    iVar5 = local_4;
    if (((local_4 != 0) && (local_4 != 1)) && (local_4 != 2)) {
      iVar5 = 3;
    }
    FUN_00673a50(iVar5);
    for (piVar3 = (int *)FUN_007616d0();
        (piVar3 != (int *)0x0 && ((piVar3[1] != 0 || (*piVar3 != 0)))); piVar3 = (int *)piVar3[1]) {
      piVar7 = (int *)0x0;
      cVar2 = (**(code **)(*(int *)*piVar3 + 400))();
      if (cVar2 != '\0') {
        piVar7 = (int *)*piVar3;
      }
      piVar6 = (int *)0x0;
      while (piVar7 != (int *)0x0) {
        iVar5 = 0;
        if ((int *)piVar7[0x16] != (int *)0x0) {
          iVar5 = (**(code **)(*(int *)piVar7[0x16] + 0x184))();
        }
        piVar1 = (int *)piVar7[0x16];
        if ((piVar1 != (int *)0x0) && (iVar5 != piVar1[2])) {
          iVar8 = 0;
          uVar4 = (**(code **)(*piVar1 + 8))();
          if (uVar4 < 2) {
            iVar8 = piVar7[0x16];
          }
          if ((iVar5 == param_1) && (iVar8 != 0)) {
            *(undefined4 *)(iVar8 + 0xc0) = 0;
          }
        }
        iVar5 = piVar7[0x16];
        if ((iVar5 != 0) && (*(int *)(iVar5 + 8) == param_1)) {
          *(undefined4 *)(iVar5 + 8) = 0;
          cVar2 = FUN_00567770();
          if (cVar2 != '\0') {
            (**(code **)(*piVar7 + 0x44))(0x30000);
          }
          cVar2 = FUN_0045a500();
          if (cVar2 == '\0') {
            (**(code **)(*(int *)piVar7[0x16] + 0x18))(piVar7,1);
          }
        }
        iVar5 = FUN_0041fb20();
        if (iVar5 == param_1) {
          FUN_004268b0(0,0,0,0,0);
        }
        if ((piVar6 == (int *)0x0) || ((int *)*piVar6 == (int *)0x0)) break;
        piVar7 = (int *)0x0;
        cVar2 = (**(code **)(*(int *)*piVar6 + 400))();
        if (cVar2 != '\0') {
          piVar7 = (int *)*piVar6;
        }
        piVar6 = (int *)piVar6[1];
      }
    }
    local_4 = local_4 + 1;
    if (3 < local_4) {
      return;
    }
  } while( true );
}



int * FUN_00675220(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  piVar3 = (int *)FUN_007616d0();
  while ((piVar3 != (int *)0x0 && (((piVar3[1] != 0 || (*piVar3 != 0)) && (piVar5 == (int *)0x0)))))
  {
    cVar2 = (**(code **)(*(int *)*piVar3 + 400))();
    if ((((cVar2 != '\0') && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) &&
        (cVar2 = FUN_004d7f80(), cVar2 != '\0')) &&
       ((iVar4 = (**(code **)(*piVar1 + 0x170))(), iVar4 != 0 && (param_1 == iVar4)))) {
      piVar5 = piVar1;
    }
    piVar3 = (int *)piVar3[1];
  }
  return piVar5;
}



int FUN_00675290(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = 0;
  piVar3 = (int *)FUN_007616d0();
  while ((piVar3 != (int *)0x0 && (((piVar3[1] != 0 || (*piVar3 != 0)) && (iVar6 == 0))))) {
    cVar2 = (**(code **)(*(int *)*piVar3 + 400))();
    if ((cVar2 != '\0') && (iVar1 = *piVar3, iVar1 != 0)) {
      uVar4 = (uint)(iVar1 == DAT_00b333c4);
      uVar7 = param_1;
      FUN_005e02e0(0);
      iVar5 = FUN_00467510(uVar7,uVar4);
      if (-1 < iVar5) {
        iVar6 = iVar1;
      }
    }
    piVar3 = (int *)piVar3[1];
  }
  return iVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_006753f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  float10 fVar9;
  undefined4 unaff_retaddr;
  int *piStack_24;
  int *local_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_10;
  
  local_20 = (int *)FUN_00401f00(8);
  if (local_20 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    *local_20 = 0;
    local_20[1] = 0;
  }
  FUN_006ecc80();
  FUN_004d6670();
  if (param_1 == (int *)0x0) {
    return local_20;
  }
  iVar2 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x444))();
  (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x448))(1 - iVar2);
  iStack_1c = 0;
LAB_0067547b:
  if (iStack_1c == 0) {
    FUN_00673a50(0);
    piVar3 = (int *)FUN_007616d0();
  }
  else {
    iVar2 = iStack_1c;
    if ((iStack_1c != 1) && (iStack_1c != 2)) {
      iVar2 = 3;
    }
    FUN_00673a50(iVar2);
    piVar3 = (int *)FUN_007616d0();
  }
  do {
    if ((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) break;
    piVar8 = (int *)0x0;
    cVar1 = (**(code **)(*(int *)*piVar3 + 400))();
    if (cVar1 != '\0') {
      piVar8 = (int *)*piVar3;
    }
    piVar3 = (int *)piVar3[1];
    piStack_10 = (int *)0x0;
    while (piVar8 != (int *)0x0) {
      iVar2 = FUN_006ecc80();
      iVar4 = FUN_004d6670();
      cVar1 = (**(code **)(*piVar8 + 0x334))(1);
      if ((cVar1 == '\0') && (cVar1 = FUN_005e6c60(), cVar1 != '\0')) {
        if (((iVar2 == 0) || ((cVar1 = FUN_004c97f0(), cVar1 == '\0' || (iVar2 != iStack_18)))) &&
           ((piVar5 = param_1, in_ECX != iVar4 ||
            (((iVar2 == 0 || (cVar1 = FUN_004c97f0(), cVar1 != '\0')) &&
             ((iStack_18 == 0 || (cVar1 = FUN_004c97f0(), cVar1 != '\0')))))))) {
          do {
            local_20 = piStack_24;
            if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) goto LAB_006756dc;
            iVar4 = FUN_004d7630();
            if (iVar4 != 0) {
              uVar6 = FUN_0042b410();
              iVar4 = FUN_006ecc80();
              if (iVar4 == iVar2) {
LAB_0067565a:
                fVar9 = (float10)FUN_004d7e90(uVar6,0);
                if ((float)fVar9 <= (float)_DAT_00b36a50) {
                  (**(code **)(*(int *)piVar8[0x16] + 0x228))(piVar8,unaff_retaddr,0,0,0,0,0,0,0,1);
                  if (*piStack_24 != 0) {
                    piVar5 = (int *)FUN_00401f00(8);
                    if (piVar5 == (int *)0x0) {
                      piVar5 = (int *)0x0;
                    }
                    else {
                      *piVar5 = *piStack_24;
                      piVar5[1] = 0;
                    }
                    piVar5[1] = piStack_24[1];
                    piStack_24[1] = (int)piVar5;
                  }
                  *piStack_24 = (int)piVar8;
                  goto LAB_006756dc;
                }
              }
              else {
                iVar4 = FUN_006ecc80();
                if (iVar4 == 0) {
                  iVar4 = FUN_004d6670();
                  iVar7 = FUN_004d6670();
                  if (iVar4 == iVar7) goto LAB_0067565a;
                }
              }
            }
            piVar5 = (int *)piVar5[1];
          } while( true );
        }
        fVar9 = (float10)FUN_004d7e90(unaff_retaddr,0);
        if ((float)fVar9 <= (float)_DAT_00b36a50) {
          (**(code **)(*(int *)piVar8[0x16] + 0x228))(piVar8,unaff_retaddr,0,0,0,0,0,0,0,1);
          if (*local_20 != 0) {
            piVar5 = (int *)FUN_00401f00(8);
            if (piVar5 != (int *)0x0) {
              *piVar5 = *local_20;
              piVar5[1] = 0;
              piVar5[1] = local_20[1];
              local_20[1] = (int)piVar5;
              *local_20 = (int)piVar8;
              goto LAB_006756dc;
            }
            _DAT_00000004 = local_20[1];
            local_20[1] = 0;
          }
          *local_20 = (int)piVar8;
        }
      }
LAB_006756dc:
      if ((piStack_10 == (int *)0x0) || ((int *)*piStack_10 == (int *)0x0)) break;
      piVar8 = (int *)0x0;
      cVar1 = (**(code **)(*(int *)*piStack_10 + 400))();
      if (cVar1 != '\0') {
        piVar8 = (int *)*piStack_10;
      }
      piStack_10 = (int *)piStack_10[1];
    }
  } while( true );
  iStack_1c = iStack_1c + 1;
  if (3 < iStack_1c) {
    return local_20;
  }
  goto LAB_0067547b;
}



int * FUN_00675740(undefined4 param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_8;
  
  piVar5 = (int *)0x0;
  local_8 = 0;
  do {
    iVar6 = local_8;
    if (((local_8 != 0) && (local_8 != 1)) && (local_8 != 2)) {
      iVar6 = 3;
    }
    FUN_00673a50(iVar6);
    for (piVar2 = (int *)FUN_007616d0(); (piVar2 != (int *)0x0 && ((int *)*piVar2 != (int *)0x0));
        piVar2 = (int *)piVar2[1]) {
      cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
      if ((((cVar1 != '\0') &&
           ((iVar6 = *piVar2, iVar6 != 0 && (iVar3 = FUN_005e0380(), iVar3 != 0)))) &&
          (*(char *)(iVar3 + 0x20) == '\x0f')) && (cVar1 = FUN_00606ad0(param_1), cVar1 != '\0')) {
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)FUN_00401f00(8);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = 0;
            piVar5[1] = 0;
          }
        }
        if (param_2 == '\0') {
          if (*piVar5 != 0) {
            piVar4 = (int *)FUN_00401f00(8);
            if (piVar4 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              *piVar4 = *piVar5;
              piVar4[1] = 0;
            }
            piVar4[1] = piVar5[1];
            piVar5[1] = (int)piVar4;
          }
          *piVar5 = iVar6;
        }
        else {
          FUN_00606b50(param_1,iVar6);
        }
      }
    }
    local_8 = local_8 + 1;
  } while (local_8 < 4);
  if (param_2 != '\0') {
    FUN_00401f20(piVar5);
    return (int *)0x0;
  }
  return piVar5;
}



int * FUN_006758e0(int param_1,int param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_8;
  
  piVar7 = (int *)0x0;
  local_8 = 0;
  do {
    if (local_8 == 0) {
      iVar5 = 0;
LAB_00675918:
      FUN_00673a50(iVar5);
      piVar3 = (int *)FUN_007616d0();
      while (((piVar3 != (int *)0x0 && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) &&
             ((param_3 == '\0' || (local_8 == 0))))) {
        cVar2 = (**(code **)(*piVar1 + 400))();
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*piVar1 + 0x334))(1);
          if ((cVar2 == '\0') || (param_2 != 0xc)) {
            iVar5 = FUN_005e0380();
            if ((iVar5 != 0) &&
               ((((cVar2 = FUN_005e6c60(), cVar2 != '\0' || (param_2 != 0xf)) &&
                 (iVar4 = (**(code **)(*(int *)piVar1[0x16] + 0xcc))(), iVar4 == param_1)) &&
                (*(char *)(iVar5 + 0x20) == param_2)))) {
              if (piVar7 == (int *)0x0) {
                piVar7 = (int *)FUN_00401f00(8);
                if (piVar7 == (int *)0x0) {
                  piVar7 = (int *)0x0;
                }
                else {
                  *piVar7 = 0;
                  piVar7[1] = 0;
                }
              }
              if (*piVar7 != 0) {
                piVar6 = (int *)FUN_00401f00(8);
                if (piVar6 == (int *)0x0) {
                  piVar6 = (int *)0x0;
                }
                else {
                  *piVar6 = *piVar7;
                  piVar6[1] = 0;
                }
                piVar6[1] = piVar7[1];
                piVar7[1] = (int)piVar6;
              }
              *piVar7 = (int)piVar1;
            }
          }
          else {
            iVar4 = FUN_005e03a0();
            iVar5 = 0;
            if (*(char *)(iVar4 + 0x20) == '\f') {
              iVar5 = iVar4;
            }
            if (param_3 == '\0') {
              if ((iVar5 != 0) && (cVar2 = FUN_00613670(param_1), cVar2 != '\0')) {
                if (piVar7 == (int *)0x0) {
                  piVar7 = (int *)FUN_00401f00(8);
                  if (piVar7 == (int *)0x0) {
                    piVar7 = (int *)0x0;
                  }
                  else {
                    *piVar7 = 0;
                    piVar7[1] = 0;
                  }
                }
                if ((local_8 != 2) ||
                   ((cVar2 = FUN_005e3270(), cVar2 == '\0' &&
                    (cVar2 = FUN_004db4a0(), cVar2 != '\0')))) goto LAB_00675a63;
                (**(code **)(*piVar1 + 0x340))(0);
              }
            }
            else if ((iVar5 != 0) && (iVar5 = FUN_006135f0(), iVar5 == param_1)) {
              if (piVar7 == (int *)0x0) {
                piVar7 = (int *)FUN_00401f00(8);
                if (piVar7 == (int *)0x0) {
                  piVar7 = (int *)0x0;
                }
                else {
                  *piVar7 = 0;
                  piVar7[1] = 0;
                }
              }
              if ((local_8 == 2) &&
                 ((cVar2 = FUN_005e3270(), cVar2 != '\0' || (cVar2 = FUN_004db4a0(), cVar2 == '\0'))
                 )) {
                (**(code **)(*piVar1 + 0x340))(0);
              }
              else {
LAB_00675a63:
                FUN_00446cb0(piVar1);
              }
            }
          }
        }
        piVar3 = (int *)piVar3[1];
      }
    }
    else {
      iVar5 = local_8;
      if (((local_8 == 1) || (local_8 == 2)) || (local_8 == 3)) goto LAB_00675918;
    }
    local_8 = local_8 + 1;
    if (3 < local_8) {
      return piVar7;
    }
  } while( true );
}



void FUN_00675b30(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 4), -1 < iVar1)) && (iVar1 < 6)) {
    if (*(int *)(in_ECX + 0x28 + iVar1 * 4) == 0) {
      puVar3 = (undefined4 *)FUN_00401f00(8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      *(undefined4 **)(in_ECX + 0x28 + *(int *)(param_1 + 4) * 4) = puVar3;
    }
    cVar2 = FUN_00446c30(param_1);
    if (cVar2 == '\0') {
      FUN_00446cb0(param_1);
      return;
    }
    FUN_00605e80();
    FUN_00401f20(param_1);
  }
  return;
}



int FUN_00675bb0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if (param_1 < 7) {
    piVar3 = *(int **)(in_ECX + 0x28 + param_1 * 4);
    iVar2 = 0;
    if (piVar3 != (int *)0x0) {
      while( true ) {
        iVar1 = *piVar3;
        if (iVar1 == 0) {
          return iVar2;
        }
        if (iVar2 != 0) break;
        piVar3 = (int *)piVar3[1];
        if (*(int *)(iVar1 + 0x28) == param_2) {
          iVar2 = iVar1;
        }
        if (piVar3 == (int *)0x0) {
          return iVar2;
        }
      }
      return iVar2;
    }
  }
  return 0;
}



int FUN_00675bf0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if (param_3 < 7) {
    piVar3 = *(int **)(in_ECX + 0x28 + param_3 * 4);
    iVar2 = 0;
    if (piVar3 != (int *)0x0) {
      while( true ) {
        iVar1 = *piVar3;
        if (iVar1 == 0) {
          return iVar2;
        }
        if (iVar2 != 0) break;
        piVar3 = (int *)piVar3[1];
        if ((*(int *)(iVar1 + 0xc) == param_1) && (*(int *)(iVar1 + 8) == param_2)) {
          iVar2 = iVar1;
        }
        if (piVar3 == (int *)0x0) {
          return iVar2;
        }
      }
      return iVar2;
    }
  }
  return 0;
}



undefined4
FUN_00675c40(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  if (6 < param_4) {
    return 0;
  }
  piVar1 = *(int **)(in_ECX + 0x28 + param_4 * 4);
  do {
    if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) {
      return 0;
    }
    piVar1 = (int *)piVar1[1];
  } while (((((*(uint *)(iVar2 + 4) != param_4) || (*(int *)(iVar2 + 0xc) != param_2)) ||
            ((*(int *)(iVar2 + 8) != param_1 && (param_1 != 0)))) ||
           ((param_6 != -1 && (param_6 != *(int *)(iVar2 + 0x28))))) ||
          ((param_3 != 0 && (cVar3 = FUN_00605ed0(param_3), cVar3 == '\0'))));
  return 1;
}



uint FUN_00675cc0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = 0;
  piVar1 = *(int **)(in_ECX + 0x28 + param_1 * 4);
  while ((piVar1 != (int *)0x0 && (((int *)piVar1[1] != (int *)0x0 || (*piVar1 != 0))))) {
    if (param_2 == *piVar1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    piVar1 = (int *)piVar1[1];
  }
  uVar2 = FUN_004a7a60(
                      "When trying to get a crime index, the crime was not found in the crime lists."
                      );
  return uVar2 & 0xffff0000;
}



int FUN_00675d00(int param_1,short param_2)

{
  int *piVar1;
  int in_ECX;
  short sVar2;
  
  sVar2 = 0;
  piVar1 = *(int **)(in_ECX + 0x28 + param_1 * 4);
  while ((piVar1 != (int *)0x0 && (((int *)piVar1[1] != (int *)0x0 || (*piVar1 != 0))))) {
    if (sVar2 == param_2) {
      return *piVar1;
    }
    sVar2 = sVar2 + 1;
    piVar1 = (int *)piVar1[1];
  }
  FUN_004a7a60(
              "When trying to get a crime by its index, the index was larger than the size of the crime list."
              );
  return 0;
}



void FUN_00675d50(int param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x58) != 0)) {
    iVar5 = **(int **)(param_1 + 0x58);
    iVar3 = (**(code **)(iVar5 + 0x444))();
    (**(code **)(iVar5 + 0x448))(-iVar3);
    if (param_1 == DAT_00b333c4) {
      *(undefined1 *)(DAT_00b333c4 + 0x738) = 0;
    }
  }
  iVar5 = 0;
  do {
    iVar3 = iVar5;
    if (((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 2)) {
      iVar3 = 3;
    }
    FUN_00673a50(iVar3);
    for (piVar4 = (int *)FUN_007616d0(); (piVar4 != (int *)0x0 && ((int *)*piVar4 != (int *)0x0));
        piVar4 = (int *)piVar4[1]) {
      cVar2 = (**(code **)(*(int *)*piVar4 + 400))();
      if ((cVar2 != '\0') && (piVar1 = (int *)*piVar4, piVar1 != (int *)0x0)) {
        cVar2 = (**(code **)(*piVar1 + 0x334))(1);
        if (cVar2 == '\0') {
          if (((param_2 == '\0') && (cVar2 = FUN_005e6ba0(), cVar2 != '\0')) &&
             (iVar3 = FUN_005e0380(), *(int *)(iVar3 + 0x28) != 0)) {
            FUN_005e0380();
            iVar3 = FUN_00569e60();
            if ((iVar3 == param_1) || (param_1 == 0)) {
              FUN_005eae70();
              (**(code **)(*(int *)piVar1[0x16] + 0x49c))();
            }
          }
        }
        else if (iVar5 < 2) {
          (**(code **)(*piVar1 + 0x340))(param_1);
        }
        else {
          FUN_005eae70();
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return;
}



void FUN_00675e90(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)(in_ECX + 0x28);
  iVar5 = 6;
  do {
    piVar1 = (int *)*puVar4;
    piVar3 = piVar1;
    while ((piVar3 != (int *)0x0 && (iVar2 = *piVar3, iVar2 != 0))) {
      if (*(int *)(iVar2 + 0xc) == param_1) {
        FUN_00607120();
        FUN_00605e80();
        FUN_00401f20(iVar2);
        FUN_0065c620(iVar2);
        piVar3 = piVar1;
      }
      else {
        piVar3 = (int *)piVar3[1];
      }
    }
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}



int FUN_00675ef0(uint param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if (param_1 < 7) {
    piVar2 = *(int **)(in_ECX + 0x28 + param_1 * 4);
    iVar1 = 0;
    if (piVar2 != (int *)0x0) {
      if (param_2 == 0) {
        iVar1 = FUN_0052b4a0();
        return iVar1;
      }
      do {
        if (*piVar2 == 0) {
          return iVar1;
        }
        if (*(int *)(*piVar2 + 0xc) == param_2) {
          iVar1 = iVar1 + 1;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
      return iVar1;
    }
  }
  return 0;
}



void FUN_00675f40(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  for (piVar3 = (int *)FUN_007616d0(); (piVar3 != (int *)0x0 && ((int *)*piVar3 != (int *)0x0));
      piVar3 = (int *)piVar3[1]) {
    cVar2 = (**(code **)(*(int *)*piVar3 + 400))();
    if ((cVar2 != '\0') &&
       ((piVar1 = (int *)*piVar3, piVar1 != (int *)0x0 &&
        (cVar2 = (**(code **)(*piVar1 + 0x198))(0), cVar2 != '\0')))) {
      FUN_005e02e0(0);
      iVar4 = FUN_00519c10();
      if ((0 < iVar4) && (cVar2 = (**(code **)(*piVar1 + 0x80))(), cVar2 == '\0')) {
        (**(code **)(*(int *)piVar1[0x16] + 900))(piVar1);
      }
    }
  }
  return;
}



void FUN_00675fc0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = (int *)FUN_007616d0();
  do {
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
      return;
    }
    piVar5 = (int *)0x0;
    cVar1 = FUN_004d7f80();
    if (cVar1 != '\0') {
      piVar5 = (int *)*piVar2;
    }
    iVar4 = 0;
    piVar6 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      while( true ) {
        if ((((iVar4 == 0) && ((int *)piVar5[0x16] != (int *)0x0)) &&
            (iVar4 = (**(code **)(*(int *)piVar5[0x16] + 0x184))(), iVar4 != 0)) &&
           ((*(uint *)(iVar4 + 0x1c) >> 0x17 & 1) != 0)) {
          (**(code **)(*(int *)piVar5[0x16] + 0x3a0))(piVar5,0);
          (**(code **)(*(int *)piVar5[0x16] + 0x178))(0);
        }
        iVar4 = (**(code **)(*piVar5 + 0x380))();
        if (iVar4 != 0) {
          FUN_00602050(iVar4);
        }
        if ((piVar6 == (int *)0x0) || (*piVar6 == 0)) break;
        piVar5 = (int *)0x0;
        cVar1 = FUN_004d7f80();
        if (cVar1 != '\0') {
          piVar5 = (int *)*piVar6;
        }
        piVar6 = (int *)piVar6[1];
        while( true ) {
          if (piVar5 == (int *)0x0) goto LAB_006760ba;
          if (((int *)piVar5[0x16] != (int *)0x0) &&
             (iVar3 = (**(code **)(*(int *)piVar5[0x16] + 8))(), iVar3 == 0)) break;
          if ((piVar6 == (int *)0x0) || ((*piVar6 == 0 || (cVar1 = FUN_004d7f80(), cVar1 == '\0'))))
          {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = (int *)*piVar6;
          }
          if (piVar6 != (int *)0x0) {
            piVar6 = (int *)piVar6[1];
          }
        }
      }
    }
LAB_006760ba:
    piVar2 = (int *)piVar2[1];
  } while( true );
}



void FUN_006761a0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = FUN_00420ef0();
  if (iVar2 != 0) {
    for (piVar4 = *(int **)(iVar2 + 0xc);
        (piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0)))); piVar4 = (int *)piVar4[1]) {
      iVar2 = *piVar4;
      for (piVar3 = param_2; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if (*piVar3 == iVar2) goto LAB_0067621d;
      }
      if (iVar2 != 0) {
        if (*param_2 != 0) {
          piVar3 = (int *)FUN_00401f00(8);
          if (piVar3 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            *piVar3 = *param_2;
            piVar3[1] = 0;
          }
          piVar3[1] = param_2[1];
          param_2[1] = (int)piVar3;
        }
        *param_2 = iVar2;
      }
      FUN_006761a0(iVar2,param_2);
LAB_0067621d:
    }
  }
  piVar4 = (int *)FUN_007616d0();
  do {
    if ((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) {
      return;
    }
    cVar1 = (**(code **)(*(int *)*piVar4 + 400))();
    if (cVar1 != '\0') {
      iVar2 = *piVar4;
      iVar5 = FUN_005e0380();
      if ((iVar5 != 0) &&
         (((iVar5 = FUN_005e0380(), *(char *)(iVar5 + 0x20) == '\x02' ||
           (iVar5 = FUN_005e0380(), *(char *)(iVar5 + 0x20) == '\a')) &&
          (iVar5 = FUN_005e2e00(), piVar3 = param_2, iVar5 == param_1)))) {
        for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
          if (*piVar3 == iVar2) goto LAB_006762a2;
        }
        FUN_00446cb0(iVar2);
        FUN_006761a0(iVar2,param_2);
      }
    }
LAB_006762a2:
    piVar4 = (int *)piVar4[1];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006762b0(int param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  int local_1c;
  int iStack_10;
  undefined4 uStack_c;
  
  local_1c = 0;
  *(undefined1 *)(DAT_00b333c4 + 0x5a8) = 0;
  piVar2 = (int *)FUN_007616d0();
  do {
    if ((piVar2 == (int *)0x0) || ((int *)*piVar2 == (int *)0x0)) {
      return local_1c;
    }
    piVar5 = (int *)0x0;
    cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
    if (cVar1 != '\0') {
      piVar5 = (int *)*piVar2;
    }
    if (param_2 == '\0') {
      if (piVar5 != (int *)0x0) {
        iStack_10 = 0;
        uStack_c = 0;
        FUN_006761a0(param_1,&iStack_10);
        piVar3 = &iStack_10;
        do {
          if ((int *)*piVar3 == piVar5) goto LAB_00676451;
          piVar3 = (int *)piVar3[1];
        } while (piVar3 != (int *)0x0);
        goto LAB_0067634f;
      }
    }
    else {
LAB_0067634f:
      if (((piVar5 != (int *)0x0) && (cVar1 = (**(code **)(*piVar5 + 0x198))(0), cVar1 == '\0')) &&
         (((uint)piVar5[2] >> 0xb & 1) == 0)) {
        if (((param_1 == DAT_00b333c4) && (*(char *)(DAT_00b333c4 + 0x5a8) == '\0')) &&
           (fVar6 = (float10)FUN_004d7e90(piVar5,0), (float)fVar6 <= (float)_DAT_00b36790)) {
          *(undefined1 *)(DAT_00b333c4 + 0x5a8) = 1;
        }
        cVar1 = (**(code **)(*piVar5 + 0x334))(1);
        if ((cVar1 != '\0') || (cVar1 = FUN_005e6ba0(), cVar1 != '\0')) {
          cVar1 = (**(code **)(*piVar5 + 0x334))(1);
          if ((cVar1 != '\0') && (iVar4 = (**(code **)(*piVar5 + 0x330))(), iVar4 != 0)) {
            (**(code **)(*piVar5 + 0x330))();
            iVar4 = FUN_006135f0();
            if (iVar4 == param_1) {
              (**(code **)(*piVar5 + 0x330))();
              cVar1 = FUN_00612a10();
              if (cVar1 == '\0') {
                return 3;
              }
            }
          }
          cVar1 = FUN_005e6ba0();
          if ((cVar1 != '\0') && (iVar4 = FUN_005e2e00(), iVar4 == DAT_00b333c4)) {
            return 3;
          }
        }
        iVar4 = FUN_005e10a0(param_1);
        if (local_1c < iVar4) {
          local_1c = iVar4;
        }
      }
    }
LAB_00676451:
    piVar2 = (int *)piVar2[1];
  } while( true );
}



int FUN_00676480(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_4;
  
  local_4 = 0;
  piVar2 = (int *)FUN_007616d0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  do {
    if (((int *)*piVar2 == (int *)0x0) || (local_4 != 0)) {
      return local_4;
    }
    cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
    iVar5 = local_4;
    if (cVar1 != '\0') {
      iVar5 = *piVar2;
    }
    piVar6 = (int *)0x0;
joined_r0x006764cf:
    if (iVar5 != 0) {
      cVar1 = FUN_004de770(iVar5,1);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(*param_1 + 0x170))();
        FUN_005e02e0(0);
        cVar1 = FUN_004685b0(uVar3);
        if (cVar1 != '\0') {
          local_4 = iVar5;
        }
      }
      if ((piVar6 == (int *)0x0) || ((int *)*piVar6 == (int *)0x0)) goto LAB_00676577;
      iVar5 = 0;
      cVar1 = (**(code **)(*(int *)*piVar6 + 400))();
      if (cVar1 != '\0') {
        iVar5 = *piVar6;
      }
      piVar6 = (int *)piVar6[1];
      if (piVar6 != (int *)0x0) {
        while( true ) {
          if (iVar5 == 0) goto LAB_00676577;
          if ((*(int **)(iVar5 + 0x58) != (int *)0x0) &&
             (iVar4 = (**(code **)(**(int **)(iVar5 + 0x58) + 8))(), iVar4 == 0)) break;
          if ((piVar6 == (int *)0x0) ||
             (((int *)*piVar6 == (int *)0x0 ||
              (cVar1 = (**(code **)(*(int *)*piVar6 + 400))(), cVar1 == '\0')))) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar6;
          }
          if ((piVar6 == (int *)0x0) || (piVar6 = (int *)piVar6[1], piVar6 == (int *)0x0)) break;
        }
      }
      goto joined_r0x006764cf;
    }
LAB_00676577:
    piVar2 = (int *)piVar2[1];
    if (piVar2 == (int *)0x0) {
      return local_4;
    }
  } while( true );
}



void FUN_006765a0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  
  for (piVar2 = (int *)FUN_007616d0(); (piVar2 != (int *)0x0 && ((int *)*piVar2 != (int *)0x0));
      piVar2 = (int *)piVar2[1]) {
    cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
    if ((cVar1 != '\0') && (*piVar2 != 0)) {
      (**(code **)(**(int **)(*piVar2 + 0x58) + 0x1bc))(param_1);
    }
  }
  return;
}



void FUN_006765f0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c47f6;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(char *)((int)DAT_00b333c4 + 0x116) == '\0') {
    iVar4 = (**(code **)(*DAT_00b333c4 + 0x380))(uVar3);
    if ((iVar4 != 0) || (DAT_00b333c4[0x78] != 0)) {
      iVar4 = 0;
      if (param_1 == 0) {
        if (DAT_00b333c4[0x78] != 0) {
          FUN_005eae70();
          (**(code **)(**(int **)(DAT_00b333c4[0x78] + 0x58) + 0x17c))(0);
        }
      }
      else {
        uStack_20 = 0;
        FUN_005f0810(param_1,&uStack_20,uStack_18,uStack_14,uStack_10);
        if (DAT_00b333c4[0x78] != 0) {
          piStack_1c = (int *)FUN_00401f00(0x3c);
          uStack_4 = 0;
          if (piStack_1c != (int *)0x0) {
            iVar4 = FUN_00568e10();
          }
          uStack_4 = 0xffffffff;
          FUN_005661e0(5);
          *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 6;
          piStack_1c = (int *)FUN_00401f00(0xc);
          uStack_4 = 1;
          if (piStack_1c == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_005696b0();
          }
          uStack_4 = 0xffffffff;
          FUN_00569750(0);
          FUN_005697f0(DAT_00b333c4[0x78]);
          FUN_00565e00(iVar5);
          if (iVar5 != 0) {
            FUN_00569730();
            FUN_00401f20(iVar5);
          }
          FUN_005672a0();
          FUN_005f1590(iVar4,1,1);
        }
      }
    }
    iVar4 = 0;
    do {
      iVar5 = iVar4;
      if (((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != 2)) {
        iVar5 = 3;
      }
      FUN_00673a50(iVar5);
      piStack_1c = (int *)FUN_007616d0();
      piVar1 = piStack_1c;
      while ((piVar1 != (int *)0x0 && ((int *)*piVar1 != (int *)0x0))) {
        iVar5 = 0;
        cVar2 = (**(code **)(*(int *)*piVar1 + 400))();
        if (cVar2 != '\0') {
          iVar5 = *piVar1;
        }
        piVar1 = (int *)piVar1[1];
        if (iVar5 != 0) {
          cVar2 = FUN_00660f10(iVar5,1);
          if ((cVar2 == '\0') || (param_1 == 0)) {
            cVar2 = FUN_005e6bc0();
            if ((cVar2 != '\0') &&
               ((iVar5 = (**(code **)(**(int **)(iVar5 + 0x58) + 0x184))(),
                (*(byte *)(iVar5 + 0x1e) & 1) != 0 && (param_2 != 0)))) {
              FUN_004d7630();
              FUN_0042b410();
              iVar5 = FUN_004d7630();
              if (iVar5 != 0) {
                uVar6 = FUN_006899c0();
                fVar7 = (float10)FUN_004d7e30(uVar6);
                if (fVar7 < (float10)200.0) {
                  FUN_005668e0(0);
                }
              }
            }
          }
          else {
            FUN_005e7c30(param_1,param_3);
            iVar5 = FUN_00659a00();
            if (iVar5 != iVar4) {
              piVar1 = piStack_1c;
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006768c0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  float10 fVar4;
  
  piVar2 = (int *)FUN_007616d0();
  while ((piVar2 != (int *)0x0 && ((int *)*piVar2 != (int *)0x0))) {
    piVar3 = (int *)0x0;
    cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
    if (cVar1 != '\0') {
      piVar3 = (int *)*piVar2;
    }
    piVar2 = (int *)piVar2[1];
    if ((((piVar3 != (int *)0x0) && (cVar1 = (**(code **)(*piVar3 + 0x198))(0), cVar1 == '\0')) &&
        (cVar1 = FUN_00660e90(piVar3), cVar1 != '\0')) &&
       (fVar4 = (float10)FUN_004d7e90(piVar3,0), (float10)350.0 < fVar4)) {
      FUN_005f9200(DAT_00b333c4);
    }
  }
  return;
}



void FUN_00676940(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  if ((param_1 != 0) && (*(char *)(DAT_00b333c4 + 0x116) == '\0')) {
    iVar5 = 0;
    do {
      iVar3 = iVar5;
      if (((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 2)) {
        iVar3 = 3;
      }
      FUN_00673a50(iVar3);
      piVar2 = (int *)FUN_007616d0();
      while ((piVar2 != (int *)0x0 && ((int *)*piVar2 != (int *)0x0))) {
        piVar6 = (int *)0x0;
        cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
        if (cVar1 != '\0') {
          piVar6 = (int *)*piVar2;
        }
        piVar2 = (int *)piVar2[1];
        if (piVar6 != (int *)0x0) {
          if ((((int *)piVar6[0x16] != (int *)0x0) &&
              (iVar3 = (**(code **)(*(int *)piVar6[0x16] + 0x184))(), iVar3 != 0)) &&
             (*(char *)(iVar3 + 0x20) == '\x16')) {
            uVar4 = (**(code **)(*piVar6 + 0x380))();
            FUN_00602050(uVar4);
          }
          cVar1 = (**(code **)(*piVar6 + 0x198))(0);
          if ((cVar1 == '\0') && (cVar1 = FUN_00660f10(piVar6,0), cVar1 != '\0')) {
            FUN_005eae70();
            FUN_005f9200(param_1);
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  return;
}



void FUN_00676a40(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  undefined1 auStack_c [12];
  
  iVar5 = 0;
  do {
    if (iVar5 == 0) {
      FUN_00673a50(0);
      piVar2 = (int *)FUN_007616d0();
      while ((piVar2 != (int *)0x0 && ((int *)*piVar2 != (int *)0x0))) {
        piVar6 = (int *)0x0;
        cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
        if (cVar1 != '\0') {
          piVar6 = (int *)*piVar2;
        }
        piVar2 = (int *)piVar2[1];
        if ((((piVar6 != (int *)0x0) && (iVar3 = (**(code **)(*piVar6 + 0x380))(), iVar3 == 0)) &&
            (fVar7 = (float10)FUN_004d7e90(DAT_00b333c4,0), fVar7 < (float10)65.0)) &&
           (iVar3 = FUN_006ecc80(), iVar3 != 0)) {
          puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x174))();
          FUN_005e2e20(auStack_c,*puVar4,puVar4[1],puVar4[2],iVar3,0,0,0);
          (**(code **)(*piVar6 + 0x1cc))(auStack_c);
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return;
}



void FUN_00676d30(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = (int *)FUN_007616d0();
  while ((piVar2 != (int *)0x0 && ((int *)*piVar2 != (int *)0x0))) {
    piVar4 = (int *)0x0;
    cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
    if (cVar1 != '\0') {
      piVar4 = (int *)*piVar2;
    }
    piVar2 = (int *)piVar2[1];
    if (((piVar4 != (int *)0x0) && (cVar1 = FUN_005e6b40(), cVar1 != '\0')) &&
       (iVar3 = FUN_005eae10(), iVar3 != DAT_00b333c4)) {
      (**(code **)(*piVar4 + 0x30c))();
    }
  }
  return;
}



void FUN_00676e40(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x50);
  piVar3 = piVar1;
  if ((*(int *)(in_ECX + 0x54) == 0) && (*piVar1 == 0)) {
    return;
  }
  do {
    while( true ) {
      if (piVar3 == (int *)0x0) {
        return;
      }
      if ((piVar3[1] == 0) && (*piVar3 == 0)) {
        return;
      }
      iVar2 = *piVar3;
      iVar5 = FUN_009832e6(iVar2,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0);
      if (iVar5 != 0) break;
      piVar6 = (int *)FUN_009832e6(iVar2,0,&PTR_PTR_00b05538,&PTR_PTR_00b05b7c,0);
      if (piVar6 != (int *)0x0) {
        cVar4 = (**(code **)(*piVar6 + 0x220))();
        goto LAB_00676eb8;
      }
LAB_00676ecd:
      piVar1 = piVar3;
      piVar3 = (int *)piVar3[1];
    }
    cVar4 = FUN_006092a0();
LAB_00676eb8:
    if (cVar4 == '\0') goto LAB_00676ecd;
    FUN_0065c620(iVar2);
    if (piVar3 != piVar1) {
      piVar3 = (int *)piVar1[1];
    }
  } while( true );
}



void FUN_00676ee0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  for (puVar2 = (undefined4 *)FUN_007616d0(); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    uVar1 = *puVar2;
    piVar3 = (int *)FUN_009832e6(uVar1,0,&PTR_PTR_00b05538,&PTR_PTR_00b05b7c,0);
    if ((piVar3 != (int *)0x0) ||
       (piVar3 = (int *)FUN_009832e6(uVar1,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0),
       piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0x8c))(1);
    }
  }
  for (puVar2 = (undefined4 *)FUN_007616d0(); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    piVar3 = (int *)FUN_009832e6(*puVar2,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x8c))(1);
    }
  }
  return;
}



void FUN_00676f90(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = *(int **)(in_ECX + 0x28 + iVar3 * 4);
joined_r0x00676fac:
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) goto LAB_00676ffa;
    iVar2 = *piVar1;
    if (iVar2 == 0) {
LAB_00676fd7:
      piVar1 = (int *)piVar1[1];
      goto joined_r0x00676fac;
    }
    if ((*(int *)(iVar2 + 0xc) != param_1) && (*(int *)(iVar2 + 8) != param_1)) {
      FUN_00607110(param_1);
      goto LAB_00676fd7;
    }
    FUN_0065c620(iVar2);
    FUN_00605e80();
    FUN_00401f20(iVar2);
    iVar3 = 0;
LAB_00676ffa:
    iVar3 = iVar3 + 1;
    if (5 < iVar3) {
      return;
    }
  } while( true );
}



short FUN_00677010(void)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  
  sVar1 = 4;
  puVar5 = (undefined4 *)(in_ECX + 0x28);
  iVar4 = 6;
  do {
    sVar1 = sVar1 + 2;
    for (piVar2 = (int *)*puVar5; (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))));
        piVar2 = (int *)piVar2[1]) {
      sVar3 = FUN_006061f0();
      sVar1 = sVar1 + sVar3;
    }
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return sVar1;
}



void FUN_00677060(void)

{
  undefined2 *puVar1;
  int *piVar2;
  int in_ECX;
  undefined4 *puVar3;
  int local_8;
  int local_4;
  
  FUN_0045b9a0(&DAT_00b3bcf0,4);
  puVar3 = (undefined4 *)(in_ECX + 0x28);
  local_4 = 6;
  do {
    local_8 = 0;
    puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_8,2);
    for (piVar2 = (int *)*puVar3; (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))));
        piVar2 = (int *)piVar2[1]) {
      FUN_006062b0();
      local_8 = local_8 + 1;
    }
    puVar3 = puVar3 + 1;
    local_4 = local_4 + -1;
    *puVar1 = (undefined2)local_8;
  } while (local_4 != 0);
  return;
}



void FUN_006770f0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  uint uVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  ushort local_1c [2];
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c33eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004534d0(&DAT_00b3bcf0,4);
  FUN_00673b10(0);
  piVar7 = (int *)(in_ECX + 0x28);
  local_14 = 6;
  do {
    local_18 = piVar7;
    FUN_004534d0(local_1c,2);
    if (local_1c[0] != 0) {
      if (*piVar7 == 0) {
        puVar3 = (undefined4 *)FUN_00401f00(8,uVar2);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        *piVar7 = (int)puVar3;
      }
      uVar6 = 0;
      if (local_1c[0] != 0) {
        do {
          local_10 = FUN_00401f00(0x30);
          local_4 = 0;
          if (local_10 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00605e50();
          }
          local_4 = 0xffffffff;
          FUN_00606520();
          if (iVar4 != 0) {
            piVar7 = (int *)*piVar7;
            iVar1 = piVar7[1];
            while (iVar1 != 0) {
              piVar7 = (int *)piVar7[1];
              iVar1 = piVar7[1];
            }
            if (*piVar7 == 0) {
              *piVar7 = iVar4;
            }
            else {
              piVar5 = (int *)FUN_00401f00(8);
              if (piVar5 == (int *)0x0) {
                piVar7[1] = 0;
              }
              else {
                *piVar5 = iVar4;
                piVar5[1] = 0;
                piVar7[1] = (int)piVar5;
              }
            }
          }
          uVar6 = uVar6 + 1;
          piVar7 = local_18;
        } while (uVar6 < local_1c[0]);
      }
    }
    piVar7 = piVar7 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00677240(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(in_ECX + 0x28);
  iVar2 = 6;
  do {
    for (piVar1 = (int *)*puVar3; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
        piVar1 = (int *)piVar1[1]) {
      FUN_006071a0();
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void FUN_00677280(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)(in_ECX + 0x28);
  iVar5 = 6;
  do {
    piVar1 = (int *)*puVar4;
    if (piVar1 != (int *)0x0) {
      while (iVar2 = *piVar1, iVar2 != 0) {
        FUN_00605e80();
        FUN_00401f20(iVar2);
        piVar3 = (int *)piVar1[1];
        if (piVar3 == (int *)0x0) {
          *piVar1 = 0;
        }
        else {
          piVar1[1] = piVar3[1];
          *piVar1 = *piVar3;
          FUN_00401f20(piVar3);
        }
      }
    }
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}



void FUN_006772e0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  do {
    if (iVar5 == 0) {
      uVar6 = 3;
LAB_006772fa:
      iVar3 = FUN_00673a50(uVar6);
      if (iVar3 != 0) {
        for (piVar4 = (int *)FUN_007616d0(); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
          piVar1 = (int *)*piVar4;
          if (((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 400))(), cVar2 != '\0')) &&
             (cVar2 = (**(code **)(*piVar1 + 0x198))(0), cVar2 == '\0')) {
            (**(code **)(*piVar1 + 0x184))(1);
          }
        }
      }
    }
    else if (iVar5 == 1) {
      uVar6 = 2;
      goto LAB_006772fa;
    }
    iVar5 = iVar5 + 1;
    if (1 < iVar5) {
      return;
    }
  } while( true );
}



void FUN_00677360(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  for (piVar3 = (int *)FUN_007616d0(); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    piVar1 = (int *)*piVar3;
    if (((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 400))(), cVar2 != '\0')) &&
       (cVar2 = (**(code **)(*piVar1 + 0x198))(0), cVar2 == '\0')) {
      FUN_005eb370();
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_006773b0(char param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  float10 fVar8;
  undefined4 unaff_retaddr;
  float local_4;
  
  cVar7 = '\0';
  local_4 = _DAT_00b37b68;
  if (param_1 != '\0') {
    local_4 = _DAT_00b37b60;
  }
  piVar2 = (int *)FUN_007616d0();
  while ((piVar2 != (int *)0x0 && (((piVar2[1] != 0 || (*piVar2 != 0)) && (cVar7 == '\0'))))) {
    cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
    if ((((cVar1 != '\0') && (piVar4 = (int *)*piVar2, piVar4 != (int *)0x0)) &&
        (piVar4 != DAT_00b333c4)) &&
       ((cVar1 = (**(code **)(*piVar4 + 0x198))(0), cVar1 == '\0' &&
        (((uint)piVar4[2] >> 0xb & 1) == 0)))) {
      if (((int *)piVar4[0x16] != (int *)0x0) &&
         (iVar3 = (**(code **)(*(int *)piVar4[0x16] + 0x3d0))(), iVar3 != 0)) {
        piVar4 = (int *)(**(code **)(*(int *)piVar4[0x16] + 0x3d0))();
      }
      fVar8 = (float10)FUN_004d7e90(piVar4,0);
      if ((float)fVar8 <= local_4) {
        uVar5 = (**(code **)(*piVar4 + 0x224))(DAT_00b333c4);
        uVar6 = FUN_005e3270(0,100);
        uVar6 = (**(code **)(*piVar4 + 0x284))(0x21,unaff_retaddr,0,uVar6);
        iVar3 = FUN_00546190(uVar5,0,uVar6);
        if (0 < iVar3) {
          cVar7 = '\x01';
        }
      }
    }
    piVar2 = (int *)piVar2[1];
  }
  return cVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00677500(float param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  int local_8;
  undefined4 local_4;
  
  param_1 = *(float *)(in_ECX + 0xac) - param_1;
  *(float *)(in_ECX + 0xac) = param_1;
  if (0.0 < param_1) {
    return;
  }
  uVar9 = 0;
  param_1 = 0.0;
  local_8 = 0;
  local_4 = 0;
  for (piVar6 = (int *)FUN_007616d0();
      (piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0)))); piVar6 = (int *)piVar6[1]) {
    piVar1 = (int *)*piVar6;
    if ((piVar1 != (int *)0x0) && (cVar5 = (**(code **)(*piVar1 + 400))(), cVar5 != '\0')) {
      uVar9 = uVar9 + 1;
      iVar7 = FUN_005e0dc0();
      if ((((iVar7 == 2) && (piVar2 = (int *)piVar1[0x16], piVar2 != (int *)0x0)) &&
          (iVar7 = (**(code **)(*piVar2 + 8))(), iVar7 == 0)) &&
         (((iVar7 = (**(code **)(*piVar2 + 0x47c))(), iVar7 == 0 &&
           (cVar5 = (**(code **)(*piVar1 + 0x78))(), cVar5 == '\0')) &&
          ((cVar5 = FUN_004d9040(), cVar5 == '\0' &&
           ((cVar5 = FUN_004d7dd0(0), cVar5 == '\0' &&
            (fVar11 = (float10)(**(code **)(*piVar2 + 0x360))(), fVar11 < (float10)0.0)))))))) {
        iVar7 = FUN_004d79a0();
        if (iVar7 != 0) {
          FUN_004d79a0();
          cVar5 = FUN_0046cb60();
          if (cVar5 == '\0') goto LAB_0067762c;
        }
        param_1 = (float)((int)param_1 + 1);
        FUN_0067b1e0(piVar1);
      }
    }
LAB_0067762c:
  }
  if (uVar9 < 0x19) {
    cVar5 = '\0';
  }
  else {
    cVar5 = DAT_00b333b8;
    uVar4 = _DAT_00b37d58;
    if (DAT_00b333b8 != '\0') goto LAB_0067764d;
  }
  uVar4 = _DAT_00b37d40;
LAB_0067764d:
  *(undefined4 *)(in_ECX + 0xac) = uVar4;
  uVar8 = DAT_00b37d50;
  uVar10 = DAT_00b37d48;
  if (cVar5 != '\0') {
    uVar8 = DAT_00b37d68;
    uVar10 = DAT_00b37d60;
  }
  if ((uVar10 <= (uint)param_1) && (uVar8 <= uVar9)) {
    if (cVar5 == '\0') {
      iVar7 = 0;
      param_1 = 3.4028235e+38;
      piVar6 = &local_8;
      do {
        if ((piVar6[1] == 0) && (*piVar6 == 0)) break;
        iVar3 = *piVar6;
        if ((iVar3 != 0) &&
           ((iVar7 == 0 ||
            (fVar11 = (float10)(**(code **)(**(int **)(iVar3 + 0x58) + 0x360))(),
            fVar11 < (float10)param_1)))) {
          fVar11 = (float10)(**(code **)(**(int **)(iVar3 + 0x58) + 0x360))();
          param_1 = (float)fVar11;
          iVar7 = iVar3;
        }
        piVar6 = (int *)piVar6[1];
      } while (piVar6 != (int *)0x0);
      if (iVar7 != 0) {
        FUN_006331c0(iVar7);
      }
    }
    else {
      piVar6 = &local_8;
      while (((piVar6[1] != 0 || (*piVar6 != 0)) && (uVar10 <= (uint)param_1))) {
        if (*piVar6 != 0) {
          FUN_006331c0(*piVar6);
          param_1 = (float)((int)param_1 - 1);
        }
        piVar6 = (int *)piVar6[1];
        if (piVar6 == (int *)0x0) {
          FUN_004526e0();
          return;
        }
      }
    }
  }
  FUN_004526e0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00677760(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,int *param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float10 fVar10;
  int iStack_1c;
  int *local_18;
  int *piStack_14;
  undefined4 uStack_10;
  
  piVar3 = param_1;
  local_18 = (int *)0x0;
  iVar5 = (**(code **)(*param_1 + 0x330))();
  if (iVar5 != 0) {
    (**(code **)(*piVar3 + 0x330))();
    local_18 = (int *)FUN_006135f0();
  }
  piVar6 = (int *)FUN_007616d0();
  do {
    if ((piVar6 == (int *)0x0) || ((piVar6[1] == 0 && (*piVar6 == 0)))) {
      return;
    }
    cVar4 = (**(code **)(*(int *)*piVar6 + 400))();
    if ((cVar4 != '\0') &&
       ((((piVar2 = (int *)*piVar6, piVar2 != (int *)0x0 && (piVar2 != param_6)) &&
         (piVar2 != piVar3)) &&
        (((cVar4 = (**(code **)(*piVar2 + 0x334))(1), cVar4 == '\0' &&
          (cVar4 = (**(code **)(*piVar2 + 0x198))(0), cVar4 == '\0')) &&
         ((((uint)piVar2[2] >> 0xb & 1) == 0 &&
          (fVar10 = (float10)FUN_004d7e30(&param_2), fVar10 <= (float10)_DAT_00b36948)))))))) {
      param_1 = (int *)((uint)param_1 & 0xffffff00);
      iVar5 = FUN_005f6540(0,piVar3,&param_1,0,0,0);
      uVar9 = 0;
      if (local_18 != (int *)0x0) {
        uVar9 = (**(code **)(*piVar2 + 0x224))(local_18);
      }
      (**(code **)(*(int *)piVar2[0x16] + 0x1c8))(piVar3);
      FUN_009828c0();
      uStack_10 = 0;
      piStack_14 = piVar6;
      if (iStack_1c != 0) {
        piStack_14 = (int *)FUN_0067cf50(0xc,iStack_1c);
        piVar6 = piStack_14;
        if (piStack_14 != (int *)0x0) {
          do {
            if (*piVar6 == 0) break;
            iVar7 = FUN_0067b6b0(iStack_1c,0);
            if ((iVar7 != 0) && (*(char *)(iVar7 + 4) != '\0')) {
              uStack_10 = 1;
              break;
            }
            piVar1 = piVar6 + 1;
            piVar6 = (int *)*piVar1;
          } while ((int *)*piVar1 != (int *)0x0);
          FUN_004526e0();
        }
        FUN_00401f20(piStack_14);
        piVar6 = local_18;
      }
      uVar8 = (**(code **)(*piVar2 + 0x284))(0x24);
      uVar8 = FUN_005e3270(piStack_14,uVar8);
      fVar10 = (float10)FUN_004d7e90(piVar3,0);
      uVar8 = (**(code **)(*piVar2 + 0x284))(0x21,(float)fVar10,uStack_10,uVar8);
      uVar9 = (**(code **)(*piVar2 + 0x224))(piVar3,uVar9,uVar8);
      iVar7 = FUN_00546190(uVar9);
      if (((iStack_1c < 1) || (iVar7 < 1)) || (0 < iVar5)) {
        cVar4 = FUN_005e0f30();
        if ((cVar4 != '\0') && (0 < iStack_1c)) {
          (**(code **)(*piVar2 + 800))();
        }
      }
      else {
        (**(code **)(*(int *)piVar2[0x16] + 0x228))(piVar2,piVar3,0,0,0,1,0,0,0,0);
      }
    }
    piVar6 = (int *)piVar6[1];
  } while( true );
}



void FUN_00677a00(void)

{
  char cVar1;
  int *piVar2;
  
  for (piVar2 = (int *)FUN_007616d0();
      (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0)))); piVar2 = (int *)piVar2[1]) {
    cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
    if ((cVar1 != '\0') && (*piVar2 != 0)) {
      FUN_005e4fc0();
    }
  }
  for (piVar2 = (int *)FUN_007616d0();
      (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0)))); piVar2 = (int *)piVar2[1]) {
    cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
    if ((cVar1 != '\0') && (*piVar2 != 0)) {
      FUN_005e4fc0();
    }
  }
  if (DAT_00b333c4 == 0) {
    return;
  }
  FUN_005e4fc0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00677a90(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  float10 fVar5;
  
  iVar4 = *(int *)(in_ECX + 100);
  while (iVar4 != 0) {
    iVar4 = *(int *)(*(int *)(in_ECX + 100) + 4);
    FUN_00401f20(*(int *)(in_ECX + 100));
    *(int *)(in_ECX + 100) = iVar4;
  }
  *(undefined4 *)(in_ECX + 0x60) = 0;
  piVar2 = (int *)FUN_007616d0();
  iVar4 = 0;
  do {
    if ((piVar2 == (int *)0x0) || ((piVar2[1] == 0 && (*piVar2 == 0)))) {
      return;
    }
    cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
    if (cVar1 != '\0') {
      iVar4 = *piVar2;
    }
    if ((iVar4 != 0) &&
       (fVar5 = (float10)FUN_004d7e90(DAT_00b333c4,0), (float)fVar5 < _DAT_00b36cd8)) {
      piVar3 = &DAT_00b3bd60;
      do {
        if (*piVar3 == iVar4) goto LAB_00677b36;
        piVar3 = (int *)piVar3[1];
      } while (piVar3 != (int *)0x0);
      FUN_00446cb0(iVar4);
    }
LAB_00677b36:
    piVar2 = (int *)piVar2[1];
  } while( true );
}



void FUN_00677b50(int *param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    for (piVar1 = (int *)(in_ECX + 0x58);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      piVar7 = (int *)*piVar1;
      cVar2 = (**(code **)(*piVar7 + 0x188))();
      if ((cVar2 != '\0') && (piVar7 != param_1)) {
        iVar3 = FUN_009832e6(piVar7,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
        if (iVar3 == 0) {
          if ((param_2 != '\0') &&
             (piVar7 = (int *)FUN_009832e6(piVar7,0,&PTR_PTR_00b05538,&PTR_PTR_00b05b7c,0),
             piVar7 != (int *)0x0)) {
            iVar3 = *piVar7;
            uVar4 = (**(code **)(*param_1 + 0x120))();
            (**(code **)(iVar3 + 0x218))(uVar4);
          }
        }
        else {
          if (param_2 != '\0') {
            uVar4 = (**(code **)(*param_1 + 0x120))();
            FUN_005e69e0(uVar4);
          }
          piVar7 = *(int **)(iVar3 + 0x58);
          if (piVar7 != (int *)0x0) {
            iVar5 = (**(code **)(*param_1 + 0x124))();
            iVar6 = (**(code **)(*piVar7 + 0x2b0))();
            if (iVar6 == iVar5) {
              (**(code **)(**(int **)(iVar3 + 0x58) + 0x2b4))(0);
            }
          }
        }
      }
    }
  }
  return;
}



int * FUN_00677c70(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00677ccb) */
/* WARNING: Removing unreachable block (ram,0x00677cd9) */

undefined1 FUN_00677ca0(void)

{
  undefined1 uVar1;
  int *in_ECX;
  
  if ((in_ECX[1] == 0) && (*in_ECX == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_00677cf0(undefined4 *param_1)

{
  int iVar1;
  LONG LVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c4833;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = in_ECX[1];
    while (iVar1 != 0) {
      in_ECX = (int *)in_ECX[1];
      iVar1 = in_ECX[1];
    }
    if (*in_ECX == 0) {
      FUN_0055e2a0();
    }
    else {
      iVar1 = FUN_00401f00();
      local_4 = CONCAT31(local_4._1_3_,1);
      if (iVar1 == 0) {
        in_ECX[1] = 0;
      }
      else {
        InterlockedIncrement(param_1 + 1);
        iVar1 = FUN_00532df0();
        in_ECX[1] = iVar1;
      }
    }
    local_4 = 0xffffffff;
    LVar2 = InterlockedDecrement(param_1 + 1);
    if (LVar2 == 0) {
      (**(code **)*param_1)();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00677dd0(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a72044;
  in_ECX[6] = 0;
  in_ECX[2] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 4),uVar2);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,4,param_2,FUN_004bddb0);
  }
  in_ECX[3] = pvVar3;
  lVar1 = (ulonglong)(uint)(param_1 * 3) * 4;
  local_4 = 0xffffffff;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[1] = uVar4;
  in_ECX[4] = param_3;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00677ec0(float param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  undefined4 *puVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  undefined4 uVar11;
  int in_ECX;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float local_24;
  undefined4 *puStack_20;
  int *piStack_1c;
  float fStack_14;
  
  DAT_00b3b935 = 0;
  piVar7 = (int *)FUN_007616d0();
  iVar12 = 0;
  local_24 = 0.0;
  *(int **)(in_ECX + 0x78) = piVar7;
  for (piVar1 = piVar7; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      iVar12 = iVar12 + 1;
    }
  }
  *(int *)(in_ECX + 0xa8) = iVar12;
  do {
    if ((piVar7 == (int *)0x0) ||
       ((piVar1 = *(int **)(in_ECX + 0x78), piVar1[1] == 0 && (*piVar1 == 0)))) {
      FUN_00677500(_DAT_00b33e9c);
      return;
    }
    piVar1 = (int *)*piVar1;
    if ((piVar1 != (int *)0x0) && (uVar2 = piVar1[2], (uVar2 >> 0x15 & 1) == 0)) {
      if (((uVar2 >> 5 & 1) == 0) &&
         ((((uVar2 >> 0xb & 1) == 0 && (piVar1[0x16] != 0)) && (iVar8 = FUN_00659a00(), iVar8 == 0))
         )) {
        fVar13 = (float10)FUN_004d7e90(DAT_00b333c4,0);
        bVar3 = true;
        cVar6 = (**(code **)(*piVar1 + 400))();
        piVar7 = (int *)0x0;
        if (cVar6 == '\0') {
LAB_00677ff2:
          (**(code **)(*piVar1 + 0x1c0))(param_1);
        }
        else {
          cVar6 = FUN_005f1330();
          piVar7 = piVar1;
          if (cVar6 == '\0') {
            iVar8 = FUN_0065a2c0();
            if ((iVar8 == 0) && (iVar8 = (**(code **)(*piVar1 + 0x154))(), iVar8 != 0)) {
              (**(code **)(*piVar1 + 0x148))();
            }
            goto LAB_00677ff2;
          }
          (**(code **)(*(int *)piVar1[0x16] + 0x18))(piVar1,0);
          *(undefined1 *)(piVar1[0x16] + 0x1d1) = 1;
          bVar3 = false;
          (**(code **)(*(int *)piVar1[0x16] + 0x20))();
        }
        if ((piVar7 != (int *)0x0) && (cVar6 = FUN_0065d550(), cVar6 != '\0')) {
          FUN_005f2530(0x40000000);
          FUN_005f25f0(0x40000000,1);
          FUN_005f2720(0x40000000);
        }
        iVar8 = FUN_00659a00();
        if (iVar8 != 0) {
          *(undefined4 *)(in_ECX + 0x78) = 0;
        }
        iVar8 = (**(code **)(*piVar1 + 0x170))();
        if ((((iVar8 != 0) && (iVar8 = FUN_00659a00(), iVar8 == 0)) &&
            (cVar6 = (**(code **)(*piVar1 + 400))(), cVar6 != '\0')) &&
           ((piVar1 != DAT_00b333c4 && (cVar6 = FUN_0045a500(), cVar6 == '\0')))) {
          fVar14 = (float10)(**(code **)(*piVar1 + 0x1d8))();
          if (((float10)0.0 <= fVar14) ||
             ((iVar8 = FUN_005e0dc0(), iVar8 == 3 ||
              (cVar6 = (**(code **)(*piVar1 + 0x198))(0), cVar6 != '\0')))) {
            (**(code **)(*piVar1 + 0x1dc))();
          }
          else {
            (**(code **)(*piVar1 + 0x1d4))(local_24);
            if ((piVar7 != (int *)0x0) &&
               (pfVar9 = (float *)FUN_00403c00(), (float)fVar13 < *pfVar9)) {
              FUN_00674820(piVar7,(float)fVar13);
            }
            fVar4 = (float)iVar12;
            if (iVar12 < 0) {
              fVar4 = fVar4 + 4.2949673e+09;
            }
            local_24 = fVar4 * 0.25 * _DAT_00b33e9c + local_24;
          }
        }
        if (((bVar3) && (piVar1 != (int *)0xffffffbc)) && (iVar8 = FUN_00420ef0(), iVar8 != 0)) {
          piStack_1c = (int *)FUN_00401f00(8);
          if (piStack_1c == (int *)0x0) {
            piStack_1c = (int *)0x0;
          }
          else {
            *piStack_1c = 0;
            piStack_1c[1] = 0;
          }
          puStack_20 = (undefined4 *)FUN_00401f00(8);
          if (puStack_20 == (undefined4 *)0x0) {
            puStack_20 = (undefined4 *)0x0;
          }
          else {
            *puStack_20 = 0;
            puStack_20[1] = 0;
          }
          for (piVar1 = *(int **)(iVar8 + 0xc);
              (puVar5 = puStack_20, piVar1 != (int *)0x0 && (*piVar1 != 0));
              piVar1 = (int *)piVar1[1]) {
            FUN_0067b1e0(*piVar1);
          }
          for (; (piVar1 = piStack_1c, puVar5 != (undefined4 *)0x0 &&
                 (piVar7 = (int *)*puVar5, piVar7 != (int *)0x0)); puVar5 = (undefined4 *)puVar5[1])
          {
            if ((piVar7 != DAT_00b333c4) && (piVar7[0x16] != 0)) {
              iVar8 = FUN_005e03a0();
              iVar10 = FUN_0041fb20();
              if (iVar10 != 0) {
                iVar8 = iVar10;
              }
              if ((iVar8 == 0) ||
                 ((*(char *)(iVar8 + 0x20) != '\x01' && (*(char *)(iVar8 + 0x20) != '\a')))) {
                FUN_00446cb0(piVar7);
              }
              else {
                iVar8 = FUN_00659a00();
                if (iVar8 != 0) {
                  fStack_14 = param_1;
                  if (param_1 <= 0.0) {
                    fStack_14 = 3600.0;
                  }
                  if (iVar8 == 3) {
                    iVar8 = *(int *)piVar7[0x16];
                    fVar13 = (float10)FUN_00402bd0();
                    (**(code **)(iVar8 + 0x1c))((float)(fVar13 - (float10)1.0));
                  }
                  (**(code **)(*piVar7 + 0x1c0))(fStack_14);
                }
              }
            }
          }
          for (; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
            FUN_00424d00(*piVar1);
          }
          FUN_004526e0();
          FUN_00401f20(piStack_1c);
          FUN_004526e0();
          FUN_00401f20(puStack_20);
          cVar6 = FUN_0046cb60();
          if (cVar6 != '\0') {
            FUN_00420f00();
          }
        }
      }
      if (*(int *)(in_ECX + 0x78) == 0) {
        *(int *)(in_ECX + 0x78) = *(int *)(in_ECX + 0x74);
        if (*(int *)(in_ECX + 0x74) == 0) {
          uVar11 = FUN_007616d0();
          *(undefined4 *)(in_ECX + 0x78) = uVar11;
        }
      }
      else {
        *(int *)(in_ECX + 0x74) = *(int *)(in_ECX + 0x78);
      }
      iVar8 = *(int *)(in_ECX + 0x78);
      if (iVar8 != 0) {
        *(int *)(in_ECX + 0x74) = iVar8;
        *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(iVar8 + 4);
      }
    }
    piVar7 = *(int **)(in_ECX + 0x78);
  } while( true );
}



void FUN_00678390(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  LONG LVar5;
  int in_ECX;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c489a;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 6;
  puVar6 = (undefined4 *)(in_ECX + 0x28);
  local_14 = 6;
  do {
    piVar1 = (int *)*puVar6;
    if (piVar1 != (int *)0x0) {
      while (iVar2 = *piVar1, iVar2 != 0) {
        FUN_00605e80();
        FUN_00401f20(iVar2,uVar4);
        piVar3 = (int *)piVar1[1];
        if (piVar3 == (int *)0x0) {
          *piVar1 = 0;
        }
        else {
          piVar1[1] = piVar3[1];
          *piVar1 = *piVar3;
          FUN_00401f20(piVar3,uVar4);
        }
      }
    }
    FUN_00401f20(piVar1,uVar4);
    puVar6 = puVar6 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  iVar2 = *(int *)(in_ECX + 0x54);
  while (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x54) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x54));
    *(int *)(in_ECX + 0x54) = iVar2;
  }
  *(undefined4 *)(in_ECX + 0x50) = 0;
  iVar2 = *(int *)(in_ECX + 100);
  while (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 100) + 4);
    FUN_00401f20(*(int *)(in_ECX + 100));
    *(int *)(in_ECX + 100) = iVar2;
  }
  *(undefined4 *)(in_ECX + 0x60) = 0;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 5;
  FUN_00643230();
  local_4._0_1_ = 4;
  FUN_004526e0();
  puVar6 = *(undefined4 **)(in_ECX + 0x48);
  local_4._0_1_ = 3;
  if (((puVar6 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
     (puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  puVar6 = *(undefined4 **)(in_ECX + 0x40);
  local_4._0_1_ = 2;
  if (((puVar6 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
     (puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  local_4._0_1_ = 1;
  FUN_004526e0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004526e0();
  local_4 = 0xffffffff;
  FUN_004526e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00678510(void)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  int in_ECX;
  float10 extraout_ST0;
  float10 fVar4;
  float10 extraout_ST1;
  
  _DAT_00b3bcf4 = 0x6e;
  if (DAT_00b3bf80 != 0) {
    FUN_00683420();
  }
  FUN_0060dea0();
  FUN_00673b10(_DAT_00b3bcf0 + _DAT_00b33e9c);
  iVar2 = FUN_009828c0();
  bVar3 = true;
  fVar1 = (float)((float10)*(float *)(in_ECX + 0x24) + extraout_ST1);
  fVar4 = (float10)fVar1;
  *(float *)(in_ECX + 0x24) = fVar1;
  if (iVar2 < 0x32) {
    if (iVar2 < 10) {
      if ((float10)1 <= fVar4) {
        *(undefined4 *)(in_ECX + 0x24) = 0;
      }
      else {
        bVar3 = false;
        *(float *)(in_ECX + 0x24) = (float)(fVar4 + extraout_ST1);
      }
    }
    else if ((float10)1 <= fVar4) {
      *(undefined4 *)(in_ECX + 0x24) = 0;
    }
    else {
      bVar3 = false;
      *(float *)(in_ECX + 0x24) = (float)((extraout_ST0 - extraout_ST1) * (float10)0.5 + fVar4);
    }
  }
  _DAT_00b3bcf4 = 0x78;
  if (bVar3) {
    if ((*(char *)(in_ECX + 0xa1) != '\0') && (DAT_00b333b8 == '\0')) {
      FUN_00673c10(0,0);
    }
    _DAT_00b3bcf4 = 0x82;
    if ((*(char *)(in_ECX + 0xa3) != '\0') && (DAT_00b333b8 == '\0')) {
      FUN_00673e90(0,0);
    }
    _DAT_00b3bcf4 = 0x8c;
    if (*(char *)(in_ECX + 0xa2) != '\0') {
      FUN_00674200(0,0);
    }
  }
  _DAT_00b3bcf4 = 0xb4;
  if (*(char *)(in_ECX + 0xa0) == '\0') {
    _DAT_00b3bcf4 = 0xbe;
    return;
  }
  FUN_00677ec0(0,0);
  _DAT_00b3bcf4 = 0xbe;
  return;
}



void FUN_006786a0(int *param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar1 = param_1;
  while ((piVar1 != (int *)0x0 && ((int *)*piVar1 != (int *)0x0))) {
    piVar4 = (int *)0x0;
    cVar2 = (**(code **)(*(int *)*piVar1 + 0x188))();
    if (cVar2 != '\0') {
      piVar4 = (int *)*piVar1;
    }
    piVar1 = (int *)piVar1[1];
    if (piVar4 != (int *)0x0) {
      if (param_2 == '\0') {
        FUN_006748b0(piVar4);
      }
      else if ((((uint)piVar4[2] >> 5 & 1) == 0) && (((uint)piVar4[2] >> 0xb & 1) == 0)) {
        if (((piVar4 != DAT_00b333c4) && (piVar4[0x16] != 0)) &&
           (cVar2 = (**(code **)(*piVar4 + 0x1c4))(), cVar2 == '\0')) {
          piVar1 = param_1;
        }
      }
      else if (piVar4[0x16] != 0) {
        uVar3 = FUN_00659a00();
        FUN_00674550(piVar4,uVar3);
        FUN_00659bc0();
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00678d0a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00678750(void)

{
  undefined1 uVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  undefined4 unaff_EBP;
  int *piVar12;
  float10 fVar13;
  undefined4 uVar14;
  int *local_60;
  int *local_58;
  int iStack_54;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_34 [52];
  
  local_58 = (int *)FUN_007616d0();
  local_60 = (int *)(DAT_00b333a0 + 0x80);
joined_r0x00678776:
  do {
    if ((local_58 == (int *)0x0) || ((int *)*local_58 == (int *)0x0)) {
      FUN_004418a0();
      return;
    }
    cVar4 = (**(code **)(*(int *)*local_58 + 400))();
    if ((((cVar4 != '\0') && (piVar2 = (int *)*local_58, piVar2 != (int *)0x0)) &&
        (cVar4 = FUN_005e32d0(), cVar4 != '\0')) &&
       (iVar6 = (**(code **)(*piVar2 + 0x18c))(), iVar6 == 0)) {
      iVar6 = (**(code **)(*(int *)piVar2[0x16] + 8))();
      if (iVar6 != 0) {
        local_58 = (int *)local_58[1];
        goto joined_r0x00678776;
      }
      (**(code **)(*piVar2 + 0x368))(_DAT_00b3bcf0);
      local_58 = (int *)FUN_004d8af0();
      piVar12 = (int *)0x0;
      iVar6 = FUN_005e3dc0();
      piVar7 = (int *)FUN_005e2e00();
      piVar8 = (int *)FUN_005e0380();
      iStack_54 = 0;
      if (iVar6 != 0) {
        iStack_54 = FUN_005697e0();
      }
      pfVar9 = (float *)(**(code **)(*(int *)piVar2[0x16] + 0x380))();
      if ((((piVar7 == (int *)0x0) || (cVar4 = FUN_004d74b0(), cVar4 == '\0')) ||
          (iVar6 = FUN_004d8af0(), iVar6 != iStack_54)) &&
         (((piVar8 == (int *)0x0 || (cVar4 = FUN_004d74b0(), cVar4 == '\0')) ||
          (iVar6 = FUN_004d8af0(), piVar7 = piVar8, iVar6 != iStack_54)))) {
        fVar3 = fStack_4c;
        if (fStack_4c != 0.0) {
          if ((*(char *)((int)fStack_4c + 0x20) == '\x04') &&
             (cVar4 = FUN_00566dc0(piVar2,0,0xbf800000), cVar4 != '\0')) {
            cVar4 = FUN_005e0f30();
            if (cVar4 == '\0') {
              (**(code **)(*(int *)piVar2[0x16] + 0x17c))(1);
            }
            if (local_60 != (int *)0x0) {
              do {
                if ((local_60[1] == 0) && (*local_60 == 0)) break;
                if (piVar12 != (int *)0x0) goto LAB_00678aeb;
                piVar7 = (int *)*local_60;
                iVar6 = FUN_004d8af0();
                piVar8 = piVar12;
                if ((iVar6 == iStack_54) &&
                   ((iVar6 = FUN_004db6b0(), iVar6 == 0 ||
                    (cVar4 = FUN_004de770(piVar2,1), cVar4 != '\0')))) {
                  (**(code **)(*piVar7 + 0x170))();
                  cVar4 = FUN_004ae5a0();
                  if ((cVar4 == '\0') ||
                     ((iVar6 = FUN_004d73f0(), iVar6 != -1 &&
                      (cVar4 = FUN_004db9d0(iVar6,pfVar9), piVar8 = piVar7, cVar4 != '\0'))))
                  goto LAB_006789b2;
                  FUN_0065c620(piVar7);
                  local_60 = (int *)(DAT_00b333a0 + 0x80);
                }
                else {
LAB_006789b2:
                  local_60 = (int *)local_60[1];
                  piVar12 = piVar8;
                }
              } while (local_60 != (int *)0x0);
LAB_00678ae3:
              if (piVar12 != (int *)0x0) {
LAB_00678aeb:
                iVar6 = (**(code **)(*piVar2 + 0x154))();
                if (iVar6 != 0) {
                  (**(code **)(*piVar12 + 0x170))();
                  FUN_0065ac20(1);
                  fStack_4c = (float)*(ushort *)(pfVar9 + 3) / 1000.0;
                  (**(code **)(*piVar2 + 0x1e8))(fStack_4c);
                  uVar1 = *(undefined1 *)((int)pfVar9 + 0xe);
                  fVar13 = (float10)(**(code **)(*piVar2 + 0xec))();
                  FUN_004aeb40(&fStack_4c,uVar1,(float)fVar13);
                  FUN_0070fdd0((float)*(ushort *)(pfVar9 + 3) / 1000.0);
                  pfVar10 = (float *)FUN_007101f0(auStack_34,&fStack_4c);
                  fStack_4c = *pfVar10;
                  fStack_48 = pfVar10[1];
                  fStack_44 = pfVar10[2];
                  *(undefined4 *)(piVar2[0x16] + 4) = 2;
                  FUN_004d7300(local_60,1);
                  fStack_40 = *pfVar9 + fStack_4c;
                  fStack_3c = pfVar9[1] + fStack_48;
                  fStack_38 = pfVar9[2] + fStack_44;
                  (**(code **)(*piVar2 + 0x1cc))(&fStack_40);
                  pfVar10 = pfVar9;
                  FUN_0065a2c0(pfVar9);
                  FUN_00452a10(pfVar10);
                  uVar11 = (uint)*(byte *)((int)pfVar9 + 0xe);
                  (**(code **)(*piVar12 + 0x170))(uVar11);
                  fVar13 = (float10)FUN_004aebe0(uVar11);
                  FUN_00659b90((float)fVar13);
                  cVar4 = (char)((uint)unaff_EBP >> 0x10);
                  if (cVar4 == '\0') {
                    (**(code **)(*(int *)piVar2[0x16] + 0x370))(piVar2,1,piVar12,local_60);
                  }
                  else {
                    (**(code **)(*(int *)piVar2[0x16] + 0x370))(piVar2,6,piVar12,local_60);
                    (**(code **)(*(int *)piVar2[0x16] + 0x17c))(1);
                    (**(code **)(*(int *)piVar2[0x16] + 0x80))(piVar2,0);
                  }
                  cVar5 = (**(code **)(*(int *)piVar2[0x16] + 900))(piVar2);
                  if (cVar5 == '\0') {
                    piVar7 = (int *)0x7f;
                    piVar12 = (int *)0x0;
                    uVar14 = 0;
                  }
                  else {
                    piVar7 = local_60;
                    if (cVar4 == '\0') {
                      uVar14 = 4;
                    }
                    else {
                      piVar8 = (int *)FUN_005e12b0();
                      if (piVar8 != (int *)0x0) {
                        (**(code **)(*piVar8 + 0x9c))(1,0);
                      }
                      uVar14 = 9;
                    }
                  }
                  (**(code **)(*(int *)piVar2[0x16] + 0x370))(piVar2,uVar14,piVar12,piVar7);
                }
              }
            }
          }
          else if ((*(char *)((int)fVar3 + 0x20) == '\x03') &&
                  (cVar4 = FUN_00566dc0(piVar2,0,0xbf800000), cVar4 != '\0')) {
            cVar4 = FUN_005e6fa0();
            if (cVar4 == '\0') {
              (**(code **)(*(int *)piVar2[0x16] + 0x188))(piVar2,1);
              (**(code **)(*piVar2 + 0x17c))(1);
            }
            if (local_60 != (int *)0x0) {
              do {
                if ((local_60[1] == 0) && (*local_60 == 0)) break;
                if (piVar12 != (int *)0x0) goto LAB_00678aeb;
                piVar7 = (int *)*local_60;
                iVar6 = FUN_004d8af0();
                piVar8 = piVar12;
                if (((iVar6 == iStack_54) && (piVar7 != (int *)0x0)) &&
                   ((iVar6 = FUN_004db6b0(), iVar6 == 0 ||
                    (cVar4 = FUN_004de770(piVar2,1), cVar4 != '\0')))) {
                  (**(code **)(*piVar7 + 0x170))();
                  cVar4 = FUN_004ae590();
                  if ((cVar4 == '\0') ||
                     ((iVar6 = FUN_004d73f0(), iVar6 != -1 &&
                      (cVar4 = FUN_004db9d0(iVar6,pfVar9), piVar8 = piVar7, cVar4 != '\0'))))
                  goto LAB_00678acd;
                  FUN_0065c620(piVar7);
                  local_60 = (int *)(DAT_00b333a0 + 0x80);
                }
                else {
LAB_00678acd:
                  local_60 = (int *)local_60[1];
                  piVar12 = piVar8;
                }
              } while (local_60 != (int *)0x0);
              goto LAB_00678ae3;
            }
          }
        }
      }
      else {
        piVar12 = piVar7;
        (**(code **)(*piVar12 + 0x170))();
        FUN_004ae5a0();
        iVar6 = FUN_004d73f0();
        if ((iVar6 != -1) && (cVar4 = FUN_004db9d0(iVar6,pfVar9), cVar4 != '\0')) goto LAB_00678ae3;
      }
    }
    local_58 = (int *)local_58[1];
  } while( true );
}



void FUN_00678d30(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x54))();
    if (iVar1 - 4U < 3) {
      InterlockedIncrement(param_1 + 1);
      FUN_00677cf0();
      return;
    }
    InterlockedIncrement(param_1 + 1);
    FUN_00677cf0();
  }
  return;
}



void FUN_00678d90(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  bool bVar4;
  LONG LVar5;
  int *piVar6;
  undefined *puVar7;
  int in_ECX;
  undefined4 *puVar8;
  
  bVar4 = false;
  piVar1 = (int *)(in_ECX + 0x48);
  puVar8 = param_1;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    puVar8 = (undefined4 *)0x0;
    bVar4 = true;
    if (*piVar1 == 0) {
      bVar2 = true;
      goto LAB_00678db7;
    }
  }
  bVar2 = false;
LAB_00678db7:
  if (((bVar4) && (puVar8 != (undefined4 *)0x0)) &&
     (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) {
    (**(code **)*puVar8)(1);
  }
  puVar8 = param_1;
  if (!bVar2) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar6 = (int *)FUN_00677c70(&param_1);
      puVar3 = param_1;
      piVar6 = (int *)*piVar6;
      if (((param_1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(param_1 + 1), LVar5 == 0)
          ) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      if (piVar6 != (int *)0x0) {
        for (puVar7 = (undefined *)(**(code **)(*piVar6 + 4))(); puVar7 != (undefined *)0x0;
            puVar7 = *(undefined **)(puVar7 + 4)) {
          if (puVar7 == &DAT_00b3c0bc) {
            if ((undefined4 *)piVar6[7] == puVar8) {
              (**(code **)(*piVar6 + 0x6c))();
              *(undefined1 *)(piVar6 + 9) = 1;
            }
            break;
          }
        }
      }
    }
  }
  return;
}



void FUN_00678e70(int param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  bool bVar4;
  LONG LVar5;
  int *piVar6;
  undefined *puVar7;
  int in_ECX;
  undefined4 *puVar8;
  
  bVar4 = false;
  piVar1 = (int *)(in_ECX + 0x48);
  puVar8 = param_2;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    puVar8 = (undefined4 *)0x0;
    bVar4 = true;
    if (*piVar1 == 0) {
      bVar2 = true;
      goto LAB_00678e97;
    }
  }
  bVar2 = false;
LAB_00678e97:
  if (((bVar4) && (puVar8 != (undefined4 *)0x0)) &&
     (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) {
    (**(code **)*puVar8)(1);
  }
  puVar8 = param_2;
  if (!bVar2) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar6 = (int *)FUN_00677c70(&param_2);
      puVar3 = param_2;
      piVar6 = (int *)*piVar6;
      if (((param_2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(param_2 + 1), LVar5 == 0)
          ) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      if (piVar6 != (int *)0x0) {
        for (puVar7 = (undefined *)(**(code **)(*piVar6 + 4))(); puVar7 != (undefined *)0x0;
            puVar7 = *(undefined **)(puVar7 + 4)) {
          if (puVar7 == &DAT_00b3c0d4) {
            if ((piVar6[7] == param_1) && ((undefined4 *)piVar6[0xd] == puVar8)) {
              *(undefined1 *)(piVar6 + 9) = 1;
            }
            break;
          }
        }
      }
    }
  }
  return;
}



void FUN_00678f50(int param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  LONG LVar4;
  int *piVar5;
  undefined *puVar6;
  byte *pbVar7;
  int iVar8;
  int in_ECX;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  
  bVar11 = false;
  piVar1 = (int *)(in_ECX + 0x48);
  pbVar10 = param_2;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    pbVar10 = (byte *)0x0;
    bVar11 = true;
    if (*piVar1 == 0) {
      bVar3 = true;
      goto LAB_00678f77;
    }
  }
  bVar3 = false;
LAB_00678f77:
  if (((bVar11) && (pbVar10 != (byte *)0x0)) &&
     (LVar4 = InterlockedDecrement((LONG *)(pbVar10 + 4)), LVar4 == 0)) {
    (*(code *)**(undefined4 **)pbVar10)(1);
  }
  pbVar10 = param_2;
  if (bVar3) {
    return;
  }
joined_r0x00678fa3:
  if (piVar1 == (int *)0x0) {
    return;
  }
  piVar5 = (int *)FUN_00677c70(&param_2);
  pbVar7 = param_2;
  piVar5 = (int *)*piVar5;
  if (((param_2 != (byte *)0x0) && (LVar4 = InterlockedDecrement((LONG *)(param_2 + 4)), LVar4 == 0)
      ) && (pbVar7 != (byte *)0x0)) {
    (*(code *)**(undefined4 **)pbVar7)(1);
  }
  if (piVar5 != (int *)0x0) {
    for (puVar6 = (undefined *)(**(code **)(*piVar5 + 4))(); puVar6 != (undefined *)0x0;
        puVar6 = *(undefined **)(puVar6 + 4)) {
      if (puVar6 == &DAT_00b3c0c4) {
        if (piVar5[7] == param_1) {
          pbVar7 = (byte *)piVar5[0xb];
          pbVar9 = pbVar10;
          goto LAB_00679013;
        }
        break;
      }
    }
  }
  goto LAB_00679040;
  while( true ) {
    bVar2 = pbVar7[1];
    bVar11 = bVar2 < pbVar9[1];
    if (bVar2 != pbVar9[1]) goto LAB_00679033;
    pbVar7 = pbVar7 + 2;
    pbVar9 = pbVar9 + 2;
    if (bVar2 == 0) break;
LAB_00679013:
    bVar2 = *pbVar7;
    bVar11 = bVar2 < *pbVar9;
    if (bVar2 != *pbVar9) {
LAB_00679033:
      iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00679038;
    }
    if (bVar2 == 0) break;
  }
  iVar8 = 0;
LAB_00679038:
  if (iVar8 == 0) {
    *(undefined1 *)(piVar5 + 9) = 1;
  }
LAB_00679040:
  piVar1 = (int *)piVar1[1];
  goto joined_r0x00678fa3;
}



/* WARNING: Removing unreachable block (ram,0x0067908f) */
/* WARNING: Removing unreachable block (ram,0x0067909d) */

void FUN_00679060(void)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  LONG LVar5;
  undefined *puVar6;
  int in_ECX;
  undefined4 *local_4;
  
  piVar1 = (int *)(in_ECX + 0x40);
  local_4 = (undefined4 *)0x0;
  if ((*(int *)(in_ECX + 0x44) == 0) && (*piVar1 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar4 = (int *)FUN_00677c70(&local_4);
      puVar3 = local_4;
      piVar4 = (int *)*piVar4;
      if (((local_4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_4 + 1), LVar5 == 0)
          ) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      if (piVar4 != (int *)0x0) {
        for (puVar6 = (undefined *)(**(code **)(*piVar4 + 4))(); puVar6 != (undefined *)0x0;
            puVar6 = *(undefined **)(puVar6 + 4)) {
          if (puVar6 == &DAT_00b3a694) {
            *(undefined1 *)(piVar4 + 10) = 1;
            break;
          }
        }
      }
    }
  }
  return;
}



int * FUN_00679120(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  LONG LVar5;
  int *piVar6;
  undefined *puVar7;
  int in_ECX;
  int *piVar8;
  undefined4 *puVar9;
  float local_8;
  undefined4 *local_4;
  
  bVar3 = false;
  local_4 = (undefined4 *)0x0;
  piVar1 = (int *)(in_ECX + 0x48);
  local_8 = 3.4028235e+38;
  piVar8 = (int *)0x0;
  puVar9 = param_1;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    puVar9 = (undefined4 *)0x0;
    bVar3 = true;
    if (*piVar1 == 0) {
      bVar2 = true;
      goto LAB_00679156;
    }
  }
  bVar2 = false;
LAB_00679156:
  if (((bVar3) && (puVar9 != (undefined4 *)0x0)) &&
     (LVar5 = InterlockedDecrement(puVar9 + 1), LVar5 == 0)) {
    (**(code **)*puVar9)(1);
  }
  if (!bVar2) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar6 = (int *)FUN_00677c70(&local_4);
      puVar9 = local_4;
      piVar6 = (int *)*piVar6;
      if (((local_4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_4 + 1), LVar5 == 0)
          ) && (puVar9 != (undefined4 *)0x0)) {
        (**(code **)*puVar9)(1);
      }
      if (piVar6 != (int *)0x0) {
        for (puVar7 = (undefined *)(**(code **)(*piVar6 + 4))(); puVar7 != (undefined *)0x0;
            puVar7 = *(undefined **)(puVar7 + 4)) {
          if (puVar7 == &DAT_00b3c0d4) {
            if ((((undefined4 *)piVar6[7] == param_1) && ((char)piVar6[10] == '\0')) &&
               (((float)piVar6[4] < local_8 ||
                (((piVar8 != (int *)0x0 && (cVar4 = FUN_004ac730(1), cVar4 != '\0')) &&
                 (cVar4 = FUN_004ac730(1), cVar4 == '\0')))))) {
              local_8 = (float)piVar6[4];
              piVar8 = piVar6;
            }
            break;
          }
        }
      }
    }
  }
  return piVar8;
}



int * FUN_00679240(undefined4 *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  LONG LVar4;
  int *piVar5;
  undefined *puVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *local_4;
  
  bVar3 = false;
  piVar1 = (int *)(in_ECX + 0x48);
  local_4 = (undefined4 *)0x0;
  piVar7 = (int *)0x0;
  puVar9 = param_1;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    puVar9 = (undefined4 *)0x0;
    bVar3 = true;
    if (*piVar1 == 0) {
      bVar2 = true;
      goto LAB_0067926a;
    }
  }
  bVar2 = false;
LAB_0067926a:
  if (((bVar3) && (puVar9 != (undefined4 *)0x0)) &&
     (LVar4 = InterlockedDecrement(puVar9 + 1), LVar4 == 0)) {
    (**(code **)*puVar9)(1);
  }
  if (!bVar2) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar5 = (int *)FUN_00677c70(&local_4);
      puVar9 = local_4;
      piVar5 = (int *)*piVar5;
      if (((local_4 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(local_4 + 1), LVar4 == 0)
          ) && (puVar9 != (undefined4 *)0x0)) {
        (**(code **)*puVar9)(1);
      }
      piVar8 = piVar7;
      if (piVar5 != (int *)0x0) {
        for (puVar6 = (undefined *)(**(code **)(*piVar5 + 4))(); puVar6 != (undefined *)0x0;
            puVar6 = *(undefined **)(puVar6 + 4)) {
          if (puVar6 == &DAT_00b3c0d4) {
            if ((((undefined4 *)piVar5[7] == param_1) && ((char)piVar5[10] != '\0')) &&
               (((char)piVar5[9] == '\0' &&
                ((piVar5[0xd] != param_2 || (piVar8 = piVar5, piVar7 != (int *)0x0)))))) {
              *(undefined1 *)(piVar5 + 9) = 1;
              piVar8 = piVar7;
            }
            break;
          }
        }
      }
      piVar7 = piVar8;
    }
  }
  return piVar7;
}



undefined4 FUN_00679340(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  LONG LVar5;
  int *piVar6;
  undefined1 *puVar7;
  int in_ECX;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  float local_8;
  undefined4 *local_4;
  
  bVar3 = false;
  piVar8 = (int *)(in_ECX + 0x48);
  local_4 = (undefined4 *)0x0;
  puVar10 = param_1;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    puVar10 = (undefined4 *)0x0;
    bVar3 = true;
    if (*piVar8 == 0) {
      bVar2 = true;
      goto LAB_0067936a;
    }
  }
  bVar2 = false;
LAB_0067936a:
  if (((bVar3) && (puVar10 != (undefined4 *)0x0)) &&
     (LVar5 = InterlockedDecrement(puVar10 + 1), LVar5 == 0)) {
    (**(code **)*puVar10)(1);
  }
  if (!bVar2) {
    piVar9 = (int *)0x0;
    local_8 = 3.4028235e+38;
    if (piVar8 != (int *)0x0) {
      do {
        piVar6 = (int *)FUN_00677c70(&local_4);
        puVar10 = local_4;
        piVar6 = (int *)*piVar6;
        if (((local_4 != (undefined4 *)0x0) &&
            (LVar5 = InterlockedDecrement(local_4 + 1), LVar5 == 0)) &&
           (puVar10 != (undefined4 *)0x0)) {
          (**(code **)*puVar10)(1);
        }
        if (((piVar6 != (int *)0x0) &&
            (puVar7 = (undefined1 *)(**(code **)(*piVar6 + 0x54))(), puVar7 == &DAT_00000006)) &&
           (iVar1 = piVar6[6], iVar1 != 0)) {
          if (((((float)piVar6[4] < local_8) && (*(int **)(iVar1 + 0x20) != (int *)0x0)) &&
              (puVar10 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x20) + 4))(),
              puVar10 == param_1)) &&
             (cVar4 = FUN_0041b8c0(param_2,*(undefined4 *)
                                            (*(int *)(*(int *)(iVar1 + 0xc) + 0x1c) + 0x98)),
             cVar4 != '\0')) {
            local_8 = (float)piVar6[4];
            piVar9 = piVar6;
          }
        }
        piVar8 = (int *)piVar8[1];
      } while (piVar8 != (int *)0x0);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0x68))();
        FUN_006a0350();
        return 1;
      }
    }
  }
  return 0;
}



int FUN_00679480(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *in_ECX;
  undefined4 *puVar9;
  int *piVar10;
  int local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  bVar3 = false;
  local_c = 2;
  local_4 = in_ECX;
  for (piVar10 = in_ECX + 0x10; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
    if (piVar10[1] == 0) {
      bVar3 = true;
      in_ECX = (undefined4 *)0x0;
      bVar2 = true;
      if (*piVar10 != 0) goto LAB_006794c6;
    }
    else {
LAB_006794c6:
      bVar2 = false;
    }
    if (((bVar3) && (bVar3 = false, in_ECX != (undefined4 *)0x0)) &&
       (LVar5 = InterlockedDecrement(in_ECX + 1), LVar5 == 0)) {
      (**(code **)*in_ECX)(1);
    }
    if (bVar2) break;
    puVar6 = (undefined4 *)FUN_00677c70(&local_8);
    puVar9 = local_8;
    piVar1 = (int *)*puVar6;
    if (((local_8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_8 + 1), LVar5 == 0))
       && (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    cVar4 = (**(code **)(*piVar1 + 0x58))();
    if (cVar4 != '\0') {
      iVar7 = (**(code **)(*piVar1 + 0x5c))();
      local_c = local_c + 1 + iVar7;
    }
  }
  bVar3 = false;
  piVar10 = local_4 + 0x12;
  puVar9 = local_4;
  do {
    if (piVar10 == (int *)0x0) {
      return local_c;
    }
    if (piVar10[1] == 0) {
      bVar3 = true;
      puVar9 = (undefined4 *)0x0;
      bVar2 = true;
      if (*piVar10 != 0) goto LAB_00679586;
    }
    else {
LAB_00679586:
      bVar2 = false;
    }
    if (((bVar3) && (bVar3 = false, puVar9 != (undefined4 *)0x0)) &&
       (LVar5 = InterlockedDecrement(puVar9 + 1), LVar5 == 0)) {
      (**(code **)*puVar9)(1);
    }
    if (bVar2) {
      return local_c;
    }
    puVar8 = (undefined4 *)FUN_00677c70(&local_4);
    puVar6 = local_4;
    piVar1 = (int *)*puVar8;
    if (((local_4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_4 + 1), LVar5 == 0))
       && (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    cVar4 = (**(code **)(*piVar1 + 0x58))();
    if (cVar4 != '\0') {
      iVar7 = (**(code **)(*piVar1 + 0x5c))();
      local_c = local_c + 1 + iVar7;
    }
    piVar10 = (int *)piVar10[1];
  } while( true );
}



void FUN_00679630(void)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  char cVar4;
  LONG LVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 uStack_15;
  uint local_14;
  int local_10;
  undefined2 *local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_10 = 0;
  local_c = *(undefined2 **)(DAT_00b33b00 + 0x14);
  local_14 = 0;
  local_4 = in_ECX;
  FUN_0045b9a0(&local_10,2);
  puVar7 = local_4;
  for (piVar8 = in_ECX + 0x10; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1]) {
    if (piVar8[1] == 0) {
      local_14 = local_14 | 1;
      puVar7 = (undefined4 *)0x0;
      bVar2 = true;
      if (*piVar8 != 0) goto LAB_00679686;
    }
    else {
LAB_00679686:
      bVar2 = false;
    }
    if ((((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, puVar7 != (undefined4 *)0x0))
       && (LVar5 = InterlockedDecrement(puVar7 + 1), LVar5 == 0)) {
      (**(code **)*puVar7)(1);
    }
    if (bVar2) break;
    puVar6 = (undefined4 *)FUN_00677c70(&local_8);
    puVar3 = local_8;
    piVar1 = (int *)*puVar6;
    if (((local_8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_8 + 1), LVar5 == 0))
       && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    cVar4 = (**(code **)(*piVar1 + 0x58))();
    if (cVar4 != '\0') {
      uStack_15 = (**(code **)(*piVar1 + 0x54))();
      FUN_0045b9a0(&uStack_15,1);
      (**(code **)(*piVar1 + 0x60))();
      local_10 = local_10 + 1;
    }
  }
  piVar8 = local_4 + 0x12;
  puVar7 = local_4;
  if (piVar8 == (int *)0x0) {
    *local_c = (undefined2)local_10;
    return;
  }
  do {
    if (piVar8[1] == 0) {
      local_14 = local_14 | 2;
      puVar7 = (undefined4 *)0x0;
      bVar2 = true;
      if (*piVar8 != 0) goto LAB_0067975c;
    }
    else {
LAB_0067975c:
      bVar2 = false;
    }
    if ((((local_14 & 2) != 0) && (local_14 = local_14 & 0xfffffffd, puVar7 != (undefined4 *)0x0))
       && (LVar5 = InterlockedDecrement(puVar7 + 1), LVar5 == 0)) {
      (**(code **)*puVar7)(1);
    }
    if (bVar2) {
      *local_c = (undefined2)local_10;
      return;
    }
    puVar6 = (undefined4 *)FUN_00677c70(&local_4);
    puVar3 = local_4;
    piVar1 = (int *)*puVar6;
    if (((local_4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_4 + 1), LVar5 == 0))
       && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    cVar4 = (**(code **)(*piVar1 + 0x58))();
    if (cVar4 != '\0') {
      uStack_15 = (**(code **)(*piVar1 + 0x54))();
      FUN_0045b9a0(&uStack_15,1);
      (**(code **)(*piVar1 + 0x60))();
      local_10 = local_10 + 1;
    }
    piVar8 = (int *)piVar8[1];
    if (piVar8 == (int *)0x0) {
      *local_c = (undefined2)local_10;
      return;
    }
  } while( true );
}



void FUN_00679850(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  int *piStack_34;
  uint uStack_30;
  byte local_1d;
  ushort local_1c [4];
  uint local_14;
  undefined1 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c48f7;
  local_c = *unaff_FS_OFFSET;
  uStack_30 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x26) {
    piStack_34 = (int *)0x6;
    FUN_00452170();
  }
  piStack_34 = (int *)0x2;
  FUN_004534d0(local_1c);
  local_14 = 0;
  if (local_1c[0] != 0) {
    do {
      piStack_34 = (int *)0x1;
      FUN_004534d0(&local_1d);
      piStack_34 = (int *)(uint)local_1d;
      switch(piStack_34) {
      case (int *)0x0:
        piStack_34 = (int *)0x1c;
        local_10 = (undefined1 *)FUN_00401f00();
        local_4 = 0;
        if (local_10 == (undefined1 *)0x0) {
LAB_00679907:
          piVar3 = (int *)0x0;
        }
        else {
          piStack_34 = (int *)0x679905;
          piVar3 = (int *)FUN_0056bde0();
        }
        break;
      case (int *)0x1:
        piStack_34 = (int *)0x54;
        local_10 = (undefined1 *)FUN_00401f00();
        local_4 = 1;
        if (local_10 == (undefined1 *)0x0) goto LAB_00679907;
        piStack_34 = (int *)0x67997e;
        piVar3 = (int *)FUN_0056cde0();
        break;
      case (int *)0x2:
        piStack_34 = (int *)0x20;
        local_10 = (undefined1 *)FUN_00401f00();
        local_4 = 2;
        if (local_10 == (undefined1 *)0x0) goto LAB_00679907;
        piStack_34 = (int *)0x6799a5;
        piVar3 = (int *)FUN_00570700();
        break;
      default:
        FUN_004a7a60("Unknown temp effect type: %i");
        goto LAB_00679a28;
      case (int *)0x5:
        piStack_34 = (int *)0x38;
        local_10 = (undefined1 *)FUN_00401f00();
        local_4 = 3;
        if (local_10 == (undefined1 *)0x0) goto LAB_00679907;
        piStack_34 = (int *)0x6799cf;
        piVar3 = (int *)FUN_0069e350();
        break;
      case (int *)0x6:
        piStack_34 = (int *)0x4c;
        local_10 = (undefined1 *)FUN_00401f00();
        local_4 = 4;
        if (local_10 == (undefined1 *)0x0) goto LAB_00679907;
        piStack_34 = (int *)0x6799f9;
        piVar3 = (int *)FUN_006a0700();
      }
      local_4 = 0xffffffff;
      if (piVar3 != (int *)0x0) {
        piStack_34 = (int *)0x679920;
        cVar1 = (**(code **)(*piVar3 + 100))();
        if (cVar1 == '\0') {
          piStack_34 = (int *)0x1;
          (**(code **)*piVar3)();
        }
        else {
          piStack_34 = (int *)0x679931;
          iVar2 = (*(code *)((undefined4 *)*piVar3)[0x15])();
          local_10 = (undefined1 *)&piStack_34;
          piStack_34 = piVar3;
          if (iVar2 - 4U < 3) {
            local_10 = (undefined1 *)&piStack_34;
            InterlockedIncrement(piVar3 + 1);
            FUN_00677cf0();
          }
          else {
            InterlockedIncrement(piVar3 + 1);
            FUN_00677cf0();
          }
        }
      }
LAB_00679a28:
      local_14 = local_14 + 1;
    } while (local_14 < local_1c[0]);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00679a70(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_8;
  
  if (DAT_00b3a6d4 != '\0') {
    return;
  }
  local_8 = 0;
LAB_00679a90:
  iVar3 = local_8;
  if (((local_8 != 0) && (local_8 != 1)) && (local_8 != 2)) {
    iVar3 = 3;
  }
  FUN_00673a50(iVar3);
  piVar2 = (int *)FUN_007616d0();
  piVar5 = piVar2;
  do {
    if ((piVar5 == (int *)0x0) || ((int *)*piVar5 == (int *)0x0)) break;
    piVar6 = (int *)0x0;
    cVar1 = (**(code **)(*(int *)*piVar5 + 400))();
    if (cVar1 != '\0') {
      piVar6 = (int *)*piVar5;
    }
    piVar5 = (int *)piVar5[1];
    piVar7 = (int *)0x0;
    while (piVar6 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar6 + 0x154))();
      if (iVar3 == 0) {
LAB_00679b34:
        iVar3 = (**(code **)(*piVar6 + 0x154))();
        if (((iVar3 == 0) && (cVar1 = FUN_004354f0(piVar6), cVar1 == '\0')) &&
           ((((uint)piVar6[2] >> 0xb & 1) == 0 &&
            ((((uint)piVar6[2] >> 5 & 1) == 0 && (iVar3 = FUN_006ecc80(), iVar3 != 0)))))) {
          uVar8 = 1;
          uVar4 = FUN_006ecc80(1);
          cVar1 = FUN_0043f8c0(uVar4,uVar8);
          if (cVar1 != '\0') {
            FUN_006ecc80(piVar6);
            FUN_004d35d0(piVar6);
            piVar5 = piVar2;
          }
        }
      }
      else {
        iVar3 = FUN_006ecc80();
        if (iVar3 != 0) {
          uVar8 = 0;
          uVar4 = FUN_006ecc80(0);
          cVar1 = FUN_0043f8c0(uVar4,uVar8);
          if (cVar1 != '\0') goto LAB_00679b34;
        }
        (**(code **)(*piVar6 + 0x150))(0);
      }
      if ((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) break;
      piVar6 = (int *)0x0;
      cVar1 = (**(code **)(*(int *)*piVar7 + 400))();
      if (cVar1 != '\0') {
        piVar6 = (int *)*piVar7;
      }
      piVar7 = (int *)piVar7[1];
    }
  } while( true );
  local_8 = local_8 + 1;
  if (3 < local_8) {
    FUN_00441610();
    FUN_00678750();
    return;
  }
  goto LAB_00679a90;
}



void FUN_00679c10(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int in_ECX;
  int iStack_c;
  
  cVar4 = (**(code **)(*param_1 + 400))();
  if (cVar4 != '\0') {
    iVar5 = FUN_00420ef0();
    if ((iVar5 != 0) && (iVar5 = FUN_00420ef0(), *(int *)(iVar5 + 0xc) != 0)) {
      piVar6 = param_1;
      FUN_00420ef0(param_1);
      FUN_0065c620(piVar6);
    }
    if (*(int **)(DAT_00b333c4 + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x1bc))(param_1);
      (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xb4))(param_1);
    }
    if (*(int **)(DAT_00b333c4 + 0xe4) == param_1) {
      *(undefined4 *)(DAT_00b333c4 + 0xe4) = 0;
    }
  }
  iStack_c = 0;
  do {
    if (iStack_c == 0) {
      FUN_00673a50(0);
      piVar6 = (int *)FUN_007616d0();
    }
    else if (iStack_c == 1) {
      FUN_00673a50(1);
      piVar6 = (int *)FUN_007616d0();
    }
    else if (iStack_c == 2) {
      FUN_00673a50(2);
      piVar6 = (int *)FUN_007616d0();
    }
    else if (iStack_c == 3) {
      FUN_00673a50(3);
      piVar6 = (int *)FUN_007616d0();
    }
    else {
      piVar6 = (int *)(in_ECX + 0x58);
    }
    for (; (piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0)))); piVar6 = (int *)piVar6[1]
        ) {
      cVar4 = (**(code **)(*(int *)*piVar6 + 400))();
      if ((cVar4 != '\0') && (piVar1 = (int *)*piVar6, piVar1 != (int *)0x0)) {
        piVar2 = (int *)piVar1[0x16];
        if (((int *)piVar1[0x39] == param_1) && (piVar1[0x39] = 0, piVar2 != (int *)0x0)) {
          (**(code **)(*piVar2 + 0x204))(0);
          (**(code **)(*piVar2 + 0x350))();
        }
        cVar4 = (**(code **)(*param_1 + 400))();
        if (cVar4 != '\0') {
          FUN_005e21d0(param_1);
          if (piVar2 == (int *)0x0) goto LAB_0067a1a6;
          (**(code **)(*piVar2 + 0xb4))(param_1);
        }
        if (piVar2 != (int *)0x0) {
          iVar5 = (**(code **)(*(int *)piVar1[0x16] + 0x184))();
          iVar7 = FUN_005e03a0();
          if (((iVar5 != 0) && (cVar4 = FUN_005660a0(), cVar4 != '\0')) &&
             (*(char *)(iVar5 + 0x20) != '\f')) {
            if ((*(int *)(iVar5 + 0x28) != 0) && (piVar8 = (int *)FUN_00569e60(), piVar8 == param_1)
               ) {
              FUN_00565ec0(0);
            }
            piVar8 = (int *)FUN_00566d00(piVar1);
            if (piVar8 == param_1) {
              FUN_00565e00(0);
            }
          }
          if (((iVar7 != 0) && (cVar4 = FUN_005660a0(), cVar4 != '\0')) &&
             (*(char *)(iVar7 + 0x20) != '\f')) {
            if ((*(int *)(iVar7 + 0x28) != 0) && (piVar8 = (int *)FUN_00569e60(), piVar8 == param_1)
               ) {
              FUN_00565ec0(0);
            }
            piVar8 = (int *)FUN_00566d00(piVar1);
            if (piVar8 == param_1) {
              FUN_00565e00(0);
            }
          }
          if (iStack_c < 2) {
            (**(code **)(*piVar2 + 0x1bc))(param_1);
            uVar9 = (**(code **)(*(int *)piVar1[0x16] + 0x184))
                              (0,&PTR_PTR_00b03e00,&PTR_PTR_00b15350,0);
            iVar5 = FUN_009832e6(uVar9);
            if (((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x3c), iVar5 != 0)) &&
               (*(int **)(iVar5 + 4) == param_1)) {
              *(undefined4 *)(iVar5 + 4) = 0;
            }
            piVar8 = (int *)FUN_005e2e00();
            if (piVar8 == param_1) {
LAB_00679f00:
              cVar4 = FUN_005e6b40();
              if (cVar4 == '\0') {
                FUN_005e0380();
                cVar4 = FUN_005660a0();
                if (cVar4 == '\0') {
                  pcVar3 = *(code **)(*piVar2 + 0x178);
                  piVar2[2] = 0;
                  (*pcVar3)(0);
                }
                else {
                  FUN_005eae70();
                }
              }
              else {
                (**(code **)(*piVar1 + 0x30c))();
              }
            }
            else {
              iVar5 = (**(code **)(*piVar2 + 0x174))();
              if ((iVar5 != 0) &&
                 (iVar5 = (**(code **)(*piVar2 + 0x174))(), *(int *)(iVar5 + 0x28) != 0)) {
                (**(code **)(*piVar2 + 0x174))();
                piVar8 = (int *)FUN_00569e60();
                if (piVar8 == param_1) goto LAB_00679f00;
              }
            }
            uVar9 = (**(code **)(*param_1 + 0x120))();
            FUN_005e69e0(uVar9);
            if (iStack_c < 1) {
              (**(code **)(*piVar2 + 0x4b8))(param_1);
            }
          }
          (**(code **)(*piVar2 + 0x32c))(param_1);
          iVar5 = FUN_0041e210(0x1f);
          if ((iVar5 != 0) && (*(int **)(iVar5 + 0x14) == param_1)) {
            *(undefined4 *)(iVar5 + 0x14) = 0;
          }
          if ((int *)piVar1[0x1f] == param_1) {
            piVar1[0x1f] = 0;
          }
          cVar4 = FUN_005e6cd0(0);
          if (cVar4 != '\0') {
            iVar5 = FUN_005e0380();
            if (((iVar5 != 0) && (*(char *)(iVar5 + 0x20) == '\x10')) &&
               (*(int **)(iVar5 + 0x60) == param_1)) {
              *(undefined4 *)(iVar5 + 0x60) = 0;
            }
            FUN_005eff30(param_1);
          }
          cVar4 = (**(code **)(*piVar1 + 0x334))(1);
          if ((cVar4 != '\0') && (iVar5 = (**(code **)(*piVar1 + 0x330))(), iVar5 != 0)) {
            FUN_006162d0(param_1);
            FUN_00615010(param_1);
          }
          FUN_00424d00(param_1);
          piVar8 = (int *)(**(code **)(*piVar2 + 0xcc))();
          if (piVar8 == param_1) {
            (**(code **)(*piVar2 + 0xd0))(0);
          }
          piVar8 = (int *)FUN_005eae10();
          if (piVar8 == param_1) {
            FUN_005e03c0(0);
          }
          piVar8 = (int *)(**(code **)(*piVar1 + 0x380))();
          if (piVar8 == param_1) {
            (**(code **)(*piVar1 + 900))(0);
          }
          if ((piVar1[0x16] != 0) && (cVar4 = (**(code **)(*param_1 + 400))(), cVar4 != '\0')) {
            piVar8 = (int *)(**(code **)(*(int *)piVar1[0x16] + 0x2b0))();
            if (piVar8 == param_1 + 0x1a) {
              (**(code **)(*(int *)piVar1[0x16] + 0x2b4))(0);
            }
            iVar5 = (**(code **)(*(int *)piVar1[0x16] + 8))();
            if ((iVar5 == 0) && (*(int **)(piVar1[0x16] + 600) == param_1)) {
              *(undefined4 *)(piVar1[0x16] + 600) = 0;
            }
          }
          iVar5 = (**(code **)(*(int *)piVar1[0x16] + 0x184))();
          if ((iVar5 != 0) &&
             (iVar5 = (**(code **)(*(int *)piVar1[0x16] + 0x184))(), *(int *)(iVar5 + 0x24) != 0)) {
            (**(code **)(*(int *)piVar1[0x16] + 0x184))();
            piVar8 = (int *)FUN_005697e0();
            if (piVar8 == param_1) {
              FUN_005e0380();
              FUN_005697f0(0);
            }
          }
          if ((((piVar1[0x16] != 0) && (iVar5 = *(int *)(piVar1[0x16] + 8), iVar5 != 0)) &&
              (*(int *)(iVar5 + 0x24) != 0)) && (piVar8 = (int *)FUN_005697e0(), piVar8 == param_1))
          {
            FUN_005697f0(0);
          }
          piVar8 = (int *)(**(code **)(*piVar2 + 0x378))();
          if (piVar8 == param_1) {
            uVar9 = 0;
            (**(code **)(*piVar2 + 0x380))(0);
            FUN_006faee0(uVar9);
            iVar5 = (**(code **)(*piVar2 + 0x380))();
            *(undefined1 *)(iVar5 + 0xe) = 0;
            puVar10 = (undefined4 *)(**(code **)(*piVar2 + 0x380))();
            *puVar10 = DAT_00b3f9a8;
            puVar10[1] = DAT_00b3f9ac;
            puVar10[2] = DAT_00b3f9b0;
            iVar5 = *piVar2;
            uVar9 = (**(code **)(*(int *)piVar1[0x16] + 0x380))();
            (**(code **)(iVar5 + 1000))(0,0x7f,uVar9);
          }
        }
      }
LAB_0067a1a6:
    }
    iStack_c = iStack_c + 1;
    if (4 < iStack_c) {
      FUN_0065c620(param_1);
      return;
    }
  } while( true );
}



void FUN_0067a1f0(byte param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0067a230(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  
  piVar1 = (int *)(in_ECX + 0x60);
  FUN_005b27a0(FUN_00673b70);
LAB_0067a240:
  do {
    uVar4 = 0;
    piVar3 = piVar1;
    if (piVar1 == (int *)0x0) {
      return;
    }
    do {
      if (*piVar3 != 0) {
        uVar4 = uVar4 + 1;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    piVar3 = piVar1;
    if (uVar4 <= DAT_00b36cd0) {
      return;
    }
    do {
      piVar2 = piVar3;
      if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_0067a240;
      piVar3 = (int *)piVar2[1];
    } while ((int *)piVar2[1] != (int *)0x0);
    FUN_0065c620(*piVar2);
  } while( true );
}



undefined4 * FUN_0067a290(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0x0;
  piVar3 = (int *)FUN_007616d0();
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    if (((((uint)piVar1[2] >> 0xb & 1) != 0) || (((uint)piVar1[2] >> 5 & 1) != 0)) ||
       (cVar2 = (**(code **)(*piVar1 + 0x198))(1), cVar2 != '\0')) {
      return (undefined4 *)0x0;
    }
    iVar4 = (**(code **)(*(int *)piVar1[0x16] + 0x444))();
    if (0 < iVar4) {
      piVar5 = (int *)FUN_006758e0(piVar1,0xf,0);
      if (piVar5 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        do {
          if (*piVar5 != 0) {
            iVar4 = iVar4 + 1;
          }
          piVar5 = (int *)piVar5[1];
        } while (piVar5 != (int *)0x0);
      }
      (**(code **)(*(int *)piVar1[0x16] + 0x234))(iVar4);
    }
  }
  if (piVar3 != (int *)0x0) {
    do {
      if ((piVar3[1] == 0) && (*piVar3 == 0)) break;
      cVar2 = (**(code **)(*(int *)*piVar3 + 400))();
      if (((cVar2 != '\0') &&
          ((piVar5 = (int *)*piVar3, piVar5 != (int *)0x0 && (iVar4 = FUN_005e0dc0(), iVar4 != 3))))
         && ((cVar2 = (**(code **)(*piVar5 + 0x1a0))(), cVar2 == '\0' &&
             ((((piVar5 != piVar1 && (cVar2 = (**(code **)(*piVar5 + 0x198))(0), cVar2 == '\0')) &&
               (((uint)piVar5[2] >> 0xb & 1) == 0)) &&
              (iVar4 = FUN_005f6540(0,piVar1,&param_1,0,0,0), 0 < iVar4)))))) {
        if (local_4 == (undefined4 *)0x0) {
          local_4 = (undefined4 *)FUN_00401f00(8);
          if (local_4 == (undefined4 *)0x0) {
            local_4 = (undefined4 *)0x0;
          }
          else {
            *local_4 = 0;
            local_4[1] = 0;
          }
        }
        FUN_00446cb0(piVar5);
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if (local_4 != (undefined4 *)0x0) {
      FUN_005b27a0(FUN_00673b70);
      return local_4;
    }
  }
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0067a420(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  float10 fVar12;
  int *local_24;
  int local_1c;
  int *piStack_10;
  
  local_24 = (int *)FUN_00401f00(8);
  if (local_24 == (int *)0x0) {
    local_24 = (int *)0x0;
  }
  else {
    *local_24 = 0;
    local_24[1] = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = FUN_006ecc80();
  iVar4 = FUN_004d6670();
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (iVar1 == 0) {
    return local_24;
  }
  local_1c = 0;
LAB_0067a483:
  if (local_1c == 0) {
    FUN_00673a50(3);
    piVar5 = (int *)FUN_007616d0();
  }
  else {
    if (local_1c == 1) {
      uVar10 = 2;
    }
    else if (local_1c == 2) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    FUN_00673a50(uVar10);
    piVar5 = (int *)FUN_007616d0();
  }
  do {
    if ((piVar5 == (int *)0x0) || ((int *)*piVar5 == (int *)0x0)) break;
    piVar11 = (int *)0x0;
    cVar2 = (**(code **)(*(int *)*piVar5 + 400))();
    if (cVar2 != '\0') {
      piVar11 = (int *)*piVar5;
    }
    piVar5 = (int *)piVar5[1];
    piStack_10 = (int *)0x0;
    while (piVar11 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar11 + 0x198))(0);
      if ((((cVar2 == '\0') && (((uint)piVar11[2] >> 0xb & 1) == 0)) &&
          (((uint)piVar11[2] >> 5 & 1) == 0)) &&
         (cVar2 = (**(code **)(*piVar11 + 0x198))(0), cVar2 == '\0')) {
        iVar6 = FUN_006ecc80();
        iVar7 = FUN_004d6670();
        iVar8 = FUN_005e0380();
        if (((iVar8 == 0) || (*(char *)(iVar8 + 0x20) != '\x0f')) ||
           (cVar2 = FUN_00606ad0(param_1), cVar2 == '\0')) {
          if (((iVar6 == 0) || (iVar6 != iVar3)) &&
             ((piVar9 = param_2, iVar4 != iVar7 ||
              (((iVar6 == 0 || (cVar2 = FUN_004c97f0(), cVar2 != '\0')) &&
               ((iVar3 == 0 || (cVar2 = FUN_004c97f0(), cVar2 != '\0')))))))) {
            do {
              if ((piVar9 == (int *)0x0) || (*piVar9 == 0)) goto LAB_0067a6ea;
              iVar7 = FUN_004d7630();
              if (iVar7 != 0) {
                uVar10 = FUN_0042b410();
                iVar7 = FUN_006ecc80();
                if (iVar7 == iVar6) {
LAB_0067a68b:
                  fVar12 = (float10)FUN_004d7e90(uVar10,0);
                  if ((float)fVar12 <= (float)_DAT_00b36a50) {
                    if (*local_24 != 0) {
                      piVar9 = (int *)FUN_00401f00(8);
                      if (piVar9 == (int *)0x0) {
                        piVar9 = (int *)0x0;
                      }
                      else {
                        *piVar9 = *local_24;
                        piVar9[1] = 0;
                      }
                      piVar9[1] = local_24[1];
                      local_24[1] = (int)piVar9;
                    }
                    *local_24 = (int)piVar11;
                    goto LAB_0067a6ea;
                  }
                }
                else {
                  iVar7 = FUN_006ecc80();
                  if (iVar7 == 0) {
                    iVar7 = FUN_004d6670();
                    iVar8 = FUN_004d6670();
                    if (iVar7 == iVar8) goto LAB_0067a68b;
                  }
                }
              }
              piVar9 = (int *)piVar9[1];
            } while( true );
          }
          fVar12 = (float10)FUN_004d7e90(iVar1,0);
          if ((float)fVar12 <= (float)_DAT_00b36a50) {
            if (*local_24 != 0) {
              piVar9 = (int *)FUN_00401f00(8);
              if (piVar9 != (int *)0x0) {
                *piVar9 = *local_24;
                piVar9[1] = 0;
                piVar9[1] = local_24[1];
                local_24[1] = (int)piVar9;
                *local_24 = (int)piVar11;
                goto LAB_0067a6ea;
              }
              _DAT_00000004 = local_24[1];
              local_24[1] = 0;
            }
            *local_24 = (int)piVar11;
          }
        }
      }
LAB_0067a6ea:
      if ((piStack_10 == (int *)0x0) || ((int *)*piStack_10 == (int *)0x0)) break;
      piVar11 = (int *)0x0;
      cVar2 = (**(code **)(*(int *)*piStack_10 + 400))();
      if (cVar2 != '\0') {
        piVar11 = (int *)*piStack_10;
      }
      piStack_10 = (int *)piStack_10[1];
    }
  } while( true );
  local_1c = local_1c + 1;
  if (3 < local_1c) {
    if (local_24 == (int *)0x0) {
      return (int *)0x0;
    }
    FUN_005b27a0(FUN_00673b70);
    return local_24;
  }
  goto LAB_0067a483;
}



void FUN_0067a760(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009a9f28;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if ((param_1 == (undefined4 *)0x0) ||
     (cVar5 = FUN_00677ca0(uVar6), piVar4 = in_ECX, piVar3 = in_ECX, cVar5 != '\0')) {
    if (param_1 == (undefined4 *)0x0) goto LAB_0067a832;
  }
  else {
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      if ((undefined4 *)*piVar2 == param_1) {
        if (piVar2 == in_ECX) {
          iVar1 = in_ECX[1];
          if (iVar1 == 0) {
            FUN_0075fa90(0);
            break;
          }
          in_ECX[1] = *(int *)(iVar1 + 4);
          FUN_0055e2a0(iVar1);
        }
        else {
          piVar3[1] = piVar2[1];
        }
        FUN_0067a1f0(1);
        break;
      }
      piVar3 = piVar2;
      piVar4 = (int *)piVar2[1];
    }
  }
  local_4 = 0xffffffff;
  LVar7 = InterlockedDecrement(param_1 + 1);
  if (LVar7 == 0) {
    (**(code **)*param_1)(1);
  }
LAB_0067a832:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0067a850(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[1];
  if (piVar1 != (int *)0x0) {
    in_ECX[1] = piVar1[1];
    FUN_0055e2a0(piVar1);
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    FUN_00401f20(piVar1);
    return;
  }
  puVar2 = (undefined4 *)*in_ECX;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *in_ECX = 0;
  }
  return;
}



void FUN_0067a8c0(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  LONG LVar5;
  int *piVar6;
  undefined4 *in_ECX;
  undefined4 *puVar7;
  int *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  bVar3 = false;
  puVar7 = param_1;
  if (in_ECX[0x11] == 0) {
    puVar7 = (undefined4 *)0x0;
    bVar3 = true;
    if (in_ECX[0x10] != 0) goto LAB_0067a8f2;
    bVar2 = true;
  }
  else {
LAB_0067a8f2:
    bVar2 = false;
  }
  if (((bVar3) && (puVar7 != (undefined4 *)0x0)) &&
     (LVar5 = InterlockedDecrement(puVar7 + 1), LVar5 == 0)) {
    (**(code **)*puVar7)();
  }
  bVar3 = false;
  if (!bVar2) {
    local_14 = (int *)0x0;
    piVar6 = in_ECX + 0x10;
    while (piVar4 = piVar6, piVar4 != (int *)0x0) {
      if (piVar4[1] == 0) {
        bVar3 = true;
        local_10 = (undefined4 *)0x0;
        if (*piVar4 != 0) goto LAB_0067a951;
        bVar2 = true;
      }
      else {
LAB_0067a951:
        bVar2 = false;
      }
      if (((bVar3) && (bVar3 = false, local_10 != (undefined4 *)0x0)) &&
         (LVar5 = InterlockedDecrement(local_10 + 1), LVar5 == 0)) {
        (**(code **)*local_10)();
      }
      if (bVar2) break;
      piVar6 = (int *)FUN_00677c70();
      iVar1 = *piVar6;
      if (((local_c != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_c + 1), LVar5 == 0)
          ) && (local_c != (undefined4 *)0x0)) {
        (**(code **)*local_c)();
      }
      if (*(undefined4 **)(iVar1 + 0xc) == param_1) {
        if (local_14 == (int *)0x0) {
          FUN_0067a850();
          piVar6 = piVar4;
        }
        else {
          InterlockedIncrement((LONG *)(iVar1 + 4));
          FUN_0067a760();
          piVar6 = (int *)local_14[1];
        }
      }
      else {
        piVar6 = (int *)piVar4[1];
        local_14 = piVar4;
      }
    }
  }
  bVar3 = false;
  puVar7 = param_1;
  if (in_ECX[0x13] == 0) {
    bVar3 = true;
    puVar7 = (undefined4 *)0x0;
    if (in_ECX[0x12] == 0) {
      bVar2 = true;
      goto LAB_0067aa22;
    }
  }
  bVar2 = false;
LAB_0067aa22:
  if (((bVar3) && (puVar7 != (undefined4 *)0x0)) &&
     (LVar5 = InterlockedDecrement(puVar7 + 1), LVar5 == 0)) {
    (**(code **)*puVar7)();
  }
  bVar3 = false;
  if (!bVar2) {
    local_14 = (int *)0x0;
    piVar6 = in_ECX + 0x12;
    local_8 = in_ECX;
    while (piVar4 = piVar6, piVar4 != (int *)0x0) {
      if (piVar4[1] == 0) {
        bVar3 = true;
        local_8 = (undefined4 *)0x0;
        if (*piVar4 != 0) goto LAB_0067aa7e;
        bVar2 = true;
      }
      else {
LAB_0067aa7e:
        bVar2 = false;
      }
      if (((bVar3) && (bVar3 = false, local_8 != (undefined4 *)0x0)) &&
         (LVar5 = InterlockedDecrement(local_8 + 1), LVar5 == 0)) {
        (**(code **)*local_8)();
      }
      if (bVar2) {
        return;
      }
      piVar6 = (int *)FUN_00677c70();
      iVar1 = *piVar6;
      if (((local_c != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_c + 1), LVar5 == 0)
          ) && (local_c != (undefined4 *)0x0)) {
        (**(code **)*local_c)();
      }
      if (*(undefined4 **)(iVar1 + 0xc) == param_1) {
        if (local_14 == (int *)0x0) {
          FUN_0067a850();
          piVar6 = piVar4;
        }
        else {
          InterlockedIncrement((LONG *)(iVar1 + 4));
          FUN_0067a760();
          piVar6 = (int *)local_14[1];
        }
      }
      else {
        piVar6 = (int *)piVar4[1];
        local_14 = piVar4;
      }
    }
  }
  return;
}



void FUN_0067ab40(int param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  LONG LVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
  undefined **ppuVar8;
  int *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  bVar2 = false;
  if (param_1 != 0) {
    cVar4 = FUN_00677ca0();
    if (cVar4 == '\0') {
      local_10 = (int *)0x0;
      piVar6 = (int *)(in_ECX + 0x40);
      while (piVar3 = piVar6, piVar3 != (int *)0x0) {
        if (piVar3[1] == 0) {
          bVar2 = true;
          local_c = (undefined4 *)0x0;
          if (*piVar3 != 0) goto LAB_0067ab9e;
          bVar1 = true;
        }
        else {
LAB_0067ab9e:
          bVar1 = false;
        }
        if (((bVar2) && (bVar2 = false, local_c != (undefined4 *)0x0)) &&
           (LVar5 = InterlockedDecrement(local_c + 1), LVar5 == 0)) {
          (**(code **)*local_c)();
        }
        if (bVar1) {
          return;
        }
        piVar6 = (int *)FUN_00677c70();
        piVar6 = (int *)*piVar6;
        if (((local_8 != (undefined4 *)0x0) &&
            (LVar5 = InterlockedDecrement(local_8 + 1), LVar5 == 0)) &&
           (local_8 != (undefined4 *)0x0)) {
          (**(code **)*local_8)();
        }
        iVar7 = (**(code **)(*piVar6 + 0x54))();
        if (iVar7 == 0) {
          ppuVar8 = &PTR_PTR_00b12bd0;
LAB_0067ac2e:
          iVar7 = FUN_009832e6(piVar6,0,&PTR_PTR_00b12bb4,ppuVar8);
          if (((iVar7 == 0) || (*(int *)(iVar7 + 0x18) == 0)) ||
             (*(int *)(*(int *)(iVar7 + 0x18) + 0x48) != param_1)) goto LAB_0067ac82;
          if (local_10 == (int *)0x0) {
            FUN_0067a850();
            piVar6 = piVar3;
          }
          else {
            InterlockedIncrement(piVar6 + 1);
            FUN_0067a760();
            piVar6 = (int *)local_10[1];
          }
        }
        else {
          iVar7 = (**(code **)(*piVar6 + 0x54))();
          if (iVar7 == 1) {
            ppuVar8 = &PTR_PTR_00b12c10;
            goto LAB_0067ac2e;
          }
LAB_0067ac82:
          piVar6 = (int *)piVar3[1];
          local_10 = piVar3;
        }
      }
    }
  }
  return;
}



void FUN_0067aca0(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  LONG LVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *local_8;
  
  piVar6 = (int *)(in_ECX + 0x40);
  bVar2 = false;
  puVar7 = param_1;
  if (*(int *)(in_ECX + 0x44) == 0) {
    puVar7 = (undefined4 *)0x0;
    bVar2 = true;
    if (*piVar6 != 0) goto LAB_0067acd4;
    bVar1 = true;
  }
  else {
LAB_0067acd4:
    bVar1 = false;
  }
  if (((bVar2) && (puVar7 != (undefined4 *)0x0)) &&
     (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) {
    (**(code **)*puVar7)();
  }
  bVar2 = false;
  if (!bVar1) {
    bVar1 = true;
    while (piVar6 != (int *)0x0) {
      piVar5 = (int *)FUN_00677c70();
      piVar5 = (int *)*piVar5;
      if (((local_8 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(local_8 + 1), LVar4 == 0)
          ) && (local_8 != (undefined4 *)0x0)) {
        (**(code **)*local_8)();
      }
      if (!bVar1) {
        piVar6 = (int *)piVar6[1];
      }
      if ((piVar5 == (int *)0x0) || (cVar3 = (**(code **)(*piVar5 + 0x50))(), cVar3 != '\0')) {
        if (bVar1) {
          piVar6 = (int *)piVar6[1];
          bVar1 = false;
        }
      }
      else {
        InterlockedIncrement(piVar5 + 1);
        FUN_0067a760();
      }
    }
  }
  piVar6 = (int *)(in_ECX + 0x48);
  if (*(int *)(in_ECX + 0x4c) == 0) {
    bVar2 = true;
    param_1 = (undefined4 *)0x0;
    if (*piVar6 == 0) {
      bVar1 = true;
      goto LAB_0067adc2;
    }
  }
  bVar1 = false;
LAB_0067adc2:
  if (((bVar2) && (param_1 != (undefined4 *)0x0)) &&
     (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0)) {
    (**(code **)*param_1)();
  }
  if (!bVar1) {
    bVar2 = true;
    while (piVar6 != (int *)0x0) {
      piVar5 = (int *)FUN_00677c70();
      piVar5 = (int *)*piVar5;
      if (((local_8 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(local_8 + 1), LVar4 == 0)
          ) && (local_8 != (undefined4 *)0x0)) {
        (**(code **)*local_8)();
      }
      if (!bVar2) {
        piVar6 = (int *)piVar6[1];
      }
      if ((piVar5 == (int *)0x0) || (cVar3 = (**(code **)(*piVar5 + 0x50))(), cVar3 != '\0')) {
        if (bVar2) {
          piVar6 = (int *)piVar6[1];
          bVar2 = false;
        }
      }
      else {
        InterlockedIncrement(piVar5 + 1);
        FUN_0067a760();
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0067aed5) */
/* WARNING: Removing unreachable block (ram,0x0067aee3) */
/* WARNING: Removing unreachable block (ram,0x0067af2d) */
/* WARNING: Removing unreachable block (ram,0x0067af3b) */

void FUN_0067ae90(void)

{
  bool bVar1;
  bool bVar2;
  int in_ECX;
  
  if ((int *)(in_ECX + 0x40) != (int *)0x0) {
    bVar1 = false;
    do {
      if (*(int *)(in_ECX + 0x44) == 0) {
        bVar1 = true;
        bVar2 = true;
        if (*(int *)(in_ECX + 0x40) != 0) goto LAB_0067aec4;
      }
      else {
LAB_0067aec4:
        bVar2 = false;
      }
      if (bVar1) {
        bVar1 = false;
      }
      if (bVar2) break;
      FUN_0067a850();
    } while( true );
  }
  bVar1 = false;
  if ((int *)(in_ECX + 0x48) == (int *)0x0) {
    return;
  }
  do {
    if (*(int *)(in_ECX + 0x4c) == 0) {
      bVar1 = true;
      bVar2 = true;
      if (*(int *)(in_ECX + 0x48) != 0) goto LAB_0067af1c;
    }
    else {
LAB_0067af1c:
      bVar2 = false;
    }
    if (bVar1) {
      bVar1 = false;
    }
    if (bVar2) {
      return;
    }
    FUN_0067a850();
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067af60(void)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c495f;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0067b240();
  local_4 = 0;
  FUN_0067b240();
  local_4._0_1_ = 1;
  FUN_0067b240();
  local_4._0_1_ = 2;
  FUN_00532df0();
  local_4._0_1_ = 3;
  FUN_00532df0();
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  local_4._0_1_ = 4;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  FUN_0067b240();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00677dd0(2,0x25);
  *(undefined1 *)(in_ECX + 0x99) = 1;
  *(undefined1 *)(in_ECX + 0x98) = 1;
  *(undefined1 *)(in_ECX + 0xa0) = 1;
  *(undefined1 *)(in_ECX + 0xa1) = 1;
  *(undefined1 *)(in_ECX + 0xa2) = 1;
  *(undefined1 *)(in_ECX + 0xa3) = 1;
  *(undefined1 *)(in_ECX + 0xa4) = 1;
  *(undefined1 *)(in_ECX + 0x9a) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)(in_ECX + 0xa5) = 0;
  *(undefined1 *)(in_ECX + 0xa6) = 0;
  *(undefined4 *)(in_ECX + 0xac) = _DAT_00b37d58;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0067b080(void)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)FUN_006599b0();
  fVar2 = (float10)FUN_006599d0();
  fVar3 = (float10)FUN_006599b0();
  fVar4 = (float10)FUN_006599d0();
  if ((float)fVar2 < (float)fVar4) {
    return 1;
  }
  if ((float)fVar2 <= (float)fVar4) {
    if ((float)fVar1 < (float)fVar3) {
      return 1;
    }
    if ((float)fVar1 <= (float)fVar3) {
      return 0;
    }
  }
  return 0xffffffff;
}



void FUN_0067b110(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4);
    iVar3 = param_2;
    iVar4 = param_3;
    if (param_2 < param_3) {
      do {
        iVar2 = FUN_0067b080(*(undefined4 *)(param_1 + iVar4 * 4),uVar1);
        for (; (iVar2 < 1 && (iVar3 < iVar4)); iVar4 = iVar4 + -1) {
          iVar2 = FUN_0067b080(*(undefined4 *)(param_1 + -4 + iVar4 * 4),uVar1);
        }
        if (iVar3 != iVar4) {
          *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
          iVar3 = iVar3 + 1;
        }
        iVar2 = FUN_0067b080(*(undefined4 *)(param_1 + iVar3 * 4),uVar1);
        for (; (-1 < iVar2 && (iVar3 < iVar4)); iVar3 = iVar3 + 1) {
          iVar2 = FUN_0067b080(*(undefined4 *)(param_1 + 4 + iVar3 * 4),uVar1);
        }
        if (iVar3 != iVar4) {
          *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
          iVar4 = iVar4 + -1;
        }
      } while (iVar3 < iVar4);
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = uVar1;
    if (param_2 < iVar3) {
      FUN_0067b110(param_1,param_2,iVar3 + -1);
    }
    if (param_3 <= iVar3) break;
    param_2 = iVar3 + 1;
  }
  return;
}



void FUN_0067b1e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  if (param_1 != 0) {
    iVar1 = in_ECX[1];
    while (iVar1 != 0) {
      in_ECX = (int *)in_ECX[1];
      iVar1 = in_ECX[1];
    }
    if (*in_ECX != 0) {
      piVar2 = (int *)FUN_00401f00(8);
      if (piVar2 == (int *)0x0) {
        in_ECX[1] = 0;
        return;
      }
      *piVar2 = param_1;
      piVar2[1] = 0;
      in_ECX[1] = (int)piVar2;
      return;
    }
    *in_ECX = param_1;
  }
  return;
}



void FUN_0067b240(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = in_ECX;
  return;
}



void FUN_0067b260(int param_1,char param_2,char param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  if (param_1 != DAT_00b333c4) {
    piVar3 = in_ECX;
    if (param_3 == '\0') {
      if (param_2 == '\0') {
        FUN_00446cb0(param_1);
        (**(code **)(**(int **)(param_1 + 0x58) + 0x28))();
        (**(code **)(**(int **)(*(int *)in_ECX[2] + 0x58) + 0x28))();
      }
      else {
        FUN_0067b1e0(param_1);
        (**(code **)(**(int **)(param_1 + 0x58) + 0x28))();
        (**(code **)(**(int **)(*in_ECX + 0x58) + 0x28))();
      }
    }
    else {
      do {
        if ((piVar3 == (int *)0x0) ||
           ((piVar1 = (int *)piVar3[1], piVar1 == (int *)0x0 && (*piVar3 == 0)))) goto LAB_0067b2fd;
        iVar2 = *piVar3;
        piVar3 = piVar1;
      } while (iVar2 != param_4);
      if ((param_2 == '\0') || (piVar1 != (int *)0x0)) {
        FUN_00446cb0(param_1);
      }
      else {
        FUN_0067b1e0(param_1);
      }
    }
LAB_0067b2fd:
    if (*(int *)(in_ECX[2] + 4) != 0) {
      in_ECX[2] = *(int *)(in_ECX[2] + 4);
    }
  }
  return;
}



undefined4 FUN_0067b320(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = 0;
  if (in_ECX == (int *)&DAT_00b3bd68) {
    iVar5 = 0;
    piVar4 = (int *)&DAT_00b3bd68;
    do {
      if (*piVar4 != 0) {
        iVar5 = iVar5 + 1;
      }
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
    if (iVar5 != 2) goto LAB_0067b353;
  }
  else {
LAB_0067b353:
    if ((DAT_00b3bd74 == (int *)0x0) || (param_1 != *DAT_00b3bd74)) goto LAB_0067b36b;
  }
  DAT_00b3bd74 = (int *)0x0;
LAB_0067b36b:
  if ((DAT_00b3bd78 != (int *)0x0) && (param_1 == *DAT_00b3bd78)) {
    DAT_00b3bd78 = (int *)0x0;
  }
  piVar4 = in_ECX;
  if (param_2 != (int *)0x0) {
    piVar4 = param_2;
  }
  iVar5 = 0;
  piVar6 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    while ((piVar1 = (int *)piVar4[1], piVar1 != (int *)0x0 || (*piVar4 != 0))) {
      iVar5 = *piVar4;
      if (iVar5 == param_1) goto LAB_0067b3be;
      piVar6 = piVar4;
      piVar4 = piVar1;
      if (piVar1 == (int *)0x0) {
        return uVar3;
      }
    }
    if (iVar5 == param_1) {
LAB_0067b3be:
      if (piVar6 == (int *)0x0) {
        piVar4 = (int *)in_ECX[1];
        if (piVar4 == (int *)0x0) {
          *in_ECX = 0;
        }
        else {
          in_ECX[1] = piVar4[1];
          *in_ECX = *piVar4;
          FUN_00401f20(piVar4);
        }
        if (in_ECX[1] == 0) {
          in_ECX[2] = (int)in_ECX;
        }
      }
      else {
        FUN_0065c620(param_1);
        if (piVar4 == (int *)in_ECX[2]) {
          in_ECX[2] = (int)piVar6;
        }
      }
      if (((*(uint *)(param_1 + 8) >> 5 & 1) != 0) && (cVar2 = FUN_0045a500(), cVar2 == '\0')) {
        FUN_00659bc0();
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}



void FUN_0067b430(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *in_ECX;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  if (in_ECX != (int *)0x0) {
    uVar5 = 0;
    piVar3 = in_ECX;
    do {
      if (*piVar3 != 0) {
        uVar5 = uVar5 + 1;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if (uVar5 != 0) {
      piVar2 = (int *)FUN_00401f00(-(uint)((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) |
                                   (uint)((ulonglong)uVar5 * 4));
      piVar3 = in_ECX;
      piVar4 = piVar2;
      do {
        if ((piVar3[1] == 0) && (*piVar3 == 0)) break;
        *piVar4 = *piVar3;
        piVar3 = (int *)piVar3[1];
        piVar4 = piVar4 + 1;
      } while (piVar3 != (int *)0x0);
      FUN_004526e0();
      iVar6 = uVar5 - 1;
      FUN_0067b110(piVar2,0,iVar6);
      for (; -1 < iVar6; iVar6 = iVar6 + -1) {
        iVar1 = piVar2[iVar6];
        if (iVar1 != 0) {
          if (*in_ECX != 0) {
            piVar3 = (int *)FUN_00401f00(8);
            if (piVar3 == (int *)0x0) {
              piVar3 = (int *)0x0;
            }
            else {
              *piVar3 = *in_ECX;
              piVar3[1] = 0;
            }
            piVar3[1] = in_ECX[1];
            in_ECX[1] = (int)piVar3;
          }
          *in_ECX = iVar1;
        }
      }
      FUN_00401f20(piVar2);
      in_ECX[2] = (int)in_ECX;
      for (iVar6 = in_ECX[1]; iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
        iVar6 = *(int *)(in_ECX[2] + 4);
        in_ECX[2] = iVar6;
      }
    }
  }
  return;
}



void FUN_0067b520(undefined4 param_1)

{
  FUN_00566380(param_1);
  FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b15350,0);
  return;
}



void FUN_0067b560(void)

{
  int in_ECX;
  
  FUN_00567e00();
  FUN_0046ac70(in_ECX + 0x40,4);
  FUN_0046ac70(in_ECX + 0x44,0xc);
  FUN_0046ac70(in_ECX + 0x50,4);
  return;
}



void FUN_0067b5a0(void)

{
  int in_ECX;
  
  FUN_00567f70();
  FUN_0046ac80(in_ECX + 0x40,4);
  FUN_0046ac80(in_ECX + 0x44,0xc);
  FUN_0046ac80(in_ECX + 0x50,4);
  return;
}



void FUN_0067b5f0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  FUN_00674fd0(in_ECX);
  piVar1 = (int *)*in_ECX;
  while ((piVar1 != (int *)0x0 && (*piVar1 != 0))) {
    FUN_00401f20(*piVar1);
    puVar2 = (undefined4 *)*in_ECX;
    puVar3 = (undefined4 *)puVar2[1];
    if (puVar3 == (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    else {
      puVar2[1] = puVar3[1];
      *puVar2 = *puVar3;
      FUN_00401f20(puVar3);
    }
    piVar1 = (int *)*in_ECX;
  }
  FUN_00401f20(*in_ECX);
  FUN_00566830(1);
  if ((int *)in_ECX[2] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[2] + 0x10))(1);
  }
  return;
}



void FUN_0067b670(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar2 = (int *)*in_ECX;
  if (piVar2 != (int *)0x0) {
    while (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
      if (*piVar1 == param_1) {
        FUN_0065c620(piVar1);
        FUN_00401f20(piVar1);
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



void FUN_0067b6b0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_ECX;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  for (piVar1 = (int *)*in_ECX;
      ((piVar3 = (int *)0x0, piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0)
       ) && (piVar3 = piVar2, *piVar2 != param_1)); piVar1 = (int *)piVar1[1]) {
    if ((char)piVar2[1] == '\0') {
      iVar4 = iVar4 + 1;
    }
    else {
      iVar5 = iVar5 + 1;
    }
  }
  if ((param_2 != (int *)0x0) && (piVar3 != (int *)0x0)) {
    if ((char)piVar3[1] == '\0') {
      iVar5 = iVar4;
    }
    *param_2 = iVar5;
  }
  return;
}



int FUN_0067b710(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  iVar2 = 0;
  for (piVar1 = (int *)*in_ECX; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



short FUN_0067b730(void)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  short sVar6;
  
  sVar6 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar6 = 6;
  }
  sVar6 = sVar6 + 2;
  if (0x38 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    sVar3 = 0;
    for (piVar4 = (int *)*in_ECX; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      if (*piVar4 != 0) {
        sVar3 = sVar3 + 1;
      }
    }
    sVar6 = sVar3 * 9 + sVar6;
    if (0x38 < *(byte *)(DAT_00b33b00 + 0x7c)) goto LAB_0067b7a9;
  }
  piVar4 = (int *)*in_ECX;
  sVar3 = 0;
  if (piVar4 != (int *)0x0) {
    sVar3 = 0;
    do {
      if (*piVar4 != 0) {
        sVar3 = sVar3 + 1;
      }
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  sVar6 = sVar3 * 5 + sVar6;
LAB_0067b7a9:
  sVar3 = (**(code **)(*(int *)in_ECX[2] + 0xdc))();
  sVar6 = sVar6 + sVar3 + 0x20;
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x117,".\\AI\\SpectatorPackage.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,sVar6,*puVar1,uVar5);
      return sVar6;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar6,0x117,
                 ".\\AI\\SpectatorPackage.cpp");
  }
  return sVar6;
}



void FUN_0067b840(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *in_ECX;
  int local_20;
  int local_1c;
  undefined4 local_18;
  short *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 *local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_1c = *(int *)(DAT_00b33b00 + 0x14);
  local_14 = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_10 = 0x4b4f4c42;
    FUN_0045b9a0(&local_10,4);
    local_14 = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_c,2);
  }
  local_20 = 0;
  local_8 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_20,2);
  for (piVar7 = (int *)*in_ECX; (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0))));
      piVar7 = (int *)piVar7[1]) {
    piVar1 = (int *)*piVar7;
    local_10 = *(undefined4 *)(*piVar1 + 0xc);
    FUN_0045f7a0(&local_10,4);
    FUN_0045b9a0(piVar1 + 1,1);
    if (0x38 < *(byte *)(DAT_00b33b00 + 0x7c)) {
      FUN_0045b9a0(piVar1 + 2,4);
    }
    local_20 = local_20 + 1;
  }
  *local_8 = (undefined2)local_20;
  local_18 = 0;
  if (in_ECX[1] != 0) {
    local_18 = *(undefined4 *)(in_ECX[1] + 0xc);
  }
  FUN_0045f7a0(&local_18,4);
  local_4 = *(undefined4 *)(in_ECX[2] + 0xc);
  FUN_0045f7a0(&local_4,4);
  (**(code **)(*(int *)in_ECX[2] + 0xe0))();
  FUN_0045b9a0(in_ECX + 3,4);
  FUN_0045b9a0(in_ECX + 4,4);
  FUN_0045b9a0(in_ECX + 5,0xc);
  FUN_0045b9a0(in_ECX + 8,4);
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - local_1c,0x147,
                   ".\\AI\\SpectatorPackage.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x147,".\\AI\\SpectatorPackage.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - local_1c,*puVar2,uVar8);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_14;
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_14 + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\SpectatorPackage.cpp",0x147);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



void FUN_0067ba90(void)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int *in_ECX;
  int iVar8;
  ushort local_1c [2];
  uint local_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;
  int iStack_4;
  
  local_18 = 0;
  iVar8 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    FUN_004534d0(&local_c,4);
    if (local_c != 0x4b4f4c42) {
      puVar5 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\SpectatorPackage.cpp",0x14d,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar3 = (int *)FUN_0046b250(*puVar5);
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar5 + 9),*(undefined4 *)((int)puVar5 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\SpectatorPackage.cpp",0x14d,*puVar5,uVar4);
      }
    }
    iVar8 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_18,2);
  }
  FUN_004534d0(local_1c,2);
  iStack_14 = 0;
  if (local_1c[0] != 0) {
    do {
      puVar5 = (undefined4 *)FUN_00401f00(0xc);
      FUN_0045ba00(&uStack_8,4);
      *puVar5 = uStack_8;
      FUN_004534d0(puVar5 + 1,1);
      if (0x38 < *(byte *)(DAT_00b33b00 + 0x7c)) {
        FUN_004534d0(puVar5 + 2,4);
      }
      piVar3 = (int *)*in_ECX;
      if (*piVar3 != 0) {
        piVar6 = (int *)FUN_00401f00(8);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = *piVar3;
          piVar6[1] = 0;
        }
        piVar6[1] = piVar3[1];
        piVar3[1] = (int)piVar6;
      }
      *piVar3 = (int)puVar5;
      iStack_14 = iStack_14 + 1;
    } while (iStack_14 < (int)(uint)local_1c[0]);
  }
  FUN_0045ba00(&iStack_4,4);
  in_ECX[1] = iStack_4;
  FUN_0045ba00(&uStack_10,4);
  FUN_004606d0(uStack_10);
  FUN_0046c300(uStack_10,1);
  (**(code **)(*(int *)in_ECX[2] + 0xe4))();
  FUN_004534d0(in_ECX + 3,4);
  FUN_004534d0(in_ECX + 4,4);
  FUN_004534d0(in_ECX + 5,0xc);
  FUN_004534d0(in_ECX + 8,4);
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    puVar5 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar1 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar5 == (undefined4 *)0x0) {
      uVar7 = local_18 & 0xffff;
      if (uVar7 + iVar8 < uVar1) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar1 - uVar7) - iVar8,".\\AI\\SpectatorPackage.cpp",0x176,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar1 < uVar7 + iVar8) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar7 - uVar1) + iVar8,".\\AI\\SpectatorPackage.cpp",0x176,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar3 = (int *)FUN_0046b250(*puVar5);
      uVar7 = (local_18 & 0xffff) + iVar8;
      if (uVar7 < uVar1) {
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar5 + 9),*(undefined4 *)((int)puVar5 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar1 - (local_18 & 0xffff)) - iVar8,".\\AI\\SpectatorPackage.cpp",0x176,
                     *puVar5,uVar4);
        return;
      }
      if (uVar1 < uVar7) {
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar5 + 9),*(undefined4 *)((int)puVar5 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_18 & 0xffff) - uVar1) + iVar8,".\\AI\\SpectatorPackage.cpp",0x176,
                     *puVar5,uVar4);
        return;
      }
    }
  }
  return;
}



void FUN_0067bdd0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_ECX;
  
  piVar3 = (int *)*in_ECX;
  piVar5 = (int *)0x0;
  while ((piVar4 = piVar3, piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))))) {
    piVar1 = (int *)*piVar4;
    if (*piVar1 != 0) {
      uVar6 = FUN_0046b250(*piVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
      iVar7 = FUN_009832e6(uVar6);
      *piVar1 = iVar7;
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
  if (in_ECX[1] != 0) {
    uVar6 = FUN_0046b250(in_ECX[1],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
    uVar6 = FUN_009832e6(uVar6);
    in_ECX[1] = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0067beb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)in_ECX[2] + 0xe8))();
  return;
}



void FUN_0067bec0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  iVar2 = puVar1[1];
  while (iVar2 != 0) {
    iVar2 = *(int *)(puVar1[1] + 4);
    FUN_00401f20(puVar1[1]);
    puVar1[1] = iVar2;
  }
  *puVar1 = 0;
  FUN_00401f20(*in_ECX);
  return;
}



void FUN_0067bf00(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_ECX;
  
  piVar1 = (int *)*in_ECX;
joined_r0x0067bf09:
  do {
    if ((piVar1 == (int *)0x0) || (piVar3 = (int *)*piVar1, piVar3 == (int *)0x0)) {
      return;
    }
    if (piVar3[1] == param_1) {
      piVar3[1] = 0;
    }
    piVar3 = (int *)*piVar3;
    for (piVar2 = piVar3; (piVar2 != (int *)0x0 && ((int *)*piVar2 != (int *)0x0));
        piVar2 = (int *)piVar2[1]) {
      if (*(int *)*piVar2 == param_1) {
        if (piVar3 != (int *)0x0) goto LAB_0067bf54;
        goto LAB_0067bf79;
      }
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
  while( true ) {
    if (*piVar1 == param_1) {
      FUN_0065c620(piVar1);
      FUN_00401f20(piVar1);
      goto LAB_0067bf79;
    }
    piVar3 = (int *)piVar3[1];
    if (piVar3 == (int *)0x0) break;
LAB_0067bf54:
    piVar1 = (int *)*piVar3;
    if (piVar1 == (int *)0x0) goto LAB_0067bf79;
  }
  piVar1 = (int *)*in_ECX;
  goto joined_r0x0067bf09;
LAB_0067bf79:
  piVar1 = (int *)*in_ECX;
  goto joined_r0x0067bf09;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067bf80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  if (param_1 != 0) {
    if (*piVar1 != 0) {
      piVar2 = (int *)FUN_00401f00(8);
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar1;
        piVar2[1] = 0;
        piVar2[1] = piVar1[1];
        *piVar1 = param_1;
        piVar1[1] = (int)piVar2;
        return;
      }
      _DAT_00000004 = piVar1[1];
      piVar1[1] = 0;
    }
    *piVar1 = param_1;
  }
  return;
}



void FUN_0067bfd0(int param_1)

{
  FUN_0065c620(param_1);
  if (param_1 != 0) {
    FUN_0067b5f0();
    FUN_00401f20(param_1);
  }
  return;
}



short FUN_0067c000(void)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  short local_4;
  
  local_4 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    local_4 = 6;
  }
  local_4 = local_4 + 2;
  for (piVar4 = (int *)*in_ECX; (piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))));
      piVar4 = (int *)piVar4[1]) {
    sVar3 = FUN_0067b730();
    local_4 = local_4 + sVar3;
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x218,".\\AI\\SpectatorPackage.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,local_4,*puVar1,uVar5);
      return local_4;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",local_4,0x218,
                 ".\\AI\\SpectatorPackage.cpp");
  }
  return local_4;
}



void FUN_0067c0d0(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  char cVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *in_ECX;
  int local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar7 = FUN_0045a170();
  if (cVar7 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  local_10 = 0;
  puVar2 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_10,2);
  for (piVar8 = (int *)*in_ECX; (piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0))));
      piVar8 = (int *)piVar8[1]) {
    FUN_0067b840();
    local_10 = local_10 + 1;
  }
  *puVar2 = (undefined2)local_10;
  if (DAT_00b05bac != '\0') {
    puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar4 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar4 - iVar1,0x233,
                   ".\\AI\\SpectatorPackage.cpp");
    }
    else {
      piVar8 = (int *)FUN_0046b250(*puVar3);
      uVar9 = (**(code **)(*piVar8 + 0xd4))
                        (*(undefined4 *)((int)puVar3 + 5),0x233,".\\AI\\SpectatorPackage.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar4 - iVar1,*puVar3,uVar9);
    }
  }
  cVar7 = FUN_0045a170();
  psVar6 = local_c;
  if (cVar7 != '\0') {
    uVar5 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar5) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\SpectatorPackage.cpp",0x233);
    }
    *psVar6 = (short)uVar5 - (short)psVar6;
  }
  return;
}



void FUN_0067c230(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
      piVar1 = (int *)piVar1[1]) {
    FUN_0067bdd0();
  }
  return;
}



void FUN_0067c260(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2ea8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00568e10(uVar2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a746ac;
  FUN_005661e0(0x13);
  in_ECX[0xf] = param_1;
  in_ECX[0x11] = DAT_00b3f9a8;
  in_ECX[0x12] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[0x14] = 0;
  in_ECX[0x13] = uVar1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0067c2e0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a746ac;
  FUN_00568640();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0067c310(void)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  int in_ECX;
  int *piVar11;
  float10 fVar12;
  float local_30;
  int local_2c;
  
  local_30 = 0.0;
  local_2c = 0;
  piVar11 = (int *)**(undefined4 **)(in_ECX + 0x3c);
  for (piVar1 = piVar11; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      local_2c = local_2c + 1;
    }
  }
  if (0 < local_2c) {
    do {
      piVar2 = *(int **)*piVar11;
      for (piVar1 = (int *)**(undefined4 **)(in_ECX + 0x3c);
          (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1])
      {
        if (*(int **)*piVar1 != (int *)0x0) {
          pfVar10 = (float *)(**(code **)(**(int **)*piVar1 + 0x174))();
          fVar3 = pfVar10[1];
          fVar4 = *pfVar10;
          fVar5 = pfVar10[2];
          pfVar10 = (float *)(**(code **)(*piVar2 + 0x174))();
          fVar6 = *pfVar10;
          fVar7 = pfVar10[1];
          fVar8 = pfVar10[2];
          fVar12 = (float10)FUN_00982c30();
          if (local_30 < (float)fVar12) {
            iVar9 = *(int *)(in_ECX + 0x3c);
            *(float *)(iVar9 + 0x14) = (fVar6 + fVar4) * 0.5;
            *(float *)(iVar9 + 0x18) = (fVar7 + fVar3) * 0.5;
            *(float *)(iVar9 + 0x1c) = (fVar8 + fVar5) * 0.5;
            local_30 = (float)fVar12;
          }
        }
      }
      local_2c = local_2c + -1;
      piVar11 = (int *)piVar11[1];
    } while (local_2c != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0067c4a0(float *param_1,int *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  float *pfVar9;
  int iVar10;
  undefined4 uVar11;
  int in_ECX;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar10 = *(int *)(in_ECX + 0x3c);
  fVar1 = *(float *)(iVar10 + 0x18);
  fVar2 = *(float *)(iVar10 + 0x14);
  fVar3 = *(float *)(iVar10 + 0x1c);
  pfVar9 = (float *)(**(code **)(*param_2 + 0x174))();
  fVar4 = *pfVar9;
  fVar5 = pfVar9[1];
  fVar6 = pfVar9[2];
  iVar10 = FUN_006ecc80();
  fVar7 = _DAT_00b36b10;
  if (iVar10 != 0) {
    FUN_006ecc80();
    cVar8 = FUN_004c97f0();
    fVar7 = _DAT_00b36b10;
    if (cVar8 != '\0') {
      fVar7 = _DAT_00b36b20;
    }
  }
  fVar7 = fVar7 + fVar7 + 0.0;
  if (param_3 == '\0') {
    fStack_c = fVar4 - fVar2;
    fStack_8 = fVar5 - fVar1;
    fStack_4 = fVar6 - fVar3;
  }
  else {
    fStack_c = fVar2 - fVar4;
    fStack_8 = fVar1 - fVar5;
    fStack_4 = fVar3 - fVar6;
  }
  *param_1 = fStack_c;
  param_1[1] = fStack_8;
  param_1[2] = fStack_4;
  FUN_0043f350();
  fStack_c = fVar7 * *param_1;
  fStack_8 = param_1[1] * fVar7;
  fStack_4 = fVar7 * param_1[2];
  *param_1 = fStack_c + fVar4;
  param_1[1] = fStack_8 + fVar5;
  param_1[2] = fStack_4 + fVar6;
  iVar10 = FUN_006ecc80();
  if (iVar10 != 0) {
    FUN_006ecc80();
    cVar8 = FUN_004c97f0();
    if (cVar8 != '\0') {
      uVar11 = FUN_006ecc80();
      pfVar9 = (float *)FUN_005e2e20(&fStack_c,*param_1,param_1[1],param_1[2],uVar11,0,0,0);
      *param_1 = *pfVar9;
      param_1[1] = pfVar9[1];
      param_1[2] = pfVar9[2];
    }
  }
  *(float *)(in_ECX + 0x44) = *param_1;
  *(float *)(in_ECX + 0x48) = param_1[1];
  *(float *)(in_ECX + 0x4c) = param_1[2];
  return param_1;
}



void FUN_0067c660(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int in_ECX;
  undefined1 local_c [12];
  
  if ((((*(float *)(in_ECX + 0x48) == 3.4028235e+38) || (*(float *)(in_ECX + 0x44) == 3.4028235e+38)
       ) || (*(float *)(in_ECX + 0x4c) == 3.4028235e+38)) ||
     (cVar3 = FUN_008aa350(&DAT_00b3f9a8), cVar3 != '\0')) {
    FUN_0067c4a0(local_c,param_2,0);
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x48);
  *param_1 = *(undefined4 *)(in_ECX + 0x44);
  uVar2 = *(undefined4 *)(in_ECX + 0x4c);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067c6e0(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  if (param_2 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x58) + 0x204))(0);
    FUN_005e05f0(0x30);
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x3c);
  if (0.0 < *(float *)(iVar1 + 0x20)) {
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) - _DAT_00b33e9c;
    return;
  }
  iVar3 = FUN_0047df80(0);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + 4);
  if (iVar1 != 0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x200))();
    if (((cVar2 == '\0') && ((float)(iVar3 % 100) < _DAT_00b36900)) &&
       (*(float *)(in_ECX + 0x50) <= 0.0)) {
      iVar3 = FUN_0052ed50(6,2);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0xe4) = iVar1;
        (**(code **)(**(int **)(param_1 + 0x58) + 0x1a4))(param_1,iVar3,0,0,1);
        puVar4 = (undefined4 *)FUN_00403c00();
        *(undefined4 *)(in_ECX + 0x50) = *puVar4;
        *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x20) = 0x41200000;
      }
    }
    *(float *)(in_ECX + 0x50) = *(float *)(in_ECX + 0x50) - _DAT_00b33e9c;
  }
  return;
}



void FUN_0067c7f0(int param_1,char param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x58) + 0x49c))();
    return;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + 4);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 0x484))(iVar1);
  }
  return;
}



void FUN_0067c830(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar2 = DAT_00b3f9ac;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_0067c310();
    iVar1 = *(int *)(in_ECX + 0x3c);
    *param_1 = *(undefined4 *)(iVar1 + 0x14);
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    param_1[1] = *(undefined4 *)(iVar1 + 0x18);
    param_1[2] = uVar2;
    return;
  }
  *param_1 = DAT_00b3f9a8;
  uVar3 = DAT_00b3f9b0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}



int * FUN_0067c880(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *in_ECX;
  int *piVar10;
  float10 fVar11;
  int *local_10;
  
  puVar1 = (undefined4 *)*in_ECX;
  piVar10 = (int *)0x0;
  local_10 = (int *)0x0;
  bVar4 = false;
  if ((param_2 != 4) && (param_2 != -1)) {
    bVar4 = true;
  }
  do {
    if ((puVar1 == (undefined4 *)0x0) || ((undefined4 *)*puVar1 == (undefined4 *)0x0)) {
      return piVar10;
    }
    piVar2 = *(int **)*puVar1;
    piVar3 = piVar2;
    while( true ) {
      if ((piVar3 == (int *)0x0) || (piVar5 = (int *)*piVar3, piVar5 == (int *)0x0))
      goto joined_r0x0067c8f7;
      if ((int *)*piVar5 == param_1) break;
      piVar3 = (int *)piVar3[1];
    }
    if (piVar5 != (int *)0x0) break;
joined_r0x0067c8f7:
    for (; (piVar2 != (int *)0x0 && (piVar3 = (int *)*piVar2, piVar3 != (int *)0x0));
        piVar2 = (int *)piVar2[1]) {
      if (((*piVar3 != 0) && (piVar5 = *(int **)(*piVar3 + 0x58), piVar5 != (int *)0x0)) &&
         ((piVar5 = (int *)(**(code **)(*piVar5 + 0x3d0))(), piVar5 == param_1 ||
          (((int *)param_1[0x16] != (int *)0x0 &&
           (iVar6 = (**(code **)(*(int *)param_1[0x16] + 0x3d0))(), iVar6 == *piVar3)))))) {
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)FUN_00401f00(8);
          if (piVar10 == (int *)0x0) {
            piVar10 = (int *)0x0;
            local_10 = piVar10;
          }
          else {
            *piVar10 = 0;
            piVar10[1] = 0;
            local_10 = piVar10;
          }
        }
        if (*piVar10 != 0) {
          piVar5 = (int *)FUN_00401f00(8);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = *piVar10;
            piVar5[1] = 0;
          }
          piVar5[1] = piVar10[1];
          piVar10[1] = (int)piVar5;
        }
        *piVar10 = (int)piVar3;
      }
    }
LAB_0067cb2d:
    puVar1 = (undefined4 *)puVar1[1];
  } while( true );
joined_r0x0067c9a0:
  if ((piVar2 == (int *)0x0) || (piVar3 = (int *)*piVar2, piVar10 = local_10, piVar3 == (int *)0x0))
  goto LAB_0067cb2d;
  if ((((int *)*piVar3 != param_1) && ((char)piVar3[1] == (char)piVar5[1])) &&
     ((!bVar4 ||
      ((piVar10 = (int *)((int *)*piVar3)[0x16], piVar10 != (int *)0x0 &&
       (iVar6 = (**(code **)(*piVar10 + 8))(), iVar6 == param_2)))))) {
    piVar10 = (int *)*piVar3;
    if (((piVar10 == (int *)0x0) || ((int *)piVar10[0x16] == (int *)0x0)) ||
       ((piVar7 = (int *)(**(code **)(*(int *)piVar10[0x16] + 0x3d0))(), piVar7 != param_1 &&
        (((int *)param_1[0x16] == (int *)0x0 ||
         (piVar7 = (int *)(**(code **)(*(int *)param_1[0x16] + 0x3d0))(), piVar7 != piVar10)))))) {
      if (((int *)piVar10[0x16] != (int *)0x0) &&
         (iVar6 = (**(code **)(*(int *)piVar10[0x16] + 0x3d0))(), iVar6 != 0)) {
        piVar10 = (int *)(**(code **)(*(int *)piVar10[0x16] + 0x3d0))();
      }
      piVar7 = piVar10;
      piVar8 = param_1;
      if ((((int *)param_1[0x16] != (int *)0x0) &&
          (iVar6 = (**(code **)(*(int *)param_1[0x16] + 0x3d0))(), iVar6 != 0)) &&
         (piVar8 = (int *)(**(code **)(*(int *)param_1[0x16] + 0x3d0))(), piVar8 == DAT_00b333c4)) {
        piVar7 = DAT_00b333c4;
        piVar8 = piVar10;
      }
      uVar9 = FUN_005e3270(0,100);
      uVar9 = (**(code **)(*piVar7 + 0x334))(1,uVar9);
      fVar11 = (float10)FUN_004d7e90(piVar8,0);
      uVar9 = (**(code **)(*piVar7 + 0x284))(0x21,(float)fVar11,uVar9);
      uVar9 = (**(code **)(*piVar7 + 0x224))(piVar8,0,uVar9);
      iVar6 = FUN_00546190(uVar9);
      if (0 < iVar6) goto LAB_0067cb16;
    }
    piVar3[2] = piVar5[2];
    if (local_10 == (int *)0x0) {
      local_10 = (int *)FUN_00401f00(8);
      if (local_10 == (int *)0x0) {
        local_10 = (int *)0x0;
      }
      else {
        *local_10 = 0;
        local_10[1] = 0;
      }
    }
    FUN_00446cb0(piVar3);
  }
LAB_0067cb16:
  piVar2 = (int *)piVar2[1];
  piVar10 = local_10;
  goto joined_r0x0067c9a0;
}



undefined4 FUN_0067cb50(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined4 *in_ECX;
  
  FUN_005e02e0(0);
  cVar3 = FUN_00467560();
  if (cVar3 != '\0') {
    return 1;
  }
  piVar1 = (int *)*in_ECX;
  do {
    if ((piVar1 == (int *)0x0) || ((int *)*piVar1 == (int *)0x0)) {
      return 0;
    }
    piVar4 = *(int **)*piVar1;
    if (piVar4 != (int *)0x0) {
      while (piVar2 = (int *)*piVar4, piVar2 != (int *)0x0) {
        if (*piVar2 == param_1) {
          if ((piVar2 != (int *)0x0) && ((char)piVar2[1] != '\0')) {
            return 1;
          }
          break;
        }
        piVar4 = (int *)piVar4[1];
        if (piVar4 == (int *)0x0) break;
      }
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}



void FUN_0067cbc0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(8,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  in_ECX[8] = 0;
  *in_ECX = puVar2;
  in_ECX[1] = 0;
  iVar3 = FUN_00401f00(0x54,uVar1);
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0067c260(in_ECX);
  }
  in_ECX[2] = iVar3;
  *(undefined4 *)(iVar3 + 0x18) = 0xf;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0067cc60(void)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  int *piVar7;
  int *in_ECX;
  uint uVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  
  piVar5 = (int *)*in_ECX;
  if (piVar5 == (int *)0x0) {
    return 1;
  }
  bVar9 = true;
  piVar7 = piVar5;
  do {
    piVar1 = (int *)*piVar7;
    if (piVar1 == (int *)0x0) break;
    piVar2 = (int *)*piVar1;
    if (bVar9) {
      cVar4 = (**(code **)(*piVar2 + 0x334))(0);
      bVar9 = cVar4 == '\0';
    }
    bVar3 = false;
    piVar5 = (int *)FUN_005e6cd0(1);
    if ((char)piVar5 != '\0') {
      piVar5 = (int *)(**(code **)(*(int *)piVar2[0x16] + 0x184))();
      if ((char)piVar5[0x14] != '\0') {
        uVar12 = 0;
        uVar6 = FUN_00628140(piVar2);
        fVar10 = (float10)FUN_004d7e90(uVar6,uVar12);
        fVar11 = (float10)_DAT_00b37028;
        piVar5 = (int *)CONCAT22(extraout_var,
                                 (ushort)(fVar11 < fVar10) << 8 |
                                 (ushort)(NAN(fVar11) || NAN(fVar10)) << 10 |
                                 (ushort)(fVar11 == fVar10) << 0xe);
        if (fVar11 < fVar10) {
          bVar3 = true;
        }
      }
    }
    if (piVar2 == DAT_00b333c4) {
LAB_0067cd63:
      piVar7 = (int *)piVar7[1];
    }
    else {
      cVar4 = (**(code **)(*piVar2 + 0x198))(0);
      if (cVar4 == '\0') {
        piVar5 = (int *)((uint)piVar2[2] >> 5);
        if (((((uint)piVar5 & 1) == 0) && (((uint)piVar2[2] >> 0xb & 1) == 0)) && (!bVar3))
        goto LAB_0067cd63;
      }
      piVar5 = (int *)piVar7[1];
      if (piVar5 == (int *)0x0) {
        *piVar7 = 0;
        piVar5 = (int *)FUN_00401f20(piVar1);
        piVar7 = (int *)*in_ECX;
      }
      else {
        piVar7[1] = piVar5[1];
        *piVar7 = *piVar5;
        FUN_00401f20(piVar5);
        piVar5 = (int *)FUN_00401f20(piVar1);
        piVar7 = (int *)*in_ECX;
      }
    }
  } while (piVar7 != (int *)0x0);
  if ((!bVar9) && (piVar7 = (int *)*in_ECX, piVar5 = (int *)0x0, piVar7 != (int *)0x0)) {
    uVar8 = 0;
    do {
      if (*piVar7 != 0) {
        uVar8 = uVar8 + 1;
      }
      piVar7 = (int *)piVar7[1];
    } while (piVar7 != (int *)0x0);
    piVar5 = (int *)0x0;
    if (1 < uVar8) {
      return 1;
    }
  }
  return (uint)piVar5 & 0xffffff00;
}



void FUN_0067cdb0(int *param_1,undefined1 param_2,char param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  puVar4 = (undefined4 *)FUN_00401f00(0xc);
  cVar3 = FUN_005e6c60();
  if ((cVar3 == '\0') ||
     (((char)DAT_00b333c4[0x1ce] == '\0' && ((char)DAT_00b333c4[0x184] == '\0')))) {
    if ((param_1 == DAT_00b333c4) &&
       (((char)DAT_00b333c4[0x1ce] != '\0' || ((char)DAT_00b333c4[0x184] != '\0')))) {
      param_2 = 1;
    }
  }
  else {
    (**(code **)(*(int *)param_1[0x16] + 0x14c))(0);
    param_2 = 0;
  }
  *(undefined1 *)(puVar4 + 1) = param_2;
  *puVar4 = param_1;
  puVar4[2] = 0;
  if (param_3 == -1) {
    piVar6 = (int *)*in_ECX;
    bVar2 = false;
    _param_3 = 0;
    if (piVar6 != (int *)0x0) {
      do {
        puVar1 = (undefined4 *)*piVar6;
        if (puVar1 == (undefined4 *)0x0) break;
        _param_3 = puVar4[2];
        iVar5 = (**(code **)(*param_1 + 0x224))(*puVar1);
        if (0x4f < iVar5) {
          iVar5 = (**(code **)(*(int *)*puVar1 + 0x330))();
          if (iVar5 != 0) {
            piVar7 = param_1;
            (**(code **)(*(int *)*puVar1 + 0x330))(param_1);
            cVar3 = FUN_00613670(piVar7);
            if (cVar3 != '\0') goto LAB_0067cead;
          }
          puVar4[2] = puVar1[2];
          bVar2 = true;
        }
LAB_0067cead:
        piVar6 = (int *)piVar6[1];
        _param_3 = _param_3 + 1;
      } while (piVar6 != (int *)0x0);
      if (bVar2) goto LAB_0067cecc;
    }
    puVar4[2] = _param_3;
  }
  else {
    puVar4[2] = (int)param_3;
  }
LAB_0067cecc:
  if ((*in_ECX != 0) && (iVar5 = FUN_0067b6b0(param_1,0), iVar5 == 0)) {
    FUN_00446cb0(puVar4);
    return;
  }
  FUN_00401f20(puVar4);
  return;
}



void FUN_0067cf00(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    while (iVar2 = *piVar1, iVar2 != 0) {
      FUN_0067b5f0();
      FUN_00401f20(iVar2);
      piVar3 = (int *)piVar1[1];
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        piVar1[1] = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
    }
  }
  return;
}



undefined4 * FUN_0067cf50(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int *in_ECX;
  bool bVar5;
  undefined4 *local_4;
  
  if (DAT_00b333b8 != '\0') {
    puVar4 = (undefined4 *)FUN_00401f00(8);
    if (puVar4 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    return puVar4;
  }
  local_4 = (undefined4 *)FUN_00401f00(8);
  if (local_4 == (undefined4 *)0x0) {
    local_4 = (undefined4 *)0x0;
  }
  else {
    *local_4 = 0;
    local_4[1] = 0;
  }
  piVar2 = (int *)*in_ECX;
joined_r0x0067cfa7:
  do {
    do {
      while( true ) {
        if ((piVar2 == (int *)0x0) ||
           ((piVar1 = (int *)piVar2[1], piVar1 == (int *)0x0 && (*piVar2 == 0)))) {
          return local_4;
        }
        puVar4 = (undefined4 *)*piVar2;
        bVar5 = piVar2 == (int *)*in_ECX;
        cVar3 = FUN_0067cc60();
        piVar2 = piVar1;
        if (cVar3 != '\0') break;
        FUN_0065c620(puVar4);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_0067b5f0();
          FUN_00401f20(puVar4);
        }
        if (bVar5) {
          piVar2 = (int *)*in_ECX;
        }
      }
    } while (param_1 != puVar4[3]);
    piVar1 = (int *)*puVar4;
    while( true ) {
      if ((piVar1 == (int *)0x0) || ((int *)*piVar1 == (int *)0x0)) goto joined_r0x0067cfa7;
      if (*(int *)*piVar1 == param_2) break;
      piVar1 = (int *)piVar1[1];
    }
    FUN_00446cb0(puVar4);
  } while( true );
}



void FUN_0067d040(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  char *pcVar11;
  ushort local_24 [2];
  uint local_20;
  int iStack_1c;
  int local_18;
  int *local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c49bb;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_20 = 0;
  iVar10 = 0;
  cVar3 = FUN_0045a170(uVar4);
  if (cVar3 != '\0') {
    FUN_004534d0(&local_18,4);
    if (local_18 != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\SpectatorPackage.cpp",0x239,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar2);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\SpectatorPackage.cpp",0x239,*puVar2,uVar6);
      }
    }
    iVar10 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_20,2);
  }
  FUN_004534d0(local_24,2);
  iStack_1c = 0;
  if (local_24[0] != 0) {
    do {
      iStack_10 = FUN_00401f00(0x24);
      uStack_4 = 0;
      if (iStack_10 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0067cbc0();
      }
      uStack_4 = 0xffffffff;
      FUN_0067ba90();
      piVar5 = (int *)*local_14;
      if (iVar7 != 0) {
        if (*piVar5 != 0) {
          piVar8 = (int *)FUN_00401f00(8);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            *piVar8 = *piVar5;
            piVar8[1] = 0;
          }
          piVar8[1] = piVar5[1];
          piVar5[1] = (int)piVar8;
        }
        *piVar5 = iVar7;
      }
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < (int)(uint)local_24[0]);
  }
  cVar3 = FUN_0045a170(uVar4);
  if (cVar3 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar9 = local_20 & 0xffff;
      if (uVar9 + iVar10 < uVar4) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar10 = (uVar4 - uVar9) - iVar10;
        pcVar11 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar9 + iVar10 <= uVar4) goto LAB_0067d2e2;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar10 = (uVar9 - uVar4) + iVar10;
        pcVar11 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar11,iVar10,".\\AI\\SpectatorPackage.cpp",0x248,uVar1);
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar9 = (local_20 & 0xffff) + iVar10;
      if (uVar9 < uVar4) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar4 - (local_20 & 0xffff)) - iVar10,".\\AI\\SpectatorPackage.cpp",0x248,
                     *puVar2,uVar6);
        *unaff_FS_OFFSET = local_c;
        return;
      }
      if (uVar4 < uVar9) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_20 & 0xffff) - uVar4) + iVar10,".\\AI\\SpectatorPackage.cpp",0x248,
                     *puVar2,uVar6);
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
  }
LAB_0067d2e2:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0067d300(void)

{
  undefined4 *in_ECX;
  
  FUN_00568e10();
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  *in_ECX = &PTR_FUN_00a747bc;
  in_ECX[0x13] = 0xffffffff;
  in_ECX[0x14] = 1;
  return;
}



void FUN_0067d330(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x40) = *(int *)(in_ECX + 0x40) + param_1;
  return;
}



void FUN_0067d340(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_005660f0();
  if (*(int *)(in_ECX + 0x44) != 0) {
    uVar1 = FUN_0046b250(*(int *)(in_ECX + 0x44));
    *(undefined4 *)(in_ECX + 0x44) = uVar1;
  }
  if (*(int *)(in_ECX + 0x48) != 0) {
    uVar1 = FUN_0046b250(*(int *)(in_ECX + 0x48));
    *(undefined4 *)(in_ECX + 0x48) = uVar1;
  }
  return;
}



void FUN_0067d370(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a747bc;
  FUN_00568640();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0067d3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c49fe;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00568e10(uVar1);
  in_ECX[0xf] = 0;
  in_ECX[0x12] = param_3;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a747bc;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = param_2;
  FUN_005661e0(0x11);
  in_ECX[7] = in_ECX[7] | 6;
  iVar2 = FUN_00401f00(0xc);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005696b0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00569750(0);
  FUN_005697f0(param_1);
  FUN_00565e00(iVar2);
  if (iVar2 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar2);
  }
  iVar2 = FUN_00401f00(0xc);
  local_4._0_1_ = 2;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00569e40();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00565ec0(iVar2);
  if (iVar2 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar2);
  }
  in_ECX[6] = 0x14;
  FUN_00569e90(0);
  FUN_00569ec0(param_1);
  FUN_00468230(0x80);
  in_ECX[0x13] = 0xffffffff;
  in_ECX[0x14] = param_4;
  in_ECX[0x15] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0067d5c0(void)

{
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00567f70();
  FUN_0046ac80(in_ECX + 0x3c,4);
  FUN_0046ac80(in_ECX + 0x40,4);
  FUN_0046ac80(in_ECX + 0x4c,4);
  if (0x6b < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x50,4);
    FUN_0046ac80(in_ECX + 0x54,4);
  }
  FUN_0046aca0(&local_8,4);
  *(undefined4 *)(in_ECX + 0x44) = local_8;
  FUN_0046aca0(&local_4,4);
  *(undefined4 *)(in_ECX + 0x48) = local_4;
  return;
}



undefined4 FUN_0067d650(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(in_ECX + 0x1c) != 0) && (*(int *)(in_ECX + 0x24) != 0)) {
    uVar2 = FUN_004bef40(0x43fa0000);
    iVar3 = FUN_00480520(in_ECX + 0xc,uVar2);
    if (iVar3 < 0) {
      uVar2 = FUN_004bef40(in_ECX + 0xc);
      cVar1 = FUN_00687c30(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_004bef40(0x43fa0000);
        iVar3 = FUN_00480520();
        if (iVar3 < 0) {
          FUN_004bef40();
          cVar1 = FUN_00687c30(param_1);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  iVar3 = FUN_00480520();
  if (-1 < iVar3) {
    return 0;
  }
  uVar2 = FUN_00687aa0(param_1);
  return uVar2;
}



void FUN_0067d760(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = DAT_00b15450;
  in_ECX[1] = DAT_00b15454;
  in_ECX[2] = DAT_00b15458;
  in_ECX[3] = DAT_00b15450;
  in_ECX[4] = DAT_00b15454;
  in_ECX[5] = DAT_00b15458;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 6) = 1;
  return;
}



void FUN_0067d7b0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
    uVar2 = DAT_00b06a2c;
    for (uVar5 = 0; uVar5 < uVar2; uVar5 = uVar5 + 1) {
      for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
        piVar3 = (int *)FUN_00482150(uVar5,uVar4);
        if ((*piVar3 != 0) && (iVar1 = FUN_004af170(), iVar1 != 0)) {
          FUN_004e55a0();
        }
        uVar2 = DAT_00b06a2c;
      }
    }
  }
  else {
    iVar1 = FUN_004af170();
    if (iVar1 != 0) {
      FUN_004e55a0();
      return;
    }
  }
  return;
}



int FUN_0067d820(float *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *unaff_FS_OFFSET;
  float10 fVar15;
  float local_9c;
  float local_98;
  char local_91;
  float local_90;
  float local_8c;
  undefined1 local_85;
  int local_84;
  undefined8 local_80;
  float local_78;
  int local_74 [4];
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c4a30;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff54;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar12 = 0;
  local_84 = 0;
  if (param_2 == 0) goto LAB_0067d972;
  cVar3 = FUN_004d8b90(uVar5);
  if (cVar3 == '\0') {
    iVar6 = FUN_0043f270();
    iVar7 = FUN_004d6670();
    if (iVar7 != iVar6) {
      local_84 = 0;
      goto LAB_0067d972;
    }
  }
  cVar3 = FUN_004d8b90(uVar5);
  if (cVar3 == '\0') {
    iVar6 = FUN_0043f270();
    if (iVar6 == 0) goto LAB_0067d972;
    cVar3 = FUN_0043f840(param_1);
    if (cVar3 == '\0') {
      local_98 = 3.4028235e+38;
      uVar5 = DAT_00b06a2c;
      for (; uVar12 < uVar5; uVar12 = uVar12 + 1) {
        uVar11 = 0;
        while (uVar11 < uVar5) {
          piVar9 = (int *)FUN_00482150(uVar12,uVar11);
          iVar6 = *piVar9;
          if ((((local_84 != 0) &&
               ((iVar6 == 0 ||
                (fVar15 = (float10)FUN_004c9da0(param_1), (float10)local_98 <= fVar15)))) ||
              (iVar6 == 0)) ||
             ((iVar6 = FUN_004af170(), iVar6 == 0 || (iVar6 = FUN_004e55e0(param_1), iVar6 == 0))))
          {
LAB_0067dd4e:
            uVar11 = uVar11 + 1;
            uVar5 = DAT_00b06a2c;
          }
          else {
            pfVar10 = (float *)FUN_004bef40();
            fVar1 = *pfVar10 - *param_1;
            fVar2 = pfVar10[1] - param_1[1];
            local_80 = (double)CONCAT44(fVar2,fVar1);
            local_78 = pfVar10[2] - param_1[2];
            local_90 = local_78 * local_78 + fVar2 * fVar2 + fVar1 * fVar1;
            if (local_98 <= local_90) goto LAB_0067dd4e;
            uVar11 = uVar11 + 1;
            uVar5 = DAT_00b06a2c;
            local_98 = local_90;
            local_84 = iVar6;
          }
        }
      }
      goto LAB_0067d972;
    }
    FUN_0043f270();
    iVar6 = FUN_004f1a80(param_1);
    FUN_004e7df0();
    local_4 = 1;
    FUN_004bef50(param_1);
    if (iVar6 != 0) {
      local_80 = (double)param_1[2];
      fVar15 = (float10)FUN_004cace0();
      if ((float10)local_80 < fVar15) {
        FUN_0067ed00(1);
      }
      iVar7 = FUN_004f0600(param_1);
      if (iVar7 != 0) {
        FUN_0067ed50(1);
      }
    }
    local_74[1] = 0;
    local_74[2] = 0;
    local_74[3] = 0;
    local_74[0] = iVar6;
    iVar13 = (int)ROUND(*param_1) >> 0xc;
    fVar1 = (float)(iVar13 << 0xc);
    iVar7 = (int)ROUND(param_1[1]) >> 0xc;
    iVar6 = 0;
    fVar2 = (float)(iVar7 << 0xc);
    local_9c = 0.0;
    local_80 = (double)CONCAT44(fVar2,fVar1);
    local_90 = fVar1 + 4096.0;
    local_8c = fVar2 + 4096.0;
    if (fVar1 < *param_1 - 512.0) {
      if (local_90 < *param_1 + 512.0 != (local_90 == *param_1 + 512.0)) {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = -1;
    }
    if (fVar2 < param_1[1] - 512.0) {
      if (local_8c < param_1[1] + 512.0 != (local_8c == param_1[1] + 512.0)) {
        local_9c = 1.4013e-45;
      }
    }
    else {
      local_9c = -NAN;
    }
    iVar14 = 1;
    if (iVar6 != 0) {
      local_74[1] = FUN_004efe80(iVar6 + iVar13,iVar7);
      iVar14 = 2;
    }
    if (local_9c != 0.0) {
      iVar8 = FUN_004efe80(iVar13,(int)local_9c + iVar7);
      local_74[iVar14] = iVar8;
      iVar14 = iVar14 + 1;
    }
    if ((iVar6 != 0) && (local_9c != 0.0)) {
      iVar6 = FUN_004efe80(iVar6 + iVar13,(int)local_9c + iVar7);
      local_74[iVar14] = iVar6;
    }
    local_9c = 3.4028235e+38;
    iVar6 = 0;
    iVar7 = 0;
    do {
      if (local_74[iVar7] != 0) {
        local_91 = '\0';
        iVar13 = FUN_004af170();
        if (iVar13 != 0) {
          iVar6 = FUN_004e5730(local_64,param_2,param_3,param_4,&local_91);
        }
        if (iVar6 != 0) {
          uVar4 = FUN_004e8040();
          local_90 = (float)CONCAT31(local_90._1_3_,uVar4);
          FUN_004e8060(0);
          fVar15 = (float10)FUN_0067ede0(local_64,iVar6,param_2);
          local_98 = (float)fVar15;
          FUN_004e8060(local_90);
          if (local_91 == '\0') {
            local_98 = local_98 * 100.0;
          }
          if (local_98 < local_9c) {
            local_9c = local_98;
            local_84 = iVar6;
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
  }
  else {
    iVar6 = FUN_006ecc80();
    if (iVar6 == 0) goto LAB_0067d972;
    FUN_006ecc80();
    iVar6 = FUN_004af170();
    if (iVar6 == 0) goto LAB_0067d972;
    FUN_004e7df0();
    local_4 = 0;
    FUN_004bef50(param_1);
    local_80 = (double)param_1[2];
    FUN_006ecc80();
    fVar15 = (float10)FUN_004cace0();
    if ((float10)local_80 < fVar15) {
      FUN_0067ed00(1);
    }
    FUN_006ecc80(param_1);
    iVar6 = FUN_004cbbb0(param_1);
    if (iVar6 != 0) {
      FUN_0067ed50(1);
    }
    local_85 = 0;
    local_84 = FUN_004e5730(local_38,param_2,param_3,param_4,&local_85);
  }
  local_4 = 0xffffffff;
  FUN_004e8200();
LAB_0067d972:
  *unaff_FS_OFFSET = local_c;
  return local_84;
}



int FUN_0067dd70(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  
  local_c = 0;
  if (param_2 == 0) {
    return 0;
  }
  cVar3 = FUN_004d8b90();
  if (cVar3 != '\0') {
    FUN_006ecc80();
    iVar4 = FUN_004af170();
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_004e5a10();
    return iVar4;
  }
  cVar3 = FUN_0043f840(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  iVar4 = FUN_0043fa40((int)ROUND(fVar1) >> 0xc,(int)ROUND(fVar2) >> 0xc);
  if (((iVar4 != 0) && (iVar4 = FUN_004af170(), iVar4 != 0)) &&
     (local_c = FUN_004e5a10(), local_c != 0)) {
    return local_c;
  }
  iVar4 = -1;
  do {
    iVar6 = -1;
    do {
      if (((iVar4 != 0) || (iVar6 != 0)) &&
         ((iVar5 = FUN_0043fa40(iVar4 + ((int)ROUND(fVar1) >> 0xc),
                                iVar6 + ((int)ROUND(fVar2) >> 0xc)), iVar5 != 0 &&
          (iVar5 = FUN_004af170(), iVar5 != 0)))) {
        local_c = FUN_004e5a10();
      }
      if (local_c != 0) {
        return local_c;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    iVar4 = iVar4 + 1;
    if (1 < iVar4) {
      return 0;
    }
  } while( true );
}



void FUN_0067de90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  int in_ECX;
  undefined4 *puVar5;
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
  iVar2 = FUN_0042b410();
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(DAT_00b333a0 + 0x34) != 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    puVar5 = &param_1;
    param_1 = *(int *)(in_ECX + 0x24);
    uVar3 = FUN_004b2460(puVar5);
    cVar1 = FUN_0068bf60(uVar3,puVar5);
    if ((cVar1 != '\0') && (param_1 != 0)) {
      pfVar4 = (float *)FUN_006899c0();
      local_30 = *pfVar4;
      local_2c = pfVar4[1];
      local_28 = pfVar4[2];
      goto LAB_0067df30;
    }
    FUN_0042b410();
    pfVar4 = (float *)FUN_006899c0();
  }
  else {
    pfVar4 = (float *)FUN_004bef40();
  }
  local_30 = *pfVar4;
  local_2c = pfVar4[1];
  local_28 = pfVar4[2];
LAB_0067df30:
  iVar2 = FUN_0043f7c0(&local_30,(float *)(in_ECX + 0xc),&local_18,0x3f800000);
  if (iVar2 != 0) {
    local_24 = *(float *)(in_ECX + 0xc) - local_30;
    local_20 = *(float *)(in_ECX + 0x10) - local_2c;
    local_1c = *(float *)(in_ECX + 0x14) - local_28;
    FUN_0043f350();
    local_10 = local_28;
    local_c = local_24 + local_18;
    local_8 = local_20 + local_14;
    local_4 = local_1c + local_28;
    local_24 = local_18 - local_24;
    local_20 = local_14 - local_20;
    local_1c = local_28 - local_1c;
    uVar3 = FUN_004b2460();
    FUN_0068c3a0(&local_24,&local_c,uVar3);
  }
  return;
}



void FUN_0067e000(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 0x24) != 0) {
      iVar2 = FUN_004b2460();
      if (iVar2 != 0) {
        uVar3 = FUN_004bef40();
        FUN_004b2460(uVar3);
        FUN_006899c0();
        cVar1 = FUN_008aa350(uVar3);
        if (cVar1 != '\0') {
          uVar3 = FUN_00943410();
          *(undefined4 *)(in_ECX + 0x24) = uVar3;
        }
      }
      if ((*(int *)(in_ECX + 0x28) == 0) || (cVar1 = FUN_005e3270(), cVar1 == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      uVar4 = FUN_004b2460(uVar3);
      FUN_0068c4e0(*(undefined4 *)(in_ECX + 0x24),uVar4,uVar3);
    }
    FUN_0067de90(param_1);
    return;
  }
  return;
}



void FUN_0067e090(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 0x24) != 0) {
      if ((*(int *)(in_ECX + 0x28) == 0) || (cVar1 = FUN_005e3270(), cVar1 == '\0')) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      FUN_0068c4e0(*(undefined4 *)(in_ECX + 0x24),0,uVar2);
    }
    FUN_0068bed0(in_ECX + 0xc);
    FUN_0067de90(param_1);
    return;
  }
  return;
}



void FUN_0067e0e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c4a68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a748bc;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a748ac;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0067e140(byte param_1)

{
  FUN_0067e0e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0067e160(float param_1,char param_2)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  undefined4 uVar6;
  float *in_ECX;
  float10 fVar7;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (((DAT_00b15450 == *in_ECX) && (DAT_00b15454 == in_ECX[1])) && (DAT_00b15458 == in_ECX[2])) {
    return 0;
  }
  pfVar1 = in_ECX + 3;
  cVar3 = FUN_008aa390(&DAT_00b15450);
  if (cVar3 == '\0') {
    return 0;
  }
  if (param_1 == 0.0) {
    return 0;
  }
  cVar3 = FUN_004d8b90();
  if (((cVar3 != '\0') || (cVar3 = FUN_0043f840(in_ECX), cVar3 != '\0')) ||
     (cVar3 = FUN_0043f840(pfVar1), cVar3 != '\0')) {
    fVar5 = (float)FUN_0067d820();
    in_ECX[7] = fVar5;
    fVar5 = (float)FUN_0067d820(pfVar1,param_1,*(char *)(in_ECX + 6) == '\0',0);
    in_ECX[8] = fVar5;
    in_ECX[10] = param_1;
    if (((in_ECX[7] != 0.0) && (fVar5 != 0.0)) && (in_ECX[7] != fVar5)) {
      uVar6 = FUN_004bef40();
      FUN_004121a0(&local_c,uVar6);
      fVar7 = (float10)FUN_0047da40();
      fVar5 = (float)fVar7;
      uVar6 = FUN_004bef40();
      FUN_004121a0(&local_c,uVar6);
      fVar7 = (float10)FUN_0047da40();
      fVar2 = (float)fVar7;
      FUN_004121a0(&local_c,pfVar1);
      fVar7 = (float10)FUN_0047da40();
      if (((((param_2 == '\0') || (4194304.0 <= fVar5)) || (4194304.0 <= fVar2)) &&
          ((250000.0 <= fVar5 || (250000.0 <= fVar2)))) && ((float)fVar7 <= fVar2 + fVar5)) {
        cVar3 = FUN_0067ecf0();
        cVar4 = FUN_0067ecf0();
        if (cVar4 == cVar3) {
          if ((float)fVar7 < 1e+06) {
            fVar7 = (float10)FUN_005e0660();
            local_c = *in_ECX;
            local_8 = in_ECX[1];
            local_18 = *pfVar1;
            local_4 = (float)(fVar7 * (float10)0.5) + in_ECX[2];
            local_14 = in_ECX[4];
            local_10 = (float)(fVar7 * (float10)0.5) + in_ECX[5];
            cVar3 = FUN_006859a0(&local_c,&local_18);
            if (cVar3 == '\0') {
              return 1;
            }
          }
          goto LAB_0067e38d;
        }
      }
      return 1;
    }
  }
LAB_0067e38d:
  in_ECX[7] = 0.0;
  in_ECX[8] = 0.0;
  in_ECX[10] = 0.0;
  return 0;
}



void FUN_0067e3d0(int param_1,undefined4 param_2)

{
  float *pfVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  float *in_ECX;
  undefined4 uVar6;
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
  
  if (param_1 != 0) {
    FUN_0068c6e0();
    pfVar1 = in_ECX + 3;
    cVar2 = FUN_008aa390(pfVar1);
    if (((cVar2 != '\0') && (cVar2 = FUN_008aa390(&DAT_00b15450), cVar2 != '\0')) &&
       (cVar2 = FUN_008aa390(&DAT_00b15450), cVar2 != '\0')) {
      FUN_0068c280(pfVar1,0);
      FUN_0068cb40(param_2);
      if ((in_ECX[7] == 0.0) || (in_ECX[9] == 0.0)) {
        local_30 = *in_ECX;
        local_2c = in_ECX[1];
        local_28 = in_ECX[2];
      }
      else {
        do {
          uVar6 = 0;
          uVar3 = FUN_004bef40(0);
          iVar4 = FUN_0068c280(uVar3,uVar6);
          if (iVar4 != 0) {
            FUN_0068ca30(1);
            if ((in_ECX[10] == 0.0) || (cVar2 = FUN_005e3270(), cVar2 == '\0')) {
              uVar3 = FUN_004e8040();
              FUN_0068ca60(uVar3);
            }
            uVar3 = FUN_0067ecf0();
            FUN_0068ca90(uVar3);
            uVar3 = FUN_0067ed20();
            FUN_0068cac0(uVar3);
            FUN_0068cb10(1);
          }
          iVar4 = FUN_00943410();
        } while (iVar4 != 0);
        pfVar5 = (float *)FUN_004bef40();
        local_30 = *pfVar5;
        local_2c = pfVar5[1];
        local_28 = pfVar5[2];
      }
      FUN_0068c280(in_ECX,0);
      if ((*(int *)(DAT_00b333a0 + 0x34) == 0) &&
         (iVar4 = FUN_0043f7c0(&local_30,pfVar1,&local_c,0x3f800000), iVar4 != 0)) {
        local_24 = *pfVar1 - local_30;
        local_20 = in_ECX[4] - local_2c;
        local_1c = 0.0;
        FUN_0043f350();
        local_18 = local_24 * 10.0;
        local_14 = local_20 * 10.0;
        local_10 = local_1c * 10.0;
        local_4 = local_28;
        local_24 = local_c - local_18;
        local_20 = local_8 - local_14;
        local_1c = local_28 - local_10;
        local_18 = local_18 + local_c;
        local_14 = local_8 + local_14;
        local_10 = local_10 + local_28;
        uVar3 = FUN_004b2460();
        FUN_0068c3a0(&local_24,&local_18,uVar3);
      }
    }
  }
  return;
}



undefined1 * FUN_0067e610(int param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 auStack_100 [160];
  undefined4 uStack_60;
  int iStack_5c;
  float local_58;
  uint uStack_54;
  byte local_41;
  int local_40;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_009c4a98;
  local_14 = *unaff_FS_OFFSET;
  uStack_54 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_14;
  puVar6 = auStack_100;
  local_41 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_58 = 0.0;
    local_c = 0;
    local_40 = 0;
    iStack_5c = 0x67e68c;
    FUN_0067ec70();
    local_58 = (float)param_2;
    iStack_5c = param_1;
    uStack_60 = 0x67e693;
    fVar7 = (float10)FUN_0067ef50();
    local_58 = (float)fVar7;
    iStack_5c = 0x67e6a1;
    FUN_0067ec80();
    local_58 = 9.5418e-39;
    FUN_0067ec50();
    local_58 = 0.0;
    iStack_5c = 0x67e6b0;
    FUN_006a2fc0();
    local_58 = 1.4013e-45;
    iStack_5c = 0x67e6b9;
    FUN_0067ecd0();
    local_58 = (float)param_1;
    iStack_5c = 0x67e6c3;
    FUN_0067efe0();
    local_58 = 9.54185e-39;
    iVar4 = FUN_0067f030();
    while ((iVar4 != 0 && (local_41 == 0))) {
      if (iVar4 == param_2) {
        local_41 = 1;
        local_40 = param_2;
      }
      local_58 = 9.541922e-39;
      piVar5 = (int *)FUN_004e7de0();
      while (((piVar5 != (int *)0x0 && ((piVar5[1] != 0 || (*piVar5 != 0)))) && (local_41 == 0))) {
        iVar1 = *piVar5;
        if (iVar1 == param_2) {
          local_41 = 1;
          iStack_5c = 0x67e741;
          local_58 = (float)iVar4;
          FUN_006a2fc0();
          local_40 = param_2;
        }
        else {
          uStack_60 = 0x67e751;
          iStack_5c = iVar4;
          local_58 = (float)iVar1;
          fVar7 = (float10)FUN_0067ef50();
          local_58 = 9.542056e-39;
          fVar8 = (float10)FUN_0067ec60();
          local_58 = 9.542077e-39;
          cVar3 = FUN_0067ecc0();
          if (cVar3 == '\0') {
            local_58 = 9.542093e-39;
            cVar3 = FUN_0067ec90();
            if (cVar3 != '\0') goto LAB_0067e77d;
LAB_0067e79b:
            local_58 = 9.54215e-39;
            cVar3 = FUN_0067ecc0();
            if (cVar3 == '\0') {
              local_58 = 1.4013e-45;
              iStack_5c = 0x67e7af;
              FUN_0067ecd0();
              iStack_5c = 0x67e7b9;
              local_58 = (float)iVar1;
              FUN_0067efe0();
            }
            iStack_5c = 0x67e7c8;
            local_58 = (float)(fVar8 + (float10)(double)fVar7);
            FUN_0067ec70();
            local_58 = (float)param_2;
            uStack_60 = 0x67e7cf;
            iStack_5c = iVar1;
            fVar7 = (float10)FUN_0067ef50();
            local_58 = (float)fVar7;
            iStack_5c = 0x67e7dd;
            FUN_0067ec80();
            local_58 = 9.542243e-39;
            FUN_0067ec50();
            iStack_5c = 0x67e7ec;
            local_58 = (float)iVar4;
            FUN_006a2fc0();
            if (local_40 != 0) {
              local_58 = 9.542274e-39;
              fVar7 = (float10)FUN_0067ec40();
              local_58 = 9.542292e-39;
              fVar8 = (float10)FUN_0067ec40();
              if (fVar8 <= (float10)(double)fVar7) goto LAB_0067e816;
            }
            local_40 = iVar1;
          }
          else {
LAB_0067e77d:
            local_58 = 9.54212e-39;
            fVar9 = (float10)FUN_0067ec60();
            fVar2 = (float10)(float)(fVar8 + (float10)(double)fVar7);
            if (fVar9 < fVar2 == (fVar9 == fVar2)) goto LAB_0067e79b;
          }
LAB_0067e816:
          piVar5 = (int *)piVar5[1];
        }
      }
      local_58 = 1.4013e-45;
      iStack_5c = 0x67e835;
      FUN_0067eca0();
      local_58 = 9.542369e-39;
      iVar4 = FUN_0067f030();
    }
    while (local_40 != 0) {
      local_58 = 0.0;
      iStack_5c = 0x67e859;
      iStack_5c = FUN_004bef40();
      uStack_60 = 0x67e862;
      iVar4 = FUN_0068c280();
      if (iVar4 != 0) {
        local_58 = 1.4013e-45;
        iStack_5c = 0x67e871;
        FUN_0068ca30();
        local_58 = 1.4013e-45;
        iStack_5c = 0x67e87a;
        FUN_0068ca60();
        local_58 = 0.0;
        iStack_5c = 0x67e883;
        FUN_0068ca90();
        local_58 = 0.0;
        iStack_5c = 0x67e88c;
        FUN_0068cac0();
        local_58 = 1.4013e-45;
        iStack_5c = 0x67e895;
        FUN_0068cb10();
      }
      local_58 = 9.5425e-39;
      local_40 = FUN_00943410();
    }
    local_c = 0xffffffff;
    local_58 = 9.542533e-39;
    FUN_0067e0e0();
    puVar6 = (undefined1 *)(uint)local_41;
  }
  *unaff_FS_OFFSET = local_14;
  return puVar6;
}



undefined1 * FUN_0067e8d0(undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 auStack_100 [156];
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  float local_58;
  uint uStack_54;
  byte local_3d;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_009c4a98;
  local_14 = *unaff_FS_OFFSET;
  uStack_54 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_14;
  puVar6 = auStack_100;
  local_3d = 0;
  if ((*(int *)(in_ECX + 0x1c) == 0) || (*(int *)(in_ECX + 0x20) == 0)) {
LAB_0067eb43:
    *unaff_FS_OFFSET = local_14;
    return puVar6;
  }
  local_58 = 0.0;
  local_c = 0;
  iStack_5c = 0x67e93d;
  FUN_0067ec70();
  local_58 = *(float *)(in_ECX + 0x20);
  iStack_5c = *(undefined4 *)(in_ECX + 0x1c);
  iStack_60 = 0x67e94a;
  fVar7 = (float10)FUN_0067eec0();
  local_58 = (float)fVar7;
  iStack_5c = 0x67e959;
  FUN_0067ec80();
  local_58 = 9.542777e-39;
  FUN_0067ec50();
  local_58 = 0.0;
  iStack_5c = 0x67e96a;
  FUN_006a2fc0();
  local_58 = 1.4013e-45;
  iStack_5c = 0x67e974;
  FUN_0067ecd0();
  local_58 = *(float *)(in_ECX + 0x1c);
  iStack_5c = 0x67e981;
  FUN_0067efe0();
  local_58 = 9.542834e-39;
  iVar4 = FUN_0067f030();
joined_r0x0067e98e:
  if ((iVar4 != 0) && (local_3d == 0)) {
    if (iVar4 == *(int *)(in_ECX + 0x20)) {
      local_3d = 1;
      *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x20);
    }
    local_58 = 9.542894e-39;
    piVar5 = (int *)FUN_004e7de0();
joined_r0x0067e9bb:
    do {
      if ((piVar5 == (int *)0x0) || (((piVar5[1] == 0 && (*piVar5 == 0)) || (local_3d != 0))))
      goto LAB_0067eb10;
      iVar1 = *piVar5;
      local_58 = 9.542969e-39;
      cVar3 = FUN_0067ed70();
      if (cVar3 == '\0') {
        iStack_60 = 0x67e9fc;
        iStack_5c = iVar4;
        local_58 = (float)iVar1;
        cVar3 = FUN_005e0710();
        if (cVar3 == '\0') {
          if (iVar1 == *(int *)(in_ECX + 0x20)) {
            local_3d = 1;
            iStack_5c = 0x67ea16;
            local_58 = (float)iVar4;
            FUN_006a2fc0();
            *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x20);
          }
          else {
            local_58 = (float)param_1;
            uStack_64 = 0x67ea2c;
            iStack_60 = iVar4;
            iStack_5c = iVar1;
            fVar7 = (float10)FUN_0067ede0();
            local_58 = 9.543081e-39;
            fVar8 = (float10)FUN_0067ec60();
            local_58 = 9.543102e-39;
            cVar3 = FUN_0067ecc0();
            if (cVar3 == '\0') {
              local_58 = 9.543117e-39;
              cVar3 = FUN_0067ec90();
              if (cVar3 != '\0') goto LAB_0067ea58;
LAB_0067ea72:
              local_58 = 9.543169e-39;
              cVar3 = FUN_0067ecc0();
              if (cVar3 == '\0') {
                local_58 = 1.4013e-45;
                iStack_5c = 0x67ea86;
                FUN_0067ecd0();
                iStack_5c = 0x67ea90;
                local_58 = (float)iVar1;
                FUN_0067efe0();
              }
              iStack_5c = 0x67ea9f;
              local_58 = (float)(fVar8 + (float10)(double)fVar7);
              FUN_0067ec70();
              local_58 = *(float *)(in_ECX + 0x20);
              iStack_60 = 0x67eaa9;
              iStack_5c = iVar1;
              fVar7 = (float10)FUN_0067eec0();
              local_58 = (float)fVar7;
              iStack_5c = 0x67eab7;
              FUN_0067ec80();
              local_58 = 9.543266e-39;
              FUN_0067ec50();
              iStack_5c = 0x67eac6;
              local_58 = (float)iVar4;
              FUN_006a2fc0();
              if (*(int *)(in_ECX + 0x24) != 0) {
                local_58 = 9.543295e-39;
                fVar7 = (float10)FUN_0067ec40();
                local_58 = 9.543312e-39;
                fVar8 = (float10)FUN_0067ec40();
                if (fVar8 <= (float10)(double)fVar7) goto LAB_0067eaed;
              }
              *(int *)(in_ECX + 0x24) = iVar1;
            }
            else {
LAB_0067ea58:
              local_58 = 9.543144e-39;
              fVar9 = (float10)FUN_0067ec60();
              fVar2 = (float10)(float)(fVar8 + (float10)(double)fVar7);
              if (fVar9 < fVar2 == (fVar9 == fVar2)) goto LAB_0067ea72;
            }
LAB_0067eaed:
            piVar5 = (int *)piVar5[1];
          }
          goto joined_r0x0067e9bb;
        }
      }
      piVar5 = (int *)piVar5[1];
    } while( true );
  }
  local_c = 0xffffffff;
  local_58 = 9.543447e-39;
  FUN_0067e0e0();
  puVar6 = (undefined1 *)(uint)local_3d;
  goto LAB_0067eb43;
LAB_0067eb10:
  local_58 = 1.4013e-45;
  iStack_5c = 0x67eb19;
  FUN_0067eca0();
  local_58 = 9.543406e-39;
  iVar4 = FUN_0067f030();
  goto joined_r0x0067e98e;
}



undefined4 FUN_0067eb60(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  float *in_ECX;
  
  *in_ECX = DAT_00b15450;
  in_ECX[1] = DAT_00b15454;
  in_ECX[2] = DAT_00b15458;
  in_ECX[3] = DAT_00b15450;
  in_ECX[4] = DAT_00b15454;
  in_ECX[5] = DAT_00b15458;
  in_ECX[7] = 0.0;
  in_ECX[8] = 0.0;
  in_ECX[9] = 0.0;
  in_ECX[10] = 0.0;
  FUN_0067d7b0();
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = *param_2;
  in_ECX[4] = param_2[1];
  in_ECX[5] = param_2[2];
  if ((in_ECX[3] == *in_ECX) && (in_ECX[4] == in_ECX[1])) {
    if (in_ECX[5] == in_ECX[2]) {
      return 1;
    }
  }
  cVar1 = FUN_0067e160(param_3,param_4);
  if (cVar1 != '\0') {
    uVar2 = FUN_0067e8d0(param_3);
    return uVar2;
  }
  return 1;
}



float10 FUN_0067ec40(void)

{
  float *in_ECX;
  
  return (float10)*in_ECX;
}



void FUN_0067ec50(void)

{
  float *in_ECX;
  
  *in_ECX = in_ECX[2] + in_ECX[1];
  return;
}



float10 FUN_0067ec60(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 4);
}



void FUN_0067ec70(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  return;
}



void FUN_0067ec80(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  return;
}



byte FUN_0067ec90(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x10) >> 1 & 1;
}



void FUN_0067eca0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) | 2;
    return;
  }
  *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) & 0xfd;
  return;
}



byte FUN_0067ecc0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x10) & 1;
}



void FUN_0067ecd0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) | 1;
    return;
  }
  *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) & 0xfe;
  return;
}



byte FUN_0067ecf0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x10) >> 3 & 1;
}



void FUN_0067ed00(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) | 8;
    return;
  }
  *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) & 0xf7;
  return;
}



byte FUN_0067ed20(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x10) >> 4 & 1;
}



void FUN_0067ed30(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) | 0x10;
    return;
  }
  *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) & 0xef;
  return;
}



void FUN_0067ed50(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) | 0x40;
    return;
  }
  *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) & 0xbf;
  return;
}



byte FUN_0067ed70(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x10) >> 5 & 1;
}



void FUN_0067ed80(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) | 0x20;
    return;
  }
  *(byte *)(in_ECX + 0x10) = *(byte *)(in_ECX + 0x10) & 0xdf;
  return;
}



void FUN_0067eda0(void)

{
  undefined4 *in_ECX;
  
  *(byte *)(in_ECX + 4) = *(byte *)(in_ECX + 4) & 0x68;
  *in_ECX = 0;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_0067edc0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0067ede0(float param_1,int param_2,int param_3)

{
  char *pcVar1;
  float10 fVar2;
  float local_10;
  
  local_10 = 3.4028235e+38;
  if (((param_1 != 0.0) && (param_2 != 0)) && (param_3 != 0)) {
    fVar2 = (float10)FUN_005ec1f0(param_2);
    pcVar1 = (char *)((int)param_1 + 0x10);
    param_1 = (float)fVar2;
    if ((((byte)((uint)(int)*(char *)(param_2 + 0x10) >> 3) ^ (byte)((uint)(int)*pcVar1 >> 3)) & 1)
        != 0) {
      param_1 = _DAT_00b3a420 + (float)fVar2;
    }
    if ((((byte)((uint)(int)*(char *)(param_2 + 0x10) >> 6) ^ (byte)((uint)(int)*pcVar1 >> 6)) & 1)
        != 0) {
      param_1 = _DAT_00b3a428 + param_1;
    }
    fVar2 = (float10)0;
    if (fVar2 < (float10)param_1) {
      FUN_004bef40();
      FUN_004bef40();
      fVar2 = (float10)FUN_00404c90();
      fVar2 = fVar2 + (float10)param_1;
    }
    local_10 = (float)fVar2;
  }
  return (float10)local_10;
}



float10 FUN_0067eec0(int param_1,int param_2)

{
  float10 fVar1;
  undefined4 local_10;
  
  local_10 = 3.4028235e+38;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_004bef40();
    FUN_004bef40();
    fVar1 = (float10)FUN_00982c30();
    local_10 = (float)fVar1 + (float)fVar1;
  }
  return (float10)local_10;
}



float10 FUN_0067ef50(int param_1,int param_2)

{
  float10 fVar1;
  undefined4 local_10;
  
  local_10 = 3.4028235e+38;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_004bef40();
    FUN_004bef40();
    fVar1 = (float10)FUN_00982c30();
    local_10 = (float)fVar1;
  }
  return (float10)local_10;
}



void FUN_0067efe0(int param_1)

{
  int *piVar1;
  int *in_ECX;
  
  if (param_1 != 0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 4))();
    piVar1[2] = param_1;
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
  }
  return;
}



float * FUN_0067f030(void)

{
  float *pfVar1;
  int in_ECX;
  int *piVar2;
  float *pfVar3;
  float local_8;
  int *local_4;
  
  piVar2 = *(int **)(in_ECX + 4);
  local_8 = 3.4028235e+38;
  local_4 = (int *)0x0;
  pfVar3 = (float *)0x0;
  if (piVar2 != (int *)0x0) {
    do {
      pfVar1 = (float *)piVar2[2];
      if ((pfVar1 != (float *)0x0) && (*pfVar1 < local_8)) {
        local_8 = *pfVar1;
        local_4 = piVar2;
        pfVar3 = pfVar1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
    if ((pfVar3 != (float *)0x0) && (local_4 != (int *)0x0)) {
      FUN_007aa860(&local_4);
    }
  }
  return pfVar3;
}



undefined1 FUN_0067f0a0(void)

{
  return DAT_00b3be14;
}



void FUN_0067f0b0(undefined1 param_1)

{
  DAT_00b3be14 = param_1;
  return;
}



undefined1 FUN_0067f0c0(void)

{
  return DAT_00b3be15;
}



void FUN_0067f0d0(undefined1 param_1)

{
  DAT_00b3be15 = param_1;
  return;
}



undefined1 FUN_0067f0e0(void)

{
  return DAT_00b3be16;
}



void FUN_0067f0f0(undefined1 param_1)

{
  DAT_00b3be16 = param_1;
  return;
}



void FUN_0067f100(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    in_ECX[1] = puVar1[1];
    *in_ECX = *puVar1;
    FUN_00401f20(puVar1);
    return;
  }
  *in_ECX = 0;
  return;
}



void FUN_0067f180(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  if (DAT_00b3be00 != (undefined4 *)0x0) {
    FUN_006805f0();
    piVar2 = DAT_00b3be1c;
    while ((iVar4 = DAT_00b3be18, piVar2 != (int *)0x0 || (DAT_00b3be18 != 0))) {
      if (DAT_00b3be18 != 0) {
        FUN_00680340();
        FUN_00401f20(iVar4);
        piVar2 = DAT_00b3be1c;
      }
      if (piVar2 == (int *)0x0) {
        DAT_00b3be18 = 0;
      }
      else {
        DAT_00b3be1c = (int *)piVar2[1];
        DAT_00b3be18 = *piVar2;
        FUN_00401f20(piVar2);
        piVar2 = DAT_00b3be1c;
      }
    }
    uVar3 = 0;
    if (DAT_00b3be00[1] != 0) {
      piVar2 = (int *)DAT_00b3be00[2];
      do {
        if (*piVar2 != 0) {
          local_8 = ((int *)DAT_00b3be00[2])[uVar3];
          goto LAB_0067f212;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < (uint)DAT_00b3be00[1]);
    }
    local_8 = 0;
LAB_0067f212:
    DAT_00b3be18 = 0;
    while (local_8 != 0) {
      local_c = (int *)0x0;
      FUN_00452600(&local_8,local_4,&local_c);
      piVar2 = local_c;
      if (local_c != (int *)0x0) {
        uVar3 = 0;
        if (local_c[1] != 0) {
          piVar5 = (int *)local_c[2];
          do {
            if (*piVar5 != 0) {
              piVar5 = (int *)((int *)local_c[2])[uVar3];
              goto joined_r0x0067f26b;
            }
            uVar3 = uVar3 + 1;
            piVar5 = piVar5 + 1;
          } while (uVar3 < (uint)local_c[1]);
        }
        piVar5 = (int *)0x0;
joined_r0x0067f26b:
        while (piVar5 != (int *)0x0) {
          piVar7 = (int *)*piVar5;
          puVar1 = (undefined4 *)piVar5[2];
          if (piVar7 == (int *)0x0) {
            iVar4 = (**(code **)(*piVar2 + 4))(piVar5[1]);
            uVar3 = iVar4 + 1;
            if (uVar3 < (uint)piVar2[1]) {
              puVar6 = (undefined4 *)(piVar2[2] + uVar3 * 4);
              do {
                piVar7 = (int *)*puVar6;
                if (piVar7 != (int *)0x0) goto LAB_0067f2b8;
                uVar3 = uVar3 + 1;
                puVar6 = puVar6 + 1;
              } while (uVar3 < (uint)piVar2[1]);
            }
            piVar7 = (int *)0x0;
          }
LAB_0067f2b8:
          piVar5 = piVar7;
          if (puVar1 != (undefined4 *)0x0) {
            iVar4 = puVar1[1];
            while (iVar4 != 0) {
              iVar4 = *(int *)(puVar1[1] + 4);
              FUN_00401f20(puVar1[1]);
              puVar1[1] = iVar4;
            }
            *puVar1 = 0;
            FUN_00401f20(puVar1);
          }
        }
        FUN_007c2a40();
        (**(code **)*piVar2)(1);
      }
    }
    FUN_007c2a40();
    if (DAT_00b3be00 != (undefined4 *)0x0) {
      (**(code **)*DAT_00b3be00)(1);
    }
    DAT_00b3be00 = (undefined4 *)0x0;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0067f3ea) */
/* WARNING: Removing unreachable block (ram,0x0067f403) */
/* WARNING: Removing unreachable block (ram,0x0067f410) */
/* WARNING: Removing unreachable block (ram,0x0067f41f) */
/* WARNING: Removing unreachable block (ram,0x0067f445) */
/* WARNING: Removing unreachable block (ram,0x0067f459) */
/* WARNING: Removing unreachable block (ram,0x0067f44f) */
/* WARNING: Removing unreachable block (ram,0x0067f460) */
/* WARNING: Removing unreachable block (ram,0x0067f46f) */
/* WARNING: Removing unreachable block (ram,0x0067f48a) */
/* WARNING: Removing unreachable block (ram,0x0067f4ac) */
/* WARNING: Removing unreachable block (ram,0x0067f4b4) */
/* WARNING: Removing unreachable block (ram,0x0067f4d1) */
/* WARNING: Removing unreachable block (ram,0x0067f42b) */
/* WARNING: Removing unreachable block (ram,0x0067f434) */
/* WARNING: Removing unreachable block (ram,0x0067f4dd) */
/* WARNING: Removing unreachable block (ram,0x0067f4fe) */
/* WARNING: Removing unreachable block (ram,0x0067f50a) */
/* WARNING: Removing unreachable block (ram,0x0067f510) */
/* WARNING: Removing unreachable block (ram,0x0067f51f) */
/* WARNING: Removing unreachable block (ram,0x0067f541) */
/* WARNING: Removing unreachable block (ram,0x0067f54f) */
/* WARNING: Removing unreachable block (ram,0x0067f545) */
/* WARNING: Removing unreachable block (ram,0x0067f556) */
/* WARNING: Removing unreachable block (ram,0x0067f561) */
/* WARNING: Removing unreachable block (ram,0x0067f57c) */
/* WARNING: Removing unreachable block (ram,0x0067f596) */
/* WARNING: Removing unreachable block (ram,0x0067f527) */
/* WARNING: Removing unreachable block (ram,0x0067f530) */

void FUN_0067f340(void)

{
  int iVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (DAT_00b3be00 == 0) {
    return;
  }
  FUN_00401020(&DAT_00a2f830);
  if (((unaff_retaddr != 0) && (iVar1 = FUN_004d7630(), iVar1 != 0)) &&
     (iVar1 = FUN_0042b410(), iVar1 != 0)) {
    iVar1 = FUN_004d8af0();
    FUN_0042b410();
    iVar2 = FUN_004d8af0();
    if ((iVar1 != 0) && (iVar2 != 0)) {
      FUN_0055e000(iVar1,&stack0xffffffe8);
    }
  }
  FUN_00401040();
  return;
}



undefined4 FUN_0067f5d0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  iVar2 = param_1;
  if ((((param_1 != 0) && (iVar4 = FUN_004d7630(), iVar4 != 0)) &&
      (iVar4 = FUN_0042b410(), iVar4 != 0)) && (iVar4 = FUN_004d8af0(), iVar4 != 0)) {
    param_1 = 0;
    cVar3 = FUN_0055e000(iVar4,&param_1);
    if ((cVar3 != '\0') && (param_1 != 0)) {
      FUN_0042b410();
      iVar4 = FUN_004d8af0();
      if (iVar4 != 0) {
        param_1 = 0;
        cVar3 = FUN_0055e000(iVar4,&param_1);
        if ((cVar3 != '\0') && (iVar4 = param_1, param_1 != 0)) {
          while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
            cVar3 = FUN_00680410(iVar2);
            if (cVar3 != '\0') {
              return 1;
            }
            piVar1 = (int *)(iVar4 + 4);
            iVar4 = *piVar1;
            if (*piVar1 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067f690(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  float10 fVar7;
  int local_1c;
  int *local_18;
  int local_14;
  double local_10;
  
  if (param_1 != 0) {
    local_1c = 0;
    cVar5 = FUN_0055e000(DAT_00b3be0c,&local_1c);
    if ((cVar5 != '\0') && (local_1c != 0)) {
      local_14 = FUN_006a9030();
      while (local_14 != 0) {
        local_18 = (int *)0x0;
        FUN_00452600(&local_14,&local_10,&local_18);
        for (piVar2 = local_18; (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))));
            piVar2 = (int *)piVar2[1]) {
          iVar1 = *piVar2;
          cVar5 = FUN_00680790(DAT_00b3be0c);
          piVar3 = _DAT_00b1545c;
          iVar4 = DAT_00b3be04;
          if (cVar5 != '\0') {
            fVar7 = (float10)FUN_00680aa0(DAT_00b3be0c,&DAT_00b3be20,iVar1,DAT_00b3be08,1);
            FUN_00680930((float)fVar7);
            FUN_00680460(0,DAT_00b3be0c);
            FUN_00680570(1);
            fVar7 = (float10)FUN_006804b0();
            if (fVar7 < (float10)(float)_DAT_00b1545c) {
              FUN_00680bb0(iVar1);
            }
            iVar6 = FUN_006803f0(DAT_00b3be0c);
            piVar3 = _DAT_00b1545c;
            iVar4 = DAT_00b3be04;
            if (iVar6 == DAT_00b3be10) {
              fVar7 = (float10)FUN_00680aa0(DAT_00b3be10,&DAT_00b3be2c,iVar1,DAT_00b3be08,0);
              local_10 = (double)fVar7;
              fVar7 = (float10)FUN_006804b0();
              local_18 = (int *)(float)(fVar7 + (float10)local_10);
              piVar3 = local_18;
              iVar4 = iVar1;
              if ((DAT_00b3be04 != 0) && ((float)_DAT_00b1545c <= (float)local_18)) {
                piVar3 = _DAT_00b1545c;
                iVar4 = DAT_00b3be04;
              }
            }
          }
          DAT_00b3be04 = iVar4;
          _DAT_00b1545c = piVar3;
        }
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067f830(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  int *local_38;
  int local_34;
  double local_30;
  int local_24;
  double local_20;
  undefined1 local_14 [16];
  
  if (((param_1 != 0) && (param_3 != 0)) && (param_2 != 0)) {
    cVar5 = FUN_006803a0(param_1,local_14);
    if (cVar5 == '\0') {
      FUN_004a7a60("Failed to find coord for space.");
    }
    else {
      local_34 = 0;
      cVar5 = FUN_0055e000(param_1,&local_34);
      if (((cVar5 != '\0') && (local_34 != 0)) && (local_24 = FUN_006a9030(), local_24 != 0)) {
        do {
          local_38 = (int *)0x0;
          FUN_00452600(&local_24,&local_30,&local_38);
          for (piVar7 = local_38; (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0))));
              piVar7 = (int *)piVar7[1]) {
            iVar2 = *piVar7;
            local_38 = piVar7;
            cVar5 = FUN_00680790(param_1);
            fVar1 = _DAT_00b1545c;
            iVar4 = DAT_00b3be04;
            if (cVar5 != '\0') {
              fVar8 = (float10)FUN_00680aa0(param_1,local_14,iVar2,DAT_00b3be08,1);
              local_30 = (double)fVar8;
              fVar8 = (float10)FUN_006804b0();
              bVar3 = false;
              local_30 = (double)CONCAT44(local_30._4_4_,(float)(fVar8 + (float10)local_30));
              cVar5 = FUN_00680550();
              if ((cVar5 != '\0') || (cVar5 = FUN_006804d0(), cVar5 != '\0')) {
                local_20 = (double)local_30._0_4_;
                bVar3 = true;
                fVar8 = (float10)FUN_006804b0();
                piVar7 = local_38;
                fVar1 = _DAT_00b1545c;
                iVar4 = DAT_00b3be04;
                if (fVar8 < (float10)local_20 != (fVar8 == (float10)local_20)) goto LAB_0067fa34;
              }
              FUN_00680930(local_30._0_4_);
              FUN_00680460(param_2,param_1);
              cVar5 = FUN_00680550();
              if ((cVar5 != '\0') ||
                 (fVar8 = (float10)FUN_006804b0(), (float10)_DAT_00b1545c <= fVar8)) {
                if (bVar3) {
                  FUN_00680c60(iVar2);
                }
              }
              else {
                FUN_00680570(1);
                FUN_00680bb0(iVar2);
              }
              iVar6 = FUN_006803f0(param_1);
              piVar7 = local_38;
              fVar1 = _DAT_00b1545c;
              iVar4 = DAT_00b3be04;
              if (iVar6 == DAT_00b3be10) {
                fVar8 = (float10)FUN_00680aa0(DAT_00b3be10,&DAT_00b3be2c,iVar2,DAT_00b3be08,0);
                local_20 = (double)fVar8;
                fVar8 = (float10)FUN_006804b0();
                fVar1 = (float)(fVar8 + (float10)local_20);
                local_30 = (double)CONCAT44(local_30._4_4_,fVar1);
                piVar7 = local_38;
                iVar4 = iVar2;
                if ((DAT_00b3be04 != 0) && (_DAT_00b1545c <= fVar1)) {
                  fVar1 = _DAT_00b1545c;
                  iVar4 = DAT_00b3be04;
                }
              }
            }
LAB_0067fa34:
            DAT_00b3be04 = iVar4;
            _DAT_00b1545c = fVar1;
          }
          if (local_24 == 0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}



void FUN_0067fa70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a748f4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0067fa90(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a74914;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0067fab0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a748f4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0067fae0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a74914;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0067fb10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c4ac8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a74934;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a748e4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0067fb70(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a748f4;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a74964;
  return;
}



void FUN_0067fbc0(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a74914;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a74984;
  return;
}



void FUN_0067fc10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c4af8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a74984;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a74914;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0067fc80(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c4b28;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a74964;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a748f4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0067fcf0(void)

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
  if (DAT_00b3be00 == 0) {
    local_10 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (local_10 != 0) {
      DAT_00b3be00 = FUN_0067fb70(0xbf);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    DAT_00b3be00 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0067ff05) */
/* WARNING: Removing unreachable block (ram,0x0067ff1e) */
/* WARNING: Removing unreachable block (ram,0x0067ff35) */
/* WARNING: Removing unreachable block (ram,0x0067ff43) */
/* WARNING: Removing unreachable block (ram,0x0067ff4a) */
/* WARNING: Removing unreachable block (ram,0x0067fdeb) */
/* WARNING: Removing unreachable block (ram,0x0067fe00) */
/* WARNING: Removing unreachable block (ram,0x0067fe13) */
/* WARNING: Removing unreachable block (ram,0x0067fe32) */
/* WARNING: Removing unreachable block (ram,0x0067fe21) */
/* WARNING: Removing unreachable block (ram,0x0067fe08) */
/* WARNING: Removing unreachable block (ram,0x0067ff26) */

void FUN_0067fd70(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c4b7c;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401020(&DAT_00a2f830,uVar1);
  if (unaff_retaddr == 0) goto LAB_0067fff5;
  iVar2 = FUN_00452a60();
  iVar3 = FUN_00780d10();
  FUN_0055e000(iVar2,&stack0xffffffe8);
  if (*(char *)(iVar2 + 4) == '5') {
    iVar5 = FUN_00401f00(0x10);
    puStack_8 = (undefined1 *)0x0;
    if (iVar5 == 0) {
LAB_0067fe8f:
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0067fbc0(0xbf);
    }
  }
  else {
    iVar5 = FUN_00401f00(0x10);
    puStack_8 = (undefined1 *)0x1;
    if (iVar5 == 0) goto LAB_0067fe8f;
    uVar6 = FUN_0067fbc0(0x25);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00452570(iVar2,uVar6);
  puVar4 = (undefined4 *)FUN_00401f00(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  FUN_00446cb0(unaff_retaddr);
  FUN_00452570(iVar3,puVar4);
  if (iVar2 == iVar3) goto LAB_0067fff5;
  FUN_0055e000(iVar3,&stack0xffffffe8);
  if (*(char *)(iVar3 + 4) == '5') {
    iVar5 = FUN_00401f00(0x10);
    puStack_8 = (undefined1 *)0x2;
    if (iVar5 == 0) {
LAB_0067ffae:
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0067fbc0(0xbf);
    }
  }
  else {
    iVar5 = FUN_00401f00(0x10);
    puStack_8 = (undefined1 *)0x3;
    if (iVar5 == 0) goto LAB_0067ffae;
    uVar6 = FUN_0067fbc0(0x25);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00452570(iVar3,uVar6);
  puVar7 = (undefined4 *)FUN_00401f00(8);
  puVar4 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar4 = puVar7;
  }
  FUN_00446cb0(unaff_retaddr);
  FUN_00452570(iVar2,puVar4);
LAB_0067fff5:
  FUN_00401040();
  *unaff_FS_OFFSET = iStack_10;
  return;
}


