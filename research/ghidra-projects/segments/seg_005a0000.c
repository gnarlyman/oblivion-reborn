
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a0260(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float *pfVar6;
  int in_ECX;
  byte bVar7;
  float10 fVar8;
  float fStack_58;
  double local_54;
  undefined8 uStack_4c;
  char acStack_44 [64];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&fStack_58;
  if (*(int *)(in_ECX + 0x24) != 2) {
    fVar8 = (float10)FUN_00588bd0(0xfa1);
    if (fVar8 == (float10)2.0) {
      fVar8 = (float10)FUN_00588bd0(0xfb5);
    }
    else {
      iVar2 = FUN_00413320();
      fVar8 = (float10)iVar2;
    }
    local_54._0_4_ = (float)fVar8;
    iVar2 = FUN_009828c0();
    local_54._0_4_ = (float)iVar2;
    if (*(int *)(in_ECX + 0x7c) != 0) {
      iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x7c) + 0x34) + 0x10))();
      if (iVar3 == 3) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x94) + 0x1c);
        local_54._0_4_ = *(float *)(iVar2 + 0x90);
        fStack_58 = *(float *)(iVar2 + 0x5c);
        uVar4 = FUN_00484bf0(*(undefined2 *)(*(int *)(*(int *)(in_ECX + 0x7c) + 0x34) + 8),
                             0x3f800000);
        fVar8 = (float10)FUN_00549060(fStack_58,local_54._0_4_,uVar4);
        FUN_004843b0((float)fVar8);
        iVar2 = FUN_009828c0();
        local_54._0_4_ = (float)iVar2;
      }
    }
    iVar3 = FUN_00413320();
    if (iVar2 != iVar3) {
      FUN_00413340(iVar2);
      if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0x94) + 0x1c) + 0x58) >> 0x1e & 1) != 0) {
        fStack_58 = (float)(int)local_54._0_4_ * _DAT_00b380d0;
        FUN_0058ceb0(0xfb1,fStack_58);
      }
    }
    fVar8 = (float10)FUN_00588bd0(0xfa1);
    if (fVar8 == (float10)2.0) {
      fVar8 = (float10)FUN_00588bd0(0xfb5);
    }
    else {
      iVar2 = FUN_004133c0();
      fVar8 = (float10)iVar2;
    }
    fStack_58 = (float)fVar8;
    iVar2 = FUN_009828c0();
    iVar3 = FUN_004133c0();
    if (iVar2 != iVar3) {
      FUN_004133e0(iVar2);
    }
    fVar8 = (float10)FUN_00588bd0(0xfa1);
    if (fVar8 == (float10)2.0) {
      fVar8 = (float10)FUN_00588bd0(0xfb5);
    }
    else {
      iVar2 = FUN_00413370();
      fVar8 = (float10)iVar2;
    }
    fStack_58 = (float)fVar8;
    fStack_58 = (float)FUN_009828c0();
    if ((float)(int)fStack_58 < _DAT_00b3b29c) {
      fStack_58 = 0.0;
    }
    fVar1 = fStack_58;
    fVar5 = (float)FUN_00413370();
    if (fVar1 != fVar5) {
      FUN_00413390(fVar1);
      FUN_0058ceb0(0xfae,(float)(int)fStack_58);
    }
    if (fVar1 == 0.0) {
      FUN_0058ced0(0xfae,&DAT_00a3a0e4);
    }
    fVar8 = (float10)FUN_00588bd0(0xfa1);
    if (fVar8 != (float10)1.0) {
      uVar4 = FUN_00565cc0(*(undefined4 *)(*(int *)(in_ECX + 0x94) + 0x14));
      FUN_0058ced0(0xfae,uVar4);
    }
    fVar8 = (float10)FUN_00588bd0(0xfa1);
    if (fVar8 != (float10)1.0) {
      uVar4 = FUN_00565cc0(*(undefined4 *)(*(int *)(in_ECX + 0x94) + 0x14));
      FUN_0058ced0(0xfae,uVar4);
    }
    if (*(int *)(in_ECX + 0x78) != 0) {
      fVar8 = (float10)(*(code *)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x78) + 0x74) + 0x24))
                                 (DAT_00b333c4);
      fStack_58 = (float)fVar8;
      uVar4 = FUN_009828c0();
      _sprintf((char *)((int)&uStack_4c + 4),"%d",uVar4);
      FUN_0058ced0(0xfaf,(int)&uStack_4c + 4);
      uVar4 = FUN_009828c0();
      _sprintf((char *)((int)&uStack_4c + 4),"%d",uVar4);
      FUN_0058ced0(0xfb0,(int)&uStack_4c + 4);
      uVar4 = FUN_005e4420();
      _sprintf((char *)((int)&uStack_4c + 4),"%d",uVar4);
      FUN_0058ced0(0xfb7,(int)&uStack_4c + 4);
      return;
    }
    iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x7c) + 0x34) + 0x10))();
    if (iVar2 == 3) {
      FUN_0058ced0(0xfaf,DAT_00b38bd8);
      local_54._0_4_ =
           *(float *)(*(int *)(*(int *)(in_ECX + 0x94) + 0x1c) + 0x94) * (float)(int)local_54._0_4_;
      uVar4 = FUN_009828c0();
      _sprintf(acStack_44,"%d",uVar4);
      FUN_0058ced0(0xfb0,acStack_44);
      uVar4 = FUN_005e4420();
      _sprintf(acStack_44,"%d",uVar4);
      FUN_0058ced0(0xfb7,acStack_44);
      uStack_4c = (double)local_54._0_4_;
      iVar2 = FUN_005e4420();
      bVar7 = (double)iVar2 < uStack_4c |
              (byte)((ushort)((ushort)(NAN((double)iVar2) || NAN(uStack_4c)) << 10) >> 8);
    }
    else {
      fVar8 = (float10)(*(code *)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x7c) + 0x28) + 0x24))
                                 (DAT_00b333c4);
      fStack_58 = (float)fVar8;
      iVar2 = FUN_00484bf0();
      pfVar6 = (float *)(&DAT_00b39530)[iVar2];
      if (pfVar6 == (float *)0x0) {
        pfVar6 = (float *)&DAT_00b35464;
        DAT_00b35464 = 0;
      }
      uStack_4c = (double)*pfVar6;
      local_54._0_4_ = (float)FUN_00484d70();
      if ((double)(int)local_54._0_4_ <= uStack_4c) {
        iVar2 = FUN_00484d70();
        local_54._0_4_ = (float)iVar2;
      }
      else {
        iVar2 = FUN_00484bf0();
        pfVar6 = (float *)(&DAT_00b39530)[iVar2];
        if (pfVar6 == (float *)0x0) {
          pfVar6 = (float *)&DAT_00b35464;
          DAT_00b35464 = 0;
        }
        local_54._0_4_ = *pfVar6;
      }
      uVar4 = FUN_009828c0();
      uStack_4c = (double)CONCAT44(uStack_4c._4_4_,uVar4);
      iVar2 = FUN_009828c0();
      _sprintf(acStack_44,"%d (%d)",iVar2,uVar4);
      FUN_0058ced0(0xfaf,acStack_44);
      uVar4 = FUN_009828c0();
      _sprintf(acStack_44,"%d",uVar4);
      FUN_0058ced0(0xfb0,acStack_44);
      uVar4 = FUN_005e4420();
      _sprintf(acStack_44,"%d",uVar4);
      FUN_0058ced0(0xfb7,acStack_44);
      if (NAN(fStack_58) || 1.0 < fStack_58 == (fStack_58 == 1.0)) {
        local_54._0_4_ = -NAN;
      }
      else {
        iVar3 = FUN_00484d70();
        local_54._0_4_ = (float)(iVar3 / iVar2);
      }
      FUN_0058ceb0(0xfb1,(float)(int)local_54._0_4_);
      local_54._0_4_ = 2.8026e-45;
      if (fStack_58 <= (float)(int)uStack_4c) {
        local_54._0_4_ = 1.4013e-45;
      }
      FUN_0058ceb0(0xfb2,(float)(int)local_54._0_4_);
      local_54 = (double)(_DAT_00b37fe8 * fStack_58);
      iVar2 = FUN_005e4420();
      uStack_4c = (double)CONCAT44(uStack_4c._4_4_,iVar2);
      bVar7 = (double)iVar2 < local_54 |
              (byte)((ushort)((ushort)(NAN((double)iVar2) || NAN(local_54)) << 10) >> 8);
    }
    local_54._0_4_ = 2.8026e-45;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      local_54._0_4_ = 1.4013e-45;
    }
    FUN_0058ceb0(0xfb3,(float)(int)local_54._0_4_);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_005a08e0(float param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  undefined1 *puVar10;
  float fVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  undefined1 auStack_13c [3];
  char cStack_139;
  float fStack_138;
  char cStack_131;
  float local_130;
  float fStack_12c;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined2 uStack_118;
  undefined2 uStack_116;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c017f;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_13c;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffeb4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_130 = param_1;
  puVar4 = (undefined4 *)FUN_00589b70(0x413,uVar3);
  iVar12 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(1);
  }
  FUN_00582160(0,1);
  fVar13 = (float10)thunk_FUN_00584980();
  fStack_138 = (float)fVar13;
  uVar5 = FUN_00590420("Data\\Menus\\dialog\\enchantmentsetting_menu.xml");
  uStack_120 = uVar5;
  piVar6 = (int *)FUN_005898f0();
  if (piVar6 != (int *)0x0) {
    iVar7 = (**(code **)(*piVar6 + 0x34))();
    if (iVar7 == 0x413) {
      FUN_00584880(uVar5);
      fVar13 = (float10)FUN_00588bd0(0xfa5);
      if ((fVar13 == (float10)6006.0) ||
         (fVar13 = (float10)FUN_00588bd0(0xfa5), fVar13 == (float10)102.0)) {
        FUN_0058ceb0(0xfab,fStack_138);
      }
      FUN_0059fe70();
      uVar3 = 0;
      *(char *)((int)piVar6 + 0x71) = param_2;
      cStack_139 = '\x01';
      if (piVar6[0x1f] == 0) {
LAB_005a0a2c:
        cStack_131 = '\0';
      }
      else {
        piVar8 = (int *)FUN_009832e6(*(undefined4 *)(*(int *)(piVar6[0x1f] + 0x30) + 8),0,
                                     &PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
        iVar7 = (**(code **)(*piVar8 + 0x10))();
        cStack_131 = '\x01';
        if (iVar7 != 3) goto LAB_005a0a2c;
      }
      if (piVar6[0x1f] == 0) {
LAB_005a0a65:
        bVar1 = false;
      }
      else {
        piVar8 = (int *)FUN_009832e6(*(undefined4 *)(*(int *)(piVar6[0x1f] + 0x30) + 8),0,
                                     &PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
        iVar7 = (**(code **)(*piVar8 + 0x10))();
        if (iVar7 != 2) goto LAB_005a0a65;
        bVar1 = true;
      }
      if (param_2 == '\0') {
        piVar6[0x25] = (int)local_130;
        if ((!bVar1) && ((*(uint *)(*(int *)((int)local_130 + 0x1c) + 0x58) >> 4 & 1) != 0)) {
          uVar3 = 1;
        }
        if (cStack_131 == '\0') {
          if ((!bVar1) && ((*(uint *)(*(int *)((int)local_130 + 0x1c) + 0x58) >> 6 & 1) != 0)) {
            uVar3 = uVar3 + 1;
          }
          if ((*(uint *)(*(int *)((int)local_130 + 0x1c) + 0x58) >> 5 & 1) != 0) {
            uVar3 = uVar3 + 1;
          }
        }
        FUN_0058ceb0(0xfa1,0x40000000);
        fVar11 = local_130;
        iVar12 = FUN_00413370();
        if (iVar12 == 0) {
          FUN_0058ced0(0xfae,&DAT_00a3a0e4);
        }
        else {
          uStack_128 = 0;
          uStack_124 = 0;
          uStack_122 = 0;
          uStack_4 = 1;
          uVar5 = FUN_00413370();
          FUN_00402e30(&uStack_128,&DAT_00a2f860,uVar5);
          FUN_0058ced0(0xfae,uStack_128);
          uStack_4 = 0xffffffff;
          FUN_00402da0();
        }
      }
      else {
        fStack_138 = (float)FUN_00401f00(0x24);
        uStack_4 = 0;
        if (fStack_138 != 0.0) {
          iVar12 = FUN_004149a0(local_130);
        }
        piVar6[0x25] = iVar12;
        uStack_4 = 0xffffffff;
        uVar5 = FUN_009828c0();
        FUN_00413390(uVar5);
        uVar5 = FUN_009828c0();
        FUN_00413340(uVar5);
        uVar5 = FUN_009828c0();
        FUN_004133e0(uVar5);
        if ((!bVar1) && (cVar2 = FUN_00413410(0), cVar2 != '\0')) {
          uVar3 = 1;
        }
        if (cStack_131 == '\0') {
          if ((!bVar1) && (cVar2 = FUN_00413410(2), cVar2 != '\0')) {
            uVar3 = uVar3 + 1;
          }
          cVar2 = FUN_00413410(1);
          if (cVar2 != '\0') {
            uVar3 = uVar3 + 1;
          }
        }
        FUN_0058ceb0(0xfa1,0x3f800000);
        FUN_0059fbf0(piVar6[0x25]);
        fVar11 = local_130;
      }
      iVar12 = *(int *)(piVar6[0x25] + 0x14);
      piVar6[0x24] = iVar12;
      if ((*(uint *)(*(int *)((int)fVar11 + 0x1c) + 0x58) >> 0x14 & 1) == 0) {
        if ((*(uint *)(*(int *)((int)fVar11 + 0x1c) + 0x58) >> 0x13 & 1) == 0) {
          FUN_0058ceb0(0xfa1,0x3f800000);
          FUN_0058ceb0(0xfa1,0x3f800000);
          FUN_0058ceb0(0xfaf,0);
        }
        else {
          uVar5 = FUN_00565cc0(iVar12);
          FUN_0058ceb0(0xfa1,0x3f800000);
          FUN_0058ceb0(0xfa1,0x40000000);
          FUN_0058ced0(0xfae,uVar5);
          cStack_139 = '\0';
          fVar11 = local_130;
        }
      }
      else {
        uVar5 = FUN_00565cc0(iVar12);
        FUN_0058ceb0(0xfa1,0x3f800000);
        FUN_0058ceb0(0xfa1,0x40000000);
        FUN_0058ced0(0xfae,uVar5);
        cStack_139 = '\0';
        fVar11 = local_130;
      }
      piVar6[0x23] = *(int *)(piVar6[0x25] + 0x10);
      if ((piVar6[0x1e] == 0) || (uVar3 < 2)) {
        FUN_0058ceb0(0xfa1,0x3f800000);
      }
      else {
        FUN_0058ceb0(0xfa1,0x40000000);
        uVar5 = FUN_00412e00(piVar6[0x23]);
        FUN_0058ced0(0xfae,uVar5);
        cStack_139 = '\0';
      }
      iVar12 = FUN_00413370();
      piVar6[0x20] = iVar12;
      if (((*(uint *)(*(int *)(piVar6[0x25] + 0x1c) + 0x58) >> 9 & 1) == 0) &&
         (*(int *)(piVar6[0x25] + 0x10) != 0)) {
        pfVar9 = (float *)FUN_00403c00();
        fStack_12c = *pfVar9 - 1.0;
        pfVar9 = (float *)FUN_00403c00();
        local_130 = *pfVar9;
        fStack_138 = local_130 - fStack_12c;
        FUN_0058ceb0(0xfa1,0x40000000);
        FUN_0058ceb0(0xfaf,fStack_12c);
        FUN_0058ceb0(0xfb0,local_130);
        fStack_138 = fStack_138 / 10.0;
        fVar13 = (float10)FUN_004843b0(fStack_138,0x40a00000);
        FUN_0058ceb0(0xfb2,(float)fVar13);
        fStack_138 = (float)piVar6[0x20] - fStack_12c;
        FUN_0058ceb0(0xfb3,fStack_138);
        FUN_0058ceb0(0xfb3,0);
        cStack_139 = '\0';
      }
      else {
        FUN_0058ceb0(0xfa1,0x3f800000);
      }
      iVar12 = FUN_00413320();
      piVar6[0x21] = iVar12;
      if (((*(uint *)(*(int *)(piVar6[0x25] + 0x1c) + 0x58) >> 8 & 1) == 0) &&
         ((piVar6[0x1f] == 0 ||
          (iVar12 = (**(code **)(**(int **)(piVar6[0x1f] + 0x34) + 0x10))(), iVar12 != 3)))) {
        FUN_0058ceb0(0xfa1,0x40000000);
        cStack_139 = '\0';
        uStack_128 = 0;
        uStack_124 = 0;
        uStack_122 = 0;
        uStack_4 = 2;
        if ((*(int *)piVar6[0x25] == 0x4e45504f) || (*(int *)piVar6[0x25] == 0x4b434f4c)) {
          FUN_00402e30(&uStack_128,&DAT_00a6b970,DAT_00b38940);
          FUN_0058ceb0(0xfae,0x40000000);
          iVar12 = FUN_004299e0(piVar6[0x21]);
          piVar6[0x26] = iVar12;
          if ((undefined4 *)(&PTR_DAT_00b03e1c)[iVar12] == (undefined4 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(&PTR_DAT_00b03e1c)[iVar12];
          }
          FUN_0058ced0(0xfaf,uVar5);
          uVar5 = FUN_00429a30(piVar6[0x26]);
          FUN_00413340(uVar5);
        }
        else {
          pfVar9 = (float *)FUN_00403c00();
          fStack_12c = *pfVar9;
          pfVar9 = (float *)FUN_00403c00();
          local_130 = *pfVar9;
          fStack_138 = local_130 - fStack_12c;
          FUN_00402e30(&uStack_128,&DAT_00a6b970,DAT_00b38930);
          FUN_0058ceb0(0xfae,0x3f800000);
          FUN_0058ceb0(0xfaf,fStack_12c);
          FUN_0058ceb0(0xfb0,local_130);
          fStack_138 = fStack_138 / 10.0;
          fVar13 = (float10)FUN_004843b0(fStack_138,0x40a00000);
          FUN_0058ceb0(0xfb2,(float)fVar13);
          fStack_138 = (float)piVar6[0x21] - fStack_12c;
          FUN_0058ceb0(0xfb3,fStack_138);
          FUN_0058ceb0(0xfb3,0);
          if ((*(uint *)(*(int *)(piVar6[0x25] + 0x1c) + 0x58) >> 0x1e & 1) != 0) {
            pfVar9 = (float *)FUN_00403c00();
            fStack_138 = (float)piVar6[0x21] * *pfVar9;
            FUN_0058ceb0(0xfb1,fStack_138);
          }
        }
        FUN_0058ced0(0xfb0,uStack_128);
        uStack_4 = 0xffffffff;
        FUN_00402da0();
      }
      else {
        FUN_0058ceb0(0xfa1,0x3f800000);
      }
      iVar12 = FUN_004133c0();
      piVar6[0x22] = iVar12;
      if (((*(uint *)(*(int *)(piVar6[0x25] + 0x1c) + 0x58) >> 7 & 1) == 0) && (cStack_131 == '\0'))
      {
        pfVar9 = (float *)FUN_00403c00();
        fStack_12c = *pfVar9;
        pfVar9 = (float *)FUN_00403c00();
        local_130 = *pfVar9;
        fStack_138 = local_130 - fStack_12c;
        FUN_0058ceb0(0xfa1,0x40000000);
        FUN_0058ceb0(0xfaf,fStack_12c);
        FUN_0058ceb0(0xfb0,local_130);
        fStack_138 = fStack_138 / 10.0;
        fVar13 = (float10)FUN_004843b0(fStack_138,0x40a00000);
        FUN_0058ceb0(0xfb2,(float)fVar13);
        fStack_138 = (float)piVar6[0x22] - fStack_12c;
        FUN_0058ceb0(0xfb3,fStack_138);
        FUN_0058ceb0(0xfb3,0);
        cStack_139 = '\0';
      }
      else {
        FUN_0058ceb0(0xfa1,0x3f800000);
      }
      puVar10 = *(undefined1 **)(*(int *)((int)fVar11 + 0x1c) + 0x48);
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &DAT_00a2f7ec;
      }
      _sprintf(acStack_114,"%s\\%s","Icons",puVar10);
      FUN_0058ced0(0xfe6,acStack_114);
      puVar4 = (undefined4 *)FUN_004139f0(&uStack_11c);
      uStack_4 = 3;
      FUN_0058ced0(0xfde,*puVar4);
      uStack_4 = 0xffffffff;
      FUN_00401f20(uStack_11c);
      uStack_11c = 0;
      uStack_116 = 0;
      uStack_118 = 0;
      FUN_00585190(0);
      if (cStack_139 == '\0') goto LAB_005a135e;
      if (param_2 != '\0') {
        FUN_0059fc60();
        goto LAB_005a135e;
      }
      (**(code **)(*piVar6 + 0xc))(0x16,piVar6[0x19]);
    }
    else if (piVar6[1] == 0) goto LAB_005a135c;
    (**(code **)*piVar6)(1);
  }
LAB_005a135c:
  uStack_120 = 0;
LAB_005a135e:
  *unaff_FS_OFFSET = local_c;
  return uStack_120;
}



void FUN_005a1390(void)

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
  *in_ECX = &PTR_FUN_00a6ba0c;
  in_ECX[0xf] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
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
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 0x27) = 1;
  *(undefined1 *)((int)in_ECX + 0x9d) = 0;
  in_ECX[0x24] = 0;
  iVar2 = FUN_00401f00(0x44);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00419570();
  }
  local_4._0_1_ = 0;
  in_ECX[10] = uVar3;
  in_ECX[0x25] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  iVar2 = FUN_00401f00(0x28);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0057fe70();
  }
  in_ECX[0x26] = uVar3;
  in_ECX[0xe] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005a1600(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x9c) != '\0') {
    FUN_0058ced0(0xfde,&DAT_00a2f7ec);
    *(undefined1 *)(in_ECX + 0x9c) = 0;
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



void FUN_005a1680(void)

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
  *in_ECX = &PTR_FUN_00a6ba0c;
  iVar1 = in_ECX[0xc];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00484470(uVar2);
    FUN_00401f20(iVar1);
  }
  iVar1 = in_ECX[0xb];
  if (iVar1 != 0) {
    FUN_00484470(uVar2);
    FUN_00401f20(iVar1);
  }
  if (in_ECX[0x24] != 0) {
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x24]);
  }
  iVar1 = in_ECX[0x26];
  if (iVar1 != 0) {
    FUN_0057feb0();
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005a1740(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00589b70(0x412);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13ff0,0);
    iVar1 = FUN_009832e6(uVar2);
    if (iVar1 != 0) {
      FUN_0057de50(0x24);
      FUN_0058ceb0(0x1772,0x40000000);
      FUN_00584740();
      return;
    }
  }
  return;
}



undefined1 FUN_005a17b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) == 0) {
    FUN_004a7a60("pEnchantmentName is NULL");
  }
  if (*(int *)(in_ECX + 0x44) == 0) {
    FUN_004a7a60("pUsesIcon is NULL");
  }
  if (*(int *)(in_ECX + 0x50) == 0) {
    FUN_004a7a60("pEnchantmentIcon is NULL");
  }
  if (*(int *)(in_ECX + 0x48) == 0) {
    FUN_004a7a60("pEnchantmentGoldCost is NULL");
  }
  if (*(int *)(in_ECX + 0x4c) == 0) {
    FUN_004a7a60("pEnchantmentGoldCost is NULL");
  }
  if (*(int *)(in_ECX + 0x54) == 0) {
    FUN_004a7a60("pKnownEffectList is NULL");
  }
  if (*(int *)(in_ECX + 0x58) == 0) {
    FUN_004a7a60("pAddedEffectList is NULL");
  }
  if (*(int *)(in_ECX + 0x5c) == 0) {
    FUN_004a7a60("pFocus is NULL");
  }
  if (*(int *)(in_ECX + 0x60) == 0) {
    FUN_004a7a60("pKnownEffectScroll is NULL");
  }
  if (*(int *)(in_ECX + 100) == 0) {
    FUN_004a7a60("pKnownEffectMarker is NULL");
  }
  if (*(int *)(in_ECX + 0x68) == 0) {
    FUN_004a7a60("pAddedEffectScroll is NULL");
  }
  if (*(int *)(in_ECX + 0x6c) == 0) {
    FUN_004a7a60("pAddedEffectMarker is NULL");
  }
  if (*(int *)(in_ECX + 0x70) == 0) {
    FUN_004a7a60("pCreateButton is NULL");
  }
  if (*(int *)(in_ECX + 0x74) == 0) {
    FUN_004a7a60("pExitButton is NULL");
  }
  if (*(int *)(in_ECX + 0x78) == 0) {
    FUN_004a7a60("pKnownEffectListText is NULL");
  }
  if (*(int *)(in_ECX + 0x7c) == 0) {
    FUN_004a7a60("pAddedEffectListText is NULL");
  }
  if (*(int *)(in_ECX + 0x80) == 0) {
    FUN_004a7a60("pItemRect is NULL");
  }
  if (*(int *)(in_ECX + 0x84) == 0) {
    FUN_004a7a60("pSoulGemRect is NULL");
  }
  if (((((((*(int *)(in_ECX + 0x3c) != 0) && (*(int *)(in_ECX + 0x44) != 0)) &&
         (*(int *)(in_ECX + 0x50) != 0)) &&
        ((*(int *)(in_ECX + 0x48) != 0 && (*(int *)(in_ECX + 0x4c) != 0)))) &&
       ((*(int *)(in_ECX + 0x54) != 0 &&
        ((*(int *)(in_ECX + 0x58) != 0 && (*(int *)(in_ECX + 0x5c) != 0)))))) &&
      (*(int *)(in_ECX + 0x60) != 0)) &&
     (((((*(int *)(in_ECX + 100) != 0 && (*(int *)(in_ECX + 0x68) != 0)) &&
        (*(int *)(in_ECX + 0x6c) != 0)) &&
       (((*(int *)(in_ECX + 0x70) != 0 && (*(int *)(in_ECX + 0x74) != 0)) &&
        ((*(int *)(in_ECX + 0x78) != 0 &&
         ((*(int *)(in_ECX + 0x7c) != 0 && (*(int *)(in_ECX + 0x80) != 0)))))))) &&
      (*(int *)(in_ECX + 0x84) != 0)))) {
    return 1;
  }
  return 0;
}



void FUN_005a1990(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  if ((((999 < param_1) || (param_1 == 0x14)) || (param_1 == 0x16)) ||
     ((param_1 == 2 || (param_1 == 0x18)))) {
    if (param_2 == 0) {
      return;
    }
    *(undefined4 *)(in_ECX + 0x94) = 0;
    if (*(int *)(in_ECX + 0x5c) != 0) {
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
      *(int *)(in_ECX + 0x94) = param_2;
    }
  }
  if ((((999 < param_1) || (param_1 == 0x14)) ||
      ((param_1 == 0x16 || (((param_1 == 2 || (param_1 == 0x18)) || (param_1 == 0xf)))))) ||
     (param_1 == 0xe)) {
    FUN_0057de50(4);
  }
  return;
}



void FUN_005a1d10(int param_1,undefined4 param_2)

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
    iVar1 = in_ECX[0x18];
    goto LAB_005a1d47;
  }
  iVar1 = in_ECX[0x1a];
LAB_005a1d47:
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



