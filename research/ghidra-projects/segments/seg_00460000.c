
int FUN_004603e0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ae5ad;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0046b250(param_1,uVar1);
  iVar6 = 0;
  if (*param_2 != 2) {
    uVar3 = FUN_0046b250(param_2[1],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
    iVar6 = FUN_009832e6(uVar3);
    if (iVar6 == 0) {
      FUN_004a7a60("Bound object %08X no longer exists.  Reference %08X will not be created.",
                   param_2[1],param_1);
      iVar2 = 0;
      goto LAB_004606ab;
    }
  }
  if (iVar2 == 0) {
LAB_004604ac:
    iVar5 = *param_2;
    if ((iVar5 == 0) || (iVar5 == 3)) {
      if (*(char *)(iVar6 + 4) == '#') {
        iVar2 = FUN_00401f00(0x10c);
        uStack_4 = 0;
        if (iVar2 == 0) goto LAB_00460665;
        iVar2 = FUN_0060e4f0();
      }
      else if (*(char *)(iVar6 + 4) == '$') {
        iVar2 = FUN_00401f00(0x108);
        uStack_4 = 1;
        if (iVar2 == 0) goto LAB_00460665;
        iVar2 = FUN_006250a0();
      }
      else {
        iVar2 = FUN_00401f00(0x58);
        uStack_4 = 2;
        if (iVar2 == 0) {
LAB_00460665:
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_004d9a70();
        }
      }
      uStack_4 = 0xffffffff;
      FUN_009832e6(iVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      FUN_006c5420(iVar6);
LAB_00460699:
      FUN_0046c300(param_1,1);
    }
    else {
      if (iVar5 == 1) {
        iVar2 = FUN_00401f00(0x9c);
        uStack_4 = 3;
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_006078e0();
        }
        uStack_4 = 0xffffffff;
        FUN_009832e6(iVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
        FUN_006c5420(iVar6);
        goto LAB_00460699;
      }
      if (iVar5 == 2) {
        iVar6 = param_2[1];
        iVar2 = 0;
        if (iVar6 == 0) {
          iVar6 = FUN_00401f00(0x90);
          uStack_4 = 4;
          if (iVar6 == 0) {
LAB_004605ae:
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_00694cf0();
          }
        }
        else if (iVar6 == 1) {
          iVar6 = FUN_00401f00(0xa4);
          uStack_4 = 6;
          if (iVar6 == 0) goto LAB_004605ae;
          iVar2 = FUN_00696aa0();
        }
        else {
          if (iVar6 != 3) goto LAB_00460699;
          iVar6 = FUN_00401f00(0x9c);
          uStack_4 = 5;
          if (iVar6 == 0) goto LAB_004605ae;
          iVar2 = FUN_0069c0d0();
        }
        uStack_4 = 0xffffffff;
        goto LAB_00460699;
      }
      FUN_004a7a60("Invalid created reference type %i for form %08X with bound object %08X in location %08X"
                   ,iVar5,param_1,param_2[1],param_2[2]);
    }
    if (iVar2 == 0) goto LAB_004606ab;
  }
  else {
    piVar4 = (int *)FUN_009832e6(iVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    if ((piVar4 == (int *)0x0) ||
       (((*param_2 != 0 && (*param_2 != 3)) ||
        (iVar5 = (**(code **)(*piVar4 + 0x170))(), iVar5 != iVar6)))) {
      FUN_0045c7a0(iVar2);
      iVar2 = 0;
      goto LAB_004604ac;
    }
  }
  *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 0x200000;
LAB_004606ab:
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



void FUN_004606d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0046b250(param_1);
  if (iVar1 != 0) {
    FUN_0045c7a0(iVar1);
    return;
  }
  FUN_00452df0(param_1,1);
  return;
}



void FUN_00460710(undefined4 param_1,uint param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  int local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int aiStack_24 [9];
  
  piVar4 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  if (piVar4 == (int *)0x0) {
    iVar5 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
    if (iVar5 == 0) {
      return;
    }
    if ((param_2 & 0x4000000) == 0) {
      if ((param_2 & 0x2000000) == 0) {
        return;
      }
      iVar5 = FUN_004c9cf0();
      local_54 = FUN_0045e180(*(undefined4 *)(iVar5 + 0xc));
      local_52 = FUN_004c9a80();
      local_50 = FUN_004c9aa0();
      uVar11 = 6;
      piVar4 = (int *)&local_54;
      goto LAB_00460ba2;
    }
    iVar5 = FUN_004c9cf0();
    uVar3 = FUN_0045e180(*(undefined4 *)(iVar5 + 0xc));
    param_2 = CONCAT22(param_2._2_2_,uVar3);
    uVar1 = FUN_004c9a80();
    param_2._0_3_ = CONCAT12(uVar1,(undefined2)param_2);
    uVar1 = FUN_004c9aa0();
    param_2 = CONCAT13(uVar1,(undefined3)param_2);
LAB_00460b9b:
    uVar11 = 4;
    piVar4 = (int *)&param_2;
    goto LAB_00460ba2;
  }
  local_48[0] = 0;
  iVar5 = FUN_006ecc80();
  if (iVar5 == 0) {
    cVar2 = FUN_004db4a0();
    if (cVar2 == '\0') {
      FUN_004a7a60("Error saving reference %08X: Non-persistent reference has no parent cell",
                   piVar4[3]);
    }
    cVar2 = FUN_004db4a0();
    if ((cVar2 != '\0') && (iVar5 = FUN_0041ff80(), iVar5 == 0)) {
      FUN_004a7a60("Error saving reference %08X:Persistent reference has no parent cell and no persistent cell extra data"
                   ,piVar4[3]);
    }
    iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b03054,&PTR_PTR_00b05538,0);
    if ((iVar5 != 0) && (*(int **)(iVar5 + 0x58) != (int *)0x0)) {
      iVar6 = (**(code **)(**(int **)(iVar5 + 0x58) + 8))();
      if (iVar6 == 0) {
        iVar5 = piVar4[3];
        pcVar10 = "Error saving actor %08X: Actor has a high process but no parent cell";
      }
      else {
        iVar5 = (**(code **)(**(int **)(iVar5 + 0x58) + 8))();
        if (iVar5 != 1) goto LAB_004608c0;
        iVar5 = piVar4[3];
        pcVar10 = "Error saving actor %08X: Actor has a middle high process but no parent cell";
      }
      FUN_004a7a60(pcVar10,iVar5);
    }
  }
  else {
    iVar6 = FUN_004c9cf0();
    if (iVar6 == 0) {
      local_48[0] = FUN_0045e0d0(*(undefined4 *)(iVar5 + 0xc));
    }
    else {
      local_48[0] = FUN_0045e0d0(*(undefined4 *)(iVar6 + 0xc));
    }
  }
LAB_004608c0:
  local_48[2] = piVar4[0xc];
  local_48[1] = piVar4[0xb];
  local_48[3] = piVar4[0xd];
  local_34 = piVar4[9];
  local_38 = piVar4[8];
  local_30 = piVar4[10];
  if ((param_2 & 2) != 0) {
    local_2c = 0;
    local_28 = 0;
    iVar5 = (**(code **)(*piVar4 + 0x170))();
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*piVar4 + 0x170))();
      local_28 = FUN_0045e0d0(*(undefined4 *)(iVar5 + 0xc));
    }
    piVar8 = local_48;
    piVar9 = aiStack_24;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar9 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar9 = piVar9 + 1;
    }
    iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b03054,&PTR_PTR_00b05ad0,0);
    iVar6 = FUN_009832e6(piVar4,0,&PTR_PTR_00b03054,&PTR_PTR_00b05b7c,0);
    cVar2 = FUN_004db4a0();
    if (cVar2 == '\0') {
      if (iVar5 != 0) {
        uVar11 = 0x24;
        piVar4 = &local_2c;
        local_2c = 1;
        goto LAB_00460ba2;
      }
      if (iVar6 != 0) {
        local_2c = 2;
        uVar11 = FUN_00416410();
        local_28 = FUN_0045e0d0(uVar11);
      }
    }
    else {
      local_2c = 3;
      if (local_48[0] == 0) {
        FUN_0041ff80();
        iVar5 = FUN_004c9cf0();
        aiStack_24[0] = FUN_0045e0d0(*(undefined4 *)(iVar5 + 0xc));
        uVar11 = 0x24;
        piVar4 = &local_2c;
        goto LAB_00460ba2;
      }
    }
    uVar11 = 0x24;
    piVar4 = &local_2c;
    goto LAB_00460ba2;
  }
  if ((param_2 & 0xc) == 0) {
    if ((param_2 & 0x800000) == 0) {
      return;
    }
    iVar5 = FUN_006ecc80();
    iVar6 = FUN_004d6670();
    if (iVar6 == 0) {
      if (iVar5 == 0) {
        uVar11 = (**(code **)(*piVar4 + 0xd4))(piVar4[3]);
        FUN_004a7a60("Reference %s ( %08X ) in an oblivion plane has no worldspace or parent cell.",
                     uVar11);
      }
      else {
        param_2 = FUN_0045e0d0(*(undefined4 *)(iVar5 + 0xc));
      }
    }
    else {
      param_2 = FUN_0045e0d0(*(undefined4 *)(iVar6 + 0xc));
    }
    goto LAB_00460b9b;
  }
  if (-1 < (int)param_2) {
    uVar11 = 0x1c;
    piVar4 = local_48;
    goto LAB_00460ba2;
  }
  local_2c = 0;
  cVar2 = (**(code **)(*piVar4 + 400))();
  if (cVar2 == '\0') {
LAB_00460a38:
    iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    if (iVar5 != 0) {
      FUN_004a7a60("Actor does not have an editor location.  This should never happen.");
    }
    puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0xf4))(&local_54);
    local_28 = *puVar7;
    aiStack_24[0] = puVar7[1];
    aiStack_24[1] = puVar7[2];
    local_2c = 0;
    iVar5 = FUN_006ecc80();
    if (iVar5 != 0) {
      FUN_006ecc80();
      cVar2 = FUN_004c97f0();
      if (cVar2 == '\0') {
        FUN_006ecc80();
        iVar5 = FUN_004c9cf0();
        if (iVar5 == 0) goto LAB_00460b1b;
        FUN_006ecc80();
        iVar5 = FUN_004c9cf0();
        uVar11 = *(undefined4 *)(iVar5 + 0xc);
      }
      else {
        iVar5 = FUN_006ecc80();
        uVar11 = *(undefined4 *)(iVar5 + 0xc);
      }
LAB_00460b10:
      local_2c = FUN_0045e0d0(uVar11);
    }
  }
  else {
    iVar5 = FUN_005e1f60();
    iVar6 = FUN_005e1f40();
    if ((iVar6 == 0) && (iVar5 == 0)) goto LAB_00460a38;
    puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0xf4))(&local_54);
    local_28 = *puVar7;
    aiStack_24[0] = puVar7[1];
    aiStack_24[1] = puVar7[2];
    if (iVar6 != 0) {
      uVar11 = *(undefined4 *)(iVar6 + 0xc);
      goto LAB_00460b10;
    }
    if (iVar5 != 0) {
      uVar11 = *(undefined4 *)(iVar5 + 0xc);
      goto LAB_00460b10;
    }
  }
LAB_00460b1b:
  piVar4 = local_48;
  piVar8 = aiStack_24 + 2;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar8 = piVar8 + 1;
  }
  uVar11 = 0x2c;
  piVar4 = &local_2c;
LAB_00460ba2:
  FUN_0045b9a0(piVar4,uVar11);
  return;
}



void FUN_00460bc0(undefined4 param_1,uint param_2)

{
  void *_Src;
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c [4];
  int local_1c [7];
  
  piVar2 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  iVar3 = DAT_00b33b00;
  if (piVar2 == (int *)0x0) {
    iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
    if (iVar3 != 0) {
      if (0x5a < *(byte *)(DAT_00b33b00 + 0x7c)) {
        if ((param_2 & 0x4000000) == 0) {
          if ((param_2 & 0x2000000) != 0) {
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 6;
          }
        }
        else {
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 4;
        }
      }
      if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x5b) {
        if (((param_2 & 2) != 0) && ((param_2 & 4) != 0)) {
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 0xc;
          return;
        }
        *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 2;
        return;
      }
    }
  }
  else {
    if ((param_2 & 2) != 0) {
      local_50 = 0;
      local_4c = 0.0;
      local_48 = 0.0;
      _memcpy(&local_50,*(void **)(DAT_00b33b00 + 0x14),0x24);
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 0x24;
      local_4c = (float)FUN_00459950(local_4c);
      local_48 = (float)FUN_00459950(local_48);
      uVar4 = FUN_0046b250(local_48);
      iVar3 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
      iVar5 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
      if (local_50 != 2) {
        uVar4 = FUN_0046b250(local_4c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
        uVar4 = FUN_009832e6(uVar4);
        FUN_0044a7d0(uVar4,&local_44,&local_38,iVar3,iVar5,piVar2);
        FUN_0045e990(piVar2);
        return;
      }
      if (iVar5 != 0) {
        iVar3 = FUN_004efe80((int)ROUND(local_44) >> 0xc,(int)ROUND(local_40) >> 0xc);
      }
      if (iVar3 != 0) {
        (**(code **)(*piVar2 + 0x194))(iVar3);
      }
      FUN_004d8a30(local_44,local_40,local_3c);
      FUN_004d89a0(local_38,uStack_34,uStack_30);
      FUN_0045e990(piVar2);
      return;
    }
    if ((param_2 & 0xc) == 0) {
      if ((param_2 & 0x800000) == 0) {
        return;
      }
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 4;
      return;
    }
    _Src = *(void **)(DAT_00b33b00 + 0x14);
    if ((int)param_2 < 0) {
      _memcpy(local_2c,_Src,0x2c);
      *(int *)(iVar3 + 0x14) = (int)_Src + 0x2c;
      FUN_00459950(local_2c[0]);
      local_1c[0] = FUN_00459950(local_1c[0]);
      piVar7 = local_1c;
      piVar8 = &local_50;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
    }
    else {
      _memcpy(&local_50,_Src,0x1c);
      *(int *)(iVar3 + 0x14) = (int)_Src + 0x1c;
      local_50 = FUN_00459950(local_50);
    }
    FUN_004d89a0(local_40,local_3c,local_38);
    if (piVar2 == DAT_00b333c4) {
      return;
    }
    FUN_004d8a30(local_4c,local_48,local_44);
    FUN_0045e990(piVar2);
    uVar4 = FUN_0046b250(local_50);
    iVar3 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
    iVar5 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
    if (iVar3 != 0) {
      iVar5 = FUN_006ecc80();
      if (iVar3 == iVar5) {
        return;
      }
      FUN_004dd4b0(piVar2,iVar3,0);
      return;
    }
    if (iVar5 == 0) {
      cVar1 = FUN_004db4a0();
      if (cVar1 == '\0') {
        FUN_004a7a60("Trying to put non-persistent reference in non-existent cell.");
        return;
      }
      iVar3 = FUN_006ecc80();
      if (iVar3 != 0) {
        piVar7 = piVar2;
        FUN_006ecc80(piVar2);
        FUN_004cecd0(piVar7);
      }
      (**(code **)(*piVar2 + 0x194))(0);
      ModelLoader_CancelPendingForRefr(piVar2);
      (**(code **)(*piVar2 + 0x150))(0);
      return;
    }
    iVar3 = FUN_004efe80((int)ROUND(local_4c) >> 0xc,(int)ROUND(local_48) >> 0xc);
    iVar6 = FUN_006ecc80();
    if (iVar6 != 0) {
      FUN_006ecc80();
      cVar1 = FUN_004c97f0();
      if (cVar1 != '\0') goto LAB_00460f61;
    }
    iVar6 = FUN_006ecc80();
    if (iVar6 != iVar3) {
LAB_00460f61:
      FUN_004dd4b0(piVar2,0,iVar5);
      return;
    }
    if ((iVar3 == 0) && (cVar1 = FUN_004db4a0(), cVar1 == '\0')) {
      FUN_004a7a60("Trying to load non-persistent ref into non-existent cell.");
      return;
    }
  }
  return;
}



void FUN_00461030(char param_1)

{
  DWORD DVar1;
  byte bVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  int in_ECX;
  
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar4 = GetCurrentThreadId();
  if (DVar4 == DVar1) {
    bVar2 = *(byte *)(in_ECX + 0x18);
  }
  else {
    bVar2 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
  }
  if ((bVar2 & 1) != 0) {
    FUN_0045ce00();
    FUN_0045cee0();
    FUN_00459140();
    if (param_1 != '\0') {
      FUN_00677ec0(0,0);
      FUN_004424d0(0);
      iVar5 = FUN_006ecc80();
      if (iVar5 != 0) {
        cVar3 = FUN_004c97f0();
        iVar5 = DAT_00b35c24;
        if (cVar3 != '\0') {
          iVar5 = FUN_00424180();
        }
        if (iVar5 != 0) {
          FUN_0088bc20();
        }
      }
    }
    FUN_0045d030();
    FUN_0045d190();
  }
  return;
}



undefined4
FUN_004610f0(int *param_1,undefined4 *param_2,undefined1 *param_3,char *param_4,undefined1 *param_5,
            char *param_6,char *param_7,char *param_8,undefined4 *param_9,char param_10)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  ushort in_FPUControlWord;
  undefined8 local_18;
  ushort local_10;
  ushort local_e;
  ushort local_a;
  ushort local_8;
  ushort local_6;
  
  cVar2 = param_10;
  piVar1 = param_1;
  piVar3 = param_1;
  if (param_10 == '\0') {
    piVar3 = (int *)FUN_0045f2e0(param_1,0,2);
  }
  if (((piVar3 != (int *)0x0) && ((char)piVar3[9] != '\0')) &&
     (iVar4 = FUN_0045dbc0(piVar3,0), iVar4 != 0)) {
    local_18 = (ulonglong)local_18._4_4_ << 0x20;
    param_1 = (int *)0x0;
    uVar5 = FUN_0045d5f0(piVar1,iVar4,param_2,param_3,&param_1,param_5,&local_18,&local_10,&param_5,
                         param_9);
    if (param_4 != (char *)0x0) {
      _sprintf(param_4,"%s %i",DAT_00b38720,(uint)param_1 & 0xffff);
    }
    if (param_6 != (char *)0x0) {
      param_1 = (int *)CONCAT22(param_1._2_2_,in_FPUControlWord);
      param_9 = (undefined4 *)(in_FPUControlWord | 0xc00);
      local_18 = (longlong)ROUND((float)local_18);
      _sprintf(param_6,"%s %i",DAT_00b38730,(float)local_18);
    }
    if (param_8 != (char *)0x0) {
      _sprintf(param_8,"%02i:%02i:%02i",(uint)param_5 / 3600000,((uint)param_5 % 3600000) / 60000,
               (((uint)param_5 % 3600000) % 60000) / 1000);
    }
    if (param_7 != (char *)0x0) {
      _sprintf(param_7,"%d/%d/%02d %02d:%02d",(uint)local_e,(uint)local_a,(uint)local_10,
               (uint)local_8,(uint)local_6);
    }
    (**(code **)(*piVar3 + 0xc))(0,0);
    if ((char)param_8 == '\0') {
      FUN_004303b0();
    }
    return uVar5;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (char *)0x0) {
    *param_4 = '\0';
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (char *)0x0) {
    *param_6 = '\0';
  }
  if (param_7 != (char *)0x0) {
    *param_7 = '\0';
  }
  if (param_8 != (char *)0x0) {
    *param_8 = '\0';
  }
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = 0;
  }
  if ((cVar2 == '\0') && (piVar3 != (int *)0x0)) {
    FUN_004303b0();
  }
  return 0;
}



void FUN_00461310(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_40;
  uint local_38;
  uint local_34;
  int iStack_30;
  int iStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_27;
  short sStack_22;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined4 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ae5db;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = *(int *)(in_ECX + 0x2c);
  while (iVar6 != 0) {
    iVar6 = *(int *)(*(int *)(in_ECX + 0x2c) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x2c),uVar5);
    *(int *)(in_ECX + 0x2c) = iVar6;
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  local_34 = 1;
  (**(code **)(param_1 + 4))(param_1,&local_38,4,&local_34,1);
  if (local_38 != 0) {
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x20000;
    iStack_30 = FUN_00401f00(0x41c);
    uStack_4 = 0;
    if (iStack_30 == 0) {
      iStack_40 = 0;
    }
    else {
      iStack_40 = FUN_00451da0(0,0,0);
    }
    uStack_4 = 0xffffffff;
    FUN_0044fff0(param_1);
    local_34 = 0;
    if (local_38 != 0) {
      do {
        iVar6 = FUN_0042bc00();
        iStack_30 = 1;
        (**(code **)(param_1 + 4))(param_1,auStack_20,0x14,&iStack_30,1);
        FUN_00451460(iVar6);
        cVar3 = FUN_00446b80(uStack_14);
        uVar2 = uStack_14;
        if (cVar3 == '\0') {
          FUN_00451460(iStack_1c + iVar6);
        }
        else {
          iVar7 = FUN_0046b250(uStack_14);
          if (iVar7 == 0) {
            FUN_00452df0(uVar2,1);
          }
          else {
            FUN_0045c7a0(iVar7);
          }
          iVar7 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
          uVar1 = *(undefined1 *)(iVar7 + 0x184);
          *(undefined1 *)(iVar7 + 0x184) = 1;
          FUN_0044dcf0(iStack_40,0);
          *(undefined1 *)(iVar7 + 0x184) = uVar1;
          sVar4 = FUN_0042bc00();
          piVar8 = (int *)FUN_0046b250(uStack_14);
          if (piVar8 == (int *)0x0) {
            FUN_004a7a60("Could not construct created base object with form ID %08X",uStack_14);
          }
          else {
            if (piVar8 != (int *)0xfffffff0) {
              FUN_004526e0();
            }
            (**(code **)(*piVar8 + 0x6c))();
            FUN_00459800(piVar8);
            if (*(int *)(in_ECX + 0x40) != 0) {
              uStack_28 = (undefined1)piVar8[1];
              iStack_2c = piVar8[3];
              uStack_27 = 0;
              sStack_22 = sVar4 - (short)iVar6;
              FUN_0045ad00(&iStack_2c);
            }
          }
        }
        local_34 = local_34 + 1;
      } while (local_34 < local_38);
    }
    FUN_0044fff0(0);
    if (iStack_40 != 0) {
      FUN_00450ae0();
      FUN_00401f20(iStack_40);
    }
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffdffff;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00461580(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int local_c;
  int *local_8;
  
  piVar1 = (int *)(in_ECX + 0x28);
  piVar4 = piVar1;
  local_8 = piVar1;
  for (; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1])
  {
    iVar2 = *piVar1;
    iVar3 = FUN_0046b250(iVar2);
    if (iVar3 != 0) {
      FUN_00449d20(iVar3);
    }
    iVar3 = FUN_0046b250(iVar2);
    if (iVar3 == 0) {
      if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) == 0) {
        local_c = 0;
        FUN_0055e000(iVar2,&local_c);
        iVar3 = local_c;
        piVar4 = local_8;
        if (local_c != 0) {
          FUN_004524c0(iVar2);
          iVar2 = *(int *)(iVar3 + 4);
          if (iVar2 != 0) {
            FUN_00401e40(iVar2);
          }
          FUN_00401f20(iVar3);
          piVar4 = local_8;
        }
      }
    }
    else {
      FUN_0045c7a0(iVar3);
    }
  }
  iVar2 = piVar4[1];
  while (iVar2 != 0) {
    iVar2 = *(int *)(piVar4[1] + 4);
    FUN_00401f20(piVar4[1]);
    piVar4[1] = iVar2;
  }
  *piVar4 = 0;
  return;
}



void FUN_00461680(void)

{
  uint *puVar1;
  short sVar2;
  void *pvVar3;
  int *piVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *in_ECX;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int *unaff_FS_OFFSET;
  undefined2 in_FPUControlWord;
  float10 fVar17;
  undefined4 local_c0;
  int *local_bc;
  int *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a9;
  int *local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  undefined **local_98;
  uint local_94;
  void *local_90;
  undefined4 local_8c;
  undefined8 local_88;
  int local_80;
  uint local_7c;
  int *local_78 [7];
  undefined1 local_5c [8];
  int *local_54;
  undefined1 local_38 [16];
  int *local_28;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae60b;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffff30;
  *unaff_FS_OFFSET = (int)&local_c;
  local_80 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  local_a9 = *(undefined1 *)(local_80 + 0x185);
  *(undefined1 *)(local_80 + 0x185) = 0;
  local_94 = 0x25;
  local_98 = &PTR_FUN_00a3906c;
  local_8c = 0;
  local_bc = in_ECX;
  local_90 = (void *)FUN_00401f00(0x94,uVar7);
  _memset(local_90,0,local_94 * 4);
  local_98 = &PTR_FUN_00a3aab8;
  local_4 = 0;
  iVar8 = FUN_00402c00();
  fVar17 = (float10)FUN_00402bd0();
  local_b8 = (int *)CONCAT22(local_b8._2_2_,in_FPUControlWord);
  uVar13 = 0;
  local_88 = (longlong)ROUND(fVar17);
  local_a0 = iVar8 * 0x18 + (int)local_88;
  uVar7 = *(uint *)(*in_ECX + 4);
  if (uVar7 != 0) {
    piVar12 = *(int **)(*in_ECX + 8);
    piVar15 = piVar12;
    do {
      if (*piVar15 != 0) {
        local_9c = piVar12[uVar13];
        goto joined_r0x0046179c;
      }
      uVar13 = uVar13 + 1;
      piVar15 = piVar15 + 1;
    } while (uVar13 < uVar7);
  }
  local_9c = 0;
joined_r0x0046179c:
  if (local_9c != 0) {
    local_c0 = (uint *)0x0;
    local_b4 = 0;
    FUN_00452600(&local_9c,&local_b4,&local_c0);
    uVar9 = local_b4;
    uVar7 = *local_c0;
    iVar8 = 0x7fffffff;
    iVar14 = 0x7fffffff;
    if ((uVar7 & 0x8000000) != 0) {
      puVar1 = local_c0 + 1;
      local_c0 = (uint *)0x0;
      if (*puVar1 == 0) {
        iVar10 = FUN_0046b250(local_b4);
        in_ECX = local_bc;
        if ((iVar10 == 0) || (*(char *)(iVar10 + 4) != '0')) goto joined_r0x0046179c;
        local_c0 = (uint *)FUN_004ca9b0();
        cVar5 = FUN_004c97f0();
        in_ECX = local_bc;
        if (cVar5 == '\0') {
          iVar8 = FUN_004c9cf0();
          uVar9 = *(undefined4 *)(iVar8 + 0xc);
          iVar8 = FUN_004c9a80();
          iVar14 = FUN_004c9aa0();
          in_ECX = local_bc;
        }
      }
      else {
        in_ECX[5] = *puVar1;
        uVar13 = **(uint **)(DAT_00b33b00 + 0x14);
        local_b0._2_1_ = (char)(uVar13 >> 0x10);
        *(uint **)(DAT_00b33b00 + 0x14) = *(uint **)(DAT_00b33b00 + 0x14) + 1;
        local_b0 = uVar13;
        if ((local_b0._2_1_ == '0') &&
           (local_b0._3_1_ = (byte)(uVar13 >> 0x18), 0x5a < local_b0._3_1_)) {
          if ((uVar7 & 0x4000000) == 0) {
            if ((uVar7 & 0x2000000) == 0) {
              local_c0 = *(uint **)in_ECX[5];
              in_ECX[5] = (int)((undefined4 *)in_ECX[5] + 1);
              in_ECX[5] = 0;
            }
            else {
              puVar11 = *(undefined4 **)(DAT_00b33b00 + 0x14);
              uVar9 = *puVar11;
              sVar2 = *(short *)(puVar11 + 1);
              *(int *)(DAT_00b33b00 + 0x14) = (int)puVar11 + 6;
              local_88 = CONCAT44(local_88._4_4_,uVar9);
              uVar9 = FUN_00459990(uVar9);
              iVar8 = (int)local_88._2_2_;
              local_c0 = *(uint **)in_ECX[5];
              in_ECX[5] = (int)((undefined4 *)in_ECX[5] + 1);
              iVar14 = (int)sVar2;
              in_ECX[5] = 0;
            }
          }
          else {
            local_c0 = (uint *)**(undefined4 **)(DAT_00b33b00 + 0x14);
            *(undefined4 **)(DAT_00b33b00 + 0x14) = *(undefined4 **)(DAT_00b33b00 + 0x14) + 1;
            uVar9 = FUN_00459990(local_c0);
            iVar8 = (int)local_c0._2_1_;
            iVar14 = (int)local_c0._3_1_;
            local_c0 = *(uint **)in_ECX[5];
            in_ECX[5] = (int)((undefined4 *)in_ECX[5] + 1);
            in_ECX[5] = 0;
          }
        }
        else {
          in_ECX[5] = 0;
        }
      }
      if ((local_c0 != (uint *)0x0) && (DAT_00b35c1c < local_a0 - (int)local_c0)) {
        if (iVar8 == 0x7fffffff) {
          FUN_00452570(uVar9,0);
        }
        else {
          local_a8 = (int *)FUN_00401f00(8);
          *local_a8 = iVar8;
          local_a8[1] = iVar14;
          local_c0 = (uint *)0x0;
          cVar5 = FUN_0055e000(uVar9,&local_c0);
          if (cVar5 == '\0') {
            puVar11 = (undefined4 *)FUN_00401f00(8);
            if (puVar11 == (undefined4 *)0x0) {
              FUN_00452570(uVar9,0);
              FUN_00446cb0(local_a8);
            }
            else {
              *puVar11 = 0;
              puVar11[1] = 0;
              FUN_00452570(uVar9,puVar11);
              FUN_00446cb0(local_a8);
            }
          }
          else {
            FUN_00446cb0(local_a8);
          }
        }
      }
    }
    goto joined_r0x0046179c;
  }
  uVar7 = *(uint *)(*in_ECX + 4);
  uVar13 = 0;
  piVar12 = local_bc;
  if (uVar7 != 0) {
    piVar15 = *(int **)(*in_ECX + 8);
    piVar16 = piVar15;
    do {
      if (*piVar16 != 0) {
        local_9c = piVar15[uVar13];
        goto joined_r0x00461a4b;
      }
      uVar13 = uVar13 + 1;
      piVar16 = piVar16 + 1;
    } while (uVar13 < uVar7);
  }
  local_9c = 0;
joined_r0x00461a4b:
  if (local_9c != 0) {
    piVar15 = (int *)0x0;
    local_c0 = (uint *)0x0;
    local_b4 = 0;
    local_bc = piVar12;
    FUN_00452600(&local_9c,&local_b4,&local_c0);
    local_b0 = *local_c0;
    iVar8 = 0x7fffffff;
    iVar14 = 0x7fffffff;
    local_b8 = (int *)0x0;
    local_a4 = local_a4 & 0xffff0000;
    if (local_c0[1] == 0) goto LAB_00461bcc;
    piVar12[5] = local_c0[1];
    local_a4 = **(uint **)(DAT_00b33b00 + 0x14);
    *(uint **)(DAT_00b33b00 + 0x14) = *(uint **)(DAT_00b33b00 + 0x14) + 1;
    iVar10 = DAT_00b33b00;
    local_a0 = local_a4 >> 0x10 & 0xff;
    if (((local_a0 == 0x31) || (local_a0 == 0x32)) || (local_a0 == 0x33)) {
      if ((local_b0 & 2) == 0) {
        if ((local_b0 & 0xc) != 0) {
          pvVar3 = *(void **)(DAT_00b33b00 + 0x14);
          if ((int)local_b0 < 0) {
            _memcpy(local_38,pvVar3,0x2c);
            piVar15 = local_28;
            *(int *)(iVar10 + 0x14) = (int)pvVar3 + 0x2c;
            iVar8 = FUN_009828c0();
          }
          else {
            _memcpy(local_78,pvVar3,0x1c);
            piVar15 = local_78[0];
            *(int *)(iVar10 + 0x14) = (int)pvVar3 + 0x1c;
            iVar8 = FUN_009828c0();
          }
          goto LAB_00461b8c;
        }
      }
      else {
        pvVar3 = *(void **)(DAT_00b33b00 + 0x14);
        _memcpy(local_5c,pvVar3,0x24);
        piVar15 = local_54;
        *(int *)(iVar10 + 0x14) = (int)pvVar3 + 0x24;
        iVar8 = FUN_009828c0();
LAB_00461b8c:
        iVar8 = iVar8 >> 0xc;
        iVar14 = FUN_009828c0();
        iVar14 = iVar14 >> 0xc;
      }
      cVar5 = FUN_00446b80(piVar15);
      if (cVar5 != '\0') goto LAB_00461bc3;
      if (piVar15 <= *(int **)(piVar12[0x1d] + 0xc)) {
        piVar15 = *(int **)(*(int *)(piVar12[0x1d] + 4) + (int)piVar15 * 4);
        goto LAB_00461bc3;
      }
      piVar15 = (int *)0x0;
      piVar12[5] = 0;
    }
    else {
LAB_00461bc3:
      piVar12[5] = 0;
    }
    goto LAB_00461c41;
  }
  uVar7 = 0;
  if (local_94 != 0) {
    do {
      if (*(int *)((int)local_90 + uVar7 * 4) != 0) {
        piVar12 = *(int **)((int)local_90 + uVar7 * 4);
        goto LAB_00461eb4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_94);
  }
  piVar12 = (int *)0x0;
LAB_00461eb4:
  local_9c = 0;
  do {
    if (piVar12 == (int *)0x0) {
      FUN_007c2a40();
      *(undefined1 *)(local_80 + 0x185) = local_a9;
      local_4 = 0xffffffff;
      FUN_0045efc0();
      *unaff_FS_OFFSET = local_c;
      return;
    }
    piVar16 = (int *)*piVar12;
    piVar15 = (int *)piVar12[2];
    if (piVar16 == (int *)0x0) {
      uVar7 = (*(code *)local_98[1])(piVar12[1]);
      do {
        uVar7 = uVar7 + 1;
        if (local_94 <= uVar7) {
          piVar16 = (int *)0x0;
          break;
        }
        piVar16 = *(int **)((int)local_90 + uVar7 * 4);
      } while (piVar16 == (int *)0x0);
    }
    piVar12 = piVar16;
    if (piVar15 != (int *)0x0) {
      while (*piVar15 != 0) {
        FUN_00401f20(*piVar15);
        piVar16 = (int *)piVar15[1];
        if (piVar16 == (int *)0x0) {
          *piVar15 = 0;
        }
        else {
          piVar15[1] = piVar16[1];
          *piVar15 = *piVar16;
          FUN_00401f20(piVar16);
        }
      }
      FUN_00401f20(piVar15);
    }
  } while( true );
LAB_00461bcc:
  piVar15 = (int *)FUN_0046b250(local_b4);
  piVar12 = local_bc;
  if ((piVar15 == (int *)0x0) ||
     ((((local_a0 = (uint)*(byte *)(piVar15 + 1), local_a0 != 0x31 && (local_a0 != 0x32)) &&
       (local_a0 != 0x33)) ||
      (local_b8 = piVar15, iVar8 = FUN_006ecc80(), piVar12 = local_bc, iVar8 == 0))))
  goto joined_r0x00461a4b;
  cVar5 = FUN_004c97f0();
  if (cVar5 == '\0') {
    iVar8 = FUN_004c9cf0();
    piVar15 = *(int **)(iVar8 + 0xc);
    iVar8 = FUN_004c9a80();
    iVar14 = FUN_004c9aa0();
  }
  else {
    piVar15 = *(int **)(iVar8 + 0xc);
    iVar8 = 0;
    iVar14 = 0;
  }
LAB_00461c41:
  piVar12 = local_bc;
  if (((piVar15 == (int *)0x0) || (iVar8 == 0x7fffffff)) || (iVar14 == 0x7fffffff))
  goto joined_r0x00461a4b;
  local_a8 = (int *)0x0;
  cVar5 = FUN_0055e000(piVar15,&local_a8);
  uVar7 = local_b0;
  piVar12 = local_bc;
  if (cVar5 == '\0') goto joined_r0x00461a4b;
  piVar16 = local_a8;
  if (local_a8 != (int *)0x0) {
    do {
      piVar4 = (int *)*piVar16;
      if (piVar4 == (int *)0x0) break;
      if ((*piVar4 == iVar8) && (piVar4[1] == iVar14)) goto LAB_00461caf;
      piVar4 = piVar16 + 1;
      piVar16 = (int *)*piVar4;
    } while ((int *)*piVar4 != (int *)0x0);
    goto joined_r0x00461a4b;
  }
LAB_00461caf:
  if (((local_b0 & 8) != 0) && ((local_b0 & 6) == 0)) {
    if (local_b0 == 8) {
      FUN_00452df0(local_b4,1);
    }
    else {
      local_88 = CONCAT44(local_88._4_4_,local_c0[1]);
      if (local_c0[1] == 0) {
        if (local_b8 == (int *)0x0) goto LAB_00461dec;
        FUN_00452d60(local_b8,0x80000008);
      }
      else {
        uVar7 = local_b0 & 0xfffffff7 | 0x800;
        if ((int)uVar7 < 0) {
          uVar7 = local_b0 & 0x7ffffff7 | 0x800;
          iVar8 = 0x2c;
        }
        else {
          iVar8 = 0x1c;
        }
        uVar6 = (short)local_a4 - (short)iVar8;
        local_7c = (uint)uVar6;
        if ((uVar7 & 0x800000) != 0) {
          uVar6 = uVar6 + 4;
        }
        local_a4 = CONCAT22(local_a4._2_2_,uVar6);
        local_b0 = uVar7;
        uVar13 = FUN_00453500(uVar6 + 4);
        FUN_0045b9a0(&local_a4,4);
        if ((uVar7 & 0x800000) != 0) {
          local_a8 = piVar15;
          FUN_0045b9a0(&local_a8,4);
        }
        piVar12 = local_bc;
        iVar14 = (int)local_88;
        FUN_0045b9a0(iVar8 + 4 + (int)local_88,local_7c);
        FUN_00401e40(iVar14);
        local_c0[1] = uVar13;
        *local_c0 = local_b0;
        piVar12[5] = 0;
        uVar7 = local_b0;
      }
    }
    if (local_b8 != (int *)0x0) {
      FUN_0045bb30(local_b8,0);
    }
  }
LAB_00461dec:
  uVar13 = local_a0;
  uVar9 = local_b4;
  if ((((local_a0 == 0x32) || (piVar15 = local_b8, local_a0 == 0x33)) &&
      (cVar5 = FUN_00446b80(local_b4), piVar15 = local_b8, cVar5 != '\0')) &&
     (((local_b8 == (int *)0x0 ||
       (((cVar5 = FUN_004db4a0(), cVar5 == '\0' &&
         (cVar5 = (**(code **)(*piVar15 + 0x78))(), cVar5 == '\0')) &&
        (cVar5 = FUN_004d9040(), cVar5 == '\0')))) && (FUN_00452df0(uVar9,1), piVar15 != (int *)0x0)
      ))) {
    (**(code **)(*piVar15 + 0x10))(1);
    piVar15 = (int *)0x0;
  }
  piVar12 = local_bc;
  if (((uVar13 == 0x31) && ((uVar7 & 0x20000) != 0)) &&
     (FUN_00452df0(uVar9,1), piVar12 = local_bc, piVar15 != (int *)0x0)) {
    (**(code **)(*piVar15 + 0x10))(1);
    piVar12 = local_bc;
  }
  goto joined_r0x00461a4b;
}



void FUN_00461fa0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(uint *)(in_ECX + 0x18) >> 0xc & 1) != 0) {
    if (*(int *)(in_ECX + 0xac) == 0) {
      puVar3 = (undefined4 *)FUN_00401f00(0x18,uVar2);
      local_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[2] = 20000;
        *puVar3 = &PTR__scalar_deleting_destructor__00a37aac;
        puVar3[5] = 2000;
        puVar3[3] = 0;
        puVar3[4] = 0;
        uVar4 = FUN_00401f00(80000);
        puVar3[1] = uVar4;
      }
      *(undefined4 **)(in_ECX + 0xac) = puVar3;
    }
    local_4 = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0xac);
    uVar2 = *(uint *)(iVar1 + 0xc);
    if (*(uint *)(iVar1 + 8) <= uVar2) {
      FUN_00452910(*(int *)(iVar1 + 0x14) + uVar2);
    }
    FUN_00446c50(uVar2,&stack0x00000004);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00462080(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2a91;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(undefined4 **)(in_ECX + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 8))(1,uVar2);
  }
  iStack_10 = FUN_00401f00(0x10);
  uStack_4 = 0;
  if (iStack_10 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045a940();
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 8) = uVar3;
  if (*(undefined4 **)(in_ECX + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0xc))(1);
  }
  iStack_10 = FUN_00401f00(0x10);
  uStack_4 = 1;
  if (iStack_10 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045aa80();
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xc) = uVar3;
  if (*(undefined4 **)(in_ECX + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x10))(1);
  }
  iStack_10 = FUN_00401f00(0x10);
  uStack_4 = 2;
  if (iStack_10 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045aa80();
  }
  *(undefined4 *)(in_ECX + 0x10) = uVar3;
  iVar1 = *(int *)(in_ECX + 0x24);
  uStack_4 = 0xffffffff;
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x24));
    *(int *)(in_ECX + 0x24) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  FUN_00461580();
  iVar1 = *(int *)(in_ECX + 0x74);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0xc) != 0) {
    do {
      *(undefined4 *)(*(int *)(iVar1 + 4) + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(iVar1 + 0xc));
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  iStack_10 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x74) + 8) == 0) {
    FUN_00452910(*(undefined4 *)(*(int *)(in_ECX + 0x74) + 0x14));
  }
  FUN_00446c50(0,&iStack_10);
  iVar1 = *(int *)(in_ECX + 0x78);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0xc) != 0) {
    do {
      *(undefined4 *)(*(int *)(iVar1 + 4) + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(iVar1 + 0xc));
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  iStack_10 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x78) + 8) == 0) {
    FUN_00452910(*(undefined4 *)(*(int *)(in_ECX + 0x78) + 0x14));
  }
  FUN_00446c50(0,&iStack_10);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00462220(byte param_1)

