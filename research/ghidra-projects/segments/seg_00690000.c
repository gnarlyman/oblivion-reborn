
undefined4 FUN_00690310(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_009832e6(*(undefined4 *)(param_2 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0,
                            uVar2);
  }
  if ((param_1 != 0) && (local_10 != 0)) {
    for (piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x68) + 8))();
        (piVar3 != (int *)0x0 && ((piVar3[1] != 0 || (*piVar3 != 0)))); piVar3 = (int *)piVar3[1]) {
      iVar4 = FUN_009832e6(*piVar3,0,&PTR_PTR_00b14914,&PTR_PTR_00b15ac4,0,uVar2);
      if ((iVar4 != 0) &&
         ((iVar4 != param_3 &&
          (iVar5 = FUN_009832e6(*(undefined4 *)(iVar4 + 0x38),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03778,
                                0,uVar2), iVar5 != 0)))) {
        iVar5 = 0;
        piVar8 = (int *)(iVar4 + 0x40);
        do {
          cVar1 = FUN_00468ff0(iVar5,0);
          if (((cVar1 != '\0') && (cVar1 = FUN_00468ff0(iVar5,0), cVar1 != '\0')) && (*piVar8 == 0))
          {
            iVar6 = FUN_00401f00(0xc);
            uStack_4 = 0;
            if (iVar6 != 0) {
              uVar7 = FUN_004844a0(param_2);
              *(undefined4 *)(iVar4 + (iVar5 + 0x10) * 4) = uVar7;
              *unaff_FS_OFFSET = local_c;
              return 1;
            }
            *(undefined4 *)(iVar4 + (iVar5 + 0x10) * 4) = 0;
            *unaff_FS_OFFSET = local_c;
            return 1;
          }
          iVar5 = iVar5 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar5 < 0x10);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006904b0(void)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *in_ECX;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  int *unaff_FS_OFFSET;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c56a8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a75344;
  uVar11 = 0;
  local_4 = 0;
  if ((in_ECX[0xf] != 0) && (*(char *)((int)in_ECX + 0x86) != '\0')) {
    iVar5 = FUN_009832e6(*(undefined4 *)(in_ECX[0xf] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0,
                         uVar4);
    if (iVar5 != 0) {
      if (*(ushort *)(iVar5 + 0x38) == 0xffff) {
        pcVar9 = *(char **)(iVar5 + 0x34);
        pcVar1 = pcVar9 + 1;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        uVar10 = (int)pcVar9 - (int)pcVar1;
      }
      else {
        uVar10 = (uint)*(ushort *)(iVar5 + 0x38);
      }
      if (uVar10 != 0) {
        uVar13 = 1;
        uVar12 = 0;
        uVar6 = (**(code **)(*(int *)(iVar5 + 0x30) + 0x14))(0,1);
        FUN_004384e0(uVar6,uVar12,uVar13);
      }
    }
  }
  if (*(char *)((int)in_ECX + 0x87) != '\0') {
    if ((int *)in_ECX[8] != (int *)0x0) {
      iVar5 = (**(code **)(*(int *)in_ECX[8] + 4))();
      if (iVar5 != 0) {
        piVar7 = (int *)(**(code **)(*(int *)in_ECX[8] + 4))();
        uVar6 = (**(code **)(*piVar7 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
        iVar5 = FUN_009832e6(uVar6);
        if (iVar5 != 0) {
          uVar11 = FUN_00519d20();
        }
      }
    }
    piVar7 = in_ECX + 0x10;
    iVar5 = 0x10;
    do {
      if ((*piVar7 != 0) && (iVar8 = *(int *)(*piVar7 + 8), iVar8 != 0)) {
        iVar8 = FUN_009832e6(iVar8,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0,uVar4);
        if (iVar8 != 0) {
          uVar13 = 1;
          uVar12 = 0;
          *(undefined1 *)((int)in_ECX + 0x87) = 1;
          uVar6 = FUN_00469330(uVar11);
          FUN_004384e0(uVar6,uVar12,uVar13);
        }
      }
      piVar7 = piVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  piVar7 = (int *)in_ECX[0xf];
  if (piVar7 != (int *)0x0) {
    if (*piVar7 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)*piVar7;
    }
    if (iVar5 != 0) {
      FUN_0041f670();
    }
    FUN_004845a0();
    iVar5 = in_ECX[0xf];
    if (iVar5 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar5);
    }
  }
  piVar7 = in_ECX + 0x10;
  iVar5 = 0x10;
  do {
    piVar3 = (int *)*piVar7;
    if (piVar3 != (int *)0x0) {
      if (*piVar3 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)*piVar3;
      }
      if (iVar8 != 0) {
        FUN_0041f670();
      }
      FUN_004845a0();
      iVar8 = *piVar7;
      if (iVar8 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar8);
      }
    }
    piVar7 = piVar7 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (((*(char *)((int)in_ECX + 0x85) != '\0') && (in_ECX[2] != 0)) && (in_ECX[3] != 0)) {
    iVar5 = FUN_00419b30(0);
    iVar8 = FUN_004152c0(*(undefined4 *)(in_ECX[3] + 0x10),0);
    if (*(ushort *)(iVar5 + 0x20) == 0xffff) {
      pcVar9 = *(char **)(iVar5 + 0x1c);
      pcVar1 = pcVar9 + 1;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar9 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(iVar5 + 0x20);
    }
    if ((uVar4 != 0) && (in_ECX[3] == iVar8)) {
      uVar12 = 1;
      uVar6 = 0;
      uVar11 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x14))(0,1);
      FUN_004384e0(uVar11,uVar6,uVar12);
    }
    *(undefined1 *)((int)in_ECX + 0x85) = 0;
  }
  local_4 = 0xffffffff;
  FUN_0068d970();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_00690730(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  LONG LVar6;
  int *piVar7;
  int in_ECX;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 *local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c56f1;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = in_ECX;
  local_10 = (undefined4 *)FUN_00401f00(0x8c,uVar4);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)
               FUN_0068fc60(*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 8),
                            *(undefined4 *)(in_ECX + 0xc));
  }
  puVar9 = local_18;
  local_4 = 0xffffffff;
  FUN_0068f1f0(local_18);
  if (*(int *)(in_ECX + 0x3c) != 0) {
    local_10 = (undefined4 *)FUN_00401f00(0xc,uVar4);
    local_4 = 1;
    if (local_10 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004844a0(*(undefined4 *)(in_ECX + 0x3c));
    }
    local_4 = 0xffffffff;
    puVar9[0xf] = uVar5;
  }
  piVar7 = (int *)(in_ECX + 0x40);
  iVar10 = 0x10;
  do {
    if (*piVar7 != 0) {
      local_10 = (undefined4 *)FUN_00401f00(0xc);
      local_4 = 2;
      if (local_10 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004844a0(*piVar7);
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(((int)puVar9 - in_ECX) + (int)piVar7) = uVar5;
    }
    iVar11 = local_14;
    piVar7 = piVar7 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  puVar9 = local_18;
  if (((*(int *)(local_14 + 0x3c) != 0) && (*(char *)(local_14 + 0x86) != '\0')) &&
     (iVar10 = FUN_009832e6(*(undefined4 *)(*(int *)(local_14 + 0x3c) + 8),0,&PTR_PTR_00b03248,
                            &PTR_PTR_00b036fc,0), puVar9 = local_18, iVar10 != 0)) {
    if (*(ushort *)(iVar10 + 0x38) == 0xffff) {
      pcVar8 = *(char **)(iVar10 + 0x34);
      pcVar1 = pcVar8 + 1;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar8 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(iVar10 + 0x38);
    }
    if (uVar4 != 0) {
      uVar17 = 1;
      uVar16 = 1;
      uVar15 = 0;
      uVar14 = 0;
      *(undefined1 *)((int)local_18 + 0x86) = 1;
      uVar13 = 0;
      uVar12 = 0;
      uVar5 = (**(code **)(*(int *)(iVar10 + 0x30) + 0x14))(0,0,0,0,1,1);
      FUN_0043b420(&local_18,uVar5,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17);
      puVar3 = local_18;
      if (((local_18 != (undefined4 *)0x0) &&
          (LVar6 = InterlockedDecrement(local_18 + 2), LVar6 == 0)) && (puVar3 != (undefined4 *)0x0)
         ) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  if (*(char *)(iVar11 + 0x87) != '\0') {
    uVar5 = 0;
    iVar10 = (**(code **)(**(int **)(iVar11 + 0x20) + 4))();
    if (iVar10 != 0) {
      piVar7 = (int *)(**(code **)(**(int **)(iVar11 + 0x20) + 4))();
      uVar12 = (**(code **)(*piVar7 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
      iVar10 = FUN_009832e6(uVar12);
      if (iVar10 != 0) {
        uVar5 = FUN_00519d20();
      }
    }
    piVar7 = (int *)(iVar11 + 0x40);
    local_18 = (undefined4 *)0x10;
    do {
      if (((*piVar7 != 0) && (iVar10 = *(int *)(*piVar7 + 8), iVar10 != 0)) &&
         (iVar10 = FUN_009832e6(iVar10,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0), iVar10 != 0)) {
        uVar18 = 1;
        uVar17 = 1;
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        *(undefined1 *)((int)puVar9 + 0x87) = 1;
        uVar12 = FUN_00469330(uVar5);
        FUN_0043b420(&local_10,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18);
        puVar3 = local_10;
        if (((local_10 != (undefined4 *)0x0) &&
            (LVar6 = InterlockedDecrement(local_10 + 2), LVar6 == 0)) &&
           (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
      }
      piVar7 = piVar7 + 1;
      local_18 = (undefined4 *)((int)local_18 + -1);
      iVar11 = local_14;
    } while (local_18 != (undefined4 *)0x0);
  }
  *(undefined1 *)(puVar9 + 0x21) = *(undefined1 *)(iVar11 + 0x84);
  *unaff_FS_OFFSET = local_c;
  return puVar9;
}



void FUN_00690a00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_006a1d70();
  }
  if ((*(int *)(in_ECX + 0x38) == 0) || (iVar1 == 0)) {
    FUN_0068ea10(0);
    return;
  }
  if (*(int *)(in_ECX + 8) == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0xc) == 0) {
    return;
  }
  iVar1 = FUN_00419b30(0);
  iVar2 = FUN_004152c0(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x10),0);
  iVar3 = FUN_00449190();
  if (iVar3 == 0) {
    return;
  }
  uVar9 = 1;
  uVar8 = 0;
  uVar7 = 0;
  uVar4 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x14))(0,0,1);
  iVar3 = FUN_00439eb0(uVar4,uVar7,uVar8,uVar9);
  iVar5 = (**(code **)(**(int **)(in_ECX + 8) + 0x18))();
  if (iVar5 == 4) {
    fVar6 = (float10)0;
  }
  else {
    if (iVar3 == 0) goto LAB_00690ab7;
    fVar6 = (float10)FUN_00480b00(iVar3,"SpecialIdle_HitEffect",&DAT_00a52608);
  }
  *(float *)(in_ECX + 0x80) = (float)fVar6;
LAB_00690ab7:
  if (*(int *)(in_ECX + 0xc) != iVar2) {
    uVar8 = 1;
    uVar7 = 0;
    uVar4 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x14))(0,1);
    FUN_004384e0(uVar4,uVar7,uVar8);
  }
  return;
}



void FUN_00690af0(void)

{
  char cVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int in_ECX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iStack_28;
  int local_24;
  int local_20;
  undefined4 *puStack_1c;
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c573c;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_006a1d70(uVar4);
  }
  iVar6 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x38),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036fc,0);
  iVar7 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x38),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03778,0);
  if (iVar6 != 0) {
    iVar7 = (**(code **)(*(int *)piVar5[0x16] + 0xec))(1);
    local_24 = iVar6;
    if (iVar7 != 0) {
      puVar8 = (undefined4 *)(**(code **)(*(int *)piVar5[0x16] + 0xec))(1);
      local_24 = *(int *)*puVar8;
      uVar4 = FUN_0041e060();
      if ((uVar4 < 2) ||
         ((iVar7 = FUN_0041e060(), iVar7 == 2 && (sVar3 = FUN_0041e860(), 1 < sVar3)))) {
        local_24 = 0;
      }
      iVar7 = (**(code **)(*(int *)piVar5[0x16] + 0xec))(1);
      iVar7 = *(int *)(iVar7 + 8);
      if (((iVar7 != 0) && (*(char *)(in_ECX + 0x86) == '\0')) &&
         (iVar9 = FUN_009832e6(iVar7,0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0), iVar9 != 0)) {
        iVar10 = FUN_00449190();
        if (iVar10 != 0) {
          uVar15 = 1;
          uVar14 = 0;
          uVar13 = 0;
          uVar11 = (**(code **)(*(int *)(iVar9 + 0x30) + 0x14))(0,0,1);
          FUN_00439eb0(uVar11,uVar13,uVar14,uVar15);
          *(undefined1 *)(unaff_EBP + 0x86) = 1;
        }
      }
      piVar12 = (int *)piVar5[0x16];
      puVar8 = (undefined4 *)(**(code **)(*piVar12 + 0xec))(0);
      uVar11 = *(undefined4 *)*puVar8;
      iVar9 = (**(code **)(*piVar12 + 0xec))(0);
      FUN_005f2e70(*(undefined4 *)(iVar9 + 8),1,uVar11,0,0,0);
      iVar9 = FUN_00401f00(0xc);
      puStack_8 = (undefined1 *)0x0;
      if (iVar9 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_00484420(iVar7,0);
      }
      puStack_8 = (undefined1 *)0xffffffff;
      *(undefined4 *)(iStack_28 + 0x3c) = uVar11;
      in_ECX = iStack_28;
      if (iVar6 != 0) {
        iVar7 = FUN_00401f00(0x14);
        puStack_8 = (undefined1 *)0x1;
        if (iVar7 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_00422ee0();
        }
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_00428a60(iVar6);
        FUN_00446cb0(uVar11);
      }
    }
    (**(code **)(*piVar5 + 0x114))(local_24,0,1);
    iVar6 = (**(code **)(*(int *)piVar5[0x16] + 0xec))(1);
    if ((iVar6 == 0) ||
       (iVar6 = (**(code **)(*(int *)piVar5[0x16] + 0xec))(1), *(int *)(iVar6 + 8) != local_24)) {
      FUN_005faea0(local_24,1,0,1,1);
    }
    if ((((int *)piVar5[0x16] == (int *)0x0) ||
        (iVar6 = (**(code **)(*(int *)piVar5[0x16] + 0xec))(1), iVar6 == 0)) ||
       (piVar12 = (int *)(**(code **)(*(int *)piVar5[0x16] + 0xec))(1), *piVar12 == 0)) {
      *(undefined1 *)(in_ECX + 0x88) = 1;
    }
    else {
      (**(code **)(*(int *)piVar5[0x16] + 0xec))(1);
      FUN_0041f370(1);
      FUN_0041f2f0();
    }
    (**(code **)(*(int *)piVar5[0x16] + 0x300))(1);
    (**(code **)(*(int *)piVar5[0x16] + 0x3d4))(local_24);
    *unaff_FS_OFFSET = iStack_28;
    return;
  }
  if (iVar7 == 0) {
    FUN_0068ea10(0);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  local_18 = 0;
  uVar11 = (**(code **)(*piVar5 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4);
  iVar6 = FUN_009832e6(uVar11);
  if (iVar6 != 0) {
    local_18 = FUN_00519d20();
  }
  cVar1 = *(char *)(in_ECX + 0x87);
  puStack_1c = (undefined4 *)(in_ECX + 0x40);
  local_20 = 0;
  do {
    cVar2 = FUN_00468ff0(local_20,0);
    if (cVar2 != '\0') {
      iVar6 = FUN_0041e6f0();
      if ((iVar6 != 0) &&
         (puVar8 = (undefined4 *)FUN_00486790(local_20,0), puVar8 != (undefined4 *)0x0)) {
        if ((puVar8[2] != 0) &&
           ((cVar1 == '\0' &&
            (iVar6 = FUN_009832e6(puVar8[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0), iVar6 != 0))))
        {
          uVar15 = 1;
          uVar14 = 0;
          uVar13 = 0;
          uVar11 = FUN_00469330(local_18);
          FUN_00439eb0(uVar11,uVar13,uVar14,uVar15);
          *(undefined1 *)(in_ECX + 0x87) = 1;
        }
        iVar6 = *(int *)*puVar8;
        if (iVar6 != 0) {
          FUN_004fbf90(piVar5,iVar6,8);
          FUN_004fbf90(puVar8[2],piVar5 + 0x11,8);
          FUN_0041f6a0(0);
          if (*(int *)(iVar6 + 4) == 0) {
            FUN_0065c620(iVar6);
          }
        }
        iVar6 = FUN_00401f00(0xc);
        uStack_4 = 2;
        if (iVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_004844a0(puVar8);
        }
        *puStack_1c = uVar11;
        uStack_4 = 0xffffffff;
        FUN_00484470();
        FUN_00401f20(puVar8);
      }
    }
    puStack_1c = puStack_1c + 1;
    local_20 = local_20 + 1;
  } while (local_20 < 0x10);
  iVar6 = FUN_00401f00(0x14);
  uStack_4 = 3;
  if (iVar6 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_00422ee0();
  }
  uStack_4 = 0xffffffff;
  FUN_0041f2f0();
  (**(code **)(*piVar5 + 0x114))(iVar7,uVar11,1);
  FUN_005faea0(iVar7,1,0,1,0);
  uVar11 = FUN_004d6d40();
  FUN_00485e00(piVar5,uVar11);
  iVar6 = FUN_00485fa0(iVar7,1);
  if (iVar6 == 0) {
    *(undefined1 *)(unaff_EBP + 0x88) = 1;
    *unaff_FS_OFFSET = local_18;
    return;
  }
  FUN_0041f370(1);
  *unaff_FS_OFFSET = local_18;
  return;
}



void FUN_00691030(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar9;
  undefined4 uVar10;
  char cStack_21;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c49bb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_006a1d70(uVar3);
  }
  if ((*(char *)(in_ECX + 0x84) != '\0') && (piVar4 != (int *)0x0)) {
    iVar5 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x38),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036fc,0);
    iVar6 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x38),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03778,0);
    if (iVar5 == 0) {
      if (iVar6 != 0) {
        local_14 = 0;
        uVar8 = (**(code **)(*piVar4 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
        iVar5 = FUN_009832e6(uVar8);
        if (iVar5 != 0) {
          local_14 = FUN_00519d20();
        }
        iVar5 = FUN_005e02e0(0);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar5 + 0x44;
        }
        FUN_00485e00(piVar4,iVar5);
        iVar5 = FUN_00485fa0(iVar6,0);
        if (iVar5 != 0) {
          FUN_0041f6d0();
        }
        FUN_005f2e70(iVar6,1,0,0,0,0);
        (**(code **)(*piVar4 + 0x100))(iVar6,0,1,0,0,0,0,0,1,0);
        piStack_20 = (int *)(in_ECX + 0x40);
        iStack_18 = 0;
        do {
          cVar2 = FUN_00468ff0(iStack_18,0);
          if ((cVar2 != '\0') && (piVar1 = (int *)*piStack_20, piVar1 != (int *)0x0)) {
            iStack_1c = 0;
            if ((int *)*piVar1 != (int *)0x0) {
              iStack_1c = *(int *)*piVar1;
            }
            cStack_21 = '\0';
            iVar5 = FUN_005e0f00(piVar1[2]);
            if (0 < iVar5) {
              FUN_005faea0(piVar1[2],1,iStack_1c,1,0);
              uVar8 = 0;
              iVar5 = iStack_18;
              FUN_0041e6f0(iStack_18,0);
              iVar5 = FUN_00486790(iVar5,uVar8);
              if ((iVar5 == 0) || (*(int *)(iVar5 + 8) != piVar1[2])) {
                cStack_21 = FUN_00690310(piVar4,piVar1);
              }
              if (iVar5 != 0) {
                FUN_00484470();
                FUN_00401f20(iVar5);
              }
            }
            if ((((*(char *)(in_ECX + 0x87) != '\0') && (piVar1[2] != 0)) && (cStack_21 == '\0')) &&
               (iVar5 = FUN_009832e6(piVar1[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0), iVar5 != 0)
               ) {
              uVar10 = 1;
              uVar9 = 0;
              uVar8 = FUN_00469330(local_14);
              FUN_004384e0(uVar8,uVar9,uVar10);
            }
            if (iStack_1c != 0) {
              FUN_0041f670();
            }
            FUN_004845a0();
            FUN_00484470();
            FUN_00401f20(piVar1);
            *piStack_20 = 0;
          }
          piStack_20 = piStack_20 + 1;
          iStack_18 = iStack_18 + 1;
        } while (iStack_18 < 0x10);
        *(undefined1 *)(in_ECX + 0x87) = 0;
      }
    }
    else {
      iVar6 = FUN_005e02e0(0);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + 0x44;
      }
      FUN_00485e00(piVar4,iVar6);
      iVar6 = FUN_00485fa0(iVar5,0);
      if (iVar6 != 0) {
        FUN_0041f6d0();
      }
      uVar3 = FUN_005e0ee0();
      if (uVar3 < 7) {
        FUN_005effd0(0xffffffff,0);
      }
      FUN_005f2e70(iVar5,1,0,0,0,0);
      (**(code **)(*piVar4 + 0x100))(iVar5,0,1,0,0,0,0,0,1,0);
      piVar1 = *(int **)(in_ECX + 0x3c);
      if (piVar1 != (int *)0x0) {
        if (*piVar1 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)*piVar1;
        }
        iVar6 = FUN_005e0f00(piVar1[2]);
        if (0 < iVar6) {
          FUN_005faea0(*(undefined4 *)(*(int *)(in_ECX + 0x3c) + 8),1,iVar5,1,0);
        }
        if (*(char *)(in_ECX + 0x86) != '\0') {
          iVar6 = FUN_009832e6(*(undefined4 *)(*(int *)(in_ECX + 0x3c) + 8),0,&PTR_PTR_00b03248,
                               &PTR_PTR_00b036fc,0);
          if (iVar6 != 0) {
            iVar7 = FUN_00449190();
            if (iVar7 != 0) {
              uVar10 = 1;
              uVar9 = 0;
              uVar8 = (**(code **)(*(int *)(iVar6 + 0x30) + 0x14))(0,1);
              FUN_004384e0(uVar8,uVar9,uVar10);
            }
          }
          *(undefined1 *)(in_ECX + 0x86) = 0;
        }
        if (iVar5 != 0) {
          FUN_0041f670();
        }
        FUN_004845a0();
        iVar5 = *(int *)(in_ECX + 0x3c);
        if (iVar5 != 0) {
          FUN_00484470();
          FUN_00401f20(iVar5);
        }
        *(undefined4 *)(in_ECX + 0x3c) = 0;
        (**(code **)(*(int *)piVar4[0x16] + 0x300))(1);
      }
    }
    iVar5 = (**(code **)(*piVar4 + 0x154))();
    if (((iVar5 != 0) && ((int *)piVar4[0x16] != (int *)0x0)) &&
       ((iVar5 = (**(code **)(*(int *)piVar4[0x16] + 8))(), iVar5 == 0 &&
        ((*(int *)(in_ECX + 8) != 0 && (*(int *)(in_ECX + 0xc) != 0)))))) {
      iVar5 = FUN_00419b30(0);
      iVar6 = FUN_004152c0(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x10),0);
      if (*(int *)(in_ECX + 0xc) == iVar6) {
        iVar6 = FUN_00449190();
        if (iVar6 != 0) {
          iVar6 = FUN_00401f00(0x38);
          uStack_4 = 0;
          if (iVar6 == 0) {
            piVar4 = (int *)0x0;
          }
          else {
            uVar9 = 0xbf800000;
            uVar8 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x14))(0xbf800000);
            piVar4 = (int *)FUN_0069e4f0(piVar4,uVar8,uVar9);
          }
          uStack_4 = 0xffffffff;
          cVar2 = (**(code **)(*piVar4 + 0x68))();
          if (cVar2 == '\0') {
            (**(code **)*piVar4)(1);
          }
          else {
            FUN_00678d30(piVar4);
          }
          if (*(char *)(in_ECX + 0x85) != '\0') {
            uVar10 = 1;
            uVar9 = 0;
            uVar8 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x14))(0,1);
            FUN_004384e0(uVar8,uVar9,uVar10);
            *(undefined1 *)(in_ECX + 0x85) = 0;
          }
        }
        iVar5 = FUN_0065a970("ITMBoundDisappear",0,0x102,1);
        if (iVar5 != 0) {
          FUN_006b73e0();
          FUN_00401f20(iVar5);
        }
      }
    }
    *(undefined4 *)(in_ECX + 0x20) = 0;
    *(undefined1 *)(in_ECX + 0x84) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00691570(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  LONG LVar8;
  int in_ECX;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_18;
  undefined4 *puStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ad1f6;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0068f280(param_1);
  uVar10 = 0;
  if (*(int *)(in_ECX + 0x20) == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)FUN_006a1d70(uVar5);
  }
  if (*(char *)(in_ECX + 0x84) != '\0') {
    if (*(int *)(in_ECX + 0x3c) != 0) {
      iVar6 = FUN_009832e6(*(undefined4 *)(*(int *)(in_ECX + 0x3c) + 8),0,&PTR_PTR_00b03248,
                           &PTR_PTR_00b036fc,0);
      if (iVar6 != 0) {
        if (*(ushort *)(iVar6 + 0x38) == 0xffff) {
          pcVar9 = *(char **)(iVar6 + 0x34);
          pcVar1 = pcVar9 + 1;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          uVar5 = (int)pcVar9 - (int)pcVar1;
        }
        else {
          uVar5 = (uint)*(ushort *)(iVar6 + 0x38);
        }
        if (uVar5 != 0) {
          uVar17 = 1;
          uVar16 = 1;
          uVar15 = 0;
          uVar14 = 0;
          *(undefined1 *)(in_ECX + 0x86) = 1;
          uVar13 = 0;
          uVar12 = 0;
          uVar7 = (**(code **)(*(int *)(iVar6 + 0x30) + 0x14))(0,0,0,0,1,1);
          FUN_0043b420(&local_18,uVar7,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17);
          FUN_004bddc0();
        }
      }
    }
    if (param_1 != (int *)0x0) {
      uVar7 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
      iVar6 = FUN_009832e6(uVar7);
      if (iVar6 != 0) {
        uVar10 = FUN_00519d20();
      }
    }
    piVar11 = (int *)(in_ECX + 0x40);
    local_18 = 0x10;
    do {
      if ((*piVar11 != 0) && (iVar6 = *(int *)(*piVar11 + 8), iVar6 != 0)) {
        iVar6 = FUN_009832e6(iVar6,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
        if (iVar6 != 0) {
          uVar17 = 1;
          uVar16 = 1;
          uVar15 = 0;
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          *(undefined1 *)(in_ECX + 0x87) = 1;
          uVar7 = FUN_00469330(uVar10);
          FUN_0043b420(&puStack_14,uVar7,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17);
          puVar4 = puStack_14;
          if (puStack_14 != (undefined4 *)0x0) {
            LVar8 = InterlockedDecrement(puStack_14 + 2);
            if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
              (**(code **)*puVar4)(1);
            }
          }
        }
      }
      piVar11 = piVar11 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_18 = 0;
  }
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_00485bc0();
    if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x61) {
      local_18 = FUN_00401f00(0xc);
      uStack_4 = 0;
      if (local_18 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_004844a0(*(undefined4 *)(in_ECX + 0x3c));
      }
      iVar6 = *(int *)(in_ECX + 0x3c);
      uStack_4 = 0xffffffff;
      if (iVar6 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar6);
      }
      *(undefined4 *)(in_ECX + 0x3c) = uVar10;
    }
    FUN_005f2e70(*(undefined4 *)(*(int *)(in_ECX + 0x3c) + 8),1,0,0,0,0);
  }
  piVar11 = (int *)(in_ECX + 0x40);
  local_18 = 0x10;
  do {
    if (*piVar11 != 0) {
      FUN_00485bc0();
      if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x61) {
        iStack_10 = FUN_00401f00(0xc);
        uStack_4 = 1;
        if (iStack_10 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_004844a0(*piVar11);
        }
        iVar3 = *piVar11;
        uStack_4 = 0xffffffff;
        if (iVar3 != 0) {
          FUN_00484470();
          FUN_00401f20(iVar3);
        }
        *piVar11 = iVar6;
      }
      FUN_005f2e70(*(undefined4 *)(*piVar11 + 8),1,0,0,0,0);
    }
    piVar11 = piVar11 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  if (*(char *)(in_ECX + 0x84) != '\0') {
    iVar6 = FUN_0041e6f0();
    uVar10 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x38),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
    if (iVar6 != 0) {
      iVar6 = FUN_004869c0(uVar10);
      if (iVar6 == 0) {
        (**(code **)(*param_1 + 0x114))(uVar10,0,1);
        FUN_005faea0(uVar10,1,0,1,0);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006918b0(byte param_1)

{
  FUN_006904b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00691a80(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006a82f0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a753a4;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 FUN_00691b10(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int in_ECX;
  
  if (param_1 != 0) {
    piVar3 = (int *)FUN_006a1d70();
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x198))(0);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*piVar3 + 0x1f8))();
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*piVar3 + 0x334))(1);
          if (cVar1 != '\0') {
            uVar2 = FUN_005e1fd0(*(undefined4 *)(in_ECX + 0x18));
            cVar1 = FUN_00549020(uVar2);
            if (cVar1 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



void FUN_00691b90(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  FUN_006a86f0();
  if (*(int *)(in_ECX + 0x20) != 0) {
    piVar1 = (int *)FUN_006a1d70();
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x330))();
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0x330))();
        FUN_006193d0();
        return;
      }
    }
  }
  return;
}



void FUN_00691c60(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  FUN_006a88d0();
  if (*(int *)(in_ECX + 0x20) != 0) {
    piVar1 = (int *)FUN_006a1d70();
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x330))();
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0x330))();
        FUN_006150c0();
        return;
      }
    }
  }
  return;
}



undefined4 * FUN_00691ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006a82f0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a753a4;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 * FUN_00691d10(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006a82f0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a753f4;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



void FUN_00691da0(void)

{
  int *piVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_006a1d70();
  }
  FUN_006a86f0();
  if (piVar1 == (int *)0x0) {
    return;
  }
  if ((((DAT_00b42f3e != '\0') && (DAT_00b42e84 != '\0')) && (1 < DAT_00b42f48)) &&
     (fVar2 = (float10)(**(code **)(*piVar1 + 0x288))(0x2f), fVar2 == (float10)0.0)) {
    uVar5 = 0x3f800000;
    (**(code **)(*piVar1 + 0x324))(0x3f800000);
    uVar4 = 0x2e;
    fVar2 = (float10)(**(code **)(*piVar1 + 0x288))(0x2e);
    fVar6 = (float)(fVar2 / (float10)100.0);
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    fVar2 = (float10)FUN_0041ba60(uVar4,uVar5,fVar6);
    fVar3 = (float10)FUN_0041ba50();
    (**(code **)(*piVar1 + 0x270))
              (1,(((1.0 - fVar6) - 0.0) / 1.0) * ((float)fVar3 - (float)fVar2) + (float)fVar2);
    return;
  }
  FUN_005ee1b0();
  return;
}