void FUN_005a1e10(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  uint local_8;
  
  iVar5 = 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    uVar4 = 0;
    piVar1 = (int *)(*(int *)(in_ECX + 0x28) + 0x28);
    while (piVar1 != (int *)0x0) {
      uVar3 = 0;
      piVar2 = piVar1;
      do {
        if (*piVar2 != 0) {
          uVar3 = uVar3 + 1;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
      if (uVar3 <= uVar4) {
        return;
      }
      fVar6 = (float10)FUN_00588bd0(0xfae);
      local_8 = (uint)(longlong)ROUND(fVar6);
      if (uVar4 == local_8) {
        iVar5 = FUN_00414b10(uVar4);
      }
      if (iVar5 != 0) {
        FUN_005a08e0(iVar5,0);
      }
      uVar4 = uVar4 + 1;
    }
  }
  return;
}



void FUN_005a1ea0(byte param_1)

{
  FUN_005a1680();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005a1ec0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_EBX;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  float10 fVar9;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00589b70(0x412,uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  FUN_00582160(0,1);
  fVar8 = (float10)thunk_FUN_00584980();
  uVar4 = FUN_00590420("Data\\Menus\\dialog\\Enchantment.xml");
  piVar5 = (int *)FUN_005898f0();
  if (piVar5 == (int *)0x0) {
LAB_005a20a9:
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  iVar6 = (**(code **)(*piVar5 + 0x34))();
  if (iVar6 != 0x412) {
    if (piVar5[1] != 0) {
      (**(code **)*piVar5)(1);
    }
    goto LAB_005a20a9;
  }
  FUN_0057de50(0xf);
  uVar7 = FUN_009832e6(uVar4,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar7);
  iVar6 = FUN_009832e6(piVar5,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13ff0,0);
  cVar1 = FUN_005a17b0();
  if (cVar1 == '\0') {
    FUN_004a7a60("Enchantment Menu Creation Failed... Are your menu and art resources up to date?");
    goto LAB_005a20a9;
  }
  fVar9 = (float10)FUN_00588bd0(0xfa5);
  if (fVar9 != (float10)6006.0) {
    fVar9 = (float10)FUN_00588bd0(0xfa5);
    if (fVar9 != (float10)102.0) goto LAB_005a1fec;
  }
  FUN_0058ceb0(0xfab,(float)fVar8);
LAB_005a1fec:
  DAT_00b3b718 = 0;
  uStack_4 = 0;
  (*(code *)**(undefined4 **)(*(int *)(iVar6 + 0x28) + 0x24))(0);
  uVar7 = FUN_009828c0();
  FUN_00402e30(&stack0xffffffe8,&DAT_00a2f860,uVar7);
  FUN_0058ced0(0xfde,unaff_EBX);
  uVar7 = FUN_005e4420();
  FUN_00402e30(&stack0xffffffe8,&DAT_00a2f860,uVar7);
  FUN_0058ced0(0xfde,unaff_EBX);
  FUN_00585190(0);
  FUN_00401f20(unaff_EBX);
  *unaff_FS_OFFSET = 0;
  return uVar4;
}



void FUN_005a20c0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_0058ceb0(0xfa1,0x40000000);
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_0058ceb0(0xfa1,0x40000000);
  }
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

void FUN_005a2160(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int in_ECX;
  int unaff_EBX;
  uint *unaff_FS_OFFSET;
  float10 fVar12;
  int *piStack_130;
  int *piStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 auStack_118 [66];
  uint local_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0206;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&piStack_130;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xfffffec0;
  *unaff_FS_OFFSET = (uint)&local_c;
  if (*(int *)(in_ECX + 0x90) != 0) {
    FUN_004526e0(uVar7);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x90));
    *(undefined4 *)(in_ECX + 0x90) = 0;
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    uVar8 = FUN_009832e6(*(undefined4 *)(*(int *)(in_ECX + 0x30) + 8),0,&PTR_PTR_00b03248,
                         &PTR_PTR_00b03718,0);
    *(undefined4 *)(in_ECX + 0x34) = uVar8;
  }
  if (((*(int **)(in_ECX + 0x34) != (int *)0x0) && (*(int *)(in_ECX + 0x2c) != 0)) &&
     ((iVar9 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x10))(), iVar9 != 3 ||
      ((*(int *)(*(int *)(in_ECX + 0x28) + 0x2c) == 0 &&
       (*(int *)(*(int *)(in_ECX + 0x28) + 0x28) == 0)))))) {
    uVar8 = FUN_004170b0(0,0,0,1);
    *(undefined4 *)(in_ECX + 0x90) = uVar8;
    FUN_00663aa0(uVar8);
  }
  piVar5 = *(int **)(in_ECX + 0x90);
  piVar2 = (int *)0x0;
  while ((piVar4 = piVar5, piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))))) {
    iVar9 = *piVar4;
    if ((iVar9 == 0) ||
       ((((*(uint *)(iVar9 + 0x58) >> 0x15 & 1) == 0 ||
         (cVar6 = FUN_004194b0(*(undefined4 *)(in_ECX + 0x30),iVar9,1), cVar6 == '\0')) ||
        (cVar6 = FUN_00419220(iVar9), cVar6 == '\0')))) {
      if (piVar2 == (int *)0x0) {
        piVar1 = (int *)piVar4[1];
        piVar5 = piVar4;
        if (piVar1 == (int *)0x0) {
          *piVar4 = 0;
        }
        else {
          piVar4[1] = piVar1[1];
          *piVar4 = *piVar1;
          FUN_00401f20(piVar1);
        }
      }
      else {
        FUN_0065c620(iVar9);
        piVar5 = (int *)piVar2[1];
      }
    }
    else {
      piVar5 = (int *)piVar4[1];
      piVar2 = piVar4;
    }
  }
  auStack_118[0] = *(undefined4 *)(in_ECX + 0x54);
  FUN_005893f0();
  uStack_120 = 0;
  uStack_11c = 0;
  FUN_004028d0("known_effect_template",0);
  piVar2 = *(int **)(in_ECX + 0x90);
  iVar9 = 0;
  piStack_130 = (int *)0x0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_4 = 1;
  piStack_12c = piVar2;
  (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x28) + 0x24))(0);
  uVar8 = FUN_009828c0();
  FUN_00402e30(&piStack_12c,&DAT_00a2f860,uVar8);
  FUN_0058ced0(0xfde,piStack_12c);
  uVar8 = FUN_005e4420();
  FUN_00402e30(&piStack_12c,&DAT_00a2f860,uVar8);
  FUN_0058ced0(0xfde,piStack_12c);
  while (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    iVar10 = FUN_00585410(uStack_11c,uStack_124,0);
    if ((iVar10 != 0) && (iVar3 != 0)) {
      FUN_0058ceb0(0xfae,(float)unaff_EBX);
      FUN_0058ceb0(0xfa8,(float)(iVar9 + 1000));
      puVar11 = *(undefined1 **)(iVar3 + 0x3c);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &DAT_00a2f7ec;
      }
      FUN_0058ced0(0xfb0,puVar11);
      puVar11 = *(undefined1 **)(iVar3 + 0x3c);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &DAT_00a2f7ec;
      }
      FUN_004028d0(puVar11,0);
      fVar12 = (float10)FUN_00588bd0(0xfb5);
      FUN_0058ceb0(0xfb1,(float)fVar12);
      puVar11 = *(undefined1 **)(iVar3 + 0x48);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &DAT_00a2f7ec;
      }
      _sprintf((char *)auStack_118,"%s\\%s","Icons",puVar11);
      FUN_0058ced0(0xfaf,auStack_118);
      FUN_0058ceb0(0xfb2,(float)*(int *)(iVar3 + 0x98));
      FUN_0058ceb0(0xfb4,0x41200000);
      FUN_0058ceb0(0xfc9,0x40000000);
      iVar9 = iVar9 + 1;
      fVar12 = (float10)FUN_00588bd0(0xfb5);
      FUN_0058ceb0(0xfb6,(float)fVar12);
      unaff_EBX = iVar9;
    }
    piVar2 = (int *)piStack_130[1];
    piStack_130 = piVar2;
  }
  FUN_00401f20(piStack_12c);
  FUN_00401f20(uStack_124);
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005a2520(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int in_ECX;
  float fVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  float local_138;
  float fStack_134;
  undefined1 *puStack_130;
  undefined4 uStack_12c;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined4 uStack_124;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  int iStack_11c;
  undefined4 uStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0256;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_138;
  *unaff_FS_OFFSET = (int)&local_c;
  local_138 = *(float *)(in_ECX + 0x58);
  puVar2 = *(undefined4 **)((int)local_138 + 0x34);
  fVar8 = 0.0;
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)();
    }
  }
  FUN_00573880();
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_126 = 0;
  FUN_004028d0();
  iVar3 = *(int *)(in_ECX + 0x28);
  iStack_4 = 0;
  if (iVar3 != 0) {
    iStack_11c = iVar3 + 0x24;
    if (iStack_11c == 0) {
      fStack_134 = 0.0;
    }
    else {
      fStack_134 = 0.0;
      for (piVar1 = (int *)(iVar3 + 0x28); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (*piVar1 != 0) {
          fStack_134 = (float)((int)fStack_134 + 1);
        }
      }
    }
    if (fStack_134 != 0.0) {
      do {
        puVar2 = (undefined4 *)FUN_00414b10();
        if (((*(int *)(in_ECX + 0x2c) != 0) && (*(int **)(in_ECX + 0x34) != (int *)0x0)) &&
           (iVar3 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x10))(), iVar3 == 3)) {
          uStack_118 = *(undefined4 *)(puVar2[7] + 0x90);
          puStack_130 = *(undefined1 **)(puVar2[7] + 0x5c);
          uVar4 = FUN_00484bf0();
          FUN_00549060(puStack_130,uStack_118,uVar4);
          FUN_004843b0();
          FUN_009828c0();
          FUN_00413340();
        }
        iVar3 = FUN_00585410(local_138);
        if ((iVar3 != 0) && (puVar2 != (undefined4 *)0x0)) {
          puStack_130 = (undefined1 *)fVar8;
          FUN_0058ceb0();
          puStack_130 = (undefined1 *)((int)fVar8 + 3000);
          FUN_0058ceb0();
          FUN_004145d0(&uStack_124);
          iStack_4._0_1_ = 1;
          FUN_0058ced0();
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_00401f20();
          puStack_130 = &stack0xfffffeac;
          uStack_124 = 0;
          uStack_11e = 0;
          uStack_120 = 0;
          FUN_004139f0(&stack0xfffffeac);
          FUN_0058a020();
          _sprintf(acStack_114,"%s\\%s");
          FUN_0058ced0();
          puStack_130 = (undefined1 *)*puVar2;
          FUN_0058ceb0();
          FUN_0058ceb0();
          FUN_00588bd0();
          FUN_0058ceb0();
        }
        fVar8 = (float)((int)fVar8 + 1);
      } while ((uint)fVar8 < (uint)fStack_134);
    }
    if ((*(int **)(in_ECX + 0x34) == (int *)0x0) ||
       (iVar3 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x10))(), iVar3 != 3)) {
      (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x28) + 0x24))();
      iVar3 = FUN_009828c0();
      if (iVar3 == 0) {
        FUN_0058ceb0(0xfa1);
        uVar4 = 0xfa1;
      }
      else {
        FUN_0058ceb0(0xfa1);
        FUN_0058ceb0(0xfae);
        iVar6 = FUN_00484bf0();
        pfVar7 = (float *)(&DAT_00b39530)[iVar6];
        if (pfVar7 == (float *)0x0) {
          pfVar7 = (float *)&DAT_00b35464;
          DAT_00b35464 = 0;
        }
        iVar6 = FUN_00484d70();
        if (*pfVar7 <= (float)iVar6) {
          iVar6 = FUN_00484bf0();
          pfVar7 = (float *)(&DAT_00b39530)[iVar6];
          if (pfVar7 == (float *)0x0) {
            pfVar7 = (float *)&DAT_00b35464;
            DAT_00b35464 = 0;
          }
          local_138 = *pfVar7;
        }
        else {
          iVar6 = FUN_00484d70();
          local_138 = (float)iVar6;
        }
        iVar6 = FUN_009828c0();
        *(bool *)(in_ECX + 0x9d) = iVar6 < iVar3;
        FUN_0058ceb0(0xfaf);
        FUN_0058ceb0(0xfa1);
        FUN_00484d70();
        uVar4 = 0xfae;
      }
      FUN_0058ceb0(uVar4);
      (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x28) + 0x24))();
      uVar4 = FUN_009828c0();
      *(undefined4 *)(in_ECX + 0x38) = uVar4;
    }
    else {
      FUN_0058ceb0();
      FUN_0058ceb0();
      FUN_0058ced0();
      FUN_0058ceb0();
      FUN_0058ceb0();
      *(undefined1 *)(in_ECX + 0x9d) = 0;
      *(undefined4 *)(in_ECX + 0x38) = 0;
      if ((*(int *)(in_ECX + 0x28) != 0) && (iVar3 = *(int *)(in_ECX + 0x28) + 0x24, iVar3 != 0)) {
        while ((*(int *)(iVar3 + 4) != 0 && (*(int *)(in_ECX + 0x2c) != 0))) {
          iVar6 = *(int *)(*(int *)(iVar3 + 4) + 0x1c);
          if ((*(uint *)(iVar6 + 0x58) >> 8 & 1) == 0) {
            iVar5 = FUN_00413320();
            fVar9 = (float10)iVar5;
          }
          else {
            local_138 = *(float *)(iVar6 + 0x90);
            puStack_130 = *(undefined1 **)(iVar6 + 0x5c);
            FUN_00484bf0();
            fVar9 = (float10)FUN_00549060(puStack_130,local_138);
          }
          fStack_134 = (float)fVar9;
          local_138 = *(float *)(iVar6 + 0x94);
          uVar4 = FUN_009828c0();
          *(undefined4 *)(in_ECX + 0x38) = uVar4;
          if ((*(int *)(iVar3 + 8) == 0) || (iVar3 = *(int *)(iVar3 + 8) + -4, iVar3 == 0)) break;
        }
      }
    }
    _sprintf(acStack_114,"%d");
    FUN_0058ced0();
    iVar3 = FUN_005e4420();
    local_138 = (float)((iVar3 < *(int *)(in_ECX + 0x38)) + 1);
    FUN_0058ceb0();
    FUN_005e4420();
    _sprintf(acStack_114,"%d");
    FUN_0058ced0();
    iVar3 = FUN_005e4420();
    local_138 = (float)((iVar3 < *(int *)(in_ECX + 0x38)) + 1);
    FUN_0058ceb0();
    if (*(int *)(in_ECX + 0x30) != 0) {
      FUN_004851b0();
      _sprintf(acStack_114,"%s\\%s");
      FUN_00488df0();
      FUN_0058ced0();
      FUN_0058ced0();
      FUN_0058ced0();
      FUN_0058fba0();
    }
    if (*(int *)(in_ECX + 0x2c) != 0) {
      FUN_004851b0();
      _sprintf(acStack_114,"%s\\%s");
      FUN_00488df0();
      FUN_0058ced0();
      local_138 = (float)FUN_00484d70();
      FUN_0058ceb0();
      FUN_0058ced0();
    }
  }
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_00401f20();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005a2cd0(undefined4 param_1)

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



void FUN_005a2d30(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  int in_ECX;
  undefined2 uStack_c;
  
  iVar2 = FUN_005e4420();
  iVar5 = *(int *)(in_ECX + 0x28);
  if (iVar5 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(iVar5 + 0x28);
  }
  if (*(int *)(in_ECX + 0x30) == 0) {
    FUN_004028d0(DAT_00b389b0,0);
    FUN_005d48a0();
    return;
  }
  if (*(int *)(in_ECX + 0x2c) == 0) {
    FUN_004028d0(DAT_00b389b8,0);
    FUN_005d48a0();
    return;
  }
  if ((piVar3[1] == 0) && (*piVar3 == 0)) {
    FUN_004028d0(DAT_00b389c0,0);
    FUN_005d48a0();
    return;
  }
  if (iVar2 - *(int *)(in_ECX + 0x38) < 0) {
    FUN_00419b10(DAT_00b38db0);
    FUN_005d48a0();
    return;
  }
  uVar4 = DAT_00b389c8;
  if (((*(char *)(in_ECX + 0x9d) == '\0') &&
      (uVar4 = DAT_00b389d0, *(char **)(iVar5 + 0x1c) != (char *)0x0)) &&
     (**(char **)(iVar5 + 0x1c) != '\0')) {
    piVar3 = (int *)FUN_00447df0();
    (**(code **)(*piVar3 + 0xb4))();
    FUN_0044d950();
    uVar4 = FUN_00438db0();
    FUN_009832e6(piVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298);
    FUN_004028d0(uVar4);
    iVar5 = FUN_009832e6(piVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718);
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(in_ECX + 0x28);
      iVar2 = FUN_00484d70();
      pfVar6 = (float *)FUN_00403c00();
      uStack_c = (undefined2)(int)ROUND(*pfVar6 * (float)iVar2);
      *(undefined2 *)(iVar5 + 8) = uStack_c;
    }
    FUN_0044d950();
    FUN_00459800();
    puVar1 = (undefined4 *)**(int **)(in_ECX + 0x30);
    uVar4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      uVar4 = *puVar1;
    }
    (**(code **)(*DAT_00b333c4 + 0x100))((*(int **)(in_ECX + 0x30))[2],uVar4,1,0,0,0,0,0,1);
    FUN_005c1900();
    FUN_004d8720(piVar3,0,1);
    puVar1 = (undefined4 *)**(int **)(in_ECX + 0x2c);
    if (puVar1 != (undefined4 *)0x0) {
      uVar4 = *puVar1;
    }
    iVar5 = (*(int **)(in_ECX + 0x2c))[2];
    if (iVar5 == DAT_00b35ee4) {
      FUN_0041f650();
    }
    else {
      (**(code **)(*DAT_00b333c4 + 0x100))(iVar5,uVar4,1,0,0,0,0,0,1,0);
      FUN_005c1900();
    }
    FUN_0041e6f0();
    FUN_00491700(DAT_00b333c4,*(undefined4 *)(in_ECX + 0x38),0);
    FUN_0057acc0(DAT_00b389e0,0,1,0x40a00000);
    FUN_0057de50(0xb);
    FUN_005a1740();
    return;
  }
  FUN_00419b10(uVar4);
  FUN_005d48a0();
  return;
}



void FUN_005a3020(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = *(int **)(in_ECX + 0x90);
  iVar4 = 0;
  FUN_00588bd0();
  iVar3 = FUN_009828c0();
  do {
    if (piVar1 == (int *)0x0) {
LAB_005a3148:
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if (iVar4 == iVar3) {
      iVar4 = *piVar1;
      if (iVar4 != 0) {
        cVar2 = FUN_00414f00();
        if ((cVar2 == '\0') || ((*(uint *)(iVar4 + 0x58) & 0x180000) != 0)) {
          iVar3 = FUN_00401f00();
          local_4 = 0;
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_004149d0();
          }
          local_4 = 0xffffffff;
          if ((*(uint *)(iVar4 + 0x58) >> 0x13 & 1) == 0) {
            if ((*(uint *)(iVar4 + 0x58) >> 0x14 & 1) != 0) {
              *(undefined4 *)(iVar3 + 0x14) = 0;
            }
          }
          else {
            *(undefined4 *)(iVar3 + 0x14) = 0xc;
          }
          FUN_00413710();
          FUN_005a08e0();
          if (iVar3 != 0) {
            FUN_00413bb0();
            FUN_00401f20();
          }
        }
        else {
          FUN_004028d0("That effect has already been added.  Edit the effect instead.",0);
          FUN_005d48a0();
        }
      }
      goto LAB_005a3148;
    }
    piVar1 = (int *)piVar1[1];
    iVar4 = iVar4 + 1;
  } while( true );
}



void FUN_005a3160(int param_1)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 == '\0') {
    if ((param_1 == 2) || (param_1 == 0x18)) {
      FUN_005a1600();
      goto LAB_005a3198;
    }
  }
  else {
    FUN_0057dd90();
LAB_005a3198:
    FUN_00580120();
    FUN_0058ced0();
    FUN_00438db0();
    FUN_004028d0();
  }
  switch(param_1) {
  case 0xe:
    FUN_005a2d30();
    (**(code **)(*in_ECX + 0x14))();
    return;
  case 0xf:
    if ((int *)in_ECX[10] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[10] + 0x10))();
    }
    FUN_005a1740();
    (**(code **)(*in_ECX + 0x14))();
    return;
  case 0x14:
    FUN_005d2070(4,0);
    (**(code **)(*in_ECX + 0x14))();
    return;
  case 0x16:
    FUN_005d2070(5,0);
    (**(code **)(*in_ECX + 0x14))();
    return;
  }
  if (param_1 < 1000) {
    if (param_1 < 3000) goto LAB_005a32cc;
  }
  else if (param_1 < 3000) {
    if (in_ECX[0xc] != 0) {
      FUN_005a3020();
      (**(code **)(*in_ECX + 0x14))();
      return;
    }
    FUN_00419b10(DAT_00b389b0);
    FUN_005d48a0();
    (**(code **)(*in_ECX + 0x14))();
    return;
  }
  FUN_005a1e10();
LAB_005a32cc:
  (**(code **)(*in_ECX + 0x14))();
  return;
}



void FUN_005a3310(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0x12] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  *in_ECX = &PTR_FUN_00a6bd0c;
  return;
}



undefined4 FUN_005a3340(void)

{
  int in_ECX;
  
  if ((((((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0x2c) != 0)) &&
        (*(int *)(in_ECX + 0x30) != 0)) &&
       ((*(int *)(in_ECX + 0x34) != 0 && (*(int *)(in_ECX + 0x38) != 0)))) &&
      ((*(int *)(in_ECX + 0x3c) != 0 &&
       ((*(int *)(in_ECX + 0x40) != 0 && (*(int *)(in_ECX + 0x44) != 0)))))) &&
     (*(int *)(in_ECX + 0x48) != 0)) {
    return 1;
  }
  return 0;
}



void FUN_005a3430(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6bd0c;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005a3460(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_1 == 2) {
    FUN_00582160(0,1);
    FUN_0057d7a0();
    iVar1 = FUN_009828c0();
    fVar2 = (float10)FUN_00588c50();
    fVar3 = (float10)FUN_00588bd0(0xfb6);
    fVar4 = (float10)FUN_00588bd0(0xfb1);
    fVar2 = (float10)FUN_004843b0((float)((float10)(double)((float10)iVar1 - fVar2) / fVar3),
                                  (float)fVar4);
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    FUN_0058ceb0(0xfb7,(float)fVar2);
    FUN_0058ceb0(0xfb7,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005a3540(void)

{
  float fVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar3 = (undefined4 *)FUN_00589b70(0x3fc);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  uVar4 = FUN_00590420("Data\\Menus\\Options\\gameplay_menu.xml");
  piVar5 = (int *)FUN_005898f0();
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 0x34))();
    if (iVar6 == 0x3fc) {
      uVar4 = FUN_009832e6(uVar4,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar4);
      FUN_009832e6(piVar5,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14010,0);
      cVar2 = FUN_005a3340();
      if (cVar2 != '\0') {
        fVar8 = (float10)FUN_00588bd0(0xfa5);
        if ((fVar8 == (float10)6006.0) ||
           (fVar8 = (float10)FUN_00588bd0(0xfa5), fVar8 == (float10)102.0)) {
          FUN_0058ceb0(0xfab,(float)fVar7);
        }
        fVar1 = _DAT_00b37b78 - _DAT_00b37b70;
        FUN_0058ceb0(0xfaf,_DAT_00b37b70);
        FUN_0058ceb0(0xfb0,_DAT_00b37b78);
        FUN_0058ceb0(0xfb1,fVar1 / 100.0);
        FUN_0058ceb0(0xfb2,fVar1 * 0.25);
        FUN_0058ceb0(0xfb3,*(undefined4 *)(DAT_00b333c4 + 0x734));
        FUN_0058ceb0(0xfb3,0);
        uVar4 = DAT_00b38da8;
        if (DAT_00b13200 != '\0') {
          uVar4 = DAT_00b38da0;
        }
        FUN_0058ced0(0xfde,uVar4);
        uVar4 = DAT_00b38da8;
        if (DAT_00b13208 != '\0') {
          uVar4 = DAT_00b38da0;
        }
        FUN_0058ced0(0xfde,uVar4);
        uVar4 = DAT_00b38da8;
        if (DAT_00b13210 != '\0') {
          uVar4 = DAT_00b38da0;
        }
        FUN_0058ced0(0xfde,uVar4);
        uVar4 = DAT_00b38da8;
        if (DAT_00b13218 != '\0') {
          uVar4 = DAT_00b38da0;
        }
        FUN_0058ced0(0xfde,uVar4);
        uVar4 = DAT_00b38da8;
        if (DAT_00b13220 != '\0') {
          uVar4 = DAT_00b38da0;
        }
        FUN_0058ced0(0xfde,uVar4);
        uVar4 = DAT_00b38da8;
        if (DAT_00b13228 != '\0') {
          uVar4 = DAT_00b38da0;
        }
        FUN_0058ced0(0xfde,uVar4);
        FUN_00585190(0);
        return 1;
      }
      FUN_004a7a60("Gameplay Menu Creation Failed... Are your menu and art resources up to date?");
      return 0;
    }
    if (piVar5[1] != 0) {
      (**(code **)*piVar5)(1);
    }
  }
  return 0;
}



void FUN_005a3810(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3fc);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3be0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[10] = 0;
  *in_ECX = &PTR_FUN_00a6bd9c;
  DAT_00b3b2e0 = 0;
  _DAT_00b3b2e4 = 0;
  _DAT_00b3b2e8 = 0;
  _DAT_00b3b2ec = 0;
  _DAT_00b3b2f0 = 0;
  _DAT_00b3b2f4 = 0;
  _DAT_00b3b2f8 = 0;
  _DAT_00b3b2fc = 0;
  _DAT_00b3b300 = 0;
  _DAT_00b3b304 = 0;
  _DAT_00b3b308 = 0;
  _DAT_00b3b30c = 0;
  _DAT_00b3b310 = 0;
  _DAT_00b3b314 = 0;
  _DAT_00b3b318 = 0;
  _DAT_00b3b31c = 0;
  _DAT_00b3b320 = 0;
  _DAT_00b3b324 = 0;
  _DAT_00b3b328 = 0;
  _DAT_00b3b32c = 0;
  _DAT_00b3b330 = 0;
  return;
}



void FUN_005a3c60(void)

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
  *in_ECX = &PTR_FUN_00a6bd9c;
  local_4 = 0;
  iVar2 = FUN_00582160(0,1,uVar1);
  *(undefined4 *)(iVar2 + 0xb4) = in_ECX[10];
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005a3ce0(byte param_1)

{
  FUN_005a3c60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005a3d00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f3);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    if ((param_1 != 0) && (iVar1 = FUN_00582160(0,1), *(char *)(iVar1 + 0xb0) == -1)) {
      iVar1 = FUN_00582160(0,1);
      *(char *)(iVar1 + 0xb0) = (char)param_1;
    }
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_005a3d80(int param_1)

{
  int in_ECX;
  int iVar1;
  float10 fVar2;
  undefined4 local_54 [21];
  
  if (0 < param_1) {
    local_54[0] = 0xfae;
    local_54[1] = 0xfaf;
    local_54[2] = 0xfb0;
    local_54[3] = 0xfb1;
    local_54[4] = 0xfb2;
    local_54[5] = 0xfb3;
    local_54[6] = 0xfb4;
    local_54[7] = 0xfb5;
    local_54[8] = 0xfb6;
    local_54[9] = 0xfb7;
    local_54[10] = 0xfb8;
    local_54[0xb] = 0xfb9;
    local_54[0xc] = 0xfba;
    local_54[0xd] = 0xfbb;
    local_54[0xe] = 0xfbc;
    local_54[0xf] = 0xfbd;
    local_54[0x10] = 0xfbe;
    local_54[0x11] = 0xfbf;
    local_54[0x12] = 0xfc0;
    local_54[0x13] = 0xfc1;
    local_54[0x14] = 0xfc2;
    iVar1 = 0;
    do {
      fVar2 = (float10)FUN_00588bd0(*(undefined4 *)((int)local_54 + iVar1));
      *(float *)((int)&DAT_00b3b2e0 + iVar1) = (float)fVar2;
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x54);
    DAT_00b3b2d8 = *(undefined4 *)(in_ECX + 0x34);
    DAT_00b3b2dc = param_1;
    FUN_005a3d00(param_1);
  }
  return;
}



void FUN_005a3e80(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c02b1;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  in_ECX[1] = 0;
  local_4 = 0;
  *(undefined2 *)(in_ECX + 6) = 0xfae;
  *in_ECX = 0;
  iVar2 = FUN_00401f00(0x18,uVar1);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005888c0(in_ECX);
  }
  local_4._0_1_ = 0;
  in_ECX[4] = uVar3;
  iVar2 = FUN_00401f00(0x18,uVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005888c0(in_ECX);
  }
  in_ECX[5] = uVar3;
  *(undefined1 *)((int)in_ECX + 0x1a) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005a3f40(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be328;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  local_4 = 0;
  _eh_vector_constructor_iterator_(in_ECX + 0x18,0x1c,0x15,FUN_005a3e80,FUN_00589bb0);
  in_ECX[2] = 0;
  in_ECX[3] = 3;
  in_ECX[4] = 3;
  in_ECX[5] = 3;
  in_ECX[6] = 3;
  in_ECX[7] = 3;
  in_ECX[8] = 3;
  in_ECX[9] = 3;
  in_ECX[10] = 3;
  in_ECX[0xb] = 3;
  in_ECX[0xc] = 3;
  in_ECX[0xd] = 3;
  in_ECX[0xe] = 3;
  in_ECX[0xf] = 3;
  in_ECX[0x10] = 3;
  in_ECX[0x11] = 3;
  in_ECX[0x12] = 3;
  in_ECX[0x13] = 3;
  in_ECX[0x14] = 3;
  in_ECX[0x15] = 3;
  in_ECX[0x16] = 3;
  in_ECX[0x17] = 3;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4
FUN_005a3ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int *param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  float10 fVar9;
  int local_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  int local_60 [22];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c02e3;
  local_60[0x15] = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)(local_60 + 0x15);
  local_60[0] = 0xfae;
  local_60[1] = 0xfaf;
  local_60[2] = 0xfb0;
  local_60[3] = 0xfb1;
  local_60[4] = 0xfb2;
  local_60[5] = 0xfb3;
  local_60[6] = 0xfb4;
  local_60[7] = 0xfb5;
  local_60[8] = 0xfb6;
  local_60[9] = 0xfb7;
  local_60[10] = 0xfb8;
  local_60[0xb] = 0xfb9;
  local_60[0xc] = 0xfba;
  local_60[0xd] = 0xfbb;
  local_60[0xe] = 0xfbc;
  local_60[0xf] = 0xfbd;
  local_60[0x10] = 0xfbe;
  local_60[0x11] = 0xfbf;
  local_60[0x12] = 0xfc0;
  local_60[0x13] = 0xfc1;
  local_60[0x14] = 0xfc2;
  puVar3 = (undefined4 *)FUN_00589b70(0x3f3,uVar2);
  if ((((puVar3 != (undefined4 *)0x0) && (iVar4 = FUN_005898f0(), iVar4 != 0)) && (param_5 != 4)) &&
     ((iVar4 = FUN_005898f0(), *(int *)(iVar4 + 0x24) == 8 ||
      (iVar4 = FUN_005898f0(), *(int *)(iVar4 + 0x24) == 1)))) {
LAB_005a414a:
    iVar4 = FUN_00401f00(0x2b0);
    local_4 = 0;
    if (iVar4 == 0) {
      local_70 = 0;
    }
    else {
      local_70 = FUN_005a3f40();
    }
    local_4 = 0xffffffff;
    FUN_004028d0(param_1,0);
    *(undefined4 *)(local_70 + 8) = param_2;
    *(undefined4 *)(local_70 + 0x2ac) = param_4;
    if ((param_6 != (int *)0x0) && (param_5 != 3)) {
      piVar7 = (int *)(local_70 + 0xc);
      do {
        *piVar7 = param_5;
        if (param_5 == 0) {
          *param_6 = *param_6 + 4;
          FUN_0058ca00((float)*(int *)(*param_6 + -4));
        }
        else if (param_5 == 1) {
          *param_6 = *param_6 + 4;
          FUN_0058ca00(*(undefined4 *)(*param_6 + -4));
        }
        else if (param_5 == 2) {
          *param_6 = *param_6 + 4;
          FUN_0058ca50(*(undefined4 *)(*param_6 + -4));
        }
        *param_6 = *param_6 + 4;
        param_5 = *(int *)(*param_6 + -4);
        piVar7 = piVar7 + 1;
      } while (param_5 != 3);
    }
    FUN_0067b1e0(local_70);
    *unaff_FS_OFFSET = local_60[0x15];
    return 1;
  }
  cVar1 = FUN_005790e0(0x3f1,0);
  if (cVar1 != '\0') {
    FUN_00589b70(0x3f1);
    iVar4 = FUN_005898f0();
    if (*(int *)(iVar4 + 0x24) == 1) goto LAB_005a414a;
  }
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  FUN_00582160(0,1);
  fVar8 = (float10)thunk_FUN_00584980();
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_62 = 0;
  local_4 = 1;
  FUN_00402e30(&uStack_68,"%s\\%s","Data\\Menus\\Generic",param_1);
  uVar6 = uStack_68;
  uVar5 = FUN_00590420(uStack_68);
  piVar7 = (int *)FUN_005898f0();
  if (piVar7 == (int *)0x0) {
LAB_005a44b7:
    FUN_00401f20(uVar6);
    *unaff_FS_OFFSET = local_60[0x15];
    return 0;
  }
  iVar4 = (**(code **)(*piVar7 + 0x34))();
  if (iVar4 != 0x3f3) {
    if (piVar7[1] != 0) {
      (**(code **)*piVar7)(1);
    }
    goto LAB_005a44b7;
  }
  uVar6 = FUN_009832e6(uVar5,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar6);
  iVar4 = FUN_009832e6(piVar7,0,&PTR_PTR_00b0a018,&PTR_PTR_00b1402c,0);
  fVar9 = (float10)FUN_00588bd0(0xfa5);
  if ((fVar9 == (float10)6006.0) || (fVar9 = (float10)FUN_00588bd0(0xfa5), fVar9 == (float10)102.0))
  {
    FUN_0058ceb0(0xfab,(float)fVar8);
  }
  *(undefined4 *)(iVar4 + 0x28) = param_2;
  *(undefined4 *)(iVar4 + 0x34) = param_4;
  if (param_6 == (int *)0x0) {
    if (param_5 != 4) goto LAB_005a445c;
  }
  else if (param_5 != 4) {
    if (param_5 != 3) {
      piVar7 = local_60;
      do {
        if (param_5 == 0) {
          *param_6 = *param_6 + 4;
          FUN_0058ceb0(*piVar7,(float)*(int *)(*param_6 + -4));
LAB_005a43ea:
          piVar7 = piVar7 + 1;
        }
        else {
          if (param_5 == 1) {
            *param_6 = *param_6 + 4;
            FUN_0058ceb0(*piVar7,*(undefined4 *)(*param_6 + -4));
            goto LAB_005a43ea;
          }
          if (param_5 == 2) {
            *param_6 = *param_6 + 4;
            FUN_0058ced0(*piVar7,*(undefined4 *)(*param_6 + -4));
            goto LAB_005a43ea;
          }
        }
        *param_6 = *param_6 + 4;
        param_5 = *(int *)(*param_6 + -4);
      } while (param_5 != 3);
    }
    goto LAB_005a445c;
  }
  *param_6 = *param_6 + 4;
  iVar4 = *(int *)(*param_6 + -4);
  if (iVar4 != 0) {
    piVar7 = local_60;
    do {
      cVar1 = FUN_00589770();
      if (cVar1 == '\0') {
        FUN_0058ceb0(*piVar7,*(undefined4 *)(iVar4 + 4));
      }
      else {
        FUN_0058ced0(*piVar7,*(undefined4 *)(iVar4 + 8));
      }
      *param_6 = *param_6 + 4;
      iVar4 = *(int *)(*param_6 + -4);
      piVar7 = piVar7 + 1;
    } while (iVar4 != 0);
  }
LAB_005a445c:
  FUN_00585190(0);
  FUN_0058ceb0(0xfa1,0x40000000);
  FUN_0058fba0(0);
  FUN_00401f20(uStack_68);
  *unaff_FS_OFFSET = local_60[0x15];
  return 1;
}



void FUN_005a44e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *local_4;
  
  local_4 = &stack0x00000018;
  FUN_005a3ff0(param_1,param_2,param_3,param_4,param_5,&local_4);
  return;
}



undefined4 FUN_005a4510(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_00b3b338 == (undefined4 *)0x0) && (DAT_00b3b334 == (undefined4 *)0x0)) {
    return 0;
  }
  cVar3 = FUN_005790e0(0x3f1,0);
  if (cVar3 != '\0') {
    FUN_00589b70(0x3f1);
    iVar4 = FUN_005898f0();
    if (*(int *)(iVar4 + 0x24) == 1) {
      return 0;
    }
  }
  puVar2 = DAT_00b3b338;
  puVar1 = DAT_00b3b334;
  if (DAT_00b3b338 == (undefined4 *)0x0) {
    DAT_00b3b334 = (undefined4 *)0x0;
  }
  else {
    DAT_00b3b334 = (undefined4 *)*DAT_00b3b338;
    DAT_00b3b338 = (undefined4 *)DAT_00b3b338[1];
    FUN_00401f20(puVar2);
  }
  FUN_005a44e0(*puVar1,puVar1[2],0,puVar1[0xab],4,puVar1 + 0x18,puVar1 + 0x1f,puVar1 + 0x26,
               puVar1 + 0x2d,puVar1 + 0x34,puVar1 + 0x3b,puVar1 + 0x42,puVar1 + 0x49,puVar1 + 0x50,
               puVar1 + 0x57,puVar1 + 0x5e,puVar1 + 0x65,puVar1 + 0x6c,puVar1 + 0x73,puVar1 + 0x7a,
               puVar1 + 0x81,puVar1 + 0x88,puVar1 + 0x8f,puVar1 + 0x96,puVar1 + 0x9d,puVar1 + 0xa4,0
              );
  uVar7 = 0;
  uVar6 = 0xfdd;
  uVar5 = 0;
  FUN_00582160(0,1,0,0xfdd,0);
  FUN_0057f9f0(uVar5,uVar6,uVar7);
  return 1;
}