{
  FUN_0045ef50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00462240(byte param_1)

{
  FUN_0045efc0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CButton::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CComboBox::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CDateTimeCtrl::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CDialogBar::`scalar deleting destructor'(unsigned int)
     19 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void FID_conflict__scalar_deleting_destructor_(byte param_1)

{
  FID_conflict__CProgressCtrl();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00462280(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_20 = *(undefined4 *)(DAT_00b33a98 + 0x8c0);
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(param_1 + 8))(param_1,&local_20,4,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  iVar3 = FUN_0043f270();
  local_1c = *(undefined4 *)(iVar3 + 0xc);
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&local_1c,4,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  local_18 = *(undefined4 *)(DAT_00b333a0 + 0x20);
  local_14 = *(undefined4 *)(DAT_00b333a0 + 0x24);
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&local_18,4,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&local_14,4,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  iVar3 = FUN_004d6670();
  iVar4 = FUN_006ecc80();
  if ((iVar3 == 0) && (iVar4 == 0)) {
    FUN_00404ec0("Player has no worldspace or parent cell, cannot save.");
  }
  local_28 = 0;
  if (iVar3 == 0) {
    if (iVar4 != 0) {
      local_28 = *(undefined4 *)(iVar4 + 0xc);
    }
  }
  else {
    local_28 = *(undefined4 *)(iVar3 + 0xc);
  }
  local_c = *(undefined4 *)(DAT_00b333c4 + 0x2c);
  local_8 = *(undefined4 *)(DAT_00b333c4 + 0x30);
  local_4 = *(undefined4 *)(DAT_00b333c4 + 0x34);
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&local_28,4,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&local_c,0xc,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 0xc;
  }
  FUN_0045f820(iVar2);
  param_1 = FUN_00441000();
  param_1 = param_1 & 0xffff;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&param_1,2,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 2;
  }
  if ((short)param_1 != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(param_1 & 0xffff,"TES Class");
    }
    iVar3 = thunk_FUN_00401aa0(param_1 & 0xffff,1);
    *(int *)(in_ECX + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    FUN_004410d0();
    if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
      local_24 = 1;
      (**(code **)(iVar2 + 8))(iVar2,uVar1,param_1 & 0xffff,&local_24,1);
    }
    else {
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (param_1 & 0xffff);
    }
    FUN_00401e40(uVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  param_1 = FUN_00677010();
  param_1 = param_1 & 0xffff;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&param_1,2,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 2;
  }
  if ((short)param_1 != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(param_1 & 0xffff,"Process Lists Class");
    }
    iVar3 = thunk_FUN_00401aa0(param_1 & 0xffff,1);
    *(int *)(in_ECX + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    FUN_00677060();
    if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
      local_24 = 1;
      (**(code **)(iVar2 + 8))(iVar2,uVar1,param_1 & 0xffff,&local_24,1);
    }
    else {
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (param_1 & 0xffff);
    }
    FUN_00401e40(uVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  param_1 = FUN_0067c000();
  param_1 = param_1 & 0xffff;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&param_1,2,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 2;
  }
  if ((short)param_1 != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(param_1 & 0xffff,"Spectator Events");
    }
    iVar3 = thunk_FUN_00401aa0(param_1 & 0xffff,1);
    *(int *)(in_ECX + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    FUN_0067c0d0();
    if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
      local_24 = 1;
      (**(code **)(iVar2 + 8))(iVar2,uVar1,param_1 & 0xffff,&local_24,1);
    }
    else {
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (param_1 & 0xffff);
    }
    FUN_00401e40(uVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  FUN_00542ea0();
  param_1 = FUN_005406f0();
  param_1 = param_1 & 0xffff;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&param_1,2,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 2;
  }
  if ((short)param_1 != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(param_1 & 0xffff,"Sky/Weather");
    }
    iVar3 = thunk_FUN_00401aa0(param_1 & 0xffff,1);
    *(int *)(in_ECX + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    FUN_00542ea0();
    FUN_00540720();
    if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
      local_24 = 1;
      (**(code **)(iVar2 + 8))(iVar2,uVar1,param_1 & 0xffff,&local_24,1);
    }
    else {
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (param_1 & 0xffff);
    }
    FUN_00401e40(uVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  local_10 = DAT_00b3b90c;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&local_10,4,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  FUN_0045de30(iVar2);
  param_1 = FUN_005c0d60();
  param_1 = param_1 & 0xffff;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&param_1,2,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 2;
  }
  if ((short)param_1 != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(param_1 & 0xffff,"Quick Keys");
    }
    iVar3 = thunk_FUN_00401aa0(param_1 & 0xffff,1);
    *(int *)(in_ECX + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    FUN_005c0e30();
    if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
      local_24 = 1;
      (**(code **)(iVar2 + 8))(iVar2,uVar1,param_1 & 0xffff,&local_24,1);
    }
    else {
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (param_1 & 0xffff);
    }
    FUN_00401e40(uVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  param_1 = FUN_005a8250();
  param_1 = param_1 & 0xffff;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&param_1,2,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 2;
  }
  if ((short)param_1 != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(param_1 & 0xffff,"HUD Reticle");
    }
    iVar3 = thunk_FUN_00401aa0(param_1 & 0xffff,1);
    *(int *)(in_ECX + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    FUN_005a8b20();
    if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
      local_24 = 1;
      (**(code **)(iVar2 + 8))(iVar2,uVar1,param_1 & 0xffff,&local_24,1);
    }
    else {
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (param_1 & 0xffff);
    }
    FUN_00401e40(uVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  param_1 = FUN_0057be10();
  param_1 = param_1 & 0xffff;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&param_1,2,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 2;
  }
  if ((short)param_1 != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(param_1 & 0xffff,"Interface");
    }
    iVar3 = thunk_FUN_00401aa0(param_1 & 0xffff,1);
    *(int *)(in_ECX + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    FUN_0057be30();
    if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
      local_24 = 1;
      (**(code **)(iVar2 + 8))(iVar2,uVar1,param_1 & 0xffff,&local_24,1);
    }
    else {
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (param_1 & 0xffff);
    }
    FUN_00401e40(uVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  param_1 = FUN_004a2ff0();
  param_1 = param_1 & 0xffff;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_24 = 1;
    (**(code **)(iVar2 + 8))(iVar2,&param_1,2,&local_24,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 2;
  }
  if ((short)param_1 != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(param_1 & 0xffff,"Regions");
    }
    iVar3 = thunk_FUN_00401aa0(param_1 & 0xffff,1);
    *(int *)(in_ECX + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    FUN_004a3020();
    if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
      local_24 = 1;
      (**(code **)(iVar2 + 8))(iVar2,uVar1,param_1 & 0xffff,&local_24,1);
    }
    else {
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (param_1 & 0xffff);
    }
    FUN_00401e40(uVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  return;
}



void FUN_00462b20(int param_1)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  long lVar11;
  int in_ECX;
  int *piVar12;
  short asStack_4c [2];
  uint uStack_48;
  int iStack_44;
  uint local_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x4000;
  FUN_0067cf00();
  if (DAT_00b3bf80 != 0) {
    FUN_00683500();
  }
  if (DAT_00b35b90 != 0) {
    FUN_004be420();
  }
  if (DAT_00b35b8c != 0) {
    FUN_004bd8c0();
  }
  FUN_0043e0f0();
  FUN_0065e800();
  FUN_004f9fd0();
  FUN_004f9dd0();
  FUN_00461580();
  iVar4 = param_1;
  DAT_00b3521d = 1;
  local_2c[0] = 1;
  (**(code **)(param_1 + 4))(param_1,&local_40,4,local_2c,1);
  if (local_40 < 0xff000800) {
    local_40 = 0xff000800;
  }
  *(uint *)(DAT_00b33a98 + 0x8c0) = local_40;
  param_1._0_1_ = '\x01';
  local_2c[0] = 1;
  (**(code **)(iVar4 + 4))(iVar4,&uStack_3c,4,local_2c,1);
  if ((*(int *)(in_ECX + 0x4c) != 0) && (bVar5 = (byte)(uStack_3c >> 0x18), bVar5 != 0xff)) {
    if ((bVar5 < *(byte *)(in_ECX + 0x48)) &&
       (bVar5 = *(byte *)((uStack_3c >> 0x18) + *(int *)(in_ECX + 0x4c)), bVar5 != 0xff)) {
      uStack_3c = (uint)bVar5 * 0x1000000 + (uStack_3c & 0xffffff);
    }
    else {
      uStack_3c = 0;
    }
  }
  uVar7 = FUN_0046b250(uStack_3c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
  iVar8 = FUN_009832e6(uVar7);
  if (iVar8 == 0) {
    param_1._0_1_ = '\0';
  }
  else {
    FUN_004431f0(iVar8);
  }
  local_2c[0] = 1;
  (**(code **)(iVar4 + 4))(iVar4,&iStack_44,4,local_2c,1);
  local_2c[0] = 1;
  (**(code **)(iVar4 + 4))(iVar4,&iStack_38,4,local_2c,1);
  local_2c[0] = 1;
  (**(code **)(iVar4 + 4))(iVar4,&uStack_48,4,local_2c,1);
  if ((*(int *)(in_ECX + 0x4c) != 0) && (bVar5 = (byte)(uStack_48 >> 0x18), bVar5 != 0xff)) {
    if ((bVar5 < *(byte *)(in_ECX + 0x48)) &&
       (bVar5 = *(byte *)((uStack_48 >> 0x18) + *(int *)(in_ECX + 0x4c)), bVar5 != 0xff)) {
      uStack_48 = (uint)bVar5 * 0x1000000 + (uStack_48 & 0xffffff);
    }
    else {
      uStack_48 = 0;
    }
  }
  local_2c[0] = 1;
  (**(code **)(iVar4 + 4))(iVar4,&uStack_24,0xc,local_2c,1);
  FUN_004d8a30(uStack_24,uStack_20,uStack_1c);
  uVar7 = FUN_0046b250(uStack_48);
  iVar8 = FUN_009832e6(uVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
  iStack_30 = FUN_009832e6(uVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
  if ((iStack_30 == 0) && (iVar8 == 0)) {
    param_1._0_1_ = '\0';
  }
  FUN_005f0410();
  iVar9 = iStack_30;
  FUN_004835d0(0,iStack_30);
  cVar6 = FUN_0045a380(uStack_24,uStack_20,uStack_1c,iVar8,iVar9);
  if (cVar6 != '\0') {
    FUN_00447db0(0xfffffffd);
    FUN_005ad980(0);
    FUN_0045ec50();
    FUN_005ad980(0);
    FUN_00447db0(0xfffffffe);
  }
  if ((char)param_1 != '\0') {
    if (iVar8 == 0) {
      if (iVar9 != 0) {
        pfVar10 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
        fStack_c = *pfVar10;
        fStack_8 = pfVar10[1];
        fStack_4 = pfVar10[2];
        cVar6 = FUN_004ef160();
        if ((cVar6 != '\0') && (DAT_00b14f58 != '\0')) {
          FUN_004a6970(fStack_c,fStack_8);
          bVar3 = false;
          if ((*(int *)(DAT_00b33a98 + 0xbc) != 0) &&
             (piVar12 = (int *)(*(int *)(DAT_00b33a98 + 0xbc) + 4), piVar12 != (int *)0x0)) {
            do {
              iVar8 = *piVar12;
              if (iVar8 == 0) break;
              if ((((*(uint *)(iVar8 + 8) >> 6 & 1) != 0) && ((*(uint *)(iVar8 + 8) >> 5 & 1) == 0))
                 && (*(int *)(iVar8 + 0x20) == iStack_30)) {
                for (piVar1 = *(int **)(iVar8 + 0x1c); (piVar1 != (int *)0x0 && (*piVar1 != 0));
                    piVar1 = (int *)piVar1[1]) {
                  cVar6 = FUN_004a7330(local_2c);
                  if (cVar6 != '\0') {
                    bVar3 = true;
                  }
                }
              }
              piVar12 = (int *)piVar12[1];
            } while (piVar12 != (int *)0x0);
            if (bVar3) goto LAB_00462f4c;
          }
          param_1._0_1_ = '\0';
          goto LAB_00463083;
        }
LAB_00462f4c:
        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x10;
        fStack_18 = (float)(iStack_44 << 0xc);
        local_2c[0] = iStack_38 << 0xc;
        fStack_14 = (float)local_2c[0];
        uStack_10 = 0;
        FUN_00444fb0(&fStack_18,0);
        fVar2 = ROUND(fStack_c);
        local_2c[0] = (int)ROUND(fStack_8);
        iVar8 = local_2c[0] >> 0xc;
        local_2c[0] = FUN_00447740((int)fVar2 >> 0xc,iVar8,iStack_30,0);
        if ((local_2c[0] == 0) || (iVar9 = FUN_004ca790(), iVar9 == 0)) {
          iVar9 = FUN_006ecc80();
          if (iVar9 != 0) {
            piVar12 = DAT_00b333c4;
            FUN_006ecc80(DAT_00b333c4);
            FUN_004cecd0(piVar12);
          }
          FUN_00445a10(&fStack_18);
          local_2c[0] = FUN_00447740((int)fVar2 >> 0xc,iVar8,iStack_30,1);
        }
        if (local_2c[0] == 0) {
          param_1._0_1_ = '\0';
        }
        else {
          *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x80000;
          FUN_0066eaf0(DAT_00b333c4[0xb],DAT_00b333c4[0xc],DAT_00b333c4[0xd],DAT_00b333c4[8],
                       DAT_00b333c4[9],DAT_00b333c4[10],local_2c[0],0);
          *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfff7ffff;
        }
        goto LAB_00463074;
      }
    }
    else {
      *(int *)(DAT_00b333a0 + 0x20) = iStack_44;
      *(int *)(DAT_00b333a0 + 0x24) = iStack_38;
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x10;
      iVar9 = FUN_006ecc80();
      if (iVar9 != iVar8) {
        FUN_0066eaf0(DAT_00b333c4[0xb],DAT_00b333c4[0xc],DAT_00b333c4[0xd],DAT_00b333c4[8],
                     DAT_00b333c4[9],DAT_00b333c4[10],iVar8,0);
      }
LAB_00463074:
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xffffffef;
    }
    if ((char)param_1 != '\0') goto LAB_0046311b;
  }
LAB_00463083:
  lVar11 = _strtol(PTR_s_2AEEA_00b05bb4,(char **)0x0,0x10);
  uVar7 = FUN_0046b250(lVar11,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
  iVar8 = FUN_009832e6(uVar7);
  if (iVar8 == 0) {
    uVar7 = FUN_0046b250(0x3c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
    iVar9 = FUN_009832e6(uVar7);
    if ((iVar9 == 0) ||
       (((iVar8 = FUN_004efe80(0,0), iVar8 == 0 && (iVar8 = FUN_004f1630(0,0), iVar8 == 0)) &&
        (iVar8 = FUN_004471d0(0,0,0,iVar9), iVar8 == 0)))) goto LAB_0046311b;
  }
  FUN_0066fd90(0,iVar8);
LAB_0046311b:
  FUN_0045f970(iVar4);
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x10;
  FUN_00443300();
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xffffffef;
  local_2c[0] = 1;
  (**(code **)(iVar4 + 4))(iVar4,asStack_4c,2,local_2c,1);
  if (asStack_4c[0] != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(asStack_4c[0],"TES Class");
    }
    iVar8 = thunk_FUN_00401aa0(asStack_4c[0],1);
    *(int *)(in_ECX + 0x14) = iVar8;
    if (iVar8 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar7 = *(undefined4 *)(in_ECX + 0x14);
    local_2c[0] = 1;
    (**(code **)(iVar4 + 4))(iVar4,uVar7,asStack_4c[0],local_2c,1);
    FUN_00441280();
    FUN_00401e40(uVar7);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  FUN_00677280();
  FUN_0067ae90();
  local_2c[0] = 1;
  (**(code **)(iVar4 + 4))(iVar4,asStack_4c,2,local_2c,1);
  if (asStack_4c[0] != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(asStack_4c[0],"Process Lists Class");
    }
    iVar8 = thunk_FUN_00401aa0(asStack_4c[0],1);
    *(int *)(in_ECX + 0x14) = iVar8;
    if (iVar8 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar7 = *(undefined4 *)(in_ECX + 0x14);
    local_2c[0] = 1;
    (**(code **)(iVar4 + 4))(iVar4,uVar7,asStack_4c[0],local_2c,1);
    FUN_006770f0();
    FUN_00401e40(uVar7);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  local_2c[0] = 1;
  (**(code **)(iVar4 + 4))(iVar4,asStack_4c,2,local_2c,1);
  if (asStack_4c[0] != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(asStack_4c[0],"Spectator Events");
    }
    iVar8 = thunk_FUN_00401aa0(asStack_4c[0],1);
    *(int *)(in_ECX + 0x14) = iVar8;
    if (iVar8 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar7 = *(undefined4 *)(in_ECX + 0x14);
    local_2c[0] = 1;
    (**(code **)(iVar4 + 4))(iVar4,uVar7,asStack_4c[0],local_2c,1);
    FUN_0067d040();
    FUN_00401e40(uVar7);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  local_2c[0] = 1;
  (**(code **)(iVar4 + 4))(iVar4,asStack_4c,2,local_2c,1);
  if (asStack_4c[0] != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(asStack_4c[0],"Sky/Weather");
    }
    iVar8 = thunk_FUN_00401aa0(asStack_4c[0],1);
    *(int *)(in_ECX + 0x14) = iVar8;
    if (iVar8 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar7 = *(undefined4 *)(in_ECX + 0x14);
    local_2c[0] = 1;
    (**(code **)(iVar4 + 4))(iVar4,uVar7,asStack_4c[0],local_2c,1);
    if ((char)param_1 != '\0') {
      FUN_00542ea0();
      FUN_005437c0();
    }
    FUN_00401e40(uVar7);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  iVar8 = DAT_00b3b90c;
  param_1 = 1;
  (**(code **)(iVar4 + 4))(iVar4,&iStack_34,4,&param_1,1);
  DAT_00b3b90c = iStack_34;
  if (iStack_34 == 0) {
    if ((iVar8 != 0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) {
      FUN_006ab160(0xffff,0,0);
      FUN_006ab160(0,0,0);
      FUN_006ab420();
    }
  }
  else if ((iVar8 == 0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) {
    FUN_006acd10(4,0,0x3f800000);
  }
  FUN_00461310(iVar4);
  param_1 = 1;
  (**(code **)(iVar4 + 4))(iVar4,asStack_4c,2,&param_1,1);
  if (asStack_4c[0] != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(asStack_4c[0],"Quick Keys");
    }
    iVar8 = thunk_FUN_00401aa0(asStack_4c[0],1);
    *(int *)(in_ECX + 0x14) = iVar8;
    if (iVar8 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    uVar7 = *(undefined4 *)(in_ECX + 0x14);
    param_1 = 1;
    (**(code **)(iVar4 + 4))(iVar4,uVar7,asStack_4c[0],&param_1,1);
    FUN_005c1420();
    FUN_00401e40(uVar7);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  if (0x20 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 1;
    (**(code **)(iVar4 + 4))(iVar4,asStack_4c,2,&param_1,1);
    if (asStack_4c[0] != 0) {
      if (*(int *)(in_ECX + 0x40) != 0) {
        FUN_004531b0(asStack_4c[0],"HUD Reticle");
      }
      iVar8 = thunk_FUN_00401aa0(asStack_4c[0],1);
      *(int *)(in_ECX + 0x14) = iVar8;
      if (iVar8 == 0) {
        FUN_00404ec0("Could not create save buffer, out of memory.");
      }
      uVar7 = *(undefined4 *)(in_ECX + 0x14);
      param_1 = 1;
      (**(code **)(iVar4 + 4))(iVar4,uVar7,asStack_4c[0],&param_1,1);
      FUN_005a8b60();
      FUN_00401e40(uVar7);
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
  }
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x21) {
    FUN_005a8ba0();
  }
  if (0x52 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 1;
    (**(code **)(iVar4 + 4))(iVar4,asStack_4c,2,&param_1,1);
    if (asStack_4c[0] != 0) {
      if (*(int *)(in_ECX + 0x40) != 0) {
        FUN_004531b0(asStack_4c[0],"Interface");
      }
      iVar8 = thunk_FUN_00401aa0(asStack_4c[0],1);
      *(int *)(in_ECX + 0x14) = iVar8;
      if (iVar8 == 0) {
        FUN_00404ec0("Could not create save buffer, out of memory.");
      }
      uVar7 = *(undefined4 *)(in_ECX + 0x14);
      param_1 = 1;
      (**(code **)(iVar4 + 4))(iVar4,uVar7,asStack_4c[0],&param_1,1);
      FUN_0057c000();
      FUN_00401e40(uVar7);
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
  }
  if (0x78 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 1;
    (**(code **)(iVar4 + 4))(iVar4,asStack_4c,2,&param_1,1);
    if (asStack_4c[0] != 0) {
      if (*(int *)(in_ECX + 0x40) != 0) {
        FUN_004531b0(asStack_4c[0],"Regions");
      }
      iVar8 = thunk_FUN_00401aa0(asStack_4c[0],1);
      *(int *)(in_ECX + 0x14) = iVar8;
      if (iVar8 == 0) {
        FUN_00404ec0("Could not create save buffer, out of memory.");
      }
      uVar7 = *(undefined4 *)(in_ECX + 0x14);
      param_1 = 1;
      (**(code **)(iVar4 + 4))(iVar4,uVar7,asStack_4c[0],&param_1,1);
      FUN_004a3100();
      FUN_00401e40(uVar7);
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
  }
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xffffbfff;
  return;
}



void FUN_00463700(void)

{
  FUN_0067cf00();
  if (DAT_00b3bf80 != 0) {
    FUN_00683500();
  }
  if (DAT_00b35b90 != 0) {
    FUN_004be420();
  }
  if (DAT_00b35b8c != 0) {
    FUN_004bd8c0();
  }
  FUN_0065e800();
  FUN_0045c470(DAT_00b33a98 + 0x74);
  FUN_00461580();
  FUN_00443300();
  FUN_00677280();
  FUN_0067ae90();
  DAT_00b3b90c = 0;
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    FUN_006ab160(0,0,0);
    FUN_006ab420();
  }
  thunk_FUN_005c0fc0();
  FUN_005a8ba0();
  FUN_0057c0a0();
  FUN_004f9fd0();
  FUN_004f9dd0();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004637c0(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  DWORD DVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined2 local_138;
  byte bStack_136;
  undefined4 uStack_135;
  undefined1 uStack_131;
  undefined4 *puStack_12c;
  int local_128;
  byte bStack_124;
  undefined4 uStack_123;
  undefined1 uStack_11f;
  undefined2 uStack_11e;
  uint uStack_11c;
  int aiStack_118 [66];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ae63e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_138;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffeb8;
  *unaff_FS_OFFSET = (int)&local_c;
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar6 = GetCurrentThreadId();
  if (DVar6 == DVar1) {
    bVar4 = *(byte *)(in_ECX + 0x18);
  }
  else {
    bVar4 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
  }
  if ((bVar4 & 1) != 0) {
    local_138 = 0;
    bStack_136 = 0;
    uStack_135._0_1_ = 0;
    FUN_0055e000(param_1[3],&local_138);
    puVar3 = (undefined4 *)CONCAT13((undefined1)uStack_135,CONCAT12(bStack_136,local_138));
    if (puVar3 != (undefined4 *)0x0) {
      iVar2 = puVar3[1];
      if (iVar2 != 0) {
        local_128 = iVar2;
        FUN_00401020("TESSaveLoadGame::LoadForm",uVar5);
        *(int *)(in_ECX + 0x14) = iVar2;
        uStack_11c = **(uint **)(DAT_00b33b00 + 0x14);
        *(uint **)(DAT_00b33b00 + 0x14) = *(uint **)(DAT_00b33b00 + 0x14) + 1;
        local_138 = (undefined2)uStack_11c;
        uStack_11e = local_138;
        bStack_136 = (byte)(uStack_11c >> 0x10);
        uStack_135._0_1_ = (undefined1)(uStack_11c >> 0x18);
        if (*(byte *)(param_1 + 1) == bStack_136) {
          uStack_11c = uStack_11c & 0xffff;
          uVar7 = FUN_00453530(param_1,*puVar3);
          FUN_0045a140(uStack_135);
          local_128 = param_1[3];
          *(int **)(in_ECX + 0x80) = &local_128;
          uVar5 = *(uint *)(in_ECX + 0x18);
          bStack_124 = bStack_136;
          *(uint *)(in_ECX + 0x18) = uVar5 | 0x80;
          param_1[2] = param_1[2] | 0x200000;
          uStack_11f = (undefined1)uStack_135;
          uStack_123 = uVar7;
          FUN_00460bc0(param_1,uVar7);
          (**(code **)(*param_1 + 0x54))(uVar7,0);
          if ((uVar5 >> 7 & 1) == 0) {
            *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xffffff7f;
          }
          else {
            *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x80;
          }
          *(undefined4 *)(in_ECX + 0x80) = 0;
          *(undefined1 *)(in_ECX + 0x7c) = *(undefined1 *)(in_ECX + 0x71);
          if (*(int *)(in_ECX + 0x1c) == 0) {
            puStack_12c = (undefined4 *)FUN_00401f00(0x18);
            uStack_4 = 0;
            if (puStack_12c == (undefined4 *)0x0) {
              uVar8 = 0;
            }
            else {
              uVar8 = FUN_00452670(0x32,0x32);
            }
            uStack_4 = 0xffffffff;
            *(undefined4 *)(in_ECX + 0x1c) = uVar8;
          }
          puStack_12c = (undefined4 *)FUN_00401f00(0x10);
          if (puStack_12c == (undefined4 *)0x0) {
            puStack_12c = (undefined4 *)0x0;
          }
          else {
            *puStack_12c = param_1;
            puStack_12c[1] = uVar7;
            puStack_12c[2] = 0;
            *(undefined1 *)(puStack_12c + 3) = uStack_131;
          }
          FUN_005a6ab0(&puStack_12c);
          iVar2 = local_128;
          iVar9 = (*(int *)(in_ECX + 0x14) - aiStack_118[0]) - local_128;
          if ((iVar9 != 4) && (iVar9 != 2)) {
            (**(code **)(*DAT_00b34d90 + 0x18))
                      (
                      "LoadGame() call did not properly empty buffer.  See Warnings.txt for more info."
                      );
          }
          FUN_00452230(iVar2);
          *(undefined4 *)(CONCAT13((undefined1)uStack_135,CONCAT12(bStack_136,local_138)) + 4) = 0;
          if (*(int *)(in_ECX + 0x50) != 0) {
            FUN_00452d60(param_1,*(int *)(in_ECX + 0x50));
            *(undefined4 *)(in_ECX + 0x50) = 0;
          }
          FUN_00401040();
          uVar7 = 1;
          goto LAB_004638f8;
        }
        _sprintf((char *)aiStack_118,
                 "Load Error: Form with ID %08X was saved with form type %s, but currently has form type %s.  Its loading will be skipped."
                 ,param_1[3],(&PTR_DAT_00b05e04)[(uint)bStack_136 * 3],
                 (&PTR_DAT_00b05e04)[(uint)*(byte *)(param_1 + 1) * 3]);
        (**(code **)(*DAT_00b34d90 + 0x18))(aiStack_118);
        FUN_00452df0(param_1[3],1);
        *(undefined4 *)(in_ECX + 0x14) = 0;
        FUN_00401040();
      }
    }
  }
  uVar7 = 0;
LAB_004638f8:
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



undefined4 FUN_00463a90(int *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  DWORD DVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int in_ECX;
  undefined2 unaff_BX;
  int unaff_FS_OFFSET;
  uint *puVar14;
  uint uStack_1c;
  int iStack_10;
  undefined1 uStack_c;
  undefined4 uStack_b;
  undefined1 uStack_7;
  undefined2 uStack_6;
  uint uStack_4;
  
  if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
    DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
    DVar6 = GetCurrentThreadId();
    if (DVar6 == DVar1) {
      bVar3 = *(byte *)(in_ECX + 0x18);
    }
    else {
      bVar3 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
    }
    if ((((bVar3 & 1) == 0) &&
        (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x185) != '\0')) &&
       (param_1 != DAT_00b333c4)) {
      puVar7 = (uint *)FUN_00452d30(param_1);
      if (puVar7 != (uint *)0x0) {
        iVar8 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05b7c,0);
        if (iVar8 == 0) {
          *(undefined1 *)(in_ECX + 0x70) = 0;
          *(undefined1 *)(in_ECX + 0x71) = 0x7d;
          *(undefined1 *)(in_ECX + 0x7c) = 0x7d;
          if (puVar7[1] != 0) {
            FUN_004a7a60("Form %08X is unloading, but it already has a buffer.",param_1[3]);
          }
          FUN_00401020("TESSaveLoadGame::UnloadForm");
          uVar9 = FUN_004535a0(param_1,*puVar7);
          iStack_10 = param_1[3];
          uStack_7 = *(undefined1 *)(in_ECX + 0x7c);
          uStack_c = (undefined1)param_1[1];
          *(int **)(in_ECX + 0x84) = &iStack_10;
          puVar14 = (uint *)CONCAT13(uStack_7,CONCAT12(uStack_c,unaff_BX));
          uStack_b = uVar9;
          uStack_4 = (**(code **)(*param_1 + 0x4c))(uVar9);
          uStack_4 = uStack_4 & 0xffff;
          sVar5 = FUN_00452250(param_1,uVar9);
          uStack_4 = CONCAT22(uStack_4._2_2_,(short)uStack_4 + sVar5);
          if ((uVar9 & 0x80000002) != 0) {
            piVar10 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
            if (piVar10 != (int *)0x0) {
              uStack_1c = FUN_006ecc80();
              if ((uStack_1c == 0) || (cVar4 = FUN_004c97f0(), cVar4 == '\0')) {
                uStack_1c = piVar10[3];
                iVar8 = FUN_004d6670();
                uVar2 = *(undefined4 *)(iVar8 + 0xc);
                puVar11 = (undefined4 *)(**(code **)(*piVar10 + 0x174))();
                FUN_00452f10(uVar2,uStack_1c,*puVar11,puVar11[1],puVar11[2]);
              }
              else {
                FUN_00452e70(*(undefined4 *)(uStack_1c + 0xc),piVar10[3]);
              }
              if ((int)uVar9 < 0) {
                FUN_00446cb0(piVar10[3]);
              }
            }
            iVar8 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
            puVar7 = puVar14;
            if ((iVar8 != 0) && ((uVar9 & 4) != 0)) {
              uVar2 = *(undefined4 *)(iVar8 + 0xc);
              iVar8 = FUN_004c9cf0();
              uStack_1c = *(uint *)(iVar8 + 0xc);
              uVar12 = FUN_004c9aa0();
              uVar13 = FUN_004c9a80(uVar12);
              FUN_00452fe0(uStack_1c,uVar2,uVar13,uVar12);
            }
          }
          uStack_4 = uStack_4 & 0xffff;
          FUN_00453500(uStack_4 + 4);
          FUN_0045b9a0(&stack0xffffffdc,4);
          FUN_00460710(param_1,uVar9);
          (**(code **)(*param_1 + 0x50))(uVar9);
          if (CONCAT22(uStack_6,CONCAT11(uStack_7,uStack_b._3_1_)) + 4 + uStack_1c !=
              *(int *)(in_ECX + 0x14)) {
            (**(code **)(*DAT_00b34d90 + 0x18))("SaveGame() call did not properly fill buffer.");
          }
          puVar7[1] = uStack_1c;
          *puVar7 = uVar9;
          *(undefined4 *)(in_ECX + 0x84) = 0;
          *(undefined4 *)(in_ECX + 0x14) = 0;
          FUN_00401040();
          return 1;
        }
        FUN_00452df0(param_1[3],1);
      }
    }
  }
  return 0;
}



void FUN_00463d70(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *local_30;
  undefined4 local_2c [4];
  undefined4 local_1c;
  
  local_30 = (uint *)0x0;
  FUN_0055e000(param_1,&local_30);
  if (local_30 != (uint *)0x0) {
    if ((*local_30 & 2) == 0) {
      if ((int)*local_30 < 0) {
        puVar3 = (undefined4 *)local_30[1];
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = local_2c;
          for (iVar2 = 0xb; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar4 = puVar4 + 1;
          }
          local_2c[0] = FUN_00459950(local_2c[0]);
          local_1c = FUN_00459950(local_1c);
          iVar2 = FUN_0045c4f0(param_1,local_2c);
          if (iVar2 != 0) {
            FUN_004637c0(iVar2);
          }
          FUN_0065c620(param_1);
          return;
        }
      }
      else {
        FUN_004a7a60("Reference in cell map has neither required flag.");
      }
    }
    else {
      puVar3 = (undefined4 *)local_30[1];
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = local_2c;
        for (iVar2 = 9; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar4 = puVar4 + 1;
        }
        local_2c[1] = FUN_00459950(local_2c[1]);
        local_2c[2] = FUN_00459950(local_2c[2]);
        iVar2 = FUN_004603e0(param_1,local_2c);
        if (iVar2 != 0) {
          piVar1 = (int *)FUN_009832e6(iVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05b7c,0);
          if (piVar1 == (int *)0x0) {
            FUN_004637c0(iVar2);
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00463e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar1 + 0x10))();
          return;
        }
      }
    }
  }
  return;
}



undefined4 FUN_00463ec0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae6b2;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0046b250(param_1,uVar1);
  if (iVar2 == 0) {
    FUN_00452df0(param_1,1);
  }
  else {
    FUN_0045c7a0(iVar2);
  }
  switch(param_3) {
  case 0xc:
    iVar2 = FUN_00401f00(0x1c0);
    local_4 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_0061bb60(param_2,0,0,0);
      goto LAB_00464017;
    }
    break;
  default:
    iVar2 = FUN_00401f00(0x3c);
    local_4 = 5;
    if (iVar2 != 0) {
      uVar3 = FUN_00568e10();
      goto LAB_00464017;
    }
    break;
  case 0xf:
    iVar2 = FUN_00401f00(0x40);
    local_4 = 1;
    if (iVar2 != 0) {
      uVar3 = FUN_00606860();
      goto LAB_00464017;
    }
    break;
  case 0x10:
    iVar2 = FUN_00401f00(0x68);
    local_4 = 2;
    if (iVar2 != 0) {
      uVar3 = FUN_00627490(0,0,0);
      goto LAB_00464017;
    }
    break;
  case 0x11:
    iVar2 = FUN_00401f00(0x58);
    local_4 = 4;
    if (iVar2 != 0) {
      uVar3 = FUN_0067d300();
      goto LAB_00464017;
    }
    break;
  case 0x12:
    iVar2 = FUN_00401f00(100);
    local_4 = 3;
    if (iVar2 != 0) {
      uVar3 = FUN_00625d00();
      goto LAB_00464017;
    }
  }
  uVar3 = 0;
LAB_00464017:
  local_4 = 0xffffffff;
  FUN_0046c300(param_1,1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_00464060(int param_1,undefined4 *param_2,char *param_3,char *param_4,char *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *_Str;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  pcVar9 = param_3;
  puVar1 = param_2;
  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  cVar2 = FUN_00459570(param_1,param_2,param_4,param_5);
  if (cVar2 != '\0') {
    return;
  }
  piVar3 = (int *)FUN_0045f2e0(param_1,0,2);
  if (((piVar3 == (int *)0x0) || ((char)piVar3[9] == '\0')) ||
     (iVar4 = FUN_0045dbc0(piVar3,0), iVar4 == 0)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    if (param_4 != (char *)0x0) {
      *param_4 = '\0';
    }
    if (param_5 != (char *)0x0) {
      *param_5 = '\0';
    }
    if (piVar3 == (int *)0x0) goto LAB_004641ac;
  }
  else {
    param_3 = (char *)0x0;
    FUN_0045d5f0(param_1,iVar4,puVar1,0,&param_3,0,local_14,local_10,&param_2,0);
    if (param_4 != (char *)0x0) {
      _sprintf(param_4,"%s %i",DAT_00b38720,(uint)param_3 & 0xffff);
    }
    if (param_5 != (char *)0x0) {
      _sprintf(param_5,"%02i:%02i:%02i",(uint)param_2 / 3600000,((uint)param_2 % 3600000) / 60000,
               (((uint)param_2 % 3600000) % 60000) / 1000);
    }
    (**(code **)(*piVar3 + 0xc))(0,0);
  }
  FUN_004303b0();
LAB_004641ac:
  if (pcVar9 != (char *)0x0) {
    _Str = (char *)(param_1 + 0x3c);
    pcVar5 = _strstr(_Str,"quicksave");
    pcVar6 = DAT_00b38710;
    pcVar8 = pcVar9;
    if (pcVar5 != (char *)0x0) {
      do {
        cVar2 = *pcVar6;
        *pcVar8 = cVar2;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      pcVar6 = pcVar9 + -1;
      do {
        pcVar8 = pcVar6;
        pcVar6 = pcVar8 + 1;
      } while (pcVar8[1] != '\0');
      builtin_strncpy(pcVar8 + 1," - ",4);
      pcVar6 = param_4;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        pcVar8 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
      } while (*pcVar8 != '\0');
      pcVar8 = param_4;
      for (uVar7 = (uint)((int)pcVar6 - (int)param_4) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = (int)pcVar6 - (int)param_4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      return;
    }
    pcVar5 = _strstr(_Str,"autosave");
    pcVar6 = DAT_00b38718;
    if (pcVar5 != (char *)0x0) {
      do {
        cVar2 = *pcVar6;
        *pcVar8 = cVar2;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      pcVar6 = pcVar9 + -1;
      do {
        pcVar8 = pcVar6;
        pcVar6 = pcVar8 + 1;
      } while (pcVar8[1] != '\0');
      builtin_strncpy(pcVar8 + 1," - ",4);
      pcVar6 = param_4;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        pcVar8 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
      } while (*pcVar8 != '\0');
      pcVar8 = param_4;
      for (uVar7 = (uint)((int)pcVar6 - (int)param_4) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = (int)pcVar6 - (int)param_4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      return;
    }
    pcVar6 = _strrchr(_Str,0x5c);
    pcVar6 = pcVar6 + 1;
    iVar4 = __strnicmp(pcVar6,"Save ",5);
    if (iVar4 != 0) {
      iVar4 = (int)pcVar9 - (int)pcVar6;
      do {
        cVar2 = *pcVar6;
        pcVar6[iVar4] = cVar2;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      pcVar6 = pcVar9;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      uVar7 = (int)pcVar6 - (int)(pcVar9 + 1);
      if (4 < uVar7) {
        pcVar9[uVar7 - 4] = '\0';
      }
      if (0x12 < uVar7) {
        pcVar9[0x12] = '\0';
      }
    }
  }
  return;
}



void FUN_00464320(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  bool bVar6;
  undefined1 local_24 [4];
  uint local_20;
  uint local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  piVar5 = *(int **)(in_ECX + 0x6c);
  bVar6 = piVar5 == (int *)0x0;
  if (bVar6) {
    FUN_0045d450();
    piVar5 = *(int **)(in_ECX + 0x6c);
  }
  local_1c = 0;
  do {
    if ((piVar5 == (int *)0x0) || ((piVar5[1] == 0 && (*piVar5 == 0)))) {
      if (bVar6) {
        FUN_00459400();
      }
      *(undefined1 *)(in_ECX + 0x71) = 0x7d;
      *(undefined1 *)(in_ECX + 0x7c) = 0x7d;
      *(undefined1 *)(in_ECX + 0x70) = 0;
      *(uint *)(in_ECX + 0x88) = local_1c + 1;
      return;
    }
    iVar1 = *piVar5;
    cVar2 = FUN_00459570(iVar1,&local_20,0,0);
    if (cVar2 == '\0') {
      piVar3 = (int *)FUN_0045f2e0(iVar1,0,2);
      if (((piVar3 != (int *)0x0) && ((char)piVar3[9] != '\0')) &&
         (iVar4 = FUN_0045dbc0(piVar3,0), iVar4 != 0)) {
        FUN_0045d5f0(iVar1,iVar4,&local_20,0,local_24,0,local_14,local_10,local_18,0);
        (**(code **)(*piVar3 + 0xc))(0,0);
        FUN_004303b0();
        goto LAB_004643f3;
      }
      local_20 = 0;
      if (piVar3 != (int *)0x0) {
        FUN_004303b0();
      }
    }
    else {
LAB_004643f3:
      if (local_1c < local_20) {
        local_1c = local_20;
      }
    }
    piVar5 = (int *)piVar5[1];
  } while( true );
}



void FUN_00464440(char param_1)

{
  DWORD DVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int *in_ECX;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  int *unaff_FS_OFFSET;
  undefined3 uStack00000005;
  float local_50;
  uint *puStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  uint uStack_38;
  float fStack_34;
  float fStack_30;
  uint uStack_28;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae6e6;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(char *)(DAT_00b33398 + 4) == '\0') {
    if (in_ECX[1] == 0) {
      local_3c = FUN_00401f00(0x10,uVar4);
      local_4 = 1;
      if (local_3c == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0045a860();
      }
      in_ECX[1] = iVar5;
    }
    local_4 = 0xffffffff;
    if (param_1 == '\0') {
      FUN_0045ec50();
    }
    in_ECX[6] = in_ECX[6] | 0x40;
    if (param_1 == '\0') {
      FUN_00463700();
    }
    uVar4 = *(uint *)(*in_ECX + 4);
    local_50 = 25.0;
    uVar8 = 0;
    if (uVar4 != 0) {
      piVar12 = *(int **)(*in_ECX + 8);
      piVar11 = piVar12;
      do {
        if (*piVar11 != 0) {
          local_3c = piVar12[uVar8];
          goto joined_r0x0046471a;
        }
        uVar8 = uVar8 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 < uVar4);
    }
    local_3c = 0;
joined_r0x0046471a:
    while (local_3c != 0) {
      if (*(char *)(DAT_00b33398 + 1) != '\0') {
        local_50 = local_50 + 0.01;
        FUN_0057b950(2,local_50);
      }
      puStack_4c = (uint *)0x0;
      uStack_48 = 0;
      FUN_00452600(&local_3c,&uStack_48,&puStack_4c);
      uVar7 = uStack_48;
      iVar5 = FUN_0046b250(uStack_48);
      if (iVar5 != DAT_00b333c4) {
        if (iVar5 == 0) {
          if (((*puStack_4c & 0x80000000) != 0) &&
             (puVar13 = (uint *)puStack_4c[1], puVar13 != (uint *)0x0)) {
            puVar14 = &uStack_38;
            for (iVar5 = 0xb; uVar4 = uStack_38, puVar13 = puVar13 + 1, iVar5 != 0;
                iVar5 = iVar5 + -1) {
              *puVar14 = *puVar13;
              puVar14 = puVar14 + 1;
            }
            cVar3 = FUN_00446b80(uStack_38);
            uVar8 = uStack_28;
            if (cVar3 == '\0') {
              if (*(uint *)(in_ECX[0x1d] + 0xc) < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(uint *)(*(int *)(in_ECX[0x1d] + 4) + uVar4 * 4);
              }
            }
            uStack_38 = uVar4;
            cVar3 = FUN_00446b80(uStack_28);
            if (cVar3 == '\0') {
              if (*(uint *)(in_ECX[0x1d] + 0xc) < uVar8) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(uint *)(*(int *)(in_ECX[0x1d] + 4) + uVar8 * 4);
              }
            }
            uStack_28 = uVar8;
            uVar9 = FUN_0046b250(uVar4);
            iVar5 = FUN_009832e6(uVar9,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
            iVar10 = FUN_009832e6(uVar9,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
            if (iVar10 != 0) {
              iStack_40 = (int)ROUND(fStack_34);
              iStack_44 = (int)ROUND(fStack_30);
              iVar5 = FUN_004efe80(iStack_40 >> 0xc,iStack_44 >> 0xc);
            }
            if ((iVar5 != 0) && (cVar3 = FUN_0043f8c0(iVar5,0), cVar3 != '\0')) {
              uVar7 = FUN_0045c4f0(uVar7,&uStack_38);
              FUN_004d35d0(uVar7);
            }
          }
        }
        else {
          FUN_0045f180(iVar5,puStack_4c);
        }
      }
    }
    (**(code **)(*(int *)*in_ECX + 0x1c))();
    if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*in_ECX)(1);
    }
    in_ECX[6] = in_ECX[6] & 0xffffffbf;
    *in_ECX = in_ECX[1];
    in_ECX[1] = 0;
    if (param_1 == '\0') {
      *(undefined1 *)(in_ECX + 0x2a) = 0;
    }
  }
  else {
    *(undefined1 *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x184) = 1;
    FUN_004599b0();
    FUN_00463700();
    (**(code **)(*(int *)*in_ECX + 0x1c))();
    FUN_00462080();
    FUN_00459870();
    FUN_00582160(0,1);
    FUN_0057ecb0();
    FUN_0067f180();
    FUN_0067fcf0();
    FUN_0043f6e0();
    FUN_0043f560();
    FUN_004492e0();
    FUN_00418e50();
    FUN_005b7150();
    FUN_005a6a80();
    FUN_005ad750(0);
    FUN_0044a2b0(&DAT_00a2ffb8);
    iVar5 = FUN_00401f00(0x804);
    local_4 = 0;
    if (iVar5 == 0) {
      DAT_00b333c4 = 0;
    }
    else {
      DAT_00b333c4 = FUN_0066a740();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x14,1);
    DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
    DVar6 = GetCurrentThreadId();
    uStack00000005 = (undefined3)((uint)iVar5 >> 8);
    if (DVar6 == DVar1) {
      uVar2 = (undefined1)in_ECX[6];
    }
    else {
      uVar2 = (undefined1)((uint)in_ECX[6] >> 0x12);
    }
    _param_1 = CONCAT31(uStack00000005,uVar2) & 0xffffff01;
    DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
    DVar6 = GetCurrentThreadId();
    if (DVar6 == DVar1) {
      in_ECX[6] = in_ECX[6] & 0xfffffffe;
    }
    else {
      in_ECX[6] = in_ECX[6] & 0xfffbffff;
    }
    FUN_0044f3d0(0,0);
    FUN_0045a530(_param_1);
    FUN_005ad750(0);
    uVar7 = FUN_006ecc80();
    FUN_004d8aa0(0);
    FUN_00447d80();
    FUN_004d8aa0(uVar7);
    FUN_004431f0(*(undefined4 *)(DAT_00b33a98 + 0xc));
    FUN_00404ee0("Initializing LOD land...");
    for (piVar12 = (int *)(DAT_00b33a98 + 0xc);
        (piVar12 != (int *)0x0 && ((piVar12[1] != 0 || (*piVar12 != 0))));
        piVar12 = (int *)piVar12[1]) {
      iVar5 = FUN_004ef1a0();
      if ((iVar5 == 0) && (iVar5 = FUN_004ef7e0(), iVar5 != 0)) {
        uVar7 = (**(code **)(*(int *)*piVar12 + 0xd4))();
        FUN_0040fec0("Initializing LOD land for worldspace \'%s\'",uVar7);
        FUN_004ef7e0();
        FUN_004ebc00();
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_00464910(int param_1)

{
  DWORD DVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  DWORD DVar7;
  uint uVar8;
  int iVar9;
  int in_ECX;
  byte local_d;
  int *local_c;
  int local_8;
  int local_4;
  
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar7 = GetCurrentThreadId();
  if (DVar7 == DVar1) {
    uVar8 = (uint)*(byte *)(in_ECX + 0x18);
  }
  else {
    uVar8 = *(uint *)(in_ECX + 0x18) >> 0x12;
  }
  if ((char)(uVar8 & 0xffffff01) == '\0') {
    return uVar8 & 0xffffff01;
  }
  local_d = FUN_004637c0(param_1);
  cVar6 = FUN_004c97f0();
  if (cVar6 == '\0') {
    iVar9 = FUN_004c9cf0();
    cVar6 = FUN_0055e000(*(undefined4 *)(iVar9 + 0xc),&local_c);
    piVar3 = local_c;
    if (cVar6 != '\0') {
      local_8 = FUN_004c9a80();
      local_4 = FUN_004c9aa0();
      piVar4 = (int *)0x0;
      piVar5 = piVar3;
      while (piVar3 != (int *)0x0) {
        puVar2 = (undefined4 *)*piVar3;
        if (((puVar2 == (undefined4 *)0x0) || (local_8 != puVar2[1])) || (local_4 != puVar2[2])) {
          piVar4 = piVar3;
          piVar3 = (int *)piVar3[1];
          piVar5 = local_c;
        }
        else {
          FUN_00463d70(*puVar2);
          local_d = 1;
          if (piVar4 == (int *)0x0) {
            FUN_0067f100();
            FUN_00401f20(puVar2);
            piVar5 = local_c;
          }
          else {
            FUN_0065c620(puVar2);
            piVar3 = (int *)piVar4[1];
            FUN_00401f20(puVar2);
            piVar5 = local_c;
          }
        }
      }
      if ((piVar5[1] == 0) && (*piVar5 == 0)) {
        iVar9 = FUN_004c9cf0();
        FUN_004524c0(*(undefined4 *)(iVar9 + 0xc));
        FUN_00401f20(local_c);
      }
    }
  }
  else {
    cVar6 = FUN_0055e000(*(undefined4 *)(param_1 + 0xc),&local_c);
    piVar3 = local_c;
    if (cVar6 != '\0') {
      for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if (*piVar3 != 0) {
          FUN_00463d70(*piVar3);
          local_d = 1;
        }
      }
      FUN_004524c0(*(undefined4 *)(param_1 + 0xc));
      FUN_004526e0();
      FUN_00401f20(local_c);
      return (uint)local_d;
    }
  }
  return (uint)local_d;
}



void FUN_00464ab0(uint param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  DWORD DVar9;
  char *pcVar10;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  byte local_59;
  float fStack_58;
  char *local_54;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  int iStack_40;
  double dStack_3c;
  char *local_34;
  uint local_30;
  float fStack_2c;
  undefined4 uStack_28;
  char *local_24;
  undefined2 local_20;
  undefined2 local_1e;
  _SYSTEMTIME _Stack_1c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae718;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff94;
  *unaff_FS_OFFSET = (int)&local_c;
  pbVar1 = (byte *)(in_ECX + 0x71);
  *(undefined1 *)(in_ECX + 0x70) = 0;
  *pbVar1 = 0x7d;
  *(undefined1 *)(in_ECX + 0x7c) = 0x7d;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_44 = 1;
    (**(code **)(param_1 + 8))(param_1,"TES4SAVEGAME",0xc,&local_44,1,uVar4);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 0xc;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_44 = 1;
    (**(code **)(uVar3 + 8))(uVar3,(undefined1 *)(in_ECX + 0x70),1,&local_44,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 1;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_44 = 1;
    (**(code **)(uVar3 + 8))(uVar3,pbVar1,1,&local_44,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 1;
  }
  if (*(int *)(in_ECX + 0xa4) == 0) {
    GetSystemTime((LPSYSTEMTIME)(in_ECX + 0x94));
    *(uint *)(in_ECX + 0xa4) = (uint)*pbVar1;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_44 = 1;
    (**(code **)(uVar3 + 8))(uVar3,in_ECX + 0x94,0x10,&local_44,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 0x10;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_44 = 1;
    (**(code **)(uVar3 + 8))(uVar3,(uint *)(in_ECX + 0xa4),4,&local_44,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  local_34 = (char *)FUN_004da2a0();
  pcVar5 = local_34;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  local_59 = ((char)pcVar5 - ((char)local_34 + '\x01')) + 1;
  local_30 = FUN_005e1fd0();
  local_30 = local_30 & 0xffff;
  local_24 = (char *)0x0;
  local_20 = 0;
  local_1e = 0;
  local_4 = 0;
  FUN_004de8d0(&local_24);
  local_54 = local_24;
  if (local_24 == (char *)0x0) {
    piVar6 = (int *)FUN_006ecc80();
    local_54 = (char *)(**(code **)(*piVar6 + 0xd4))();
  }
  uVar4 = param_1;
  param_1 = param_1 & 0xffffff00;
  if (local_54 != (char *)0x0) {
    pcVar5 = local_54;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    param_1 = CONCAT31(SUB43(uVar4,1),((char)pcVar5 - ((char)local_54 + '\x01')) + '\x01');
  }
  fVar11 = (float10)FUN_00402bd0();
  dStack_3c = (double)(fVar11 / (float10)24.0);
  iVar7 = FUN_00402c00();
  fStack_2c = (float)iVar7;
  if (iVar7 < 0) {
    fStack_2c = fStack_2c + 4.2949673e+09;
  }
  fStack_2c = fStack_2c + (float)dStack_3c;
  GetLocalTime(&_Stack_1c);
  fStack_58 = 0.0;
  uStack_4c = 0x100;
  uStack_48 = 0x100;
  puStack_50 = (undefined4 *)0x0;
  local_44 = 0;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    FUN_00977c50(3);
    FUN_00432890();
    puVar8 = (undefined4 *)FUN_00411b70(&uStack_4c,&uStack_48);
    puStack_50 = puVar8;
    FUN_00432860();
    FUN_00977c50(2);
    if (puVar8 != (undefined4 *)0x0) {
      local_44 = ((int *)puVar8[0x17])[1] - *(int *)puVar8[0x17];
      fStack_58 = (float)(local_44 + 8);
    }
  }
  else {
    fStack_58 = (float)DAT_00b06c50 / (float)DAT_00b06c4c;
    iVar7 = FUN_009828c0();
    fStack_58 = (float)(iVar7 * 0x300 + 8);
  }
  iVar7 = DAT_00b333c4;
  DVar9 = GetTickCount();
  *(int *)(iVar7 + 0x714) = *(int *)(iVar7 + 0x714) + (DVar9 - *(int *)(iVar7 + 0x710));
  DVar9 = GetTickCount();
  uStack_28 = *(undefined4 *)(iVar7 + 0x714);
  *(DWORD *)(iVar7 + 0x710) = DVar9;
  iStack_40 = local_59 + 0x24 + (param_1 & 0xff) + (int)fStack_58;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    dStack_3c = (double)CONCAT44(dStack_3c._4_4_,1);
    (**(code **)(uVar3 + 8))(uVar3,&iStack_40,4,&dStack_3c,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  pcVar5 = param_2;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    if (param_2 == (char *)0x0) {
LAB_00464e40:
      if (*(int *)(in_ECX + 0x88) == 0) {
        FUN_00464320();
      }
      dStack_3c = (double)CONCAT44(dStack_3c._4_4_,*(undefined4 *)(in_ECX + 0x88));
      if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
        param_2 = (char *)0x1;
        (**(code **)(uVar3 + 8))(uVar3,&dStack_3c,4,&param_2,1);
        *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
      }
      else {
        *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
        *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
      }
      goto LAB_00464ed1;
    }
    pcVar10 = _strstr(param_2,"quicksave");
    if (pcVar10 == (char *)0x0) {
      pcVar5 = _strstr(pcVar5,"autosave");
      if (pcVar5 == (char *)0x0) goto LAB_00464e40;
    }
  }
  dStack_3c = (double)((ulonglong)dStack_3c & 0xffffffff00000000);
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    param_2 = (char *)0x1;
    (**(code **)(uVar3 + 8))(uVar3,&dStack_3c,4,&param_2,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
LAB_00464ed1:
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    param_2 = (char *)0x1;
    (**(code **)(uVar3 + 8))(uVar3,&local_59,1,&param_2,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 1;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    param_2 = (char *)0x1;
    (**(code **)(uVar3 + 8))(uVar3,local_34,(uint)local_59,&param_2,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (uint)local_59;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    param_2 = (char *)0x1;
    (**(code **)(uVar3 + 8))(uVar3,&local_30,2,&param_2,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 2;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    param_2 = (char *)0x1;
    (**(code **)(uVar3 + 8))(uVar3,&param_1,1,&param_2,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 1;
  }
  if (local_54 != (char *)0x0) {
    if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
      param_2 = (char *)0x1;
      (**(code **)(uVar3 + 8))(uVar3,local_54,param_1 & 0xff,&param_2,1);
    }
    else {
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (param_1 & 0xff);
    }
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    param_2 = (char *)0x1;
    (**(code **)(uVar3 + 8))(uVar3,&fStack_2c,4,&param_2,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    param_2 = (char *)0x1;
    (**(code **)(uVar3 + 8))(uVar3,&uStack_28,4,&param_2,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    param_2 = (char *)0x1;
    (**(code **)(uVar3 + 8))(uVar3,&_Stack_1c,0x10,&param_2,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 0x10;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    param_2 = (char *)0x1;
    (**(code **)(uVar3 + 8))(uVar3,&fStack_58,4,&param_2,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  puVar8 = puStack_50;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    if (puStack_50 != (undefined4 *)0x0) {
      FUN_0045bab0(uVar3,&uStack_4c,4);
      FUN_0045bab0(uVar3,&uStack_48,4);
      FUN_0045bab0(uVar3,*(int *)puVar8[0x17] + puVar8[0x14],local_44);
      (**(code **)*puVar8)(1);
    }
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (int)fStack_58;
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    FUN_004531b0(iStack_40,"Save Game Header");
  }
  FUN_00401f20(local_24);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00465130(uint param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *in_ECX;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_2b;
  undefined1 uStack_27;
  int iStack_24;
  undefined1 uStack_20;
  undefined4 uStack_1f;
  undefined1 uStack_1b;
  short sStack_1a;
  int iStack_18;
  undefined1 uStack_14;
  undefined4 uStack_13;
  undefined1 uStack_f;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pcVar1 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ae74b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff9c;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((((uint)in_ECX[6] >> 9 & 1) == 0) && (cVar2 = FUN_00452330(uVar4), cVar2 == '\0')) {
    if (pcVar1 != (char *)0x0) {
      iVar8 = 9;
      bVar13 = true;
      pcVar10 = pcVar1;
      pcVar12 = "autosave";
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar13 = *pcVar10 == *pcVar12;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      } while (bVar13);
      if (bVar13) goto LAB_004651a5;
    }
    FUN_0057acc0(DAT_00b38788,0,1,0x3f800000);
    uVar5 = 0;
  }
  else {
LAB_004651a5:
    if (DAT_00b3bf80 != 0) {
      FUN_00683490();
    }
    FUN_00432860();
    FUN_00461680();
    piVar11 = (int *)0x0;
    if (((uint)in_ECX[6] >> 9 & 1) == 0) {
      piVar11 = (int *)FUN_0045f2e0(param_1,pcVar1,0);
    }
    if ((char)param_3 != '\0') {
      param_3 = FUN_00401f00(8);
      uStack_4 = 0;
      if (param_3 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_0045f0f0();
      }
      uStack_4 = 0xffffffff;
      in_ECX[0x10] = iVar8;
    }
    *(undefined1 *)(in_ECX + 0x1c) = 0;
    *(undefined1 *)((int)in_ECX + 0x71) = 0x7d;
    *(undefined1 *)(in_ECX + 0x1f) = 0x7d;
    FUN_00464ab0(piVar11,pcVar1);
    FUN_0045c870(piVar11);
    iStack_50 = 0;
    if ((((uint)in_ECX[6] >> 9 & 1) == 0) && (iStack_50 = piVar11[0xc], iStack_50 == -1)) {
      iStack_50 = piVar11[0x52];
    }
    uStack_48 = 0;
    if (((uint)in_ECX[6] >> 9 & 1) == 0) {
      param_3 = 1;
      (*(code *)piVar11[2])(piVar11,&uStack_48,4,&param_3,1);
    }
    else {
      in_ECX[0x24] = in_ECX[0x24] + 4;
    }
    if (((uint)in_ECX[6] >> 9 & 1) == 0) {
      param_3 = 1;
      (*(code *)piVar11[2])(piVar11,&uStack_48,4,&param_3,1);
    }
    else {
      in_ECX[0x24] = in_ECX[0x24] + 4;
    }
    FUN_00462280(piVar11);
    iStack_54 = 0;
    uVar4 = *(uint *)(*in_ECX + 4);
    uVar6 = 0;
    if (uVar4 != 0) {
      piVar7 = *(int **)(*in_ECX + 8);
      piVar9 = piVar7;
      do {
        if (*piVar9 != 0) {
          iStack_3c = piVar7[uVar6];
          goto joined_r0x004652fd;
        }
        uVar6 = uVar6 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar6 < uVar4);
    }
    iStack_3c = 0;
joined_r0x004652fd:
    while (iStack_3c != 0) {
      puStack_40 = (undefined4 *)0x0;
      iStack_44 = 0;
      FUN_00452600(&iStack_3c,&iStack_44,&puStack_40);
      if ((iStack_44 != 0) && (puStack_40 != (undefined4 *)0x0)) {
        iVar8 = puStack_40[1];
        in_ECX[5] = iVar8;
        uStack_2b = *puStack_40;
        uStack_27 = (undefined1)in_ECX[0x1f];
        iStack_30 = iStack_44;
        if (iVar8 == 0) {
          piVar7 = (int *)FUN_0046b250(iStack_44);
          if (piVar7 != (int *)0x0) {
            uStack_2c = (undefined1)piVar7[1];
            uStack_2b = FUN_004535a0(piVar7,uStack_2b);
            if ((*(uint *)(DAT_00b33b00 + 0x18) >> 9 & 1) == 0) {
              puStack_40 = (undefined4 *)0x1;
              (*(code *)piVar11[2])(piVar11,&iStack_30,10,&puStack_40,1);
            }
            else {
              *(int *)(DAT_00b33b00 + 0x90) = *(int *)(DAT_00b33b00 + 0x90) + 10;
            }
            iStack_54 = iStack_54 + 1;
            in_ECX[0x21] = (int)&iStack_30;
            uVar4 = (**(code **)(*piVar7 + 0x4c))(uStack_2b);
            param_2 = (char *)(uVar4 & 0xffff);
            sVar3 = FUN_00452250(piVar7,uStack_2b);
            param_2 = (char *)CONCAT22(param_2._2_2_,(short)param_2 + sVar3);
            if (((uint)in_ECX[6] >> 9 & 1) == 0) {
              puStack_40 = (undefined4 *)0x1;
              (*(code *)piVar11[2])(piVar11,&param_2,2,&puStack_40,1);
            }
            else {
              in_ECX[0x24] = in_ECX[0x24] + 2;
            }
            if ((short)param_2 != 0) {
              iVar8 = thunk_FUN_00401aa0((uint)param_2 & 0xffff,1);
              in_ECX[5] = iVar8;
              if (iVar8 == 0) {
                FUN_00404ec0("Could not create save buffer, out of memory.");
              }
              iVar8 = in_ECX[5];
              FUN_00460710(piVar7,uStack_2b);
              (**(code **)(*piVar7 + 0x50))(uStack_2b);
              if (((uint)param_2 & 0xffff) + iVar8 != in_ECX[5]) {
                (**(code **)(*DAT_00b34d90 + 0x18))("SaveGame() call did not properly fill buffer.")
                ;
              }
              FUN_0045c4a0(piVar11,iVar8,(uint)param_2 & 0xffff);
              FUN_00401e40(iVar8);
              in_ECX[5] = 0;
            }
            in_ECX[0x21] = 0;
            if (in_ECX[0x10] != 0) {
              iStack_18 = iStack_30;
              uStack_13 = uStack_2b;
              uStack_f = uStack_27;
              uStack_14 = uStack_2c;
              uStack_e = (short)param_2;
              FUN_0045ad00(&iStack_18);
            }
          }
          if (piVar7 == DAT_00b333c4) {
            iStack_30 = -0x1000001;
            if ((*(uint *)(DAT_00b33b00 + 0x18) >> 9 & 1) == 0) {
              puStack_40 = (undefined4 *)0x1;
              (*(code *)piVar11[2])(piVar11,&iStack_30,10,&puStack_40,1);
            }
            else {
              *(int *)(DAT_00b33b00 + 0x90) = *(int *)(DAT_00b33b00 + 0x90) + 10;
            }
            iStack_54 = iStack_54 + 1;
            uStack_38 = 5;
            if (((uint)in_ECX[6] >> 9 & 1) == 0) {
              puStack_40 = (undefined4 *)0x1;
              (*(code *)piVar11[2])(piVar11,&uStack_38,2,&puStack_40,1);
            }
            else {
              in_ECX[0x24] = in_ECX[0x24] + 2;
            }
            param_3 = CONCAT31(param_3._1_3_,*(undefined1 *)((int)DAT_00b333c4 + 0x116));
            iStack_34 = DAT_00b333c4[0x1c0];
            if (((uint)in_ECX[6] >> 9 & 1) == 0) {
              puStack_40 = (undefined4 *)0x1;
              (*(code *)piVar11[2])(piVar11,&param_3,1,&puStack_40,1);
            }
            else {
              in_ECX[0x24] = in_ECX[0x24] + 1;
            }
            if (((uint)in_ECX[6] >> 9 & 1) == 0) {
              puStack_40 = (undefined4 *)0x1;
              (*(code *)piVar11[2])(piVar11,&iStack_34,4,&puStack_40,1);
            }
            else {
              in_ECX[0x24] = in_ECX[0x24] + 4;
            }
          }
        }
        else {
          uVar4 = **(uint **)(DAT_00b33b00 + 0x14);
          *(int *)(DAT_00b33b00 + 0x14) = *(int *)(DAT_00b33b00 + 0x14) + 4;
          param_1._2_1_ = (undefined1)(uVar4 >> 0x10);
          param_1._3_1_ = (undefined1)(uVar4 >> 0x18);
          uStack_2c = param_1._2_1_;
          uStack_27 = param_1._3_1_;
          param_1 = uVar4;
          if ((*(uint *)(DAT_00b33b00 + 0x18) >> 9 & 1) == 0) {
            puStack_40 = (undefined4 *)0x1;
            (*(code *)piVar11[2])(piVar11,&iStack_30,10,&puStack_40,1);
          }
          else {
            *(int *)(DAT_00b33b00 + 0x90) = *(int *)(DAT_00b33b00 + 0x90) + 10;
          }
          iStack_54 = iStack_54 + 1;
          if (((uint)in_ECX[6] >> 9 & 1) == 0) {
            puStack_40 = (undefined4 *)0x1;
            (*(code *)piVar11[2])(piVar11,&param_1,2,&puStack_40,1);
          }
          else {
            in_ECX[0x24] = in_ECX[0x24] + 2;
          }
          sVar3 = (short)param_1;
          if (sVar3 != 0) {
            if (((uint)in_ECX[6] >> 9 & 1) == 0) {
              puStack_40 = (undefined4 *)0x1;
              (*(code *)piVar11[2])(piVar11,in_ECX[5],param_1 & 0xffff,&puStack_40,1);
              sVar3 = (short)param_1;
            }
            else {
              in_ECX[0x24] = in_ECX[0x24] + (param_1 & 0xffff);
            }
          }
          if (in_ECX[0x10] != 0) {
            uStack_1f = uStack_2b;
            iStack_24 = iStack_30;
            uStack_20 = uStack_2c;
            uStack_1b = uStack_27;
            sStack_1a = sVar3;
            FUN_0045ad00(&iStack_24);
          }
          in_ECX[5] = 0;
        }
      }
    }
    FUN_0045fb50(piVar11);
    iStack_4c = 0;
    if ((((uint)in_ECX[6] >> 9 & 1) == 0) && (iStack_4c = piVar11[0xc], iStack_4c == -1)) {
      iStack_4c = piVar11[0x52];
    }
    FUN_0045e220(piVar11);
    if (((uint)in_ECX[6] >> 9 & 1) == 0) {
      (**(code **)(*piVar11 + 0xc))(iStack_50,0);
      if (((uint)in_ECX[6] >> 9 & 1) == 0) {
        param_3 = 1;
        (*(code *)piVar11[2])(piVar11,&iStack_4c,4,&param_3,1);
      }
      else {
        in_ECX[0x24] = in_ECX[0x24] + 4;
      }
      if (((uint)in_ECX[6] >> 9 & 1) == 0) {
        iStack_50 = 1;
        (*(code *)piVar11[2])(piVar11,&iStack_54,4,&iStack_50,1);
      }
      else {
        in_ECX[0x24] = in_ECX[0x24] + 4;
      }
    }
    if (in_ECX[0x10] != 0) {
      FUN_0045adc0(piVar11 + 0xf);
      iVar8 = in_ECX[0x10];
      if (iVar8 != 0) {
        FUN_004530a0();
        FUN_00401f20(iVar8);
      }
      in_ECX[0x10] = 0;
    }
    if (((uint)in_ECX[6] >> 9 & 1) == 0) {
      FUN_00747d30();
      FUN_0045a190(piVar11);
      if (piVar11 != (int *)0x0) {
        if (in_ECX[0x1b] != 0) {
          FUN_0065c620(piVar11);
        }
        (**(code **)*piVar11)(1);
      }
    }
    FUN_00432890();
    uVar5 = 1;
  }
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00465860(undefined4 param_1,char *param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  DWORD DVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  uint *puVar13;
  float fVar14;
  undefined4 *puVar15;
  uint uVar16;
  DWORD DVar17;
  int in_ECX;
  uint unaff_EBX;
  uint unaff_EBP;
  undefined4 unaff_ESI;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  undefined4 unaff_EDI;
  float *pfVar21;
  int *unaff_FS_OFFSET;
  char *pcVar22;
  undefined2 uStack_32b;
  char cStack_329;
  undefined1 uStack_328;
  undefined1 uStack_327;
  ushort uStack_326;
  undefined3 uVar23;
  byte bStack_320;
  undefined2 uStack_31e;
  byte bStack_31c;
  undefined4 uStack_31b;
  int iStack_314;
  undefined4 *puStack_310;
  uint uStack_30c;
  int *piStack_308;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  int *local_2f8;
  int iStack_2f4;
  ushort uStack_2f0;
  byte bStack_2ee;
  undefined1 uStack_2ed;
  int iStack_2ec;
  int iStack_2e4;
  undefined4 uStack_2e0;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  short sStack_2d0;
  DWORD local_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined4 uStack_2b8;
  undefined1 auStack_2a8 [16];
  undefined **local_298;
  int *local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  uint uStack_27c;
  float fStack_278;
  float fStack_274;
  undefined4 uStack_270;
  undefined4 uStack_260;
  int iStack_25c;
  int iStack_258;
  float afStack_254 [4];
  undefined4 uStack_244;
  char acStack_218 [260];
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae797;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&bStack_31c;
  bStack_320 = (byte)unaff_EBX;
  uStack_31e = (undefined2)(unaff_EBX >> 0x10);
  uStack_328 = (undefined1)unaff_ESI;
  uStack_327 = (undefined1)((uint)unaff_ESI >> 8);
  uStack_326 = (ushort)((uint)unaff_ESI >> 0x10);
  uStack_32b = (undefined2)((uint)unaff_EDI >> 8);
  cStack_329 = (char)((uint)unaff_EDI >> 0x18);
  *unaff_FS_OFFSET = (int)&local_c;
  local_280 = param_1;
  local_2cc = GetTickCount();
  *(undefined1 *)(in_ECX + 0xa9) = 0;
  iVar4 = FUN_00589b70();
  if ((iVar4 != 0) && (iVar4 = FUN_005898f0(), iVar4 != 0)) {
    *(undefined1 *)(in_ECX + 0xa9) = 1;
  }
  if (((*(char *)(in_ECX + 0xa9) != '\0') && (DAT_00b3c0ec = 0, *(int *)(DAT_00b33398 + 0x24) != 0))
     && (cVar2 = FUN_006ab160(0xffff,0), cVar2 != '\0')) {
    FUN_006ab420();
  }
  piVar5 = (int *)FUN_0045f2e0(param_1,param_2);
  iVar4 = 0;
  local_290 = 0x32;
  local_284 = 0x32;
  local_298 = &PTR__scalar_deleting_destructor__00a3903c;
  local_28c = 0;
  local_288 = 0;
  local_2f8 = piVar5;
  local_294 = (int *)FUN_00401f00();
  local_4 = 0;
  if (((piVar5 == (int *)0x0) || ((char)piVar5[9] == '\0')) ||
     ((iVar4 = FUN_0045dbc0(piVar5), iVar4 == 0 || (iVar4 == -1)))) {
    if (((param_2 == (char *)0x0) ||
        (pcVar22 = _strstr(param_2,"quicksave"), pcVar22 == (char *)0x0)) && (iVar4 == 0)) {
      FUN_00579c10(DAT_00b38740,0,0,&DAT_00a2f7ec);
    }
    if (piVar5 != (int *)0x0) {
      if (*(int *)(in_ECX + 0x6c) != 0) {
        FUN_0065c620();
      }
      (**(code **)*piVar5)();
    }
  }
  else {
    bVar1 = *(byte *)(in_ECX + 0x7c);
    if ((bVar1 != 0x7e) && (0x7d < bVar1)) {
      _sprintf(local_114,
               "You are loading a savegame with version %i, but the latest version this exe supports is %i.  It is possible that this save game will load correctly, but it is unlikely.  Select abort to skip loading."
               ,(uint)bVar1);
      iVar6 = (**(code **)(*DAT_00b34d90 + 0x18))();
      if (iVar6 == 3) {
        if (*(int *)(in_ECX + 0x6c) != 0) {
          FUN_0065c620();
        }
        (**(code **)*piVar5)();
        goto LAB_00466a92;
      }
    }
    FUN_0045d5f0(piVar5,iVar4,0,in_ECX + 0xb0,in_ECX + 0x1b4,0,in_ECX + 0x1b8,0,in_ECX + 0x1bc);
    if (param_3 != '\0') {
      uStack_2d8 = FUN_00401f00();
      local_4._0_1_ = 1;
      if (uStack_2d8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_0045f0f0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      *(undefined4 *)(in_ECX + 0x40) = uVar7;
    }
    cVar2 = FUN_0045c9c0();
    if (cVar2 == '\0') {
      if (*(int *)(in_ECX + 0x6c) != 0) {
        FUN_0065c620();
      }
      (**(code **)*piVar5)();
      if (*(int *)(in_ECX + 0x40) != 0) {
        FUN_004530a0();
        FUN_00401f20();
      }
      *(undefined4 *)(in_ECX + 0x40) = 0;
    }
    else {
      FUN_0045a190();
      DVar17 = *(DWORD *)(DAT_00b33398 + 0x10);
      DVar8 = GetCurrentThreadId();
      if (DVar8 == DVar17) {
        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 1;
      }
      else {
        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x40000;
      }
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x800;
      *(undefined1 *)(in_ECX + 0xa8) = 0;
      if (*(int *)(in_ECX + 0x40) != 0) {
        FUN_004531b0(iVar4);
      }
      FUN_00462080();
      uStack_2d8 = FUN_00401f00();
      local_4._0_1_ = 2;
      if (uStack_2d8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_0045a860();
      }
      *(undefined4 *)(in_ECX + 4) = uVar7;
      local_4 = (uint)local_4._1_3_ << 8;
      iStack_2f4 = 1;
      (*(code *)piVar5[1])(piVar5,&iStack_300,4,&iStack_2f4);
      iStack_2f4 = 1;
      (*(code *)piVar5[1])(piVar5,&iStack_2fc,4,&iStack_2f4,1);
      if (iStack_300 != 0) {
        *(undefined4 *)(g_IOManager_singleton + 0x38) = 5;
        FUN_00432860();
        FUN_00459a10();
        iVar4 = piVar5[0xc];
        if (iVar4 == -1) {
          iVar4 = piVar5[0x52];
        }
        (**(code **)(*piVar5 + 0xc))(*(int *)(in_ECX + 0x8c) + iStack_300);
        FUN_0045e3d0(piVar5);
        (**(code **)(*piVar5 + 0xc))(iVar4,0);
        FUN_00447db0(0xfffffffe);
        FUN_00462b20(piVar5);
        FUN_00447db0(0xffffffff);
        iStack_304 = 0;
        uStack_2d8 = 0;
        if (uStack_30c != 0) {
          do {
            FUN_005ad980(0);
            uStack_328 = 1;
            uStack_327 = 0;
            uStack_326 = 0;
            (*(code *)piVar5[1])(piVar5,&stack0xfffffcdc,0xc,&uStack_328,1);
            if (unaff_EBP == 0xfeffffff) {
              uStack_328 = 0;
              uStack_327 = 0;
              uStack_326 = 0;
              cStack_329 = '\0';
              iStack_314 = 1;
              (*(code *)piVar5[1])(piVar5,&cStack_329,1,&iStack_314,1);
              iStack_314 = 1;
              (*(code *)piVar5[1])(piVar5,&uStack_328,4,&iStack_314,1);
              *(char *)((int)DAT_00b333c4 + 0x116) = cStack_329;
              DAT_00b333c4[0x1c0] = CONCAT22(uStack_326,CONCAT11(uStack_327,uStack_328));
              uVar9 = unaff_EBP;
            }
            else {
              uVar9 = FUN_00452180(unaff_EBP);
              if (uVar9 == 0) {
                pcVar22 = 
                "Load Error: Plugin for form with ID %08X does not exist.  Its loading will be skipped."
                ;
                uVar9 = unaff_EBP;
LAB_00465d16:
                FUN_004a7a60(pcVar22,unaff_EBP);
                (**(code **)(*piVar5 + 0xc))(uStack_31b >> 8 & 0xffff,1);
              }
              else {
                FUN_0045a140(uStack_31b);
                cStack_329 = '\x01';
                piVar10 = (int *)FUN_0046b250(uVar9);
                uVar23 = (undefined3)(unaff_EBX >> 8);
                if ((unaff_EBX & 0x200) == 0) {
                  if ((char)bStack_31c < '\0') {
                    local_28c = 0;
                    uStack_27c = 0;
                    FUN_0045bb00(piVar5,&local_28c,0x2c);
                    local_28c = FUN_00459950(local_28c);
                    uStack_27c = FUN_00459950(uStack_27c);
                    (**(code **)(*piVar5 + 0xc))(0xffffffd4,1);
                    uVar7 = FUN_0046b250(uStack_27c);
                    iStack_314 = FUN_009832e6(uVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
                    iVar4 = FUN_009832e6(uVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
                    if (iVar4 != 0) {
                      local_2f8 = (int *)(int)ROUND(fStack_278);
                      iStack_2f4 = (int)ROUND(fStack_274);
                      iStack_314 = FUN_004efe80((int)local_2f8 >> 0xc,iStack_2f4 >> 0xc);
                    }
                    if ((iStack_314 == 0) || (cVar2 = FUN_0043f8c0(iStack_314,0), cVar2 == '\0')) {
                      if (piVar10 != (int *)0x0) {
                        iVar6 = FUN_009832e6(piVar10,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
                        uStack_328 = (undefined1)iVar6;
                        uStack_327 = (undefined1)((uint)iVar6 >> 8);
                        uStack_326 = (ushort)((uint)iVar6 >> 0x10);
                        if ((iVar6 != 0) && (iVar6 = FUN_006ecc80(), iVar6 != 0)) {
                          uVar7 = CONCAT22(uStack_326,CONCAT11(uStack_327,uStack_328));
                          FUN_006ecc80(uVar7);
                          FUN_004cecd0(uVar7);
                        }
                        FUN_0045c7a0(piVar10);
                        piVar10 = (int *)0x0;
                      }
                      if ((iStack_314 == 0) || (cVar2 = FUN_004c97f0(), cVar2 == '\0')) {
                        if (iVar4 == 0) {
                          pcVar22 = 
                          "Worldspace %08X could not be found while loading a reference that changed cells.  Its loading will be skipped."
                          ;
                          unaff_EBP = uStack_27c;
                          goto LAB_00465d16;
                        }
                        FUN_00452f10(uStack_27c,uVar9,fStack_278,fStack_274,uStack_270);
                        FUN_00446cb0(uVar9);
                      }
                      else {
                        FUN_00452e70(uStack_27c,uVar9);
                        FUN_00446cb0(uVar9);
                      }
                    }
                    else if (piVar10 == (int *)0x0) {
                      piVar10 = (int *)FUN_0045c4f0(uVar9,&local_28c);
LAB_004663f3:
                      FUN_004d35d0(piVar10);
                    }
                  }
                  else if ((((piVar10 == (int *)0x0) &&
                            (puVar13 = (uint *)FUN_00452d10(uVar9), puVar13 != (uint *)0x0)) &&
                           ((*puVar13 & 0x80000000) != 0)) &&
                          (pfVar18 = (float *)puVar13[1], pfVar18 != (float *)0x0)) {
                    pfVar21 = afStack_254;
                    for (iVar4 = 0xb; pfVar18 = pfVar18 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
                      *pfVar21 = *pfVar18;
                      pfVar21 = pfVar21 + 1;
                    }
                    fVar14 = (float)FUN_00459950(afStack_254[0]);
                    afStack_254[0] = fVar14;
                    uStack_244 = FUN_00459950(uStack_244);
                    uVar7 = FUN_0046b250(fVar14);
                    iVar4 = FUN_009832e6(uVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
                    iVar6 = FUN_009832e6(uVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
                    if (iVar6 != 0) {
                      iStack_2e4 = (int)ROUND(afStack_254[1]);
                      iStack_2ec = (int)ROUND(afStack_254[2]);
                      iVar4 = FUN_004efe80(iStack_2e4 >> 0xc,iStack_2ec >> 0xc);
                    }
                    if ((iVar4 != 0) && (cVar2 = FUN_0043f8c0(iVar4,0), cVar2 != '\0')) {
                      piVar10 = (int *)FUN_0045c4f0(uVar9,afStack_254);
                      goto LAB_004663f3;
                    }
                  }
                }
                else if ((unaff_EBX & 0x400) == 0) {
                  local_2cc = 0;
                  uStack_2c8 = 0;
                  uStack_2c4 = 0;
                  FUN_0045bb00(piVar5,&local_2cc,0x24);
                  uStack_2c8 = FUN_00459950(uStack_2c8);
                  uStack_2c4 = FUN_00459950(uStack_2c4);
                  (**(code **)(*piVar5 + 0xc))(0xffffffdc,1);
                  uVar7 = FUN_0046b250(uStack_2c4);
                  uVar11 = FUN_009832e6(uVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
                  uStack_328 = (undefined1)uVar11;
                  uStack_327 = (undefined1)((uint)uVar11 >> 8);
                  uStack_326 = (ushort)((uint)uVar11 >> 0x10);
                  iVar4 = FUN_009832e6(uVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
                  cVar2 = FUN_00452430(&fStack_2c0);
                  if (cVar2 != '\0') {
                    cStack_329 = '\0';
                    goto LAB_004663fb;
                  }
                  if (iVar4 == 0) {
                    iVar6 = CONCAT22(uStack_326,CONCAT11(uStack_327,uStack_328));
                  }
                  else {
                    iStack_2fc = (int)ROUND(fStack_2c0);
                    iStack_300 = (int)ROUND(fStack_2bc);
                    iVar6 = FUN_004efe80(iStack_2fc >> 0xc,iStack_300 >> 0xc);
                    uStack_328 = (undefined1)iVar6;
                    uStack_327 = (undefined1)((uint)iVar6 >> 8);
                    uStack_326 = (ushort)((uint)iVar6 >> 0x10);
                  }
                  iVar12 = 0;
                  if (iVar6 == 0) {
LAB_00465fbb:
                    if (local_2cc != 3) {
                      if ((iVar12 == 0) || (cVar2 = FUN_004c97f0(), cVar2 == '\0')) {
                        if (iVar4 == 0) {
                          FUN_004a7a60("Worldspace %08X could not be found while loading a created reference.  Its loading will be skipped."
                                       ,uStack_2c4);
                          (**(code **)(*piVar5 + 0xc))(uStack_31b >> 8 & 0xffff,1);
                          goto LAB_0046686c;
                        }
                        FUN_00452f10(uStack_2c4,uVar9,fStack_2c0,fStack_2bc,uStack_2b8);
                      }
                      else {
                        FUN_00452e70(uStack_2c4,uVar9);
                      }
                      if (piVar10 != (int *)0x0) {
                        FUN_0045c7a0(piVar10);
                        piVar10 = (int *)0x0;
                      }
                      goto LAB_004663fb;
                    }
                  }
                  else {
                    cVar2 = FUN_0043f8c0(iVar6,0);
                    if (cVar2 == '\0') {
                      iVar12 = CONCAT22(uStack_326,CONCAT11(uStack_327,uStack_328));
                      goto LAB_00465fbb;
                    }
                  }
                  iVar4 = FUN_0046b250(uVar9);
                  if (iVar4 != 0) {
                    puVar15 = (undefined4 *)FUN_00452d30(iVar4);
                    uVar7 = 0;
                    if (puVar15 != (undefined4 *)0x0) {
                      uVar7 = *puVar15;
                    }
                    uVar16 = FUN_00453530(iVar4,uVar7);
                    uVar16 = ~CONCAT13(bStack_31c,uVar23) & uVar16;
                    uVar19 = uVar16 & 0xfff;
                    if (uVar19 != 0) {
                      iVar6 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
                      if (iVar6 != 0) {
                        uVar19 = uVar16 & 0xfbf;
                      }
                      if ((uVar19 & 0xfffff7ff) != 0) {
                        FUN_0045c7a0(iVar4);
                      }
                    }
                  }
                  piVar10 = (int *)FUN_004603e0(uVar9,&local_2cc);
                }
                else {
                  iVar4 = 0;
                  iVar6 = 0;
                  uStack_328 = 0;
                  uStack_327 = 0;
                  uStack_326 = 0;
                  iStack_314 = 0;
                  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x5b) {
LAB_00465df4:
                    FUN_0045bb00(piVar5,&uStack_260,0xc);
                    iVar4 = iStack_25c;
                    iStack_314 = iStack_258;
                    iVar6 = 0xc;
                    uVar7 = FUN_00459950(uStack_260);
                    uStack_328 = (undefined1)uVar7;
                    uStack_327 = (undefined1)((uint)uVar7 >> 8);
                    uStack_326 = (ushort)((uint)uVar7 >> 0x10);
                  }
                  else {
                    if ((bStack_31c & 4) == 0) {
                      if ((bStack_31c & 2) != 0) {
                        FUN_0045bb00(piVar5,&uStack_2d4,6);
                        iVar4 = (int)uStack_2d4._2_2_;
                        iStack_314 = (int)sStack_2d0;
                        iVar6 = 6;
                        uVar7 = uStack_2d4;
                        goto LAB_00465dd8;
                      }
                    }
                    else {
                      FUN_0045bb00(piVar5,&uStack_2e0,4);
                      iVar4 = (int)uStack_2e0._2_1_;
                      iStack_314 = (int)uStack_2e0._3_1_;
                      iVar6 = 4;
                      uVar7 = uStack_2e0;
LAB_00465dd8:
                      uVar7 = FUN_00459990(uVar7);
                      uStack_328 = (undefined1)uVar7;
                      uStack_327 = (undefined1)((uint)uVar7 >> 8);
                      uStack_326 = (ushort)((uint)uVar7 >> 0x10);
                    }
                    if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x5b) goto LAB_00465df4;
                  }
                  (**(code **)(*piVar5 + 0xc))(-iVar6,1);
                  piVar10 = (int *)FUN_0046b250(uVar9);
                  iVar6 = FUN_009832e6(piVar10,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
                  if (((iVar6 == 0) || (iVar6 = FUN_004c9a80(), iVar6 != iVar4)) ||
                     (iVar6 = FUN_004c9aa0(), iVar6 != iStack_314)) {
                    FUN_00452fe0(CONCAT22(uStack_326,CONCAT11(uStack_327,uStack_328)),uVar9,iVar4,
                                 iStack_314);
                    if (piVar10 != (int *)0x0) {
                      FUN_0045c7a0(piVar10);
                    }
                    piVar10 = (int *)0x0;
                  }
                }
LAB_004663fb:
                piVar5 = (int *)FUN_009832e6(piVar10,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
                if ((piVar10 == (int *)0x0) || (*(byte *)(piVar10 + 1) == bStack_320)) {
                  if ((piVar5 != (int *)0x0) &&
                     (iVar4 = (**(code **)(*piVar5 + 0x170))(), iVar4 == 0)) {
                    FUN_004a7a60("Load Error: Reference with ID %08X and saved with form type %s has no bound object.  Its loading will be skipped."
                                 ,uVar9,(&PTR_DAT_00b05e04)[(unaff_EBX & 0xff) * 3]);
                    goto LAB_00466494;
                  }
                  if (cStack_329 == '\0') goto LAB_00466494;
                  uVar7 = 0;
                  if (piVar10 == (int *)0x0) {
                    if (uStack_31b._1_2_ == 0) {
                      FUN_00452c90(uVar9,CONCAT13(bStack_31c,uVar23));
                    }
                    else {
                      bStack_2ee = bStack_320;
                      uStack_2ed = (undefined1)uStack_31b;
                      uStack_2f0 = uStack_31b._1_2_;
                      uVar7 = FUN_00453500(uStack_31b._1_2_ + 4);
                      DVar17 = *(DWORD *)(DAT_00b33398 + 0x10);
                      DVar8 = GetCurrentThreadId();
                      if (DVar8 == DVar17) {
                        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffe;
                      }
                      else {
                        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffbffff;
                      }
                      FUN_0045b9a0(&uStack_2f0,4);
                      DVar17 = *(DWORD *)(DAT_00b33398 + 0x10);
                      DVar8 = GetCurrentThreadId();
                      if (DVar8 == DVar17) {
                        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 1;
                      }
                      else {
                        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x40000;
                      }
                      FUN_0045bb00(piStack_308,*(undefined4 *)(in_ECX + 0x14),
                                   uStack_31b >> 8 & 0xffff);
                      FUN_00452cf0(uVar9,CONCAT13(bStack_31c,uVar23),uVar7);
                    }
                    FUN_00452df0(uVar9,1);
                    iVar4 = *(int *)(in_ECX + 0x40);
                  }
                  else {
                    puVar15 = (undefined4 *)FUN_00452d30(piVar10);
                    if (puVar15 != (undefined4 *)0x0) {
                      uVar7 = *puVar15;
                    }
                    uVar16 = FUN_00453530(piVar10,uVar7);
                    iStack_314 = FUN_00459fa0(piVar10);
                    *(undefined4 *)(in_ECX + 0x44) = 0x1ffff000;
                    (**(code **)(*piVar10 + 0x60))(uVar16 & 0x1ffff080);
                    uVar23 = (undefined3)(uVar9 >> 8);
                    uVar19 = ~CONCAT13(bStack_320,uVar23) & uVar16;
                    uVar20 = uVar19 & 0xfff;
                    if (uVar20 != 0) {
                      iVar4 = FUN_009832e6(piVar10,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
                      if (iVar4 != 0) {
                        uVar20 = uVar19 & 0x7ff;
                        iVar4 = FUN_009832e6(piVar10,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
                        if (iVar4 != 0) {
                          uVar20 = uVar19 & 0x7bf;
                        }
                      }
                      if (((uVar20 != 0) && (piVar10 != DAT_00b333c4)) &&
                         (cVar2 = FUN_00446b80(piVar10[3]), cVar2 == '\0')) {
                        cVar2 = FUN_00446b80(piVar10[3]);
                        if (cVar2 != '\0') {
                          FUN_004a7a60("Created form %08X with type %s is going to be reset due to flags: %08X.  Header flags: %08X  Current Flags: %08X"
                                       ,piVar10[3],
                                       (&PTR_DAT_00b05e04)[(uint)*(byte *)(piVar10 + 1) * 3],uVar20,
                                       CONCAT13(bStack_320,uVar23),uVar16);
                        }
                        FUN_0045bde0(piVar10,uVar20,CONCAT13(bStack_320,uVar23));
                        uVar3 = FUN_0045a500();
                        iStack_2ec = CONCAT31(iStack_2ec._1_3_,uVar3);
                        if ((char)piVar10[1] == '0') {
                          uVar7 = *(undefined4 *)(DAT_00b33398 + 0x10);
                          uStack_32b = (undefined2)((uint)uVar7 >> 8);
                          cStack_329 = (char)((uint)uVar7 >> 0x18);
                          DVar17 = GetCurrentThreadId();
                          if (DVar17 == CONCAT13(cStack_329,(int3)uVar7)) {
                            *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffe;
                          }
                          else {
                            *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffbffff;
                          }
                        }
                        (**(code **)(*piVar10 + 0x6c))();
                        FUN_0045a530(iStack_2ec);
                        cVar2 = FUN_0045c020(piVar10,uVar20,1);
                        if (cVar2 == '\0') {
                          FUN_004a7a60("InitObject deleted form %08X with type %i.  Continuing should be possible."
                                       ,CONCAT22(uStack_326,CONCAT11(uStack_327,uStack_328)),
                                       uVar9 & 0xff);
                          (**(code **)(*local_294 + 0xc))(uStack_31e,1);
                          piVar5 = piStack_308;
                          goto LAB_0046686c;
                        }
                      }
                    }
                    FUN_00452c90(piVar10[3],CONCAT13(bStack_320,uVar23));
                    iVar4 = FUN_00453500(uStack_31e);
                    FUN_0045bb00(uStack_30c,iVar4,uStack_31e);
                    *(undefined1 **)(in_ECX + 0x80) = &uStack_328;
                    FUN_00460bc0(piVar10,CONCAT13(bStack_320,uVar23));
                    (**(code **)(*piVar10 + 0x54))(CONCAT13(bStack_320,uVar23),uVar16);
                    *(undefined4 *)(in_ECX + 0x80) = 0;
                    puVar15 = (undefined4 *)FUN_00401f00(0x10);
                    if (puVar15 == (undefined4 *)0x0) {
                      puVar15 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar15 = piVar10;
                      puVar15[1] = CONCAT13(uStack_328,CONCAT12(cStack_329,uStack_32b));
                      puVar15[2] = uVar16;
                      *(undefined1 *)(puVar15 + 3) = uStack_327;
                    }
                    if (piVar10 != DAT_00b333c4) {
                      FUN_005a6ab0(&stack0xfffffccc);
                      puVar15 = puStack_310;
                    }
                    puStack_310 = puVar15;
                    iVar6 = *(int *)(in_ECX + 0x14) - (uint)uStack_326;
                    if ((iVar6 != iVar4) && (iVar6 - iVar4 != -2)) {
                      (**(code **)(*DAT_00b34d90 + 0x18))
                                (
                                "LoadGame() call did not properly empty buffer.  See Warnings.txt for more info."
                                );
                    }
                    *(undefined4 *)(in_ECX + 0x44) = 0x60000000;
                    (**(code **)(*piVar10 + 0x60))(uVar16 & 0x60000000);
                    FUN_0045a020(piVar10,iStack_314);
                    FUN_00452230(iVar4);
                    FUN_00452df0(piVar10[3],1);
                    if (*(int *)(in_ECX + 0x50) != 0) {
                      FUN_00452d60(piVar10,*(int *)(in_ECX + 0x50));
                      *(undefined4 *)(in_ECX + 0x50) = 0;
                    }
                    iVar4 = *(int *)(in_ECX + 0x40);
                  }
                  if (iVar4 != 0) {
                    FUN_0045ad00(&stack0xfffffcdc);
                  }
                }
                else {
                  FUN_004a7a60("Load Error: Form with ID %08X was saved with form type %s, but currently has form type %s.  Its loading will be skipped."
                               ,uVar9,(&PTR_DAT_00b05e04)[(unaff_EBX & 0xff) * 3],
                               (&PTR_DAT_00b05e04)[(uint)*(byte *)(piVar10 + 1) * 3]);
LAB_00466494:
                  (**(code **)(*piStack_308 + 0xc))(uStack_31b >> 8 & 0xffff,1);
                }
                *(undefined1 *)(in_ECX + 0x7c) = *(undefined1 *)(in_ECX + 0x71);
                piVar5 = piStack_308;
              }
            }
LAB_0046686c:
            uStack_2d8 = uStack_2d8 + 1;
            unaff_EBP = uVar9;
          } while (uStack_2d8 < uStack_30c);
        }
        iVar4 = iStack_304;
        FUN_00464440(1);
        FUN_00432890();
        FUN_0045fda0(auStack_2a8,iVar4,1);
        if (iVar4 != 0) {
          FUN_00401f20(iVar4);
        }
        FUN_00459870();
        FUN_0045c320();
        FUN_0057a850();
        FUN_00675f40();
        FUN_00673bd0(1);
        FUN_00673bd0(2);
        FUN_00441510();
        FUN_00461030(1);
        FUN_0045fc60(piVar5);
        FUN_00677360();
        FUN_00677a90();
        FUN_0043beb0();
        FUN_00459a90();
        DVar17 = *(DWORD *)(DAT_00b33398 + 0x10);
        DVar8 = GetCurrentThreadId();
        if (DVar8 == DVar17) {
          *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffe;
        }
        else {
          *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffbffff;
        }
        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffff7ff;
        *(undefined1 *)(in_ECX + 0xa8) = 0;
        FUN_0065e800();
        FUN_0065e860();
        FUN_00665260(DAT_00b333c4);
        FUN_00663f50();
        FUN_00447300();
        *(undefined1 *)(in_ECX + 0x70) = 0;
        *(undefined1 *)(in_ECX + 0x71) = 0x7d;
        *(undefined1 *)(in_ECX + 0x7c) = 0x7d;
        if (*(int *)(in_ECX + 0x40) != 0) {
          FUN_0045adc0(piVar5 + 0xf);
          iVar4 = *(int *)(in_ECX + 0x40);
          if (iVar4 != 0) {
            FUN_004530a0();
            FUN_00401f20(iVar4);
          }
          *(undefined4 *)(in_ECX + 0x40) = 0;
        }
        if (*(int *)(in_ECX + 0x6c) != 0) {
          FUN_0065c620(piVar5);
        }
        (**(code **)*piVar5)(1);
        DAT_00b33b04 = 1;
        DVar17 = GetTickCount();
        local_2cc = DVar17 - local_2cc;
        fVar14 = (float)(int)local_2cc;
        if ((int)local_2cc < 0) {
          fVar14 = fVar14 + 4.2949673e+09;
        }
        _sprintf(acStack_218,"LoadGame took %.2f seconds\n",(double)(fVar14 / 1000.0));
        FUN_00401f20(local_294);
        uVar7 = 1;
        goto LAB_00466a9c;
      }
      DVar17 = *(DWORD *)(DAT_00b33398 + 0x10);
      DVar8 = GetCurrentThreadId();
      if (DVar8 == DVar17) {
        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffe;
      }
      else {
        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffbffff;
      }
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffff7ff;
      FUN_0045a4e0();
      if (*(int *)(in_ECX + 0x6c) != 0) {
        FUN_0065c620();
      }
      (**(code **)*piVar5)();
      if (*(undefined4 **)(in_ECX + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + 4))();
      }
      *(undefined4 *)(in_ECX + 4) = 0;
    }
  }
LAB_00466a92:
  FUN_00401f20();
  uVar7 = 0;
LAB_00466a9c:
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



void FUN_00466ad0(void)

{
  FUN_0057acc0(DAT_00b38790,0,1,0x3f800000);
  FUN_00465130(0,"quicksave",0);
  return;
}



undefined4 FUN_00466b00(void)

{
  char cVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0xab) = 1;
  FUN_0057acc0(DAT_00b38798,0,1,0x3f800000);
  cVar1 = FUN_00465860(0,"quicksave",0);
  if (cVar1 == '\0') {
    FUN_0057acc0(DAT_00b387b0,0,1,0x3f800000);
    *(undefined1 *)(in_ECX + 0xab) = 0;
    return 0;
  }
  *(undefined1 *)(in_ECX + 0xab) = 0;
  return 1;
}



void FUN_00466b70(void)

{
  DWORD DVar1;
  byte bVar2;
  char cVar3;
  DWORD DVar4;
  int in_ECX;
  
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar4 = GetCurrentThreadId();
  if (DVar4 == DVar1) {
    bVar2 = *(byte *)(in_ECX + 0x18);
  }
  else {
    bVar2 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
  }
  if ((bVar2 & 1) == 0) {
    cVar3 = FUN_0065d140();
    if (cVar3 == '\0') {
      *(undefined1 *)(in_ECX + 0xaa) = 0;
      FUN_0057acc0(DAT_00b387b8,0,1,0x3f800000);
      FUN_00465130(0,"autosave",0);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00466be0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_114 [8];
  float fStack_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_114;
  if (param_1 != 4) {
    if (param_1 != 5) {
      return;
    }
    uVar2 = FUN_0043fd20();
    if (*(int *)(DAT_00b333a0 + 0x34) != 0) {
      uVar2 = 1;
    }
    uVar8 = 0;
    iVar9 = DAT_00b333a0;
    if (uVar2 != 0) {
      do {
        if ((*(int *)(iVar9 + 0x34) != 0) || (*(int *)(*(int *)(iVar9 + 0x3c) + uVar8 * 4) != 0)) {
          FUN_004d5a90();
          iVar9 = DAT_00b333a0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar2);
    }
    uVar1 = DAT_00b35ed0;
    iVar9 = 5;
    do {
      uVar10 = 0;
      piVar6 = DAT_00b333c4 + 8;
      uVar3 = FUN_004d6670(0);
      uVar4 = FUN_006ecc80(uVar3);
      uVar5 = (**(code **)(*DAT_00b333c4 + 0x174))(piVar6,uVar4);
      piVar6 = (int *)FUN_0044a7d0(uVar1,uVar5,piVar6,uVar4,uVar3,uVar10);
      puVar7 = (undefined4 *)(**(code **)(*piVar6 + 0x174))();
      fStack_10c = (float)puVar7[2] + 1000.0;
      FUN_004d8a30(*puVar7,puVar7[1],fStack_10c);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (DAT_00b33c00 == (DAT_00b33c00 / 0x32) * 0x32) {
    _sprintf(local_108,"Test All Cells %i.ess",DAT_00b33c00);
    FUN_00465130(0,local_108,1);
  }
  DAT_00b33c00 = DAT_00b33c00 + 1;
  return;
}



void FUN_00466d50(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x1c0) != 0) &&
     (cVar1 = FUN_00465860(0,*(int *)(in_ECX + 0x1c0),0), cVar1 != '\0')) {
    return;
  }
  FUN_005aea60(0);
  return;
}



void FUN_00466d80(void)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(in_ECX + iVar1 * 4) != 0) {
      (**(code **)**(undefined4 **)(in_ECX + iVar1 * 4))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1a);
  return;
}



void FUN_00466da0(void)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(in_ECX + iVar1 * 4) != 0) {
      (**(code **)(**(int **)(in_ECX + iVar1 * 4) + 4))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1a);
  return;
}



void FUN_00466dd0(int param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  if (param_1 != 0) {
    param_1 = param_1 - (int)in_ECX;
    iVar2 = 0x1a;
    do {
      if ((*in_ECX != 0) && (iVar1 = *(int *)(param_1 + (int)in_ECX), iVar1 != 0)) {
        (**(code **)(*(int *)*in_ECX + 8))(iVar1);
      }
      in_ECX = in_ECX + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



undefined4 FUN_00466e10(int param_1)

{
  char cVar1;
  int *in_ECX;
  int iVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar2 = 0;
  param_1 = param_1 - (int)in_ECX;
  while( true ) {
    if (*in_ECX == 0) {
      bVar3 = *(int *)(param_1 + (int)in_ECX) == 0;
    }
    else {
      cVar1 = (**(code **)(*(int *)*in_ECX + 0xc))(*(undefined4 *)(param_1 + (int)in_ECX));
      bVar3 = cVar1 == '\0';
    }
    if (!bVar3) break;
    iVar2 = iVar2 + 1;
    in_ECX = in_ECX + 1;
    if (0x19 < iVar2) {
      return 0;
    }
  }
  return 1;
}



void FUN_00466e60(void)

{
  void *in_ECX;
  
  _memset(in_ECX,0,0x68);
  return;
}



void FUN_00466e80(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  _memset(in_ECX,0,0x68);
  iVar2 = 0;
  do {
    switch(iVar2) {
    case 0:
      *in_ECX = param_1;
      break;
    case 1:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05d8c,0);
      in_ECX[1] = uVar1;
      break;
    case 2:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05050,0);
      in_ECX[2] = uVar1;
      break;
    case 3:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05d6c,0);
      in_ECX[3] = uVar1;
      break;
    case 4:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05d48,0);
      in_ECX[4] = uVar1;
      break;
    case 5:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05d2c,0);
      in_ECX[5] = uVar1;
      break;
    case 6:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
      in_ECX[6] = uVar1;
      break;
    case 7:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05d10,0);
      in_ECX[7] = uVar1;
      break;
    case 8:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03550,0);
      in_ECX[8] = uVar1;
      break;
    case 9:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0);
      in_ECX[9] = uVar1;
      break;
    case 10:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
      in_ECX[10] = uVar1;
      break;
    case 0xb:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05cf4,0);
      in_ECX[0xb] = uVar1;
      break;
    case 0xc:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b031d0,0);
      in_ECX[0xc] = uVar1;
      break;
    case 0xd:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05cd4,0);
      in_ECX[0xd] = uVar1;
      break;
    case 0xe:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03304,0);
      in_ECX[0xe] = uVar1;
      break;
    case 0xf:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05cb4,0);
      in_ECX[0xf] = uVar1;
      break;
    case 0x10:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05c94,0);
      in_ECX[0x10] = uVar1;
      break;
    case 0x11:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05c78,0);
      in_ECX[0x11] = uVar1;
      break;
    case 0x12:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
      in_ECX[0x12] = uVar1;
      break;
    case 0x13:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05c5c,0);
      in_ECX[0x13] = uVar1;
      break;
    case 0x14:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05c40,0);
      in_ECX[0x14] = uVar1;
      break;
    case 0x15:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05c24,0);
      in_ECX[0x15] = uVar1;
      break;
    case 0x16:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0333c,0);
      in_ECX[0x16] = uVar1;
      break;
    case 0x17:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05c08,0);
      in_ECX[0x17] = uVar1;
      break;
    case 0x18:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05be8,0);
      in_ECX[0x18] = uVar1;
      break;
    case 0x19:
      uVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05bcc,0);
      in_ECX[0x19] = uVar1;
      break;
    default:
      FUN_004a7a60("Case not setup for form component type %i in InitFormComponentArray().",iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1a);
  return;
}



void FUN_00467270(undefined2 param_1)

{
  int *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 0xe) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00467286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x50))();
  return;
}



void FUN_00467290(undefined2 param_1)

{
  int *in_ECX;
  
  *(undefined2 *)(in_ECX + 2) = param_1;
                    /* WARNING: Could not recover jumptable at 0x004672a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x50))();
  return;
}



void FUN_004672b0(undefined2 param_1)

{
  int *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x004672c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x50))();
  return;
}



void FUN_004672f0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_009832e6();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00467312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x40))();
    return;
  }
  return;
}



void FUN_00467320(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b654;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[1] = 0;
  *(undefined2 *)(in_ECX + 2) = 0x32;
  *(undefined2 *)((int)in_ECX + 10) = 0x32;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 1;
  *(undefined2 *)(in_ECX + 4) = 0;
  *(undefined2 *)((int)in_ECX + 0x12) = 0;
  in_ECX[5] = 0;
  return;
}



void FUN_00467370(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  
  puVar1 = (undefined4 *)(in_ECX + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    while( true ) {
      cVar3 = FUN_0046cb60();
      if (cVar3 != '\0') break;
      FUN_00401f20(*puVar1);
      puVar2 = *(undefined4 **)(in_ECX + 0x1c);
      if (puVar2 == (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x1c) = puVar2[1];
        *puVar1 = *puVar2;
        FUN_00401f20(puVar2);
      }
    }
  }
  return;
}



void FUN_004673c0(void)

{
  int in_ECX;
  
  FUN_0046ae40(0x53424341,in_ECX + 4,0x10);
  if (*(int *)(in_ECX + 0x14) != 0) {
    FUN_0046ba80(0x4d414e49,*(undefined4 *)(*(int *)(in_ECX + 0x14) + 0xc));
  }
  return;
}



void FUN_004673f0(undefined4 param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *in_ECX;
  int *piVar7;
  
  piVar5 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b05d6c,0);
  if (piVar5 != (int *)0x0) {
    pcVar1 = *(code **)(*in_ECX + 0x50);
    in_ECX[1] = piVar5[1];
    (*pcVar1)(0x10);
    uVar4 = (**(code **)(*piVar5 + 0x48))();
    *(undefined2 *)(in_ECX + 2) = uVar4;
    (**(code **)(*in_ECX + 0x50))(0x10);
    uVar4 = (**(code **)(*piVar5 + 0x4c))();
    *(undefined2 *)((int)in_ECX + 10) = uVar4;
    (**(code **)(*in_ECX + 0x50))(0x10);
    pcVar1 = *(code **)(*in_ECX + 0x50);
    *(short *)(in_ECX + 3) = (short)piVar5[3];
    (*pcVar1)(0x10);
    pcVar1 = *(code **)(*in_ECX + 0x50);
    *(undefined2 *)((int)in_ECX + 0xe) = *(undefined2 *)((int)piVar5 + 0xe);
    (*pcVar1)(0x10);
    pcVar1 = *(code **)(*in_ECX + 0x50);
    *(short *)(in_ECX + 4) = (short)piVar5[4];
    (*pcVar1)(0x10);
    pcVar1 = *(code **)(*in_ECX + 0x50);
    *(undefined2 *)((int)in_ECX + 0x12) = *(undefined2 *)((int)piVar5 + 0x12);
    (*pcVar1)(0x10);
    FUN_00467370();
    piVar7 = in_ECX + 6;
    for (piVar3 = piVar5 + 6; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      puVar2 = (undefined4 *)*piVar3;
      if (puVar2 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)FUN_00401f00(8);
        *puVar6 = *puVar2;
        puVar6[1] = puVar2[1];
        FUN_0067b1e0(puVar6);
      }
      if ((int *)piVar7[1] != (int *)0x0) {
        piVar7 = (int *)piVar7[1];
      }
    }
    in_ECX[5] = piVar5[5];
  }
  return;
}



int FUN_00467510(int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x18);
  do {
    if (piVar1 == (int *)0x0) {
      return -1;
    }
    piVar2 = (int *)*piVar1;
    if (param_2 == '\0') {
      if (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        goto LAB_00467544;
      }
    }
    else if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, (*(byte *)(iVar3 + 0x34) >> 3 & 1) == 0)) {
LAB_00467544:
      if (iVar3 == param_1) {
        return (int)(char)piVar2[1];
      }
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}



void FUN_00467560(void)

{
  bool bVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 0x18);
  bVar1 = true;
  if ((*(int *)(in_ECX + 0x1c) == 0) && (*piVar2 == 0)) {
    bVar1 = false;
  }
  do {
    if (!bVar1) {
      return;
    }
    if (((int *)*piVar2 != (int *)0x0) && ((*(byte *)(*(int *)*piVar2 + 0x34) >> 1 & 1) == 0)) {
      bVar1 = false;
    }
    piVar2 = (int *)piVar2[1];
  } while (piVar2 != (int *)0x0);
  return;
}



void FUN_004675a0(void)

{
  bool bVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 0x18);
  bVar1 = false;
  do {
    if (bVar1) {
      return;
    }
    if (((int *)*piVar2 != (int *)0x0) && ((*(byte *)(*(int *)*piVar2 + 0x34) >> 2 & 1) != 0)) {
      bVar1 = true;
    }
    piVar2 = (int *)piVar2[1];
  } while (piVar2 != (int *)0x0);
  return;
}



void FUN_004675e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  
  if (param_1 != 0) {
    (**(code **)(*in_ECX + 0x50))(0x40);
    for (piVar2 = in_ECX + 6; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      piVar1 = (int *)*piVar2;
      if ((piVar1 != (int *)0x0) && (*piVar1 == param_1)) {
        if ((char)param_1 != -1) {
          *(char *)(piVar1 + 1) = (char)param_1;
          return;
        }
        piVar1 = (int *)piVar2[1];
        if (piVar1 != (int *)0x0) {
          piVar2[1] = piVar1[1];
          *piVar2 = *piVar1;
          FUN_00401f20(piVar1);
          return;
        }
        *piVar2 = 0;
        return;
      }
    }
    piVar2 = (int *)FUN_00401f00(8);
    *(char *)(piVar2 + 1) = (char)param_1;
    *piVar2 = param_1;
    FUN_00446cb0(piVar2);
  }
  return;
}



void FUN_00467670(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00467510(param_1,param_3);
    if (-1 < iVar1) {
      iVar1 = iVar1 + param_2;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      FUN_004675e0(param_1,iVar1);
    }
  }
  return;
}



void FUN_004676b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int local_8;
  int local_4;
  
  piVar1 = (int *)(in_ECX + 0x18);
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
    iVar6 = local_4;
  }
  else {
    uVar3 = FUN_0046b680(0xffffffff);
    iVar6 = local_4;
  }
  do {
    while( true ) {
      local_4 = iVar6;
      if (piVar1 == (int *)0x0) {
        local_8 = *(int *)(in_ECX + 0x14);
        if (local_8 != 0) {
          FUN_0046bb20(&local_8,uVar3);
          uVar3 = FUN_0046b250(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05da4,0);
          iVar6 = FUN_009832e6(uVar3);
          *(int *)(in_ECX + 0x14) = iVar6;
          if (iVar6 == 0) {
            iVar6 = param_1[3];
            uVar3 = (**(code **)(*param_1 + 0xd4))();
            FUN_004a7a60("Unable to find death item (%08X) on ActorBase (%08X) \'%s\'.",local_8,
                         iVar6,uVar3);
          }
        }
        return;
      }
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) break;
LAB_00467743:
      piVar1 = (int *)piVar1[1];
      iVar6 = local_4;
    }
    local_4 = *piVar2;
    if (local_4 != 0) {
      FUN_0046bb20(&local_4,uVar3);
      uVar4 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05374,0);
      iVar5 = FUN_009832e6(uVar4);
      *piVar2 = iVar5;
      iVar6 = local_4;
      if (iVar5 != 0) goto LAB_00467743;
    }
    local_4 = iVar6;
    piVar2 = (int *)piVar1[1];
    if (piVar2 == (int *)0x0) {
      *piVar1 = 0;
      iVar6 = local_4;
    }
    else {
      piVar1[1] = piVar2[1];
      *piVar1 = *piVar2;
      FUN_00401f20(piVar2);
      iVar6 = local_4;
    }
  } while( true );
}



undefined4 FUN_004677d0(void)

{
  return DAT_00b371c8;
}



undefined4 FUN_004677e0(void)

{
  return DAT_00b371b0;
}



ushort FUN_004677f0(void)

{
  int iVar1;
  ushort uVar2;
  int in_ECX;
  ushort local_4;
  
  local_4 = *(ushort *)(in_ECX + 0xe);
  if ((*(uint *)(in_ECX + 4) >> 7 & 1) != 0) {
    iVar1 = (**(code **)(*DAT_00b333c4 + 0x170))();
    if ((iVar1 != 0) && (iVar1 != -0x24)) {
      local_4 = local_4 + *(short *)(iVar1 + 0x32);
    }
    uVar2 = *(ushort *)(in_ECX + 0x10);
    if (((uVar2 != 0) && ((int)(short)local_4 < (int)(uint)uVar2)) ||
       ((uVar2 = *(ushort *)(in_ECX + 0x12), uVar2 != 0 && ((int)(uint)uVar2 < (int)(short)local_4))
       )) {
      return uVar2;
    }
    if ((short)local_4 < 1) {
      local_4 = 1;
    }
  }
  return local_4;
}



int FUN_00467880(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar5 = 0;
  piVar7 = (int *)(param_2 + 0x3c);
  iVar4 = 10000;
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)*piVar7;
      iVar6 = iVar5;
      if (piVar1 == (int *)0x0) break;
      iVar2 = *piVar1;
      if ((((-1 < (char)piVar1[1]) &&
           (((*(byte *)(iVar2 + 0x34) >> 3 & 1) == 0 || (iVar3 = FUN_005e02e0(0), param_2 != iVar3))
           )) && ((iVar3 = FUN_0046e8d0(iVar2), iVar2 != param_1 || (iVar6 = iVar3, iVar3 <= iVar5))
                 )) && ((iVar6 = iVar5, iVar3 != 0 && (iVar3 < iVar4)))) {
        iVar4 = iVar3;
      }
      piVar7 = (int *)piVar7[1];
      iVar5 = iVar6;
    } while (piVar7 != (int *)0x0);
    if (iVar6 != 0) {
      return iVar6;
    }
    if (iVar4 != 10000) {
      return iVar4;
    }
  }
  return 0;
}



int FUN_00467920(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar5 = 0;
  local_10 = (int *)(in_ECX + 0x18);
  local_c = 10000;
  local_8 = 0;
  local_4 = 0;
  if (local_10 != (int *)0x0) {
    do {
      if ((int *)*local_10 == (int *)0x0) break;
      iVar1 = *(int *)*local_10;
      for (piVar6 = (int *)(param_1 + 0x3c);
          (piVar6 != (int *)0x0 && (piVar2 = (int *)*piVar6, piVar2 != (int *)0x0));
          piVar6 = (int *)piVar6[1]) {
        iVar3 = *piVar2;
        if ((-1 < (char)piVar2[1]) &&
           (((*(byte *)(iVar3 + 0x34) >> 3 & 1) == 0 || (iVar4 = FUN_005e02e0(0), param_1 != iVar4))
           )) {
          iVar4 = FUN_0046e8d0(iVar3);
          if ((iVar3 == iVar1) && (iVar5 < iVar4)) {
            local_8 = (int)*(char *)(*piVar6 + 4);
            iVar5 = iVar4;
          }
          else if ((iVar4 != 0) && (iVar4 < local_c)) {
            local_4 = (int)*(char *)(*piVar6 + 4);
            local_c = iVar4;
          }
        }
      }
      local_10 = (int *)local_10[1];
    } while (local_10 != (int *)0x0);
    if (iVar5 != 0) {
      *param_2 = local_8;
      return iVar5;
    }
    if (local_c != 10000) {
      *param_2 = local_4;
      return local_c;
    }
  }
  return 0;
}



short FUN_00467a20(byte param_1)

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
  if ((param_1 & 0x10) != 0) {
    sVar6 = sVar6 + 0x10;
  }
  if ((param_1 & 0x40) != 0) {
    sVar5 = 0;
    for (piVar3 = (int *)(in_ECX + 0x18); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      if (*piVar3 != 0) {
        sVar5 = sVar5 + 1;
      }
    }
    sVar6 = sVar5 * 5 + sVar6 + 2;
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = (int *)FUN_0046b250(*puVar1);
      uVar4 = (**(code **)(*piVar3 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x646,
                         "..\\TES Shared\\TESActorBaseData.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,sVar6,*puVar1,uVar4);
      return sVar6;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar6,0x646,
                 "..\\TES Shared\\TESActorBaseData.cpp");
  }
  return sVar6;
}



void FUN_00467af0(byte param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  short *psVar8;
  char cVar9;
  undefined4 uVar10;
  int in_ECX;
  int *piVar11;
  int local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar9 = FUN_0045a170();
  if (cVar9 != '\0') {
    local_10 = 0x4b4f4c42;
    FUN_0045b9a0(&local_10,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_8,2);
  }
  bVar7 = param_1;
  if ((param_1 & 0x10) != 0) {
    FUN_0045b9a0(in_ECX + 4,0x10);
  }
  if ((bVar7 & 0x40) != 0) {
    local_10 = 0;
    puVar2 = *(undefined2 **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_10,2);
    for (piVar11 = (int *)(in_ECX + 0x18); piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
      piVar3 = (int *)*piVar11;
      if (piVar3 != (int *)0x0) {
        local_4 = *(undefined4 *)(*piVar3 + 0xc);
        param_1 = *(byte *)(piVar3 + 1);
        FUN_0045f7a0(&local_4,4);
        FUN_0045b9a0(&param_1,1);
        local_10 = local_10 + 1;
      }
    }
    *puVar2 = (undefined2)local_10;
  }
  if (DAT_00b05bac != '\0') {
    puVar4 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar5 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar5 - iVar1,0x66f,
                   "..\\TES Shared\\TESActorBaseData.cpp");
    }
    else {
      piVar11 = (int *)FUN_0046b250(*puVar4);
      uVar10 = (**(code **)(*piVar11 + 0xd4))
                         (*(undefined4 *)((int)puVar4 + 5),0x66f,
                          "..\\TES Shared\\TESActorBaseData.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar5 - iVar1,*puVar4,uVar10);
    }
  }
  cVar9 = FUN_0045a170();
  psVar8 = local_c;
  if (cVar9 != '\0') {
    uVar6 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar6) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\TESActorBaseData.cpp",0x66f);
    }
    *psVar8 = (short)uVar6 - (short)psVar8;
  }
  return;
}



void FUN_00467ca0(byte param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int in_ECX;
  int iVar9;
  ushort auStack_14 [2];
  uint local_10;
  int iStack_c;
  int local_8;
  undefined4 uStack_4;
  
  iVar9 = 0;
  local_10 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_8,4);
    if (local_8 != 0x4b4f4c42) {
      puVar7 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar7 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\TESActorBaseData.cpp",0x678,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar7);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar7 + 9),*(undefined4 *)((int)puVar7 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\TESActorBaseData.cpp",0x678,*puVar7,uVar5);
      }
    }
    iVar9 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_10,2);
  }
  bVar2 = param_1;
  if ((param_1 & 0x10) != 0) {
    FUN_004534d0(in_ECX + 4,0x10);
  }
  if ((bVar2 & 0x40) != 0) {
    FUN_00467370();
    FUN_004534d0(auStack_14,2);
    iStack_c = 0;
    if (auStack_14[0] != 0) {
      do {
        FUN_0045ba00(&uStack_4,4);
        FUN_004534d0(&param_1,1);
        iVar6 = FUN_0046b250(uStack_4);
        if (iVar6 != 0) {
          piVar4 = (int *)FUN_00401f00(8);
          *piVar4 = iVar6;
          *(byte *)(piVar4 + 1) = param_1;
          if (*(int *)(in_ECX + 0x18) != 0) {
            puVar7 = (undefined4 *)FUN_00401f00(8);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = *(undefined4 *)(in_ECX + 0x18);
              puVar7[1] = 0;
            }
            puVar7[1] = *(undefined4 *)(in_ECX + 0x1c);
            *(undefined4 **)(in_ECX + 0x1c) = puVar7;
          }
          *(int **)(in_ECX + 0x18) = piVar4;
        }
        iStack_c = iStack_c + 1;
      } while (iStack_c < (int)(uint)auStack_14[0]);
    }
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar7 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar1 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar7 == (undefined4 *)0x0) {
      uVar8 = local_10 & 0xffff;
      if (uVar8 + iVar9 < uVar1) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar1 - uVar8) - iVar9,"..\\TES Shared\\TESActorBaseData.cpp",0x69a,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar1 < uVar8 + iVar9) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar8 - uVar1) + iVar9,"..\\TES Shared\\TESActorBaseData.cpp",0x69a,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar7);
      uVar8 = (local_10 & 0xffff) + iVar9;
      if (uVar8 < uVar1) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar7 + 9),*(undefined4 *)((int)puVar7 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar1 - (local_10 & 0xffff)) - iVar9,"..\\TES Shared\\TESActorBaseData.cpp",
                     0x69a,*puVar7,uVar5);
        return;
      }
      if (uVar1 < uVar8) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar7 + 9),*(undefined4 *)((int)puVar7 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_10 & 0xffff) - uVar1) + iVar9,"..\\TES Shared\\TESActorBaseData.cpp",
                     0x69a,*puVar7,uVar5);
        return;
      }
    }
  }
  return;
}



void FUN_00467f80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x18);
  do {
    if ((piVar1 == (int *)0x0) || ((int *)*piVar1 == (int *)0x0)) {
      return;
    }
    piVar2 = *(int **)*piVar1;
    iVar4 = FUN_005e02e0(0);
    for (piVar5 = (int *)(iVar4 + 0x3c); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      piVar3 = (int *)*piVar5;
      if (((piVar3 != (int *)0x0) && ((*(byte *)((int *)*piVar3 + 0xd) >> 3 & 1) == 0)) &&
         ((int *)*piVar3 == piVar2)) {
        if ((char)piVar3[1] == -1) break;
        if (param_1 == 0) {
          *(byte *)(piVar2 + 0xd) = *(byte *)(piVar2 + 0xd) | 0x40;
        }
        else if (param_1 == 1) {
          *(byte *)(piVar2 + 0xd) = *(byte *)(piVar2 + 0xd) | 0x20;
        }
        else {
          if (param_1 != 2) break;
          *(byte *)(piVar2 + 0xd) = *(byte *)(piVar2 + 0xd) | 0x10;
        }
        (**(code **)(*piVar2 + 0x40))(4);
        break;
      }
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}



void FUN_00468140(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b654;
  FUN_00467370();
  return;
}



void FUN_00468150(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b718;
  FUN_004526e0();
  return;
}



void FUN_00468180(undefined1 param_1)

{
  int *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00468194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x10))();
  return;
}



undefined1 FUN_004681a0(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 5);
}



void FUN_004681b0(undefined1 param_1)

{
  int *in_ECX;
  
  *(undefined1 *)((int)in_ECX + 5) = param_1;
                    /* WARNING: Could not recover jumptable at 0x004681c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x10))();
  return;
}



undefined1 FUN_004681d0(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 6);
}



void FUN_004681e0(undefined1 param_1)

{
  int *in_ECX;
  
  *(undefined1 *)((int)in_ECX + 6) = param_1;
                    /* WARNING: Could not recover jumptable at 0x004681f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x10))();
  return;
}



undefined1 FUN_00468200(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 7);
}



void FUN_00468210(undefined1 param_1)

{
  int *in_ECX;
  
  *(undefined1 *)((int)in_ECX + 7) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00468224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x10))();
  return;
}



void FUN_00468230(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  return;
}



bool FUN_00468240(uint param_1)

{
  int in_ECX;
  
  return (*(uint *)(in_ECX + 8) & param_1) != 0;
}



int FUN_00468250(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0xc) + 0xc;
}



undefined1 FUN_00468260(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0xd);
}



void FUN_00468270(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0xd) = param_1;
  return;
}



void FUN_00468280(undefined1 *param_1)

{
  code *pcVar1;
  int *in_ECX;
  
  if (param_1 != (undefined1 *)0x0) {
    *(undefined1 *)(in_ECX + 1) = *param_1;
    (**(code **)(*in_ECX + 0x10))(0x100);
    pcVar1 = *(code **)(*in_ECX + 0x10);
    *(undefined1 *)((int)in_ECX + 5) = param_1[1];
    (*pcVar1)(0x100);
    pcVar1 = *(code **)(*in_ECX + 0x10);
    *(undefined1 *)((int)in_ECX + 6) = param_1[2];
    (*pcVar1)(0x100);
    pcVar1 = *(code **)(*in_ECX + 0x10);
    *(undefined1 *)((int)in_ECX + 7) = param_1[3];
    (*pcVar1)(0x100);
    in_ECX[2] = *(int *)(param_1 + 4);
    *(undefined1 *)(in_ECX + 3) = param_1[8];
    *(undefined1 *)((int)in_ECX + 0xd) = param_1[9];
  }
  return;
}



void FUN_00468380(void)

{
  thunk_FUN_0067b1e0();
  return;
}



undefined4 FUN_004683c0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x100) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}



void FUN_004683e0(uint param_1)

{
  int in_ECX;
  
  if ((param_1 & 0x100) != 0) {
    FUN_0045b9a0(in_ECX + 4,1);
    FUN_0045b9a0(in_ECX + 5,1);
    FUN_0045b9a0(in_ECX + 6,1);
    FUN_0045b9a0(in_ECX + 7,1);
  }
  return;
}



void FUN_00468440(uint param_1)

{
  int in_ECX;
  
  if ((param_1 & 0x100) != 0) {
    FUN_004534d0(in_ECX + 4,1);
    FUN_004534d0(in_ECX + 5,1);
    FUN_004534d0(in_ECX + 6,1);
    FUN_004534d0(in_ECX + 7,1);
  }
  return;
}



void FUN_004684a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b718;
  FUN_00434920();
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}



void FUN_004684c0(int param_1)

{
  int in_ECX;
  
  if (param_1 - 0xcU < 0x15) {
    *(char *)(in_ECX + 0xc) = (char)param_1 + -0xc;
  }
  return;
}



void FUN_00468590(void)

{
  if (DAT_00b05dc0 == '\0') {
    FUN_00569540();
    return;
  }
  return;
}



uint FUN_004685b0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x13:
    return *(uint *)(in_ECX + 8) >> 8 & 0xffffff01;
  case 0x14:
    return *(byte *)(in_ECX + 8) >> 1 & 0xffffff01;
  case 0x15:
    return *(byte *)(in_ECX + 8) >> 3 & 0xffffff01;
  case 0x16:
    return *(byte *)(in_ECX + 8) >> 2 & 0xffffff01;
  case 0x19:
    return *(byte *)(in_ECX + 8) >> 4 & 0xffffff01;
  case 0x1a:
    return (uint)(*(byte *)(in_ECX + 8) >> 7);
  case 0x1b:
  case 0x26:
    return *(uint *)(in_ECX + 8) >> 10 & 0xffffff01;
  case 0x21:
  case 0x22:
    return *(byte *)(in_ECX + 8) & 0xffffff01;
  case 0x28:
    uVar1 = *(uint *)(in_ECX + 8) >> 0xd & 0xffffff01;
  }
  return uVar1;
}



undefined4 FUN_00468670(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_1 != 0) && (iVar1 = FUN_005e02e0(1), iVar1 != 0)) &&
     (iVar2 = iVar1 + 0x68, iVar2 != 0)) {
    if ((*(int *)(iVar1 + 0x7c) == 0) && (*(int *)(iVar1 + 0x78) == 0)) {
      iVar2 = FUN_005e02e0(0);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 0x68;
    }
    if (iVar2 != 0) {
      uVar3 = FUN_00569020(param_1);
      return uVar3;
    }
  }
  return 0;
}



void FUN_004686c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (iVar1 = FUN_005e02e0(1), iVar1 != 0)) &&
     (iVar2 = iVar1 + 0x68, iVar2 != 0)) {
    if ((*(int *)(iVar1 + 0x7c) == 0) && (*(int *)(iVar1 + 0x78) == 0)) {
      iVar2 = FUN_005e02e0(0);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = iVar2 + 0x68;
    }
    if (iVar2 != 0) {
      FUN_005692e0(param_1,param_2,param_3,param_4);
    }
  }
  return;
}



void FUN_00468720(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3b75c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_00468740(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  
  while ((*(int *)(in_ECX + 8) != 0 || (*(int *)(in_ECX + 4) != 0))) {
    puVar1 = *(undefined4 **)(in_ECX + 8);
    uVar2 = *(undefined4 *)(in_ECX + 4);
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 4) = 0;
      FUN_00401f20(uVar2);
    }
    else {
      *(undefined4 *)(in_ECX + 8) = puVar1[1];
      *(undefined4 *)(in_ECX + 4) = *puVar1;
      FUN_00401f20(puVar1);
      FUN_00401f20(uVar2);
    }
  }
  return;
}



undefined4 FUN_00468810(char *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  if ((*(int *)(in_ECX + 8) == 0) && (*piVar1 == 0)) {
    return 0;
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = __stricmp((char *)*piVar1,param_1);
    if (iVar2 == 0) break;
    piVar1 = (int *)piVar1[1];
  }
  return 1;
}



void FUN_00468860(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = FUN_00468810(param_1);
  if (cVar1 == '\0') {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
    iVar4 = iVar3 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar4] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    FUN_0067b1e0(iVar3);
  }
  return;
}



undefined1 FUN_004688b0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return 0;
  }
  return 1;
}



void FUN_004688d0(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (((param_2 != 0) && (param_1 != 0)) && (iVar4 = FUN_004510b0(), iVar4 == 0x5a46464b)) {
    pcVar5 = (char *)FUN_00401f00(*(undefined4 *)(param_2 + 0x254));
    FUN_00450c20(pcVar5,0);
    cVar3 = *pcVar5;
    pcVar2 = pcVar5;
    while (cVar3 != '\0') {
      FUN_00468860(pcVar2);
      pcVar6 = pcVar2;
      do {
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
      pcVar1 = pcVar2 + (int)(pcVar6 + (1 - (int)(pcVar2 + 1)));
      pcVar2 = pcVar2 + (int)(pcVar6 + (1 - (int)(pcVar2 + 1)));
      cVar3 = *pcVar1;
    }
    FUN_00401f20(pcVar5);
  }
  return;
}



void FUN_004689a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b770;
  return;
}



undefined4 FUN_00468a10(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05d48,0);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00468a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x10))();
    return uVar2;
  }
  return 0;
}



undefined2 FUN_00468a40(void)

{
  int in_ECX;
  
  return *(undefined2 *)(in_ECX + 4);
}



void FUN_00468a50(undefined2 param_1)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 4) = param_1;
  return;
}



void FUN_00468a60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b770;
  *(undefined2 *)(in_ECX + 1) = 0;
  return;
}



void FUN_00468ab0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b788;
  return;
}



undefined1 FUN_00468ad0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00565c50(0,param_1);
  return *(undefined1 *)(cVar1 + 4 + in_ECX);
}



void FUN_00468af0(undefined4 param_1,undefined1 param_2)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  
  cVar1 = FUN_00565c50(0,param_1);
  *(undefined1 *)(cVar1 + 4 + in_ECX) = param_2;
  piVar2 = (int *)FUN_009832e6();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x40))(8);
  }
  return;
}



undefined4 FUN_00468b40(byte param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 & 8) != 0) {
    uVar1 = 8;
  }
  return uVar1;
}



void FUN_00468b60(byte param_1)

{
  int in_ECX;
  
  if ((param_1 & 8) != 0) {
    FUN_0045b9a0(in_ECX + 4,8);
  }
  return;
}



void FUN_00468b80(uint param_1)

{
  undefined4 uStack00000008;
  
  if ((param_1 & 8) != 0) {
    uStack00000008 = 8;
    FUN_004534d0();
    return;
  }
  return;
}



void FUN_00468bb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b788;
  in_ECX[1] = 0x32323232;
  in_ECX[2] = 0x32323232;
  return;
}



void FUN_00468bd0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b05d2c,0);
  if (iVar2 != 0) {
    iVar3 = 0;
    do {
      cVar1 = FUN_00565c50(0,iVar3);
      *(undefined1 *)(in_ECX + 4 + iVar3) = *(undefined1 *)(cVar1 + 4 + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
  }
  return;
}



undefined4 FUN_00468c80(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 4);
  param_1[1] = *(undefined4 *)(in_ECX + 8);
  return 8;
}



undefined4 FUN_00468ca0(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *param_1;
  *(undefined4 *)(in_ECX + 8) = param_1[1];
  return 8;
}



void FUN_00468cc0(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 4) = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  (*(code *)**(undefined4 **)(in_ECX + 8))();
  (*(code *)**(undefined4 **)(in_ECX + 0x38))();
  (*(code *)**(undefined4 **)(in_ECX + 0x68))();
  (*(code *)**(undefined4 **)(in_ECX + 0x20))();
  (*(code *)**(undefined4 **)(in_ECX + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x00468d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(in_ECX + 0x74))();
  return;
}



void FUN_00468d10(void)

{
  int in_ECX;
  
  (**(code **)(*(int *)(in_ECX + 8) + 4))();
  (**(code **)(*(int *)(in_ECX + 0x38) + 4))();
  (**(code **)(*(int *)(in_ECX + 0x68) + 4))();
  (**(code **)(*(int *)(in_ECX + 0x20) + 4))();
  (**(code **)(*(int *)(in_ECX + 0x50) + 4))();
                    /* WARNING: Could not recover jumptable at 0x00468d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(in_ECX + 0x74) + 4))();
  return;
}



void FUN_00468d60(void)

{
  int in_ECX;
  
  FUN_0046ae40(0x54444d42,in_ECX + 4,4);
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_0046d8b0(0x32444f4d,0x42324f4d,0x54324f4d);
  FUN_00470070(0x4e4f4349);
  FUN_0046d8b0(0x33444f4d,0x42334f4d,0x54334f4d);
  FUN_0046d8b0(0x34444f4d,0x42344f4d,0x54344f4d);
  FUN_00470070(0x324f4349);
  return;
}



bool FUN_00468fd0(int param_1)

{
  int in_ECX;
  
  return (*(ushort *)(in_ECX + 4) & *(ushort *)(param_1 + 4)) != 0;
}



uint FUN_00468ff0(int param_1,char param_2)

{
  uint in_ECX;
  
  if (((param_2 != '\0') && (param_1 == 1)) && ((*(byte *)(in_ECX + 4) & 1) != 0)) {
    return in_ECX & 0xffffff00;
  }
  return (uint)CONCAT11((char)(*(ushort *)(in_ECX + 4) >> 8),
                        (1 << ((byte)param_1 & 0x1f) & (uint)*(ushort *)(in_ECX + 4)) != 0);
}



void FUN_00469020(byte param_1,char param_2)

{
  ushort uVar1;
  int in_ECX;
  
  uVar1 = (ushort)(1 << (param_1 & 0x1f));
  if (param_2 != '\0') {
    *(ushort *)(in_ECX + 4) = *(ushort *)(in_ECX + 4) | uVar1;
    return;
  }
  *(ushort *)(in_ECX + 4) = *(ushort *)(in_ECX + 4) & ~uVar1;
  return;
}



undefined4 FUN_00469050(void)

{
  byte bVar1;
  int in_ECX;
  
  bVar1 = (byte)*(ushort *)(in_ECX + 4);
  if ((((bVar1 >> 6 & 1) == 0) && (-1 < (char)bVar1)) && ((*(ushort *)(in_ECX + 4) & 0x100) == 0)) {
    return 0;
  }
  return 1;
}



byte FUN_00469080(void)

{
  int in_ECX;
  
  return ~(*(byte *)(in_ECX + 6) >> 6) & 1;
}



void FUN_00469090(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(*(int *)(in_ECX + 0x38 + param_1 * 0x18) + 0x18))(param_2);
  return;
}



void FUN_004690b0(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(*(int *)(in_ECX + 8 + param_1 * 0x18) + 0x18))(param_2);
  return;
}



void FUN_004690d0(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae962;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3b7a8;
  _eh_vector_constructor_iterator_(in_ECX + 2,0x18,2,FUN_0046d7e0,FUN_0046d850);
  local_4 = 0;
  _eh_vector_constructor_iterator_(in_ECX + 0xe,0x18,2,FUN_0046d7e0,FUN_0046d850);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(in_ECX + 0x1a,0xc,2,FUN_00412840,thunk_FUN_00470040);
  pcVar1 = *(code **)in_ECX[2];
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined1 *)((int)in_ECX + 6) = 0;
  (*pcVar1)(uVar2);
  (**(code **)in_ECX[0xe])();
  (**(code **)in_ECX[0x1a])();
  (**(code **)in_ECX[8])();
  (**(code **)in_ECX[0x14])();
  (**(code **)in_ECX[0x1d])();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_004691b0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 4) == '\x14') {
      iVar1 = param_1 + 100;
    }
    else if (*(char *)(param_1 + 4) == '\x16') {
      return param_1 + 0x5c;
    }
  }
  return iVar1;
}



void FUN_004691d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  
  if (param_2 == 1) {
    if (*(ushort *)(in_ECX + 0x28) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 0x24);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 0x28);
    }
    if (uVar4 == 0) {
      param_2 = 0;
    }
  }
  iVar6 = in_ECX + 8 + param_2 * 0x18;
  uVar5 = FUN_009832e6();
  FUN_0047aa00(uVar5,iVar6,param_3);
  return;
}



int FUN_00469240(int param_1)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  int in_ECX;
  
  uVar3 = *(ushort *)(in_ECX + 0x40 + param_1 * 0x18);
  if (uVar3 == 0xffff) {
    pcVar4 = *(char **)(in_ECX + 0x3c + param_1 * 0x18);
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar5 = (int)pcVar4 - (int)pcVar1;
  }
  else {
    uVar5 = (uint)uVar3;
  }
  if ((uVar5 == 0) && (param_1 == 1)) {
    param_1 = 0;
  }
  return in_ECX + 0x38 + param_1 * 0x18;
}



int FUN_00469290(int param_1)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  int in_ECX;
  
  uVar3 = *(ushort *)(in_ECX + 0x10 + param_1 * 0x18);
  if (uVar3 == 0xffff) {
    pcVar4 = *(char **)(in_ECX + 0xc + param_1 * 0x18);
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar5 = (int)pcVar4 - (int)pcVar1;
  }
  else {
    uVar5 = (uint)uVar3;
  }
  if ((uVar5 == 0) && (param_1 == 1)) {
    param_1 = 0;
  }
  return in_ECX + 8 + param_1 * 0x18;
}



void FUN_004692e0(int param_1)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  int in_ECX;
  
  uVar3 = *(ushort *)(in_ECX + 0x40 + param_1 * 0x18);
  if (uVar3 == 0xffff) {
    pcVar4 = *(char **)(in_ECX + 0x3c + param_1 * 0x18);
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar5 = (int)pcVar4 - (int)pcVar1;
  }
  else {
    uVar5 = (uint)uVar3;
  }
  if ((uVar5 == 0) && (param_1 == 1)) {
    param_1 = 0;
  }
  (**(code **)(*(int *)(in_ECX + 0x38 + param_1 * 0x18) + 0x14))();
  return;
}



void FUN_00469330(int param_1)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  int in_ECX;
  
  uVar3 = *(ushort *)(in_ECX + 0x10 + param_1 * 0x18);
  if (uVar3 == 0xffff) {
    pcVar4 = *(char **)(in_ECX + 0xc + param_1 * 0x18);
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar5 = (int)pcVar4 - (int)pcVar1;
  }
  else {
    uVar5 = (uint)uVar3;
  }
  if ((uVar5 == 0) && (param_1 == 1)) {
    param_1 = 0;
  }
  (**(code **)(*(int *)(in_ECX + 8 + param_1 * 0x18) + 0x14))();
  return;
}



undefined1 * FUN_00469380(int param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  ushort uVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  int in_ECX;
  
  puVar2 = (undefined4 *)(in_ECX + (param_1 * 3 + 0x1b) * 4);
  uVar4 = *(ushort *)(puVar2 + 1);
  if (uVar4 == 0xffff) {
    pcVar5 = (char *)*puVar2;
    pcVar1 = pcVar5 + 1;
    do {
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    uVar6 = (int)pcVar5 - (int)pcVar1;
  }
  else {
    uVar6 = (uint)uVar4;
  }
  if ((uVar6 == 0) && (param_1 == 1)) {
    param_1 = 0;
  }
  puVar7 = *(undefined1 **)(in_ECX + param_1 * 0xc + 0x6c);
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &DAT_00a2f7ec;
  }
  return puVar7;
}



void FUN_004693e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00469416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar1 + 0x38) + 0x14))();
    return;
  }
  iVar1 = FUN_004db6b0();
  uVar2 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 4) == '#')) {
    uVar2 = FUN_00519d20();
  }
  FUN_004692e0(uVar2);
  return;
}



undefined1 * FUN_00469440(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
  if (iVar1 == 0) {
    return (undefined1 *)0x0;
  }
  if (param_2 == 0) {
    puVar3 = *(undefined1 **)(iVar1 + 0x6c);
    if (puVar3 == (undefined1 *)0x0) {
      return &DAT_00a2f7ec;
    }
  }
  else {
    iVar1 = FUN_004db6b0();
    uVar2 = 0;
    if ((iVar1 != 0) && (*(char *)(iVar1 + 4) == '#')) {
      uVar2 = FUN_00519d20();
    }
    puVar3 = (undefined1 *)FUN_00469380(uVar2);
  }
  return puVar3;
}



int FUN_004694a0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return iVar1 + 0x38;
  }
  iVar1 = FUN_004db6b0();
  uVar2 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 4) == '#')) {
    uVar2 = FUN_00519d20();
  }
  iVar1 = FUN_00469240(uVar2);
  return iVar1;
}



void FUN_00469500(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 4) = *(byte *)(in_ECX + 4) | 1;
    return;
  }
  *(byte *)(in_ECX + 4) = *(byte *)(in_ECX + 4) & 0xfe;
  return;
}



undefined4 FUN_00469520(undefined1 param_1)

{
  switch(param_1) {
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x21:
  case 0x22:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
    return 1;
  default:
    return 0;
  }
}



undefined4 FUN_00469570(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}



undefined4 FUN_004695a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}



void FUN_004695d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(in_ECX + 4);
  uVar1 = FUN_0046b680(0xffffffff);
  FUN_0046bb20(&local_4,uVar1);
  uVar1 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
  iVar2 = FUN_009832e6(uVar1);
  *(int *)(in_ECX + 4) = iVar2;
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      iVar2 = FUN_00404e50();
      if (iVar2 != 0) {
        uVar1 = (**(code **)(*param_1 + 0xd4))();
        FUN_004a7a60("Unable to find container object (%08X) on owner object \"%s\".",local_4,uVar1)
        ;
        return;
      }
      FUN_004a7a60("Unable to find container object (%08X) on owner object (%08X).",local_4,
                   param_1[3]);
      return;
    }
    FUN_004a7a60("Unable to find container object (%08X) on unknown owner.",local_4);
  }
  return;
}



void FUN_00469690(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b878;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  return;
}



void FUN_004696b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  while (iVar1 != 0) {
    FUN_00401f20(iVar1);
    puVar2 = *(undefined4 **)(in_ECX + 0xc);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 8) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0xc) = puVar2[1];
      *(undefined4 *)(in_ECX + 8) = *puVar2;
      FUN_00401f20(puVar2);
    }
    iVar1 = *(int *)(in_ECX + 8);
  }
  return;
}



void FUN_004696f0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  
  piVar3 = (int *)(in_ECX + 8);
  if (piVar3 != (int *)0x0) {
    uVar4 = 0;
    while (uVar4 < param_1) {
      piVar3 = (int *)piVar3[1];
      uVar4 = uVar4 + 1;
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
    if (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[1];
      iVar2 = *piVar3;
      if (piVar1 == (int *)0x0) {
        *piVar3 = 0;
      }
      else {
        piVar3[1] = piVar1[1];
        *piVar3 = *piVar1;
        FUN_00401f20(piVar1);
      }
      if (iVar2 != 0) {
        FUN_00401f20(iVar2);
      }
    }
  }
  return;
}



void FUN_00469750(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  
  if ((param_1 != (int *)0x0) && ((*(byte *)(in_ECX + 4) & 1) == 0)) {
    for (puVar1 = (undefined4 *)(in_ECX + 8);
        (puVar1 != (undefined4 *)0x0 && (piVar2 = (int *)*puVar1, piVar2 != (int *)0x0));
        puVar1 = (undefined4 *)puVar1[1]) {
      if (piVar2[1] == *param_1) {
        *piVar2 = param_1[1];
        return;
      }
    }
    piVar2 = (int *)FUN_00401f00(8);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = 1;
      piVar2[1] = 0;
    }
    piVar2[1] = *param_1;
    *piVar2 = param_1[1];
    FUN_00446cb0(piVar2);
  }
  return;
}



void FUN_004697d0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = (int *)(in_ECX + 8);
  piVar2 = *(int **)(in_ECX + 8);
  while (piVar2 != (int *)0x0) {
    iVar3 = ((undefined4 *)*piVar1)[1];
    if ((*(uint *)(iVar3 + 8) >> 5 & 1) == 0) {
      local_4 = *(undefined4 *)*piVar1;
      local_8 = *(undefined4 *)(iVar3 + 0xc);
      FUN_0046ae40(0x4f544e43,&local_8,8);
    }
    piVar1 = (int *)piVar1[1];
    piVar2 = piVar1;
  }
  return;
}



float10 FUN_004698b0(void)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  float10 fVar7;
  
  fVar7 = (float10)0;
  fVar2 = (float)fVar7;
  if ((*(byte *)(in_ECX + 4) & 1) != 0) {
    piVar1 = (int *)(in_ECX + 8);
    piVar3 = *(int **)(in_ECX + 8);
    while (piVar3 != (int *)0x0) {
      puVar4 = (uint *)*piVar1;
      uVar5 = puVar4[1];
      piVar1 = (int *)piVar1[1];
      piVar3 = piVar1;
      if ((*(uint *)(uVar5 + 8) >> 5 & 1) == 0) {
        fVar7 = (float10)FUN_00470620(uVar5);
        uVar5 = *puVar4;
        uVar6 = (int)uVar5 >> 0x1f;
        fVar2 = (float)(fVar7 * (float10)(int)((uVar5 ^ uVar6) - uVar6) + (float10)fVar2);
      }
    }
    fVar7 = (float10)fVar2;
  }
  return fVar7;
}



uint FUN_00469920(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_EAX;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 4) & 1) != 0) {
    piVar1 = (int *)(in_ECX + 8);
    in_EAX = piVar1;
    piVar2 = *(int **)(in_ECX + 8);
    while (piVar2 != (int *)0x0) {
      if (*(int *)(*piVar1 + 4) == param_1) {
        return CONCAT31((int3)((uint)piVar1 >> 8),1);
      }
      in_EAX = (int *)0x0;
      piVar1 = (int *)piVar1[1];
      piVar2 = piVar1;
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



int FUN_00469950(int param_1)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  
  if ((*(byte *)(in_ECX + 4) & 1) != 0) {
    piVar2 = (int *)(in_ECX + 8);
    piVar1 = (int *)*piVar2;
    while (piVar1 != (int *)0x0) {
      if (*(int *)(*piVar2 + 4) == param_1) {
        return *piVar2;
      }
      piVar2 = (int *)piVar2[1];
      piVar1 = piVar2;
    }
  }
  return 0;
}



bool FUN_00469980(int param_1)

{
  return *(int *)(param_1 + 0xc) == 0xf;
}



void FUN_00469990(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 * param_1;
    }
  }
  return;
}



void FUN_004699c0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar2 = false;
  if ((param_2 != 0) && (piVar6 = (int *)(in_ECX + 8), piVar6 != (int *)0x0)) {
    do {
      if ((piVar6[1] == 0) && (*piVar6 == 0)) break;
      puVar1 = (undefined4 *)*piVar6;
      if (puVar1 != (undefined4 *)0x0) {
        bVar2 = true;
        iVar4 = FUN_00401f00(0x14,uVar3);
        local_4 = 0;
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00422ee0();
        }
        local_4 = 0xffffffff;
        FUN_0041fe90(param_1);
        FUN_004238a0(*(undefined2 *)puVar1);
        FUN_0048f7c0(puVar1[1],uVar5,*puVar1);
      }
      piVar6 = (int *)piVar6[1];
    } while (piVar6 != (int *)0x0);
    if ((bVar2) && (*(int **)(param_2 + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(param_2 + 4) + 0x48))(0x8000000);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00469ab0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  float local_4;
  
  local_4 = -3.4028235e+38;
  iVar3 = 0;
  for (piVar1 = (int *)(in_ECX + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((*piVar1 != 0) &&
       (iVar2 = FUN_009832e6(*(undefined4 *)(*piVar1 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0),
       iVar2 != 0)) {
      fVar4 = (float10)FUN_0051a120(iVar2);
      if (local_4 < (float)fVar4) {
        iVar3 = iVar2;
        local_4 = (float)fVar4;
      }
    }
  }
  return iVar3;
}



int FUN_00469b30(undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  float10 fVar5;
  float local_4;
  
  local_4 = -3.4028235e+38;
  iVar4 = 0;
  for (piVar1 = (int *)(in_ECX + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((((*piVar1 != 0) &&
         (iVar3 = FUN_009832e6(*(undefined4 *)(*piVar1 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b03778,0)
         , iVar3 != 0)) && (param_2 != -1)) && (cVar2 = FUN_00468ff0(param_2,0), cVar2 != '\0')) {
      fVar5 = (float10)FUN_0051a120(iVar3);
      if (local_4 < (float)fVar5) {
        iVar4 = iVar3;
        local_4 = (float)fVar5;
      }
    }
  }
  return iVar4;
}



int FUN_00469bd0(undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  float10 fVar5;
  float local_4;
  
  local_4 = -3.4028235e+38;
  iVar4 = 0;
  for (piVar1 = (int *)(in_ECX + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((((*piVar1 != 0) &&
         (iVar3 = FUN_009832e6(*(undefined4 *)(*piVar1 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b05de0,0)
         , iVar3 != 0)) && (param_2 != -1)) && (cVar2 = FUN_00468ff0(param_2,0), cVar2 != '\0')) {
      fVar5 = (float10)FUN_0051a120(iVar3);
      if (local_4 < (float)fVar5) {
        iVar4 = iVar3;
        local_4 = (float)fVar5;
      }
    }
  }
  return iVar4;
}



undefined4 FUN_00469c70(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)(in_ECX + 8);
  piVar2 = *(int **)(in_ECX + 8);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (iVar3 == param_1) break;
    piVar1 = (int *)piVar1[1];
    iVar3 = iVar3 + 1;
    piVar2 = piVar1;
  }
  return *(undefined4 *)(*piVar1 + 4);
}



undefined4 FUN_00469ca0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 8);
  piVar2 = *(int **)(in_ECX + 8);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (((undefined4 *)*piVar1)[1] == param_1) break;
    piVar1 = (int *)piVar1[1];
    piVar2 = piVar1;
  }
  return *(undefined4 *)*piVar1;
}



undefined1 * FUN_00469cd0(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
  if ((iVar1 == 0) || (puVar2 = *(undefined1 **)(iVar1 + 4), puVar2 == (undefined1 *)0x0)) {
    puVar2 = &DAT_00a2f7ec;
  }
  return puVar2;
}



int FUN_00469d10(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  
  switch((char)param_1[1]) {
  case '\x0f':
  case '\x10':
  case '\x12':
  case '\x17':
  case '\x18':
  case '\x1c':
  case '\x1e':
  case '@':
    return 0;
  case '1':
    FUN_004a7a60("Never call the third addobject with a reference. This item will not be added!");
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = (**(code **)(*param_1 + 0xd4))();
    FUN_004a7a60("Count of 0 not allowed on items. Fix the count on \"%s\".",uVar2);
    param_2 = 1;
  }
  *(byte *)(in_ECX + 4) = *(byte *)(in_ECX + 4) | 1;
  switch((char)param_1[1]) {
  case '\x15':
  case '\x16':
    FUN_004695a0(param_1);
  }
  piVar3 = (int *)(in_ECX + 8);
  if (*piVar3 != 0) {
    do {
      piVar4 = (int *)*piVar3;
      if ((int *)piVar4[1] == param_1) goto LAB_00469dba;
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if ((int *)piVar4[1] == param_1) {
LAB_00469dba:
      if (param_3 != '\0') {
        *piVar4 = param_2;
        return param_2;
      }
      if (param_2 < 0) {
        if (0 < *piVar4) {
          *piVar4 = -*piVar4;
        }
        param_2 = -param_2;
      }
      iVar1 = *piVar4;
      if (-1 < iVar1) {
        *piVar4 = iVar1 + param_2;
        return iVar1 + param_2;
      }
      *piVar4 = iVar1 - param_2;
      return iVar1 - param_2;
    }
  }
  piVar4 = (int *)FUN_00401f00(8);
  piVar3 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    piVar4[1] = 0;
    *piVar4 = 1;
    piVar3 = piVar4;
  }
  *piVar3 = param_2;
  piVar3[1] = (int)param_1;
  FUN_00446cb0(piVar3);
  return *piVar3;
}



void FUN_00469e90(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  
  if ((*(byte *)(in_ECX + 4) & 1) == 0) {
    piVar1 = (int *)(in_ECX + 8);
    piVar3 = (int *)0x0;
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      piVar4 = piVar3;
      if ((iVar2 == 0) || (FUN_004695d0(param_1), piVar4 = piVar1, *(int *)(iVar2 + 4) != 0)) {
        piVar1 = (int *)piVar1[1];
        piVar3 = piVar4;
      }
      else if (piVar3 == (int *)0x0) {
        piVar4 = (int *)piVar1[1];
        if (piVar4 == (int *)0x0) {
          *piVar1 = 0;
          FUN_00401f20(iVar2);
        }
        else {
          piVar1[1] = piVar4[1];
          *piVar1 = *piVar4;
          FUN_00401f20(piVar4);
          FUN_00401f20(iVar2);
        }
      }
      else {
        FUN_0065c620(iVar2);
        piVar1 = (int *)piVar3[1];
        FUN_00401f20(iVar2);
      }
    }
    *(byte *)(in_ECX + 4) = *(byte *)(in_ECX + 4) | 1;
  }
  return;
}



void FUN_00469fd0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    for (piVar1 = (int *)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      puVar2 = (undefined4 *)*piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_00469d10(puVar2[1],*puVar2,0);
      }
    }
  }
  return;
}



void FUN_0046a010(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b878;
  FUN_004696b0();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0046a020(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int in_ECX;
  int *piVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_130;
  undefined2 local_12c;
  undefined2 local_12a;
  int *local_128;
  int local_124;
  int *local_120;
  int local_11c;
  int *local_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae9a7;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_130;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffec0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_124 = param_1;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0,uVar2);
    piVar8 = (int *)(in_ECX + 8);
    local_120 = (int *)0x0;
    local_128 = piVar8;
    local_118 = piVar3;
    if (piVar8 != (int *)0x0) {
      do {
        piVar1 = (int *)*piVar8;
        if (piVar1 != (int *)0x0) {
          local_128 = piVar8;
          iVar4 = FUN_009832e6(piVar1[1],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0,uVar2);
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar4 + 4);
          }
          iVar9 = *piVar1;
          local_120 = piVar1;
          if (iVar4 == 0) {
            if (piVar3 == (int *)0x0) {
              FUN_004d8720(piVar1[1],0,iVar9);
            }
            else {
              (**(code **)(*piVar3 + 0x114))();
            }
          }
          else if (0 < iVar9) {
            do {
              local_11c = iVar9;
              local_130 = FUN_00401f00(0x14);
              iVar9 = 0;
              local_4 = 0;
              if (local_130 != 0) {
                iVar9 = FUN_00422ee0();
              }
              local_4 = 0xffffffff;
              FUN_004238a0(1);
              if ((iVar9 != 0) && (iVar5 = FUN_0041e900(), iVar5 == 0)) {
                FUN_0041f090(iVar4);
                uVar6 = FUN_004fbdc0();
                FUN_0041f130(uVar6);
                local_130 = FUN_00401f00(0x58);
                local_4 = 1;
                if (local_130 == 0) {
                  piVar8 = (int *)0x0;
                }
                else {
                  piVar8 = (int *)FUN_004d9a70();
                }
                local_4 = 0xffffffff;
                FUN_0046b590();
                uVar11 = 0;
                uVar10 = 0;
                uVar6 = FUN_0041e920(0,0);
                FUN_004fbe00(piVar8,uVar6,uVar10,uVar11);
                piVar3 = local_118;
                if (piVar8 != (int *)0x0) {
                  (**(code **)(*piVar8 + 0x10))(1);
                  piVar3 = local_118;
                }
              }
              if (piVar3 == (int *)0x0) {
                FUN_004d8720(piVar1[1],iVar9,1);
              }
              else {
                (**(code **)(*piVar3 + 0x114))(piVar1[1]);
              }
              iVar9 = local_11c + -1;
            } while (local_11c + -1 != 0);
            local_11c = 0;
            piVar8 = local_128;
          }
        }
        piVar8 = (int *)piVar8[1];
      } while (piVar8 != (int *)0x0);
      local_128 = (int *)0x0;
    }
    piVar8 = local_120;
    uVar10 = DAT_00b382a0;
    uVar6 = DAT_00b38298;
    if ((piVar3 == DAT_00b333c4) && (local_120 != (int *)0x0)) {
      local_130 = 0;
      local_12c = 0;
      local_12a = 0;
      local_4 = 2;
      if (*local_120 < 2) {
        iVar4 = FUN_009832e6(local_120[1],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0,uVar2);
        if ((iVar4 == 0) || (puVar7 = *(undefined1 **)(iVar4 + 4), puVar7 == (undefined1 *)0x0)) {
          puVar7 = &DAT_00a2f7ec;
        }
        FUN_00402e30(&local_130,"%s %s",puVar7,uVar10);
      }
      else {
        iVar4 = FUN_009832e6(local_120[1],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0,uVar2);
        if ((iVar4 == 0) || (puVar7 = *(undefined1 **)(iVar4 + 4), puVar7 == (undefined1 *)0x0)) {
          puVar7 = &DAT_00a2f7ec;
        }
        FUN_00402e30(&local_130,"%i %s%s %s",*piVar8,puVar7,uVar6,uVar10);
      }
      uVar6 = FUN_004702d0(piVar8[1],DAT_00b333c4);
      _sprintf(acStack_114,"%s\\%s","Icons",uVar6);
      uVar6 = FUN_005e96e0(piVar8[1],1,0);
      iVar4 = local_130;
      FUN_0057add0(local_130,0x40000000,acStack_114,uVar6);
      FUN_0057a3b0(0);
      FUN_00401f20(iVar4);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0046a390(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x25c);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046a400(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b938;
  FUN_00401f20(DAT_00b33c08);
  DAT_00b33c08 = 0;
  _DAT_00b33c0e = 0;
  DAT_00b33c0c = 0;
  DAT_00b33c04 = 0;
  in_ECX[1] = 0;
  return;
}



void FUN_0046a440(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  
  if (param_1 != (int *)0x0) {
    if (DAT_00b33c0c == 0xffff) {
      pcVar3 = DAT_00b33c08;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar4 = (int)pcVar3 - (int)(DAT_00b33c08 + 1);
    }
    else {
      uVar4 = (uint)DAT_00b33c0c;
    }
    if (uVar4 != 0) {
      if (DAT_00b33c0c == 0xffff) {
        pcVar3 = DAT_00b33c08;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        uVar4 = (int)pcVar3 - (int)(DAT_00b33c08 + 1);
      }
      else {
        uVar4 = (uint)DAT_00b33c0c;
      }
      uVar2 = (**(code **)(*param_1 + 0x10))(0,0x43534544,uVar4 + 1);
      thunk_FUN_0046ae40(unaff_retaddr,uVar2);
      return;
    }
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    thunk_FUN_0046ae40(param_2,&param_1,1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0046a5f0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1 != 0) {
    if (DAT_00b33c04 == in_ECX) {
      if (DAT_00b33c0c == 0xffff) {
        pcVar2 = DAT_00b33c08;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar2 - (int)(DAT_00b33c08 + 1);
      }
      else {
        uVar3 = (uint)DAT_00b33c0c;
      }
      if (uVar3 != 0) {
        return;
      }
    }
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0x46a65c;
    DAT_00b33c04 = in_ECX;
    FUN_004028d0();
    uStack_18 = 0xffffffff;
    uStack_1c = 0x46a665;
    iVar4 = FUN_0046b680();
    if ((iVar4 != 0) && (*(int *)(in_ECX + 4) != 0)) {
      uStack_18 = 0x46a676;
      iVar4 = FUN_004520f0();
      uStack_18 = *(undefined4 *)(in_ECX + 4);
      uStack_1c = 0x46a683;
      cVar1 = FUN_00451460();
      if (cVar1 != '\0') {
        uStack_18 = 0x46a68e;
        cVar1 = FUN_004511c0();
        if (cVar1 == (&DAT_00b05e00)[(uint)*(byte *)(param_1 + 4) * 0xc]) {
          do {
            uStack_18 = 0x46a6a8;
            iVar5 = FUN_004510b0();
            if (iVar5 == param_2) {
              uStack_18 = 0x46a6c4;
              iVar4 = -*(int *)(iVar4 + 0x254);
              *(undefined4 *)((int)&uStack_18 + iVar4) = 0;
              *(undefined1 **)((int)&uStack_1c + iVar4) = &stack0xffffffec + iVar4;
              *(undefined4 *)((int)&uStack_20 + iVar4) = 0x46a6d0;
              FUN_00450c20();
              *(undefined4 *)((int)&uStack_18 + iVar4) = 0;
              *(undefined1 **)((int)&uStack_1c + iVar4) = &stack0xffffffec + iVar4;
              *(undefined4 *)((int)&uStack_20 + iVar4) = 0x46a6dd;
              FUN_004028d0();
              return;
            }
            uStack_18 = 0x46a6b3;
            cVar1 = FUN_0044fea0();
          } while (cVar1 != '\0');
        }
      }
    }
  }
  return;
}



void FUN_0046a700(void)

{
  FUN_0046a440();
  return;
}



void FUN_0046a790(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3b950;
  in_ECX[1] = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  in_ECX[3] = 4;
  return;
}



void FUN_0046a7b0(void)

{
  int in_ECX;
  uint local_4;
  
  if (*(int *)(in_ECX + 4) != 0) {
    local_4 = *(uint *)(*(int *)(in_ECX + 4) + 0xc);
    FUN_0046ae40(0x4d414e45,&local_4,4);
  }
  if (*(ushort *)(in_ECX + 8) != 0) {
    local_4 = (uint)*(ushort *)(in_ECX + 8);
    FUN_0046ae40(0x4d414e41,&local_4,2);
  }
  return;
}



void FUN_0046a880(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int local_4;
  
  local_4 = *(int *)(in_ECX + 4);
  if (local_4 != 0) {
    if (param_1 != (int *)0x0) {
      uVar4 = FUN_0046b680(0xffffffff);
      FUN_0046bb20(&local_4,uVar4);
    }
    uVar4 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b033c8,0);
    iVar5 = FUN_009832e6(uVar4);
    *(int *)(in_ECX + 4) = iVar5;
    if (iVar5 == 0) {
      if (param_1 == (int *)0x0) {
        FUN_004a7a60("Unable to find enchanting (%08X) on unknown owner.",local_4);
      }
      else {
        iVar5 = FUN_00404e50();
        if (iVar5 == 0) {
          FUN_004a7a60("Unable to find enchanting (%08X) on owner object (%08X).",local_4,param_1[3]
                      );
        }
        else {
          uVar4 = (**(code **)(*param_1 + 0xd4))();
          FUN_004a7a60("Unable to find enchanting (%08X) on owner object \"%s\".",local_4,uVar4);
        }
      }
    }
    if (((*(int *)(in_ECX + 4) != 0) && (param_1 != (int *)0x0)) &&
       (cVar3 = FUN_004190c0(param_1), cVar3 == '\0')) {
      piVar1 = *(int **)(in_ECX + 4);
      iVar5 = piVar1[3];
      iVar2 = param_1[3];
      uVar4 = (**(code **)(*param_1 + 0xd4))();
      uVar4 = (**(code **)(*piVar1 + 0xd4))(iVar2,uVar4);
      FUN_004a7a60("Enchanting (%08X) \'%s\' has invalid cast type or magic effect for object (%08X) \'%s\'."
                   ,iVar5,uVar4);
      *(undefined4 *)(in_ECX + 4) = 0;
    }
  }
  return;
}



void FUN_0046a9a0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 1;
    return;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfffffffe;
  return;
}



void FUN_0046a9c0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 0x10;
    return;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xffffffef;
  return;
}



void FUN_0046a9e0(char param_1)

{
  int *in_ECX;
  
  if (param_1 == '\0') {
    in_ECX[2] = in_ECX[2] & 0xffffffdf;
  }
  else {
    in_ECX[2] = in_ECX[2] | 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x0046a9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x40))();
  return;
}



void FUN_0046aa00(char param_1)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = FUN_0045a500();
  if (param_1 != '\0') {
    if (cVar1 == '\0') {
      (**(code **)(*in_ECX + 0x40))(0x10000);
    }
    in_ECX[2] = in_ECX[2] | 0x2000;
    return;
  }
  if (cVar1 == '\0') {
    (**(code **)(*in_ECX + 0x44))(0x10000);
  }
  in_ECX[2] = in_ECX[2] & 0xffffdfff;
  return;
}



void FUN_0046aa50(char param_1)

{
  int *in_ECX;
  
  if (param_1 == '\0') {
    in_ECX[2] = in_ECX[2] & 0xffffdfff;
  }
  else {
    in_ECX[2] = in_ECX[2] | 0x2000;
  }
                    /* WARNING: Could not recover jumptable at 0x0046aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x40))();
  return;
}



void FUN_0046ab40(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 0x80000;
    return;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfff7ffff;
  return;
}



void FUN_0046ab60(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 0x80;
    return;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xffffff7f;
  return;
}



void FUN_0046ab80(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 8;
    return;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfffffff7;
  return;
}



void FUN_0046aba0(char param_1)

{
  int *in_ECX;
  
  if (param_1 == '\0') {
    in_ECX[2] = in_ECX[2] & 0xfffff7ff;
  }
  else {
    in_ECX[2] = in_ECX[2] | 0x800;
  }
                    /* WARNING: Could not recover jumptable at 0x0046abc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x40))();
  return;
}



undefined4 FUN_0046abd0(uint param_1)

{
  if ((param_1 != 0) && (param_1 < 0x800)) {
    return 1;
  }
  return 0;
}



void FUN_0046abf0(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_0045b670(in_ECX,param_1);
  return;
}



undefined4 FUN_0046ac50(byte param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}



void FUN_0046ac70(void)

{
  FUN_0045b9a0();
  return;
}



void FUN_0046ac80(void)

{
  FUN_004534d0();
  return;
}



void FUN_0046ac90(void)

{
  FUN_0045f7a0();
  return;
}



void FUN_0046aca0(void)

{
  FUN_0045ba00();
  return;
}



void FUN_0046acb0(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_dc [208];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae9f3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff20;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00466e60(uVar1);
  local_4 = 0;
  FUN_00466e60();
  local_4._0_1_ = 1;
  FUN_00466e80(in_ECX);
  FUN_00466e80(param_1);
  FUN_00466dd0(local_dc);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0060d0a0();
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_0046ad70(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_dc [208];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aea33;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff18;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    FUN_00466e60(uVar2);
    local_4 = 0;
    FUN_00466e60();
    local_4._0_1_ = 1;
    FUN_00466e80(in_ECX);
    FUN_00466e80(param_1);
    uVar1 = FUN_00466e10(local_dc);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0060d0a0();
    local_4 = 0xffffffff;
    FUN_0060d0a0();
  }
  *unaff_FS_OFFSET = local_c;
  return uVar1;
}



void FUN_0046ae40(undefined4 param_1,void *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)param_3;
  if (0xffff < param_3) {
    FUN_0046ae40(0x58585858,&param_3,4);
    uVar3 = 0;
  }
  iVar1 = DAT_00b33c18;
  DAT_00b33c18 = DAT_00b33c18 + 6 + param_3;
  DAT_00b33c14 = FUN_00401e60(DAT_00b33c14,DAT_00b33c18);
  puVar2 = (undefined4 *)(DAT_00b33c14 + iVar1);
  *(undefined2 *)(puVar2 + 1) = uVar3;
  *puVar2 = param_1;
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar2 + 1);
  _memcpy((void *)(DAT_00b33c14 + 6 + iVar1),param_2,param_3);
  return;
}



undefined4 FUN_0046aed0(int param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 != 0) || (param_2 != 0)) {
    if ((uint)uVar1 + (uint)param_2 < 0x10000) {
      *(ushort *)(param_1 + 4) = uVar1 + param_2;
      DAT_00b33c18 = DAT_00b33c18 + (uint)param_2;
      DAT_00b33c14 = FUN_00401e60(DAT_00b33c14,DAT_00b33c18);
      return 1;
    }
  }
  return 0;
}



void FUN_0046af30(void)

{
  FUN_00401e40(DAT_00b33c14);
  DAT_00b33c14 = 0;
  return;
}



undefined4 FUN_0046af50(uint param_1)

{
  int in_ECX;
  
  param_1 = *(uint *)(in_ECX + 0xc) ^ param_1;
  return CONCAT31((int3)(param_1 >> 8),(param_1 & 0xffffff) == 0);
}



int FUN_0046af70(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == DAT_00b33c20) {
    return DAT_00b33c1c;
  }
  iVar1 = 0;
  piVar2 = &DAT_00b05e08;
  do {
    if (*piVar2 == param_1) {
      DAT_00b33c1c = iVar1;
      DAT_00b33c20 = param_1;
      return iVar1;
    }
    piVar2 = piVar2 + 3;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0xb06144);
  return 0;
}



ushort FUN_0046afc0(void)

{
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined1 local_4;
  
  local_4 = (undefined1)(int)ROUND(*(float *)(in_ECX + 4));
  return CONCAT11((char)((ushort)in_FPUControlWord >> 8),local_4) | 0xc00;
}



void FUN_0046aff0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3bc94;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0046b010(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3bcb4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0046b030(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3bc94;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0046b060(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3bcb4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0046b090(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aea68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff88;
  *unaff_FS_OFFSET = (int)&local_c;
  switch(*(undefined1 *)(in_ECX + 4)) {
  case 0xd:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x36:
  case 0x3d:
    goto switchD_0046b0c9_caseD_d;
  default:
    FUN_00466e60();
    local_4 = 0;
    FUN_00466e80(in_ECX);
    FUN_00466d80();
    local_4 = 0xffffffff;
    FUN_0060d0a0();
switchD_0046b0c9_caseD_d:
    *unaff_FS_OFFSET = local_c;
    return;
  case 0x30:
    FUN_005a6a20(uVar1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
}



void FUN_0046b170(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aea68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff88;
  *unaff_FS_OFFSET = (int)&local_c;
  switch(*(undefined1 *)(in_ECX + 4)) {
  case 0xd:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x36:
  case 0x3d:
    goto switchD_0046b1a9_caseD_d;
  default:
    FUN_00466e60();
    local_4 = 0;
    FUN_00466e80(in_ECX);
    FUN_00466da0();
    local_4 = 0xffffffff;
    FUN_0060d0a0(uVar1);
switchD_0046b1a9_caseD_d:
    *unaff_FS_OFFSET = local_c;
    return;
  case 0x30:
    FUN_0060d0a0(uVar1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
}



uint FUN_0046b250(undefined4 param_1)

{
  char cVar1;
  uint local_4;
  
  local_4 = 0;
  cVar1 = FUN_0055e000(param_1,&local_4);
  return -(uint)(cVar1 != '\0') & local_4;
}



undefined4 FUN_0046b280(char *param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b2c0(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 0xe & 1) == 0) {
    FUN_004524c0(*(undefined4 *)(in_ECX + 0xc));
    uVar2 = 0;
    if (DAT_00b06158 != 0) {
      do {
        if (*(int *)(DAT_00b06150 + uVar2 * 4) == in_ECX) {
          if (uVar2 < DAT_00b06158) {
            iVar1 = *(int *)(DAT_00b06150 + uVar2 * 4);
            *(undefined4 *)(DAT_00b06150 + uVar2 * 4) = 0;
            if (iVar1 != 0) {
              _DAT_00b0615c = _DAT_00b0615c + -1;
            }
            if (uVar2 == DAT_00b06158 - 1) {
              DAT_00b06158 = DAT_00b06158 - 1;
            }
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_00b06158);
    }
    if (DAT_00b33a98 != 0) {
      FUN_00446b40(*(undefined4 *)(in_ECX + 0xc));
    }
  }
  return;
}



bool FUN_0046b340(void)

{
  int iVar1;
  int *in_ECX;
  
  if (((uint)in_ECX[2] >> 0xe & 1) != 0) {
    return false;
  }
  (**(code **)(*in_ECX + 0x24))();
  iVar1 = FUN_00450a10(in_ECX);
  return iVar1 == 0;
}



void FUN_0046b370(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  undefined4 *puVar5;
  size_t _Size;
  undefined4 *local_38;
  int local_34;
  void *local_2c;
  int local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar2 = DAT_00b33c14;
  if (((DAT_00b33c14 != (undefined4 *)0x0) && (0x14 < DAT_00b33c18)) &&
     ((DAT_00b33c14[2] & 0x40000) == 0)) {
    iVar1 = DAT_00b33c18 - 0x14;
    puVar5 = DAT_00b33c14 + 5;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    iVar3 = FUN_00744fb0(&local_38,0xffffffff,"1.2.1",0x38);
    if (iVar3 != 0) {
      FUN_004a7a60("Error initializing ZLib stream for deflate.");
      return;
    }
    iVar3 = iVar1 * 2;
    _Src = (void *)FUN_00401f00(iVar3);
    local_38 = puVar5;
    local_34 = iVar1;
    local_2c = _Src;
    local_28 = iVar3;
    iVar4 = FUN_00743a40(&local_38,4);
    if (iVar4 == -2) {
      FUN_004a7a60("Error deflating ZLib stream.");
      FUN_00401f20(_Src);
      return;
    }
    _Size = iVar3 - local_28;
    puVar5 = (undefined4 *)FUN_00401f00(_Size + 0x18);
    puVar2[2] = puVar2[2] | 0x40000;
    puVar2[1] = _Size + 4;
    *puVar5 = *puVar2;
    puVar5[1] = puVar2[1];
    puVar5[2] = puVar2[2];
    puVar5[3] = puVar2[3];
    puVar5[4] = puVar2[4];
    puVar5[5] = iVar1;
    _memcpy(puVar5 + 6,_Src,_Size);
    FUN_00401f20(DAT_00b33c14);
    DAT_00b33c14 = puVar5;
    DAT_00b33c18 = _Size + 0x18;
    FUN_00743e50(&local_38);
    FUN_00401f20(_Src);
  }
  return;
}



bool FUN_0046b500(int param_1)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 4) < *(byte *)(param_1 + 4);
}



undefined1 FUN_0046b510(int *param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  undefined1 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != DAT_00b05e20) {
    return 0;
  }
  switch(param_1[3]) {
  case 0:
    bVar1 = *(byte *)(in_ECX + 4);
    iVar2 = FUN_0046af70(param_1[2]);
    if (iVar2 <= (int)(uint)bVar1) {
      return 0;
    }
    return 1;
  case 1:
  case 4:
  case 5:
    bVar4 = *(byte *)(in_ECX + 4) < 0x35;
    break;
  case 2:
  case 3:
  case 6:
    bVar4 = *(byte *)(in_ECX + 4) < 0x30;
    break;
  case 7:
    bVar4 = *(byte *)(in_ECX + 4) < 0x39;
    break;
  default:
    goto switchD_0046b52d_default;
  }
  if (bVar4) {
    uVar3 = 1;
  }
switchD_0046b52d_default:
  return uVar3;
}



void FUN_0046b590(void)

{
  int in_ECX;
  
  FUN_0046b2c0();
  if (DAT_00b33b00 != 0) {
    FUN_0045b780(in_ECX,0);
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 0x4000;
  return;
}



undefined4 FUN_0046b5c0(undefined1 param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int unaff_FS_OFFSET;
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  uVar1 = *(undefined1 *)(iVar2 + 0x185);
  uVar3 = (uint)_tls_index >> 8;
  *(undefined1 *)(iVar2 + 0x185) = param_1;
  return CONCAT31((int3)uVar3,uVar1);
}



void FUN_0046b5e0(byte param_1)

{
  int in_ECX;
  
  if ((param_1 & 1) != 0) {
    FUN_0045b9a0(in_ECX + 8,4);
  }
  return;
}



void FUN_0046b600(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((param_1 & 1) != 0) {
    FUN_004534d0(&param_1,4);
    iVar1 = FUN_009832e6();
    if (iVar1 != 0) {
      *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) ^ (*(uint *)(in_ECX + 8) ^ param_1) & 0x112860;
      return;
    }
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) ^ (*(uint *)(in_ECX + 8) ^ param_1) & 0xc20;
  }
  return;
}



int FUN_0046b660(void)

{
  uint uVar1;
  uint3 uVar2;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0xc);
  uVar2 = (uint3)(uVar1 >> 8);
  if ((uVar1 != 0) && (uVar1 < 0x800)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int FUN_0046b680(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(in_ECX + 0x10);
  iVar4 = 0;
  iVar2 = 0;
  do {
    if (piVar3 == (int *)0x0) {
      return iVar2;
    }
    iVar1 = *piVar3;
    piVar3 = (int *)piVar3[1];
  } while (((iVar1 == 0) || (iVar2 = iVar1, param_1 == -1)) || (iVar4 = iVar4 + 1, iVar4 <= param_1)
          );
  return iVar1;
}



void FUN_0046b6c0(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    iVar2 = FUN_0044fb90();
    if (iVar2 != 0) {
      param_1 = iVar2;
    }
    if (param_1 != 0) {
      cVar1 = FUN_0044faa0();
      piVar5 = (int *)(in_ECX + 0x10);
      if (cVar1 == '\0') {
        piVar4 = (int *)0x0;
        if (piVar5 != (int *)0x0) {
          do {
            if ((*piVar5 != 0) && (piVar4 = piVar5, *piVar5 == param_1)) {
              return;
            }
            piVar5 = (int *)piVar5[1];
          } while (piVar5 != (int *)0x0);
          if (piVar4 != (int *)0x0) {
            FUN_0067b1e0(param_1);
            return;
          }
        }
      }
      else {
        FUN_004526e0();
      }
      FUN_00446cb0(param_1);
      return;
    }
  }
  piVar5 = (int *)(in_ECX + 0x10);
  piVar3 = (int *)0x0;
  piVar4 = piVar5;
  if (piVar5 != (int *)0x0) {
    do {
      if (*piVar4 != 0) {
        piVar3 = piVar4;
      }
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)piVar3[1];
      if (piVar5 == (int *)0x0) {
        *piVar3 = 0;
        return;
      }
      piVar3[1] = piVar5[1];
      *piVar3 = *piVar5;
      FUN_00401f20(piVar5);
      return;
    }
  }
  piVar4 = *(int **)(in_ECX + 0x14);
  if (piVar4 == (int *)0x0) {
    *piVar5 = 0;
    return;
  }
  *(int *)(in_ECX + 0x14) = piVar4[1];
  *piVar5 = *piVar4;
  FUN_00401f20(piVar4);
  return;
}



void FUN_0046b7a0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xd4))((&PTR_DAT_00b05e04)[(uint)*(byte *)(param_1 + 1) * 3]);
  FUN_004a7a60("Trying to copy form \"%s\".\r\nNo copy function for %s form types.\r\n",uVar1);
  return;
}



undefined1 FUN_0046b910(int *param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 == DAT_00b05e20)) && (param_1[3] == 0)) &&
     (param_1[2] == (&DAT_00b05e08)[(uint)*(byte *)(in_ECX + 4) * 3])) {
    uVar1 = 1;
  }
  return uVar1;
}



void FUN_0046b990(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 0xe & 1) == 0) {
    DAT_00b33c18 = 0x14;
    puVar2 = (undefined4 *)thunk_FUN_00401aa0(0x14,1);
    uVar1 = *(uint *)(in_ECX + 8);
    DAT_00b33c14 = puVar2;
    puVar2[2] = uVar1;
    if (*(char *)(in_ECX + 4) != '\x01') {
      puVar2[2] = uVar1 & 0x30ee0;
    }
    *puVar2 = (&DAT_00b05e08)[(uint)*(byte *)(in_ECX + 4) * 3];
    puVar2[3] = *(undefined4 *)(in_ECX + 0xc);
    puVar2[1] = 0;
    puVar2[4] = 0;
  }
  return;
}



void FUN_0046b9f0(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 0xe & 1) == 0) {
    *(int *)(DAT_00b33c14 + 4) = DAT_00b33c18 + -0x14;
  }
  return;
}



void FUN_0046ba10(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00b33c18;
  DAT_00b33c18 = DAT_00b33c18 + 6;
  DAT_00b33c14 = FUN_00401e60(DAT_00b33c14,DAT_00b33c18);
  puVar2 = (undefined4 *)(DAT_00b33c14 + iVar1);
  *(undefined2 *)(puVar2 + 1) = 0;
  *puVar2 = param_1;
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar2 + 1);
  _memcpy((void *)(DAT_00b33c14 + 6 + iVar1),(void *)0x0,0);
  return;
}



void thunk_FUN_0046ae40(undefined4 param_1,void *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)param_3;
  if (0xffff < param_3) {
    FUN_0046ae40(0x58585858,&param_3,4);
    uVar3 = 0;
  }
  iVar1 = DAT_00b33c18;
  DAT_00b33c18 = DAT_00b33c18 + 6 + param_3;
  DAT_00b33c14 = FUN_00401e60(DAT_00b33c14,DAT_00b33c18);
  puVar2 = (undefined4 *)(DAT_00b33c14 + iVar1);
  *(undefined2 *)(puVar2 + 1) = uVar3;
  *puVar2 = param_1;
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar2 + 1);
  _memcpy((void *)(DAT_00b33c14 + 6 + iVar1),param_2,param_3);
  return;
}



void FUN_0046ba80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00b33c18;
  DAT_00b33c18 = DAT_00b33c18 + 10;
  DAT_00b33c14 = FUN_00401e60(DAT_00b33c14,DAT_00b33c18);
  puVar2 = (undefined4 *)(DAT_00b33c14 + iVar1);
  *(undefined2 *)(puVar2 + 1) = 4;
  *puVar2 = param_1;
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar2 + 1);
  *(undefined4 *)(DAT_00b33c14 + 6 + iVar1) = param_2;
  return;
}



void FUN_0046bad0(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00b33c18;
  DAT_00b33c18 = DAT_00b33c18 + 8;
  DAT_00b33c14 = FUN_00401e60(DAT_00b33c14,DAT_00b33c18);
  puVar2 = (undefined4 *)(DAT_00b33c14 + iVar1);
  *(undefined2 *)(puVar2 + 1) = 2;
  *puVar2 = param_1;
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar2 + 1);
  *(undefined2 *)(DAT_00b33c14 + 6 + iVar1) = param_2;
  return;
}



void FUN_0046bb20(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0x11 & 1) != 0) {
    uVar1 = FUN_00452180(*param_1);
    *param_1 = uVar1;
    return;
  }
  uVar1 = *param_1;
  if (((uVar1 == 0) || (0x7ff < uVar1)) && (param_2 != 0)) {
    iVar2 = FUN_0044fd60((uVar1 >> 0x18) + 1);
    if (iVar2 != 0) {
      iVar2 = FUN_0044fb50();
      *param_1 = iVar2 << 0x18 | *param_1 & 0xffffff;
      return;
    }
    iVar2 = FUN_0044fb50();
    *param_1 = iVar2 << 0x18 | *param_1 & 0xffffff;
  }
  return;
}



void FUN_0046bbb0(undefined4 param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  ushort uVar14;
  float *pfVar15;
  float *pfVar16;
  
  iVar13 = DAT_00b33c18;
  if (0xffff < param_2) {
    FUN_004a7a60("Trying to SaveData that\'s too large.");
    return;
  }
  FUN_0046ae40(0x41544144,param_1,param_2);
  iVar13 = DAT_00b33c14 + iVar13;
  iVar5 = FUN_009832e6();
  iVar6 = FUN_009832e6();
  piVar7 = (int *)FUN_009832e6();
  iVar8 = FUN_009832e6();
  iVar9 = FUN_009832e6();
  piVar10 = (int *)FUN_009832e6();
  iVar11 = FUN_009832e6();
  iVar1 = DAT_00b33c18;
  uVar14 = (ushort)(iVar5 != 0);
  if (iVar6 != 0) {
    uVar14 = uVar14 + 4;
  }
  if (piVar7 != (int *)0x0) {
    uVar14 = uVar14 + 4;
  }
  if (iVar8 != 0) {
    uVar14 = uVar14 + 4;
  }
  if (iVar9 != 0) {
    uVar14 = uVar14 + 4;
  }
  if (piVar10 != (int *)0x0) {
    uVar14 = uVar14 + 2;
  }
  if (iVar11 != 0) {
    uVar14 = uVar14 + 8;
  }
  if ((uVar14 != 0) && (cVar2 = FUN_0046aed0(iVar13,uVar14), cVar2 != '\0')) {
    pfVar15 = (float *)(DAT_00b33c14 + iVar1);
    if (iVar5 != 0) {
      *(undefined1 *)pfVar15 = *(undefined1 *)(iVar5 + 4);
      pfVar15 = (float *)((int)pfVar15 + 1);
    }
    if (iVar6 != 0) {
      *pfVar15 = *(float *)(iVar6 + 4);
      pfVar15 = pfVar15 + 1;
    }
    if (piVar7 != (int *)0x0) {
      fVar12 = (float)(**(code **)(*piVar7 + 0x10))();
      *pfVar15 = fVar12;
      pfVar15 = pfVar15 + 1;
    }
    pfVar16 = pfVar15;
    if (iVar8 != 0) {
      pfVar16 = pfVar15 + 1;
      *pfVar15 = *(float *)(iVar8 + 4);
    }
    pfVar15 = pfVar16;
    if (iVar9 != 0) {
      bVar3 = FUN_0046afc0();
      pfVar15 = pfVar16 + 1;
      *pfVar16 = (float)bVar3;
    }
    if (piVar10 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar10 + 0x10))();
      *(undefined2 *)pfVar15 = uVar4;
      pfVar15 = (float *)((int)pfVar15 + 2);
    }
    if (iVar11 != 0) {
      FUN_00468c80(pfVar15);
    }
  }
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0046bda0(int param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_ECX;
  undefined4 auStack_88 [19];
  uint auStack_3c [2];
  
  uVar1 = *(ushort *)(param_1 + 0x254);
  uVar3 = (uint)uVar1;
  auStack_3c[1] = 0x46bdce;
  iVar2 = -uVar3;
  *(uint *)((int)auStack_3c + iVar2 + 4) = uVar3;
  *(undefined1 **)((int)auStack_3c + iVar2) = &stack0xffffffcc + iVar2;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x48) = 0x46bdde;
  FUN_00450c20();
  if ((ushort)param_3 <= uVar1) {
    uVar3 = param_3;
  }
  *(uint *)((int)auStack_3c + iVar2 + 4) = uVar3 & 0xffff;
  *(undefined1 **)((int)auStack_3c + iVar2) = &stack0xffffffcc + iVar2;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x48) = param_2;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x44) = 0x46bdfd;
  _memcpy(*(void **)((int)auStack_88 + iVar2 + 0x48),*(void **)((int)auStack_3c + iVar2),
          *(size_t *)((int)auStack_3c + iVar2 + 4));
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x44) = 0;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x40) = &PTR_PTR_00b05c40;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x3c) = &PTR_PTR_00b02f9c;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x38) = 0;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x34) = in_ECX;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x30) = 0x46be11;
  iVar4 = FUN_009832e6();
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x30) = 0;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x2c) = &PTR_PTR_00b05c24;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x28) = &PTR_PTR_00b02f9c;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x24) = 0;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x20) = in_ECX;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x1c) = 0x46be28;
  iVar5 = FUN_009832e6();
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x1c) = 0;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x18) = &PTR_PTR_00b05cf4;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x14) = &PTR_PTR_00b02f9c;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x10) = 0;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0xc) = in_ECX;
  *(undefined4 *)((int)auStack_88 + iVar2 + 8) = 0x46be3f;
  iVar6 = FUN_009832e6();
  *(undefined4 *)((int)auStack_3c + iVar2 + 4) = 0;
  *(undefined ***)((int)auStack_3c + iVar2) = &PTR_PTR_00b0333c;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x48) = &PTR_PTR_00b02f9c;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x44) = 0;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x40) = in_ECX;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x3c) = 0x46be59;
  iVar7 = FUN_009832e6();
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x3c) = 0;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x38) = &PTR_PTR_00b05c94;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x34) = &PTR_PTR_00b02f9c;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x30) = 0;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x2c) = in_ECX;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x28) = 0x46be70;
  iVar8 = FUN_009832e6();
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x28) = 0;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x24) = &PTR_PTR_00b05d48;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x20) = &PTR_PTR_00b02f9c;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x1c) = 0;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x18) = in_ECX;
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x14) = 0x46be87;
  iVar9 = FUN_009832e6();
  *(undefined4 *)((int)auStack_88 + iVar2 + 0x14) = 0;
  *(undefined ***)((int)auStack_88 + iVar2 + 0x10) = &PTR_PTR_00b05d2c;
  *(undefined ***)((int)auStack_88 + iVar2 + 0xc) = &PTR_PTR_00b02f9c;
  *(undefined4 *)((int)auStack_88 + iVar2 + 8) = 0;
  *(undefined4 *)((int)auStack_88 + iVar2 + 4) = in_ECX;
  *(undefined4 *)((int)auStack_88 + iVar2) = 0x46be9e;
  iVar10 = FUN_009832e6();
  if ((iVar4 != 0) && ((ushort)param_3 < uVar1)) {
    uVar3 = param_3 & 0xffff;
    param_3._0_2_ = (ushort)param_3 + 1;
    *(undefined1 *)(iVar4 + 4) = (&stack0xffffffcc)[uVar3 + iVar2];
  }
  if ((iVar5 != 0) && ((ushort)param_3 < uVar1)) {
    *(undefined4 *)((int)auStack_3c + iVar2 + 4) =
         *(undefined4 *)(&stack0xffffffcc + (uint)(ushort)param_3 + iVar2);
    param_3._0_2_ = (ushort)param_3 + 4;
    *(undefined4 *)((int)auStack_3c + iVar2) = 0x46bee6;
    FUN_004703c0();
  }
  if ((iVar6 != 0) && ((ushort)param_3 < uVar1)) {
    uVar3 = (uint)(ushort)param_3;
    param_3._0_2_ = (ushort)param_3 + 4;
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(&stack0xffffffcc + uVar3 + iVar2);
  }
  if ((iVar7 != 0) && ((ushort)param_3 < uVar1)) {
    uVar3 = (uint)(ushort)param_3;
    param_3._0_2_ = (ushort)param_3 + 4;
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(&stack0xffffffcc + uVar3 + iVar2);
  }
  if ((iVar8 != 0) && ((ushort)param_3 < uVar1)) {
    uVar3 = (uint)(ushort)param_3;
    param_3._0_2_ = (ushort)param_3 + 4;
    *(float *)(iVar8 + 4) = (float)((int)ROUND(*(float *)(&stack0xffffffcc + uVar3 + iVar2)) & 0xff)
    ;
  }
  if ((iVar9 != 0) && ((ushort)param_3 < uVar1)) {
    *(uint *)((int)auStack_3c + iVar2 + 4) =
         (uint)*(ushort *)(&stack0xffffffcc + (uint)(ushort)param_3 + iVar2);
    param_3._0_2_ = (ushort)param_3 + 2;
    *(undefined4 *)((int)auStack_3c + iVar2) = 0x46bf9b;
    FUN_00468a50();
  }
  if (iVar10 != 0) {
    *(undefined1 **)((int)auStack_3c + iVar2 + 4) = &stack0xffffffcc + (uint)(ushort)param_3 + iVar2
    ;
    *(undefined4 *)((int)auStack_3c + iVar2) = 0x46bfad;
    FUN_00468ca0();
  }
  return;
}



uint FUN_0046bfd0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = FUN_009832e6();
  iVar2 = FUN_009832e6();
  iVar3 = FUN_009832e6();
  iVar4 = FUN_009832e6();
  iVar5 = FUN_009832e6();
  iVar6 = FUN_009832e6();
  iVar7 = FUN_009832e6();
  uVar8 = (uint)(iVar1 != 0);
  if (iVar2 != 0) {
    uVar8 = uVar8 + 4;
  }
  if (iVar3 != 0) {
    uVar8 = uVar8 + 4;
  }
  if (iVar4 != 0) {
    uVar8 = uVar8 + 4;
  }
  if (iVar5 != 0) {
    uVar8 = uVar8 + 4;
  }
  if (iVar6 != 0) {
    uVar8 = uVar8 + 2;
  }
  if (iVar7 != 0) {
    uVar8 = uVar8 + 8;
  }
  return uVar8;
}



void FUN_0046c0d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00401f00(0xc);
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}



void FUN_0046c0f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aea98;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3bdd8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3bc94;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0046c160(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aeac8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3bdf8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3bcb4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0046c1d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a3be18;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  FUN_0046c160();
  return;
}



void FUN_0046c220(byte param_1)

{
  FUN_0046c0f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0046c240(byte param_1)

{
  FUN_0046c160();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0046c260(byte param_1)

{
  FUN_0046c1d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0046c280(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3be3c;
  FUN_0046b2c0();
  iVar1 = in_ECX[5];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[5] + 4);
    FUN_00401f20(in_ECX[5]);
    in_ECX[5] = iVar1;
  }
  in_ECX[4] = 0;
  if ((((uint)in_ECX[2] >> 0xe & 1) == 0) && (DAT_00b33b00 != 0)) {
    FUN_0045b780(in_ECX,0);
    FUN_00453940(in_ECX);
  }
  return;
}



void thunk_FUN_0046b090(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aea68;
  iStack_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff88;
  *unaff_FS_OFFSET = (int)&iStack_c;
  switch(*(undefined1 *)(in_ECX + 4)) {
  case 0xd:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x36:
  case 0x3d:
    goto switchD_0046b0c9_caseD_d;
  default:
    FUN_00466e60();
    uStack_4 = 0;
    FUN_00466e80(in_ECX);
    FUN_00466d80();
    uStack_4 = 0xffffffff;
    FUN_0060d0a0();
switchD_0046b0c9_caseD_d:
    *unaff_FS_OFFSET = iStack_c;
    return;
  case 0x30:
    FUN_005a6a20(uVar1);
    *unaff_FS_OFFSET = iStack_c;
    return;
  }
}



void thunk_FUN_0046b170(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aea68;
  iStack_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff88;
  *unaff_FS_OFFSET = (int)&iStack_c;
  switch(*(undefined1 *)(in_ECX + 4)) {
  case 0xd:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x36:
  case 0x3d:
    goto switchD_0046b1a9_caseD_d;
  default:
    FUN_00466e60();
    uStack_4 = 0;
    FUN_00466e80(in_ECX);
    FUN_00466da0();
    uStack_4 = 0xffffffff;
    FUN_0060d0a0(uVar1);
switchD_0046b1a9_caseD_d:
    *unaff_FS_OFFSET = iStack_c;
    return;
  case 0x30:
    FUN_0060d0a0(uVar1);
    *unaff_FS_OFFSET = iStack_c;
    return;
  }
}



void FUN_0046c300(int param_1,char param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if (param_1 != iVar1) {
    if ((*(uint *)(in_ECX + 8) >> 0xe & 1) == 0) {
      if (iVar1 != 0) {
        FUN_004524c0(iVar1);
      }
      if ((param_2 != '\0') && (*(int *)(in_ECX + 0xc) != 0)) {
        FUN_00446b40(*(int *)(in_ECX + 0xc));
      }
      if (param_1 != 0) {
        FUN_00452570(param_1,in_ECX);
      }
    }
    *(int *)(in_ECX + 0xc) = param_1;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0046c3e5) */

int * FUN_0046c360(undefined4 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar2 = (int *)FUN_00447df0((char)in_ECX[1],uVar1);
  if (piVar2 != (int *)0x0) {
    FUN_004028d0(&DAT_00a2f7ec,0);
    local_4 = 0;
    (**(code **)(*in_ECX + 0xd8))(&DAT_00a2f7ec);
    (**(code **)(*piVar2 + 0xb4))();
    local_4 = 0xffffffff;
    FUN_00401f20(0);
    if (param_2 != 0) {
      FUN_00452570(in_ECX,piVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return piVar2;
}



void FUN_0046c430(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3bf1c;
  FUN_0046c1d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0046c460(void)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  undefined **ppuVar5;
  uint uVar6;
  uint uVar7;
  int unaff_FS_OFFSET;
  bool bVar8;
  int local_8;
  
  uVar7 = 0;
  bVar8 = DAT_00b33c10 == '\0';
  *in_ECX = &PTR_FUN_00a3be3c;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  uVar2 = DAT_00b06b18;
  if (bVar8) {
    bVar8 = false;
    DAT_00b06b18 = 1;
    ppuVar5 = &PTR_DAT_00b05e04;
    local_8 = 0x45;
    do {
      pcVar1 = *ppuVar5;
      ppuVar5[1] = (undefined *)
                   ((((int)pcVar1[3] << 8 | (int)pcVar1[2]) << 8 | (int)pcVar1[1]) << 8 |
                   (int)*pcVar1);
      if (*(byte *)(ppuVar5 + -1) != uVar7) {
        FUN_004a7a60("formEnumString[ %d ].cFormID in TESForm.cpp is out of order.",uVar7);
        bVar8 = true;
      }
      uVar6 = 0;
      uVar4 = 0;
      do {
        if ((uVar7 != uVar6) && (ppuVar5[1] == *(undefined **)((int)&DAT_00b05e08 + uVar4))) {
          FUN_004a7a60("formEnumString[ %d ] and formEnumString[ %d ] have the same iFormString %s in TESForm.cpp."
                       ,uVar7,uVar6,*ppuVar5);
          bVar8 = true;
        }
        uVar4 = uVar4 + 0xc;
        uVar6 = uVar6 + 1;
      } while (uVar4 < 0x33c);
      uVar7 = uVar7 + 1;
      ppuVar5 = ppuVar5 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    DAT_00b06b18 = uVar2;
    if (bVar8) {
      FUN_00404ec0("You must fix the problems in TESForm.cpp to run this game.");
    }
    DAT_00b33c10 = '\x01';
  }
  *(undefined1 *)(in_ECX + 1) = 0;
  in_ECX[2] = 8;
  in_ECX[3] = 0;
  if ((DAT_00b33a98 != 0) &&
     (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x184) == '\0')) {
    uVar3 = FUN_00448d40();
    in_ECX[3] = uVar3;
    if (*(int *)(DAT_00b33a98 + 0x8c4) != 0) {
      FUN_0046b6c0(*(int *)(DAT_00b33a98 + 0x8c4));
    }
    uVar7 = in_ECX[3];
    if ((uVar7 < 0x800) && (uVar7 != 0x800)) {
      if (((uint)in_ECX[2] >> 0xe & 1) == 0) {
        if (uVar7 != 0) {
          FUN_004524c0(uVar7);
        }
        if (in_ECX[3] != 0) {
          FUN_00446b40(in_ECX[3]);
        }
        FUN_00452570(0x800,in_ECX);
      }
      in_ECX[3] = 0x800;
    }
  }
  if (in_ECX[3] != 0) {
    FUN_00452570(in_ECX[3],in_ECX);
  }
  return in_ECX;
}



void FUN_0046c620(byte param_1)

{
  FUN_0046c280();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c640(char param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(in_ECX + 8);
  if (param_1 == '\0') {
    if (((uVar2 >> 1 & 1) != 0) && (uVar2 = 0, DAT_00b06158 != 0)) {
      while (*(int *)(DAT_00b06150 + uVar2 * 4) != in_ECX) {
        uVar2 = uVar2 + 1;
        if (DAT_00b06158 <= uVar2) {
          *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfffffffd;
          return;
        }
      }
      if (uVar2 < DAT_00b06158) {
        iVar1 = *(int *)(DAT_00b06150 + uVar2 * 4);
        *(undefined4 *)(DAT_00b06150 + uVar2 * 4) = 0;
        if (iVar1 != 0) {
          _DAT_00b0615c = _DAT_00b0615c + -1;
        }
        if (uVar2 == DAT_00b06158 - 1) {
          DAT_00b06158 = DAT_00b06158 - 1;
        }
      }
    }
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfffffffd;
    return;
  }
  if (((uVar2 >> 1 & 1) == 0) && ((uVar2 >> 0xe & 1) == 0)) {
    uVar2 = 0;
    if (DAT_00b06158 != 0) {
      do {
        if (*(int *)(DAT_00b06150 + uVar2 * 4) == in_ECX) goto LAB_0046c68f;
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_00b06158);
    }
    FUN_00449070(&param_1);
  }
LAB_0046c68f:
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 2;
  return;
}



void FUN_0046c730(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  undefined1 *puVar5;
  
  if (*(ushort *)(in_ECX + 8) == 0xffff) {
    pcVar3 = *(char **)(in_ECX + 4);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 8);
  }
  if (uVar4 != 0) {
    if (*(ushort *)(in_ECX + 8) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 4);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 8);
    }
    puVar5 = *(undefined1 **)(in_ECX + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_00a2f7ec;
    }
    thunk_FUN_0046ae40(0x4c4c5546,puVar5,uVar4 + 1);
  }
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0046c7a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uStack_18 = 0x46c7c8;
    iVar1 = FUN_004510b0();
    if (iVar1 == 0x4c4c5546) {
      if (*(int *)(param_2 + 0x254) != 0) {
        uStack_18 = 0x46c7de;
        iVar1 = -*(int *)(param_2 + 0x254);
        *(undefined4 *)((int)&uStack_18 + iVar1) = 0;
        *(undefined1 **)((int)&uStack_1c + iVar1) = &stack0xffffffec + iVar1;
        *(undefined4 *)((int)&uStack_20 + iVar1) = 0x46c7ea;
        FUN_00450c20();
        *(undefined4 *)((int)&uStack_18 + iVar1) = 0;
        *(undefined1 **)((int)&uStack_1c + iVar1) = &stack0xffffffec + iVar1;
        *(undefined4 *)((int)&uStack_20 + iVar1) = 0x46c7f5;
        FUN_004028d0();
        return;
      }
      uStack_18 = *(undefined4 *)(param_1 + 4);
      uStack_1c = 0x46c812;
      FUN_00401f20();
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined2 *)(param_1 + 10) = 0;
      *(undefined2 *)(param_1 + 8) = 0;
    }
  }
  return;
}



void FUN_0046c840(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b03298,0);
  if (iVar1 != 0) {
    puVar2 = *(undefined1 **)(iVar1 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_00a2f7ec;
    }
    FUN_004028d0(puVar2,0);
  }
  return;
}



void FUN_0046c9b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c02c;
  return;
}



undefined4 FUN_0046ca20(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05cf4,0);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046ca46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x10))();
    return uVar2;
  }
  return 0;
}



void FUN_0046ca50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c02c;
  in_ECX[1] = 0;
  return;
}



void FUN_0046ca60(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  piVar1 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b05cf4,0);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x10))();
    *(undefined4 *)(in_ECX + 4) = uVar2;
  }
  return;
}



void FUN_0046cac0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c078;
  return;
}



undefined1 FUN_0046cae0(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0xc);
}



void FUN_0046caf0(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0xc) = param_1;
  return;
}



byte FUN_0046cb00(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0xd) & 1;
}



void FUN_0046cb10(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 1;
    return;
  }
  *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfe;
  return;
}



void FUN_0046cb30(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 2;
    return;
  }
  *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfd;
  return;
}



byte FUN_0046cb50(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0xd) >> 2 & 1;
}



undefined4 FUN_0046cb60(void)

{
  int *in_ECX;
  
  if ((in_ECX[1] == 0) && (*in_ECX == 0)) {
    return 1;
  }
  return 0;
}



void FUN_0046cb80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c078;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *(undefined1 *)(in_ECX + 3) = 0;
  *(undefined1 *)((int)in_ECX + 0xd) = 0;
  return;
}



void FUN_0046cba0(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  while (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      piVar1 = (int *)piVar1[1];
    }
    else {
      FUN_00401f20(*piVar1);
      piVar2 = (int *)piVar1[1];
      if (piVar2 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        piVar1[1] = piVar2[1];
        *piVar1 = *piVar2;
        FUN_00401f20(piVar2);
      }
    }
  }
  return;
}



ushort * FUN_0046cbf0(ushort param_1,ushort param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ushort *puVar2;
  int in_ECX;
  
  for (puVar1 = (undefined4 *)(in_ECX + 4);
      (puVar1 != (undefined4 *)0x0 &&
      (((ushort *)*puVar1 == (ushort *)0x0 || (*(ushort *)*puVar1 <= param_1))));
      puVar1 = (undefined4 *)puVar1[1]) {
  }
  puVar2 = (ushort *)FUN_00401f00(0xc);
  *(undefined4 *)(puVar2 + 2) = param_3;
  *puVar2 = param_1;
  puVar2[4] = param_2;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0067b1e0(puVar2);
    return puVar2;
  }
  FUN_00446cb0(puVar2);
  return puVar2;
}



void FUN_0046cc70(uint param_1,undefined4 *param_2,short *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  short sVar10;
  uint uVar11;
  uint local_4;
  
  *param_2 = 0;
  *param_3 = 0;
  bVar1 = *(byte *)(in_ECX + 3);
  if ((bVar1 == 0) || (iVar4 = FUN_0047df80(0), (int)(uint)bVar1 <= iVar4 % 100)) {
    uVar11 = param_1 & 0xffff;
    local_4 = uVar11;
    if ((*(byte *)((int)in_ECX + 0xd) & 1) != 0) {
      iVar4 = (**(code **)(*in_ECX + 0x10))();
      if (iVar4 == 0) {
        local_4 = 0xffffffff;
      }
      else {
        local_4 = uVar11 - iVar4;
      }
    }
    piVar5 = in_ECX + 1;
    uVar11 = 0;
    piVar8 = (int *)0x0;
    bVar2 = false;
    iVar4 = 1;
    if (piVar5 != (int *)0x0) {
      do {
        if ((ushort *)*piVar5 != (ushort *)0x0) {
          uVar7 = (uint)*(ushort *)*piVar5;
          if ((param_1 & 0xffff) < uVar7) break;
          if ((uVar7 <= uVar11) || ((uVar11 != 0 && (bVar2)))) {
            iVar4 = iVar4 + 1;
          }
          else {
            if ((int)local_4 <= (int)uVar7) {
              bVar2 = true;
            }
            iVar4 = 1;
            piVar8 = piVar5;
            uVar11 = uVar7;
          }
        }
        piVar5 = (int *)piVar5[1];
      } while (piVar5 != (int *)0x0);
      if (piVar8 != (int *)0x0) {
        iVar6 = FUN_0047df80(0);
        iVar6 = iVar6 % iVar4;
        do {
          if (iVar6 == 0) {
            uVar9 = *(undefined4 *)(*piVar8 + 4);
            sVar10 = *(short *)(*piVar8 + 8);
            iVar4 = FUN_009832e6(uVar9,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05cd4,0);
            uVar3 = param_4;
            if ((iVar4 != 0) && ((char)param_4 != '\0')) {
              param_4 = 0;
              local_4 = 0;
              FUN_0046cc70(param_1,&param_4,&local_4,uVar3);
              sVar10 = (short)local_4 * sVar10;
              uVar9 = param_4;
            }
            *param_2 = uVar9;
            *param_3 = sVar10;
            return;
          }
          piVar8 = (int *)piVar8[1];
          iVar6 = iVar6 + -1;
        } while (piVar8 != (int *)0x0);
      }
    }
  }
  return;
}



void FUN_0046cde0(uint param_1,uint param_2,int param_3)

{
  int *piVar1;
  ushort *puVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined1 local_1c [16];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar5 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aeaf8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_3 != 0) && ((short)param_2 != 0)) {
    local_28 = param_1 & 0xffff;
    if ((*(byte *)(in_ECX + 0xd) & 1) != 0) {
      piVar3 = (int *)(in_ECX + 4);
      uVar4 = 0;
      while ((piVar3 != (int *)0x0 &&
             ((piVar1 = (int *)piVar3[1], piVar1 != (int *)0x0 || (*piVar3 != 0))))) {
        puVar2 = (ushort *)*piVar3;
        piVar3 = piVar1;
        if (uVar4 < *puVar2) {
          uVar4 = *puVar2;
        }
      }
      if (uVar4 < local_28) {
        local_28 = (uint)uVar4;
      }
    }
    FUN_00469690(uVar6);
    local_4 = 0;
    if ((*(byte *)(in_ECX + 0xd) & 2) == 0) {
      local_20 = 0;
      local_24 = 0;
      FUN_0046cc70(local_28,&local_20,&local_24,0);
      uVar6 = local_20;
      uVar5 = local_24;
      if ((local_20 != 0) && ((short)local_24 != 0)) {
        iVar7 = FUN_009832e6(local_20,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05cd4,0);
        if (iVar7 == 0) {
          iVar7 = FUN_009832e6(uVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
          if (iVar7 != 0) {
            FUN_00469d10(iVar7,uVar5 & 0xffff,0);
          }
        }
        else {
          FUN_0046cde0(param_1,uVar5,local_1c);
        }
        FUN_00469990(param_2 & 0xffff);
      }
    }
    else {
      uVar6 = uVar5 & 0xffff;
      if ((uVar5 & 0xffff) != 0) {
        do {
          local_20 = uVar6;
          param_2 = 0;
          local_24 = 0;
          FUN_0046cc70(local_28,&param_2,&local_24,0);
          uVar6 = local_24;
          uVar5 = param_2;
          if ((param_2 != 0) && ((short)local_24 != 0)) {
            iVar7 = FUN_009832e6(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05cd4,0);
            if (iVar7 == 0) {
              iVar7 = FUN_009832e6(uVar5,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
              if (iVar7 != 0) {
                FUN_00469d10(iVar7,uVar6 & 0xffff,0);
              }
            }
            else {
              FUN_0046cde0(param_1,uVar6,local_1c);
            }
          }
          uVar6 = local_20 - 1;
        } while (local_20 - 1 != 0);
        local_20 = 0;
      }
    }
    FUN_00469fd0(local_1c);
    local_4 = 0xffffffff;
    FUN_0046a010();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0046cff0(void)

{
  undefined2 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined2 local_c [2];
  undefined4 local_8;
  undefined2 local_4;
  
  FUN_0046ae40(0x444c564c,in_ECX + 0xc,1);
  FUN_0046ae40(0x464c564c,in_ECX + 0xd,1);
  for (puVar2 = (undefined4 *)(in_ECX + 4);
      (puVar2 != (undefined4 *)0x0 && (puVar1 = (undefined2 *)*puVar2, puVar1 != (undefined2 *)0x0))
      ; puVar2 = (undefined4 *)puVar2[1]) {
    local_8 = *(undefined4 *)(*(int *)(puVar1 + 2) + 0xc);
    local_c[0] = *puVar1;
    local_4 = puVar1[4];
    FUN_0046ae40(0x4f4c564c,local_c,0xc);
  }
  return;
}



void FUN_0046d070(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int in_ECX;
  undefined4 local_4;
  
  piVar6 = param_1;
  piVar1 = (int *)(in_ECX + 4);
  if (param_1 == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = FUN_0046b680(0xffffffff);
  }
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if ((piVar1 == (int *)0x0) || (iVar4 = *piVar1, iVar4 == 0)) {
            return;
          }
          param_1 = *(int **)(iVar4 + 4);
          FUN_0046bb20(&param_1,local_4);
          iVar7 = FUN_0046b250(param_1);
          *(int *)(iVar4 + 4) = iVar7;
          if (iVar7 == 0) break;
          piVar1 = (int *)piVar1[1];
        }
        piVar5 = (int *)piVar1[1];
        if (piVar5 == (int *)0x0) {
          *piVar1 = 0;
        }
        else {
          piVar1[1] = piVar5[1];
          *piVar1 = *piVar5;
          FUN_00401f20(piVar5);
        }
        FUN_00401f20(iVar4);
        if (piVar6 != (int *)0x0) break;
        FUN_004a7a60("Unable to find Leveled Object Form (%08X) for unknown owner.",param_1);
      }
      if (DAT_00b333f4 == '\0') break;
LAB_0046d163:
      FUN_004a7a60("Unable to find Leveled Object Form (%08X) for owner object (%08X).",param_1,
                   piVar6[3]);
    }
    DAT_00b333f4 = 1;
    pcVar8 = (char *)(**(code **)(*piVar6 + 0xd4))();
    DAT_00b333f4 = '\0';
    if (pcVar8 == (char *)0x0) goto LAB_0046d163;
    pcVar2 = pcVar8 + 1;
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    if (pcVar8 == pcVar2) goto LAB_0046d163;
    uVar9 = (**(code **)(*piVar6 + 0xd4))();
    FUN_004a7a60("Unable to find Leveled Object Form (%08X) for owner object \"%s\".",param_1,uVar9)
    ;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d1b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b05cd4,0);
  if (iVar3 != 0) {
    FUN_0046cba0();
    piVar6 = (int *)(in_ECX + 4);
    for (puVar1 = (undefined4 *)(iVar3 + 4);
        (puVar1 != (undefined4 *)0x0 &&
        (puVar2 = (undefined2 *)*puVar1, puVar2 != (undefined2 *)0x0));
        puVar1 = (undefined4 *)puVar1[1]) {
      puVar4 = (undefined2 *)FUN_00401f00(0xc);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar2 + 2);
      *puVar4 = *puVar2;
      puVar4[4] = puVar2[4];
      if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
        if (*piVar6 != 0) {
          piVar5 = (int *)FUN_00401f00(8);
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar6;
            piVar5[1] = 0;
            piVar5[1] = piVar6[1];
            piVar6[1] = (int)piVar5;
            *piVar6 = (int)puVar4;
            goto LAB_0046d282;
          }
          _DAT_00000004 = piVar6[1];
          piVar6[1] = 0;
        }
        *piVar6 = (int)puVar4;
      }
      else {
        FUN_0067b1e0(puVar4);
        piVar6 = (int *)piVar6[1];
      }
LAB_0046d282:
    }
    *(undefined1 *)(in_ECX + 0xc) = *(undefined1 *)(iVar3 + 0xc);
    if ((*(byte *)(iVar3 + 0xd) & 1) == 0) {
      *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfe;
    }
    else {
      *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 1;
    }
    if ((*(byte *)(iVar3 + 0xd) & 2) == 0) {
      *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfd;
    }
    else {
      *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 2;
    }
    if ((*(byte *)(iVar3 + 0xd) & 4) != 0) {
      *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 4;
      return;
    }
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfb;
  }
  return;
}



undefined4 FUN_0046d3d0(int param_1)

{
  if (((param_1 != 0x42444f4d) && (param_1 != 0x4c444f4d)) && (param_1 != 0x54444f4d)) {
    return 0;
  }
  return 1;
}



undefined1 * FUN_0046d3f0(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  piVar1 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03304,0);
  if (piVar1 == (int *)0x0) {
    uVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    piVar1 = (int *)FUN_004694a0(param_1,uVar2);
    if (piVar1 == (int *)0x0) {
      return &DAT_00a2f7ec;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0046d438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined1 *)(**(code **)(*piVar1 + 0x14))();
  return puVar3;
}



bool FUN_0046d450(void)

{
  int iVar1;
  undefined1 *in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 0) {
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  *in_ECX = 0;
  return iVar1 != 0;
}



void FUN_0046d480(void)

{
  undefined1 *in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  *in_ECX = 0;
  return;
}



void FUN_0046d4a0(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_0046d4d0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x14) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x14));
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  *(undefined1 *)(in_ECX + 0x10) = 0;
  return;
}



void FUN_0046d4f0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int *in_ECX;
  char *pcVar3;
  
  pcVar2 = (char *)(**(code **)(*in_ECX + 0x14))();
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = _strrchr(param_1,0x2e);
  if (pcVar3 != (char *)0x0) {
    builtin_strncpy(pcVar3,"_far.NIF",9);
  }
  return;
}



void FUN_0046d540(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_009832e6(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03304,0);
    if (iVar1 != 0) {
      FUN_0046d4f0(param_1);
    }
  }
  return;
}



void FUN_0046d570(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  piVar2 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b03304,0);
  if (piVar2 != (int *)0x0) {
    iVar1 = *in_ECX;
    uVar3 = (**(code **)(*piVar2 + 0x14))();
    (**(code **)(iVar1 + 0x18))(uVar3);
    in_ECX[3] = piVar2[3];
  }
  return;
}



float10 FUN_0046d5c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03304,0);
  if (iVar1 == 0) {
    uVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar1 = FUN_004694a0(param_1,uVar2);
    if (iVar1 == 0) {
      return (float10)0;
    }
  }
  return (float10)*(float *)(iVar1 + 0xc);
}



void FUN_0046d610(int param_1,uint param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *in_ECX;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined4 local_4;
  
  *in_ECX = (char)param_2;
  uVar1 = FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4));
  uVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = uVar1;
  if (param_2 != 0) {
    puVar2 = (undefined1 *)(param_1 + 2);
    do {
      local_f = puVar2[-1];
      local_e = *puVar2;
      local_10 = puVar2[-2];
      local_c = *(undefined4 *)(puVar2 + 2);
      local_8 = puVar2[0xe];
      local_d = puVar2[1];
      local_6 = puVar2[0x10];
      local_5 = puVar2[0x11];
      local_7 = puVar2[0xf];
      local_4 = *(undefined4 *)(puVar2 + 0x12);
      uVar1 = FUN_0042db10(1,&local_8,&local_10,0);
      *(undefined4 *)(*(int *)(in_ECX + 4) + uVar3 * 4) = uVar1;
      if (((DAT_00b06310 != '\0') && (DAT_00b04428 != '\0')) &&
         (*(int *)(*(int *)(in_ECX + 4) + uVar3 * 4) == 0)) {
        if (param_3 == (int *)0x0) {
          if (param_4 == 0) goto LAB_0046d722;
          FUN_004a7a60("Failed to find archive file entry for texture on model \'%s\' on UNKNOWN form."
                       ,param_4);
        }
        else if (param_4 == 0) {
LAB_0046d722:
          FUN_004a7a60("Failed to find archive file entry for texture on UNKNOWN Model");
        }
        else {
          uVar1 = (**(code **)(*param_3 + 0xd4))(param_3[3]);
          FUN_004a7a60("Failed to find archive file entry for texture on model \'%s\' for form %s (%08X)."
                       ,param_4,uVar1);
        }
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x18;
    } while (uVar3 < param_2);
  }
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

int FUN_0046d750(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uStack_2c;
  size_t asStack_28 [2];
  size_t asStack_20 [2];
  
  uVar1 = *(uint *)(param_1 + 0x254);
  iVar2 = uVar1 * -0x55555555;
  uVar3 = uVar1 / 0x18;
  if ((uVar1 == uVar3 * 0x18) && (uVar3 != 0)) {
    asStack_20[1] = 0x46d79c;
    iVar2 = uVar3 * -0x18;
    *(uint *)((int)asStack_28 + (uVar3 * -6 + 1) * 4 + 8) = uVar3 * 0x18;
    *(undefined4 *)((int)asStack_28 + uVar3 * 0xffffffe8 + 8) = 0;
    *(undefined1 **)((int)asStack_28 + (uVar3 * -6 + -1) * 4 + 8) = &stack0xffffffe8 + iVar2;
    asStack_28[uVar3 * -6] = 0x46d7a7;
    _memset(*(void **)((int)asStack_28 + (uVar3 * -6 + -1) * 4 + 8),
            *(int *)((int)asStack_28 + uVar3 * 0xffffffe8 + 8),
            *(size_t *)((int)asStack_28 + (uVar3 * -6 + 1) * 4 + 8));
    *(uint *)((int)asStack_28 + (uVar3 * -6 + 1) * 4 + 8) = uVar3 * 0x18;
    *(undefined1 **)((int)asStack_28 + uVar3 * 0xffffffe8 + 8) = &stack0xffffffe8 + iVar2;
    *(undefined4 *)((int)asStack_28 + (uVar3 * -6 + -1) * 4 + 8) = 0x46d7b4;
    FUN_00450c20();
    *(undefined4 *)((int)asStack_28 + (uVar3 * -6 + 1) * 4 + 8) = param_3;
    *(undefined4 *)((int)asStack_28 + uVar3 * 0xffffffe8 + 8) = param_2;
    *(uint *)((int)asStack_28 + (uVar3 * -6 + -1) * 4 + 8) = uVar3;
    asStack_28[uVar3 * -6] = (size_t)(&stack0xffffffe8 + iVar2);
    (&uStack_2c)[uVar3 * -6] = 0x46d7c6;
    iVar2 = FUN_0046d610();
  }
  return iVar2;
}



void FUN_0046d7e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aeb36;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3c24c;
  in_ECX[1] = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  in_ECX[5] = 0;
  FUN_00401f20(in_ECX[1],uVar1);
  in_ECX[1] = 0;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  in_ECX[3] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0046d850(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3c24c;
  if (in_ECX[5] != 0) {
    FUN_00401f20(in_ECX[5]);
    in_ECX[5] = 0;
  }
  *(undefined1 *)(in_ECX + 4) = 0;
  if (in_ECX[5] != 0) {
    FUN_00401f20(in_ECX[5]);
    in_ECX[5] = 0;
  }
  *(undefined1 *)(in_ECX + 4) = 0;
  FUN_00401f20(in_ECX[1]);
  in_ECX[1] = 0;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  return;
}



void FUN_0046d8b0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int *in_ECX;
  
  if (*(ushort *)(in_ECX + 2) == 0xffff) {
    pcVar3 = (char *)in_ECX[1];
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 2);
  }
  if (uVar4 != 0) {
    if (*(ushort *)(in_ECX + 2) == 0xffff) {
      pcVar3 = (char *)in_ECX[1];
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 2);
    }
    uVar5 = (**(code **)(*in_ECX + 0x14))(uVar4 + 1);
    FUN_0046ae40(param_1,uVar5);
    FUN_0046ba80(param_2,in_ECX[3]);
    (**(code **)(*in_ECX + 0x14))();
  }
  return;
}



void FUN_0046d940(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x14))();
    uVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b03304,&PTR_PTR_00b02f9c,0,uVar1);
    FUN_0046d750(param_2,uVar2,uVar1);
  }
  return;
}



uint FUN_0046da90(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03304,0);
  if (iVar3 == 0) {
    uVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar3 = FUN_004694a0(param_1,uVar4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (*(ushort *)(iVar3 + 8) == 0xffff) {
    pcVar5 = *(char **)(iVar3 + 4);
    pcVar1 = pcVar5 + 1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    return (int)pcVar5 - (int)pcVar1;
  }
  return (uint)*(ushort *)(iVar3 + 8);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0046db00(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_24;
  int *piStack_20;
  int *piStack_1c;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  if ((param_2 != (int *)0x0) && (param_1 != (int *)0x0)) {
    piStack_1c = (int *)0x46db30;
    iVar2 = FUN_004510b0();
    if (iVar2 == 0x42444f4d) {
      piStack_1c = &local_c;
      piStack_20 = (int *)0x46dba3;
      FUN_004510e0();
      param_1[3] = local_c;
    }
    else {
      if (iVar2 == 0x4c444f4d) {
        piStack_1c = (int *)0x46db6e;
        iVar2 = -param_2[0x95];
        *(undefined4 *)((int)&piStack_1c + iVar2) = 0;
        *(undefined1 **)((int)&piStack_20 + iVar2) = &stack0xffffffe8 + iVar2;
        *(undefined4 *)((int)&uStack_24 + iVar2) = 0x46db7a;
        FUN_00450c20();
        pcVar1 = *(code **)(*param_1 + 0x18);
        *(undefined1 **)((int)&piStack_1c + iVar2) = &stack0xffffffe8 + iVar2;
        *(undefined4 *)((int)&piStack_20 + iVar2) = 0x46db84;
        (*pcVar1)();
        return;
      }
      if (iVar2 == 0x54444f4d) {
        piStack_1c = param_2;
        piStack_20 = param_1;
        uStack_24 = 0x46db4c;
        FUN_0046d940();
        return;
      }
    }
  }
  return;
}



void FUN_0046dbc0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3c28c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_0046dbe0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int in_ECX;
  undefined1 *puVar7;
  char *local_4;
  
  piVar1 = (int *)(in_ECX + 4);
  if ((*(int *)(in_ECX + 8) != 0) || (*piVar1 != 0)) {
    local_4 = (char *)0x1;
    for (piVar3 = piVar1; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      pcVar4 = (char *)*piVar3;
      if (pcVar4 != (char *)0x0) {
        pcVar6 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        local_4 = pcVar4 + (int)(local_4 + (1 - (int)pcVar6));
      }
    }
    puVar5 = (undefined1 *)FUN_00401f00(local_4);
    puVar7 = puVar5;
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      pcVar4 = (char *)*piVar1;
      if (pcVar4 != (char *)0x0) {
        pcVar6 = pcVar4;
        do {
          cVar2 = *pcVar6;
          pcVar6[(int)puVar7 - (int)pcVar4] = cVar2;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        pcVar6 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        puVar7 = puVar7 + (int)(pcVar4 + (1 - (int)pcVar6));
      }
    }
    *puVar7 = 0;
    FUN_0046ae40(param_1,puVar5,local_4);
    FUN_00401f20(puVar5);
  }
  return;
}



undefined4 FUN_0046dd20(char *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  if (((*(int *)(in_ECX + 8) != 0) || (*piVar1 != 0)) && (param_1 != (char *)0x0)) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (((char *)*piVar1 != (char *)0x0) &&
         (iVar2 = __stricmp((char *)*piVar1,param_1), iVar2 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_0046dd70(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = FUN_0046dd20(param_1);
  if (cVar1 == '\0') {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
    iVar4 = iVar3 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar4] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    FUN_0067b1e0(iVar3);
  }
  return;
}



void FUN_0046ddc0(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b05bcc,0);
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 4))();
    for (piVar2 = (int *)(iVar1 + 4); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (*piVar2 != 0) {
        FUN_0046dd70(*piVar2);
      }
    }
  }
  return;
}



void FUN_0046de10(void)

{
  int iVar1;
  uint *in_ECX;
  uint uVar2;
  
  if (in_ECX[1] != 0) {
    uVar2 = 0;
    if (*in_ECX != 0) {
      do {
        iVar1 = *(int *)(in_ECX[1] + uVar2 * 4);
        if (iVar1 != 0) {
          FUN_0046d450();
          FUN_00401f20(iVar1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *in_ECX);
    }
    FUN_00401f20(in_ECX[1]);
    in_ECX[1] = 0;
  }
  *in_ECX = 0;
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0046de60(int param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint *in_ECX;
  int iVar8;
  int aiStack_40 [5];
  uint auStack_2c [2];
  undefined4 local_10;
  uint local_c;
  
  auStack_2c[1] = 0x46de7a;
  FUN_0046de10();
  auStack_2c[1] = 0x46de8a;
  iVar3 = -*(int *)(param_2 + 0x254);
  *(int *)((int)auStack_2c + iVar3 + 4) = *(int *)(param_2 + 0x254);
  *(undefined1 **)((int)auStack_2c + iVar3) = &stack0xffffffdc + iVar3;
  *(undefined4 *)((int)aiStack_40 + iVar3 + 0x10) = 0x46de99;
  FUN_00450c20();
  uVar4 = *(uint *)(&stack0xffffffdc + iVar3);
  iVar8 = 4;
  *in_ECX = uVar4;
  lVar2 = (ulonglong)uVar4 * 4;
  *(uint *)((int)auStack_2c + iVar3 + 4) =
       -(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2;
  *(undefined4 *)((int)auStack_2c + iVar3) = 0x46deb5;
  uVar4 = FUN_00401f00();
  in_ECX[1] = uVar4;
  puVar5 = (undefined4 *)(param_1 + 4);
  local_c = 0;
  if (*in_ECX != 0) {
    do {
      local_10 = 0;
      if (puVar5 != (undefined4 *)0x0) {
        local_10 = *puVar5;
      }
      puVar5 = (undefined4 *)puVar5[1];
      *(undefined4 *)((int)auStack_2c + iVar3 + 4) = 8;
      *(undefined4 *)((int)auStack_2c + iVar3) = 0x46def5;
      puVar6 = (undefined1 *)FUN_00401f00();
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 4) = 0;
      }
      *(undefined1 **)(in_ECX[1] + local_c * 4) = puVar6;
      bVar1 = (&stack0xffffffdc)[iVar8 + iVar3];
      *(undefined4 *)((int)auStack_2c + iVar3 + 4) = local_10;
      *(undefined4 *)((int)auStack_2c + iVar3) = 0;
      *(undefined ***)((int)aiStack_40 + iVar3 + 0x10) = &PTR_PTR_00b02f9c;
      *(undefined ***)((int)aiStack_40 + iVar3 + 0xc) = &PTR_PTR_00b05bcc;
      *(undefined4 *)((int)aiStack_40 + iVar3 + 8) = 0;
      *(int *)((int)aiStack_40 + iVar3 + 4) = param_1;
      *(undefined4 *)((int)aiStack_40 + iVar3) = 0x46df37;
      uVar7 = FUN_009832e6();
      *(undefined4 *)((int)auStack_2c + iVar3) = uVar7;
      *(uint *)((int)aiStack_40 + iVar3 + 0x10) = (uint)bVar1;
      *(undefined1 **)((int)aiStack_40 + iVar3 + 0xc) = &stack0xffffffdd + iVar8 + 1 + iVar3 + -1;
      *(undefined4 *)((int)aiStack_40 + iVar3 + 8) = 0x46df51;
      FUN_0046d610();
      iVar8 = iVar8 + 1 + (uint)bVar1 * 0x18;
      local_c = local_c + 1;
    } while (local_c < *in_ECX);
  }
  return;
}



void FUN_0046df80(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  
  while ((*(int *)(in_ECX + 8) != 0 || (*(int *)(in_ECX + 4) != 0))) {
    puVar1 = *(undefined4 **)(in_ECX + 8);
    uVar2 = *(undefined4 *)(in_ECX + 4);
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 4) = 0;
      FUN_00401f20(uVar2);
    }
    else {
      *(undefined4 *)(in_ECX + 8) = puVar1[1];
      *(undefined4 *)(in_ECX + 4) = *puVar1;
      FUN_00401f20(puVar1);
      FUN_00401f20(uVar2);
    }
  }
  FUN_0046de10();
  return;
}



void FUN_0046dfe0(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar4 = FUN_004510b0();
    if (iVar4 == 0x5446494e) {
      FUN_0046de60(param_1,param_2);
    }
    else if (iVar4 == 0x5a46494e) {
      pcVar5 = (char *)FUN_00401f00(*(undefined4 *)(param_2 + 0x254));
      FUN_00450c20(pcVar5,0);
      cVar3 = *pcVar5;
      pcVar2 = pcVar5;
      while (cVar3 != '\0') {
        FUN_0046dd70(pcVar2);
        pcVar6 = pcVar2;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        pcVar1 = pcVar2 + (int)(pcVar6 + (1 - (int)(pcVar2 + 1)));
        pcVar2 = pcVar2 + (int)(pcVar6 + (1 - (int)(pcVar2 + 1)));
        cVar3 = *pcVar1;
      }
      FUN_00401f20(pcVar5);
      return;
    }
  }
  return;
}



void FUN_0046e080(undefined4 param_1)

{
  FUN_004028d0(param_1,0);
  return;
}



void FUN_0046e0b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c2a0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_0046e0d0(void)

{
  int in_ECX;
  int local_4;
  
  local_4 = in_ECX;
  if (*(int *)(in_ECX + 4) != 0) {
    local_4 = *(int *)(*(int *)(in_ECX + 4) + 0xc);
    FUN_0046ae40(0x47494650,&local_4,4);
  }
  FUN_0046ae40(0x43504650,in_ECX + 8,4);
  return;
}



void FUN_0046e220(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int local_4;
  
  local_4 = *(int *)(in_ECX + 4);
  if (local_4 != 0) {
    uVar1 = FUN_0046b680(0xffffffff);
    FUN_0046bb20(&local_4,uVar1);
    uVar1 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0373c,0);
    iVar2 = FUN_009832e6(uVar1);
    *(int *)(in_ECX + 4) = iVar2;
    if (iVar2 == 0) {
      if (param_1 != (int *)0x0) {
        iVar2 = FUN_00404e50();
        if (iVar2 == 0) {
          FUN_004a7a60("Unable to find ingredient (%08X) on owner object (%08X).",local_4,param_1[3]
                      );
          return;
        }
        uVar1 = (**(code **)(*param_1 + 0xd4))();
        FUN_004a7a60("Unable to find ingredient (%08X) on owner object \"%s\".",local_4,uVar1);
        return;
      }
      FUN_004a7a60("Unable to find ingredient (%08X) on unknown owner.",local_4);
    }
  }
  return;
}



void FUN_0046e2f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c35c;
  return;
}



void FUN_0046e300(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  *in_ECX = &PTR_LAB_00a3c35c;
  return;
}



void FUN_0046e310(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b05c94,0);
  if (iVar1 != 0) {
    *(float *)(in_ECX + 4) = (float)((int)ROUND(*(float *)(iVar1 + 4)) & 0xff);
  }
  return;
}



ushort FUN_0046e370(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined1 uVar3;
  char local_4;
  
  uVar3 = (undefined1)((ushort)in_FPUControlWord >> 8);
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b05c94,0);
  if (iVar2 == 0) {
    return 1;
  }
  local_4 = (char)(int)ROUND(*(float *)(iVar2 + 4));
  cVar1 = local_4;
  local_4 = (char)(int)ROUND(*(float *)(in_ECX + 4));
  return CONCAT11(uVar3,local_4 != cVar1) | 0xc00;
}



ushort FUN_0046e3f0(undefined4 param_1)

{
  int iVar1;
  undefined2 in_FPUControlWord;
  undefined1 uVar2;
  undefined1 local_4;
  
  uVar2 = (undefined1)((ushort)in_FPUControlWord >> 8);
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05c94,0);
  if (iVar1 != 0) {
    local_4 = (undefined1)(int)ROUND(*(float *)(iVar1 + 4));
    return CONCAT11(uVar2,local_4) | 0xc00;
  }
  return 0xff;
}



void FUN_0046e450(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c370;
  in_ECX[1] = 0;
  return;
}



void FUN_0046e460(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_0046ba80(0x4d414e52,*(undefined4 *)(*(int *)(in_ECX + 4) + 0xc));
  }
  return;
}



void FUN_0046e480(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b05c78,0);
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(iVar1 + 4);
  }
  return;
}



void FUN_0046e4f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int local_4;
  
  local_4 = *(int *)(in_ECX + 4);
  if (local_4 != 0) {
    uVar1 = FUN_0046b680(0xffffffff);
    FUN_0046bb20(&local_4,uVar1);
    uVar1 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0532c,0);
    iVar2 = FUN_009832e6(uVar1);
    *(int *)(in_ECX + 4) = iVar2;
    if (iVar2 == 0) {
      if (param_1 != (int *)0x0) {
        iVar2 = FUN_00404e50();
        if (iVar2 == 0) {
          FUN_004a7a60("Unable to find race (%08X) on owner object (%08X).",local_4,param_1[3]);
          return;
        }
        uVar1 = (**(code **)(*param_1 + 0xd4))();
        FUN_004a7a60("Unable to find race (%08X) on owner object \"%s\".",local_4,uVar1);
        return;
      }
      FUN_004a7a60("Unable to find race (%08X) on unknown owner.",local_4);
    }
  }
  return;
}



void FUN_0046e5c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c41c;
  return;
}



void FUN_0046e5e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c41c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *(undefined1 *)(in_ECX + 3) = 6;
  return;
}



void FUN_0046e600(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  while (iVar1 != 0) {
    FUN_00401f20(iVar1);
    puVar2 = *(undefined4 **)(in_ECX + 8);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 8) = puVar2[1];
      *(undefined4 *)(in_ECX + 4) = *puVar2;
      FUN_00401f20(puVar2);
    }
    iVar1 = *(int *)(in_ECX + 4);
  }
  return;
}



void FUN_0046e650(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  undefined4 local_8;
  int local_4;
  
  for (piVar1 = (int *)(in_ECX + 4);
      (piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0));
      piVar1 = (int *)piVar1[1]) {
    if ((*(uint *)(*piVar2 + 8) >> 5 & 1) == 0) {
      local_4 = piVar2[1];
      local_8 = *(undefined4 *)(*piVar2 + 0xc);
      FUN_0046ae40(0x4d414e58,&local_8,8);
    }
  }
  return;
}



void FUN_0046e6b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 local_4;
  
  piVar4 = param_1;
  piVar1 = (int *)(in_ECX + 4);
  if (param_1 == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = FUN_0046b680(0xffffffff);
  }
  while ((piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0))) {
    param_1 = (int *)*piVar2;
    FUN_0046bb20(&param_1,local_4);
    iVar5 = FUN_0046b250(param_1);
    *piVar2 = iVar5;
    if (iVar5 == 0) {
      iVar5 = piVar4[3];
      uVar6 = (**(code **)(*piVar4 + 0xd4))();
      FUN_004a7a60("Form (%08X) not found for reaction of pForm (%08X) \'%s\'.\r\n",param_1,iVar5,
                   uVar6);
      piVar3 = (int *)piVar1[1];
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        piVar1[1] = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
      FUN_00401f20(piVar2);
    }
    else {
      piVar1 = (int *)piVar1[1];
    }
  }
  return;
}



int FUN_0046e8d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    for (piVar1 = (int *)(in_ECX + 4);
        (piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0));
        piVar1 = (int *)piVar1[1]) {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
    }
  }
  return 0;
}



void FUN_0046e900(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    for (piVar2 = (int *)(in_ECX + 4);
        (piVar2 != (int *)0x0 && (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0));
        piVar2 = (int *)piVar2[1]) {
      if (*piVar1 == param_1) {
        if (param_2 == 0) {
          FUN_0065c620(piVar1);
          FUN_00401f20(piVar1);
          return;
        }
        piVar1[1] = param_2;
        return;
      }
    }
    if (param_2 != 0) {
      piVar2 = (int *)FUN_00401f00(8);
      *piVar2 = param_1;
      piVar2[1] = param_2;
      FUN_0067b1e0(piVar2);
    }
  }
  return;
}



void FUN_0046e980(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    piVar2 = (int *)(in_ECX + 4);
    while( true ) {
      if ((piVar2 == (int *)0x0) || (piVar1 = (int *)*piVar2, piVar1 == (int *)0x0)) {
        piVar2 = (int *)FUN_00401f00(8);
        *piVar2 = param_1;
        piVar2[1] = param_2;
        FUN_0067b1e0(piVar2);
        return;
      }
      if (*piVar1 == param_1) break;
      piVar2 = (int *)piVar2[1];
    }
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + param_2;
    if (*piVar2 == 0) {
      FUN_0065c620(piVar1);
      FUN_00401f20(piVar1);
    }
  }
  return;
}



short FUN_0046e9f0(byte param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  short sVar5;
  int in_ECX;
  short sVar6;
  
  sVar6 = 0;
  if ((param_1 & 8) == 0) {
    return 0;
  }
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar6 = 6;
  }
  sVar5 = 0;
  for (piVar3 = (int *)(in_ECX + 4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if (*piVar3 != 0) {
      sVar5 = sVar5 + 1;
    }
  }
  sVar6 = sVar6 + 2 + sVar5 * 8;
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar6,0x4e9,
                   "..\\TES Shared\\TESReactionForm.cpp");
      return sVar6;
    }
    piVar3 = (int *)FUN_0046b250(*puVar1);
    uVar4 = (**(code **)(*piVar3 + 0xd4))
                      (*(undefined4 *)((int)puVar1 + 5),0x4e9,"..\\TES Shared\\TESReactionForm.cpp")
    ;
    FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                 ,sVar6,*puVar1,uVar4);
  }
  return sVar6;
}



void FUN_0046eac0(uint param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int *piVar8;
  undefined4 uVar9;
  int in_ECX;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_1 & 8) != 0) {
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
    param_1 = 0;
    puVar2 = *(undefined2 **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&param_1,2);
    for (piVar8 = (int *)(in_ECX + 4); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1]) {
      piVar3 = (int *)*piVar8;
      if (piVar3 != (int *)0x0) {
        local_8 = *(undefined4 *)(*piVar3 + 0xc);
        FUN_0045f7a0(&local_8,4);
        FUN_0045b9a0(piVar3 + 1,4);
        param_1 = param_1 + 1;
      }
    }
    *puVar2 = (undefined2)param_1;
    if (DAT_00b05bac != '\0') {
      puVar4 = *(undefined4 **)(DAT_00b33b00 + 0x84);
      iVar5 = *(int *)(DAT_00b33b00 + 0x14);
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar5 - iVar1,0x50d,
                     "..\\TES Shared\\TESReactionForm.cpp");
      }
      else {
        piVar8 = (int *)FUN_0046b250(*puVar4);
        uVar9 = (**(code **)(*piVar8 + 0xd4))
                          (*(undefined4 *)((int)puVar4 + 5),0x50d,
                           "..\\TES Shared\\TESReactionForm.cpp");
        FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                     ,iVar5 - iVar1,*puVar4,uVar9);
      }
    }
    cVar7 = FUN_0045a170();
    if (cVar7 != '\0') {
      uVar6 = *(uint *)(DAT_00b33b00 + 0x14);
      if ((int)local_c + 0xffffU < uVar6) {
        FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                     "..\\TES Shared\\TESReactionForm.cpp",0x50d);
      }
      *local_c = (short)uVar6 - (short)local_c;
    }
  }
  return;
}



void FUN_0046ec70(ushort param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_10;
  int local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((param_1 & 8) != 0) {
    local_10 = 0;
    iVar6 = 0;
    cVar2 = FUN_0045a170();
    if (cVar2 != '\0') {
      FUN_004534d0(&local_c,4);
      if (local_c != 0x4b4f4c42) {
        puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
        if (puVar1 == (undefined4 *)0x0) {
          FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                       ,"..\\TES Shared\\TESReactionForm.cpp",0x519,
                       *(undefined1 *)(DAT_00b33b00 + 0x7c));
        }
        else {
          piVar3 = (int *)FUN_0046b250(*puVar1);
          uVar4 = (**(code **)(*piVar3 + 0xd4))
                            (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
          FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                       ,"..\\TES Shared\\TESReactionForm.cpp",0x519,*puVar1,uVar4);
        }
      }
      iVar6 = *(int *)(DAT_00b33b00 + 0x14);
      FUN_004534d0(&local_10,2);
    }
    FUN_0046e600();
    FUN_004534d0(&param_1,2);
    uVar7 = 0;
    if (param_1 != 0) {
      do {
        FUN_0045ba00(&uStack_4,4);
        FUN_004534d0(&uStack_8,4);
        FUN_0046e900(uStack_4,uStack_8);
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_1);
    }
    cVar2 = FUN_0045a170();
    if (cVar2 != '\0') {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      uVar7 = *(uint *)(DAT_00b33b00 + 0x14);
      if (puVar1 == (undefined4 *)0x0) {
        uVar5 = local_10 & 0xffff;
        if (uVar5 + iVar6 < uVar7) {
          FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                       ,(uVar7 - uVar5) - iVar6,"..\\TES Shared\\TESReactionForm.cpp",0x52b,
                       *(undefined1 *)(DAT_00b33b00 + 0x7c));
          return;
        }
        if (uVar7 < uVar5 + iVar6) {
          FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                       ,(uVar5 - uVar7) + iVar6,"..\\TES Shared\\TESReactionForm.cpp",0x52b,
                       *(undefined1 *)(DAT_00b33b00 + 0x7c));
        }
      }
      else {
        piVar3 = (int *)FUN_0046b250(*puVar1);
        uVar5 = (local_10 & 0xffff) + iVar6;
        if (uVar5 < uVar7) {
          uVar4 = (**(code **)(*piVar3 + 0xd4))
                            (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
          FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                       ,(uVar7 - (local_10 & 0xffff)) - iVar6,"..\\TES Shared\\TESReactionForm.cpp",
                       0x52b,*puVar1,uVar4);
          return;
        }
        if (uVar7 < uVar5) {
          uVar4 = (**(code **)(*piVar3 + 0xd4))
                            (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
          FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                       ,((local_10 & 0xffff) - uVar7) + iVar6,"..\\TES Shared\\TESReactionForm.cpp",
                       0x52b,*puVar1,uVar4);
          return;
        }
      }
    }
  }
  return;
}



void FUN_0046eed0(byte param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  if ((param_1 & 8) != 0) {
    piVar1 = (int *)(in_ECX + 4);
joined_r0x0046eedd:
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        iVar4 = FUN_0046b250(*piVar2);
        *piVar2 = iVar4;
        if (iVar4 == 0) {
          piVar3 = (int *)piVar1[1];
          if (piVar3 == (int *)0x0) {
            *piVar1 = 0;
            FUN_00401f20(piVar2);
          }
          else {
            piVar1[1] = piVar3[1];
            *piVar1 = *piVar3;
            FUN_00401f20(piVar3);
            FUN_00401f20(piVar2);
          }
          goto joined_r0x0046eedd;
        }
      }
      piVar1 = (int *)piVar1[1];
      goto joined_r0x0046eedd;
    }
  }
  return;
}



void FUN_0046ef60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3c490;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}



void FUN_0046ef80(void)

{
  int in_ECX;
  undefined4 local_4;
  
  if (*(int *)(in_ECX + 4) != 0) {
    local_4 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc);
    FUN_0046ae40(0x49524353,&local_4,4);
  }
  return;
}



void FUN_0046f020(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int local_4;
  
  if (*(char *)(in_ECX + 8) == '\0') {
    local_4 = *(int *)(in_ECX + 4);
    if (local_4 != 0) {
      uVar1 = FUN_0046b680(0xffffffff);
      FUN_0046bb20(&local_4,uVar1);
      uVar1 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03358,0);
      iVar2 = FUN_009832e6(uVar1);
      *(int *)(in_ECX + 4) = iVar2;
      if (iVar2 == 0) {
        if (param_1 != (int *)0x0) {
          iVar2 = FUN_00404e50();
          if (iVar2 == 0) {
            FUN_004a7a60("Unable to find script (%08X) on owner object (%08X).",local_4,param_1[3]);
            *(undefined1 *)(in_ECX + 8) = 1;
            return;
          }
          uVar1 = (**(code **)(*param_1 + 0xd4))();
          FUN_004a7a60("Unable to find script (%08X) on owner object \"%s\".",local_4,uVar1);
          *(undefined1 *)(in_ECX + 8) = 1;
          return;
        }
        FUN_004a7a60("Unable to find script (%08X) on unknown owner.",local_4);
      }
    }
    *(undefined1 *)(in_ECX + 8) = 1;
  }
  return;
}



void FUN_0046f100(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  undefined1 *puVar5;
  
  if (*(ushort *)(in_ECX + 8) == 0xffff) {
    pcVar3 = *(char **)(in_ECX + 4);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 8);
  }
  if (uVar4 != 0) {
    if (*(ushort *)(in_ECX + 8) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 4);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 8);
    }
    puVar5 = *(undefined1 **)(in_ECX + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_00a2f7ec;
    }
    FUN_0046ae40(0x4d414e46,puVar5,uVar4 + 1);
  }
  return;
}



void FUN_0046f2b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3c540;
  return;
}



void FUN_0046f2c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3c540;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_0046f2e0(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  if (piVar1 != (int *)0x0) {
    while (*piVar1 != 0) {
      piVar2 = *(int **)(in_ECX + 8);
      if (piVar2 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        *(int *)(in_ECX + 8) = piVar2[1];
        *piVar1 = *piVar2;
        FUN_00401f20(piVar2);
      }
    }
  }
  piVar1 = (int *)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    while (*piVar1 != 0) {
      piVar2 = *(int **)(in_ECX + 0x10);
      if (piVar2 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        *(int *)(in_ECX + 0x10) = piVar2[1];
        *piVar1 = *piVar2;
        FUN_00401f20(piVar2);
      }
    }
  }
  return;
}



undefined4 FUN_0046f350(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int unaff_FS_OFFSET;
  
  if (param_1 != 0) {
    piVar1 = (int *)(in_ECX + 4);
    while( true ) {
      if (piVar1 == (int *)0x0) {
        FUN_00446cb0(param_1);
        iVar2 = FUN_005e02e0(0);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar2 + 0x54;
        }
        if ((in_ECX == iVar2) &&
           (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x184) == '\0'))
        {
          FUN_0065f6a0(param_1);
        }
        return 1;
      }
      if (*piVar1 == param_1) break;
      piVar1 = (int *)piVar1[1];
    }
  }
  return 0;
}



undefined4 FUN_0046f3d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    iVar2 = FUN_005e02e0(0);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + 0x54;
    }
    if (in_ECX != iVar2) {
      piVar1 = (int *)(in_ECX + 0xc);
      while( true ) {
        if (piVar1 == (int *)0x0) {
          FUN_00446cb0(param_1);
          return 1;
        }
        if (*piVar1 == param_1) break;
        piVar1 = (int *)piVar1[1];
      }
    }
  }
  return 0;
}



undefined4 FUN_0046f420(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_FS_OFFSET;
  
  if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x184) != '\0') {
    FUN_0046f350(param_1);
    return 1;
  }
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06318,0);
  if (iVar1 != 0) {
    uVar3 = FUN_0046f350(iVar1);
    return uVar3;
  }
  if (iVar2 != 0) {
    uVar3 = FUN_0046f3d0(iVar2);
    return uVar3;
  }
  return 0;
}



void FUN_0046f4b0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 4); (piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0));
      piVar1 = (int *)piVar1[1]) {
    if ((*(uint *)(iVar2 + 8) >> 5 & 1) == 0) {
      FUN_0046ba80(0x4f4c5053,*(undefined4 *)(iVar2 + 0xc));
    }
  }
  for (piVar1 = (int *)(in_ECX + 0xc); (piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0));
      piVar1 = (int *)piVar1[1]) {
    if ((*(uint *)(iVar2 + 8) >> 5 & 1) == 0) {
      FUN_0046ba80(0x4f4c5053,*(undefined4 *)(iVar2 + 0xc));
    }
  }
  return;
}



void FUN_0046f520(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b031ec,&PTR_PTR_00b05c5c,0);
  if (iVar2 != 0) {
    FUN_0046f2e0();
    for (piVar4 = (int *)(iVar2 + 4); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      iVar1 = *piVar4;
      if (iVar1 != 0) {
        if (*(int *)(in_ECX + 4) != 0) {
          puVar3 = (undefined4 *)FUN_00401f00(8);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            *puVar3 = *(undefined4 *)(in_ECX + 4);
            puVar3[1] = 0;
          }
          puVar3[1] = *(undefined4 *)(in_ECX + 8);
          *(undefined4 **)(in_ECX + 8) = puVar3;
        }
        *(int *)(in_ECX + 4) = iVar1;
      }
    }
    for (piVar4 = (int *)(iVar2 + 0xc); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        if (*(int *)(in_ECX + 0xc) != 0) {
          puVar3 = (undefined4 *)FUN_00401f00(8);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            *puVar3 = *(undefined4 *)(in_ECX + 0xc);
            puVar3[1] = 0;
          }
          puVar3[1] = *(undefined4 *)(in_ECX + 0x10);
          *(undefined4 **)(in_ECX + 0x10) = puVar3;
        }
        *(int *)(in_ECX + 0xc) = iVar2;
      }
    }
  }
  return;
}



undefined4 FUN_0046f5f0(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



short FUN_0046f620(byte param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  int in_ECX;
  short sVar7;
  
  sVar7 = 0;
  if ((param_1 & 0x20) == 0) {
    return 0;
  }
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar7 = 6;
  }
  sVar5 = 0;
  for (piVar3 = (int *)(in_ECX + 4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if (*piVar3 != 0) {
      sVar5 = sVar5 + 1;
    }
  }
  sVar6 = 0;
  for (piVar3 = (int *)(in_ECX + 0xc); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if (*piVar3 != 0) {
      sVar6 = sVar6 + 1;
    }
  }
  sVar7 = sVar7 + 2 + sVar5 * 4 + sVar6 * 4;
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar7,0x4ef,
                   "..\\TES Shared\\TESSpellList.cpp");
      return sVar7;
    }
    piVar3 = (int *)FUN_0046b250(*puVar1);
    uVar4 = (**(code **)(*piVar3 + 0xd4))
                      (*(undefined4 *)((int)puVar1 + 5),0x4ef,"..\\TES Shared\\TESSpellList.cpp");
    FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                 ,sVar7,*puVar1,uVar4);
  }
  return sVar7;
}



void FUN_0046f710(uint param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_1 & 0x20) != 0) {
    local_4 = 0;
    iVar1 = *(int *)(DAT_00b33b00 + 0x14);
    local_c = (short *)0x0;
    cVar6 = FUN_0045a170();
    if (cVar6 != '\0') {
      local_8 = 0x4b4f4c42;
      FUN_0045b9a0(&local_8,4);
      local_c = *(short **)(DAT_00b33b00 + 0x14);
      FUN_0045b9a0(&local_4,2);
    }
    param_1 = 0;
    puVar2 = *(undefined2 **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&param_1,2);
    for (piVar7 = (int *)(in_ECX + 4); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
      if (*piVar7 != 0) {
        local_8 = *(undefined4 *)(*piVar7 + 0xc);
        FUN_0045f7a0(&local_8,4);
        param_1 = param_1 + 1;
      }
    }
    for (piVar7 = (int *)(in_ECX + 0xc); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
      if (*piVar7 != 0) {
        local_8 = *(undefined4 *)(*piVar7 + 0xc);
        FUN_0045f7a0(&local_8,4);
        param_1 = param_1 + 1;
      }
    }
    *puVar2 = (undefined2)param_1;
    if (DAT_00b05bac != '\0') {
      puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
      iVar4 = *(int *)(DAT_00b33b00 + 0x14);
      if (puVar3 == (undefined4 *)0x0) {
        FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar4 - iVar1,0x523,
                     "..\\TES Shared\\TESSpellList.cpp");
      }
      else {
        piVar7 = (int *)FUN_0046b250(*puVar3);
        uVar8 = (**(code **)(*piVar7 + 0xd4))
                          (*(undefined4 *)((int)puVar3 + 5),0x523,"..\\TES Shared\\TESSpellList.cpp"
                          );
        FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                     ,iVar4 - iVar1,*puVar3,uVar8);
      }
    }
    cVar6 = FUN_0045a170();
    if (cVar6 != '\0') {
      uVar5 = *(uint *)(DAT_00b33b00 + 0x14);
      if ((int)local_c + 0xffffU < uVar5) {
        FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                     "..\\TES Shared\\TESSpellList.cpp",0x523);
      }
      *local_c = (short)uVar5 - (short)local_c;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046f8e0(ushort param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int in_ECX;
  int iVar10;
  uint local_10;
  undefined4 uStack_c;
  int iStack_8;
  int local_4;
  
  if ((param_1 & 0x20) != 0) {
    iVar10 = 0;
    local_10 = 0;
    cVar3 = FUN_0045a170();
    if (cVar3 != '\0') {
      FUN_004534d0(&local_4,4);
      if (local_4 != 0x4b4f4c42) {
        puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
        if (puVar1 == (undefined4 *)0x0) {
          FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                       ,"..\\TES Shared\\TESSpellList.cpp",0x52f,
                       *(undefined1 *)(DAT_00b33b00 + 0x7c));
        }
        else {
          piVar4 = (int *)FUN_0046b250(*puVar1);
          uVar5 = (**(code **)(*piVar4 + 0xd4))
                            (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
          FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                       ,"..\\TES Shared\\TESSpellList.cpp",0x52f,*puVar1,uVar5);
        }
      }
      iVar10 = *(int *)(DAT_00b33b00 + 0x14);
      FUN_004534d0(&local_10,2);
    }
    piVar4 = (int *)(in_ECX + 4);
    FUN_004526e0();
    FUN_004526e0();
    FUN_004534d0(&param_1,2);
    iStack_8 = 0;
    if (param_1 != 0) {
      do {
        FUN_0045ba00(&uStack_c,4);
        uVar5 = FUN_0046b250(uStack_c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
        iVar6 = FUN_009832e6(uVar5);
        uVar5 = FUN_0046b250(uStack_c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06318,0);
        iVar7 = FUN_009832e6(uVar5);
        if (iVar6 == 0) {
          if (iVar7 == 0) {
            FUN_004a7a60("Could not find spell %08X",uStack_c);
          }
          else {
            piVar8 = (int *)(in_ECX + 0xc);
            if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x47) {
              for (; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1]) {
                if (*piVar8 == iVar7) goto LAB_0046fab7;
              }
            }
            FUN_00446cb0(iVar7);
          }
        }
        else {
          if (*piVar4 != 0) {
            piVar8 = (int *)FUN_00401f00(8);
            if (piVar8 != (int *)0x0) {
              *piVar8 = *piVar4;
              piVar8[1] = 0;
              piVar8[1] = *(int *)(in_ECX + 8);
              *(int **)(in_ECX + 8) = piVar8;
              *piVar4 = iVar6;
              goto LAB_0046fab7;
            }
            _DAT_00000004 = *(undefined4 *)(in_ECX + 8);
            *(undefined4 *)(in_ECX + 8) = 0;
          }
          *piVar4 = iVar6;
        }
LAB_0046fab7:
        iStack_8 = iStack_8 + 1;
      } while (iStack_8 < (int)(uint)param_1);
    }
    cVar3 = FUN_0045a170();
    if (cVar3 != '\0') {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      uVar2 = *(uint *)(DAT_00b33b00 + 0x14);
      if (puVar1 == (undefined4 *)0x0) {
        uVar9 = local_10 & 0xffff;
        if (uVar9 + iVar10 < uVar2) {
          FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                       ,(uVar2 - uVar9) - iVar10,"..\\TES Shared\\TESSpellList.cpp",0x553,
                       *(undefined1 *)(DAT_00b33b00 + 0x7c));
          return;
        }
        if (uVar2 < uVar9 + iVar10) {
          FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                       ,(uVar9 - uVar2) + iVar10,"..\\TES Shared\\TESSpellList.cpp",0x553,
                       *(undefined1 *)(DAT_00b33b00 + 0x7c));
        }
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar1);
        uVar9 = (local_10 & 0xffff) + iVar10;
        if (uVar9 < uVar2) {
          uVar5 = (**(code **)(*piVar4 + 0xd4))
                            (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
          FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                       ,(uVar2 - (local_10 & 0xffff)) - iVar10,"..\\TES Shared\\TESSpellList.cpp",
                       0x553,*puVar1,uVar5);
          return;
        }
        if (uVar2 < uVar9) {
          uVar5 = (**(code **)(*piVar4 + 0xd4))
                            (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
          FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                       ,((local_10 & 0xffff) - uVar2) + iVar10,"..\\TES Shared\\TESSpellList.cpp",
                       0x553,*puVar1,uVar5);
          return;
        }
      }
    }
  }
  return;
}



void FUN_0046fc10(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  int *piVar10;
  int local_10;
  int *local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = (int *)0x0;
  local_4 = in_ECX;
  piVar4 = (int *)(in_ECX + 4);
  if (param_1 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_0046b680(0xffffffff);
  }
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          piVar10 = piVar4;
          if ((piVar10 == (int *)0x0) || (local_10 = *piVar10, local_10 == 0)) {
            return;
          }
          FUN_0046bb20(&local_10,local_8);
          iVar5 = FUN_0046b250(local_10);
          piVar4 = local_c;
          if (iVar5 == 0) break;
          iVar8 = FUN_009832e6(iVar5,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
          iVar5 = FUN_009832e6(iVar5,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06318,0);
          piVar4 = local_c;
          if (iVar8 == 0) {
            piVar3 = (int *)piVar10[1];
            if (piVar3 == (int *)0x0) {
              if (local_c == (int *)0x0) {
                *piVar10 = 0;
              }
              else {
                FUN_0065c620(local_10);
                piVar10 = (int *)piVar4[1];
              }
            }
            else {
              piVar10[1] = piVar3[1];
              *piVar10 = *piVar3;
              FUN_00401f20(piVar3);
            }
            piVar4 = piVar10;
            if (iVar5 != 0) {
              FUN_0046f3d0(iVar5);
            }
          }
          else {
            *piVar10 = iVar8;
            iVar5 = FUN_009832e6(local_4,0,&PTR_PTR_00b05c5c,&PTR_PTR_00b03de4,0);
            if ((iVar5 != 0) && (iVar9 = FUN_005e02e0(0), iVar5 == iVar9)) {
              FUN_0065f6a0(iVar8);
            }
            piVar4 = (int *)piVar10[1];
            local_c = piVar10;
          }
        }
        piVar3 = (int *)piVar10[1];
        if (piVar3 == (int *)0x0) {
          if (local_c == (int *)0x0) {
            *piVar10 = 0;
          }
          else {
            FUN_0065c620(local_10);
            piVar10 = (int *)piVar4[1];
          }
        }
        else {
          piVar10[1] = piVar3[1];
          *piVar10 = *piVar3;
          FUN_00401f20(piVar3);
        }
        piVar4 = piVar10;
        if (param_1 != (int *)0x0) break;
        FUN_004a7a60("Unable to find spell (%08X) for unknown owner.",local_10);
      }
      if (DAT_00b333f4 == '\0') break;
LAB_0046fd23:
      FUN_004a7a60("Unable to find spell (%08X) for owner object (%08X).",local_10,param_1[3]);
    }
    DAT_00b333f4 = 1;
    pcVar6 = (char *)(**(code **)(*param_1 + 0xd4))();
    DAT_00b333f4 = '\0';
    if (pcVar6 == (char *)0x0) goto LAB_0046fd23;
    pcVar1 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 == pcVar1) goto LAB_0046fd23;
    uVar7 = (**(code **)(*param_1 + 0xd4))();
    FUN_004a7a60("Unable to find spell (%08X) for owner object \"%s\".",local_10,uVar7);
  } while( true );
}



void FUN_0046fef0(void)

{
  FUN_0065c620();
  return;
}



bool FUN_0046ff00(int param_1)

{
  return param_1 == 0x4e4f4349;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0046ff20(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_20c;
  if (param_2 != (char *)0x0) {
    iVar2 = -(int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(local_20c + iVar2)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = _strrchr(local_20c,0x2e);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      _sprintf(local_108,"%s_n.dds",local_20c);
      FUN_004028d0(local_108,0);
      return *param_1;
    }
  }
  return 0;
}



void FUN_0046ffd0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aeb9b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3c650;
  in_ECX[1] = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  FUN_00401f20(0,uVar1);
  in_ECX[1] = 0;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}