void FUN_00691ee0(void)

{
  int *piVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  undefined4 uVar4;
  float fVar5;
  
  FUN_006a88d0();
  if ((*(int *)(in_ECX + 0x20) != 0) && (piVar1 = (int *)FUN_006a1d70(), piVar1 != (int *)0x0)) {
    if ((DAT_00b42f3e == '\0') ||
       (((DAT_00b42e84 == '\0' || (DAT_00b42f48 < 2)) ||
        (fVar2 = (float10)(**(code **)(*piVar1 + 0x288))(0x2f), fVar2 != (float10)0.0)))) {
LAB_00692027:
      FUN_005ee1b0();
      return;
    }
    uVar4 = 0x2e;
    fVar2 = (float10)(**(code **)(*piVar1 + 0x288))(0x2e);
    fVar5 = (float)(fVar2 / (float10)100.0);
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    if (fVar5 <= 1.0) {
      if (fVar5 <= 0.0) {
        (**(code **)(*piVar1 + 0x270))(1,0,uVar4,fVar5);
        goto LAB_00692027;
      }
    }
    else {
      fVar5 = 1.0;
    }
    fVar2 = (float10)FUN_0041ba60(uVar4,fVar5);
    fVar3 = (float10)FUN_0041ba50();
    (**(code **)(*piVar1 + 0x270))
              (1,(((1.0 - fVar5 / 100.0) - 0.0) / 1.0) * ((float)fVar3 - (float)fVar2) +
                 (float)fVar2);
  }
  return;
}



undefined4 * FUN_00692040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006a82f0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a753f4;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006920b0(int *param_1)

{
  float fVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  FUN_006a8620(param_1);
  if (((DAT_00b42f3e != '\0') && (DAT_00b42e84 != '\0')) && (1 < DAT_00b42f48)) {
    fVar2 = (float10)(**(code **)(*param_1 + 0x288))(0x2f);
    if (fVar2 == (float10)0.0) {
      uVar4 = 0x3f800000;
      (**(code **)(*param_1 + 0x324))(0x3f800000);
      uVar3 = 0x2e;
      fVar2 = (float10)(**(code **)(*param_1 + 0x288))(0x2e);
      fVar1 = (float)(fVar2 / (float10)100.0);
      if (fVar1 < 0.0) {
        fVar1 = 0.0;
      }
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
      fVar2 = (float10)FUN_0041ba60();
      fVar5 = (float)fVar2;
      fVar2 = (float10)FUN_0041ba50(uVar3,uVar4,fVar5);
      (**(code **)(*param_1 + 0x270))
                (1,(((1.0 - fVar1) - 0.0) / 1.0) * ((float)fVar2 - fVar5) + fVar5);
      return;
    }
  }
  FUN_005ee1b0();
  return;
}



void FUN_006921d0(int *param_1)

{
  FUN_0068f970(param_1);
  if (((DAT_00b42f3e != '\0') && (DAT_00b42e84 != '\0')) && (1 < DAT_00b42f48)) {
    (**(code **)(*param_1 + 0x270))(1,0);
    return;
  }
  FUN_005ee1b0();
  return;
}



undefined4 * FUN_00692220(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00692370(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a75444;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



uint FUN_006922b0(int param_1)

{
  undefined2 uVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  if (param_1 != 0) {
    iVar2 = FUN_006a1d70();
    in_EAX = 0;
    if (iVar2 != 0) {
      in_EAX = FUN_005e3270();
      if ((char)in_EAX != '\0') {
        uVar1 = FUN_005e1fd0(*(undefined4 *)(in_ECX + 0x18));
        uVar3 = FUN_00549020(uVar1);
        return uVar3;
      }
    }
  }
  return in_EAX & 0xffffff00;
}



undefined4 * FUN_00692300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00692370(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a75444;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00692370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_0068d7a0(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a7548c;
  return;
}



undefined4 * FUN_006923a0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a7548c;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



void FUN_00692430(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int aiStack_3c [3];
  int iStack_24;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c577b;
  local_c = *unaff_FS_OFFSET;
  aiStack_3c[2] = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  aiStack_3c[1] = 0x42c80000;
  aiStack_3c[0] = param_2;
  (**(code **)(*param_1 + 0x374))();
  (**(code **)(*(int *)param_1[0x16] + 0x3cc))(param_2);
  iVar2 = 0;
  (**(code **)(*param_1 + 0x298))(0x22,100,0);
  if (param_2 != DAT_00b333c4) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x58) + 0x184))();
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x20) != '\f')) goto LAB_006925a1;
  }
  iVar1 = FUN_00401f00(0x3c);
  if (iVar1 != 0) {
    iVar2 = FUN_00568e10();
  }
  FUN_005661e0(0x1f);
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x401006;
  FUN_005696b0();
  FUN_005697f0(param_2);
  FUN_005697c0(0x5dc);
  FUN_00569750(0);
  FUN_00565e00(&stack0xffffffd0);
  FUN_00569e40();
  FUN_00569e90(0);
  FUN_00569ec0(param_2);
  FUN_00468230(300);
  FUN_00565ec0(aiStack_3c);
  *(undefined4 *)(iVar2 + 0x18) = 0x26;
  FUN_005f1590(iVar2,0,1);
  FUN_0060d0a0();
  FUN_00569730();
LAB_006925a1:
  *unaff_FS_OFFSET = iStack_24;
  return;
}



void FUN_006925c0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((int *)param_1[0x16] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x3d0))();
    if (iVar2 != param_2) {
      (**(code **)(*(int *)param_1[0x16] + 0x3cc))(param_2);
    }
    cVar1 = (**(code **)(*param_1 + 0x334))(1);
    if (cVar1 == '\0') {
      iVar2 = 0;
      if (param_2 != DAT_00b333c4) {
        iVar2 = (**(code **)(**(int **)(param_2 + 0x58) + 0x184))();
      }
      iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x184))();
      if (((iVar2 == 0) || (*(char *)(iVar2 + 0x20) == '\f')) &&
         ((iVar3 == 0 ||
          ((*(char *)(iVar3 + 0x20) != '\x1f' && (cVar1 = FUN_005e03b0(), cVar1 == '\0')))))) {
        FUN_005f8170(param_2);
      }
    }
  }
  return;
}



void FUN_00692660(int *param_1,undefined4 param_2,char param_3)

{
  if (((int *)param_1[0x16] != (int *)0x0) && (param_3 != '\0')) {
    (**(code **)(*(int *)param_1[0x16] + 0x3cc))(0);
  }
  (**(code **)(*param_1 + 0x374))(param_2,0xc2c80000);
  (**(code **)(*param_1 + 0x298))(0x22,0xffffff9c,0);
  return;
}



void FUN_006926b0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_006a1d70();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00699050();
  }
  if ((iVar1 != 0) && (iVar2 != 0)) {
    FUN_00692430(iVar1,iVar2);
  }
  return;
}



void FUN_006926f0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_006a1d70();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00699050();
  }
  if ((piVar2 != (int *)0x0) && (iVar3 != 0)) {
    cVar1 = (**(code **)(*piVar2 + 0x198))(0);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x1f8))();
      if (cVar1 == '\0') {
        FUN_006925c0(piVar2,iVar3);
        return;
      }
    }
    FUN_0068ea10(0);
  }
  return;
}



void FUN_00692770(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_006a1d70();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00699050();
  }
  if ((piVar1 != (int *)0x0) && (iVar2 != 0)) {
    if ((int *)piVar1[0x16] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[0x16] + 0x3cc))(0);
    }
    (**(code **)(*piVar1 + 0x374))(iVar2,0xc2c80000);
    (**(code **)(*piVar1 + 0x298))(0x22,0xffffff9c,0);
  }
  return;
}



undefined4 * FUN_006927e0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00692370(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a754d4;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_006928d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00692370(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a754d4;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00692940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  FUN_0068d7a0(param_1,param_2,param_3);
  in_ECX[0xe] = param_4;
  *in_ECX = &PTR_FUN_00a7551c;
  in_ECX[0xf] = 0xffffffff;
  return;
}



void FUN_00692980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  FUN_0068d7a0(param_1,param_2,param_3);
  in_ECX[0xf] = param_4;
  *in_ECX = &PTR_FUN_00a7551c;
  in_ECX[0xe] = 0;
  return;
}



undefined4 * FUN_006929c0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c57b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[0xf] == -1) {
    puVar3 = (undefined4 *)FUN_00401f00(0x40,uVar2);
    local_4 = 0;
    local_10 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = in_ECX[0xe];
      FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
      *puVar3 = &PTR_FUN_00a7551c;
      puVar3[0xf] = 0xffffffff;
      puVar3[0xe] = iVar1;
      goto LAB_00692a73;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_00401f00(0x40,uVar2);
    local_4 = 1;
    local_10 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = in_ECX[0xf];
      FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
      *puVar3 = &PTR_FUN_00a7551c;
      puVar3[0xf] = iVar1;
      puVar3[0xe] = 0;
      goto LAB_00692a73;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_00692a73:
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)local_10;
  return puVar3;
}



undefined4 * FUN_00692ad0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006a82f0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a75564;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_00692c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006a82f0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a75564;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00692d00(int *param_1)

{
  float10 fVar1;
  float fVar2;
  
  FUN_006a8620(param_1);
  fVar1 = (float10)(**(code **)(*param_1 + 0x288))(0x46);
  fVar2 = (float)((float10)1 - fVar1 / (float10)100.0);
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  if (param_1[0xf] != 0) {
    FUN_007b8440(param_1[0xf],fVar2);
  }
  return;
}



void FUN_00692d80(int param_1)

{
  FUN_0068f970(param_1);
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_007b8440(*(int *)(param_1 + 0x3c),0x3f800000);
  }
  return;
}



undefined4 * FUN_00692db0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a755b4;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    puVar3 = puVar2;
  }
  *(char *)(puVar3 + 0xe) = (char)in_ECX[0xe];
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_00692e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0068d7a0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a755b4;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_00692f00(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  if ((((param_1 != 0) && (piVar3 = (int *)FUN_006a1d70(), piVar3 != (int *)0x0)) &&
      (cVar1 = (**(code **)(*piVar3 + 0x198))(0), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*piVar3 + 0x1f8))(), cVar1 == '\0')) {
    uVar2 = FUN_005e1fd0(*(undefined4 *)(in_ECX + 0x18));
    cVar1 = FUN_00549020(uVar2);
    if (cVar1 != '\0') {
      iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03818,&PTR_PTR_00b10a1c,0);
      if (iVar4 == 0) {
        iVar4 = FUN_005e0dc0();
        if (iVar4 != 4) {
          return 1;
        }
      }
      else {
        iVar4 = FUN_005e02e0(0);
        if ((iVar4 == 0) || (*(char *)(iVar4 + 0x104) != '\x02')) {
          return 1;
        }
      }
    }
  }
  return 0;
}



void FUN_00692fc0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_006a1d70();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00699050();
  }
  if ((piVar2 != (int *)0x0) && (iVar3 != 0)) {
    iVar4 = (**(code **)(*piVar2 + 0x330))();
    uVar5 = 0;
    if (iVar4 != 0) {
      (**(code **)(*piVar2 + 0x330))(iVar3);
      FUN_006210d0(iVar3,uVar5);
      *(undefined1 *)(in_ECX + 0x38) = 1;
      return;
    }
    cVar1 = FUN_005e6cd0(0);
    if (cVar1 == '\0') {
      FUN_005eae70();
      (**(code **)(*piVar2 + 0x318))(iVar3,1,1,0,0);
      *(undefined1 *)(in_ECX + 0x38) = 1;
    }
  }
  return;
}



void FUN_006930f0(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_00b333c4 + 0x284))(0x3a);
  DAT_00b3c0ab = 0 < iVar1;
  return;
}



void FUN_00693110(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a755fc;
  FUN_0068d970();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00693140(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006a82f0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a755fc;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



void FUN_006931d0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  FUN_006a86f0();
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 4))();
  if (piVar1 == DAT_00b333c4) {
    iVar2 = (**(code **)(*DAT_00b333c4 + 0x284))(0x3a);
    DAT_00b3c0ab = 0 < iVar2;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00693210(int *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  float fStack_28;
  float fStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c285b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = FUN_0041b8b0(uVar4);
  if ((((iVar5 != 0) && (param_1 != (int *)0x0)) && (param_1 != DAT_00b333c4)) &&
     (param_1[0x16] != 0)) {
    (**(code **)(*DAT_00b333c4 + 0x284))(0x3a);
    iVar6 = (**(code **)(*DAT_00b333c4 + 0x174))();
    fVar1 = *(float *)(iVar6 + 4);
    fVar2 = *(float *)(iVar6 + 8);
    pfVar7 = (float *)(**(code **)(*param_1 + 0x174))();
    fVar1 = fVar1 - *pfVar7;
    fVar2 = fVar2 - pfVar7[1];
    if ((fStack_10 - pfVar7[2]) * (fStack_10 - pfVar7[2]) + fVar1 * fVar1 + fVar2 * fVar2 <
        fStack_28) {
      cVar3 = (**(code **)(*param_1 + 0x198))(0);
      if (cVar3 == '\0') {
        iVar6 = (**(code **)(*(int *)param_1[0x16] + 8))();
        if ((iVar6 == 0) && (((uint)param_1[2] >> 0xd & 1) == 0)) {
          if (param_2 == '\0') {
            iVar6 = FUN_00401f00(0x4c);
            uStack_4 = 0;
            if (iVar6 == 0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)FUN_006a0980(param_1,iVar5,0xbf800000);
            }
            uStack_4 = 0xffffffff;
            cVar3 = (**(code **)(*piVar8 + 0x68))();
            if (cVar3 != '\0') {
              FUN_00678d30(piVar8);
              *unaff_FS_OFFSET = local_c;
              return 1;
            }
            (**(code **)*piVar8)(1);
          }
          *unaff_FS_OFFSET = local_c;
          return 1;
        }
      }
    }
    if (param_2 != '\0') {
      FUN_00678e70(param_1,iVar5);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_00693410(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  FUN_006a88d0();
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 4))();
  if (piVar1 == DAT_00b333c4) {
    iVar2 = (**(code **)(*DAT_00b333c4 + 0x284))(0x3a);
    DAT_00b3c0ab = 0 < iVar2;
  }
  return;
}



undefined4 * FUN_00693450(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006a82f0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a755fc;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 * FUN_006934c0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 8),
                 *(undefined4 *)(in_ECX + 0xc));
    *puVar2 = &PTR_FUN_00a7564c;
    puVar2[0xe] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0068d8a0(puVar2);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_00693550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0068d7a0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a7564c;
    puVar2[0xe] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006935e0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c57e8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7564c;
  iVar1 = in_ECX[0xe];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00484470(uVar2);
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_0068d970();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006937d0(byte param_1)

{
  FUN_006935e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006937f0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 8),
                 *(undefined4 *)(in_ECX + 0xc));
    *puVar2 = &PTR_FUN_00a756c4;
  }
  local_4 = 0xffffffff;
  FUN_0068d8a0(puVar2);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_00693880(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0068d7a0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a756c4;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 * FUN_006939a0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a7573c;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_00693a30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0068d7a0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a7573c;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00693aa0(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  float10 fVar6;
  uint uStack_8;
  
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 8))();
  iVar2 = *(int *)(*(int *)(in_ECX + 0xc) + 0x10);
  if (*(int *)(in_ECX + 0x24) == 0) {
    uStack_8 = 0;
  }
  else {
    uStack_8 = FUN_00699050();
  }
  while ((piVar4 != (int *)0x0 &&
         ((piVar3 = (int *)piVar4[1], piVar3 != (int *)0x0 || (*piVar4 != 0))))) {
    iVar5 = *piVar4;
    piVar4 = piVar3;
    if ((iVar5 != 0) && (iVar5 != in_ECX)) {
      piVar3 = *(int **)(iVar5 + 8);
      iVar5 = (**(code **)(*piVar3 + 0x18))();
      if ((iVar5 == 0) &&
         (fVar1 = *(float *)(in_ECX + 0x18),
         fVar6 = (float10)(**(code **)piVar3[3])(-(uint)(iVar2 == 0) & uStack_8),
         fVar6 <= (float10)_DAT_00b380d8 * (float10)fVar1)) {
        FUN_0068ea10(0);
      }
    }
  }
  return;
}



undefined4 * FUN_00693bb0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006a82f0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a75784;
    *(undefined1 *)(puVar2 + 0xf) = 0;
    puVar3 = puVar2;
  }
  *(char *)(puVar3 + 0xf) = (char)in_ECX[0xf];
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



void FUN_00693cc0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  FUN_006a86f0();
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_006a1d70();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00699050();
  }
  if ((piVar2 != (int *)0x0) && (iVar3 != 0)) {
    cVar1 = (**(code **)(*piVar2 + 0x334))(1);
    if (cVar1 != '\0') {
      *(undefined1 *)(in_ECX + 0x3c) = 1;
    }
  }
  return;
}



void FUN_00693d10(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  FUN_006a88d0();
  if ((((*(char *)(in_ECX + 0x3c) == '\0') && (*(int *)(in_ECX + 0x20) != 0)) &&
      (piVar3 = (int *)FUN_006a1d70(), piVar3 != (int *)0x0)) &&
     (cVar2 = (**(code **)(*piVar3 + 0x334))(1), cVar2 != '\0')) {
    (**(code **)(*piVar3 + 0x340))(0);
    FUN_00673a50(0);
    puVar4 = (undefined4 *)FUN_007616d0();
    while (puVar4 != (undefined4 *)0x0) {
      piVar1 = (int *)*puVar4;
      puVar4 = (undefined4 *)puVar4[1];
      if (((piVar1 != piVar3) && (piVar1 != (int *)0x0)) &&
         (cVar2 = (**(code **)(*piVar1 + 400))(), cVar2 != '\0')) {
        FUN_005eff30(piVar3);
        cVar2 = (**(code **)(*piVar1 + 0x334))(1);
        if (cVar2 != '\0') {
          (**(code **)(*piVar1 + 0x340))(piVar3);
        }
      }
    }
  }
  return;
}



undefined4 * FUN_00693dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006a82f0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a75784;
    *(undefined1 *)(puVar2 + 0xf) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 * FUN_00693e70(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006a82f0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a757d4;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_00693fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006a82f0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a757d4;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00694050(int *param_1)

{
  FUN_006a8620(param_1);
  if ((((DAT_00b42f3e != '\0') && (DAT_00b42e84 != '\0')) && (1 < DAT_00b42f48)) &&
     (param_1 == DAT_00b333c4)) {
    (**(code **)(*param_1 + 0x324))(0x3f800000);
    (**(code **)(*param_1 + 0x270))(1,0x3f000000);
    return;
  }
  FUN_005ee1b0();
  return;
}



void FUN_006940c0(int *param_1)

{
  FUN_0068f970(param_1);
  if ((((DAT_00b42f3e != '\0') && (DAT_00b42e84 != '\0')) && (1 < DAT_00b42f48)) &&
     (param_1 == DAT_00b333c4)) {
    (**(code **)(*param_1 + 0x270))(1,0);
    return;
  }
  FUN_005ee1b0();
  return;
}



void FUN_00694120(void)

{
  char *pcVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  float *unaff_FS_OFFSET;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  float fVar13;
  float fStack_14;
  float fStack_10;
  float local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (float)&local_c;
  FUN_006a88d0(uVar4);
  if (((*(int *)(in_ECX + 0x20) == 0) || (piVar5 = (int *)FUN_006a1d70(), piVar5 == (int *)0x0)) ||
     (iVar6 = (**(code **)(*piVar5 + 0x284))(0x2f), (float)iVar6 != 0.0)) {
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (((DAT_00b42f3e == '\0') || (DAT_00b42e84 == '\0')) ||
     ((DAT_00b42f48 < 2 || (piVar5 != DAT_00b333c4)))) {
    piVar9 = (int *)FUN_009832e6(piVar5[0x16],0,&PTR_PTR_00b05908,&PTR_PTR_00b05924,0);
    if ((piVar9 != (int *)0x0) && (iVar6 = (**(code **)(*piVar9 + 0x47c))(), iVar6 != 4)) {
      FUN_00628630(piVar5,0);
    }
  }
  else {
    (**(code **)(*piVar5 + 0x270))(1,0);
  }
  fVar10 = (float10)(**(code **)(*piVar5 + 0x288))(0x2e);
  fVar13 = (float)(fVar10 / (float10)100.0);
  if (fVar13 < 0.0) {
    fVar13 = 0.0;
  }
  if (fVar13 <= 1.0) {
    if (0.0 < fVar13) goto LAB_0069425d;
  }
  else {
    fVar13 = 1.0;
LAB_0069425d:
    if (((DAT_00b42f3e != '\0') && (DAT_00b42e84 != '\0')) && (1 < DAT_00b42f48)) {
      fVar10 = (float10)FUN_0041ba60();
      fVar11 = (float10)FUN_0041ba50();
      fStack_14 = (((1.0 - fVar13) - 0.0) / 1.0) * ((float)fVar11 - (float)fVar10) + (float)fVar10;
      (**(code **)(*piVar5 + 0x270))(1,fStack_14);
      goto LAB_006942db;
    }
  }
  FUN_005ee1b0();
LAB_006942db:
  iVar6 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c);
  uVar2 = *(ushort *)(iVar6 + 0x20);
  piVar9 = (int *)0x0;
  if (uVar2 == 0xffff) {
    pcVar7 = *(char **)(iVar6 + 0x1c);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    uVar4 = (int)pcVar7 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)uVar2;
  }
  if (uVar4 != 0) {
    fStack_14 = (float)FUN_00401f00(0x38);
    puStack_8 = (undefined1 *)0x0;
    if (fStack_14 == 0.0) {
      piVar9 = (int *)0x0;
    }
    else {
      uVar12 = 0xbf800000;
      uVar8 = (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x18) + 0x14))
                        (0xbf800000);
      piVar9 = (int *)FUN_0069e4f0(piVar5,uVar8,uVar12);
    }
    puStack_8 = (undefined1 *)0xffffffff;
  }
  cVar3 = (**(code **)(*piVar9 + 0x68))();
  if (cVar3 == '\0') {
    (**(code **)*piVar9)(1);
    *unaff_FS_OFFSET = fStack_14;
    return;
  }
  FUN_00678d30(piVar9);
  *unaff_FS_OFFSET = fStack_10;
  return;
}



void FUN_00694420(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_8 = &LAB_009c5823;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0068d7a0(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a75824;
  in_ECX[0xe] = 0;
  puVar1 = (undefined4 *)in_ECX[0xe];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[0xe] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006944c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c57e8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x38);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0068d970(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00694540(void)

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
    uVar3 = FUN_00694420(in_ECX[9],in_ECX[2],in_ECX[3]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(uVar3);
  *unaff_FS_OFFSET = iVar2;
  return uVar3;
}



void FUN_00694600(void)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  uint local_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  float local_1c;
  undefined1 local_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5853;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_006a1d70(uVar5);
  }
  piVar1 = (int *)(in_ECX + 0x38);
  if ((*(int *)(in_ECX + 0x38) == 0) && (piVar6 != (int *)0x0)) {
    iVar7 = FUN_004d7fd0();
    if ((iVar7 == 0) && (DAT_00b3c0b4 <= DAT_00b38008)) {
      iVar7 = *(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x70);
      if (iVar7 == 0) {
        FUN_004a7a60(
                    "Light Effect has no Light object associated with it. Use the editor to select a light in the Magic Effects window for the Light effect."
                    );
        *unaff_FS_OFFSET = local_c;
        return;
      }
      local_24._0_4_ = (float)FUN_00401f00(0x114);
      local_4 = 0;
      if ((float)local_24 == 0.0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_004b0bf0();
      }
      local_4 = 0xffffffff;
      FUN_0075fa90(uVar8);
      uVar5 = *(uint *)(iVar7 + 0x78);
      local_2c = uVar5 & 0xff;
      local_24._0_4_ = (float)local_2c;
      local_2c = uVar5 >> 8 & 0xff;
      local_24._4_4_ = (float)local_2c;
      local_2c = uVar5 >> 0x10 & 0xff;
      local_24._0_4_ = (float)local_24 / 255.0;
      local_24._4_4_ = local_24._4_4_ / 255.0;
      local_1c = (float)local_2c / 255.0;
      FUN_00482120(&local_24);
      fVar3 = *(float *)(in_ECX + 0x18);
      pfVar9 = (float *)FUN_00403c00();
      local_24 = (double)(*pfVar9 + fVar3);
      pfVar9 = (float *)FUN_00403c00();
      local_24._0_4_ = *pfVar9 * (float)local_24;
      local_24._4_4_ = 0.0;
      local_1c = 0.0;
      FUN_004b0bc0(&local_24);
      uVar8 = *(undefined4 *)(iVar7 + 0x88);
      iVar7 = *piVar1;
      piVar2 = (int *)(iVar7 + 0xb8);
      *piVar2 = *piVar2 + 1;
      *(undefined4 *)(iVar7 + 0xdc) = uVar8;
      iVar7 = FUN_007b4280(0);
      if (iVar7 != 0) {
        FUN_007c6ae0(*piVar1,1);
      }
      iVar7 = (**(code **)(*piVar6 + 0x15c))(local_18);
      uStack_28 = SUB84((double)*(float *)(iVar7 + 4),0);
      local_24._0_4_ = (float)((ulonglong)(double)*(float *)(iVar7 + 4) >> 0x20);
      pfVar9 = (float *)FUN_00403c00();
      dVar4 = (double)(*pfVar9 + (float)(double)CONCAT44((float)local_24,uStack_28));
      uStack_28 = SUB84(dVar4,0);
      local_24._0_4_ = (float)((ulonglong)dVar4 >> 0x20);
      fVar10 = (float10)(**(code **)(*piVar6 + 0xec))();
      dVar4 = (double)CONCAT44((float)local_24,uStack_28);
      fVar11 = (float10)FUN_005e0660();
      pfVar9 = (float *)FUN_00403c00();
      fVar3 = *pfVar9;
      fVar12 = (float10)(**(code **)(*piVar6 + 0xec))();
      piVar2 = (int *)(float)(fVar12 * (float10)(fVar3 + (float)fVar11));
      FUN_00404cf0(0,(float)(fVar10 * (float10)dVar4),piVar2);
      uVar8 = (**(code **)(*piVar6 + 0x154))();
      FUN_00405070(uVar8);
      puStack_8 = (undefined1 *)0x1;
      (**(code **)(*piVar2 + 0x84))(*piVar1,1);
      FUN_004d7fe0(*piVar1);
      DAT_00b3c0b4 = DAT_00b3c0b4 + 1;
      local_4 = 0xffffffff;
      FUN_007016a0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006948b0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  undefined4 *puStack_4;
  
  puStack_4 = in_ECX;
  if (in_ECX[8] == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_006a1d70();
  }
  if (in_ECX[0xe] != 0) {
    iVar3 = FUN_007b4280(0);
    if (iVar3 != 0) {
      FUN_007c7dc0(in_ECX[0xe]);
    }
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x154))();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x88))(&puStack_4,in_ECX[0xe]);
        if (puStack_4 != (undefined4 *)0x0) {
          LVar4 = InterlockedDecrement(puStack_4 + 1);
          if ((LVar4 == 0) && (puStack_4 != (undefined4 *)0x0)) {
            (**(code **)*puStack_4)(1);
          }
        }
      }
      FUN_004d8190(1);
    }
    puVar1 = (undefined4 *)in_ECX[0xe];
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[0xe] = 0;
    }
    DAT_00b3c0b4 = DAT_00b3c0b4 + -1;
    if (DAT_00b3c0b4 < 0) {
      DAT_00b3c0b4 = 0;
    }
  }
  return;
}



void FUN_00694980(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    iVar4 = 0;
    piVar2 = (int *)(**(code **)(*param_1 + 8))();
    if (piVar2 != (int *)0x0) {
      do {
        iVar3 = iVar4;
        if ((piVar2[1] == 0) && (*piVar2 == 0)) break;
        iVar1 = *piVar2;
        if ((iVar1 != 0) &&
           (((*(int *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x1c) + 0x98) == 0x5448474c &&
             (*(char *)(iVar1 + 0x11) == '\0')) &&
            (iVar3 = FUN_009832e6(iVar1,0,&PTR_PTR_00b14914,&PTR_PTR_00b15cac,0), iVar4 != 0)))) {
          if (*(float *)(iVar3 + 0x18) <= *(float *)(iVar4 + 0x18)) {
            FUN_006948b0();
            iVar3 = iVar4;
          }
          else {
            FUN_006948b0();
          }
        }
        piVar2 = (int *)piVar2[1];
        iVar4 = iVar3;
      } while (piVar2 != (int *)0x0);
      if (iVar3 != 0) {
        FUN_00694600();
        return;
      }
    }
  }
  return;
}



undefined4 FUN_00694a30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
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
  local_10 = FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_00694420(param_1,param_2,param_3);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_00694ad0(byte param_1)

{
  FUN_006944c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00694b10(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_006948b0();
  if (*(int *)(in_ECX + 0x20) != 0) {
    iVar1 = FUN_006a1d70();
    if (iVar1 != 0) {
      FUN_00694980(iVar1 + 0x68);
    }
  }
  return;
}



undefined4 * FUN_00694b40(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a758f4;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_00694bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0068d7a0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a758f4;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00694cf0(void)

{
  undefined4 *in_ECX;
  
  FUN_0069f2b0();
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  *in_ECX = &PTR_FUN_00a75944;
  in_ECX[6] = &PTR_FUN_00a75938;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00694d20(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c5878;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a75944;
  in_ECX[6] = &PTR_FUN_00a75938;
  local_4 = 0;
  if ((int *)in_ECX[0x1a] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*(int *)in_ECX[0x1a] + 0x20))(uVar2);
  }
  if (iVar3 != DAT_00b333c4) {
    fVar1 = _DAT_00b38108;
    if (_DAT_00b38108 < 0.0) {
      fVar1 = 0.0;
    }
    _DAT_00b3c0d0 = _DAT_00b3c0d0 - fVar1;
  }
  if (in_ECX[0x22] != 0) {
    FUN_006b7240();
    iVar3 = in_ECX[0x22];
    if (iVar3 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar3);
      in_ECX[0x22] = 0;
    }
  }
  iVar3 = in_ECX[0x23];
  if (iVar3 != 0) {
    FUN_0069e0b0();
    FUN_00401f20(iVar3);
  }
  in_ECX[0x23] = 0;
  local_4 = 0xffffffff;
  FUN_0069fa60();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00694f20(undefined4 param_1,int param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x148))();
  FUN_0069f800(param_1,param_2);
  FUN_0046ac80(in_ECX + 0x1f,4);
  FUN_0046ac80(in_ECX + 0x17,4);
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 100) {
    FUN_0046ac80(in_ECX + 0x18,4);
  }
  FUN_004534d0(in_ECX + 0x20,4);
  FUN_0046ac80(in_ECX + 0x21,4);
  if (in_ECX[0x20] == 2) {
    FUN_0046ac80(&param_2,4);
    in_ECX[0x23] = param_2;
  }
  return;
}