void FUN_005a4660(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6bdf4;
  DAT_00b3b33c = in_ECX;
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
  return;
}



undefined1 FUN_005a46b0(void)

{
  int in_ECX;
  
  if ((((((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0x2c) != 0)) &&
        (*(int *)(in_ECX + 0x30) != 0)) &&
       ((*(int *)(in_ECX + 0x34) != 0 && (*(int *)(in_ECX + 0x38) != 0)))) &&
      ((*(int *)(in_ECX + 0x3c) != 0 &&
       ((*(int *)(in_ECX + 0x40) != 0 && (*(int *)(in_ECX + 0x44) != 0)))))) &&
     ((*(int *)(in_ECX + 0x48) != 0 && (*(int *)(in_ECX + 0x4c) != 0)))) {
    return 1;
  }
  return 0;
}



void FUN_005a47b0(void)

{
  if ((DAT_00b3b33c != 0) && (*(int *)(DAT_00b3b33c + 0x50) != 0)) {
    FUN_00588cf0();
    FUN_009828c0();
    return;
  }
  FUN_00582160(0,1);
  FUN_0057d7f0();
  FUN_009828c0();
  return;
}



int FUN_005a47e0(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)DAT_00b3b33c >> 8);
  if ((DAT_00b3b33c != 0) && (*(int *)(DAT_00b3b33c + 0x54) == param_1)) {
    *(undefined4 *)(DAT_00b3b33c + 0x54) = 0;
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}



void FUN_005a4810(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6bdf4;
  DAT_00b3b33c = 0;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005a4840(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  
  if ((DAT_00b3b33c != 0) && (*(undefined4 **)(DAT_00b3b33c + 4) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(DAT_00b3b33c + 4))(1);
  }
  iVar2 = FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\Main\\hud_info_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 == 0x3ed) {
    uVar6 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
    FUN_00584880(uVar6);
    FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14048,0);
    cVar1 = FUN_005a46b0();
    if (cVar1 == '\0') {
      FUN_00404ec0("HUD-Info Menu Creation Failed... Are your menu and art resources up to date?");
    }
    fVar8 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar8 == (float10)6006.0) ||
       (fVar8 = (float10)FUN_00588bd0(0xfa5), fVar8 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar7);
    }
    FUN_00588bd0(0xfaf);
    uVar6 = FUN_009828c0();
    *(undefined4 *)(iVar2 + 0x10) = uVar6;
    FUN_00585190(0);
    return uVar3;
  }
  if (piVar4[1] == 0) {
    return 0;
  }
  (**(code **)*piVar4)(1);
  return 0;
}



undefined4 FUN_005a4980(int *param_1,char param_2,char param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  uint *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  double *pdVar15;
  undefined *puVar16;
  float *pfVar17;
  float fVar18;
  undefined2 *puVar19;
  float local_44;
  uint uStack_40;
  int local_3c;
  undefined2 *puStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  char *local_30;
  ushort local_2c;
  undefined2 local_2a;
  double local_28;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined4 *puStack_18;
  uint local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c0328;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (uint)&local_c;
  if (DAT_00b3b33c == 0) goto LAB_005a54f7;
  pcVar10 = (char *)0x0;
  local_30 = (char *)0x0;
  local_2c = 0;
  local_2a = 0;
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    uVar4 = FUN_004da2a0(uVar3);
    FUN_004028d0(uVar4,0);
    pcVar10 = local_30;
    if (local_30 != (char *)0x0) {
      if (local_2c == 0xffff) {
        pcVar5 = local_30;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar5 - (int)(local_30 + 1);
      }
      else {
        uVar3 = (uint)local_2c;
      }
      if (uVar3 != 0) {
        iVar6 = FUN_00404fd0();
        if (pcVar10[iVar6 + -1] == ' ') {
          pcVar10[iVar6 + -1] = '\0';
        }
      }
    }
  }
  iVar6 = DAT_00b3b33c;
  if ((DAT_00b333c4 != (int *)0x0) && ((char)DAT_00b333c4[0x170] == '\0')) {
    if (param_1 == DAT_00b333c4) {
      param_1 = (int *)0x0;
    }
    local_3c = *(int *)(DAT_00b3b33c + 4);
    if (local_3c != 0) {
      if (((param_3 == '\0') && (param_1 == *(int **)(DAT_00b3b33c + 0x54))) &&
         ((*(int *)(DAT_00b3b33c + 0x24) == 8 || (*(int *)(DAT_00b3b33c + 0x24) == 1))))
      goto LAB_005a4bd3;
      if (param_1 == (int *)0x0) {
        *(undefined4 *)(DAT_00b3b33c + 0x54) = 0;
      }
      if ((param_3 == '\0') &&
         ((iVar7 = *(int *)(iVar6 + 0x24), iVar7 != 4 || (param_1 == (int *)0x0)))) {
        if ((iVar7 == 8) || (iVar7 == 1)) {
          FUN_00584740();
        }
        local_4 = 0xffffffff;
        FUN_00402da0();
        if (param_1 == (int *)0x0) {
          *unaff_FS_OFFSET = local_c;
          return 1;
        }
        goto LAB_005a54f7;
      }
      iVar7 = FUN_004de980();
      if (((param_1 != (int *)0x0) && (iVar7 == 5)) || (iVar7 == 3)) {
        pfVar17 = &local_44;
        pdVar15 = &local_28;
        local_44 = 0.0;
        local_1c = 0;
        local_1a = 0xff;
        uVar13 = 1;
        uVar12 = 1;
        uVar4 = (**(code **)(*DAT_00b333c4 + 0x174))(1,1,pdVar15,pfVar17);
        cVar1 = FUN_004dbae0(uVar4,uVar12,uVar13,pdVar15,pfVar17);
        if (cVar1 == '\0') {
          local_4 = 0xffffffff;
          FUN_00402da0();
          goto LAB_005a54f7;
        }
      }
      if (param_3 == '\0') {
        *(int **)(iVar6 + 0x54) = param_1;
      }
      cVar1 = FUN_004d74d0();
      if (((cVar1 != '\0') &&
          (piVar8 = (int *)(**(code **)(*param_1 + 0x388))(), piVar8 != (int *)0x0)) &&
         (((piVar8 != DAT_00b333c4 &&
           ((cVar1 = (**(code **)(*piVar8 + 0x198))(0), cVar1 == '\0' &&
            ((int *)piVar8[0x16] != (int *)0x0)))) &&
          (iVar7 = (**(code **)(*(int *)piVar8[0x16] + 0x36c))(), iVar7 == 4)))) {
        param_1 = piVar8;
      }
      if (((uint)param_1[2] >> 0xd & 1) != 0) {
switchD_005a4bc5_caseD_1c:
        FUN_00584740();
        goto LAB_005a4bd3;
      }
      iVar7 = (**(code **)(*param_1 + 0x170))();
      uStack_40 = (uint)*(byte *)(iVar7 + 4);
      switch(uStack_40) {
      case 0x12:
      case 0x17:
      case 0x18:
      case 0x23:
      case 0x24:
        if (param_2 != '\0') goto switchD_005a4bc5_caseD_1c;
        break;
      case 0x1a:
        iVar7 = (**(code **)(*param_1 + 0x170))();
        if ((*(uint *)(iVar7 + 0x7c) >> 1 & 1) == 0) goto switchD_005a4bc5_caseD_1c;
        break;
      case 0x1c:
      case 0x1e:
        goto switchD_005a4bc5_caseD_1c;
      }
      puStack_38 = (undefined2 *)0x0;
      uStack_34 = 0;
      uStack_32 = 0;
      local_4._0_1_ = 1;
      local_44 = (float)FUN_004d7740();
      if ((iVar6 == 0) || (iVar7 = FUN_00404fd0(), iVar7 == 0)) {
        FUN_0058ced0(0xfde,&DAT_00a36430);
        FUN_0058ceb0(0xfa1,0x3f800000);
        FUN_0058ced0(0xfde,&DAT_00a36430);
        FUN_0058ceb0(0xfa1,0x3f800000);
      }
      else {
        if (param_2 == '\0') {
          uVar4 = 0x3f800000;
        }
        else {
          uVar4 = 0x40000000;
        }
        FUN_0058ceb0(0xfb2,uVar4);
        iVar7 = FUN_004d7630();
        if (iVar7 == 0) {
          sVar2 = FUN_0041e860();
          if (sVar2 == 1) {
            cVar1 = (**(code **)(*param_1 + 400))();
            if (cVar1 == '\0') {
              FUN_0058ced0(0xfde,local_30);
            }
            else {
              iVar7 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
              if (((iVar7 != 0) && (*(int **)(iVar7 + 0x58) != (int *)0x0)) &&
                 (iVar9 = (**(code **)(**(int **)(iVar7 + 0x58) + 0x3d0))(), iVar9 != 0)) {
                (**(code **)(**(int **)(iVar7 + 0x58) + 0x3d0))();
                local_28 = 0.0;
                local_4 = CONCAT31(local_4._1_3_,2);
                pcVar5 = local_30;
                pcVar10 = (char *)FUN_004da2a0(local_30);
                pcVar14 = "%s\'s %s";
                goto LAB_005a4dda;
              }
              FUN_0058ced0(0xfde,local_30);
            }
          }
          else {
            local_28 = 0.0;
            local_4 = CONCAT31(local_4._1_3_,3);
            sVar2 = FUN_0041e860();
            pcVar5 = (char *)(int)sVar2;
            pcVar14 = "%s (%d)";
            pcVar10 = local_30;
LAB_005a4dda:
            FUN_00402e30(&local_28,pcVar14,pcVar10,pcVar5);
            FUN_0058ced0(0xfde,local_28._0_4_);
            local_4._0_1_ = 1;
            FUN_00402da0();
          }
          FUN_0058ceb0(0xfa1,0x40000000);
          FUN_0058ced0(0xfde,&DAT_00a36430);
          FUN_0058ceb0(0xfa1,0x3f800000);
        }
        else {
          FUN_00402e30(&puStack_38,"%s %s",local_30,DAT_00b38d18);
          FUN_0058ced0(0xfde,puStack_38);
          FUN_0058ceb0(0xfa1,0x40000000);
          FUN_0042b650(&puStack_38);
          FUN_0058ced0(0xfde,puStack_38);
          FUN_0058ceb0(0xfa1,0x40000000);
        }
      }
      if (*(int *)(iVar6 + 0x4c) != 0) {
        uVar4 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05480,0);
        iVar6 = FUN_009832e6(uVar4);
        if (((local_44 == 0.0) || (cVar1 = FUN_00428e70(), cVar1 == '\0')) ||
           ((cVar1 = FUN_004de770(DAT_00b333c4,1), cVar1 != '\0' ||
            ((iVar6 != 0 && (cVar1 = FUN_004b72c0(param_1,DAT_00b333c4,0,1), cVar1 != '\0')))))) {
          uVar4 = 0x3f800000;
        }
        else {
          uVar4 = FUN_004d7780();
          iVar6 = FUN_004299e0(uVar4);
          if ((undefined4 *)(&PTR_DAT_00b03e1c)[iVar6] == (undefined4 *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(&PTR_DAT_00b03e1c)[iVar6];
          }
          FUN_00402e30(&puStack_38,&DAT_00a2f864,uVar4);
          FUN_0058ced0(0xfde,puStack_38);
          iVar6 = FUN_004d7780();
          if (iVar6 == 0) {
            local_44 = -NAN;
          }
          else {
            local_44 = (float)FUN_004d7780();
          }
          FUN_0058ceb0(0xfaf,(float)(int)local_44);
          uVar4 = 0x40000000;
        }
        FUN_0058ceb0(0xfa1,uVar4);
      }
      uVar12 = 0;
      uVar4 = (**(code **)(*param_1 + 0x170))(0);
      FUN_00484420(uVar4,uVar12);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (puStack_18 == (undefined4 *)0x0) {
        puStack_18 = (undefined4 *)FUN_00401f00(8);
        if (puStack_18 == (undefined4 *)0x0) {
          puStack_18 = (undefined4 *)0x0;
        }
        else {
          *puStack_18 = 0;
          puStack_18[1] = 0;
        }
      }
      FUN_00446cb0(param_1 + 0x11);
      uVar4 = FUN_0048f450(1,1,0,0,0);
      FUN_004028d0(uVar4,0);
      FUN_0058ced0(0xfde,puStack_38);
      fVar11 = (float10)FUN_00488e50(0,DAT_00b333c4,0);
      FUN_0058ceb0(0xfaf,(float)fVar11);
      uVar3 = uStack_40;
      if (uStack_40 == 0x21) {
        fVar11 = (float10)FUN_004891c0(0,DAT_00b333c4,0);
      }
      else {
        fVar11 = (float10)-1.0;
      }
      local_44 = (float)fVar11;
      local_44 = (float)FUN_009828c0();
      FUN_00402e30(&puStack_38,&DAT_00a300d4,local_44);
      FUN_0058ced0(0xfde,puStack_38);
      FUN_0058ceb0(0xfaf,(float)(int)local_44);
      if (uVar3 == 0x14) {
        fVar11 = (float10)FUN_004891c0(0,DAT_00b333c4,0);
      }
      else {
        fVar11 = (float10)-1.0;
      }
      local_44 = (float)fVar11;
      local_44 = (float)FUN_009828c0();
      if ((int)local_44 < 1000) {
        puVar16 = &DAT_00a300d4;
        fVar18 = local_44;
LAB_005a5159:
        FUN_00402e30(&puStack_38,puVar16,fVar18);
      }
      else {
        if ((int)local_44 < 1000000) {
          fVar18 = (float)((int)local_44 / 1000);
          puVar16 = &DAT_00a6be80;
          goto LAB_005a5159;
        }
        if ((int)local_44 < 1000000000) {
          fVar18 = (float)((int)local_44 / 1000000);
          puVar16 = &DAT_00a3d904;
          goto LAB_005a5159;
        }
      }
      FUN_0058ced0(0xfde,puStack_38);
      FUN_0058ceb0(0xfaf,(float)(int)local_44);
      FUN_00485260(0,0,0);
      local_44 = (float)FUN_009828c0();
      iVar6 = (**(code **)(*param_1 + 0x170))();
      if (*(char *)(iVar6 + 4) == '\x17') {
        local_44 = -NAN;
      }
      piVar8 = (int *)(**(code **)(*param_1 + 0x170))();
      cVar1 = (**(code **)(*piVar8 + 0x78))();
      if (cVar1 != '\0') {
        local_44 = -NAN;
      }
      uVar4 = FUN_0048f450(2,1,0,DAT_00b333c4,0);
      FUN_0058ced0(0xfde,uVar4);
      FUN_0058ceb0(0xfaf,(float)(int)local_44);
      fVar11 = (float10)FUN_004d7570();
      local_28 = (double)fVar11;
      uVar4 = (**(code **)(*param_1 + 0x170))();
      uStack_40 = FUN_0046ca20(uVar4);
      uStack_40 = FUN_009828c0();
      local_44 = (float)(int)uStack_40;
      fVar11 = (float10)FUN_004d7570();
      if ((fVar11 < (float10)0.0) || (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 != '\0')) {
        local_44 = -1.0;
      }
      if (local_44 < 0.0) {
        puVar19 = &DAT_00a36430;
      }
      else {
        iVar6 = FUN_009828c0();
        if (iVar6 < 1000) {
          puVar16 = &DAT_00a300d4;
        }
        else if (iVar6 < 1000000) {
          iVar6 = iVar6 / 1000;
          puVar16 = &DAT_00a6be80;
        }
        else {
          puVar19 = puStack_38;
          if (999999999 < iVar6) goto LAB_005a5316;
          iVar6 = iVar6 / 1000000;
          puVar16 = &DAT_00a3d904;
        }
        FUN_00402e30(&puStack_38,puVar16,iVar6);
        puVar19 = puStack_38;
      }
LAB_005a5316:
      FUN_0058ced0(0xfde,puVar19);
      FUN_0058ceb0(0xfaf,local_44);
      if (uVar3 == 0x13) {
        fVar11 = (float10)FUN_004891c0(0,DAT_00b333c4,0);
      }
      else {
        fVar11 = (float10)-1.0;
      }
      local_44 = (float)fVar11;
      iVar6 = FUN_009828c0();
      if (iVar6 < 1000) {
        puVar16 = &DAT_00a300d4;
LAB_005a53b8:
        FUN_00402e30(&puStack_38,puVar16,iVar6);
      }
      else {
        if (iVar6 < 1000000) {
          iVar6 = iVar6 / 1000;
          puVar16 = &DAT_00a6be80;
          goto LAB_005a53b8;
        }
        if (iVar6 < 1000000000) {
          iVar6 = iVar6 / 1000000;
          puVar16 = &DAT_00a3d904;
          goto LAB_005a53b8;
        }
      }
      FUN_0058ced0(0xfde,puStack_38);
      uStack_40 = FUN_004d6600();
      FUN_0058ceb0(0xfaf,(float)(int)uStack_40);
      cVar1 = FUN_004d7510();
      iVar6 = (int)cVar1;
      if (iVar6 < 1000) {
        puVar16 = &DAT_00a300d4;
LAB_005a5461:
        FUN_00402e30(&puStack_38,puVar16,iVar6);
      }
      else {
        if (iVar6 < 1000000) {
          iVar6 = iVar6 / 1000;
          puVar16 = &DAT_00a6be80;
          goto LAB_005a5461;
        }
        if (iVar6 < 1000000000) {
          iVar6 = iVar6 / 1000000;
          puVar16 = &DAT_00a3d904;
          goto LAB_005a5461;
        }
      }
      FUN_0058ced0(0xfde,puStack_38);
      cVar1 = FUN_004d7510();
      uStack_40 = (uint)cVar1;
      FUN_0058ceb0(0xfaf,(float)(int)uStack_40);
      FUN_0058ceb0(0xfa1,0x40000000);
      FUN_0058fba0(0);
      if (param_3 == '\0') {
        FUN_00584390();
      }
      local_4._0_1_ = 1;
      FUN_00484470();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00402da0();
LAB_005a4bd3:
      local_4 = 0xffffffff;
      FUN_00402da0();
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
  }
  FUN_00401f20(pcVar10);
LAB_005a54f7:
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_005a5540(void)

{
  float10 fVar1;
  undefined2 extraout_var;
  uint3 uVar2;
  int in_ECX;
  float10 fVar3;
  
  *(int *)(in_ECX + 0x58) = *(int *)(in_ECX + 0x58) + 1;
  if ((0x3c < *(int *)(in_ECX + 0x58)) &&
     (*(undefined4 *)(in_ECX + 0x58) = 0, *(int *)(in_ECX + 0x54) != 0)) {
    fVar3 = (float10)FUN_00588bd0(0xfb2);
    fVar1 = (float10)2.0;
    uVar2 = (uint3)(CONCAT22(extraout_var,
                             (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10
                             | (ushort)(fVar3 == fVar1) << 0xe) >> 8);
    if (fVar3 == fVar1) {
      FUN_005a4980(*(undefined4 *)(in_ECX + 0x54),CONCAT31(uVar2,1),1);
      return;
    }
    FUN_005a4980(*(undefined4 *)(in_ECX + 0x54),(uint)uVar2 << 8,1);
  }
  return;
}



undefined1 FUN_005a55a0(void)

{
  int in_ECX;
  
  if ((((((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0x2c) != 0)) &&
        (*(int *)(in_ECX + 0x30) != 0)) &&
       ((*(int *)(in_ECX + 0x34) != 0 && (*(int *)(in_ECX + 0x38) != 0)))) &&
      ((*(int *)(in_ECX + 0x3c) != 0 &&
       ((*(int *)(in_ECX + 0x40) != 0 && (*(int *)(in_ECX + 0x44) != 0)))))) &&
     ((*(int *)(in_ECX + 0x48) != 0 && (*(int *)(in_ECX + 0x58) != 0)))) {
    return 1;
  }
  return 0;
}



ushort FUN_005a56c0(void)

{
  float10 fVar1;
  ushort in_AX;
  int in_ECX;
  float10 fVar2;
  
  if (*(int *)(in_ECX + 0x54) != 0) {
    fVar2 = (float10)FUN_00588bd0(0xfa1);
    fVar1 = (float10)2.0;
    in_AX = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 == fVar1) {
      return CONCAT11((char)(in_AX >> 8),1);
    }
  }
  return in_AX & 0xff00;
}



void FUN_005a56f0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(in_ECX + 0x10) != *(int *)(in_ECX + 0xc)) {
    if ((*(int *)(in_ECX + 0x10) != 0) && (uVar4 = 0, *(int *)(in_ECX + 0xc) != 0)) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(in_ECX + 4);
        iVar2 = *(int *)(iVar1 + uVar4 * 4);
        if (iVar2 != 0) {
          if (*(int *)(iVar5 + iVar1) != iVar2) {
            *(int *)(iVar5 + iVar1) = iVar2;
          }
          iVar5 = iVar5 + 4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 0xc));
    }
    uVar4 = *(uint *)(in_ECX + 0x10);
    iVar5 = *(int *)(in_ECX + 4);
    *(uint *)(in_ECX + 0xc) = uVar4;
    *(uint *)(in_ECX + 8) = uVar4;
    if (uVar4 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar4 * 4));
      *(undefined4 *)(in_ECX + 4) = uVar3;
      uVar4 = 0;
      if (*(int *)(in_ECX + 0xc) != 0) {
        do {
          *(undefined4 *)(*(int *)(in_ECX + 4) + uVar4 * 4) = *(undefined4 *)(iVar5 + uVar4 * 4);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(in_ECX + 0xc));
        FUN_00401f20(iVar5);
        return;
      }
    }
    FUN_00401f20(iVar5);
  }
  return;
}



void FUN_005a5790(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x62c);
  uVar1 = *(undefined4 *)(in_ECX + 0x634);
  param_1[1] = *(undefined4 *)(in_ECX + 0x630);
  param_1[2] = uVar1;
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a6be98;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



int * FUN_005a5810(uint param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0xc) <= param_1) {
    return (int *)0x0;
  }
  piVar1 = (int *)(*(int *)(in_ECX + 4) + param_1 * 4);
  piVar2 = (int *)*piVar1;
  *piVar1 = 0;
  if (piVar2 != (int *)0x0) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
  }
  uVar3 = *(int *)(in_ECX + 0xc) - 1;
  if (param_1 == uVar3) {
    *(uint *)(in_ECX + 0xc) = uVar3;
  }
  if (piVar2 != (int *)0x0) {
    if (piVar2[1] != 0) {
      FUN_004526e0();
      FUN_00401f20(piVar2[1]);
    }
    if (*piVar2 != 0) {
      FUN_0058da70();
      if ((DAT_00b3a6d4 == '\0') && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
    }
  }
  return piVar2;
}



void FUN_005a5890(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 == 0x5b) {
    FUN_00582160(0,1);
    FUN_0057d7a0();
    iVar1 = FUN_009828c0();
    *(float *)(in_ECX + 0x68) = (float)iVar1;
    FUN_0057d7f0();
    FUN_0057d7f0();
    iVar1 = FUN_009828c0();
    *(float *)(in_ECX + 0x6c) = (float)iVar1;
  }
  return;
}



void FUN_005a5900(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 local_24 [9];
  
  iVar4 = FUN_00582160(0,1);
  iVar5 = FUN_00589b70(0x3ec);
  if (iVar5 != 0) {
    uVar6 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
    iVar5 = FUN_009832e6(uVar6);
    FUN_00711300(&local_4c,&local_50,&local_58);
    local_54 = param_1 * 0.5;
    local_58 = local_58 - local_54 * 0.017453292;
    FUN_00711580(local_4c,local_50,local_58);
    puVar8 = local_24;
    puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x60) + 0x30);
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    fVar10 = (float10)(**(code **)(*DAT_00b333c4 + 0xec))();
    local_54 = (float)fVar10;
    fStack_3c = local_54 * 14.0;
    fStack_38 = local_54 * 70.0;
    fStack_34 = local_54 * -117.0;
    fVar10 = (float10)(**(code **)(*DAT_00b333c4 + 0xec))();
    fStack_40 = (float)fVar10;
    fStack_48 = fStack_40 * 69.0;
    fStack_44 = fStack_40 * 350.0;
    fStack_40 = fStack_40 * -65.0;
    fVar1 = param_2 / 400.0 + *(float *)(iVar5 + 0x70);
    *(float *)(iVar5 + 0x70) = fVar1;
    local_54 = fVar1;
    if (1.0 <= fVar1) {
      local_54 = 1.0;
    }
    if (0.0 <= local_54) {
      local_54 = fVar1;
      if (1.0 <= fVar1) {
        local_54 = 1.0;
      }
    }
    else {
      local_54 = 0.0;
    }
    iVar4 = *(int *)(iVar4 + 0x60);
    *(float *)(iVar5 + 0x70) = local_54;
    fVar1 = local_54 * (fStack_48 - fStack_3c);
    fVar2 = (fStack_44 - fStack_38) * local_54;
    fVar3 = local_54 * (fStack_40 - fStack_34);
    fStack_30 = fVar1 + fStack_3c;
    *(float *)(iVar4 + 0x54) = fStack_30;
    fStack_2c = fStack_38 + fVar2;
    *(float *)(iVar4 + 0x58) = fStack_2c;
    fStack_28 = fStack_34 + fVar3;
    *(float *)(iVar4 + 0x5c) = fStack_28;
    fStack_3c = fVar1;
    fStack_38 = fVar2;
    fStack_34 = fVar3;
    FUN_00707370(0,1);
  }
  return;
}



void FUN_005a5b50(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_1 == 8) {
    fVar4 = (float10)FUN_0065d270(0,8);
    iVar3 = FUN_005f1910(8);
    fVar1 = 0.0;
    if (0.0 <= (float)iVar3 + (float)fVar4) {
      fVar4 = (float10)FUN_0065d270(0,8);
      iVar3 = FUN_005f1910(8);
      fVar1 = (float)iVar3 + (float)fVar4;
    }
    fVar2 = 0.0;
    if (fVar1 != 0.0) {
      iVar3 = (**(code **)(*DAT_00b333c4 + 0x284))(8);
      if (iVar3 < 0) {
        param_1 = 0;
      }
      else {
        param_1 = (**(code **)(*DAT_00b333c4 + 0x284))(8);
      }
      fVar2 = (float)param_1 / fVar1;
    }
    FUN_0058ceb0(0xfae,fVar2);
  }
  else {
    if (param_1 == 9) {
      fVar4 = (float10)FUN_0065d270(0,9);
      iVar3 = FUN_005f1910(9);
      fVar1 = 0.0;
      if (0.0 <= (float)iVar3 + (float)fVar4) {
        fVar4 = (float10)FUN_0065d270(0,9);
        iVar3 = FUN_005f1910(9);
        fVar1 = (float)iVar3 + (float)fVar4;
      }
      fVar2 = 0.0;
      if (fVar1 != 0.0) {
        iVar3 = (**(code **)(*DAT_00b333c4 + 0x284))(9);
        if (iVar3 < 0) {
          param_1 = 0;
        }
        else {
          param_1 = (**(code **)(*DAT_00b333c4 + 0x284))(9);
        }
        fVar2 = (float)param_1 / fVar1;
      }
      FUN_0058ceb0(0xfae,fVar2);
      return;
    }
    if (param_1 == 10) {
      fVar4 = (float10)FUN_0065d270(0,10);
      iVar3 = FUN_005f1910(10);
      fVar1 = 0.0;
      if (0.0 <= (float)iVar3 + (float)fVar4) {
        fVar4 = (float10)FUN_0065d270(0,10);
        iVar3 = FUN_005f1910(10);
        fVar1 = (float)iVar3 + (float)fVar4;
      }
      fVar2 = 0.0;
      if (fVar1 != 0.0) {
        iVar3 = (**(code **)(*DAT_00b333c4 + 0x284))(10);
        if (iVar3 < 0) {
          param_1 = 0;
        }
        else {
          param_1 = (**(code **)(*DAT_00b333c4 + 0x284))(10);
        }
        fVar2 = (float)param_1 / fVar1;
      }
      FUN_0058ceb0(0xfae,fVar2);
      return;
    }
  }
  return;
}



void FUN_005a5e00(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00589b70(0x3ec);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_00588bd0(0xfb2);
    FUN_0058ceb0(0xfb3,(float)fVar2);
    FUN_0058ceb0(0xfb2,(float)param_1);
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      iVar1 = FUN_005898f0();
      if (*(int *)(iVar1 + 0x58) != 0) {
        iVar1 = FUN_005898f0();
        *(undefined4 *)(*(int *)(iVar1 + 0x58) + 0x58) = 0xbf800000;
      }
    }
  }
  return;
}



void FUN_005a5e80(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00589b70(0x3ec);
  if (iVar2 != 0) {
    cVar1 = FUN_0057a650();
    if (cVar1 == '\0') {
      FUN_0057a480(1,0);
      fVar3 = (float10)FUN_00588bd0(0xfb2);
      FUN_0058ceb0(0xfb3,(float)fVar3);
      FUN_0058ceb0(0xfb2,0x3f800000);
      FUN_005898f0();
      FUN_0057de50(0xe);
    }
  }
  return;
}



void FUN_005a5ef0(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00589b70(0x3ec);
  if (iVar2 != 0) {
    cVar1 = FUN_0057a310();
    if (cVar1 == '\0') {
      FUN_0057c7c0(1,0);
      fVar3 = (float10)FUN_00588bd0(0xfb2);
      FUN_0058ceb0(0xfb3,(float)fVar3);
      FUN_0058ceb0(0xfb2,0x40000000);
      FUN_005898f0();
      FUN_0057de50(0xe);
    }
  }
  return;
}



void FUN_005a5f60(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00589b70(0x3ec);
  if (iVar2 != 0) {
    cVar1 = FUN_0057a1c0();
    if (cVar1 == '\0') {
      FUN_0057c5f0(1,0);
      fVar3 = (float10)FUN_00588bd0(0xfb2);
      FUN_0058ceb0(0xfb3,(float)fVar3);
      FUN_0058ceb0(0xfb2,0x40400000);
      FUN_005898f0();
      FUN_0057de50(0xe);
    }
  }
  return;
}



void FUN_005a5fd0(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00589b70(0x3ec);
  if (iVar2 != 0) {
    cVar1 = FUN_00579fc0();
    if (cVar1 == '\0') {
      FUN_0057c420(1,0);
      fVar3 = (float10)FUN_00588bd0(0xfb2);
      FUN_0058ceb0(0xfb3,(float)fVar3);
      FUN_0058ceb0(0xfb2,0x40800000);
      FUN_005898f0();
      FUN_0057de50(0xe);
    }
  }
  return;
}



void FUN_005a6040(char param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((((DAT_00b333c4 != 0) && (*(char *)(DAT_00b333c4 + 0x5c0) == '\0')) &&
      (iVar2 = FUN_00589b70(0x3ec), iVar2 != 0)) && (iVar2 = FUN_005898f0(), iVar2 != 0)) {
    uVar3 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
    iVar2 = FUN_009832e6(uVar3);
    if (iVar2 != 0) {
      if (param_1 == '\0') {
        FUN_0058ceb0(0xfb1,0x3f800000);
        if ((*(int *)(iVar2 + 0x24) != 1) && (*(int *)(iVar2 + 0x24) != 8)) {
          if (param_2 == '\0') {
            FUN_00584390();
          }
          else {
            FUN_0058ceb0(0xfa1,0x40000000);
          }
        }
      }
      else {
        uVar3 = 0x3eb;
        FUN_00587b20(1,0x3eb);
        cVar1 = FUN_005878b0(uVar3);
        if (cVar1 == '\0') {
          uVar3 = 0x3ea;
          FUN_00587b20(1,0x3ea);
          cVar1 = FUN_005878b0(uVar3);
          if (cVar1 == '\0') {
            uVar3 = 0x3fe;
            FUN_00587b20(1,0x3fe);
            cVar1 = FUN_005878b0(uVar3);
            if (cVar1 == '\0') {
              uVar3 = 0x3ff;
              FUN_00587b20(1,0x3ff);
              cVar1 = FUN_005878b0(uVar3);
              if (cVar1 == '\0') {
                if (((*(int *)(iVar2 + 0x24) != 4) && (*(int *)(iVar2 + 0x24) != 2)) &&
                   (iVar2 = FUN_00578fe0(), iVar2 != 0)) {
                  if (param_2 != '\0') {
                    FUN_0058ceb0(0xfa1,0x3f800000);
                    FUN_0058ceb0(0xfb1,0x3f800000);
                    return;
                  }
                  FUN_00584740();
                }
                FUN_0058ceb0(0xfb1,0x3f800000);
                return;
              }
            }
          }
        }
        FUN_0058ceb0(0xfb1,0);
        if (*(int *)(iVar2 + 0x24) == 1) {
          return;
        }
        if (*(int *)(iVar2 + 0x24) == 8) {
          return;
        }
        if (param_2 == '\0') {
          FUN_00584390();
          return;
        }
      }
      FUN_0058ceb0(0xfa1,0x40000000);
    }
  }
  return;
}



