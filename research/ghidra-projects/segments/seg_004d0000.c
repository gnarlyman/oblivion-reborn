
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d0040(undefined4 param_1)

{
  undefined1 *puVar1;
  int in_ECX;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)acStack_108;
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    FUN_004cff80(param_1);
    if (((*(byte *)(in_ECX + 0x24) & 1) == 0) && (*(int **)(in_ECX + 0x50) != (int *)0x0)) {
      puVar1 = (undefined1 *)(**(code **)(**(int **)(in_ECX + 0x50) + 0xd4))();
    }
    else {
      puVar1 = &DAT_00a3bc88;
    }
    bVar3 = *(byte *)(in_ECX + 0x24) & 1;
    if ((bVar3 == 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
      uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 4);
    }
    else {
      uVar4 = 0;
    }
    if ((bVar3 == 0) && (*(undefined4 **)(in_ECX + 0x3c) != (undefined4 *)0x0)) {
      uVar2 = **(undefined4 **)(in_ECX + 0x3c);
    }
    else {
      uVar2 = 0;
    }
    __snprintf(acStack_108,0x104,"%s.%02i.%02i.dds",puVar1,uVar2,uVar4);
    FUN_00412fa0(acStack_108);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d0100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *in_ECX;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)acStack_108;
  if ((*(byte *)(in_ECX + 9) & 1) != 0) {
    FUN_004cff80(param_1);
    uVar1 = (**(code **)(*in_ECX + 0xd4))();
    __snprintf(acStack_108,0x104,"%s.%02i.%02i.dds",uVar1,param_2,param_3);
    FUN_00412fa0(acStack_108);
  }
  return;
}



undefined4 * FUN_004d0190(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  undefined2 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  LONG LVar14;
  undefined4 *unaff_EBX;
  uint3 unaff_EBP;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  byte bVar19;
  uint uVar18;
  undefined4 *local_d0;
  undefined4 uStack_cc;
  undefined4 *local_c8;
  undefined4 *local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 auStack_b4 [2];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b540b;
  local_c = *unaff_FS_OFFSET;
  uVar9 = DAT_00b30aac ^ (uint)&stack0xffffff1c;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar16 = (undefined4 *)0x0;
  local_c0 = 0;
  FUN_00977c50(3,uVar9);
  if (((DAT_00b42d40 == '\0') || (DAT_00b42f3e == '\0')) || (DAT_00b42f48 < 2)) {
    bVar5 = false;
    bVar4 = false;
  }
  else {
    bVar4 = true;
    bVar5 = true;
  }
  puVar17 = (undefined4 *)0x0;
  local_d0 = (undefined4 *)0x0;
  puVar15 = (undefined4 *)0x0;
  local_c4 = (undefined4 *)0x0;
  local_c8 = (undefined4 *)0x0;
  local_4 = 3;
  if (bVar4) {
    puVar16 = (undefined4 *)FUN_007c2420(DAT_00b43104,0x100,0,0,0);
    if (puVar16 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar16 + 1);
      local_d0 = puVar16;
    }
    puVar16 = (undefined4 *)FUN_007c2420(DAT_00b43104,0x100,0,0,0);
    if (puVar16 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar16 + 1);
      local_c8 = puVar16;
    }
    puVar16 = (undefined4 *)FUN_007c15c0(DAT_00b43104,0x100,0,0,4);
    if (puVar16 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar16 + 1);
      local_c4 = puVar16;
    }
LAB_004d02da:
    puVar17 = local_d0;
    if ((local_d0 != (undefined4 *)0x0) &&
       ((!bVar4 || ((local_c4 != (undefined4 *)0x0 && (local_c8 != (undefined4 *)0x0)))))) {
      local_ac = 0;
      local_a8 = 0;
      local_a4 = 0;
      local_a0 = 0;
      (**(code **)(*DAT_00b43104 + 0x68))(&local_ac);
      if (bVar4) {
        local_c0 = 0x3f66e2eb;
        uStack_bc = 0x3f54d6a1;
        uStack_b8 = 0x3f38beb6;
        auStack_b4[0] = 0x3f800000;
        (**(code **)(*DAT_00b43104 + 0x60))(&local_c0);
      }
      else {
        local_c0 = 0;
        uStack_bc = 0;
        uStack_b8 = 0;
        auStack_b4[0] = 0x3f800000;
        (**(code **)(*DAT_00b43104 + 0x60))(&local_c0);
      }
      iVar10 = FUN_007b4280(0);
      FUN_0070df30(0);
      uVar1 = *(undefined1 *)(iVar10 + 300);
      local_c = CONCAT31(local_c._1_3_,4);
      *(undefined1 *)(iVar10 + 300) = 1;
      iVar11 = FUN_007b7650();
      *(undefined1 *)(iVar11 + 0x21e3) = 0;
      uVar18 = (uint)unaff_EBP;
      if ((*(int *)(DAT_00b3f928 + 0x200) == 0) && (*(int *)(DAT_00b3f928 + 0x204) == 0)) {
        FUN_007d7280(0,0);
        uVar18 = CONCAT13(1,unaff_EBP);
      }
      uVar12 = FUN_007d6fe0(7);
      FUN_007d70a0(uVar12);
      uVar2 = DAT_00b42e86;
      DAT_00b42e86 = 1;
      FUN_0070c0b0(unaff_retaddr,iVar10,&local_a4,0);
      DAT_00b42e86 = uVar2;
      FUN_007d7110();
      if ((char)uVar18 != '\0') {
        iVar11 = FUN_0049a140();
        bVar19 = (byte)(uVar18 >> 0x18);
        uVar18 = (uint)bVar19 << 0x18;
        if (iVar11 != 0) {
          uVar2 = *(undefined1 *)(iVar11 + 0x18);
          *(ushort *)(iVar11 + 0x18) = *(ushort *)(iVar11 + 0x18) | 1;
          uVar18 = (CONCAT11(bVar19,uVar2) & 0xff01) << 0x10;
        }
        if (DAT_00b125e8 == '\0') {
LAB_004d0465:
          uVar18 = uVar18 & 0xffff0000;
        }
        else {
          iVar13 = FUN_0055f7e0(1);
          uVar18 = CONCAT22((short)(uVar18 >> 0x10),0x100);
          if (*(char *)(iVar13 + 0x20) == '\0') goto LAB_004d0465;
        }
        iVar13 = FUN_0055f7e0(1);
        *(undefined1 *)(iVar13 + 0x20) = 0;
        uVar7 = DAT_00b42eac;
        FUN_007b4890(6);
        if (local_d0 == (undefined4 *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = FUN_007d6fe0();
        }
        FUN_007d70a0(uVar12,7);
        FUN_0070c0b0(unaff_retaddr,iVar10,&local_a4,0);
        FUN_007d7110();
        FUN_007b4890(uVar7);
        iVar13 = FUN_0055f7e0(1);
        *(char *)(iVar13 + 0x20) = (char)(uVar18 >> 8);
        if (iVar11 != 0) {
          if ((char)(uVar18 >> 0x10) == '\0') {
            *(ushort *)(iVar11 + 0x18) = *(ushort *)(iVar11 + 0x18) & 0xfffe;
          }
          else {
            *(ushort *)(iVar11 + 0x18) = *(ushort *)(iVar11 + 0x18) | 1;
          }
        }
        iVar11 = FUN_007b4290(0x18);
        puVar17 = unaff_EBX;
        if (((iVar11 != 0) && (piVar3 = *(int **)(iVar11 + 4), piVar3 != (int *)0x0)) &&
           (cVar8 = (**(code **)(*piVar3 + 0xac))(), cVar8 != '\0')) {
          uVar12 = FUN_00405a30();
          FUN_004ca340(uVar12);
          FUN_007b4900(piVar3,DAT_00b43104,local_d0,uStack_cc);
        }
      }
      if ((char)(uVar18 >> 0x18) != '\0') {
        FUN_007d72d0();
      }
      *(undefined1 *)(iVar10 + 300) = uVar1;
      iVar10 = FUN_007b7650();
      *(undefined1 *)(iVar10 + 0x21e3) = 1;
      (**(code **)(*DAT_00b43104 + 0x60))(auStack_b4);
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_0070dfa0();
      bVar4 = bVar5;
    }
    puVar15 = local_c4;
    puVar16 = local_c8;
    if (bVar4) {
      FUN_007c1ee0(puVar17);
      FUN_007c1ee0(local_c8);
      FUN_00977c50(2);
      *param_1 = local_c4;
      if (local_c4 != (undefined4 *)0x0) {
        InterlockedIncrement(local_c4 + 1);
      }
      pcVar6 = InterlockedDecrement_exref;
      local_c0 = 1;
      local_4._0_1_ = 2;
      if ((local_c8 != (undefined4 *)0x0) &&
         (LVar14 = InterlockedDecrement(local_c8 + 1), LVar14 == 0)) {
        (**(code **)*local_c8)(1);
      }
      goto joined_r0x004d065b;
    }
  }
  else {
    local_d0 = (undefined4 *)FUN_007c15c0(DAT_00b43104,0x100,0,0,0);
    if (local_d0 != (undefined4 *)0x0) {
      InterlockedIncrement(local_d0 + 1);
      goto LAB_004d02da;
    }
  }
  FUN_00977c50(2,uVar9);
  *param_1 = puVar17;
  if (puVar17 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar17 + 1);
  }
  pcVar6 = InterlockedDecrement_exref;
  local_c0 = 1;
  local_4._0_1_ = 2;
  local_c4 = puVar15;
  if ((puVar16 != (undefined4 *)0x0) && (LVar14 = InterlockedDecrement(puVar16 + 1), LVar14 == 0)) {
    (**(code **)*puVar16)(1);
  }
joined_r0x004d065b:
  if (local_c4 != (undefined4 *)0x0) {
    local_4._0_1_ = 1;
    iVar10 = (*pcVar6)(local_c4 + 1);
    if (iVar10 == 0) {
      (**(code **)*local_c4)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((puVar17 != (undefined4 *)0x0) && (iVar10 = (*pcVar6)(puVar17 + 1), iVar10 == 0)) {
    (**(code **)*puVar17)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



undefined4 * FUN_004d06c0(undefined4 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  LONG LVar9;
  byte bVar10;
  int in_ECX;
  int iVar11;
  int *piVar12;
  float *pfVar13;
  int *unaff_FS_OFFSET;
  int **ppiVar14;
  ushort uVar15;
  uint uVar16;
  int iStack_90;
  int iStack_8c;
  int *local_88 [4];
  int *local_78;
  undefined4 *local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 *puStack_60;
  undefined4 local_5c;
  int *local_58 [3];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40 [3];
  undefined1 local_34;
  undefined1 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined2 uVar17;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5477;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff60;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar12 = (int *)0x0;
  local_5c = 0;
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    piVar5 = (int *)FUN_007b4280(0,uVar4);
    local_68 = (float)DAT_00b3f9ac;
    local_6c = (float)DAT_00b3f9a8;
    local_64 = (float)DAT_00b3f9b0;
    local_78 = piVar5;
    FUN_00711580(0xbfc90fdb,0xbfc90fdb,0x3fc90fdb);
    FUN_0070de60(0);
    ppiVar14 = local_58;
    local_40[1] = 100.0;
    local_34 = 1;
    FUN_004ce3c0(ppiVar14);
    pfVar6 = (float *)FUN_004c46b0(ppiVar14);
    local_74 = (undefined4 *)*pfVar6;
    local_70 = pfVar6[1];
    bVar10 = *(byte *)(in_ECX + 0x24) & 1;
    if ((bVar10 == 0) && (*(int **)(in_ECX + 0x3c) != (int *)0x0)) {
      iVar11 = **(int **)(in_ECX + 0x3c);
    }
    else {
      iVar11 = 0;
    }
    local_6c = (float)(iVar11 * 0x1000 + 0x880);
    if ((bVar10 == 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
      iVar11 = *(int *)(*(int *)(in_ECX + 0x3c) + 4);
    }
    else {
      iVar11 = 0;
    }
    local_88[0] = (int *)(iVar11 * 0x1000 + 0x880);
    local_68 = (float)(int)local_88[0] - 32.0;
    local_64 = local_70 + 20000.0;
    local_4c = 0xc5080000;
    local_48 = 0x45080000;
    local_44 = 0x45080000;
    local_40[0] = -2176.0;
    local_40[2] = (local_64 - (float)local_74) + 10.0;
    local_74 = (undefined4 *)FUN_00401f00(0x124);
    local_4 = 1;
    if (local_74 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)FUN_0070d590();
    }
    local_74 = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
    local_4 = 2;
    local_58[0] = (int *)FUN_00401f00(0xdc);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (local_58[0] != (int *)0x0) {
      piVar12 = (int *)FUN_0070b780(0);
    }
    local_58[0] = piVar12;
    if (piVar12 != (int *)0x0) {
      InterlockedIncrement(piVar12 + 1);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    (**(code **)(*piVar12 + 0x84))(puVar7,1);
    piVar12[0x15] = (int)local_74;
    piVar12[0x16] = (int)local_70;
    piVar12[0x17] = (int)local_6c;
    (**(code **)(*piVar5 + 0x84))(piVar12,1);
    pfVar6 = local_40;
    pfVar13 = (float *)(puVar7 + 0xc);
    for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar13 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar13 = pfVar13 + 1;
    }
    FUN_0070c190(&local_5c);
    FUN_00707370(0,1);
    FUN_00707370(0,1);
    iVar11 = FUN_0055f7e0(1);
    *(undefined1 *)(iVar11 + 0x23) = 1;
    FUN_0055fa50(puVar7,1);
    FUN_004cd000();
    iVar11 = *(int *)(iStack_8c + 0x54);
    bVar10 = 0;
    uVar15 = 0;
    if (iVar11 == 0) {
      iStack_90 = 0;
    }
    else if (*(short *)(iVar11 + 0xb6) == 0) {
      iStack_90 = 0;
    }
    else {
      iStack_90 = **(int **)(iVar11 + 0xb0);
    }
    if (iStack_90 != 0) {
      bVar10 = *(byte *)(iStack_90 + 0x18);
      *(ushort *)(iStack_90 + 0x18) = *(ushort *)(iStack_90 + 0x18) | 1;
      bVar10 = bVar10 & 1;
    }
    iVar11 = *(int *)(iStack_8c + 0x54);
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    else if (*(ushort *)(iVar11 + 0xb6) < 2) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(*(int *)(iVar11 + 0xb0) + 4);
    }
    if (iVar11 != 0) {
      bVar1 = *(byte *)(iVar11 + 0x18);
      *(ushort *)(iVar11 + 0x18) = *(ushort *)(iVar11 + 0x18) | 1;
      uVar15 = bVar1 & 0xff01;
    }
    iVar8 = FUN_00542ea0();
    iVar8 = *(int *)(iVar8 + 4);
    uVar4 = (uint)uVar15;
    if (iVar8 != 0) {
      uVar2 = *(undefined1 *)(iVar8 + 0x18);
      *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) | 1;
      uVar4 = (uint)(CONCAT12(uVar2,uVar15) & 0x1ffff);
    }
    puStack_60 = DAT_00b333dc;
    uVar17 = (undefined2)(uVar4 >> 0x10);
    uVar16 = CONCAT22(uVar17,(ushort)(byte)uVar4);
    if (iVar8 != 0) {
      uVar2 = *(undefined1 *)(DAT_00b333dc + 6);
      *(ushort *)(DAT_00b333dc + 6) = *(ushort *)(DAT_00b333dc + 6) | 1;
      uVar16 = CONCAT22(uVar17,CONCAT11(uVar2,(byte)uVar4)) & 0xffff01ff;
    }
    iVar3 = DAT_00b36094;
    if ((((DAT_00b42d40 != '\0') && (DAT_00b42f3e != '\0')) && (1 < DAT_00b42f48)) &&
       (DAT_00b36094 != 0)) {
      uVar2 = *(undefined1 *)(DAT_00b36094 + 0x18);
      *(ushort *)(DAT_00b36094 + 0x18) = *(ushort *)(DAT_00b36094 + 0x18) | 1;
      uVar16 = CONCAT13(uVar2,(int3)uVar16) & 0x1ffffff;
    }
    uVar2 = DAT_00b0727c;
    DAT_00b0727c = 0;
    FUN_004d0190(&local_70,puVar7);
    uStack_14 = 5;
    DAT_00b0727c = uVar2;
    if (((DAT_00b42d40 != '\0') && (DAT_00b42f3e != '\0')) && ((1 < DAT_00b42f48 && (iVar3 != 0))))
    {
      if ((char)(uVar16 >> 0x18) == '\0') {
        *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 1;
      }
    }
    if (puStack_60 != (undefined4 *)0x0) {
      if ((char)(uVar16 >> 8) == '\0') {
        *(ushort *)(puStack_60 + 6) = *(ushort *)(puStack_60 + 6) & 0xfffe;
      }
      else {
        *(ushort *)(puStack_60 + 6) = *(ushort *)(puStack_60 + 6) | 1;
      }
    }
    if (iVar8 != 0) {
      if ((char)(uVar16 >> 0x10) == '\0') {
        *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) | 1;
      }
    }
    if (iStack_90 != 0) {
      if (bVar10 == 0) {
        *(ushort *)(iStack_90 + 0x18) = *(ushort *)(iStack_90 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(iStack_90 + 0x18) = *(ushort *)(iStack_90 + 0x18) | 1;
      }
    }
    if (iVar11 != 0) {
      if ((char)uVar16 == '\0') {
        *(ushort *)(iVar11 + 0x18) = *(ushort *)(iVar11 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(iVar11 + 0x18) = *(ushort *)(iVar11 + 0x18) | 1;
      }
    }
    FUN_0055fa50(*(undefined4 *)(DAT_00b333cc + 0xdc),1);
    iVar11 = FUN_0055f7e0(1);
    *(undefined1 *)(iVar11 + 0x23) = 0;
    FUN_004cd000();
    (**(code **)(*local_88[0] + 0x88))(local_88,piVar12);
    piVar5 = local_78;
    if (((local_78 != (int *)0x0) && (LVar9 = InterlockedDecrement(local_78 + 1), LVar9 == 0)) &&
       (piVar5 != (int *)0x0)) {
      (**(code **)*piVar5)(1);
    }
    LVar9 = InterlockedDecrement(piVar12 + 1);
    if (LVar9 == 0) {
      (**(code **)*piVar12)(1);
    }
    local_58[0] = (int *)0x0;
    LVar9 = InterlockedDecrement(puVar7 + 1);
    if (LVar9 == 0) {
      (**(code **)*puVar7)(1);
    }
    local_74 = (undefined4 *)0x0;
    *param_1 = puStack_60;
    if (puStack_60 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_60 + 1);
    }
    puVar7 = puStack_60;
    local_5c = 1;
    local_4 = CONCAT31(local_4._1_3_,4);
    if (((puStack_60 != (undefined4 *)0x0) &&
        (LVar9 = InterlockedDecrement(puStack_60 + 1), LVar9 == 0)) && (puVar7 != (undefined4 *)0x0)
       ) {
      (**(code **)*puVar7)(1);
    }
  }
  else {
    *param_1 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004d0c20(undefined4 *param_1,int param_2,int param_3)

{
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  LONG LVar9;
  int in_ECX;
  undefined4 *unaff_EBP;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int iVar14;
  int *unaff_FS_OFFSET;
  int iVar15;
  undefined1 uVar16;
  int *local_d0 [2];
  undefined4 *local_c8;
  int iStack_c4;
  int *local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 *local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 *puStack_a0;
  int *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88 [3];
  undefined1 local_7c;
  undefined4 auStack_64 [9];
  undefined1 auStack_40 [44];
  undefined1 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b54fc;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff20;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar10 = (int *)0x0;
  local_98 = 0;
  if (((*(byte *)(in_ECX + 0x24) & 1) == 0) || (*(int *)(in_ECX + 0x54) == 0)) {
    *param_1 = 0;
  }
  else {
    piVar5 = (int *)FUN_007b4280(0,uVar4);
    local_c8 = (undefined4 *)(-_DAT_00b3f9a4 * 0.5);
    local_b8 = (float)DAT_00b3f9ac;
    local_d0[0] = (int *)(_DAT_00b3f9a4 * 0.5);
    local_bc = DAT_00b3f9a8;
    local_b4 = (float)DAT_00b3f9b0;
    local_c0 = piVar5;
    FUN_00711580(local_c8,local_c8,local_d0[0]);
    FUN_0070de60(0);
    local_88[1] = 100.0;
    local_7c = 1;
    local_a8 = *(float *)(*(int *)(in_ECX + 0x54) + 0x28);
    local_a4 = *(float *)(*(int *)(in_ECX + 0x54) + 0x2c);
    local_b0 = (undefined4 *)(local_a8 - local_a4);
    local_d0[0] = (int *)(param_3 * 0x1000 + 0x1080);
    local_ac = local_a4 + local_a8;
    local_bc = (float)(param_2 * 0x1000 + 0x1080);
    local_b8 = (float)(int)local_d0[0];
    local_b4 = local_ac + 20000.0;
    FUN_004cce20(&local_bc,&local_bc,0);
    local_94 = 0xc5080000;
    local_90 = 0x45080000;
    local_8c = 0x45080000;
    local_88[0] = -2176.0;
    local_88[2] = (local_b4 - (float)local_b0) + 10.0;
    local_b0 = (undefined4 *)FUN_00401f00(0x124);
    local_4 = 1;
    if (local_b0 == (undefined4 *)0x0) {
      local_c8 = (undefined4 *)0x0;
    }
    else {
      local_c8 = (undefined4 *)FUN_0070d590();
    }
    puVar11 = local_c8;
    local_b0 = local_c8;
    if (local_c8 != (undefined4 *)0x0) {
      InterlockedIncrement(local_c8 + 1);
    }
    local_4 = 2;
    local_9c = (int *)FUN_00401f00(0xdc);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (local_9c != (int *)0x0) {
      piVar10 = (int *)FUN_0070b780(0);
    }
    local_9c = piVar10;
    if (piVar10 != (int *)0x0) {
      InterlockedIncrement(piVar10 + 1);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    (**(code **)(*piVar10 + 0x84))(puVar11,1);
    piVar10[0x15] = iStack_c4;
    piVar10[0x16] = (int)local_c0;
    piVar10[0x17] = (int)local_bc;
    (**(code **)(*piVar5 + 0x84))(piVar10,1);
    iVar6 = FUN_004cba80(DAT_00b35eb8,1);
    if ((iVar6 != 0) && (fVar1 = *(float *)(iVar6 + 0x28), fVar1 != 0.0)) {
      puVar11 = &DAT_00b26dc4;
      puVar12 = auStack_64;
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      FUN_0070fdd0(fVar1);
      pfVar7 = (float *)FUN_007100a0(auStack_40,local_88);
      pfVar13 = local_88;
      for (iVar6 = 9; puVar11 = unaff_EBP, iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar13 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar13 = pfVar13 + 1;
      }
    }
    pfVar7 = local_88;
    pfVar13 = (float *)(puVar11 + 0xc);
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar13 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar13 = pfVar13 + 1;
    }
    FUN_0070c190(&local_a4);
    FUN_00707370(0,1);
    FUN_00707370(0,1);
    iVar6 = *(int *)(in_ECX + 0x54);
    iVar15 = 0;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else if (*(short *)(iVar6 + 0xb6) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = **(int **)(iVar6 + 0xb0);
    }
    if (iVar6 != 0) {
      bVar2 = *(byte *)(iVar6 + 0x18);
      *(ushort *)(iVar6 + 0x18) = *(ushort *)(iVar6 + 0x18) | 1;
      iVar15 = (bVar2 & 1) << 0x18;
    }
    iVar14 = *(int *)(in_ECX + 0x54);
    if ((iVar14 == 0) || (*(ushort *)(iVar14 + 0xb6) < 2)) {
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(*(int *)(iVar14 + 0xb0) + 4);
    }
    if (iVar14 != 0) {
      uVar16 = *(undefined1 *)(iVar14 + 0x18);
      *(ushort *)(iVar14 + 0x18) = *(ushort *)(iVar14 + 0x18) | 1;
      iVar15 = (CONCAT21((short)((uint)iVar15 >> 0x10),uVar16) & 0xffff01) << 8;
    }
    iVar8 = FUN_0049a140();
    uVar16 = (undefined1)((uint)iVar15 >> 0x18);
    uVar4 = CONCAT13(uVar16,(uint3)(ushort)iVar15);
    if (iVar8 != 0) {
      uVar3 = *(undefined1 *)(iVar8 + 0x18);
      *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) | 1;
      uVar4 = CONCAT13(uVar16,CONCAT12(uVar3,(ushort)iVar15)) & 0xff01ffff;
    }
    uVar16 = DAT_00b0727c;
    DAT_00b0727c = 0;
    FUN_004d0190(&local_b0,unaff_EBP);
    uStack_14 = 5;
    DAT_00b0727c = uVar16;
    if (iVar8 != 0) {
      if ((char)(uVar4 >> 0x10) == '\0') {
        *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) | 1;
      }
    }
    if (iVar6 != 0) {
      if ((char)(uVar4 >> 0x18) == '\0') {
        *(ushort *)(iVar6 + 0x18) = *(ushort *)(iVar6 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(iVar6 + 0x18) = *(ushort *)(iVar6 + 0x18) | 1;
      }
    }
    if (iVar14 != 0) {
      if ((char)(uVar4 >> 8) == '\0') {
        *(ushort *)(iVar14 + 0x18) = *(ushort *)(iVar14 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(iVar14 + 0x18) = *(ushort *)(iVar14 + 0x18) | 1;
      }
    }
    (**(code **)(*local_d0[0] + 0x88))(local_d0,piVar10);
    piVar5 = local_c0;
    if (((local_c0 != (int *)0x0) && (LVar9 = InterlockedDecrement(local_c0 + 1), LVar9 == 0)) &&
       (piVar5 != (int *)0x0)) {
      (**(code **)*piVar5)(1);
    }
    LVar9 = InterlockedDecrement(piVar10 + 1);
    if (LVar9 == 0) {
      (**(code **)*piVar10)(1);
    }
    puVar11 = local_c8;
    local_9c = (int *)0x0;
    LVar9 = InterlockedDecrement(local_c8 + 1);
    if (LVar9 == 0) {
      (**(code **)*puVar11)(1);
    }
    local_b0 = (undefined4 *)0x0;
    *param_1 = puStack_a0;
    if (puStack_a0 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_a0 + 1);
    }
    local_98 = 1;
    local_4 = CONCAT31(local_4._1_3_,4);
    if (((puStack_a0 != (undefined4 *)0x0) &&
        (LVar9 = InterlockedDecrement(puStack_a0 + 1), LVar9 == 0)) &&
       (puStack_a0 != (undefined4 *)0x0)) {
      (**(code **)*puStack_a0)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_004d1130(int *param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  LPCSTR local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int *)0x0) {
    param_1 = (int *)0x0;
    iVar2 = D3DXCreateTexture(*(undefined4 *)(DAT_00b43104 + 0x280),0x100,0x100,1,0,0x14,2,&param_1)
    ;
    if ((-1 < iVar2) && (param_1 != (int *)0x0)) {
      local_14 = (LPCSTR)0x0;
      local_10 = 0;
      local_e = 0;
      local_4 = 0;
      FUN_004cff80(&local_14);
      CreateDirectoryA(".\\Data\\Textures\\Maps\\",(LPSECURITY_ATTRIBUTES)0x0);
      CreateDirectoryA(local_14,(LPSECURITY_ATTRIBUTES)0x0);
      FUN_004d0040(&local_14);
      pCVar1 = local_14;
      uVar3 = FUN_00405a30(0x100,param_1,local_14);
      FUN_004816e0(uVar3);
      (**(code **)(*param_1 + 8))(param_1);
      FUN_00401f20(pCVar1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004d1230(int *param_1,undefined4 param_2,undefined4 param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  LPCSTR local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int *)0x0) {
    param_1 = (int *)0x0;
    iVar2 = D3DXCreateTexture(*(undefined4 *)(DAT_00b43104 + 0x280),0x100,0x100,1,0,0x14,2,&param_1)
    ;
    if ((-1 < iVar2) && (param_1 != (int *)0x0)) {
      local_14 = (LPCSTR)0x0;
      local_10 = 0;
      local_e = 0;
      local_4 = 0;
      FUN_004cff80(&local_14);
      CreateDirectoryA(".\\Data\\Textures\\Maps\\",(LPSECURITY_ATTRIBUTES)0x0);
      CreateDirectoryA(local_14,(LPSECURITY_ATTRIBUTES)0x0);
      FUN_004d0100(&local_14,param_2,param_3);
      pCVar1 = local_14;
      uVar3 = FUN_00405a30(0x100,param_1,local_14);
      FUN_004816e0(uVar3);
      (**(code **)(*param_1 + 8))(param_1);
      FUN_00401f20(pCVar1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_004d1340(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int unaff_FS_OFFSET;
  undefined4 uVar9;
  
  iVar3 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  cVar4 = FUN_0044faa0();
  if (cVar4 == '\0') {
    return 1;
  }
  piVar1 = (int *)(param_1 + 0x23c);
  if (*piVar1 == DAT_00b06048) {
    if (*(int *)(param_1 + 0x248) != *(int *)(in_ECX + 0xc)) {
      return 0;
    }
    FUN_004518b0(1);
    cVar4 = FUN_004ccd00(piVar1);
    if (cVar4 == '\0') {
      return 1;
    }
    if (*piVar1 != DAT_00b05e20) {
      return 0;
    }
    if (*(int *)(param_1 + 0x248) != 6) {
      return 0;
    }
    FUN_004518b0(1);
    if (*piVar1 != DAT_00b05e20) {
      return 0;
    }
    if (*(int *)(param_1 + 0x248) == 8) {
      FUN_00451580();
      cVar4 = FUN_004ccd00(piVar1);
      if (cVar4 == '\0') {
        return 1;
      }
    }
  }
  if ((*piVar1 != DAT_00b05e20) ||
     ((*(int *)(param_1 + 0x248) != 9 && (*(int *)(param_1 + 0x248) != 10)))) {
    return 0;
  }
  cVar4 = FUN_004518b0(1);
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  *(undefined1 *)(iVar2 + 0x184) = 1;
  piVar6 = (int *)(-(uint)(cVar4 != '\0') & (uint)piVar1);
  if ((piVar6 != (int *)0x0) && ((*piVar6 == DAT_00b05e20 && (piVar6[3] == 9)))) {
    cVar4 = FUN_004518b0(1);
    piVar6 = (int *)(-(uint)(cVar4 != '\0') & (uint)piVar1);
  }
  *(undefined1 *)(iVar2 + 0x186) = 1;
  param_1._0_1_ = 1;
  if (piVar6 != (int *)0x0) {
    while ((bVar5 = FUN_0046af70(*piVar6), 0x30 < bVar5 && ((bVar5 < 0x35 || (bVar5 == 0x36))))) {
      uVar9 = *(undefined4 *)(iVar3 + 0x248);
      iVar7 = FUN_0046b250(uVar9);
      uVar8 = FUN_009832e6(iVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0,uVar9);
      cVar4 = FUN_00453970(in_ECX,uVar8,uVar9);
      if ((iVar7 == 0) && ((cVar4 == '\0' && (iVar7 = FUN_0044dcf0(iVar3,0), iVar7 == 0)))) {
        param_1._0_1_ = 0;
      }
      cVar4 = FUN_004518b0(1);
      if ((((cVar4 == '\0') || (piVar1 == (int *)0x0)) ||
          ((*piVar1 == DAT_00b05e20 &&
           (((*(int *)(iVar3 + 0x248) == 9 && (*(int *)(iVar3 + 0x244) == *(int *)(in_ECX + 0xc)))
            && (cVar4 = FUN_004518b0(1), cVar4 == '\0')))))) ||
         (piVar6 = piVar1, piVar1 == (int *)0x0)) break;
    }
  }
  *(undefined1 *)(iVar2 + 0x186) = 0;
  *(undefined1 *)(iVar2 + 0x184) = 0;
  DAT_00b33a9c = 0;
  return (undefined1)param_1;
}



void FUN_004d1570(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  
  FUN_00496ea0(in_ECX);
  piVar2 = (int *)(in_ECX + 0x48);
  piVar3 = (int *)0x0;
  do {
    while( true ) {
      piVar6 = piVar2;
      if ((piVar6 == (int *)0x0) || ((piVar6[1] == 0 && (*piVar6 == 0)))) {
        FUN_00496f50(in_ECX);
        if ((*(int *)(in_ECX + 0x44) != 0) &&
           (((iVar5 = FUN_0046b680(0xffffffff), iVar5 == 0 ||
             (cVar4 = FUN_0044faa0(), cVar4 != '\0')) && (*(int **)(in_ECX + 0x44) != (int *)0x0))))
        {
          (**(code **)(**(int **)(in_ECX + 0x44) + 0x10))(1);
          *(undefined4 *)(in_ECX + 0x44) = 0;
        }
        iVar5 = FUN_004ce3c0();
        if ((((iVar5 != 0) &&
             ((iVar5 = FUN_0046b680(0xffffffff), iVar5 == 0 ||
              (cVar4 = FUN_0044faa0(), cVar4 != '\0')))) && ((*(byte *)(in_ECX + 0x24) & 1) == 0))
           && (*(int **)(in_ECX + 0x40) != (int *)0x0)) {
          (**(code **)(**(int **)(in_ECX + 0x40) + 0x10))(1);
          *(undefined4 *)(in_ECX + 0x40) = 0;
        }
        *(byte *)(in_ECX + 0x24) = *(byte *)(in_ECX + 0x24) & 0xef;
        return;
      }
      piVar1 = (int *)*piVar6;
      cVar4 = FUN_004db4a0();
      if (cVar4 == '\0') break;
LAB_004d1633:
      piVar2 = (int *)piVar6[1];
      piVar3 = piVar6;
    }
    iVar5 = FUN_0046b680(0xffffffff);
    if (iVar5 != 0) {
      FUN_0046b680(0xffffffff);
      cVar4 = FUN_0044faa0();
      if (cVar4 == '\0') goto LAB_004d1633;
    }
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
    FUN_00463a90(piVar1);
    (**(code **)(*piVar1 + 0x194))(0);
    piVar2 = piVar6;
    if (piVar1 != DAT_00b333c4) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x004d1929) */
/* WARNING: Removing unreachable block (ram,0x004d183a) */
/* WARNING: Removing unreachable block (ram,0x004d1850) */
/* WARNING: Removing unreachable block (ram,0x004d1859) */
/* WARNING: Removing unreachable block (ram,0x004d18c6) */
/* WARNING: Removing unreachable block (ram,0x004d18ca) */
/* WARNING: Removing unreachable block (ram,0x004d18f1) */
/* WARNING: Removing unreachable block (ram,0x004d18f5) */
/* WARNING: Removing unreachable block (ram,0x004d191b) */

undefined1 * FUN_004d16d0(int *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *unaff_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_100 [164];
  undefined4 uStack_5c;
  int *piStack_58;
  uint *puStack_54;
  undefined **ppuStack_50;
  undefined **ppuStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_28;
  uint uStack_24;
  int iStack_20;
  int aiStack_1c [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b552b;
  local_c = *unaff_FS_OFFSET;
  uStack_3c = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = auStack_100;
  uStack_28 = (uint)(uint3)uStack_28;
  if ((param_2 != 0) && (param_1 != (int *)0x0)) {
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0x4d1721;
    (**(code **)(*param_1 + 0x18))();
    if ((char)param_1[9] != '\0') {
      uStack_48 = 1;
      ppuStack_4c = (undefined **)&uStack_28;
      ppuStack_50 = (undefined **)0x4;
      puStack_54 = &uStack_24;
      piStack_58 = param_1;
      uStack_24 = 0;
      uStack_28 = 1;
      uStack_5c = 0x4d1751;
      iVar1 = (*(code *)param_1[1])();
      bVar3 = iVar1 != 4;
      for (uStack_28 = 0; (!bVar3 && (uStack_28 < uStack_24)); uStack_28 = uStack_28 + 1) {
        uStack_48 = 1;
        ppuStack_4c = (undefined **)aiStack_1c;
        ppuStack_50 = (undefined **)0x4;
        puStack_54 = (uint *)&iStack_20;
        piStack_58 = param_1;
        iStack_20 = 0;
        aiStack_1c[0] = 1;
        uStack_5c = 0x4d179d;
        iVar1 = (*(code *)param_1[1])();
        if ((iVar1 == 4) && (iStack_20 != 0)) {
          uStack_48 = 0;
          ppuStack_4c = &PTR_PTR_00b03248;
          ppuStack_50 = &PTR_PTR_00b02f9c;
          puStack_54 = (uint *)0x0;
          piStack_58 = (int *)iStack_20;
          uStack_5c = 0x4d17bf;
          piStack_58 = (int *)FUN_0046b250();
          uStack_5c = 0x4d17c8;
          iVar1 = FUN_009832e6();
          if (iVar1 == 0) goto LAB_004d17d1;
        }
        else {
LAB_004d17d1:
          bVar3 = true;
        }
        uStack_48 = 1;
        ppuStack_4c = (undefined **)aiStack_1c;
        ppuStack_50 = (undefined **)0x4;
        puStack_54 = (uint *)&stack0xffffffd4;
        piStack_58 = param_1;
        aiStack_1c[0] = 1;
        uStack_5c = 0x4d17f0;
        iVar1 = (*(code *)param_1[1])();
        if (iVar1 != 4) {
          bVar3 = true;
        }
      }
    }
    uStack_48 = 1;
    ppuStack_4c = (undefined **)0x4d1976;
    (**(code **)*param_1)();
    puVar2 = (undefined1 *)(uStack_28 >> 0x18);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined1 FUN_004d1990(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x23c);
  if ((((*(int *)(param_1 + 0x23c) == DAT_00b06048) && (cVar2 = FUN_004518b0(1), cVar2 != '\0')) &&
      (cVar2 = FUN_004ccd00(piVar1), cVar2 != '\0')) &&
     (((cVar2 = FUN_004518b0(1), cVar2 != '\0' && (cVar2 = FUN_004ccd00(piVar1), cVar2 != '\0')) &&
      (*piVar1 == DAT_00b05e20)))) {
    if (*(int *)(param_1 + 0x248) == 8) {
      FUN_00451580();
      cVar2 = FUN_004ccd00(piVar1);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x248) == 10) {
      FUN_00451580();
      cVar2 = FUN_004ccd00(piVar1);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x248) == 9) {
      FUN_004518b0(1);
      uVar5 = 0;
      uVar3 = FUN_004511c0();
      cVar2 = FUN_004ca010(uVar3);
      if (cVar2 != '\0') {
        while (iVar4 = FUN_004511c0(), iVar4 != 0x36) {
          FUN_004518b0(1);
          uVar3 = FUN_004511c0();
          cVar2 = FUN_004ca010(uVar3);
          if (cVar2 == '\0') {
            return 0;
          }
        }
        uVar5 = 1;
      }
      return uVar5;
    }
  }
  return 0;
}



void FUN_004d1a90(float param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  for (piVar1 = (int *)(in_ECX + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    piVar2 = (int *)*piVar1;
    if ((((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x170))(), iVar3 != 0)) &&
        (iVar3 = (**(code **)(*piVar2 + 0x170))(), *(char *)(iVar3 + 4) == '\x1e')) &&
       ((((iVar3 = (**(code **)(*piVar2 + 0x154))(), iVar3 == 0 ||
          (piVar4 = (int *)FUN_00560920(&DAT_00b3a02c,iVar3), piVar4 == (int *)0x0)) ||
         ((iVar3 = (**(code **)(*piVar4 + 0x9c))(), iVar3 == 0 ||
          (iVar3 = (**(code **)(*piVar4 + 0x9c))(), *(int *)(iVar3 + 0xc) == 0)))) ||
        ((iVar3 = (**(code **)(*piVar4 + 0x9c))(), param_1 <= *(float *)(iVar3 + 0x50) &&
         (iVar3 = (**(code **)(*piVar4 + 0x9c))(),
         param_2 < *(float *)(iVar3 + 0x50) == (param_2 == *(float *)(iVar3 + 0x50)))))))) {
      (**(code **)(*piVar2 + 0x150))(0);
      FUN_004d7010(0);
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



undefined1 FUN_004d1ba0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  undefined1 local_7;
  
  uVar2 = param_3;
  local_7 = 0;
  uVar4 = 0;
  if ((param_1 != 0) && (param_5 != 0)) {
    uVar5 = (uint)(char)param_5;
    if ((param_5 & 1) != 0) {
      iVar7 = *(int *)(in_ECX + 0x54);
      if ((iVar7 == 0) || (*(short *)(iVar7 + 0xb6) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(undefined4 **)(iVar7 + 0xb0);
      }
      cVar3 = FUN_00481890(param_1,param_2,param_3,param_4,uVar6,0);
      if (cVar3 != '\0') {
        local_7 = 1;
      }
    }
    if ((uVar5 >> 1 & 1) != 0) {
      iVar7 = *(int *)(in_ECX + 0x54);
      if ((iVar7 == 0) || (*(ushort *)(iVar7 + 0xb6) < 2)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(iVar7 + 0xb0) + 4);
      }
      cVar3 = FUN_00481890(param_1,param_2,param_3,param_4,uVar6,0);
      if (cVar3 != '\0') {
        local_7 = 1;
      }
    }
    if ((((uVar5 >> 2 & 1) != 0) || ((uVar5 >> 3 & 1) != 0)) ||
       (uVar4 = local_7, (uVar5 >> 4 & 1) != 0)) {
      uVar8 = 2;
      iVar7 = 8;
      param_3 = 5;
      do {
        if ((uVar5 >> 2 & 1) != 0) {
          iVar1 = *(int *)(in_ECX + 0x54);
          if (((iVar1 == 0) || (*(ushort *)(iVar1 + 0xb6) <= uVar8)) ||
             ((iVar1 = *(int *)(iVar7 + *(int *)(iVar1 + 0xb0)), iVar1 == 0 ||
              (*(short *)(iVar1 + 0xb6) == 0)))) {
            uVar6 = 0;
          }
          else {
            uVar6 = **(undefined4 **)(iVar1 + 0xb0);
          }
          cVar3 = FUN_00481890(param_1,param_2,uVar2,param_4,uVar6,0);
          if (cVar3 != '\0') {
            local_7 = 1;
          }
        }
        if ((uVar5 >> 3 & 1) != 0) {
          iVar1 = *(int *)(in_ECX + 0x54);
          if (((iVar1 == 0) || (*(ushort *)(iVar1 + 0xb6) <= uVar8)) ||
             ((iVar1 = *(int *)(iVar7 + *(int *)(iVar1 + 0xb0)), iVar1 == 0 ||
              (*(ushort *)(iVar1 + 0xb6) < 3)))) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + 8);
          }
          cVar3 = FUN_00481890(param_1,param_2,uVar2,param_4,uVar6,0);
          if (cVar3 != '\0') {
            local_7 = 1;
          }
        }
        if ((uVar5 >> 4 & 1) != 0) {
          iVar1 = *(int *)(in_ECX + 0x54);
          if ((((iVar1 == 0) || (*(ushort *)(iVar1 + 0xb6) <= uVar8)) ||
              (iVar1 = *(int *)(iVar7 + *(int *)(iVar1 + 0xb0)), iVar1 == 0)) ||
             (*(ushort *)(iVar1 + 0xb6) < 4)) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + 0xc);
          }
          cVar3 = FUN_00481890(param_1,param_2,uVar2,param_4,uVar6,0);
          if (cVar3 != '\0') {
            local_7 = 1;
          }
        }
        iVar7 = iVar7 + 4;
        uVar8 = uVar8 + 1;
        param_3 = param_3 + -1;
        uVar4 = local_7;
      } while (param_3 != 0);
    }
  }
  return uVar4;
}



uint FUN_004d1e10(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004ce3c0();
  if (iVar1 != 0) {
    uVar2 = FUN_004c5b50();
    return uVar2;
  }
  *param_2 = 0;
  return (uint)param_2 & 0xffffff00;
}



void FUN_004d1e40(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(in_ECX + 0x54);
  if ((iVar4 == 0) || (*(short *)(iVar4 + 0xb6) == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(iVar4 + 0xb0);
  }
  uVar3 = (uint)*(ushort *)(iVar4 + 0xb6);
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    if (uVar3 < *(ushort *)(iVar4 + 0xb6)) {
      uVar1 = *(undefined4 *)(*(int *)(iVar4 + 0xb0) + uVar3 * 4);
    }
    else {
      uVar1 = 0;
    }
    piVar2 = (int *)FUN_004dc270(uVar1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x200))(param_1);
    }
  }
  return;
}



void FUN_004d2020(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  char *pcVar9;
  short *local_8;
  undefined4 local_4;
  
  uVar3 = param_1;
  if ((param_1 & 0x8000000) != 0) {
    param_1 = FUN_00420a70();
    FUN_0046ac70(&param_1,4);
  }
  FUN_0046b5e0(uVar3);
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_8 = (short *)0x0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    param_1 = 0x4b4f4c42;
    FUN_0045b9a0(&param_1,4);
    local_8 = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  if ((uVar3 & 8) != 0) {
    param_1 = CONCAT31(param_1._1_3_,*(byte *)(in_ECX + 0x24) & 0x60 | *(byte *)(in_ECX + 0x25));
    FUN_0046ac70(&param_1,1);
  }
  if ((uVar3 & 0x10000000) != 0) {
    piVar5 = (int *)FUN_00420b50();
    (**(code **)(*piVar5 + 0xc))(0);
  }
  if ((uVar3 & 0x10) != 0) {
    pcVar9 = *(char **)(in_ECX + 0x1c);
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "";
    }
    pcVar6 = pcVar9;
    do {
      cVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar4 != '\0');
    param_1 = CONCAT31(param_1._1_3_,(char)pcVar6 - ((char)pcVar9 + '\x01'));
    FUN_0046ac70(&param_1,1);
    if ((char)param_1 != '\0') {
      FUN_0046ac70(pcVar9,param_1 & 0xff);
    }
  }
  if ((uVar3 & 0x20) != 0) {
    iVar7 = FUN_0041e7b0();
    param_1 = 0;
    if (iVar7 != 0) {
      param_1 = *(uint *)(iVar7 + 0xc);
    }
    FUN_0046ac90(&param_1,4);
  }
  if ((uVar3 & 0x1000000) != 0) {
    FUN_004e5b10();
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar7 - iVar1,0x3174,
                   "..\\TES Shared\\TESObjectCELL.cpp");
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar5 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x3174,"..\\TES Shared\\TESObjectCELL.cpp"
                        );
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar7 - iVar1,*puVar2,uVar8);
    }
  }
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    uVar3 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_8 + 0xffffU < uVar3) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\TESObjectCELL.cpp",0x3174);
    }
    *local_8 = (short)uVar3 - (short)local_8;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d2230(uint param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *in_ECX;
  int iVar9;
  int *unaff_FS_OFFSET;
  char *pcVar10;
  undefined1 auStack_128 [3];
  byte local_125;
  uint local_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  undefined1 auStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_009b557a;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_128;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffec8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((0x59 < *(byte *)(DAT_00b33b00 + 0x7c)) && ((param_1 & 0x8000000) != 0)) {
    FUN_0046ac80(&local_120,4);
    FUN_00420a90(local_120);
  }
  FUN_0046b600(param_1,param_2);
  iVar9 = 0;
  local_124 = 0;
  cVar3 = FUN_0045a170(uVar4);
  if (cVar3 != '\0') {
    FUN_004534d0(&local_120,4);
    if (local_120 != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\TESObjectCELL.cpp",0x318b,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar2);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\TESObjectCELL.cpp",0x318b,*puVar2,uVar6);
      }
    }
    iVar9 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_124,2);
  }
  if ((param_1 & 8) != 0) {
    FUN_0046ac80(&local_125,1);
    *(byte *)(in_ECX + 9) = *(byte *)(in_ECX + 9) ^ (*(byte *)(in_ECX + 9) ^ local_125) & 0x60;
    *(byte *)((int)in_ECX + 0x25) = local_125 & 0x9f;
  }
  if ((param_1 & 0x10000000) != 0) {
    piVar5 = (int *)FUN_00420b50();
    if (piVar5 == (int *)0x0) {
      if ((*(byte *)(in_ECX + 9) & 1) == 0) {
        iStack_11c = FUN_00401f00(0x24);
        piStack_4 = (int *)0x1;
        if (iStack_11c == 0) goto LAB_004d2407;
        piVar5 = (int *)FUN_00411ec0();
      }
      else {
        iStack_11c = FUN_00401f00(0x2c);
        if (iStack_11c == 0) {
LAB_004d2407:
          piVar5 = (int *)0x0;
        }
        else {
          piStack_4 = piVar5;
          piVar5 = (int *)FUN_00411f60(0,0);
        }
      }
      piStack_4 = (int *)0xffffffff;
      FUN_00420b70(piVar5);
    }
    (**(code **)(*piVar5 + 0x10))(0xffff);
  }
  if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x5a) && ((param_1 & 0x8000000) != 0)) {
    FUN_0046ac80(&iStack_118,4);
    FUN_00420a90(iStack_118);
  }
  if ((param_1 & 0x10) != 0) {
    _memset(auStack_114,0,0x104);
    FUN_0046ac80(&local_125,1);
    if (local_125 != 0) {
      FUN_0046ac80(auStack_114,local_125);
    }
    FUN_004028d0(auStack_114,0);
  }
  if ((param_1 & 0x20) != 0) {
    FUN_0046aca0(&iStack_11c,4);
    FUN_00423660(iStack_11c);
    (**(code **)(*in_ECX + 0x40))(0x20);
  }
  if ((param_1 & 0x1000000) != 0) {
    if (in_ECX[0x11] == 0) {
      iStack_118 = FUN_00401f00(0x54);
      piStack_4 = (int *)0x2;
      if (iStack_118 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004e6070();
      }
      piStack_4 = (int *)0xffffffff;
      in_ECX[0x11] = iVar7;
      FUN_004e5cc0();
      if ((int *)in_ECX[0x11] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[0x11] + 0x10))(1);
      }
      in_ECX[0x11] = 0;
    }
    else {
      FUN_004e5cc0();
    }
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar8 = local_124 & 0xffff;
      if (uVar8 + iVar9 < uVar4) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar9 = (uVar4 - uVar8) - iVar9;
        pcVar10 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar8 + iVar9 <= uVar4) goto LAB_004d265b;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar9 = (uVar8 - uVar4) + iVar9;
        pcVar10 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar10,iVar9,"..\\TES Shared\\TESObjectCELL.cpp",0x31d1,uVar1);
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (local_124 & 0xffff) + iVar9;
      if (uVar8 < uVar4) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar4 - (local_124 & 0xffff)) - iVar9,"..\\TES Shared\\TESObjectCELL.cpp",
                     0x31d1,*puVar2,uVar6);
      }
      else if (uVar4 < uVar8) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_124 & 0xffff) - uVar4) + iVar9,"..\\TES Shared\\TESObjectCELL.cpp",
                     0x31d1,*puVar2,uVar6);
      }
    }
  }