void FUN_00694fc0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x364);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[2];
    if ((iVar2 != 0) && (iVar2 != -0x14)) {
      *(undefined4 *)(iVar2 + 0x30) = param_1;
    }
    (**(code **)(*piVar1 + 0x80))();
  }
  return;
}



void FUN_00694ff0(byte param_1)

{
  FUN_00694d20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00695010(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 auStack_24 [9];
  
  iVar3 = (**(code **)(*in_ECX + 0x154))();
  if (iVar3 != 0) {
    fStack_34 = ABS((float)in_ECX[0x21]);
    *(float *)(iVar3 + 0x60) = fStack_34;
    puVar4 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
    *(undefined4 *)(iVar3 + 0x54) = *puVar4;
    *(undefined4 *)(iVar3 + 0x58) = puVar4[1];
    *(undefined4 *)(iVar3 + 0x5c) = puVar4[2];
    iStack_2c = in_ECX[9];
    iStack_30 = in_ECX[8];
    iStack_28 = in_ECX[10];
    FUN_007117c0(iStack_28,iStack_30,iStack_2c);
    puVar4 = auStack_24;
    puVar6 = (undefined4 *)(iVar3 + 0x30);
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_006f94e0(iVar3);
    iVar3 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar3 + 0xc));
    if (((iVar3 != 0) &&
        (cVar2 = FUN_0055e000("SpecialIdle_Projectile",&fStack_34), fVar1 = fStack_34, cVar2 != '\0'
        )) && (fStack_34 != 0.0)) {
      FUN_004715c0(0);
      FUN_006c9ba0(0,0,0x3f800000,0,0,0);
      *(ushort *)(iVar3 + 8) = *(ushort *)(iVar3 + 8) | 8;
      *(undefined4 *)((int)fVar1 + 0x48) = 0xff7fffff;
      fStack_34 = _DAT_00b33a30 - 0.1;
      FUN_00707370(fStack_34,1);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00695400(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,float param_6)

{
  ushort *puVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int *in_ECX;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_c [12];
  
  if (((param_5 == (int *)0x0) || (cVar4 = (**(code **)(*param_5 + 400))(), cVar4 == '\0')) ||
     (cVar4 = FUN_005e8eb0(), cVar4 == '\0')) {
    iVar6 = FUN_00413370();
    fVar2 = (float)iVar6 * _DAT_00b37ed0;
    in_ECX[0x21] = (int)fVar2;
    if (fVar2 <= _DAT_00b37ed8) {
      if (fVar2 < _DAT_00b37ee0) {
        in_ECX[0x21] = (int)_DAT_00b37ee0;
      }
    }
    else {
      in_ECX[0x21] = (int)_DAT_00b37ed8;
    }
    FUN_004d8a30(param_1,param_2,param_3);
    piVar7 = (int *)(**(code **)(*in_ECX + 0x154))();
    if (piVar7 != (int *)0x0) {
      puVar8 = (undefined4 *)FUN_007101f0(auStack_c,&DAT_00b258dc);
      FUN_0069f880(param_1,param_2,param_3,*puVar8,puVar8[1],puVar8[2],param_4);
      if (param_6._0_1_ == '\0') {
        piVar7[0x15] = param_1;
        piVar7[0x16] = param_2;
        piVar7[0x17] = param_3;
        iVar6 = (**(code **)(*piVar7 + 0x58))("AreaEffect");
        if (iVar6 != 0) {
          *(float *)(iVar6 + 0x60) = ABS((float)in_ECX[0x21]);
        }
      }
    }
    if (in_ECX[0x22] != 0) {
      FUN_006b7240();
    }
    iVar6 = FUN_0065a2c0();
    cVar4 = param_6._0_1_;
    if ((iVar6 != 0) && (param_6._0_1_ == '\0')) {
      iVar6 = FUN_0065a2c0();
      if ((*(uint *)(iVar6 + 500) & 0x8000) != 0) {
        (**(code **)(*in_ECX + 0x214))();
      }
      puVar8 = &param_6;
      FUN_0065a2c0(puVar8);
      FUN_0057e270(puVar8);
      uVar11 = (uint)param_6 | 0x4000;
      iVar6 = FUN_0065a2c0();
      piVar7 = *(int **)(iVar6 + 0x364);
      if (piVar7 != (int *)0x0) {
        iVar6 = piVar7[2];
        if ((iVar6 != 0) && (iVar6 != -0x14)) {
          *(uint *)(iVar6 + 0x30) = uVar11;
        }
        (**(code **)(*piVar7 + 0x80))();
      }
    }
    in_ECX[0x20] = 2;
    if (cVar4 == '\0') {
      iVar6 = in_ECX[0x1b];
      puVar8 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
      uVar12 = *puVar8;
      uVar17 = 0x3f800000;
      uVar16 = 0x3f800000;
      uVar15 = 0;
      uVar13 = puVar8[1];
      uVar14 = puVar8[2];
      piVar7 = in_ECX;
      uVar9 = FUN_006ecc80(uVar12,uVar13,uVar14);
      FUN_0069ba90(iVar6,uVar9,uVar12,uVar13,uVar14,piVar7,param_5,uVar15,uVar16,uVar17);
    }
    iVar6 = (**(code **)(*in_ECX + 0x154))();
    if ((in_ECX[0x1d] != 0) && (*(int *)(in_ECX[0x1d] + 0x98) == 0x47444946)) {
      FUN_00481660(iVar6);
    }
    if ((iVar6 != 0) && (piVar7 = *(int **)(iVar6 + 0xc), piVar7 != (int *)0x0)) {
      for (puVar10 = (undefined *)(**(code **)(*piVar7 + 4))(); puVar10 != (undefined *)0x0;
          puVar10 = *(undefined **)(puVar10 + 4)) {
        if (puVar10 == &DAT_00b3cac0) {
          bVar3 = 1;
          goto LAB_00695684;
        }
      }
      bVar3 = 0;
LAB_00695684:
      if ((((-(uint)bVar3 & (uint)piVar7) != 0) &&
          (cVar5 = FUN_0055e000("SpecialIdle_AreaEffect",&param_6), fVar2 = param_6, cVar5 != '\0'))
         && (param_6 != 0.0)) {
        FUN_004715c0(0);
        FUN_006c9ba0(0,0,0x3f800000,0,0,0);
        puVar1 = (ushort *)((-(uint)bVar3 & (uint)piVar7) + 8);
        *puVar1 = *puVar1 | 8;
        *(undefined4 *)((int)fVar2 + 0x48) = 0xff7fffff;
        if (in_ECX[0x23] != 0) {
          param_6 = *(float *)((int)fVar2 + 0x30) * 0.75;
          FUN_0069dd50(0,param_6);
        }
      }
    }
    if (((*(int *)(DAT_00b33398 + 0x24) != 0) && (*(int *)(in_ECX[0x1d] + 0x8c) != 0)) &&
       ((cVar4 == '\0' &&
        (iVar6 = FUN_006ae0a0(*(undefined4 *)(*(int *)(in_ECX[0x1d] + 0x8c) + 0xc),0x102,1),
        iVar6 != 0)))) {
      puVar8 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
      FUN_006b7360(*puVar8,puVar8[1],puVar8[2]);
      FUN_006b71c0(0);
      FUN_006b73e0();
      FUN_00401f20(iVar6);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006957c0(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c58cc;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = (int *)(**(code **)(*in_ECX + 0x154))(uVar4);
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 0x58))("MagicAreaDisplay");
    if (iVar6 == 0) {
      piVar7 = (int *)(**(code **)(*piVar5 + 8))();
      if (piVar7 != (int *)0x0) {
        fVar1 = (float)piVar5[0x18];
        iVar6 = FUN_00413370();
        iVar6 = FUN_006fc010(((float)iVar6 * _DAT_00b37db8) / fVar1,10,10,0);
        FUN_006ff420("MagicAreaDisplay");
        *(undefined4 *)(iVar6 + 0x54) = DAT_00b3f9a8;
        *(undefined4 *)(iVar6 + 0x58) = DAT_00b3f9ac;
        *(undefined4 *)(iVar6 + 0x5c) = DAT_00b3f9b0;
        puVar8 = (undefined4 *)FUN_00401f00(0x1c);
        uStack_4 = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          FUN_006ffd30();
          *puVar8 = &PTR_FUN_00a2fd04;
          *(undefined2 *)(puVar8 + 6) = 8;
        }
        *(ushort *)(puVar8 + 6) = *(ushort *)(puVar8 + 6) & 0xffc7;
        uStack_4 = 0xffffffff;
        FUN_00405680(puVar8);
        puVar8 = (undefined4 *)FUN_00401f00(0x1c);
        uStack_4 = 1;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          FUN_006ffd30();
          *puVar8 = &PTR_FUN_00a2fdb4;
          *(undefined2 *)(puVar8 + 6) = 0xf;
        }
        *(ushort *)(puVar8 + 6) = *(ushort *)(puVar8 + 6) | 3;
        uStack_4 = 0xffffffff;
        FUN_00405680(puVar8);
        puVar8 = (undefined4 *)FUN_00401f00(0x1c);
        uStack_4 = 2;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          FUN_006ffd30();
          *puVar8 = &PTR_FUN_00a2fd5c;
          *(undefined2 *)(puVar8 + 6) = 0;
        }
        *(ushort *)(puVar8 + 6) = *(ushort *)(puVar8 + 6) | 1;
        uStack_4 = 0xffffffff;
        FUN_00405680(puVar8);
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        puVar8 = (undefined4 *)FUN_0065abe0(auStack_1c);
        FUN_008a8140(*puVar8,&uStack_18);
        iVar9 = FUN_00401f00(0x5c);
        uStack_4 = 3;
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_007095a0();
        }
        *(undefined4 *)(iVar9 + 0x1c) = DAT_00b25ac4;
        *(undefined4 *)(iVar9 + 0x20) = DAT_00b25ac8;
        uVar3 = DAT_00b25acc;
        *(int *)(iVar9 + 0x54) = *(int *)(iVar9 + 0x54) + 1;
        *(undefined4 *)(iVar9 + 0x24) = uVar3;
        iVar2 = *(int *)(iVar9 + 0x54);
        *(undefined4 *)(iVar9 + 0x28) = DAT_00b25ac4;
        *(undefined4 *)(iVar9 + 0x2c) = DAT_00b25ac8;
        uVar3 = DAT_00b25acc;
        *(int *)(iVar9 + 0x54) = iVar2 + 1;
        *(undefined4 *)(iVar9 + 0x30) = uVar3;
        *(undefined4 *)(iVar9 + 0x40) = uStack_18;
        *(undefined4 *)(iVar9 + 0x44) = uStack_14;
        *(int *)(iVar9 + 0x54) = iVar2 + 2;
        uStack_4 = 0xffffffff;
        *(undefined4 *)(iVar9 + 0x48) = uStack_10;
        FUN_00405680(iVar9);
        (**(code **)(*piVar7 + 0x84))(iVar6,0);
        FUN_00707610();
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00695a50(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *piVar8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afb8b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0069f1e0(param_1,param_2);
  FUN_00695010(uVar3);
  piVar8 = in_ECX;
  FUN_006ecc80();
  FUN_004d35d0(piVar8);
  if ((in_ECX[0x20] != 2) && (*(int *)(in_ECX[0x1d] + 0x84) != 0)) {
    iVar4 = in_ECX[0x22];
    uVar7 = *(undefined4 *)(*(int *)(in_ECX[0x1d] + 0x84) + 0xc);
    if (iVar4 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar4);
      in_ECX[0x22] = 0;
    }
    iVar4 = FUN_0065ac50(uVar7,1,0x102,1);
    in_ECX[0x22] = iVar4;
  }
  iVar4 = (**(code **)(*in_ECX + 0x154))();
  if (iVar4 != 0) {
    fVar1 = (float)in_ECX[0x21];
    iVar4 = (**(code **)(*in_ECX + 0x154))();
    *(float *)(iVar4 + 0x60) = ABS(fVar1);
  }
  iVar4 = in_ECX[0x23];
  pcVar2 = *(code **)(*in_ECX + 0x154);
  in_ECX[0x23] = 0;
  iVar5 = (*pcVar2)();
  if ((iVar5 != 0) && (*(int *)(in_ECX[0x1d] + 0x70) != 0)) {
    iVar5 = FUN_00401f00(0x1c);
    uStack_4 = 0;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(in_ECX[0x1d] + 0x70) + 0xc);
      uVar6 = (**(code **)(*in_ECX + 0x154))();
      iVar5 = FUN_0069e250(uVar7,uVar6);
    }
    uStack_4 = 0xffffffff;
    in_ECX[0x23] = iVar5;
    if ((in_ECX[0x20] == 2) && (iVar5 != 0)) {
      iVar5 = (**(code **)(*in_ECX + 0x154))();
      if (iVar5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(iVar5 + 0xc);
      }
      iVar5 = FUN_00560920(&DAT_00b3cac0,uVar7);
      if (iVar5 != 0) {
        iVar5 = FUN_004715a0("SpecialIdle_AreaEffect");
        if (iVar5 != 0) {
          FUN_0069dd50(0,*(float *)(iVar5 + 0x30) * 0.75);
          *(int *)(in_ECX[0x23] + 0x10) = iVar4;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00695dc0(void)

{
  char cVar1;
  int iVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  float *pfVar5;
  int *piVar6;
  int ***pppiVar7;
  undefined4 *puVar8;
  byte bVar9;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  int ***pppiStack_118;
  uint uStack_114;
  undefined1 auStack_104 [12];
  int ***pppiStack_f8;
  int ***pppiStack_f4;
  int **ppiStack_f0;
  int **ppiStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_70;
  uint uStack_6c;
  int ***pppiStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int ***pppiStack_14;
  
  pppiStack_14 = (int ***)0xffffffff;
  puStack_18 = &LAB_009c5917;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_104;
  uStack_114 = DAT_00b30aac ^ (uint)&stack0xfffffef0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (in_ECX[0x16] == 0) goto LAB_00696222;
  pppiStack_118 = (int ***)0x695e16;
  iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  if (iVar2 != 0) goto LAB_00696222;
  pppiStack_118 = (int ***)0x695e25;
  pppiVar3 = (int ***)FUN_0065a2c0();
  pppiStack_118 = (int ***)0x695e2e;
  pppiVar4 = (int ***)FUN_006ecc80();
  pppiStack_f4 = pppiVar4;
  if (pppiVar4 == (int ***)0x0) {
    pppiStack_f8 = (int ***)0x0;
  }
  else {
    pppiStack_118 = (int ***)0x695e3f;
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') {
      pppiStack_f8 = DAT_00b35c24;
    }
    else {
      pppiStack_118 = (int ***)0x695e4b;
      pppiStack_f8 = (int ***)FUN_00424180();
    }
  }
  if (pppiVar3 == (int ***)0x0) {
    pppiStack_118 = (int ***)0x1;
    FUN_00890c00();
    uStack_64 = 0x3f800000;
    pppiStack_118 = (int ***)0x695e93;
    pppiStack_14 = pppiVar3;
    uStack_70 = (**(code **)(*in_ECX + 0x154))();
    pppiStack_118 = (int ***)0x695ea6;
    pfVar5 = (float *)(**(code **)(*in_ECX + 0x174))();
    fStack_e0 = *pfVar5 * 0.14287673;
    pppiStack_118 = (int ***)0x14;
    fStack_dc = pfVar5[1] * 0.14287673;
    fStack_d8 = pfVar5[2] * 0.14287673;
    pppiStack_68 = pppiStack_f8;
    uStack_60 = 0;
    ppiStack_f0 = (int **)FUN_00401f00();
    pppiStack_14._0_1_ = 1;
    if (ppiStack_f0 == (int **)0x0) {
      pppiStack_118 = (int ***)0x0;
    }
    else {
      pppiStack_118 = (int ***)0x1;
      pppiStack_118 = (int ***)FUN_00532090(0x3f800000);
    }
    pppiStack_14 = (int ***)((uint)pppiStack_14._1_3_ << 8);
    FUN_00608ae0();
    uStack_5c = 0;
    pppiStack_118 = (int ***)0x695f2c;
    cVar1 = FUN_0045a500();
    if (cVar1 != '\0') {
      uStack_6c = 7;
      goto LAB_00696013;
    }
    if ((int *)in_ECX[0x1a] == (int *)0x0) {
LAB_00695fb7:
      pppiStack_118 = (int ***)0x695fc3;
      pppiStack_118 = (int ***)(**(code **)(*in_ECX + 0x154))();
      iVar2 = FUN_00480340();
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10) == 0)) {
LAB_00695ff4:
        pppiStack_118 = (int ***)0x695ff9;
        iVar2 = FUN_00531d80();
        uStack_6c = iVar2 << 0x10 | 7;
      }
      else {
        pppiStack_118 = &ppiStack_f0;
        iVar2 = FUN_00497340();
        uStack_6c = (uint)*(ushort *)(iVar2 + 2) << 0x10 | 7;
      }
    }
    else {
      pppiStack_118 = (int ***)0x695f42;
      piVar6 = (int *)(**(code **)(*(int *)in_ECX[0x1a] + 0x20))();
      if (piVar6 == (int *)0x0) goto LAB_00695fb7;
      pppiStack_118 = (int ***)0x695f54;
      cVar1 = (**(code **)(*piVar6 + 400))();
      if (cVar1 == '\0') {
        pppiStack_118 = (int ***)0x695f86;
        pppiStack_118 = (int ***)(**(code **)(*piVar6 + 0x154))();
        iVar2 = FUN_00480340();
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
          pppiStack_118 = &ppiStack_f0;
          iVar2 = FUN_00497340();
          uStack_6c = (uint)*(ushort *)(iVar2 + 2) << 0x10 | 7;
          goto LAB_00696013;
        }
        goto LAB_00695ff4;
      }
      pppiStack_118 = &ppiStack_f0;
      iVar2 = FUN_0065abe0();
      uStack_6c = (uint)*(ushort *)(iVar2 + 2) << 0x10 | 7;
    }
LAB_00696013:
    pppiStack_118 = (int ***)0x1;
    uStack_58 = 6;
    iVar2 = thunk_FUN_00401aa0(0x3f0);
    bVar9 = 0x10 - ((byte)iVar2 & 0xf);
    ppiStack_f0 = (int **)(iVar2 + (uint)bVar9);
    *(byte *)((int)ppiStack_f0 + -1) = bVar9;
    pppiStack_14._0_1_ = 2;
    pppiVar3 = (int ***)FUN_0068f400(&fStack_e0);
    pppiVar3[0xc9] = (int **)0x3f800000;
    pppiStack_14 = (int ***)((uint)pppiStack_14._1_3_ << 8);
    if (DAT_00b333b8 == '\0') {
      pppiVar3[0x7d] = (int **)((uint)pppiVar3[0x7d] & 0xffefffff);
    }
    else {
      pppiVar3[0x7d] = (int **)((uint)pppiVar3[0x7d] | 0x100000);
    }
    pppiVar3[0x7d] = (int **)((uint)pppiVar3[0x7d] | 0x80000);
    ppiStack_f0 = (int **)&pppiStack_118;
    pppiStack_118 = pppiVar3;
    InterlockedIncrement((LONG *)(pppiVar3 + 1));
    (**(code **)(*(int *)in_ECX[0x16] + 400))();
    FUN_008910f0(1000);
    pppiStack_14 = (int ***)0xffffffff;
    pppiStack_118 = (int ***)0x6960d5;
    FUN_00890f70();
    pppiVar4 = pppiStack_f4;
  }
  if ((pppiVar4 == (int ***)0x0) || (pppiStack_f8 == (int ***)0x0)) {
    fVar10 = (float10)-4.8618427e+37;
  }
  else {
    pppiStack_118 = (int ***)0x6960eb;
    fVar10 = (float10)FUN_004cace0();
    fVar10 = fVar10 * (float10)0.1428767293691635;
  }
  pppiVar3[0xc6] = (int **)(float)fVar10;
  if (pppiVar3[2] == (int **)0x0) {
    iVar2 = 0;
  }
  else {
    pppiStack_118 = (int ***)0x69610b;
    iVar2 = FUN_008ac0c0();
  }
  if (*(int *)(iVar2 + 8) == 0) {
    pppiStack_f4 = (int ***)0x0;
  }
  else {
    pppiStack_f4 = *(int ****)(*(int *)(iVar2 + 8) + 0x2b0);
  }
  pppiStack_118 = pppiStack_f8;
  FUN_00895060();
  pppiStack_118 = (int ***)0x696142;
  pppiVar4 = (int ***)(**(code **)(*in_ECX + 0x154))();
  if (pppiVar3[0xd9] == (int **)0x0) {
    pppiVar7 = (int ***)0x0;
  }
  else {
    pppiStack_118 = (int ***)0x0;
    pppiVar7 = (int ***)FUN_0089f6b0();
  }
  if (pppiVar7 != pppiVar4) {
    if (pppiVar3[0xd9] != (int **)0x0) {
      pppiStack_118 = (int ***)0x0;
      FUN_0089f650(pppiVar4);
    }
    if ((pppiStack_f8 != (int ***)0x0) && (*(char *)((int)pppiStack_f8 + 0x1a) != '\0')) {
      pppiStack_118 = (int ***)0x0;
      (*(code *)(*pppiVar3)[0x22])();
    }
    pppiStack_118 = pppiVar4;
    FUN_0088ee20();
    FUN_0088d070(pppiVar4,6,1,0);
  }
  pppiStack_118 = (int ***)0x6961ac;
  puVar8 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
  pppiVar3 = pppiStack_f8;
  ppiStack_ec = (int **)*puVar8;
  uStack_e8 = puVar8[1];
  fStack_e4 = (float)puVar8[2];
  if (pppiStack_f4 != pppiStack_f8) {
    if (pppiStack_f4 != (int ***)0x0) {
      pppiStack_118 = (int ***)0x0;
      FUN_0088cd50(pppiVar4,1);
    }
    fStack_e4 = fStack_e4 + 8.0;
  }
  if (pppiVar3 != (int ***)0x0) {
    pppiStack_118 = &ppiStack_ec;
    FUN_00452a10();
    pppiStack_118 = (int ***)&pppiStack_f4;
    FUN_0057e270();
    pppiStack_118 = (int ***)0x0;
    (*(code *)(*pppiVar3)[0x24])(pppiVar4,1,0,(uint)pppiStack_f4 >> 0x10);
  }
LAB_00696222:
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00696250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,int param_11,int param_12)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *puVar4;
  undefined1 auStack_54 [4];
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009c5958;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_54;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_50 = param_3;
  local_48 = param_4;
  local_4c = param_12;
  FUN_0069f360(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  *in_ECX = &PTR_FUN_00a75944;
  in_ECX[6] = &PTR_FUN_00a75938;
  local_14 = 0;
  in_ECX[0x17] = *(float *)(in_ECX[0x1d] + 0x74) * _DAT_00b37ee8;
  in_ECX[0x20] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x21] = 0x3f800000;
  if (param_11 == 0) {
    FUN_0069fd40(uVar1);
  }
  else {
    FUN_004d7d10(param_11);
  }
  FUN_00695010();
  FUN_00695dc0();
  local_40 = 0xff7fffff;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  iVar2 = FUN_0065a2c0();
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    FUN_008ac0b0(&local_40);
  }
  puVar4 = in_ECX;
  FUN_006ecc80();
  FUN_004d35d0(puVar4);
  if (*(int *)(in_ECX[0x1d] + 0x84) != 0) {
    iVar2 = in_ECX[0x22];
    local_50 = *(undefined4 *)(*(int *)(in_ECX[0x1d] + 0x84) + 0xc);
    if (iVar2 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar2);
      in_ECX[0x22] = 0;
    }
    uVar3 = FUN_0065ac50(local_50,1,0x102,1);
    in_ECX[0x22] = uVar3;
  }
  iVar2 = local_4c;
  if (local_4c != 0) {
    FUN_0069e200(in_ECX);
    in_ECX[0x23] = iVar2;
  }
  FUN_0069ff10();
  if ((int *)in_ECX[0x1a] == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)in_ECX[0x1a] + 0x20))();
  }
  if (iVar2 != DAT_00b333c4) {
    _DAT_00b3c0d0 = _DAT_00b38108 + _DAT_00b3c0d0;
  }
  FUN_0046abf0(0x2000000);
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00696460(undefined4 param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 auStack_24 [9];
  
  iVar2 = *(int *)(param_2 + 0x14);
  iVar1 = *(int *)(param_2 + 4);
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 0x88);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar2 + 0x8c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar2 + 0x90);
  }
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_2 + 0x10);
  param_2 = (uint)(_DAT_00b381e8 < *(float *)(in_ECX + 0x78) - *(float *)(in_ECX + 0xa0));
  uVar6 = *(undefined4 *)(in_ECX + 0x5c);
  fVar5 = (float10)FUN_00982c30(uVar6,param_2);
  FUN_007f3300(param_1,(float)fVar5,uVar6,param_2);
  FUN_00982c30();
  fVar5 = (float10)FUN_0098598a();
  fVar7 = -(float)fVar5;
  uVar6 = 0;
  fVar5 = (float10)FUN_0098598a(0,fVar7);
  FUN_007118e0((float)fVar5,uVar6,fVar7);
  puVar3 = auStack_24;
  puVar4 = (undefined4 *)(iVar1 + 0x30);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



undefined4 FUN_006965c0(void)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_30 [12];
  undefined4 auStack_24 [9];
  
  if (*(int **)(in_ECX + 0x68) != (int *)0x0) {
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x68) + 0x20))();
    if (piVar3 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar3 + 400))();
      if (cVar2 != '\0') {
        iVar4 = (**(code **)(piVar3[0x17] + 0x24))();
        goto LAB_00696601;
      }
    }
  }
  piVar3 = (int *)0x0;
  iVar4 = 0;
LAB_00696601:
  iVar5 = FUN_0065a2c0();
  if (((iVar4 != 0) && (iVar5 != 0)) && (iVar5 = *(int *)(in_ECX + 0x88), iVar5 != 0)) {
    if (((*(float *)(in_ECX + 100) < 0.5) && (piVar3 == DAT_00b333c4)) &&
       ((char)DAT_00b333c4[0x162] == '\0')) {
      uVar9 = *(undefined4 *)(iVar4 + 0x8c);
      uVar1 = *(undefined4 *)(iVar4 + 0x90);
      *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x88);
      *(undefined4 *)(iVar5 + 0x58) = uVar9;
      *(undefined4 *)(iVar5 + 0x5c) = uVar1;
    }
    if (0.0 < *(float *)(in_ECX + 100)) {
      FUN_005e1500(auStack_30);
      FUN_00404c90();
      fVar8 = (float10)FUN_0098598a();
      fVar10 = -(float)fVar8;
      uVar9 = 0;
      fVar8 = (float10)FUN_0098598a(0,fVar10);
      FUN_007118e0((float)fVar8,uVar9,fVar10);
      puVar6 = auStack_24;
      puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x88) + 0x30);
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    FUN_00707370(0,0);
    return 0;
  }
  return 1;
}



void FUN_00696920(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *in_ECX;
  ushort auStack_8 [2];
  int iStack_4;
  
  (**(code **)(*in_ECX + 0x148))();
  FUN_0069f800(param_1,param_2);
  FUN_004534d0(in_ECX + 0x20,4);
  FUN_0046ac80(in_ECX + 0x17,4);
  puVar1 = (undefined4 *)FUN_00401f00(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[8] = 0;
  }
  if (0x2f < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(puVar1,0xc);
    FUN_004534d0(puVar1 + 3,0x10);
    FUN_0046ac80(puVar1 + 7,4);
  }
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x30) {
    puVar2 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = DAT_00b27110;
    puVar1[4] = DAT_00b27114;
    puVar1[5] = DAT_00b27118;
    puVar1[6] = DAT_00b2711c;
  }
  FUN_0046aca0(&iStack_4,4);
  in_ECX[0x26] = iStack_4;
  FUN_0046ac80(auStack_8,2);
  if (auStack_8[0] != 0) {
    puVar3 = (uint *)FUN_00401f00((auStack_8[0] + 1) * 4);
    puVar1[8] = puVar3;
    *puVar3 = (uint)auStack_8[0];
    FUN_0046aca0(puVar1[8] + 4,(uint)auStack_8[0] * 4);
  }
  in_ECX[0x21] = (int)puVar1;
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x28,4);
  }
  return;
}