void FUN_005a6220(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x38) != 0) {
    if (((param_1 != 0) && (DAT_00b333c4 != 0)) && (*(int **)(DAT_00b333c4 + 0x58) != (int *)0x0)) {
      iVar1 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xec))(1);
      if (iVar1 != 0) {
        iVar1 = FUN_00485c00();
        FUN_0058ceb0(0xfae,(float)iVar1);
        uVar2 = FUN_0048f6a0(iVar1);
        FUN_0058ced0(0xfaf,uVar2);
        return;
      }
    }
    FUN_0058ceb0(0xfae,0);
  }
  return;
}



void FUN_005a62b0(undefined4 param_1)

{
  FUN_0058ced0(0xfe6,param_1);
  return;
}



float10 FUN_005a62d0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_10;
  
  local_10 = 0.0;
  fVar1 = param_2[1];
  fVar2 = param_1[1];
  if (fVar1 - fVar2 == 0.0) {
    if (*param_2 - *param_1 < 0.0) {
      local_10 = 3.1415927;
    }
  }
  else {
    fVar3 = (float10)FUN_009870a0();
    local_10 = (float)fVar3;
    if (fVar1 - fVar2 < 0.0) {
      local_10 = local_10 + 3.1415927;
    }
    if (local_10 < 0.0) {
      fVar3 = (float10)FUN_00982bfa();
      return (float10)((float)fVar3 * 57.295776);
    }
  }
  if (NAN(local_10) || 6.2831855 < local_10 == (local_10 == 6.2831855)) {
    return (float10)(local_10 * 57.295776);
  }
  fVar3 = (float10)FUN_00982bfa();
  return (float10)((float)fVar3 * 57.295776);
}



/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_005a63f0(int param_1,int param_2)

{
  char cVar1;
  float local_10;
  float local_c [3];
  
  local_10 = 0.0;
  local_c[0] = 0.0;
  local_c[1] = 0.0;
  local_c[2] = 0.0;
  cVar1 = FUN_0068d9f0();
  if (cVar1 == '\0') {
    local_10 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 4);
  }
  else {
    FUN_00662aa0(*(undefined4 *)(param_1 + 8),&local_10,local_c + 1);
  }
  cVar1 = FUN_0068d9f0();
  if (cVar1 == '\0') {
    local_c[0] = *(float *)(param_2 + 0x1c) - *(float *)(param_2 + 4);
  }
  else {
    FUN_00662aa0(*(undefined4 *)(param_2 + 8),local_c,local_c + 2);
  }
  if (local_c[0] < local_10) {
    return 0xffffffff;
  }
  if (local_c[0] == local_10) {
    return 0;
  }
  return 1;
}



void FUN_005a64b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00589b70(0x3ec);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
    iVar1 = FUN_009832e6(uVar2);
    if (iVar1 != 0) {
      if ((char)param_1[3] != '\0') {
        if (*param_1 == DAT_00b3b340) {
          return;
        }
        if ((char)param_1[3] != '\0') {
          DAT_00b3b340 = *param_1;
        }
      }
      if (param_1[1] != 0) {
        FUN_0058ced0(0xfb6,param_1[1]);
        uVar5 = 0x3e800000;
        uVar2 = 0x43400000;
        fVar4 = (float10)FUN_00588bd0(0xfb5);
        FUN_00589980(0xfb5,(float)fVar4,uVar2,uVar5);
        DVar3 = GetTickCount();
        *(DWORD *)(iVar1 + 0x74) = DVar3 + 5000;
        return;
      }
      uVar5 = 0x3e800000;
      uVar2 = 0;
      fVar4 = (float10)FUN_00588bd0(0xfb5);
      FUN_00589980(0xfb5,(float)fVar4,uVar2,uVar5);
      *(undefined4 *)(iVar1 + 0x74) = 0;
    }
  }
  return;
}



void FUN_005a65b0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_00589b70(0x3ec);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_005898f0();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_005898f0();
  if ((char)param_1[1] != '\0') {
    iVar2 = *param_1;
    if (iVar2 != DAT_00b3b344) {
      if (iVar2 == 0) {
        DAT_00b3b344 = iVar2;
        return;
      }
      DAT_00b3b344 = iVar2;
      iVar2 = FUN_004d7730();
      if (iVar2 == 0) {
        return;
      }
      FUN_004d7730();
      uVar3 = FUN_00412ab0();
      FUN_0058ced0(0xfb6,uVar3);
      uVar6 = 0x3e800000;
      uVar3 = 0x43400000;
      fVar5 = (float10)FUN_00588bd0(0xfb5);
      FUN_00589980(0xfb5,(float)fVar5,uVar3,uVar6);
      DVar4 = GetTickCount();
      *(DWORD *)(iVar1 + 0x74) = DVar4 + 5000;
      return;
    }
    if ((char)param_1[1] != '\0') goto LAB_005a668d;
  }
  if (*param_1 == DAT_00b3b344) {
    DAT_00b3b344 = 0;
    return;
  }
LAB_005a668d:
  if (*(char *)((int)param_1 + 5) != '\0') {
    DAT_00b3b344 = *param_1;
  }
  return;
}



void FUN_005a66a0(void)

{
  undefined4 uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(in_ECX + 0x84) != 0) {
    do {
      uVar1 = (**(code **)(*(int *)(in_ECX + 0x78) + 4))(uVar2);
      FUN_00401f20(uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x84));
  }
  return;
}



void FUN_005a66e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0358;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6bed8;
  uVar3 = 0;
  local_4 = 0;
  if (in_ECX[3] != 0) {
    do {
      uVar2 = FUN_005a5810(uVar3);
      uVar3 = uVar3 + 1;
      FUN_00401f20(uVar2,uVar1);
    } while (uVar3 < (uint)in_ECX[3]);
  }
  *in_ECX = &PTR__scalar_deleting_destructor__00a6be98;
  FUN_00401f20(in_ECX[1],uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005a6760(byte param_1)

{
  FUN_005a66e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005a6780(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0388;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar1);
  *in_ECX = &PTR_FUN_00a6bee4;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x1f] = 0;
  *(undefined1 *)(in_ECX + 0x24) = 0;
  in_ECX[0x23] = 1;
  in_ECX[0x1e] = &PTR_FUN_00a6bed8;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0x1c] = 0x3f19999a;
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
  in_ECX[0x1d] = 0;
  in_ECX[0x23] = 8;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005a6850(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c03c3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6bee4;
  local_4 = 1;
  FUN_005a66a0(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_005a66e0();
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005a6940(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 == 0x5b) {
    FUN_00582160(0,1);
    FUN_0057d7f0();
    FUN_0057d7f0();
    iVar1 = FUN_009828c0();
    FUN_0057d7a0();
    iVar2 = FUN_009828c0();
    FUN_005a5900((float)iVar2 - *(float *)(in_ECX + 0x68),*(float *)(in_ECX + 0x6c) - (float)iVar1);
    FUN_0057d7a0();
    iVar1 = FUN_009828c0();
    *(float *)(in_ECX + 0x68) = (float)iVar1;
    FUN_0057d7f0();
    FUN_0057d7f0();
    iVar1 = FUN_009828c0();
    *(float *)(in_ECX + 0x6c) = (float)iVar1;
  }
  return;
}



void FUN_005a6a20(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  return;
}



void FUN_005a6a40(uchar *param_1)

{
  int iVar1;
  
  FUN_0058ced0(0xfe6,param_1);
  iVar1 = __mbscmp(param_1,DAT_00b33d84);
  FUN_005a6220(iVar1);
  return;
}



void FUN_005a6a80(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3ec);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_005898f0();
      FUN_005a66a0();
      return;
    }
  }
  return;
}



uint FUN_005a6ab0(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0xc);
  if (*(uint *)(in_ECX + 8) <= uVar1) {
    FUN_00452910(*(int *)(in_ECX + 0x14) + uVar1);
  }
  FUN_00446c50(uVar1,param_1);
  return uVar1;
}



void FUN_005a6ae0(byte param_1)

{
  FUN_005a6850();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005a6b00(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float fStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2a48;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00582160(0,1,uVar3);
  if (iVar4 == 0) {
LAB_005a6dbe:
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  iVar4 = FUN_00582160(0,1,uVar3);
  if (*(int *)(iVar4 + 0x60) == 0) goto LAB_005a6dbe;
  puVar5 = (undefined4 *)FUN_00589b70(0x3ec);
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(1);
  }
  FUN_00582160(0,1,uVar3);
  fVar12 = (float10)thunk_FUN_00584980();
  fStack_14 = (float)fVar12;
  uVar6 = FUN_00590420("Data\\Menus\\Main\\hud_main_menu.xml");
  piVar7 = (int *)FUN_005898f0();
  if (piVar7 == (int *)0x0) goto LAB_005a6dbe;
  iVar4 = (**(code **)(*piVar7 + 0x34))();
  if (iVar4 != 0x3ec) {
    if (piVar7[1] != 0) {
      (**(code **)*piVar7)(1);
    }
    goto LAB_005a6dbe;
  }
  uVar8 = FUN_009832e6(uVar6,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar8);
  iVar4 = FUN_009832e6(piVar7,0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
  cVar2 = FUN_005a55a0();
  if (cVar2 == '\0') {
    FUN_00404ec0("Hud Menu Creation Failed... Are your menu and art resources up to date?");
  }
  fVar12 = (float10)FUN_00588bd0(0xfa5);
  if (fVar12 != (float10)6006.0) {
    fVar12 = (float10)FUN_00588bd0(0xfa5);
    if (fVar12 != (float10)102.0) goto LAB_005a6c4d;
  }
  FUN_0058ceb0(0xfab,fStack_14);
LAB_005a6c4d:
  FUN_005a5b50(8);
  FUN_005a5b50(9);
  FUN_005a5b50(10);
  bVar1 = false;
  if ((DAT_00b333c4 != 0) && (*(int **)(DAT_00b333c4 + 0x58) != (int *)0x0)) {
    iVar9 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 8))();
    if (iVar9 == 0) {
      iVar9 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xec))(1);
      if (iVar9 != 0) {
        pcVar10 = (char *)FUN_004702d0(*(undefined4 *)(iVar9 + 8),DAT_00b333c4);
        pcVar11 = pcVar10;
        do {
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        if (pcVar11 != pcVar10 + 1) {
          fStack_14 = 0.0;
          uStack_10 = 0;
          uStack_e = 0;
          uStack_4 = 0;
          FUN_00402e30(&fStack_14,"%s\\%s","Icons",pcVar10);
          FUN_0057b190(fStack_14);
          bVar1 = true;
          uStack_4 = 0xffffffff;
          FUN_00402da0();
        }
      }
    }
  }
  FUN_0058ceb0(0xfb0,(float)_DAT_00b37bc0);
  FUN_0058ceb0(0xfb1,(float)_DAT_00b37bc8);
  if (!bVar1) {
    FUN_0057b190(DAT_00b33d84);
  }
  fVar12 = (float10)FUN_00588bd0(0xfb4);
  *(float *)(iVar4 + 0x70) = (float)((float10)1 - fVar12 / (float10)100.0);
  FUN_005a5900(0,0);
  FUN_00585190(1);
  *unaff_FS_OFFSET = local_c;
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a6de0(void)

{
  byte bVar1;
  float fVar2;
  bool bVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  DWORD DVar11;
  undefined4 uVar12;
  int in_ECX;
  float unaff_EBX;
  int iVar13;
  uint uVar14;
  int *unaff_FS_OFFSET;
  float10 fVar15;
  undefined4 *puStack_6c;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009c0400;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  iVar6 = FUN_006ecc80();
  if (iVar6 != 0) {
    if (*(int *)(in_ECX + 0x54) != 0) {
      FUN_0058ceb0();
    }
    if (*(int *)(in_ECX + 0x4c) != 0) {
      cVar5 = FUN_005790e0();
      if (((cVar5 == '\0') && (cVar5 = FUN_005790e0(), cVar5 == '\0')) &&
         (cVar5 = FUN_005790e0(), cVar5 == '\0')) {
        FUN_005790e0();
      }
      FUN_0058ceb0();
    }
    iVar6 = *(int *)(in_ECX + 0x44);
    if (iVar6 != 0) {
      puVar7 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
      uStack_28 = *puVar7;
      uStack_24 = puVar7[1];
      uStack_20 = puVar7[2];
      FUN_006ecc80();
      fVar15 = (float10)FUN_004cce00();
      uStack_38 = (double)fVar15;
      (**(code **)(*DAT_00b333c4 + 0x1e0))();
      FUN_009828c0();
      FUN_0058ceb0();
      piVar8 = (int *)FUN_0065d260();
      puStack_6c = *(undefined4 **)(iVar6 + 0x34);
      while ((piVar8 != (int *)0x0 && (iVar13 = *piVar8, iVar13 != 0))) {
        piVar8 = (int *)piVar8[1];
        if (((uint)(*(int **)(iVar13 + 4))[2] >> 0xb & 1) == 0) {
          (**(code **)(**(int **)(iVar13 + 4) + 0x174))();
          fVar15 = (float10)FUN_00982c30();
          bVar3 = false;
          fVar2 = ABS((float)fVar15);
          cVar5 = FUN_0042b310();
          if ((cVar5 == '\0') && (fVar2 < (float)_DAT_00b37bc0)) {
            FUN_0042b320();
            (**(code **)(**(int **)(iVar13 + 4) + 0x40))();
            bVar3 = true;
          }
          cVar5 = FUN_0042b340();
          if ((cVar5 != '\0') || ((float)_DAT_00b37bc0 <= fVar2)) {
            if (bVar3) goto LAB_005a70b3;
LAB_005a7160:
            cVar5 = FUN_0042b340();
            if ((cVar5 != '\0') && (cVar5 = (**(code **)(*DAT_00b333c4 + 0x198))(), cVar5 == '\0'))
            {
              uStack_44 = *(undefined4 *)(iVar13 + 4);
              iStack_40 = CONCAT31(iStack_40._1_3_,1);
              if ((float)_DAT_00b37bc0 <= fVar2) {
                iStack_40 = (uint)iStack_40._1_3_ << 8;
              }
              iStack_40._0_2_ = (ushort)(byte)iStack_40;
              FUN_005a65b0();
            }
          }
          else {
            FUN_0042b350();
            (**(code **)(**(int **)(iVar13 + 4) + 0x40))();
LAB_005a70b3:
            cVar5 = (**(code **)(*DAT_00b333c4 + 0x198))();
            if (cVar5 != '\0') goto LAB_005a7160;
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_46 = 0;
            uStack_c = 0;
            FUN_00412ab0();
            FUN_00402e30(&uStack_4c,"%s %s.");
            uVar12 = uStack_4c;
            FUN_0057acc0(uStack_4c,0);
            dVar4 = uStack_38;
            DAT_00b333c4[0x19d] = DAT_00b333c4[0x19d] + 1;
            uStack_38._6_2_ = SUB82(dVar4,6);
            uStack_38._0_6_ = CONCAT15(1,(uint5)*(uint *)(iVar13 + 4));
            FUN_005a65b0(&uStack_38);
            uStack_c = 0xffffffff;
            FUN_00401f20(uVar12);
            uStack_4c = 0;
            uStack_46 = 0;
            uStack_48 = 0;
          }
          if (fVar2 <= (float)_DAT_00b37bc8) {
            if (puStack_6c == (undefined4 *)0x0) {
              iVar10 = FUN_00585410(iVar6);
            }
            else {
              iVar10 = puStack_6c[2];
              puStack_6c = (undefined4 *)*puStack_6c;
            }
            if (iVar10 != 0) {
              FUN_0042b310();
              (**(code **)(**(int **)(iVar13 + 4) + 0x174))();
              FUN_005a62d0();
              FUN_00412ab0();
              FUN_004028d0();
              FUN_0058ceb0();
              FUN_0058ceb0();
              FUN_0058ceb0();
              FUN_0042b370();
              FUN_0058ceb0();
              FUN_0042b340();
              FUN_0058ceb0();
              FUN_0058ceb0();
              FUN_0058ceb0();
              FUN_0058ceb0();
              FUN_0058ceb0();
              FUN_0058ceb0();
            }
          }
        }
      }
      piVar8 = (int *)FUN_0065d830();
      iVar13 = 0;
      *(int **)(in_ECX + 100) = piVar8;
      while ((piVar8 != (int *)0x0 && (*piVar8 != 0))) {
        piVar9 = *(int **)(*piVar8 + 0x10);
        piVar8 = (int *)piVar8[1];
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)FUN_0052b440();
        }
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0x174))();
          FUN_00982c30();
          if (puStack_6c == (undefined4 *)0x0) {
            iVar10 = FUN_00585410(iVar6);
          }
          else {
            iVar10 = puStack_6c[2];
            puStack_6c = (undefined4 *)*puStack_6c;
          }
          if (iVar10 != 0) {
            (**(code **)(*piVar9 + 0x174))();
            fVar15 = (float10)FUN_005a62d0();
            uStack_38 = (double)fVar15;
            FUN_006ecc80();
            FUN_004cce00();
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_46 = 0;
            iVar13 = iVar13 + 1;
            uStack_c = 1;
            FUN_00402e30(&uStack_4c);
            FUN_004028d0(uStack_4c,0);
            FUN_0058a020();
            FUN_0058ceb0();
            FUN_0058ceb0();
            FUN_0058ceb0();
            FUN_0058ceb0();
            FUN_0058ceb0();
            FUN_0058ceb0();
            FUN_0058ceb0();
            FUN_0058ceb0();
            FUN_0058ceb0();
            FUN_0058ceb0();
            uStack_c = 0xffffffff;
            FUN_00401f20();
            uStack_4c = 0;
            uStack_46 = 0;
            uStack_48 = 0;
          }
        }
      }
      if (DAT_00b333c4[0x18e] != 0) {
        if (puStack_6c == (undefined4 *)0x0) {
          iVar6 = FUN_00585410(iVar6);
        }
        else {
          iVar6 = puStack_6c[2];
          puStack_6c = (undefined4 *)*puStack_6c;
        }
        if (iVar6 != 0) {
          if ((int *)DAT_00b333c4[399] == (int *)0x0) {
            puVar7 = (undefined4 *)FUN_005a5790();
            uStack_44 = *puVar7;
            iStack_40 = puVar7[1];
            uStack_3c = puVar7[2];
          }
          else {
            puVar7 = (undefined4 *)(**(code **)(*(int *)DAT_00b333c4[399] + 0x174))();
            uStack_44 = *puVar7;
            iStack_40 = puVar7[1];
            uStack_3c = puVar7[2];
          }
          FUN_006ecc80();
          fVar15 = (float10)FUN_004cce00();
          uStack_38 = (double)(fVar15 * (float10)57.2957763671875);
          FUN_005a62d0();
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_46 = 0;
          uStack_c = 2;
          FUN_00402e30(&uStack_4c,"player_target_%i",iVar13 + 1);
          FUN_00402d70(&uStack_4c);
          FUN_0058a020();
          FUN_0058ceb0();
          FUN_0058ceb0();
          FUN_0058ceb0();
          FUN_0058ceb0();
          FUN_0058ceb0();
          FUN_0058ceb0();
          FUN_0058ceb0();
          FUN_0058ceb0();
          uStack_c = 0xffffffff;
          FUN_00401f20();
        }
      }
      FUN_0058ceb0();
      while (puStack_6c != (undefined4 *)0x0) {
        puStack_6c = (undefined4 *)*puStack_6c;
        FUN_0058ceb0();
      }
    }
    bVar1 = *(byte *)(in_ECX + 0x90);
    if (bVar1 != 0) {
      uVar14 = 0;
      if (*(int *)(in_ECX + 0x84) != 0) {
        do {
          if (*(char *)(in_ECX + 0x90) == '\0') break;
          fVar15 = (float10)FUN_00588bd0();
          if (fVar15 == (float10)0.0) {
            (**(code **)(*(int *)(in_ECX + 0x78) + 4))();
            FUN_00401f20();
            *(char *)(in_ECX + 0x90) = *(char *)(in_ECX + 0x90) + -1;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)(in_ECX + 0x84));
      }
      if ((uint)bVar1 != (uint)*(byte *)(in_ECX + 0x90) &&
          -1 < (int)((uint)bVar1 - (uint)*(byte *)(in_ECX + 0x90))) {
        FUN_005a56f0();
        uVar14 = 0;
        if (*(int *)(in_ECX + 0x84) != 0) {
          do {
            FUN_0058ceb0();
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(in_ECX + 0x84));
        }
      }
    }
    if ((*(int *)(in_ECX + 0x74) != 0) &&
       (DVar11 = GetTickCount(), *(uint *)(in_ECX + 0x74) <= DVar11)) {
      uStack_c = 3;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      FUN_005a64b0();
      uStack_c = 0xffffffff;
      FUN_00401f20();
    }
    fVar15 = (float10)FUN_0065d270();
    if ((float10)0.0 <= fVar15) {
      fVar15 = (float10)FUN_0065d270();
    }
    else {
      fVar15 = (float10)0;
    }
    iVar6 = FUN_005f1910();
    fVar2 = 0.0;
    if (0.0 <= (float)iVar6 + (float)fVar15) {
      iVar6 = FUN_005f1910();
      fVar2 = (float)iVar6 + (float)fVar15;
    }
    if ((fVar2 != 0.0) && (iVar6 = (**(code **)(*DAT_00b333c4 + 0x284))(), -1 < iVar6)) {
      (**(code **)(*DAT_00b333c4 + 0x284))();
    }
    FUN_0058ceb0();
    fVar15 = (float10)FUN_0065d270();
    if ((float10)0.0 <= fVar15) {
      fVar15 = (float10)FUN_0065d270();
    }
    else {
      fVar15 = (float10)0;
    }
    iVar6 = FUN_005f1910();
    fVar2 = 0.0;
    if (0.0 <= (float)iVar6 + (float)fVar15) {
      iVar6 = FUN_005f1910();
      fVar2 = (float)iVar6 + (float)fVar15;
    }
    if ((fVar2 != 0.0) && (iVar6 = (**(code **)(*DAT_00b333c4 + 0x284))(), -1 < iVar6)) {
      (**(code **)(*DAT_00b333c4 + 0x284))();
    }
    FUN_0058ceb0();
    fVar15 = (float10)FUN_0065d270();
    if ((float10)0.0 <= fVar15) {
      fVar15 = (float10)FUN_0065d270();
    }
    else {
      fVar15 = (float10)0;
    }
    iVar6 = FUN_005f1910();
    fVar2 = 0.0;
    if (0.0 <= (float)iVar6 + (float)fVar15) {
      iVar6 = FUN_005f1910();
      fVar2 = (float)iVar6 + (float)fVar15;
    }
    if ((fVar2 != 0.0) && (iVar6 = (**(code **)(*DAT_00b333c4 + 0x284))(), -1 < iVar6)) {
      (**(code **)(*DAT_00b333c4 + 0x284))();
    }
    FUN_0058ceb0();
    iVar6 = (**(code **)(*(int *)DAT_00b333c4[0x16] + 0xec))();
    if (iVar6 != 0) {
      FUN_00484850();
    }
    FUN_0058ceb0(0xfb0);
    iVar13 = (**(code **)(*(int *)DAT_00b333c4[0x16] + 0xf4))();
    if ((((iVar13 != 0) && (iVar6 != 0)) && (*(int *)(iVar6 + 8) != 0)) &&
       (*(char *)(*(int *)(iVar6 + 8) + 0x90) == '\x05')) {
      iVar6 = FUN_004b2460();
      unaff_EBX = (float)iVar6;
    }
    FUN_0058ceb0(0xfb1,unaff_EBX);
    iVar6 = DAT_00b333c4[0x17];
    uVar12 = FUN_0065d4a0(0,0,0);
    (**(code **)(iVar6 + 0x1c))(uVar12);
    FUN_0058ceb0();
  }
  *unaff_FS_OFFSET = local_14;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005a7cd0(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int in_ECX;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  float fVar10;
  int *local_110;
  float local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_110;
  if (((param_1 != 0) && (*(float *)(param_1 + 0x1c) != 0.0)) &&
     (cVar2 = FUN_0068d9f0(), cVar2 == '\0')) {
    uVar7 = 0;
    if (*(int *)(in_ECX + 0x84) != 0) {
      local_110 = *(int **)(in_ECX + 0x7c);
      do {
        if (((*local_110 != 0) && (piVar3 = *(int **)(*local_110 + 4), piVar3 != (int *)0x0)) &&
           (iVar5 = *piVar3, iVar5 != 0)) {
          iVar5 = *(int *)(iVar5 + 0xc);
          iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c);
          if ((*(int *)(*(int *)(iVar5 + 0x1c) + 0x98) == *(int *)(iVar1 + 0x98)) &&
             (((*(uint *)(iVar1 + 0x58) & 0x180000) == 0 ||
              (*(int *)(iVar5 + 0x14) == *(int *)(*(int *)(param_1 + 0xc) + 0x14))))) break;
        }
        local_110 = local_110 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(in_ECX + 0x84));
    }
    if (param_2 == '\0') {
      if (uVar7 == *(uint *)(in_ECX + 0x84)) {
        if (7 < uVar7) {
          return;
        }
        piVar3 = (int *)FUN_00401f00(8);
        local_110 = piVar3;
        puVar4 = (undefined4 *)FUN_00401f00(8);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        piVar3[1] = (int)puVar4;
        iVar5 = FUN_00585410(*(undefined4 *)(in_ECX + 0x50),"icon_template",0);
        *piVar3 = iVar5;
        puVar6 = *(undefined1 **)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x48);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_00a2f7ec;
        }
        _sprintf(local_108,"%s\\%s","Icons",puVar6);
        FUN_0058ced0(0xfe6,local_108);
        fVar10 = (float)(int)uVar7;
        if ((int)uVar7 < 0) {
          fVar10 = fVar10 + 4.2949673e+09;
        }
        local_10c = (float)uVar7;
        FUN_0058ceb0(0xfae,fVar10);
        uVar7 = FUN_005a6ab0(&local_110);
        FUN_0058fba0(0);
      }
      for (piVar3 = *(int **)(*(int *)(*(int *)(in_ECX + 0x7c) + uVar7 * 4) + 4);
          piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if (*piVar3 == param_1) goto LAB_005a7efe;
      }
      FUN_00416650(param_1,FUN_005a63f0);
LAB_005a7efe:
      if (param_1 == **(int **)(*(int *)(*(int *)(in_ECX + 0x7c) + uVar7 * 4) + 4)) {
        iVar5 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
        if (iVar5 == 1) {
          FUN_0058ceb0(0xfaf,0xbf800000);
        }
        else {
          local_110 = (int *)(*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 4));
          local_10c = *(float *)(param_1 + 0x1c);
          FUN_0058ceb0(0xfaf,local_110);
          uVar9 = FUN_005894f0(**(undefined4 **)(*(int *)(in_ECX + 0x7c) + uVar7 * 4),0x11,0,
                               &PTR_PTR_00b13240,&PTR_PTR_00b13df4,0);
          iVar5 = FUN_009832e6(uVar9);
          if (iVar5 != 0) {
            *(float *)(iVar5 + 0x58) =
                 (1.0 - (float)local_110 / local_10c) *
                 *(float *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x44) + 0x14) + 4) + 0x18);
          }
        }
      }
    }
    else if (uVar7 < *(uint *)(in_ECX + 0x84)) {
      FUN_0065c620(param_1);
      piVar3 = *(int **)(*(int *)(*(int *)(in_ECX + 0x7c) + uVar7 * 4) + 4);
      if ((piVar3[1] == 0) && (*piVar3 == 0)) {
        fVar8 = (float10)FUN_00588bd0(0xfdb);
        fVar10 = (float)fVar8;
        uVar9 = 0;
        fVar8 = (float10)FUN_00588bd0(0xfa7);
        FUN_00589980(0xfa7,(float)fVar8,uVar9,fVar10);
        *(char *)(in_ECX + 0x90) = *(char *)(in_ECX + 0x90) + '\x01';
      }
    }
  }
  return;
}



void FUN_005a7fe0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6c004;
  DAT_00b3b361 = 0;
  DAT_00b3b362 = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005a8000(int param_1)