LAB_004d265b:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d2720(float *param_1)

{
  code *pcVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  int *in_ECX;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  int local_f0;
  int local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  int local_b8 [4];
  float local_a8 [12];
  float local_78 [27];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b55be;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffef8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(byte *)(in_ECX + 9) & 1) == 0) {
    if ((*(byte *)((int)in_ECX + 0x25) & 1) == 0) {
      iVar5 = FUN_00420b50(uVar4);
      if (iVar5 == 0) {
        iVar9 = FUN_00401f00(0x24);
        if (iVar9 == 0) {
          uVar7 = 0;
        }
        else {
          local_4 = iVar5;
          uVar7 = FUN_00411ec0();
        }
        local_4 = 0xffffffff;
        FUN_00420b70(uVar7);
        (**(code **)(*in_ECX + 0x48))(0x10000000);
      }
      if (((*(byte *)(in_ECX + 9) & 1) == 0) && (in_ECX[0xf] != 0)) {
        iVar5 = *(int *)(in_ECX[0xf] + 4);
      }
      else {
        iVar5 = 0;
      }
      if (((*(byte *)(in_ECX + 9) & 1) == 0) && ((int *)in_ECX[0xf] != (int *)0x0)) {
        iVar9 = *(int *)in_ECX[0xf];
      }
      else {
        iVar9 = 0;
      }
      local_cc = (float)(iVar9 << 0xc);
      local_c8 = (float)(iVar5 << 0xc);
      fStack_c4 = param_1[2];
      cVar3 = FUN_004126c0(param_1,&local_cc);
      if (cVar3 != '\0') {
        FUN_00420b70(0);
        pcVar1 = *(code **)(*in_ECX + 0x44);
        *(byte *)((int)in_ECX + 0x25) = *(byte *)((int)in_ECX + 0x25) & 0xfe;
        (*pcVar1)(0x16000000);
        pcVar1 = *(code **)(*in_ECX + 0x40);
        *(byte *)((int)in_ECX + 0x25) = *(byte *)((int)in_ECX + 0x25) | 1;
        (*pcVar1)(8);
      }
    }
  }
  else {
    local_d4 = param_1[1];
    local_d8 = *param_1;
    local_d0 = param_1[2];
    fVar12 = (float10)FUN_00420c40();
    if ((float)fVar12 == 0.0) {
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b8[2] = 0;
      local_b8[3] = 0;
      _memset(local_a8,0,0x30);
      iVar9 = (int)ROUND(local_d8) + -0x800 >> 0xc;
      iVar5 = 1;
      iVar8 = (int)ROUND(local_d4) + -0x800 >> 0xc;
      local_b8[0] = FUN_004ccee0(iVar9,iVar8,1);
      fVar2 = (float)(iVar9 * 0x1000 + 0x800);
      local_c8 = (float)(iVar8 * 0x1000 + 0x800);
      local_a8[0] = fVar2;
      local_e0 = 0;
      local_dc = 0.0;
      local_a8[1] = local_c8;
      local_a8[2] = local_d0;
      local_c0 = (float)(iVar9 * 0x1000 + 0x1000800);
      local_bc = (float)(iVar8 * 0x1000 + 0x1000800);
      if (fVar2 < local_d8 - _DAT_00b35c14) {
        if (local_c0 < _DAT_00b35c14 + local_d8 != (local_c0 == _DAT_00b35c14 + local_d8)) {
          local_e0 = 1;
        }
      }
      else {
        local_e0 = -1;
      }
      if (local_c8 < local_d4 - _DAT_00b35c14) {
        if (local_bc < local_d4 + _DAT_00b35c14 != (local_bc == local_d4 + _DAT_00b35c14)) {
          local_dc = 1.4013e-45;
        }
      }
      else {
        local_dc = -NAN;
      }
      local_cc = fVar2;
      if (local_e0 != 0) {
        local_a8[3] = (float)((local_e0 + iVar9) * 0x1000 + 0x800);
        local_a8[5] = local_d0;
        local_a8[4] = local_c8;
        local_b8[1] = FUN_004ccee0(local_e0 + iVar9,iVar8,1);
        iVar5 = 2;
      }
      if (local_dc != 0.0) {
        local_a8[iVar5 * 3] = fVar2;
        local_a8[iVar5 * 3 + 1] = (float)(((int)local_dc + iVar8) * 0x1000 + 0x800);
        local_a8[iVar5 * 3 + 2] = local_d0;
        iVar11 = FUN_004ccee0(iVar9,(int)local_dc + iVar8,1);
        local_b8[iVar5] = iVar11;
        iVar5 = iVar5 + 1;
      }
      if ((local_e0 != 0) && (local_dc != 0.0)) {
        local_a8[iVar5 * 3] = (float)((iVar9 + local_e0) * 0x1000 + 0x800);
        local_a8[iVar5 * 3 + 1] = (float)((iVar8 + (int)local_dc) * 0x1000 + 0x800);
        local_a8[iVar5 * 3 + 2] = local_d0;
        iVar9 = FUN_004ccee0(iVar9 + local_e0,iVar8 + (int)local_dc,1);
        local_b8[iVar5] = iVar9;
      }
      iVar5 = 0;
      pfVar10 = local_a8;
      do {
        if (local_b8[iVar5] == 0) break;
        FUN_004126c0(&local_d8,pfVar10);
        iVar5 = iVar5 + 1;
        pfVar10 = pfVar10 + 3;
      } while (iVar5 < 4);
    }
    else {
      FUN_004cce20(param_1,&local_d8,1);
      local_a8[0] = 0.0;
      local_a8[1] = 0.0;
      local_a8[2] = 0.0;
      local_a8[3] = 0.0;
      local_a8[4] = 0.0;
      local_a8[5] = 0.0;
      local_a8[6] = 0.0;
      local_a8[7] = 0.0;
      local_a8[8] = 0.0;
      _memset(local_78,0,0x6c);
      local_c0 = (float)((int)ROUND(local_d8) + -0x800 >> 0xc);
      iVar5 = (int)ROUND(local_d4) + -0x800 >> 0xc;
      local_cc = (float)(iVar5 * 0x1000 + -0x800);
      iVar9 = 0;
      local_f0 = (int)local_c0 * 0x1000 + -0x800;
      local_e0 = -1;
      do {
        iVar11 = -1;
        iVar8 = local_e0 + (int)local_c0;
        pfVar10 = local_78 + iVar9 * 3;
        local_dc = local_cc;
        do {
          fVar6 = (float)FUN_004ccee0(iVar8,iVar11 + iVar5,1);
          fVar2 = (float)(int)local_dc;
          local_dc = (float)((int)local_dc + 0x1000);
          local_a8[iVar9] = fVar6;
          *pfVar10 = (float)local_f0;
          pfVar10[1] = fVar2;
          pfVar10[2] = local_d0;
          iVar11 = iVar11 + 1;
          iVar9 = iVar9 + 1;
          pfVar10 = pfVar10 + 3;
        } while (iVar11 < 2);
        local_f0 = local_f0 + 0x1000;
        local_e0 = local_e0 + 1;
      } while (local_e0 < 2);
      iVar5 = 0;
      pfVar10 = local_78;
      do {
        if (local_a8[iVar5] == 0.0) break;
        FUN_004126c0(&local_d8,pfVar10);
        iVar5 = iVar5 + 1;
        pfVar10 = pfVar10 + 3;
      } while (iVar5 < 9);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_004d2d00(float *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  float local_4;
  
  local_24 = 0;
  iVar5 = FUN_006ecc80();
  if (iVar5 == 0) {
    return 0;
  }
  if ((*(byte *)(iVar5 + 0x24) & 1) == 0) {
    local_8 = *(int *)(iVar5 + 0x50);
    if (local_8 == 0) {
      return 0;
    }
    local_4 = param_1[1];
    iVar7 = (int)ROUND(*param_1) >> 0xc;
    local_10 = (int)ROUND(local_4);
    iVar8 = local_10 >> 0xc;
    local_20 = 0;
    local_1c = 0;
    local_c = iVar8;
    FUN_004123c0(param_1,0,&local_20,&local_1c);
    iVar5 = FUN_004efe80(iVar7,iVar8);
    local_10 = iVar5;
    if (iVar5 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_00420b50();
      if (((local_18 != 0) && (cVar4 = FUN_00412220(local_20,local_1c), cVar4 != '\0')) ||
         ((*(byte *)(iVar5 + 0x25) & 1) != 0)) {
        local_24 = 1;
      }
    }
    local_14 = 0;
    local_4 = 0.0;
    bVar9 = false;
    if (local_1c == 0xf) {
      bVar9 = true;
      iVar5 = FUN_004efe80(iVar7,iVar8 + 1);
      local_4 = (float)iVar5;
      if (iVar5 == 0) {
        local_14 = 0;
      }
      else {
        local_14 = FUN_00420b50();
        if ((local_14 != 0) && (cVar4 = FUN_00412220(local_20,0), cVar4 != '\0')) goto LAB_004d305a;
      }
      if (iVar5 != 0) {
        bVar1 = *(byte *)(iVar5 + 0x25);
LAB_004d3058:
        if ((bVar1 & 1) != 0) goto LAB_004d305a;
      }
    }
    else if ((local_18 == 0) || (cVar4 = FUN_00412220(local_20,local_1c + 1), cVar4 == '\0')) {
      if (iVar5 != 0) {
        bVar1 = *(byte *)(iVar5 + 0x25);
        goto LAB_004d3058;
      }
    }
    else {
LAB_004d305a:
      local_24 = local_24 + 1;
    }
    iVar8 = 0;
    iVar5 = 0;
    bVar2 = false;
    if (local_20 == 0xf) {
      bVar2 = true;
      iVar5 = FUN_004efe80(iVar7 + 1,local_c);
      if (iVar5 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_00420b50();
        if ((iVar8 != 0) && (cVar4 = FUN_00412220(0,local_1c), bVar3 = true, cVar4 != '\0'))
        goto LAB_004d30e2;
      }
      if (iVar5 != 0) {
        bVar1 = *(byte *)(iVar5 + 0x25);
        bVar2 = true;
LAB_004d30e0:
        bVar3 = bVar2;
        if ((bVar1 & 1) != 0) goto LAB_004d30e2;
      }
    }
    else if ((local_18 == 0) ||
            (cVar4 = FUN_00412220(local_20 + 1,local_1c), bVar3 = false, cVar4 == '\0')) {
      if (local_10 != 0) {
        bVar1 = *(byte *)(local_10 + 0x25);
        bVar2 = false;
        goto LAB_004d30e0;
      }
    }
    else {
LAB_004d30e2:
      bVar2 = bVar3;
      local_24 = local_24 + 1;
    }
    if (bVar9) {
      if (bVar2) {
        iVar5 = FUN_004efe80(iVar7 + 1,local_c + 1);
        if (iVar5 == 0) {
          return local_24;
        }
        iVar7 = FUN_00420b50();
        if ((iVar7 != 0) && (cVar4 = FUN_00412220(0,0), cVar4 != '\0')) goto LAB_004d31b3;
        bVar9 = (*(byte *)(iVar5 + 0x25) & 1) == 0;
      }
      else {
        fVar6 = local_4;
        if (local_14 != 0) {
          cVar4 = FUN_00412220(local_20 + 1,0);
          fVar6 = local_4;
joined_r0x004d31a3:
          if (cVar4 != '\0') goto LAB_004d31b3;
        }
LAB_004d31a9:
        if (fVar6 == 0.0) {
          return local_24;
        }
        bVar9 = (*(byte *)((int)fVar6 + 0x25) & 1) == 0;
      }
    }
    else {
      if (!bVar2) {
        fVar6 = (float)local_10;
        if (local_18 != 0) {
          cVar4 = FUN_00412220(local_20 + 1,local_1c + 1);
          fVar6 = (float)local_10;
          goto joined_r0x004d31a3;
        }
        goto LAB_004d31a9;
      }
      if ((iVar8 != 0) && (cVar4 = FUN_00412220(0,local_1c + 1), cVar4 != '\0')) goto LAB_004d31b3;
      if (iVar5 == 0) {
        return local_24;
      }
      bVar9 = (*(byte *)(iVar5 + 0x25) & 1) == 0;
    }
  }
  else {
    local_4 = param_1[1];
    iVar7 = (int)ROUND(*param_1) + -0x800 >> 0xc;
    local_10 = (int)ROUND(local_4);
    iVar8 = local_10 + -0x800 >> 0xc;
    local_1c = 0;
    local_20 = 0;
    FUN_004123c0(param_1,1,&local_1c,&local_20);
    iVar5 = FUN_004ccee0(iVar7,iVar8,0);
    local_18 = iVar5;
    if ((iVar5 != 0) && (cVar4 = FUN_00412220(local_1c,local_20), cVar4 != '\0')) {
      local_24 = 1;
    }
    local_14 = 0;
    bVar9 = false;
    if (local_20 == 0xf) {
      bVar9 = true;
      local_14 = FUN_004ccee0(iVar7,iVar8 + 1,0);
      if (local_14 != 0) {
        iVar5 = 0;
LAB_004d2e04:
        cVar4 = FUN_00412220(local_1c,iVar5);
        if (cVar4 != '\0') {
          local_24 = local_24 + 1;
        }
      }
    }
    else if (iVar5 != 0) {
      iVar5 = local_20 + 1;
      goto LAB_004d2e04;
    }
    iVar5 = 0;
    bVar2 = false;
    if (local_1c == 0xf) {
      bVar2 = true;
      iVar5 = FUN_004ccee0(iVar7 + 1,iVar8,0);
      if (iVar5 != 0) {
        iVar10 = 0;
LAB_004d2e58:
        cVar4 = FUN_00412220(iVar10,local_20);
        if (cVar4 != '\0') {
          local_24 = local_24 + 1;
        }
      }
    }
    else if (local_18 != 0) {
      iVar10 = local_1c + 1;
      goto LAB_004d2e58;
    }
    if (bVar9) {
      if (bVar2) {
        iVar5 = FUN_004ccee0(iVar7 + 1,iVar8 + 1,0);
        if (iVar5 == 0) {
          return local_24;
        }
        cVar4 = FUN_00412220(0,0);
        bVar9 = cVar4 == '\0';
      }
      else {
        if (local_14 == 0) {
          return local_24;
        }
        cVar4 = FUN_00412220(local_1c + 1,0);
        bVar9 = cVar4 == '\0';
      }
    }
    else if (bVar2) {
      if (iVar5 == 0) {
        return local_24;
      }
      cVar4 = FUN_00412220(0,local_20 + 1);
      bVar9 = cVar4 == '\0';
    }
    else {
      if (local_18 == 0) {
        return local_24;
      }
      cVar4 = FUN_00412220(local_1c + 1,local_20 + 1);
      bVar9 = cVar4 == '\0';
    }
  }
  if (bVar9) {
    return local_24;
  }
LAB_004d31b3:
  return local_24 + 1;
}



uint FUN_004d31d0(undefined4 param_1)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(in_ECX + 10);
  if (*(ushort *)(in_ECX + 8) <= uVar1) {
    FUN_004ca040(*(ushort *)(in_ECX + 0xe) + uVar1);
  }
  FUN_004ca210(uVar1,param_1);
  return uVar1;
}



void FUN_004d3210(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5609;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  in_ECX[6] = &PTR_FUN_00a322a0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *in_ECX = &PTR_FUN_00a469d4;
  in_ECX[6] = &PTR_FUN_00a469c0;
  FUN_00422ee0();
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x15] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)(in_ECX + 9) = 0;
  *(undefined1 *)((int)in_ECX + 0x26) = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 1) = 0x30;
  in_ECX[0x14] = 0;
  *(undefined1 *)((int)in_ECX + 0x25) = 0;
  FUN_0046ab80(1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004d32c0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5675;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a469d4;
  in_ECX[6] = &PTR_FUN_00a469c0;
  local_4 = 3;
  if (((uint)in_ECX[2] >> 0xe & 1) == 0) {
    FUN_004ced70(uVar2);
    if ((int *)in_ECX[0x10] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x10] + 0x10))(1);
      in_ECX[0x10] = 0;
    }
    if ((int *)in_ECX[0x11] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x11] + 0x10))(1);
      in_ECX[0x11] = 0;
    }
    puVar3 = (undefined4 *)FUN_0041f9b0();
    if (puVar3 != (undefined4 *)0x0) {
      FUN_004a6380();
      (**(code **)*puVar3)(1);
    }
  }
  if (((*(char *)(DAT_00b33a98 + 0xcd4) == '\0') && ((*(byte *)(in_ECX + 9) & 1) == 0)) &&
     (in_ECX[0x14] != 0)) {
    FUN_004effc0(in_ECX);
  }
  if (in_ECX == DAT_00b3b784) {
    DAT_00b3b784 = (undefined4 *)0x0;
  }
  if ((DAT_00b333a0 != 0) && (*(undefined4 **)(DAT_00b333a0 + 0x30) == in_ECX)) {
    *(undefined4 *)(DAT_00b333a0 + 0x30) = 0;
  }
  if (DAT_00b35224 == in_ECX) {
    DAT_00b35224 = (undefined4 *)0x0;
  }
  FUN_0041e450();
  FUN_00401f20(in_ECX[0xf]);
  in_ECX[0xf] = 0;
  iVar1 = DAT_00b35c08;
  if (DAT_00b35c08 != 0) {
    FUN_00533980();
    FUN_00401e40(iVar1 - (uint)*(byte *)(iVar1 + -1));
  }
  DAT_00b35c08 = 0;
  puVar3 = (undefined4 *)in_ECX[0x15];
  local_4._0_1_ = 2;
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00422f00();
  FUN_00401f20(in_ECX[7]);
  in_ECX[7] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004d3460(int param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((uint)in_ECX[2] >> 5 & 1) != 0) {
    return 0;
  }
  bVar2 = false;
  FUN_00496ea0(in_ECX);
  cVar4 = FUN_0044faa0();
  if ((cVar4 == '\0') && (((uint)in_ECX[2] >> 1 & 1) == 0)) {
    piVar3 = in_ECX + 0x12;
    do {
      if ((piVar3 == (int *)0x0) ||
         ((piVar1 = (int *)piVar3[1], piVar1 == (int *)0x0 && (*piVar3 == 0)))) goto LAB_004d34e5;
      iVar6 = *piVar3;
      iVar5 = FUN_0046b680(0xffffffff);
    } while ((iVar5 != param_1) &&
            ((iVar5 != 0 && (piVar3 = piVar1, (*(uint *)(iVar6 + 8) >> 1 & 1) == 0))));
  }
  bVar2 = true;
LAB_004d34e5:
  FUN_00496f50(in_ECX);
  if (bVar2) {
    (**(code **)(*in_ECX + 0x24))();
    FUN_00450a10(in_ECX);
    iStack_c = in_ECX[3];
    uStack_14 = DAT_00b05e20;
    uStack_8 = 6;
    uStack_10 = 0;
    uStack_4 = 0;
    FUN_004501f0(&uStack_14);
    cVar4 = FUN_0044faa0();
    if ((cVar4 == '\0') || (iVar6 = FUN_0046b680(0), iVar6 == param_1)) {
      FUN_004cd3b0(param_1);
    }
    return 1;
  }
  return 0;
}



undefined4
FUN_004d3479(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,int param_8)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *unaff_EBP;
  
  param_1._3_1_ = '\0';
  FUN_00496ea0(unaff_EBP);
  iVar3 = param_8;
  cVar4 = FUN_0044faa0();
  if ((cVar4 == '\0') && (((uint)unaff_EBP[2] >> 1 & 1) == 0)) {
    piVar2 = unaff_EBP + 0x12;
    do {
      if ((piVar2 == (int *)0x0) ||
         ((piVar1 = (int *)piVar2[1], piVar1 == (int *)0x0 && (*piVar2 == 0)))) goto LAB_004d34e5;
      iVar6 = *piVar2;
      iVar5 = FUN_0046b680(0xffffffff);
    } while ((iVar5 != iVar3) &&
            ((iVar5 != 0 && (piVar2 = piVar1, (*(uint *)(iVar6 + 8) >> 1 & 1) == 0))));
  }
  param_1._3_1_ = '\x01';
LAB_004d34e5:
  FUN_00496f50(unaff_EBP);
  if (param_1._3_1_ != '\0') {
    (**(code **)(*unaff_EBP + 0x24))();
    FUN_00450a10(unaff_EBP);
    param_4 = unaff_EBP[3];
    param_2 = DAT_00b05e20;
    param_5 = 6;
    param_3 = 0;
    param_6 = 0;
    FUN_004501f0(&param_2);
    cVar4 = FUN_0044faa0();
    if ((cVar4 == '\0') || (iVar6 = FUN_0046b680(0), iVar6 == iVar3)) {
      FUN_004cd3b0(iVar3);
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_004d3570(undefined4 param_1)

{
  int *in_ECX;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*in_ECX + 0x24))();
  FUN_00450a10(in_ECX);
  iStack_c = in_ECX[3];
  uStack_14 = DAT_00b05e20;
  uStack_8 = 6;
  uStack_10 = 0;
  uStack_4 = 0;
  FUN_004501f0(&uStack_14);
  FUN_004cd3b0(param_1);
  return 1;
}



void FUN_004d35d0(int *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int unaff_FS_OFFSET;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x170))();
  if (iVar4 != 0) {
    if ((in_ECX[2] & 0x400U) != 0) {
      FUN_00496ea0(in_ECX);
      FUN_00446cb0(param_1);
      FUN_00496f50(in_ECX);
      FUN_004247b0(in_ECX);
      if (((*(byte *)(in_ECX + 9) & 1) == 0) && (in_ECX[0x14] != 0)) {
        FUN_004f0120(param_1);
      }
      if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x184) != '\0') {
        return;
      }
      (**(code **)(*in_ECX + 0x90))(1);
      return;
    }
    iVar4 = FUN_006ecc80();
    if (iVar4 != 0) {
      FUN_004cecd0(param_1);
    }
    FUN_00496ea0(in_ECX);
    FUN_00446cb0(param_1);
    (**(code **)(*param_1 + 0x194))();
    FUN_00496f50(in_ECX);
    if (((((uint)param_1[2] >> 0xb & 1) == 0) &&
        (iVar4 = (**(code **)(*param_1 + 0x154))(), iVar4 != 0)) &&
       (iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b05538,0), iVar4 == 0)) {
      (**(code **)(*param_1 + 0x148))();
    }
    iVar2 = _tls_index;
    iVar4 = *(int *)(unaff_FS_OFFSET + 0x2c);
    if (((((uint)param_1[2] >> 0xe & 1) == 0) && (cVar3 = FUN_004db4a0(), cVar3 == '\0')) &&
       (*(char *)(*(int *)(iVar4 + iVar2 * 4) + 0x184) == '\0')) {
      (**(code **)(*in_ECX + 0x90))(1);
    }
    if (((*(char *)(*(int *)(iVar4 + iVar2 * 4) + 0x184) == '\0') &&
        (((uint)param_1[2] >> 0xe & 1) == 0)) && (((uint)param_1[2] >> 0xb & 1) == 0)) {
      iVar4 = (**(code **)(*param_1 + 0x154))();
      cVar3 = FUN_0043f8c0(in_ECX,0);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_1 + 400))();
        if (((cVar3 != '\0') && (cVar3 = FUN_0065d550(), cVar3 == '\0')) &&
           ((*(uint *)(DAT_00b33b00 + 0x18) >> 5 & 1) == 0)) {
          (**(code **)(*param_1 + 0x150))(0);
        }
      }
      else {
        bVar1 = false;
        if (iVar4 == 0) {
          iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
          if (((iVar4 == 0) || (*(char *)((int)in_ECX + 0x26) == '\x06')) ||
             (*(char *)((int)in_ECX + 0x26) == '\x05')) {
            bVar1 = true;
          }
          cVar3 = (**(code **)(*param_1 + 400))();
          if (((cVar3 == '\0') || (cVar3 = FUN_0065d550(), cVar3 == '\0')) && (bVar1)) {
            cVar3 = (**(code **)(*param_1 + 400))();
            if ((cVar3 != '\0') &&
               ((cVar3 = FUN_0045a500(), cVar3 == '\0' ||
                ((*(uint *)(DAT_00b33b00 + 0x18) >> 4 & 1) != 0)))) {
              (**(code **)(*param_1 + 0x1a4))();
            }
            uVar5 = FUN_00440c80(in_ECX,0);
            ModelLoader_QueueReference(param_1,uVar5);
            FUN_004d80c0(0);
            return;
          }
        }
        else {
          FUN_004cead0(param_1);
          iVar4 = (**(code **)(*param_1 + 0x164))();
          if (iVar4 == 0) {
            FUN_00707370(0,0);
          }
          else {
            FUN_00474510(param_1);
          }
        }
        cVar3 = (**(code **)(*param_1 + 400))();
        if (cVar3 != '\0') {
          FUN_006748b0(param_1);
          FUN_004d80c0(0);
          return;
        }
      }
    }
    FUN_004d80c0(0);
    return;
  }
  return;
}



void FUN_004d38f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int unaff_FS_OFFSET;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x170))();
    if (iVar2 != 0) {
      if ((in_ECX[2] & 0x400U) == 0) {
        iVar2 = FUN_006ecc80();
        if (iVar2 != 0) {
          FUN_004cecd0(param_1);
        }
        FUN_00496ea0(in_ECX);
        FUN_00446cb0(param_1);
        (**(code **)(*param_1 + 0x194))();
        FUN_00496f50(in_ECX);
        if (((uint)param_1[2] >> 0xe & 1) == 0) {
          cVar1 = FUN_004db4a0();
          if ((cVar1 == '\0') &&
             (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x184) == '\0'
             )) {
            (**(code **)(*in_ECX + 0x90))(1);
          }
        }
        FUN_004d80c0(0);
      }
      else {
        FUN_00496ea0(in_ECX);
        FUN_00446cb0(param_1);
        FUN_00496f50(in_ECX);
        FUN_004247b0(in_ECX);
        if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x184) == '\0')
        {
          (**(code **)(*in_ECX + 0x90))(1);
          return;
        }
      }
    }
  }
  return;
}



void FUN_004d3a00(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  
  if ((param_1 != 0) && ((in_ECX[2] & 0x400U) != 0)) {
    FUN_00496ea0(in_ECX);
    for (piVar3 = in_ECX + 0x12; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      piVar2 = (int *)*piVar3;
      if (piVar2 != (int *)0x0) {
        pfVar4 = (float *)(**(code **)(*piVar2 + 0x174))();
        fVar1 = *pfVar4;
        iVar5 = (**(code **)(*piVar2 + 0x174))();
        iVar7 = (int)ROUND(*(float *)(iVar5 + 4)) >> 0xc;
        iVar5 = FUN_004efe80((int)ROUND(fVar1) >> 0xc,iVar7);
        if (iVar5 == 0) {
          iVar5 = in_ECX[3];
          uVar6 = (**(code **)(*piVar2 + 0xd4))(piVar2[3]);
          uVar6 = (**(code **)(*in_ECX + 0xd4))(iVar5,uVar6);
          FUN_004a7a60("Could not find cell (%i, %i) in world \'%s\' (%08X) to add reference \'%s\' (%08X) to."
                       ,(int)ROUND(fVar1) >> 0xc,iVar7,uVar6);
        }
        else {
          FUN_004d35d0(piVar2);
        }
      }
    }
    FUN_00496f50(in_ECX);
  }
  return;
}