void FUN_00696aa0(void)

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
  puStack_8 = &LAB_009c59cb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0069f2b0(uVar2);
  *in_ECX = &PTR_FUN_00a75bc4;
  in_ECX[6] = &PTR_FUN_00a75bbc;
  in_ECX[0x1f] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x17] = 0x45800000;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4 = 5;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1f] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x22];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x22] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x23];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x23] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x24];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x24] = 0;
  }
  in_ECX[0x28] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00696c00(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c5a0e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[6];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  puVar1 = (undefined4 *)in_ECX[5];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00696ce0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *in_ECX;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 auStack_30 [9];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5a51;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00401f00(0xdc,uVar3);
  puVar7 = (undefined4 *)0x0;
  local_4 = 0;
  if (iVar4 != 0) {
    puVar7 = (undefined4 *)FUN_0070b780(0);
  }
  puVar6 = (undefined4 *)in_ECX[0x25];
  local_4 = 0xffffffff;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar6 + 1);
      if ((LVar5 == 0) && (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
    }
    in_ECX[0x25] = (int)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar4 = in_ECX[0x25];
  puVar7 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
  *(undefined4 *)(iVar4 + 0x88) = *puVar7;
  *(undefined4 *)(iVar4 + 0x8c) = puVar7[1];
  *(undefined4 *)(iVar4 + 0x90) = puVar7[2];
  iVar4 = FUN_00401f00(0xdc,uVar3);
  local_4 = 1;
  if (iVar4 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_0070b780(0);
  }
  puVar6 = (undefined4 *)in_ECX[0x22];
  local_4 = 0xffffffff;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar6 + 1);
      if ((LVar5 == 0) && (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
    }
    in_ECX[0x22] = (int)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar4 = in_ECX[0x22];
  puVar7 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
  *(undefined4 *)(iVar4 + 0x54) = *puVar7;
  *(undefined4 *)(iVar4 + 0x58) = puVar7[1];
  *(undefined4 *)(iVar4 + 0x5c) = puVar7[2];
  iVar4 = FUN_006ff9c0(&DAT_00a7d0ec);
  if (iVar4 == 0) {
    iVar4 = FUN_00401f00(0x10);
    local_4 = 2;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_006fa820();
    }
    local_4 = 0xffffffff;
    FUN_006ff820(&DAT_00a7d0ec,iVar4);
  }
  *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) | 1;
  puVar7 = (undefined4 *)in_ECX[0x1f];
  if (puVar7 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar7 + 1);
    if ((LVar5 == 0) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    in_ECX[0x1f] = 0;
  }
  FUN_007117c0(in_ECX[10],in_ECX[8],in_ECX[9]);
  puVar7 = auStack_30;
  puVar6 = (undefined4 *)(in_ECX[0x22] + 0x30);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)FUN_007f4d60(in_ECX[0x22],1);
  puVar7 = (undefined4 *)in_ECX[0x1f];
  if (puVar7 != puVar6) {
    if (puVar7 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar7 + 1);
      if ((LVar5 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
    }
    in_ECX[0x1f] = (int)puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if (in_ECX[0x1f] != 0) {
    *(undefined4 *)(in_ECX[0x1f] + 0x134) = DAT_00b38148;
    *(undefined4 *)(in_ECX[0x1f] + 0x13c) = _DAT_00b38128;
    *(undefined4 *)(in_ECX[0x1f] + 0x140) = _DAT_00b38130;
    *(undefined4 *)(in_ECX[0x1f] + 0x144) = _DAT_00b38138;
    *(undefined4 *)(in_ECX[0x1f] + 0x148) = _DAT_00b38140;
    uVar2 = _DAT_00b38168;
    uVar1 = _DAT_00b38160;
    iVar4 = in_ECX[0x1f];
    *(undefined4 *)(iVar4 + 0x160) = _DAT_00b38158;
    *(undefined4 *)(iVar4 + 0x164) = uVar1;
    *(undefined4 *)(iVar4 + 0x168) = uVar2;
    *(undefined4 *)(iVar4 + 0x16c) = 0x3f800000;
    uVar2 = _DAT_00b38180;
    uVar1 = _DAT_00b38178;
    iVar4 = in_ECX[0x1f];
    *(undefined4 *)(iVar4 + 0x170) = _DAT_00b38170;
    *(undefined4 *)(iVar4 + 0x174) = uVar1;
    *(undefined4 *)(iVar4 + 0x178) = uVar2;
    *(undefined4 *)(iVar4 + 0x17c) = 0x3f800000;
    *(undefined4 *)(in_ECX[0x1f] + 0x150) = _DAT_00b38190;
    *(undefined4 *)(in_ECX[0x1f] + 0x14c) = DAT_00b38188;
    *(undefined4 *)(in_ECX[0x1f] + 0x154) = _DAT_00b38198;
    *(undefined4 *)(in_ECX[0x1f] + 0x15c) = _DAT_00b381a8;
    *(undefined1 *)(in_ECX[0x1f] + 0x183) = 1;
    FUN_007f2ec0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006970a0(float param_1,float param_2,float param_3,undefined4 param_4,int *param_5,
                 char param_6)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar13 = param_5;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c5a7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_5 != (int *)0x0) {
    cVar2 = (**(code **)(*param_5 + 400))(uVar3);
    if (cVar2 != '\0') {
      cVar2 = FUN_005e8eb0();
      if (cVar2 != '\0') goto LAB_006974d9;
    }
  }
  param_5 = (int *)in_ECX[0x1e];
  in_ECX[0x28] = (int)param_5;
  iVar4 = FUN_0065a2c0();
  if (iVar4 != 0) {
    iVar4 = FUN_0065a2c0();
    if ((*(uint *)(iVar4 + 500) & 0x8000) != 0) {
      (**(code **)(*in_ECX + 0x214))();
    }
    puVar5 = &param_5;
    FUN_0065a2c0(puVar5);
    FUN_0057e270(puVar5);
    uVar3 = (uint)param_5 | 0x4000;
    iVar4 = FUN_0065a2c0();
    piVar6 = *(int **)(iVar4 + 0x364);
    if (piVar6 != (int *)0x0) {
      iVar4 = piVar6[2];
      if ((iVar4 != 0) && (iVar4 != -0x14)) {
        *(uint *)(iVar4 + 0x30) = uVar3;
      }
      (**(code **)(*piVar6 + 0x80))();
    }
  }
  pcVar1 = *(code **)(*in_ECX + 0x154);
  in_ECX[0x20] = 1;
  iVar4 = (*pcVar1)();
  if (iVar4 != 0) {
    puVar5 = (undefined4 *)FUN_007101f0(&fStack_24,&DAT_00b258dc);
    FUN_0069f880(param_1,param_2,param_3,*puVar5,puVar5[1],puVar5[2],param_4);
  }
  if ((piVar13 != (int *)0x0) && ((piVar13 != DAT_00b333c4 || ((char)DAT_00b333c4[0x162] != '\0'))))
  {
    in_ECX[0x26] = (int)piVar13;
    piVar6 = (int *)(**(code **)(*piVar13 + 0x154))();
    if (piVar6 != (int *)0x0) {
      uVar7 = (**(code **)(*piVar6 + 0x58))("Bip01 Spine2");
      FUN_0075fa90(uVar7);
    }
  }
  iVar4 = (**(code **)(*in_ECX + 0x154))();
  fStack_24 = *(float *)(iVar4 + 0x54);
  fStack_20 = *(float *)(iVar4 + 0x58);
  fStack_1c = *(float *)(iVar4 + 0x5c);
  param_5 = (int *)((fStack_1c - param_3) * (fStack_1c - param_3) +
                   (fStack_24 - param_1) * (fStack_24 - param_1) +
                   (fStack_20 - param_2) * (fStack_20 - param_2));
  fVar9 = (float10)FUN_00982c30();
  param_5 = (int *)(float)fVar9;
  FUN_007f3530(0x3c23d70a,param_5,in_ECX[0x17],0);
  if (param_6 == '\0') {
    iVar4 = in_ECX[0x1b];
    puVar5 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
    uVar7 = *puVar5;
    uVar16 = 0x3f800000;
    uVar15 = 0x3f800000;
    uVar14 = 0;
    uVar17 = puVar5[1];
    uVar11 = puVar5[2];
    piVar6 = in_ECX;
    uVar8 = FUN_006ecc80(uVar7,uVar17,uVar11);
    FUN_0069ba90(iVar4,uVar8,uVar7,uVar17,uVar11,piVar6,piVar13,uVar14,uVar15,uVar16);
  }
  in_ECX[0x26] = 0;
  iVar4 = (**(code **)(*(int *)(in_ECX[0x1d] + 0x18) + 0x14))();
  if (iVar4 != 0) {
    FUN_00413370();
    param_5 = (int *)(**(code **)(*(int *)(in_ECX[0x1d] + 0x18) + 0x14))();
    FUN_006ecc80();
    uVar7 = FUN_004c9be0();
    uVar17 = 3;
    FUN_006ecc80(uVar7,3);
    uVar7 = FUN_00441800(uVar7,uVar17);
    iVar4 = (**(code **)(*in_ECX + 0x154))();
    if (iVar4 == 0) {
      puVar5 = &DAT_00b258dc;
    }
    else {
      (**(code **)(*in_ECX + 0x154))();
      puVar5 = (undefined4 *)FUN_007101f0(auStack_18,&DAT_00b258dc);
    }
    fStack_1c = (float)puVar5[2];
    uVar17 = *puVar5;
    uVar11 = puVar5[1];
    iVar4 = FUN_00401f00(0x20);
    uStack_4 = 0;
    if (iVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar16 = 0;
      uVar15 = 0x3f800000;
      uVar14 = 0x40a00000;
      fVar10 = (float)param_5;
      fVar12 = fStack_1c;
      uVar8 = FUN_006ecc80(0x40a00000,uVar7,param_5,uVar17,uVar11,fStack_1c,param_1,param_2,param_3,
                           0x3f800000,0);
      uVar7 = FUN_005713f0(uVar8,uVar14,uVar7,fVar10,uVar17,uVar11,fVar12,param_1,param_2,param_3,
                           uVar15,uVar16);
    }
    uStack_4 = 0xffffffff;
    FUN_00678d30(uVar7);
    FUN_00570c00("SpecialIdle_AreaEffect");
  }
  if (((*(int *)(DAT_00b33398 + 0x24) != 0) && (*(int *)(in_ECX[0x1d] + 0x8c) != 0)) &&
     (param_6 == '\0')) {
    iVar4 = FUN_006ae0a0(*(undefined4 *)(*(int *)(in_ECX[0x1d] + 0x8c) + 0xc),0x102,1);
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
      FUN_006b7360(*puVar5,puVar5[1],puVar5[2]);
      FUN_006b71c0(0);
      FUN_006b73e0();
      FUN_00401f20(iVar4);
    }
  }
LAB_006974d9:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006980b0(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int in_ECX;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  int *piStack_64;
  undefined4 uStack_60;
  int *local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c5aab;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&piStack_64;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_5c = param_1;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0xc) != *(int *)(in_ECX + 0x70)) goto LAB_006983e5;
    iVar4 = (**(code **)(*param_1 + 4))(uVar3);
    if (*(int *)(in_ECX + 0x98) == iVar4) goto LAB_006983e5;
  }
  iStack_44 = FUN_00401f00(0xdc);
  uStack_14 = 0;
  if (iStack_44 == 0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = FUN_0070b780(0);
  }
  uVar1 = uStack_48;
  uStack_14 = 0xffffffff;
  FUN_006ecc80();
  iVar4 = FUN_004c9be0();
  FUN_006ecc80();
  iVar5 = FUN_004ca790();
  if ((((iVar5 == 0) || ((uint)*(ushort *)(iVar5 + 0xb6) <= iVar4 + 2U)) ||
      (iVar4 = *(int *)(*(int *)(iVar5 + 0xb0) + (iVar4 + 2U) * 4), iVar4 == 0)) ||
     (*(ushort *)(iVar4 + 0xb6) < 4)) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(*(int *)(iVar4 + 0xb0) + 0xc);
  }
  (**(code **)(*piVar6 + 0x84))(uVar1,1);
  iVar4 = FUN_007f4d60(uVar1,0);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x134) = DAT_00b381b0;
    *(undefined4 *)(iVar4 + 0x13c) = _DAT_00b381b8;
    *(undefined4 *)(iVar4 + 0x140) = _DAT_00b381c0;
    *(undefined4 *)(iVar4 + 0x144) = _DAT_00b38138;
    *(undefined4 *)(iVar4 + 0x148) = _DAT_00b38140;
    uVar2 = _DAT_00b38168;
    uVar1 = _DAT_00b38160;
    *(undefined4 *)(iVar4 + 0x160) = _DAT_00b38158;
    *(undefined4 *)(iVar4 + 0x164) = uVar1;
    *(undefined4 *)(iVar4 + 0x168) = uVar2;
    *(undefined4 *)(iVar4 + 0x16c) = 0x3f800000;
    uStack_58 = _DAT_00b38180;
    piVar6 = _DAT_00b38178;
    uStack_60 = _DAT_00b38170;
    local_5c = _DAT_00b38178;
    *(undefined4 *)(iVar4 + 0x170) = _DAT_00b38170;
    *(int **)(iVar4 + 0x174) = piVar6;
    uStack_54 = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x178) = uStack_58;
    *(undefined4 *)(iVar4 + 0x17c) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x150) = _DAT_00b381d0;
    *(undefined4 *)(iVar4 + 0x14c) = DAT_00b381c8;
    *(undefined4 *)(iVar4 + 0x154) = _DAT_00b381d8;
    uVar1 = _DAT_00b381e0;
    *(undefined1 *)(iVar4 + 0x183) = 0;
    *(undefined4 *)(iVar4 + 0x15c) = uVar1;
    FUN_007f2ec0();
  }
  FUN_0065a2c0();
  FUN_00891440(&uStack_48);
  FUN_0043f3e0(&uStack_60,&uStack_48);
  uStack_4c = 0;
  if (*(int **)(in_ECX + 0x98) != (int *)0x0) {
    piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x98) + 0x154))();
    if (piVar6 != (int *)0x0) {
      uStack_4c = (**(code **)(*piVar6 + 0x58))("Bip01 Spine2");
    }
  }
  piVar6 = (int *)(**(code **)(*piStack_64 + 4))();
  piVar6 = (int *)(**(code **)(*piVar6 + 0x154))();
  if (piVar6 != (int *)0x0) {
    local_5c = (int *)(**(code **)(*piVar6 + 0x58))("Bip01 Spine2");
    if (local_5c == (int *)0x0) {
      local_5c = piVar6;
    }
    puVar7 = (undefined4 *)FUN_00401f00(0x20);
    puVar8 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar8 = puVar7;
    }
    FUN_0075fa90(iVar4);
    FUN_0075fa90(uStack_48);
    FUN_0075fa90(iStack_44);
    FUN_0075fa90(local_5c);
    puVar8[2] = uStack_58;
    puVar8[3] = uStack_54;
    puVar8[4] = uStack_50;
    puVar8[7] = *(undefined4 *)(in_ECX + 0x84);
    FUN_00696460(0,puVar8);
    *(undefined4 **)(in_ECX + 0x84) = puVar8;
  }
LAB_006983e5:
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00698410(void)

{
  char cVar1;
  int iVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  float *pfVar5;
  int *piVar6;
  int ***pppiVar7;
  undefined4 *puVar8;
  byte bVar9;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  int ***pppiStack_118;
  uint uStack_114;
  undefined1 auStack_104 [12];
  int ***pppiStack_f8;
  int ***pppiStack_f4;
  int **ppiStack_f0;
  int **ppiStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_70;
  uint uStack_6c;
  int ***pppiStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int ***pppiStack_14;
  
  pppiStack_14 = (int ***)0xffffffff;
  puStack_18 = &LAB_009c5917;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_104;
  uStack_114 = DAT_00b30aac ^ (uint)&stack0xfffffef0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (in_ECX[0x16] == 0) goto LAB_00698872;
  pppiStack_118 = (int ***)0x698466;
  iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  if (iVar2 != 0) goto LAB_00698872;
  pppiStack_118 = (int ***)0x698475;
  pppiVar3 = (int ***)FUN_0065a2c0();
  pppiStack_118 = (int ***)0x69847e;
  pppiVar4 = (int ***)FUN_006ecc80();
  pppiStack_f4 = pppiVar4;
  if (pppiVar4 == (int ***)0x0) {
    pppiStack_f8 = (int ***)0x0;
  }
  else {
    pppiStack_118 = (int ***)0x69848f;
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') {
      pppiStack_f8 = DAT_00b35c24;
    }
    else {
      pppiStack_118 = (int ***)0x69849b;
      pppiStack_f8 = (int ***)FUN_00424180();
    }
  }
  if (pppiVar3 == (int ***)0x0) {
    pppiStack_118 = (int ***)0x1;
    FUN_00890c00();
    uStack_64 = 0x3f800000;
    pppiStack_118 = (int ***)0x6984e3;
    pppiStack_14 = pppiVar3;
    uStack_70 = (**(code **)(*in_ECX + 0x154))();
    pppiStack_118 = (int ***)0x6984f6;
    pfVar5 = (float *)(**(code **)(*in_ECX + 0x174))();
    fStack_e0 = *pfVar5 * 0.14287673;
    pppiStack_118 = (int ***)0x14;
    fStack_dc = pfVar5[1] * 0.14287673;
    fStack_d8 = pfVar5[2] * 0.14287673;
    pppiStack_68 = pppiStack_f8;
    uStack_60 = 0;
    ppiStack_f0 = (int **)FUN_00401f00();
    pppiStack_14._0_1_ = 1;
    if (ppiStack_f0 == (int **)0x0) {
      pppiStack_118 = (int ***)0x0;
    }
    else {
      pppiStack_118 = (int ***)0x1;
      pppiStack_118 = (int ***)FUN_00532090(0x3f800000);
    }
    pppiStack_14 = (int ***)((uint)pppiStack_14._1_3_ << 8);
    FUN_00608ae0();
    uStack_5c = 0;
    pppiStack_118 = (int ***)0x69857c;
    cVar1 = FUN_0045a500();
    if (cVar1 != '\0') {
      uStack_6c = 7;
      goto LAB_00698663;
    }
    if ((int *)in_ECX[0x1a] == (int *)0x0) {
LAB_00698607:
      pppiStack_118 = (int ***)0x698613;
      pppiStack_118 = (int ***)(**(code **)(*in_ECX + 0x154))();
      iVar2 = FUN_00480340();
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10) == 0)) {
LAB_00698644:
        pppiStack_118 = (int ***)0x698649;
        iVar2 = FUN_00531d80();
        uStack_6c = iVar2 << 0x10 | 7;
      }
      else {
        pppiStack_118 = &ppiStack_f0;
        iVar2 = FUN_00497340();
        uStack_6c = (uint)*(ushort *)(iVar2 + 2) << 0x10 | 7;
      }
    }
    else {
      pppiStack_118 = (int ***)0x698592;
      piVar6 = (int *)(**(code **)(*(int *)in_ECX[0x1a] + 0x20))();
      if (piVar6 == (int *)0x0) goto LAB_00698607;
      pppiStack_118 = (int ***)0x6985a4;
      cVar1 = (**(code **)(*piVar6 + 400))();
      if (cVar1 == '\0') {
        pppiStack_118 = (int ***)0x6985d6;
        pppiStack_118 = (int ***)(**(code **)(*piVar6 + 0x154))();
        iVar2 = FUN_00480340();
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
          pppiStack_118 = &ppiStack_f0;
          iVar2 = FUN_00497340();
          uStack_6c = (uint)*(ushort *)(iVar2 + 2) << 0x10 | 7;
          goto LAB_00698663;
        }
        goto LAB_00698644;
      }
      pppiStack_118 = &ppiStack_f0;
      iVar2 = FUN_0065abe0();
      uStack_6c = (uint)*(ushort *)(iVar2 + 2) << 0x10 | 7;
    }
LAB_00698663:
    pppiStack_118 = (int ***)0x1;
    uStack_58 = 6;
    iVar2 = thunk_FUN_00401aa0(0x3f0);
    bVar9 = 0x10 - ((byte)iVar2 & 0xf);
    ppiStack_f0 = (int **)(iVar2 + (uint)bVar9);
    *(byte *)((int)ppiStack_f0 + -1) = bVar9;
    pppiStack_14._0_1_ = 2;
    pppiVar3 = (int ***)FUN_0068f400(&fStack_e0);
    pppiVar3[0xc9] = (int **)0x3f800000;
    pppiStack_14 = (int ***)((uint)pppiStack_14._1_3_ << 8);
    pppiVar3[0x7d] = (int **)((uint)pppiVar3[0x7d] | 0x80000);
    if (DAT_00b333b8 == '\0') {
      pppiVar3[0x7d] = (int **)((uint)pppiVar3[0x7d] & 0xffefffff);
    }
    else {
      pppiVar3[0x7d] = (int **)((uint)pppiVar3[0x7d] | 0x100000);
    }
    ppiStack_f0 = (int **)&pppiStack_118;
    pppiStack_118 = pppiVar3;
    InterlockedIncrement((LONG *)(pppiVar3 + 1));
    (**(code **)(*(int *)in_ECX[0x16] + 400))();
    FUN_008910f0(1000);
    pppiStack_14 = (int ***)0xffffffff;
    pppiStack_118 = (int ***)0x698725;
    FUN_00890f70();
    pppiVar4 = pppiStack_f4;
  }
  if ((pppiVar4 == (int ***)0x0) || (pppiStack_f8 == (int ***)0x0)) {
    fVar10 = (float10)-4.8618427e+37;
  }
  else {
    pppiStack_118 = (int ***)0x69873b;
    fVar10 = (float10)FUN_004cace0();
    fVar10 = fVar10 * (float10)0.1428767293691635;
  }
  pppiVar3[0xc6] = (int **)(float)fVar10;
  if (pppiVar3[2] == (int **)0x0) {
    iVar2 = 0;
  }
  else {
    pppiStack_118 = (int ***)0x69875b;
    iVar2 = FUN_008ac0c0();
  }
  if (*(int *)(iVar2 + 8) == 0) {
    pppiStack_f4 = (int ***)0x0;
  }
  else {
    pppiStack_f4 = *(int ****)(*(int *)(iVar2 + 8) + 0x2b0);
  }
  pppiStack_118 = pppiStack_f8;
  FUN_00895060();
  pppiStack_118 = (int ***)0x698792;
  pppiVar4 = (int ***)(**(code **)(*in_ECX + 0x154))();
  if (pppiVar3[0xd9] == (int **)0x0) {
    pppiVar7 = (int ***)0x0;
  }
  else {
    pppiStack_118 = (int ***)0x0;
    pppiVar7 = (int ***)FUN_0089f6b0();
  }
  if (pppiVar7 != pppiVar4) {
    if (pppiVar3[0xd9] != (int **)0x0) {
      pppiStack_118 = (int ***)0x0;
      FUN_0089f650(pppiVar4);
    }
    if ((pppiStack_f8 != (int ***)0x0) && (*(char *)((int)pppiStack_f8 + 0x1a) != '\0')) {
      pppiStack_118 = (int ***)0x0;
      (*(code *)(*pppiVar3)[0x22])();
    }
    pppiStack_118 = pppiVar4;
    FUN_0088ee20();
    FUN_0088d070(pppiVar4,6,1,0);
  }
  pppiStack_118 = (int ***)0x6987fc;
  puVar8 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
  pppiVar3 = pppiStack_f8;
  ppiStack_ec = (int **)*puVar8;
  uStack_e8 = puVar8[1];
  fStack_e4 = (float)puVar8[2];
  if (pppiStack_f4 != pppiStack_f8) {
    if (pppiStack_f4 != (int ***)0x0) {
      pppiStack_118 = (int ***)0x0;
      FUN_0088cd50(pppiVar4,1);
    }
    fStack_e4 = fStack_e4 + 8.0;
  }
  if (pppiVar3 != (int ***)0x0) {
    pppiStack_118 = &ppiStack_ec;
    FUN_00452a10();
    pppiStack_118 = (int ***)&pppiStack_f4;
    FUN_0057e270();
    pppiStack_118 = (int ***)0x0;
    (*(code *)(*pppiVar3)[0x24])(pppiVar4,1,0,(uint)pppiStack_f4 >> 0x10);
  }
LAB_00698872:
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006988a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *puVar6;
  undefined1 auStack_64 [12];
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009c5b33;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_64;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_58 = (undefined4 *)param_4;
  FUN_0069f360(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  *in_ECX = &PTR_FUN_00a75bc4;
  in_ECX[6] = &PTR_FUN_00a75bbc;
  in_ECX[0x1f] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  DAT_00b2dc90 = DAT_00b381a0;
  in_ECX[0x20] = 0;
  local_58 = *(undefined4 **)(in_ECX[0x1d] + 0x74);
  local_14 = 5;
  fVar1 = (float)local_58 * _DAT_00b37ee8;
  in_ECX[0x21] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x17] = fVar1;
  in_ECX[0x28] = 0;
  iVar3 = (**(code **)(*param_1 + 0x20))(uVar2);
  if (((iVar3 == DAT_00b333c4) && (iVar3 = FUN_00660110(1), iVar3 != 0)) &&
     (iVar3 = FUN_00660110(1), (*(byte *)(iVar3 + 0x18) & 1) == 0)) {
    fStack_4c = _DAT_00b38150 + (float)in_ECX[0xd];
    FUN_004d8a30(in_ECX[0xb],in_ECX[0xc],fStack_4c);
  }
  puVar4 = (undefined4 *)FUN_0069fd20(in_ECX[0x1d]);
  local_58 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar4 + 1);
  }
  local_14 = CONCAT31(local_14._1_3_,6);
  if (puVar4 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar4 + 1);
    if (LVar5 == 0) {
      (**(code **)*puVar4)(1);
    }
    local_58 = (undefined4 *)0x0;
    puVar4 = (undefined4 *)0x0;
  }
  FUN_00696ce0();
  FUN_004d7d10(in_ECX[0x22]);
  FUN_00698410();
  uStack_40 = 0xff7fffff;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  iVar3 = FUN_0065a2c0();
  if ((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) {
    FUN_008ac0b0(&uStack_40);
  }
  puVar6 = in_ECX;
  FUN_006ecc80();
  FUN_004d35d0(puVar6);
  in_ECX[0x20] = 0;
  if (*(int *)(in_ECX[0x1d] + 0x84) != 0) {
    iVar3 = in_ECX[0x27];
    uStack_48 = *(undefined4 *)(*(int *)(in_ECX[0x1d] + 0x84) + 0xc);
    if (iVar3 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar3);
      in_ECX[0x27] = 0;
    }
    puVar4 = local_58;
    if ((*(int *)(DAT_00b33398 + 0x24) != 0) && (in_ECX[0x25] != 0)) {
      iVar3 = FUN_006ae0a0(uStack_48,0x102,1);
      in_ECX[0x27] = iVar3;
      puVar4 = local_58;
      if (iVar3 != 0) {
        uStack_54 = in_ECX[0xb];
        uStack_50 = in_ECX[0xc];
        fStack_4c = (float)in_ECX[0xd];
        FUN_006b7360(uStack_54,uStack_50,fStack_4c);
        FUN_006aa980(*(undefined4 *)in_ECX[0x27],in_ECX[0x25]);
        FUN_006b7190(1);
        puVar4 = local_58;
      }
    }
  }
  FUN_0069ff10();
  if ((int *)in_ECX[0x1a] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*(int *)in_ECX[0x1a] + 0x20))();
  }
  if (iVar3 == DAT_00b333c4) {
    FUN_00446cb0(in_ECX);
  }
  else {
    _DAT_00b3c0d0 = _DAT_00b38110 + _DAT_00b3c0d0;
  }
  local_14 = CONCAT31(local_14._1_3_,5);
  if ((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) {
    (**(code **)*puVar4)(1);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00698c00(void)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c5bab;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a75bc4;
  in_ECX[6] = &PTR_FUN_00a75bbc;
  local_4 = 5;
  if (DAT_00b333c4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = DAT_00b333c4 + 0x5c;
  }
  if (in_ECX[0x1a] != iVar5) {
    local_18 = _DAT_00b38110;
    if ((float)_DAT_00b38110 < 0.0) {
      local_18 = (undefined4 *)0x0;
    }
    _DAT_00b3c0d0 = _DAT_00b3c0d0 - (float)local_18;
  }
  FUN_0065c620(in_ECX);
  FUN_007f4420(in_ECX[0x22],in_ECX[0x1f],uVar4);
  pcVar3 = InterlockedDecrement_exref;
  puVar1 = (undefined4 *)in_ECX[0x1f];
  if (puVar1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar1 + 1);
    if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1f] = 0;
  }
  iVar5 = in_ECX[0x22];
  if ((((iVar5 != 0) && (*(int **)(iVar5 + 0x1c) != (int *)0x0)) &&
      ((**(code **)(**(int **)(iVar5 + 0x1c) + 0x88))(&local_18,iVar5), puVar1 = local_18,
      local_18 != (undefined4 *)0x0)) &&
     ((LVar6 = InterlockedDecrement(local_18 + 1), LVar6 == 0 && (puVar1 != (undefined4 *)0x0)))) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x25];
  if (puVar1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar1 + 1);
    if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x25] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x22];
  if (puVar1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar1 + 1);
    if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x22] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x23];
  if (puVar1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar1 + 1);
    if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x23] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x24];
  if (puVar1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar1 + 1);
    if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x24] = 0;
  }
  iVar5 = in_ECX[0x21];
  while (iVar5 != 0) {
    puVar1 = (undefined4 *)in_ECX[0x21];
    iStack_14 = puVar1[7];
    FUN_007f4420(puVar1[1],*puVar1);
    piVar2 = (int *)in_ECX[0x21];
    puVar1 = (undefined4 *)*piVar2;
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar2 = 0;
    }
    iVar5 = *(int *)(in_ECX[0x21] + 4);
    if ((((iVar5 != 0) && (piVar2 = *(int **)(iVar5 + 0x1c), piVar2 != (int *)0x0)) &&
        ((**(code **)(*piVar2 + 0x88))(&local_18,*(undefined4 *)(in_ECX[0x21] + 4)),
        puVar1 = local_18, local_18 != (undefined4 *)0x0)) &&
       ((LVar6 = InterlockedDecrement(local_18 + 1), LVar6 == 0 && (puVar1 != (undefined4 *)0x0))))
    {
      (**(code **)*puVar1)(1);
    }
    iVar5 = in_ECX[0x21];
    puVar1 = *(undefined4 **)(iVar5 + 4);
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(iVar5 + 4) = 0;
    }
    iVar5 = in_ECX[0x21];
    puVar1 = *(undefined4 **)(iVar5 + 0x14);
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(iVar5 + 0x14) = 0;
    }
    iVar5 = in_ECX[0x21];
    puVar1 = *(undefined4 **)(iVar5 + 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(iVar5 + 0x18) = 0;
    }
    iVar5 = in_ECX[0x21];
    if (iVar5 != 0) {
      FUN_00696c00();
      FUN_00401f20(iVar5);
    }
    in_ECX[0x21] = iStack_14;
    pcVar3 = InterlockedDecrement_exref;
    iVar5 = iStack_14;
  }
  if (in_ECX[0x27] != 0) {
    FUN_006b7240();
    iVar5 = in_ECX[0x27];
    if (iVar5 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar5);
      in_ECX[0x27] = 0;
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x25];
  local_4._0_1_ = 4;
  if (((puVar1 != (undefined4 *)0x0) && (iVar5 = (*pcVar3)(puVar1 + 1), iVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x24];
  local_4._0_1_ = 3;
  if (((puVar1 != (undefined4 *)0x0) && (iVar5 = (*pcVar3)(puVar1 + 1), iVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x23];
  local_4._0_1_ = 2;
  if (((puVar1 != (undefined4 *)0x0) && (iVar5 = (*pcVar3)(puVar1 + 1), iVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x22];
  local_4._0_1_ = 1;
  if (((puVar1 != (undefined4 *)0x0) && (iVar5 = (*pcVar3)(puVar1 + 1), iVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4 = (uint)local_4._1_3_ << 8;
  if (((puVar1 != (undefined4 *)0x0) && (iVar5 = (*pcVar3)(puVar1 + 1), iVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_4 = 0xffffffff;
  FUN_0069fa60();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00699030(byte param_1)

{
  FUN_00698c00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_00699050(void)

{
  char cVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x20))();
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 400))();
    if (cVar1 != '\0') {
      return in_ECX + -0x17;
    }
  }
  return (int *)0x0;
}



void FUN_00699080(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x30))();
  return;
}



void FUN_006990b0(undefined4 *param_1)

{
  (**(code **)*param_1)();
  return;
}



undefined4 FUN_006990e0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0046b250(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_009832e6(iVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00699116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0x120))();
      return uVar3;
    }
  }
  return 0;
}



void FUN_00699140(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a75dec;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  return;
}



void FUN_00699160(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_FUN_00a75dec;
  if (iVar1 != 0) {
    FUN_0069e0b0();
    FUN_00401f20(iVar1);
  }
  in_ECX[1] = 0;
  return;
}



undefined4 FUN_00699190(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  cVar2 = FUN_00415180();
  if (cVar2 != '\0') {
    in_ECX[2] = 5;
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x18))();
  if (iVar3 == 1) {
    iVar3 = *in_ECX;
    uVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b03800,0,param_2,param_3);
    (**(code **)(iVar3 + 4))(uVar4);
    return 1;
  }
  if (iVar3 == 4) {
    puVar1 = (undefined4 *)*in_ECX;
    uVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b03800,0,param_3);
    (*(code *)*puVar1)(uVar4);
    return 1;
  }
  iVar3 = (**(code **)(*in_ECX + 0x30))();
  if (iVar3 != 0) {
    in_ECX[2] = 6;
    return 0;
  }
  (**(code **)(*in_ECX + 0x34))(param_1);
  (**(code **)(*in_ECX + 0x3c))(param_1);
  cVar2 = FUN_00414fe0();
  if ((cVar2 != '\0') && (param_1 != (int *)0x0)) {
    (**(code **)(*in_ECX + 0x10))();
    return 1;
  }
  (**(code **)(*in_ECX + 0x14))();
  return 1;
}