{
  float10 fVar1;
  
  if (param_1 != 0) {
    DAT_00b3b350 = FUN_005894f0(param_1,1);
    DAT_00b3b358 = FUN_005894f0(param_1,2);
    DAT_00b3b354 = FUN_005894f0(param_1,3);
    if (((DAT_00b3b350 != 0) && (DAT_00b3b358 != 0)) && (DAT_00b3b354 != 0)) {
      fVar1 = (float10)FUN_00588bd0(0xfb1);
      _DAT_00b140bc = (float)fVar1;
      fVar1 = (float10)FUN_00588bd0(0xfb7);
      _DAT_00b140c0 = (float)fVar1;
      fVar1 = (float10)FUN_00588bd0(0xfb7);
      _DAT_00b140c4 = (float)fVar1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a80d0(void)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_006762b0(DAT_00b333c4,0);
  switch(uVar1) {
  case 0:
    _DAT_00b140b8 = 0x42480000;
    uVar3 = 0x42480000;
    uVar1 = _DAT_00b140c4;
    fVar2 = (float10)FUN_00588bd0(0xfb6);
    FUN_00589980(0xfb6,(float)fVar2,uVar3,uVar1);
    DAT_00b3b368 = 0;
    DAT_00b3b361 = 1;
    return;
  case 1:
    _DAT_00b140b8 = 0x42480000;
    uVar3 = 0x42480000;
    uVar1 = _DAT_00b140c4;
    fVar2 = (float10)FUN_00588bd0(0xfb6);
    FUN_00589980(0xfb6,(float)fVar2,uVar3,uVar1);
    DAT_00b3b361 = 1;
    DAT_00b3b368 = 1;
    return;
  case 2:
    _DAT_00b140b8 = 0x42480000;
    uVar3 = 0x42480000;
    uVar1 = _DAT_00b140c4;
    fVar2 = (float10)FUN_00588bd0(0xfb6);
    FUN_00589980(0xfb6,(float)fVar2,uVar3,uVar1);
    DAT_00b3b368 = 2;
    DAT_00b3b361 = 1;
    return;
  case 3:
    _DAT_00b140b8 = 0x43480000;
    uVar3 = 0x43480000;
    uVar1 = _DAT_00b140c4;
    fVar2 = (float10)FUN_00588bd0(0xfb6);
    FUN_00589980(0xfb6,(float)fVar2,uVar3,uVar1);
    DAT_00b3b368 = 3;
    DAT_00b3b361 = 1;
  }
  return;
}



undefined2 FUN_005a8250(void)

{
  return 4;
}



undefined4 FUN_005a8260(void)

{
  return DAT_00b3b350;
}



undefined4 FUN_005a8270(void)

{
  return DAT_00b3b354;
}



undefined4 FUN_005a8280(void)

{
  return DAT_00b3b358;
}



void FUN_005a82a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6c004;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a82d0(void)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_10;
  
  if ((DAT_00b3b350 != 0) && (DAT_00b3b354 != 0)) {
    cVar4 = FUN_005e0550();
    if ((cVar4 == '\0') || (cVar4 = FUN_00578f60(), cVar4 != '\0')) {
      if (DAT_00b3b361 != '\0') {
        uVar10 = 0;
        uVar9 = _DAT_00b140c4;
        fVar6 = (float10)FUN_00588bd0(0xfb6);
        FUN_00589980(0xfb6,(float)fVar6,uVar10,uVar9);
        DAT_00b3b361 = '\0';
      }
    }
    else {
      if (*(char *)(DAT_00b333c4 + 0x588) == '\0') {
        uVar9 = 0x437f0000;
      }
      else {
        uVar9 = 0;
      }
      uVar10 = _DAT_00b140bc;
      fVar6 = (float10)FUN_00588bd0(0xfb0);
      FUN_00589980(0xfb0,(float)fVar6,uVar9,uVar10);
      uVar9 = _DAT_00b140b8;
      uVar10 = _DAT_00b140c4;
      fVar6 = (float10)FUN_00588bd0(0xfb6);
      FUN_00589980(0xfb6,(float)fVar6,uVar9,uVar10);
      DAT_00b3b361 = '\x01';
      FUN_005a80d0();
    }
  }
  if (DAT_00b3b358 == 0) {
    return;
  }
  if (DAT_00b14e90 != '\0') {
    return;
  }
  bVar3 = false;
  cVar4 = FUN_00578f60();
  if (cVar4 != '\0') goto LAB_005a86a7;
  local_10 = *(float *)(DAT_00b3b358 + 0x58);
  if (local_10 < 0.0) {
    local_10 = 0.0;
  }
  if (DAT_00b3b364 == (int *)0x0) {
LAB_005a848f:
    uVar10 = 0;
    uVar9 = _DAT_00b140c0;
    fVar6 = (float10)FUN_00588bd0(0xfb6);
    FUN_00589980(0xfb6,(float)fVar6,uVar10,uVar9);
    DAT_00b3b362 = 0;
    if (DAT_00b3b364 == (int *)0x0) goto LAB_005a86a7;
  }
  else {
    cVar4 = (**(code **)(*DAT_00b3b364 + 0x198))(0);
    if (cVar4 != '\0') {
      uVar10 = 0;
      uVar9 = _DAT_00b140c0;
      fVar6 = (float10)FUN_00588bd0(0xfb6);
      FUN_00589980(0xfb6,(float)fVar6,uVar10,uVar9);
      DAT_00b3b362 = 0;
    }
    if (DAT_00b3b364 == (int *)0x0) goto LAB_005a848f;
  }
  if ((int *)DAT_00b3b364[0x16] == (int *)0x0) {
    fVar6 = (float10)0;
  }
  else {
    fVar6 = (float10)(**(code **)(*(int *)DAT_00b3b364[0x16] + 0x468))(8);
  }
  fVar7 = (float10)FUN_005ead00(8);
  fVar8 = (float10)(**(code **)(*DAT_00b3b364 + 0x288))(8);
  if ((float)(fVar7 + (float10)(float)fVar6) <= (float)fVar8) goto LAB_005a86a7;
  iVar5 = FUN_009832e6(DAT_00b3b358,0,&PTR_PTR_00b13240,&PTR_PTR_00b13df4,0);
  if (*(int *)(iVar5 + 0x44) == 0) {
    return;
  }
  fVar1 = *(float *)(*(int *)(iVar5 + 0x44) + 0x30) * 0.45;
  fVar2 = fVar1 - ((float)fVar8 / (float)(fVar7 + (float10)(float)fVar6)) * fVar1;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  if (DAT_00b3b360 == '\0') {
    if (fVar2 <= local_10) {
      if ((local_10 <= fVar2) || (local_10 = local_10 - _DAT_00b33e9c, fVar2 <= local_10))
      goto LAB_005a8618;
    }
    else {
      local_10 = local_10 + _DAT_00b33e9c;
      if (local_10 <= fVar2) {
LAB_005a8618:
        fVar2 = local_10;
      }
    }
  }
  else {
    DAT_00b3b360 = '\0';
    fVar2 = 0.0;
  }
  *(float *)(DAT_00b3b358 + 0x58) = fVar2;
  _DAT_00b3b35c = _DAT_00b3b35c - _DAT_00b33e9c;
  if ((_DAT_00b3b35c <= 0.0) || (cVar4 = (**(code **)(*DAT_00b3b364 + 0x198))(0), cVar4 != '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    uVar10 = 0x437f0000;
    uVar9 = _DAT_00b140c0;
    fVar6 = (float10)FUN_00588bd0(0xfb6);
    FUN_00589980(0xfb6,(float)fVar6,uVar10,uVar9);
    DAT_00b3b362 = 1;
  }
LAB_005a86a7:
  cVar4 = FUN_00578f60();
  if (((cVar4 != '\0') || (!bVar3)) && (DAT_00b14e90 == '\0')) {
    uVar10 = 0;
    uVar9 = _DAT_00b140c0;
    fVar6 = (float10)FUN_00588bd0(0xfb6);
    FUN_00589980(0xfb6,(float)fVar6,uVar10,uVar9);
    DAT_00b3b362 = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a8710(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_00b3b350 != 0) && (DAT_00b3b354 != 0)) {
    iVar3 = FUN_00578fe0();
    if (iVar3 == 0x414) {
      FUN_0058ceb0(0xfa1,0x3f800000);
      FUN_0058ceb0(0xfa1,0x3f800000);
      uVar5 = 0x3f800000;
    }
    else {
      FUN_0058ceb0(0xfa1,(float)(byte)((DAT_00b13210 != '\0') + 1));
      FUN_0058ceb0(0xfa1,0x40000000);
      uVar5 = 0x40000000;
    }
    FUN_0058ceb0(0xfa1,uVar5);
    fVar4 = (float10)FUN_005894a0(0xfb0);
    bVar1 = fVar4 == (float10)255.0;
    if (param_1 != 2) {
      bVar1 = 0 < param_1;
    }
    if (fVar4 == (float10)255.0) {
      if (!bVar1) {
        if (DAT_00b13210 != '\0') {
          uVar6 = 0;
          uVar5 = _DAT_00b140bc;
          fVar4 = (float10)FUN_00588bd0(0xfb0);
          FUN_00589980(0xfb0,(float)fVar4,uVar6,uVar5);
        }
        uVar6 = 0;
        uVar5 = _DAT_00b140c4;
        fVar4 = (float10)FUN_00588bd0(0xfb6);
        FUN_00589980(0xfb6,(float)fVar4,uVar6,uVar5);
        DAT_00b3b361 = 1;
        if ((DAT_00b3b358 != 0) && (DAT_00b14e90 == '\0')) {
          uVar6 = 0;
          uVar5 = _DAT_00b140c0;
          fVar4 = (float10)FUN_00588bd0(0xfb6);
          FUN_00589980(0xfb6,(float)fVar4,uVar6,uVar5);
        }
      }
    }
    else if ((bVar1) && (*(char *)(DAT_00b333c4 + 0x5c0) == '\0')) {
      cVar2 = FUN_005e0550();
      if (cVar2 == '\0') {
        uVar6 = 0;
        uVar5 = _DAT_00b140c4;
        fVar4 = (float10)FUN_00588bd0(0xfb6);
        FUN_00589980(0xfb6,(float)fVar4,uVar6,uVar5);
      }
      else {
        uVar5 = _DAT_00b140b8;
        uVar6 = _DAT_00b140c4;
        fVar4 = (float10)FUN_00588bd0(0xfb6);
        FUN_00589980(0xfb6,(float)fVar4,uVar5,uVar6);
      }
      DAT_00b3b361 = cVar2 != '\0';
      if (DAT_00b13210 != '\0') {
        uVar6 = 0x437f0000;
        uVar5 = _DAT_00b140bc;
        fVar4 = (float10)FUN_00588bd0(0xfb0);
        FUN_00589980(0xfb0,(float)fVar4,uVar6,uVar5);
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a89a0(int *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_00b14e90 == '\0') &&
     ((param_1 == (int *)0x0 || (cVar2 = (**(code **)(*param_1 + 0x198))(0), cVar2 == '\0')))) {
    if ((DAT_00b3b364 != param_1) && (DAT_00b3b364 = param_1, param_1 != (int *)0x0)) {
      piVar3 = (int *)FUN_005e02e0(0);
      uVar9 = 8;
      fVar4 = (float)(**(code **)(*piVar3 + 0x128))(8);
      iVar5 = (**(code **)(*DAT_00b3b364 + 0x284))(8,uVar9,fVar4,(float)(int)fVar4);
      fVar11 = (float)iVar5;
      iVar6 = FUN_009832e6(DAT_00b3b358,0,&PTR_PTR_00b13240,&PTR_PTR_00b13df4,0);
      iVar5 = *(int *)(iVar6 + 0x44);
      if (iVar5 == 0) {
        uVar9 = FUN_00588c10(0xfec);
        FUN_00590740(uVar9);
        iVar5 = *(int *)(iVar6 + 0x44);
        if (iVar5 == 0) {
          return;
        }
      }
      fVar1 = *(float *)(iVar5 + 0x30);
      fVar10 = 0.0;
      if (0.0 < fVar4) {
        fVar10 = fVar11 / fVar4;
      }
      fVar11 = fVar1 - fVar10 * fVar1;
      if (fVar1 < fVar11) {
        fVar11 = fVar1;
      }
      *(float *)(DAT_00b3b358 + 0x58) = fVar11;
      uVar8 = 0x437f0000;
      uVar9 = _DAT_00b140c0;
      fVar7 = (float10)FUN_00588bd0(0xfb6);
      FUN_00589980(0xfb6,(float)fVar7,uVar8,uVar9);
      DAT_00b3b362 = 1;
    }
    _DAT_00b3b35c = _DAT_00b37120;
  }
  return;
}



void FUN_005a8b20(void)

{
  undefined4 local_4;
  
  local_4 = 0;
  if ((DAT_00b3b358 != 0) && (DAT_00b14e90 == '\0')) {
    local_4 = *(undefined4 *)(DAT_00b3b358 + 0x58);
  }
  FUN_0045b9a0(&local_4,4);
  return;
}



void FUN_005a8b60(void)

{
  undefined4 local_4;
  
  FUN_004534d0(&local_4,4);
  if ((DAT_00b3b358 != 0) && (DAT_00b14e90 == '\0')) {
    *(undefined4 *)(DAT_00b3b358 + 0x58) = local_4;
  }
  DAT_00b3b364 = 0;
  return;
}



void FUN_005a8ba0(void)

{
  if ((DAT_00b3b358 != 0) && (DAT_00b14e90 == '\0')) {
    *(undefined4 *)(DAT_00b3b358 + 0x58) = 0;
  }
  DAT_00b3b364 = 0;
  return;
}



void FUN_005a8bc0(int param_1)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf2f8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b3b350 != 0) {
    local_4 = 0;
    FUN_0058ceb0(0xfb2,0x3f800000);
    FUN_0058ceb0(0xfb2,0x40000000);
    FUN_0058ceb0(0xfb3,(float)param_1);
    FUN_0058ced0(0xfae,0);
    FUN_0058ceb0(0xfaf,0x3f800000);
    FUN_00401f20(0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005a8c90(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((DAT_00b13238 != '\0') || (param_1 == (int *)0x0)) {
    FUN_005a8bc0();
    return;
  }
  iVar2 = FUN_004de980();
  iVar3 = (**(code **)(*param_1 + 0x170))();
  piVar4 = (int *)((*(char *)(iVar3 + 4) != '#') - 1 & (uint)param_1);
  if ((iVar2 == 7) || (iVar2 == 10)) {
    cVar1 = FUN_005e6b40();
    if (cVar1 != '\0') goto LAB_005a8d94;
    if (piVar4 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar4 + 0x334))(1);
      if (cVar1 != '\0') goto LAB_005a8d94;
    }
  }
  if ((iVar2 == 1) && (piVar4 != (int *)0x0)) {
    cVar1 = (**(code **)(*piVar4 + 0x334))(1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*(int *)piVar4[0x16] + 0xac))();
      if (cVar1 == '\0') goto LAB_005a8d35;
    }
LAB_005a8d94:
    FUN_005a8bc0();
    return;
  }
LAB_005a8d35:
  FUN_005a8bc0(iVar2);
  if (((DAT_00b3b350 != 0) && (iVar2 != 7)) && (iVar2 != 0)) {
    cVar1 = FUN_004debf0();
    if (cVar1 != '\0') {
      iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b05ad0,0);
      if (iVar2 == 0) {
        FUN_0058ceb0(0xfaf,0x40000000);
      }
    }
  }
  return;
}



void FUN_005a8df0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6c0dc;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xf] = 0;
  in_ECX[10] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0x10] = 0;
  *(undefined1 *)(in_ECX + 0xe) = 1;
  return;
}



undefined4 FUN_005a8e30(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x3f2);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  uVar2 = FUN_00590420("Data\\Menus\\Main\\hud_subtitle_menu.xml");
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x34))();
    if (iVar4 == 0x3f2) {
      uVar5 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar5);
      if (piVar3[10] == 0) {
        FUN_00404ec0(
                    "HUD-Subtitle Menu Creation Failed... Are your menu and art resources up to date?"
                    );
      }
      fVar6 = (float10)FUN_00588bd0(0xfac);
      FUN_0058ceb0(0xfb7,(float)fVar6);
      FUN_0058ced0(0xfde,&DAT_00a36430);
      FUN_0058ced0(0xfde,&DAT_00a36430);
      FUN_00585190(0);
      return uVar2;
    }
    if (piVar3[1] != 0) {
      (**(code **)*piVar3)(1);
    }
  }
  return 0;
}



void FUN_005a8f30(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_005790e0(0x3f5,0);
  if (cVar1 == '\0') {
    FUN_0058ced0(0xfde,&DAT_00a36430);
  }
  FUN_0058ceb0(0xfa1,0x3f800000);
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined1 *)(in_ECX + 0x38) = 1;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  return;
}



undefined4 FUN_005a8f80(int *param_1)

{
  int in_ECX;
  
  if ((*(int **)(in_ECX + 0x40) != (int *)0x0) && (**(int **)(in_ECX + 0x40) == *param_1)) {
    return 1;
  }
  return 0;
}



void FUN_005a8fa0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f2);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_00584740();
      return;
    }
  }
  return;
}



void FUN_005a8fd0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f2);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_0058ceb0(0xfa1,0x3f800000);
    }
  }
  return;
}



void FUN_005a9010(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f2);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_00584390();
    return;
  }
  return;
}



void FUN_005a9060(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c04f3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401f20(in_ECX[6],uVar1);
  in_ECX[6] = 0;
  *(undefined2 *)((int)in_ECX + 0x1e) = 0;
  *(undefined2 *)(in_ECX + 7) = 0;
  FUN_00401f20(in_ECX[4]);
  in_ECX[4] = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  FUN_00401f20(*in_ECX);
  *in_ECX = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005a9280(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  for (piVar2 = (int *)(in_ECX + 0x2c);
      (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0)))); piVar2 = (int *)piVar2[1]) {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_005a9060();
      FUN_00401f20(iVar1);
    }
  }
  iVar1 = *(int *)(in_ECX + 0x30);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x30));
    *(int *)(in_ECX + 0x30) = iVar1;
  }
  *(int *)(in_ECX + 0x2c) = 0;
  FUN_0058ced0(0xfde,&DAT_00a36430);
  FUN_0058ceb0(0xfb0,0x3f800000);
  FUN_0058ceb0(0xfa1,0x3f800000);
  FUN_005a8f30();
  return;
}



void FUN_005a9320(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0ad8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6c0dc;
  local_4 = 0;
  while ((in_ECX[0xc] != 0 || (in_ECX[0xb] != 0))) {
    iVar1 = in_ECX[0xb];
    FUN_0065c620(iVar1);
    if (iVar1 != 0) {
      FUN_005a9060();
      FUN_00401f20(iVar1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00585330(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005a95c0(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int in_ECX;
  int *piVar9;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x24) == 2) {
    FUN_00584820();
  }
  else if (*(int *)(in_ECX + 0x24) == 4) {
    FUN_00584390();
  }
  puVar6 = (undefined4 *)FUN_00401f00(0x20);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    *(undefined2 *)(puVar6 + 1) = 0;
    *(undefined2 *)((int)puVar6 + 6) = 0;
    puVar6[4] = 0;
    *(undefined2 *)(puVar6 + 5) = 0;
    *(undefined2 *)((int)puVar6 + 0x16) = 0;
    puVar6[6] = 0;
    *(undefined2 *)(puVar6 + 7) = 0;
    *(undefined2 *)((int)puVar6 + 0x1e) = 0;
  }
  FUN_004028d0(0,0);
  FUN_00412fa0(param_1);
  pcVar7 = param_1;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  fVar3 = (float)((int)pcVar7 - (int)(param_1 + 1));
  if ((int)pcVar7 - (int)(param_1 + 1) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  if (fVar3 / 20.0 + 1.0 <= 3.0) {
    fVar3 = 3.0;
  }
  else {
    pcVar7 = param_1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    fVar3 = (float)((int)pcVar7 - (int)(param_1 + 1));
    if ((int)pcVar7 - (int)(param_1 + 1) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar3 = fVar3 / 20.0 + 1.0;
  }
  puVar6[2] = fVar3;
  *(undefined1 *)(puVar6 + 3) = 0;
  FUN_004028d0(param_3,0);
  iVar8 = param_4;
  if (param_4 == 0) {
    iVar8 = 0;
  }
  FUN_004028d0(iVar8,0);
  piVar9 = (int *)(in_ECX + 0x2c);
  for (piVar2 = piVar9; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((undefined4 *)piVar2[1] != (undefined4 *)0x0) {
      pcVar7 = (char *)**(undefined4 **)piVar2[1];
      if ((pcVar7 == (char *)0x0) || (*(char **)*piVar2 == (char *)0x0)) {
        iVar8 = (uint)(pcVar7 == (char *)0x0) * 2 + -1;
      }
      else {
        iVar8 = __stricmp(*(char **)*piVar2,pcVar7);
      }
      if (iVar8 == 0) {
        FUN_005a9060();
        FUN_00401f20(puVar6);
        return 0;
      }
    }
  }
  if ((*(int *)(in_ECX + 0x30) == 0) && (*piVar9 == 0)) {
    FUN_0067b1e0(puVar6);
    *(undefined1 *)(*piVar9 + 0xc) = 1;
    FUN_0058ced0(0xfde,*(undefined4 *)*piVar9);
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_0058ced0(0xfaf,*(undefined4 *)(*piVar9 + 0x10));
    if ((param_4 != 0) && (iVar8 = FUN_0065a970(param_4,0,0x121,0), iVar8 != 0)) {
      FUN_006b73e0();
      FUN_00401f20(iVar8);
    }
    if (*(int *)(*piVar9 + 0x10) == 0) {
      FUN_0058ceb0(0xfb0,0x3f800000);
      *(undefined4 *)(in_ECX + 0x3c) = param_2;
      *(undefined1 *)(in_ECX + 0x38) = 2;
      return 1;
    }
    FUN_0058ceb0(0xfb0,0x40000000);
    *(undefined4 *)(in_ECX + 0x3c) = param_2;
    *(undefined1 *)(in_ECX + 0x38) = 2;
    return 1;
  }
  bVar5 = false;
  if (piVar9 == *(int **)(in_ECX + 0x30)) {
    do {
      pcVar7 = (char *)*puVar6;
      if ((pcVar7 == (char *)0x0) || (*(char **)*piVar9 == (char *)0x0)) {
        iVar8 = (uint)(pcVar7 == (char *)0x0) * 2 + -1;
      }
      else {
        iVar8 = __stricmp(*(char **)*piVar9,pcVar7);
      }
      fVar3 = 3.0;
      if (iVar8 == 0) {
        pcVar7 = param_1;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        fVar4 = (float)((int)pcVar7 - (int)(param_1 + 1));
        if ((int)pcVar7 - (int)(param_1 + 1) < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        if (3.0 < fVar4 / 20.0 + 1.0) {
          pcVar7 = param_1;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          fVar3 = (float)((int)pcVar7 - (int)(param_1 + 1));
          if ((int)pcVar7 - (int)(param_1 + 1) < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          fVar3 = fVar3 / 20.0 + 1.0;
        }
        bVar5 = true;
        *(float *)(*piVar9 + 8) = fVar3;
      }
    } while (piVar9 == *(int **)(in_ECX + 0x30));
    if (bVar5) {
      FUN_005a9060();
      FUN_00401f20(puVar6);
      *(undefined4 *)(in_ECX + 0x3c) = param_2;
      *(undefined1 *)(in_ECX + 0x38) = 2;
      return 1;
    }
  }
  FUN_0067b1e0(puVar6);
  *(undefined4 *)(in_ECX + 0x3c) = param_2;
  *(undefined1 *)(in_ECX + 0x38) = 2;
  return 1;
}



void FUN_005a9960(byte param_1)

{
  FUN_005a9320();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005a9980(char *param_1,int param_2,int param_3,float param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  float *pfVar6;
  int in_ECX;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x24) == 2) {
    FUN_00584820();
  }
  else if (*(int *)(in_ECX + 0x24) == 4) {
    FUN_00584390();
  }
  if (param_3 != 2) {
    FUN_0058ced0(0xfde,param_1);
    FUN_0058ceb0(0xfa1,0x40000000);
    iVar5 = FUN_005a47b0();
    FUN_0058ceb0(0xfaf,(float)iVar5);
    if ((param_2 != 0) && (param_4 <= 2.0)) {
      uVar4 = FUN_006b7340();
      *(float *)(in_ECX + 0x3c) = (float)uVar4 / 1000.0;
    }
    if ((param_4 < 2.0) && (*(float *)(in_ECX + 0x3c) < 2.0)) {
      pcVar1 = param_1 + 1;
      do {
        cVar3 = *param_1;
        param_1 = param_1 + 1;
      } while (cVar3 != '\0');
      param_4 = (float)((int)param_1 - (int)pcVar1);
      if ((int)param_1 - (int)pcVar1 < 0) {
        param_4 = param_4 + 4.2949673e+09;
      }
      param_4 = param_4 * _DAT_00b394f8;
      if (param_4 <= _DAT_00b394f0) {
        pfVar6 = (float *)FUN_00403c00();
        param_4 = *pfVar6;
      }
      *(float *)(in_ECX + 0x3c) = param_4;
    }
    uVar2 = 0x40000000;
    if (2.0 < *(float *)(in_ECX + 0x3c)) {
      uVar2 = *(undefined4 *)(in_ECX + 0x3c);
    }
    *(int *)(in_ECX + 0x40) = param_2;
    *(undefined4 *)(in_ECX + 0x3c) = uVar2;
    *(undefined1 *)(in_ECX + 0x38) = 2;
    return 1;
  }
  FUN_005a95c0(param_1,param_4,0,0);
  return 1;
}



void FUN_005a9b00(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0x12] = 0;
  in_ECX[10] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x14] = 0;
  DAT_00b3b3d9 = 0;
  *in_ECX = &PTR_FUN_00a6c18c;
  in_ECX[0x10] = 0x1f;
  *(undefined1 *)(in_ECX + 0x11) = 0xff;
  return;
}



void FUN_005a9bb0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6c18c;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005a9be0(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  FUN_00582160(0,1);
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar1 = FUN_009828c0();
  fVar2 = (float10)FUN_00588cf0();
  DAT_00b3b3d9 = 1;
  *(float *)(in_ECX + 0x48) = (float)(fVar2 - (float10)iVar1);
  return;
}



void FUN_005a9c40(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  float10 fVar9;
  float10 extraout_ST0;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (((1000 < param_1) || (param_1 - 0xeU < 5)) && (param_2 != 0)) {
    if ((param_1 == 0xe) && (cVar4 = FUN_005893b0(), cVar4 == '\0')) {
      param_2 = FUN_0058b800(param_2,"inv_p4p5_header_text");
      uVar12 = 0;
      uVar11 = 0xfdd;
      iVar5 = param_2;
      FUN_00582160(0,1,param_2,0xfdd,0);
      FUN_0057f9f0(iVar5,uVar11,uVar12);
    }
    *(undefined1 *)(in_ECX + 0x44) = 0xff;
    *(undefined4 *)(in_ECX + 0x3c) = 0;
    FUN_0057bd80();
    if ((param_2 == 0) || (*(int *)(in_ECX + 0x28) == 0)) {
      if (*(int *)(in_ECX + 0x28) != 0) {
        FUN_0058ceb0(0xfa1,0x3f800000);
        iVar5 = FUN_00582160(0,1);
        *(undefined4 *)(iVar5 + 0x88) = 0;
      }
    }
    else {
      FUN_0057de50(4);
      FUN_00588bd0(0xfe0);
      iVar5 = FUN_009828c0();
      fVar9 = (float10)FUN_00588bd0(0xfd1);
      if (fVar9 == (float10)2.0) {
        FUN_00588bd0(0xfcb);
      }
      fVar9 = (float10)FUN_00588d90();
      FUN_0058ceb0(0xfab,(float)(fVar9 - (float10)0.5));
      fVar9 = (float10)FUN_00588bd0(0xfcb);
      FUN_0058ceb0(0xfcb,(float)(fVar9 - (float10)(iVar5 * 2)));
      fVar9 = (float10)FUN_00588bd0(0xfca);
      FUN_0058ceb0(0xfca,(float)(fVar9 - (float10)(iVar5 * 2)));
      FUN_00588c50();
      iVar6 = FUN_009828c0();
      FUN_0058ceb0(0xfad,(float)(extraout_ST0 - (float10)iVar6));
      fVar9 = (float10)FUN_00588cf0();
      FUN_0058ceb0(0xfac,(float)(fVar9 + (float10)iVar5));
      FUN_0058ceb0(0xfa1,0x40000000);
      *(int *)(in_ECX + 0x3c) = param_2;
      if (1000 < param_1) {
        FUN_00588bd0(0xfaa);
        uVar11 = FUN_009828c0();
        *(undefined4 *)(in_ECX + 0x54) = uVar11;
        FUN_00588bd0(0xfb9);
        uVar11 = FUN_009828c0();
        iVar5 = FUN_004d88f0(uVar11,0);
        if (iVar5 != 0) {
          iVar6 = FUN_009832e6(*(undefined4 *)(iVar5 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0,0);
          iVar7 = FUN_009832e6(*(undefined4 *)(iVar5 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
          iVar8 = FUN_009832e6(*(undefined4 *)(iVar5 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03280,0);
          fVar9 = (float10)FUN_00588bd0(0xfb8);
          fVar1 = (float)fVar9;
          fVar9 = (float10)FUN_00588d90();
          fVar2 = (float)fVar9;
          FUN_00582160(0,1);
          fVar9 = (float10)FUN_0057d7f0();
          fVar10 = (float10)FUN_00588bd0(0xfba);
          fVar3 = (float)((float10)(double)fVar9 - fVar10);
          if (((iVar6 == 0) || ((*(byte *)(iVar6 + 0x88) & 1) == 0)) ||
             (iVar6 = *(int *)(iVar6 + 100), iVar6 == 0)) {
            if ((iVar7 == 0) || (iVar6 = *(int *)(iVar7 + 4), iVar6 == 0)) {
              if (iVar8 == 0) {
                cVar4 = *(char *)(*(int *)(iVar5 + 8) + 4);
                if (((cVar4 == '&') || (cVar4 == '*')) || ((cVar4 == '!' || (cVar4 == '\x14')))) {
                  fVar9 = (float10)FUN_00588cf0(fVar3,fVar2);
                  FUN_0057bcc0(iVar5,fVar1,(float)fVar9);
                }
                else {
                  FUN_0057bd80();
                }
              }
              else {
                fVar9 = (float10)FUN_00588cf0(fVar3,iVar5,fVar2);
                FUN_0057bb20(iVar8,fVar1,(float)fVar9);
              }
            }
            else {
              fVar9 = (float10)FUN_00588cf0(fVar3,iVar5,fVar2);
              FUN_0057bb20(iVar6 + 0x18,fVar1,(float)fVar9);
            }
          }
          else {
            fVar9 = (float10)FUN_00588cf0(fVar3,0,fVar2);
            FUN_0057bb20(iVar6 + 0x18,fVar1,(float)fVar9);
          }
          FUN_00484470();
          FUN_00401f20(iVar5);
          return;
        }
        if (*(int *)(in_ECX + 0x28) != 0) {
          FUN_0058ceb0(0xfa1,0x3f800000);
          iVar5 = FUN_00582160(0,1);
          *(undefined4 *)(iVar5 + 0x88) = 0;
          return;
        }
      }
    }
  }
  return;
}



void FUN_005aa0a0(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_0057bd80();
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    FUN_0058ceb0(0xfa1,0x3f800000);
    iVar1 = FUN_00582160(0,1);
    *(undefined4 *)(iVar1 + 0x88) = 0;
  }
  return;
}



void FUN_005aa0e0(undefined4 param_1,undefined4 param_2)

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



void FUN_005aa1b0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x44) == '\0') && (*(int *)(in_ECX + 0x28) != 0)) {
    FUN_0058ceb0(0xfa1,0x3f800000);
    iVar2 = FUN_00582160(0,1);
    *(undefined4 *)(iVar2 + 0x88) = 0;
  }
  *(char *)(in_ECX + 0x44) = *(char *)(in_ECX + 0x44) + -1;
  if (*(char *)(in_ECX + 0x44) < -1) {
    *(undefined1 *)(in_ECX + 0x44) = 0xff;
  }
  cVar1 = FUN_0057c140(0x3ea);
  if (cVar1 != '\0') {
    FUN_005c1f70();
    return;
  }
  return;
}



void FUN_005aa210(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\x19') {
    *param_1 = 6;
    return;
  }
  if (cVar1 == '(') {
    *param_1 = 5;
    return;
  }
  if (cVar1 == '\x13') {
    *param_1 = 4;
    return;
  }
  if (cVar1 == '\x15') {
    *param_1 = 8;
    return;
  }
  if (cVar1 == '\'') {
    *param_1 = 9;
    return;
  }
  if ((((cVar1 == '&') || (cVar1 == '*')) || (param_2 == DAT_00b35ed8)) || (param_2 == DAT_00b35edc)
     ) {
    *param_1 = 10;
  }
  else if (*param_1 == 8) {
    *param_1 = 0xb;
    return;
  }
  return;
}



void FUN_005aa3a0(uint param_1)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar5 = *(int *)(*(int *)(in_ECX + 0x2c) + 0x38);
  iVar6 = -1;
  local_10 = 0;
  local_1c = -1;
  FUN_0058ceb0(0xfaf,0xc0000000);
  FUN_0058ceb0(0xfb0,0xc0000000);
  FUN_0058ceb0(0xfb1,0xc0000000);
  FUN_0058ceb0(0xfb2,0xc0000000);
  FUN_0058ceb0(0xfbb,0xc0000000);
  FUN_0058ceb0(0xfbc,0xc0000000);
  FUN_0058ceb0(0xfbd,0xc0000000);
  FUN_0058ceb0(0xfbe,0xc0000000);
  FUN_0058ceb0(0xfbf,0xc0000000);
  FUN_0058ceb0(0xfaf,0xc0000000);
  FUN_0058ceb0(0xfb0,0xc0000000);
  FUN_0058ceb0(0xfb1,0xc0000000);
  FUN_0058ceb0(0xfb2,0xc0000000);
  local_4 = *(int *)(in_ECX + 0x54);
  bVar2 = false;
  do {
    if (iVar5 == 0) {
      uVar3 = iVar6 - 1;
      FUN_0058ceb0(0xfae,(float)(int)(((int)uVar3 < 0) - 1 & uVar3));
      FUN_0058ceb0(0xfb3,(float)(int)(((int)uVar3 < 0) - 1 & uVar3));
      fVar7 = (float10)FUN_00588bd0(0xfbf);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfb3);
        FUN_0058ceb0(0xfbf,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfbe);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfbf);
        FUN_0058ceb0(0xfbe,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfbd);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfbe);
        FUN_0058ceb0(0xfbd,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfbc);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfbd);
        FUN_0058ceb0(0xfbc,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfbb);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfbc);
        FUN_0058ceb0(0xfbb,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfb2);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfbb);
        FUN_0058ceb0(0xfb2,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfb1);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfb2);
        FUN_0058ceb0(0xfb1,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfb0);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfb1);
        FUN_0058ceb0(0xfb0,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfaf);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfb0);
        FUN_0058ceb0(0xfaf,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfb2);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfb3);
        FUN_0058ceb0(0xfb2,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfb1);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfb2);
        FUN_0058ceb0(0xfb1,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfb0);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfb1);
        FUN_0058ceb0(0xfb0,(float)fVar7);
      }
      fVar7 = (float10)FUN_00588bd0(0xfaf);
      if (fVar7 == (float10)-2.0) {
        fVar7 = (float10)FUN_00588bd0(0xfb0);
        FUN_0058ceb0(0xfaf,(float)fVar7);
      }
      return;
    }
    local_c = *(int *)(iVar5 + 4);
    iVar5 = *(int *)(iVar5 + 8);
    local_14 = iVar5;
    FUN_00588bd0(0xfb7);
    uVar3 = FUN_009828c0();
    local_18 = uVar3;
    local_8 = uVar3;
    if (iVar5 != 0) {
      uVar8 = 0;
      FUN_00588bd0(0xfb9);
      uVar4 = FUN_009828c0(uVar8);
      iVar5 = FUN_004d88f0(uVar4,uVar8);
      if (iVar5 != 0) {
        FUN_005aa210(&local_18,*(undefined4 *)(iVar5 + 8));
        FUN_00484470();
        FUN_00401f20(iVar5);
        uVar3 = local_18;
      }
    }
    if ((uVar3 != local_10) && ((param_1 & uVar3) != 0)) {
      if (uVar3 == 1) {
        uVar4 = 0xfaf;
      }
      else if (uVar3 == 2) {
        uVar4 = 0xfb0;
      }
      else if ((param_1 == 4) || (param_1 == 8)) {
        if (uVar3 == 4) {
          uVar4 = 0xfaf;
        }
        else if (uVar3 == 5) {
          uVar4 = 0xfb0;
        }
        else if (uVar3 == 6) {
          uVar4 = 0xfb1;
        }
        else if (uVar3 == 8) {
          uVar4 = 0xfaf;
        }
        else if (uVar3 == 9) {
          uVar4 = 0xfb0;
        }
        else {
          if (uVar3 != 10) {
            if (uVar3 == 0xb) goto LAB_005aa72a;
            goto LAB_005aa742;
          }
          uVar4 = 0xfb1;
        }
      }
      else {
        if ((int)param_1 < 0xf) goto LAB_005aa742;
        if (uVar3 == 4) {
          uVar4 = 0xfb1;
        }
        else if (uVar3 == 5) {
LAB_005aa72a:
          uVar4 = 0xfb2;
        }
        else if (uVar3 == 6) {
          uVar4 = 0xfbb;
        }
        else if (uVar3 == 8) {
          uVar4 = 0xfbc;
        }
        else if (uVar3 == 9) {
          uVar4 = 0xfbd;
        }
        else if (uVar3 == 10) {
          uVar4 = 0xfbe;
        }
        else {
          if (uVar3 != 0xb) goto LAB_005aa742;
          uVar4 = 0xfbf;
        }
      }
      FUN_0058ceb0(uVar4,(float)local_1c);
      iVar6 = iVar6 + 1;
      local_1c = iVar6;
    }