void FUN_004d3b10(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,int *param_8,undefined4 param_9,float param_10)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  byte bVar11;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined **local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b56ab;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (int)&local_c;
  fVar12 = (float10)FUN_0047e0b0();
  fVar2 = (float)fVar12;
  fVar12 = (float10)FUN_0047e0b0();
  fVar12 = (float10)FUN_00985a00((double)(float)fVar12,uVar6);
  iVar1 = (int)ROUND((float)fVar12);
  if (param_8 == (int *)0x0) {
    FUN_0043f350();
    if (DAT_00b35c08 == 0) {
      iVar8 = thunk_FUN_00401aa0(0x1c0,1);
      bVar11 = 0x10 - ((byte)iVar8 & 0xf);
      param_8 = (int *)(iVar8 + (uint)bVar11);
      *(byte *)((int)param_8 + -1) = bVar11;
      local_4 = 0;
      DAT_00b35c08 = FUN_00533c40(0x42000000,0);
      local_4 = 0xffffffff;
    }
    FUN_008a7f20(0x1c,8,0);
    if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
      FUN_00424180();
    }
    FUN_005337e0();
    param_8 = (int *)(param_4 * 80.0 + param_1);
    local_30 = param_2 + param_5 * 80.0;
    local_2c = param_3 + param_6 * 80.0;
    local_34 = (float)param_8;
    iVar8 = FUN_00533830(&param_1,&local_34,0x42000000);
    if (iVar8 == 0) {
      param_8 = (int *)(-DAT_00b258e8 * 2.0 + param_4);
      local_30 = param_5 + -DAT_00b258ec * 2.0;
      local_2c = param_6 + -DAT_00b258f0 * 2.0;
      local_34 = (float)param_8;
      FUN_0043f350();
      param_4 = local_34;
      param_5 = local_30;
      param_6 = local_2c;
      param_8 = (int *)(local_34 * 80.0 + param_1);
      local_30 = param_2 + local_30 * 80.0;
      local_2c = param_3 + local_2c * 80.0;
      local_34 = (float)param_8;
      iVar8 = FUN_00533830(&param_1,&local_34,0x42000000);
    }
    fVar5 = param_10;
    fVar4 = param_7;
    local_10 = 0;
    local_18 = (undefined4 *)0x0;
    local_14 = (undefined4 *)0x0;
    local_1c = &PTR_FUN_00a468f0;
    local_4 = 1;
    param_8 = (int *)0x0;
    puVar3 = local_18;
    if (0 < iVar8) {
      do {
        iVar9 = FUN_00533930();
        puVar3 = local_18;
        do {
          puVar10 = puVar3;
          if (puVar10 == (undefined4 *)0x0) goto LAB_004d3f0a;
          puVar3 = (undefined4 *)*puVar10;
        } while (iVar9 != puVar10[2]);
        if (puVar10 == (undefined4 *)0x0) {
LAB_004d3f0a:
          FUN_004cf1a0(param_1,param_2,param_3,param_4,param_5,param_6,fVar4,iVar9,&param_9,fVar5,
                       fVar2,iVar1);
          puVar10 = (undefined4 *)(*(code *)local_1c[1])();
          puVar10[2] = iVar9;
          *puVar10 = 0;
          puVar10[1] = local_14;
          puVar3 = puVar10;
          if (local_14 != (undefined4 *)0x0) {
            *local_14 = puVar10;
            puVar3 = local_18;
          }
          local_18 = puVar3;
          local_10 = local_10 + 1;
          local_14 = puVar10;
        }
        param_8 = (int *)((int)param_8 + 1);
        puVar3 = local_18;
      } while ((int)param_8 < iVar8);
    }
    while (puVar3 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar3;
      (*(code *)local_1c[2])();
    }
    local_10 = 0;
    local_18 = (undefined4 *)0x0;
    local_14 = (undefined4 *)0x0;
    iVar8 = FUN_00440880();
    if (iVar8 != 0) {
      FUN_004cf1a0(param_1,param_2,param_3,param_4,param_5,param_6,fVar4,iVar8,&param_9,fVar5,fVar2,
                   iVar1);
      param_10 = param_4 * 128.0 + param_1;
      param_7 = param_2 + param_5 * 128.0;
      param_8 = (int *)(param_3 + param_6 * 128.0);
      fStack_28 = param_10;
      fStack_24 = param_7;
      fStack_20 = (float)param_8;
      iVar9 = FUN_00440880();
      if (iVar8 != iVar9) {
        FUN_004cf1a0(param_1,param_2,param_3,param_4,param_5,param_6,fVar4,iVar9,&param_9,fVar5,
                     fVar2,iVar1);
      }
    }
    FUN_005337e0();
    local_1c = &PTR_FUN_00a4669c;
    local_4 = 2;
    puVar3 = local_18;
    while (puVar3 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar3;
      (*(code *)local_1c[2])();
    }
  }
  else {
    piVar7 = (int *)(**(code **)(*param_8 + 0x154))();
    if ((piVar7 != (int *)0x0) && (iVar8 = (**(code **)(*piVar7 + 8))(), iVar8 != 0)) {
      FUN_004cf1a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,iVar8,&param_9,param_10,
                   fVar2,iVar1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_004d41a0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b56f1;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *param_1 = 0;
  local_4 = 0;
  local_10 = 1;
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    FUN_004d06c0(&local_14);
    local_4 = 1;
    uVar2 = FUN_00405a30(uVar1);
    FUN_0075fa90(uVar2);
    local_4 = local_4 & 0xffffff00;
    if (local_14 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(local_14 + 1);
      if ((LVar3 == 0) && (local_14 != (undefined4 *)0x0)) {
        (**(code **)*local_14)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



undefined4 * FUN_004d4250(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b5731;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *param_1 = 0;
  local_4 = 0;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    FUN_004d0c20(&param_3,param_2,param_3);
    local_4 = 1;
    uVar3 = FUN_00405a30(uVar2);
    FUN_0075fa90(uVar3);
    puVar1 = param_3;
    local_4 = local_4 & 0xffffff00;
    if (param_3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(param_3 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



undefined1 FUN_004d4310(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  undefined1 local_5;
  
  if ((*(byte *)(in_ECX + 9) & 0x10) != 0) {
    return 1;
  }
  uVar5 = 0;
  local_5 = 1;
  for (piVar1 = in_ECX + 4; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      uVar5 = uVar5 + 1;
    }
  }
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      FUN_0046b680(uVar6);
      iVar3 = FUN_004520f0();
      if ((iVar3 != 0) && (cVar2 = FUN_0044faa0(), cVar2 != '\0')) {
        iVar4 = FUN_004c9d10();
        if (iVar4 == 0) {
          cVar2 = FUN_00451920(in_ECX);
        }
        else {
          cVar2 = FUN_00451460(iVar4);
        }
        if ((cVar2 == '\0') || (cVar2 = FUN_004d1340(iVar3), cVar2 == '\0')) {
          local_5 = 0;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  *(byte *)(in_ECX + 9) = *(byte *)(in_ECX + 9) | 0x10;
  cVar2 = FUN_0045a500();
  FUN_0045a530(cVar2 == '\0');
  (**(code **)(*in_ECX + 0x6c))();
  FUN_0045a530(cVar2);
  return local_5;
}



uint FUN_004d43f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *unaff_FS_OFFSET;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b575b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff7c;
  puVar3 = &local_c;
  *unaff_FS_OFFSET = (uint)puVar3;
  if ((((param_5 != 0) && (param_2 != 0)) && (param_1 != 0)) &&
     (puVar3 = (uint *)FUN_004511c0(uVar2), puVar3 == (uint *)0x30)) {
    FUN_004518b0(1);
    puVar3 = *(uint **)(param_1 + 0x23c);
    if (((puVar3 == DAT_00b05e20) && (*(int *)(param_1 + 0x248) == 6)) &&
       (puVar3 = (uint *)FUN_004518b0(1), *(uint **)(param_1 + 0x23c) == DAT_00b05e20)) {
      if (*(int *)(param_1 + 0x248) == 8) {
        puVar3 = (uint *)FUN_00451580();
      }
      if ((*(uint **)(param_1 + 0x23c) == DAT_00b05e20) && (*(int *)(param_1 + 0x248) == 10)) {
        FUN_004518b0(1);
        puVar3 = (uint *)FUN_004511c0();
        while (puVar3 == (uint *)0x31) {
          if ((((*(byte *)(param_1 + 0x244) & 0x20) == 0) &&
              (cVar1 = FUN_004d8440(param_1,&local_2c), cVar1 != '\0')) && (local_2c != 0)) {
            local_68 = 0;
            cVar1 = FUN_0055e000(local_2c,&local_68);
            if ((cVar1 == '\0') || (iVar4 = local_68, local_68 == 0)) {
              local_60 = FUN_00401f00(0x34);
              local_4 = 0;
              if (local_60 == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = FUN_004cc7c0();
              }
              *(undefined2 *)(iVar4 + 0x2e) = 0x1e;
              *(undefined2 *)(iVar4 + 0x1e) = 0x5a;
              *(undefined2 *)(iVar4 + 0xe) = 0x5a;
              *(undefined4 *)(iVar4 + 0x30) = 0;
              local_4 = 0xffffffff;
              FUN_00452570(local_2c,iVar4);
            }
            local_74 = 0.0;
            local_5c = DAT_00b3f9a8;
            local_58 = DAT_00b3f9ac;
            local_54 = DAT_00b3f9b0;
            local_50 = local_28;
            local_4c = local_24;
            pfVar7 = &local_5c;
            pfVar6 = &local_74;
            local_48 = local_20;
            pfVar5 = &local_50;
            FUN_004ef7e0(pfVar5,pfVar6,pfVar7);
            cVar1 = FUN_004eb370(pfVar5,pfVar6,pfVar7);
            if (cVar1 != '\0') {
              local_70 = (int)ROUND(local_74);
              local_6c = (int)ROUND(local_4c);
              local_64 = (int)ROUND(local_50);
              local_50 = (float)local_64;
              local_4c = (float)local_6c;
              local_48 = (float)local_70;
              local_5c = local_5c * 0.5 + 0.5;
              if (!NAN(local_5c) && 0.97 < local_5c != (local_5c == 0.97)) {
                local_5c = 0.97;
              }
              local_58 = local_58 * 0.5 + 0.5;
              if (0.97 <= local_58) {
                local_58 = 0.97;
              }
              local_54 = local_54 * 0.5 + 0.5;
              if (0.97 <= local_54) {
                local_54 = 0.97;
              }
              local_38 = local_50 + local_5c;
              local_34 = local_4c + local_58;
              local_30 = local_48 + local_54;
              local_68 = local_6c;
              local_60 = local_70;
              local_44 = local_50;
              local_40 = local_4c;
              local_3c = local_48;
              local_28 = local_38;
              local_24 = local_34;
              local_20 = local_30;
            }
            FUN_004d31d0(&local_28);
            FUN_004d31d0(&local_24);
            FUN_004d31d0(&local_20);
            FUN_004d31d0(local_18);
            FUN_004d31d0(local_14);
            FUN_004d31d0(local_10);
            FUN_004d31d0(local_1c);
            *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
          }
          FUN_004518b0(1);
          puVar3 = (uint *)FUN_004511c0();
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return (uint)puVar3 & 0xffffff00;
}



int * FUN_004d4790(int *param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [44];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar6 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5793;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 == (int *)0x0) || (iVar4 = FUN_006ecc80(uVar3), iVar4 != in_ECX)) {
    iVar4 = FUN_006ecc80(uVar3);
    if (iVar4 == in_ECX) {
      iVar4 = *DAT_00b333c4;
      goto LAB_004d47d9;
    }
    if (((*(char *)(in_ECX + 0x26) != '\x03') || (*(int *)(in_ECX + 0x44) == 0)) ||
       (sVar2 = FUN_004e4970(), sVar2 == 0)) {
LAB_004d48dc:
      piVar6 = (int *)0x0;
      goto LAB_004d4950;
    }
    FUN_004e7df0();
    local_4 = 0;
    uVar7 = (**(code **)(*DAT_00b333c4 + 0x174))();
    FUN_004bef50(uVar7);
    iVar4 = FUN_004e5730(local_38,DAT_00b333c4,0,0,&param_1);
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)FUN_004bef40();
      uStack_44 = *puVar5;
      uStack_40 = puVar5[1];
      uStack_3c = puVar5[2];
    }
    local_4 = 0xffffffff;
    FUN_004e8200();
    if (iVar4 == 0) goto LAB_004d48dc;
  }
  else {
    iVar4 = *piVar6;
LAB_004d47d9:
    puVar5 = (undefined4 *)(**(code **)(iVar4 + 0x174))();
    uStack_44 = *puVar5;
    uStack_40 = puVar5[1];
    uStack_3c = puVar5[2];
  }
  iVar4 = FUN_00401f00(0x58);
  local_4 = 1;
  if (iVar4 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_004d9a70();
  }
  local_4 = 0xffffffff;
  FUN_004d8a30(uStack_44,uStack_40,uStack_3c);
  FUN_006c5420(DAT_00b33aa8);
  uVar7 = (**(code **)(*DAT_00b333c4 + 0x170))();
  FUN_004db890(uVar7);
  cVar1 = FUN_004cc980(piVar6);
  if (cVar1 == '\0') {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x10))(1);
    }
    piVar6 = (int *)0x0;
  }
  else {
    FUN_004d35d0(piVar6);
  }
LAB_004d4950:
  *unaff_FS_OFFSET = local_c;
  return piVar6;
}



void FUN_004d4970(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_00b35c04 = 0;
  if (((*(byte *)(in_ECX + 0x24) & 1) != 0) && (*(char *)(in_ECX + 0x26) == '\x06')) {
    piVar1 = (int *)FUN_00424180();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x80))();
    }
  }
  iVar4 = 0;
  iVar3 = 8;
  do {
    iVar2 = *(int *)(in_ECX + 0x54);
    if ((((iVar2 == 0) || ((uint)*(ushort *)(iVar2 + 0xb6) <= iVar4 + 2U)) ||
        (iVar2 = *(int *)(iVar3 + *(int *)(iVar2 + 0xb0)), iVar2 == 0)) ||
       (*(ushort *)(iVar2 + 0xb6) < 4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0xb0) + 0xc);
    }
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x18) & 1) == 0)) {
      FUN_007073a0(param_1);
    }
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0x18);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4a20(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  int local_f4;
  float fStack_f0;
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined **local_d0 [4];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_80;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b5801;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&local_f4;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff00;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar2 = DAT_00b35c24;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    iVar2 = FUN_00424180(uVar1);
  }
  if (((*(byte *)(in_ECX + 0x24) & 1) != 0) && (iVar2 == 0)) {
    FUN_0088a4f0();
    local_e0 = 0;
    uStack_dc = 0;
    local_14 = 0;
    uStack_d8 = 0xc2932667;
    uStack_d4 = 0;
    local_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0xc2932667;
    uStack_b4 = 0;
    FUN_008a9460(0x453b8000);
    local_80 = 0x3f800000;
    DAT_00b2e2d4 = DAT_00b097d8;
    local_f4 = thunk_FUN_00401aa0(0x90,1);
    bVar5 = 0x10 - ((byte)local_f4 & 0xf);
    local_f4 = local_f4 + (uint)bVar5;
    *(byte *)(local_f4 + -1) = bVar5;
    local_14._0_1_ = 1;
    piVar3 = (int *)FUN_0088aeb0(local_d0);
    local_14._0_1_ = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x58))();
    }
    local_f4 = FUN_00401f00(0x20);
    local_14._0_1_ = 2;
    if (local_f4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00536e10();
    }
    local_14._0_1_ = 0;
    FUN_004cd320(uVar4);
    if ((*(byte *)(in_ECX + 0x24) >> 1 & 1) != 0) {
      local_f4 = FUN_00401f00(0x2c);
      local_14._0_1_ = 3;
      if (local_f4 == 0) {
        uVar4 = 0;
      }
      else {
        if ((*(byte *)(in_ECX + 0x24) >> 1 & 1) == 0) {
          fVar6 = (float10)-3.4028235e+38;
        }
        else {
          fVar6 = (float10)FUN_0041f870();
        }
        fStack_f0 = (float)fVar6;
        uVar4 = FUN_00537e40(fStack_f0);
      }
      local_14._0_1_ = 0;
      FUN_004cd2d0(uVar4);
    }
    local_f4 = FUN_00401f00(0x14);
    local_14._0_1_ = 4;
    if (local_f4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_005360f0();
    }
    local_14 = (uint)local_14._1_3_ << 8;
    FUN_004cd2d0(uVar4);
    FUN_004cb7f0(auStack_ec);
    FUN_0088d260(auStack_ec);
    FUN_0088b680(DAT_00b097b8);
    _DAT_00b2e2e8 = 1.0;
    if (_DAT_00b097c0 < 1.0) {
      _DAT_00b2e2e8 = _DAT_00b097c0;
    }
    FUN_004240c0(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x58))();
    }
    (**(code **)(*piVar3 + 0x80))();
    local_14 = 0xffffffff;
    *(bool *)((int)piVar3 + 0x19) = DAT_00b33a34 == '\0';
    local_d0[0] = &PTR_LAB_00a45e5c;
  }
  iVar2 = FUN_0041f950();
  if (iVar2 == 0) {
    local_f4 = FUN_00401f00(0x18);
    local_14 = 5;
    if (local_f4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00533380();
    }
    local_14 = 0xffffffff;
    FUN_0041f890(uVar4);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_004d4d00(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_34 [9];
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = DAT_00b35c24;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    iVar1 = FUN_00424180();
  }
  bVar3 = *(byte *)(in_ECX + 0x24) & 1;
  if ((bVar3 == 0) && (*(int **)(in_ECX + 0x3c) != (int *)0x0)) {
    iVar5 = **(int **)(in_ECX + 0x3c);
  }
  else {
    iVar5 = 0;
  }
  if ((bVar3 == 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x3c) + 4);
  }
  else {
    iVar4 = 0;
  }
  iVar2 = FUN_0041f950();
  if ((iVar1 != 0) && (iVar2 != 0)) {
    local_4 = 0x3f800000;
    puVar6 = &DAT_00b26dc4;
    puVar7 = local_34;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_c = (float)(iVar4 << 0xc) + 2048.0;
    local_8 = 0;
    local_10 = (float)(iVar5 << 0xc) + 2048.0;
    FUN_00532f50(iVar1,&local_10,&DAT_00b27110);
  }
  return;
}



void FUN_004d4dc0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    iVar3 = FUN_0041f950();
    if (iVar3 != 0) {
      FUN_00532ef0();
    }
    FUN_00496ea0(in_ECX);
    piVar1 = (int *)(in_ECX + 0x48);
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[1];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x144))();
      }
    }
    FUN_00496f50(in_ECX);
  }
  else {
    iVar3 = FUN_00424180();
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0x19) = 0;
      FUN_0088b680(0);
      return;
    }
  }
  return;
}



undefined4 FUN_004d4e30(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  
  piVar3 = DAT_00b35c24;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    piVar3 = (int *)FUN_00424180();
  }
  if ((piVar3 == (int *)0x0) || (cVar1 = (**(code **)(*piVar3 + 0x88))(param_1), cVar1 == '\0')) {
    return 0;
  }
  iVar4 = FUN_00889cd0();
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  if (iVar4 != 0) {
    iVar4 = *(int *)(iVar4 + 8);
    if ((iVar4 == 0) || (iVar4 == -0x14)) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)*(undefined4 *)(iVar4 + 0x30);
    }
    if ((bVar2 & 0x3f) == 0x11) {
      return *(undefined4 *)(in_ECX + 0x54);
    }
  }
  uVar5 = FUN_00889cb0();
  return uVar5;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d4eb0(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_6c [12];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_6c;
  if (param_1 != 0) {
    iVar1 = DAT_00b35c24;
    if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
      iVar1 = FUN_00424180();
    }
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
      local_40 = *(float *)(param_1 + 0x88) * 0.14287673;
      fStack_3c = *(float *)(param_1 + 0x8c) * 0.14287673;
      fStack_38 = *(float *)(param_1 + 0x90) * 0.14287673;
      local_30 = *(undefined4 *)(param_1 + 0x68);
      local_2c = *(undefined4 *)(param_1 + 0x74);
      local_28 = *(undefined4 *)(param_1 + 0x80);
      local_5c = *(float *)(param_1 + 100);
      local_58 = *(float *)(param_1 + 0x70);
      local_54 = *(float *)(param_1 + 0x7c);
      local_50 = local_5c + local_40;
      fStack_4c = local_58 + fStack_3c;
      fStack_48 = local_54 + fStack_38;
      fStack_44 = fStack_44 + fStack_34;
      local_60 = *(float *)(param_1 + 0xfc) * 0.14287673;
      FUN_008a7880(&local_40,&local_50,&local_30,local_60,*(float *)(param_1 + 0x100) * 0.14287673,
                   0x42960000,"Player");
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004d5000(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f4 [4];
  undefined4 *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_80;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b5873;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_f4;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff00;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_0088a4f0(uVar2);
  local_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0xc2932667;
  local_14 = 0;
  iStack_d4 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0xc2932667;
  uStack_b4 = 0;
  FUN_008a9460(0x46a49810);
  local_ec = *param_1;
  local_e8 = param_1[1];
  local_e4 = 0;
  local_80 = 0x3f800000;
  DAT_00b2e2d4 = DAT_00b097d8;
  iVar3 = thunk_FUN_00401aa0(0xc0,1);
  bVar7 = 0x10 - ((byte)iVar3 & 0xf);
  local_f0 = (undefined4 *)(iVar3 + (uint)bVar7);
  *(byte *)((int)local_f0 + -1) = bVar7;
  local_14._0_1_ = 1;
  piVar4 = (int *)FUN_008a7b20(local_d0);
  local_14._0_1_ = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x58))();
  }
  puVar5 = (undefined4 *)FUN_00401f00(0x14);
  local_14._0_1_ = 2;
  puVar8 = (undefined4 *)0x0;
  local_f0 = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    FUN_008984c0();
    *puVar5 = &PTR_FUN_00a4699c;
    puVar8 = puVar5;
  }
  local_14 = (uint)local_14._1_3_ << 8;
  if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x58))(), iVar3 != 0)) {
    FUN_00899ca0(puVar8);
  }
  piVar1 = piVar4 + 0x18;
  if (piVar4[0x19] == (piVar4[0x1a] & 0x3fffffffU)) {
    FUN_008a6ee0(piVar1,4);
  }
  *(undefined4 **)(*piVar1 + piVar4[0x19] * 4) = puVar8;
  piVar4[0x19] = piVar4[0x19] + 1;
  local_f0 = (undefined4 *)FUN_00401f00(0x20);
  local_14._0_1_ = 3;
  if (local_f0 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00536e10();
  }
  local_14 = (uint)local_14._1_3_ << 8;
  FUN_004cd320(uVar6);
  uVar6 = FUN_00537cc0();
  if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x58))(), iVar3 != 0)) {
    FUN_00899ca0(uVar6);
  }
  if (piVar4[0x19] == (piVar4[0x1a] & 0x3fffffffU)) {
    FUN_008a6ee0(piVar1,4);
  }
  *(undefined4 *)(*piVar1 + piVar4[0x19] * 4) = uVar6;
  piVar4[0x19] = piVar4[0x19] + 1;
  local_f0 = (undefined4 *)FUN_00401f00(0x14);
  local_14._0_1_ = 4;
  if (local_f0 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_005360f0();
  }
  local_14 = (uint)local_14._1_3_ << 8;
  if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x58))(), iVar3 != 0)) {
    FUN_00899ca0(uVar6);
  }
  if (piVar4[0x19] == (piVar4[0x1a] & 0x3fffffffU)) {
    FUN_008a6ee0(piVar1,4);
  }
  *(undefined4 *)(*piVar1 + piVar4[0x19] * 4) = uVar6;
  piVar4[0x19] = piVar4[0x19] + 1;
  local_e0 = 0x460dbbd5;
  uStack_dc = 0x460dbbd5;
  piVar4[0x20] = 0x47124e47;
  piVar4[0x21] = 0x47124e47;
  piVar4[0x22] = 0x47124e47;
  piVar4[0x23] = iStack_d4;
  uStack_d8 = 0x460dbbd5;
  piVar4[0x24] = 0x460dbbd5;
  piVar4[0x25] = 0x460dbbd5;
  piVar4[0x26] = 0x460dbbd5;
  piVar4[0x27] = iStack_d4;
  FUN_0088d260(&local_ec);
  (**(code **)(*piVar4 + 0x58))();
  (**(code **)(*piVar4 + 0x80))();
  *(bool *)((int)piVar4 + 0x19) = DAT_00b33a34 == '\0';
  FUN_0088b680(0);
  _DAT_00b2e2e8 = 1.0;
  if (_DAT_00b097c0 < 1.0) {
    _DAT_00b2e2e8 = _DAT_00b097c0;
  }
  *unaff_FS_OFFSET = local_1c;
  return piVar4;
}



void FUN_004d5320(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = DAT_00b35c24;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    piVar1 = (int *)FUN_00424180();
  }
  if ((piVar1 != (int *)0x0) && (*(int *)(in_ECX + 0x54) != 0)) {
    (**(code **)(*piVar1 + 0x98))(*(int *)(in_ECX + 0x54),param_1);
    FUN_004d1e40(param_1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d5370(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_34;
  float local_1c;
  float local_18;
  undefined4 local_14;
  int local_10 [4];
  
  if ((_DAT_00b35e20 & 1) == 0) {
    _DAT_00b35e20 = _DAT_00b35e20 | 1;
    _DAT_00b35e14 = 3.4028235e+38;
    _DAT_00b35e18 = 3.4028235e+38;
    _DAT_00b35e1c = 0x7f7fffff;
  }
  iVar7 = 0;
  if (DAT_00b333c4 != 0) {
    local_1c = *(float *)(DAT_00b333c4 + 0x2c);
    local_18 = *(float *)(DAT_00b333c4 + 0x30);
    local_14 = *(undefined4 *)(DAT_00b333c4 + 0x34);
    FUN_004122f0(&local_1c);
    cVar3 = FUN_008aa390(&DAT_00b35e14);
    if (cVar3 != '\0') {
      _DAT_00b35e1c = local_14;
      _DAT_00b35e14 = local_1c;
      _DAT_00b35e18 = local_18;
      local_10[0] = FUN_006ecc80();
      if (local_10[0] != 0) {
        if ((*(byte *)(local_10[0] + 0x24) & 1) != 0) {
          FUN_004d2720(&local_1c);
          return;
        }
        local_10[1] = 0;
        local_10[2] = 0;
        local_10[3] = 0;
        if (*(int *)(local_10[0] + 0x50) != 0) {
          iVar8 = (int)ROUND(local_1c) >> 0xc;
          iVar9 = (int)ROUND(local_18) >> 0xc;
          local_34 = 0;
          fVar1 = (float)(iVar8 << 0xc) + 4096.0;
          fVar2 = (float)(iVar9 << 0xc) + 4096.0;
          pfVar4 = (float *)FUN_00403c00();
          if ((float)(iVar8 << 0xc) < local_1c - *pfVar4) {
            pfVar4 = (float *)FUN_00403c00();
            if (fVar1 < *pfVar4 + local_1c != (fVar1 == *pfVar4 + local_1c)) {
              iVar7 = 1;
            }
          }
          else {
            iVar7 = -1;
          }
          pfVar4 = (float *)FUN_00403c00();
          if ((float)(iVar9 << 0xc) < local_18 - *pfVar4) {
            pfVar4 = (float *)FUN_00403c00();
            if (fVar2 < *pfVar4 + local_18 != (fVar2 == *pfVar4 + local_18)) {
              local_34 = 1;
            }
          }
          else {
            local_34 = -1;
          }
          iVar6 = 1;
          if (iVar7 != 0) {
            local_10[1] = FUN_004efe80(iVar8 + iVar7,iVar9);
            iVar6 = 2;
          }
          if (local_34 != 0) {
            iVar5 = FUN_004efe80(iVar8,local_34 + iVar9);
            local_10[iVar6] = iVar5;
            iVar6 = iVar6 + 1;
          }
          if ((iVar7 != 0) && (local_34 != 0)) {
            iVar7 = FUN_004efe80(iVar7 + iVar8,local_34 + iVar9);
            local_10[iVar6] = iVar7;
          }
        }
        iVar7 = 0;
        do {
          if (local_10[iVar7] == 0) {
            return;
          }
          FUN_004d2720(&local_1c);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 4);
      }
    }
  }
  return;
}



void FUN_004d55e0(byte param_1)

{
  FUN_004d32c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d5600(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = DAT_00b3f9a8;
  local_8 = DAT_00b3f9ac;
  local_4 = DAT_00b3f9b0;
  _DAT_00b35c00 = 0;
  puVar2 = (undefined4 *)FUN_004d5000(&local_c);
  puVar1 = DAT_00b35c24;
  if (DAT_00b35c24 != puVar2) {
    if (((DAT_00b35c24 != (undefined4 *)0x0) &&
        (LVar3 = InterlockedDecrement(DAT_00b35c24 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b35c24 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  if (_DAT_00b35c14 <= 2048.0) {
    return;
  }
  _DAT_00b35c14 = 2048.0;
  return;
}



uint FUN_004d56a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  uint local_c;
  int iStack_8;
  int *piStack_4;
  
  uVar3 = 0;
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    uVar12 = 0;
    ppuVar11 = &PTR_PTR_00b03038;
    ppuVar10 = &PTR_PTR_00b02f9c;
    uVar9 = 0;
    uVar4 = FUN_0046c360(0,param_2);
    uVar3 = FUN_009832e6(uVar4,uVar9,ppuVar10,ppuVar11,uVar12);
    if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
      uVar4 = (**(code **)(**(int **)(in_ECX + 0x40) + 0x38))
                        (0,param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b08984,0);
      piVar5 = (int *)FUN_009832e6(uVar4);
      if (piVar5 != (int *)0x0) {
        FUN_004c9ae0(piVar5);
        FUN_004bfdc0(uVar3);
        (**(code **)(*piVar5 + 0x90))(1);
      }
    }
    if (*(int **)(in_ECX + 0x44) != (int *)0x0) {
      uVar4 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x38))
                        (0,param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b09798,0);
      piVar5 = (int *)FUN_009832e6(uVar4);
      if (piVar5 != (int *)0x0) {
        piVar6 = *(int **)(uVar3 + 0x44);
        if (piVar6 != piVar5) {
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x10))(1);
          }
          *(int **)(uVar3 + 0x44) = piVar5;
        }
        FUN_004a6d70(uVar3);
        (**(code **)(*piVar5 + 0x90))(1);
      }
    }
    FUN_00496ea0(in_ECX);
    piVar5 = (int *)(in_ECX + 0x48);
    iStack_8 = 0;
    piStack_4 = (int *)0x0;
    iVar7 = iStack_8;
    if (piVar5 != (int *)0x0) {
      iVar7 = 0;
      do {
        if ((piVar5[1] == 0) && (*piVar5 == 0)) break;
        iVar1 = *piVar5;
        iVar8 = iVar7;
        if ((((*(uint *)(iVar1 + 8) >> 0xe & 1) == 0) &&
            ((((*(byte *)(in_ECX + 0x24) & 1) != 0 || ((*(uint *)(in_ECX + 8) & 0x400) != 0)) ||
             (cVar2 = FUN_004db4a0(), cVar2 == '\0')))) && (iVar8 = iVar1, iVar7 != 0)) {
          piVar6 = (int *)FUN_00401f00(8);
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            *piVar6 = iVar7;
            piVar6[1] = 0;
          }
          piVar6[1] = (int)piStack_4;
          piStack_4 = piVar6;
        }
        piVar5 = (int *)piVar5[1];
        iVar7 = iVar8;
      } while (piVar5 != (int *)0x0);
    }
    iStack_8 = iVar7;
    FUN_00496f50(in_ECX);
    piVar5 = &iStack_8;
    local_c = uVar3;
    do {
      if ((piVar5[1] == 0) && (*piVar5 == 0)) break;
      uVar4 = (**(code **)(*(int *)*piVar5 + 0x38))
                        (0,param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      piVar6 = (int *)FUN_009832e6(uVar4);
      if (piVar6 != (int *)0x0) {
        local_c = CONCAT31(local_c._1_3_,(char)(*(uint *)(uVar3 + 8) >> 10)) & 0xffffff01;
        FUN_004d7040(local_c);
        FUN_004d35d0(piVar6);
        (**(code **)(*piVar6 + 0x90))(1);
      }
      piVar5 = (int *)piVar5[1];
    } while (piVar5 != (int *)0x0);
    FUN_004526e0();
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004d58b0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  LONG LVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b58d1;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar3 = *(int **)(in_ECX + 0x54);
  if (piVar3 == (int *)0x0) {
    *(undefined1 *)(in_ECX + 0x26) = 2;
    iVar2 = FUN_00401f00(0xdc,uVar1);
    local_4 = 0;
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_0070b780(0);
    }
    piVar3[0x15] = DAT_00b3f9a8;
    piVar3[0x16] = DAT_00b3f9ac;
    piVar3[0x17] = DAT_00b3f9b0;
    local_4 = 0xffffffff;
    piVar6 = &DAT_00b26dc4;
    piVar7 = piVar3 + 0xc;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    iVar2 = FUN_00401f00(0xdc,uVar1);
    local_4 = 1;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0070b780(0);
    }
    local_4 = 0xffffffff;
    if ((_DAT_00b35c00 & 1) == 0) {
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffe;
    }
    else {
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
    }
    (**(code **)(*piVar3 + 0x84))(iVar2,0);
    iVar2 = FUN_00401f00(0xdc);
    local_c = 2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0070b780(0);
    }
    local_c = -1;
    if ((_DAT_00b35c00 >> 1 & 1) == 0) {
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffe;
    }
    else {
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
    }
    (**(code **)(*piVar3 + 0x84))(iVar2,0);
    for (iVar2 = (-(uint)((*(byte *)(in_ECX + 0x24) & 1) != 0) & 0xfffffffd) + 4; iVar2 != 0;
        iVar2 = iVar2 + -1) {
      uVar4 = FUN_004ca7a0();
      (**(code **)(*piVar3 + 0x84))(uVar4,0);
    }
    FUN_00707370(0,0);
    piVar6 = *(int **)(in_ECX + 0x54);
    if (piVar6 != piVar3) {
      if (((piVar6 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar6 + 1), LVar5 == 0)) &&
         (piVar6 != (int *)0x0)) {
        (**(code **)*piVar6)(1);
      }
      *(int **)(in_ECX + 0x54) = piVar3;
      InterlockedIncrement(piVar3 + 1);
    }
    FUN_004d4a20();
    *(undefined1 *)(in_ECX + 0x26) = 3;
  }
  *unaff_FS_OFFSET = local_c;
  return piVar3;
}