undefined4 FUN_006992a0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)FUN_009832e6();
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)(*in_ECX + 0x30))();
    uVar2 = (**(code **)*puVar1)();
    return uVar2;
  }
  return 0;
}



void FUN_006992f0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,int *param_8,int *param_9,char *param_10,
                 int *param_11)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *in_ECX;
  float10 fVar8;
  
  if ((param_3 != 0) && (iVar2 = FUN_00413370(), 0 < iVar2)) {
    iVar2 = FUN_009828c0();
    piVar3 = (int *)(**(code **)(*in_ECX + 0x20))();
    if ((piVar3 == (int *)0x0) || (cVar1 = (**(code **)(*piVar3 + 400))(), cVar1 == '\0')) {
      param_11 = (int *)0x0;
    }
    else {
      param_11 = in_ECX + -0x17;
    }
    param_3._0_1_ = *param_10;
    for (; (param_9 != (int *)0x0 && (piVar3 = (int *)*param_9, piVar3 != (int *)0x0));
        param_9 = (int *)param_9[1]) {
      iVar4 = (**(code **)(*piVar3 + 0x124))();
      if (iVar4 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_006a1d70();
      }
      if ((((((iVar4 != 0) && (param_11 == (int *)0x0 || piVar5 != param_11)) && (iVar4 != param_7))
           && (((iVar6 = (**(code **)(*piVar3 + 0x154))(), iVar6 != 0 &&
                (fVar8 = (float10)FUN_004d7e30(&param_4), fVar8 <= (float10)iVar2)) &&
               ((piVar5 == (int *)0x0 || (cVar1 = FUN_005e8eb0(), cVar1 == '\0')))))) &&
          ((piVar3 = param_8, param_8 == (int *)0x0 ||
           (cVar1 = (**(code **)(*param_8 + 0x21c))(iVar4,param_2), cVar1 != '\0')))) &&
         (cVar1 = FUN_006990b0(iVar4,param_4,param_5,param_6,param_1,param_2,1), cVar1 != '\0')) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x20c))(iVar4,param_2);
        }
        if ((((param_7 == 0) && ((char)param_3 == '\0')) && (param_11 != (int *)0x0)) &&
           ((iVar4 = (**(code **)(*param_1 + 0x18))(), iVar4 == 0 ||
            (iVar4 = (**(code **)(*param_1 + 0x18))(), iVar4 == 5)))) {
          *param_10 = '\x01';
          iVar4 = *param_11;
          param_3._0_1_ = '\x01';
          uVar7 = FUN_00415360(1,0);
          (**(code **)(iVar4 + 0x39c))(uVar7);
        }
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00699500(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  int *piStack_18;
  float fStack_14;
  int *piStack_10;
  float fStack_c;
  double dStack_8;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x20))();
  if ((piVar2 == (int *)0x0) || (cVar1 = (**(code **)(*piVar2 + 400))(), cVar1 == '\0')) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = in_ECX + -0x17;
    if (piVar2 != (int *)0x0) {
      fVar7 = (float10)(**(code **)(*piVar2 + 0x26c))();
      dStack_8 = (double)fVar7;
      fVar7 = (float10)(**(code **)(*piVar2 + 0xec))();
      fVar7 = fVar7 * (float10)dStack_8;
      goto LAB_00699556;
    }
  }
  fVar7 = (float10)_DAT_00b36f20;
LAB_00699556:
  dStack_8 = (double)CONCAT44(dStack_8._4_4_,(float)fVar7);
  piStack_18 = piVar2;
  if (piVar2 == (int *)0x0) {
    piStack_18 = (int *)(**(code **)(*in_ECX + 0x20))();
  }
  fStack_14 = 3.4028235e+38;
  piStack_10 = (int *)0x0;
  fVar7 = (float10)FUN_00612f50(piStack_18,DAT_00b333c4,0);
  if ((fVar7 <= (float10)dStack_8._0_4_) &&
     (((fStack_c = 3.4028235e+38, piVar2 == (int *)0x0 ||
       (cVar1 = FUN_006131d0(piVar2,DAT_00b333c4,&fStack_c), cVar1 != '\0')) &&
      (fStack_c < 3.4028235e+38 != (fStack_c == 3.4028235e+38))))) {
    fStack_14 = fStack_c;
    piStack_10 = DAT_00b333c4;
  }
  FUN_00673a50(0);
  piVar3 = (int *)FUN_007616d0();
joined_r0x00699607:
  do {
    do {
      if ((piVar3 == (int *)0x0) || ((piVar3[1] == 0 && (*piVar3 == 0)))) {
        if (piStack_10 != (int *)0x0) {
          return piStack_10 + 0x1a;
        }
        return (int *)0x0;
      }
      piVar5 = (int *)*piVar3;
      if ((piVar5 == (int *)0x0) || (cVar1 = (**(code **)(*piVar5 + 400))(), cVar1 == '\0')) {
        piVar5 = (int *)0x0;
      }
      piVar3 = (int *)piVar3[1];
      piVar6 = (int *)0x0;
    } while (piVar5 == (int *)0x0);
    while( true ) {
      if (((piVar5 != piStack_18) && (cVar1 = (**(code **)(*piVar5 + 0x198))(0), cVar1 == '\0')) &&
         (iVar4 = (**(code **)(*piVar5 + 0x154))(), iVar4 != 0)) {
        fVar7 = (float10)FUN_00612f50(piStack_18,piVar5,0);
        if (((fVar7 <= (float10)dStack_8._0_4_) &&
            ((fStack_c = 3.4028235e+38, piVar2 == (int *)0x0 ||
             (cVar1 = FUN_006131d0(piVar2,piVar5,&fStack_c), cVar1 != '\0')))) &&
           (fStack_c <= fStack_14)) {
          fStack_14 = fStack_c;
          piStack_10 = piVar5;
        }
      }
      if ((piVar6 == (int *)0x0) || (*piVar6 == 0)) break;
      piVar5 = (int *)FUN_009832e6(*piVar6,0,&PTR_PTR_00b03070,&PTR_PTR_00b05940,0);
      piVar6 = (int *)piVar6[1];
      while( true ) {
        if (piVar5 == (int *)0x0) goto joined_r0x00699607;
        if (((int *)piVar5[0x16] != (int *)0x0) &&
           (iVar4 = (**(code **)(*(int *)piVar5[0x16] + 8))(), iVar4 == 0)) break;
        if (piVar6 == (int *)0x0) goto joined_r0x00699607;
        piVar5 = (int *)FUN_009832e6(*piVar6,0,&PTR_PTR_00b03070,&PTR_PTR_00b05940,0);
        piVar6 = (int *)piVar6[1];
      }
    }
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00699760(int param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined1 auStack_48 [8];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_48;
  FUN_0043f3e0(&local_3c,*(int *)(param_1 + 0x50) + 0x60);
  local_30 = local_3c - param_2;
  fStack_2c = local_38 - param_3;
  fStack_28 = local_34 - param_4;
  fVar2 = (float10)FUN_0043f350(0,0,0);
  local_40 = (float)FUN_00413370((float)fVar2);
  uVar1 = FUN_009828c0();
  uVar1 = FUN_009828c0(uVar1);
  fVar2 = (float10)FUN_00548cd0(uVar1);
  local_40 = (float)fVar2;
  if (local_40 <= 0.0) {
    return;
  }
  if (_DAT_00b37e98 < local_40) {
    local_40 = _DAT_00b37e98;
  }
  local_40 = local_40 * _DAT_00b37ec8;
  local_3c = local_40 * local_30;
  local_38 = fStack_2c * local_40;
  local_34 = local_40 * (fStack_28 + 0.5);
  local_30 = local_3c * 0.14287673;
  fStack_2c = local_38 * 0.14287673;
  fStack_28 = local_34 * 0.14287673;
  fVar2 = (float10)FUN_0089da90();
  local_40 = (float)fVar2;
  local_30 = local_40 * local_30;
  fStack_2c = local_40 * fStack_2c;
  fStack_28 = local_40 * fStack_28;
  fStack_24 = local_40 * fStack_24;
  FUN_008a6410();
  FUN_008a6410();
  (**(code **)(**(int **)(param_1 + 0x50) + 0x5c))(&local_30);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00699900(int *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *in_ECX;
  undefined4 unaff_EDI;
  float10 fVar9;
  float unaff_retaddr;
  undefined4 uStack_7c;
  float fStack_78;
  int iStack_74;
  float *pfStack_70;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  double dStack_54;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_20;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  pfStack_70 = &local_4c;
  iStack_74 = 0x69991c;
  iVar3 = (**(code **)(*param_1 + 0x15c))();
  fVar1 = *(float *)(iVar3 + 8);
  uStack_64 = (undefined4)((ulonglong)(double)fVar1 >> 0x20);
  iStack_74 = (int)&uStack_60 + 4;
  fStack_78 = 9.697686e-39;
  iVar3 = (**(code **)(*param_1 + 0x158))();
  fStack_4 = (float)(double)CONCAT44(SUB84((double)fVar1,0),unaff_EDI) - *(float *)(iVar3 + 8);
  fStack_78 = 9.697718e-39;
  pfVar4 = (float *)(**(code **)(*param_1 + 0x174))();
  fStack_48 = *pfVar4;
  fStack_44 = pfVar4[1];
  fStack_40 = fStack_4 * 0.75 + pfVar4[2];
  fVar1 = fStack_48 - unaff_retaddr;
  local_4c = fStack_40 - param_2;
  uStack_60 = (double)(fStack_44 - (float)param_1);
  dStack_54 = (double)local_4c;
  fStack_78 = 9.697865e-39;
  fVar9 = (float10)FUN_005f4880();
  fStack_78 = (float)fVar9;
  uStack_7c = 7;
  (**(code **)(*param_1 + 0x284))();
  (**(code **)(*param_1 + 0x284))();
  fVar9 = (float10)(double)CONCAT44(uStack_64,(int)((ulonglong)(double)fVar1 >> 0x20));
  fStack_c = (float)((float10)(double)CONCAT44(uStack_58,uStack_60._4_4_) *
                     (float10)(double)CONCAT44(uStack_58,uStack_60._4_4_) +
                    fVar9 * fVar9 +
                    (float10)(double)CONCAT44(pfStack_70,iStack_74) *
                    (float10)(double)CONCAT44(pfStack_70,iStack_74));
  fVar9 = (float10)FUN_00982c30();
  fStack_c = (float)fVar9;
  fStack_c = (float)FUN_00413370(fStack_c);
  uVar5 = FUN_009828c0();
  uVar5 = FUN_009828c0(uVar5);
  fVar9 = (float10)FUN_00548cd0(uVar5);
  fStack_c = (float)fVar9;
  if (_DAT_00b37e98 < fStack_c) {
    fStack_c = _DAT_00b37e98;
  }
  if (fStack_c <= _DAT_00b37e90) {
    if (fStack_c <= 0.0) {
      return;
    }
    piVar6 = (int *)(**(code **)(*in_ECX + 0x20))();
    if (piVar6 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar6 + 400))();
      if ((cVar2 != '\0') && (piVar6 = in_ECX + -0x17, piVar6 != (int *)0x0)) {
        pfStack_70 = DAT_00b258dc;
        fStack_78 = DAT_00b3f9ac;
        uStack_7c = DAT_00b3f9a8;
        iStack_74 = DAT_00b3f9b0;
        iVar3 = (**(code **)(*piVar6 + 0x154))();
        if (iVar3 != 0) {
          FUN_00718a80(&uStack_58);
          piVar7 = (int *)FUN_0053d4b0();
          pfStack_70 = (float *)*piVar7;
          puVar8 = (undefined4 *)FUN_0053d4b0();
          uStack_7c = *puVar8;
          fStack_78 = (float)puVar8[1];
          iStack_74 = puVar8[2];
        }
        fStack_10 = fStack_20 + fStack_20;
        (**(code **)(*param_1 + 0x398))(piVar6,fStack_10,0,&uStack_7c,&pfStack_70);
      }
    }
  }
  else {
    (**(code **)(*(int *)param_1[0x16] + 0x2f0))(param_1,uStack_8);
  }
  if ((0.0 < fStack_20) && (DAT_00b3b908 != '\0')) {
    uVar5 = FUN_004da2a0();
    FUN_00579b60("An explosion of %.1f magnitude hits %.20s!",(double)fStack_20,uVar5);
  }
  return;
}



void FUN_00699c10(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_0069dda0(param_1);
    iVar1 = (**(code **)(*in_ECX + 0x30))();
    if ((iVar1 == 0) && (iVar1 = in_ECX[1], *(float *)(iVar1 + 0x14) <= 0.0)) {
      if (iVar1 != 0) {
        FUN_0069e0b0();
        FUN_00401f20(iVar1);
      }
      in_ECX[1] = 0;
    }
  }
  return;
}



int FUN_00699c70(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x20))();
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 400))();
    if (cVar1 != '\0') {
      piVar2 = in_ECX + -0x17;
      goto LAB_00699c96;
    }
  }
  piVar2 = (int *)0x0;
LAB_00699c96:
  iVar3 = FUN_009832e6();
  if (piVar2 != (int *)0x0) {
    return piVar2[3];
  }
  if (iVar3 != 0) {
    iVar4 = (**(code **)(*(int *)(iVar3 + 0xc) + 0x20))();
    if (iVar4 != 0) {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0xc) + 0x20))();
      return *(int *)(iVar3 + 0xc);
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00699ce0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a559cc;
  in_ECX[3] = 0;
  _DAT_00ba7d34 = _DAT_00ba7d34 + 1;
  *in_ECX = &PTR_FUN_00a55b9c;
  DAT_00ba7f5c = DAT_00ba7f5c + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a75e64;
  FUN_008ba650(param_1);
  _DAT_00ba802c = _DAT_00ba802c + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00699d80(byte param_1)

{
  FUN_008ba5e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00699da0(void)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *in_ECX;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar5 = (int *)(**(code **)(*in_ECX + 0x20))();
  if (piVar5 != (int *)0x0) {
    cVar4 = (**(code **)(*piVar5 + 400))();
    if (cVar4 != '\0') {
      piVar5 = in_ECX + -0x17;
      goto LAB_00699dc7;
    }
  }
  piVar5 = (int *)0x0;
LAB_00699dc7:
  bVar3 = false;
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(piVar5[0x17] + 0x24))();
    bVar3 = false;
    if ((iVar6 != 0) && (*(short *)(iVar6 + 0xb8) != 0)) {
      bVar3 = true;
      FUN_00477ef0();
    }
    iVar6 = in_ECX[1];
    if (iVar6 != 0) {
      FUN_0069e0b0();
      FUN_00401f20(iVar6);
    }
    in_ECX[1] = 0;
  }
  iVar6 = (**(code **)(*in_ECX + 0x30))();
  if (iVar6 != 0) {
    iVar6 = *in_ECX;
    pcVar2 = *(code **)(iVar6 + 0x30);
    in_ECX[2] = 7;
    uVar7 = (*pcVar2)(0);
    (**(code **)(iVar6 + 0x18))(uVar7);
    if (bVar3) {
      uVar7 = 0;
      (**(code **)(*in_ECX + 0x30))(0);
      iVar6 = FUN_00419b30(uVar7);
      if (iVar6 != 0) {
        if (*(ushort *)(iVar6 + 0x20) == 0xffff) {
          pcVar8 = *(char **)(iVar6 + 0x1c);
          pcVar1 = pcVar8 + 1;
          do {
            cVar4 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar4 != '\0');
          uVar9 = (int)pcVar8 - (int)pcVar1;
        }
        else {
          uVar9 = (uint)*(ushort *)(iVar6 + 0x20);
        }
        if (uVar9 != 0) {
          uVar11 = 1;
          uVar10 = 0;
          uVar7 = (**(code **)(*(int *)(iVar6 + 0x18) + 0x14))(0,1);
          FUN_004384e0(uVar7,uVar10,uVar11);
        }
      }
    }
    (**(code **)(*in_ECX + 0x34))(0);
    (**(code **)(*in_ECX + 0x3c))(0);
  }
  return;
}