LAB_005aa742:
    local_10 = uVar3;
    if ((local_8 & param_1) == 0) {
      FUN_0058ceb0(0xfb6,0x3f800000);
      if ((int)param_1 < (int)uVar3) {
        uVar4 = 0x47c34f80;
      }
      else {
        uVar4 = 0xc0000000;
      }
      FUN_0058ceb0(0xfaa,uVar4);
      iVar5 = local_c;
    }
    else {
      FUN_0058ceb0(0xfb6,0x40000000);
      FUN_0058ceb0(0xfaa,(float)local_1c);
      iVar6 = iVar6 + 1;
      iVar5 = local_c;
      local_1c = iVar6;
      if ((local_4 < iVar6) && (!bVar2)) {
        FUN_00582160(0,1);
        iVar5 = FUN_00582160(0,1);
        *(int *)(iVar5 + 0x8c) = *(int *)(iVar5 + 0x8c) + 1;
        local_8 = *(uint *)(iVar5 + 0x8c);
        fVar1 = (float)(int)local_8;
        if ((int)local_8 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        FUN_0058ceb0(0xff0,fVar1);
        bVar2 = true;
        iVar5 = local_c;
      }
    }
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_005aab60(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
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
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffed0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_120 = 0;
  local_11c = 0;
  local_11a = 0;
  FUN_004028d0(param_1,0);
  local_4 = 0;
  local_118 = 0;
  local_114 = 0;
  local_112 = 0;
  FUN_004028d0("item_template",0);
  uVar3 = local_118;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar5 = FUN_00585410(*(undefined4 *)(in_ECX + 0x2c),local_118,0);
  if (iVar5 != 0) {
    FUN_0058ced0(0xfaf,param_2);
    iVar6 = 0;
    do {
      pcVar1 = local_110 + iVar6;
      cVar2 = pcVar1[param_2 - (int)local_110];
      *pcVar1 = cVar2;
      if (cVar2 == ' ') {
        *pcVar1 = '_';
      }
    } while ((*pcVar1 != '\0') && (iVar6 = iVar6 + 1, iVar6 < 0x100));
    local_110[0xff] = 0;
    FUN_004028d0(local_110,0);
    FUN_0058ced0(0xfb4,local_120);
    FUN_0058ceb0(0xfb7,(float)param_3);
    FUN_0058ceb0(0xfaa,(float)param_4);
    FUN_0058ceb0(0xfa8,(float)param_5);
  }
  FUN_00401f20(uVar3,uVar4);
  FUN_00401f20(local_120);
  *unaff_FS_OFFSET = local_c;
  return iVar5;
}



void FUN_005aacf0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  FUN_0058ceb0(0xfae,(float)param_1);
  iVar2 = FUN_00582160(0,1);
  *(char *)(iVar2 + 0xb) = (char)param_1;
  if (param_1 < 2) {
    in_ECX[0x10] = 0x1f;
  }
  else {
    in_ECX[0x10] = 1 << ((char)param_1 - 2U & 0x1f);
  }
  FUN_005aa3a0(in_ECX[0x10]);
  iVar2 = FUN_00582160(0,1);
  if (*(char *)(iVar2 + 0xb9) != '\0') {
    FUN_0058ceb0(0xfb7,0xcb18967f);
    FUN_0058ceb0(0xfb7,0);
  }
  iVar2 = FUN_00582160(0,1);
  iVar2 = *(int *)(iVar2 + 0x88);
  if (iVar2 != 0) {
    iVar1 = *in_ECX;
    FUN_00588bd0(0xfa8);
    uVar3 = FUN_009828c0(iVar2);
    (**(code **)(iVar1 + 0x14))(uVar3);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005aadc0(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uchar *_Str2;
  uchar *_Str1;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  int *local_144;
  int local_140;
  int local_13c;
  int *local_138;
  int local_134;
  int local_130;
  int local_12c;
  int *local_128;
  undefined4 uStack_124;
  int *local_120;
  undefined4 uStack_11c;
  int *local_118;
  undefined4 local_114;
  undefined4 local_110;
  int *local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_144;
  local_140 = FUN_00589b70(0x3ea);
  if (local_140 != 0) {
    iVar3 = FUN_005898f0();
    iVar9 = *(int *)(iVar3 + 0x50);
    local_12c = iVar3;
    if (iVar9 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar9);
    }
    *(undefined4 *)(iVar3 + 0x50) = 0;
    DAT_00b3b3d8 = 0;
    DAT_00b140e4 = 0xffffffff;
    if (DAT_00b333c4 != (int *)0x0) {
      local_130 = *(int *)(iVar3 + 0x2c);
      local_134 = FUN_004d8950(0);
      iVar10 = 0;
      iVar9 = 0;
      local_114 = 0;
      local_110 = 0;
      if (0 < local_134) {
        do {
          iVar4 = FUN_004d88f0(iVar9,0);
          if (iVar4 != 0) {
            cVar2 = FUN_004854f0(DAT_00b333c4,0,1,1,0);
            if ((cVar2 == '\0') || (cVar2 = FUN_00469980(*(undefined4 *)(iVar4 + 8)), cVar2 != '\0')
               ) {
              FUN_00484470();
              FUN_00401f20(iVar4);
            }
            else {
              piVar5 = (int *)FUN_00401f00(8);
              if (piVar5 == (int *)0x0) {
                FUN_00446cb0(0);
                iVar10 = iVar10 + 1;
              }
              else {
                *piVar5 = iVar4;
                piVar5[1] = iVar9;
                FUN_00446cb0(piVar5);
                iVar10 = iVar10 + 1;
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_134);
      }
      FUN_005b27a0(&LAB_005aa2a0);
      iVar9 = FUN_00582160(0,1);
      if ((*(int *)(iVar9 + 0x88) != 0) &&
         (fVar12 = (float10)FUN_00588bd0(0xfa8), (float10)1001.0 <= fVar12)) {
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        FUN_0058ceb0(0xfa1,0x3f800000);
        iVar9 = FUN_00582160(0,1);
        *(undefined4 *)(iVar9 + 0x88) = 0;
      }
      puVar8 = *(undefined4 **)(local_130 + 0x34);
      while (puVar8 != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)*puVar8;
        iVar9 = FUN_00588b50(0xfb8);
        if (iVar9 != 0) {
          FUN_0058ceb0(0xfaa,0xc2c60000);
        }
      }
      FUN_0058ceb0(0xfaf,0xc0000000);
      FUN_0058ceb0(0xfb0,0xc0000000);
      FUN_0058ceb0(0xfb1,0xc0000000);
      FUN_0058ceb0(0xfb2,0xc0000000);
      local_128 = (int *)(-(uint)(iVar10 != 0) & (uint)&local_114);
      local_13c = -1;
      local_120 = (int *)0x0;
      piVar5 = local_128;
      local_138 = local_128;
      if (local_128 != (int *)0x0) {
        do {
          local_10c = (int *)*local_128;
          local_134 = local_10c[1];
          iVar9 = *local_10c;
          local_144 = (int *)FUN_00485150();
          uVar6 = *(undefined4 *)(iVar9 + 8);
          local_118 = local_144;
          FUN_005aa210(&local_118,uVar6);
          if (local_118 != local_120) {
            local_13c = local_13c + 1;
            local_120 = local_118;
          }
          uVar6 = FUN_005c0c50(uVar6);
          _sprintf(local_108,"%s\\%s","Icons",uVar6);
          iVar9 = *(int *)(local_130 + 0x38);
          iVar3 = local_13c;
          do {
            do {
              local_13c = iVar3;
              if (iVar9 == 0) {
                iVar9 = iVar3 + 0x3e9;
                uVar6 = FUN_00485150(iVar3,iVar9);
                uVar7 = FUN_00488df0(uVar6);
                FUN_005aab60(local_108,uVar7,uVar6,iVar3,iVar9);
                uVar6 = FUN_0048f450(1,1,0,0,0);
                FUN_0058ced0(0xfb0,uVar6);
                uVar6 = FUN_0048f450(2,1,0,0,0);
                FUN_0058ced0(0xfb1,uVar6);
                uVar6 = FUN_0048f450(3,1,0,0,0);
                FUN_0058ced0(0xfb2,uVar6);
                uVar6 = FUN_0048f450(4,1,0,0,0);
                FUN_0058ced0(0xfb3,uVar6);
                uVar6 = FUN_0048f450(0,1,0,0,0);
                FUN_0058ced0(0xfb5,uVar6);
                cVar2 = FUN_00484e80(0);
                local_144 = (int *)((cVar2 != '\0') + 1);
                FUN_0058ceb0(0xfb8,(float)(int)local_144);
                FUN_0058ceb0(0xfb9,(float)local_134);
                piVar5 = (int *)FUN_00485c00();
                local_144 = piVar5;
                FUN_0058ceb0(0xfba,(float)(int)piVar5);
                uVar6 = FUN_0048f6a0(piVar5);
                FUN_0058ced0(0xfbb,uVar6);
                goto LAB_005ab234;
              }
              iVar10 = *(int *)(iVar9 + 8);
              iVar9 = *(int *)(iVar9 + 4);
              iVar4 = FUN_00588c10(0xfaf);
              iVar3 = local_13c;
            } while (((iVar4 == 0) || (iVar4 = FUN_00488df0(), iVar3 = local_13c, iVar4 == 0)) ||
                    (fVar12 = (float10)FUN_00588bd0(0xfaa), iVar3 = local_13c,
                    fVar12 != (float10)-99.0));
            _Str2 = (uchar *)FUN_00488df0();
            _Str1 = (uchar *)FUN_00588c10(0xfaf);
            iVar4 = __mbscmp(_Str1,_Str2);
            iVar3 = local_13c;
          } while (iVar4 != 0);
          uVar6 = FUN_00488df0();
          FUN_0058ced0(0xfaf,uVar6);
          uVar6 = FUN_0048f450(1,1,0,0,0);
          FUN_0058ced0(0xfb0,uVar6);
          uVar6 = FUN_0048f450(2,1,0,0,0);
          FUN_0058ced0(0xfb1,uVar6);
          uVar6 = FUN_0048f450(3,1,0,0,0);
          FUN_0058ced0(0xfb2,uVar6);
          uVar6 = FUN_0048f450(4,1,0,0,0);
          FUN_0058ced0(0xfb3,uVar6);
          FUN_0058ced0(0xfb4,local_108);
          uVar6 = FUN_0048f450(0,1,0,0,0);
          FUN_0058ced0(0xfb5,uVar6);
          FUN_0058ceb0(0xfb7,(float)(int)local_144);
          cVar2 = FUN_00484e80(0);
          local_144 = (int *)((cVar2 != '\0') + 1);
          FUN_0058ceb0(0xfb8,(float)(int)local_144);
          FUN_0058ceb0(0xfb9,(float)local_134);
          piVar5 = (int *)FUN_00485c00();
          local_144 = piVar5;
          FUN_0058ceb0(0xfba,(float)(int)piVar5);
          uVar6 = FUN_0048f6a0(piVar5);
          FUN_0058ced0(0xfbb,uVar6);
          FUN_0058ceb0(0xfaa,(float)local_13c);
          iVar9 = local_130;
          piVar11 = (int *)(local_130 + 0x30);
          piVar5 = *(int **)(local_130 + 0x34);
          do {
            local_144 = piVar5;
            if (local_144 == (int *)0x0) {
              local_144 = (int *)0x0;
              break;
            }
            piVar5 = (int *)*local_144;
          } while (iVar10 != local_144[2]);
          if (local_144 != (int *)0x0) {
            FUN_007aa860(&local_144);
          }
          puVar8 = (undefined4 *)(**(code **)(*piVar11 + 4))();
          puVar8[2] = iVar10;
          puVar8[1] = 0;
          *puVar8 = *(undefined4 *)(iVar9 + 0x34);
          if (*(int *)(iVar9 + 0x34) == 0) {
            *(int *)(iVar9 + 0x3c) = *(int *)(iVar9 + 0x3c) + 1;
            *(undefined4 **)(iVar9 + 0x38) = puVar8;
            *(undefined4 **)(iVar9 + 0x34) = puVar8;
          }
          else {
            *(undefined4 **)(*(int *)(iVar9 + 0x34) + 4) = puVar8;
            *(int *)(iVar9 + 0x3c) = *(int *)(iVar9 + 0x3c) + 1;
            *(undefined4 **)(iVar9 + 0x34) = puVar8;
          }
LAB_005ab234:
          local_128 = (int *)local_128[1];
          local_13c = local_13c + 1;
        } while (local_128 != (int *)0x0);
        local_128 = (int *)0x0;
        piVar5 = local_138;
        iVar3 = local_12c;
      }
      local_138 = (int *)(local_13c + -1);
      FUN_0058ceb0(0xfae,(float)(int)local_138);
      puVar8 = *(undefined4 **)(local_130 + 0x34);
      while (puVar8 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar8[2];
        puVar8 = (undefined4 *)*puVar8;
        fVar12 = (float10)FUN_00588bd0(0xfaa);
        if ((fVar12 == (float10)-99.0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      while (piVar5 != (int *)0x0) {
        piVar11 = (int *)*piVar5;
        piVar5 = (int *)piVar5[1];
        if (piVar11 != (int *)0x0) {
          iVar9 = *piVar11;
          if (iVar9 != 0) {
            FUN_00484470();
            FUN_00401f20(iVar9);
          }
          FUN_00401f20(piVar11);
        }
      }
      FUN_004526e0();
      FUN_005aa3a0(*(undefined4 *)(iVar3 + 0x40));
      uStack_124 = 0;
      uStack_11c = 0;
      FUN_0065dfa0(&uStack_124,&uStack_11c);
      local_138 = (int *)FUN_009828c0();
      FUN_0058ceb0(0xfb4,(float)(int)local_138);
      local_140 = FUN_009828c0();
      FUN_0058ceb0(0xfb5,(float)local_140);
      (**(code **)(*DAT_00b333c4 + 0x348))();
      local_140 = FUN_009828c0();
      FUN_0058ceb0(0xfb6,(float)local_140);
      local_140 = FUN_005e4420();
      FUN_0058ceb0(0xfb7,(float)local_140);
    }
  }
  return;
}



undefined4 FUN_005ab5a0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x3ea);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar6 = (float10)thunk_FUN_00584980();
  uVar2 = FUN_00590420("Data\\Menus\\Main\\inventory_menu.xml");
  piVar3 = (int *)FUN_005898f0();
  FUN_00584670("Data\\Menus\\Main\\inventory_menu.xml",piVar3);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar4 = (**(code **)(*piVar3 + 0x34))();
  if (iVar4 != 0x3ea) {
    if (piVar3[1] == 0) {
      return 0;
    }
    (**(code **)*piVar3)(1);
    return 0;
  }
  uVar5 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar5);
  iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b140e8,0);
  if ((((*(int *)(iVar4 + 0x2c) != 0) && (*(int *)(iVar4 + 0x28) != 0)) &&
      (*(int *)(iVar4 + 0x30) != 0)) &&
     ((*(int *)(iVar4 + 0x34) != 0 && (*(int *)(iVar4 + 0x38) != 0)))) {
    fVar7 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar7 == (float10)6006.0) ||
       (fVar7 = (float10)FUN_00588bd0(0xfa5), fVar7 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar6);
    }
    FUN_0058ceb0(0xfaf,0xc0000000);
    FUN_0058ceb0(0xfb0,0xc0000000);
    FUN_0058ceb0(0xfb1,0xc0000000);
    FUN_0058ceb0(0xfb2,0xc0000000);
    FUN_0058ceb0(0xfb3,0);
    FUN_0058ceb0(0xfb4,0);
    FUN_0058ceb0(0xfb5,0);
    FUN_0058ceb0(0xfb6,0);
    FUN_0058ceb0(0xfb7,0);
    FUN_005aadc0();
    DAT_00b3b3d9 = 0;
    iVar4 = FUN_00582160(0,1);
    if (*(char *)(iVar4 + 0xb) != -1) {
      FUN_005aacf0((int)*(char *)(iVar4 + 0xb),0);
    }
    FUN_0058ceb0(0xfb3,0xc97423f0);
    FUN_0058ceb0(0xfb3,0);
    FUN_00585190(1);
    return uVar2;
  }
  FUN_004a7a60("Inventory Menu Creation Failed... Are your menu and art resources up to date?");
  return 0;
}



void FUN_005ab800(void)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char in_stack_00000010;
  
  iVar4 = FUN_00589b70(0x3ea);
  if (((iVar4 == 0) || (iVar4 = FUN_005898f0(), iVar4 == 0)) || (*(int *)(iVar4 + 0x50) == 0)) {
    return;
  }
  FUN_00484e80(0);
  iVar1 = (*(int **)(iVar4 + 0x50))[2];
  iVar5 = 0;
  if ((**(int **)(iVar4 + 0x50) == 0) || (DAT_00b140e4 != 1)) {
    piVar6 = (int *)**(int **)(iVar4 + 0x50);
    if ((piVar6 != (int *)0x0) && ((piVar6[1] != 0 || (*piVar6 != 0)))) {
      if (DAT_00b140e4 == 0) goto LAB_005ab923;
      do {
        if ((piVar6 == (int *)0x0) || (*piVar6 == 0)) break;
        sVar2 = FUN_0041e860();
        sVar3 = FUN_0041e860();
        iVar7 = (int)sVar2;
        if (DAT_00b140e4 < sVar3) {
          iVar7 = DAT_00b140e4;
        }
        (**(code **)(*DAT_00b333c4 + 0x2c8))
                  (*(undefined4 *)(*(int *)(iVar4 + 0x50) + 8),*piVar6,iVar7,&stack0x00000004,0);
        piVar6 = (int *)piVar6[1];
        DAT_00b140e4 = DAT_00b140e4 - iVar7;
      } while (DAT_00b140e4 != 0);
    }
    if (0 < DAT_00b140e4) {
      (**(code **)(*DAT_00b333c4 + 0x2c8))
                (*(undefined4 *)(*(int *)(iVar4 + 0x50) + 8),0,DAT_00b140e4,&stack0x00000004,0);
    }
  }
  else {
    iVar5 = (**(code **)(*DAT_00b333c4 + 0x2c8))
                      ((*(undefined4 **)(iVar4 + 0x50))[2],
                       *(undefined4 *)**(undefined4 **)(iVar4 + 0x50),1,&stack0x00000004,0);
  }
LAB_005ab923:
  if (((iVar1 != 0) && (*(char *)(iVar1 + 4) == '\"')) && (0 < DAT_00b3b7d0)) {
    FUN_00607f90(iVar1,DAT_00b140e4,DAT_00b333c4,1,1);
  }
  if ((iVar5 != 0) && (in_stack_00000010 != '\0')) {
    FUN_0066e090(iVar5);
  }
  FUN_005aadc0();
  return;
}



void FUN_005ab980(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = FUN_00582160(0,1);
  if ((*(int *)(iVar2 + 0x88) != 0) || (param_1 != 0)) {
    FUN_00588bd0(0xfb9);
    uVar3 = FUN_009828c0();
    piVar4 = (int *)FUN_004d88f0(uVar3,0);
    cVar1 = (**(code **)(*(int *)piVar4[2] + 0x78))();
    if (cVar1 != '\0') {
      FUN_0057acc0(DAT_00b38568,0,1,0xbf800000);
      return;
    }
    iVar2 = FUN_005e0ee0();
    if ((iVar2 != -1) && (cVar1 = FUN_00484e80(0), cVar1 != '\0')) {
      FUN_0057acc0(DAT_00b38a08,0,1,0xbf800000);
      return;
    }
    if (((((int *)*piVar4 != (int *)0x0) && (*(int *)*piVar4 != 0)) &&
        (cVar1 = FUN_0041df40(), cVar1 != '\0')) && (cVar1 = FUN_0041df10(0), cVar1 != '\0')) {
      FUN_0057acc0(DAT_00b38560,0,1,0xbf800000);
      return;
    }
    iVar2 = FUN_00589b70(0x3ea);
    if (iVar2 != 0) {
      iVar2 = FUN_005898f0();
      *(int **)(iVar2 + 0x50) = piVar4;
      cVar1 = FUN_0065aad0();
      uVar3 = DAT_00b38a18;
      if ((cVar1 == '\0') &&
         (cVar1 = FUN_0066e0d0(piVar4[2],&uStack_c,0,0), uVar3 = DAT_00b38a10, cVar1 != '\0')) {
        DAT_00b3b3da = 1;
        DAT_00b140e4 = FUN_004b2460();
        uVar5 = 0;
        uVar3 = 1;
        FUN_00582160(0,1,1,0);
        FUN_0057cfe0(uVar3,uVar5);
        FUN_00582160(0,1);
        FUN_00583e60();
        FUN_00582160(0,1);
        FUN_005821f0();
        FUN_00582160(0,1);
        FUN_00583f40();
        FUN_0057cc00();
        FUN_005ab800(uStack_c,uStack_8,uStack_4,1);
        iVar2 = FUN_00582160(0,1);
        *(undefined4 *)(iVar2 + 0x90) = 1;
        return;
      }
      FUN_0057acc0(uVar3,0,1,0xbf800000);
      DAT_00b140e4 = 0xffffffff;
    }
  }
  return;
}



void FUN_005abbc0(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  float10 fVar9;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = FUN_00589b70(0x416);
  DAT_00b3b3d9 = 0;
  if (param_1 - 1U < 5) {
    FUN_005aacf0(param_1,param_2);
    return;
  }
  if ((param_1 == 7) || (param_1 == 8)) {
    FUN_00588bd0(0xfae);
    iVar4 = FUN_009828c0();
    if (param_1 == 7) {
      iVar4 = iVar4 + -1;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 < 1) {
      iVar4 = 5;
    }
    else if (5 < iVar4) {
      iVar4 = 1;
    }
    FUN_0058ceb0(0xfae,(float)iVar4);
    FUN_005aacf0(iVar4,0);
    return;
  }
  if (((iVar4 != 0) && (DAT_00b3b43d != '\0')) && (1000 < param_1)) {
    FUN_00588bd0(0xfb9);
    uVar5 = FUN_009828c0();
    piVar6 = (int *)FUN_004d88f0(uVar5,0);
    if (piVar6 == (int *)0x0) {
      return;
    }
    FUN_005c25c0(piVar6[2]);
    iVar4 = FUN_00484ba0();
    if (iVar4 == -1) {
      uVar5 = FUN_004d6d40();
      iVar4 = FUN_00485e00(DAT_00b333c4,uVar5);
      if (iVar4 != 0) {
        uVar5 = 0;
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          uVar5 = *(undefined4 *)*piVar6;
        }
        iVar4 = piVar6[2];
        uVar7 = FUN_005c1100();
        FUN_00489820(iVar4,uVar5,uVar7);
      }
    }
    else {
      uVar5 = FUN_005c1100();
      FUN_00484bc0(uVar5);
      FUN_005c1900();
    }
    goto LAB_005ac219;
  }
  if (param_1 - 0xeU < 5) {
    if ((DAT_00b3b3db & 0x7f) != param_1 - 0xeU) {
      FUN_00597a40(param_1 - 0xeU);
      DAT_00b3b3db = DAT_00b3b3db & 0x7f;
      FUN_005aadc0();
      return;
    }
    FUN_00597a60();
    FUN_005aadc0();
    return;
  }
  if (param_1 < 0x3e9) {
    DAT_00b3b3d9 = 0;
    return;
  }
  FUN_00588bd0(0xfb9);
  uVar5 = FUN_009828c0();
  piVar6 = (int *)FUN_004d88f0(uVar5,0);
  if (piVar6 == (int *)0x0) {
    return;
  }
  local_c = DAT_00b3f9a8;
  local_8 = DAT_00b3f9ac;
  local_4 = DAT_00b3f9b0;
  iVar4 = FUN_00582160(0,1);
  if ((((*(uint *)(iVar4 + 0x118) >> 2 & 1) != 0) || (DAT_00b3b3d8 != '\0')) &&
     ((((cVar2 = (**(code **)(*(int *)piVar6[2] + 0x78))(), uVar5 = DAT_00b38568, cVar2 != '\0' ||
        ((iVar4 = FUN_005e0ee0(), iVar4 != -1 &&
         (cVar2 = FUN_00484e80(0), uVar5 = DAT_00b38a08, cVar2 != '\0')))) ||
       (cVar2 = FUN_0065aad0(), uVar5 = DAT_00b38a18, cVar2 != '\0')) ||
      (cVar2 = FUN_0066e0d0(piVar6[2],&local_c,1,DAT_00b140e4 == -1), uVar5 = DAT_00b38a10,
      cVar2 == '\0')))) goto LAB_005abdc0;
  if (DAT_00b140e4 == -1) {
    iVar4 = FUN_004b2460();
    if (iVar4 < 2) {
LAB_005abf38:
      if (DAT_00b140e4 != -1) goto LAB_005abf4b;
    }
    else if (*(char *)(piVar6[2] + 4) == '\x19') {
      iVar4 = FUN_00582160(0,1);
      if ((*(uint *)(iVar4 + 0x118) >> 2 & 1) != 0) {
LAB_005abeb7:
        DAT_00b3b3d8 = 1;
        uVar5 = FUN_004b2460(0);
        FUN_005c05d0(&DAT_00b140e4,param_1,param_2,uVar5);
        return;
      }
    }
    else {
      iVar4 = FUN_004b2460();
      if ((DAT_00b38688 <= iVar4) &&
         (iVar4 = FUN_00582160(0,1), (*(uint *)(iVar4 + 0x118) >> 2 & 1) != 0)) goto LAB_005abeb7;
      iVar4 = FUN_00582160(0,1);
      if (((*(uint *)(iVar4 + 0x118) >> 2 & 1) == 0) && (DAT_00b3b3d8 == '\0')) {
        DAT_00b140e4 = FUN_004b2460();
        goto LAB_005abf38;
      }
    }
    DAT_00b140e4 = 1;
  }
LAB_005abf4b:
  iVar4 = FUN_00582160(0,1);
  if (((*(uint *)(iVar4 + 0x118) >> 2 & 1) == 0) && (DAT_00b3b3d8 == '\0')) {
    cVar2 = FUN_00484e80(0);
    if (cVar2 == '\0') {
      if (((*(char *)(piVar6[2] + 4) == '\x15') &&
          (iVar4 = FUN_009832e6(piVar6[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0), iVar4 != 0)) &&
         (*(int *)(iVar4 + 4) != 0)) {
        FUN_00664850(piVar6[2]);
        return;
      }
      cVar2 = (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x304))();
      if (((cVar2 != '\0') && (*(char *)(piVar6[2] + 4) == '!')) &&
         (iVar4 = FUN_005e0ee0(), uVar5 = DAT_00b38a20, iVar4 != -1)) goto LAB_005abdc0;
      fVar9 = (float10)FUN_00588bd0(0xfb8);
      FUN_0058ceb0(0xfb8,(float)(byte)((fVar9 != (float10)2.0) + 1));
      piVar1 = (int *)*piVar6;
      if ((piVar1 == (int *)0x0) || (cVar2 = FUN_0046cb60(), cVar2 != '\0')) {
        iVar4 = 0;
        if ((piVar1 != (int *)0x0) &&
           ((iVar4 = *piVar1, iVar4 != 0 && (sVar3 = FUN_0041e860(), sVar3 < DAT_00b140e4)))) {
          iVar4 = 0;
        }
      }
      else {
        cVar2 = FUN_0041df40();
        if (cVar2 != '\0') {
          FUN_0057acc0(DAT_00b38a30,0,1,0xbf800000);
          FUN_0058ceb0(0xfb8,0x3f800000);
          DAT_00b140e4 = 0xffffffff;
          return;
        }
        iVar4 = *(int *)*piVar6;
      }
      FUN_005faea0(piVar6[2],DAT_00b140e4,iVar4,0,0);
    }
    else {
      FUN_005e99c0(piVar6[2],0,0);
      switch(*(undefined1 *)(piVar6[2] + 4)) {
      case 0x14:
      case 0x16:
      case 0x21:
      case 0x22:
        iVar4 = FUN_005e0ee0();
        uVar5 = DAT_00b38a38;
        if (iVar4 != -1) goto LAB_005abdc0;
      }
      fVar9 = (float10)FUN_00588bd0(0xfb8);
      FUN_0058ceb0(0xfb8,(float)(byte)((fVar9 != (float10)2.0) + 1));
      if ((undefined4 *)*piVar6 == (undefined4 *)0x0) {
        iVar4 = piVar6[2];
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)*piVar6;
        iVar4 = piVar6[2];
      }
      FUN_005f2e70(iVar4,DAT_00b140e4,uVar5,1,0,0);
      FUN_005e7230(piVar6[2],0);
    }
    FUN_00668cc0();
    (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x42c))(DAT_00b333c4,1,0,0);
    (**(code **)(*DAT_00b333c4 + 0x2c0))();
    FUN_005aadc0();
    DAT_00b140e4 = -1;
    DAT_00b3b3d8 = '\0';
LAB_005ac219:
    FUN_00484470();
    FUN_00401f20(piVar6);
    return;
  }
  if (((((int *)*piVar6 == (int *)0x0) || (*(int *)*piVar6 == 0)) ||
      (cVar2 = FUN_0041df40(), cVar2 == '\0')) ||
     (cVar2 = FUN_0041df10(0), uVar5 = DAT_00b38560, cVar2 == '\0')) {
    FUN_005e99c0(piVar6[2],0,0);
    *(int **)(in_ECX + 0x50) = piVar6;
    iVar4 = piVar6[2];
    FUN_005ab800(local_c,local_8,local_4,0);
    if ((*(char *)(iVar4 + 4) == '\x15') && (iVar8 = FUN_0065d4c0(), iVar4 == iVar8)) {
      FUN_00664850(0);
    }
    FUN_005e7230(iVar4,0);
    FUN_00668cc0();
    (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x42c))(DAT_00b333c4,1,0,0);
    return;
  }
LAB_005abdc0:
  FUN_0057acc0(uVar5,0,1,0xbf800000);
  DAT_00b140e4 = 0xffffffff;
  return;
}



void FUN_005ac550(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0xc] = 0;
  *in_ECX = &PTR_FUN_00a6c264;
  in_ECX[10] = 0;
  in_ECX[0xb] = 3;
  return;
}



void FUN_005ac5b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6c264;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005ac5e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  iVar2 = FUN_00578fe0();
  if (((iVar2 == iVar1) && (param_1 == 10)) && (0 < in_ECX[0xb])) {
    FUN_00579c10(DAT_00b383a0,0,1,DAT_00b38cf0,0);
    return 1;
  }
  return 0;
}



void FUN_005ac6a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  float10 fVar8;
  int local_4;
  
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x28) + 0x34);
  local_4 = -1;
  iVar2 = -1;
  iVar5 = -1;
  while (iVar4 = local_4, iVar3 = iVar5, puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
    fVar8 = (float10)FUN_00588bd0(0xfae);
    iVar5 = iVar3;
    local_4 = iVar4;
    if (fVar8 == (float10)2.0) {
      FUN_00588bd0(0xfaa);
      uVar6 = FUN_009828c0();
      iVar7 = FUN_00565be0(0,uVar6);
      iVar5 = iVar7;
      if (((iVar3 != -1) && (iVar5 = iVar3, local_4 = iVar7, iVar4 != -1)) &&
         (local_4 = iVar4, iVar2 == -1)) {
        iVar2 = iVar7;
      }
    }
  }
  FUN_0066c3e0(iVar3,iVar4,iVar2);
  return;
}