void FUN_004d5a90(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  for (piVar1 = (int *)(in_ECX + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar5 = *piVar1;
    if ((iVar5 != 0) && (iVar5 != DAT_00b333c4)) {
      piVar3 = (int *)FUN_009832e6(iVar5,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
      iVar4 = FUN_0041e6f0();
      if (iVar4 != 0) {
        FUN_00492e70(iVar5,DAT_00b333c4,0,0,1);
      }
      if (piVar3 != (int *)0x0) {
        if ((((uint)piVar3[2] >> 0xb & 1) == 0) && (((uint)piVar3[2] >> 5 & 1) == 0)) {
          (**(code **)(*piVar3 + 0x374))(DAT_00b333c4,0x41200000);
        }
        cVar2 = FUN_005e1d30();
        if ((((cVar2 == '\0') && (((uint)piVar3[2] >> 0xb & 1) == 0)) &&
            (((uint)piVar3[2] >> 5 & 1) == 0)) &&
           (cVar2 = (**(code **)(*piVar3 + 0x198))(0), cVar2 == '\0')) {
          (**(code **)(*piVar3 + 0x32c))(DAT_00b333c4,0,0,0,0,1);
          FUN_006005f0(0,0);
        }
      }
      iVar5 = FUN_004d7740();
      if (iVar5 != 0) {
        FUN_004dbea0();
      }
      FUN_004d5370();
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



void FUN_004d5bd0(char param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int in_ECX;
  
  iVar4 = FUN_004d58b0();
  FUN_004cb8c0(0,0);
  FUN_004cfaf0();
  if (in_ECX != 0) {
    if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
      cVar3 = FUN_0043fea0(in_ECX);
    }
    else {
      cVar3 = FUN_0043fd40(in_ECX);
    }
    if (cVar3 != '\0') {
      if (iVar4 != 0) {
        FUN_00707370(0,0);
      }
      FUN_004cb790();
      goto LAB_004d5d4c;
    }
  }
  FUN_00496ea0(in_ECX);
  uVar5 = FUN_00440c80(in_ECX,0);
  piVar1 = (int *)(in_ECX + 0x48);
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[1];
    if (piVar2 != (int *)0x0) {
      cVar3 = FUN_0045a500();
      if (cVar3 == '\0') {
        FUN_004f9ec0(piVar2,piVar2 + 0x11);
        FUN_004fbf90(piVar2,piVar2 + 0x11,0x1000);
      }
      if ((((uint)piVar2[2] >> 0xb & 1) == 0) && (((uint)piVar2[2] >> 5 & 1) == 0)) {
        cVar3 = (**(code **)(*piVar2 + 400))();
        if ((cVar3 != '\0') &&
           (((cVar3 = FUN_0045a500(), cVar3 == '\0' ||
             ((*(uint *)(DAT_00b33b00 + 0x18) >> 4 & 1) != 0)) &&
            (piVar6 = (int *)FUN_009832e6(piVar2,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0),
            piVar6 != (int *)0x0)))) {
          (**(code **)(*piVar6 + 0x1a4))();
          FUN_00674e10(piVar6);
        }
        ModelLoader_QueueReference(piVar2,uVar5);
        iVar4 = (**(code **)(*piVar2 + 0x154))();
        if (iVar4 != 0) {
          FUN_004cead0(piVar2);
        }
      }
    }
  }
  FUN_00496f50(in_ECX);
LAB_004d5d4c:
  if (param_1 != '\0') {
    FUN_004d4d00();
  }
  *(undefined1 *)(in_ECX + 0x26) = 6;
  return;
}



void FUN_004d5d70(float *param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(in_ECX + 0x24) & 1;
  if ((bVar3 == 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x3c) + 4);
  }
  else {
    iVar2 = 0;
  }
  if ((bVar3 == 0) && (*(int **)(in_ECX + 0x3c) != (int *)0x0)) {
    iVar1 = **(int **)(in_ECX + 0x3c);
  }
  else {
    iVar1 = 0;
  }
  *param_1 = (float)(iVar1 * 0x1000 + 0x800);
  param_1[1] = (float)(iVar2 * 0x1000 + 0x800);
  param_1[2] = 0.0;
  *param_2 = DAT_00b3f9a8;
  param_2[1] = DAT_00b3f9ac;
  param_2[2] = DAT_00b3f9b0;
  if ((DAT_00b097e0 == '\0') || ((*(byte *)(in_ECX + 0x24) & 1) != 0)) {
    FUN_004d4310();
    FUN_004cee90(param_1,param_2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004d5e30(int param_1,undefined4 param_2,float param_3,undefined4 param_4,float param_5,
                 code *param_6,undefined4 param_7)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  float10 fVar14;
  float fStack_28;
  undefined8 local_24;
  undefined **local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar9 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b58f8;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    FUN_00496ea0(param_1);
  }
  if ((_DAT_00b35e48 & 1) == 0) {
    _DAT_00b35e48 = _DAT_00b35e48 | 1;
    _DAT_00b35e44 = 0;
    DAT_00b35e3c = (int *)0x0;
    _DAT_00b35e40 = 0;
    _DAT_00b35e38 = &PTR_FUN_00a4690c;
    _atexit(FUN_00a1bc20);
  }
  pcVar5 = param_6;
  if ((_DAT_00b35e48 & 2) == 0) {
    _DAT_00b35e48 = _DAT_00b35e48 | 2;
  }
  bVar3 = false;
  if (DAT_00b35e34 == 0) {
    _DAT_00b097b4 = 3.4028235e+38;
    _DAT_00b35e28 = DAT_00b3f9a8;
    _DAT_00b35e2c = DAT_00b3f9ac;
    _DAT_00b35e30 = DAT_00b3f9b0;
    DAT_00b35e24 = 0;
  }
  if ((iVar9 != 0) && (param_6 != (code *)0x0)) {
    DAT_00b35e34 = DAT_00b35e34 + 1;
    FUN_005b1e20(&param_1);
    local_10 = 0;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_1c = &PTR_FUN_00a4691c;
    piVar13 = (int *)(iVar9 + 0x48);
    local_4 = 0;
joined_r0x004d5f46:
    do {
      pcVar4 = pcVar5;
      puVar11 = local_18;
      if ((piVar13 == (int *)0x0) || (bVar3)) goto joined_r0x004d61ce;
      piVar12 = (int *)*piVar13;
      piVar13 = (int *)piVar13[1];
      local_24._4_4_ = (undefined4)((ulonglong)local_24 >> 0x20);
      local_24 = (double)CONCAT44(local_24._4_4_,piVar12);
      pcVar5 = param_6;
    } while (piVar12 == (int *)0x0);
    if (param_3 != 3.4028235e+38) {
      uVar8 = (**(code **)(*piVar12 + 0x174))(param_2,param_3);
      iVar9 = FUN_00480520(uVar8);
      pcVar5 = param_6;
      if (-1 < iVar9) goto joined_r0x004d5f46;
    }
    if ((param_5 != 3.4028235e+38) &&
       ((param_3 != param_5 || (cVar6 = FUN_008aa350(param_4), cVar6 == '\0')))) {
      uVar8 = (**(code **)(*piVar12 + 0x174))(param_4,param_5);
      iVar9 = FUN_00480520(uVar8);
      pcVar5 = param_6;
      if (-1 < iVar9) goto joined_r0x004d5f46;
    }
    cVar6 = (*pcVar4)(piVar12,param_7);
    if (cVar6 != '\0') {
      bVar3 = true;
    }
    iVar9 = (**(code **)(*piVar12 + 0x170))();
    pcVar5 = param_6;
    if (((*(char *)(iVar9 + 4) == '\x18') &&
        (iVar9 = (**(code **)(*piVar12 + 0x170))(), pcVar5 = param_6, iVar9 != DAT_00b35ebc)) &&
       (iVar9 = FUN_004d7630(), pcVar5 = param_6, iVar9 != 0)) {
      iVar9 = FUN_0042b470();
      iVar10 = FUN_0042b460();
      if ((iVar10 != 0) && ((*(byte *)(iVar10 + 0x24) & 1) == 0)) {
        iVar10 = 0;
      }
      if (iVar9 == 0) {
        pcVar5 = param_6;
        if (iVar10 != 0) {
          piVar12 = DAT_00b35e3c;
          if (DAT_00b35e3c == (int *)0x0) {
LAB_004d61a4:
            FUN_005b1e20(&local_24);
            pcVar5 = param_6;
          }
          else {
            do {
              piVar2 = (int *)*piVar12;
              if (iVar10 == piVar12[2]) {
                if (piVar12 == (int *)0x0) goto LAB_004d61a4;
                goto joined_r0x004d5f46;
              }
              piVar12 = piVar2;
            } while (piVar2 != (int *)0x0);
            FUN_005b1e20(&local_24);
            pcVar5 = param_6;
          }
        }
      }
      else {
        fStack_28 = 3.4028235e+38;
        if (param_3 != 3.4028235e+38) {
          local_24 = (double)param_3;
          fVar14 = (float10)FUN_004d7e30(param_2);
          fVar1 = (float)((float10)local_24 - fVar14);
          local_24 = (double)CONCAT44(local_24._4_4_,fVar1);
          if (fVar1 < 3.4028235e+38) {
            fStack_28 = fVar1;
          }
        }
        if ((param_5 != 3.4028235e+38) && (param_3 != param_5)) {
          local_24 = (double)param_5;
          fVar14 = (float10)FUN_004d7e30(param_4);
          fVar1 = (float)((float10)local_24 - fVar14);
          local_24 = (double)CONCAT44(local_24._4_4_,fVar1);
          if (fVar1 < fStack_28) {
            fStack_28 = fVar1;
          }
        }
        if ((DAT_00b35e24 == 0) || (pcVar5 = param_6, _DAT_00b097b4 < fStack_28)) {
          _DAT_00b097b4 = fStack_28;
          puVar11 = (undefined4 *)FUN_006899c0();
          _DAT_00b35e28 = *puVar11;
          _DAT_00b35e2c = puVar11[1];
          _DAT_00b35e30 = puVar11[2];
          DAT_00b35e24 = iVar9;
          pcVar5 = param_6;
        }
      }
    }
    goto joined_r0x004d5f46;
  }
LAB_004d61f4:
  if (((DAT_00b35e34 == 0) && (FUN_00573880(uVar7), !bVar3)) && (DAT_00b35e24 != 0)) {
    FUN_004f0750(&DAT_00b35e28,_DAT_00b097b4,param_4,0x7f7fffff,param_6,param_7);
    bVar3 = true;
  }
  if (iVar9 != 0) {
    FUN_00496f50(iVar9);
  }
  *unaff_FS_OFFSET = local_c;
  return !bVar3;
joined_r0x004d61ce:
  while ((puVar11 != (undefined4 *)0x0 && (!bVar3))) {
    piVar13 = puVar11 + 2;
    puVar11 = (undefined4 *)*puVar11;
    if (*piVar13 != 0) {
      fStack_28 = 3.4028235e+38;
      if (param_3 != 3.4028235e+38) {
        local_24 = (double)param_3;
        fVar14 = (float10)FUN_004d7e30(param_2);
        fVar1 = (float)((float10)local_24 - fVar14);
        local_24 = (double)CONCAT44(local_24._4_4_,fVar1);
        if (fVar1 < 3.4028235e+38) {
          fStack_28 = fVar1;
        }
      }
      if ((param_5 != 3.4028235e+38) && (param_3 != param_5)) {
        local_24 = (double)param_5;
        fVar14 = (float10)FUN_004d7e30(param_4);
        fVar1 = (float)((float10)local_24 - fVar14);
        local_24 = (double)CONCAT44(local_24._4_4_,fVar1);
        if (fVar1 < fStack_28) {
          fStack_28 = fVar1;
        }
      }
      FUN_004d7630();
      uVar8 = FUN_006899c0(fStack_28,param_4,0x7f7fffff,pcVar4,param_7);
      uVar8 = FUN_0042b460(uVar8);
      cVar6 = FUN_004d5e30(uVar8);
      if (cVar6 == '\0') {
        bVar3 = true;
      }
    }
  }
  DAT_00b35e34 = DAT_00b35e34 + -1;
  local_4 = 0xffffffff;
  FUN_004cd200();
  iVar9 = param_1;
  goto LAB_004d61f4;
}



void FUN_004d63a0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  uVar2 = FUN_004d58b0();
  *(undefined1 *)(in_ECX + 0x26) = 5;
  (**(code **)(*param_1 + 0x84))(uVar2,1);
  iVar3 = DAT_00b35c24;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    iVar3 = FUN_00424180();
  }
  if (iVar3 != 0) {
    if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
      FUN_004d4d00();
    }
    *(bool *)(iVar3 + 0x19) = DAT_00b33a34 == '\0';
    FUN_0088b680(DAT_00b097b8);
  }
  cVar1 = FUN_004e4980();
  if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x44) != 0)) {
    FUN_004e5550();
  }
  FUN_004cb670(1);
  FUN_004cb590(1);
  FUN_00707610();
  FUN_00707370(0,0);
  return;
}



void FUN_004d6450(void)

{
  char cVar1;
  undefined4 uVar2;
  LONG LVar3;
  int in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_4 [4];
  
  if ((*(char *)(in_ECX + 0x26) == '\x06') || (*(char *)(in_ECX + 0x26) == '\x05')) {
    *(undefined1 *)(in_ECX + 0x26) = 4;
    FUN_0043de30(in_ECX);
    *(undefined1 *)(DAT_00b333a0 + 0x69) = 1;
    FUN_004cb670(0);
    if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
      FUN_0043ff80(in_ECX);
    }
    else {
      FUN_0043fd70(in_ECX);
    }
    FUN_004d4dc0();
    uVar2 = FUN_004d58b0();
    cVar1 = FUN_004e4980();
    if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x44) != 0)) {
      FUN_004e54d0();
    }
    FUN_00708b80();
    (**(code **)(**(int **)(DAT_00b333a0 + 0xc) + 0x88))(local_4,uVar2);
    if (unaff_EDI != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(unaff_EDI + 1);
      if ((LVar3 == 0) && (unaff_EDI != (undefined4 *)0x0)) {
        (**(code **)*unaff_EDI)(1);
      }
    }
    *(undefined1 *)(in_ECX + 0x26) = 3;
    FUN_00496ea0(in_ECX);
    FUN_006786a0(in_ECX + 0x48,1);
    FUN_00496f50(in_ECX);
    FUN_004caa30();
    FUN_004cb590(0);
    *(undefined1 *)(DAT_00b333a0 + 0x69) = 1;
  }
  return;
}



void thunk_FUN_0046a9e0(char param_1)

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



uint FUN_004d6600(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *in_ECX;
  
  iVar1 = FUN_009832e6();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*in_ECX + 0x170))();
    uVar3 = FUN_0046e3f0(uVar2);
    return uVar3 & 0xff;
  }
  return 0xffffffff;
}



void FUN_004d6640(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x8c))(1);
  (**(code **)(*in_ECX + 0x90))(1);
  (**(code **)(*in_ECX + 0x150))(0);
  return;
}



undefined4 FUN_004d6670(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x40) == 0) {
    iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x18))();
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_004c9cf0();
  return uVar2;
}



undefined4 FUN_004d66b0(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x138))(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x9c))();
    return uVar2;
  }
  return 0;
}



undefined4 FUN_004d6700(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  if (DAT_00b35e50 != 0) {
    uVar1 = (**(code **)(*in_ECX + 0x170))();
    pcVar2 = (char *)FUN_0046d3f0(uVar1);
    if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) &&
       (iVar3 = ModelLoader_IsModelLoaded(pcVar2), iVar3 != 0)) {
      piVar4 = &DAT_00b35e50;
      do {
        if (*piVar4 == 0) {
          return 0;
        }
        if (*piVar4 == iVar3) {
          return 1;
        }
        piVar4 = piVar4 + 1;
      } while ((int)piVar4 < 0xb35ea4);
    }
  }
  return 0;
}



undefined4 FUN_004d6760(undefined1 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 4))(param_1);
  puVar1 = *(undefined4 **)(in_ECX[2] + iVar3 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(*in_ECX + 8))(param_1,puVar1[1]);
    if (cVar2 != '\0') break;
    puVar1 = (undefined4 *)*puVar1;
  }
  *param_1 = *(undefined1 *)(puVar1 + 2);
  return 1;
}



void FUN_004d67c0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bddf8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a4379c;
  FUN_00721440(&DAT_00a3ceb0);
  in_ECX[3] = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004d6830(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  
  fVar1 = *in_ECX;
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[2];
  fVar4 = in_ECX[3];
  fVar6 = fVar3 * fVar3 + fVar1 * fVar1;
  fVar8 = fVar4 * fVar4 + fVar2 * fVar2;
  fVar9 = fVar1 * fVar1 + fVar3 * fVar3;
  fVar10 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar5 = fVar8 + fVar6;
  auVar7._4_4_ = fVar6 + fVar8;
  auVar7._0_4_ = fVar5;
  auVar7._8_4_ = fVar10 + fVar9;
  auVar7._12_4_ = fVar9 + fVar10;
  auVar7 = rsqrtss(auVar7,auVar7);
  fVar6 = auVar7._0_4_;
  fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
  *in_ECX = fVar5 * fVar1;
  in_ECX[1] = fVar5 * fVar2;
  in_ECX[2] = fVar5 * fVar3;
  in_ECX[3] = fVar5 * fVar4;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d68a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d6900(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined1 auStack_3c [12];
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_3c;
  uVar1 = (**(code **)(*in_ECX + 0x8c))(local_30);
  FUN_0043f3e0(param_1,uVar1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d6950(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined1 auStack_3c [12];
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_3c;
  puVar1 = (undefined4 *)(**(code **)(*in_ECX + 0x90))(local_30);
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  param_1[3] = puVar1[2];
  *param_1 = puVar1[3];
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d69a0(float *param_1)

{
  int *in_ECX;
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_30;
  local_30 = *param_1 * 0.14287673;
  local_2c = param_1[1] * 0.14287673;
  local_28 = param_1[2] * 0.14287673;
  (**(code **)(*in_ECX + 0x94))(&local_30);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d6a00(undefined4 *param_1)

{
  int *in_ECX;
  undefined1 auStack_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_3c;
  local_30 = param_1[1];
  local_2c = param_1[2];
  local_28 = param_1[3];
  local_24 = *param_1;
  FUN_004d6830();
  (**(code **)(*in_ECX + 0x98))(&local_30);
  return;
}



float10 FUN_004d6a70(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    iVar2 = FUN_008a98d0();
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0x50);
    }
    return (float10)*(float *)(iVar2 + 0xb4);
  }
  return (float10)0.0;
}



void FUN_004d6ab0(char param_1)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_0089f570();
    if (param_1 != '\0') {
      FUN_008a6410();
      FUN_0089f570();
      return;
    }
    FUN_008a6440();
    FUN_0089f570();
  }
  return;
}



void FUN_004d6af0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    FUN_0089f570();
    FUN_008a6410();
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x54))(param_1);
    FUN_0089f570();
  }
  return;
}



void FUN_004d6b30(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    FUN_0089f570();
    FUN_008a6410();
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x58))(param_1);
    FUN_0089f570();
  }
  return;
}



void FUN_004d6b70(undefined4 param_1)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 8) + 0x50) + 0xb4) = param_1;
  }
  return;
}



float10 FUN_004d6b90(uint param_1)

{
  int in_ECX;
  
  if (param_1 < 2) {
    return (float10)*(float *)(in_ECX + 0x60 + param_1 * 4);
  }
  return (float10)0.0;
}



float10 FUN_004d6bc0(uint param_1)

{
  int in_ECX;
  
  if (param_1 < 2) {
    return (float10)*(float *)(in_ECX + 0x68 + param_1 * 4);
  }
  return (float10)0.0;
}



void FUN_004d6bf0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38) = 0x3f800000;
  if (((DAT_00b33b00 == 0) || ((*(uint *)(DAT_00b33b00 + 0x18) >> 2 & 1) == 0)) &&
     (puVar1 = *(undefined4 **)(in_ECX + 0x3c), puVar1 != (undefined4 *)0x0)) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  thunk_FUN_0046b090();
  return;
}



int FUN_004d6d40(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (*(byte *)(iVar1 + 4) == 0x17) {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    if (iVar1 != 0) {
      return iVar1 + 0x24;
    }
  }
  else {
    if (1 < *(byte *)(iVar1 + 4) - 0x23) {
      return 0;
    }
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    if (iVar1 != 0) {
      return iVar1 + 0x44;
    }
  }
  return 0;
}



void FUN_004d6db0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (((*(uint *)(in_ECX + 8) >> 0xe & 1) == 0) && ((char)param_1 != '\0')) {
    piVar1 = (int *)(*(code *)**(undefined4 **)(in_ECX + 0x18))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x90))(1);
    }
  }
  FUN_0046c640(param_1);
  return;
}



uint FUN_004d6e60(uint param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_ECX;
  
  if (param_1 == 0) {
    param_1 = FUN_004533f0(in_ECX,0);
  }
  if ((param_1 & 0x40000) != 0) {
    cVar1 = FUN_0041f830(8);
    return (uint)(cVar1 == '\0');
  }
  uVar2 = FUN_0041f830(8);
  return uVar2;
}



undefined4 FUN_004d6ea0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar1 + 4) == '#') {
      return 0x32;
    }
    if (*(char *)(iVar1 + 4) == '$') {
      return 0x33;
    }
  }
  return 0x31;
}



void FUN_004d6f00(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 0x100;
    return;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfffffeff;
  return;
}



uint FUN_004d6f20(void)

{
  uint uVar1;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 400))();
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffff00;
  }
  return (uint)in_ECX[2] >> 0x14 & 0xffffff01;
}



void FUN_004d6f40(char param_1)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 400))();
  if (cVar1 == '\0') {
    if (param_1 != '\0') {
      in_ECX[2] = in_ECX[2] | 0x100000;
      return;
    }
    in_ECX[2] = in_ECX[2] & 0xffefffff;
  }
  return;
}



void FUN_004d6f80(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 0x40000;
    return;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfffbffff;
  return;
}



undefined4 FUN_004d6fa0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar1 + 4) == '\x1e') {
      return 1;
    }
  }
  return 0;
}



uint FUN_004d6fd0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 8) >> 0xf & 0xffffff01;
}



void FUN_004d6fe0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 0x8000;
    return;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xffff7fff;
  return;
}



uint FUN_004d7000(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 8) >> 0x13 & 0xffffff01;
}



void FUN_004d7010(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 0x80000;
    return;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfff7ffff;
  return;
}



uint FUN_004d7030(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 8) >> 10 & 0xffffff01;
}



void FUN_004d7040(char param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  iVar2 = (**(code **)in_ECX[6])();
  if (param_1 == '\0') {
    uVar3 = in_ECX[2] & 0xfffffbff;
  }
  else {
    uVar3 = in_ECX[2] | 0x400;
  }
  in_ECX[2] = uVar3;
  if (param_1 == '\0') {
    if (iVar2 != 0) {
      cVar1 = FUN_004d7030();
      if (cVar1 != '\0') {
        FUN_004c9cf0();
        FUN_004f03d0(in_ECX);
        (**(code **)(*in_ECX + 0x90))(1);
      }
    }
  }
  else {
    (**(code **)(*in_ECX + 0x40))(1);
    if (iVar2 != 0) {
      cVar1 = FUN_004c97f0();
      if (cVar1 == '\0') {
        cVar1 = FUN_004d7030();
        if (cVar1 == '\0') {
          FUN_004c9cf0();
          FUN_004f03a0(in_ECX);
          return;
        }
      }
    }
  }
  return;
}



void FUN_004d70e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if ((((uint)in_ECX[2] >> 5 & 1) == 0) &&
     ((iVar1 = FUN_0041e210(0x12), iVar1 == 0 || (*(int *)(iVar1 + 0xc) == 0)))) {
    iVar1 = (**(code **)(*in_ECX + 0x128))();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*in_ECX + 0x170))();
    }
    iVar1 = FUN_009832e6(iVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
    if (iVar1 != 0) {
      FUN_0041f090(iVar1);
      uVar2 = FUN_004fbdc0();
      FUN_0041f130(uVar2);
    }
    iVar1 = FUN_004d6d40();
    if (iVar1 != 0) {
      FUN_00485e00();
      FUN_0048e060();
      return;
    }
  }
  return;
}



undefined1 FUN_004d7190(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined1 uVar3;
  
  uVar3 = 0;
  if (((uint)in_ECX[2] >> 5 & 1) != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if ((*(byte *)(iVar2 + 4) == 0x17) || (*(byte *)(iVar2 + 4) - 0x23 < 2)) {
    iVar2 = FUN_004d6d40();
    if (iVar2 != 0) {
      iVar2 = FUN_00485e00();
      if (iVar2 != 0) {
        cVar1 = FUN_0048e740(in_ECX);
        if (cVar1 != '\0') {
          uVar3 = 1;
        }
      }
    }
  }
  iVar2 = FUN_0041e900();
  if (iVar2 != 0) {
    iVar2 = FUN_0041e920();
    cVar1 = FUN_004fbe00(in_ECX,iVar2,0,0);
    if (cVar1 != '\0') {
      return 1;
    }
    if (iVar2 != 0) {
      (**(code **)(*in_ECX + 0x40))(0x4000000);
    }
  }
  return uVar3;
}



void FUN_004d7240(void)

{
  FUN_0041e900();
  return;
}



void FUN_004d7250(void)

{
  FUN_0041e920();
  return;
}



float10 FUN_004d7260(void)

{
  int iVar1;
  int *in_ECX;
  float local_4;
  
  local_4 = (float)in_ECX[0xe];
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar1 + 4) == '$') {
      iVar1 = (**(code **)(*in_ECX + 0x170))();
      local_4 = *(float *)(iVar1 + 0x114) * local_4;
    }
  }
  return (float10)local_4;
}



void FUN_004d72b0(void)

{
  FUN_0041e7b0();
  return;
}



uint FUN_004d72c0(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(uVar1 + 4) == ' ') {
    iVar2 = FUN_0041e210(0x17);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = FUN_004295d0();
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}



void FUN_004d7300(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*in_ECX + 0x170))(uVar1);
  if (*(char *)(iVar2 + 4) == ' ') {
    (**(code **)(*in_ECX + 0x40))(0x400000);
    iVar2 = FUN_0041e210(0x17);
    if (iVar2 == 0) {
      if ((char)param_2 != '\0') {
        iVar2 = FUN_00401f00(0x10);
        uVar3 = 0;
        uStack_4 = 0;
        if (iVar2 != 0) {
          uVar3 = FUN_0042a390();
        }
        uStack_4 = 0xffffffff;
        FUN_0041e0a0(uVar3);
        FUN_004295f0(param_1,param_2);
      }
    }
    else {
      FUN_004295f0(param_1,param_2);
      if (*(int *)(iVar2 + 0xc) == 0) {
        FUN_00422e20(iVar2,1);
        (**(code **)(*in_ECX + 0x44))(0x400000);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_004d73f0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar2 + 4) != ' ') {
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_0041e210(0x17);
  uVar3 = 0;
  do {
    cVar1 = FUN_004ae5b0(uVar3);
    if (cVar1 != '\0') {
      if (iVar2 == 0) {
        return uVar3;
      }
      cVar1 = FUN_004295d0(uVar3);
      if (cVar1 == '\0') {
        return uVar3;
      }
    }
    uVar3 = uVar3 + 1;
    if (0x1d < uVar3) {
      return 0xffffffff;
    }
  } while( true );
}



void FUN_004d7470(void)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if ((*(char *)(iVar1 + 4) == ' ') && (iVar1 = (**(code **)(*in_ECX + 0x170))(), iVar1 != 0)) {
    uVar2 = 0;
    do {
      FUN_004d7300(uVar2,0);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x1e);
  }
  return;
}



undefined4 FUN_004d74b0(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[7] != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar1 + 4) == ' ') {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_004d74d0(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[7] != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar1 + 4) == '$') {
      iVar1 = (**(code **)(*in_ECX + 0x170))();
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x104) == '\x04')) {
        return 1;
      }
    }
  }
  return 0;
}



undefined1 FUN_004d7510(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05c40,0);
  iVar2 = FUN_009832e6(uVar1);
  if (iVar2 == 0) {
    return 0xff;
  }
  iVar3 = FUN_0041e210(0x2c);
  if (iVar3 != 0) {
    return *(undefined1 *)(iVar3 + 0xc);
  }
  return *(undefined1 *)(iVar2 + 4);
}



float10 FUN_004d7570(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  float local_4;
  
  local_4 = -1.0;
  cVar1 = (**(code **)(*in_ECX + 400))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x284))(8);
    return (float10)iVar2;
  }
  uVar3 = (**(code **)(*in_ECX + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05cf4,0);
  piVar4 = (int *)FUN_009832e6(uVar3);
  if (piVar4 != (int *)0x0) {
    iVar2 = FUN_0041e210(0x2b);
    if (iVar2 != 0) {
      return (float10)*(float *)(iVar2 + 0xc);
    }
    iVar2 = (**(code **)(*piVar4 + 0x10))();
    local_4 = (float)iVar2;
    if (iVar2 < 0) {
      local_4 = local_4 + 4.2949673e+09;
    }
  }
  return (float10)local_4;
}



void FUN_004d7620(void)

{
  FUN_00428920();
  return;
}



void FUN_004d7630(void)

{
  FUN_0041e6b0();
  return;
}



int FUN_004d7640(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e6b0(uVar1);
  if (iVar2 == 0) {
    iVar3 = FUN_00401f00(0x1c);
    local_4 = 0;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_0042b590();
    }
    local_4 = 0xffffffff;
    FUN_004234d0(iVar2);
    (**(code **)(*in_ECX + 0x40))(0x100000);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



void FUN_004d76d0(void)

{
  int *in_ECX;
  
  FUN_0041f5e0();
  (**(code **)(*in_ECX + 0x44))(0x100000);
  return;
}



undefined4 * FUN_004d76f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0041e6b0();
  if (iVar1 == 0) {
    FUN_006899c0();
  }
  else {
    iVar1 = FUN_0042b410();
    if (iVar1 != 0) {
      iVar1 = FUN_0041e6b0();
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_006899c0();
        return puVar2;
      }
    }
  }
  return &DAT_00b3f9a8;
}



void FUN_004d7730(void)

{
  FUN_0041e6d0();
  return;
}



int FUN_004d7740(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0041e690();
  if (((iVar1 == 0) && (iVar2 = FUN_0041e6b0(), iVar2 != 0)) && (iVar2 = FUN_0042b410(), iVar2 != 0)
     ) {
    FUN_0042b410();
    iVar1 = FUN_0041e690();
    return iVar1;
  }
  return iVar1;
}



undefined4 FUN_004d7780(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041e690();
  if (iVar1 == 0) {
    iVar1 = FUN_0041e6b0();
    if (iVar1 != 0) {
      iVar1 = FUN_0042b410();
      if (iVar1 != 0) {
        FUN_0042b410();
        iVar1 = FUN_0041e690();
        if (iVar1 != 0) goto LAB_004d77bd;
      }
    }
    return 0;
  }
LAB_004d77bd:
  uVar2 = FUN_00429990();
  return uVar2;
}



int FUN_004d77d0(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  while (((iVar1 = FUN_0041e210(0x31), iVar1 == 0 &&
          (iVar2 = FUN_0041e6b0(unaff_EDI,unaff_ESI), iVar2 != 0)) &&
         (iVar2 = FUN_0042b410(), iVar2 != 0))) {
    FUN_0042b410();
  }
  return iVar1;
}



undefined4 FUN_004d7820(void)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar2 + 4) != '\x1e') {
    return 0;
  }
  piVar3 = (int *)(**(code **)(*in_ECX + 0x170))();
  if (piVar3 != (int *)0x0) {
    uVar1 = FUN_0041e990();
    uVar4 = (**(code **)(*piVar3 + 0x128))(uVar1);
    return uVar4;
  }
  return 0;
}



void FUN_004d7880(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  if (in_ECX != (int *)0xffffffbc) {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar2 + 4) == '\x1e') {
      piVar3 = (int *)(**(code **)(*in_ECX + 0x170))();
      if (piVar3 != (int *)0x0) {
        uVar1 = (**(code **)(*piVar3 + 0x124))(param_1);
        FUN_00423bd0(uVar1);
      }
    }
  }
  return;
}



undefined4 FUN_004d78e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != DAT_00b35eac) {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    if (iVar1 != DAT_00b35eb0) {
      return 0;
    }
  }
  uVar2 = FUN_00420d20();
  return uVar2;
}



void FUN_004d7920(void)

{
  FUN_004205a0();
  return;
}



void FUN_004d7930(void)

{
  FUN_00420840();
  return;
}



void FUN_004d7940(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1[7] == 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x170))();
    if (*(char *)(iVar1 + 4) != '$') {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x170))();
    if (iVar1 == 0) {
      return;
    }
    if (*(char *)(iVar1 + 0x104) != '\x04') {
      return;
    }
  }
  FUN_00420860(param_1);
  return;
}



void FUN_004d79a0(void)

{
  FUN_004203a0();
  return;
}



int FUN_004d79b0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0041e9b0();
  if (((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) || (*(char *)(iVar2 + 4) != '5')) {
    iVar2 = 0;
  }
  return iVar2;
}



int FUN_004d79d0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0041e9b0();
  if (((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) || (*(char *)(iVar2 + 4) != '0')) {
    iVar2 = 0;
  }
  return iVar2;
}