uint FUN_00699eb0(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint in_EAX;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 extraout_var;
  float10 fVar7;
  float10 fVar8;
  float fStack_c;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar3 = (**(code **)(*param_1 + 4))();
    in_EAX = 0;
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*param_1 + 4))();
      in_EAX = (**(code **)(*piVar4 + 400))();
      if ((char)in_EAX != '\0') {
        piVar4 = (int *)(**(code **)(*param_1 + 4))();
        iVar3 = (**(code **)(*piVar4 + 0x154))();
        in_EAX = 0;
        if ((iVar3 != 0) && (in_EAX = FUN_004149f0(), (char)in_EAX != '\0')) {
          uVar5 = FUN_00699050();
          (**(code **)(*param_1 + 4))();
          fVar7 = (float10)FUN_004d7570();
          piVar4 = (int *)(**(code **)(*param_1 + 8))();
          fStack_c = 0.0;
          while ((piVar4 != (int *)0x0 &&
                 ((piVar1 = (int *)piVar4[1], piVar1 != (int *)0x0 || (*piVar4 != 0))))) {
            iVar3 = *piVar4;
            piVar4 = piVar1;
            if ((iVar3 != 0) && (*(int *)(iVar3 + 8) == param_2)) {
              iVar6 = *(int *)(*(int *)(iVar3 + 0xc) + 0x1c);
              uVar2 = *(uint *)(iVar6 + 0x58);
              if ((uVar2 >> 0x18 & 1) == 0) {
                iVar6 = *(int *)(*(int *)(iVar3 + 0xc) + 0x14);
              }
              else {
                iVar6 = *(int *)(iVar6 + 0x60);
              }
              if (((iVar6 == 8) && ((uVar2 >> 2 & 1) != 0)) && ((uVar2 >> 1 & 1) == 0)) {
                param_1 = *(int **)(iVar3 + 0x18);
                if (0.0 < *(float *)(iVar3 + 0x1c)) {
                  fVar8 = (float10)FUN_004ac790(0,*(undefined4 *)(iVar3 + 0x1c));
                  fVar8 = (float10)FUN_004ac760(0x40800000,(float)fVar8);
                  param_1 = (int *)(float)(fVar8 * (float10)(float)param_1);
                }
                fStack_c = (float)param_1 + fStack_c;
              }
            }
          }
          fVar8 = (float10)FUN_005e2560(-fStack_c,uVar5);
          fVar8 = -fVar8;
          fVar7 = (float10)(float)fVar7;
          in_EAX = CONCAT22(extraout_var,
                            (ushort)(fVar7 < fVar8) << 8 | (ushort)(NAN(fVar7) || NAN(fVar8)) << 10
                            | (ushort)(fVar7 == fVar8) << 0xe);
          if (fVar7 < fVar8 != (fVar7 == fVar8)) {
            return CONCAT31((int3)(in_EAX >> 8),1);
          }
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069a060(void)

{
  float fVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  int *in_ECX;
  int *unaff_EBX;
  float fVar10;
  undefined4 unaff_EBP;
  float fVar11;
  float fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  iVar5 = (**(code **)(*in_ECX + 0x30))();
  if (iVar5 != 0) {
    piVar6 = (int *)(**(code **)(*in_ECX + 0x20))();
    piVar7 = (int *)(**(code **)(*in_ECX + 0x20))();
    if ((piVar7 == (int *)0x0) || (cVar4 = (**(code **)(*piVar7 + 400))(), cVar4 == '\0')) {
      piStack_54 = (int *)0x0;
    }
    else {
      piStack_54 = in_ECX + -0x17;
    }
    iVar5 = (**(code **)(*in_ECX + 0x38))();
    if (iVar5 == 0) {
      uStack_50 = 0;
    }
    else {
      piVar7 = (int *)(**(code **)(*in_ECX + 0x38))();
      uStack_50 = (**(code **)(*piVar7 + 4))();
    }
    uVar16 = 0;
    uVar15 = 2;
    (**(code **)(*in_ECX + 0x30))(2,0);
    fStack_40 = (float)FUN_004152c0(uVar15,uVar16);
    uVar15 = 0;
    (**(code **)(*in_ECX + 0x30))(0);
    iVar5 = FUN_00419b30(uVar15);
    if ((fStack_40 != 0.0) && (piVar6 != (int *)0x0)) {
      uVar16 = 0x48;
      uVar15 = 0x454c4554;
      uStack_58 = CONCAT13(1,(uint3)uStack_58);
      (**(code **)(*in_ECX + 0x30))(0x454c4554,0x48);
      cVar4 = FUN_00414f00(uVar15,uVar16);
      if (cVar4 != '\0') {
        uStack_58 = (uint)(uint3)uStack_58;
        iVar8 = (**(code **)(*in_ECX + 0x30))();
        if (iVar8 != 0) {
          for (iVar8 = iVar8 + 0xc; iVar8 != 0; iVar8 = *(int *)(iVar8 + 8) + -4) {
            piVar7 = *(int **)(iVar8 + 4);
            if (piVar7 != (int *)0x0) {
              if (*piVar7 == 0x454c4554) {
                iVar3 = *in_ECX;
                uVar15 = (**(code **)(iVar3 + 0x30))(piVar7,0);
                uVar15 = (**(code **)(iVar3 + 0x40))(uVar15);
                (**(code **)(*in_ECX + 0x28))(uVar15);
              }
              else {
                uStack_58 = CONCAT13(1,(uint3)uStack_58);
              }
            }
            if (*(int *)(iVar8 + 8) == 0) break;
          }
        }
      }
      fVar11 = DAT_00b3f9ac;
      fStack_1c = DAT_00b3f9b0;
      if (piStack_54 == (int *)0x0) {
        pfVar9 = (float *)FUN_00619b10(auStack_c,piVar6,uStack_50,
                                       *(float *)(iVar5 + 0x74) * _DAT_00b37ee8,0,2);
        fStack_30 = *pfVar9 + (float)piVar6[8];
        fVar11 = pfVar9[1] + (float)piVar6[9];
        fStack_1c = pfVar9[2] + (float)piVar6[10];
        pfVar9 = (float *)(**(code **)(*piVar6 + 0x174))();
        fStack_38 = pfVar9[1];
        fVar10 = *pfVar9;
        iVar5 = (**(code **)(*piVar6 + 0x15c))(auStack_c);
        dVar2 = (double)*(float *)(iVar5 + 8);
        uStack_4c = SUB84(dVar2,0);
        iVar5 = (**(code **)(*piVar6 + 0x158))(&fStack_1c);
        fVar12 = ((float)(double)CONCAT44(uStack_4c,uStack_50) - *(float *)(iVar5 + 8)) * 0.5 +
                 fStack_3c;
      }
      else {
        fVar13 = (float10)(**(code **)(*piStack_54 + 0x1e0))();
        fVar14 = (float10)FUN_004a9720();
        fStack_30 = (float)fVar14;
        pfVar9 = (float *)(**(code **)(*piVar6 + 0x174))();
        fVar12 = *pfVar9;
        fStack_38 = pfVar9[1];
        iVar5 = (**(code **)(*piVar6 + 0x15c))(auStack_18);
        dVar2 = (double)*(float *)(iVar5 + 8);
        uStack_4c = SUB84(dVar2,0);
        iVar5 = (**(code **)(*piVar6 + 0x158))(auStack_10);
        fVar10 = fStack_2c + fStack_44;
        fStack_40 = fStack_40 + (float)fVar13;
        fVar12 = fVar12 + ((float)(double)CONCAT44(uStack_4c,uStack_50) - *(float *)(iVar5 + 8)) *
                          0.7;
      }
      uStack_48 = (undefined4)((ulonglong)dVar2 >> 0x20);
      iVar5 = (**(code **)(*in_ECX + 0x24))();
      if (iVar5 != 0) {
        fStack_40 = *(float *)(iVar5 + 0x8c);
        fVar10 = *(float *)(iVar5 + 0x88);
        fVar12 = *(float *)(iVar5 + 0x90);
      }
      if (DAT_00b333c4 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(DAT_00b333c4 + 0x5c);
      }
      if (((in_ECX != piVar6) && (unaff_EBX != (int *)0x0)) && (uStack_58 != 0)) {
        if (piStack_54 == (int *)0x0) {
          fVar11 = 1.0;
        }
        else {
          fVar11 = (float)piStack_54[0x1d];
        }
        pfVar9 = (float *)FUN_00403c00();
        fVar1 = *pfVar9;
        iVar5 = (**(code **)(*unaff_EBX + 0x330))();
        if (iVar5 == 0) {
          uVar15 = 1;
        }
        else {
          uVar15 = *(undefined4 *)(iVar5 + 0x180);
        }
        pfVar9 = (float *)FUN_006159c0(auStack_14,fVar10,fStack_40,fVar12,uStack_58,fVar11 * fVar1,0
                                       ,uVar15);
        fStack_38 = *pfVar9;
        fVar11 = pfVar9[1];
        fStack_30 = pfVar9[2];
      }
      if ((char)((uint)unaff_EBP >> 0x18) != '\0') {
        (**(code **)(*in_ECX + 0x30))
                  (uStack_48,piStack_54,fVar10,fStack_40,fVar12,fStack_38,fVar11,fStack_30);
        FUN_0069f490();
        in_ECX[1] = 0;
      }
      iVar5 = in_ECX[1];
      if (iVar5 != 0) {
        FUN_0069e0b0();
        FUN_00401f20(iVar5);
      }
      in_ECX[1] = 0;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_0069a490(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  float10 fVar8;
  int *in_stack_00000010;
  undefined1 auStack_b4 [8];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [32];
  undefined1 uStack_80;
  uint uStack_7c;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *local_14;
  
  piVar1 = in_stack_00000010;
  piVar3 = (int *)(DAT_00b30aac ^ (uint)auStack_b4);
  if (in_stack_00000010 != (int *)0x0) {
    local_14 = piVar3;
    iVar4 = FUN_006ecc80();
    piVar3 = (int *)0x0;
    if (iVar4 != 0) {
      FUN_006ecc80();
      piVar3 = (int *)FUN_004c97f0();
      piVar7 = DAT_00b35c24;
      if ((char)piVar3 != '\0') {
        piVar3 = (int *)FUN_00424180();
        piVar7 = piVar3;
      }
      if (piVar7 != (int *)0x0) {
        FUN_008a7f20(0x1c,1,1);
        FUN_008a7f20(0x1c,0x13,1);
        FUN_008a7f20(0x1c,2,1);
        FUN_008a7f20(0x1c,3,0);
        FUN_008a7f20(0x1c,4,0);
        FUN_008a7f20(0x1c,5,0);
        FUN_008a7f20(0x1c,6,0);
        FUN_008a7f20(0x1c,7,0);
        FUN_008a7f20(0x1c,8,0);
        FUN_008a7f20(0x1c,9,1);
        FUN_008a7f20(0x1c,10,0);
        FUN_008a7f20(0x1c,0xb,0);
        FUN_008a7f20(0x1c,0xc,0);
        FUN_008a7f20(0x1c,0xd,1);
        FUN_008a7f20(0x1c,0xe,1);
        FUN_008a7f20(0x1c,0xf,0);
        FUN_008a7f20(0x1c,0x10,0);
        FUN_008a7f20(0x1c,0x11,1);
        FUN_008a7f20(0x1c,0x12,0);
        FUN_008a7f20(0x1c,0x14,0);
        FUN_008a7f20(0x1c,0x15,0);
        FUN_008a7f20(0x1c,0x18,0);
        FUN_008a7f20(0x1c,0x1a,0);
        FUN_008a7f20(0x1c,0x1b,0);
        FUN_008a7f20(0x1c,0x1c,0);
        FUN_008a7f20(0x1c,0x1d,0);
        FUN_008a7f20(0x1c,0x1e,0);
        FUN_008a7f20(0x1c,0x1f,0);
        puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x174))();
        uStack_ac = *puVar5;
        uStack_a8 = puVar5[1];
        fStack_a4 = (float)puVar5[2];
        fVar8 = (float10)FUN_005e0660();
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_50 = 0;
        fStack_a4 = (float)(fVar8 * (float10)0.5 + (float10)fStack_a4);
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_5c = 0x3f800000;
        uStack_28 = 0;
        uStack_40 = DAT_00ba7a40;
        uStack_3c = DAT_00ba7a44;
        uStack_38 = DAT_00ba7a48;
        uStack_34 = uRam00ba7a4c;
        iVar4 = FUN_0065a2c0();
        if (iVar4 == 0) {
          uVar6 = DAT_00b2eb3c + 1 & 0xffff;
          DAT_00b2eb3c = uVar6;
          if (uVar6 == 0) {
            uVar6 = 10;
            DAT_00b2eb3c = 10;
          }
        }
        else {
          iVar4 = FUN_0065a2c0();
          if (*(int *)(iVar4 + 0x364) == 0) {
            uVar6 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(iVar4 + 0x364) + 8);
            if ((iVar4 == 0) || (iVar4 == -0x14)) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(uint *)(iVar4 + 0x30) >> 0x10;
            }
          }
        }
        uStack_7c = uVar6 << 0x10 | 0x1c;
        FUN_004f8840(&stack0x00000004);
        FUN_004f90c0(&uStack_ac);
        cVar2 = (**(code **)(*piVar7 + 0x88))(auStack_a0);
        return (uint)(cVar2 == '\0');
      }
    }
  }
  return (uint)piVar3 & 0xffffff00;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069a750(float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,uint *param_7,undefined4 param_8,float param_9)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  undefined1 auStack_b4 [4];
  uint *local_b0;
  float local_ac;
  int *local_a8;
  uint *local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_7c;
  uint local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  float local_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  uint local_14;
  
  iVar3 = param_6;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009c5c10;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_b4;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff40;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_94 = param_5;
  local_a4 = param_7;
  if ((*(uint *)(*(int *)(param_6 + 0x1c) + 0x58) >> 0x1d & 1) != 0) {
    local_ac = (float)FUN_00413370(uVar5);
    local_a0 = (float)(int)local_ac * _DAT_00b37db8 * param_9;
    if (0.0 < local_a0) {
      local_b0 = *(uint **)(*(int *)(iVar3 + 0x1c) + 0x5c);
      local_ac = (float)FUN_00413320(CONCAT31((int3)((uint)*(int *)(iVar3 + 0x10) >> 8),
                                              *(int *)(iVar3 + 0x10) == 2));
      uVar6 = FUN_009828c0();
      local_ac = (float)FUN_004133c0(uVar6);
      uVar6 = FUN_009828c0();
      uVar6 = FUN_00413370(uVar6);
      fVar10 = (float10)FUN_00548b50(local_b0,uVar6);
      local_ac = (float)fVar10;
      iVar9 = 0;
      fVar1 = local_a0 * 0.5;
      local_64 = 0;
      local_60 = 0;
      local_5c = -0x80000000;
      local_6c = 0;
      local_68 = 2;
      uStack_44 = 0;
      uStack_34 = 0;
      local_14 = 0;
      local_90 = -fVar1;
      local_50 = (param_1 + local_90) * 0.14287673;
      fStack_4c = (param_2 + local_90) * 0.14287673;
      fStack_48 = (param_3 + local_90) * 0.14287673;
      local_98 = fVar1 + param_1;
      local_9c = fVar1 + param_2;
      DAT_00b2eb3c = DAT_00b2eb3c + 1 & 0xffff;
      local_b0 = (uint *)(param_3 + fVar1);
      local_40 = local_98 * 0.14287673;
      fStack_3c = local_9c * 0.14287673;
      fStack_38 = (float)local_b0 * 0.14287673;
      if (DAT_00b2eb3c == 0) {
        DAT_00b2eb3c = 10;
      }
      local_70 = DAT_00b2eb3c << 0x10 | 0x1e;
      local_8c = local_90;
      local_88 = local_90;
      FUN_00699ce0(&local_70);
      local_14 = CONCAT31(local_14._1_3_,1);
      cVar4 = FUN_004c97f0();
      uVar6 = DAT_00b35c24;
      if (cVar4 != '\0') {
        uVar6 = FUN_00424180();
      }
      FUN_0089f470(uVar6);
      if (local_7c == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)(local_7c + 0x90);
      }
      if (0 < piVar8[1]) {
        do {
          iVar7 = *(int *)(*piVar8 + iVar9 * 4);
          if ((*(char *)(iVar7 + 0x18) == '\x01') &&
             (iVar7 = *(int *)(iVar7 + 0x10) + iVar7, iVar7 != 0)) {
            FUN_00699760(iVar7,param_1,param_2,param_3,iVar3,local_ac);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < piVar8[1]);
      }
      FUN_008aeca0();
      puVar2 = local_a4;
      local_b0 = local_a4;
      piVar8 = (int *)(**(code **)(*local_a8 + 0x20))();
      if ((piVar8 == (int *)0x0) || (cVar4 = (**(code **)(*piVar8 + 400))(), cVar4 == '\0')) {
        local_a8 = (int *)0x0;
      }
      else {
        local_a8 = local_a8 + -0x17;
      }
      while ((puVar2 != (uint *)0x0 && (piVar8 = (int *)*local_b0, piVar8 != (int *)0x0))) {
        cVar4 = (**(code **)(*piVar8 + 400))();
        piVar8 = (int *)(-(uint)(cVar4 != '\0') & (uint)piVar8);
        if ((piVar8 != (int *)0x0) &&
           ((piVar8 != local_a8 && (iVar9 = (**(code **)(*piVar8 + 0x154))(), iVar9 != 0)))) {
          fVar10 = (float10)FUN_004d7e30(&param_1);
          local_a4 = (uint *)(float)fVar10;
          if (((float)local_a4 <= local_a0) &&
             (((cVar4 = (**(code **)(*piVar8 + 0x198))(0), cVar4 == '\0' &&
               (cVar4 = FUN_005e8eb0(), cVar4 == '\0')) &&
              (cVar4 = FUN_00699eb0(piVar8 + 0x1a,local_94), cVar4 != '\0')))) {
            FUN_00699900(piVar8,param_1,param_2,param_3,iVar3,local_ac);
          }
        }
        local_b0 = (uint *)local_b0[1];
        puVar2 = local_b0;
      }
      if (((DAT_00b333c4 != (int *)0x0) && (DAT_00b333c4 != local_a8)) &&
         (iVar9 = (**(code **)(*DAT_00b333c4 + 0x154))(), iVar9 != 0)) {
        fVar10 = (float10)FUN_004d7e30(&param_1);
        local_a4 = (uint *)(float)fVar10;
        if ((((float)local_a4 <= local_a0) &&
            (cVar4 = (**(code **)(*DAT_00b333c4 + 0x198))(0), cVar4 == '\0')) &&
           (cVar4 = FUN_005e8eb0(), cVar4 == '\0')) {
          if (DAT_00b333c4 == (int *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = DAT_00b333c4 + 0x1a;
          }
          cVar4 = FUN_00699eb0(piVar8,local_94);
          if (cVar4 != '\0') {
            FUN_00699900(DAT_00b333c4,param_1,param_2,param_3,iVar3,local_ac);
          }
        }
      }
      local_14 = local_14 & 0xffffff00;
      FUN_008ba5e0();
      local_14 = 0xffffffff;
      if (-1 < local_5c) {
        FUN_008a75d0(local_64,local_5c * 8,0x14);
      }
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069ac50(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *in_ECX;
  int iVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  int *local_10;
  
  if (((param_6 != 0) && (iVar8 = 0, param_1 != 0)) && (iVar9 = param_1 + 0xc, iVar9 != 0)) {
    while ((*(int *)(iVar9 + 8) != 0 || (*(int *)(iVar9 + 4) != 0))) {
      if ((*(int *)(iVar9 + 4) != 0) &&
         ((*(int *)(*(int *)(iVar9 + 4) + 0x10) == param_2 &&
          (iVar4 = FUN_00413370(), iVar8 < iVar4)))) {
        iVar8 = FUN_00413370();
      }
      if ((*(int *)(iVar9 + 8) == 0) || (iVar9 = *(int *)(iVar9 + 8) + -4, iVar9 == 0)) break;
    }
    if (iVar8 != 0) {
      iVar9 = FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b03800,0);
      if ((iVar9 == 0) || (bVar2 = true, (*(byte *)(iVar9 + 0x40) & 0x10) == 0)) {
        bVar2 = false;
      }
      fVar1 = (float)iVar8 * _DAT_00b37db8;
      piVar5 = (int *)(**(code **)(*in_ECX + 0x20))();
      if ((piVar5 == (int *)0x0) || (cVar3 = (**(code **)(*piVar5 + 400))(), cVar3 == '\0')) {
        local_10 = (int *)0x0;
      }
      else {
        local_10 = in_ECX + -0x17;
      }
      FUN_00673a50(0);
      for (piVar5 = (int *)FUN_007616d0();
          (piVar5 != (int *)0x0 && (piVar7 = (int *)*piVar5, piVar7 != (int *)0x0));
          piVar5 = (int *)piVar5[1]) {
        piVar10 = (int *)0x0;
        while( true ) {
          iVar8 = (**(code **)(*piVar7 + 0x124))();
          piVar6 = (int *)FUN_009832e6(piVar7,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
          if (((((iVar8 != 0) && (local_10 == (int *)0x0 || piVar6 != local_10)) &&
               (iVar8 = (**(code **)(*piVar7 + 0x154))(), iVar8 != 0)) &&
              (fVar11 = (float10)FUN_004d7e30(&param_3), fVar11 <= (float10)fVar1)) &&
             (((piVar6 == (int *)0x0 || (cVar3 = FUN_005e8eb0(), cVar3 == '\0')) &&
              ((bVar2 || (cVar3 = FUN_0069a490(param_3,param_4,param_5,piVar6), cVar3 != '\0'))))))
          {
            FUN_00446cb0(piVar6);
          }
          if ((piVar10 == (int *)0x0) || (*piVar10 == 0)) break;
          piVar7 = (int *)FUN_009832e6(*piVar10,0,&PTR_PTR_00b03070,&PTR_PTR_00b05940,0);
          piVar10 = (int *)piVar10[1];
          while( true ) {
            if (piVar7 == (int *)0x0) goto LAB_0069ae7d;
            if (((int *)piVar7[0x16] != (int *)0x0) &&
               (iVar8 = (**(code **)(*(int *)piVar7[0x16] + 8))(), iVar8 == 0)) break;
            if (piVar10 == (int *)0x0) goto LAB_0069ae7d;
            piVar7 = (int *)FUN_009832e6(*piVar10,0,&PTR_PTR_00b03070,&PTR_PTR_00b05940,0);
            piVar10 = (int *)piVar10[1];
          }
        }
LAB_0069ae7d:
      }
      if ((((DAT_00b333c4 != local_10) &&
           (iVar8 = (**(code **)(*DAT_00b333c4 + 0x154))(), iVar8 != 0)) &&
          (fVar11 = (float10)FUN_004d7e30(&param_3), fVar11 <= (float10)fVar1)) &&
         ((cVar3 = FUN_005e8eb0(), cVar3 == '\0' &&
          ((bVar2 || (cVar3 = FUN_0069a490(param_3,param_4,param_5,DAT_00b333c4), cVar3 != '\0')))))
         ) {
        FUN_00446cb0(DAT_00b333c4);
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0069b9a4) */
/* WARNING: Removing unreachable block (ram,0x0069b9ac) */
/* WARNING: Removing unreachable block (ram,0x0069b9c2) */
/* WARNING: Removing unreachable block (ram,0x0069b9d9) */
/* WARNING: Removing unreachable block (ram,0x0069b5d1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069af30(undefined4 param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char *pcVar23;
  int *in_ECX;
  undefined4 *unaff_EBX;
  int *piVar24;
  int *unaff_EBP;
  uint unaff_ESI;
  int *unaff_FS_OFFSET;
  float10 fVar25;
  char unaff_retaddr;
  float fStack0000000c;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined1 *puVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined3 uVar34;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  double dStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c5c4b;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = (**(code **)(*in_ECX + 0x30))(uVar6);
  if (iVar7 == 0) goto LAB_0069ba6e;
  pcVar2 = *(code **)(*in_ECX + 0x20);
  in_ECX[2] = 4;
  piVar8 = (int *)(*pcVar2)();
  piVar9 = (int *)(**(code **)(*in_ECX + 0x20))();
  if ((piVar9 == (int *)0x0) || (cVar5 = (**(code **)(*piVar9 + 400))(), cVar5 == '\0')) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = in_ECX + -0x17;
  }
  piVar24 = (int *)0x0;
  piStack_58 = (int *)0x0;
  piStack_5c = piVar9;
  piVar10 = (int *)(**(code **)(*in_ECX + 0x30))();
  iVar7 = (**(code **)(*piVar10 + 0x18))();
  if (iVar7 == 7) {
    (**(code **)(*in_ECX + 0x30))();
    cVar5 = FUN_00414eb0();
    bVar4 = true;
    if (cVar5 == '\0') goto LAB_0069afdb;
  }
  else {
LAB_0069afdb:
    bVar4 = false;
  }
  (**(code **)(*in_ECX + 0x30))();
  cVar5 = FUN_00415030();
  if (((cVar5 != '\0') || (bVar4)) &&
     ((((param_2 != 0 && (*(char *)(param_2 + 4) == '\"')) ||
       (((piVar9 == (int *)0x0 && (iVar7 = (**(code **)(*in_ECX + 0x38))(), iVar7 != 0)) ||
        (piVar24 = (int *)(**(code **)(*in_ECX + 0xc))(), piStack_58 = piVar24,
        piVar24 == (int *)0x0)))) &&
      (((piVar24 = (int *)(**(code **)(*in_ECX + 0x38))(), piStack_58 = piVar24,
        piVar24 != (int *)0x0 && (param_2 == 0)) &&
       (iVar7 = (**(code **)(*piVar24 + 4))(), iVar7 != 0)))))) {
    pfVar11 = (float *)FUN_00403c00();
    fStack_4c = *pfVar11;
    cVar5 = (**(code **)(*piVar8 + 400))();
    if (cVar5 != '\0') {
      if (piVar8 != DAT_00b333c4) {
        piVar9 = (int *)(**(code **)(*piVar24 + 4))();
        cVar5 = (**(code **)(*piVar9 + 400))();
        if (cVar5 != '\0') {
          piVar9 = (int *)(**(code **)(*piVar24 + 4))();
          iVar7 = (**(code **)(*piVar9 + 0x18c))();
          if (iVar7 == 9) goto LAB_0069b0d9;
        }
      }
      fVar25 = (float10)(**(code **)(*piVar8 + 0x26c))();
      fStack_4c = (float)fVar25;
    }
LAB_0069b0d9:
    fVar25 = (float10)(**(code **)(*piVar8 + 0xec))();
    fVar25 = (float10)FUN_004ac790(0x3f800000,(float)fVar25);
    fStack_4c = (float)(fVar25 * (float10)fStack_4c);
    uVar12 = (**(code **)(*piVar24 + 4))(0);
    fVar25 = (float10)FUN_00612f50(piVar8,uVar12);
    if ((float10)fStack_4c < fVar25) {
      piVar24 = (int *)0x0;
      piStack_58 = (int *)0x0;
    }
  }
  bVar4 = false;
  iVar7 = (**(code **)(*in_ECX + 0x24))();
  if (((iVar7 != 0) && (*(short *)(iVar7 + 0xb8) != 0)) && (param_2 == 0)) {
    bVar4 = true;
  }
  if (piVar24 == (int *)0x0) {
    piStack_54 = (int *)0x0;
  }
  else {
    piStack_54 = (int *)(**(code **)(*piVar24 + 4))();
  }
  piVar8 = piStack_54;
  uVar12 = (**(code **)(*in_ECX + 0x30))();
  uVar13 = FUN_009832e6(uVar12,0,&PTR_PTR_00b03280,&PTR_PTR_00b0373c,0);
  dStack_34 = (double)CONCAT44(dStack_34._4_4_,uVar13);
  uStack_3c = FUN_004152c0(0,0);
  iStack_38 = FUN_004152c0(1,0);
  uVar13 = (**(code **)(*in_ECX + 0x30))(0,&PTR_PTR_00b03280,&PTR_PTR_00b03800,0);
  iStack_48 = FUN_009832e6(uVar13);
  uStack_2c = 0;
  uStack_28 = 0;
  FUN_004526e0();
  if (piVar8 == (int *)0x0) {
    if (((piStack_5c != (int *)0x0) && (iStack_48 != 0)) &&
       ((*(byte *)(iStack_48 + 0x40) & 0x80) != 0)) {
      iVar7 = *piStack_5c;
      goto LAB_0069b20f;
    }
  }
  else {
    iVar7 = *piVar8;
LAB_0069b20f:
    puVar14 = (undefined4 *)(**(code **)(iVar7 + 0x174))();
    FUN_0069ac50(uVar12,1,*puVar14,puVar14[1],puVar14[2],&uStack_2c);
  }
  iVar7 = (**(code **)(*in_ECX + 0x30))();
  if (iVar7 != 0) {
    for (iVar7 = iVar7 + 0xc; iStack_40 = iVar7, iVar7 != 0; iVar7 = *(int *)(iVar7 + 8) + -4) {
      iVar19 = *(int *)(iVar7 + 4);
      if (iVar19 != 0) {
        piVar9 = (int *)(**(code **)(*in_ECX + 0x30))();
        iVar15 = (**(code **)(*piVar9 + 0x18))();
        if (((iVar15 != 6) || (param_2 == 0)) ||
           (cVar5 = FUN_00419350(param_2,0,*(undefined4 *)(iVar19 + 0x1c),0), cVar5 != '\0')) {
          iVar7 = *in_ECX;
          uVar12 = (**(code **)(iVar7 + 0x30))(iVar19,param_2);
          puVar14 = (undefined4 *)(**(code **)(iVar7 + 0x40))(uVar12);
          uStack_50 = *(undefined4 *)(*(int *)(puVar14[3] + 0x1c) + 0x5c);
          if (unaff_retaddr != '\0') {
            puVar14[5] = puVar14[5] | 0x14;
          }
          piVar9 = (int *)(**(code **)(*in_ECX + 0x30))();
          iVar7 = (**(code **)(*piVar9 + 0x18))();
          if (iVar7 == 0) {
            fVar25 = (float10)(**(code **)(*in_ECX + 0x2c))(0,0);
            FUN_0068e170((float)fVar25);
          }
          else if (iVar7 == 8) {
            if ((iStack_40 == 0) || ((*(byte *)(iStack_40 + 0x7c) & 2) == 0)) {
              piStack_58 = (int *)0x0;
              piStack_5c = (int *)0x0;
              uVar6 = *(uint *)(*(int *)(puVar14[3] + 0x1c) + 0x58);
              uVar16 = uVar6 >> 7;
              if (((uVar16 & 1) == 0) && ((uVar6 >> 8 & 1) == 0)) {
                FUN_00548420(&piStack_58,&piStack_5c,uStack_50,puStack_8,6,0,0,0,0,0);
              }
              else if ((uVar16 & 1) == 0) {
                if ((uVar6 >> 8 & 1) == 0) {
                  if ((uVar16 & 1) != 0) goto LAB_0069b3cb;
                }
                else {
                  FUN_005486a0(&piStack_5c,uStack_50,puStack_8,6,0,0,0,0,0);
                }
              }
              else {
LAB_0069b3cb:
                if ((uVar6 >> 8 & 1) == 0) {
                  FUN_005487f0(&piStack_58,uStack_50,puStack_8,6,0,0,0,0,0);
                }
              }
              fVar25 = (float10)FUN_004843b0(piStack_5c,0x3f800000);
              piStack_5c = (int *)(float)fVar25;
              fVar25 = (float10)FUN_004843b0(piStack_58,0x3f800000);
              piStack_58 = (int *)(float)fVar25;
              puVar14[7] = piStack_5c;
              puVar14[6] = piStack_58;
            }
            else {
              puVar14[7] = 0x3f800000;
              puVar14[6] = _DAT_00b37f90;
            }
          }
          cVar5 = (char)(unaff_ESI >> 8);
          uVar34 = (undefined3)(unaff_ESI >> 8);
          if ((*(int *)(iVar19 + 0x10) == 0) && (cVar5 == '\0')) {
            if (iVar19 != iStack_48) {
              puVar14[5] = puVar14[5] | 0xe;
            }
            cVar5 = (**(code **)(*in_ECX + 0x28))(puVar14);
            if (cVar5 != '\0') {
              unaff_ESI = CONCAT31(uVar34,1);
            }
          }
          else {
            if (*(int *)(iVar19 + 0x10) == 1) {
              iVar7 = iStack_44;
              if (cVar5 != '\0') {
                iVar7 = iStack_48;
              }
            }
            else {
              iVar7 = iStack_48;
              if (cVar5 == '\0') goto LAB_0069b5d6;
            }
            if (iVar19 != iVar7) {
              puVar14[5] = puVar14[5] | 0xe;
            }
            if (unaff_EBX == (undefined4 *)0x0) {
              if ((((cVar5 == '\0') && (piStack_54 != (int *)0x0)) &&
                  ((*(byte *)(piStack_54 + 0x10) & 0x80) != 0)) &&
                 ((iVar7 = FUN_00413370(), 0 < iVar7 && (unaff_EBP != (int *)0x0)))) {
                puVar18 = (undefined4 *)(**(code **)(*unaff_EBP + 0x174))();
                uVar12 = *puVar18;
                puVar17 = (undefined4 *)0x0;
                uVar13 = puVar18[1];
                uVar20 = puVar18[2];
                goto LAB_0069b5b2;
              }
            }
            else {
              (**(code **)(*in_ECX + 0x30))();
              cVar5 = (**(code **)*unaff_EBX)();
              if (cVar5 != '\0') {
                unaff_ESI = CONCAT31(uVar34,1);
              }
              iVar7 = FUN_00413370();
              if ((0 < iVar7) && (piVar8 != (int *)0x0)) {
                puVar17 = (undefined4 *)(**(code **)(*piVar8 + 0x174))();
                uVar12 = *puVar17;
                uVar13 = puVar17[1];
                uVar20 = puVar17[2];
                puVar17 = unaff_EBX;
LAB_0069b5b2:
                unaff_ESI = unaff_ESI & 0xffff;
                puVar29 = &stack0xffffff96;
                piVar9 = &iStack_38;
                uVar22 = 0x3f800000;
                uVar32 = 0;
                uVar21 = FUN_006ecc80(uVar12,uVar13,uVar20,puVar17,0,piVar9,puVar29,0x3f800000);
                puVar18 = puVar14;
                uVar30 = (**(code **)(*in_ECX + 0x30))(puVar14,uVar21);
                FUN_006992f0(uVar30,puVar18,uVar21,uVar12,uVar13,uVar20,puVar17,uVar32,piVar9,
                             puVar29,uVar22);
              }
            }
          }
LAB_0069b5d6:
          (**(code **)*puVar14)(1);
          iVar7 = iStack_40;
        }
      }
      piVar9 = (int *)(**(code **)(*in_ECX + 0x30))();
      iVar19 = (**(code **)(*piVar9 + 0x18))();
      if ((iVar19 == 8) || (*(int *)(iVar7 + 8) == 0)) break;
    }
  }
  uVar12 = 0;
  (**(code **)(*in_ECX + 0x30))(0);
  iVar7 = FUN_00419b30(uVar12);
  uVar13 = 1;
  uVar12 = 1;
  (**(code **)(*in_ECX + 0x30))(1,1);
  iVar19 = FUN_004152c0(uVar12,uVar13);
  if ((iStack_48 == 0) || ((*(byte *)(iStack_48 + 0x40) & 0x80) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((piVar8 != (int *)0x0) || ((piStack_5c != (int *)0x0 && (piVar8 = piStack_5c, bVar3)))) &&
     (piVar8 != (int *)0x0)) {
    if (((piStack_5c == (int *)0x0) || (param_2 != 0)) ||
       (iVar15 = (**(code **)(piStack_5c[0x17] + 0x24))(), iVar15 == 0)) {
      puVar14 = (undefined4 *)(**(code **)(*piVar8 + 0x174))();
    }
    else {
      puVar14 = (undefined4 *)(iVar15 + 0x88);
    }
    uStack_10 = puVar14[2];
    uVar12 = *puVar14;
    uVar13 = puVar14[1];
    if (iVar19 == 0) {
      if (((piStack_54 != (int *)0x0) &&
          (cVar5 = (**(code **)(*piStack_54 + 400))(), iVar19 = iStack_38, cVar5 != '\0')) &&
         ((iStack_38 != 0 && ((*(uint *)(*(int *)(iStack_38 + 0x1c) + 0x58) >> 0x1d & 1) != 0)))) {
        uVar20 = (**(code **)(*in_ECX + 0x30))();
        cVar5 = FUN_00699eb0(piStack_54 + 0x1a,uVar20);
        if (cVar5 != '\0') {
          fVar25 = (float10)FUN_00413810();
          FUN_00699900(piStack_54,uVar12,uVar13,uStack_10,iVar19,(float)fVar25);
        }
      }
    }
    else {
      uVar32 = 0x3f800000;
      uVar30 = 0x3f800000;
      puVar14 = &uStack_2c;
      uVar20 = (**(code **)(*in_ECX + 0x30))(iVar19,puVar14,0x3f800000,0x3f800000);
      uVar21 = FUN_006ecc80(uVar20);
      FUN_0069a750(uVar12,uVar13,uStack_10,uVar21,uVar20,iVar19,puVar14,uVar30,uVar32);
      if ((iVar7 != 0) && (iVar19 = FUN_00449190(), iVar19 != 0)) {
        dStack_34._0_4_ = -(float)piVar8[8];
        fVar25 = (float10)FUN_00986000();
        dStack_34._0_4_ = (float)fVar25;
        fVar25 = (float10)FUN_00986300();
        fStack_24 = -(float)fVar25;
        fStack_20 = dStack_34._0_4_;
        uStack_1c = 0;
        FUN_006ecc80();
        uVar20 = FUN_004c9be0(piStack_54);
        uVar21 = 3;
        FUN_006ecc80(uVar20,3);
        uVar20 = FUN_00441800(uVar20,uVar21);
        iVar19 = FUN_00401f00(0x20);
        dStack_34 = (double)CONCAT44(dStack_34._4_4_,iVar19);
        uStack_4 = 0;
        if (iVar19 == 0) {
          iVar19 = 0;
        }
        else {
          uVar33 = 0;
          uVar31 = 0x3f800000;
          fVar27 = fStack_24;
          fVar28 = fStack_20;
          uVar21 = uStack_1c;
          uVar30 = uStack_10;
          uVar32 = (**(code **)(*(int *)(iVar7 + 0x18) + 0x14))
                             (fStack_24,fStack_20,uStack_1c,uVar12,uVar13,uStack_10,0x3f800000,0);
          uVar26 = 0x3f800000;
          uVar22 = FUN_006ecc80(0x3f800000,uVar20,uVar32);
          iVar19 = FUN_005713f0(uVar22,uVar26,uVar20,uVar32,fVar27,fVar28,uVar21,uVar12,uVar13,
                                uVar30,uVar31,uVar33);
        }
        uStack_4 = 0xffffffff;
        FUN_00570c00("SpecialIdle_AreaEffect");
        if (*(int *)(iVar19 + 0x18) != 0) {
          iVar15 = FUN_00413370();
          dStack_34 = (double)iVar15;
          pfVar11 = (float *)FUN_00403c00();
          fStack0000000c = *pfVar11 * (float)dStack_34;
          pfVar11 = (float *)FUN_00403c00();
          if ((*pfVar11 < fStack0000000c) ||
             (pfVar11 = (float *)FUN_00403c00(), fStack0000000c < *pfVar11)) {
            pfVar11 = (float *)FUN_00403c00();
            fStack0000000c = *pfVar11;
          }
          *(float *)(*(int *)(iVar19 + 0x18) + 0x60) = ABS(fStack0000000c);
        }
        FUN_00678d30(iVar19);
      }
    }
  }
  FUN_004526e0();
  (**(code **)(*in_ECX + 0x30))();
  cVar5 = FUN_00414fe0();
  if (cVar5 != '\0') {
    FUN_0069a060();
  }
  if ((bVar4) && (iVar7 != 0)) {
    if (*(ushort *)(iVar7 + 0x20) == 0xffff) {
      pcVar23 = *(char **)(iVar7 + 0x1c);
      pcVar1 = pcVar23 + 1;
      do {
        cVar5 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar5 != '\0');
      uVar6 = (int)pcVar23 - (int)pcVar1;
    }
    else {
      uVar6 = (uint)*(ushort *)(iVar7 + 0x20);
    }
    if (uVar6 != 0) {
      uVar20 = 1;
      uVar13 = 0;
      uVar12 = (**(code **)(*(int *)(iVar7 + 0x18) + 0x14))(0,1);
      FUN_004384e0(uVar12,uVar13,uVar20);
    }
  }
  (**(code **)(*in_ECX + 0x34))(0);
  (**(code **)(*in_ECX + 0x3c))(0);
  in_ECX[2] = 0;
LAB_0069ba6e:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069ba90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,int *param_7,undefined4 param_8,float param_9,
                 undefined4 param_10)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *in_ECX;
  int *piVar11;
  float10 fVar12;
  int *local_18;
  int *piStack_10;
  undefined4 uStack_8;
  int iStack_4;
  
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    local_18 = param_1 + 3;
  }
  iVar4 = (**(code **)(*param_1 + 0x18))();
  if (iVar4 == 0) {
    fVar12 = (float10)(**(code **)(*in_ECX + 0x2c))(0,0);
  }
  else {
    fVar12 = (float10)1;
  }
  fVar1 = (float)fVar12 * param_9;
  piVar5 = (int *)FUN_004152c0(2,0);
  iStack_4 = 0;
  uStack_8 = 0;
  FUN_0069ac50(piVar2,2,param_3,param_4,param_5,&uStack_8);
  param_1 = (int *)((uint)param_1 & 0xffffff00);
  piVar11 = param_7;
  for (; param_7 = piVar11, local_18 != (int *)0x0; local_18 = (int *)(local_18[2] + -4)) {
    piVar7 = (int *)local_18[1];
    if (((piVar7 != (int *)0x0) && (piVar7[4] == 2)) && (*piVar7 != 0x454c4554)) {
      puVar6 = (undefined4 *)(**(code **)(*in_ECX + 0x40))(piVar2,piVar7,0);
      if (piVar7 != piVar5) {
        puVar6[5] = puVar6[5] | 0xe;
      }
      FUN_0068e170(fVar1);
      piVar11 = param_7;
      if (param_7 == (int *)0x0) {
        uVar8 = 0;
      }
      else {
        iVar4 = (**(code **)(*param_7 + 0x124))();
        if ((iVar4 != 0) && (piVar7 = (int *)(**(code **)(*in_ECX + 0x20))(), piVar11 != piVar7)) {
          if (param_6 != (int *)0x0) {
            iVar4 = *param_6;
            uVar8 = (**(code **)(*param_7 + 0x124))(puVar6);
            cVar3 = (**(code **)(iVar4 + 0x21c))(uVar8);
            piVar11 = param_7;
            if (cVar3 == '\0') goto LAB_0069bc69;
          }
          puVar9 = (undefined4 *)(**(code **)(*piVar11 + 0x124))();
          cVar3 = (**(code **)*puVar9)();
          if (cVar3 != '\0') {
            if (param_6[0x1a] == 0) {
              piStack_10 = (int *)0x0;
LAB_0069bc30:
              iVar4 = (**(code **)(*piVar2 + 0x18))();
              piVar11 = param_7;
              if (iVar4 != 5) goto LAB_0069bc69;
            }
            else {
              piStack_10 = (int *)FUN_00699050();
              if (((piStack_10 == (int *)0x0) || ((char)param_1 != '\0')) ||
                 (iVar4 = (**(code **)(*piVar2 + 0x18))(), iVar4 != 0)) goto LAB_0069bc30;
            }
            iVar4 = *piStack_10;
            param_1 = (int *)CONCAT31(param_1._1_3_,1);
            uVar8 = FUN_00415360(1,0);
            (**(code **)(iVar4 + 0x39c))(uVar8);
            piVar11 = param_7;
          }
        }
LAB_0069bc69:
        uVar8 = (**(code **)(*piVar11 + 0x124))();
      }
      FUN_006992f0(piVar2,puVar6,param_2,param_3,param_4,param_5,uVar8,param_6,&uStack_8,&param_1,
                   param_10);
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
      }
    }
    if (local_18[2] == 0) break;
    piVar11 = param_7;
  }
  iVar4 = FUN_00416410();
  param_7 = (int *)CONCAT31(param_7._1_3_,iVar4 == 3);
  iVar10 = FUN_004152c0(2,1);
  iVar4 = iStack_4;
  if ((char)param_7 == '\0') {
    if (iVar10 == 0) {
      if ((((piVar11 != (int *)0x0) &&
           (cVar3 = (**(code **)(*piVar11 + 400))(), iVar4 = iStack_4, cVar3 != '\0')) &&
          (piVar5 != (int *)0x0)) &&
         (((*(uint *)(piVar5[7] + 0x58) >> 0x1d & 1) != 0 &&
          (cVar3 = FUN_00699eb0(piVar11 + 0x1a,piVar2), iVar4 = iStack_4, cVar3 != '\0')))) {
        fVar12 = (float10)FUN_00413810();
        FUN_00699900(piVar11,param_3,param_4,param_5,piVar5,(float)fVar12);
        iVar4 = iStack_4;
      }
    }
    else {
      FUN_0069a750(param_3,param_4,param_5,param_2,piVar2,iVar10,&uStack_8,param_9,param_10);
      iVar4 = iStack_4;
    }
  }
  while (iVar4 != 0) {
    iVar10 = *(int *)(iVar4 + 4);
    FUN_00401f20(iVar4);
    iVar4 = iVar10;
  }
  return;
}



void FUN_0069be00(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x18) + 0x18))();
  if (iVar1 == 4) {
    (**(code **)(*in_ECX + 0x34))(param_1 + 0x18);
    FUN_0069af30(0,0,param_1);
  }
  return;
}



void FUN_0069be40(int param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x18) + 0x18))();
  if ((iVar1 == 1) && (param_2 != 0)) {
    (**(code **)(*in_ECX + 0x34))(param_1 + 0x18);
    FUN_0069af30(0,0,param_2);
  }
  return;
}



void FUN_0069bec0(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint *unaff_FS_OFFSET;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2a48;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (uint)&local_c;
  iVar4 = (**(code **)(*in_ECX + 0x30))();
  if (iVar4 == 0) {
LAB_0069c0ab:
    *unaff_FS_OFFSET = local_c;
    return;
  }
  uStack_18 = 0;
  uVar5 = (**(code **)(*in_ECX + 0x30))();
  iVar6 = FUN_009832e6(uVar5,0,&PTR_PTR_00b03280,&PTR_PTR_00b0373c,0);
  iVar4 = *in_ECX;
  puVar10 = &uStack_1c;
  uStack_1c = 0;
  uVar5 = (**(code **)(iVar4 + 0x30))(&uStack_18,puVar10,0);
  cVar2 = (**(code **)(iVar4 + 0x1c))(uVar5);
  if (cVar2 != '\0') {
    pcVar1 = *(code **)(*in_ECX + 0x30);
    in_ECX[2] = 3;
    uVar5 = (*pcVar1)();
    FUN_0069af30(unaff_EDI,local_c,0);
    (**(code **)(*in_ECX + 0x18))(uVar5,1);
    if (in_ECX[1] != 0) {
      FUN_0069dd50(0,0x3f400000);
    }
    goto LAB_0069c0ab;
  }
  piVar7 = (int *)(**(code **)(*in_ECX + 0x20))();
  if (piVar7 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar7 + 400))();
    if (cVar2 != '\0') {
      piVar7 = in_ECX + -0x17;
      goto LAB_0069bf70;
    }
  }
  piVar7 = (int *)0x0;
LAB_0069bf70:
  uVar5 = 0;
  (**(code **)(*in_ECX + 0x30))(0);
  iVar4 = FUN_00419b30(uVar5);
  if ((piVar7 != (int *)0x0) && (iVar4 != 0)) {
    iVar4 = FUN_0041b820(*(undefined4 *)(iVar4 + 100));
    if ((iVar4 != 0) && (puVar8 = *(undefined1 **)(iVar4 + 0x28), iVar6 == 0)) {
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00a2f7ec;
      }
      FUN_0065a8b0(puVar8,0,0x102);
    }
  }
  puVar8 = &stack0xffffffdc;
  uVar9 = uVar3;
  (**(code **)(*in_ECX + 0x30))(puVar8,uVar3);
  FUN_0041a4b0(puVar8,uVar9);
  uStack_14 = 0;
  if (piVar7 != (int *)0x0) {
    cVar2 = FUN_005e04e0();
    if ((cVar2 != '\0') && ((iVar6 == 0 || ((*(byte *)(iVar6 + 0x7c) & 2) != 0)))) {
      FUN_0057acc0(unaff_ESI,0,1,0xbf800000);
    }
  }
  iVar4 = *in_ECX;
  pcVar1 = *(code **)(iVar4 + 0x30);
  in_ECX[2] = 7;
  uVar5 = (*pcVar1)(0);
  (**(code **)(iVar4 + 0x18))(uVar5);
  (**(code **)(*in_ECX + 0x34))(0);
  (**(code **)(*in_ECX + 0x3c))(0);
  FUN_00401f20(puVar10);
  *unaff_FS_OFFSET = uVar3;
  return;
}



void FUN_0069c0d0(void)

{
  undefined4 *in_ECX;
  
  FUN_0069f2b0();
  in_ECX[0x24] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x25] = 0;
  *in_ECX = &PTR_FUN_00a75efc;
  in_ECX[6] = &PTR_FUN_00a75ef4;
  return;
}



void FUN_0069c100(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x94);
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX + 0x94);
    *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(iVar1 + 8);
    FUN_00401f20(iVar1);
    iVar1 = *(int *)(in_ECX + 0x94);
  }
  *(undefined4 *)(in_ECX + 0x94) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069c140(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c5878;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a75efc;
  in_ECX[6] = &PTR_FUN_00a75ef4;
  local_4 = 0;
  if ((int *)in_ECX[0x1a] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*(int *)in_ECX[0x1a] + 0x20))(uVar2);
  }
  if (iVar3 != DAT_00b333c4) {
    fVar1 = _DAT_00b38118;
    if (_DAT_00b38118 < 0.0) {
      fVar1 = 0.0;
    }
    _DAT_00b3c0d0 = _DAT_00b3c0d0 - fVar1;
  }
  FUN_0069c100();
  if (in_ECX[0x24] != 0) {
    FUN_006b7240();
    iVar3 = in_ECX[0x24];
    if (iVar3 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar3);
      in_ECX[0x24] = 0;
    }
  }
  iVar3 = in_ECX[0x26];
  if (iVar3 != 0) {
    FUN_0069e0b0();
    FUN_00401f20(iVar3);
  }
  in_ECX[0x26] = 0;
  local_4 = 0xffffffff;
  FUN_0069fa60();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0069c620(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if (*(int *)(param_2 + 8) != *(int *)(in_ECX + 0x6c)) {
      return 1;
    }
    iVar3 = (**(code **)(*param_1 + 4))();
    iVar1 = *(int *)(param_2 + 0xc);
    piVar4 = *(int **)(in_ECX + 0x94);
    while( true ) {
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)FUN_00401f00(0xc);
        if (piVar4 != (int *)0x0) {
          iVar2 = *(int *)(in_ECX + 0x94);
          *piVar4 = iVar3;
          piVar4[1] = iVar1;
          piVar4[2] = iVar2;
          *(int **)(in_ECX + 0x94) = piVar4;
          return 1;
        }
        *(undefined4 *)(in_ECX + 0x94) = 0;
        return 1;
      }
      if ((*piVar4 == iVar3) && (piVar4[1] == iVar1)) break;
      piVar4 = (int *)piVar4[2];
    }
    return 0;
  }
  return 0;
}



void FUN_0069c980(byte param_1)

{
  FUN_0069c140();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069c9a0(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int in_ECX;
  uint uVar10;
  bool bVar11;
  
  fVar2 = *(float *)(in_ECX + 0x80) * _DAT_00b37ef8;
  fVar3 = *(float *)(in_ECX + 0x84) * _DAT_00b37f08;
  fVar4 = *(float *)(in_ECX + 0x84) * _DAT_00b37f00;
  if (param_1 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[1]) {
      if (puVar6 == &DAT_00b40864) {
        uVar10 = 0;
        if (param_1[0x34] == 0) {
          return;
        }
        if (param_1[0x34] == 0) goto LAB_0069cae6;
        do {
          puVar6 = (undefined4 *)param_1[0x32];
          uVar9 = 0;
          do {
            if (puVar6 == (undefined4 *)0x0) goto LAB_0069cae6;
            piVar1 = (int *)puVar6[2];
            puVar6 = (undefined4 *)*puVar6;
            bVar11 = uVar9 != uVar10;
            uVar9 = uVar9 + 1;
          } while (bVar11);
          if (piVar1 != (int *)0x0) {
            for (puVar6 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar6 != (undefined4 *)0x0;
                puVar6 = (undefined4 *)puVar6[1]) {
              if (puVar6 == &DAT_00b40c84) {
                bVar5 = 1;
                goto LAB_0069ca90;
              }
            }
            bVar5 = 0;
LAB_0069ca90:
            uVar9 = -(uint)bVar5 & (uint)piVar1;
            if (uVar9 != 0) {
              *(float *)(uVar9 + 0x2c) = *(float *)(uVar9 + 0x2c) * fVar2;
            }
            for (puVar6 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar6 != (undefined4 *)0x0;
                puVar6 = (undefined4 *)puVar6[1]) {
              if (puVar6 == &DAT_00b40b50) {
                bVar5 = 1;
                goto LAB_0069cac0;
              }
            }
            bVar5 = 0;
LAB_0069cac0:
            uVar9 = -(uint)bVar5 & (uint)piVar1;
            if (uVar9 != 0) {
              *(float *)(uVar9 + 0x48) = *(float *)(uVar9 + 0x48) * fVar2;
              *(float *)(uVar9 + 0x18) = fVar4 * *(float *)(uVar9 + 0x18);
              *(float *)(uVar9 + 0x40) = fVar3 * *(float *)(uVar9 + 0x40);
            }
          }
LAB_0069cae6:
          uVar10 = uVar10 + 1;
          if ((uint)param_1[0x34] <= uVar10) {
            return;
          }
        } while( true );
      }
    }
    iVar7 = (**(code **)(*param_1 + 8))();
    if (iVar7 != 0) {
      uVar10 = 0;
      if (*(short *)((int)param_1 + 0xb6) != 0) {
        if (*(short *)((int)param_1 + 0xb6) != 0) goto LAB_0069cb08;
        uVar8 = 0;
        while( true ) {
          FUN_0069c9a0(uVar8);
          uVar10 = uVar10 + 1;
          if (*(ushort *)((int)param_1 + 0xb6) <= uVar10) break;
LAB_0069cb08:
          uVar8 = *(undefined4 *)(param_1[0x2c] + uVar10 * 4);
        }
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069cb30(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  int unaff_EBX;
  int *piVar5;
  int aiStack_24 [9];
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x154))();
  if (piVar2 != (int *)0x0) {
    piVar2[0x18] = (int)ABS((float)in_ECX[0x23]);
    piVar3 = (int *)(**(code **)(*in_ECX + 0x174))();
    piVar2[0x15] = *piVar3;
    piVar2[0x16] = piVar3[1];
    piVar2[0x17] = piVar3[2];
    FUN_007117c0(in_ECX[10],in_ECX[8],in_ECX[9]);
    piVar3 = aiStack_24;
    piVar5 = piVar2 + 0xc;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    FUN_006f94e0(piVar2);
    iVar4 = (**(code **)(*piVar2 + 0x58))("AreaEffect");
    if (iVar4 != 0) {
      FUN_0069c9a0(iVar4);
    }
    iVar4 = FUN_00560920(&DAT_00b3cac0,piVar2[3]);
    if (((iVar4 != 0) &&
        (cVar1 = FUN_0055e000("SpecialIdle_Projectile",&stack0xffffffc8), cVar1 != '\0')) &&
       (unaff_EBX != 0)) {
      FUN_004715c0(0);
      FUN_006c9ba0(0,0,0x3f800000,0,0,0);
      *(ushort *)(iVar4 + 8) = *(ushort *)(iVar4 + 8) | 8;
      *(undefined4 *)(unaff_EBX + 0x48) = 0xff7fffff;
      FUN_00707370(_DAT_00b33a30 - 0.1,1);
    }
  }
  return;
}



void FUN_0069cdf0(undefined4 param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *piVar6;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0069f1e0(param_1,param_2);
  FUN_0069cb30(uVar2);
  piVar6 = in_ECX;
  FUN_006ecc80();
  FUN_004d35d0(piVar6);
  if ((in_ECX[0x22] != 1) && (*(int *)(in_ECX[0x1d] + 0x84) != 0)) {
    iVar3 = in_ECX[0x24];
    uVar5 = *(undefined4 *)(*(int *)(in_ECX[0x1d] + 0x84) + 0xc);
    if (iVar3 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar3);
      in_ECX[0x24] = 0;
    }
    iVar3 = FUN_0065ac50(uVar5,1,0x102,1);
    in_ECX[0x24] = iVar3;
  }
  param_2 = in_ECX[0x26];
  pcVar1 = *(code **)(*in_ECX + 0x154);
  in_ECX[0x26] = 0;
  iVar3 = (*pcVar1)();
  if ((iVar3 != 0) && (*(int *)(in_ECX[0x1d] + 0x70) != 0)) {
    iVar3 = FUN_00401f00(0x1c);
    uStack_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(in_ECX[0x1d] + 0x70) + 0xc);
      uVar4 = (**(code **)(*in_ECX + 0x154))();
      iVar3 = FUN_0069e250(uVar5,uVar4);
    }
    uStack_4 = 0xffffffff;
    in_ECX[0x26] = iVar3;
    if (iVar3 != 0) {
      FUN_0069dd50(0,in_ECX[0x20]);
      *(int *)(in_ECX[0x26] + 0x10) = param_2;
    }
  }
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    for (piVar6 = (int *)in_ECX[0x25]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
      uVar2 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar2,(char)piVar6[1]);
      if (*piVar6 != 0) {
        uVar5 = FUN_0046b250(*piVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
        iVar3 = FUN_009832e6(uVar5);
        *piVar6 = iVar3;
      }
      if (in_ECX[0x1b] != 0) {
        iVar3 = FUN_00414d80(param_2);
        piVar6[1] = iVar3;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0069d140(void)

{
  char cVar1;
  int iVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  float *pfVar5;
  int ***pppiVar6;
  undefined4 *puVar7;
  byte bVar8;
  int *in_ECX;
  int *piVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  int ***pppiStack_118;
  uint uStack_114;
  undefined1 auStack_104 [12];
  int ***pppiStack_f8;
  int ***pppiStack_f4;
  int **ppiStack_f0;
  int **ppiStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_70;
  uint uStack_6c;
  int ***pppiStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int ***pppiStack_14;
  
  pppiStack_14 = (int ***)0xffffffff;
  puStack_18 = &LAB_009c5917;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_104;
  uStack_114 = DAT_00b30aac ^ (uint)&stack0xfffffef0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (in_ECX[0x16] == 0) goto LAB_0069d5ba;
  pppiStack_118 = (int ***)0x69d196;
  iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  if (iVar2 != 0) goto LAB_0069d5ba;
  pppiStack_118 = (int ***)0x69d1a5;
  pppiVar3 = (int ***)FUN_0065a2c0();
  pppiStack_118 = (int ***)0x69d1ae;
  pppiVar4 = (int ***)FUN_006ecc80();
  pppiStack_f4 = pppiVar4;
  if (pppiVar4 == (int ***)0x0) {
    pppiStack_f8 = (int ***)0x0;
  }
  else {
    pppiStack_118 = (int ***)0x69d1bf;
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') {
      pppiStack_f8 = DAT_00b35c24;
    }
    else {
      pppiStack_118 = (int ***)0x69d1cb;
      pppiStack_f8 = (int ***)FUN_00424180();
    }
  }
  if (pppiVar3 == (int ***)0x0) {
    pppiStack_118 = (int ***)0x1;
    FUN_00890c00();
    pppiStack_118 = (int ***)0x69d20a;
    pppiStack_14 = pppiVar3;
    fVar10 = (float10)(**(code **)(*in_ECX + 500))();
    fStack_64 = (float)fVar10;
    pppiStack_118 = (int ***)0x69d21d;
    uStack_70 = (**(code **)(*in_ECX + 0x154))();
    pppiStack_118 = (int ***)0x69d230;
    pfVar5 = (float *)(**(code **)(*in_ECX + 0x174))();
    fStack_e0 = *pfVar5 * 0.14287673;
    pppiStack_118 = (int ***)0x14;
    fStack_dc = pfVar5[1] * 0.14287673;
    fStack_d8 = pfVar5[2] * 0.14287673;
    pppiStack_68 = pppiStack_f8;
    uStack_60 = 0;
    ppiStack_f0 = (int **)FUN_00401f00();
    pppiStack_14._0_1_ = 1;
    if (ppiStack_f0 == (int **)0x0) {
      pppiStack_118 = (int ***)0x0;
    }
    else {
      pppiStack_118 = (int ***)0x1;
      pppiStack_118 = (int ***)FUN_00532090(0x3f800000);
    }
    pppiStack_14 = (int ***)((uint)pppiStack_14._1_3_ << 8);
    FUN_00608ae0();
    piVar9 = (int *)0x0;
    uStack_5c = 0;
    if ((int *)in_ECX[0x1a] != (int *)0x0) {
      pppiStack_118 = (int ***)0x69d2bb;
      piVar9 = (int *)(**(code **)(*(int *)in_ECX[0x1a] + 0x20))();
    }
    pppiStack_118 = (int ***)0x69d2c8;
    cVar1 = FUN_0045a500();
    if (cVar1 == '\0') {
      if (piVar9 == (int *)0x0) {
        pppiStack_118 = (int ***)0x69d34f;
        pppiStack_118 = (int ***)(**(code **)(*in_ECX + 0x154))();
        iVar2 = FUN_00480340();
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10) == 0)) {
LAB_0069d380:
          pppiStack_118 = (int ***)0x69d385;
          iVar2 = FUN_00531d80();
          uStack_6c = iVar2 << 0x10 | 7;
        }
        else {
          pppiStack_118 = &ppiStack_f0;
          iVar2 = FUN_00497340();
          uStack_6c = (uint)*(ushort *)(iVar2 + 2) << 0x10 | 7;
        }
      }
      else {
        pppiStack_118 = (int ***)0x69d2e0;
        cVar1 = (**(code **)(*piVar9 + 400))();
        if (cVar1 == '\0') {
          pppiStack_118 = (int ***)0x69d312;
          pppiStack_118 = (int ***)(**(code **)(*piVar9 + 0x154))();
          iVar2 = FUN_00480340();
          if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10) == 0)) goto LAB_0069d380;
          pppiStack_118 = &ppiStack_f0;
          iVar2 = FUN_00497340();
          uStack_6c = (uint)*(ushort *)(iVar2 + 2) << 0x10 | 7;
        }
        else {
          pppiStack_118 = &ppiStack_f0;
          iVar2 = FUN_0065abe0();
          uStack_6c = (uint)*(ushort *)(iVar2 + 2) << 0x10 | 7;
        }
      }
    }
    else {
      uStack_6c = 7;
    }
    pppiStack_118 = (int ***)0x1;
    uStack_58 = 6;
    iVar2 = thunk_FUN_00401aa0(0x3f0);
    bVar8 = 0x10 - ((byte)iVar2 & 0xf);
    ppiStack_f0 = (int **)(iVar2 + (uint)bVar8);
    *(byte *)((int)ppiStack_f0 + -1) = bVar8;
    pppiStack_14._0_1_ = 2;
    pppiVar3 = (int ***)FUN_0068f400(&fStack_e0);
    pppiVar3[0xc9] = (int **)0x3f800000;
    pppiStack_14 = (int ***)((uint)pppiStack_14._1_3_ << 8);
    if (DAT_00b333b8 == '\0') {
      pppiVar3[0x7d] = (int **)((uint)pppiVar3[0x7d] & 0xffefffff);
    }
    else {
      pppiVar3[0x7d] = (int **)((uint)pppiVar3[0x7d] | 0x100000);
    }
    pppiVar3[0x7d] = (int **)((uint)pppiVar3[0x7d] | 0x80000);
    ppiStack_f0 = (int **)&pppiStack_118;
    pppiStack_118 = pppiVar3;
    InterlockedIncrement((LONG *)(pppiVar3 + 1));
    (**(code **)(*(int *)in_ECX[0x16] + 400))();
    FUN_008910f0(1000);
    pppiStack_14 = (int ***)0xffffffff;
    pppiStack_118 = (int ***)0x69d461;
    FUN_00890f70();
    pppiVar4 = pppiStack_f4;
  }
  if ((pppiVar4 == (int ***)0x0) || (pppiStack_f8 == (int ***)0x0)) {
    fVar10 = (float10)-4.8618427e+37;
  }
  else {
    pppiStack_118 = (int ***)0x69d477;
    fVar10 = (float10)FUN_004cace0();
    fVar10 = fVar10 * (float10)0.1428767293691635;
  }
  pppiVar3[0xc6] = (int **)(float)fVar10;
  if (pppiVar3[2] == (int **)0x0) {
    iVar2 = 0;
  }
  else {
    pppiStack_118 = (int ***)0x69d497;
    iVar2 = FUN_008ac0c0();
  }
  if (*(int *)(iVar2 + 8) == 0) {
    pppiStack_f4 = (int ***)0x0;
  }
  else {
    pppiStack_f4 = *(int ****)(*(int *)(iVar2 + 8) + 0x2b0);
  }
  pppiStack_118 = pppiStack_f8;
  FUN_00895060();
  pppiStack_118 = (int ***)0x69d4ce;
  pppiVar4 = (int ***)(**(code **)(*in_ECX + 0x154))();
  if (pppiVar3[0xd9] == (int **)0x0) {
    pppiVar6 = (int ***)0x0;
  }
  else {
    pppiStack_118 = (int ***)0x0;
    pppiVar6 = (int ***)FUN_0089f6b0();
  }
  if (pppiVar6 != pppiVar4) {
    if (pppiVar3[0xd9] != (int **)0x0) {
      pppiStack_118 = (int ***)0x0;
      FUN_0089f650(pppiVar4);
    }
    if ((pppiStack_f8 != (int ***)0x0) && (*(char *)((int)pppiStack_f8 + 0x1a) != '\0')) {
      pppiStack_118 = (int ***)0x0;
      (*(code *)(*pppiVar3)[0x22])();
      (**(code **)(*in_ECX + 0x214))();
    }
    pppiStack_118 = pppiVar4;
    FUN_0088ee20();
    FUN_0088d070(pppiVar4,6,1,0);
  }
  pppiStack_118 = (int ***)0x69d544;
  puVar7 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
  pppiVar3 = pppiStack_f8;
  ppiStack_ec = (int **)*puVar7;
  uStack_e8 = puVar7[1];
  fStack_e4 = (float)puVar7[2];
  if (pppiStack_f4 != pppiStack_f8) {
    if (pppiStack_f4 != (int ***)0x0) {
      pppiStack_118 = (int ***)0x0;
      FUN_0088cd50(pppiVar4,1);
    }
    fStack_e4 = fStack_e4 + 8.0;
  }
  if (pppiVar3 != (int ***)0x0) {
    pppiStack_118 = &ppiStack_ec;
    FUN_00452a10();
    pppiStack_118 = (int ***)&pppiStack_f4;
    FUN_0057e270();
    pppiStack_118 = (int ***)0x0;
    (*(code *)(*pppiVar3)[0x24])(pppiVar4,1,0,(uint)pppiStack_f4 >> 0x10);
  }
LAB_0069d5ba:
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069d5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,int param_11,int param_12)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *puVar4;
  undefined1 auStack_54 [4];
  float local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009c5958;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_54;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_50 = (float)param_4;
  local_4c = param_11;
  local_48 = param_12;
  FUN_0069f360(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  local_14 = 0;
  *in_ECX = &PTR_FUN_00a75efc;
  in_ECX[6] = &PTR_FUN_00a75ef4;
  iVar3 = FUN_004133c0(uVar2);
  local_50 = _DAT_00b37f20;
  if (_DAT_00b37f20 < (float)iVar3) {
    local_50 = (float)iVar3;
  }
  in_ECX[0x20] = local_50;
  iVar3 = FUN_00413370();
  local_50 = _DAT_00b37f28;
  if (_DAT_00b37f28 < (float)iVar3) {
    local_50 = (float)iVar3;
  }
  in_ECX[0x21] = local_50;
  fVar1 = *(float *)(in_ECX[0x1d] + 0x74) * _DAT_00b37ee8;
  in_ECX[0x22] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x17] = fVar1;
  in_ECX[0x25] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x23] = 0x3f800000;
  if (local_4c == 0) {
    FUN_0069fd40();
  }
  else {
    FUN_004d7d10(local_4c);
  }
  FUN_0069cb30();
  FUN_0069d140();
  local_40 = 0xff7fffff;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  iVar3 = FUN_0065a2c0();
  if ((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) {
    FUN_008ac0b0(&local_40);
  }
  puVar4 = in_ECX;
  FUN_006ecc80();
  FUN_004d35d0(puVar4);
  if (*(int *)(in_ECX[0x1d] + 0x84) != 0) {
    iVar3 = in_ECX[0x24];
    local_4c = *(int *)(*(int *)(in_ECX[0x1d] + 0x84) + 0xc);
    if (iVar3 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar3);
      in_ECX[0x24] = 0;
    }
    iVar3 = FUN_0065ac50(local_4c,1,0x102,1);
    in_ECX[0x24] = iVar3;
    if (iVar3 != 0) {
      FUN_006b7280(0x3f800000);
    }
  }
  iVar3 = local_48;
  if (local_48 != 0) {
    FUN_0069e200(in_ECX);
    in_ECX[0x26] = iVar3;
    FUN_0069dd50(0,in_ECX[0x20]);
  }
  FUN_0069ff10();
  if ((int *)in_ECX[0x1a] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*(int *)in_ECX[0x1a] + 0x20))();
  }
  if (iVar3 != DAT_00b333c4) {
    _DAT_00b3c0d0 = _DAT_00b38118 + _DAT_00b3c0d0;
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_0069d880(void)

{
  undefined4 *in_ECX;
  
  FUN_0056bc20(0,0);
  in_ECX[8] = 0;
  *in_ECX = &PTR_FUN_00a76124;
  in_ECX[7] = 0;
  in_ECX[2] = 0x7f7fffff;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  return;
}



void FUN_0069d8c0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5c78;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0056bc20(0,0);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a76124;
  in_ECX[7] = param_1;
  if (param_1 != 0) {
    uVar2 = FUN_006ecc80(uVar1);
    in_ECX[3] = uVar2;
  }
  in_ECX[8] = 0;
  in_ECX[6] = param_2;
  *(undefined1 *)(in_ECX + 9) = 0;
  in_ECX[2] = 0x7f7fffff;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069d960(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_2 != 0) {
    uVar1 = FUN_006ecc80();
    *(undefined4 *)(in_ECX + 0xc) = uVar1;
  }
  return;
}



undefined1 FUN_0069d990(void)

{
  return 0;
}



uint FUN_0069d9a0(float param_1)

{
  float fVar1;
  float fVar2;
  uint in_EAX;
  int iVar3;
  int in_ECX;
  
  *(float *)(in_ECX + 0x20) = param_1 + *(float *)(in_ECX + 0x20);
  if (*(int **)(in_ECX + 0x1c) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x154))();
    in_EAX = 0;
    if ((iVar3 != 0) && (in_EAX = *(uint *)(in_ECX + 0x1c), (*(uint *)(in_EAX + 8) >> 5 & 1) == 0))
    {
      fVar1 = *(float *)(in_ECX + 0x20);
      fVar2 = *(float *)(in_ECX + 8);
      if (fVar2 < fVar1) {
        *(undefined1 *)(in_ECX + 0x24) = 1;
      }
      return CONCAT31((int3)(CONCAT22((short)(in_EAX >> 0x10),
                                      (ushort)(fVar2 < fVar1) << 8 |
                                      (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                      (ushort)(fVar2 == fVar1) << 0xe) >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



undefined4 * FUN_0069d9f0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3ba6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar6 = (undefined4 *)0x0;
  if (((*(uint *)(param_1 + 0x14) >> 2 & 1) == 0) && (DAT_00b333b8 == '\0')) {
    iVar3 = FUN_00401f00(0x38,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      iVar3 = param_1;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1);
      piVar5 = (int *)FUN_0069e410(uVar4,iVar3);
    }
    local_4 = 0xffffffff;
    cVar1 = (**(code **)(*piVar5 + 0x68))();
    if (cVar1 == '\0') {
      (**(code **)*piVar5)(1);
    }
    else {
      FUN_00678d30(piVar5);
      puVar6 = (undefined4 *)FUN_00401f00(8,uVar2);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = piVar5;
        puVar6[1] = 0;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x14) >> 1 & 1) == 0) {
    iVar3 = FUN_00401f00(0x4c,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1);
      piVar5 = (int *)FUN_006a0800(uVar4,param_1);
    }
    local_4 = 0xffffffff;
    cVar1 = (**(code **)(*piVar5 + 0x68))();
    if (cVar1 != '\0') {
      FUN_00678d30(piVar5);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_00446cb0(piVar5);
        *unaff_FS_OFFSET = local_c;
        return puVar6;
      }
      puVar6 = (undefined4 *)FUN_00401f00(8);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = piVar5;
        puVar6[1] = 0;
        *unaff_FS_OFFSET = local_c;
        return puVar6;
      }
      *unaff_FS_OFFSET = local_c;
      return (undefined4 *)0x0;
    }
    (**(code **)*piVar5)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar6;
}



undefined4 FUN_0069db90(void)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (0x71 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    uVar1 = 9;
  }
  return uVar1;
}



void FUN_0069dbb0(void)

{
  int in_ECX;
  
  FUN_0045b9a0(in_ECX + 0x20,4);
  FUN_0045b9a0(in_ECX + 0x24,1);
  if (0x71 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 8,4);
  }
  return;
}



void FUN_0069dbf0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_004534d0(in_ECX + 0x20,4);
  FUN_004534d0(in_ECX + 0x24,1);
  if (0x71 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 8,4);
    *(undefined4 *)(in_ECX + 0x18) = param_1;
    *(undefined4 *)(in_ECX + 0x1c) = param_2;
    return;
  }
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  *(undefined4 *)(in_ECX + 0x1c) = param_2;
  return;
}



void FUN_0069dc50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a76124;
  in_ECX[7] = 0;
  if ((in_ECX[6] != 0) && (*(int *)(in_ECX[6] + 0x34) != 0)) {
    FUN_0065c620(in_ECX);
  }
  in_ECX[6] = 0;
  FUN_0056bc50();
  return;
}



void FUN_0069dc90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    iVar1 = FUN_006ecc80();
    *(int *)(in_ECX + 0xc) = iVar1;
    if ((((param_1 != 0) && (iVar1 != 0)) && (iVar1 = FUN_004ca790(), iVar1 != 0)) &&
       ((*(int *)(param_1 + 0x1c) == 0 ||
        (iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c), iVar2 = FUN_004ca790(), iVar2 != iVar1))
       )) {
      uVar3 = FUN_004c9c80(param_1 + 0x88);
      piVar4 = (int *)FUN_00441800(uVar3,3);
      (**(code **)(*piVar4 + 0x84))(param_1,1);
    }
  }
  return;
}



void FUN_0069dd00(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a76124;
  in_ECX[7] = 0;
  if ((in_ECX[6] != 0) && (*(int *)(in_ECX[6] + 0x34) != 0)) {
    FUN_0065c620(in_ECX);
  }
  in_ECX[6] = 0;
  FUN_0056bc50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0069dd50(undefined1 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = param_2;
  *(undefined1 *)(in_ECX + 0x18) = param_1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



void FUN_0069dd70(float param_1)

{
  float *in_ECX;
  
  *in_ECX = param_1 * *in_ECX;
  in_ECX[1] = in_ECX[1] * param_1;
  in_ECX[2] = param_1 * in_ECX[2];
  return;
}



void FUN_0069dda0(float param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    if (0.0 < *(float *)(in_ECX + 0x14)) {
      param_1 = param_1 + *(float *)(in_ECX + 0x10);
      *(float *)(in_ECX + 0x10) = param_1;
      uVar1 = *(uint *)(*(int *)(in_ECX + 4) + 0x78);
      param_1 = param_1 / *(float *)(in_ECX + 0x14);
      if (*(char *)(in_ECX + 0x18) == '\0') {
        param_1 = 1.0 - param_1;
      }
      if (param_1 <= 1.0) {
        if (param_1 < 0.0) {
          *(undefined4 *)(in_ECX + 0x14) = 0;
          param_1 = 0.0;
        }
      }
      else {
        *(undefined4 *)(in_ECX + 0x14) = 0;
        param_1 = 1.0;
      }
      iVar2 = *(int *)(in_ECX + 8);
      param_1 = param_1 / 255.0;
      *(int *)(iVar2 + 0xb8) = *(int *)(iVar2 + 0xb8) + 1;
      *(float *)(iVar2 + 0xec) = param_1 * (float)(uVar1 & 0xff);
      *(float *)(iVar2 + 0xf0) = param_1 * (float)(uVar1 >> 8 & 0xff);
      *(float *)(iVar2 + 0xf4) = param_1 * (float)(uVar1 >> 0x10 & 0xff);
      FUN_004b22e0(in_ECX + 8,0);
      return;
    }
    FUN_004b22e0(in_ECX + 8,0);
  }
  return;
}



void FUN_0069ded0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar4 = FUN_0046b250(param_1,uVar3);
  iVar5 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03518,0);
  in_ECX[1] = iVar5;
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)FUN_00401f00(0x114);
    local_4 = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_0071a490();
      puVar6[0x42] = 0;
      *puVar6 = &PTR_FUN_00a43044;
      puVar6[0x43] = 0x3f800000;
      puVar6[0x44] = 0;
    }
    piVar1 = in_ECX + 2;
    local_4 = 0xffffffff;
    FUN_0075fa90(puVar6);
    in_ECX[3] = 0x3f800000;
    uVar3 = *(uint *)(in_ECX[1] + 0x78);
    iVar5 = *piVar1;
    *(int *)(iVar5 + 0xb8) = *(int *)(iVar5 + 0xb8) + 1;
    *(float *)(iVar5 + 0xec) = (float)(uVar3 & 0xff) / 255.0;
    *(float *)(iVar5 + 0xf0) = (float)(uVar3 >> 8 & 0xff) / 255.0;
    *(float *)(iVar5 + 0xf4) = (float)(uVar3 >> 0x10 & 0xff) / 255.0;
    iVar5 = *piVar1;
    *(int *)(iVar5 + 0xb8) = *(int *)(iVar5 + 0xb8) + 1;
    *(undefined4 *)(iVar5 + 0xf8) = 0x43fa0000;
    *(undefined4 *)(iVar5 + 0xfc) = 0;
    *(undefined4 *)(iVar5 + 0x100) = 0;
    iVar5 = *piVar1;
    uVar4 = *(undefined4 *)(in_ECX[1] + 0x88);
    piVar2 = (int *)(iVar5 + 0xb8);
    *piVar2 = *piVar2 + 1;
    *(undefined4 *)(iVar5 + 0xdc) = uVar4;
    iVar5 = FUN_007b4280(0);
    if (iVar5 != 0) {
      FUN_007c6ae0(*piVar1,1);
    }
    FUN_0075fa90(param_2);
    (**(code **)(*(int *)*in_ECX + 0x84))(*piVar1,1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069e0b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c5cb3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_00977c50(3,uVar2);
  if ((int *)*in_ECX != (int *)0x0) {
    (**(code **)(*(int *)*in_ECX + 0x88))(local_14,in_ECX[2]);
    if (local_14[0] != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(local_14[0] + 1);
      if ((LVar3 == 0) && (local_14[0] != (undefined4 *)0x0)) {
        (**(code **)*local_14[0])(1);
      }
    }
  }
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *in_ECX = 0;
  }
  iVar4 = FUN_007b4280(0);
  if (iVar4 != 0) {
    FUN_007c7dc0(in_ECX[2]);
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  in_ECX[1] = 0;
  FUN_00977c50(2);
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069e200(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)(*param_1 + 0x154))();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x154))();
    if (in_ECX[1] != 0) {
      FUN_0075fa90(uVar2);
      (**(code **)(*(int *)*in_ECX + 0x84))(in_ECX[2],1);
    }
  }
  return;
}



void FUN_0069e250(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c5ce3;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  in_ECX[3] = 0x3f800000;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  FUN_0069ded0(param_1,param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069e350(void)

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
  puStack_8 = &LAB_009c5d1e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0069d880(uVar2);
  *in_ECX = &PTR_FUN_00a761c4;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  puVar1 = (undefined4 *)in_ECX[0xc];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xc] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xd] = 0;
  }
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  in_ECX[0xb] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069e410(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5d1e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0069d8c0(param_1,param_2);
  *in_ECX = &PTR_FUN_00a761c4;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  puVar1 = (undefined4 *)in_ECX[0xc];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[0xc] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xd] = 0;
  }
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  in_ECX[0xb] = 0;
  iVar4 = FUN_00419b30(0);
  uVar5 = (**(code **)(*(int *)(iVar4 + 0x18) + 0x14))();
  in_ECX[0xb] = uVar5;
  *(undefined1 *)(in_ECX + 10) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069e4f0(undefined4 param_1,undefined4 param_2,float param_3)

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
  puStack_8 = &LAB_009c5d1e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0069d8c0(param_1,0);
  *in_ECX = &PTR_FUN_00a761c4;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  puVar1 = (undefined4 *)in_ECX[0xc];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[0xc] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xd] = 0;
  }
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  in_ECX[0xb] = param_2;
  *(undefined1 *)(in_ECX + 10) = 0;
  if (param_3 < 0.0) {
    param_3 = 3.4028235e+38;
  }
  in_ECX[2] = param_3;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069e5d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c5d5e;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a761c4;
  iVar1 = in_ECX[0xc];
  local_4 = 2;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(local_14,iVar1,uVar4);
      if (local_14[0] != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(local_14[0] + 1);
        if ((LVar5 == 0) && (local_14[0] != (undefined4 *)0x0)) {
          (**(code **)*local_14[0])(1);
        }
      }
    }
    puVar2 = (undefined4 *)in_ECX[0xc];
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      in_ECX[0xc] = 0;
    }
  }
  puVar2 = (undefined4 *)in_ECX[0xd];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0xd] = 0;
  }
  pcVar3 = (char *)in_ECX[0xb];
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    FUN_004384e0(pcVar3,0,1);
    if (*(char *)(in_ECX + 10) != '\0') {
      FUN_00401f20(in_ECX[0xb]);
    }
  }
  in_ECX[0xb] = 0;
  puVar2 = (undefined4 *)in_ECX[0xd];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0xc];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0069dc50();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069e810(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int *in_ECX;
  char local_5;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(in_ECX[7] + 0xc);
  FUN_0045f7a0(&local_4,4);
  pcVar3 = (char *)in_ECX[0xb];
  cVar2 = (char)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_5 = (char)pcVar3 - (cVar2 + '\x01');
  FUN_0045b9a0(&local_5,1);
  FUN_0045b9a0(in_ECX[0xb],local_5);
  (**(code **)(*in_ECX + 0x78))(0,in_ECX[7]);
  return;
}



bool FUN_0069e890(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Dst;
  int *in_ECX;
  byte local_5;
  undefined4 local_4;
  
  bVar2 = true;
  FUN_0045ba00(&local_4,4);
  uVar3 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  iVar4 = FUN_009832e6(uVar3);
  in_ECX[7] = iVar4;
  if (iVar4 != 0) {
    iVar4 = FUN_006ecc80();
    if (iVar4 != 0) {
      iVar4 = FUN_006ecc80();
      if (*(char *)(iVar4 + 0x26) == '\x06') goto LAB_0069e8f2;
    }
  }
  bVar2 = false;
LAB_0069e8f2:
  FUN_004534d0(&local_5,1);
  _Dst = (void *)FUN_00401f00(local_5 + 1);
  _memset(_Dst,0,local_5 + 1);
  FUN_004534d0(_Dst,local_5);
  pcVar1 = *(code **)(*in_ECX + 0x7c);
  *(undefined1 *)(in_ECX + 10) = 1;
  (*pcVar1)(0,in_ECX[7]);
  if (bVar2) {
    (**(code **)(*in_ECX + 0x80))(0,in_ECX[7]);
    (**(code **)(*in_ECX + 0x84))(0,in_ECX[7],_Dst);
  }
  return bVar2;
}



void FUN_0069e980(byte param_1)

{
  FUN_0069e5d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0069eb60(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if ((int *)in_ECX[7] == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)in_ECX[7] + 0x154))();
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = FUN_0069d9a0(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (in_ECX[0xc] != 0) {
    (**(code **)(*in_ECX + 0x70))();
    iVar2 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(in_ECX[0xc] + 0xc));
    if ((((iVar2 != 0) && (iVar2 = FUN_004715a0("SpecialIdle_HitEffect"), iVar2 != 0)) &&
        (*(float *)(iVar2 + 0x30) < *(float *)(iVar2 + 0x34))) && (*(int *)(iVar2 + 0x44) != 0)) {
      if ((*(int *)(iVar2 + 0x24) != 2) && ((char)in_ECX[9] == '\0')) {
        return 1;
      }
      *(undefined1 *)(in_ECX + 9) = 1;
      FUN_006c9cb0(0,0);
      in_ECX[2] = in_ECX[8];
    }
  }
  if (((char)in_ECX[9] != '\0') && ((float)in_ECX[2] + 2.0 < (float)in_ECX[8])) {
    return 0;
  }
  return 1;
}



int FUN_0069f100(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = 0;
  if (DAT_00b3c0cc == 0) {
    iVar2 = FUN_00401f00(0x84,uVar1);
    local_4 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_004a9430();
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)(iVar3 + 0x30) + 0x18))("marker_error.nif");
    DAT_00b3c0cc = iVar3;
    FUN_0044d950(iVar3);
  }
  iVar3 = DAT_00b3c0cc;
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_0069f1e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_006990e0(in_ECX[0x1a]);
  in_ECX[0x1a] = iVar1;
  iVar1 = FUN_004199c0(in_ECX[0x1b]);
  in_ECX[0x1b] = iVar1;
  iVar1 = FUN_004152c0(2,0);
  in_ECX[0x1c] = iVar1;
  iVar1 = FUN_00419b30(0);
  in_ECX[0x1d] = iVar1;
  (**(code **)(*in_ECX + 0x14c))();
  FUN_0065a780(param_1,param_2);
  uVar2 = FUN_00659a00();
  FUN_00674550(in_ECX,uVar2);
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = FUN_00659a00(0,0,0);
  FUN_00673a90(in_ECX,uVar2,uVar3,uVar4,uVar5);
  if ((in_ECX[0x1a] == 0) || (in_ECX[0x1b] == 0)) {
    FUN_00453910(in_ECX);
  }
  return;
}



void FUN_0069f2b0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2f13;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00659990(uVar1);
  in_ECX[2] = in_ECX[2] | 0x200000;
  in_ECX[0x19] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a76284;
  in_ECX[6] = &PTR_FUN_00a76278;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  iVar2 = FUN_00401f00(0x2ec);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00628ee0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  in_ECX[0x16] = uVar3;
  uVar3 = FUN_0069f100();
  FUN_006c5420(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069f360(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5d93;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00659990(uVar1);
  in_ECX[0x19] = 0;
  in_ECX[0x1c] = param_3;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a76284;
  in_ECX[6] = &PTR_FUN_00a76278;
  in_ECX[0x1a] = param_1;
  in_ECX[0x1b] = param_2;
  in_ECX[0x1d] = param_4;
  fVar4 = (float10)FUN_00673b00();
  in_ECX[0x1e] = (float)fVar4;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  iVar2 = FUN_00401f00(0x2ec);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00628ee0();
  }
  in_ECX[0x16] = uVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004d8a30(param_5,param_6,param_7);
  FUN_004d89a0(param_8,param_9,param_10);
  iVar2 = (**(code **)(*param_1 + 0x20))();
  if (iVar2 != 0) {
    uVar3 = FUN_006ecc80();
    FUN_0065a330(uVar3);
  }
  uVar3 = FUN_0069f100();
  FUN_006c5420(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069f490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5ddc;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_6 == 0) {
    param_6 = *(int *)(param_5 + 0x1c);
  }
  uVar2 = FUN_00416410(uVar1);
  switch(uVar2) {
  case 0:
    iVar3 = FUN_00401f00(0x90);
    local_4 = 0;
    if (iVar3 == 0) {
LAB_0069f68b:
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00696250(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11
                           ,param_12,param_2,param_3);
    }
    break;
  case 1:
    iVar3 = FUN_00401f00(0xa4);
    local_4 = 1;
    if (iVar3 == 0) goto LAB_0069f68b;
    iVar3 = FUN_006988a0(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                         param_12);
    break;
  case 2:
    iVar3 = FUN_00401f00(0x7c);
    local_4 = 3;
    if (iVar3 == 0) goto LAB_0069f68b;
    iVar3 = FUN_006a1ca0(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                         param_12);
    break;
  case 3:
    iVar3 = FUN_00401f00(0x9c);
    local_4 = 2;
    if (iVar3 == 0) goto LAB_0069f68b;
    iVar3 = FUN_0069d5e0(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                         param_12,param_2,param_3);
    break;
  default:
    goto switchD_0069f4d1_default;
  }
  local_4 = 0xffffffff;
  if (iVar3 != 0) {
    FUN_00673a90(iVar3,0,0,0,0);
  }
switchD_0069f4d1_default:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069f6d0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x154))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x154))();
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x58))("MagicAreaDisplay");
    if ((puVar3 != (undefined4 *)0x0) && ((int *)puVar3[7] != (int *)0x0)) {
      (**(code **)(*(int *)puVar3[7] + 0x88))(&stack0xfffffff8);
      if (puVar3 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar3 + 1);
        if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
      }
    }
  }
  return;
}



uint FUN_0069f740(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = FUN_00659be0(param_1);
  uVar2 = (uint)(ushort)(sVar1 + 0xc);
  if (0x47 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    uVar2 = uVar2 + 4;
  }
  if (99 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}



void FUN_0069f770(undefined4 param_1)

{
  int in_ECX;
  undefined4 local_4;
  
  FUN_00659c30(param_1);
  param_1 = FUN_00699c70();
  FUN_0046ac90(&param_1,4);
  local_4 = FUN_00419a20();
  FUN_0046ac90(&local_4,4);
  FUN_0046ac70(in_ECX + 0x78,4);
  if (0x47 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 100,4);
  }
  if (99 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x60,4);
  }
  return;
}



void FUN_0069f800(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_00659c90(param_1,param_2);
  FUN_0046aca0(&param_2,4);
  *(undefined4 *)(in_ECX + 0x68) = param_2;
  FUN_0046aca0(&param_1,4);
  *(undefined4 *)(in_ECX + 0x6c) = param_1;
  FUN_0046ac80(in_ECX + 0x78,4);
  if (0x47 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 100,4);
  }
  if (99 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x60,4);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069f880(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_4c [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_4c;
  if ((param_7 != (int *)0x0) && (iVar1 = (**(code **)(*param_7 + 0x58))(), iVar1 != 0)) {
    iVar1 = param_7[2];
    if ((iVar1 == 0) || (iVar1 == -0x14)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(iVar1 + 0x30);
    }
    switch(uVar2 & 0x3f) {
    case 2:
    case 10:
      fStack_48 = _DAT_00b370f0;
      break;
    default:
      fStack_48 = _DAT_00b370e8;
      break;
    case 8:
      pfVar3 = (float *)FUN_00403c00();
      fStack_48 = *pfVar3;
      break;
    case 0xe:
      pfVar3 = (float *)FUN_00403c00();
      fStack_48 = *pfVar3;
    }
    fStack_48 = fStack_48 * 1750.0;
    if (param_7[2] == 0) {
      fVar4 = (float10)0;
    }
    else {
      fVar4 = (float10)FUN_0089da90();
    }
    fStack_44 = (float)fVar4;
    if (fStack_44 < _DAT_00b37108) {
      fStack_48 = (fStack_44 / _DAT_00b37108) * fStack_48;
    }
    fStack_48 = _DAT_00b370e0 * fStack_48;
    iVar1 = param_7[2];
    param_4 = param_4 * 0.14287673;
    param_5 = param_5 * 0.14287673;
    param_6 = param_6 * 0.14287673;
    fVar6 = param_6 * param_6;
    fStack_30 = param_1 * 0.14287673;
    fVar5 = fVar6 + param_5 * param_5 + param_4 * param_4;
    fStack_2c = param_2 * 0.14287673;
    auVar7._4_4_ = fVar6;
    auVar7._0_4_ = fVar5;
    auVar7._8_4_ = fVar6;
    auVar7._12_4_ = fVar6;
    auVar7 = rsqrtss(auVar7,auVar7);
    fVar6 = auVar7._0_4_;
    fStack_28 = param_3 * 0.14287673;
    fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
    fStack_40 = fVar5 * param_4 * fStack_48;
    fStack_3c = fVar5 * param_5 * fStack_48;
    fStack_38 = fVar5 * param_6 * fStack_48;
    fStack_34 = fVar5 * fStack_34 * fStack_48;
    FUN_008a6410();
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x60))(&fStack_40,&fStack_30);
  }
  return;
}



void FUN_0069fa60(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  LONG LVar6;
  char *pcVar7;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c5e08;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a76284;
  in_ECX[6] = &PTR_FUN_00a76278;
  local_4 = 0;
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    uVar5 = (**(code **)(*(int *)in_ECX[0x16] + 8))(uVar4);
    FUN_00674550(in_ECX,uVar5);
  }
  if (in_ECX[0xf] != 0) {
    (**(code **)(*DAT_00b333a4 + 0x88))(local_14,in_ECX[0xf]);
    if (local_14[0] != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(local_14[0] + 1);
      if ((LVar6 == 0) && (local_14[0] != (undefined4 *)0x0)) {
        (**(code **)*local_14[0])(1);
      }
    }
  }
  iVar3 = in_ECX[0x1d];
  if (iVar3 != 0) {
    if (*(ushort *)(iVar3 + 0x20) == 0xffff) {
      pcVar7 = *(char **)(iVar3 + 0x1c);
      pcVar1 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar7 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(iVar3 + 0x20);
    }
    if (uVar4 != 0) {
      uVar9 = 1;
      uVar8 = 0;
      uVar5 = (**(code **)(*(int *)(iVar3 + 0x18) + 0x14))(0,1);
      FUN_004384e0(uVar5,uVar8,uVar9);
    }
  }
  if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
    FUN_0065a050(0);
  }
  local_4 = 0xffffffff;
  FUN_00659f90();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0069fb80(char param_1)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)FUN_0065a2c0();
  if (piVar1 != (int *)0x0) {
    if (param_1 != '\0') {
      (**(code **)(*piVar1 + 0x88))(0);
      (**(code **)(*in_ECX + 0x214))();
      return;
    }
    FUN_00893950();
    FUN_0069f6d0();
  }
  return;
}



void FUN_0069fbd0(byte param_1)

{
  FUN_0069fa60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_0069fbf0(char *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5e38;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar3 = FUN_00439eb0(param_1,0,0,1);
    if (iVar3 != 0) {
      FUN_00478b90(uVar2);
      local_10 = 0x3f800000;
      local_14 = 0x3f800000;
      local_18 = 0x3f800000;
      local_4 = 0;
      iVar3 = FUN_00700610(&local_28);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe;
        iVar1 = *(int *)(iVar3 + 0x1c);
        *(undefined4 *)(iVar3 + 0x60) = 0x3f800000;
        puVar5 = &DAT_00b26dc4;
        puVar6 = (undefined4 *)(iVar3 + 0x30);
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined4 *)(iVar3 + 0x54) = DAT_00b3f9a8;
        *(undefined4 *)(iVar3 + 0x58) = DAT_00b3f9ac;
        *(undefined4 *)(iVar3 + 0x5c) = DAT_00b3f9b0;
        if (iVar1 != 0) {
          *(undefined4 *)(iVar3 + 0x1c) = 0;
        }
        FUN_00707610();
      }
      local_4 = 0xffffffff;
      if (local_28 != (undefined4 *)0x0) {
        (**(code **)*local_28)(1);
      }
      if (local_24 != (undefined4 *)0x0) {
        (**(code **)*local_24)(1);
      }
      *unaff_FS_OFFSET = local_c;
      return iVar3;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_0069fd20(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 0x14))();
  FUN_0069fbf0();
  return;
}



int * FUN_0069fd40(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  undefined1 auStack_30 [36];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c5e6b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar6 = (int *)0x0;
  if ((((uint)in_ECX[2] >> 5 & 1) == 0) && (((uint)in_ECX[2] >> 0xb & 1) == 0)) {
    iVar3 = (**(code **)(*in_ECX + 0x154))(uVar2);
    if (iVar3 == 0) {
      uVar4 = (**(code **)(*(int *)(in_ECX[0x1d] + 0x18) + 0x14))();
      piVar6 = (int *)FUN_0069fbf0(uVar4);
      if (piVar6 != (int *)0x0) {
        iVar3 = (**(code **)(*in_ECX + 0x170))();
        if ((*(uint *)(iVar3 + 8) >> 4 & 1) != 0) {
          FUN_0046a9c0(1);
        }
        FUN_004d7d10(piVar6);
        piVar5 = (int *)(**(code **)(*in_ECX + 0x174))();
        piVar6[0x15] = *piVar5;
        piVar6[0x16] = piVar5[1];
        piVar6[0x17] = piVar5[2];
        piVar5 = (int *)FUN_004d7af0(auStack_30);
        piVar7 = piVar6 + 0xc;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar7 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar7 = piVar7 + 1;
        }
        FUN_00897a20(piVar6,1);
        iVar3 = FUN_006ff9c0(&DAT_00a7d0ec);
        if (((iVar3 != 0) && ((*(uint *)(iVar3 + 0xc) >> 4 & 1) != 0)) &&
           (((uint)in_ECX[2] >> 7 & 1) == 0)) {
          FUN_004e26f0(piVar6);
        }
        uVar4 = FUN_006ff9c0(&DAT_00a3ceb0);
        iVar3 = FUN_00560920(&DAT_00b35acc,uVar4);
        if (iVar3 == 0) {
          iVar3 = FUN_00401f00(0x10);
          uStack_4 = 0;
          if (iVar3 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_004d67c0(in_ECX);
          }
          uStack_4 = 0xffffffff;
          FUN_006ff8a0(uVar4);
        }
        else {
          *(int **)(iVar3 + 0xc) = in_ECX;
        }
        FUN_004e3490();
        fVar8 = (float10)(**(code **)(*in_ECX + 0xec))();
        pcVar1 = *(code **)(*piVar6 + 0x50);
        piVar6[0x18] = (int)(float)ABS(fVar8);
        (*pcVar1)();
      }
    }
    *unaff_FS_OFFSET = local_c;
    return piVar6;
  }
  *unaff_FS_OFFSET = local_c;
  return (int *)0x0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0069ff10(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  int *in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined1 auStack_2c4 [7];
  char cStack_2bd;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  undefined4 uStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  undefined4 uStack_274;
  undefined1 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_23c;
  undefined4 uStack_230;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 *puStack_208;
  float fStack_1ec;
  undefined1 auStack_1d0 [16];
  int iStack_1c0;
  int iStack_1bc;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c5e9b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_2c4;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffd30;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar3 = (**(code **)(*in_ECX + 0x154))(uVar2);
  if ((((int *)in_ECX[0x1a] == (int *)0x0) ||
      (piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x1a] + 0x20))(), piVar4 == DAT_00b333c4)) &&
     (iVar3 != 0)) {
    uStack_23c = 0x3f800000;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_20c = 0;
    puStack_208 = (undefined1 *)0x0;
    uStack_220 = DAT_00ba7a40;
    uStack_21c = DAT_00ba7a44;
    uStack_218 = DAT_00ba7a48;
    uStack_214 = uRam00ba7a4c;
    pfVar5 = (float *)(**(code **)(*in_ECX + 0x174))();
    fStack_290 = *pfVar5;
    fStack_28c = pfVar5[1];
    fStack_288 = pfVar5[2];
    pfVar5 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
    fStack_2a8 = *pfVar5;
    fStack_2a4 = pfVar5[1];
    fStack_2a0 = pfVar5[2];
    fStack_2ac = (float)DAT_00b333c4[0x175];
    fVar9 = (float10)(**(code **)(*DAT_00b333c4 + 0xec))();
    fStack_2a0 = (float)(fVar9 * (float10)fStack_2ac + (float10)fStack_2a0);
    fStack_294 = fStack_290 - fStack_2a8;
    fStack_298 = fStack_28c - fStack_2a4;
    fStack_2ac = fStack_288 - fStack_2a0;
    iVar3 = FUN_0065a2c0();
    if (iVar3 == 0) {
      puVar6 = (undefined4 *)FUN_0065abe0(&fStack_2b0);
    }
    else {
      puVar6 = (undefined4 *)FUN_0057e270(&fStack_2b0);
    }
    uStack_25c = *puVar6;
    fStack_280 = fStack_2a8 * 0.14287673;
    fStack_27c = fStack_2a4 * 0.14287673;
    fStack_278 = fStack_2a0 * 0.14287673;
    uStack_274 = uStack_284;
    fStack_2b4 = fStack_294 + fStack_2a8;
    fStack_2b8 = fStack_298 + fStack_2a4;
    fStack_2bc = fStack_2a0 + fStack_2ac;
    fStack_290 = fStack_2b4;
    fStack_28c = fStack_2b8;
    fStack_288 = fStack_2bc;
    FUN_004f90c0(&fStack_290);
    FUN_00538c00();
    puStack_208 = auStack_1d0;
    uStack_14 = 0;
    uStack_20c = 0;
    iVar3 = FUN_006ecc80();
    if (iVar3 != 0) {
      FUN_006ecc80();
      cVar1 = FUN_004c97f0();
      piVar4 = DAT_00b35c24;
      if (cVar1 != '\0') {
        piVar4 = (int *)FUN_00424180();
      }
      cVar1 = (**(code **)(*piVar4 + 0x88))(&fStack_280);
      if (cVar1 != '\0') {
        cStack_2bd = '\x01';
        fStack_2b8 = 0.0;
        fStack_2b4 = 0.0;
        do {
          iVar3 = 0;
          if (iStack_1bc <= (int)fStack_2b8) break;
          iVar8 = *(int *)((int)fStack_2b4 + 0x20 + iStack_1c0);
          fStack_1ec = *(float *)((int)fStack_2b4 + 0x14 + iStack_1c0);
          iVar7 = FUN_004806e0(iVar8);
          if (iVar7 != 0) {
            if ((*(char *)(iVar8 + 0x18) == '\x01') &&
               (iVar8 = *(int *)(iVar8 + 0x10) + iVar8, iVar8 != 0)) {
              iVar3 = *(int *)(iVar8 + 0xc);
            }
            piVar4 = (int *)FUN_004dc270(iVar7);
            if (((piVar4 != DAT_00b333c4) && (piVar4 != in_ECX)) &&
               ((cVar1 = (**(code **)(*piVar4 + 400))(), cVar1 == '\0' && (iVar3 != 0)))) {
              fStack_2bc = fStack_1ec * fStack_294 + fStack_2a8;
              fStack_29c = fStack_2a4 + fStack_298 * fStack_1ec;
              fStack_2b0 = fStack_1ec * fStack_2ac + fStack_2a0;
              fStack_290 = fStack_2bc;
              fStack_28c = fStack_29c;
              fStack_288 = fStack_2b0;
              (**(code **)(*in_ECX + 0x208))(fStack_2bc,fStack_29c,fStack_2b0,iVar3,piVar4,0);
              cStack_2bd = '\0';
            }
          }
          fStack_2b8 = (float)((int)fStack_2b8 + 1);
          fStack_2b4 = (float)((int)fStack_2b4 + 0x30);
        } while (cStack_2bd != '\0');
      }
    }
    uStack_14 = 0xffffffff;
    FUN_00538c80();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}