void FUN_005ac730(void)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    cVar1 = FUN_006ab160(0xffff,0,0);
    if (cVar1 != '\0') {
      FUN_006ab420();
    }
  }
  iVar2 = FUN_00589b70(0x403);
  if (iVar2 != 0) {
    iVar2 = FUN_005898f0();
    if (iVar2 != 0) {
      FUN_005ac6a0();
      FUN_0058ceb0(0x1772,0x40000000);
      FUN_00584740();
      return;
    }
  }
  return;
}



void FUN_005ac990(void)

{
  undefined2 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uVar3;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009c0518;
  local_14 = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_14;
  uVar1 = FUN_005e1fd0(uVar2);
  local_c = 0;
  uVar3 = DAT_00b38398;
  switch(uVar1) {
  case 1:
    uVar3 = DAT_00b38300;
    break;
  case 2:
    uVar3 = DAT_00b38308;
    break;
  case 3:
    uVar3 = DAT_00b38310;
    break;
  case 4:
    uVar3 = DAT_00b38318;
    break;
  case 5:
    uVar3 = DAT_00b38320;
    break;
  case 6:
    uVar3 = DAT_00b38328;
    break;
  case 7:
    uVar3 = DAT_00b38330;
    break;
  case 8:
    uVar3 = DAT_00b38338;
    break;
  case 9:
    uVar3 = DAT_00b38340;
    break;
  case 10:
    uVar3 = DAT_00b38348;
    break;
  case 0xb:
    uVar3 = DAT_00b38350;
    break;
  case 0xc:
    uVar3 = DAT_00b38358;
    break;
  case 0xd:
    uVar3 = DAT_00b38360;
    break;
  case 0xe:
    uVar3 = DAT_00b38368;
    break;
  case 0xf:
    uVar3 = DAT_00b38370;
    break;
  case 0x10:
    uVar3 = DAT_00b38378;
    break;
  case 0x11:
    uVar3 = DAT_00b38380;
    break;
  case 0x12:
    uVar3 = DAT_00b38388;
    break;
  case 0x13:
    uVar3 = DAT_00b38390;
  }
  FUN_004028d0(uVar3,0);
  FUN_0058ced0(0xfb0,0);
  FUN_00401f20(0);
  *unaff_FS_OFFSET = local_14;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005acb60(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [4];
  int local_140;
  undefined2 local_13c;
  undefined2 local_13a;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined2 local_12a;
  int local_128;
  int local_124;
  char local_120 [260];
  uint local_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009c0556;
  local_14 = *unaff_FS_OFFSET;
  local_1c = DAT_00b30aac ^ (uint)auStack_144;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffeb0;
  *unaff_FS_OFFSET = (int)&local_14;
  local_138 = 8;
  local_134 = 0;
  local_128 = in_ECX;
  do {
    iVar5 = local_134;
    iVar3 = FUN_00585410(*(undefined4 *)(in_ECX + 0x28),"levelup_template",0);
    if (iVar3 != 0) {
      uVar4 = FUN_00565be0(0,iVar5,uVar2);
      FUN_0058ceb0(0xfaa,(float)local_134);
      iVar5 = FUN_00664a20(uVar4);
      iVar3 = FUN_005f1910(uVar4);
      if (100 < iVar3 + iVar5) {
        iVar5 = FUN_005f1910(uVar4);
        iVar5 = 100 - iVar5;
      }
      if ((1 < iVar5) && (iVar3 = FUN_005f1910(uVar4), iVar3 < 100)) {
        local_130 = 0;
        local_12c = 0;
        local_12a = 0;
        local_c = 0;
        FUN_00402e30(&local_130,&DAT_00a6c2a0,iVar5);
        uVar6 = local_130;
        FUN_0058ced0(0xfb0,local_130);
        FUN_0058ceb0(0xfaf,0x40000000);
        local_c = 0xffffffff;
        FUN_00401f20(uVar6);
        local_130 = 0;
        local_12a = 0;
        local_12c = 0;
      }
      local_124 = FUN_005f1910(uVar4);
      FUN_0058ceb0(0xfb1,(float)local_124);
      uVar6 = FUN_00565cc0(uVar4);
      FUN_0058ced0(0xfb2,uVar6);
      uVar6 = FUN_00565d30(uVar4);
      FUN_0058ced0(0xfb3,uVar6);
      uVar6 = FUN_00565cc0(uVar4);
      local_140 = 0;
      local_13c = 0;
      local_13a = 0;
      FUN_004028d0(uVar6,0);
      local_c = 1;
      uVar7 = 0;
      do {
        cVar1 = *(char *)((-(uint)(local_140 != 0) & uVar7) + local_140);
        local_120[uVar7] = cVar1;
        if (cVar1 == ' ') {
          local_120[uVar7] = '_';
        }
      } while ((local_120[uVar7] != '\0') && (uVar7 = uVar7 + 1, (int)uVar7 < 0x100));
      local_120[0xff] = 0;
      FUN_004028d0(local_120,0);
      iVar5 = FUN_005f1910(uVar4);
      if (99 < iVar5) {
        FUN_0058ceb0(0xfb4,0);
        local_138 = local_138 + -1;
      }
      local_c = 0xffffffff;
      FUN_00401f20(local_140);
      local_140 = 0;
      local_13a = 0;
      local_13c = 0;
      in_ECX = local_128;
      iVar5 = local_134;
    }
    local_134 = iVar5 + 1;
  } while (local_134 < 8);
  if (*(int *)(in_ECX + 0x2c) < local_138) {
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c);
  }
  else {
    *(int *)(in_ECX + 0x2c) = local_138;
  }
  *unaff_FS_OFFSET = local_14;
  return;
}



undefined4 FUN_005ace20(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float fStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00589b70(0x403,uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  iVar3 = FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  fStack_14 = (float)fVar7;
  uVar4 = FUN_00590420("Data\\Menus\\levelup_menu.xml");
  piVar5 = (int *)FUN_005898f0();
  if (piVar5 == (int *)0x0) {
LAB_005ad0b1:
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  iVar6 = (**(code **)(*piVar5 + 0x34))();
  if (iVar6 != 0x403) {
    if (piVar5[1] != 0) {
      (**(code **)*piVar5)(1);
    }
    goto LAB_005ad0b1;
  }
  uVar4 = FUN_009832e6(uVar4,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar4);
  iVar6 = FUN_009832e6(piVar5,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14104,0);
  if (*(int *)(iVar6 + 0x28) == 0) {
    FUN_004a7a60("Level Up  Menu Creation Failed... Are your menu and art resources up to date?");
    goto LAB_005ad0b1;
  }
  fVar7 = (float10)FUN_00588bd0(0xfa5);
  if (fVar7 != (float10)6006.0) {
    fVar7 = (float10)FUN_00588bd0(0xfa5);
    if (fVar7 != (float10)102.0) goto LAB_005acf43;
  }
  FUN_0058ceb0(0xfab,fStack_14);
LAB_005acf43:
  fStack_14 = (float)(uint)(*(char *)(iVar3 + 8) != '\x01');
  FUN_0058ceb0(0xfae,(float)(int)fStack_14);
  uVar4 = FUN_00565d10(0);
  FUN_0058ced0(0xfb2,uVar4);
  uVar4 = FUN_00565cf0(0);
  FUN_0058ced0(0xfb3,uVar4);
  FUN_005ac990();
  fStack_14 = 0.0;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_4 = 0;
  uVar1 = FUN_005e1fd0();
  FUN_00402e30(&fStack_14,"%s %i",DAT_00b382f8,(uVar1 & 0xffff) + 1);
  FUN_0058ced0(0xfb1,fStack_14);
  *(undefined4 *)(iVar6 + 0x2c) = 3;
  FUN_005acb60();
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    FUN_006ab160(8,".\\Data\\Music\\Special\\success.mp3",0);
    FUN_006ab420();
  }
  FUN_0057de50(0x16);
  FUN_00585190(0);
  FUN_0058ceb0(0xfa1,0x40000000);
  if (*(int *)(iVar6 + 0x2c) == 0) {
    FUN_00579c10(DAT_00b383c0,&LAB_005acb40,1,DAT_00b38cf0,0);
    piVar5[9] = 4;
    FUN_0058ceb0(0xfa1,0x3f800000);
  }
  FUN_00401f20(fStack_14);
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ad0d0(void)

{
  uchar uVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  uchar *puVar6;
  undefined4 *in_ECX;
  undefined4 *puVar7;
  int iVar8;
  undefined **ppuVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_5b4 [28];
  float local_598;
  uchar local_590 [264];
  uchar local_488 [1028];
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  int local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_009c05a9;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)auStack_5b4;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffa40;
  *unaff_FS_OFFSET = (int)&local_4c;
  FUN_00584640(uVar5);
  iVar8 = 0;
  *in_ECX = &PTR_FUN_00a6c40c;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0xf] = 0xffffffff;
  in_ECX[10] = 0xffffffff;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)((int)in_ECX + 0x71) = 1;
  local_44 = 0;
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    FUN_006a9b40();
  }
  puVar7 = in_ECX + 0xb;
  local_598 = 0.0;
  do {
    pfVar2 = (float *)(&PTR_DAT_00b14120)[iVar8];
    if (pfVar2 == (float *)0x0) {
      FUN_004a7a60("Missing [LoadingBar] \'fPercentageOfBar%d\' in LoadingMenu::pSectionPercentage."
                  );
    }
    else {
      (&DAT_00b3b3dc)[iVar8] = *pfVar2;
      local_598 = *pfVar2 + local_598;
    }
    *puVar7 = 0;
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 < 4);
  if (local_598 <= 1.0) {
    fVar4 = 1.0 - local_598;
  }
  else {
    fVar4 = local_598 - 1.0;
  }
  if (0.01 <= fVar4) {
    __snprintf((char *)local_488,0x400,
               "Total value of [LoadingBar] percentages is not equal to 1.0000f in ini file.\r\n");
    ppuVar9 = &PTR_DAT_00b14120;
    do {
      pfVar2 = (float *)*ppuVar9;
      if (pfVar2 == (float *)0x0) {
        __snprintf((char *)local_590,0x104,"\t%s - NOT FOUND\r\n");
      }
      else {
        __snprintf((char *)local_590,0x104,"\t%s - %.04f\r\n",pfVar2[1],(double)*pfVar2);
      }
      puVar6 = local_488;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
      } while (uVar1 != '\0');
      __mbsnbcat(local_488,local_590,0x400 - ((int)puVar6 - (int)(local_488 + 1)));
      ppuVar9 = ppuVar9 + 1;
    } while ((int)ppuVar9 < 0xb14130);
    __snprintf((char *)local_590,0x104,"INI Total = %.04f",(double)local_598);
    puVar6 = local_488;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (uVar1 != '\0');
    __mbsnbcat(local_488,local_590,0x400 - ((int)puVar6 - (int)(local_488 + 1)));
    FUN_004a7a60(local_488);
  }
  iVar8 = FUN_00401f00();
  local_44._0_1_ = 1;
  local_598 = (float)iVar8;
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    GetTickCount();
    FUN_0047d150();
  }
  local_44 = (uint)local_44._1_3_ << 8;
  in_ECX[0x15] = iVar8;
  GetTickCount();
  FUN_0047d170();
  uVar3 = *(undefined4 *)(in_ECX[0x15] + 0x10);
  in_ECX[0x1a] = uVar3;
  in_ECX[0x1b] = uVar3;
  in_ECX[0x10] = _DAT_00b14158;
  *unaff_FS_OFFSET = local_4c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ad380(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  
  DAT_00b3b3dc = *param_1;
  fVar1 = *param_1;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  DAT_00b3b3e0 = param_1[1];
  fVar2 = param_1[1];
  *(undefined4 *)(in_ECX + 0x30) = 0;
  _DAT_00b3b3e4 = param_1[2];
  fVar3 = param_1[2];
  *(undefined4 *)(in_ECX + 0x34) = 0;
  _DAT_00b3b3e8 = param_1[3];
  fVar4 = param_1[3];
  *(undefined4 *)(in_ECX + 0x38) = 0;
  fVar4 = fVar4 + fVar3 + fVar2 + fVar1 + 0.0;
  if (fVar4 != 1.0) {
    FUN_004a7a60("Total value of [LoadingBar] percentages is not equal to 1.0f in SetSectionPercentages(). It is currently %0.2f"
                 ,(double)fVar4);
    return;
  }
  return;
}



undefined4 FUN_005ad410(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3ef);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



void FUN_005ad440(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar7 = (int)param_1;
  if (DAT_00b33a98 == 0) {
    FUN_0058ceb0(0xfae,0);
    return;
  }
  if ((*(int *)(in_ECX + 0x50) == 0) && (*(int *)(in_ECX + 0x4c) == 0)) {
    iVar6 = 0;
    if (param_1 != (int *)0x0) {
      switch(*(undefined1 *)((int)param_1 + 4)) {
      case 0x30:
        iVar6 = FUN_004c9cf0();
        break;
      case 0x31:
      case 0x32:
      case 0x33:
        iVar6 = FUN_004d6670();
        break;
      case 0x35:
        iVar6 = (int)param_1;
      }
    }
    param_1 = (int *)(DAT_00b33a98 + 0x9c);
    local_8 = 0;
    local_4 = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_2c = 0;
    local_24 = 0;
    local_28 = 0;
    if (param_1 != (int *)0x0) {
      do {
        iVar3 = *param_1;
        if (iVar3 != 0) {
          cVar2 = FUN_004f9bb0(iVar7);
          if (cVar2 == '\0') {
            if ((iVar6 == 0) || (cVar2 = FUN_004f9bb0(iVar6), cVar2 == '\0')) goto LAB_005ad54a;
            local_28 = local_28 + 1;
          }
          else {
            cVar2 = FUN_004f9a20();
            if (cVar2 == '\0') {
              if (iVar7 == 0) goto LAB_005ad54a;
              local_24 = local_24 + 1;
            }
            else {
              local_2c = local_2c + 1;
            }
          }
          FUN_00446cb0(iVar3);
        }
LAB_005ad54a:
        param_1 = (int *)param_1[1];
      } while (param_1 != (int *)0x0);
      param_1 = (int *)0x0;
    }
    iVar7 = 0;
    do {
      local_30 = 0;
      if (iVar7 == 0) {
        param_1 = &local_18;
        iVar6 = local_24;
LAB_005ad5a6:
        local_30 = 1;
      }
      else {
        if (iVar7 == 1) {
          param_1 = &local_10;
          iVar6 = local_28;
          goto LAB_005ad5a6;
        }
        iVar6 = 0;
        if (iVar7 == 2) {
          param_1 = &local_8;
          iVar6 = local_2c;
          local_30 = local_2c;
        }
      }
      iVar7 = iVar7 + 1;
      while ((0 < local_30 && (0 < iVar6))) {
        iVar3 = FUN_0047df80(0);
        iVar4 = 0;
        piVar8 = param_1;
        if (0 < iVar3 % iVar6) {
          do {
            piVar8 = (int *)piVar8[1];
            if (piVar8 == (int *)0x0) goto LAB_005ad656;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3 % iVar6);
        }
        if ((piVar8 != (int *)0x0) && ((piVar8[1] != 0 || (*piVar8 != 0)))) {
          iVar3 = *piVar8;
          if (iVar3 != 0) {
            iVar4 = *(int *)(in_ECX + 0x50);
            piVar1 = (int *)(in_ECX + 0x4c);
            while (iVar4 != 0) {
              piVar1 = (int *)piVar1[1];
              iVar4 = piVar1[1];
            }
            if (*piVar1 == 0) {
              *piVar1 = iVar3;
            }
            else {
              piVar5 = (int *)FUN_00401f00(8);
              if (piVar5 == (int *)0x0) {
                piVar1[1] = 0;
              }
              else {
                *piVar5 = iVar3;
                piVar5[1] = 0;
                piVar1[1] = (int)piVar5;
              }
            }
          }
          FUN_0065c620(*piVar8);
          iVar6 = iVar6 + -1;
        }
LAB_005ad656:
        local_30 = local_30 + -1;
      }
    } while (iVar7 < 3);
    while (local_14 != 0) {
      iVar7 = *(int *)(local_14 + 4);
      FUN_00401f20(local_14);
      local_14 = iVar7;
    }
    local_18 = 0;
    local_14 = 0;
    while (local_c != 0) {
      iVar7 = *(int *)(local_c + 4);
      FUN_00401f20(local_c);
      local_c = iVar7;
    }
    local_10 = 0;
    local_c = 0;
    while (local_4 != 0) {
      iVar7 = *(int *)(local_4 + 4);
      FUN_00401f20(local_4);
      local_4 = iVar7;
    }
  }
  return;
}



void FUN_005ad700(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x50) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x50));
    *(int *)(in_ECX + 0x50) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  FUN_005ad440(param_1);
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  return;
}



void FUN_005ad750(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3ef);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_005ad700(param_1);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005ad780(float param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  int in_ECX;
  char *pcVar12;
  char *pcVar13;
  int *unaff_FS_OFFSET;
  float10 fVar14;
  float local_220;
  char *local_21c;
  undefined2 local_218;
  undefined2 local_216;
  char acStack_212 [514];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c05eb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_220;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffdd0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_220 = param_1;
  FUN_00588bd0(0xfae);
  iVar6 = FUN_009828c0(uVar5);
  piVar2 = (int *)(in_ECX + 0x4c);
  do {
    piVar4 = piVar2;
    if (piVar4 == (int *)0x0) goto LAB_005ad947;
    piVar2 = (int *)piVar4[1];
  } while (((piVar2 != (int *)0x0) || (*piVar4 != 0)) &&
          (bVar3 = 0 < iVar6, iVar6 = iVar6 + -1, bVar3));
  if ((piVar2 != (int *)0x0) || (*piVar4 != 0)) {
    iVar6 = *piVar4;
    puVar7 = *(undefined1 **)(iVar6 + 0x1c);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_00a2f7ec;
    }
    local_21c = (char *)0x0;
    local_218 = 0;
    local_216 = 0;
    FUN_004028d0(puVar7,0);
    pcVar13 = local_21c;
    local_4 = 0;
    pcVar8 = _strstr(local_21c,"Menus\\Loading");
    if (pcVar8 == (char *)0x0) {
      puVar7 = *(undefined1 **)(iVar6 + 0x1c);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_00a2f7ec;
      }
      uVar9 = FUN_004f96f0(puVar7);
      FUN_00402e30(&local_21c,&DAT_00a2f884,uVar9);
      pcVar13 = local_21c;
    }
    FUN_0058ced0(0xfaf,pcVar13);
    pcVar10 = (char *)(**(code **)(*(int *)(iVar6 + 0x24) + 0x10))(0,0x43534544);
    pcVar8 = pcVar10 + 1;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    pcVar11 = (char *)(**(code **)(*(int *)(iVar6 + 0x24) + 0x10))(0,0x43534544);
    pcVar12 = acStack_212 + 2;
    do {
      cVar1 = *pcVar11;
      *pcVar12 = cVar1;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    if (pcVar10[(int)(acStack_212 + (1 - (int)pcVar8))] == '\n') {
      pcVar10[(int)(acStack_212 + (1 - (int)pcVar8))] = '\0';
    }
    if (pcVar10[(int)(acStack_212 + -(int)pcVar8)] == '\n') {
      pcVar10[(int)(acStack_212 + -(int)pcVar8)] = '\0';
    }
    if (pcVar10[(int)(acStack_212 + (-1 - (int)pcVar8))] == '\n') {
      pcVar10[(int)(acStack_212 + (-1 - (int)pcVar8))] = '\0';
    }
    FUN_0058ced0(0xfb0,acStack_212 + 2);
    fVar14 = (float10)FUN_00588bd0(0xfae);
    local_220 = (float)(fVar14 + (float10)1.0);
    FUN_0058ceb0(0xfae,local_220);
    FUN_00401f20(pcVar13);
  }
LAB_005ad947:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005ad980(char param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  int iVar7;
  undefined4 *puVar8;
  DWORD DVar9;
  int iVar10;
  
  iVar3 = FUN_00589b70(0x3ef);
  if (iVar3 != 0) {
    iVar4 = FUN_005898f0();
    if (iVar4 != 0) {
      iVar5 = FUN_005898f0();
      DVar6 = GetTickCount();
      FUN_0047d170(DVar6);
      iVar4 = *(int *)(*(int *)(iVar5 + 0x54) + 0x10);
      iVar7 = iVar4 - *(int *)(iVar5 + 0x68);
      iVar10 = iVar4 - *(int *)(iVar5 + 0x6c);
      if (DAT_00b14160 < iVar7) {
        *(int *)(iVar5 + 100) = *(int *)(iVar5 + 100) + 1;
      }
      else if ((*(int *)(iVar5 + 100) < *(int *)(iVar5 + 0x3c)) &&
              ((DAT_00b14168 < iVar7 ||
               ((*(char *)(iVar5 + 0x70) != '\0' && (DAT_00b14170 < iVar7)))))) {
        *(int *)(iVar5 + 100) = *(int *)(iVar5 + 100) + 1;
      }
      fVar1 = (float)iVar10;
      if (iVar10 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      fVar1 = *(float *)(iVar5 + 0x40) - fVar1 / 1000.0;
      *(float *)(iVar5 + 0x40) = fVar1;
      if ((fVar1 <= 0.0) || (bVar2 = false, param_1 != '\0')) {
        bVar2 = true;
      }
      iVar7 = *(int *)(iVar5 + 100);
      iVar10 = *(int *)(iVar5 + 0x60);
      if (((iVar7 != iVar10) || (bVar2)) && (iVar10 < 100)) {
        if (iVar10 != iVar7) {
          *(undefined4 *)(iVar5 + 0x68) = *(undefined4 *)(*(int *)(iVar5 + 0x54) + 0x10);
          *(int *)(iVar5 + 0x60) = iVar7;
        }
        iVar7 = *(int *)(iVar5 + 0x60);
        FUN_0058ceb0(0xfb1,(float)iVar7);
        if ((float)iVar7 < 99.9999) {
          if (bVar2) {
            FUN_005ad780(iVar3);
            puVar8 = (undefined4 *)FUN_00403c00();
            *(undefined4 *)(iVar5 + 0x40) = *puVar8;
          }
          iVar3 = FUN_00582160(0,1);
          if (iVar3 != 0) {
            if (g_IOManager_singleton != 0) {
              FUN_00432860();
            }
            FUN_00582160(0,1);
            FUN_00583f40();
            FUN_00579260(0);
            FUN_005792b0();
            if (g_IOManager_singleton != 0) {
              FUN_00432890();
            }
          }
        }
      }
      *(int *)(iVar5 + 0x6c) = iVar4;
      DVar6 = *(DWORD *)(DAT_00b33398 + 0x10);
      DVar9 = GetCurrentThreadId();
      if (DVar9 == DVar6) {
        FUN_0060d0a0();
        return;
      }
    }
  }
  return;
}



void FUN_005adb40(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00589b70(0x3ef);
  if ((((iVar2 != 0) && (iVar2 = FUN_005898f0(), iVar2 != 0)) &&
      (*(char *)(DAT_00b333a0 + 0x51) == '\0')) && (*(char *)(DAT_00b333a0 + 0x52) == '\0')) {
    iVar2 = FUN_005898f0();
    if (*(char *)(iVar2 + 0x71) != '\0') {
      FUN_00404c60(1);
      *(undefined1 *)(iVar2 + 0x71) = 0;
    }
    iVar1 = *(int *)(iVar2 + 0x60);
    *(undefined1 *)(iVar2 + 0x70) = 1;
    *(undefined4 *)(iVar2 + 0x3c) = 100;
    while (iVar1 < 100) {
      FUN_005ad980(0);
      iVar1 = *(int *)(iVar2 + 0x60);
    }
    *(undefined1 *)(iVar2 + 0x70) = 0;
  }
  return;
}



void FUN_005adbc0(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0628;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6c40c;
  local_4 = 0;
  in_ECX[0xf] = 100;
  cVar3 = FUN_0040fda0(uVar4);
  if (cVar3 == '\0') {
    FUN_005adb40();
  }
  FUN_00583df0(0xff);
  iVar1 = in_ECX[0x14];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0x14] + 4);
    FUN_00401f20(in_ECX[0x14]);
    in_ECX[0x14] = iVar1;
  }
  in_ECX[0x13] = 0;
  FUN_00401f20(in_ECX[0x15]);
  DAT_00b3a6d3 = 0;
  if ((*(int *)(DAT_00b33398 + 0x24) != 0) &&
     (((DAT_00b33428 == 0 || (*(int *)(DAT_00b33428 + 0x20) == 0)) ||
      (*(int *)(DAT_00b33428 + 0x20) == 2)))) {
    FUN_006a9c00();
  }
  FUN_00977c50(1);
  iVar1 = DAT_00b3f928;
  puVar5 = (undefined4 *)FUN_007b7650();
  puVar2 = *(undefined4 **)(iVar1 + 8);
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(iVar1 + 8) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005adcf0(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  
  puVar2 = (undefined4 *)FUN_00589b70(0x3ef);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_005a8fd0();
  FUN_00582160(0,1);
  fVar8 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\loading_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 == 0x3ef) {
    FUN_00583df0(0);
    uVar6 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
    FUN_00584880(uVar6);
    iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13270,0);
    fVar9 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar9 == (float10)6006.0) ||
       (fVar9 = (float10)FUN_00588bd0(0xfa5), fVar9 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar8);
    }
    iVar7 = FUN_00582160(0,1);
    *(undefined1 *)(iVar7 + 8) = 2;
    FUN_005a6040(1,1);
    FUN_005a4980(0,0,0);
    FUN_00578d50(0);
    *(undefined4 *)(iVar5 + 0x44) = param_1;
    FUN_0058ced0(0xfb3,&DAT_00a36430);
    FUN_005ad440(*(undefined4 *)(iVar5 + 0x44));
    FUN_005ad780(uVar3);
    if ((DAT_00b333c4 != 0) && (cVar1 = FUN_0040fda0(), cVar1 == '\0')) {
      FUN_00410b00();
    }
    FUN_0058fba0(0);
    FUN_0058fba0(0);
    puVar2 = (undefined4 *)FUN_00589b70(0x3f4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    FUN_00579260(0);
    FUN_005792b0();
    FUN_00579260(0);
    FUN_005792b0();
    FUN_00977c50(0);
    return uVar3;
  }
  if (piVar4[1] == 0) {
    return 0;
  }
  (**(code **)*piVar4)(1);
  return 0;
}



void FUN_005adec0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = FUN_00589b70(0x3ef);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_0058fba0(0);
    iVar1 = FUN_005898f0();
    if (*(int *)(iVar1 + 0x3c) < 100) {
      FUN_00572f60(0);
    }
    if (DAT_00b14130 != '\0') {
      if (*(int *)(iVar1 + 0x28) == param_1) {
        iVar2 = FUN_009828c0();
        if (DAT_00b3b3ec < iVar2) {
          DAT_00b3b3ec = iVar2;
          FUN_00404ee0("Loading Bar Section %d %d0%%",param_1,iVar2);
        }
      }
      else {
        FUN_00404ee0("Loading Bar Section %d",param_1);
        DAT_00b3b3ec = 0;
      }
    }
    iVar2 = *(int *)(iVar1 + 0x28);
    if (param_1 < iVar2) {
      FUN_004a7a60("LoadingMenu sections loading out of order. Trying to use (%d:%d%%) but (%d:%d%%) was our last section."
                   ,param_1,*(undefined4 *)(iVar1 + 0x2c + param_1 * 4),iVar2,
                   *(undefined4 *)(iVar1 + 0x2c + iVar2 * 4));
      iVar2 = param_1 + 1;
      *(int *)(iVar1 + 0x28) = param_1;
      if (iVar2 < 4) {
        puVar4 = (undefined4 *)(iVar1 + 0x2c + iVar2 * 4);
        for (iVar5 = 4 - iVar2; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
    }
    iVar2 = *(int *)(iVar1 + 0x28);
    while (iVar2 < param_1) {
      if (*(int *)(iVar1 + 0x28) != -1) {
        *(undefined4 *)(iVar1 + 0x2c + *(int *)(iVar1 + 0x28) * 4) = 100;
      }
      *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 1;
      iVar2 = *(int *)(iVar1 + 0x28);
    }
    if ((iVar2 == param_1) && ((float)*(int *)(iVar1 + 0x2c + param_1 * 4) < param_2)) {
      uVar3 = FUN_009828c0();
      *(undefined4 *)(iVar1 + 0x2c + param_1 * 4) = uVar3;
    }
    puVar4 = &DAT_00b3b3dc;
    do {
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < 0xb3b3ec);
    uVar3 = FUN_009828c0();
    *(undefined4 *)(iVar1 + 0x3c) = uVar3;
    FUN_005ad980(0);
    FUN_005ad440(*(undefined4 *)(iVar1 + 0x44));
    FUN_00582160(0,1);
    FUN_0057e150();
    return;
  }
  return;
}



void FUN_005ae060(byte param_1)

{
  FUN_005adbc0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005ae080(void)

{
  int iVar1;
  undefined4 uVar2;
  
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
      iVar1 = FUN_00589b70();
      if (iVar1 != 0) {
        uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b132fc);
        iVar1 = FUN_009832e6(uVar2);
        if (iVar1 != 0) {
          FUN_005bda20();
          return;
        }
      }
    }
  }
  return;
}



void FUN_005ae140(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  FUN_00582160(0,1);
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar1 = FUN_009828c0();
  fVar2 = (float10)FUN_00588cf0();
  *(float *)(in_ECX + 0x50) = (float)(fVar2 - (float10)iVar1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005ae240(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  char *local_724;
  int local_714;
  undefined1 *local_710;
  undefined1 local_70c [300];
  undefined1 local_5e0 [300];
  char local_4b4 [300];
  undefined1 local_388 [300];
  undefined1 local_25c [300];
  char local_130 [300];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_714;
  if ((*(byte *)(DAT_00b33b00 + 0x1a) & 1) == 0) {
    piVar1 = *(int **)(in_ECX + 0x54);
    if (param_1 == -1) {
      local_724 = (char *)0x3f800000;
      FUN_0058ceb0(0xfa1);
      local_724 = "";
      FUN_0058ced0(0xfde);
    }
    else {
      iVar2 = 0;
      while( true ) {
        if (piVar1 == (int *)0x0) {
          return;
        }
        if (*piVar1 == 0) {
          return;
        }
        if (param_1 == iVar2) break;
        piVar1 = (int *)piVar1[1];
        iVar2 = iVar2 + 1;
      }
      local_724 = (char *)0x0;
      iVar2 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x40),0,&PTR_PTR_00b13240,&PTR_PTR_00b13550);
      if (iVar2 != 0) {
        local_710 = (undefined1 *)&local_724;
        local_724 = (char *)0x0;
        FUN_00591a80();
        local_724 = (char *)0x40000000;
        FUN_0058ceb0(0xfa1);
      }
      local_724 = (char *)0x0;
      iVar3 = FUN_004610f0(*piVar1,0,local_388,local_5e0,local_25c,local_70c,local_4b4,0,&local_714)
      ;
      local_724 = local_4b4;
      _sprintf(local_130,"%s\n%s\n%s\n%s\n%s",local_388,local_5e0,local_25c,local_70c);
      local_724 = local_130;
      FUN_0058ced0(0xfde);
      local_724 = (char *)(float)local_714;
      FUN_0058ceb0(0xfae);
      if (iVar2 == 0) {
        if (iVar3 == 0) {
          return;
        }
      }
      else {
        local_710 = (undefined1 *)&local_724;
        FUN_00405070(iVar3);
        FUN_00591a80();
        if (iVar3 == 0) {
          local_724 = (char *)0x3f800000;
          FUN_0058ceb0(0xfa1);
          local_724 = DAT_00b38750;
          FUN_0058ced0(0xfde);
          return;
        }
      }
      local_724 = (char *)0x5ae408;
      FUN_00401050();
    }
  }
  return;
}



void FUN_005ae430(void)

{
  int iVar1;
  
  FUN_00589b70(0x40e);
  iVar1 = FUN_005898f0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  }
  return;
}