int FUN_004d79f0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_0041e9b0();
  if (iVar1 != 0) {
    return iVar1 + 4;
  }
                    /* WARNING: Could not recover jumptable at 0x004d7a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*in_ECX + 0x174))();
  return iVar1;
}



void FUN_004d7a20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041f4c0(param_1,param_2,param_3,param_4);
  return;
}



uint FUN_004d7a50(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    uVar2 = *(byte *)(iVar1 + 4) - 0x23;
    if (uVar2 < 3) {
      uVar2 = FUN_0041df60();
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_004d7a90(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (*(byte *)(iVar1 + 4) - 0x23 < 3) {
    if ((char)param_1 != '\0') {
      (**(code **)(*in_ECX + 0x40))();
      FUN_004209d0(param_1);
      return;
    }
    (**(code **)(*in_ECX + 0x44))(0x10000000);
    FUN_004209d0(param_1);
  }
  return;
}



undefined4 * FUN_004d7af0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_6c [36];
  undefined4 auStack_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_28;
  undefined1 auStack_24 [36];
  
  puVar1 = param_1;
  puVar3 = &DAT_00b26dc4;
  puVar7 = param_1;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  cVar2 = (**(code **)(*in_ECX + 400))();
  if (cVar2 == '\0') {
    FUN_0070fd30(in_ECX[8]);
    puVar3 = (undefined4 *)FUN_007100a0(auStack_48,auStack_6c);
    puVar7 = param_1;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_0070fd80(in_ECX[9]);
    puVar3 = (undefined4 *)FUN_007100a0(auStack_48,auStack_6c);
    puVar7 = param_1;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  FUN_0070fdd0(in_ECX[10]);
  puVar3 = (undefined4 *)FUN_007100a0(auStack_48,auStack_6c);
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  iVar5 = in_ECX[7];
  if (((*(char *)(iVar5 + 4) == '#') && (iVar5 != 0)) &&
     (iVar5 = *(int *)(iVar5 + 0xe8), iVar5 != 0)) {
    puVar3 = &DAT_00b3fadc;
    puVar7 = auStack_48;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar4 = FUN_00519d20();
    uStack_28 = 0;
    if (uVar4 < 2) {
      param_1 = *(undefined4 **)(iVar5 + 0x68 + uVar4 * 4);
    }
    else {
      param_1 = (undefined4 *)0x0;
    }
    auStack_48[0] = param_1;
    uStack_38 = param_1;
    if (uVar4 < 2) {
      uStack_28 = *(undefined4 *)(iVar5 + 0x60 + uVar4 * 4);
    }
    puVar3 = (undefined4 *)FUN_007100a0(auStack_24,auStack_48);
    puVar7 = puVar1;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return puVar1;
}



void FUN_004d7c50(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_48 [4];
  float local_38;
  float local_28;
  undefined1 local_24 [36];
  
  iVar3 = *(int *)(in_ECX + 0x1c);
  if (((iVar3 != 0) && (*(char *)(iVar3 + 4) == '#')) && (*(int *)(iVar3 + 0xe8) != 0)) {
    pfVar4 = (float *)&DAT_00b3fadc;
    pfVar5 = local_48;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    uVar1 = FUN_00519d20();
    fVar7 = (float10)FUN_004d6bc0(uVar1);
    if (param_3 == '\0') {
      local_48[0] = (float)fVar7;
      local_38 = local_48[0];
      fVar7 = (float10)FUN_004d6b90(uVar1);
    }
    else {
      local_48[0] = (float)((float10)1 / fVar7);
      local_38 = local_48[0];
      fVar7 = (float10)FUN_004d6b90(uVar1);
      fVar7 = (float10)1 / fVar7;
    }
    local_28 = (float)fVar7;
    puVar2 = (undefined4 *)FUN_007100a0(local_24,local_48);
    puVar6 = param_2;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



void FUN_004d7d10(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x144))();
  FUN_00977c50(3);
  puVar1 = (undefined4 *)in_ECX[0xf];
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0xf] = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  FUN_00977c50(2);
  return;
}



void FUN_004d7d80(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_004203c0();
  if (iVar1 != 0) {
    FUN_00424c00(in_ECX);
  }
  (**(code **)(*in_ECX + 0x8c))(1);
  (**(code **)(*in_ECX + 0x90))(1);
  (**(code **)(*in_ECX + 0x150))(0);
  return;
}



uint FUN_004d7dd0(void)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  
  uVar2 = (**(code **)(*in_ECX + 400))();
  if (((char)uVar2 != '\0') && (in_ECX[3] != 7)) {
    uVar3 = (**(code **)(*in_ECX + 0x170))();
    iVar4 = FUN_0046ca20(uVar3);
    fVar1 = (float)iVar4;
    if (iVar4 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    uVar2 = CONCAT31((int3)(CONCAT22((short)((uint)iVar4 >> 0x10),
                                     (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                                     (ushort)(fVar1 == 0.0) << 0xe) >> 8),1);
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}



float10 FUN_004d7e30(float *param_1)

{
  int in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00982c30(*param_1 - *(float *)(in_ECX + 0x2c),
                                param_1[1] - *(float *)(in_ECX + 0x30),
                                param_1[2] - *(float *)(in_ECX + 0x34));
  return (float10)(float)fVar1;
}



float10 FUN_004d7e90(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  float10 fVar5;
  float local_4;
  
  local_4 = 3.4028235e+38;
  if ((param_1 != (int *)0x0) &&
     (((((uint)param_1[2] >> 0xb & 1) == 0 || (param_2 != '\0')) &&
      (((uint)param_1[2] >> 5 & 1) == 0)))) {
    if (((param_1[0x10] == 0) || (*(int *)(in_ECX + 0x40) == 0)) ||
       ((cVar1 = FUN_004c97f0(), cVar1 == '\0' && (cVar1 = FUN_004c97f0(), cVar1 == '\0')))) {
      iVar2 = FUN_004d6670();
      iVar3 = FUN_004d6670();
      if (((iVar3 != iVar2) || (iVar2 = FUN_004d6670(), iVar2 == 0)) ||
         (iVar2 = FUN_004d6670(), iVar2 == 0)) goto LAB_004d7f36;
    }
    else if (*(int *)(in_ECX + 0x40) != param_1[0x10]) goto LAB_004d7f36;
    uVar4 = (**(code **)(*param_1 + 0x174))();
    fVar5 = (float10)FUN_004d7e30(uVar4);
    local_4 = (float)fVar5;
  }
LAB_004d7f36:
  return (float10)local_4;
}



undefined4 FUN_004d7f40(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x40) != 0) {
    uVar1 = FUN_004ca6f0();
    return uVar1;
  }
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x18))();
  if (iVar2 != 0) {
    iVar2 = FUN_004c9cf0();
    if (iVar2 != 0) {
      uVar1 = FUN_004ef150();
      return uVar1;
    }
  }
  return 0;
}



undefined4 FUN_004d7f80(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 400))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if (*(char *)(iVar2 + 4) == '#') {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_004d7fc0(void)

{
  FUN_0041e650();
  return;
}



void FUN_004d7fd0(void)

{
  FUN_0041e670();
  return;
}



void FUN_004d7fe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  LONG LVar3;
  
  piVar2 = (int *)FUN_00401f00(8);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = 0;
  }
  puVar1 = (undefined4 *)*piVar2;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *piVar2 = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  piVar2[1] = 0x3f800000;
  FUN_004267b0(piVar2);
  return;
}



void FUN_004d8050(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar1 = FUN_0041e650();
  iVar3 = 0;
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar2 + 4) == '\x1a') {
    iVar3 = (**(code **)(*in_ECX + 0x170))();
  }
  if ((iVar1 != 0) && (iVar3 != 0)) {
    FUN_004b22e0(iVar1,0);
  }
  iVar1 = FUN_0041e670();
  if ((iVar1 != 0) && (iVar3 != 0)) {
    FUN_004b22e0(iVar1,0);
  }
  return;
}



void FUN_004d80c0(char param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  undefined4 uVar4;
  
  if ((((uint)in_ECX[2] >> 5 & 1) == 0) && (((uint)in_ECX[2] >> 0xb & 1) == 0)) {
    if (param_1 == '\0') {
      piVar1 = (int *)FUN_0041e650();
    }
    else {
      piVar1 = (int *)FUN_0041e670();
    }
    if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, iVar2 != 0)) {
      uVar4 = 0;
      FUN_007b4280(0,iVar2,0);
      iVar2 = FUN_007c6ae0(iVar2,uVar4);
      iVar3 = (**(code **)(*in_ECX + 0x170))();
      if (iVar3 != 0) {
        FUN_007d3370(0);
        *(undefined1 *)(iVar2 + 0x120) = 0;
        *(undefined4 *)(iVar2 + 0x128) = *(undefined4 *)(iVar3 + 0x80);
        *(undefined4 *)(iVar2 + 0x124) = *(undefined4 *)(iVar3 + 0x84);
      }
    }
  }
  return;
}



void FUN_004d8150(char param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == '\0') {
    piVar1 = (int *)FUN_0041e650();
  }
  else {
    piVar1 = (int *)FUN_0041e670();
  }
  if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, iVar2 != 0)) {
    FUN_007b4280(0,iVar2);
    FUN_007c7dc0(iVar2);
  }
  return;
}



void FUN_004d8190(char param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  LONG LVar3;
  int iVar4;
  
  if (param_1 == '\0') {
    piVar2 = (int *)FUN_0041e650();
  }
  else {
    piVar2 = (int *)FUN_0041e670();
  }
  if (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    if (iVar4 != 0) {
      FUN_007b4280(0,iVar4);
      FUN_007c7dc0(iVar4);
      puVar1 = (undefined4 *)*piVar2;
      if (puVar1 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar1 + 1);
        if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *piVar2 = 0;
      }
    }
    if (param_1 != '\0') {
      FUN_0041f5c0();
      return;
    }
    FUN_0041f5b0();
  }
  return;
}



undefined4 FUN_004d8210(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_0041f6f0(param_1,in_ECX);
  return param_1;
}



undefined4 FUN_004d8230(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_0041f730(param_1,in_ECX);
  return param_1;
}



void FUN_004d8250(void)

{
  FUN_0041f810();
  return;
}



void FUN_004d8260(void)

{
  FUN_0041f830();
  return;
}



void FUN_004d8270(int param_1)

{
  char cVar1;
  uint uVar2;
  int *in_ECX;
  
  if (param_1 == 4) {
    uVar2 = FUN_004533f0(in_ECX,0);
    if ((uVar2 & 0x40000) == 0) {
      cVar1 = FUN_0041f830(8);
    }
    else {
      cVar1 = FUN_0041f830(8);
      cVar1 = cVar1 == '\0';
    }
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x44))();
      FUN_00423df0(4);
      return;
    }
    (**(code **)(*in_ECX + 0x40))(0x80000);
  }
  FUN_00423df0(param_1);
  return;
}



void FUN_004d82e0(int param_1)

{
  char cVar1;
  uint uVar2;
  int *in_ECX;
  
  if (param_1 == 4) {
    uVar2 = FUN_004533f0(in_ECX,0);
    if ((uVar2 & 0x40000) == 0) {
      cVar1 = FUN_0041f830(8);
    }
    else {
      cVar1 = FUN_0041f830(8);
      cVar1 = cVar1 == '\0';
    }
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x40))();
      FUN_00423e50(4);
      return;
    }
    (**(code **)(*in_ECX + 0x44))(0x80000);
  }
  FUN_00423e50(param_1);
  return;
}



void FUN_004d8350(void)

{
  FUN_00423eb0();
  return;
}



void FUN_004d8360(void)

{
  FUN_0041f860();
  return;
}



undefined4 FUN_004d8370(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 4) - 0x32 < 2) && (*(int **)(in_ECX + 0x58) != (int *)0x0)) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 8))();
    if (uVar1 < 2) {
      return *(undefined4 *)(*(int *)(in_ECX + 0x58) + 0x17c);
    }
  }
  uVar2 = FUN_0041e630();
  return uVar2;
}



int FUN_004d83b0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  code *pcVar4;
  
  cVar1 = (**(code **)(*in_ECX + 0x188))();
  if (cVar1 != '\0') {
    if (param_1 == 0) {
      pcVar4 = *(code **)(*in_ECX + 0x44);
    }
    else {
      pcVar4 = *(code **)(*in_ECX + 0x48);
    }
    (*pcVar4)(0x2000000);
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      uVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
      if ((uVar2 < 2) && (in_ECX[0x16] != 0)) {
        FUN_0064fff0(param_1);
        return param_1;
      }
    }
  }
  iVar3 = FUN_0041e630();
  if (iVar3 != param_1) {
    if (param_1 != 0) {
      FUN_0041e9c0(param_1);
      return param_1;
    }
    FUN_0041f590();
  }
  return param_1;
}



undefined4 FUN_004d8440(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if ((param_1 != 0) && (iVar2 = FUN_004511c0(), iVar2 == 0x31)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    local_30 = 0.0;
    param_2[3] = 0;
    local_2c = 0.0;
    param_2[4] = 0;
    param_2[5] = 0;
    local_28 = 0.97;
    param_2[6] = 0;
    local_18 = 0.0;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    param_2[7] = 0;
    iVar2 = FUN_004510b0();
    if (iVar2 != 0) {
      do {
        if (iVar2 < 0x454d414f) {
          if (iVar2 == 0x454d414e) {
            FUN_004510e0();
            iVar2 = FUN_0046b250();
            *param_2 = iVar2;
          }
          else {
            if (iVar2 == 0x41544144) {
              FUN_00450c20(&local_18,0x18);
              break;
            }
            if (iVar2 != 0x444f4c58) goto LAB_004d852d;
            FUN_00450c20(&local_30,0xc);
          }
        }
        else if (iVar2 == 0x4c435358) {
          FUN_004510e0();
        }
        else {
LAB_004d852d:
          if (iVar2 == 0x41544144) break;
        }
        cVar1 = FUN_0044fea0();
        if ((cVar1 == '\0') || (iVar2 = FUN_004510b0(), iVar2 == 0)) break;
      } while( true );
    }
    if (*param_2 != 0) {
      local_30 = local_30 * 0.5 + 0.5;
      if (!NAN(local_30) && 0.97 < local_30 != (local_30 == 0.97)) {
        local_30 = 0.97;
      }
      local_2c = local_2c * 0.5 + 0.5;
      if (0.97 <= local_2c) {
        local_2c = 0.97;
      }
      local_28 = local_28 * 0.5 + 0.5;
      if (0.97 <= local_28) {
        local_28 = 0.97;
      }
      param_2[1] = (int)(float)(int)ROUND(local_18);
      param_2[2] = (int)(float)(int)ROUND(local_14);
      param_2[3] = (int)(float)(int)ROUND(local_10);
      local_24 = local_30 + (float)param_2[1];
      local_20 = (float)param_2[2] + local_2c;
      param_2[1] = (int)local_24;
      local_1c = (float)param_2[3] + local_28;
      param_2[2] = (int)local_20;
      param_2[3] = (int)local_1c;
      fVar3 = (float10)FUN_00985a00(0x4059000000000000);
      param_2[5] = local_c;
      param_2[6] = local_8;
      param_2[7] = local_4;
      param_2[4] = (int)((float)fVar3 + 0.97);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_004d86d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_ECX;
  
  iVar1 = FUN_004d6d40();
  if (iVar1 != 0) {
    FUN_00485e00();
    FUN_004fbf90();
    FUN_00489c30(param_1,param_2,in_ECX,param_3,0,0);
    return 1;
  }
  return 0;
}



void FUN_004d8720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004d6d40();
  if (iVar1 != 0) {
    FUN_004fbf90();
    FUN_00485e00();
    FUN_0048f7c0(param_1,param_2,param_3);
  }
  return;
}



undefined4 FUN_004d8760(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_004d6d40();
  if (iVar1 != 0) {
    FUN_004fbf90();
    FUN_00485e00();
    uVar2 = FUN_0048fbc0();
  }
  return uVar2;
}



void FUN_004d87e0(void)

{
  int iVar1;
  
  iVar1 = FUN_004d6d40();
  if (iVar1 != 0) {
    FUN_00485e00();
    FUN_00491690();
    return;
  }
  return;
}



undefined4 FUN_004d8880(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004d6d40();
  if (iVar1 != 0) {
    FUN_00485e00();
    iVar1 = FUN_00485fa0(param_1,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_004d88c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004d6d40();
  if (iVar1 != 0) {
    FUN_00485e00();
    uVar2 = FUN_00487820();
    return uVar2;
  }
  return 0;
}



undefined4 FUN_004d88f0(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004d6d40();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != '\0') {
    uVar2 = FUN_00486a40(param_1);
    return uVar2;
  }
  FUN_00485e00();
  uVar2 = FUN_00486a40(param_1);
  return uVar2;
}



undefined4 FUN_004d8950(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004d6d40();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (param_1 != '\0') {
    uVar2 = FUN_0048d6c0();
    return uVar2;
  }
  FUN_00485e00();
  uVar2 = FUN_0048d6c0();
  return uVar2;
}



void FUN_004d89a0(int param_1,int param_2,int param_3)

{
  int *in_ECX;
  
  in_ECX[8] = param_1;
  in_ECX[9] = param_2;
  in_ECX[10] = param_3;
  (**(code **)(*in_ECX + 0x40))(4);
  return;
}



void FUN_004d89d0(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_ECX;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*in_ECX + 0x40);
  in_ECX[8] = param_1;
                    /* WARNING: Could not recover jumptable at 0x004d89e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_004d89f0(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_ECX;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*in_ECX + 0x40);
  in_ECX[9] = param_1;
                    /* WARNING: Could not recover jumptable at 0x004d8a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_004d8a10(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_ECX;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*in_ECX + 0x40);
  in_ECX[10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x004d8a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_004d8a30(int param_1,int param_2,int param_3)

{
  int *in_ECX;
  
  in_ECX[0xb] = param_1;
  in_ECX[0xc] = param_2;
  in_ECX[0xd] = param_3;
  (**(code **)(*in_ECX + 0x40))(4);
  return;
}



void FUN_004d8a60(int param_1)

{
  int *in_ECX;
  
  in_ECX[0xb] = in_ECX[0xb];
  in_ECX[0xc] = in_ECX[0xc];
  in_ECX[0xd] = param_1;
                    /* WARNING: Could not recover jumptable at 0x004d8a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x40))();
  return;
}



void FUN_004d8aa0(int param_1)

{
  code *pcVar1;
  char cVar2;
  int *in_ECX;
  
  if ((param_1 != 0) && (in_ECX[0x10] != param_1)) {
    (**(code **)(*in_ECX + 0x40))(4);
  }
  pcVar1 = *(code **)(*in_ECX + 400);
  in_ECX[0x10] = param_1;
  cVar2 = (*pcVar1)();
  if ((cVar2 != '\0') && ((int *)in_ECX[0x16] != (int *)0x0)) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x500))();
  }
  return;
}



int FUN_004d8af0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  
  iVar4 = in_ECX[0x10];
  if ((iVar4 == 0) || (cVar1 = FUN_004c97f0(), cVar1 == '\0')) {
    if ((in_ECX[0x10] == 0) && (iVar4 = (**(code **)in_ECX[6])(), iVar4 == 0)) {
      return 0;
    }
    iVar4 = FUN_004c9cf0();
    if (iVar4 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar2 + 4) == ')') {
      return iVar4;
    }
    uVar3 = (**(code **)(*in_ECX + 0x174))();
    iVar2 = FUN_004f0600(uVar3);
  }
  else {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar2 + 4) == ')') {
      return iVar4;
    }
    uVar3 = (**(code **)(*in_ECX + 0x174))();
    iVar2 = FUN_004cbbb0(uVar3);
  }
  if (iVar2 == 0) {
    return iVar4;
  }
  return iVar2;
}



uint FUN_004d8b90(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x40) != 0) {
    uVar1 = FUN_004c97f0();
    return uVar1;
  }
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x18))();
  if (iVar2 != 0) {
    uVar1 = FUN_004c9cf0();
    if (uVar1 != 0) {
      return uVar1 & 0xffffff00;
    }
  }
  return 1;
}



int FUN_004d8bc0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar8 = 0;
  ppuVar7 = &PTR_PTR_00b03cdc;
  ppuVar6 = &PTR_PTR_00b03850;
  uVar5 = 0;
  uVar2 = FUN_0041e210(0x39);
  iVar3 = FUN_009832e6(uVar2,uVar5,ppuVar6,ppuVar7,uVar8,uVar1);
  if (iVar3 == 0) {
    iVar4 = FUN_00401f00(0x24);
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      local_4 = iVar3;
      iVar3 = FUN_006a2fe0(in_ECX);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar3);
    (**(code **)(*in_ECX + 0x40))(0x200000);
    if (iVar3 == 0) {
      *unaff_FS_OFFSET = local_c;
      return 0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3 + 0xc;
}



int FUN_004d8c80(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = (**(code **)(*in_ECX + 0x170))(uVar1);
  iVar3 = FUN_009832e6(uVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b07f24,0);
  if (iVar3 != 0) {
    uVar8 = 0;
    ppuVar7 = &PTR_PTR_00b03af0;
    ppuVar6 = &PTR_PTR_00b03850;
    uVar5 = 0;
    uVar2 = FUN_0041e210(0x3a);
    iVar3 = FUN_009832e6(uVar2,uVar5,ppuVar6,ppuVar7,uVar8);
    if (iVar3 == 0) {
      iVar4 = FUN_00401f00(0x20);
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iStack_4 = iVar3;
        iVar3 = FUN_006a3310(in_ECX);
      }
      iStack_4 = 0xffffffff;
      FUN_0041e0a0(iVar3);
      (**(code **)(*in_ECX + 0x40))(0x200000);
      if (iVar3 == 0) goto LAB_004d8d54;
    }
    *unaff_FS_OFFSET = local_c;
    return iVar3 + 0xc;
  }
LAB_004d8d54:
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_004d8d70(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    uVar2 = FUN_00487d20();
    return uVar2;
  }
  return 0;
}



float * FUN_004d8d90(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int *in_ECX;
  undefined1 local_18 [8];
  undefined1 auStack_10 [12];
  float *pfStack_4;
  
  pfVar7 = (float *)(**(code **)(*in_ECX + 0x15c))(local_18);
  pfVar8 = (float *)(**(code **)(*in_ECX + 0x158))(auStack_10);
  fVar1 = *pfVar8;
  fVar2 = *pfVar7;
  fVar3 = pfVar7[1];
  fVar4 = pfVar8[1];
  fVar5 = pfVar7[2];
  fVar6 = pfVar8[2];
  pfVar7 = (float *)(**(code **)(*in_ECX + 0x174))();
  *pfStack_4 = *pfVar7 + (fVar1 + fVar2) * 0.5;
  pfStack_4[1] = pfVar7[1] + (fVar3 + fVar4) * 0.5;
  pfStack_4[2] = pfVar7[2] + (fVar5 + fVar6) * 0.5;
  return pfStack_4;
}



undefined4 FUN_004d8e40(void)

{
  int iVar1;
  
  iVar1 = FUN_00420190();
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x18);
  }
  return 0;
}



void FUN_004d8e60(int param_1)

{
  int *in_ECX;
  
  FUN_004201a0(in_ECX,param_1);
  if (param_1 != 0) {
    (**(code **)(*in_ECX + 0x40))();
    return;
  }
  (**(code **)(*in_ECX + 0x44))(0x4000);
  return;
}



undefined4 FUN_004d8ea0(void)

{
  char cVar1;
  int *piVar2;
  int *in_ECX;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (in_ECX[0x10] != 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x174))();
    iStack_c = *piVar2;
    iStack_8 = piVar2[1];
    iStack_4 = piVar2[2];
    cVar1 = FUN_004d1e10(&iStack_c,&iStack_10);
    if (cVar1 != '\0') {
      iStack_4 = iStack_10;
      in_ECX[0xb] = iStack_c;
      in_ECX[0xc] = iStack_8;
      in_ECX[0xd] = iStack_10;
      (**(code **)(*in_ECX + 0x40))(4);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_004d8f20(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  cVar1 = '\0';
  if (((param_1 == 0) || (iVar2 = (**(code **)(*in_ECX + 0x170))(), iVar2 == 0)) ||
     (iVar2 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar2 + 4) == '\x18')) {
    return 0;
  }
  iVar2 = FUN_006fa970(param_1);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 8) != 0)) {
    cVar1 = '\x01';
  }
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar2 + 4) == '\x1c') {
    cVar1 = FUN_005368b0(param_1);
  }
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(*in_ECX + 0x48))(8);
  return 1;
}



float10 FUN_004d8fb0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 local_c;
  
  local_c = 0.0;
  iVar2 = FUN_004d6d40();
  if (iVar2 != 0) {
    iVar2 = FUN_0041e6f0();
    if (iVar2 == 0) {
      FUN_004d6d40();
      fVar3 = (float10)FUN_004698b0();
    }
    else {
      fVar3 = (float10)FUN_00487e40();
    }
    local_c = (float)fVar3;
  }
  cVar1 = (**(code **)(*in_ECX + 400))();
  if ((cVar1 != '\0') && (in_ECX != DAT_00b333c4)) {
    fVar3 = (float10)FUN_005e0d20();
    if (fVar3 < (float10)local_c) {
      fVar3 = (float10)FUN_005e0d20();
      local_c = (float)fVar3;
    }
  }
  return (float10)local_c;
}



undefined4 FUN_004d9040(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004d6d40();
  if (iVar1 != 0) {
    FUN_00485e00();
    uVar2 = FUN_00487b60();
    return uVar2;
  }
  return 0;
}



void FUN_004d9070(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = FUN_0041e690();
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0x40))(0x40);
    return;
  }
  iVar1 = FUN_0041e6b0();
  if (iVar1 != 0) {
    iVar1 = FUN_0042b410();
    if (iVar1 != 0) {
      FUN_0042b410();
      iVar1 = FUN_0041e690();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_0042b410();
        (**(code **)(*piVar2 + 0x40))(0x40);
      }
    }
  }
  return;
}



void FUN_004d90d0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0045a500();
  if ((cVar1 != '\0') && (iVar2 = FUN_00420fd0(), iVar2 != 0)) {
    return;
  }
  FUN_00424de0(param_1);
  return;
}



void FUN_004d9310(char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 == '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if ((((iVar2 != 0) && (iVar2 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar2 + 4) == '\n'))
        && (*(int *)(DAT_00b33398 + 0x24) != 0)) && (cVar1 = FUN_006aca40(in_ECX[3]), cVar1 != '\0')
       ) {
      FUN_006ab890(in_ECX[3]);
      FUN_006ac9f0(in_ECX[3]);
    }
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if ((iVar2 != 0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) {
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if ((*(char *)(iVar2 + 4) != '\x12') &&
         ((iVar2 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar2 + 4) != '\x18' &&
          (iVar2 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar2 + 4) != '\x1a')))) {
        return;
      }
      iVar2 = FUN_0041e960();
      if (iVar2 != 0) {
        FUN_006b7240();
        FUN_006b73c0();
        FUN_0041e160(0x5b);
      }
    }
  }
  else {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (((iVar2 != 0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) &&
       (((uint)in_ECX[2] >> 0xb & 1) == 0)) {
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if (*(char *)(iVar2 + 4) == '\x12') {
        iVar2 = FUN_0041e960();
        if (iVar2 != 0) {
          cVar1 = FUN_006b73a0();
          if (cVar1 != '\0') {
            FUN_006b7240();
            FUN_006b73c0();
          }
          cVar1 = FUN_006b73a0();
          if (cVar1 == '\0') {
            FUN_0041e160(0x5b);
          }
        }
        iVar2 = (**(code **)(*in_ECX + 0x170))();
        uVar4 = *(undefined4 *)(iVar2 + 0x54);
        puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
        iVar2 = FUN_006ae4b0(*puVar3,puVar3[1],puVar3[2],uVar4,0,1,1);
        if (iVar2 != 0) {
          FUN_00423b10(iVar2);
        }
      }
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if ((*(char *)(iVar2 + 4) == '\x18') && (((uint)in_ECX[2] >> 0xd & 1) == 0)) {
        iVar2 = FUN_0041e960();
        if (iVar2 != 0) {
          cVar1 = FUN_006b73a0();
          if (cVar1 != '\0') {
            FUN_006b7240();
            FUN_006b73c0();
          }
          cVar1 = FUN_006b73a0();
          if (cVar1 == '\0') {
            FUN_0041e160(0x5b);
          }
        }
        iVar2 = (**(code **)(*in_ECX + 0x170))();
        uVar4 = *(undefined4 *)(iVar2 + 0x60);
        puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
        iVar2 = FUN_006ae4b0(*puVar3,puVar3[1],puVar3[2],uVar4,0,1,0);
        if (iVar2 != 0) {
          FUN_00423b10(iVar2);
        }
      }
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if ((*(char *)(iVar2 + 4) == '\x1a') && (((uint)in_ECX[2] >> 0xd & 1) == 0)) {
        iVar2 = FUN_0041e960();
        if (iVar2 != 0) {
          cVar1 = FUN_006b73a0();
          if (cVar1 != '\0') {
            FUN_006b7240();
            FUN_006b73c0();
          }
          cVar1 = FUN_006b73a0();
          if (cVar1 == '\0') {
            FUN_0041e160(0x5b);
          }
        }
        iVar2 = (**(code **)(*in_ECX + 0x170))();
        uVar4 = *(undefined4 *)(iVar2 + 0x8c);
        puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
        iVar2 = FUN_006ae4b0(*puVar3,puVar3[1],puVar3[2],uVar4,0,1,1);
        if (iVar2 != 0) {
          FUN_00423b10(iVar2);
        }
      }
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if (*(char *)(iVar2 + 4) == '\n') {
        iVar2 = FUN_0041e960();
        if ((iVar2 != 0) && (cVar1 = FUN_006b73a0(), cVar1 != '\0')) {
          FUN_006b7240();
          FUN_006b73c0();
        }
        iVar2 = in_ECX[3];
        puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
        uVar6 = 1;
        uVar5 = 0;
        uVar4 = (**(code **)(*in_ECX + 0x170))(iVar2,0,1);
        iVar2 = FUN_006ae4b0(*puVar3,puVar3[1],puVar3[2],uVar4,iVar2,uVar5,uVar6);
        if (iVar2 != 0) {
          FUN_006b73e0();
          FUN_00401f20(iVar2);
          return;
        }
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d96f0(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  char acStack_44 [4];
  undefined1 uStack_40;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)acStack_44;
  if ((((in_ECX[7] == 0) || (iVar2 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar2 + 4) != '$'))
      || (iVar2 = (**(code **)(*in_ECX + 0x170))(), iVar2 == 0)) ||
     (*(char *)(iVar2 + 0x104) != '\x04')) {
    iVar2 = FUN_006f94a0(param_1,param_2);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = -(int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(acStack_44 + iVar2)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  else {
    iVar2 = -(int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(acStack_44 + iVar2)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  uStack_40 = 0x32;
  FUN_006f94a0(param_1,acStack_44);
  return;
}



void FUN_004d97b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a46c14;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004d97d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a46c14;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004d9800(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5a48;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (undefined4 *)0x0) {
    InterlockedIncrement(param_1 + 1);
  }
  local_4 = 0;
  FUN_004b24f0(&param_1);
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if (LVar3 == 0) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_004d9890(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(ushort *)(iVar3 + 8) == 0xffff) {
    pcVar4 = *(char **)(iVar3 + 4);
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    return (int)pcVar4 - (int)pcVar1;
  }
  return (uint)*(ushort *)(iVar3 + 8);
}



void FUN_004d98e0(undefined4 param_1)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_0043f3e0(param_1,*(int *)(*(int *)(in_ECX + 8) + 0x50) + 0xd0);
    return;
  }
  FUN_0043f3e0(param_1,&DAT_00ba7a40);
  return;
}



void FUN_004d9920(undefined4 param_1)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_004d68a0(param_1,*(int *)(*(int *)(in_ECX + 8) + 0x50) + 0xe0);
    return;
  }
  FUN_004d68a0(param_1,&DAT_00ba7a40);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d9960(float *param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_38 [8];
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_38;
  local_30 = *param_1 * 0.14287673;
  local_2c = param_1[1] * 0.14287673;
  local_28 = param_1[2] * 0.14287673;
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    FUN_0089f570();
    FUN_008a6410();
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x54))(&local_30);
    FUN_0089f570();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d99e0(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_38;
  local_30 = *param_1;
  local_2c = param_1[1];
  local_28 = param_1[2];
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    FUN_0089f570();
    FUN_008a6410();
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x58))(&local_30);
    FUN_0089f570();
  }
  return;
}



void FUN_004d9a50(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x364) != 0) {
    FUN_0089f650(param_1,0);
  }
  return;
}



void FUN_004d9a70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5a8e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  in_ECX[6] = &PTR_LAB_00a45e54;
  *in_ECX = &PTR_FUN_00a46c44;
  in_ECX[6] = &PTR_FUN_00a46c38;
  in_ECX[0xf] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00422ee0();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 1) = 0x31;
  FUN_004d6bf0();
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0x10] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004d9b10(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x170))();
                    /* WARNING: Could not recover jumptable at 0x004d9b35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*piVar2 + 0x78))();
    return uVar3;
  }
  return 0;
}



undefined4 FUN_004d9b40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}



void FUN_004d9b50(void)

{
  undefined4 *puVar1;
  int *piVar2;
  LONG LVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  
  piVar2 = (int *)FUN_0041e650();
  if (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    if (iVar4 != 0) {
      FUN_007b4280(0,iVar4);
      FUN_007c7dc0(iVar4);
      puVar1 = (undefined4 *)*piVar2;
      if (puVar1 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar1 + 1);
        if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *piVar2 = 0;
      }
    }
    FUN_0041f5b0();
  }
  iVar4 = FUN_0041ff80();
  iVar5 = 0;
  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 2 & 1) != 0) {
    iVar5 = FUN_0041e210(0x40);
    if (iVar5 != 0) {
      FUN_00422e20(iVar5,0);
    }
  }
  FUN_0041dff0(1);
  if (iVar5 != 0) {
    FUN_0041e0a0(iVar5);
  }
  if (iVar4 != 0) {
    FUN_004247b0(iVar4);
  }
  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 2 & 1) == 0) {
    (**(code **)(*in_ECX + 0x150))(0);
  }
  thunk_FUN_0046b170();
  return;
}



void FUN_004d9c30(void)

{
  char cVar1;
  int in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0046b990();
  if ((*(uint *)(in_ECX + 8) >> 5 & 1) == 0) {
    local_1c = *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0xc);
    FUN_0046ae40(0x454d414e,&local_1c,4);
    FUN_00422f10();
    if (*(float *)(in_ECX + 0x38) != 1.0) {
      FUN_0046ba80(0x4c435358,*(undefined4 *)(in_ECX + 0x38));
    }
    cVar1 = FUN_0041f830(8);
    if (cVar1 != '\0') {
      FUN_0046ba10(0x4d414e4f);
    }
    local_18 = *(undefined4 *)(in_ECX + 0x2c);
    local_14 = *(undefined4 *)(in_ECX + 0x30);
    local_10 = *(undefined4 *)(in_ECX + 0x34);
    local_c = *(undefined4 *)(in_ECX + 0x20);
    local_8 = *(undefined4 *)(in_ECX + 0x24);
    local_4 = *(undefined4 *)(in_ECX + 0x28);
    FUN_0046ae40(0x41544144,&local_18,0x18);
  }
  FUN_0046b9f0();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

bool FUN_004d9d00(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  bool bVar4;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  char local_9;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  FUN_0046ab80(0);
  local_9 = '\0';
  local_10 = 0;
  FUN_00451210(in_ECX);
  FUN_0046ab80(0);
  if (((uint)in_ECX[2] >> 5 & 1) == 0) {
    do {
      iVar2 = FUN_004510b0();
      if (iVar2 == 0) break;
      if (iVar2 < 0x4c4f5359) {
        if (iVar2 != 0x4c4f5358) {
          if (iVar2 < 0x45535559) {
            if (iVar2 != 0x45535558) {
              if (0x44455358 < iVar2) {
                if (iVar2 < 0x444f4c59) {
                  if ((iVar2 == 0x444f4c58) || (iVar2 == 0x44475258)) goto LAB_004da017;
                  if (iVar2 != 0x44494445) goto LAB_004da008;
                  FUN_00450c20(&stack0xffffffcc,0x200);
                  (**(code **)(*in_ECX + 0xd8))(&stack0xffffffcc);
                }
                else {
                  if (iVar2 != 0x454d414e) goto LAB_004da008;
                  FUN_004510e0(&local_10);
                  FUN_0046bb20(&local_10,param_1);
                  local_14 = 0;
                  FUN_0055e000(local_10,&local_14);
                  iVar2 = FUN_009832e6(local_14,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
                  in_ECX[7] = iVar2;
                  if (iVar2 == 0) {
                    FUN_004a7a60("Missing object (%08X) for reference (%08X)",local_10,in_ECX[3]);
                    local_9 = '\x01';
                  }
                }
                goto LAB_004da021;
              }
              if (iVar2 != 0x44455358) {
                if (iVar2 < 0x434f4c59) {
                  if (iVar2 == 0x434f4c58) goto LAB_004da017;
                  if (iVar2 == 0x41544144) {
                    if (local_9 == '\0') {
                      (**(code **)(*in_ECX + 0x8c))(0);
                      FUN_00450c20(&local_2c,0x18);
                      in_ECX[0xb] = local_2c;
                      in_ECX[0xc] = local_28;
                      in_ECX[0xd] = local_24;
                      in_ECX[8] = local_20;
                      in_ECX[9] = local_1c;
                      in_ECX[10] = local_18;
                    }
                    goto LAB_004da021;
                  }
                  bVar4 = iVar2 == 0x424c4758;
                }
                else {
                  bVar4 = iVar2 == 0x43524d58;
                }
                goto LAB_004da006;
              }
            }
          }
          else if (iVar2 < 0x4b524d59) {
            if (iVar2 != 0x4b524d58) {
              if (iVar2 < 0x49435059) {
                if ((iVar2 == 0x49435058) || (iVar2 == 0x47484358)) goto LAB_004da017;
                bVar4 = iVar2 == 0x47525458;
              }
              else {
                bVar4 = iVar2 == 0x4b4e5258;
              }
              goto LAB_004da006;
            }
          }
          else {
            if (iVar2 == 0x4c435358) {
              FUN_004510e0(in_ECX + 0xe);
              goto LAB_004da021;
            }
            if (iVar2 != 0x4c444558) {
              bVar4 = iVar2 == 0x4c455458;
              goto LAB_004da006;
            }
          }
        }
LAB_004da017:
        FUN_004259e0(param_1,in_ECX);
      }
      else {
        if (0x50534558 < iVar2) {
          if (iVar2 < 0x544d4359) {
            if (iVar2 != 0x544d4358) {
              if (iVar2 < 0x54434159) {
                if ((iVar2 == 0x54434158) || (iVar2 == 0x524c4358)) goto LAB_004da017;
                bVar4 = iVar2 == 0x53524858;
              }
              else {
                bVar4 = iVar2 == 0x544c4858;
              }
              goto LAB_004da006;
            }
          }
          else if ((iVar2 != 0x544e4358) && (iVar2 != 0x54574358)) {
            bVar4 = iVar2 == 0x574c4358;
            goto LAB_004da006;
          }
          goto LAB_004da017;
        }
        if (iVar2 == 0x50534558) goto LAB_004da017;
        if (iVar2 < 0x4d495459) {
          if (iVar2 != 0x4d495458) {
            if (0x4d434358 < iVar2) {
              bVar4 = iVar2 == 0x4d434c58;
              goto LAB_004da006;
            }
            if ((iVar2 != 0x4d434358) && (iVar2 != 0x4c535058)) {
              if (iVar2 != 0x4d414e4f) goto LAB_004da008;
              FUN_00423df0(8);
              goto LAB_004da021;
            }
          }
          goto LAB_004da017;
        }
        if (iVar2 < 0x4e535059) {
          if ((iVar2 == 0x4e535058) || (iVar2 == 0x4d4c4358)) goto LAB_004da017;
          bVar4 = iVar2 == 0x4d545258;
        }
        else {
          bVar4 = iVar2 == 0x4e574f58;
        }
LAB_004da006:
        if (bVar4) goto LAB_004da017;
LAB_004da008:
        FUN_004a7a60("TESObjectREFR::Load abnormally terminated.\n\n");
      }
LAB_004da021:
      cVar1 = FUN_0044fea0();
    } while (cVar1 != '\0');
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (((cVar1 != '\0') && (((uint)in_ECX[2] >> 0xb & 1) != 0)) &&
       ((*(uint *)(DAT_00b33b00 + 0x18) >> 2 & 1) == 0)) {
      uVar3 = FUN_00659a00();
      FUN_00674550(in_ECX,uVar3);
      if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)in_ECX[0x16])(1);
      }
      in_ECX[0x16] = 0;
    }
    iVar2 = in_ECX[7];
  }
  else {
    iVar2 = FUN_0041ff80();
    FUN_0041dff0(1);
    if (iVar2 != 0) {
      FUN_004247b0(iVar2);
    }
    iVar2 = (**(code **)(*in_ECX + 0x170))();
  }
  return iVar2 != 0;
}



int * FUN_004da0a0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *in_ECX;
  int unaff_EBX;
  undefined4 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  
  uVar12 = 0;
  ppuVar11 = &PTR_PTR_00b03ad4;
  ppuVar10 = &PTR_PTR_00b03850;
  uVar9 = 0;
  uVar2 = FUN_0041e210(0x32);
  iVar3 = FUN_009832e6(uVar2,uVar9,ppuVar10,ppuVar11,uVar12);
  if (iVar3 != 0) {
    FUN_00422e20(iVar3,0);
  }
  uVar12 = 0;
  ppuVar11 = &PTR_PTR_00b04024;
  ppuVar10 = &PTR_PTR_00b03850;
  uVar9 = 0;
  uVar2 = FUN_0041e210(0x3f);
  iVar4 = FUN_009832e6(uVar2,uVar9,ppuVar10,ppuVar11,uVar12);
  if (iVar4 != 0) {
    FUN_00422e20(iVar4,0);
  }
  uVar12 = 0;
  ppuVar11 = &PTR_PTR_00b0404c;
  ppuVar10 = &PTR_PTR_00b03850;
  uVar9 = 0;
  uVar2 = FUN_0041e210(0x43);
  iVar5 = FUN_009832e6(uVar2,uVar9,ppuVar10,ppuVar11,uVar12);
  if (iVar5 != 0) {
    FUN_00422e20(iVar5,0);
  }
  uVar12 = 0;
  ppuVar11 = &PTR_PTR_00b04074;
  ppuVar10 = &PTR_PTR_00b03850;
  uVar9 = 0;
  uVar2 = FUN_0041e210(0x44);
  iVar6 = FUN_009832e6(uVar2,uVar9,ppuVar10,ppuVar11,uVar12);
  if (iVar6 != 0) {
    FUN_00422e20(iVar6,0);
  }
  uVar12 = 0;
  ppuVar11 = &PTR_PTR_00b0409c;
  ppuVar10 = &PTR_PTR_00b03850;
  uVar9 = 0;
  uVar2 = FUN_0041e210(0x58);
  iVar7 = FUN_009832e6(uVar2,uVar9,ppuVar10,ppuVar11,uVar12);
  if (iVar7 != 0) {
    FUN_00422e20(iVar7,0);
  }
  (**(code **)(*in_ECX + 0x194))(0);
  uVar12 = 0;
  ppuVar11 = &PTR_PTR_00b03054;
  ppuVar10 = &PTR_PTR_00b02f9c;
  uVar9 = 0;
  uVar2 = FUN_0046c360(0,param_1);
  piVar8 = (int *)FUN_009832e6(uVar2,uVar9,ppuVar10,ppuVar11,uVar12);
  if (iVar3 != 0) {
    FUN_0041e0a0(iVar3);
  }
  if (unaff_EBX != 0) {
    FUN_0041e0a0(unaff_EBX);
  }
  if (iVar4 != 0) {
    FUN_0041e0a0(iVar4);
  }
  if (iVar5 != 0) {
    FUN_0041e0a0(iVar5);
  }
  if (iVar6 != 0) {
    FUN_0041e0a0(iVar6);
  }
  (**(code **)(*in_ECX + 0x194))(iVar7);
  (**(code **)(*piVar8 + 0x150))(0);
  iVar3 = (**(code **)piVar8[6])();
  piVar8[2] = piVar8[2] & 0xfffffbff;
  if (iVar3 != 0) {
    cVar1 = FUN_004d7030();
    if (cVar1 != '\0') {
      FUN_004c9cf0();
      FUN_004f03d0(piVar8);
      (**(code **)(*piVar8 + 0x90))(1);
    }
  }
  return piVar8;
}



undefined1 * FUN_004da2a0(void)

{
  int iVar1;
  undefined1 *puVar2;
  int in_ECX;
  
  iVar1 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x1c),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
  if ((iVar1 == 0) || (puVar2 = *(undefined1 **)(iVar1 + 4), puVar2 == (undefined1 *)0x0)) {
    puVar2 = &DAT_00a2f7ec;
  }
  return puVar2;
}



void FUN_004da2d0(uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  iVar2 = FUN_00420260();
  if (iVar2 != 0) {
    cVar1 = FUN_00420340();
    if (cVar1 == '\0') {
      uVar3 = *(uint *)(iVar2 + 8) >> 0xb;
    }
    else {
      uVar3 = CONCAT31((uint3)(*(uint *)(iVar2 + 8) >> 0x13),~(byte)(*(uint *)(iVar2 + 8) >> 0xb));
    }
    FUN_0046aba0(uVar3 & 0xffffff01);
  }
  if ((((param_1 & 1) != 0) || (iVar2 != 0)) &&
     ((((uint)in_ECX[2] >> 0xb & 1) != 0 || (((uint)in_ECX[2] >> 5 & 1) != 0)))) {
    (**(code **)(*in_ECX + 0x150))(0);
  }
  if (((param_1 & 0x8000000) != 0) && (iVar2 = FUN_004d6d40(), iVar2 != 0)) {
    FUN_00485e00();
    FUN_004887c0();
  }
  cVar1 = (**(code **)(*in_ECX + 0x188))();
  if (((cVar1 == '\0') && (((param_1 & 0x40000000) != 0 || ((param_2 & 0x40000000) != 0)))) &&
     ((((uint)in_ECX[2] >> 0xb & 1) != 0 || (((uint)in_ECX[2] >> 5 & 1) != 0)))) {
    (**(code **)(*in_ECX + 0x150))(0);
  }
  if (((param_1 & 0x177577e0) == 0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 == '\0')) {
    return;
  }
  FUN_00425040(param_1,param_2,in_ECX,in_ECX[7]);
  return;
}



void FUN_004da3e0(uint param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_24 [36];
  
  if ((param_1 & 0x8000000) != 0) {
    iVar2 = FUN_004d6d40();
    if (iVar2 != 0) {
      FUN_00485e00();
      FUN_0048e060();
    }
  }
  iVar2 = in_ECX[0xf];
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
    *(undefined4 *)(iVar2 + 0x54) = *puVar3;
    *(undefined4 *)(iVar2 + 0x58) = puVar3[1];
    *(undefined4 *)(iVar2 + 0x5c) = puVar3[2];
    puVar3 = (undefined4 *)FUN_004d7af0(auStack_24);
    puVar6 = (undefined4 *)(iVar2 + 0x30);
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_0088cdc0(iVar2,1,0);
    FUN_00707370(0,0);
  }
  if ((param_1 & 0x80000) != 0) {
    uVar4 = param_1;
    if (param_1 == 0) {
      uVar4 = FUN_004533f0(in_ECX,0);
    }
    if ((uVar4 & 0x40000) == 0) {
      cVar1 = FUN_0041f830(8);
    }
    else {
      cVar1 = FUN_0041f830(8);
      cVar1 = cVar1 == '\0';
    }
    if (cVar1 == '\0') {
      FUN_004d8270(4);
    }
    else {
      FUN_004d82e0(4);
    }
  }
  if ((param_1 & 0x177577e0) == 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 == '\0') goto LAB_004da4e0;
  }
  FUN_00422b10(param_1,param_2,in_ECX);
LAB_004da4e0:
  in_ECX[2] = in_ECX[2] & 0xffdfffff;
  return;
}



void FUN_004da4f0(void)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  char *_Str1;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int *in_ECX;
  
  iVar1 = in_ECX[0xf];
  if (iVar1 == 0) goto LAB_004da5ae;
  _Str1 = (char *)FUN_00420fd0();
  if ((_Str1 == (char *)0x0) || (iVar5 = __stricmp(_Str1,PTR_s_Unequip_00b10568), iVar5 != 0)) {
    if ((*(short *)(iVar1 + 0xb6) != 0) &&
       ((**(int **)(iVar1 + 0xb0) != 0 && (iVar5 = FUN_00405790(0), *(int *)(iVar5 + 0xc) != 0)))) {
      iVar5 = FUN_00405790(0);
      iVar5 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar5 + 0xc));
      if ((iVar5 != 0) &&
         ((iVar5 = FUN_004715a0(PTR_s_Unequip_00b10568), iVar5 != 0 && (*(int *)(iVar5 + 0x44) != 0)
          ))) goto LAB_004da587;
    }
    cVar4 = FUN_00480820(iVar1);
    if (cVar4 == '\0') goto LAB_004da5ae;
  }
LAB_004da587:
  uVar6 = (**(code **)(*(int *)in_ECX[7] + 0x114))();
  (**(code **)(*in_ECX + 0x150))(uVar6);
  (**(code **)(*in_ECX + 0x148))();
LAB_004da5ae:
  iVar1 = in_ECX[0xf];
  if (iVar1 != 0) {
    if ((((*(short *)(iVar1 + 0xb6) != 0) && (iVar5 = **(int **)(iVar1 + 0xb0), iVar5 != 0)) &&
        (*(int *)(iVar5 + 0xc) != 0)) &&
       (iVar5 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar5 + 0xc)), iVar5 != 0)) {
      iVar7 = FUN_004715a0(PTR_DAT_00b102e0);
      iVar8 = FUN_004715a0(PTR_s_SpecialIdle_00b10328);
      FUN_004715c0(0);
      if ((iVar7 == 0) && (iVar8 == 0)) {
        *(ushort *)(iVar5 + 8) = *(ushort *)(iVar5 + 8) | 8;
        iVar7 = **(int **)(iVar5 + 0x40);
        if (iVar7 != 0) {
          FUN_00470b20(iVar7,0,0,0x3f800000,0,0);
          *(undefined4 *)(iVar7 + 0x48) = 0xff7fffff;
          FUN_00707370(*(undefined4 *)(iVar7 + 0x2c),1);
        }
        FUN_004715c0(0);
        *(ushort *)(iVar5 + 8) = *(ushort *)(iVar5 + 8) & 0xfff7;
      }
      else {
        *(ushort *)(iVar5 + 8) = *(ushort *)(iVar5 + 8) | 8;
        if (iVar7 != 0) {
          if (*(int *)(iVar7 + 0x44) == 0) {
            FUN_00470b20(iVar7,0,0,0x3f800000,0,0);
          }
          *(undefined4 *)(iVar7 + 0x48) = 0xff7fffff;
          FUN_00707370(*(undefined4 *)(iVar7 + 0x2c),1);
        }
        if (iVar8 != 0) {
          if (*(int *)(iVar8 + 0x44) == 0) {
            FUN_00470b20(iVar8,0,0,0x3f800000,0,0);
          }
          *(undefined4 *)(iVar8 + 0x48) = 0xff7fffff;
          FUN_00707370(*(undefined4 *)(iVar8 + 0x2c),1);
        }
      }
    }
    piVar2 = *(int **)(iVar1 + 0xc);
    if (piVar2 != (int *)0x0) {
      for (puVar9 = (undefined *)(**(code **)(*piVar2 + 4))(); puVar9 != (undefined *)0x0;
          puVar9 = *(undefined **)(puVar9 + 4)) {
        if (puVar9 == &DAT_00b3cac0) {
          bVar3 = 1;
          goto LAB_004da738;
        }
      }
      bVar3 = 0;
LAB_004da738:
      if ((-(uint)bVar3 & (uint)piVar2) != 0) {
        FUN_004715c0(0);
      }
    }
  }
  return;
}



short FUN_004da760(int param_1)

{
  char cVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  char *pcVar5;
  uint uVar6;
  short local_4;
  
  local_4 = 2;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) >> 3 & 1) != 0)) {
    uVar6 = 0;
    if (*(short *)(param_1 + 0x46) == 0) {
      return 2;
    }
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x40) + uVar6 * 4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x44) != 0)) {
        pcVar5 = *(char **)(iVar2 + 8);
        sVar3 = (short)pcVar5;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        sVar4 = FUN_0049f550();
        local_4 = local_4 + sVar4 + ((short)pcVar5 - (sVar3 + 1)) + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_1 + 0x46));
    return local_4;
  }
  return 2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004da7f0(uint param_1,float param_2)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int local_4;
  
  if (param_2 == -1.0) {
    param_2 = _DAT_00b33a30;
  }
  uVar7 = 0;
  local_4 = 0;
  puVar2 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_4,2);
  uVar5 = param_1;
  if (param_1 == 0) {
    *puVar2 = (undefined2)local_4;
    return;
  }
  if ((*(byte *)(param_1 + 8) >> 3 & 1) != 0) {
    if (*(short *)(param_1 + 0x46) == 0) {
      *puVar2 = (undefined2)local_4;
      return;
    }
    do {
      iVar3 = *(int *)(*(int *)(uVar5 + 0x40) + uVar7 * 4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x44) != 0)) {
        pcVar6 = *(char **)(iVar3 + 8);
        cVar4 = (char)pcVar6;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        param_1 = CONCAT31(param_1._1_3_,(char)pcVar6 - (cVar4 + '\x01'));
        FUN_0045b9a0(&param_1,1);
        FUN_0045b9a0(*(undefined4 *)(iVar3 + 8),param_1 & 0xff);
        FUN_0049f570(param_2);
        local_4 = local_4 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(uVar5 + 0x46));
  }
  *puVar2 = (undefined2)local_4;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004da8f0(int param_1,int param_2,float param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_12c [3];
  char local_129;
  float local_128;
  undefined1 local_121;
  float local_120;
  uint local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  byte local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_12c;
  local_118 = param_2;
  local_114 = param_1;
  if (param_3 == -1.0) {
    param_3 = _DAT_00b33a30;
  }
  FUN_004534d0(&local_11c,2);
  if (65000 < (ushort)local_11c) {
    local_11c = 0;
  }
  uVar9 = 0;
  if ((param_1 != 0) && (uVar9 = (uint)*(ushort *)(param_1 + 0x46), (short)local_11c != 0)) {
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 8;
  }
  local_129 = '\0';
  local_110 = 0;
  if ((short)local_11c != 0) {
    do {
      if ((0x14 < *(byte *)(DAT_00b33b00 + 0x7c)) && (*(byte *)(DAT_00b33b00 + 0x7c) < 0x17)) {
        FUN_004534d0(&local_10c,4);
        if (local_10c < 0x2b) {
          pcVar5 = (&PTR_DAT_00b102e0)[local_10c * 9];
          iVar2 = -(int)pcVar5;
          do {
            cVar3 = *pcVar5;
            pcVar5[(int)(local_108 + iVar2)] = cVar3;
            pcVar5 = pcVar5 + 1;
          } while (cVar3 != '\0');
        }
        else {
          _memset(local_108,0,0x104);
        }
      }
      if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x15) || (0x16 < *(byte *)(DAT_00b33b00 + 0x7c))) {
        FUN_004534d0(&local_121,1);
        _memset(local_108,0,0x104);
        FUN_004534d0(local_108,local_121);
      }
      if ((param_1 != 0) && (uVar11 = 0, uVar9 != 0)) {
        piVar10 = *(int **)(param_1 + 0x40);
LAB_004daa40:
        iVar2 = *piVar10;
        if (iVar2 == 0) goto LAB_004daa79;
        pbVar6 = *(byte **)(iVar2 + 8);
        pbVar8 = local_108;
        do {
          bVar1 = *pbVar6;
          bVar12 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_004daa70:
            iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_004daa75;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar12 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_004daa70;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_004daa75:
        if (iVar7 != 0) goto LAB_004daa79;
        if (*(int *)(iVar2 + 0x44) == 0) {
          FUN_006c9ba0(0,0,0x3f800000,0,0,0);
        }
        FUN_0049f5f0(param_3);
        if ((local_118 != 0) && (cVar3 = FUN_004808a0(local_118), cVar3 != '\0')) {
          local_120 = param_3 + *(float *)(iVar2 + 0x48);
          local_128 = param_3 - local_120;
          if (local_128 < 0.0) {
            local_128 = 0.0;
          }
          local_120 = local_120 / 20.0;
          if (local_120 < 0.0166666) {
            local_120 = 0.0166666;
          }
          for (; local_128 < param_3; local_128 = local_128 + local_120) {
            FUN_007073a0(local_128);
          }
        }
        local_129 = '\x01';
        param_1 = local_114;
        goto LAB_004daa9b;
      }
LAB_004daa87:
      uVar4 = FUN_0049f550();
      FUN_00452170(uVar4);
LAB_004daa9b:
      local_110 = local_110 + 1;
    } while (local_110 < (int)(local_11c & 0xffff));
    if ((local_129 != '\0') && (local_118 != 0)) {
      FUN_00707370(param_3,1);
    }
  }
  return;
LAB_004daa79:
  uVar11 = uVar11 + 1;
  piVar10 = piVar10 + 1;
  param_1 = local_114;
  if (uVar9 <= uVar11) goto LAB_004daa87;
  goto LAB_004daa40;
}



void FUN_004dacf0(int param_1,byte *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 auStack_1c [12];
  undefined1 auStack_10 [16];
  
  iVar1 = param_1;
  pbVar8 = *(byte **)((int)param_2 + 0xc);
  param_2 = pbVar8;
  piVar3 = (int *)FUN_00452a60();
  if (((iVar1 != *(int *)(pbVar8 + 0x10)) && (piVar3 != (int *)0x0)) &&
     ((char *)piVar3[2] != (char *)0x0)) {
    iVar6 = 6;
    bVar9 = true;
    pcVar5 = (char *)piVar3[2];
    pcVar7 = "Arrow";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar9 = *pcVar5 == *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar9);
    pbVar8 = param_2;
    if (bVar9) {
      return;
    }
  }
  cVar2 = (**(code **)(**(int **)(pbVar8 + 8) + 400))();
  if ((cVar2 != '\0') && (piVar3 != (int *)0x0)) {
    for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b35288) {
        return;
      }
    }
  }
  if ((*(int *)(iVar1 + 0x10) != 0) &&
     (iVar6 = FUN_00560920(&DAT_00ba7d84,*(int *)(iVar1 + 0x10)), iVar6 != 0)) {
    if (iVar1 != *(int *)(pbVar8 + 0x10)) {
      FUN_004d6900(auStack_1c);
      FUN_004d6950(auStack_10);
      FUN_0045b9a0(auStack_1c,0xc);
      FUN_0045b9a0(auStack_10,0x10);
    }
    if (*(int *)(iVar6 + 8) == 0) {
      bVar9 = false;
    }
    else {
      pcVar5 = (char *)FUN_008a63f0(&param_1);
      bVar9 = *pcVar5 != '\0';
    }
    param_2 = (byte *)CONCAT31(param_2._1_3_,bVar9);
    if ((*pbVar8 & 4) != 0) {
      FUN_0045b9a0(&param_2,1);
    }
    if ((char)param_2 != '\0') {
      FUN_004d98e0(auStack_1c);
      FUN_004d9920(auStack_10);
      FUN_0045b9a0(auStack_1c,0xc);
      FUN_0045b9a0(auStack_10,0xc);
    }
  }
  return;
}



void FUN_004dae60(int param_1,uint param_2)

{
  byte *pbVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [36];
  
  pbVar1 = *(byte **)(param_2 + 0xc);
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xffbf;
  uVar9 = *(uint *)(param_1 + 0x10);
  param_2 = uVar9;
  piVar3 = (int *)FUN_00452a60();
  if (((param_1 != *(int *)(pbVar1 + 0x10)) && (piVar3 != (int *)0x0)) &&
     ((char *)piVar3[2] != (char *)0x0)) {
    iVar6 = 6;
    bVar10 = true;
    pcVar7 = (char *)piVar3[2];
    pcVar8 = "Arrow";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar10 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar10);
    uVar9 = param_2;
    if (bVar10) {
      return;
    }
  }
  cVar2 = (**(code **)(**(int **)(pbVar1 + 8) + 400))();
  if ((cVar2 != '\0') && (piVar3 != (int *)0x0)) {
    for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b35288) {
        return;
      }
    }
  }
  if (uVar9 == 0) {
    return;
  }
  piVar3 = (int *)FUN_00560920(&DAT_00ba7d84,uVar9);
  if (piVar3 == (int *)0x0) {
    return;
  }
  iVar6 = (**(code **)(*piVar3 + 0x58))();
  if ((iVar6 != 0) && (piVar3[2] != 0)) {
    FUN_0089f570();
    FUN_008a6440();
    FUN_0089f570();
  }
  if ((*pbVar1 & 2) == 0) {
    FUN_004534d0(auStack_40,0xc);
    FUN_004534d0(auStack_34,0x10);
    FUN_004d69a0(auStack_40);
  }
  else {
    *pbVar1 = *pbVar1 & 0xfd;
    uVar5 = (**(code **)(**(int **)(pbVar1 + 8) + 0x174))();
    FUN_004d69a0(uVar5);
    uVar5 = FUN_004d7af0(auStack_24);
    FUN_007150f0(uVar5);
  }
  FUN_004d6a00(auStack_34);
  uVar9 = param_2;
  param_2 = param_2 & 0xffffff00;
  if ((*pbVar1 & 4) == 0) {
    if ((*pbVar1 & 1) == 0) goto LAB_004db03d;
    param_2 = CONCAT31(SUB43(uVar9,1),1);
  }
  else {
    FUN_004534d0(&param_2,1);
    if ((char)param_2 == '\0') {
LAB_004db03d:
      FUN_004d9960(&DAT_00b3f9a8);
      FUN_004d99e0(&DAT_00b3f9a8);
      if (iVar6 == 0) {
        return;
      }
      if (piVar3[2] == 0) {
        return;
      }
      FUN_0089f570();
      FUN_008a6440();
      FUN_0089f570();
      return;
    }
  }
  FUN_004534d0(auStack_40,0xc);
  FUN_004534d0(auStack_34,0xc);
  FUN_004d9960(auStack_40);
  FUN_004d99e0(auStack_34);
  if (piVar3[2] != 0) {
    FUN_0089f570();
    FUN_008a6410();
    FUN_0089f570();
  }
  return;
}



void FUN_004db080(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  undefined1 *puVar12;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [36];
  
  iVar6 = param_1[4];
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xffbf;
  iVar3 = FUN_00452a60();
  if ((iVar3 != 0) && (iVar3 = FUN_00452a60(), *(int *)(iVar3 + 8) != 0)) {
    iVar3 = FUN_00452a60();
    iVar8 = 6;
    bVar11 = true;
    pcVar9 = *(char **)(iVar3 + 8);
    pcVar10 = "Arrow";
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar11 = *pcVar9 == *pcVar10;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while (bVar11);
    if (bVar11) {
      return;
    }
  }
  piVar1 = *(int **)(param_2 + 0x10);
  cVar2 = (**(code **)(*piVar1 + 400))();
  if (cVar2 != '\0') {
    piVar4 = (int *)FUN_00452a60();
    if (piVar4 != (int *)0x0) {
      for (puVar5 = (undefined4 *)(**(code **)(*piVar4 + 4))(); puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        if (puVar5 == &DAT_00b35288) {
          return;
        }
      }
    }
    (**(code **)(*param_1 + 0x70))(1,0);
  }
  if ((iVar6 != 0) && (iVar6 = FUN_00560920(&DAT_00ba7d84,iVar6), iVar6 != 0)) {
    bVar11 = (bool)(~(byte)(*(uint *)(param_2 + 0x14) >> 1) & 1);
    if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x2b) {
      bVar11 = param_1 != *(int **)(param_2 + 0xc);
    }
    if (bVar11 == false) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) & 0xfffffffd;
      uVar7 = (**(code **)(*piVar1 + 0x174))();
      FUN_004d69a0(uVar7);
      uVar7 = FUN_004d7af0(auStack_24);
      FUN_007150f0(uVar7);
      puVar12 = auStack_34;
    }
    else {
      FUN_004534d0(auStack_68,0xc);
      FUN_004534d0(auStack_44,0x10);
      FUN_004d69a0(auStack_68);
      puVar12 = auStack_44;
    }
    FUN_004d6a00(puVar12);
    if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
      FUN_004d9960(&DAT_00b3f9a8);
      FUN_004d99e0(&DAT_00b3f9a8);
    }
    else {
      FUN_004534d0(auStack_5c,0xc);
      FUN_004534d0(auStack_50,0xc);
      FUN_004d9960(auStack_5c);
      FUN_004d99e0(auStack_50);
      if (*(int *)(iVar6 + 8) != 0) {
        FUN_0089f570();
        FUN_008a6410();
        FUN_0089f570();
        return;
      }
    }
  }
  return;
}



undefined4 FUN_004db260(char param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5ad1;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_c;
  *unaff_FS_OFFSET = &local_c;
  if (param_1 == '1') {
    iVar2 = FUN_00401f00(0x58,uVar1);
    local_4 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_004d9a70();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
  }
  else if (param_1 == '2') {
    iVar2 = FUN_00401f00(0x10c,uVar1);
    local_4 = 1;
    if (iVar2 != 0) {
      uVar3 = FUN_0060e540(param_2);
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
  }
  else if (param_1 == '3') {
    iVar2 = FUN_00401f00(0x108,uVar1);
    local_4 = 2;
    if (iVar2 != 0) {
      uVar3 = FUN_00625100(param_2);
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_004db360(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  uint uVar2;
  undefined4 uVar3;
  
  if ((char)param_1 == '\0') {
    uVar2 = *(uint *)(in_ECX + 8) & 0xfffffdff;
  }
  else {
    uVar2 = *(uint *)(in_ECX + 8) | 0x200;
  }
  puVar1 = (undefined4 *)FUN_0041e650();
  if (puVar1 != (undefined4 *)0x0) {
    if ((char)param_1 == '\0') {
      FUN_007b84e0();
    }
    uVar3 = *puVar1;
    FUN_007b4280(0,uVar3,param_1);
    FUN_007c7030(uVar3,param_1);
  }
  *(uint *)(in_ECX + 8) = uVar2;
  return;
}



undefined4 FUN_004db3c0(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (iVar3 == 0) {
    return 0;
  }
  switch(*(undefined4 *)(iVar3 + 0xc)) {
  case 4:
  case 5:
  case 6:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x34:
  case 0x3b:
    break;
  default:
    bVar1 = *(byte *)(iVar3 + 4);
    if (((bVar1 != 0x29) &&
        ((1 < bVar1 - 0x23 || ((~(byte)(*(uint *)(iVar3 + 0x28) >> 9) & 1) == 0)))) &&
       ((bVar1 != 0x18 ||
        ((cVar2 = FUN_004b78e0(), cVar2 == '\0' && (iVar4 = FUN_0041e6b0(), iVar4 == 0)))))) {
      if (*(char *)(iVar3 + 4) != '$') {
        return 0;
      }
      iVar3 = FUN_009832e6(iVar3,0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c,0);
      if (*(char *)(iVar3 + 0x104) != '\x04') {
        return 0;
      }
    }
  }
  return 1;
}



uint FUN_004db4a0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int unaff_FS_OFFSET;
  
  iVar2 = FUN_0046b680(0xffffffff);
  if ((iVar2 != 0) &&
     (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x184) == '\0')) {
    cVar1 = FUN_0045a500();
    if (((cVar1 == '\0') || ((*(uint *)(DAT_00b33b00 + 0x18) >> 4 & 1) != 0)) &&
       (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) {
      cVar1 = FUN_0044faa0();
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return *(uint *)(in_ECX + 8) >> 10 & 0xffffff01;
}



void FUN_004db520(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *_Dest;
  int *in_ECX;
  float10 fVar4;
  double dVar5;
  undefined4 uVar6;
  float fStack00000004;
  
  if ((((int *)in_ECX[7] == (int *)0x0) ||
      (cVar2 = (**(code **)(*(int *)in_ECX[7] + 0xf4))(), cVar2 == '\0')) ||
     (iVar3 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar3 + 4) == ')')) {
    _Dest = (char *)FUN_007616d0();
    _sprintf(_Dest,"%.2f");
    dVar5 = _atof(_Dest);
    fStack00000004 = (float)dVar5;
    if (0.01 <= fStack00000004) {
      if (10.0 < fStack00000004) {
        fStack00000004 = 10.0;
      }
    }
    else {
      fStack00000004 = 0.01;
    }
    pcVar1 = *(code **)(*in_ECX + 0x40);
    in_ECX[0xe] = (int)fStack00000004;
    (*pcVar1)();
    fVar4 = (float10)(**(code **)(*in_ECX + 0xec))();
    iVar3 = (**(code **)(*in_ECX + 0x154))();
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0x60) = ABS((float)fVar4);
      FUN_00707370(0);
      FUN_00707370(0);
      cVar2 = (**(code **)(*in_ECX + 400))();
      if (cVar2 != '\0') {
        iVar3 = FUN_0065a2c0();
        uVar6 = 0;
        if (iVar3 != 0) {
          uVar6 = *(undefined4 *)(iVar3 + 0x32c);
        }
        (**(code **)(*in_ECX + 0x1c8))();
        if ((int *)in_ECX[0x16] != (int *)0x0) {
          (**(code **)(*(int *)in_ECX[0x16] + 400))();
        }
        (**(code **)(*in_ECX + 0x148))();
        iVar3 = FUN_0065a2c0();
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x32c) = uVar6;
        }
        if (in_ECX == DAT_00b333c4) {
          FUN_00666b50();
        }
      }
    }
  }
  return;
}



int FUN_004db6b0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  iVar2 = FUN_0041e7b0();
  cVar1 = (**(code **)(*in_ECX + 400))();
  if ((cVar1 == '\0') && (iVar2 == 0)) {
    iVar3 = FUN_0041e6b0();
    if ((iVar3 != 0) && (iVar3 = FUN_0042b410(), iVar3 != 0)) {
      FUN_0042b410();
      iVar3 = FUN_0041e7b0();
      iVar2 = 0;
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    if ((in_ECX[7] != 0) && (iVar3 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar3 + 4) == ' '))
    {
      return iVar2;
    }
    iVar3 = (**(code **)(*in_ECX + 0x170))();
    if (((*(char *)(iVar3 + 4) != '\x18') &&
        (iVar3 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar3 + 4) != '\x12')) &&
       (in_ECX[0x10] != 0)) {
      iVar2 = FUN_004ca970();
    }
  }
  return iVar2;
}



uint FUN_004db760(void)

{
  uint uVar1;
  int *in_ECX;
  
  uVar1 = FUN_004db6b0();
  if (uVar1 == 0) {
    uVar1 = (**(code **)(*in_ECX + 0x128))();
    if (uVar1 == 0) {
      uVar1 = (**(code **)(*in_ECX + 0x170))();
    }
    if (*(char *)(uVar1 + 4) == '#') {
      uVar1 = FUN_00467560();
      return uVar1;
    }
  }
  else {
    if (*(char *)(uVar1 + 4) == '\x06') {
      return (uint)(*(byte *)(uVar1 + 0x34) >> 1 & 1);
    }
    if (*(char *)(uVar1 + 4) == '#') {
      uVar1 = FUN_00467560();
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}



int FUN_004db7d0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = FUN_0041e7d0();
  if (iVar1 == 0) {
    iVar2 = FUN_0041e6b0();
    if ((iVar2 != 0) && (iVar2 = FUN_0042b410(), iVar2 != 0)) {
      FUN_0042b410();
      iVar2 = FUN_0041e7d0();
      iVar1 = 0;
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    if (*(int *)(in_ECX + 0x40) != 0) {
      iVar1 = FUN_004ca980();
      return iVar1;
    }
  }
  return iVar1;
}



int FUN_004db830(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_0041e7f0();
  if (iVar1 == -1) {
    iVar1 = FUN_0041e6b0();
    if ((iVar1 != 0) && (iVar1 = FUN_0042b410(), iVar1 != 0)) {
      FUN_0042b410();
      iVar1 = FUN_0041e7f0();
      if (iVar1 != -1) {
        return iVar1;
      }
    }
    if ((*(int *)(in_ECX + 0x40) != 0) && (iVar1 = FUN_004ca990(), iVar1 != -1)) {
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



void FUN_004db890(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  FUN_00423660(param_1);
  (**(code **)(*in_ECX + 0x40))(0x80);
  iVar1 = FUN_0041e6b0();
  if (iVar1 != 0) {
    iVar1 = FUN_0042b410();
    if (iVar1 != 0) {
      FUN_0042b410();
      FUN_00423660(0);
      piVar2 = (int *)FUN_0042b410();
                    /* WARNING: Could not recover jumptable at 0x004db8f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x40))();
      return;
    }
  }
  return;
}



void FUN_004db900(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  FUN_00423660(0);
  FUN_00423720(0);
  FUN_004237e0(0xffffffff);
  (**(code **)(*in_ECX + 0x40))(0x380);
  iVar1 = FUN_0041e6b0();
  if (iVar1 != 0) {
    iVar1 = FUN_0042b410();
    if (iVar1 != 0) {
      FUN_0042b410();
      FUN_00423660(0);
      FUN_0042b410();
      FUN_00423720(0);
      FUN_0042b410();
      FUN_004237e0(0xffffffff);
      piVar2 = (int *)FUN_0042b410();
      (**(code **)(*piVar2 + 0x40))(0x380);
    }
  }
  return;
}



bool FUN_004db9a0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar1 + 4) == ' ') {
    iVar1 = FUN_004d73f0();
    return iVar1 != -1;
  }
  return false;
}



undefined1 FUN_004db9d0(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined1 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [36];
  
  uVar5 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar1 + 4) == ' ') {
    iVar1 = (**(code **)(*in_ECX + 0x154))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*in_ECX + 0x170))();
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*in_ECX + 0x154))();
        iVar1 = FUN_006fb0a0(uVar2);
        if ((iVar1 != 0) && (param_1 < *(ushort *)(iVar1 + 0x18))) {
          puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + param_1 * 0x10);
          *param_2 = *puVar3;
          param_2[1] = puVar3[1];
          param_2[2] = puVar3[2];
          param_2[3] = puVar3[3];
          uStack_30 = *param_2;
          uStack_28 = param_2[2];
          uStack_2c = param_2[1];
          uVar5 = 1;
          uVar2 = (**(code **)(*in_ECX + 0x174))(1,&uStack_30,param_2);
          uVar4 = FUN_004d7af0(auStack_24);
          FUN_00710580(uVar4,uVar2);
          FUN_006faee0((float)*(ushort *)(param_2 + 3) / 1000.0 + (float)in_ECX[10]);
        }
      }
    }
  }
  return uVar5;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 FUN_004dbae0(float *param_1,char param_2,char param_3,undefined4 *param_4,int *param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *in_ECX;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  float10 fVar13;
  uint auStack_c0068 [196602];
  uint auStack_80 [3];
  uint uStack_74;
  undefined1 local_64 [36];
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  byte local_11;
  float local_10;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_9 = 0;
  uStack_74 = 0x4dbb06;
  local_24 = in_ECX;
  iVar4 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar4 + 4) != ' ') {
    return local_9;
  }
  uStack_74 = 0x4dbb1c;
  iVar4 = (**(code **)(*in_ECX + 0x154))();
  if (iVar4 == 0) {
    uStack_74 = 0x4dbda1;
    puVar7 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
    *param_4 = *puVar7;
    param_4[1] = puVar7[1];
    uStack_74 = 0;
    param_4[2] = puVar7[2];
    *(undefined1 *)((int)param_4 + 0xe) = 0;
    auStack_80[2] = 0x4dbdc3;
    FUN_006faee0();
    *param_5 = -1;
    return 1;
  }
  uStack_74 = 0x4dbb30;
  local_40 = (**(code **)(*in_ECX + 0x170))();
  uVar8 = 0;
  if (local_40 == 0) {
    return local_9;
  }
  if (param_2 != '\0') {
    uStack_74 = 0x4dbb4b;
    cVar3 = FUN_004ae590();
    if (cVar3 != '\0') goto LAB_004dbb67;
  }
  if (param_3 == '\0') {
    return local_9;
  }
  uStack_74 = 0x4dbb5f;
  cVar3 = FUN_004ae5a0();
  if (cVar3 == '\0') {
    return local_9;
  }
LAB_004dbb67:
  uStack_74 = 0x4dbb73;
  uStack_74 = (**(code **)(*in_ECX + 0x154))();
  auStack_80[2] = 0x4dbb79;
  local_20 = FUN_006fb0a0();
  if (local_20 == 0) {
    return local_9;
  }
  uVar10 = (uint)*(ushort *)(local_20 + 0x18);
  if (uVar10 == 0) {
    return local_9;
  }
  local_10 = (float)(uVar10 * 0xc);
  uStack_74 = 0x4dbba5;
  puVar7 = (undefined4 *)(local_64 + uVar10 * -0xc + -0xc);
  local_18 = local_64 + uVar10 * -0xc + -0xc;
  local_2c = local_64 + uVar10 * -0x10 + -0xc;
  (&uStack_74)[uVar10 * -3] = 0x4dbbb4;
  uVar12 = 0;
  if (uVar10 == 0) {
    return local_9;
  }
  local_1c = 0;
  local_28 = (undefined1 *)uVar10;
  do {
    (&uStack_74)[uVar10 * -4] = uVar8;
    auStack_80[uVar10 * -4 + 2] = 0x4dbbd0;
    cVar3 = FUN_004ae5b0();
    if (cVar3 != '\0') {
      (&uStack_74)[uVar10 * -4] = uVar8;
      auStack_80[uVar10 * -4 + 2] = 0x4dbbdd;
      cVar3 = FUN_004d72c0();
      if (cVar3 == '\0') {
        local_30 = (uint)*(byte *)(local_1c + 0xe + *(int *)(local_20 + 0x10));
        (&uStack_74)[uVar10 * -4] = local_30;
        auStack_80[uVar10 * -4 + 2] = 0x4dbbf8;
        cVar3 = FUN_004ae5e0();
        if ((cVar3 == '\0') || (param_2 == '\0')) {
          (&uStack_74)[uVar10 * -4] = local_30;
          auStack_80[uVar10 * -4 + 2] = 0x4dbc0e;
          cVar3 = FUN_004ae5d0();
          if ((cVar3 == '\0') || (param_3 == '\0')) goto LAB_004dbc41;
        }
        puVar5 = (undefined4 *)(*(int *)(local_20 + 0x10) + local_1c);
        uVar12 = uVar12 + 1;
        *puVar7 = *puVar5;
        puVar7[1] = puVar5[1];
        uVar6 = puVar5[2];
        *(uint *)(local_2c + uVar12 * 4 + -4) = uVar8;
        puVar7[2] = uVar6;
        puVar7 = puVar7 + 3;
      }
    }
LAB_004dbc41:
    puVar2 = local_18;
    local_1c = local_1c + 0x10;
    uVar8 = uVar8 + 1;
    if (local_28 <= uVar8) {
      if (uVar12 == 0) {
        return local_9;
      }
      (&uStack_74)[uVar10 * -4] = 0x4dbc61;
      iVar4 = -(int)local_10;
      pcVar1 = *(code **)(*local_24 + 0x174);
      *(undefined1 **)((int)&uStack_74 + iVar4 + uVar10 * -0x10) =
           local_64 + iVar4 + uVar10 * -0x10 + -0xc;
      *(undefined1 **)((int)auStack_80 + iVar4 + uVar10 * -0x10 + 8) = puVar2;
      *(uint *)((int)auStack_80 + iVar4 + uVar10 * -0x10 + 4) = uVar12;
      puVar9 = (undefined1 *)((int)auStack_80 + iVar4 + uVar10 * -0x10);
      local_28 = local_64 + iVar4 + uVar10 * -0x10 + -0xc;
      *(undefined4 *)((int)auStack_80 + iVar4 + uVar10 * -0x10) = 0x4dbc7b;
      uVar6 = (*pcVar1)();
      *(undefined4 *)(puVar9 + -4) = uVar6;
      *(undefined1 **)(puVar9 + -8) = local_64;
      *(undefined4 *)(puVar9 + -0xc) = 0x4dbc87;
      uVar6 = FUN_004d7af0();
      *(undefined4 *)(puVar9 + -8) = uVar6;
      *(undefined4 *)(puVar9 + -0xc) = 0x4dbc8d;
      FUN_00710580();
      local_18 = (undefined1 *)0x7f7fffff;
      local_11 = 0x7f;
      if (uVar12 != 0) {
        pfVar11 = (float *)(local_64 + iVar4 + uVar10 * -0x10 + -4);
        uVar8 = 0;
        do {
          local_3c = *param_1 - pfVar11[-2];
          local_38 = param_1[1] - pfVar11[-1];
          local_34 = param_1[2] - *pfVar11;
          local_10 = local_34 * local_34 + local_3c * local_3c + local_38 * local_38;
          *(undefined4 *)(puVar9 + 8) = 0x4dbcf0;
          fVar13 = (float10)FUN_00982c30();
          local_10 = (float)fVar13;
          if (local_10 < (float)local_18) {
            local_18 = (undefined1 *)local_10;
            local_11 = (byte)uVar8;
          }
          uVar8 = uVar8 + 1;
          pfVar11 = pfVar11 + 3;
        } while (uVar8 < uVar12);
        if (local_11 != 0x7f) {
          iVar4 = *(int *)(local_2c + (uint)local_11 * 4);
          *param_5 = iVar4;
          *(undefined1 *)((int)param_4 + 0xe) =
               *(undefined1 *)(iVar4 * 0x10 + 0xe + *(int *)(local_20 + 0x10));
          puVar7 = (undefined4 *)(local_28 + (uint)local_11 * 0xc);
          *param_4 = *puVar7;
          param_4[1] = puVar7[1];
          param_4[2] = puVar7[2];
          local_10 = (float)(uint)*(ushort *)(*param_5 * 0x10 + 0xc + *(int *)(local_20 + 0x10));
          *(undefined4 **)(puVar9 + 8) = param_4;
          local_10 = (float)(int)local_10 / 1000.0 + (float)local_24[10];
          *(float *)(puVar9 + 8) = local_10;
          *(undefined4 *)(puVar9 + 4) = 0x4dbd95;
          FUN_006faee0();
          return 1;
        }
        return local_9;
      }
      return local_9;
    }
  } while( true );
}



undefined1 * FUN_004dbdf0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_0041e690();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)FUN_00401f00(0xc);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1[8] = 0;
      FUN_0041eaf0(puVar1);
      return puVar1;
    }
    FUN_0041eaf0(0);
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



void FUN_004dbe40(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x31);
  if (iVar1 == 0) {
    iVar1 = FUN_0041e6b0();
    if (iVar1 != 0) {
      iVar1 = FUN_0042b410();
      if (iVar1 != 0) {
        FUN_0042b410();
        iVar1 = FUN_004d77d0();
        if (iVar1 != 0) goto LAB_004dbe7e;
      }
    }
    return;
  }
LAB_004dbe7e:
  FUN_00428e80();
  FUN_004d9070();
  return;
}



void FUN_004dbea0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x31);
  if (iVar1 == 0) {
    iVar1 = FUN_0041e6b0();
    if (iVar1 != 0) {
      iVar1 = FUN_0042b410();
      if (iVar1 != 0) {
        FUN_0042b410();
        iVar1 = FUN_004d77d0();
        if (iVar1 != 0) goto LAB_004dbede;
      }
    }
    return;
  }
LAB_004dbede:
  FUN_00428e90();
  FUN_004d9070();
  return;
}



void FUN_004dbf00(int param_1)

{
  char cVar1;
  
  if ((param_1 != 0) && (cVar1 = FUN_004db4a0(), cVar1 == '\0')) {
    return;
  }
  FUN_004205c0(param_1);
  return;
}



void FUN_004dbf30(int param_1)

{
  char cVar1;
  
  if ((param_1 != 0) && (cVar1 = FUN_004db4a0(), cVar1 == '\0')) {
    return;
  }
  FUN_004206a0(param_1);
  return;
}



void FUN_004dbf60(int param_1)

{
  char cVar1;
  
  if ((param_1 != 0) && (cVar1 = FUN_004db4a0(), cVar1 == '\0')) {
    return;
  }
  FUN_00420280(param_1);
  return;
}



void FUN_004dbf90(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint in_ECX;
  bool bVar4;
  uint uVar6;
  uint local_4;
  byte bVar5;
  
  piVar3 = (int *)FUN_004203a0();
  local_4 = in_ECX;
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      uVar6 = *(uint *)(in_ECX + 8) >> 0xb;
      bVar5 = (byte)uVar6;
      bVar4 = (bool)(bVar5 & 1);
      local_4._1_3_ = (undefined3)(local_4 >> 8);
      local_4 = CONCAT31(local_4._1_3_,bVar5) & 0xffffff01;
      cVar2 = FUN_00420340();
      if (cVar2 != '\0') {
        bVar4 = (uVar6 & 1) == 0;
        local_4 = CONCAT31(local_4._1_3_,bVar4);
      }
      if ((bool)((byte)(*(uint *)(iVar1 + 8) >> 0xb) & 1) != bVar4) {
        FUN_0046aba0(local_4);
        FUN_004dbf90();
      }
    }
  }
  return;
}



void FUN_004dc000(int param_1,int *param_2)

{
  char cVar1;
  
  if ((((param_2 != (int *)0x0) && (param_1 != 0)) && (param_1 != DAT_00b333c4)) &&
     ((cVar1 = FUN_004db4a0(), cVar1 == '\0' &&
      (cVar1 = (**(code **)(*param_2 + 0x78))(), cVar1 == '\0')))) {
    FUN_00424b60(param_2);
    FUN_004203e0(param_1);
    cVar1 = (**(code **)(*param_2 + 0x78))();
    if (cVar1 == '\0') {
      (**(code **)(*param_2 + 0x40))(0x20000);
    }
  }
  return;
}



uint FUN_004dc070(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    if (*(byte *)(iVar1 + 4) - 0x23 < 3) {
      uVar2 = FUN_0041df60();
      if ((char)uVar2 != '\0') goto LAB_004dc0fb;
    }
  }
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (*(byte *)(iVar1 + 4) == 0x17) {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    uVar2 = 0;
    if (iVar1 != 0) {
      return (uint)(*(byte *)(iVar1 + 0x78) >> 1 & 1);
    }
  }
  else {
    uVar2 = *(byte *)(iVar1 + 4) - 0x23;
    if (uVar2 < 2) {
      iVar1 = (**(code **)(*in_ECX + 0x170))();
      uVar2 = 0;
      if (iVar1 != 0) {
        return *(uint *)(iVar1 + 0x28) >> 3 & 0xffffff01;
      }
    }
  }
LAB_004dc0fb:
  return uVar2 & 0xffffff00;
}



void FUN_004dc100(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  bVar1 = false;
  if ((int *)in_ECX[7] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)in_ECX[7] + 0xf4))();
    if (cVar2 != '\0') {
      iVar3 = (**(code **)(*in_ECX + 0x170))();
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*in_ECX + 0x170))();
        if (*(char *)(iVar3 + 4) != '\x1a') {
          bVar1 = true;
        }
      }
    }
  }
  if ((in_ECX[0xf] == 0) || ((in_ECX[2] & 0x80000U) != 0)) {
    cVar2 = FUN_004354f0(in_ECX);
    if ((cVar2 == '\0') && ((((uint)in_ECX[2] >> 5 & 1) == 0 && (!bVar1)))) {
      if (((uint)in_ECX[2] >> 0xb & 1) == 0) {
        cVar2 = (**(code **)(*in_ECX + 400))();
        if (cVar2 != '\0') {
          (**(code **)(*in_ECX + 0x1a4))();
          FUN_00674e10(in_ECX);
        }
        uVar4 = FUN_00440c80(in_ECX[0x10],0);
        ModelLoader_QueueReference(in_ECX,uVar4);
      }
      else {
        cVar2 = FUN_0045a500();
        if (cVar2 == '\0') {
          FUN_004f9ec0();
          FUN_004fbf90();
        }
      }
    }
  }
  FUN_004d9310(1);
  if (in_ECX[0xf] != 0) {
    FUN_00707370(0,0);
    (**(code **)(*in_ECX + 0x148))();
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 != '\0') {
      cVar2 = FUN_005f0310(0xffffffff);
      if (cVar2 == '\0') {
        iVar3 = (**(code **)(*in_ECX + 0x284))(10);
        if (0 < iVar3) {
          FUN_004212e0();
        }
      }
    }
    if ((in_ECX[0x10] != 0) &&
       ((cVar2 = *(char *)(in_ECX[0x10] + 0x26), cVar2 == '\x06' || (cVar2 == '\x05')))) {
      FUN_00424f90(in_ECX);
    }
  }
  return;
}



int * FUN_004dc270(int param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = param_1;
  uVar7 = 0;
  param_1 = 0;
  if (DAT_00b333c4 != (int *)0x0) {
    param_1 = FUN_00660110(1);
  }
  if (iVar6 == 0) {
    return (int *)0x0;
  }
  do {
    if (iVar6 == param_1) {
      return DAT_00b333c4;
    }
    uVar8 = (uint)*(ushort *)(iVar6 + 0x14);
    if (uVar8 == 0) {
      if (uVar7 != 0) {
LAB_004dc310:
        piVar1 = *(int **)(uVar7 + 0xc);
        if (piVar1 == (int *)0x0) {
          return (int *)0x0;
        }
        iVar4 = (**(code **)(*piVar1 + 0x170))();
        if (iVar4 == 0) {
          return piVar1;
        }
        iVar4 = (**(code **)(*piVar1 + 0x170))();
        if (*(char *)(iVar4 + 4) != '\"') {
          return piVar1;
        }
        piVar5 = (int *)FUN_004dc270(*(undefined4 *)(iVar6 + 0x1c));
        if (piVar5 == (int *)0x0) {
          return piVar1;
        }
        return piVar5;
      }
    }
    else {
      do {
        uVar8 = uVar8 - 1;
        piVar1 = *(int **)(*(int *)(iVar6 + 0x10) + (uVar8 & 0xffff) * 4);
        uVar7 = 0;
        if (piVar1 != (int *)0x0) {
          for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
              puVar3 = (undefined4 *)puVar3[1]) {
            if (puVar3 == &DAT_00b35acc) {
              bVar2 = 1;
              goto LAB_004dc2e0;
            }
          }
          bVar2 = 0;
LAB_004dc2e0:
          uVar7 = -(uint)bVar2 & (uint)piVar1;
          if (uVar7 != 0) goto LAB_004dc310;
        }
      } while (uVar8 != 0);
    }
    iVar6 = *(int *)(iVar6 + 0x1c);
    if (iVar6 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



void FUN_004dc360(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
    iVar3 = FUN_006ff9c0(&DAT_00a7d2cc);
    if (iVar3 != 0) {
      DAT_00b35ee8 = *(float *)(iVar3 + 0xc) + -*(float *)(iVar3 + 0x18);
      fVar1 = *(float *)(iVar3 + 0x10) + -*(float *)(iVar3 + 0x1c);
      DAT_00b35ef0 = *(float *)(iVar3 + 0x14) + -*(float *)(iVar3 + 0x20);
      DAT_00b35eec = fVar1;
      *param_1 = DAT_00b35ee8;
      param_1[1] = fVar1;
      param_1[2] = DAT_00b35ef0;
      return;
    }
  }
  fVar1 = DAT_00b3f9ac;
  *param_1 = DAT_00b3f9a8;
  fVar2 = DAT_00b3f9b0;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  return;
}



void FUN_004dc410(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
    iVar3 = FUN_006ff9c0(&DAT_00a7d2cc);
    if (iVar3 != 0) {
      DAT_00b35ef4 = *(float *)(iVar3 + 0xc) + *(float *)(iVar3 + 0x18);
      fVar1 = *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x1c);
      DAT_00b35efc = *(float *)(iVar3 + 0x14) + *(float *)(iVar3 + 0x20);
      DAT_00b35ef8 = fVar1;
      *param_1 = DAT_00b35ef4;
      param_1[1] = fVar1;
      param_1[2] = DAT_00b35efc;
      return;
    }
  }
  fVar1 = DAT_00b3f9ac;
  *param_1 = DAT_00b3f9a8;
  fVar2 = DAT_00b3f9b0;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  return;
}



void FUN_004dc4b0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = FUN_006ff9c0(&DAT_00a7d2cc);
    if (iVar3 != 0) {
      DAT_00b35ef4 = *(float *)(iVar3 + 0xc) + *(float *)(iVar3 + 0x18);
      fVar1 = *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x1c);
      DAT_00b35efc = *(float *)(iVar3 + 0x14) + *(float *)(iVar3 + 0x20);
      DAT_00b35ef8 = fVar1;
      *param_1 = DAT_00b35ef4;
      param_1[1] = fVar1;
      param_1[2] = DAT_00b35efc;
      return;
    }
  }
  fVar1 = DAT_00b3f9ac;
  *param_1 = DAT_00b3f9a8;
  fVar2 = DAT_00b3f9b0;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  return;
}



void FUN_004dc550(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x164))();
  if (iVar1 != 0) {
    FUN_00475440(1,0);
    FUN_00470fc0(5,0);
    FUN_004715c0(0);
    FUN_00473120(*(undefined4 *)(iVar1 + 4));
    FUN_004730b0();
    return;
  }
  return;
}



void FUN_004dc5b0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int *in_ECX;
  int iVar6;
  uint uVar7;
  int *unaff_EBP;
  int *unaff_ESI;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  bool bVar11;
  int *piStack_4;
  
  if (in_ECX[0xf] != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x168))();
    piStack_4 = (int *)0x0;
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      piStack_4 = in_ECX;
    }
    if (in_ECX == DAT_00b333c4) {
      if (iVar2 != 0) {
        FUN_00478ce0();
      }
      iVar2 = FUN_006600d0((char)DAT_00b333c4[0x162]);
    }
    piVar10 = (int *)piStack_4[0x16];
    if (iVar2 == 0) {
      bVar11 = false;
      if (piVar10 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar10 + 0x130))(0);
        if ((iVar2 == 0) || (*(short *)(iVar2 + 0xb8) == 0)) {
          iVar2 = (**(code **)(*piVar10 + 0x134))(0);
          if (iVar2 != 0) {
            uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
            uVar5 = 0;
            if (uVar7 != 0) {
              if (uVar7 == 0) goto LAB_004dc6bb;
              do {
                iVar6 = *(int *)(*(int *)(iVar2 + 0xb0) + uVar5 * 4);
                if ((iVar6 != 0) && (pcVar8 = *(char **)(iVar6 + 8), pcVar8 != (char *)0x0)) {
                  bVar11 = true;
                  iVar6 = 4;
                  pcVar9 = "Bow";
                  do {
                    if (iVar6 == 0) break;
                    iVar6 = iVar6 + -1;
                    bVar11 = *pcVar8 == *pcVar9;
                    pcVar8 = pcVar8 + 1;
                    pcVar9 = pcVar9 + 1;
                  } while (bVar11);
                  if (bVar11) {
                    if (*(short *)(iVar2 + 0xb8) != 0) {
                      bVar11 = true;
                      goto LAB_004dc6f2;
                    }
                    break;
                  }
                }
LAB_004dc6bb:
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar7);
            }
          }
          iVar2 = (**(code **)(*piVar10 + 0x124))(0);
          if ((iVar2 == 0) || (*(short *)(iVar2 + 0xb8) == 0)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
        }
        else {
          bVar11 = true;
        }
      }
LAB_004dc6f2:
      iVar2 = FUN_0041e6f0();
      if ((iVar2 != 0) && (iVar2 = FUN_00486790(9,0), iVar2 != 0)) {
        piVar3 = (int *)FUN_009832e6(*(undefined4 *)(iVar2 + 8),0,&PTR_PTR_00b03248,
                                     &PTR_PTR_00b03304,0);
        if ((piVar3 != (int *)0x0) && (bVar11)) {
          uVar4 = (**(code **)(*piVar3 + 0x14))();
          FUN_004384e0(uVar4,1,1);
        }
        FUN_00484470();
        FUN_00401f20(iVar2);
      }
    }
    else {
      FUN_00478ce0();
    }
    if (piVar10 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar10 + 0x130))(0);
      if (iVar2 != 0) {
        FUN_00977c50(3);
        FUN_007b4280(0,iVar2);
        FUN_007c5e70(iVar2);
        FUN_00477ef0();
        FUN_00977c50(2);
      }
      iVar2 = (**(code **)(*piVar10 + 0x134))(0);
      if (iVar2 != 0) {
        uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
        uVar5 = 0;
        if (uVar7 != 0) {
          if (uVar7 == 0) goto LAB_004dc7fe;
          do {
            iVar6 = *(int *)(*(int *)(iVar2 + 0xb0) + uVar5 * 4);
            if ((iVar6 != 0) && (pcVar8 = *(char **)(iVar6 + 8), pcVar8 != (char *)0x0)) {
              iVar6 = 4;
              bVar11 = true;
              pcVar9 = "Bow";
              do {
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                bVar11 = *pcVar8 == *pcVar9;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              } while (bVar11);
              in_ECX = unaff_EBP;
              piVar10 = unaff_ESI;
              if (bVar11) {
                FUN_00977c50(3);
                FUN_007b4280(0,iVar2);
                FUN_007c5e70(iVar2);
                FUN_00477ef0();
                FUN_00977c50(2);
                break;
              }
            }
LAB_004dc7fe:
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar7);
        }
      }
      iVar2 = (**(code **)(*piVar10 + 0x124))(0);
      if (iVar2 != 0) {
        FUN_00977c50(3);
        FUN_007b4280(0,iVar2);
        FUN_007c5e70(iVar2);
        FUN_00477ef0();
        FUN_00977c50(2);
      }
    }
    if (((((int *)piStack_4[0x16] != (int *)0x0) && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) &&
        ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) == 0)) &&
       (((iVar2 = (**(code **)(*(int *)piStack_4[0x16] + 0xec))(1), iVar2 != 0 &&
         (*(int *)(iVar2 + 8) != 0)) && (*(char *)(*(int *)(iVar2 + 8) + 0x90) == '\x05')))) {
      FUN_005e13d0(0);
    }
    FUN_005ea1a0(in_ECX[0xf]);
  }
  return;
}



void FUN_004dc8f0(char param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *in_ECX;
  int *piStack_4;
  
  if (in_ECX[0xf] == 0) {
    return;
  }
  iVar3 = (**(code **)(*in_ECX + 0x168))();
  if (in_ECX == DAT_00b333c4) {
    if (iVar3 != 0) {
      FUN_00478dd0();
    }
    iVar3 = FUN_006600d0((char)DAT_00b333c4[0x162]);
  }
  piStack_4 = (int *)0x0;
  cVar2 = (**(code **)(*in_ECX + 400))();
  if (((cVar2 != '\0') && (piStack_4 = in_ECX, (int *)in_ECX[0x16] != (int *)0x0)) &&
     (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar4 == 6)) {
    iVar4 = (**(code **)(*in_ECX + 0x164))();
    if (iVar4 != 0) {
      FUN_00470fc0(1,0);
    }
    FUN_005effd0(0xffffffff,0);
  }
  if (iVar3 != 0) {
    FUN_00478dd0();
    goto LAB_004dca7c;
  }
  uVar5 = (**(code **)(*in_ECX + 0x154))(PTR_s_Bip01_L_ForearmTwist_00b0656c);
  piVar6 = (int *)FUN_006f94a0(uVar5);
  if (piVar6 == (int *)0x0) {
    iVar3 = 0;
LAB_004dc9eb:
    bVar1 = false;
  }
  else {
    iVar3 = (**(code **)(*piVar6 + 8))();
    if ((iVar3 == 0) || (*(short *)(iVar3 + 0xb8) == 0)) goto LAB_004dc9eb;
    bVar1 = true;
  }
  FUN_007b4280(0,piVar6);
  FUN_007c5e70(piVar6);
  if ((iVar3 != 0) && (bVar1)) {
    FUN_00477ef0();
  }
  iVar3 = FUN_0041e6f0();
  if ((iVar3 != 0) && (iVar3 = FUN_00486790(0xd,0), iVar3 != 0)) {
    iVar4 = FUN_009832e6(*(undefined4 *)(iVar3 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
    if ((iVar4 != 0) && (bVar1)) {
      uVar5 = FUN_00469330(0);
      FUN_004384e0(uVar5,1,1);
    }
    FUN_00484470();
    FUN_00401f20(iVar3);
  }
LAB_004dca7c:
  if (piStack_4 != (int *)0x0) {
    if (param_1 != '\0') {
      FUN_005e7230(0,0);
    }
    FUN_005ea1a0(in_ECX[0xf]);
  }
  return;
}



void FUN_004dcab0(void)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  LONG LVar9;
  int *in_ECX;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  
  if (in_ECX[0xf] == 0) {
    return;
  }
  iVar4 = (**(code **)(*in_ECX + 0x168))();
  cVar3 = (**(code **)(*in_ECX + 400))();
  if (cVar3 == '\0') {
    return;
  }
  if (in_ECX[0x16] == 0) {
    return;
  }
  if (in_ECX == DAT_00b333c4) {
    if (iVar4 != 0) {
      FUN_00478e30();
    }
    iVar4 = FUN_006600d0((char)DAT_00b333c4[0x162]);
  }
  if (iVar4 == 0) {
    uVar5 = (**(code **)(*in_ECX + 0x154))(PTR_s_Torch_00b06570);
    piVar8 = (int *)FUN_006f94a0(uVar5);
    bVar14 = false;
    bVar2 = false;
    if (piVar8 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(**(code **)(*piVar8 + 8))();
      if ((piVar6 != (int *)0x0) && (bVar14 = (short)piVar6[0x2e] != 0, bVar14)) {
        uVar11 = (uint)*(ushort *)((int)piVar6 + 0xb6);
        uVar10 = 0;
        if (uVar11 != 0) {
          if (uVar11 == 0) goto LAB_004dcbc6;
          do {
            iVar4 = *(int *)(piVar6[0x2c] + uVar10 * 4);
            if ((iVar4 != 0) && (pcVar12 = *(char **)(iVar4 + 8), pcVar12 != (char *)0x0)) {
              iVar4 = 4;
              bVar15 = true;
              pcVar13 = "Bow";
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar15 = *pcVar12 == *pcVar13;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              } while (bVar15);
              if (bVar15) {
                bVar2 = true;
              }
            }
LAB_004dcbc6:
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
      }
    }
    iVar4 = FUN_0041e6f0();
    if ((iVar4 != 0) && (iVar4 = FUN_00486790(0xe,0), iVar4 != 0)) {
      piVar7 = (int *)FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03304,
                                   0);
      if ((piVar7 != (int *)0x0) && (bVar14)) {
        uVar5 = (**(code **)(*piVar7 + 0x14))();
        FUN_004384e0(uVar5,1,1);
      }
      FUN_00484470();
      FUN_00401f20(iVar4);
    }
    if (piVar6 != (int *)0x0) {
      if (bVar2) goto LAB_004dcc72;
      FUN_00477ef0();
      piVar8 = piVar6;
    }
    FUN_007b4280(0,piVar8);
    FUN_007c5e70(piVar8);
  }
  else {
    FUN_00478e30();
  }
LAB_004dcc72:
  piVar8 = (int *)FUN_0041e650();
  if (piVar8 != (int *)0x0) {
    iVar4 = *piVar8;
    if (iVar4 != 0) {
      FUN_007b4280(0,iVar4);
      FUN_007c7dc0(iVar4);
      puVar1 = (undefined4 *)*piVar8;
      if (puVar1 != (undefined4 *)0x0) {
        LVar9 = InterlockedDecrement(puVar1 + 1);
        if ((LVar9 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *piVar8 = 0;
      }
    }
    FUN_0041f5b0();
  }
  (**(code **)(*(int *)in_ECX[0x16] + 0x344))(1);
  FUN_005ea1a0(in_ECX[0xf]);
  return;
}



void FUN_004dccf0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  
  if (in_ECX[0xf] == 0) {
    return;
  }
  iVar3 = (**(code **)(*in_ECX + 0x168))();
  if (in_ECX == DAT_00b333c4) {
    if (iVar3 != 0) {
      FUN_00478db0();
    }
    iVar3 = FUN_006600d0((char)DAT_00b333c4[0x162]);
  }
  if (iVar3 != 0) {
    FUN_00478db0();
    goto LAB_004dce2b;
  }
  uVar4 = (**(code **)(*in_ECX + 0x154))(PTR_s_Quiver_00b06568);
  piVar5 = (int *)FUN_006f94a0(uVar4);
  if (piVar5 == (int *)0x0) {
    iVar3 = 0;
LAB_004dcd8f:
    bVar1 = false;
  }
  else {
    iVar3 = (**(code **)(*piVar5 + 8))();
    if ((iVar3 == 0) || (bVar1 = true, *(short *)(iVar3 + 0xb8) == 0)) goto LAB_004dcd8f;
  }
  iVar6 = FUN_0041e6f0();
  if ((iVar6 != 0) && (iVar6 = FUN_00486790(0xc,0), iVar6 != 0)) {
    piVar7 = (int *)FUN_009832e6(*(undefined4 *)(iVar6 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03304,0)
    ;
    if ((piVar7 != (int *)0x0) && (bVar1)) {
      uVar4 = (**(code **)(*piVar7 + 0x14))();
      FUN_004384e0(uVar4,1,1);
    }
    FUN_00484470();
    FUN_00401f20(iVar6);
  }
  FUN_007b4280(0,piVar5);
  FUN_007c5e70(piVar5);
  if ((iVar3 != 0) && (bVar1)) {
    FUN_00477ef0();
  }
LAB_004dce2b:
  cVar2 = (**(code **)(*in_ECX + 400))();
  if (cVar2 != '\0') {
    FUN_005ea1a0(in_ECX[0xf]);
  }
  return;
}



void FUN_004dce60(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  if (in_ECX[0xf] != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x168))();
    iVar3 = 1;
    if (in_ECX == DAT_00b333c4) {
      iVar3 = 2;
    }
    do {
      if ((in_ECX == DAT_00b333c4) && (iVar3 == 1)) {
        iVar2 = FUN_006600d0((char)DAT_00b333c4[0x162]);
      }
      if (iVar2 == 0) {
        FUN_004a7a60("Creatures are not allowed to wear rings.");
      }
      else {
        FUN_0047a640(param_1,param_2);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      FUN_005ea1a0(in_ECX[0xf]);
      FUN_005ee1b0();
    }
  }
  return;
}



void FUN_004dcf10(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[0xf] != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x168))();
    if (in_ECX == DAT_00b333c4) {
      if (iVar2 != 0) {
        FUN_00478e80(param_1);
      }
      iVar2 = FUN_006600d0((char)DAT_00b333c4[0x162]);
    }
    if (iVar2 != 0) {
      FUN_00478e80(param_1);
    }
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      FUN_005ea1a0(in_ECX[0xf]);
    }
  }
  return;
}



void FUN_004dcf90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[0xf] != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x168))();
    if (in_ECX == DAT_00b333c4) {
      iVar2 = FUN_006600d0(0);
    }
    if (iVar2 == 0) {
      FUN_004a7a60("Creatures are not allowed to wear amulets.");
    }
    else {
      FUN_0047b9a0(param_1);
    }
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      FUN_005ea1a0(in_ECX[0xf]);
    }
  }
  return;
}



void FUN_004dd000(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[0xf] != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x168))();
    if (in_ECX == DAT_00b333c4) {
      if (iVar2 != 0) {
        FUN_00478ea0();
      }
      iVar2 = FUN_006600d0((char)DAT_00b333c4[0x162]);
    }
    if (iVar2 != 0) {
      FUN_00478ea0();
    }
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      FUN_005ea1a0(in_ECX[0xf]);
    }
  }
  return;
}



undefined4 * FUN_004dd070(undefined4 *param_1,float param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  float10 fVar2;
  undefined1 auStack_30 [48];
  
  param_2 = *(float *)(in_ECX + 0x28) + param_2;
  if (0.0 <= param_2) {
    if (!NAN(param_2) && 6.2831855 < param_2 != (param_2 == 6.2831855)) {
      fVar2 = (float10)FUN_00982bfa();
      param_2 = (float)fVar2;
    }
  }
  else {
    fVar2 = (float10)FUN_00982bfa();
    param_2 = (float)fVar2;
  }
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  param_1[2] = 0;
  FUN_0070fdd0(param_2);
  puVar1 = (undefined4 *)FUN_007101f0(auStack_30,param_1);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  FUN_0043f350();
  return param_1;
}



void FUN_004dd130(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  LONG LVar3;
  
  piVar2 = (int *)FUN_00401f00(8);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = 0;
  }
  puVar1 = (undefined4 *)*piVar2;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *piVar2 = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  piVar2[1] = 0x3f800000;
  FUN_00428cc0(piVar2);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_004dd260(int *param_1)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)acStack_108;
  bVar2 = false;
  DAT_00b35f04 = 0;
  if ((((param_1 != (int *)0x0) && (cVar3 = (**(code **)(*param_1 + 400))(), cVar3 != '\0')) &&
      ((int *)param_1[0x16] != (int *)0x0)) &&
     ((iVar5 = (**(code **)(*(int *)param_1[0x16] + 8))(), iVar5 == 0 &&
      (iVar5 = (**(code **)(*(int *)param_1[0x16] + 0x47c))(), iVar5 == 4)))) {
    bVar2 = true;
  }
  if (((uint)in_ECX[2] >> 0xd & 1) == 0) {
    if (param_1 == (int *)0x0) {
LAB_004dd3e5:
      iVar5 = (**(code **)(*in_ECX + 0x170))();
      cVar3 = *(char *)(iVar5 + 4);
      if (cVar3 == '\x18') {
        iVar5 = FUN_0041e6b0();
        if (((iVar5 != 0) && (param_1 == DAT_00b333c4)) &&
           ((iVar5 = (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x47c))(), iVar5 != 4 &&
            ((iVar5 = FUN_0042b460(), iVar5 != 0 && (cVar3 = FUN_004c97f0(), cVar3 != '\0')))))) {
          FUN_004cb040();
        }
      }
      else if ((cVar3 == '\x1c') || (cVar3 == '\x1e')) goto LAB_004dd404;
      cVar3 = (**(code **)(*(int *)in_ECX[7] + 0xcc))();
      if (cVar3 != '\0') {
        FUN_00665260(param_1);
        DAT_00b35f04 = 1;
        goto LAB_004dd4a4;
      }
    }
    else {
      cVar3 = (**(code **)(*param_1 + 400))();
      if (((cVar3 == '\0') || (iVar5 = (**(code **)(*param_1 + 0x380))(), iVar5 == 0)) ||
         (iVar5 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar5 + 4) != '\x12')) {
        if (!bVar2) {
          piVar6 = (int *)FUN_00579440();
          if (piVar6 == in_ECX) {
            iVar5 = (**(code **)(*in_ECX + 0x170))();
            puVar1 = (&PTR_DAT_00b05e04)[(uint)*(byte *)(iVar5 + 4) * 3];
            uVar7 = (**(code **)(*in_ECX + 0x170))();
            uVar7 = FUN_00469cd0(uVar7);
            uVar7 = (**(code **)(*param_1 + 0x170))(puVar1,uVar7);
            uVar7 = FUN_00469cd0(uVar7);
            _sprintf(acStack_108,"\'%s\' activated %s \'%s\'",uVar7);
            FUN_00579b60(acStack_108);
          }
          if (((param_1 != DAT_00b333c4) || ((char)DAT_00b333c4[0x43] == '\0')) &&
             (cVar3 = FUN_0041f830(1), cVar3 == '\0')) {
            FUN_00423df0(2);
            FUN_00423eb0(param_1);
            if (DAT_00b35f00 < 5) {
              DAT_00b35f00 = DAT_00b35f00 + 1;
              FUN_004d7190();
              DAT_00b35f00 = DAT_00b35f00 + -1;
            }
            return DAT_00b35f04;
          }
        }
        goto LAB_004dd3e5;
      }
    }
LAB_004dd404:
    uVar4 = 0;
  }
  else {
LAB_004dd4a4:
    uVar4 = 1;
  }
  return uVar4;
}



void FUN_004dd4b0(int *param_1,int param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  int unaff_EBP;
  char unaff_retaddr;
  
  if ((param_2 != 0) && (cVar3 = FUN_004c97f0(), cVar3 == '\0')) {
    param_2 = 0;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    return;
  }
  bVar2 = false;
  cVar3 = (**(code **)(*param_1 + 400))();
  if (((cVar3 != '\0') && (iVar4 = (**(code **)(*param_1 + 0x380))(), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*param_1 + 0x380))(), *(int *)(iVar4 + 0x58) != 0)) {
    iVar4 = (**(code **)(*param_1 + 0x380))();
    (**(code **)(**(int **)(iVar4 + 0x58) + 0x474))(1);
  }
  iVar4 = 0;
  if ((param_1[0x10] != 0) || (iVar5 = (**(code **)param_1[6])(), iVar5 != 0)) {
    iVar4 = FUN_004c9cf0();
  }
  cVar3 = (**(code **)(*param_1 + 0x198))(0);
  if (cVar3 != '\0') {
    FUN_004212e0();
    (**(code **)(*param_1 + 0x9c))(0);
  }
  if (param_2 != 0) {
    if (unaff_EBP == param_2) {
      (**(code **)(*param_1 + 0x178))(0);
      cVar3 = (**(code **)(*param_1 + 0x188))();
      if ((cVar3 != '\0') && (iVar4 = FUN_0065a2c0(), iVar4 != 0)) {
        uVar6 = (**(code **)(*param_1 + 0x174))();
        FUN_00452a10(uVar6);
      }
    }
    else {
      bVar2 = true;
      if ((iVar4 != 0) && (cVar3 = FUN_004db4a0(), cVar3 != '\0')) {
        FUN_004f03d0(param_1);
      }
      FUN_004d35d0(param_1);
    }
    cVar3 = FUN_0043f8c0(param_2,1);
    if (cVar3 != '\0') {
      unaff_retaddr = '\x01';
    }
    goto LAB_004dd7b0;
  }
  if ((unaff_EBP != 0) && (cVar3 = FUN_004c97f0(), cVar3 != '\0')) {
    bVar2 = true;
  }
  cVar3 = FUN_004db4a0();
  if ((cVar3 != '\0') && (iVar4 != param_3)) {
    if (iVar4 != 0) {
      FUN_004f03d0(param_1);
    }
    FUN_004f03a0(param_1);
  }
  pfVar7 = (float *)(**(code **)(*param_1 + 0x174))();
  fVar1 = *pfVar7;
  iVar5 = (**(code **)(*param_1 + 0x174))();
  param_2 = FUN_004efe80((int)ROUND(fVar1) >> 0xc,(int)ROUND(*(float *)(iVar5 + 4)) >> 0xc);
  if (param_2 == 0) {
    if (unaff_EBP != 0) {
      FUN_004cecd0(param_1);
    }
    cVar3 = (**(code **)(*param_1 + 400))();
    if (((cVar3 != '\0') && (cVar3 = FUN_0065d550(), cVar3 == '\0')) &&
       ((*(uint *)(DAT_00b33b00 + 0x18) >> 5 & 1) == 0)) {
      (**(code **)(*param_1 + 0x150))(0);
    }
    goto LAB_004dd7b0;
  }
  FUN_004d35d0(param_1);
  cVar3 = FUN_0043f8c0(param_2,1);
  if (cVar3 == '\0') goto LAB_004dd7b0;
  if (iVar4 != param_3) {
    unaff_retaddr = '\x01';
    bVar2 = true;
    cVar3 = (**(code **)(*param_1 + 400))();
    if ((cVar3 != '\0') && ((int *)param_1[0x16] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[0x16] + 0x20))();
    }
    goto LAB_004dd7b0;
  }
  if (bVar2) {
    if (unaff_EBP != 0) {
      cVar3 = FUN_0043f8c0(unaff_EBP,1);
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x178))(0);
        goto LAB_004dd7b0;
      }
      goto LAB_004dd738;
    }
  }
  else {
LAB_004dd738:
    if ((unaff_EBP != 0) && (cVar3 = FUN_0043f8c0(unaff_EBP,1), cVar3 != '\0')) goto LAB_004dd7b0;
  }
  iVar4 = (**(code **)(*param_1 + 0x154))();
  if (iVar4 != 0) {
    unaff_retaddr = '\x01';
  }
LAB_004dd7b0:
  cVar3 = (**(code **)(*param_1 + 0x188))();
  if ((((cVar3 != '\0') && (unaff_retaddr == '\0')) && (FUN_006748b0(param_1), param_2 == 0)) &&
     ((iVar4 = FUN_0065ad00(), iVar4 == 3 && (cVar3 = FUN_004db4a0(), cVar3 == '\0')))) {
    (**(code **)(*param_1 + 0x194))(unaff_EBP);
    FUN_00463a90(param_1);
    (**(code **)(*param_1 + 0x194))(0);
  }
  if (bVar2) {
    (**(code **)(*param_1 + 0x144))();
  }
  if (unaff_retaddr != '\0') {
    (**(code **)(*param_1 + 0x178))(0);
  }
  return;
}



void FUN_004dd850(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((uint)in_ECX[2] >> 0xb & 1) != 0) {
    (**(code **)(*in_ECX + 0x90))(1,uVar2);
    (**(code **)(*in_ECX + 0x40))(0x40000000);
    FUN_0046aba0(0);
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x184))(1);
    }
    cVar1 = (**(code **)(*in_ECX + 0x188))();
    piVar6 = (int *)0x0;
    if ((cVar1 != '\0') && (piVar6 = in_ECX, in_ECX[0x16] == 0)) {
      iVar3 = FUN_00401f00(0x90);
      uStack_4 = 0;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_006438f0();
      }
      uStack_4 = 0xffffffff;
      in_ECX[0x16] = iVar3;
      FUN_00673a90(in_ECX,3,0,0,0);
    }
    if ((((in_ECX[0x10] != 0) && (*(char *)(in_ECX[0x10] + 0x26) == '\x06')) &&
        (iVar3 = (**(code **)(*in_ECX + 0x154))(), iVar3 == 0)) &&
       (cVar1 = FUN_004354f0(in_ECX), cVar1 == '\0')) {
      if ((piVar6 != (int *)0x0) && (cVar1 = (**(code **)(*piVar6 + 400))(), cVar1 != '\0')) {
        (**(code **)(*piVar6 + 0x1a4))();
      }
      FUN_004d9310(1);
      if (((((uint)in_ECX[2] >> 5 & 1) == 0) &&
          (iVar3 = (**(code **)(*in_ECX + 0x170))(), iVar3 != 0)) &&
         ((iVar3 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar3 + 4) == '\x1a' ||
          ((iVar3 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar3 + 4) == '\x12' ||
           (cVar1 = FUN_004364e0(), cVar1 == '\0')))))) {
        uVar4 = FUN_00440c80(in_ECX[0x10],0);
        ModelLoader_QueueReference(in_ECX,uVar4);
      }
      iVar3 = (**(code **)(*in_ECX + 0x154))();
      if ((((iVar3 != 0) && (iVar3 = (**(code **)(*in_ECX + 0x170))(), iVar3 != 0)) &&
          (iVar3 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar3 + 4) == '\x1a')) &&
         ((piVar5 = (int *)FUN_0041e650(), piVar5 != (int *)0x0 && (iVar3 = *piVar5, iVar3 != 0))))
      {
        FUN_007b4280(0,iVar3);
        FUN_007c6ff0(iVar3);
      }
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x1c4))();
      cVar1 = (**(code **)(*piVar6 + 400))();
      if ((cVar1 != '\0') && ((int *)piVar6[0x16] != (int *)0x0)) {
        (**(code **)(*(int *)piVar6[0x16] + 0x14))(piVar6,1);
        FUN_00601b80();
        iVar3 = (**(code **)(*(int *)piVar6[0x16] + 8))();
        if (iVar3 != 0) {
          (**(code **)(*piVar6 + 0x1c0))(0);
        }
      }
    }
    FUN_00665260(in_ECX);
    for (piVar6 = (int *)FUN_004203a0();
        (piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0)))); piVar6 = (int *)piVar6[1]) {
      cVar1 = FUN_00420340();
      if (cVar1 == '\0') {
        FUN_004dd850();
      }
      else {
        FUN_004e4690();
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ddb00(char param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *in_ECX;
  
  cVar2 = FUN_0045a500();
  if (cVar2 == '\0') {
    iVar4 = FUN_004d6d40();
    if (iVar4 != 0) {
      FUN_00485e00();
      cVar3 = FUN_00487b60();
      cVar2 = '\x01';
      if (cVar3 != '\0') goto LAB_004ddb3a;
    }
  }
  cVar2 = param_1;
LAB_004ddb3a:
  iVar4 = FUN_004d6d40();
  if (iVar4 != 0) {
    if (cVar2 == '\0') {
      FUN_0041f5f0();
      piVar5 = (int *)FUN_00485e00();
    }
    else {
      piVar5 = (int *)FUN_00485e00();
      FUN_0048df80();
    }
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 != '\0') {
      FUN_005e9690();
    }
    FUN_00488420();
    FUN_0048e060();
    if ((((int *)*piVar5)[1] == 0) && (*(int *)*piVar5 == 0)) {
      FUN_0041f5f0();
    }
    puVar6 = (undefined4 *)FUN_00420480();
    if (puVar6 != (undefined4 *)0x0) {
      while( true ) {
        cVar2 = FUN_0046cb60();
        if (cVar2 != '\0') break;
        piVar5 = (int *)*puVar6;
        FUN_004203e0(0);
        cVar2 = (**(code **)(*piVar5 + 0x78))();
        if (cVar2 == '\0') {
          (**(code **)(*piVar5 + 0x8c))(1);
          (**(code **)(*piVar5 + 0x90))(1);
          (**(code **)(*piVar5 + 0x150))(0);
        }
        puVar1 = (undefined4 *)puVar6[1];
        if (puVar1 == (undefined4 *)0x0) {
          *puVar6 = 0;
        }
        else {
          puVar6[1] = puVar1[1];
          *puVar6 = *puVar1;
          FUN_00401f20(puVar1);
        }
      }
    }
  }
  return;
}



void FUN_004ddc40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 in_ECX;
  
  iVar2 = FUN_004d6d40();
  if (iVar2 != 0) {
    FUN_004fbf90();
    FUN_00485e00();
    FUN_0048aa10(param_1,param_2,param_3,param_4);
    cVar1 = FUN_004db4a0();
    if (cVar1 != '\0') {
      FUN_0041fa40(in_ECX);
      (**(code **)(*param_1 + 0x40))(0x20);
    }
  }
  return;
}



int FUN_004ddcb0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x28);
  cVar1 = FUN_004db4a0();
  if ((cVar1 == '\0') && ((*(uint *)(in_ECX + -0x10) >> 0xe & 1) == 0)) {
    return iVar2;
  }
  if ((iVar2 != 0) && (cVar1 = FUN_004c97f0(), cVar1 != '\0')) {
    return iVar2;
  }
  iVar2 = FUN_0041ff80();
  return iVar2;
}



void FUN_004ddde0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  float10 fVar7;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  (**(code **)(*in_ECX + 0x44))(0x800000);
  iVar3 = FUN_00420190();
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) {
    cVar2 = (**(code **)(*in_ECX + 400))();
    piVar6 = (int *)0x0;
    if ((cVar2 != '\0') && (piVar6 = in_ECX, in_ECX[0x16] != 0)) {
      FUN_005eae70();
    }
    pfVar4 = (float *)(**(code **)(**(int **)(iVar3 + 0x18) + 0x174))();
    fStack_c = pfVar4[1] - *(float *)(iVar3 + 0x10);
    fStack_8 = pfVar4[2] - *(float *)(iVar3 + 0x14);
    fStack_10 = *pfVar4 - *(float *)(iVar3 + 0xc);
    fVar7 = (float10)FUN_00683cb0(&fStack_10);
    in_ECX[8] = 0;
    in_ECX[9] = 0;
    in_ECX[10] = (int)(float)fVar7;
    (**(code **)(*in_ECX + 0x40))(4);
    iVar5 = *(int *)(iVar3 + 0x10);
    iVar1 = *(int *)(iVar3 + 0x14);
    in_ECX[0xb] = *(int *)(iVar3 + 0xc);
    in_ECX[0xc] = iVar5;
    in_ECX[0xd] = iVar1;
    (**(code **)(*in_ECX + 0x40))(4);
    if ((*(int *)(*(int *)(iVar3 + 0x18) + 0x40) != 0) ||
       (iVar5 = (*(code *)**(undefined4 **)(*(int *)(iVar3 + 0x18) + 0x18))(), iVar5 != 0)) {
      FUN_004c9cf0();
    }
    if (*(int *)(*(int *)(iVar3 + 0x18) + 0x40) != 0) {
      FUN_004c97f0();
    }
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 != '\0') {
      FUN_005e1360(0);
    }
    FUN_004dd4b0();
    if ((piVar6 != (int *)0x0) && (piVar6[0x16] != 0)) {
      (**(code **)(*piVar6 + 0x1a8))();
    }
    cVar2 = (**(code **)(*in_ECX + 0x198))(0);
    if (cVar2 != '\0') {
      FUN_004212e0();
      (**(code **)(*in_ECX + 0x9c))(0);
    }
    FUN_004201a0(in_ECX,0);
    (**(code **)(*in_ECX + 0x44))(0x4000);
  }
  return;
}



undefined4 FUN_004ddf90(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 400))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x27c))();
    if (iVar2 != 0) {
      uVar3 = FUN_006f94a0(in_ECX[0xf],"BSFaceGenNiNodeBiped");
      return uVar3;
    }
  }
  return 0;
}



undefined4 FUN_004ddfd0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 400))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x27c))();
    if (iVar2 != 0) {
      uVar3 = FUN_006f94a0(in_ECX[0xf],"BSFaceGenNiNodeSkinned");
      return uVar3;
    }
  }
  return 0;
}



void FUN_004de100(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[0xf] == 0) {
    if (param_1 == 0) {
      return;
    }
    FUN_00424970(param_1);
    return;
  }
  if ((param_1 != 0) || (iVar2 = FUN_0041ffa0(), iVar2 != 0)) {
    FUN_00497830(in_ECX);
  }
  cVar1 = (**(code **)(*in_ECX + 0x198))(0);
  if (cVar1 != '\0') {
    return;
  }
  (**(code **)(*in_ECX + 0x164))();
  return;
}



undefined4 FUN_004de160(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_004d6d40();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00485e00();
    iVar1 = FUN_004471a0(0xf);
    if (iVar1 != 0) {
      uVar3 = FUN_004869c0(iVar1);
    }
    if ((((int *)*piVar2)[1] == 0) && (*(int *)*piVar2 == 0)) {
      FUN_0041f5f0();
    }
  }
  return uVar3;
}



undefined1 FUN_004de1c0(int param_1)

{
  char *_Str1;
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  _Str1 = *(char **)(param_1 + 8);
  uVar5 = 0;
  if (_Str1 != (char *)0x0) {
    iVar2 = __strnicmp(_Str1,"FlameNode",9);
    if (iVar2 == 0) {
      FUN_0088cd50(param_1,1,1);
      iVar2 = _isdigit((int)_Str1[9]);
      if (iVar2 == 0) {
        iVar2 = _isalpha((int)_Str1[9]);
        if (iVar2 == 0) goto LAB_004de2ad;
        iVar2 = _tolower((int)_Str1[9]);
        piVar3 = (int *)FUN_0046b250(iVar2 + -0x39);
      }
      else {
        piVar3 = (int *)FUN_0046b250(_Str1[9] + -0x12);
      }
      if (((piVar3 != (int *)0x0) && (iVar2 = FUN_00449190(), iVar2 != 0)) &&
         (*(short *)(param_1 + 0xb8) != 0)) {
        FUN_00977c50(3);
        (**(code **)(*piVar3 + 0xf0))(0);
        FUN_00477ef0();
        FUN_00977c50(2);
        uVar5 = 1;
      }
    }
    else {
      iVar2 = __stricmp(_Str1,"FlameCap");
      if (iVar2 == 0) {
        *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 1;
      }
    }
  }
LAB_004de2ad:
  uVar6 = 0;
  if (*(short *)(param_1 + 0xb6) != 0) {
    do {
      if (((uVar6 < *(ushort *)(param_1 + 0xb6)) &&
          (piVar3 = *(int **)(*(int *)(param_1 + 0xb0) + uVar6 * 4), piVar3 != (int *)0x0)) &&
         ((puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(), puVar4 == &DAT_00b3fab0 &&
          (cVar1 = FUN_004de1c0(piVar3), cVar1 != '\0')))) {
        uVar5 = 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_1 + 0xb6));
  }
  return uVar5;
}



undefined1 FUN_004de1cd(void)

{
  char *_Str1;
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  int unaff_EDI;
  
  _Str1 = *(char **)(unaff_EDI + 8);
  uVar5 = 0;
  if (_Str1 != (char *)0x0) {
    iVar2 = __strnicmp(_Str1,"FlameNode",9);
    if (iVar2 == 0) {
      FUN_0088cd50();
      iVar2 = _isdigit((int)_Str1[9]);
      if (iVar2 == 0) {
        iVar2 = _isalpha((int)_Str1[9]);
        if (iVar2 == 0) goto LAB_004de2ad;
        iVar2 = _tolower((int)_Str1[9]);
        piVar3 = (int *)FUN_0046b250(iVar2 + -0x39);
      }
      else {
        piVar3 = (int *)FUN_0046b250(_Str1[9] + -0x12);
      }
      if (((piVar3 != (int *)0x0) && (iVar2 = FUN_00449190(), iVar2 != 0)) &&
         (*(short *)(unaff_EDI + 0xb8) != 0)) {
        FUN_00977c50(3);
        (**(code **)(*piVar3 + 0xf0))(0);
        FUN_00477ef0();
        FUN_00977c50(2);
        uVar5 = 1;
      }
    }
    else {
      iVar2 = __stricmp(_Str1,"FlameCap");
      if (iVar2 == 0) {
        *(ushort *)(unaff_EDI + 0x18) = *(ushort *)(unaff_EDI + 0x18) | 1;
      }
    }
  }
LAB_004de2ad:
  uVar6 = 0;
  if (*(short *)(unaff_EDI + 0xb6) != 0) {
    do {
      if (((uVar6 < *(ushort *)(unaff_EDI + 0xb6)) &&
          (piVar3 = *(int **)(*(int *)(unaff_EDI + 0xb0) + uVar6 * 4), piVar3 != (int *)0x0)) &&
         ((puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(), puVar4 == &DAT_00b3fab0 &&
          (cVar1 = FUN_004de1c0(piVar3), cVar1 != '\0')))) {
        uVar5 = 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(unaff_EDI + 0xb6));
  }
  return uVar5;
}



uint FUN_004de320(int param_1)

{
  int *piVar1;
  char cVar2;
  uint in_EAX;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  
  if (param_1 != 0) {
    cVar6 = '\0';
    if (((*(char **)(param_1 + 8) != (char *)0x0) &&
        (iVar3 = __strnicmp(*(char **)(param_1 + 8),"FlameNode",9), iVar3 == 0)) &&
       (*(short *)(param_1 + 0xb8) != 0)) {
      cVar6 = '\x01';
    }
    uVar7 = 0;
    uVar5 = 0;
    if (*(short *)(param_1 + 0xb6) != 0) {
      if (*(short *)(param_1 + 0xb6) == 0) goto LAB_004de39e;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + uVar7 * 4);
        if (((piVar1 != (int *)0x0) &&
            (puVar4 = (undefined4 *)(**(code **)(*piVar1 + 4))(), puVar4 == &DAT_00b3fab0)) &&
           ((cVar6 == '\0' && (cVar2 = FUN_004de320(piVar1), cVar2 != '\0')))) {
          cVar6 = '\x01';
        }
LAB_004de39e:
        uVar5 = (uint)*(ushort *)(param_1 + 0xb6);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
    }
    return CONCAT31((int3)(uVar5 >> 8),cVar6);
  }
  return in_EAX & 0xffffff00;
}



void FUN_004de3c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    for (iVar1 = param_1[3]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x34)) {
      *(undefined4 *)(iVar1 + 0x10) = param_2;
    }
    iVar1 = FUN_00707530(6);
    if (iVar1 != 0) {
      for (iVar1 = *(int *)(iVar1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x34)) {
        *(undefined4 *)(iVar1 + 0x10) = param_2;
      }
    }
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
      uVar3 = 0;
      if (*(short *)(iVar1 + 0xb6) != 0) {
        if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_004de42d;
        uVar2 = 0;
        while( true ) {
          FUN_004de3c0(uVar2,param_2);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar1 + 0xb6) <= uVar3) break;
LAB_004de42d:
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
  return;
}



void FUN_004de460(char param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *in_ECX;
  uint uVar6;
  undefined4 uVar7;
  int *piStack_4;
  
  piStack_4 = in_ECX;
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar2 + 4) == '\x18')) {
    if (param_1 == '\0') {
      FUN_004d82e0(4);
    }
    else {
      FUN_004d8270(4);
    }
    iVar2 = (**(code **)(*in_ECX + 0x154))();
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*in_ECX + 0x154))(), *(short *)(iVar2 + 0xb6) == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(iVar2 + 0xb0);
    }
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
    }
    iVar2 = FUN_00560920(&DAT_00b3cac0,uVar5);
    if (iVar2 == 0) {
      if (param_1 == '\0') {
        FUN_004d90d0("Close");
        return;
      }
      FUN_004d90d0(&DAT_00a33bb4);
      return;
    }
    cVar1 = FUN_0055e000(&DAT_00a33bb4,&piStack_4);
    uVar3 = -(uint)(cVar1 != '\0') & (uint)piStack_4;
    cVar1 = FUN_0055e000("Close",&piStack_4);
    uVar4 = -(uint)(cVar1 != '\0') & (uint)piStack_4;
    if ((uVar3 != 0) && (uVar4 != 0)) {
      uVar6 = uVar3;
      if (param_1 != '\0') {
        uVar6 = uVar4;
        uVar4 = uVar3;
      }
      *(ushort *)(iVar2 + 8) = *(ushort *)(iVar2 + 8) | 8;
      FUN_006c9cb0(0,0);
      if (param_2 == '\0') {
        FUN_00470b20(uVar4,0,0,0x3f800000,0,0);
        uVar7 = 1;
        *(undefined4 *)(uVar4 + 0x48) = 0xff7fffff;
        uVar5 = *(undefined4 *)(uVar4 + 0x2c);
        (**(code **)(*in_ECX + 0x154))(uVar5,1);
        FUN_00707370(uVar5,uVar7);
        return;
      }
      FUN_00470b20(uVar6,0,0,0x3f800000,0,0);
      uVar7 = 1;
      *(undefined4 *)(uVar6 + 0x48) = 0xff7fffff;
      uVar5 = *(undefined4 *)(uVar4 + 0x2c);
      (**(code **)(*in_ECX + 0x154))(uVar5,1);
      FUN_00707370(uVar5,uVar7);
      FUN_006c9cb0(0,0);
      FUN_004d90d0(*(undefined4 *)(uVar4 + 8));
      uVar5 = (**(code **)(*in_ECX + 0x154))(1);
      FUN_00897a20(uVar5);
    }
  }
  return;
}



int FUN_004de660(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *in_ECX;
  int *piStack_4;
  
  piStack_4 = in_ECX;
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar3 + 4) != '\x18') {
    return 0;
  }
  cVar1 = FUN_0041f830(4);
  iVar3 = (**(code **)(*in_ECX + 0x154))();
  if ((iVar3 == 0) || (iVar3 = (**(code **)(*in_ECX + 0x154))(), *(short *)(iVar3 + 0xb6) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(iVar3 + 0xb0);
  }
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
  }
  iVar3 = FUN_00560920(&DAT_00b3cac0,uVar4);
  if (iVar3 != 0) {
    cVar2 = FUN_0055e000(&DAT_00a33bb4,&piStack_4);
    uVar5 = -(uint)(cVar2 != '\0') & (uint)piStack_4;
    cVar2 = FUN_0055e000("Close",&piStack_4);
    uVar6 = -(uint)(cVar2 != '\0') & (uint)piStack_4;
    if ((uVar5 != 0) && (uVar6 != 0)) {
      if (*(int *)(uVar5 + 0x44) == 1) {
        return 2;
      }
      if (*(int *)(uVar6 + 0x44) == 1) {
        return 4;
      }
    }
  }
  return (-(uint)(cVar1 != '\0') & 0xfffffffe) + 3;
}



undefined1 FUN_004de770(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  
  iVar1 = FUN_004db6b0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_004db6b0();
  iVar2 = FUN_004db830();
  iVar3 = FUN_004db7d0();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar6 = 1;
  iVar4 = (**(code **)(*param_1 + 0x128))();
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*param_1 + 0x170))();
  }
  iVar5 = 0;
  if (*(byte *)(iVar4 + 4) - 0x23 < 2) {
    iVar5 = FUN_009832e6(iVar4,0,&PTR_PTR_00b03248,&PTR_PTR_00b03de4,0);
  }
  if (iVar1 != iVar4) {
    iVar4 = 0;
    if (((*(char *)(iVar1 + 4) != '\x06') || (iVar4 = iVar1, param_2 == '\0')) &&
       ((iVar3 == 0 || (*(float *)(iVar3 + 0x24) == 0.0)))) {
      uVar6 = 0;
    }
    if (((iVar4 != 0) && (iVar5 != 0)) &&
       (iVar1 = FUN_00467510(iVar4,param_1 == DAT_00b333c4), iVar1 < iVar2)) {
      return 0;
    }
    return uVar6;
  }
  return 1;
}



undefined4 FUN_004de880(int param_1)

{
  char cVar1;
  
  if ((param_1 != 0) || (param_1 = FUN_004db6b0(), param_1 != 0)) {
    if (*(char *)(param_1 + 4) == '\x06') {
      if ((*(byte *)(param_1 + 0x34) >> 1 & 1) != 0) {
        return 1;
      }
    }
    else if (*(char *)(param_1 + 4) == '#') {
      cVar1 = FUN_00467560();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_004de8d0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined1 *puVar5;
  
  iVar2 = in_ECX[0x10];
  if (iVar2 != 0) {
    cVar1 = FUN_004c97f0();
    if (cVar1 != '\0') {
      puVar5 = *(undefined1 **)(iVar2 + 0x1c);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00a2f7ec;
      }
      FUN_004028d0(puVar5,0);
      return;
    }
  }
  if (in_ECX[0x10] == 0) {
    iVar2 = (**(code **)in_ECX[6])();
    if (iVar2 == 0) goto LAB_004de961;
  }
  piVar3 = (int *)FUN_004c9cf0();
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    puVar4 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
    (**(code **)(iVar2 + 0xdc))(param_1,*puVar4,puVar4[1],puVar4[2]);
    return;
  }
LAB_004de961:
  FUN_004028d0(&DAT_00a2f7ec,0);
  return;
}



uint FUN_004de980(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int *piVar4;
  
  if (((uint)in_ECX[2] >> 0xd & 1) != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  switch(*(undefined1 *)(iVar2 + 4)) {
  case 0x12:
    iVar2 = FUN_004d9890(in_ECX[7]);
    return -(uint)(iVar2 != 0) & 4;
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x19:
  case 0x1b:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2b:
    break;
  case 0x15:
    return (-(uint)(*(int *)(in_ECX[7] + 100) != 0) & 0xfffffffb) + 6;
  case 0x17:
    return 2;
  case 0x18:
    return 8;
  default:
    goto switchD_004de9b3_caseD_1c;
  case 0x20:
    cVar1 = FUN_004ae590();
    if (cVar1 == '\0') {
      cVar1 = FUN_004ae5a0();
      return -(uint)(cVar1 != '\0') & 5;
    }
    return 3;
  case 0x23:
    cVar1 = (**(code **)(*in_ECX + 400))();
    piVar4 = (int *)0x0;
    if (cVar1 != '\0') {
      piVar4 = in_ECX;
    }
    if (piVar4 == DAT_00b333c4) {
      return 0;
    }
    cVar1 = (**(code **)(*in_ECX + 0x198))(0);
    if ((cVar1 != '\0') && (iVar2 = FUN_005e0dc0(), iVar2 != 6)) {
      return 2;
    }
    if (((piVar4 != (int *)0x0) && (cVar1 = FUN_005e0f30(), cVar1 != '\0')) &&
       (cVar1 = FUN_005e04c0(), cVar1 != '\0')) {
      return 0xb;
    }
    cVar1 = FUN_005e0550();
    if (cVar1 == '\0') {
      if ((piVar4 != (int *)0x0) && (cVar1 = FUN_005e1d30(), cVar1 != '\0')) {
        return 10;
      }
      return 7;
    }
    break;
  case 0x24:
    cVar1 = (**(code **)(*in_ECX + 0x198))(0);
    if (cVar1 != '\0') {
      return 2;
    }
    cVar1 = FUN_004d74d0();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*in_ECX + 400))();
      piVar4 = (int *)0x0;
      if (cVar1 != '\0') {
        piVar4 = in_ECX;
      }
      iVar2 = (**(code **)(*piVar4 + 0x388))();
      if (iVar2 == 0) {
        return 9;
      }
      piVar3 = (int *)(**(code **)(*piVar4 + 0x388))();
      if (piVar3 == DAT_00b333c4) {
        return 0;
      }
      piVar3 = (int *)(**(code **)(*piVar4 + 0x388))();
      cVar1 = (**(code **)(*piVar3 + 0x198))(0);
      if (cVar1 != '\0') {
        return 0;
      }
      iVar2 = (**(code **)(*piVar4 + 0x388))();
      if (*(int *)(iVar2 + 0x58) == 0) {
        return 0;
      }
      iVar2 = (**(code **)(*piVar4 + 0x388))();
      iVar2 = (**(code **)(**(int **)(iVar2 + 0x58) + 0x36c))();
      if (iVar2 == 4) {
        return 7;
      }
      iVar2 = (**(code **)(*piVar4 + 0x388))();
      iVar2 = (**(code **)(**(int **)(iVar2 + 0x58) + 0x36c))();
      if (iVar2 == 0) {
        return 9;
      }
    }
  case 0x1a:
    if ((*(uint *)(in_ECX[7] + 0x7c) >> 1 & 1) == 0) {
switchD_004de9b3_caseD_1c:
      return 0;
    }
  }
  return 1;
}



undefined1 FUN_004debf0(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  
  iVar4 = FUN_0041e690();
  if (((iVar4 == 0) && (iVar5 = FUN_0041e6b0(), iVar5 != 0)) && (iVar5 = FUN_0042b410(), iVar5 != 0)
     ) {
    FUN_0042b410();
    iVar4 = FUN_0041e690();
  }
  iVar5 = FUN_004db6b0();
  if ((iVar5 != 0) || (iVar5 = FUN_004db6b0(), iVar5 != 0)) {
    if (*(char *)(iVar5 + 4) == '\x06') {
      bVar3 = *(byte *)(iVar5 + 0x34) >> 1 & 1;
    }
    else {
      if (*(char *)(iVar5 + 4) != '#') goto LAB_004dec76;
      bVar3 = FUN_00467560();
    }
    if (bVar3 != 0) {
      return 0;
    }
  }
LAB_004dec76:
  iVar5 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar5 + 4) != '\x18') {
    iVar4 = (**(code **)(*in_ECX + 0x170))();
    if (((*(char *)(iVar4 + 4) == '#') && (cVar2 = FUN_005e0550(), cVar2 != '\0')) &&
       (cVar2 = (**(code **)(*in_ECX + 0x198))(0), cVar2 == '\0')) {
      return 1;
    }
    iVar4 = FUN_004db6b0();
    if (iVar4 == 0) {
      return 0;
    }
    cVar2 = FUN_004de770(DAT_00b333c4,1);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*in_ECX + 400))();
      if (cVar2 == '\0') {
        return 1;
      }
      cVar2 = FUN_004d74d0();
      if (cVar2 != '\0') {
        return 1;
      }
      return 0;
    }
    return 0;
  }
  iVar5 = (**(code **)(*in_ECX + 0x170))();
  if (((iVar5 != 0) && (cVar2 = FUN_004de770(DAT_00b333c4,1), cVar2 == '\0')) &&
     (iVar5 = FUN_004db6b0(), iVar5 != 0)) {
    cVar2 = FUN_004b72c0();
    if (cVar2 != '\0') {
      return 0;
    }
    if ((iVar4 != 0) && (cVar2 = FUN_00428e70(), cVar2 != '\0')) {
      return 1;
    }
    iVar4 = FUN_0041e6b0();
    bVar1 = false;
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_0042b460();
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_004ca970();
    if (iVar4 == 0) {
      return 0;
    }
    if (*(char *)(iVar4 + 4) == '\x06') {
      bVar3 = *(byte *)(iVar4 + 0x34) >> 1 & 1;
    }
    else {
      if (*(char *)(iVar4 + 4) != '#') goto LAB_004ded40;
      bVar3 = FUN_00467560();
    }
    if (bVar3 != 0) {
      bVar1 = true;
    }
LAB_004ded40:
    cVar2 = FUN_004c97f0();
    if (((cVar2 != '\0') && (cVar2 = FUN_004c9880(), cVar2 == '\0')) && (!bVar1)) {
      return 1;
    }
    return 0;
  }
  bVar1 = false;
  iVar4 = FUN_0041e6b0();
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = FUN_0042b460();
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = FUN_004ca970();
  if (iVar4 == 0) {
    return 0;
  }
  if (*(char *)(iVar4 + 4) == '\x06') {
    bVar3 = *(byte *)(iVar4 + 0x34) >> 1 & 1;
  }
  else {
    if (*(char *)(iVar4 + 4) != '#') goto LAB_004dedb7;
    bVar3 = FUN_00467560();
  }
  if (bVar3 != 0) {
    bVar1 = true;
  }
LAB_004dedb7:
  cVar2 = FUN_004c97f0();
  if ((((cVar2 != '\0') && (cVar2 = FUN_004c9880(), cVar2 == '\0')) && (!bVar1)) &&
     (cVar2 = FUN_004caac0(DAT_00b333c4), cVar2 == '\0')) {
    return 1;
  }
  return 0;
}



void FUN_004dee70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5af8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a46f00;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a46c14;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004deee0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 in_ECX;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    local_28 = 0.0;
    cVar1 = FUN_0055e000(in_ECX,&local_28);
    if (((cVar1 != '\0') && (local_28 != 0.0)) &&
       (iVar3 = FUN_009832e6(local_28,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0), iVar3 != 0)) {
      iVar3 = FUN_00420260();
      if (iVar3 != 0) {
        local_28 = 0.0;
        cVar1 = FUN_0055e000(iVar3,&local_28);
        if (((cVar1 != '\0') && (local_28 != 0.0)) &&
           (iVar3 = FUN_009832e6(local_28,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0), iVar3 != 0)) {
          FUN_004dbf60(iVar3);
          uVar2 = FUN_00420340();
          local_28 = (float)CONCAT31(local_28._1_3_,uVar2);
          FUN_00420360(local_28);
        }
      }
      iVar3 = FUN_004205a0();
      if (iVar3 != 0) {
        local_28 = 0.0;
        cVar1 = FUN_0055e000(iVar3,&local_28);
        if (((cVar1 != '\0') && (local_28 != 0.0)) &&
           (iVar3 = FUN_009832e6(local_28,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0), iVar3 != 0)) {
          FUN_004dbf00(iVar3);
        }
      }
      iVar3 = FUN_00420680();
      if (iVar3 != 0) {
        local_28 = 0.0;
        cVar1 = FUN_0055e000(iVar3,&local_28);
        if (((cVar1 != '\0') && (local_28 != 0.0)) &&
           (iVar3 = FUN_009832e6(local_28,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0), iVar3 != 0)) {
          FUN_004dbf30(iVar3);
        }
      }
      iVar3 = FUN_00420840();
      if (iVar3 != 0) {
        local_28 = 0.0;
        cVar1 = FUN_0055e000(iVar3,&local_28);
        if (((cVar1 != '\0') && (local_28 != 0.0)) &&
           (iVar3 = FUN_009832e6(local_28,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0), iVar3 != 0)) {
          FUN_004d7940(iVar3);
        }
      }
      iVar3 = FUN_0041e6b0();
      if ((iVar3 != 0) && (iVar3 = FUN_0042b410(), iVar3 != 0)) {
        pfVar8 = &local_28;
        local_28 = 0.0;
        uVar4 = FUN_0042b410(pfVar8);
        cVar1 = FUN_0055e000(uVar4,pfVar8);
        if ((cVar1 != '\0') &&
           ((local_28 != 0.0 &&
            (piVar5 = (int *)FUN_009832e6(local_28,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0),
            piVar5 != (int *)0x0)))) {
          FUN_004d7640();
          FUN_0042b420(piVar5);
          puVar6 = (undefined4 *)FUN_0042b430();
          local_c = *puVar6;
          local_8 = puVar6[1];
          local_4 = puVar6[2];
          piVar7 = (int *)FUN_0042b410();
          uVar4 = (**(code **)(*piVar7 + 0x174))();
          pfVar8 = &fStack_24;
          FUN_006899c0(pfVar8,uVar4);
          FUN_004121a0(pfVar8,uVar4);
          pfVar8 = (float *)(**(code **)(*piVar5 + 0x174))();
          fStack_14 = pfVar8[1] + fStack_20;
          local_28 = pfVar8[2] + fStack_1c;
          fStack_18 = *pfVar8 + fStack_24;
          fStack_10 = local_28;
          FUN_0068ca00(&fStack_18);
          FUN_0042b440(&local_c);
        }
      }
    }
  }
  return;
}



void FUN_004df1a0(undefined4 param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *in_ECX;
  int *piVar12;
  undefined4 *puVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined1 auStack_24 [36];
  
  piVar6 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  if (piVar6 == (int *)0x0) {
    return;
  }
  uVar7 = FUN_004db4a0();
  FUN_004d7040(uVar7);
  FUN_0046acb0(param_1);
  iVar8 = (**(code **)(*in_ECX + 0x170))();
  if (iVar8 != 0) {
    iVar8 = (**(code **)(*piVar6 + 0x170))();
    iVar9 = (**(code **)(*in_ECX + 0x170))();
    if (iVar9 != iVar8) {
      (**(code **)(*in_ECX + 0x150))(0);
    }
  }
  fVar1 = (float)in_ECX[0xe];
  piVar11 = piVar6 + 7;
  piVar12 = in_ECX + 7;
  for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar12 = *piVar11;
    piVar11 = piVar11 + 1;
    piVar12 = piVar12 + 1;
  }
  if (((float)piVar6[0xe] == fVar1) || (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
    iVar8 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar8 + 4) == '\"') {
      sVar4 = FUN_0041e860();
      sVar5 = FUN_0041e860();
      if (sVar5 != sVar4) goto LAB_004df280;
    }
  }
  else {
LAB_004df280:
    (**(code **)(*in_ECX + 0x150))(0);
  }
  iVar8 = (**(code **)(*in_ECX + 0x154))();
  if (iVar8 != 0) {
    puVar10 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
    iVar8 = (**(code **)(*in_ECX + 0x154))();
    *(undefined4 *)(iVar8 + 0x54) = *puVar10;
    *(undefined4 *)(iVar8 + 0x58) = puVar10[1];
    *(undefined4 *)(iVar8 + 0x5c) = puVar10[2];
    puVar10 = (undefined4 *)FUN_004d7af0(auStack_24);
    iVar8 = (**(code **)(*in_ECX + 0x154))();
    puVar13 = (undefined4 *)(iVar8 + 0x30);
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    uVar7 = (**(code **)(*in_ECX + 0x154))(1);
    FUN_00897a20(uVar7);
    uVar15 = 1;
    uVar7 = 0;
    (**(code **)(*in_ECX + 0x154))(0,1);
    FUN_00707370(uVar7,uVar15);
  }
  if (piVar6[0x10] == 0) {
    if (in_ECX[0x10] != 0) {
      FUN_004cecd0(in_ECX);
    }
  }
  else {
    FUN_004d35d0(in_ECX);
    iVar8 = (**(code **)(*in_ECX + 0x154))();
    if (iVar8 == 0) {
      FUN_00434020(5);
    }
  }
  iVar8 = FUN_0041e6b0();
  if (iVar8 != 0) {
    iVar8 = FUN_0041e6b0();
    if (iVar8 != 0) {
      iVar8 = FUN_0042b410();
      iVar9 = FUN_0042b410();
      if (iVar8 == iVar9) goto LAB_004df3ba;
    }
    piVar11 = (int *)FUN_0042b410();
    FUN_0041f5e0();
    (**(code **)(*piVar11 + 0x44))(0x100000);
    FUN_0042b420(0);
  }
LAB_004df3ba:
  FUN_00428920(piVar6 + 0x11);
  FUN_004db520(piVar6[0xe]);
  iVar8 = (**(code **)(*piVar6 + 0x154))();
  if (iVar8 == 0) {
    (**(code **)(*in_ECX + 0x150))(0);
  }
  else {
    if (((((uint)in_ECX[2] >> 0xe & 1) != 0) && (piVar11 = (int *)in_ECX[7], piVar11 != (int *)0x0))
       && ((char)piVar11[1] == '\x1e')) {
      iVar8 = *in_ECX;
      uVar7 = (**(code **)(*piVar11 + 0xec))();
      (**(code **)(iVar8 + 0x150))(uVar7);
    }
    iVar8 = (**(code **)(*in_ECX + 0x154))();
    if (((iVar8 == 0) && (in_ECX[0x10] != 0)) &&
       (cVar3 = FUN_0043f8c0(in_ECX[0x10],0), cVar3 != '\0')) {
      FUN_00441ef0(in_ECX,in_ECX[0x10],0,0);
    }
    else if ((in_ECX[7] == 0) || (*(char *)(in_ECX[7] + 4) != '\x1e')) {
      iVar8 = (**(code **)(*in_ECX + 0x14c))();
      puVar10 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
      *(undefined4 *)(iVar8 + 0x54) = *puVar10;
      *(undefined4 *)(iVar8 + 0x58) = puVar10[1];
      *(undefined4 *)(iVar8 + 0x5c) = puVar10[2];
      puVar10 = (undefined4 *)FUN_004d7af0(auStack_24);
      puVar13 = (undefined4 *)(iVar8 + 0x30);
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      fVar14 = (float10)FUN_004d7260();
      *(float *)(iVar8 + 0x60) = (float)ABS(fVar14);
      iVar9 = (**(code **)(*piVar6 + 0x154))();
      if (*(int *)(iVar9 + 0x1c) != 0) {
        iVar9 = (**(code **)(*piVar6 + 0x154))();
        (**(code **)(**(int **)(iVar9 + 0x1c) + 0x84))(iVar8,0);
      }
    }
    iVar8 = (**(code **)(*in_ECX + 0x154))();
    if ((iVar8 != 0) && (iVar8 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar8 + 4) == '\x1a'))
    {
      uVar7 = (**(code **)(*in_ECX + 0x154))();
      piVar6 = in_ECX;
      (**(code **)(*in_ECX + 0x170))();
      FUN_004b1600(piVar6,uVar7);
    }
    cVar3 = FUN_0041f830(8);
    FUN_004de460(cVar3 != '\0',1);
    uVar7 = (**(code **)(*in_ECX + 0x154))(1);
    FUN_00897a20(uVar7);
    uVar15 = 1;
    uVar7 = 0;
    (**(code **)(*in_ECX + 0x154))(0,1);
    FUN_00707370(uVar7,uVar15);
    (**(code **)(*in_ECX + 0x154))();
    FUN_00707610();
    (**(code **)(*in_ECX + 0x154))();
    FUN_00707980();
  }
  iVar8 = FUN_0041e6b0();
  if ((iVar8 != 0) && (((uint)in_ECX[2] >> 0xe & 1) == 0)) {
    iVar8 = FUN_0042b410();
    if (iVar8 == 0) {
      FUN_004d76d0();
      return;
    }
    cVar3 = FUN_004db4a0();
    if (cVar3 == '\0') {
      FUN_004d7040(1);
    }
    iVar8 = FUN_0041e6b0();
    if (iVar8 == 0) {
      FUN_004d7640();
    }
    FUN_0042b420(in_ECX);
    bVar2 = false;
    iVar8 = FUN_0041e690();
    if ((iVar8 != 0) && (iVar8 = FUN_0041e690(), iVar8 != 0)) {
      FUN_0041f5d0();
      bVar2 = true;
    }
    iVar8 = FUN_0041e7b0();
    if ((iVar8 == 0) || (iVar8 = FUN_0041e7b0(), iVar8 == 0)) {
      if (!bVar2) {
        return;
      }
    }
    else {
      FUN_004db900();
    }
    FUN_004a7a60("Conflicting shared data removed from linked door reference.");
  }
  return;
}



void FUN_004df820(void)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *in_ECX;
  bool bVar10;
  
  uVar8 = DAT_00b34d88;
  uVar2 = DAT_00b06b18;
  if (((uint)in_ECX[2] >> 3 & 1) == 0) {
    DAT_00b06b18 = 1;
    DAT_00b34d88 = 0;
    if ((in_ECX[7] != 0) && ((*(uint *)(in_ECX[7] + 8) >> 5 & 1) != 0)) {
      (**(code **)(*in_ECX + 0x8c))();
    }
    iVar4 = FUN_00983ffd((double)(float)in_ECX[0xb]);
    if (((((iVar4 == 0) || (iVar4 = FUN_00983ffd((double)(float)in_ECX[0xc]), iVar4 == 0)) ||
         (iVar4 = FUN_00983ffd((double)(float)in_ECX[0xd]), iVar4 == 0)) ||
        ((iVar4 = __isnan((double)(float)in_ECX[0xb]), iVar4 != 0 ||
         (iVar4 = __isnan((double)(float)in_ECX[0xc]), iVar4 != 0)))) ||
       (iVar4 = __isnan((double)(float)in_ECX[0xd]), iVar4 != 0)) {
      FUN_004a7a60();
      in_ECX[0xb] = DAT_00b3f9a8;
      in_ECX[0xc] = DAT_00b3f9ac;
      in_ECX[0xd] = DAT_00b3f9b0;
    }
    iVar4 = FUN_00983ffd((double)(float)in_ECX[8]);
    if (((iVar4 == 0) || (iVar4 = FUN_00983ffd((double)(float)in_ECX[9]), iVar4 == 0)) ||
       ((iVar4 = FUN_00983ffd((double)(float)in_ECX[10]), iVar4 == 0 ||
        (((iVar4 = __isnan((double)(float)in_ECX[8]), iVar4 != 0 ||
          (iVar4 = __isnan((double)(float)in_ECX[9]), iVar4 != 0)) ||
         (iVar4 = __isnan((double)(float)in_ECX[10]), iVar4 != 0)))))) {
      FUN_004a7a60();
      in_ECX[8] = DAT_00b3f9a8;
      in_ECX[9] = DAT_00b3f9ac;
      in_ECX[10] = DAT_00b3f9b0;
    }
    FUN_00426270();
    iVar4 = (**(code **)(*in_ECX + 0x170))();
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar4 + 4) == '\x18'))
    {
      FUN_00680090();
      iVar4 = (**(code **)(*in_ECX + 0x170))();
      if (iVar4 == DAT_00b35ebc) {
        FUN_0065fd20();
      }
    }
    cVar3 = (**(code **)(*in_ECX + 400))();
    if (cVar3 == '\0') {
      iVar4 = (**(code **)(*in_ECX + 0x170))();
      bVar1 = *(byte *)(iVar4 + 4);
      if ((bVar1 != 0x1c) && ((bVar1 < 0x1e || (0x20 < bVar1)))) {
        (**(code **)(*in_ECX + 0xf8))(DAT_00b3f9a8,DAT_00b3f9ac,DAT_00b3f9b0);
      }
    }
    else {
      cVar3 = FUN_005e0260();
      if (cVar3 == '\0') {
        (**(code **)(*in_ECX + 0x37c))();
      }
      cVar3 = FUN_005e04e0();
      if ((cVar3 == '\0') && (cVar3 = FUN_004d7dd0(), cVar3 != '\0')) {
        FUN_005e6680();
        FUN_00674550(in_ECX,3);
      }
    }
    if ((((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) == 0) ||
        ((*(uint *)(DAT_00b33b00 + 0x18) >> 6 & 1) != 0)) && (iVar4 = FUN_00420260(), iVar4 != 0)) {
      FUN_0045a500();
      if ((*(uint *)(DAT_00b33b00 + 0x18) >> 6 & 1) == 0) {
        FUN_0045a530();
      }
      FUN_00420340();
      FUN_0046aba0();
      FUN_0045a530();
    }
    FUN_004dbf90();
    FUN_0046ab80();
    bVar10 = DAT_00b34d88 != 0;
    DAT_00b06b18 = uVar2;
    DAT_00b34d88 = uVar8;
    if (bVar10) {
      if ((in_ECX[0x10] == 0) || (cVar3 = FUN_004c97f0(), cVar3 == '\0')) {
        piVar9 = (int *)in_ECX[0x10];
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)(**(code **)(*in_ECX + 0x170))();
          iVar4 = in_ECX[3];
          iVar6 = (**(code **)(*in_ECX + 0x170))();
          uVar8 = (**(code **)(*piVar9 + 0xd4))(*(undefined4 *)(iVar6 + 0xc),&DAT_00a2f7ec,iVar4);
          FUN_004a7a60("Errors were encountered during InitItem for reference:\n\nBase: \'%s\' (%08X)\nRef: \'%s\' (%08X)\nCell: NONE\n\nSee Warnings file for more information."
                       ,uVar8);
        }
        else {
          piVar5 = (int *)(**(code **)(*in_ECX + 0x170))();
          iVar4 = in_ECX[3];
          iVar6 = (**(code **)(*in_ECX + 0x170))();
          uVar8 = *(undefined4 *)(iVar6 + 0xc);
          uVar7 = FUN_004c9aa0();
          uVar7 = FUN_004c9a80(uVar7);
          uVar7 = (**(code **)(*piVar9 + 0xd4))(uVar7);
          uVar8 = (**(code **)(*piVar5 + 0xd4))(uVar8,&DAT_00a2f7ec,iVar4,uVar7);
          FUN_004a7a60("Errors were encountered during InitItem for reference:\n\nBase: \'%s\' (%08X)\nRef: \'%s\' (%08X)\nCell: \'%s\' (%i, %i) (%08X)\n\nSee Warnings file for more information."
                       ,uVar8);
        }
      }
      else {
        piVar9 = (int *)in_ECX[0x10];
        piVar5 = (int *)(**(code **)(*in_ECX + 0x170))();
        iVar4 = in_ECX[3];
        iVar6 = (**(code **)(*in_ECX + 0x170))();
        uVar8 = *(undefined4 *)(iVar6 + 0xc);
        uVar7 = (**(code **)(*piVar9 + 0xd4))();
        uVar8 = (**(code **)(*piVar5 + 0xd4))(uVar8,&DAT_00a2f7ec,iVar4,uVar7);
        FUN_004a7a60("Errors were encountered during InitItem for reference:\n\nBase: \'%s\' (%08X)\nRef: \'%s\' (%08X)\nCell: \'%s\' (%08X)\n\nSee Warnings file for more information."
                     ,uVar8);
      }
    }
    FUN_004d70e0();
    iVar4 = FUN_004d6d40();
    if (iVar4 != 0) {
      piVar9 = (int *)FUN_00485e00();
      FUN_00488420();
      FUN_0048e060();
      if ((((int *)*piVar9)[1] == 0) && (*(int *)*piVar9 == 0)) {
        FUN_0041f5f0();
      }
    }
    in_ECX[2] = in_ECX[2] & 0xffdfffff;
  }
  return;
}



undefined1 FUN_004dfe70(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  
  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == DAT_00b05e20)) {
    if (param_1[3] - 8U < 3) {
      uVar3 = FUN_0046b250(param_1[2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
      iVar4 = FUN_009832e6(uVar3);
      if (iVar4 != 0) {
        iVar5 = (*(code *)**(undefined4 **)(in_ECX + 0x18))();
        if (iVar5 == iVar4) {
          cVar1 = FUN_004db4a0();
          if (cVar1 == '\0') {
            if ((*(uint *)(in_ECX + 8) & 0x8000) == 0) {
              return 0;
            }
            if (param_1[3] == 9) {
              return 1;
            }
          }
          else if (param_1[3] - 9U < 2) {
            return 1;
          }
        }
      }
    }
    else {
      piVar6 = (int *)(*(code *)**(undefined4 **)(in_ECX + 0x18))();
      uVar2 = (**(code **)(*piVar6 + 0x30))(param_1);
    }
  }
  return uVar2;
}