void FUN_005ae450(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0813;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar1);
  *in_ECX = &PTR_FUN_00a6c6bc;
  in_ECX[0x17] = 0;
  *(undefined2 *)(in_ECX + 0x18) = 0;
  *(undefined2 *)((int)in_ECX + 0x62) = 0;
  in_ECX[0x14] = 0;
  in_ECX[10] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x16] = 0;
  FUN_00401f20(in_ECX[0x17]);
  in_ECX[0x17] = 0;
  *(undefined2 *)((int)in_ECX + 0x62) = 0;
  *(undefined2 *)(in_ECX + 0x18) = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005ae4f0(void)

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
  *in_ECX = &PTR_FUN_00a6c6bc;
  FUN_00401f20(in_ECX[0x17],uVar1);
  in_ECX[0x17] = 0;
  *(undefined2 *)((int)in_ECX + 0x62) = 0;
  *(undefined2 *)(in_ECX + 0x18) = 0;
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005ae560(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  if (param_2 != 0) {
    if (param_1 < 0x65) {
      if (*(int *)(in_ECX + 0x2c) != 0) {
        FUN_0058ceb0(0xfa1,0x3f800000);
      }
    }
    else {
      FUN_0057de50(4);
      *(undefined4 *)(in_ECX + 0x30) = 0;
      if (*(int *)(in_ECX + 0x2c) != 0) {
        fVar2 = (float10)FUN_00588d90();
        fVar3 = (float10)FUN_00588bd0(0xfbd);
        FUN_0058ceb0(0xfab,(float)((float10)(double)fVar2 - fVar3));
        fVar2 = (float10)FUN_00588bd0(0xfcb);
        FUN_0058ceb0(0xfcb,(float)(fVar2 - (float10)2.0));
        fVar2 = (float10)FUN_00588bd0(0xfca);
        FUN_0058ceb0(0xfca,(float)(fVar2 - (float10)2.0));
        fVar2 = (float10)FUN_00588c50();
        FUN_0058ceb0(0xfad,(float)fVar2);
        fVar2 = (float10)FUN_00588cf0();
        FUN_0058ceb0(0xfac,(float)fVar2);
        FUN_0058ceb0(0xfa1,0x40000000);
        *(int *)(in_ECX + 0x30) = param_2;
        FUN_00588bd0(0xfae);
        uVar1 = FUN_009828c0();
        FUN_005ae240(uVar1);
        return;
      }
    }
  }
  return;
}



void FUN_005ae6b0(byte param_1)

{
  FUN_005ae4f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005ae6d0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int in_ECX;
  int iVar7;
  int *unaff_FS_OFFSET;
  int local_320;
  undefined4 local_31c;
  undefined2 local_318;
  undefined2 local_316;
  char local_310 [512];
  char local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c083b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_320;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffcd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == 0) {
    _DAT_00b3b3f0 = 0;
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x48);
  local_31c = 0;
  local_318 = 0;
  local_316 = 0;
  FUN_004028d0("save_game_template",0);
  local_4 = 0;
  iVar5 = FUN_00585410(uVar2,local_31c,0);
  if (param_3 == 0) {
    _sprintf(param_1,DAT_00b38700,uVar4);
    if ((*(byte *)(DAT_00b33b00 + 0x1a) & 1) == 0) {
      FUN_0058ceb0(0xfa1,0x3f800000);
      FUN_0058ced0(0xfde,&DAT_00a2f7ec);
    }
  }
  else {
    FUN_00464060(param_3,&local_320,local_110,local_310,local_310 + 0x100);
    pcVar6 = local_110;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (pcVar6 == local_110 + 1) {
      _sprintf(param_1,"%s %i - %s\n%s: %s",DAT_00b386f0,local_320,local_310,DAT_00b386f8,
               local_310 + 0x100);
    }
    else {
      _sprintf(param_1,"%s\n%s: %s",local_110,DAT_00b386f8,local_310 + 0x100);
      _DAT_00b3b3f0 = _DAT_00b3b3f0 + 1;
    }
  }
  if (iVar5 != 0) {
    FUN_0058ceb0(0xfae,(float)param_2);
    iVar7 = 0;
    do {
      pcVar6 = local_310 + iVar7;
      cVar1 = pcVar6[(int)param_1 - (int)local_310];
      *pcVar6 = cVar1;
      if (cVar1 == ' ') {
        *pcVar6 = '_';
      }
    } while ((*pcVar6 != '\0') && (iVar7 = iVar7 + 1, iVar7 < 0x100));
    local_310[0xff] = 0;
    FUN_004028d0(local_310,0);
    FUN_0058ced0(0xfb1,param_1);
    local_320 = param_2 + 0x65;
    FUN_0058ceb0(0xfa8,(float)local_320);
    if ((param_1 == (char *)0x0) || (*(char **)(in_ECX + 0x5c) == (char *)0x0)) {
      iVar7 = (uint)(param_1 == (char *)0x0) * 2 + -1;
    }
    else {
      iVar7 = __stricmp(*(char **)(in_ECX + 0x5c),param_1);
    }
    if (iVar7 == 0) {
      FUN_00582160(0,1);
      iVar7 = FUN_00582160(0,1);
      *(int *)(iVar7 + 0x8c) = *(int *)(iVar7 + 0x8c) + 1;
      fVar3 = (float)*(int *)(iVar7 + 0x8c);
      if (*(int *)(iVar7 + 0x8c) < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      FUN_0058ceb0(0xff0,fVar3);
    }
  }
  FUN_00401f20(local_31c);
  *unaff_FS_OFFSET = local_c;
  return iVar5;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005ae980(void)

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
  FUN_00459400();
  FUN_0045d450();
  piVar4 = *(int **)(DAT_00b33b00 + 0x6c);
  iVar5 = 0;
  iVar3 = 0;
  *(int **)(in_ECX + 0x54) = piVar4;
  piVar2 = piVar4;
  if (piVar4 != (int *)0x0) {
    do {
      if (*piVar2 != 0) {
        iVar3 = iVar3 + 1;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
    if (iVar3 != 0) {
      do {
        if (*piVar4 == 0) {
          return;
        }
        FUN_005ae6d0(auStack_130,iVar5,*piVar4,iVar3);
        piVar4 = (int *)piVar4[1];
        iVar5 = iVar5 + 1;
      } while (piVar4 != (int *)0x0);
      return;
    }
  }
  FUN_005ae6d0(auStack_130,0,0,0);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_005aea60(char param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_144 [3];
  char cStack_141;
  int iStack_140;
  float fStack_13c;
  int *piStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [300];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_144;
  puVar2 = (undefined4 *)FUN_00589b70(0x40e);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00582160(0,1);
  fVar9 = (float10)thunk_FUN_00584980();
  fStack_13c = (float)fVar9;
  uVar3 = FUN_00590420("Data\\Menus\\Options\\load_menu.xml");
  uStack_134 = uVar3;
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  piStack_138 = piVar4;
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 != 0x40e) {
    if (piVar4[1] == 0) {
      return 0;
    }
    (**(code **)*piVar4)(1);
    return 0;
  }
  uVar3 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar3);
  iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14178,0);
  iStack_140 = iVar5;
  fVar9 = (float10)FUN_00588bd0(0xfa5);
  if ((fVar9 == (float10)6006.0) || (fVar9 = (float10)FUN_00588bd0(0xfa5), fVar9 == (float10)102.0))
  {
    FUN_0058ceb0(0xfab,fStack_13c);
  }
  if (param_1 != '\0') {
    FUN_0058ceb0(0xfa1,0x3f800000);
  }
  cStack_141 = FUN_0045e6a0();
  iVar7 = 0;
  iVar8 = 0;
  iVar6 = FUN_00589b70(0x414);
  if ((iVar6 == 0) || (cStack_141 != '\0')) {
    FUN_0045d450();
  }
  piVar1 = *(int **)(DAT_00b33b00 + 0x6c);
  *(int **)(iVar5 + 0x54) = piVar1;
  iVar5 = 0;
  piVar4 = piVar1;
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar4 != 0) {
        iVar5 = iVar5 + 1;
      }
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
    uVar3 = uStack_134;
    if (iVar5 != 0) goto joined_r0x005aebfa;
  }
  iVar8 = FUN_005ae6d0(auStack_130,0,0,0);
  uVar3 = uStack_134;
joined_r0x005aebfa:
  for (; (uStack_134 = uVar3, piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
    iVar6 = FUN_005ae6d0(auStack_130,iVar7,*piVar1,iVar5);
    if (iVar8 == 0) {
      iVar8 = iVar6;
    }
    iVar7 = iVar7 + 1;
    uVar3 = uStack_134;
  }
  FUN_0058fba0(0);
  FUN_00585190(0);
  uVar11 = 0;
  uVar10 = 0xfdd;
  FUN_00582160(0,1,iVar8,0xfdd,0);
  FUN_0057f9f0(iVar8,uVar10,uVar11);
  return uVar3;
}



undefined4 FUN_005aedf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  float10 fVar5;
  
  iVar2 = (**(code **)(*in_ECX + 0x34))();
  iVar3 = FUN_00578fe0();
  if ((iVar3 == iVar2) && (param_1 == 0xb)) {
    iVar2 = FUN_00582160(0,1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x88);
    }
    if ((iVar2 != 0) && (fVar5 = (float10)FUN_00588bd0(0xfa8), (float10)101.0 <= fVar5)) {
      piVar1 = (int *)in_ECX[0x15];
      FUN_00588bd0(0xfae);
      iVar4 = FUN_009828c0();
      iVar3 = 0;
      in_ECX[0x13] = 0;
      for (; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
        if (in_ECX[0x13] != 0) goto LAB_005aee93;
        if (iVar4 == iVar3) {
          in_ECX[0x13] = *piVar1;
        }
        iVar3 = iVar3 + 1;
      }
      if (in_ECX[0x13] != 0) {
LAB_005aee93:
        in_ECX[0x16] = iVar2;
        FUN_00579c10(DAT_00b38760,&LAB_005aeca0,1,DAT_00b38d00,DAT_00b38cf8,0);
        *(undefined1 *)(in_ECX + 0x19) = 1;
        return 1;
      }
    }
  }
  return 0;
}



undefined1 FUN_005af070(void)

{
  int in_ECX;
  
  if ((((((*(int *)(in_ECX + 0x144) != 0) && (*(int *)(in_ECX + 0x28) != 0)) &&
        (*(int *)(in_ECX + 0x34) != 0)) &&
       ((*(int *)(in_ECX + 0x2c) != 0 && (*(int *)(in_ECX + 0x178) != 0)))) &&
      ((*(int *)(in_ECX + 0x30) != 0 &&
       ((*(int *)(in_ECX + 0x9c) != 0 && (*(int *)(in_ECX + 0xc4) != 0)))))) &&
     ((*(int *)(in_ECX + 0xec) != 0 &&
      ((*(int *)(in_ECX + 0x114) != 0 && (*(int *)(in_ECX + 0x13c) != 0)))))) {
    return 1;
  }
  return 0;
}



int FUN_005af190(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(in_ECX + 0x98);
  iVar3 = 0;
  iVar1 = FUN_009828c0();
  do {
    if (param_1 < *piVar2 + iVar1) {
      if (iVar3 == -1) {
        return 4;
      }
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 10;
  } while (iVar3 < 5);
  return 4;
}



void FUN_005af200(void)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  
  *(undefined4 *)(in_ECX + 0x158) = 0;
  *(undefined4 *)(in_ECX + 0x14c) = 0;
  iVar4 = in_ECX + *(int *)(in_ECX + 0x160) * 0x28;
  *(undefined4 *)(in_ECX + 0x150) = 4;
  if (*(char *)(iVar4 + 0x95) == '\0') {
    *(float *)(iVar4 + 0x90) = -*(float *)(in_ECX + 0x6c);
  }
  uVar3 = FUN_005f23b0(0x1e);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else if (((uVar3 != 1) && (uVar3 != 2)) && (uVar3 != 3)) {
    uVar3 = (uVar3 != 4) - 1 & 4;
  }
  iVar4 = FUN_005e0f00(DAT_00b35ecc);
  if (iVar4 != 0) {
    uVar3 = uVar3 + 1;
  }
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x4c)) {
    pcVar5 = (char *)(in_ECX + 0x95);
    do {
      if (*pcVar5 != '\0') {
        if ((int)uVar3 < 1) {
          *pcVar5 = '\0';
          pcVar5[-1] = '\x01';
          pcVar5[1] = '\x01';
          fVar1 = *(float *)(in_ECX + 0x6c);
          pcVar5[-0xffffffff00000015] = -1;
          pcVar5[-0xffffffff00000014] = -1;
          pcVar5[-0xffffffff00000013] = -1;
          pcVar5[-0xffffffff00000012] = -1;
          *(float *)(pcVar5 + -5) = -fVar1;
          if ((*(int *)(pcVar5 + 0xb) != 0) && (cVar2 = FUN_006b7260(), cVar2 == '\0')) {
            FUN_006b7190(1);
          }
        }
        else {
          uVar3 = uVar3 - 1;
        }
      }
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 0x28;
    } while (iVar4 < *(int *)(in_ECX + 0x4c));
  }
  return;
}



void FUN_005af310(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  FUN_00584640();
  in_ECX[0x18] = 0x41000000;
  *in_ECX = &PTR_FUN_00a6c73c;
  in_ECX[0x19] = 0x40800000;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x51] = 0;
  iVar3 = 5;
  puVar2 = in_ECX + 0x24;
  do {
    *(undefined1 *)((int)puVar2 + 5) = 0;
    puVar2[-5] = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    *(undefined1 *)((int)puVar2 + 6) = 0;
    puVar2[3] = 0;
    in_ECX[0x1e] = 0;
    iVar3 = iVar3 + -1;
    puVar2[-2] = 0x3fc00000;
    puVar2[-1] = 0x3f800000;
    in_ECX[0x16] = 0;
    puVar2 = puVar2 + 10;
  } while (iVar3 != 0);
  in_ECX[0x58] = 0;
  in_ECX[0x5a] = 0xffffffff;
  in_ECX[0x52] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x5d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x55] = 0x40a00000;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 0x3f800000;
  uVar1 = DAT_00b33ea0;
  in_ECX[0x10] = DAT_00b33ea0;
  in_ECX[0x11] = uVar1;
  DAT_00b3b3f7 = 0;
  DAT_00b3b3f6 = 0;
  DAT_00b3b3f5 = 0;
  *(undefined1 *)(in_ECX + 0x5f) = 0;
  return;
}



void FUN_005af410(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6c73c;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_005af440(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  char *pcVar10;
  
  puVar2 = (undefined4 *)FUN_00589b70(0x3f6);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  iVar3 = FUN_00582160(0,1);
  fVar8 = (float10)thunk_FUN_00584980();
  uVar4 = FUN_00590420("Data\\Menus\\lockpick_menu.xml");
  piVar5 = (int *)FUN_005898f0();
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 0x34))();
    if (iVar6 == 0x3f6) {
      uVar4 = FUN_009832e6(uVar4,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar4);
      iVar6 = FUN_009832e6(piVar5,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13314,0);
      cVar1 = FUN_005af070();
      if (cVar1 == '\0') {
        FUN_004a7a60("LockPick Menu Creation Failed... Are your menu and art resources up to date?")
        ;
        return (int *)0x0;
      }
      fVar9 = (float10)FUN_00588bd0(0xfa5);
      if (fVar9 == (float10)102.0) {
        FUN_0058ceb0(0xfab,(float)fVar8);
      }
      FUN_0058ceb0(0xfae,(float)(*(char *)(iVar3 + 8) != '\x01'));
      *(undefined4 *)(iVar6 + 0x38) = param_1;
      uVar4 = FUN_005e0f00(DAT_00b35ec8);
      *(undefined4 *)(iVar6 + 0x3c) = uVar4;
      iVar3 = FUN_005e0f00(DAT_00b35ecc);
      *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + iVar3;
      uVar4 = FUN_004d7780();
      *(undefined4 *)(iVar6 + 0x48) = uVar4;
      FUN_0058ceb0(0xfb1,(float)*(int *)(iVar6 + 0x3c));
      iVar3 = FUN_004299e0(*(undefined4 *)(iVar6 + 0x48));
      if ((undefined4 *)(&PTR_DAT_00b03e1c)[iVar3] == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(&PTR_DAT_00b03e1c)[iVar3];
      }
      FUN_0058ced0(0xfb0,uVar4);
      iVar3 = (**(code **)(*DAT_00b333c4 + 0x284))(0x1e);
      if (iVar3 < 0x65) {
        iVar3 = (**(code **)(*DAT_00b333c4 + 0x284))(0x1e);
      }
      else {
        iVar3 = 100;
      }
      FUN_0058ceb0(0xfb2,(float)iVar3);
      iVar3 = FUN_004299e0(*(undefined4 *)(iVar6 + 0x48));
      if (iVar3 == 0) {
        *(undefined4 *)(iVar6 + 0x4c) = 1;
      }
      else {
        iVar3 = FUN_004299e0(*(undefined4 *)(iVar6 + 0x48));
        if (iVar3 == 1) {
          *(undefined4 *)(iVar6 + 0x4c) = 2;
        }
        else {
          iVar3 = FUN_004299e0(*(undefined4 *)(iVar6 + 0x48));
          if (iVar3 == 2) {
            *(undefined4 *)(iVar6 + 0x4c) = 3;
          }
          else {
            iVar3 = FUN_004299e0(*(undefined4 *)(iVar6 + 0x48));
            if (iVar3 == 3) {
              *(undefined4 *)(iVar6 + 0x4c) = 4;
            }
            else {
              *(undefined4 *)(iVar6 + 0x4c) = 5;
            }
          }
        }
      }
      *(undefined4 *)(iVar6 + 0x78) = 0;
      puVar2 = (undefined4 *)(iVar6 + 0x9c);
      iVar3 = 5;
      do {
        iVar7 = FUN_009832e6(*puVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13df4,0);
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0x58) = 0;
          FUN_0058fba0(0);
          iVar7 = *(int *)(iVar7 + 0x44);
          if ((iVar7 != 0) && (0.0 < *(float *)(iVar7 + 0x30))) {
            *(undefined4 *)(iVar6 + 0x78) = *(undefined4 *)(iVar7 + 0x30);
          }
        }
        puVar2 = puVar2 + 10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (*(float *)(iVar6 + 0x78) == 0.0) {
        *(undefined4 *)(iVar6 + 0x78) = 0x3f2aaaab;
      }
      iVar3 = 4;
      if (*(int *)(iVar6 + 0x4c) < 5) {
        puVar2 = (undefined4 *)(iVar6 + 0x11c);
        do {
          *(undefined1 *)((int)puVar2 + 0x19) = 1;
          *puVar2 = *(undefined4 *)(iVar6 + 0x78);
          iVar7 = FUN_009832e6(puVar2[8],0,&PTR_PTR_00b13240,&PTR_PTR_00b13df4,0);
          if (iVar7 != 0) {
            *puVar2 = *(undefined4 *)(iVar6 + 0x78);
            *(undefined4 *)(iVar7 + 0x58) = *(undefined4 *)(iVar6 + 0x78);
            FUN_0058fba0(0);
          }
          iVar3 = iVar3 + -1;
          puVar2 = puVar2 + -10;
        } while (*(int *)(iVar6 + 0x4c) <= iVar3);
      }
      iVar3 = *(int *)(DAT_00b33398 + 0x24);
      puVar2 = (undefined4 *)(iVar6 + 0x80);
      iVar7 = 5;
      do {
        if (iVar3 != 0) {
          uVar4 = FUN_006ade50("UILockTumblerMoveLP",0x31,1);
          puVar2[8] = uVar4;
        }
        *puVar2 = 0xffffffff;
        puVar2 = puVar2 + 10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      FUN_00588bd0(0xfb9);
      uVar4 = FUN_009828c0();
      *(undefined4 *)(iVar6 + 0x98) = uVar4;
      FUN_00588bd0(0xfba);
      uVar4 = FUN_009828c0();
      *(undefined4 *)(iVar6 + 0xc0) = uVar4;
      FUN_00588bd0(0xfbb);
      uVar4 = FUN_009828c0();
      *(undefined4 *)(iVar6 + 0xe8) = uVar4;
      FUN_00588bd0(0xfbc);
      uVar4 = FUN_009828c0();
      *(undefined4 *)(iVar6 + 0x110) = uVar4;
      FUN_00588bd0(0xfbd);
      uVar4 = FUN_009828c0();
      *(undefined4 *)(iVar6 + 100) = 0x3b449ba6;
      *(undefined4 *)(iVar6 + 0x138) = uVar4;
      *(undefined4 *)(iVar6 + 0x50) = 5;
      *(undefined4 *)(iVar6 + 0x68) = 0x3ba3d70a;
      *(undefined4 *)(iVar6 + 0x54) = 300;
      *(undefined4 *)(iVar6 + 0x60) = 0x3ca3d70a;
      *(undefined4 *)(iVar6 + 0x6c) = 0x3ca3d70a;
      *(undefined4 *)(iVar6 + 0x5c) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0x70) = 0x358637bd;
      *(float *)(iVar6 + 0x148) = (float)*(int *)(iVar6 + 0x98);
      *(undefined4 *)(iVar6 + 0x154) = 0x3eae147b;
      *(undefined4 *)(iVar6 + 0x15c) = 0x3ab78034;
      *(undefined4 *)(iVar6 + 0x58) = 0x3f666666;
      *(undefined4 *)(iVar6 + 0x74) = 0x41700000;
      uVar4 = DAT_00b33ea0;
      *(undefined4 *)(iVar6 + 0x40) = DAT_00b33ea0;
      *(undefined4 *)(iVar6 + 0x44) = uVar4;
      FUN_0058ced0(0xfae,DAT_00b38920);
      FUN_0058ced0(0xfae,DAT_00b38928);
      *(undefined4 *)(iVar6 + 0x164) = *(undefined4 *)(iVar6 + 0x160);
      FUN_00583df0(0);
      FUN_00579320(0,0);
      DAT_00b3b3f4 = 1;
      iVar3 = FUN_005e0f00(DAT_00b35ecc);
      if (iVar3 == 0) {
        pcVar10 = "Lockpicking\\Pick.NIF";
      }
      else {
        pcVar10 = "Lockpicking\\skeletonkeypick.nif";
      }
      FUN_0058ced0(0xfe6,pcVar10);
      if (DAT_00b3b43d != '\0') {
        FUN_005c1000();
      }
      FUN_00585190(0);
      return piVar5;
    }
    if (piVar5[1] != 0) {
      (**(code **)*piVar5)(1);
    }
  }
  return (int *)0x0;
}



void FUN_005af960(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_00583df0(0xff);
  iVar2 = FUN_00589b70(0x3f6);
  if (iVar2 != 0) {
    iVar2 = FUN_005898f0();
    if (iVar2 != 0) {
      iVar3 = FUN_009832e6(*(undefined4 *)(iVar2 + 0x144),0,&PTR_PTR_00b13240,&PTR_PTR_00b13df4,0);
      if (iVar3 == 0) {
        return;
      }
      if ((*(int *)(iVar3 + 0x44) == 0) && (*(int *)(iVar2 + 0x150) != 6)) {
        piVar4 = (int *)(iVar2 + 0xa0);
        iVar3 = 5;
        do {
          if (*piVar4 != 0) {
            FUN_006b73c0();
            iVar1 = *piVar4;
            if (iVar1 != 0) {
              FUN_006b73e0();
              FUN_00401f20(iVar1);
            }
          }
          piVar4 = piVar4 + 10;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        FUN_0058ceb0(0x1772,0x40000000);
        FUN_00584740();
        *(undefined4 *)(iVar2 + 0x150) = 6;
      }
    }
    FUN_00583df0(0xff);
  }
  return;
}



void FUN_005afa40(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x178) != 0) && (*(int *)(*(int *)(in_ECX + 0x178) + 0x44) == 0)) {
    *(undefined4 *)(in_ECX + 0x150) = 0;
    FUN_0058ceb0(0xfae,0x3f800000);
    FUN_0058fba0(0);
  }
  return;
}



void FUN_005afa80(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  uint uVar7;
  
  FUN_00403190(1);
  iVar5 = FUN_00403190(2);
  uVar6 = *(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x44);
  uVar7 = 100;
  if (uVar6 < 0x65) {
    uVar7 = uVar6;
  }
  if ((*(float *)(in_ECX + 0x158) != 0.0) || (*(float *)(in_ECX + 0x14c) != 0.0)) goto LAB_005afc52;
  piVar1 = (int *)(in_ECX + 0x98 + *(int *)(in_ECX + 0x160) * 0x28);
  fVar2 = ABS((float)*(int *)(in_ECX + 0x98 + *(int *)(in_ECX + 0x160) * 0x28) -
              *(float *)(in_ECX + 0x148));
  if (fVar2 <= 4.0) {
    if (fVar2 <= 1.0) {
      *(undefined1 *)(in_ECX + 0x170) = 1;
    }
    else {
      *(undefined1 *)(in_ECX + 0x170) = 0;
      if ((float)*piVar1 <= *(float *)(in_ECX + 0x148)) {
        fVar2 = *(float *)(in_ECX + 0x148);
        fVar3 = ((float)*(int *)(in_ECX + 0xc0) - (float)*(int *)(in_ECX + 0x98)) / 900.0;
        goto LAB_005afc1b;
      }
      fVar3 = ((float)*(int *)(in_ECX + 0xc0) - (float)*(int *)(in_ECX + 0x98)) / 900.0;
      fVar2 = (float)(int)uVar7;
      if (-1 < (int)uVar7) goto LAB_005afb5a;
      *(float *)(in_ECX + 0x148) = (fVar2 + 4.2949673e+09) * fVar3 + *(float *)(in_ECX + 0x148);
    }
  }
  else {
    *(undefined1 *)(in_ECX + 0x170) = 0;
    if ((float)*piVar1 <= *(float *)(in_ECX + 0x148)) {
      fVar2 = *(float *)(in_ECX + 0x148);
      fVar3 = ((float)*(int *)(in_ECX + 0xc0) - (float)*(int *)(in_ECX + 0x98)) / 300.0;
LAB_005afc1b:
      fVar4 = (float)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
      *(float *)(in_ECX + 0x148) = fVar2 - fVar4 * fVar3;
    }
    else {
      fVar3 = ((float)*(int *)(in_ECX + 0xc0) - (float)*(int *)(in_ECX + 0x98)) / 300.0;
      fVar2 = (float)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
LAB_005afb5a:
      *(float *)(in_ECX + 0x148) = fVar2 * fVar3 + *(float *)(in_ECX + 0x148);
    }
  }
  FUN_0058ceb0(0xfb0,*(undefined4 *)(in_ECX + 0x148));
LAB_005afc52:
  if (((iVar5 < -3) && (*(float *)(in_ECX + 0x158) == 0.0)) &&
     (fVar2 = ABS(*(float *)(in_ECX + 0x148) -
                  (float)*(int *)(in_ECX + 0x98 + *(int *)(in_ECX + 0x160) * 0x28)),
     fVar2 < 3.0 != (fVar2 == 3.0))) {
    *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(in_ECX + 0x154);
  }
  else {
    fVar2 = (float)(int)uVar7;
    if ((int)uVar7 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar3 = *(float *)(in_ECX + 0x158) - fVar2 * *(float *)(in_ECX + 0x15c);
    *(float *)(in_ECX + 0x158) = fVar3;
    fVar2 = fVar3 * fVar2 + *(float *)(in_ECX + 0x14c);
    *(float *)(in_ECX + 0x14c) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)(in_ECX + 0x158) = 0;
      *(undefined4 *)(in_ECX + 0x14c) = 0;
    }
  }
  iVar5 = FUN_009828c0();
  FUN_0058ceb0(0xfb1,(float)(0x122 - iVar5));
  return;
}



void FUN_005afd50(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  if (((*(int *)(DAT_00b33398 + 0x24) != 0) && (iVar2 = FUN_006ade50(param_1,0x121,1), iVar2 != 0))
     && (cVar1 = FUN_006b7260(), cVar1 == '\0')) {
    FUN_006b7190(0);
    FUN_006b73e0();
    FUN_00401f20(iVar2);
  }
  return;
}



void FUN_005afda0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  float10 fVar10;
  int unaff_retaddr;
  undefined4 uStack_c;
  
  uVar6 = FUN_0047df80(0);
  DAT_00b3b3fc = FUN_0047df80(DAT_00b33ea0);
  FUN_0047df80(uVar6);
  uVar7 = DAT_00b3b3fc & 1;
  if ((int)DAT_00b3b400 <= (int)uVar7) {
    uVar7 = uVar7 + 1;
  }
  DAT_00b3b400 = uVar7;
  iVar8 = (**(code **)(*DAT_00b333c4 + 0x284))(0x1e);
  if (iVar8 < 0x65) {
    iVar8 = (**(code **)(*DAT_00b333c4 + 0x284))(0x1e);
  }
  else {
    iVar8 = 100;
  }
  iVar9 = 0;
  if (9 < iVar8) {
    if (iVar8 < 0x14) {
      iVar9 = 1;
    }
    else if (iVar8 < 0x1e) {
      iVar9 = 2;
    }
    else if (iVar8 < 0x28) {
      iVar9 = 3;
    }
    else if (iVar8 < 0x32) {
      iVar9 = 4;
    }
    else if (iVar8 < 0x3c) {
      iVar9 = 5;
    }
    else if (iVar8 < 0x46) {
      iVar9 = 6;
    }
    else if (iVar8 < 0x50) {
      iVar9 = 7;
    }
    else if (iVar8 < 0x5a) {
      iVar9 = 8;
    }
    else if (iVar8 < 0x65) {
      iVar9 = 9;
    }
  }
  uVar6 = FUN_004299e0(*(undefined4 *)(in_ECX + 0x48));
  switch(uVar6) {
  case 0:
    if (iVar9 == 0) {
      fVar10 = (float10)fRam00b14198;
    }
    else {
      fVar10 = (float10)FUN_00410eb0(*(undefined4 *)(iVar9 * 4 + 0xb14194),
                                     *(undefined4 *)(iVar9 * 4 + 0xb14198),(float)(iVar9 * 10),
                                     (float)(iVar9 * 10 + 10),(float)iVar8);
    }
    break;
  case 1:
    if (iVar9 == 0) {
      fVar10 = (float10)fRam00b141c0;
    }
    else {
      fVar10 = (float10)FUN_00410eb0((&DAT_00b141bc)[iVar9],*(undefined4 *)(iVar9 * 4 + 0xb141c0),
                                     (float)(iVar9 * 10),(float)(iVar9 * 10 + 10),(float)iVar8);
    }
    break;
  case 2:
    if (iVar9 == 0) {
      fVar10 = (float10)fRam00b141e8;
    }
    else {
      fVar10 = (float10)FUN_00410eb0((&DAT_00b141e4)[iVar9],*(undefined4 *)(iVar9 * 4 + 0xb141e8),
                                     (float)(iVar9 * 10),(float)(iVar9 * 10 + 10),(float)iVar8);
    }
    break;
  case 3:
    if (iVar9 == 0) {
      fVar10 = (float10)fRam00b14210;
    }
    else {
      fVar10 = (float10)FUN_00410eb0((&DAT_00b1420c)[iVar9],*(undefined4 *)(iVar9 * 4 + 0xb14210),
                                     (float)(iVar9 * 10),(float)(iVar9 * 10 + 10),(float)iVar8);
    }
    break;
  case 4:
    if (iVar9 == 0) {
      fVar10 = (float10)fRam00b14238;
    }
    else {
      fVar10 = (float10)FUN_00410eb0((&DAT_00b14234)[iVar9],*(undefined4 *)(iVar9 * 4 + 0xb14238),
                                     (float)(iVar9 * 10),(float)(iVar9 * 10 + 10),(float)iVar8);
    }
    break;
  default:
    fVar10 = (float10)1;
  }
  uVar6 = FUN_0047df80(0);
  DAT_00b3b3fc = FUN_0047df80(DAT_00b33ea0);
  FUN_0047df80(uVar6);
  iVar8 = FUN_009828c0();
  fVar2 = (((float)fVar10 - 0.0) / 1.0) * (*(float *)(in_ECX + 0x68) - *(float *)(in_ECX + 100)) +
          *(float *)(in_ECX + 100);
  fVar3 = ((float)iVar8 - 0.0) / 1000.0;
  fVar4 = (*(float *)(in_ECX + 0x60) - *(float *)(in_ECX + 100)) * fVar3 + *(float *)(in_ECX + 100);
  if (fVar4 < fVar2) {
    fVar4 = fVar2;
  }
  iVar8 = in_ECX + unaff_retaddr * 0x28;
  uStack_c = (undefined4)
             (longlong)
             ROUND((float)*(int *)(in_ECX + 0x54) +
                   ((float)*(int *)(in_ECX + 0x50) - (float)*(int *)(in_ECX + 0x54)) * fVar3);
  *(undefined4 *)(iVar8 + 0x84) = uStack_c;
  *(float *)(iVar8 + 0x88) = fVar4;
  *(float *)(iVar8 + 0x8c) = (*(float *)(in_ECX + 0x70) / *(float *)(in_ECX + 100)) * fVar4;
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    iVar8 = unaff_retaddr * 5 + 0x14;
    piVar1 = (int *)(in_ECX + iVar8 * 8);
    if ((*(int *)(in_ECX + iVar8 * 8) != 0) && (cVar5 = FUN_006b7260(), cVar5 == '\0')) {
      FUN_006b73c0();
      iVar8 = *piVar1;
      if (iVar8 != 0) {
        FUN_006b73e0();
        FUN_00401f20(iVar8);
      }
    }
    iVar8 = FUN_006ade50("UILockTumblerMoveLP",0x31,1);
    *piVar1 = iVar8;
  }
  return;
}


