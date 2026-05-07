
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00580120(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *in_ECX;
  int iVar7;
  char local_804 [1024];
  char local_404 [1024];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_804;
  if (*(ushort *)(in_ECX + 0x1c) == 0xffff) {
    pcVar2 = *(char **)(in_ECX + 0x18);
    pcVar5 = pcVar2 + 1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)pcVar5;
  }
  else {
    uVar3 = (uint)*(ushort *)(in_ECX + 0x1c);
  }
  if (*(ushort *)(in_ECX + 0x1c) == 0xffff) {
    pcVar2 = *(char **)(in_ECX + 0x18);
    pcVar5 = pcVar2 + 1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar2 - (int)pcVar5;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 0x1c);
  }
  if (uVar4 == 0) {
    local_404[0] = '\0';
  }
  else {
    pcVar5 = *(char **)(in_ECX + 0x18);
    iVar6 = -(int)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[(int)(local_404 + iVar6)] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  iVar7 = 0;
  iVar6 = 0;
  if (-1 < (int)uVar3) {
    cVar1 = *in_ECX;
    do {
      if ((cVar1 != '\0') && (iVar7 == *(int *)(in_ECX + 4))) {
        local_804[iVar6] = (-(in_ECX[8] != '\0') & 0xfdU) + 0x7f;
        iVar6 = iVar6 + 1;
      }
      local_804[iVar6] = local_404[iVar7];
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar7 <= (int)uVar3);
  }
  local_804[iVar6] = '\0';
  FUN_004028d0(local_804,0);
  if (*(ushort *)(in_ECX + 0x24) == 0xffff) {
    pcVar2 = *(char **)(in_ECX + 0x20);
    pcVar5 = pcVar2 + 1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)pcVar5;
  }
  else {
    uVar3 = (uint)*(ushort *)(in_ECX + 0x24);
  }
  if (uVar3 == 0) {
    FUN_004028d0(&DAT_00a36430,0);
  }
  return *(undefined4 *)(in_ECX + 0x20);
}



void FUN_00580270(byte param_1)

{
  FUN_0057e450();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00580290(byte param_1)

{
  FUN_0057e4b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005802b0(void)

{
  float fVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float10 fVar8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009beb74;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x36] = 0;
  *(undefined1 *)(in_ECX + 0x37) = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 1;
  *(undefined1 *)((int)in_ECX + 9) = 0;
  *(undefined1 *)((int)in_ECX + 10) = 0xff;
  *(undefined1 *)((int)in_ECX + 0xb) = 0xff;
  *(undefined1 *)(in_ECX + 3) = 0xff;
  *(undefined1 *)((int)in_ECX + 0xd) = 0xff;
  *(undefined2 *)((int)in_ECX + 0x7e) = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  puVar4 = (undefined4 *)in_ECX[0x1e];
  local_4 = 2;
  if (puVar4 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar4 + 1);
    if ((LVar3 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    in_ECX[0x1e] = 0;
  }
  in_ECX[0xe] = 0;
  in_ECX[4] = 0x50;
  puVar4 = (undefined4 *)in_ECX[0x1e];
  if (puVar4 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar4 + 1);
    if ((LVar3 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    in_ECX[0x1e] = 0;
  }
  in_ECX[0xf] = 0;
  in_ECX[0x43] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 0x45) = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  *(undefined1 *)(in_ECX + 0x2a) = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0xff;
  in_ECX[0x2d] = 0;
  *(undefined1 *)(in_ECX + 0x2e) = 0;
  *(undefined1 *)((int)in_ECX + 0xb9) = 1;
  in_ECX[0x23] = 100;
  *(undefined1 *)(in_ECX + 0x25) = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  if ((float)DAT_00b06c4c <= (float)DAT_00b06c50) {
    fVar1 = 1280.0;
  }
  else {
    fVar1 = ((float)DAT_00b06c4c / (float)DAT_00b06c50) * 960.0;
  }
  fVar7 = (float10)FUN_00986300(uVar2);
  fVar8 = (float10)FUN_00986000();
  in_ECX[0x1d] = (int)((float)fVar8 * ((fVar1 * 0.5) / (float)fVar7));
  if (in_ECX[0x1e] == 0) {
    puVar4 = (undefined4 *)FUN_00401f00(0x1c);
    local_4._0_1_ = 3;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar4 = &PTR_FUN_00a3d604;
      *(undefined2 *)(puVar4 + 6) = 0xec;
      *(undefined1 *)((int)puVar4 + 0x1a) = 0;
    }
    puVar5 = (undefined4 *)in_ECX[0x1e];
    local_4 = CONCAT31(local_4._1_3_,2);
    if (puVar5 != puVar4) {
      if (puVar5 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar5 + 1);
        if ((LVar3 == 0) && (puVar5 != (undefined4 *)0x0)) {
          (**(code **)*puVar5)(1);
        }
      }
      in_ECX[0x1e] = (int)puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
    }
    *(ushort *)(in_ECX[0x1e] + 0x18) = *(ushort *)(in_ECX[0x1e] + 0x18) | 1;
    *(ushort *)(in_ECX[0x1e] + 0x18) = *(ushort *)(in_ECX[0x1e] + 0x18) & 0xdfff;
  }
  puVar5 = (undefined4 *)FUN_0057ed20(DAT_00b333d4,"Menu3DRoot",1);
  puVar4 = (undefined4 *)in_ECX[1];
  if (puVar4 != puVar5) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar4 + 1);
      if ((LVar3 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    in_ECX[1] = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  puVar5 = (undefined4 *)FUN_0057ed20(DAT_00b333d0,"MenuRoot",0);
  puVar4 = (undefined4 *)*in_ECX;
  if (puVar4 != puVar5) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar4 + 1);
      if ((LVar3 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *in_ECX = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  FUN_00576a30();
  FUN_00587b20(1);
  FUN_005888a0();
  iVar6 = FUN_00401f00(0xc);
  local_4._0_1_ = 4;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00538b20();
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  in_ECX[0x42] = iVar6;
  puVar4 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    *puVar4 = 0;
    puVar4[2] = 0x3a83126f;
  }
  in_ECX[0x4c] = (int)puVar4;
  puVar4[3] = puVar4;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005806d0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  float fStack_cc;
  float fStack_c8;
  int *local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  int *local_b4;
  uint uStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [4];
  float afStack_84 [4];
  float fStack_74;
  float fStack_68;
  undefined1 auStack_60 [28];
  int iStack_44;
  ushort uStack_3e;
  undefined1 auStack_30 [36];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009beb98;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff24;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00589b70(0x3ed,uVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_005a4840();
  }
  local_b4 = (int *)0x0;
  local_c4 = (int *)0x0;
  if (DAT_00b3bb0c == 0) {
    pfVar4 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
    local_c0 = *pfVar4;
    local_bc = pfVar4[1];
    local_b8 = pfVar4[2];
    fStack_c8 = (float)DAT_00b333c4[0x175];
    fVar10 = (float10)(**(code **)(*DAT_00b333c4 + 0xec))();
    local_b8 = (float)(fVar10 * (float10)fStack_c8 + (float10)local_b8);
  }
  else {
    local_c0 = *(float *)(DAT_00b3bb0c + 0x88);
    local_bc = *(float *)(DAT_00b3bb0c + 0x8c);
    local_b8 = *(float *)(DAT_00b3bb0c + 0x90);
  }
  fVar10 = (float10)(**(code **)(*DAT_00b333c4 + 0x1e0))();
  FUN_0070fdd0((float)fVar10);
  fVar10 = (float10)FUN_004a9720();
  FUN_0070fd30((float)fVar10);
  pfVar4 = (float *)FUN_007100a0(auStack_60,auStack_30);
  pfVar9 = afStack_84;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar9 = pfVar9 + 1;
  }
  fStack_ac = afStack_84[1];
  fStack_a8 = fStack_74;
  fStack_a4 = fStack_68;
  fStack_c8 = (float)*(int *)(in_ECX + 0x10);
  if (*(char *)((int)DAT_00b333c4 + 0x6e6) != '\0') {
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(0x3c);
    fStack_c8 = (float)iVar7 + fStack_c8;
  }
  uVar2 = 0;
  if (iVar3 != 0) {
    piVar8 = (int *)0x0;
    fStack_cc = 0.0;
    _DAT_00b3a6e4 = 1;
    if (((DAT_00b135a8 == '\0') && (DAT_00b09868 == '\0')) && (DAT_00b09870 == '\0')) {
      _DAT_00b3a6e4 = 2;
      cVar1 = FUN_00538910();
      if (((cVar1 == '\0') && (DAT_00b333c4 != (int *)0x0)) && (iVar3 = FUN_0065a2c0(), iVar3 != 0))
      {
        FUN_0057e270(&uStack_b0);
        puVar5 = (undefined4 *)FUN_00403c00();
        FUN_00538d10(*puVar5,uStack_b0 >> 0x10);
      }
      _DAT_00b3a6e4 = 3;
      cVar1 = FUN_00538910();
      if (cVar1 != '\0') {
        _DAT_00b3a6e4 = 0x21;
        iVar3 = FUN_006ecc80();
        if (iVar3 != 0) {
          FUN_006ecc80();
          iVar3 = FUN_004440c0();
          iVar7 = FUN_00531f10();
          if (iVar7 != iVar3) {
            FUN_006ecc80();
            uVar6 = FUN_004440c0();
            FUN_00538ae0(uVar6);
          }
        }
        _DAT_00b3a6e4 = 0x22;
        iVar3 = FUN_0065abe0(auStack_88);
        if (*(uint *)(*(int *)(in_ECX + 0x108) + 8) != (uint)*(ushort *)(iVar3 + 2)) {
          FUN_00538a90((uint)*(ushort *)(iVar3 + 2));
        }
        _DAT_00b3a6e4 = 0x23;
        piVar8 = (int *)FUN_00538ec0(&local_c0,&fStack_ac,fStack_c8,&fStack_cc,in_ECX + 0xdc);
      }
    }
    else {
      FUN_00959bc0();
      uStack_4 = 0;
      FUN_0065abe0(&uStack_b0);
      cVar1 = FUN_00442e70(auStack_60,&local_c0,&fStack_ac,fStack_c8,0x1f);
      if ((cVar1 != '\0') && (uStack_3e != 0)) {
        do {
          piVar8 = (int *)FUN_004dc270(**(undefined4 **)(iStack_44 + uVar2 * 4));
          if (piVar8 != DAT_00b333c4) {
            fStack_cc = *(float *)(*(int *)(iStack_44 + uVar2 * 4) + 0x14);
            break;
          }
          uVar2 = uVar2 + 1;
          piVar8 = (int *)0x0;
        } while (uVar2 < uStack_3e);
      }
      uStack_4 = 0xffffffff;
      FUN_00959ec0();
    }
    _DAT_00b3a6e4 = 4;
    if (piVar8 == (int *)0x0) {
      local_c4 = (int *)0x0;
      local_b4 = (int *)0x0;
    }
    else {
      cVar1 = (**(code **)(*piVar8 + 400))();
      if (cVar1 != '\0') {
        FUN_005a89a0(piVar8);
      }
      if ((*(char *)((int)DAT_00b333c4 + 0x6e6) == '\0') ||
         (local_b4 = piVar8, fStack_cc <= (float)*(int *)(in_ECX + 0x10))) {
        local_c4 = piVar8;
      }
    }
    fStack_a0 = fStack_ac * fStack_cc;
    *(int **)(in_ECX + 0xcc) = local_b4;
    *(int **)(in_ECX + 200) = local_c4;
    fStack_9c = fStack_a8 * fStack_cc;
    fStack_98 = fStack_cc * fStack_a4;
    fStack_94 = local_c0 + fStack_a0;
    *(float *)(in_ECX + 0xd0) = fStack_94;
    fStack_90 = local_bc + fStack_9c;
    *(float *)(in_ECX + 0xd4) = fStack_90;
    fStack_8c = fStack_98 + local_b8;
    *(float *)(in_ECX + 0xd8) = fStack_8c;
    _DAT_00b3a6e4 = 5;
    cVar1 = FUN_005a4980(piVar8,CONCAT31((int3)((uint)fStack_94 >> 8),*(int *)(in_ECX + 200) == 0),0
                        );
    if (cVar1 == '\0') {
      FUN_00578d30(0);
    }
    else {
      FUN_00578d50(piVar8);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00580ba0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar7;
  undefined4 uVar8;
  int local_18;
  int local_14;
  int local_10;
  undefined4 uStack_c;
  int *piStack_4;
  
  local_18 = *(int *)(DAT_00b33398 + 0x20);
  FUN_00587b20(1);
  piVar2 = (int *)FUN_005877d0();
  if (piVar2 != (int *)0x0) {
    iVar5 = piVar2[1];
    local_10 = iVar5;
    cVar1 = (**(code **)(*piVar2 + 0x38))(param_1,0x3f800000);
    if (((cVar1 == '\0') && (iVar5 != 0)) && (param_1 != 0)) {
      if (((param_1 == 1) || (param_1 == 2)) || ((param_1 == 4 || (param_1 == 3)))) {
        *(undefined1 *)(in_ECX + 0xb9) = 0;
        piStack_4 = (int *)0x0;
        if (param_1 == 1) {
          piStack_4 = (int *)0xff1;
        }
        else if (param_1 == 2) {
          piStack_4 = (int *)0xff2;
        }
        else if (param_1 == 4) {
          piStack_4 = (int *)0xff3;
        }
        else if (param_1 == 3) {
          piStack_4 = (int *)0xff4;
        }
        iVar5 = *(int *)(in_ECX + 0x88);
        if (iVar5 == 0) {
          local_14 = -0x80000000;
          iVar5 = FUN_0057da90(&local_14,0);
          FUN_0057f9f0(iVar5,0xfdd,0);
          if ((iVar5 == 0) && (iVar5 = FUN_0058e3b0(piStack_4,&stack0xffffffe0), iVar5 != 0)) {
            FUN_00588bd0(0xfe5);
            iVar4 = FUN_009828c0();
            if (iVar4 != 0) {
              FUN_0057de50(iVar4);
            }
            fVar7 = (float10)FUN_00588bd0(0xfe2);
            piStack_4 = (int *)(float)(fVar7 + (float10)1.0);
            FUN_0058ceb0(0xfe3,piStack_4);
            FUN_0058ceb0(0xfe1,0x3f800000);
            FUN_0058ceb0(0xfe1,0);
            iVar4 = *piVar2;
            FUN_00588bd0(0xfa8);
            uVar8 = FUN_009828c0(iVar5);
            (**(code **)(iVar4 + 0xc))(uVar8);
            return;
          }
        }
        else {
          local_14 = iVar5;
          iVar4 = FUN_0058e3b0(piStack_4,&stack0xffffffe0);
          local_10 = 0;
          uStack_c = 0;
          FUN_00446cb0(iVar5);
          while (iVar4 != 0) {
            piVar2 = &local_10;
            do {
              if (*piVar2 == iVar4) goto LAB_0058128a;
              piVar2 = (int *)piVar2[1];
            } while (piVar2 != (int *)0x0);
            fVar7 = (float10)FUN_00588bd0(0xfa1);
            if (((fVar7 != (float10)1.0) &&
                (fVar7 = (float10)FUN_00588bd0(0xfc9), fVar7 == (float10)2.0)) &&
               (fVar7 = (float10)FUN_00588bd0(0xff0), fVar7 != (float10)-99.0)) {
LAB_0058128a:
              if (((iVar4 != 0) && (cVar1 = FUN_00446c30(iVar4), cVar1 != '\0')) &&
                 ((fVar7 = (float10)FUN_00588bd0(0xfa1), fVar7 == (float10)1.0 ||
                  ((fVar7 = (float10)FUN_00588bd0(0xfc9), fVar7 != (float10)2.0 ||
                   (fVar7 = (float10)FUN_00588bd0(0xff0), fVar7 == (float10)-99.0)))))) {
                iVar4 = 0;
              }
              break;
            }
            FUN_00446cb0(iVar4);
            fVar7 = (float10)FUN_00588bd0(0xff6);
            if (fVar7 != (float10)108.0) goto LAB_00581277;
            iVar5 = *(int *)(iVar4 + 0x38);
            iVar4 = 0;
            local_18 = 0;
            if (iVar5 == 0) goto LAB_00581277;
            do {
              iVar3 = *(int *)(iVar5 + 8);
              iVar5 = *(int *)(iVar5 + 4);
              cVar1 = FUN_005893b0();
              if ((cVar1 != '\0') && (iVar6 = FUN_00588b50(0xff0), iVar6 != 0)) {
                FUN_00588bd0(0xff0);
                iVar6 = FUN_009828c0();
                if (iVar4 < iVar6) {
                  iVar4 = iVar6;
                  local_18 = iVar3;
                }
              }
            } while (iVar5 != 0);
            iVar4 = local_18;
            if (local_18 == 0) {
LAB_00581277:
              iVar4 = FUN_0058e3b0(piStack_4,&stack0xffffffe0);
            }
          }
          FUN_004526e0();
          if (iVar4 != 0) {
            if (((iVar4 != local_14) && (*(int *)(DAT_00b33398 + 0x24) != 0)) &&
               (iVar5 = FUN_006ade50("UIMenuFocus",0x121,1), iVar5 != 0)) {
              FUN_006b7190(0);
              FUN_006b73e0();
              FUN_00401f20(iVar5);
            }
            FUN_0057f9f0(iVar4,0xfdd,piStack_4);
            return;
          }
          FUN_0057f9f0(local_14,0xfdd,piStack_4);
        }
      }
      else {
        iVar5 = *(int *)(*(int *)(in_ECX + 0x68) + 0x38);
        while (iVar5 != 0) {
          piVar2 = (int *)(iVar5 + 8);
          iVar5 = *(int *)(iVar5 + 4);
          if (((*piVar2 != 0) &&
              (piVar2 = (int *)FUN_005898f0(), in_ECX = unaff_EBX, piVar2 != (int *)0x0)) &&
             (cVar1 = FUN_005893b0(), cVar1 != '\0')) {
            iVar4 = *piVar2;
            piStack_4 = (int *)FUN_006da150(param_1);
            cVar1 = (**(code **)(iVar4 + 0x38))(param_1,(float)(int)piStack_4);
            if (cVar1 != '\0') {
              FUN_0068f970(param_1);
              return;
            }
          }
        }
        if (param_1 == 5) {
          uVar8 = 0x3f5;
          FUN_00587b20(1,0x3f5);
          cVar1 = FUN_005878b0(uVar8);
          if (cVar1 == '\0') {
            uVar8 = 0x414;
            FUN_00587b20(1,0x414);
            cVar1 = FUN_005878b0(uVar8);
            if (cVar1 == '\0') {
              uVar8 = 0x3ef;
              FUN_00587b20(1,0x3ef);
              cVar1 = FUN_005878b0(uVar8);
              if ((cVar1 == '\0') && (DAT_00b143ae != '\0')) {
                FUN_0057b560();
              }
            }
          }
        }
        piStack_4 = (int *)0x0;
        if (param_1 == 9) {
          piStack_4 = (int *)0xff7;
        }
        else if (param_1 == 10) {
          piStack_4 = (int *)0xff8;
        }
        else if (param_1 == 0xb) {
          piStack_4 = (int *)0xff9;
        }
        else if (param_1 == 0xc) {
          piStack_4 = (int *)0xffa;
        }
        else if (param_1 == 0xe) {
          piStack_4 = (int *)0xffc;
        }
        else if (param_1 == 0xd) {
          piStack_4 = (int *)0xffb;
        }
        else if (param_1 == 0x10) {
          piStack_4 = (int *)0xffe;
        }
        else if (param_1 == 0xf) {
          piStack_4 = (int *)0xffd;
        }
        else if (param_1 == 5) {
          piStack_4 = (int *)0x1001;
        }
        iVar5 = *(int *)(in_ECX + 0x88);
        if ((*(int *)(in_ECX + 0x88) == 0) &&
           (iVar5 = *(int *)(in_ECX + 0x98), *(int *)(in_ECX + 0x98) == 0)) {
          iVar5 = local_18;
        }
        while (cVar1 = FUN_005893b0(), cVar1 == '\0') {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            return;
          }
        }
        if (iVar5 != 0) {
          iVar3 = FUN_0058e3b0(piStack_4,&local_18);
          iVar4 = iVar5;
          while ((iVar3 == 0 && (iVar4 != 0))) {
            iVar4 = *(int *)(iVar4 + 0x10);
            if (iVar4 != 0) {
              iVar3 = FUN_0058e3b0(piStack_4,&local_18);
            }
          }
          if (param_1 == -2) {
            param_1 = 9;
            iVar3 = iVar5;
          }
          if (((iVar3 != 0) && (cVar1 = FUN_005893b0(), cVar1 != '\0')) &&
             (fVar7 = (float10)FUN_00588bd0(0xfc9), fVar7 == (float10)2.0)) {
            if (local_18 == 0xfe1) {
LAB_00580e73:
              FUN_00588bd0(0xfe5);
              iVar4 = FUN_009828c0();
              if (iVar4 != 0) {
                FUN_0057de50(iVar4);
              }
              fVar7 = (float10)FUN_00588bd0(0xfe2);
              piStack_4 = (int *)(float)(fVar7 + (float10)1.0);
              FUN_0058ceb0(0xfe3,piStack_4);
              FUN_0058ceb0(0xfe1,0x3f800000);
              FUN_0058ceb0(0xfe1,0);
              piStack_4 = (int *)FUN_005898f0();
              iVar4 = *piStack_4;
              FUN_00588bd0(0xfa8);
              uVar8 = FUN_009828c0(iVar5);
              (**(code **)(iVar4 + 0xc))(uVar8);
              if (unaff_ESI == 0xfdf) {
                *(uint *)(unaff_EDI + 0x118) = *(uint *)(unaff_EDI + 0x118) & 0xfffb;
              }
              FUN_0068f970(param_1);
              FUN_0068f970(6);
              return;
            }
            if (local_18 == 0xfdf) {
              *(uint *)(unaff_EBX + 0x118) = *(uint *)(unaff_EBX + 0x118) | 4;
              goto LAB_00580e73;
            }
          }
          if ((param_1 == 9) && (fVar7 = (float10)FUN_00588bd0(0xfc9), fVar7 == (float10)2.0)) {
            FUN_00588bd0(0xfe5);
            iVar4 = FUN_009828c0();
            if (iVar4 != 0) {
              FUN_0057de50(iVar4);
            }
            fVar7 = (float10)FUN_00588bd0(0xfe2);
            piStack_4 = (int *)(float)(fVar7 + (float10)1.0);
            FUN_0058ceb0(0xfe3,piStack_4);
            FUN_0058ceb0(0xfe1,0x3f800000);
            FUN_0058ceb0(0xfe1,0);
            piVar2 = (int *)FUN_005898f0();
            iVar4 = *piVar2;
            FUN_00588bd0(0xfa8);
            uVar8 = FUN_009828c0(iVar5);
            (**(code **)(iVar4 + 0xc))(uVar8);
            FUN_0068f970(9);
            return;
          }
        }
      }
    }
  }
  return;
}



int * FUN_00581390(char param_1)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int *in_ECX;
  int *piVar13;
  int *piVar14;
  int *unaff_FS_OFFSET;
  float10 fVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int *local_70;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 *local_28;
  int iStack_20;
  ushort uStack_1a;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bebc8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff7c;
  *unaff_FS_OFFSET = (int)&local_c;
  *(ushort *)(in_ECX[0x16] + 0x18) = *(ushort *)(in_ECX[0x16] + 0x18) | 1;
  local_70 = (int *)0x0;
  FUN_00959bc0(uVar6);
  puVar11 = (undefined4 *)*in_ECX;
  local_4 = 0;
  local_2c = 0;
  local_2b = 1;
  if (local_28 != puVar11) {
    if (((local_28 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(local_28 + 1), LVar7 == 0)
        ) && (local_28 != (undefined4 *)0x0)) {
      (**(code **)*local_28)(1);
    }
    local_28 = puVar11;
    if (puVar11 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar11 + 1);
    }
  }
  puVar17 = auStack_64;
  puVar16 = auStack_58;
  uVar8 = FUN_009828c0(puVar16,puVar17);
  uVar9 = FUN_009828c0(uVar8);
  FUN_0070d300(uVar9,uVar8,puVar16,puVar17);
  cVar5 = FUN_00959d60(auStack_58,auStack_64,0);
  if ((cVar5 != '\0') && (iVar10 = 0, uStack_1a != 0)) {
    do {
      puVar3 = *(uint **)(iStack_20 + iVar10 * 4);
      piVar14 = (int *)*puVar3;
      iVar10 = iVar10 + 1;
      if (piVar14 == (int *)0x0) {
LAB_0058157a:
        piVar14 = *(int **)(*puVar3 + 0x1c);
        if (piVar14 == (int *)0x0) {
          uVar6 = 0;
        }
        else {
          for (puVar11 = (undefined4 *)(**(code **)(*piVar14 + 4))(); puVar11 != (undefined4 *)0x0;
              puVar11 = (undefined4 *)puVar11[1]) {
            if (puVar11 == &DAT_00b3fab0) {
              bVar4 = 1;
              goto LAB_005815a6;
            }
          }
          bVar4 = 0;
LAB_005815a6:
          uVar6 = -(uint)bVar4 & (uint)piVar14;
        }
      }
      else {
        for (puVar11 = (undefined4 *)(**(code **)(*piVar14 + 4))(); puVar11 != (undefined4 *)0x0;
            puVar11 = (undefined4 *)puVar11[1]) {
          if (puVar11 == &DAT_00b3fab0) {
            bVar4 = 1;
            goto LAB_00581570;
          }
        }
        bVar4 = 0;
LAB_00581570:
        uVar6 = -(uint)bVar4 & (uint)piVar14;
        if (uVar6 == 0) goto LAB_0058157a;
      }
      piVar14 = (int *)0x0;
      if (uVar6 == 0) {
LAB_005815df:
        if (piVar14 != (int *)0x0) goto LAB_005815e7;
      }
      else {
        piVar14 = (int *)FUN_00588e60(uVar6);
        while (piVar14 == (int *)0x0) {
          if (uVar6 == 0) goto LAB_005815df;
          uVar6 = *(uint *)(uVar6 + 0x1c);
          piVar14 = (int *)FUN_00588e60(uVar6);
        }
LAB_005815e7:
        cVar5 = FUN_0057d240(piVar14);
        if (cVar5 != '\0') {
          fVar15 = (float10)FUN_00588bd0(0xfc8);
          if ((fVar15 == (float10)2.0) && (piVar14[9] != 0)) {
            FUN_004784a0();
            FUN_00477f90();
            iVar12 = piVar14[9];
            if ((*(short *)(iVar12 + 0xb6) != 0) && (**(int **)(iVar12 + 0xb0) != 0)) {
              if (*(short *)(iVar12 + 0xb6) == 0) {
                iVar12 = 0;
              }
              else {
                iVar12 = **(int **)(iVar12 + 0xb0);
              }
              iVar12 = FUN_00560920(&DAT_00b352a4,iVar12);
              if (iVar12 != 0) {
                iStack_4c = *(int *)(iVar12 + 0xc0);
                iStack_48 = *(int *)(iVar12 + 0xc4);
                iStack_44 = *(int *)(iVar12 + 200);
                iStack_40 = *(int *)(iVar12 + 0xcc);
                if ((((iStack_4c != 0) || (iStack_44 != 0)) || (iStack_48 != 0)) || (iStack_40 != 0)
                   ) {
                  fVar1 = (float)in_ECX[0xb];
                  fVar2 = (float)in_ECX[0xd];
                  if (((fVar1 < (float)iStack_4c) ||
                      ((float)iStack_44 < fVar1 != ((float)iStack_44 == fVar1))) ||
                     ((fVar2 < (float)iStack_48 ||
                      ((float)iStack_40 < fVar2 != ((float)iStack_40 == fVar2)))))
                  goto LAB_0058175e;
                }
              }
            }
          }
          if ((piVar14 != (int *)0x0) &&
             (fVar15 = (float10)FUN_00588bd0(0xfc9), fVar15 == (float10)2.0)) {
            if ((param_1 != '\0') ||
               ((iVar10 = FUN_00588b50(0xfa8), iVar10 != 0 ||
                (piVar13 = (int *)piVar14[4], piVar13 == (int *)0x0)))) goto LAB_00581775;
            goto LAB_00581743;
          }
        }
      }
LAB_0058175e:
    } while (iVar10 < (int)(uint)uStack_1a);
  }
  goto LAB_005817a0;
  while (piVar13 = (int *)piVar13[4], piVar13 != (int *)0x0) {
LAB_00581743:
    iVar10 = FUN_00588b50(0xfa8);
    if (iVar10 != 0) {
      if (piVar13 != (int *)0x0) {
        piVar14 = piVar13;
      }
      break;
    }
  }
LAB_00581775:
  iVar10 = (**(code **)(*piVar14 + 0xc))();
  local_70 = piVar14;
  if (iVar10 == 0x387) {
    *(ushort *)((int)in_ECX + 0x7e) = (ushort)puVar3[6] >> 1;
  }
  else {
    *(undefined2 *)((int)in_ECX + 0x7e) = 0xffff;
  }
LAB_005817a0:
  *(ushort *)(in_ECX[0x16] + 0x18) = *(ushort *)(in_ECX[0x16] + 0x18) & 0xfffe;
  local_4 = 0xffffffff;
  FUN_00959ec0();
  *unaff_FS_OFFSET = local_c;
  return local_70;
}



void FUN_005817f0(byte param_1)

{
  FUN_0058fab0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00581810(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bec03;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[5] = &PTR_FUN_00a6909c;
  in_ECX[0xf] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xc] = &PTR_FUN_00a690ac;
  in_ECX[9] = 0;
  in_ECX[4] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  *(undefined1 *)((int)in_ECX + 6) = 0;
  *in_ECX = &PTR_FUN_00a69110;
  in_ECX[0x11] = 0;
  in_ECX[0x10] = 0x3f800000;
  local_4 = 1;
  puVar1 = (undefined4 *)in_ECX[0x11];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[0x11] = 0;
  }
  *(undefined1 *)(in_ECX + 0x12) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005818f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009bec33;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a69110;
  local_4 = 1;
  if (*(char *)(in_ECX + 1) == '\0') {
    FUN_0058da70(uVar2);
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0058fab0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00581980(byte param_1)

{
  FUN_005818f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005819a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bfa38;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a69138;
  local_4 = 0;
  if (*(char *)(in_ECX + 1) == '\0') {
    FUN_0058da70(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_0058fab0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00581a30(byte param_1)

{
  FUN_005819a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581a50(void)

{
  undefined4 *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  LONG LVar5;
  ushort uVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bec6e;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 2;
  if ((undefined4 *)in_ECX[0x20] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x20])(1,uVar4);
    in_ECX[0x20] = 0;
  }
  iVar2 = DAT_00b3a6fc;
  if (DAT_00b3a6fc != 0) {
    FUN_00585940();
    FUN_00401f20(iVar2);
  }
  DAT_00b3a6fc = 0;
  FUN_00572d90();
  FUN_00577270();
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *in_ECX = 0;
  }
  if ((in_ECX[1] != 0) && (puVar1 = (undefined4 *)in_ECX[1], puVar1 != (undefined4 *)0x0)) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  DAT_00b3a6d4 = 1;
  if ((undefined4 *)in_ECX[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1b])(1);
  }
  if ((undefined4 *)in_ECX[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1a])(1);
  }
  DAT_00b3a6d4 = 0;
  FUN_00587cf0();
  if ((undefined4 *)in_ECX[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[7])(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x1e];
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1e] = 0;
  }
  DAT_00b3a6e0 = 0;
  FUN_0058bd50();
  iVar2 = in_ECX[0x42];
  if (iVar2 != 0) {
    FUN_00538b60();
    FUN_00401f20(iVar2);
  }
  FUN_0057d200();
  FUN_00584db0();
  uVar4 = 0;
  uVar6 = DAT_00b13bce;
  if (DAT_00b13bce != 0) {
    do {
      iVar2 = *(int *)(DAT_00b13bc8 + uVar4 * 4);
      if (iVar2 != 0) {
        FUN_00401f20(*(undefined4 *)(iVar2 + 8));
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined2 *)(iVar2 + 0xe) = 0;
        *(undefined2 *)(iVar2 + 0xc) = 0;
        FUN_00401f20(iVar2);
        uVar6 = DAT_00b13bce;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    do {
      uVar4 = (uint)uVar3;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(DAT_00b13bc8 + uVar4 * 4) = 0;
    } while (uVar3 < DAT_00b13bce);
  }
  DAT_00b13bce = 0;
  _DAT_00b13bd0 = 0;
  puVar1 = (undefined4 *)in_ECX[0x1e];
  local_4._0_1_ = 1;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = (uint)local_4._1_3_ << 8;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 0xffffffff;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00581cc0(void)

{
  ushort *puVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int in_ECX;
  char unaff_BL;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009becb9;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = (int *)FUN_00401f00(0x44,uVar4);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5[2] = 0;
    *(undefined2 *)(piVar5 + 3) = 0;
    *(undefined2 *)((int)piVar5 + 0xe) = 0;
    piVar5[8] = 0;
    piVar5[6] = 0;
    piVar5[7] = 0;
    piVar5[5] = (int)&PTR_FUN_00a6909c;
    piVar5[0xf] = 0;
    piVar5[0xd] = 0;
    piVar5[0xe] = 0;
    piVar5[0xc] = (int)&PTR_FUN_00a690ac;
    piVar5[9] = 0;
    piVar5[4] = 0;
    *(undefined1 *)(piVar5 + 1) = 0;
    *(undefined1 *)((int)piVar5 + 6) = 0;
    *piVar5 = (int)&PTR_FUN_00a69138;
  }
  *(int **)(in_ECX + 0x68) = piVar5;
  (**(code **)(*piVar5 + 4))(0,"InterfaceManager: Menus Root",0);
  FUN_004028d0("MenuRoot",0);
  FUN_0058ceb0(0xfa6,0x40000000);
  FUN_0058ceb0(0x1771,0x447ac000);
  FUN_0058ceb0(0xfa7,0);
  if ((float)DAT_00b06c4c <= (float)DAT_00b06c50) {
    fVar3 = 1280.0;
  }
  else {
    fVar3 = ((float)DAT_00b06c4c / (float)DAT_00b06c50) * 960.0;
  }
  FUN_0058ceb0(0xfcb,fVar3);
  if ((float)DAT_00b06c50 <= (float)DAT_00b06c4c) {
    fVar3 = 960.0;
  }
  else {
    fVar3 = ((float)DAT_00b06c50 / (float)DAT_00b06c4c) * 1280.0;
  }
  FUN_0058ceb0(0xfca,fVar3);
  fVar10 = (float10)FUN_0057d330();
  FUN_0058ceb0(0xfda,(float)fVar10);
  fVar10 = (float10)FUN_0057d390();
  FUN_0058ceb0(0xfd9,(float)fVar10);
  FUN_005903e0();
  uVar6 = FUN_00590420("Data\\Menus\\strings.xml");
  *(undefined4 *)(in_ECX + 0x6c) = uVar6;
  FUN_00584670("Data\\Menus\\strings.xml",0);
  FUN_0058d1c0(0,0);
  iVar7 = FUN_00401f00(0xdc);
  if (iVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0070b780(0);
  }
  *(undefined4 *)(in_ECX + 0x70) = uVar6;
  FUN_006ff420("InterfaceManager: DebugText Root");
  puVar1 = (ushort *)(*(int *)(in_ECX + 0x70) + 0x18);
  *puVar1 = *puVar1 & 0xfffe;
  (**(code **)(**(int **)(in_ECX + 0x54) + 0x84))(*(undefined4 *)(in_ECX + 0x70),0);
  FUN_00707610();
  FUN_00707980();
  FUN_00707370(0,1);
  iVar7 = FUN_00401f00(0x34);
  if (iVar7 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)FUN_007c82a0();
  }
  if (puVar8 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar8 + 1);
  }
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  FUN_00405680(puVar8);
  *(undefined1 *)(in_ECX + 0x50) = 0;
  iVar7 = FUN_00401f00(0x4c);
  if (iVar7 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00581810();
  }
  (**(code **)(*piVar5 + 4))(0,"Cursor",0);
  FUN_0058ceb0(0xfab,0x44fa0000);
  FUN_0058ceb0(0xfcb,0x42800000);
  FUN_0058ceb0(0xfca,0x42800000);
  FUN_0058ced0(0xfe6,"Menus\\Misc\\cursor.dds");
  FUN_0058ceb0(0xfad,0);
  FUN_0058ceb0(0xfac,0);
  FUN_0058ceb0(0xfa1,0x3f800000);
  FUN_0058ceb0(0xfa7,0x437f0000);
  FUN_0058ceb0(0xfcc,0x437f0000);
  FUN_0058ceb0(0xfcd,0x437f0000);
  FUN_0058ceb0(0xfce,0x437f0000);
  FUN_0058e870();
  if (piVar5[9] == 0) {
    FUN_00533d30(1,"The Cursor could not be created. Check art resources. \n");
  }
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x84))(piVar5[9],1);
  iVar2 = piVar5[9];
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0xbf800000;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  FUN_00707610();
  FUN_00707980();
  FUN_00707370(0,1);
  *(int **)(in_ECX + 0x1c) = piVar5;
  FUN_0057e7c0();
  puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x24) + 0x18);
  *puVar1 = *puVar1 | 1;
  if (unaff_BL != '\0') {
    FUN_00578e10(0);
  }
  LVar9 = InterlockedDecrement(puVar8 + 1);
  if (LVar9 == 0) {
    (**(code **)*puVar8)(1);
  }
  *unaff_FS_OFFSET = iVar7;
  return;
}



int FUN_00582160(char param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009beceb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_c;
  *unaff_FS_OFFSET = &local_c;
  iVar2 = DAT_00b3a6e0;
  if ((param_1 != '\0') && (DAT_00b3a6e0 == 0)) {
    iVar2 = FUN_00401f00(0x134,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      DAT_00b3a6e0 = 0;
    }
    else {
      DAT_00b3a6e0 = FUN_005802b0();
    }
    local_4 = 0xffffffff;
    FUN_00581cc0(param_2);
    iVar2 = DAT_00b3a6e0;
  }
  DAT_00b3a6e0 = iVar2;
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005821f0(void)

{
  ushort *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  int in_ECX;
  float fVar15;
  char *pcVar16;
  int *unaff_FS_OFFSET;
  float10 fVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 auStack_234 [28];
  int *local_218;
  int *local_214;
  float fStack_210;
  uint uStack_20c;
  undefined4 local_208;
  undefined2 local_204;
  undefined2 local_202;
  char cStack_1fd;
  int *local_1fc;
  char *local_1f8;
  undefined4 local_1f4;
  int local_1f0;
  undefined1 auStack_1ec [12];
  undefined2 uStack_1e0;
  byte bStack_1de;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1cc;
  undefined1 uStack_1bf;
  int *piStack_1b4;
  ushort uStack_1ae;
  undefined1 auStack_1a0 [12];
  undefined1 auStack_194 [11];
  char cStack_189;
  char acStack_188 [12];
  undefined2 uStack_17c;
  undefined1 uStack_17a;
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  uint local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_009bed26;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)auStack_234;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xfffffdc0;
  *unaff_FS_OFFSET = (int)&local_4c;
  local_1f4 = *(undefined4 *)(DAT_00b33398 + 0x20);
  FUN_005a6040(*(char *)(in_ECX + 8) != '\x01',0,uVar8);
  FUN_005a82d0();
  if (*(char *)(in_ECX + 8) == '\x01') {
    iVar9 = FUN_00589b70(0x3ec);
    if (iVar9 == 0) {
      FUN_005a6b00();
    }
    iVar9 = FUN_00589b70(0x3ed);
    if (iVar9 == 0) {
      FUN_005a4840();
    }
    if (*(int *)(in_ECX + 0x10c) != 0) {
      *(undefined4 *)(in_ECX + 0x10c) = 0;
      FUN_006701b0(1);
    }
    if (*(int *)(in_ECX + 0x110) != 0) {
      *(undefined4 *)(in_ECX + 0x110) = 0;
      FUN_00670ca0(1);
    }
    if (DAT_00b3a6d0 != '\0') {
      FUN_0058ced0(0xfe6,"Menus\\Misc\\cursor.dds");
      FUN_0058e870();
      DAT_00b3a6d0 = '\0';
    }
    if (DAT_00b3a6d1 != '\0') {
      FUN_005ace20();
      DAT_00b3a6d1 = '\0';
    }
    FUN_006623a0();
    FUN_00662d10();
  }
  if ((*(char *)(in_ECX + 8) == '\x02') || (*(char *)(in_ECX + 8) == '\x05')) {
    local_208 = 0;
    local_204 = 0;
    local_202 = 0;
    puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x24) + 0x18);
    *puVar1 = *puVar1 & 0xfffe;
    local_44 = 0;
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_0057e7c0();
    if ((*(char *)(in_ECX + 0xb9) == '\0') &&
       (((*(int *)(in_ECX + 0x88) == 0 || (cVar6 = FUN_005893b0(), cVar6 == '\0')) ||
        (fVar17 = (float10)FUN_00588bd0(0xfc9), fVar17 != (float10)2.0)))) {
      FUN_0057fd60();
    }
    local_1f8 = (char *)FUN_004031e0(0,1);
    local_1fc = (int *)FUN_004031e0(0,2);
    local_1f0 = FUN_004031e0(0,0);
    if (local_1f0 == 0) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = *(float *)(in_ECX + 0x3c) + _DAT_00b33e9c;
    }
    *(float *)(in_ECX + 0x3c) = fVar15;
    local_218 = (int *)FUN_00403190(3);
    *(float *)(in_ECX + 0x38) = (float)(int)local_218;
    if (*(char *)(in_ECX + 0xb9) != '\0') {
      piVar10 = (int *)FUN_00581390(0);
      local_214 = (int *)0x0;
      local_218 = piVar10;
      if ((piVar10 != (int *)0x0) &&
         (local_214 = (int *)FUN_005898f0(), *(int *)(in_ECX + 0x88) != 0)) {
        FUN_0058ceb0(0xfdd,0);
        piVar10 = (int *)FUN_005898f0();
        uVar11 = *(undefined4 *)(in_ECX + 0x98);
        iVar9 = *piVar10;
        FUN_00588bd0(0xfa8);
        uVar11 = FUN_009828c0(uVar11);
        (**(code **)(iVar9 + 0x14))(uVar11);
        *(undefined4 *)(in_ECX + 0x88) = 0;
        piVar10 = local_218;
      }
      fVar15 = *(float *)(in_ECX + 0x98);
      if ((piVar10 != (int *)fVar15) && (local_1f0 != 0)) {
        piVar2 = *(int **)(in_ECX + 0xa4);
        if ((piVar2 != (int *)0x0) && (piVar2[9] == 1)) {
          uVar11 = *(undefined4 *)(in_ECX + 0xa0);
          iVar9 = *piVar2;
          FUN_00588bd0();
          FUN_009828c0(uVar11,fVar15);
          (**(code **)(iVar9 + 0x1c))();
        }
        *(int **)(in_ECX + 0xa0) = piVar10;
        *(int **)(in_ECX + 0xa4) = local_214;
        if ((local_214 != (int *)0x0) && (local_214[9] == 1)) {
          uVar11 = *(undefined4 *)(in_ECX + 0x98);
          iVar9 = *local_214;
          fVar15 = (float)piVar10;
          FUN_00588bd0();
          FUN_009828c0(fVar15,uVar11);
          (**(code **)(iVar9 + 0x18))();
        }
      }
      if (local_1fc != (int *)0x0) {
        if (((*(int *)(in_ECX + 0x9c) != 0) &&
            (((*(int *)(in_ECX + 0xa0) == 0 || (*(int *)(in_ECX + 0xa0) == *(int *)(in_ECX + 0x98)))
             && (iVar9 = FUN_00588b50(0xfa8), iVar9 != 0)))) &&
           (*(int *)(*(int *)(in_ECX + 0x9c) + 0x24) == 1)) {
          fVar17 = (float10)FUN_00588bd0(0xfe5);
          local_218 = (int *)(float)fVar17;
          if ((float)local_218 != 0.0) {
            uVar11 = FUN_009828c0();
            FUN_0057de50(uVar11);
          }
          fVar17 = (float10)FUN_00588bd0(0xfe2);
          local_218 = (int *)(float)(fVar17 + (float10)1.0);
          FUN_0058ceb0(0xfe3,local_218);
          FUN_0058ceb0(0xfe1,0x3f800000);
          FUN_0058ceb0(0xfe1,0);
          uVar11 = *(undefined4 *)(in_ECX + 0x98);
          iVar9 = **(int **)(in_ECX + 0x9c);
          FUN_00588bd0(0xfa8);
          uVar11 = FUN_009828c0(uVar11);
          (**(code **)(iVar9 + 0xc))(uVar11);
          if (*(int *)(in_ECX + 0x98) == 0) {
            piVar10 = (int *)0x0;
            local_214 = (int *)0x0;
          }
        }
        *(undefined4 *)(in_ECX + 0xa0) = 0;
        *(undefined4 *)(in_ECX + 0xa4) = 0;
      }
      if ((piVar10 != (int *)*(float *)(in_ECX + 0x98)) && (local_1f0 == 0)) {
        if ((*(int *)(in_ECX + 0x9c) != 0) && (*(int *)(*(int *)(in_ECX + 0x9c) + 0x24) == 1)) {
          FUN_0058ceb0(0xfdd,0);
          iVar9 = **(int **)(in_ECX + 0x9c);
          uVar11 = *(undefined4 *)(in_ECX + 0x98);
          FUN_00588bd0(0xfa8);
          uVar11 = FUN_009828c0(uVar11);
          (**(code **)(iVar9 + 0x14))(uVar11);
        }
        if ((local_214 == (int *)0x0) || (local_214[9] != 1)) {
          *(undefined4 *)(in_ECX + 0x98) = 0;
          *(undefined4 *)(in_ECX + 0x9c) = 0;
        }
        else {
          *(int **)(in_ECX + 0x98) = piVar10;
          *(int **)(in_ECX + 0x9c) = local_214;
        }
        if ((*(int *)(in_ECX + 0x9c) != 0) && (*(int *)(*(int *)(in_ECX + 0x9c) + 0x24) == 1)) {
          *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(in_ECX + 0x98);
          FUN_0058ceb0(0xfdd,0x3f800000);
          uVar11 = *(undefined4 *)(in_ECX + 0x98);
          iVar9 = **(int **)(in_ECX + 0x9c);
          FUN_00588bd0(0xfa8);
          uVar11 = FUN_009828c0(uVar11);
          (**(code **)(iVar9 + 0x10))(uVar11);
        }
        if (*(char *)(in_ECX + 0xb9) == '\0') goto LAB_005833fc;
        *(undefined4 *)(in_ECX + 0x88) = 0;
      }
      if ((*(char *)(in_ECX + 0xb9) != '\0') && (local_1f8 != (char *)0x0)) {
        iVar9 = *(int *)(in_ECX + 0x98);
        if ((iVar9 == 0) ||
           ((piVar10 = *(int **)(in_ECX + 0x9c), piVar10 == (int *)0x0 || (piVar10[9] != 1)))) {
          iVar9 = FUN_00585c10(1);
          if ('\0' < *(char *)(iVar9 + 0x31)) {
            cStack_1fd = '\x01';
            FUN_00959bc0();
            uStack_1bf = 1;
            local_44 = CONCAT31(local_44._1_3_,1);
            FUN_00441920(*(undefined4 *)(DAT_00b333a0 + 0xc));
            puVar19 = auStack_1a0;
            puVar18 = auStack_194;
            uStack_1cc = 0;
            uVar11 = FUN_009828c0(puVar18,puVar19);
            uVar12 = FUN_009828c0();
            FUN_0070d300(uVar12,uVar11,puVar18,puVar19);
            cVar6 = FUN_00959d60();
            if ((cVar6 == '\0') || ((undefined4 *)*piStack_1b4 == (undefined4 *)0x0)) {
LAB_00583399:
              *(undefined4 *)(in_ECX + 0xbc) = 0;
              local_218 = (int *)(DAT_00b02e1c + 0x14);
              FUN_00571f90(1,&DAT_00a2f7ec,0x44200000,(float)(int)local_218,2,0xffffffff,0xbf800000,
                           0);
              FUN_005723e0();
            }
            else {
              iVar9 = FUN_004dc270(*(undefined4 *)*piStack_1b4);
              iVar14 = 0;
              uStack_20c = 1;
              while ((iVar9 == 0 && (uStack_20c < uStack_1ae))) {
                puVar3 = *(undefined4 **)((int)piStack_1b4 + iVar14 + 4);
                uStack_20c = uStack_20c + 1;
                iVar14 = iVar14 + 4;
                if (puVar3 == (undefined4 *)0x0) break;
                iVar9 = FUN_004dc270(*puVar3);
              }
              local_218 = (int *)(DAT_00b12db4 + -1);
              fVar15 = (float)(DAT_00b02e1c + 0x3c);
              fStack_210 = fVar15;
              FUN_00576a30();
              FUN_00404fb0();
              local_214 = (int *)FUN_009828c0();
              if ((iVar9 != 0) && (iVar9 != *(int *)(in_ECX + 0xbc))) {
                *(int *)(in_ECX + 0xbc) = iVar9;
                uVar11 = FUN_004da2a0(*(undefined4 *)(iVar9 + 0xc));
                FUN_00402e30(&local_208,"\"%s\" (%08x)",uVar11);
                local_218 = (int *)(DAT_00b02e1c + 0x14);
                FUN_00571f90(1,local_208,0x44200000,(float)(int)local_218,2,0xffffffff,0xbf800000,0)
                ;
                FUN_005723e0();
                if (*(char *)(in_ECX + 0xa8) != '\0') {
                  iVar9 = FUN_0041e900();
                  if (iVar9 != 0) {
                    piVar10 = (int *)FUN_0041e900();
                    iVar9 = FUN_0041e900();
                    uVar11 = (**(code **)(*piVar10 + 0xd4))(*(undefined4 *)(iVar9 + 0xc));
                    FUN_00402e30(&local_208,"Script name \'%s\' (%08x)",uVar11);
                    FUN_00571f90(1,local_208,0x44200000,(float)(int)fStack_210,2,0xffffffff,
                                 0xbf800000,0);
                    FUN_005723e0();
                    fVar15 = (float)((int)fVar15 + (int)local_214);
                    fStack_210 = fVar15;
                  }
                  iVar9 = FUN_004db6b0();
                  if (iVar9 != 0) {
                    piVar10 = (int *)FUN_004db6b0();
                    iVar9 = FUN_004db6b0();
                    uVar11 = (**(code **)(*piVar10 + 0xd4))(*(undefined4 *)(iVar9 + 0xc));
                    FUN_00402e30(&local_208,"Owner name \'%s\' (%08x)",uVar11);
                    FUN_00571f90(1,local_208,0x44200000,(float)(int)fStack_210,2,0xffffffff,
                                 0xbf800000,0);
                    FUN_005723e0();
                    fVar15 = (float)((int)fVar15 + (int)local_214);
                    fStack_210 = fVar15;
                  }
                  sVar7 = FUN_0041e860();
                  if (sVar7 != 1) {
                    FUN_0041e860();
                    FUN_00402e30();
                    FUN_00571f90(1,local_208,0x44200000,(float)(int)fStack_210,2,0xffffffff,
                                 0xbf800000,0);
                    FUN_005723e0();
                    fVar15 = (float)((int)fVar15 + (int)local_214);
                    fStack_210 = fVar15;
                  }
                  cVar6 = (**(code **)(**(int **)(in_ECX + 0xbc) + 400))();
                  if (cVar6 != '\0') {
                    piVar10 = (int *)FUN_009832e6();
                    iVar9 = (**(code **)(*piVar10 + 0x388))();
                    if (iVar9 != 0) {
                      local_218 = (int *)(**(code **)(*piVar10 + 0x388))();
                      iVar9 = (**(code **)(*piVar10 + 0x388))();
                      uVar11 = (**(code **)(*local_218 + 0xd4))(*(undefined4 *)(iVar9 + 0xc));
                      FUN_00402e30(&local_208,"Rider \'%s\' (%08x)",uVar11);
                      FUN_00571f90(1,local_208,0x44200000,(float)(int)fStack_210,2,0xffffffff,
                                   0xbf800000,0);
                      FUN_005723e0();
                      fVar15 = (float)((int)fVar15 + (int)local_214);
                      fStack_210 = fVar15;
                    }
                    iVar9 = (**(code **)(*piVar10 + 0x380))();
                    if (iVar9 == 0) {
                      iVar9 = (**(code **)(*piVar10 + 0x18c))();
                      if (iVar9 == 0) goto LAB_00582d33;
                      iVar9 = (**(code **)(*(int *)piVar10[0x16] + 0x378))();
                      if (iVar9 == 0) {
                        (**(code **)(*(int *)piVar10[0x16] + 0x37c))();
                        FUN_00402e30();
                      }
                      else {
                        piVar10 = (int *)piVar10[0x16];
                        local_1fc = (int *)(**(code **)(*piVar10 + 0x378))();
                        iVar9 = (**(code **)(*piVar10 + 0x378))();
                        local_218 = *(int **)(iVar9 + 0xc);
                        uVar11 = (**(code **)(*piVar10 + 0x37c))();
                        (**(code **)(*local_1fc + 0xd4))(local_218,uVar11);
                        FUN_00402e30();
                      }
                    }
                    else {
                      local_218 = (int *)(**(code **)(*piVar10 + 0x380))();
                      iVar9 = (**(code **)(*piVar10 + 0x380))();
                      uVar11 = (**(code **)(*local_218 + 0xd4))(*(undefined4 *)(iVar9 + 0xc));
                      FUN_00402e30(&local_208,"Horse \'%s\' (%08x)",uVar11);
                    }
                    FUN_00571f90(1,local_208,CONCAT44((float)(int)fStack_210,0x44200000),
                                 0xffffffff00000002,0xbf800000,0);
                    FUN_005723e0();
                    fVar15 = (float)((int)fVar15 + (int)local_214);
                    fStack_210 = fVar15;
                  }
LAB_00582d33:
                  cVar6 = FUN_004d74b0();
                  if (cVar6 != '\0') {
                    FUN_009828c0();
                    FUN_00402e30();
                    FUN_00571f90(1,local_208,0x44200000,(float)(int)fStack_210,2,0xffffffff,
                                 0xbf800000,0);
                    FUN_005723e0();
                    fVar15 = (float)((int)fVar15 + (int)local_214);
                    uStack_1e0 = 0;
                    bStack_1de = 0xff;
                    uStack_20c = 0;
                    fStack_210 = fVar15;
                    cVar6 = FUN_004db9d0(0,auStack_1ec);
                    while (cVar6 != '\0') {
                      local_1fc = (int *)(**(code **)(**(int **)(in_ECX + 0xbc) + 0x170))();
                      bVar5 = bStack_1de;
                      cVar6 = FUN_004ae5b0(uStack_20c);
                      if (cVar6 == '\0') {
                        cVar6 = FUN_004ae5e0(bVar5);
                        pcVar16 = "Sit";
                        if (cVar6 == '\0') {
                          pcVar16 = "Sleep";
                        }
                        FUN_00402e30(&local_208,"Disabled %s Marker %d",pcVar16,bVar5);
                      }
                      else {
                        local_218 = (int *)(uint)bStack_1de;
                        (**(code **)(*DAT_00b333c4 + 0xec))();
                        FUN_004aeb40();
                        cVar6 = FUN_004d72c0(uStack_20c);
                        local_1f8 = "USED";
                        if (cVar6 == '\0') {
                          local_1f8 = "UNUSED";
                        }
                        cVar6 = FUN_004ae5e0(bVar5);
                        local_218 = (int *)&DAT_00a64100;
                        if (cVar6 == '\0') {
                          local_218 = (int *)0xa61844;
                        }
                        pcVar16 = local_1f8;
                        FUN_004aebe0(bVar5);
                        uVar11 = FUN_009828c0(pcVar16);
                        FUN_00402e30(&local_208,"%s Marker %d Delta %0.2f,%0.2f,%0.2f (%d deg) %s",
                                     local_218,bVar5,(double)fStack_1dc,(double)fStack_1d8,
                                     (double)fStack_1d4,uVar11);
                      }
                      FUN_00571f90(1,local_208,CONCAT44((float)(int)fStack_210,0x44200000),
                                   0xffffffff00000002,0xbf800000,0);
                      FUN_005723e0();
                      fVar15 = (float)((int)fVar15 + (int)local_214);
                      uStack_20c = uStack_20c + 1;
                      fStack_210 = fVar15;
                      cVar6 = FUN_004db9d0(uStack_20c,auStack_1ec);
                    }
                  }
                  iVar9 = FUN_004d7740();
                  if (iVar9 != 0) {
                    local_218 = (int *)FUN_004d7740();
                    cVar6 = FUN_00428e70();
                    pcVar16 = "Locked";
                    if (cVar6 == '\0') {
                      pcVar16 = "Unlocked";
                    }
                    iVar9 = FUN_0042acd0();
                    if ((undefined4 *)(&PTR_DAT_00b03e1c)[iVar9] == (undefined4 *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = *(undefined4 *)(&PTR_DAT_00b03e1c)[iVar9];
                    }
                    FUN_00402e30(&local_208,"Lock \'%s\' %s.",uVar11,pcVar16);
                    FUN_00571f90(1,local_208,0x44200000,(float)(int)fStack_210,2,0xffffffff,
                                 0xbf800000,0);
                    FUN_005723e0();
                    piVar10 = local_214;
                    fVar15 = (float)((int)fVar15 + (int)local_214);
                    fStack_210 = fVar15;
                    if (local_218[1] != 0) {
                      FUN_00402e30();
                      FUN_00571f90(1,local_208,0x44200000,(float)(int)fStack_210,2,0xffffffff,
                                   0xbf800000,0);
                      FUN_005723e0();
                      fVar15 = (float)((int)fVar15 + (int)piVar10);
                      fStack_210 = fVar15;
                    }
                  }
                  iVar9 = FUN_004d7630();
                  if (iVar9 != 0) {
                    FUN_004d7630();
                    local_218 = (int *)FUN_0042b460();
                    uStack_20c = FUN_0042b410();
                    pcVar16 = "Unknown";
                    local_1fc = (int *)0xa69284;
                    if (local_218 == (int *)0x0) {
                      if (uStack_20c != 0) {
                        iVar9 = FUN_0041ff80();
                        if (iVar9 != 0) {
                          pcVar16 = "Persistent";
                        }
                        goto LAB_00583116;
                      }
                    }
                    else {
                      pcVar16 = (char *)local_218[7];
                      if (pcVar16 == (char *)0x0) {
                        pcVar16 = "";
                      }
LAB_00583116:
                      if ((uStack_20c != 0) && (iVar9 = FUN_004da2a0(), iVar9 != 0)) {
                        local_1fc = (int *)FUN_004da2a0();
                      }
                    }
                    FUN_00402e30(&local_208,"Teleport Cell \'%s\' Door \'%s\'.",pcVar16,local_1fc);
                    FUN_00571f90(1,local_208,0x44200000,(float)(int)fStack_210,2,0xffffffff,
                                 0xbf800000,0);
                    FUN_005723e0();
                    fVar15 = (float)((int)fVar15 + (int)local_214);
                    fStack_210 = fVar15;
                  }
                  uVar8 = FUN_004d8250();
                  if (uVar8 != 0) {
                    builtin_strncpy(acStack_188,"Action Flags",0xc);
                    uStack_17c = 0x203a;
                    uStack_17a = 0;
                    if ((uVar8 & 1) != 0) {
                      pcVar16 = &cStack_189;
                      do {
                        pcVar13 = pcVar16;
                        pcVar16 = pcVar13 + 1;
                      } while (pcVar13[1] != '\0');
                      builtin_strncpy(pcVar13 + 1,"USE_DEFAULT",0xc);
                    }
                    if ((uVar8 & 2) != 0) {
                      pcVar16 = &cStack_189;
                      do {
                        pcVar13 = pcVar16;
                        pcVar16 = pcVar13 + 1;
                      } while (pcVar13[1] != '\0');
                      builtin_strncpy(pcVar13 + 1,", ACTIVATE",0xb);
                    }
                    if ((uVar8 & 4) != 0) {
                      pcVar16 = &cStack_189;
                      do {
                        pcVar13 = pcVar16;
                        pcVar16 = pcVar13 + 1;
                      } while (pcVar13[1] != '\0');
                      pcVar16[0] = ',';
                      pcVar16[1] = ' ';
                      pcVar16[2] = 'O';
                      pcVar16[3] = 'P';
                      pcVar13[5] = 'E';
                      pcVar13[6] = 'N';
                      pcVar13[7] = '_';
                      pcVar13[8] = 'D';
                      *(undefined1 **)(pcVar13 + 9) = &LAB_00524f4f;
                    }
                    if ((uVar8 & 8) != 0) {
                      pcVar16 = &cStack_189;
                      do {
                        pcVar13 = pcVar16;
                        pcVar16 = pcVar13 + 1;
                      } while (pcVar13[1] != '\0');
                      builtin_strncpy(pcVar13 + 1,", OPEN_BY_DEFAULT",0x12);
                    }
                    FUN_00402e30(&local_208,acStack_188);
                    FUN_00571f90(1,local_208,0x44200000,(float)(int)fStack_210,2,0xffffffff,
                                 0xbf800000,0);
                    FUN_005723e0();
                    fVar15 = (float)((int)fVar15 + (int)local_214);
                    fStack_210 = fVar15;
                  }
                }
                cStack_1fd = '\0';
              }
              piVar10 = local_214;
              local_218 = (int *)fVar15;
              if ((int)fVar15 < (int)DAT_00b3a6f8) {
                do {
                  FUN_00571f90(1,&DAT_00a2f7ec,0x44200000,(float)(int)fStack_210,2,0xffffffff,
                               0xbf800000,0);
                  FUN_005723e0();
                  fVar15 = (float)((int)fVar15 + (int)piVar10);
                  fStack_210 = fVar15;
                } while ((int)fVar15 < (int)DAT_00b3a6f8);
              }
              DAT_00b3a6f8 = (float)local_218;
              if (cStack_1fd != '\0') goto LAB_00583399;
            }
            local_44 = local_44 & 0xffffff00;
            FUN_00959ec0();
          }
        }
        else {
          iVar14 = *piVar10;
          FUN_00588bd0(0xfa8);
          uVar11 = FUN_009828c0(iVar9);
          (**(code **)(iVar14 + 8))(uVar11);
        }
      }
    }
LAB_005833fc:
    if (local_1f0 == 0) {
      if ((*(float *)(in_ECX + 0x38) != 0.0) && (*(int **)(in_ECX + 0x9c) != (int *)0x0)) {
        uVar11 = *(undefined4 *)(in_ECX + 0x98);
        iVar9 = **(int **)(in_ECX + 0x9c);
        FUN_00588bd0(0xfa8);
        uVar11 = FUN_009828c0(uVar11);
        (**(code **)(iVar9 + 0x28))(uVar11);
      }
    }
    else {
      if (*(int **)(in_ECX + 0x9c) != (int *)0x0) {
        uVar11 = *(undefined4 *)(in_ECX + 0x98);
        iVar9 = **(int **)(in_ECX + 0x9c);
        FUN_00588bd0(0xfa8);
        uVar11 = FUN_009828c0(uVar11);
        (**(code **)(iVar9 + 0x20))(uVar11);
      }
      if ((*(int **)(in_ECX + 0xa4) != (int *)0x0) && (iVar9 = *(int *)(in_ECX + 0x98), iVar9 != 0))
      {
        iVar14 = **(int **)(in_ECX + 0xa4);
        FUN_00588bd0(0xfa8);
        uVar11 = FUN_009828c0(iVar9);
        (**(code **)(iVar14 + 0x24))(uVar11);
      }
    }
    local_214 = (int *)0x0;
    iVar9 = FUN_00403c90(&local_214);
    while (iVar9 == 2) {
      *(undefined4 *)(in_ECX + 0x120) = DAT_00b33ea0;
      *(undefined4 *)(in_ECX + 0x124) = 0;
      *(undefined4 *)(in_ECX + 0x11c) = 0;
      FUN_0057f7a0(2,local_214);
      iVar9 = FUN_00403c90(&local_214);
    }
    iVar9 = FUN_0057f7a0(iVar9,local_214);
    if (iVar9 == 0) {
      iVar9 = FUN_0057dc60(0x3f800000);
    }
    local_218 = (int *)FUN_00585c10(0);
    if (iVar9 == 0) {
switchD_0058360c_caseD_80000005:
    }
    else {
      if (local_218 != (int *)0x0) {
        do {
          if (local_214 == (int *)0x29) {
            cVar6 = '\0';
          }
          else {
            cVar6 = FUN_00586000(iVar9);
            if (cVar6 != '\0') {
              iVar9 = FUN_00403c90(&local_214);
              if (iVar9 == 2) {
                iVar9 = 2;
                do {
                  *(undefined4 *)(in_ECX + 0x120) = DAT_00b33ea0;
                  *(undefined4 *)(in_ECX + 0x124) = 0;
                  *(undefined4 *)(in_ECX + 0x11c) = 0;
                  FUN_0057f7a0(iVar9,local_214);
                  iVar9 = FUN_00403c90(&local_214);
                } while (iVar9 == 2);
              }
              iVar9 = FUN_0057f7a0(iVar9,local_214);
            }
          }
          if (iVar9 == 0) goto switchD_0058360c_caseD_80000005;
        } while (cVar6 != '\0');
      }
      uVar11 = FUN_0057cf60();
      FUN_00589b70(uVar11);
      piVar10 = (int *)FUN_005898f0();
      if ((piVar10 != (int *)0x0) && (cVar6 = (**(code **)(*piVar10 + 0x30))(iVar9), cVar6 != '\0'))
      goto switchD_0058360c_caseD_80000005;
      switch(iVar9) {
      case -0x7fffffff:
        iVar9 = 4;
LAB_00583644:
        if ((*(uint *)(in_ECX + 0x118) >> 2 & 1) != 0) {
          iVar9 = 0xd;
        }
        break;
      case -0x7ffffffe:
        iVar9 = 3;
LAB_0058365e:
        if ((*(uint *)(in_ECX + 0x118) >> 2 & 1) != 0) {
          iVar9 = 0xe;
        }
        break;
      case -0x7ffffffd:
        iVar9 = 1;
        break;
      case -0x7ffffffc:
        iVar9 = 2;
        break;
      default:
        goto switchD_0058360c_caseD_80000005;
      case -0x7ffffff8:
        iVar9 = (-(uint)(*(char *)(in_ECX + 0xb9) != '\0') & 2) - 2;
        if (iVar9 == 4) goto LAB_00583644;
        if (iVar9 == 3) goto LAB_0058365e;
        if (iVar9 == 0) goto switchD_0058360c_caseD_80000005;
      }
      FUN_00580ba0(iVar9);
      FUN_00403160();
    }
    iVar9 = FUN_00403520(0x1a,1);
    if ((iVar9 != 0) && ((DAT_00b1397a < 0x2c || (*(int *)(DAT_00b13974 + 0xac) == 0)))) {
      FUN_0057acc0(DAT_00b387a0,0,1,0x3f800000);
    }
    iVar9 = FUN_00403520(0x1b,1);
    if ((iVar9 != 0) && ((DAT_00b1397a < 0x2c || (*(int *)(DAT_00b13974 + 0xac) == 0)))) {
      FUN_0057acc0(DAT_00b387a8,0,1,0x3f800000);
    }
    local_44 = 0xffffffff;
    FUN_00401f20(local_208);
  }
  iVar9 = FUN_00403520(0x1e,1);
  if ((iVar9 != 0) && (iVar9 = FUN_00579060(), iVar9 != 0x414)) {
    FUN_00585c10(1);
    FUN_00403160();
    cVar6 = FUN_005859c0();
    if (cVar6 == '\0') {
      FUN_0057cfe0(3,0);
    }
    else {
      FUN_0057d640(3);
    }
  }
  iVar9 = FUN_00403520(0x1d,1);
  if (iVar9 == 0) {
LAB_0058383e:
    iVar9 = FUN_00403520(0x1d,1);
    if (iVar9 == 0) goto LAB_0058392b;
    uVar11 = 0x40f;
    FUN_00587b20(1,0x40f);
    cVar6 = FUN_005878b0(uVar11);
    if (cVar6 == '\0') {
      uVar11 = 0x40e;
      FUN_00587b20(1,0x40e);
      cVar6 = FUN_005878b0(uVar11);
      if (cVar6 == '\0') goto LAB_0058392b;
    }
  }
  else {
    uVar11 = 0x414;
    FUN_00587b20(1,0x414);
    cVar6 = FUN_005878b0(uVar11);
    if (cVar6 != '\0') goto LAB_0058383e;
    uVar11 = 0x3ef;
    FUN_00587b20(1,0x3ef);
    cVar6 = FUN_005878b0(uVar11);
    if (cVar6 != '\0') goto LAB_0058383e;
    uVar11 = 0x40f;
    FUN_00587b20(1,0x40f);
    cVar6 = FUN_005878b0(uVar11);
    if (cVar6 == '\0') {
      uVar11 = 0x40e;
      FUN_00587b20(1,0x40e);
      cVar6 = FUN_005878b0(uVar11);
      if (cVar6 == '\0') {
        uVar11 = 0x3f5;
        FUN_00587b20(1,0x3f5);
        cVar6 = FUN_005878b0(uVar11);
        if (cVar6 == '\0') {
          if (DAT_00b143ae != '\0') {
            FUN_0057b560();
          }
        }
        else {
          FUN_005bdcd0();
        }
        goto LAB_0058392b;
      }
    }
  }
  uVar11 = 0x40f;
  FUN_00587b20(1,0x40f);
  cVar6 = FUN_005878b0(uVar11);
  if (cVar6 == '\0') {
    uVar11 = 0x40e;
    FUN_00587b20(1,0x40e);
    cVar6 = FUN_005878b0(uVar11);
    if (cVar6 == '\0') goto LAB_0058392b;
    FUN_00589b70(0x40e);
    piVar10 = (int *)FUN_005898f0();
    if (((piVar10 == (int *)0x0) || (iVar9 = (**(code **)(*piVar10 + 0x34))(), iVar9 != 0x40e)) ||
       (cVar6 = FUN_0057d3f0(), cVar6 == '\0')) goto LAB_0058392b;
  }
  else {
    FUN_00589b70(0x40f);
    piVar10 = (int *)FUN_005898f0();
    if ((piVar10 == (int *)0x0) || (iVar9 = (**(code **)(*piVar10 + 0x34))(), iVar9 != 0x40f))
    goto LAB_0058392b;
  }
  (**(code **)(*piVar10 + 0xc))(1,0);
LAB_0058392b:
  iVar9 = FUN_00589b70(0x3ea);
  iVar14 = FUN_00589b70(0x3fe);
  if (((iVar9 == 0) || (fVar17 = (float10)FUN_00588bd0(0xfa1), fVar17 == (float10)1.0)) &&
     (iVar14 != 0)) {
    FUN_00588bd0(0xfa1);
  }
  FUN_00572170();
  puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x68) + 0x34);
  while (puVar3 != (undefined4 *)0x0) {
    piVar10 = puVar3 + 2;
    puVar3 = (undefined4 *)*puVar3;
    if ((*piVar10 != 0) && (piVar10 = (int *)FUN_005898f0(), piVar10 != (int *)0x0)) {
      (**(code **)(*piVar10 + 0x2c))();
    }
  }
  iVar14 = 0;
  uStack_20c = 0;
  iVar9 = FUN_004032d0(0x3b,1);
  if (iVar9 == 0) {
    iVar9 = FUN_004032d0(0x3c,1);
    if (iVar9 == 0) {
      iVar9 = FUN_004032d0(0x3d,1);
      if (iVar9 == 0) {
        iVar9 = FUN_004032d0(0x3e,1);
        if (iVar9 != 0) {
          iVar14 = 0x3ff;
          uStack_20c = iVar14;
        }
      }
      else {
        iVar14 = 0x3fe;
        uStack_20c = iVar14;
      }
    }
    else {
      iVar14 = 0x3ea;
      uStack_20c = iVar14;
    }
  }
  else {
    iVar14 = 0x3eb;
    uStack_20c = iVar14;
  }
  FUN_00588bd0(0x1771);
  local_218 = (int *)FUN_009828c0();
  if ((iVar14 != 0) &&
     ((((iVar9 = FUN_0057cf60(), iVar9 == 1 || (*(char *)(in_ECX + 8) == '\x01')) &&
       ((int *)iVar14 != local_218)) &&
      (((char)DAT_00b333c4[0x170] == '\0' &&
       (cVar6 = (**(code **)(*DAT_00b333c4 + 0x198))(0), cVar6 == '\0')))))) {
    if (iVar14 == 0x3eb) {
      FUN_005a5e80();
    }
    else if (iVar14 == 0x3ea) {
      FUN_005a5ef0();
    }
    else if (iVar14 == 0x3fe) {
      FUN_005a5f60();
    }
    else if (iVar14 == 0x3ff) {
      FUN_005a5fd0();
    }
  }
  iVar9 = FUN_00403520(0xf,1);
  if (((iVar9 == 0) && (iVar14 == 0)) ||
     ((((char)DAT_00b333c4[0x170] != '\0' ||
       (((cVar6 = (**(code **)(*DAT_00b333c4 + 0x198))(0), cVar6 != '\0' ||
         (cVar6 = FUN_0057d240(0), cVar6 == '\0')) || (*(char *)(in_ECX + 8) != '\x01')))) ||
      (*(int *)(in_ECX + 0xe0) != 0)))) {
    iVar9 = FUN_00403520(0xf,1);
    if (((iVar9 != 0) || ((iVar14 != 0 && ((int *)iVar14 == local_218)))) &&
       (((char)DAT_00b333c4[0x170] == '\0' &&
        (((cVar6 = FUN_0057d240(0), cVar6 != '\0' && (*(char *)(in_ECX + 8) == '\x02')) &&
         (iVar9 = FUN_0057cfe0(1,0), -1 < iVar9)))))) {
      if ((*(int *)(DAT_00b33398 + 0x24) != 0) && (iVar9 = FUN_006ade50(), iVar9 != 0)) {
        FUN_006b7190(0);
        FUN_006b73e0();
        FUN_00401f20(iVar9);
      }
      FUN_0057cc00();
    }
  }
  else {
    if (iVar14 != 0) {
      FUN_0058ceb0(0x1771,(float)(int)uStack_20c);
    }
    FUN_00663920();
    FUN_0057d640(1);
    FUN_0057cac0();
  }
  if ((((*(char *)(in_ECX + 8) != '\x01') && (DAT_00b333c4 != (int *)0x0)) &&
      (*(int *)(DAT_00b3a6e0 + 0x60) != 0)) &&
     ((*(byte *)(*(int *)(DAT_00b3a6e0 + 0x60) + 0x18) & 1) == 0)) {
    FUN_00664c40();
  }
  pcVar4 = *(code **)(in_ECX + 0xb4);
  if (pcVar4 != (code *)0x0) {
    *(undefined4 *)(in_ECX + 0xb4) = 0;
    (*pcVar4)();
  }
  *unaff_FS_OFFSET = local_4c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583c30(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = *(int *)(*(int *)(in_ECX + 0x130) + 0x10);
  while (iVar3 != 0) {
    fVar2 = *(float *)(iVar3 + 4) + _DAT_00b33e9c;
    *(float *)(iVar3 + 4) = fVar2;
    if (((fVar2 / *(float *)(iVar3 + 8) <= 1.0) && (fVar2 / *(float *)(iVar3 + 8) < 0.0)) ||
       ((fVar2 = *(float *)(iVar3 + 4) / *(float *)(iVar3 + 8), fVar2 <= 1.0 && (fVar2 != 1.0)))) {
      iVar3 = *(int *)(iVar3 + 0x10);
    }
    else {
      iVar1 = *(int *)(iVar3 + 0x10);
      *(int *)(*(int *)(iVar3 + 0xc) + 0x10) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(*(int *)(DAT_00b3a6e0 + 0x130) + 0xc) = *(undefined4 *)(iVar3 + 0xc);
        FUN_00401f20(iVar3);
        iVar3 = iVar1;
      }
      else {
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
        FUN_00401f20(iVar3);
        iVar3 = iVar1;
      }
    }
  }
  return;
}



void FUN_00583cf0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(DAT_00b3a6e0 + 0x130) + 0x10);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[4];
  }
  iVar2 = piVar1[4];
  *(int *)(piVar1[3] + 0x10) = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = piVar1[3];
  }
  if (piVar1[4] == 0) {
    *(int *)(*(int *)(DAT_00b3a6e0 + 0x130) + 0xc) = piVar1[3];
  }
  FUN_00401f20();
  return;
}



float10 FUN_00583d50(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  
  piVar1 = *(int **)(*(int *)(DAT_00b3a6e0 + 0x130) + 0x10);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (float10)1;
    }
    if (param_1 == *piVar1) break;
    piVar1 = (int *)piVar1[4];
  }
  if (0.0 < (float)piVar1[2]) {
    fVar2 = (float)piVar1[1] / (float)piVar1[2];
    if (((1.0 < fVar2) || (fVar3 = 0.0, 0.0 <= fVar2)) && (fVar3 = fVar2, 1.0 < fVar2)) {
      return (float10)1.0;
    }
    return (float10)fVar3;
  }
  return (float10)-1.0;
}



void FUN_00583dd0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 0xc) = param_1 + -5;
  if (param_1 + -5 < 0) {
    FUN_0057d7a0();
    uVar1 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0xc) = uVar1;
  }
  return;
}



void FUN_00583df0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_00b3a6e0 + 0x1c) + 0x24);
  if (((iVar1 != 0) && (*(short *)(iVar1 + 0xb6) != 0)) && (**(int **)(iVar1 + 0xb0) != 0)) {
    iVar1 = FUN_00707530(2);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + 1;
      *(float *)(iVar1 + 0x50) = (float)param_1;
    }
  }
  return;
}



void FUN_00583e30(void)

{
  int iVar1;
  
  iVar1 = DAT_00b3a6e0;
  if (DAT_00b3a6e0 != 0) {
    FUN_00581a50();
    FUN_00401f20(iVar1);
    DAT_00b3a6e0 = 0;
  }
  return;
}



void FUN_00583e60(void)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  
  FUN_00583c30();
  if ((*(char *)(in_ECX + 8) == '\x03') && (*(char *)(in_ECX + 9) == '\0')) {
    FUN_00403160();
    *(undefined1 *)(in_ECX + 8) = 5;
    puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x24) + 0x18);
    *puVar1 = *puVar1 & 0xfffe;
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_0058ced0(0xfe6,"Menus\\Misc\\cursor.dds");
    FUN_0058e870();
    FUN_0057d940(0);
    FUN_005a4980(0,0,0);
    *(undefined4 *)(in_ECX + 0x88) = 0;
    iVar2 = FUN_00585c10(0);
    if (iVar2 != 0) {
      FUN_00585820();
    }
    FUN_005a6040(1,0);
    iVar2 = FUN_00589b70(0x3ed);
    if (iVar2 != 0) {
      FUN_005898f0();
      FUN_00584740();
      return;
    }
  }
  else if (*(char *)(in_ECX + 8) == '\x05') {
    *(undefined1 *)(in_ECX + 8) = 2;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583f40(void)

{
  ushort *puVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  float10 fVar10;
  
  *(undefined1 *)(in_ECX + 9) = 0;
  puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x68) + 0x34);
joined_r0x00583f5e:
  do {
    if (puVar3 == (undefined4 *)0x0) {
LAB_00584263:
      if ((*(char *)(in_ECX + 8) == '\x04') &&
         (((*(char *)(in_ECX + 9) == '\0' || (*(char *)(DAT_00b333a0 + 0x51) != '\0')) ||
          (*(char *)(DAT_00b333a0 + 0x52) != '\0')))) {
        FUN_00403160();
        *(undefined1 *)(in_ECX + 8) = 1;
        puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x24) + 0x18);
        *puVar1 = *puVar1 | 1;
        FUN_0058ceb0(0xfa1,0x3f800000);
        FUN_0058e870();
        FUN_0057d940(1);
        if ((DAT_00b333c4 != 0) && (iVar9 = FUN_00660110(0), iVar9 != 0)) {
          FUN_005a6040(0,0);
        }
        *(undefined4 *)(in_ECX + 0x118) = 0;
      }
      _DAT_00b3a6e4 = 99;
      return;
    }
    piVar7 = puVar3 + 2;
    puVar3 = (undefined4 *)*puVar3;
  } while (((*piVar7 == 0) || (piVar7 = (int *)FUN_005898f0(), piVar7 == (int *)0x0)) ||
          (piVar7[1] == 0));
  fVar10 = (float10)FUN_00583d50(piVar7);
  fVar2 = (float)fVar10;
  iVar9 = piVar7[9];
  iVar8 = FUN_0057cf60();
  iVar4 = *(int *)(in_ECX + 0xe0);
  iVar5 = *(int *)(in_ECX + 0xe4);
  if (iVar9 == 2) {
    if (iVar8 == 0) {
      if (iVar4 != 0) {
LAB_00583ff2:
        if ((iVar5 != 0) || ((iVar4 != 0x3f3 && (iVar4 != 0x3e9)))) goto LAB_0058400a;
      }
      bVar6 = true;
    }
    else {
      if (iVar4 != 0) goto LAB_00583ff2;
LAB_0058400a:
      bVar6 = false;
    }
    if (ABS(fVar2) == 1.0) {
      piVar7[9] = 4;
      fVar10 = (float10)FUN_00588bd0(0x1772);
      if (fVar10 == (float10)2.0) {
        iVar9 = (**(code **)(*piVar7 + 0x34))();
        if (iVar9 == 0x3f1) {
          iVar9 = FUN_009832e6(piVar7,0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a02c,0);
          if ((iVar9 != 0) && (iVar4 = *(int *)(iVar9 + 0x60), iVar4 != 0)) {
            if (*(char *)(iVar9 + 0x95) == '\0') {
              if (*(char *)(iVar9 + 0x94) != '\0') {
                *(int *)(in_ECX + 0x110) = iVar4;
              }
            }
            else {
              *(int *)(in_ECX + 0x10c) = iVar4;
            }
          }
          FUN_006b94e0();
        }
        iVar9 = (**(code **)(*piVar7 + 0x34))();
        if ((undefined4 *)piVar7[1] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar7[1])(1);
        }
        if (iVar9 == 0x3f3) {
          FUN_005a4510();
        }
        goto LAB_00584263;
      }
      FUN_0058ceb0(0xfa1,0x3f800000);
      FUN_0057ea20(*(undefined4 *)(piVar7[1] + 0x24),0,0);
      if (bVar6) {
        if (DAT_00b42d54 != '\0') {
          _DAT_00b42d50 = 0.0;
        }
        DAT_00b42d54 = '\0';
      }
      goto joined_r0x00583f5e;
    }
    *(undefined1 *)(in_ECX + 9) = 1;
    FUN_0058ceb0(0xfa1,0x40000000);
    fVar2 = 1.0 - fVar2;
    FUN_0057ea20(*(undefined4 *)(piVar7[1] + 0x24),fVar2,0);
  }
  else {
    if (iVar9 != 8) goto joined_r0x00583f5e;
    if ((((iVar8 == 0) || (iVar4 != iVar8)) || ((iVar8 == 0x3f3 || (iVar8 == 0x3e9)))) &&
       (((iVar5 == 0 || (iVar5 != iVar8)) || ((iVar4 != 0x3f3 && (iVar4 != 0x3e9)))))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (ABS(fVar2) == 1.0) {
      FUN_0058ceb0(0xfa1,0x40000000);
      FUN_0057ea20(*(undefined4 *)(piVar7[1] + 0x24),0x3f800000,0);
      piVar7[9] = 1;
      if (bVar6) {
        if (DAT_00b42d54 != '\0') {
          _DAT_00b42d50 = 1.0;
        }
        DAT_00b42d54 = '\0';
      }
      goto joined_r0x00583f5e;
    }
    *(undefined1 *)(in_ECX + 9) = 1;
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_0057ea20(*(undefined4 *)(piVar7[1] + 0x24),fVar2,0);
  }
  if ((bVar6) && (DAT_00b42d54 != '\0')) {
    _DAT_00b42d50 = fVar2;
  }
  goto joined_r0x00583f5e;
}



void FUN_00584300(undefined4 param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00583cf0(param_1);
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[2] = 0x3a83126f;
    puVar2 = puVar1;
  }
  *puVar2 = param_1;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  puVar2[2] = param_2;
  puVar2[3] = *(undefined4 *)(*(int *)(DAT_00b3a6e0 + 0x130) + 0xc);
  *(undefined4 **)(*(int *)(*(int *)(DAT_00b3a6e0 + 0x130) + 0xc) + 0x10) = puVar2;
  *(undefined4 **)(*(int *)(DAT_00b3a6e0 + 0x130) + 0xc) = puVar2;
  return;
}



void FUN_00584390(void)

{
  int in_ECX;
  float10 fVar1;
  
  if ((*(int *)(in_ECX + 4) != 0) && (fVar1 = (float10)FUN_00588bd0(0xfdb), (float)fVar1 == 0.0)) {
    FUN_00588bd0(0xfdc);
  }
  FUN_00584300();
  *(undefined4 *)(in_ECX + 0x24) = 8;
  FUN_00582160(0,1);
  FUN_00583c30();
  return;
}



void FUN_00584410(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a69688;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00584430(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a696a8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00584470(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a69688;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005844a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a696a8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a69680;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



int FUN_00584500(void)

{
  uchar *_Str2;
  uchar *_Str1;
  byte *in_ECX;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = 0;
  switch(*in_ECX & 0x7f) {
  case 0:
    _Str2 = (uchar *)FUN_00488df0();
    _Str1 = (uchar *)FUN_00488df0();
    iVar1 = __mbsicmp(_Str1,_Str2);
    goto switchD_00584518_default;
  case 1:
    fVar2 = (float10)FUN_00488e50(0,0,0);
    fVar3 = (float10)FUN_00488e50(0,0,0);
    fVar3 = (float10)(double)fVar2 - fVar3;
    break;
  case 2:
    fVar2 = (float10)FUN_00485260(0,0,0);
    fVar3 = (float10)FUN_00485260(0,0,0);
    fVar3 = (float10)(double)fVar2 - fVar3;
    break;
  case 3:
    fVar2 = (float10)FUN_004891c0(0,0,0);
    fVar3 = (float10)FUN_004891c0(0,0,0);
    fVar3 = (float10)(double)fVar2 - fVar3;
    break;
  case 4:
    fVar2 = (float10)FUN_004852b0(1,0,0,0);
    fVar3 = (float10)FUN_004852b0(1,0,0,0);
    fVar3 = (float10)(double)fVar2 - fVar3;
    break;
  default:
    goto switchD_00584518_default;
  }
  if (0.0 <= (float)fVar3) {
    if (0.0 < (float)fVar3) {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = -1;
  }
switchD_00584518_default:
  if ((*in_ECX & 0x80) != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}



void FUN_00584640(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a696dc;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[9] = 4;
  *(undefined1 *)(in_ECX + 7) = 1;
  in_ECX[6] = 0;
  return;
}



void FUN_00584670(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *_Str;
  
  _Str = param_1;
  pcVar2 = _strstr(param_1,"\\");
  while (pcVar2 != (char *)0x0) {
    _Str = pcVar2 + 1;
    pcVar2 = _strstr(_Str,"\\");
  }
  param_1 = (char *)0x0;
  FUN_0055e000(_Str,&param_1);
  iVar1 = (int)param_1;
  if (param_1 != (char *)0x0) {
    if (*(int *)((int)param_1 + 4) != 0) {
      FUN_00401f20(*(int *)((int)param_1 + 4));
    }
    *(undefined4 *)(iVar1 + 4) = 0;
    FUN_00401f20(iVar1);
  }
  FUN_004524c0(_Str);
  param_1 = (char *)0x0;
  FUN_0055e000(_Str,&param_1);
  iVar1 = (int)param_1;
  if (param_1 != (char *)0x0) {
    if ((param_2 != 0) && (*(char *)((int)param_1 + 0x10) != '\0')) {
      *(undefined1 *)((int)param_1 + 0x10) = 0;
      *(undefined1 *)(param_2 + 0x1c) = 1;
    }
    FUN_0058cdb0();
    FUN_00401f20(iVar1);
  }
  FUN_004524c0(_Str);
  return;
}



void FUN_00584740(void)

{
  int in_ECX;
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  fVar1 = (float10)FUN_00588bd0(0xfa1);
  if (fVar1 == (float10)2.0) {
    fVar1 = (float10)FUN_00588bd0(0xfdb);
    if ((float)fVar1 == 0.0) {
      FUN_00588bd0(0xfdc);
    }
    FUN_00584300();
    *(undefined4 *)(in_ECX + 0x24) = 2;
    if (*(int *)(in_ECX + 0x14) != 0) {
      fVar1 = (float10)FUN_00588bd0(0x1772);
      if (fVar1 == (float10)2.0) {
        uVar2 = *(undefined4 *)(in_ECX + 0x14);
        uVar3 = 0;
        FUN_00582160(0,1,uVar2,0);
        FUN_0057cfe0(uVar2,uVar3);
        uVar4 = 0;
        uVar3 = 0xfdd;
        uVar2 = 0;
        FUN_00582160(0,1,0,0xfdd,0);
        FUN_0057f9f0(uVar2,uVar3,uVar4);
      }
    }
    FUN_00582160(0,1);
    FUN_00583c30();
    return;
  }
  return;
}



void FUN_00584820(void)

{
  int in_ECX;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(in_ECX + 0x24) == 2) {
    FUN_0058ceb0(0xfa1,0x40000000);
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24);
    uVar3 = 0;
    uVar2 = 0x3f800000;
    FUN_00582160(0,1,uVar1,0x3f800000,0);
    FUN_0057ea20(uVar1,uVar2,uVar3);
    *(undefined4 *)(in_ECX + 0x24) = 1;
    FUN_00583cf0();
  }
  return;
}



void FUN_00584880(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  float10 fVar3;
  
  in_ECX[1] = param_1;
  if (param_1 != 0) {
    fVar3 = (float10)FUN_00588bd0(0xfa5);
    if ((((fVar3 != (float10)102.0) &&
         (fVar3 = (float10)FUN_00588bd0(0xfa5), fVar3 != (float10)6006.0)) &&
        (fVar3 = (float10)FUN_00588bd0(0xfa5), fVar3 != (float10)103.0)) &&
       (fVar3 = (float10)FUN_00588bd0(0xfa5), fVar3 != (float10)6007.0)) {
      return;
    }
    iVar1 = (**(code **)(*in_ECX + 0x34))();
    in_ECX[5] = iVar1;
    iVar1 = FUN_00582160(0,1);
    uVar2 = (**(code **)(*in_ECX + 0x34))();
    FUN_0057d640(uVar2);
    if (*(int **)(iVar1 + 0x9c) != in_ECX) {
      if (*(int *)(iVar1 + 0x98) != 0) {
        FUN_0058ceb0(0xfdd,0);
      }
      *(undefined4 *)(iVar1 + 0x98) = 0;
      *(undefined4 *)(iVar1 + 0x9c) = 0;
    }
  }
  return;
}



void FUN_00584960(int param_1)

{
  if (param_1 != 0) {
    FUN_00446cb0();
    return;
  }
  return;
}



float10 FUN_00584980(void)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float local_14;
  
  local_14 = 0.0;
  iVar3 = FUN_00582160(0,1);
  puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0x68) + 0x34);
  while (puVar2 != (undefined4 *)0x0) {
    piVar4 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((*piVar4 != 0) && (iVar3 = FUN_005898f0(), iVar3 != 0)) {
      piVar4 = (int *)FUN_005898f0();
      iVar3 = (**(code **)(*piVar4 + 0x34))();
      if (iVar3 != 0x400) {
        piVar4 = (int *)FUN_005898f0();
        iVar3 = (**(code **)(*piVar4 + 0x34))();
        if (iVar3 != 0x3ed) {
          piVar4 = (int *)FUN_005898f0();
          iVar3 = (**(code **)(*piVar4 + 0x34))();
          if (iVar3 != 0x3f2) {
            iVar3 = FUN_005898f0();
            iVar3 = *(int *)(iVar3 + 0x18);
            fVar5 = (float10)FUN_00588bd0(0xfab);
            fVar1 = (float)(fVar5 + (float10)iVar3);
            if (local_14 <= fVar1) {
              local_14 = fVar1;
            }
          }
        }
      }
    }
  }
  iVar3 = FUN_009828c0();
  fVar1 = (float)iVar3;
  if (fVar1 < 10.0) {
    fVar1 = 10.0;
  }
  fVar1 = fVar1 + 100.0;
  iVar3 = FUN_00582160(0,1);
  if (*(int *)(iVar3 + 0x1c) != 0) {
    FUN_0058ceb0(0xfab,fVar1);
    iVar3 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x24);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(float *)(iVar3 + 0x58) = fVar1 * -0.008;
    *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar3 + 0x5c);
  }
  iVar3 = FUN_00589b70(0x3f2);
  if (iVar3 != 0) {
    FUN_0058ceb0(0xfab,fVar1 - 10.0);
  }
  return (float10)(local_14 + 2.0);
}



void FUN_00584b30(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf128;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a697c4;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a696c8;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00584b90(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf158;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a69784;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a69688;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00584c00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a697d4;
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
  FUN_00584b90();
  return;
}



void FUN_00584c50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf188;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a697a4;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a696a8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00584cc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a697f4;
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
  FUN_00584c50();
  return;
}



void FUN_00584d50(byte param_1)

{
  FUN_00584b90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00584d70(byte param_1)

{
  FUN_00584c50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00584d90(byte param_1)

{
  FUN_00584cc0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00584db0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (DAT_00b1394c != 0) {
    do {
      if (*(int *)(DAT_00b13950 + uVar3 * 4) != 0) {
        piVar2 = *(int **)(DAT_00b13950 + uVar3 * 4);
        goto joined_r0x00584dd7;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_00b1394c);
  }
  piVar2 = (int *)0x0;
joined_r0x00584dd7:
  while (piVar2 != (int *)0x0) {
    piVar4 = (int *)*piVar2;
    iVar1 = piVar2[2];
    if (piVar4 == (int *)0x0) {
      uVar3 = (**(code **)(PTR_PTR_00b13948 + 4))(piVar2[1]);
      do {
        uVar3 = uVar3 + 1;
        if (DAT_00b1394c <= uVar3) {
          piVar4 = (int *)0x0;
          break;
        }
        piVar4 = *(int **)(DAT_00b13950 + uVar3 * 4);
      } while (piVar4 == (int *)0x0);
    }
    piVar2 = piVar4;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_00401f20(*(int *)(iVar1 + 4));
      }
      *(undefined4 *)(iVar1 + 4) = 0;
      FUN_00401f20(iVar1);
    }
  }
  FUN_007c2a40();
  uVar3 = 0;
  if (DAT_00b13960 != 0) {
    do {
      if (*(int *)(DAT_00b13964 + uVar3 * 4) != 0) {
        piVar2 = *(int **)(DAT_00b13964 + uVar3 * 4);
        goto joined_r0x00584e87;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_00b13960);
  }
  piVar2 = (int *)0x0;
joined_r0x00584e87:
  do {
    if (piVar2 == (int *)0x0) {
      FUN_007c2a40();
      return;
    }
    piVar4 = (int *)*piVar2;
    iVar1 = piVar2[2];
    if (piVar4 == (int *)0x0) {
      uVar3 = (**(code **)(PTR_PTR_00b1395c + 4))(piVar2[1]);
      do {
        uVar3 = uVar3 + 1;
        if (DAT_00b13960 <= uVar3) {
          piVar4 = (int *)0x0;
          break;
        }
        piVar4 = *(int **)(DAT_00b13964 + uVar3 * 4);
      } while (piVar4 == (int *)0x0);
    }
    piVar2 = piVar4;
    if (iVar1 != 0) {
      FUN_0058cdb0();
      FUN_00401f20(iVar1);
    }
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00584f10(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_11c [3];
  char cStack_119;
  char cStack_118;
  char cStack_117;
  char cStack_116;
  char local_115;
  uint uStack_114;
  char *local_110;
  uint local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_11c;
  local_115 = '\0';
  if (param_2 != (char *)0x0) {
    local_110 = param_2;
    pcVar1 = param_2 + 1;
    do {
      cVar3 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar3 != '\0');
    uVar6 = (int)param_2 - (int)pcVar1;
    local_10c = uVar6;
LAB_00584ff9:
    iVar7 = FUN_00401f00(uVar6);
    iVar10 = 0;
    uVar6 = 0;
    uStack_114 = 0;
    cStack_117 = '\0';
    cStack_116 = '\0';
    cStack_118 = '\0';
    cStack_119 = '\0';
    cVar3 = '\0';
    cVar8 = '\0';
    if (local_10c != 0) {
      do {
        cVar2 = local_110[uVar6];
        if (cVar2 == '\0') break;
        cVar4 = cVar3;
        cVar9 = cVar8;
        if (((cVar2 != '\t') && (cVar2 != '\n')) && (cVar2 != '\r')) {
          cVar9 = cVar3;
          if (cStack_118 == '\0') {
            iVar11 = iVar10;
            if (cVar2 == ' ') {
              cVar9 = cVar8;
              if ((cVar3 == ' ') || (cVar3 == '>')) goto LAB_00585065;
            }
            else if ((cVar3 == ' ') && ((cVar2 == '<' || (cVar2 == '>')))) {
              iVar11 = iVar10 + -1;
            }
            else if ((cVar8 == ' ') && ((cVar3 == '/' && (cVar2 == '>')))) {
              *(undefined1 *)(iVar10 + -2 + iVar7) = 0x2f;
              iVar11 = iVar10 + -1;
            }
            else if ((cStack_119 == '<') && (((cVar8 == '!' && (cVar3 == '-')) && (cVar2 == '-'))))
            {
              cStack_119 = '\0';
              iVar10 = iVar10 + -3;
              cStack_118 = '\x01';
              cVar4 = '\0';
              cVar9 = '\0';
              goto LAB_00585065;
            }
            if (100000 < uStack_114) {
              if ((cStack_117 == '\0') || (local_110[uVar6] != '>')) {
                if ((cVar3 == '<') && (local_110[uVar6] == '/')) {
                  cStack_117 = '\x01';
                }
              }
              else {
                cStack_116 = '\x01';
              }
            }
            uStack_114 = uStack_114 + 1;
            *(char *)(iVar11 + iVar7) = local_110[uVar6];
            iVar10 = iVar11 + 1;
            cVar4 = local_110[uVar6];
            cVar9 = cVar3;
            cStack_119 = cVar8;
            if (cStack_116 != '\0') {
              *(undefined1 *)(iVar10 + iVar7) = 10;
              cStack_117 = '\0';
              cStack_116 = '\0';
              iVar10 = iVar11 + 2;
              uStack_114 = 0;
            }
          }
          else {
            cVar4 = cVar2;
            cStack_119 = cVar8;
            if (((cVar8 == '-') && (cVar3 == '-')) && (cVar2 == '>')) {
              cStack_118 = '\0';
            }
          }
        }
LAB_00585065:
        uVar6 = uVar6 + 1;
        cVar3 = cVar4;
        cVar8 = cVar9;
      } while (uVar6 < local_10c);
    }
    *(undefined1 *)(iVar10 + iVar7) = 0;
    if (local_115 != '\0') {
      FUN_00401f20(local_110);
    }
    piVar5 = (int *)FUN_00401f00(8);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = iVar10;
      piVar5[1] = iVar7;
    }
    return piVar5;
  }
  piVar5 = (int *)FUN_00431130(param_1,0,0x2800,4);
  if (piVar5 != (int *)0x0) {
    if ((char)piVar5[9] != '\0') {
      uVar6 = (*(code *)((undefined4 *)*piVar5)[7])();
      local_10c = uVar6;
      local_110 = (char *)FUN_00401f00(uVar6);
      local_115 = '\x01';
      uStack_114 = 1;
      (*(code *)piVar5[1])(piVar5,local_110,uVar6,&uStack_114,1);
      (**(code **)*piVar5)(1);
      goto LAB_00584ff9;
    }
    (**(code **)*piVar5)(1);
  }
  _sprintf(local_108,"XML : error opening XML file : %s",param_1);
  OutputDebugStringA(local_108);
  return (int *)0x0;
}



void FUN_00585190(char param_1)

{
  int in_ECX;
  
  FUN_00582160(0,1);
  FUN_0058fba0(0);
  FUN_0057ea20(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x24),0,0);
  FUN_0058ceb0(0xfa1,0x3f800000);
  if (param_1 == '\0') {
    FUN_00584390();
  }
  FUN_0057f9f0(0,0xfdd,0);
  FUN_00584980();
  return;
}



int FUN_00585220(char *param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *_Str;
  int iVar3;
  
  pcVar1 = param_1;
  pcVar2 = _strstr(param_1,"\\");
  _Str = pcVar1;
  while (pcVar2 != (char *)0x0) {
    _Str = pcVar2 + 1;
    pcVar2 = _strstr(_Str,"\\");
  }
  param_1 = (char *)0x0;
  FUN_0055e000(_Str,&param_1);
  iVar3 = (int)param_1;
  if ((param_1 == (char *)0x0) && (iVar3 = FUN_00584f10(pcVar1,0), param_2 != '\0')) {
    FUN_00412d30(_Str,iVar3);
  }
  return iVar3;
}



void FUN_005852a0(byte param_1)

{
  FUN_00584c00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005852c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009bf883;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_0058bc20(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_00584b30();
  FUN_00401f20(*in_ECX);
  *in_ECX = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00585330(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  iVar2 = in_ECX[5];
  *in_ECX = &PTR_FUN_00a696dc;
  if (iVar2 != 0) {
    uVar3 = 1;
    FUN_00582160(0,1,iVar2,1);
    FUN_0057cfe0(iVar2,uVar3);
  }
  local_4 = 0;
  FUN_0042bb90(in_ECX[8] + -0x3e9,&local_4);
  if (in_ECX[1] != 0) {
    *(undefined4 *)(in_ECX[1] + 0x44) = 0;
    if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[1])(1);
    }
  }
  in_ECX[1] = 0;
  if (*(char *)(in_ECX + 7) != '\0') {
    for (piVar1 = in_ECX + 2; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_005852c0();
        FUN_00401f20(iVar2);
      }
    }
  }
  iVar2 = in_ECX[3];
  while (iVar2 != 0) {
    iVar2 = *(int *)(in_ECX[3] + 4);
    FUN_00401f20(in_ECX[3]);
    in_ECX[3] = iVar2;
  }
  in_ECX[2] = 0;
  return;
}



void FUN_005853f0(byte param_1)

{
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00585410(undefined4 param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
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
  puStack_8 = &LAB_009ca5ab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_3 != 0) {
    *(int *)(in_ECX + 0x10) = param_3;
  }
  piVar6 = (int *)(in_ECX + 8);
  if (piVar6 != (int *)0x0) {
    do {
      puVar1 = (undefined4 *)*piVar6;
      if (puVar1 != (undefined4 *)0x0) {
        if ((param_2 == (char *)0x0) || ((char *)*puVar1 == (char *)0x0)) {
          iVar4 = (uint)(param_2 == (char *)0x0) * 2 + -1;
        }
        else {
          iVar4 = __stricmp((char *)*puVar1,param_2);
        }
        if (iVar4 == 0) break;
      }
      piVar6 = (int *)piVar6[1];
    } while (piVar6 != (int *)0x0);
    uVar2 = DAT_00b3b0a8;
    if (puVar1 != (undefined4 *)0x0) {
      iVar4 = FUN_00401f00(0x14,uVar3);
      piVar6 = (int *)0x0;
      local_4 = 0;
      if (iVar4 != 0) {
        piVar6 = (int *)FUN_0058cd30();
      }
      iVar4 = *piVar6;
      local_4 = 0xffffffff;
      DAT_00b3b0a8 = piVar6;
      if (iVar4 != 0) {
        FUN_005852c0();
        FUN_00401f20(iVar4);
      }
      *piVar6 = (int)puVar1;
      uVar5 = FUN_00590330(puVar1);
      FUN_0058cf40(puVar1);
      *DAT_00b3b0a8 = 0;
      piVar6 = DAT_00b3b0a8;
      if (DAT_00b3b0a8 != (int *)0x0) {
        FUN_0058cdb0();
        FUN_00401f20(piVar6);
      }
      goto LAB_0058551c;
    }
  }
  uVar5 = 0;
  uVar2 = DAT_00b3b0a8;
LAB_0058551c:
  DAT_00b3b0a8 = (int *)uVar2;
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



void FUN_00585540(void)

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
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(1,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_004fcce0();
    *in_ECX = uVar3;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *in_ECX = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005855e0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  param_1 = *(int *)(in_ECX + 0x2c) + param_1;
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 < param_1) {
    param_1 = iVar1;
  }
  if (param_1 == DAT_00b1398c || param_1 - DAT_00b1398c < 0) {
    param_1 = DAT_00b1398c;
  }
  if (iVar1 < param_1) {
    *(int *)(in_ECX + 0x2c) = iVar1;
    return;
  }
  *(int *)(in_ECX + 0x2c) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585620(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_8;
  
  puVar4 = *(undefined4 **)(in_ECX + 8);
  iVar1 = *(int *)(in_ECX + 0x2c);
  local_8 = DAT_00b3a704 - DAT_00b1398c * DAT_00b13980;
  iVar2 = iVar1 - DAT_00b1398c;
  if (iVar2 < 0) {
    iVar3 = -iVar2;
    iVar2 = 0;
    do {
      uVar11 = 0;
      uVar10 = 0xbf800000;
      uVar9 = 0xffffffff;
      fVar7 = (float)local_8;
      uVar8 = 1;
      fVar6 = (float)_DAT_00b3a700;
      uVar5 = 0;
      FUN_00571f90(1,0,fVar6,fVar7,1,0xffffffff,0xbf800000,0);
      FUN_005723e0(uVar5,fVar6,fVar7,uVar8,uVar9,uVar10,uVar11);
      local_8 = local_8 + DAT_00b13980;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = iVar2;
  if (0 < iVar2) {
    do {
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)*puVar4;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar1 - iVar2;
    do {
      uVar5 = puVar4[2];
      uVar11 = 0xbf800000;
      uVar10 = 0xffffffff;
      fVar7 = (float)local_8;
      uVar9 = 1;
      fVar6 = (float)_DAT_00b3a700;
      uVar8 = DAT_00b13994;
      FUN_00571f90(1,uVar5,fVar6,fVar7,1,0xffffffff,0xbf800000,DAT_00b13994);
      FUN_005723e0(uVar5,fVar6,fVar7,uVar9,uVar10,uVar11,uVar8);
      local_8 = local_8 + DAT_00b13980;
      iVar1 = iVar1 + -1;
      puVar4 = (undefined4 *)*puVar4;
    } while (iVar1 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585720(char param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined *puVar3;
  undefined1 *puVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  cVar1 = *(char *)(in_ECX + 0x31);
  *(char *)(in_ECX + 0x31) = param_1;
  if ('\0' < param_1 != '\0' < cVar1) {
    if ('\0' < param_1) {
      iVar2 = FUN_00582160(0);
      if (*(char *)(iVar2 + 8) != '\x01') {
        uVar10 = 0xbf800000;
        uVar9 = 0xffffffff;
        fVar6 = (float)DAT_00b3a704;
        uVar7 = 1;
        fVar5 = (float)_DAT_00b3a700;
        puVar3 = &DAT_00a69c84;
        uVar8 = DAT_00b13994;
        FUN_00571f90(1,&DAT_00a69c84,fVar5,fVar6,1,0xffffffff,0xbf800000,DAT_00b13994);
        FUN_005723e0(puVar3,fVar5,fVar6,uVar7,uVar9,uVar10,uVar8);
        FUN_005855e0(*(undefined4 *)(in_ECX + 0x10));
        FUN_00585620();
        return;
      }
      uVar10 = 0;
      uVar9 = 0xbf800000;
      uVar7 = 0xffffffff;
      fVar6 = (float)DAT_00b3a704;
      uVar8 = 1;
      fVar5 = (float)_DAT_00b3a700;
      puVar4 = &DAT_00a2f7ec;
      FUN_00571f90(1,&DAT_00a2f7ec,fVar5,fVar6,1,0xffffffff,0xbf800000,0);
      FUN_005723e0(puVar4,fVar5,fVar6,uVar8,uVar7,uVar9,uVar10);
      FUN_00585620();
      return;
    }
    FUN_00571f90(1);
    FUN_00571820();
    iVar2 = FUN_00582160(0,1);
    *(undefined4 *)(iVar2 + 0xbc) = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585820(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ('\0' < *(char *)(in_ECX + 0x31)) {
    uVar8 = 0xbf800000;
    uVar7 = 0xffffffff;
    fVar5 = (float)DAT_00b3a704;
    uVar6 = 1;
    fVar4 = (float)_DAT_00b3a700;
    puVar3 = &DAT_00a69c84;
    uVar9 = DAT_00b13994;
    FUN_00571f90(1,&DAT_00a69c84,fVar4,fVar5,1,0xffffffff,0xbf800000,DAT_00b13994);
    FUN_005723e0(puVar3,fVar4,fVar5,uVar6,uVar7,uVar8,uVar9);
    iVar1 = *(int *)(in_ECX + 0x10);
    iVar2 = *(int *)(in_ECX + 0x2c) + iVar1;
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    if (iVar2 == DAT_00b1398c || iVar2 - DAT_00b1398c < 0) {
      iVar2 = DAT_00b1398c;
    }
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    *(int *)(in_ECX + 0x2c) = iVar2;
    FUN_00585620();
    FUN_005794c0(0);
  }
  return;
}



void FUN_005858b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf1b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a69c78;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a69c68;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00585920(byte param_1)

{
  FUN_005858b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00585940(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009bf1f6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *in_ECX;
  local_4 = 1;
  if (iVar1 != 0) {
    FUN_0060d0a0(uVar2);
    FUN_00401f20(iVar1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005858b0();
  local_4 = 0xffffffff;
  FUN_005858b0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005859c0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  
  if (*(char *)(in_ECX + 0x31) == '\0') {
    FUN_00585720(1);
    return 1;
  }
  if (*(char *)(in_ECX + 0x31) == '\x01') {
    iVar2 = FUN_00582160(0,1);
    if ((*(uint *)(iVar2 + 0x118) >> 2 & 1) != 0) {
      uVar3 = 0;
      FUN_00582160(0,1,0);
      iVar2 = FUN_0057cfa0(uVar3);
      if (iVar2 == 3) {
        uVar3 = 1;
        FUN_00582160(0,1,1);
        iVar2 = FUN_0057cfa0(uVar3);
        if (iVar2 == 0) {
          FUN_00585720(2);
          return 0;
        }
      }
    }
  }
  cVar1 = *(char *)(in_ECX + 0x31);
  *(undefined1 *)(in_ECX + 0x31) = 0;
  if ('\0' < cVar1) {
    FUN_00571f90(1);
    FUN_00571820();
    iVar2 = FUN_00582160(0,1);
    *(undefined4 *)(iVar2 + 0xbc) = 0;
  }
  return 0;
}



void FUN_00585a70(undefined4 *param_1)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 4))();
  FUN_004028d0(*param_1,0);
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



undefined4 * FUN_00585ac0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf239;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)in_ECX[1];
  iVar2 = *piVar1;
  local_4 = 0;
  in_ECX[1] = iVar2;
  if (iVar2 == 0) {
    in_ECX[2] = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  FUN_004028d0(piVar1[2],0);
  local_4 = 0;
  (**(code **)(*in_ECX + 8))(piVar1,uVar3);
  in_ECX[3] = in_ECX[3] + -1;
  *unaff_FS_OFFSET = 1;
  return param_1;
}



void FUN_00585b60(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf276;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[4] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[1] = &PTR_FUN_00a69c8c;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[5] = &PTR_FUN_00a69c8c;
  *(undefined1 *)((int)in_ECX + 0x32) = 0;
  *in_ECX = 0;
  in_ECX[0xb] = 0;
  *(undefined1 *)((int)in_ECX + 0x31) = 0;
  in_ECX[9] = 0;
  local_4 = 1;
  FUN_00576a30(uVar1);
  DAT_00b13980 = FUN_009828c0();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00585c10(char param_1)

{
  uint uVar1;
  int iVar2;
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
  iVar2 = DAT_00b3a6fc;
  if ((DAT_00b3a6fc == 0) && (param_1 != '\0')) {
    local_10 = FUN_00401f00(0x34,uVar1);
    local_4 = 0;
    if (local_10 == 0) {
      DAT_00b3a6fc = 0;
    }
    else {
      DAT_00b3a6fc = FUN_00585b60();
    }
    local_4 = 0xffffffff;
    FUN_00585540();
    iVar2 = DAT_00b3a6fc;
  }
  DAT_00b3a6fc = iVar2;
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00585c90(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_840 [3];
  char local_83d;
  int local_83c;
  char *local_838;
  ushort local_834;
  undefined2 local_832;
  undefined4 local_830;
  undefined2 local_82c;
  undefined2 local_82a;
  int local_828;
  int local_824;
  undefined4 uStack_820;
  undefined2 uStack_81c;
  undefined2 uStack_81a;
  undefined4 local_818;
  undefined4 local_814;
  char local_810 [2048];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009bf2b6;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_840;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffff7b0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_838 = (char *)0x0;
  local_834 = 0;
  local_832 = 0;
  local_4 = 0;
  local_83c = in_ECX;
  FUN_00402d00(param_1,param_2);
  local_814 = 0x4b0;
  local_818 = 0;
  FUN_00576a30(uVar3);
  local_828 = FUN_00574a80(&local_838,&local_814,&local_818,0,0);
  if (local_828 != 0) {
    uVar3 = 0;
    while( true ) {
      if (local_834 == 0xffff) {
        pcVar4 = local_838;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        uVar5 = (int)pcVar4 - (int)(local_838 + 1);
      }
      else {
        uVar5 = (uint)local_834;
      }
      if (uVar5 < uVar3) break;
      local_810[uVar3] = (local_810 + uVar3)[(int)local_838 - (int)local_810];
      uVar3 = uVar3 + 1;
    }
    pcVar4 = local_810;
    local_824 = 0;
    iVar8 = in_ECX;
    if (0 < local_828) {
      do {
        local_83d = *(int *)(iVar8 + 0x2c) == *(int *)(iVar8 + 0x10);
        local_830 = 0;
        local_82c = 0;
        local_82a = 0;
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_004028d0(pcVar4,0);
        puVar6 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 4) + 4))();
        FUN_004028d0(local_830,0);
        iVar8 = local_83c;
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)(in_ECX + 0xc);
        if (*(undefined4 **)(in_ECX + 0xc) == (undefined4 *)0x0) {
          *(undefined4 **)(in_ECX + 8) = puVar6;
        }
        else {
          **(undefined4 **)(in_ECX + 0xc) = puVar6;
        }
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
        *(undefined4 **)(in_ECX + 0xc) = puVar6;
        if (local_83d != '\0') {
          *(undefined4 *)(local_83c + 0x2c) = *(undefined4 *)(local_83c + 0x10);
        }
        while (DAT_00b13984 < *(int *)(iVar8 + 0x10)) {
          FUN_00585ac0(&uStack_820);
          FUN_00401f20(uStack_820);
          piVar1 = (int *)(iVar8 + 0x2c);
          *piVar1 = *piVar1 + -1;
          uStack_820 = 0;
          uStack_81a = 0;
          uStack_81c = 0;
        }
        iVar7 = local_824 + 1;
        if (iVar7 < local_828) {
          cVar2 = *pcVar4;
          while (cVar2 != '\0') {
            pcVar4 = pcVar4 + 1;
            cVar2 = *pcVar4;
          }
          pcVar4 = pcVar4 + 1;
        }
        local_4 = local_4 & 0xffffff00;
        FUN_00401f20(local_830);
        local_830 = 0;
        local_82a = 0;
        local_82c = 0;
        iVar8 = local_83c;
        local_824 = iVar7;
      } while (iVar7 < local_828);
    }
    if (*(int *)(iVar8 + 0x2c) == *(int *)(iVar8 + 0x10)) {
      FUN_00585620();
    }
  }
  FUN_00401f20(local_838);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00585f40(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf2f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_00585c90(param_2,&stack0x0000000c);
  FUN_00401f20(0,uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00586000(undefined1 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined4 *in_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  uint *unaff_FS_OFFSET;
  float10 fVar14;
  undefined *puVar15;
  float fVar16;
  float fVar17;
  uchar *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 *local_1f7c;
  undefined2 local_1f78;
  undefined2 local_1f76;
  undefined4 *local_1f74;
  undefined4 *local_1f70 [2];
  undefined4 local_1f68;
  undefined2 local_1f64;
  undefined2 local_1f62;
  undefined4 *puStack_1f60;
  undefined4 *puStack_1f5c;
  undefined1 *puStack_1f58;
  undefined4 auStack_1f54 [5];
  undefined4 *puStack_1f40;
  undefined1 auStack_1f38 [128];
  char acStack_1eb8 [127];
  char local_1e39 [2048];
  char acStack_1639 [1025];
  char acStack_1238 [2600];
  uchar local_810 [2048];
  uint local_10;
  uint local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bf370;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_1f7c;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffe074;
  *unaff_FS_OFFSET = (uint)&local_c;
  if ((*(char *)((int)in_ECX + 0x31) < '\x01') ||
     (local_1f74 = in_ECX, iVar4 = FUN_00582160(0,1,uVar3), *(char *)(iVar4 + 8) == '\x01')) {
    uVar22 = 0;
    goto LAB_0058740b;
  }
  if (param_1 != (undefined1 *)0x0) {
    fVar17 = (float)DAT_00b3a704;
    uVar22 = 1;
    puVar18 = local_810;
    fVar16 = (float)_DAT_00b3a700;
    FUN_00571f90(1,puVar18,fVar16,fVar17,1);
    FUN_00571660(puVar18,fVar16,fVar17,uVar22);
    __mbsnbcpy((uchar *)(local_1e39 + 1),local_810,0x7fe);
    iVar4 = 0;
    cVar2 = local_1e39[1];
    while (cVar2 != '\0') {
      cVar2 = local_1e39[iVar4 + 2];
      iVar4 = iVar4 + 1;
    }
    iVar10 = iVar4;
    if (local_1e39[iVar4] == '|') {
      iVar10 = iVar4 + -1;
      local_1e39[iVar4] = '\0';
    }
    iVar4 = 0;
    if (0 < iVar10) {
      do {
        if (local_1e39[iVar4 + 1] == '|') break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar10);
    }
    if (iVar4 == iVar10) {
      local_1e39[iVar4 + 1] = '|';
      iVar10 = iVar10 + 1;
    }
    if (param_1 == (undefined1 *)0x80000008) {
      iVar10 = iVar10 + 1;
      iVar4 = 0;
      if (0 < iVar10) {
        do {
          if (local_1e39[iVar4 + 1] == '|') {
            local_1e39[iVar4 + 1] = local_1e39[iVar4 + 2];
            local_1e39[iVar4 + 2] = '|';
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar10);
      }
      iVar4 = 0;
      if (0 < iVar10) {
        iVar11 = -1;
        do {
          if ((local_1e39 + 1)[iVar4] == '\n') {
            if (local_1e39[iVar4] == '-') {
              if (iVar11 < iVar10) {
                pcVar8 = local_1e39 + iVar11 + 3;
                pcVar13 = local_1e39 + iVar11 + 1;
                for (iVar9 = iVar10 - iVar11; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *pcVar13 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                  pcVar13 = pcVar13 + 1;
                }
              }
            }
            else {
              (local_1e39 + 1)[iVar4] = ' ';
            }
            if ((local_1e39 + 1)[iVar4] == '\n') {
              (local_1e39 + 1)[iVar4] = ' ';
            }
          }
          iVar4 = iVar4 + 1;
          iVar11 = iVar11 + 1;
        } while (iVar4 < iVar10);
      }
      if (local_1e39[1] != '\0') {
        piVar5 = (int *)FUN_00582160(0,1);
        iVar4 = local_1f74[4];
        iVar10 = local_1f74[0xb] + iVar4;
        if (iVar4 < local_1f74[0xb] + iVar4) {
          iVar10 = iVar4;
        }
        if (iVar10 == DAT_00b1398c || iVar10 - DAT_00b1398c < 0) {
          iVar10 = DAT_00b1398c;
        }
        if (iVar4 < iVar10) {
          iVar10 = iVar4;
        }
        local_1f74[0xb] = iVar10;
        FUN_00585f40(local_1f74,local_1e39 + 1);
        local_1f68 = 0;
        local_1f64 = 0;
        local_1f62 = 0;
        FUN_004028d0(local_1e39 + 1,0);
        local_4 = 0;
        puVar6 = (undefined4 *)(**(code **)(local_1f74[5] + 4))();
        FUN_004028d0(local_1f68,0);
        puVar6[1] = 0;
        *puVar6 = local_1f74[6];
        if (local_1f74[6] == 0) {
          local_1f74[7] = puVar6;
        }
        else {
          *(undefined4 **)(local_1f74[6] + 4) = puVar6;
        }
        local_1f74[8] = local_1f74[8] + 1;
        local_1f74[6] = puVar6;
        local_1f74[9] = 0;
        uVar21 = 0xbf800000;
        uVar20 = 0xffffffff;
        fVar17 = (float)DAT_00b3a704;
        uVar19 = 1;
        fVar16 = (float)_DAT_00b3a700;
        puVar15 = &DAT_00a69c84;
        uVar22 = DAT_00b13994;
        FUN_00571f90(1,&DAT_00a69c84,fVar16,fVar17,1,0xffffffff,0xbf800000,DAT_00b13994);
        FUN_005723e0(puVar15,fVar16,fVar17,uVar19,uVar20,uVar21,uVar22);
        iVar4 = __mbsnbicmp((uchar *)(local_1e39 + 1),"dof",3);
        if (iVar4 == 0) {
          local_1f74 = (undefined4 *)0x0;
          FID_conflict__sscanf(local_1e39 + 1,"dof %f",&local_1f74);
          puVar6 = (undefined4 *)(*(int *)(*piVar5 + 0xdc) + 0xec);
          puVar12 = auStack_1f54;
          for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar12 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar12 = puVar12 + 1;
          }
          puStack_1f40 = local_1f74;
          FUN_0070c190(auStack_1f54);
          FUN_00401f20(local_1f68);
          uVar22 = 1;
        }
        else {
          local_1f70[0] = (undefined4 *)__mbsnbicmp((uchar *)(local_1e39 + 1),"usz",3);
          if (local_1f70[0] == (undefined4 *)0x0) {
            local_1f74 = local_1f70[0];
            FID_conflict__sscanf(local_1e39 + 1,"usz %i",local_1f70,&local_1f74);
            FUN_00579370(local_1f70[0],local_1f74);
            FUN_00401f20(local_1f68);
            uVar22 = 1;
          }
          else {
            iVar4 = __mbsicmp((uchar *)(local_1e39 + 1),"clr");
            if ((iVar4 == 0) || (iVar4 = __mbscmp((uchar *)(local_1e39 + 1),"cls"), iVar4 == 0)) {
              FUN_00573880();
              local_1f74[0xb] = 0;
              FUN_00585620();
            }
            else {
              iVar4 = __mbsicmp((uchar *)(local_1e39 + 1),(uchar *)&PTR_LAB_00a69f3c);
              if (iVar4 == 0) {
                piVar5 = (int *)piVar5[0x2f];
                if (piVar5 != (int *)0x0) {
                  local_1f7c = (undefined1 *)0x0;
                  local_1f78 = 0;
                  local_1f76 = 0;
                  local_4 = CONCAT31(local_4._1_3_,1);
                  uVar22 = FUN_004da2a0(piVar5[3]);
                  FUN_00402e30(&local_1f7c,"\"%s\" (%08x)",uVar22);
                  uVar22 = (**(code **)(*piVar5 + 0x154))();
                  iVar4 = FUN_00560920(&DAT_00b3fab0,uVar22);
                  if (iVar4 == 0) {
                    iVar4 = (**(code **)(*piVar5 + 0x154))();
                    iVar4 = FUN_00560920(&DAT_00b3fab0,*(undefined4 *)(iVar4 + 0x1c));
                  }
                  puVar7 = local_1f7c;
                  FUN_00572850(iVar4,local_1f7c,0,0xbf800000);
                  FUN_00401f20(puVar7);
                  FUN_00401f20(local_1f68);
                  uVar22 = 1;
                  goto LAB_0058740b;
                }
              }
              else {
                iVar4 = __mbsnbicmp((uchar *)(local_1e39 + 1),(uchar *)"reload strings",0xe);
                if (iVar4 == 0) {
                  if ((undefined4 *)piVar5[0x1b] != (undefined4 *)0x0) {
                    (*(code *)**(undefined4 **)piVar5[0x1b])(1);
                  }
                  FUN_00584670("Data\\Menus\\strings.xml",0);
                  iVar4 = FUN_00590420("Data\\Menus\\strings.xml");
                  FUN_0058d1c0(0,0);
                  piVar5[0x1b] = iVar4;
                  FUN_00401f20(local_1f68);
                  uVar22 = 1;
                  goto LAB_0058740b;
                }
                iVar4 = __mbsnbicmp((uchar *)(local_1e39 + 1),(uchar *)"reload HUDReticle",0x11);
                if (iVar4 == 0) {
                  FUN_00584db0();
                  FUN_00578cf0(3);
                  FUN_00401f20(local_1f68);
                  uVar22 = 1;
                  goto LAB_0058740b;
                }
                iVar4 = __mbsnbicmp((uchar *)(local_1e39 + 1),(uchar *)"reload HUDSafeZone",0x12);
                if (iVar4 == 0) {
                  FUN_00584db0();
                  FUN_005798f0(3);
                  FUN_00401f20(local_1f68);
                  uVar22 = 1;
                  goto LAB_0058740b;
                }
                iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),"TEH",3);
                if (iVar4 == 0) {
                  uVar22 = FUN_00589b70(0x3ee,"hudreticle_enemy_health");
                  iVar4 = FUN_0058b800(uVar22);
                  if (iVar4 != 0) {
                    fVar14 = (float10)FUN_00588bd0(0xfa1);
                    local_1f70[0] = (undefined4 *)0x1;
                    if (fVar14 != (float10)2.0) {
                      local_1f70[0] = (undefined4 *)0x2;
                    }
                    FUN_0058ceb0(0xfa1,(float)(int)local_1f70[0]);
                    FUN_00401f20(local_1f68);
                    uVar22 = 1;
                    goto LAB_0058740b;
                  }
                }
                else {
                  iVar4 = __mbsnbicmp((uchar *)(local_1e39 + 1),(uchar *)"reload ",7);
                  if (iVar4 == 0) {
                    FUN_00584db0();
                    FID_conflict__sscanf(local_1e39 + 1,"reload %s",acStack_1639 + 1);
                    if (acStack_1639[1] != '&') {
                      iVar4 = 0;
                      while (acStack_1639[1] != '\0') {
                        acStack_1639[1] = acStack_1639[iVar4 + 2];
                        iVar4 = iVar4 + 1;
                      }
                      acStack_1639[iVar4 + 3] = '\0';
                      acStack_1639[iVar4 + 2] = ';';
                      for (; 0 < iVar4; iVar4 = iVar4 + -1) {
                        acStack_1639[iVar4 + 1] = acStack_1639[iVar4];
                      }
                      acStack_1639[1] = '&';
                    }
                    uVar22 = FUN_00588ef0(acStack_1639 + 1);
                    FUN_00587b20(1,uVar22);
                    FUN_00587550(uVar22);
                    FUN_00401f20(local_1f68);
                    uVar22 = 1;
                    goto LAB_0058740b;
                  }
                  iVar4 = __mbsnbicmp((uchar *)(local_1e39 + 1),(uchar *)"delete ",7);
                  if (iVar4 == 0) {
                    FID_conflict__sscanf(local_1e39 + 1,"delete %s",acStack_1639 + 1);
                    uVar22 = FUN_00588ef0(acStack_1639 + 1);
                    FUN_00587b20(1,uVar22);
                    FUN_00587440(uVar22);
                    FUN_00401f20(local_1f68);
                    uVar22 = 1;
                    goto LAB_0058740b;
                  }
                  iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"front",5);
                  if (iVar4 == 0) {
                    FUN_00587b20(1);
                    iVar4 = FUN_005877d0();
                    FUN_00585f40(local_1f74,"Frontmost: %s",*(undefined4 *)(*(int *)(iVar4 + 4) + 8)
                                );
                    FUN_00401f20(local_1f68);
                    uVar22 = 1;
                    goto LAB_0058740b;
                  }
                  iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"stack",5);
                  if (iVar4 == 0) {
                    iVar10 = 0;
                    iVar4 = FUN_0057cfa0(0);
                    if (iVar4 != 0) {
                      do {
                        iVar10 = iVar10 + 1;
                        uVar22 = FUN_0057cfa0(iVar10);
                        FUN_00585f40(local_1f74,"%i: %i",iVar10,uVar22);
                        iVar4 = FUN_0057cfa0(iVar10);
                      } while (iVar4 != 0);
                      FUN_00401f20(local_1f68);
                      uVar22 = 1;
                      goto LAB_0058740b;
                    }
                  }
                  else {
                    iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"close all menus",0xf);
                    if (iVar4 == 0) {
                      FUN_00579770();
                      FUN_00401f20(local_1f68);
                      uVar22 = 1;
                      goto LAB_0058740b;
                    }
                    iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"visible",7);
                    if (iVar4 == 0) {
                      local_1f70[0] = (undefined4 *)0x0;
                      FID_conflict__sscanf(local_1e39 + 1,"visible %i",local_1f70);
                      puVar6 = local_1f70[0];
                      FUN_00587b20(1,local_1f70[0]);
                      uVar1 = FUN_005878b0(puVar6);
                      FUN_00585f40(local_1f74,"Is Visible: %i",uVar1);
                      FUN_00401f20(local_1f68);
                      uVar22 = 1;
                      goto LAB_0058740b;
                    }
                    iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"exit menus",10);
                    if (iVar4 == 0) {
                      iVar4 = FUN_0057cf60();
                      if (iVar4 != 0) {
                        do {
                          FUN_0057cfe0(iVar4,0);
                          iVar4 = FUN_0057cf60();
                        } while (iVar4 != 0);
                        FUN_00401f20(local_1f68);
                        uVar22 = 1;
                        goto LAB_0058740b;
                      }
                    }
                    else {
                      iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),
                                         (uchar *)"emergency texture release",0x19);
                      if (iVar4 == 0) {
                        FUN_00579ae0();
                        FUN_00585f40(local_1f74,"First change release of hidden textures activated."
                                    );
                        FUN_00401f20(local_1f68);
                        uVar22 = 1;
                        goto LAB_0058740b;
                      }
                      iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"playerpos",9);
                      if (iVar4 == 0) {
                        local_1f70[0] = (undefined4 *)0x0;
                        local_1f74 = (undefined4 *)0x0;
                        local_1f7c = (undefined1 *)0x0;
                        FID_conflict__sscanf
                                  (local_1e39 + 1,"playerpos %f %f %f",local_1f70,&local_1f74,
                                   &local_1f7c);
                        puStack_1f60 = local_1f70[0];
                        puStack_1f5c = local_1f74;
                        puStack_1f58 = local_1f7c;
                        iVar4 = FUN_00582160(0,1);
                        iVar4 = *(int *)(iVar4 + 0x60);
                        *(undefined4 **)(iVar4 + 0x54) = puStack_1f60;
                        *(undefined4 **)(iVar4 + 0x58) = puStack_1f5c;
                        *(undefined1 **)(iVar4 + 0x5c) = puStack_1f58;
                        FUN_00582160(0,1);
                        FUN_00707370(0,1);
                        FUN_00401f20(local_1f68);
                        uVar22 = 1;
                        goto LAB_0058740b;
                      }
                      puVar7 = (undefined1 *)
                               __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"repair",6);
                      if (puVar7 == (undefined1 *)0x0) {
                        local_1f7c = puVar7;
                        FID_conflict__sscanf(local_1e39 + 1,"repair %i",&local_1f7c);
                        FUN_005d2070(local_1f7c,5,0,0);
                        FUN_00401f20(local_1f68);
                        uVar22 = 1;
                        goto LAB_0058740b;
                      }
                      iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"set trait",9);
                      if (iVar4 == 0) {
                        local_1f7c = (undefined1 *)0x0;
                        FID_conflict__sscanf
                                  (local_1e39 + 1,"set trait %s %s %f",auStack_1f38,acStack_1eb8,
                                   &local_1f7c);
                        iVar4 = FUN_0058b800(0,auStack_1f38);
                        iVar10 = FUN_00588ef0(acStack_1eb8);
                        if (iVar4 == 0) {
                          FUN_00585c90("Can\'t find tile \'%s\'",auStack_1f38);
                          FUN_00401f20(local_1f68);
                          uVar22 = 1;
                        }
                        else if (iVar10 < 1) {
                          FUN_00585c90("Unknown trait \'%s\'",acStack_1eb8);
                          FUN_00401f20(local_1f68);
                          uVar22 = 1;
                        }
                        else {
                          FUN_00585f40(local_1f74,"Trait set.");
                          FUN_0058ceb0(iVar10,local_1f7c);
                          FUN_00401f20(local_1f68);
                          uVar22 = 1;
                        }
                        goto LAB_0058740b;
                      }
                      iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"depth",5);
                      if (iVar4 == 0) {
                        thunk_FUN_00584980();
                        uVar22 = FUN_009828c0();
                        FUN_00585f40(local_1f74,"Max Depth: %i",uVar22);
                        FUN_00582160(0,1);
                        FUN_00588bd0(0xfab);
                        uVar22 = FUN_009828c0();
                        FUN_00585f40(local_1f74,"Cursor Depth: %i",uVar22);
                        FUN_00401f20(local_1f68);
                        uVar22 = 1;
                        goto LAB_0058740b;
                      }
                      iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"new fonts",9);
                      if (iVar4 == 0) {
                        iVar4 = FUN_00576a30();
                        *(undefined1 *)(iVar4 + 0x14) = 1;
                        FUN_00401f20(local_1f68);
                        uVar22 = 1;
                        goto LAB_0058740b;
                      }
                      iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"old fonts",9);
                      if (iVar4 == 0) {
                        iVar4 = FUN_00576a30();
                        *(undefined1 *)(iVar4 + 0x14) = 0;
                        FUN_00401f20(local_1f68);
                        uVar22 = 1;
                        goto LAB_0058740b;
                      }
                      iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),(uchar *)"use workbook",0xc);
                      if (iVar4 == 0) {
                        uVar22 = FUN_00589b70(0x402,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
                        iVar4 = FUN_009832e6(uVar22);
                        if (iVar4 == 0) {
                          FUN_00585f40(local_1f74,
                                       "You must open a book (or scroll) before using the workbook."
                                      );
                          FUN_00401f20(local_1f68);
                          uVar22 = 1;
                          goto LAB_0058740b;
                        }
                        iVar4 = FUN_009832e6(*(undefined4 *)(iVar4 + 0x44),0,&PTR_PTR_00b0a018,
                                             &PTR_PTR_00b13330,0);
                        if (iVar4 != 0) {
                          FUN_00596150();
                          FUN_00401f20(local_1f68);
                          uVar22 = 1;
                          goto LAB_0058740b;
                        }
                      }
                      else {
                        iVar4 = __mbsnbcmp((uchar *)(local_1e39 + 1),"bat",3);
                        if (iVar4 != 0) {
                          pcVar8 = local_1e39 + 1;
                          uVar3 = 0;
                          do {
                            cVar2 = *pcVar8;
                            pcVar8 = pcVar8 + 1;
                          } while (cVar2 != '\0');
                          if (pcVar8 != local_1e39 + 2) {
                            do {
                              if (local_1e39[uVar3 + 1] == '\n') {
                                local_1e39[uVar3 + 1] = ' ';
                              }
                              pcVar8 = local_1e39 + 1;
                              uVar3 = uVar3 + 1;
                              do {
                                cVar2 = *pcVar8;
                                pcVar8 = pcVar8 + 1;
                              } while (cVar2 != '\0');
                            } while (uVar3 < (uint)((int)pcVar8 - (int)(local_1e39 + 2)));
                          }
                          FUN_004fbaa0();
                          local_4._0_1_ = 4;
                          FUN_0046b590();
                          FUN_004f9e50(local_1e39 + 1);
                          iVar4 = FUN_00582160(0,1);
                          FUN_004fbf00(*local_1f74,1,*(undefined4 *)(iVar4 + 0xbc));
                          local_4 = (uint)local_4._1_3_ << 8;
                          FUN_004fc980();
                          FUN_00401f20(local_1f68);
                          uVar22 = 1;
                          goto LAB_0058740b;
                        }
                        acStack_1eb8[0] = '\0';
                        _memset(acStack_1eb8 + 1,0,0x7f);
                        FID_conflict__sscanf(local_1e39 + 1,"bat %s",acStack_1eb8);
                        pcVar8 = acStack_1eb8;
                        do {
                          cVar2 = *pcVar8;
                          pcVar8 = pcVar8 + 1;
                        } while (cVar2 != '\0');
                        if (pcVar8 == acStack_1eb8 + 1) {
                          FUN_00579b60("You must enter a filename.");
                          FUN_00401f20(local_1f68);
                          uVar22 = 1;
                          goto LAB_0058740b;
                        }
                        local_1f7c = (undefined1 *)FUN_00401f00(0x154);
                        local_4._0_1_ = 2;
                        if (local_1f7c == (undefined1 *)0x0) {
                          piVar5 = (int *)0x0;
                        }
                        else {
                          piVar5 = (int *)FUN_00430970(acStack_1eb8,0,0x2800,0);
                        }
                        local_4 = (uint)local_4._1_3_ << 8;
                        if ((piVar5 == (int *)0x0) ||
                           (cVar2 = (**(code **)(*piVar5 + 0x18))(0,0), cVar2 == '\0')) {
                          FUN_00579b60("The file \'%s\' could not be opened.",acStack_1eb8);
                        }
                        else {
                          iVar4 = (**(code **)(*piVar5 + 0x28))(acStack_1238,0xa28,0xd);
                          while (iVar4 != 0) {
                            pcVar8 = acStack_1238;
                            uVar3 = 0;
                            do {
                              cVar2 = *pcVar8;
                              pcVar8 = pcVar8 + 1;
                            } while (cVar2 != '\0');
                            if (pcVar8 != acStack_1238 + 1) {
                              do {
                                if (acStack_1238[uVar3] == '\n') {
                                  acStack_1238[uVar3] = ' ';
                                }
                                pcVar8 = acStack_1238;
                                uVar3 = uVar3 + 1;
                                do {
                                  cVar2 = *pcVar8;
                                  pcVar8 = pcVar8 + 1;
                                } while (cVar2 != '\0');
                              } while (uVar3 < (uint)((int)pcVar8 - (int)(acStack_1238 + 1)));
                            }
                            pcVar8 = acStack_1238;
                            do {
                              cVar2 = *pcVar8;
                              pcVar8 = pcVar8 + 1;
                            } while (cVar2 != '\0');
                            if (1 < (uint)((int)pcVar8 - (int)(acStack_1238 + 1))) {
                              FUN_00579b60(&DAT_00a69cbc,acStack_1238);
                              FUN_004fbaa0();
                              local_4._0_1_ = 3;
                              FUN_0046b590();
                              FUN_004f9e50(acStack_1238);
                              FUN_004fbf00(*local_1f74,1,0);
                              local_4 = (uint)local_4._1_3_ << 8;
                              FUN_004fc980();
                            }
                            iVar4 = (**(code **)(*piVar5 + 0x28))(acStack_1238,0xa28,0xd);
                          }
                        }
                        if (piVar5 != (int *)0x0) {
                          (**(code **)*piVar5)(1);
                          FUN_00401f20(local_1f68);
                          uVar22 = 1;
                          goto LAB_0058740b;
                        }
                      }
                    }
                  }
                }
              }
            }
            FUN_00401f20(local_1f68);
            uVar22 = 1;
          }
        }
        goto LAB_0058740b;
      }
    }
    else {
      if (param_1 == (undefined1 *)0x80000000) {
        if ((iVar10 != 0) && (iVar4 != 0)) {
          if (iVar4 < iVar10 + -1) {
            pcVar8 = local_1e39 + iVar4 + 2;
            pcVar13 = local_1e39 + iVar4 + 1;
            for (iVar11 = (iVar10 + -1) - iVar4; in_ECX = local_1f74, iVar11 != 0;
                iVar11 = iVar11 + -1) {
              *pcVar13 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          local_1e39[iVar10] = '\0';
          local_1e39[iVar4] = '|';
        }
      }
      else if (param_1 == (undefined1 *)0x80000007) {
        if (iVar4 < iVar10) {
          if (iVar4 < iVar10 + -1) {
            pcVar8 = local_1e39 + iVar4 + 2;
            pcVar13 = local_1e39 + iVar4 + 1;
            for (iVar11 = (iVar10 + -1) - iVar4; in_ECX = local_1f74, iVar11 != 0;
                iVar11 = iVar11 + -1) {
              *pcVar13 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          local_1e39[iVar10] = '\0';
          local_1e39[iVar4 + 1] = '|';
        }
      }
      else if (param_1 == (undefined1 *)0x80000009) {
        FUN_005855e0(1 - DAT_00b1398c);
        FUN_00585620();
      }
      else if (param_1 == (undefined1 *)0x8000000a) {
        FUN_005855e0(DAT_00b1398c + -1);
        FUN_00585620();
      }
      else if (param_1 == (undefined1 *)0x80000003) {
        iVar4 = in_ECX[8];
        if (iVar4 != 0) {
          in_ECX[9] = in_ECX[9] + 1;
          iVar10 = in_ECX[9];
          if (iVar4 + -1 <= iVar10) {
            iVar10 = iVar4 + -1;
          }
          puVar6 = (undefined4 *)in_ECX[6];
          in_ECX[9] = iVar10;
          if (0 < iVar10) {
            do {
              if (puVar6 == (undefined4 *)0x0) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                puVar6 = (undefined4 *)*puVar6;
              }
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          _sprintf(local_1e39 + 1,"%s",puVar6[2]);
        }
      }
      else if (param_1 == (undefined1 *)0x80000004) {
        if (in_ECX[8] != 0) {
          in_ECX[9] = in_ECX[9] + -1;
          local_1f7c = (undefined1 *)0x0;
          local_1f78 = 0;
          local_1f76 = 0;
          uVar3 = in_ECX[9] & ((int)in_ECX[9] < 1) - 1;
          in_ECX[9] = uVar3;
          local_4 = 5;
          if (uVar3 == 0) {
LAB_005871b2:
            FUN_004028d0(&DAT_00a2f7ec,0);
          }
          else {
            puVar6 = (undefined4 *)in_ECX[6];
            if (0 < (int)uVar3) {
              do {
                if (puVar6 == (undefined4 *)0x0) {
                  puVar6 = (undefined4 *)0x0;
                }
                else {
                  puVar6 = (undefined4 *)*puVar6;
                }
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            if (puVar6 == (undefined4 *)0x0) goto LAB_005871b2;
            FUN_004fb4c0(puVar6 + 2);
          }
          iVar4 = FUN_00404fd0();
          puVar7 = local_1f7c;
          if (iVar4 == 0) {
            puVar7 = &DAT_00a2f7ec;
          }
          _sprintf(local_1e39 + 1,"%s",puVar7);
          local_4 = 0xffffffff;
          FUN_00402da0();
        }
      }
      else if (param_1 == (undefined1 *)0x80000001) {
        if ((iVar10 != 0) && (iVar4 != 0)) {
          local_1e39[iVar4 + 1] = local_1e39[iVar4];
          local_1e39[iVar4] = '|';
        }
      }
      else if (param_1 == &DAT_80000002) {
        if ((iVar10 != 0) && (iVar4 + 1 < iVar10)) {
          local_1e39[iVar4 + 1] = local_1e39[iVar4 + 2];
          local_1e39[iVar4 + 2] = '|';
        }
      }
      else if (param_1 == (undefined1 *)0x80000005) {
        if ((iVar10 != 0) && (iVar4 != 0)) {
          for (; 0 < iVar4; iVar4 = iVar4 + -1) {
            local_1e39[iVar4 + 1] = local_1e39[iVar4];
          }
          local_1e39[1] = '|';
        }
      }
      else if (param_1 == (undefined1 *)0x80000006) {
        if ((iVar10 != 0) && (iVar4 + 1 < iVar10)) {
          if (iVar4 < iVar10 + -1) {
            pcVar8 = local_1e39 + iVar4 + 2;
            pcVar13 = local_1e39 + iVar4 + 1;
            for (iVar11 = (iVar10 + -1) - iVar4; in_ECX = local_1f74, iVar11 != 0;
                iVar11 = iVar11 + -1) {
              *pcVar13 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          local_1e39[iVar10] = '|';
        }
      }
      else {
        local_1e39[iVar4 + 1] = (char)param_1;
        for (iVar11 = iVar10 + 1; iVar4 < iVar11; iVar11 = iVar11 + -1) {
          local_1e39[iVar11 + 2] = local_1e39[iVar11 + 1];
        }
        local_1e39[iVar10 + 3] = '\0';
        local_1e39[iVar4 + 2] = '|';
      }
      iVar4 = 0;
      cVar2 = local_1e39[1];
      while (cVar2 != '\0') {
        if (local_1e39[iVar4 + 1] == '|') goto LAB_00587357;
        cVar2 = local_1e39[iVar4 + 2];
        iVar4 = iVar4 + 1;
      }
      local_1e39[iVar4 + 1] = '|';
      local_1e39[iVar4 + 2] = '\0';
LAB_00587357:
      local_1f7c = (undefined1 *)0x0;
      local_1f78 = 0;
      local_1f76 = 0;
      FUN_004028d0(local_1e39 + 1,0);
      local_4 = 6;
      if (in_ECX[8] != 0) {
        FUN_00585ac0(local_1f70);
        FUN_00401f20(local_1f70[0]);
      }
      FUN_00585a70(&local_1f7c);
      uVar21 = 0xbf800000;
      uVar20 = 0xffffffff;
      fVar17 = (float)DAT_00b3a704;
      uVar19 = 1;
      pcVar8 = local_1e39 + 1;
      fVar16 = (float)_DAT_00b3a700;
      uVar22 = DAT_00b13994;
      FUN_00571f90(1,pcVar8,fVar16,fVar17,1,0xffffffff,0xbf800000,DAT_00b13994);
      FUN_005723e0(pcVar8,fVar16,fVar17,uVar19,uVar20,uVar21,uVar22);
      FUN_00401f20(local_1f7c);
    }
  }
  uVar22 = 1;
LAB_0058740b:
  *unaff_FS_OFFSET = local_c;
  return uVar22;
}



undefined4 FUN_00587440(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00589b70(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    return 1;
  }
  return 0;
}



void FUN_005874a0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a69ff4;
  _memset(in_ECX + 10,0,0x34);
  _memset(in_ECX + 0x18,0,0x74);
  in_ECX[0x17] = 0xff;
  *(undefined1 *)(in_ECX + 0x35) = 0;
  in_ECX[0x36] = 0;
  *(undefined1 *)(in_ECX + 0x39) = 0;
  return;
}



int FUN_00587500(int param_1)

{
  if (param_1 - 1U < 0xd) {
    return param_1 + -1;
  }
  return 0xd;
}



void FUN_00587520(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a69ff4;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00587550(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  puVar2 = (undefined4 *)FUN_00589b70(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  uVar5 = 0;
  if (param_1 == 0x3ff) {
    uVar5 = FUN_00579f80();
    fVar6 = (float10)FUN_00588bd0(0xfdb);
    uVar3 = FUN_005898f0((float)fVar6);
    FUN_00584300(uVar3);
    iVar4 = FUN_005898f0();
    *(undefined4 *)(iVar4 + 0x24) = 8;
    return uVar5;
  }
  if (param_1 == 0x3fe) {
    uVar5 = FUN_0057a180();
    fVar6 = (float10)FUN_00588bd0(0xfdb);
    uVar3 = FUN_005898f0((float)fVar6);
    FUN_00584300(uVar3);
    iVar4 = FUN_005898f0();
    *(undefined4 *)(iVar4 + 0x24) = 8;
    return uVar5;
  }
  if (param_1 == 0x3ea) {
    uVar5 = FUN_0057a2d0();
    fVar6 = (float10)FUN_00588bd0(0xfdb);
    uVar3 = FUN_005898f0((float)fVar6);
    FUN_00584300(uVar3);
    iVar4 = FUN_005898f0();
    *(undefined4 *)(iVar4 + 0x24) = 8;
    return uVar5;
  }
  if (param_1 == 0x3eb) {
    uVar5 = FUN_0057a440();
    fVar6 = (float10)FUN_00588bd0(0xfdb);
    uVar3 = FUN_005898f0((float)fVar6);
    FUN_00584300(uVar3);
    iVar4 = FUN_005898f0();
    *(undefined4 *)(iVar4 + 0x24) = 8;
    return uVar5;
  }
  if (param_1 == 0x3ec) {
    uVar5 = FUN_005a6b00();
    return uVar5;
  }
  if (param_1 == 0x3ed) {
    uVar5 = FUN_005a4840();
    return uVar5;
  }
  if (param_1 == 0x3f2) {
    uVar5 = FUN_005a8e30();
    return uVar5;
  }
  if (param_1 == 0x3ef) {
    uVar5 = FUN_005adcf0(0);
    return uVar5;
  }
  if (param_1 == 0x414) {
    uVar5 = FUN_005b6040();
    return uVar5;
  }
  if (param_1 == 0x3f0) {
    uVar3 = FUN_00589b70(0x3f0,0,&PTR_PTR_00b13240,&PTR_PTR_00b13254,0);
    iVar4 = FUN_009832e6(uVar3);
    if (iVar4 != 0) {
      uVar5 = FUN_00599ee0(*(undefined4 *)(iVar4 + 0x44),0,1,0);
      return uVar5;
    }
  }
  else if (param_1 == 0x402) {
    uVar3 = FUN_00589b70(0x3f0,0,&PTR_PTR_00b13240,&PTR_PTR_00b13330,0);
    puVar2 = (undefined4 *)FUN_009832e6(uVar3);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = (int *)puVar2[0xc];
      uVar5 = (**(code **)(*piVar1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0,0);
      uVar5 = FUN_009832e6(uVar5);
      (**(code **)*puVar2)(1);
      uVar5 = FUN_005962c0(uVar5,piVar1);
      return uVar5;
    }
  }
  else if (param_1 == 0x418) {
    uVar5 = FUN_005d5200(0);
  }
  return uVar5;
}



int FUN_005877d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_4;
  
  local_4 = -1e+08;
  iVar3 = 0;
  iVar2 = FUN_00582160(0,1);
  for (puVar1 = *(undefined4 **)(*(int *)(iVar2 + 0x68) + 0x34); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    FUN_00582160(0,1);
    if ((((puVar1[2] != 0) && (iVar2 = FUN_005898f0(), iVar2 != 0)) && (*(int *)(iVar2 + 4) != 0))
       && (((fVar4 = (float10)FUN_00588bd0(0xfa1), fVar4 != (float10)1.0 &&
            (fVar4 = (float10)FUN_00588bd0(0xfab), (float10)local_4 < fVar4)) &&
           ((fVar4 = (float10)FUN_00588bd0(0xfa5), fVar4 != (float10)6008.0 &&
            (*(int *)(iVar2 + 0x24) != 2)))))) {
      fVar4 = (float10)FUN_00588bd0(0xfab);
      local_4 = (float)fVar4;
      iVar3 = iVar2;
    }
    FUN_00582160(0,1);
  }
  return iVar3;
}



uint FUN_005878b0(int *param_1)

{
  undefined4 *puVar1;
  float10 fVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined2 extraout_var;
  float10 fVar6;
  
  iVar3 = FUN_00582160(0,1);
  puVar1 = (undefined4 *)(*(int **)(iVar3 + 0x68))[0xd];
  piVar5 = *(int **)(iVar3 + 0x68);
  do {
    if (puVar1 == (undefined4 *)0x0) goto LAB_0058790a;
    FUN_00582160(0,1);
    piVar4 = puVar1 + 2;
    piVar5 = puVar1 + 2;
    puVar1 = (undefined4 *)*puVar1;
  } while ((((*piVar4 == 0) ||
            (piVar4 = (int *)FUN_005898f0(), piVar5 = piVar4, piVar4 == (int *)0x0)) ||
           (piVar4[1] == 0)) || (piVar5 = (int *)(**(code **)(*piVar4 + 0x34))(), piVar5 != param_1)
          );
  fVar6 = (float10)FUN_00588bd0(0xfa1);
  fVar2 = (float10)1.0;
  piVar5 = (int *)CONCAT22(extraout_var,
                           (ushort)(fVar6 < fVar2) << 8 | (ushort)(NAN(fVar6) || NAN(fVar2)) << 10 |
                           (ushort)(fVar6 == fVar2) << 0xe);
  if ((fVar6 != fVar2) && (piVar4[9] != 2)) {
    return CONCAT31((int3)((uint)piVar5 >> 8),1);
  }
LAB_0058790a:
  return (uint)piVar5 & 0xffffff00;
}



void FUN_00587940(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf498;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6a034;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a69fe0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005879c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bf4d3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6a04c;
  FUN_0057fe70();
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  FUN_00401f20(DAT_00b3b738);
  DAT_00b3b738 = 0;
  _DAT_00b3b73e = 0;
  _DAT_00b3b73c = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00587a50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0388;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6a04c;
  local_4 = 0;
  FUN_0057feb0(uVar1);
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00587ac0(byte param_1)

{
  FUN_00587a50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00587b00(byte param_1)

{
  FUN_00587940();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_00587b20(char param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afadb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b3a708;
  if ((param_1 != '\0') && (DAT_00b3a708 == 0)) {
    iVar2 = FUN_00401f00(1,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      FUN_004e4a10(0x33);
    }
    local_4 = 0xffffffff;
    DAT_00b3a708 = iVar2;
    FUN_004e4a10(0x33);
    iVar2 = DAT_00b3a708;
  }
  DAT_00b3a708 = iVar2;
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



void FUN_00587bc0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6a09c;
  in_ECX[0x43] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x40] = &PTR_FUN_00a6a08c;
  _memset(in_ECX + 10,0,0xc0);
  in_ECX[0x3a] = 0;
  return;
}



int FUN_00587c20(int param_1)

{
  if (param_1 - 1U < 0x30) {
    return param_1 + -1;
  }
  return 0x30;
}



void FUN_00587c60(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0388;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6a09c;
  local_4 = 0;
  FUN_00587940(uVar1);
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00587cd0(byte param_1)

{
  FUN_00587c60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00587cf0(void)

{
  int iVar1;
  
  iVar1 = DAT_00b3a708;
  if (DAT_00b3a708 != 0) {
    DAT_00b3a708 = 0;
    FUN_00401f20(iVar1);
    DAT_00b3a708 = 0;
  }
  return;
}



undefined4 FUN_00587d20(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bf6f5;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_c;
  *unaff_FS_OFFSET = &local_c;
  switch(param_1) {
  case 0x3e9:
    iVar2 = FUN_00401f00(100,uVar1);
    local_4 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_005bc450();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3ea:
    iVar2 = FUN_00401f00(0x58,uVar1);
    local_4 = 3;
    if (iVar2 != 0) {
      uVar3 = FUN_005a9b00();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3eb:
    iVar2 = FUN_00401f00(0xb4,uVar1);
    local_4 = 4;
    if (iVar2 != 0) {
      uVar3 = FUN_005d9ad0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3ec:
    iVar2 = FUN_00401f00(0x94,uVar1);
    local_4 = 5;
    if (iVar2 != 0) {
      uVar3 = FUN_005a6780();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3ed:
    iVar2 = FUN_00401f00(0x5c,uVar1);
    local_4 = 6;
    if (iVar2 != 0) {
      uVar3 = FUN_005a4660();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3ee:
    iVar2 = FUN_00401f00(0x28,uVar1);
    local_4 = 0x1a;
    if (iVar2 != 0) {
      uVar3 = FUN_005a7fe0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3ef:
    iVar2 = FUN_00401f00(0x74,uVar1);
    local_4 = 7;
    if (iVar2 != 0) {
      uVar3 = FUN_005ad0d0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3f0:
    iVar2 = FUN_00401f00(0x68,uVar1);
    local_4 = 8;
    if (iVar2 != 0) {
      uVar3 = FUN_00597a90();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3f1:
    iVar2 = FUN_00401f00(0x98,uVar1);
    local_4 = 9;
    if (iVar2 != 0) {
      uVar3 = FUN_0059e4e0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3f2:
    iVar2 = FUN_00401f00(0x44,uVar1);
    local_4 = 10;
    if (iVar2 != 0) {
      uVar3 = FUN_005a8df0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3f3:
    iVar2 = FUN_00401f00(0x38,uVar1);
    local_4 = 0xb;
    if (iVar2 != 0) {
      uVar3 = FUN_005a3be0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3f4:
    iVar2 = FUN_00401f00(0x50,uVar1);
    local_4 = 0xc;
    if (iVar2 != 0) {
      uVar3 = FUN_005d6870();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3f5:
    iVar2 = FUN_00401f00(0x3c,uVar1);
    local_4 = 0xd;
    if (iVar2 != 0) {
      uVar3 = FUN_005bd960();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3f6:
    iVar2 = FUN_00401f00(0x180,uVar1);
    local_4 = 0xe;
    if (iVar2 != 0) {
      uVar3 = FUN_005af310();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3f7:
    iVar2 = FUN_00401f00(0x40,uVar1);
    local_4 = 0xf;
    if (iVar2 != 0) {
      uVar3 = FUN_005bd580();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3f8:
    iVar2 = FUN_00401f00(0x58,uVar1);
    local_4 = 0x10;
    if (iVar2 != 0) {
      uVar3 = FUN_005c04f0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3f9:
    iVar2 = FUN_00401f00(0x54,uVar1);
    local_4 = 0x11;
    if (iVar2 != 0) {
      uVar3 = FUN_00595150();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3fa:
    iVar2 = FUN_00401f00(0x118,uVar1);
    local_4 = 0x13;
    if (iVar2 != 0) {
      uVar3 = FUN_00587bc0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3fb:
    iVar2 = FUN_00401f00(0x48,uVar1);
    local_4 = 0x12;
    if (iVar2 != 0) {
      uVar3 = FUN_005dd960();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3fc:
    iVar2 = FUN_00401f00(0x4c,uVar1);
    local_4 = 0x14;
    if (iVar2 != 0) {
      uVar3 = FUN_005a3310();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3fd:
    iVar2 = FUN_00401f00(0xe8,uVar1);
    local_4 = 0x15;
    if (iVar2 != 0) {
      uVar3 = FUN_005874a0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3fe:
    iVar2 = FUN_00401f00(0x5c,uVar1);
    local_4 = 2;
    if (iVar2 != 0) {
      uVar3 = FUN_005b1f20();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x3ff:
    iVar2 = FUN_00401f00(0x100,uVar1);
    local_4 = 1;
    if (iVar2 != 0) {
      uVar3 = FUN_005b7360();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x400:
    iVar2 = FUN_00401f00(0x60,uVar1);
    local_4 = 0x17;
    if (iVar2 != 0) {
      uVar3 = FUN_005b3d30();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x401:
    iVar2 = FUN_00401f00(0x68,uVar1);
    local_4 = 0x16;
    if (iVar2 != 0) {
      uVar3 = FUN_005bce40();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x402:
    iVar2 = FUN_00401f00(0x3c,uVar1);
    local_4 = 0x18;
    if (iVar2 != 0) {
      uVar3 = FUN_00595be0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x403:
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0x1b;
    if (iVar2 != 0) {
      uVar3 = FUN_005ac550();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x404:
    iVar2 = FUN_00401f00(100,uVar1);
    local_4 = 0x1c;
    if (iVar2 != 0) {
      uVar3 = FUN_005dd200();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  default:
    FUN_004a7a60("Unknown menu class!");
    break;
  case 0x406:
    iVar2 = FUN_00401f00(0x8c,uVar1);
    local_4 = 0x1d;
    if (iVar2 != 0) {
      uVar3 = FUN_00596ef0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x408:
    iVar2 = FUN_00401f00(0x50,uVar1);
    local_4 = 0x1e;
    if (iVar2 != 0) {
      uVar3 = FUN_005d5610();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x40a:
    iVar2 = FUN_00401f00(0xfc,uVar1);
    local_4 = 0x1f;
    if (iVar2 != 0) {
      uVar3 = FUN_005bdff0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x40b:
    iVar2 = FUN_00401f00(0x78,uVar1);
    local_4 = 0x21;
    if (iVar2 != 0) {
      uVar3 = FUN_005d1000();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x40c:
    iVar2 = FUN_00401f00(0x9b0,uVar1);
    local_4 = 0x20;
    if (iVar2 != 0) {
      uVar3 = FUN_005c4e40();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x40d:
    iVar2 = FUN_00401f00(0x68,uVar1);
    local_4 = 0x23;
    if (iVar2 != 0) {
      uVar3 = FUN_005d8900();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x40e:
    iVar2 = FUN_00401f00(0x68,uVar1);
    local_4 = 0x25;
    if (iVar2 != 0) {
      uVar3 = FUN_005ae450();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x40f:
    iVar2 = FUN_00401f00(0x60,uVar1);
    local_4 = 0x24;
    if (iVar2 != 0) {
      uVar3 = FUN_005d3290();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x410:
    iVar2 = FUN_00401f00(0xc0,uVar1);
    local_4 = 0x29;
    if (iVar2 != 0) {
      uVar3 = FUN_00593050();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x411:
    iVar2 = FUN_00401f00(0x78,uVar1);
    local_4 = 0x27;
    if (iVar2 != 0) {
      uVar3 = FUN_005d73c0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x412:
    iVar2 = FUN_00401f00(0xa0,uVar1);
    local_4 = 0x28;
    if (iVar2 != 0) {
      uVar3 = FUN_005a1390();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x413:
    iVar2 = FUN_00401f00(0x9c,uVar1);
    local_4 = 0x26;
    if (iVar2 != 0) {
      uVar3 = FUN_0059f9b0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x414:
    iVar2 = FUN_00401f00(0x50,uVar1);
    local_4 = 0x2a;
    if (iVar2 != 0) {
      uVar3 = FUN_005b5f20();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x415:
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0x2b;
    if (iVar2 != 0) {
      uVar3 = FUN_00596420();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x416:
    iVar2 = FUN_00401f00(0x50,uVar1);
    local_4 = 0x2c;
    if (iVar2 != 0) {
      uVar3 = FUN_005c0b50();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x417:
    iVar2 = FUN_00401f00(0x5c,uVar1);
    local_4 = 0x2d;
    if (iVar2 != 0) {
      uVar3 = FUN_0059c960();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x418:
    iVar2 = FUN_00401f00(0x80,uVar1);
    local_4 = 0x19;
    if (iVar2 != 0) {
      uVar3 = FUN_005d3eb0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x419:
    iVar2 = FUN_00401f00(0x54,uVar1);
    local_4 = 0x22;
    if (iVar2 != 0) {
      uVar3 = FUN_005ce680();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 0x41b:
    iVar2 = FUN_00401f00(0x5c,uVar1);
    local_4 = 0x2e;
    if (iVar2 != 0) {
      uVar3 = FUN_005879c0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



float10 thunk_FUN_00584980(void)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float fStack_14;
  
  fStack_14 = 0.0;
  iVar3 = FUN_00582160(0,1);
  puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0x68) + 0x34);
  while (puVar2 != (undefined4 *)0x0) {
    piVar4 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((*piVar4 != 0) && (iVar3 = FUN_005898f0(), iVar3 != 0)) {
      piVar4 = (int *)FUN_005898f0();
      iVar3 = (**(code **)(*piVar4 + 0x34))();
      if (iVar3 != 0x400) {
        piVar4 = (int *)FUN_005898f0();
        iVar3 = (**(code **)(*piVar4 + 0x34))();
        if (iVar3 != 0x3ed) {
          piVar4 = (int *)FUN_005898f0();
          iVar3 = (**(code **)(*piVar4 + 0x34))();
          if (iVar3 != 0x3f2) {
            iVar3 = FUN_005898f0();
            iVar3 = *(int *)(iVar3 + 0x18);
            fVar5 = (float10)FUN_00588bd0(0xfab);
            fVar1 = (float)(fVar5 + (float10)iVar3);
            if (fStack_14 <= fVar1) {
              fStack_14 = fVar1;
            }
          }
        }
      }
    }
  }
  iVar3 = FUN_009828c0();
  fVar1 = (float)iVar3;
  if (fVar1 < 10.0) {
    fVar1 = 10.0;
  }
  fVar1 = fVar1 + 100.0;
  iVar3 = FUN_00582160(0,1);
  if (*(int *)(iVar3 + 0x1c) != 0) {
    FUN_0058ceb0(0xfab,fVar1);
    iVar3 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x24);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(float *)(iVar3 + 0x58) = fVar1 * -0.008;
    *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar3 + 0x5c);
  }
  iVar3 = FUN_00589b70(0x3f2);
  if (iVar3 != 0) {
    FUN_0058ceb0(0xfab,fVar1 - 10.0);
  }
  return (float10)(fStack_14 + 2.0);
}



void FUN_005888a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00b3af10;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00b3b0ac = 0;
  return;
}



void FUN_005888c0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = param_1;
  in_ECX[3] = 0x65;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  return;
}



void FUN_005888e0(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  for (puVar1 = (undefined4 *)*in_ECX; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
  }
  if (*in_ECX != 0) {
    *(int *)(*in_ECX + 4) = in_ECX[1];
  }
  if ((int *)in_ECX[1] != (int *)0x0) {
    *(int *)in_ECX[1] = *in_ECX;
  }
  if (in_ECX[4] != 0) {
    *(int *)(in_ECX[4] + 0x14) = in_ECX[5];
  }
  if (in_ECX[5] != 0) {
    *(int *)(in_ECX[5] + 0x10) = in_ECX[4];
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  return;
}



int FUN_00588930(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  piVar3 = *(int **)(iVar1 + 4);
  if (piVar3 == (int *)0x0) {
    return iVar1;
  }
  do {
    for (puVar2 = (undefined4 *)*piVar3; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
    }
    if (*piVar3 != 0) {
      *(int *)(*piVar3 + 4) = piVar3[1];
    }
    if ((int *)piVar3[1] != (int *)0x0) {
      *(int *)piVar3[1] = *piVar3;
    }
    if (piVar3[4] != 0) {
      *(int *)(piVar3[4] + 0x14) = piVar3[5];
    }
    if (piVar3[5] != 0) {
      *(int *)(piVar3[5] + 0x10) = piVar3[4];
    }
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    FUN_00401f20(piVar3);
    piVar3 = *(int **)(iVar1 + 4);
  } while (piVar3 != (int *)0x0);
  return *(int *)(in_ECX + 0x10);
}



undefined4 FUN_005889b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  iVar1 = in_ECX[2];
  puVar2 = *(undefined4 **)(iVar1 + 4);
  in_ECX[2] = (int)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    in_ECX[1] = 0;
  }
  else {
    *puVar2 = 0;
  }
  uVar3 = *(undefined4 *)(iVar1 + 8);
  (**(code **)(*in_ECX + 8))(iVar1);
  in_ECX[3] = in_ECX[3] + -1;
  return uVar3;
}



float10 FUN_005889f0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  float unaff_ESI;
  
  piVar1 = (int *)in_ECX[1];
  iVar2 = *piVar1;
  in_ECX[1] = iVar2;
  if (iVar2 == 0) {
    in_ECX[2] = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  (**(code **)(*in_ECX + 8))(piVar1);
  in_ECX[3] = in_ECX[3] + -1;
  return (float10)unaff_ESI;
}



int FUN_00588a60(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[3];
  if (iVar1 == 0) {
    iVar1 = *in_ECX;
  }
  return iVar1;
}



void FUN_00588a70(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *in_ECX;
  
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[4] = param_5;
  FUN_00584300();
  in_ECX[5] = *(int *)(*in_ECX + 0x28);
  *(int **)(*in_ECX + 0x28) = in_ECX;
  *(uint *)(*in_ECX + 0x2c) = *(uint *)(*in_ECX + 0x2c) | 0x80;
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a6a0f0;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_00588b20(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 4) == '\0') && (*(char *)(in_ECX + 5) == '\0')) {
    puVar1 = *(undefined4 **)(in_ECX + 0x34);
    *(undefined1 *)(in_ECX + 5) = 1;
    while (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar1;
      FUN_00588b20();
    }
  }
  return;
}



int FUN_00588b50(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x18);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    piVar1 = puVar2 + 2;
    uVar3 = (uint)*(ushort *)(*piVar1 + 0x18);
    puVar2 = (undefined4 *)*puVar2;
    if (uVar3 == param_1) break;
    if ((int)param_1 <= (int)uVar3) {
      return 0;
    }
  }
  return *piVar1;
}



uint FUN_00588b80(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  puVar3 = (undefined4 *)0x0;
  puVar2 = *(undefined4 **)(in_ECX + 0x18);
  do {
    if (puVar2 == (undefined4 *)0x0) break;
    iVar1 = puVar2[2];
    puVar3 = (undefined4 *)*puVar2;
    if (*(ushort *)(iVar1 + 0x18) == param_1) {
      if ((*(char *)(iVar1 + 0x1a) == '\0') && (*(float *)(iVar1 + 4) == 0.0)) {
        return 0;
      }
      return 1;
    }
    puVar2 = puVar3;
  } while ((int)(uint)*(ushort *)(iVar1 + 0x18) < (int)param_1);
  return (uint)puVar3 & 0xffffff00;
}



float10 FUN_00588bd0(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x18);
  do {
    if (puVar2 == (undefined4 *)0x0) break;
    piVar1 = puVar2 + 2;
    uVar3 = (uint)*(ushort *)(*piVar1 + 0x18);
    puVar2 = (undefined4 *)*puVar2;
    if (uVar3 == param_1) {
      return (float10)*(float *)(*piVar1 + 4);
    }
  } while ((int)uVar3 < (int)param_1);
  return (float10)0;
}



undefined1 * FUN_00588c10(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x18);
  do {
    if (puVar2 == (undefined4 *)0x0) break;
    piVar1 = puVar2 + 2;
    uVar3 = (uint)*(ushort *)(*piVar1 + 0x18);
    puVar2 = (undefined4 *)*puVar2;
    if (uVar3 == param_1) {
      return *(undefined1 **)(*piVar1 + 8);
    }
  } while ((int)uVar3 < (int)param_1);
  return &DAT_00a2f7ec;
}



float10 FUN_00588c50(void)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  float10 fVar6;
  float local_8;
  float local_4;
  
  fVar6 = (float10)FUN_00588bd0(0xfad);
  local_8 = (float)fVar6;
  iVar3 = *(int *)(in_ECX + 0x10);
joined_r0x00588c69:
  if (iVar3 == 0) {
    return (float10)local_8;
  }
  piVar4 = *(int **)(iVar3 + 0x18);
  piVar5 = piVar4;
  if (piVar4 != (int *)0x0) {
    while( true ) {
      piVar1 = piVar5 + 2;
      uVar2 = *(ushort *)(*piVar1 + 0x18);
      piVar5 = (int *)*piVar5;
      if (uVar2 == 0xfa6) break;
      if ((0xfa6 < uVar2) || (piVar5 == (int *)0x0)) goto LAB_00588cd3;
    }
    if (*(float *)(*piVar1 + 4) != 0.0) goto joined_r0x00588ca8;
  }
  goto LAB_00588cd3;
  while( true ) {
    piVar5 = piVar4 + 2;
    uVar2 = *(ushort *)(*piVar5 + 0x18);
    piVar4 = (int *)*piVar4;
    if (uVar2 == 0xfad) {
      local_4 = *(float *)(*piVar5 + 4);
      goto LAB_00588cc7;
    }
    if (0xfad < uVar2) break;
joined_r0x00588ca8:
    if (piVar4 == (int *)0x0) break;
  }
  local_4 = 0.0;
LAB_00588cc7:
  local_8 = local_4 + local_8;
LAB_00588cd3:
  iVar3 = *(int *)(iVar3 + 0x10);
  goto joined_r0x00588c69;
}



float10 FUN_00588cf0(void)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  float10 fVar6;
  float local_8;
  float local_4;
  
  fVar6 = (float10)FUN_00588bd0(0xfac);
  local_8 = (float)fVar6;
  iVar3 = *(int *)(in_ECX + 0x10);
joined_r0x00588d09:
  if (iVar3 == 0) {
    return (float10)local_8;
  }
  piVar4 = *(int **)(iVar3 + 0x18);
  piVar5 = piVar4;
  if (piVar4 != (int *)0x0) {
    while( true ) {
      piVar1 = piVar5 + 2;
      uVar2 = *(ushort *)(*piVar1 + 0x18);
      piVar5 = (int *)*piVar5;
      if (uVar2 == 0xfa6) break;
      if ((0xfa6 < uVar2) || (piVar5 == (int *)0x0)) goto LAB_00588d73;
    }
    if (*(float *)(*piVar1 + 4) != 0.0) goto joined_r0x00588d48;
  }
  goto LAB_00588d73;
  while( true ) {
    piVar5 = piVar4 + 2;
    uVar2 = *(ushort *)(*piVar5 + 0x18);
    piVar4 = (int *)*piVar4;
    if (uVar2 == 0xfac) {
      local_4 = *(float *)(*piVar5 + 4);
      goto LAB_00588d67;
    }
    if (0xfac < uVar2) break;
joined_r0x00588d48:
    if (piVar4 == (int *)0x0) break;
  }
  local_4 = 0.0;
LAB_00588d67:
  local_8 = local_4 + local_8;
LAB_00588d73:
  iVar3 = *(int *)(iVar3 + 0x10);
  goto joined_r0x00588d09;
}



float10 FUN_00588d90(void)

{
  int *piVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int in_ECX;
  float10 fVar9;
  float local_8;
  
  fVar9 = (float10)FUN_00588bd0(0xfab);
  local_8 = (float)fVar9;
  iVar4 = *(int *)(in_ECX + 0x10);
  do {
    if (iVar4 == 0) {
      return (float10)local_8;
    }
    piVar7 = *(int **)(iVar4 + 0x18);
    if (piVar7 != (int *)0x0) {
      while( true ) {
        piVar1 = piVar7 + 2;
        uVar3 = *(ushort *)(*piVar1 + 0x18);
        piVar7 = (int *)*piVar7;
        if (uVar3 == 0xfa6) break;
        if ((0xfa6 < uVar3) || (piVar7 == (int *)0x0)) goto LAB_00588df3;
      }
      if (*(float *)(*piVar1 + 4) == 2.0) goto LAB_00588e07;
    }
LAB_00588df3:
    iVar5 = *(int *)(iVar4 + 0x10);
    iVar8 = FUN_00582160(0,1);
    if (iVar5 == *(int *)(iVar8 + 0x68)) {
LAB_00588e07:
      puVar6 = *(undefined4 **)(iVar4 + 0x18);
      do {
        if (puVar6 == (undefined4 *)0x0) break;
        piVar7 = puVar6 + 2;
        uVar3 = *(ushort *)(*piVar7 + 0x18);
        puVar6 = (undefined4 *)*puVar6;
        if (uVar3 == 0xfab) {
          fVar2 = *(float *)(*piVar7 + 4);
          goto LAB_00588e2b;
        }
      } while (uVar3 < 0xfac);
      fVar2 = 0.0;
LAB_00588e2b:
      local_8 = fVar2 + local_8;
    }
    iVar4 = *(int *)(iVar4 + 0x10);
  } while( true );
}



undefined4 FUN_00588e60(uint param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar1 = param_1;
  if ((param_1 == 0) || (*(short *)(param_1 + 0x14) == 0)) {
    return 0;
  }
  iVar4 = **(int **)(param_1 + 0x10);
  param_1 = 0;
  if ((iVar4 == 0) && (iVar4 = **(int **)(*(int *)(iVar1 + 0x1c) + 0x10), iVar4 == 0)) {
    return 0;
  }
  do {
    pcVar2 = (char *)FUN_00452a60();
    iVar3 = 8;
    bVar6 = true;
    pcVar5 = "Tileptr";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar2 == *pcVar5;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return *(undefined4 *)(iVar4 + 0xc);
    }
    param_1 = param_1 + 1;
    if (*(ushort *)(iVar1 + 0x14) <= param_1) {
      return 0;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x10) + (param_1 & 0xffff) * 4);
    if (iVar4 == 0) {
      return 0;
    }
  } while( true );
}



undefined4 FUN_00588ef0(uchar *param_1)

{
  uchar uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 != (uchar *)0x0) && (uVar1 = *param_1, uVar1 != '\0')) {
    if (uVar1 == '&') {
      iVar4 = 0x1b;
    }
    else {
      if (uVar1 == '_') {
        uVar5 = 0;
        if (DAT_00b13bce == 0) {
          return 0;
        }
        while( true ) {
          puVar2 = *(undefined4 **)(DAT_00b13bc8 + uVar5 * 4);
          if ((*(uchar *)puVar2[2] != '\0') &&
             (iVar4 = __mbsicmp((uchar *)puVar2[2],param_1), iVar4 == 0)) break;
          uVar5 = uVar5 + 1;
          if (DAT_00b13bce <= uVar5) {
            return 0;
          }
        }
        puVar2[1] = puVar2[1] + 1;
        return *puVar2;
      }
      iVar4 = (char)uVar1 + -0x40;
      if (0x20 < iVar4) {
        iVar4 = (char)uVar1 + -0x60;
      }
      if ((iVar4 < 0) || (0x1a < iVar4)) {
        iVar4 = 0;
      }
    }
    puVar2 = (undefined4 *)(&DAT_00b3b0b4)[iVar4 * 4];
    do {
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      puVar3 = (undefined4 *)puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
    } while ((*(uchar *)puVar3[2] == '\0') ||
            (iVar4 = __mbsicmp((uchar *)puVar3[2],param_1), iVar4 != 0));
    puVar3[1] = puVar3[1] + 1;
    return *puVar3;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00588fc0(char *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_104;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (param_2 == (undefined1 *)0x0)) {
    return 0;
  }
  iVar4 = -1;
  *param_2 = 0;
  local_104[0] = '\0';
  iVar2 = 0;
  do {
    if (param_1[iVar2] == '\0') break;
    param_2[iVar2 + 1] = 0;
    cVar1 = param_1[iVar2];
    local_104[iVar2 + 1] = '\0';
    if (cVar1 == '(') {
      iVar4 = 0;
    }
    else if (cVar1 == ')') {
      iVar2 = 0x100;
    }
    else if (iVar4 < 0) {
      local_104[iVar2] = cVar1;
    }
    else {
      param_2[iVar4] = cVar1;
      iVar4 = iVar4 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xff);
  uVar3 = FUN_00588ef0(local_104);
  return uVar3;
}



char * FUN_00589080(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  if (param_1 < 10000) {
    puVar5 = &DAT_00b3b0b4;
    do {
      puVar3 = (undefined4 *)*puVar5;
      while (puVar3 != (undefined4 *)0x0) {
        puVar1 = puVar3 + 2;
        puVar3 = (undefined4 *)*puVar3;
        if ((param_1 == *(int *)*puVar1) && (pcVar4 = (char *)((int *)*puVar1)[2], *pcVar4 != '\0'))
        {
          return pcVar4;
        }
      }
      puVar5 = puVar5 + 4;
    } while ((int)puVar5 < 0xb3b274);
    pcVar4 = (char *)0x0;
  }
  else {
    piVar2 = *(int **)(DAT_00b13bc8 + (param_1 % 10000) * 4);
    if (((piVar2 == (int *)0x0) || (param_1 != *piVar2)) ||
       (pcVar4 = (char *)piVar2[2], *pcVar4 == '\0')) {
      return (char *)0x0;
    }
  }
  return pcVar4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00589110(int *param_1,char param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_238 [3];
  char local_235;
  undefined1 *local_234;
  int local_230;
  undefined1 *local_22c;
  uint local_228;
  int *local_224;
  uint *local_220;
  int local_21c;
  char local_218;
  undefined4 local_217;
  undefined4 local_213;
  undefined1 local_20f;
  char local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_238;
  iVar10 = *param_1;
  iVar11 = 0;
  puVar6 = (undefined1 *)param_1[1];
  local_224 = param_1;
  local_22c = (undefined1 *)0x0;
  local_235 = '\0';
  local_217 = 0;
  local_213 = 0;
  local_20f = 0;
  local_234 = puVar6;
  if (0 < iVar10) {
    do {
      uVar3 = local_213;
      local_218 = (char)local_217;
      uVar1 = (uint)local_217 >> 8;
      local_217 = CONCAT13((undefined1)local_213,(int3)uVar1);
      local_213._0_2_ = (undefined2)((uint)local_213 >> 8);
      cVar4 = puVar6[iVar11];
      if ('`' < cVar4) {
        cVar4 = cVar4 + -0x20;
      }
      local_213 = CONCAT13(SUB41(uVar3,3),CONCAT12(cVar4,(undefined2)local_213));
      iVar5 = __stricmp(&local_218,"<INCLUDE");
      iVar7 = iVar10;
      if (iVar5 == 0) {
        local_230 = iVar11 + -7;
        iVar5 = 0;
        local_235 = '\x01';
        while( true ) {
          if (iVar10 <= iVar11) goto LAB_005891ed;
          if (puVar6[iVar11] == '\"') break;
          iVar11 = iVar11 + 1;
        }
        if (iVar10 <= iVar11) goto LAB_005891ed;
        while( true ) {
          iVar11 = iVar11 + 1;
          if (iVar10 <= iVar11) goto LAB_005891ed;
          if (((0x102 < iVar5) || (cVar4 = puVar6[iVar11], cVar4 < '!')) || (cVar4 == '\"')) break;
          local_20c[iVar5] = cVar4;
          iVar5 = iVar5 + 1;
        }
        if ((iVar10 <= iVar11) || (0x103 < iVar5)) goto LAB_005891ed;
        local_20c[iVar5] = '\0';
        do {
          if (puVar6[iVar11] == '>') break;
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar10);
        iVar11 = iVar11 + 1;
        _sprintf(local_108,"Data\\Menus\\Prefabs\\%s",local_20c);
        local_220 = (uint *)FUN_00585220(local_108,0);
        uVar1 = *local_220;
        local_228 = local_220[1];
        puVar6 = (undefined1 *)FUN_00401f00(uVar1 + 1 + iVar10);
        iVar5 = local_230;
        iVar7 = 0;
        if (0 < local_230) {
          local_21c = (int)local_234 - (int)puVar6;
          puVar8 = puVar6;
          do {
            *puVar8 = puVar8[local_21c];
            puVar8 = puVar8 + 1;
            local_230 = local_230 + -1;
            iVar7 = iVar5;
          } while (local_230 != 0);
        }
        uVar9 = 0;
        iVar5 = iVar11;
        if (uVar1 != 0) {
          do {
            puVar6[iVar7] = *(undefined1 *)(uVar9 + local_228);
            uVar9 = uVar9 + 1;
            iVar7 = iVar7 + 1;
          } while (uVar9 < uVar1);
        }
        for (; iVar5 < iVar10; iVar5 = iVar5 + 1) {
          puVar6[iVar7] = local_234[iVar5];
          iVar7 = iVar7 + 1;
        }
        puVar6[iVar7] = 0;
        if (local_22c != (undefined1 *)0x0) {
          FUN_00401f20(local_22c);
        }
        puVar2 = local_220;
        local_234 = puVar6;
        local_22c = puVar6;
        if (param_2 != '\0') {
          if (local_220[1] != 0) {
            FUN_00401f20(local_220[1]);
          }
          puVar2[1] = 0;
          FUN_00401f20(puVar2);
          puVar6 = local_234;
        }
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar7;
    } while (iVar11 < iVar7);
    param_1 = local_224;
    if (local_235 != '\0') {
LAB_005891ed:
      param_1 = (int *)FUN_00401f00(8);
      if (param_1 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        *param_1 = iVar7;
        param_1[1] = (int)puVar6;
      }
    }
  }
  return param_1;
}



void FUN_00589390(void)

{
  int in_ECX;
  
  while( true ) {
    if (in_ECX == 0) {
      return;
    }
    in_ECX = *(int *)(in_ECX + 0x10);
    if (in_ECX == 0) break;
    if (*(int *)(in_ECX + 0x10) == 0) {
      return;
    }
  }
  return;
}



bool FUN_005893b0(void)

{
  int iVar1;
  int in_ECX;
  byte bVar2;
  
  bVar2 = 0;
  if (*(int *)(in_ECX + 0x24) != 0) {
    bVar2 = *(byte *)(*(int *)(in_ECX + 0x24) + 0x18) & 1;
  }
  for (iVar1 = *(int *)(in_ECX + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if (*(int *)(iVar1 + 0x24) != 0) {
      bVar2 = bVar2 | *(byte *)(*(int *)(iVar1 + 0x24) + 0x18) & 1;
    }
  }
  return bVar2 == 0;
}



void FUN_005893f0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x34);
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
  FUN_00573880();
  return;
}



void FUN_00589430(void)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int in_ECX;
  
  puVar5 = *(undefined4 **)(in_ECX + 0x34);
joined_r0x00589437:
  do {
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    piVar1 = puVar5 + 2;
    piVar6 = *(int **)(*piVar1 + 0x18);
    puVar5 = (undefined4 *)*puVar5;
    if (piVar6 != (int *)0x0) {
      while( true ) {
        piVar2 = piVar6 + 2;
        uVar4 = *(ushort *)(*piVar2 + 0x18);
        piVar6 = (int *)*piVar6;
        if (uVar4 == 0xfa4) break;
        if ((0xfa4 < uVar4) || (piVar6 == (int *)0x0)) goto LAB_00589469;
      }
      if (*(float *)(*piVar2 + 4) == 2.0) {
        puVar3 = (uint *)(*piVar1 + 0x2c);
        *puVar3 = *puVar3 | 0x100;
        goto joined_r0x00589437;
      }
    }
LAB_00589469:
    FUN_00589430();
  } while( true );
}



float10 FUN_005894a0(int param_1)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  iVar1 = *(int *)(in_ECX + 0x28);
  while( true ) {
    if (iVar1 == 0) {
      fVar2 = (float10)FUN_00588bd0();
      return fVar2;
    }
    if (*(int *)(iVar1 + 4) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return (float10)*(float *)(iVar1 + 0xc);
}



int FUN_005894d0(void)

{
  int in_ECX;
  
  if (in_ECX != 0) {
    while (*(int *)(in_ECX + 0x24) == 0) {
      in_ECX = *(int *)(in_ECX + 0x10);
      if (in_ECX == 0) {
        return 0;
      }
    }
    if (*(int *)(in_ECX + 0x24) != 0) {
      return *(int *)(in_ECX + 0x24);
    }
  }
  return 0;
}



int FUN_005894f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  
  if ((param_1 != 0) && (fVar4 = (float10)FUN_00588bd0(0xfa8), (float10)param_2 == fVar4)) {
    return param_1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x34);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    iVar3 = FUN_005894f0(*puVar1,param_2);
  } while (iVar3 == 0);
  return iVar3;
}



void FUN_00589540(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bddf8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6a164;
  local_4 = 0;
  if (in_ECX[3] != 0) {
    uVar2 = FUN_00588e60(*(undefined4 *)(in_ECX[4] + 0x1c),uVar1);
    *(undefined4 *)(in_ECX[3] + 0x10) = uVar2;
    *(undefined4 *)(in_ECX[3] + 0x24) = 0;
  }
  in_ECX[3] = 0;
  local_4 = 0xffffffff;
  FUN_00721410();
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_005895e0(void)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  int *piVar3;
  int *piVar4;
  
  piVar2 = *(int **)(*in_ECX + 0x28);
  piVar1 = piVar2;
  piVar4 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    while (piVar3 = piVar1, piVar3 != in_ECX) {
      piVar1 = (int *)piVar3[5];
      piVar4 = piVar3;
      if ((int *)piVar3[5] == (int *)0x0) {
        return piVar2;
      }
    }
    if (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[5];
      if (piVar4 != (int *)0x0) {
        piVar4[5] = (int)piVar2;
        FUN_00401f20(piVar3);
        return piVar2;
      }
      *(int **)(*in_ECX + 0x28) = piVar2;
      piVar2 = *(int **)(*in_ECX + 0x28);
      FUN_00401f20(piVar3);
    }
  }
  return piVar2;
}



void FUN_00589640(int param_1,int *param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 4))();
  piVar1[2] = *param_2;
  *piVar1 = param_1;
  piVar1[1] = *(int *)(param_1 + 4);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    **(int **)(param_1 + 4) = (int)piVar1;
    *(int **)(param_1 + 4) = piVar1;
    in_ECX[3] = in_ECX[3] + 1;
    return;
  }
  in_ECX[1] = (int)piVar1;
  *(int **)(param_1 + 4) = piVar1;
  in_ECX[3] = in_ECX[3] + 1;
  return;
}



void FUN_00589690(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf718;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6a154;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a6a108;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005896f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 4))();
  iVar1 = *param_1;
  piVar2[1] = 0;
  piVar2[2] = iVar1;
  *piVar2 = in_ECX[1];
  if (in_ECX[1] != 0) {
    *(int **)(in_ECX[1] + 4) = piVar2;
    in_ECX[3] = in_ECX[3] + 1;
    in_ECX[1] = (int)piVar2;
    return;
  }
  in_ECX[3] = in_ECX[3] + 1;
  in_ECX[2] = (int)piVar2;
  in_ECX[1] = (int)piVar2;
  return;
}



void FUN_00589750(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00401f20(param_1);
  return;
}



undefined4 FUN_00589770(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  
  if (*(short *)(in_ECX + 0x18) != 0xfde) {
    if (*(ushort *)(in_ECX + 0xc) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 8);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 0xc);
    }
    if (((uVar4 == 0) && (*(char *)(in_ECX + 0x1a) != '\0')) && (*(short *)(in_ECX + 0x18) != 0xfe6)
       ) {
      return 0;
    }
  }
  return 1;
}



void FUN_005897c0(byte param_1)

{
  FUN_00589540();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005897e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf748;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6a118;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a6a0f8;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00589840(byte param_1)

{
  FUN_005897e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00589860(void)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a6a1bc;
  return;
}



void thunk_FUN_005897e0(void)

{
  FUN_005897e0();
  return;
}



void FUN_00589890(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *piVar3;
  uint uVar4;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0x14) != 0)) {
    piVar3 = (int *)**(int **)(iVar1 + 0x10);
    uVar4 = 0;
    if (piVar3 != (int *)0x0) {
      do {
        for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 4))(); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)puVar2[1]) {
          if (puVar2 == &DAT_00b3fd44) {
            piVar3[3] = 0;
            return;
          }
        }
        uVar4 = uVar4 + 1;
        piVar3 = *(int **)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + (uVar4 & 0xffff) * 4);
      } while (piVar3 != (int *)0x0);
      return;
    }
  }
  return;
}



int FUN_005898f0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  do {
    piVar1 = in_ECX;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    in_ECX = (int *)piVar1[4];
  } while ((in_ECX != (int *)0x0) && (in_ECX[4] != 0));
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc))(), iVar2 == 0x389)) {
    return piVar1[0x11];
  }
  return 0;
}



int FUN_00589930(uchar *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x34);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar3 = puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = __mbscmp(*(uchar **)(iVar3 + 8),param_1);
    if (iVar2 == 0) break;
    iVar3 = FUN_00589930(param_1);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  return iVar3;
}



void FUN_00589980(int param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = *(int **)(in_ECX + 0x28);
  do {
    piVar2 = piVar1;
    if (piVar2 == (int *)0x0) {
      fVar8 = (float10)FUN_00588bd0(param_1);
      if ((float10)param_3 != fVar8) {
        iVar7 = FUN_00401f00(0x18);
        local_4 = 0;
        if (iVar7 != 0) {
          FUN_00588a70(in_ECX,param_1,param_2,param_3,param_4);
        }
      }
LAB_00589a7f:
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if (piVar2[1] == param_1) {
      if ((float)piVar2[3] == param_3) goto LAB_00589a7f;
      piVar1 = *(int **)(*piVar2 + 0x28);
      piVar5 = piVar1;
      piVar4 = (int *)0x0;
      while (piVar3 = piVar5, piVar3 != (int *)0x0) {
        if (piVar3 == piVar2) {
          if (piVar3 != (int *)0x0) {
            if (piVar4 == (int *)0x0) {
              *(int *)(*piVar2 + 0x28) = piVar3[5];
              piVar1 = *(int **)(*piVar2 + 0x28);
              FUN_00401f20(piVar3,uVar6);
            }
            else {
              piVar1 = (int *)piVar3[5];
              piVar4[5] = (int)piVar1;
              FUN_00401f20(piVar3,uVar6);
            }
          }
          break;
        }
        piVar4 = piVar3;
        piVar5 = (int *)piVar3[5];
      }
    }
    else {
      piVar1 = (int *)piVar2[5];
    }
  } while( true );
}



void FUN_00589aa0(void)

{
  int iVar1;
  LONG LVar2;
  int in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if (iVar1 != 0) {
    FUN_00589890();
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00977c50(3);
      (**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(local_4,iVar1);
      if (unaff_EDI != (undefined4 *)0x0) {
        LVar2 = InterlockedDecrement(unaff_EDI + 1);
        if ((LVar2 == 0) && (unaff_EDI != (undefined4 *)0x0)) {
          (**(code **)*unaff_EDI)(1);
        }
      }
      FUN_00977c50(2);
    }
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  return;
}



int FUN_00589b10(int param_1,uchar *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uchar **)(param_1 + 8) != (uchar *)0x0) &&
     (iVar3 = __mbsicmp(*(uchar **)(param_1 + 8),param_2), iVar3 == 0)) {
    return param_1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x34);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    iVar3 = FUN_00589b10(*puVar1,param_2);
  } while (iVar3 == 0);
  return iVar3;
}



undefined4 FUN_00589b70(int param_1)

{
  if ((param_1 - 0x3e9U < 0x33) && (param_1 - 0x3e9U < (uint)DAT_00b1397a)) {
    return *(undefined4 *)(DAT_00b13974 + -0xfa4 + param_1 * 4);
  }
  return 0;
}



void FUN_00589bb0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bf77b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *(int *)(in_ECX[4] + 4);
  while (iVar1 != 0) {
    piVar2 = *(int **)(in_ECX[4] + 4);
    if (piVar2 != (int *)0x0) {
      for (puVar3 = (undefined4 *)*piVar2; puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (piVar2[4] != 0) {
        *(int *)(piVar2[4] + 0x14) = piVar2[5];
      }
      if (piVar2[5] != 0) {
        *(int *)(piVar2[5] + 0x10) = piVar2[4];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      FUN_00401f20(piVar2,uVar4);
    }
    iVar1 = *(int *)(in_ECX[4] + 4);
  }
  if (in_ECX[4] != 0) {
    FUN_005888e0();
    FUN_00401f20(extraout_ECX);
  }
  in_ECX[4] = 0;
  iVar1 = *(int *)(in_ECX[5] + 0x14);
  while (iVar1 != 0) {
    piVar2 = *(int **)(in_ECX[5] + 0x14);
    if (piVar2 != (int *)0x0) {
      for (puVar3 = (undefined4 *)*piVar2; puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (piVar2[4] != 0) {
        *(int *)(piVar2[4] + 0x14) = piVar2[5];
      }
      if (piVar2[5] != 0) {
        *(int *)(piVar2[5] + 0x10) = piVar2[4];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      FUN_00401f20(piVar2,uVar4);
    }
    iVar1 = *(int *)(in_ECX[5] + 0x14);
  }
  if (in_ECX[5] != 0) {
    FUN_005888e0();
    FUN_00401f20(extraout_ECX_00,uVar4);
  }
  in_ECX[5] = 0;
  FUN_00401f20(in_ECX[2],uVar4);
  in_ECX[2] = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00589d40(byte param_1)

{
  FUN_00589690();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00589d60(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int iVar5;
  
  iVar5 = in_ECX[9];
  if (iVar5 != 0) {
    if (*(short *)(iVar5 + 0xb6) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(iVar5 + 0xb0);
    }
    iVar3 = (**(code **)(*in_ECX + 0xc))();
    if (((iVar3 == 0x386) && (iVar5 != 0)) && (iVar5 = FUN_00707530(6), iVar5 != 0)) {
      FUN_004057b0(0);
      in_ECX[0xb] = in_ECX[0xb] | 0x20;
    }
  }
  puVar1 = (undefined4 *)in_ECX[0xd];
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    piVar4 = (int *)FUN_005a8260();
    if (((piVar2 != piVar4) && (piVar4 = (int *)FUN_005a8270(), piVar2 != piVar4)) &&
       (piVar4 = (int *)FUN_005a8280(), piVar2 != piVar4)) {
      (**(code **)(*piVar2 + 0x18))();
    }
  }
  return;
}



void FUN_00589df0(undefined2 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf77b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  in_ECX[1] = 0;
  local_4 = 0;
  *(undefined2 *)(in_ECX + 6) = param_1;
  *in_ECX = 0;
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = in_ECX;
    puVar2[3] = 0x65;
    puVar2[4] = 0;
    puVar2[5] = 0;
  }
  in_ECX[4] = puVar2;
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = in_ECX;
    puVar2[3] = 0x65;
    puVar2[4] = 0;
    puVar2[5] = 0;
  }
  in_ECX[5] = puVar2;
  *(undefined1 *)((int)in_ECX + 0x1a) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00589eb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf7ab;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  local_4 = 0;
  *in_ECX = param_1;
  FUN_004028d0(param_2,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00589f20(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf7e3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  local_4 = 1;
  *in_ECX = param_1;
  FUN_004028d0(param_2,0);
  FUN_00401f20(param_2,uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00589fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf7ab;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  in_ECX[1] = param_2;
  local_4 = 0;
  *in_ECX = param_1;
  FUN_004028d0(param_3,0);
  in_ECX[4] = param_4;
  in_ECX[5] = param_5;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0058a020(undefined4 param_1)

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
  FUN_004028d0(param_1,0);
  FUN_00401f20(param_1,uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0058a080(byte param_1)

{
  FUN_00584b30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0058a0a0(char *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bf846;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, cVar1 != '\0')) {
    if ((cVar1 != '&') && (cVar1 == '_')) {
      iVar3 = FUN_00401f00(0x10,uVar2);
      local_4 = 0;
      if (iVar3 == 0) {
        param_2 = 0;
      }
      else {
        param_2 = FUN_00589eb0(param_2,param_1);
      }
      local_4 = 0xffffffff;
      FUN_0042d800(&param_2);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar3 = FUN_00401f00(0x10,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_00589eb0(param_2,param_1);
    }
    local_4 = 0xffffffff;
    FUN_006aa320(&param_2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0058a1c0(void)

{
  FUN_0058a0a0("&generic;",0xffffffff);
  FUN_0058a0a0("&false;",1);
  FUN_0058a0a0("&true;",2);
  FUN_0058a0a0("&left;",1);
  FUN_0058a0a0("&center;",2);
  FUN_0058a0a0("&right;",4);
  FUN_0058a0a0("&scale;",0xffffffff);
  FUN_0058a0a0("&click_past;",0x65);
  FUN_0058a0a0("&no_click_past;",0x66);
  FUN_0058a0a0("&does_not_stack;",0x1778);
  FUN_0058a0a0("&mixed_menu;",0x67);
  FUN_0058a0a0("&xenon;",1);
  FUN_0058a0a0("&xbox;",1);
  FUN_0058a0a0("&prev;",0x68);
  FUN_0058a0a0("&next;",0x69);
  FUN_0058a0a0("&first;",0x6a);
  FUN_0058a0a0("&last;",0x6b);
  FUN_0058a0a0("&xlist;",0x6c);
  FUN_0058a0a0("&xitem;",0x6d);
  FUN_0058a0a0("&xboxhint;",1);
  FUN_0058a0a0("&xbuttona;",1);
  FUN_0058a0a0("&xbuttonb;",1);
  FUN_0058a0a0("&xbuttonx;",1);
  FUN_0058a0a0("&xbuttony;",1);
  FUN_0058a0a0("&xbuttonlt;",1);
  FUN_0058a0a0("&xbuttonrt;",1);
  FUN_0058a0a0("&xbuttonlb;",1);
  FUN_0058a0a0("&xbuttonrb;",1);
  FUN_0058a0a0("&xbuttonls;",1);
  FUN_0058a0a0("&xbuttonrs;",1);
  FUN_0058a0a0("image",0x386);
  FUN_0058a0a0(&DAT_00a6a994,0x389);
  FUN_0058a0a0(&DAT_00a6a990,0x388);
  FUN_0058a0a0(&PTR_LAB_00a6a98c,0x388);
  FUN_0058a0a0(&DAT_00a6a984,0x385);
  FUN_0058a0a0("template",999);
  FUN_0058a0a0(&DAT_00a6a970,0x387);
  FUN_0058a0a0("window",0x38b);
  FUN_0058a0a0("&AudioMenu;",0x3f9);
  FUN_0058a0a0("&BookMenu;",0x402);
  FUN_0058a0a0("&SigilStoneMenu;",0x418);
  FUN_0058a0a0("&ContainerMenu;",0x3f0);
  FUN_0058a0a0("&ControlsMenu;",0x3fd);
  FUN_0058a0a0("&DialogMenu;",0x3f1);
  FUN_0058a0a0("&GameplayMenu;",0x3fc);
  FUN_0058a0a0("&GenericMenu;",0x3f3);
  FUN_0058a0a0("&HUDInfoMenu;",0x3ed);
  FUN_0058a0a0("&HUDMainMenu;",0x3ec);
  FUN_0058a0a0("&HUDReticle;",0x3ee);
  FUN_0058a0a0("&HUDSubtitleMenu;",0x3f2);
  FUN_0058a0a0("&InventoryMenu;",0x3ea);
  FUN_0058a0a0("&LoadingMenu;",0x3ef);
  FUN_0058a0a0("&LockPickMenu;",0x3f6);
  FUN_0058a0a0("&MagicMenu;",0x3fe);
  FUN_0058a0a0("&MagicPopupMenu;",0x400);
  FUN_0058a0a0("&MapMenu;",0x3ff);
  FUN_0058a0a0("&MessageMenu;",0x3e9);
  FUN_0058a0a0("&TextEditMenu;",0x41b);
  FUN_0058a0a0("&NegotiateMenu;",0x401);
  FUN_0058a0a0("&OptionsMenu;",0x3f7);
  FUN_0058a0a0("&PauseMenu;",0x3f5);
  FUN_0058a0a0("&QuantityMenu;",0x3f8);
  FUN_0058a0a0("&RaceSexMenu;",0x40c);
  FUN_0058a0a0("&SleepWaitMenu;",0x3f4);
  FUN_0058a0a0("&StatsMenu;",0x3eb);
  FUN_0058a0a0("&VideoDisplayMenu;",0x3fb);
  FUN_0058a0a0("&VideoMenu;",0x3fa);
  FUN_0058a0a0("&LevelUpMenu;",0x403);
  FUN_0058a0a0("&TrainingMenu;",0x404);
  FUN_0058a0a0("&BirthSignMenu;",0x405);
  FUN_0058a0a0("&ClassMenu;",0x406);
  FUN_0058a0a0("&SkillsMenu;",0x408);
  FUN_0058a0a0("&PersuasionMenu;",0x40a);
  FUN_0058a0a0("&RepairMenu;",0x40b);
  FUN_0058a0a0("&RechargeMenu;",0x419);
  FUN_0058a0a0("&SpellPurchaseMenu;",0x40d);
  FUN_0058a0a0("&LoadMenu;",0x40e);
  FUN_0058a0a0("&SaveMenu;",0x40f);
  FUN_0058a0a0("&AlchemyMenu;",0x410);
  FUN_0058a0a0("&EnchantmentMenu;",0x412);
  FUN_0058a0a0("&SpellmakingMenu;",0x411);
  FUN_0058a0a0("&EffectSettingMenu;",0x413);
  FUN_0058a0a0("&MainMenu;",0x414);
  FUN_0058a0a0("&BreathMenu;",0x415);
  FUN_0058a0a0("&QuickKeysMenu;",0x416);
  FUN_0058a0a0("&CreditsMenu;",0x417);
  FUN_0058a0a0(&DAT_00a6a66c,0x7e4);
  FUN_0058a0a0(&PTR_LAB_00a6a668,0x7d2);
  FUN_0058a0a0(&PTR_LAB_00a6a664,0x7df);
  FUN_0058a0a0(&DAT_00a6a65c,0x7e9);
  FUN_0058a0a0(&DAT_00a6a654,0x7d1);
  FUN_0058a0a0(&DAT_00a6a650,0x7d5);
  FUN_0058a0a0(&DAT_00a6a64c,0x7da);
  FUN_0058a0a0("floor",0x7e3);
  FUN_0058a0a0(&DAT_00a6a640,0x7d8);
  FUN_0058a0a0(&DAT_00a6a63c,0x7d9);
  FUN_0058a0a0(&DAT_00a6a638,0x7e8);
  FUN_0058a0a0(&DAT_00a6a634,0x7e7);
  FUN_0058a0a0(&DAT_00a6a630,0x7dc);
  FUN_0058a0a0(&DAT_00a6a62c,0x7db);
  FUN_0058a0a0(&DAT_00a6a628,0x7de);
  FUN_0058a0a0(&DAT_00a6a624,0x7dd);
  FUN_0058a0a0(&PTR_BYTE_00a6a620,0x7e2);
  FUN_0058a0a0(&DAT_00a6a61c,0x7d4);
  FUN_0058a0a0(&DAT_00a6a614,0x7d4);
  FUN_0058a0a0(&DAT_00a6a610,0x7e1);
  FUN_0058a0a0(&DAT_00a6a60c,0x7ea);
  FUN_0058a0a0("onlyif",0x7e5);
  FUN_0058a0a0("onlyifnot",0x7e6);
  FUN_0058a0a0(&DAT_00a6a5f4,0x7e0);
  FUN_0058a0a0(&DAT_00a6a5ec,0x7d6);
  FUN_0058a0a0(&PTR_DAT_00a51b94,0x7eb);
  FUN_0058a0a0(&DAT_00a6a5e8,0x7d3);
  FUN_0058a0a0("trunc",0x7e3);
  FUN_0058a0a0(&DAT_00a6a5d8,0x7d7);
  FUN_0058a0a0(&DAT_00a6a5d0,0xbba);
  FUN_0058a0a0(&DAT_00a6a5cc,0xbbb);
  FUN_0058a0a0("trait",0xbbc);
  FUN_0058a0a0("value",0xbb9);
  FUN_0058a0a0("alpha",0xfa7);
  FUN_0058a0a0("animation",0xfec);
  FUN_0058a0a0(&DAT_00a6a5a0,0xfce);
  FUN_0058a0a0("child_count",0xfd0);
  FUN_0058a0a0("childcount",0xfd0);
  FUN_0058a0a0("class",0xfa2);
  FUN_0058a0a0("clickcountafter",0xfe3);
  FUN_0058a0a0("clickcountbefore",0xfe2);
  FUN_0058a0a0("clicked",0xfe1);
  FUN_0058a0a0("clickedfunc",0xfe4);
  FUN_0058a0a0("clicksound",0xfe5);
  FUN_0058a0a0("disablefade",0xfa9);
  FUN_0058a0a0("cropoffsetx",0xfda);
  FUN_0058a0a0("cropoffsety",0xfd9);
  FUN_0058a0a0("cropx",0xfda);
  FUN_0058a0a0("cropy",0xfd9);
  FUN_0058a0a0("clips",0xfc8);
  FUN_0058a0a0("clipwindow",0xfa4);
  FUN_0058a0a0("depth",0xfab);
  FUN_0058a0a0("depth3d",0xfed);
  FUN_0058a0a0("explorefade",0xfdc);
  FUN_0058a0a0("fileheight",0xfe8);
  FUN_0058a0a0("filename",0xfe6);
  FUN_0058a0a0("filewidth",0xfe7);
  FUN_0058a0a0("focusinset",0xfe0);
  FUN_0058a0a0(&DAT_00a6a4b0,0xfd3);
  FUN_0058a0a0("green",0xfcd);
  FUN_0058a0a0("height",0xfca);
  FUN_0058a0a0(&DAT_00a6a49c,0xfa8);
  FUN_0058a0a0("ishtml",0xfd8);
  FUN_0058a0a0("justify",0xfd1);
  FUN_0058a0a0("linecount",0xfee);
  FUN_0058a0a0("listclip",0xfa3);
  FUN_0058a0a0("listindex",0xfaa);
  FUN_0058a0a0("locus",0xfa6);
  FUN_0058a0a0("menufade",0xfdb);
  FUN_0058a0a0("mouseover",0xfdd);
  FUN_0058a0a0("pagecount",0xfef);
  FUN_0058a0a0("pagenum",0xfd7);
  FUN_0058a0a0(&DAT_00a6a430,0xfcc);
  FUN_0058a0a0("repeatvertical",0xfe9);
  FUN_0058a0a0("repeathorizontal",0xfea);
  FUN_0058a0a0("returnvalue",0xfeb);
  FUN_0058a0a0("shiftclicked",0xfdf);
  FUN_0058a0a0("stackingtype",0xfa5);
  FUN_0058a0a0("string",0xfde);
  FUN_0058a0a0("target",0xfc9);
  FUN_0058a0a0(&DAT_00a6a3c8,0xfcf);
  FUN_0058a0a0("user0",0xfae);
  FUN_0058a0a0("user1",0xfaf);
  FUN_0058a0a0("user2",0xfb0);
  FUN_0058a0a0("user3",0xfb1);
  FUN_0058a0a0("user4",0xfb2);
  FUN_0058a0a0("user5",0xfb3);
  FUN_0058a0a0("user6",0xfb4);
  FUN_0058a0a0("user7",0xfb5);
  FUN_0058a0a0("user8",0xfb6);
  FUN_0058a0a0("user9",0xfb7);
  FUN_0058a0a0("user10",0xfb8);
  FUN_0058a0a0("user11",0xfb9);
  FUN_0058a0a0("user12",0xfba);
  FUN_0058a0a0("user13",0xfbb);
  FUN_0058a0a0("user14",0xfbc);
  FUN_0058a0a0("user15",0xfbd);
  FUN_0058a0a0("user16",0xfbe);
  FUN_0058a0a0("user17",0xfbf);
  FUN_0058a0a0("user18",0xfc0);
  FUN_0058a0a0("user19",0xfc1);
  FUN_0058a0a0("user20",0xfc2);
  FUN_0058a0a0("user21",0xfc3);
  FUN_0058a0a0("user22",0xfc4);
  FUN_0058a0a0("user23",0xfc5);
  FUN_0058a0a0("user24",0xfc6);
  FUN_0058a0a0("user25",0xfc7);
  FUN_0058a0a0("visible",0xfa1);
  FUN_0058a0a0("width",0xfcb);
  FUN_0058a0a0("wraplimit",0xfd5);
  FUN_0058a0a0("wraplines",0xfd6);
  FUN_0058a0a0("wrapwidth",0xfd4);
  FUN_0058a0a0("xbuttona",0xff7);
  FUN_0058a0a0("xbuttonb",0xff8);
  FUN_0058a0a0("xbuttonx",0xff9);
  FUN_0058a0a0("xbuttony",0xffa);
  FUN_0058a0a0("xbuttonlt",0xffb);
  FUN_0058a0a0("xbuttonrt",0xffc);
  FUN_0058a0a0("xbuttonlb",0xffd);
  FUN_0058a0a0("xbuttonrb",0xffe);
  FUN_0058a0a0("xbuttonstart",0x1001);
  FUN_0058a0a0("xdefault",0xff0);
  FUN_0058a0a0("xlist",0xff6);
  FUN_0058a0a0(&DAT_00a6a244,0xff1);
  FUN_0058a0a0("xdown",0xff2);
  FUN_0058a0a0("xleft",0xff3);
  FUN_0058a0a0("xright",0xff4);
  FUN_0058a0a0("xscroll",0xff5);
  FUN_0058a0a0(&DAT_00a6a220,0xfad);
  FUN_0058a0a0(&DAT_00a6a21c,0xfac);
  FUN_0058a0a0(&DAT_00a6a214,0xfd2);
  FUN_0058a0a0("child",0x138d);
  FUN_0058a0a0(&DAT_00a6a208,0x138a);
  FUN_0058a0a0("parent",0x1389);
  FUN_0058a0a0("screen",0x138e);
  FUN_0058a0a0("sibling",0x138c);
  FUN_0058a0a0("strings",0x138f);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058b040(uchar *param_1,int param_2)

{
  uchar uVar1;
  undefined4 *puVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *param_1;
  if (uVar1 == '&') {
    iVar5 = 0x1b;
LAB_0058b078:
    puVar2 = (undefined4 *)(&DAT_00b3b0b4)[iVar5 * 4];
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
      if ((*(uchar *)piVar3[2] != '\0') &&
         (iVar5 = __mbsicmp((uchar *)piVar3[2],param_1), iVar5 == 0)) {
        piVar3[1] = piVar3[1] + 1;
        iVar5 = *piVar3;
        *unaff_FS_OFFSET = local_c;
        return iVar5;
      }
    }
  }
  else {
    if (uVar1 != '_') {
      iVar5 = (char)uVar1 + -0x40;
      if (0x20 < iVar5) {
        iVar5 = (char)uVar1 + -0x60;
      }
      if ((iVar5 < 0) || (0x1a < iVar5)) {
        iVar5 = 0;
      }
      goto LAB_0058b078;
    }
    uVar6 = 0;
    if (DAT_00b13bce != 0) {
      do {
        piVar3 = *(int **)(DAT_00b13bc8 + uVar6 * 4);
        if ((*(uchar *)piVar3[2] != '\0') &&
           (iVar5 = __mbsicmp((uchar *)piVar3[2],param_1), iVar5 == 0)) {
          piVar3[1] = piVar3[1] + 1;
          iVar5 = *piVar3;
          *unaff_FS_OFFSET = local_c;
          return iVar5;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < DAT_00b13bce);
    }
  }
  if (param_2 == -1) {
    param_2 = DAT_00b13bce + 10000;
  }
  iVar5 = FUN_00401f00();
  local_4 = 0;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_004028d0(param_1,0);
    iVar5 = FUN_00589f20(param_2);
  }
  *(undefined4 *)(iVar5 + 4) = 0;
  uVar4 = DAT_00b13bce;
  uVar6 = (uint)DAT_00b13bce;
  local_4 = 0xffffffff;
  if (DAT_00b13bcc <= uVar6) {
    FUN_004e4a10();
  }
  if (uVar6 < DAT_00b13bce) {
    if (*(int *)(DAT_00b13bc8 + uVar6 * 4) != 0) goto LAB_0058b205;
  }
  else {
    DAT_00b13bce = uVar4 + 1;
  }
  _DAT_00b13bd0 = _DAT_00b13bd0 + 1;
LAB_0058b205:
  *(int *)(DAT_00b13bc8 + uVar6 * 4) = iVar5;
  *unaff_FS_OFFSET = local_c;
  return param_2;
}



int * FUN_0058b220(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int in_ECX;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = (uint)param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar1 = false;
  puVar4 = *(undefined4 **)(in_ECX + 0x18);
  puVar7 = *(undefined4 **)(in_ECX + 0x18);
  do {
    do {
      puVar2 = puVar4;
      if (puVar2 == (undefined4 *)0x0) goto LAB_0058b274;
      piVar6 = (int *)puVar2[2];
      puVar4 = (undefined4 *)*puVar2;
      puVar7 = puVar2;
    } while (piVar6 == (int *)0x0);
    if ((int *)(uint)*(ushort *)(piVar6 + 6) == param_1) goto LAB_0058b2d5;
  } while ((int)(uint)*(ushort *)(piVar6 + 6) < (int)param_1);
  bVar1 = true;
LAB_0058b274:
  param_1 = (int *)FUN_00401f00(0x1c,uVar5);
  local_4 = 0;
  if (param_1 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_00589df0(uVar3);
  }
  local_4 = 0xffffffff;
  if (piVar6 != (int *)0x0) {
    *piVar6 = in_ECX;
    param_1 = piVar6;
    if ((bVar1) && (puVar7 != (undefined4 *)0x0)) {
      FUN_00589640(puVar7,&param_1);
    }
    else {
      FUN_005b1e20(&param_1);
    }
  }
LAB_0058b2d5:
  *unaff_FS_OFFSET = local_c;
  return piVar6;
}



int * FUN_0058b2f0(float param_1,float param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *in_ECX;
  float10 fVar8;
  
  if ((param_1 == 5.62341e-42) || (param_1 == 5.62201e-42)) {
    if (param_1 != 5.62061e-42) goto LAB_0058b644;
  }
  else if (param_1 != 5.62061e-42) {
    iVar3 = (**(code **)(*in_ECX + 0xc))();
    if ((iVar3 == 0x387) &&
       ((((param_1 == 5.67806e-42 || (param_1 == 5.67946e-42)) || (param_1 == 5.68086e-42)) ||
        (((param_1 == 5.68227e-42 || (param_1 == 5.68367e-42)) || (param_1 == 5.67666e-42)))))) {
      in_ECX[0xb] = in_ECX[0xb] | 2;
      return in_ECX;
    }
    if ((((param_1 == 5.66545e-42) || (param_1 == 5.66405e-42)) ||
        ((param_1 == 5.68647e-42 || (param_1 == 5.68507e-42)))) &&
       ((iVar3 = (**(code **)(*in_ECX + 0xc))(), iVar3 == 0x386 ||
        (iVar3 = (**(code **)(*in_ECX + 0xc))(), iVar3 == 0x385)))) {
      fVar8 = (float10)FUN_00588bd0(0xfa4);
      if (fVar8 == (float10)2.0) {
        in_ECX[0xb] = in_ECX[0xb] | 0x100;
      }
      in_ECX[0xb] = in_ECX[0xb] | 0x10;
      return in_ECX;
    }
    if (param_1 == 5.6108e-42) {
      iVar3 = (**(code **)(*in_ECX + 0xc))();
      if ((iVar3 == 0x386) || (iVar3 = (**(code **)(*in_ECX + 0xc))(), iVar3 == 0x385)) {
        in_ECX[0xb] = in_ECX[0xb] | 0x100;
        return in_ECX;
      }
    }
    else if (param_1 == 5.66125e-42) {
      iVar3 = (**(code **)(*in_ECX + 0xc))();
      if (((iVar3 == 0x386) || (iVar3 = (**(code **)(*in_ECX + 0xc))(), iVar3 == 0x385)) ||
         (iVar3 = (**(code **)(*in_ECX + 0xc))(), iVar3 == 0x387)) {
        in_ECX[0xb] = in_ECX[0xb] | 0x200;
        return in_ECX;
      }
    }
    else {
      if ((param_1 == 5.6066e-42) || (param_1 == 5.6094e-42)) {
        in_ECX[0xb] = in_ECX[0xb] | 4;
        return in_ECX;
      }
      if (((param_1 == 5.615e-42) || (param_1 == 5.66685e-42)) ||
         ((param_1 == 5.66825e-42 || (param_1 == 5.66965e-42)))) {
        in_ECX[0xb] = in_ECX[0xb] | 8;
        return in_ECX;
      }
      if (param_1 == 5.70328e-42) {
        iVar3 = (**(code **)(*in_ECX + 0xc))();
        if ((iVar3 == 0x386) && (iVar3 = FUN_00588c10(0xfe6), iVar3 != 0)) {
          in_ECX[0xb] = in_ECX[0xb] | 0x20;
          return in_ECX;
        }
        iVar3 = (**(code **)(*in_ECX + 0xc))();
        if ((iVar3 == 0x388) && (iVar3 = FUN_00588c10(0xfe6), iVar3 != 0)) {
          in_ECX[0xb] = in_ECX[0xb] | 0x40;
          return in_ECX;
        }
      }
      else if ((param_1 == 5.6164e-42) && (piVar4 = (int *)FUN_005898f0(), piVar4 != (int *)0x0)) {
        iVar3 = *piVar4;
        uVar5 = FUN_009828c0();
        (**(code **)(iVar3 + 4))(uVar5);
      }
    }
    return (int *)0x0;
  }
  piVar4 = (int *)in_ECX[4];
  piVar6 = in_ECX;
  if (piVar4 != (int *)0x0) {
LAB_0058b577:
    if (piVar4[4] != 0) {
      piVar6 = (int *)piVar6[6];
      piVar7 = piVar6;
      if (piVar6 != (int *)0x0) {
        while( true ) {
          piVar1 = piVar7 + 2;
          uVar2 = *(ushort *)(*piVar1 + 0x18);
          piVar7 = (int *)*piVar7;
          if (uVar2 == 0xfa6) break;
          if ((0xfa6 < uVar2) || (piVar7 == (int *)0x0)) goto LAB_0058b5e4;
        }
        if (*(float *)(*piVar1 + 4) == 2.0) goto joined_r0x0058b5b9;
      }
      goto LAB_0058b5e4;
    }
  }
LAB_0058b5ef:
  iVar3 = FUN_005898f0();
  piVar4 = in_ECX;
  do {
    piVar6 = (int *)piVar4[4];
    if ((piVar6 == (int *)0x0) || (piVar6[4] == 0)) break;
    piVar4 = piVar6;
  } while (piVar6 != (int *)0x0);
  if ((((iVar3 != 0) && (piVar4 != (int *)0x0)) && (piVar4 != in_ECX)) &&
     ((float)*(int *)(iVar3 + 0x18) < param_2)) {
    uVar5 = FUN_009828c0();
    *(undefined4 *)(iVar3 + 0x18) = uVar5;
  }
LAB_0058b644:
  fVar8 = (float10)FUN_00588bd0(0xfa4);
  if (fVar8 == (float10)2.0) {
    in_ECX[0xb] = in_ECX[0xb] | 0x100;
  }
  in_ECX[0xb] = in_ECX[0xb] | 1;
  return in_ECX;
  while( true ) {
    piVar7 = piVar6 + 2;
    uVar2 = *(ushort *)(*piVar7 + 0x18);
    piVar6 = (int *)*piVar6;
    if (uVar2 == 0xfab) {
      param_1 = *(float *)(*piVar7 + 4);
      goto LAB_0058b5d8;
    }
    if (0xfab < uVar2) break;
joined_r0x0058b5b9:
    if (piVar6 == (int *)0x0) break;
  }
  param_1 = 0.0;
LAB_0058b5d8:
  param_2 = param_1 + param_2;
LAB_0058b5e4:
  piVar7 = piVar4 + 4;
  piVar6 = piVar4;
  piVar4 = (int *)*piVar7;
  if ((int *)*piVar7 == (int *)0x0) goto LAB_0058b5ef;
  goto LAB_0058b577;
}



void FUN_0058b670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  int *piVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int in_ECX;
  uint uVar14;
  
  puVar3 = *(undefined4 **)(in_ECX + 0x34);
joined_r0x0058b677:
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  iVar4 = puVar3[2];
  piVar7 = *(int **)(iVar4 + 0x18);
  puVar3 = (undefined4 *)*puVar3;
  if (piVar7 != (int *)0x0) {
    while( true ) {
      piVar1 = piVar7 + 2;
      uVar2 = *(ushort *)(*piVar1 + 0x18);
      piVar7 = (int *)*piVar7;
      if (uVar2 == 0xfc8) break;
      if ((0xfc8 < uVar2) || (piVar7 == (int *)0x0)) goto LAB_0058b7b7;
    }
    if ((*(float *)(*piVar1 + 4) == 2.0) && (iVar8 = *(int *)(iVar4 + 0x24), iVar8 != 0)) {
      uVar14 = 0;
      FUN_004784a0();
      if (*(short *)(iVar8 + 0xb6) == 0) goto LAB_0058b71f;
      goto LAB_0058b700;
    }
  }
  goto LAB_0058b7b7;
  while (sVar6 = *(ushort *)(iVar8 + 0xb6) - 1, *(short *)(iVar8 + 0xb6) = sVar6, sVar6 != 0) {
LAB_0058b700:
    if (*(int *)(*(int *)(iVar8 + 0xb0) + -4 + (uint)*(ushort *)(iVar8 + 0xb6) * 4) != 0) break;
  }
LAB_0058b71f:
  iVar8 = *(int *)(iVar4 + 0x24);
  if (*(short *)(iVar8 + 0xb8) != 0) {
    do {
      if ((uVar14 < *(ushort *)(iVar8 + 0xb6)) &&
         (piVar7 = *(int **)(*(int *)(iVar8 + 0xb0) + uVar14 * 4), piVar7 != (int *)0x0)) {
        for (puVar9 = (undefined *)(**(code **)(*piVar7 + 4))(); puVar9 != (undefined *)0x0;
            puVar9 = *(undefined **)(puVar9 + 4)) {
          if (puVar9 == &DAT_00b352a4) {
            bVar5 = 1;
            goto LAB_0058b769;
          }
        }
        bVar5 = 0;
LAB_0058b769:
        if ((-(uint)bVar5 & (uint)piVar7) != 0) {
          uVar10 = FUN_009828c0();
          uVar11 = FUN_009828c0(uVar10);
          uVar12 = FUN_009828c0(uVar11);
          uVar13 = FUN_009828c0(uVar12);
          FUN_004a17f0(uVar13,uVar12,uVar11,uVar10);
        }
      }
      iVar8 = *(int *)(iVar4 + 0x24);
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(ushort *)(iVar8 + 0xb8));
  }
LAB_0058b7b7:
  FUN_0058b670(param_1,param_2,param_3,param_4);
  goto joined_r0x0058b677;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0058b800(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uchar local_804 [2048];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_804;
  iVar5 = 0;
  local_804[0] = '\0';
  iVar2 = FUN_00588fc0(param_2,local_804);
  if (iVar2 < 0x138a) {
    if (iVar2 == 0x1389) {
      return *(int *)(param_1 + 0x10);
    }
    if (iVar2 == 0x6b) {
      iVar5 = FUN_005898f0();
      return *(int *)(iVar5 + 0x10);
    }
switchD_0058b896_caseD_138b:
    if (param_1 == 0) {
      iVar5 = FUN_00582160(0,1);
      iVar5 = FUN_00589b10(*(undefined4 *)(iVar5 + 0x68),param_2);
      return iVar5;
    }
    do {
      iVar5 = *(int *)(param_1 + 0x10);
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x10) == 0)) break;
      param_1 = iVar5;
    } while (iVar5 != 0);
    iVar5 = FUN_00589b10(param_1,param_2);
    return iVar5;
  }
  switch(iVar2) {
  case 0x138a:
    return param_1;
  default:
    goto switchD_0058b896_caseD_138b;
  case 0x138c:
    if (local_804[0] == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x10) + 0x3c) != 0) {
        piVar4 = *(int **)(*(int *)(param_1 + 0x10) + 0x34);
        piVar3 = piVar4;
        if (piVar4 != (int *)0x0) {
          while (piVar1 = piVar3 + 2, piVar3 = (int *)*piVar3, *piVar1 != param_1) {
            if (piVar3 == (int *)0x0) {
              return piVar4[2];
            }
          }
          if (piVar3 != (int *)0x0) {
            return piVar3[2];
          }
        }
        goto LAB_0058b9b6;
      }
    }
    else if (*(int *)(*(int *)(param_1 + 0x10) + 0x3c) != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + 0x10) + 0x34);
      if (piVar4 != (int *)0x0) {
        while( true ) {
          iVar5 = piVar4[2];
          piVar4 = (int *)*piVar4;
          if ((*(uchar **)(iVar5 + 8) != (uchar *)0x0) &&
             (iVar2 = __mbsicmp(*(uchar **)(iVar5 + 8),local_804), iVar2 == 0)) break;
          if (piVar4 == (int *)0x0) {
            return 0;
          }
        }
      }
      return iVar5;
    }
    break;
  case 0x138d:
    if ((local_804[0] == '\0') && (*(int *)(param_1 + 0x3c) != 0)) {
      piVar4 = *(int **)(param_1 + 0x34);
LAB_0058b9b6:
      return piVar4[2];
    }
    if (((param_1 != 0) && (local_804[0] != '\0')) && (*(int *)(param_1 + 0x3c) != 0)) {
      iVar5 = FUN_00589930(local_804);
      return iVar5;
    }
    break;
  case 0x138e:
    iVar5 = FUN_00582160(0,1);
    return *(int *)(iVar5 + 0x68);
  case 0x138f:
    iVar5 = FUN_00582160(0,1);
    return *(int *)(iVar5 + 0x6c);
  }
  return 0;
}



undefined4 FUN_0058bad0(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b7148;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_4 = 0;
  iVar3 = 0;
  do {
    if ((int *)(&DAT_00b3af10)[iVar3] == (int *)0x0) break;
    if ((int *)(&DAT_00b3af10)[iVar3] == param_1) {
      FUN_0040fec0("\n*****\n",uVar2);
      FUN_0040fec0("***** ERROR: Loop Detected\n");
      FUN_0040fec0("***** Loop Involves Tiles:");
      if (99 < iVar3) goto LAB_0058bbb9;
      piVar4 = &DAT_00b3af10 + iVar3;
      goto LAB_0058bb86;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 100);
  (&DAT_00b3af10)[DAT_00b3b0ac] = param_1;
  DAT_00b3b0ac = DAT_00b3b0ac + 1;
  FUN_00401f20(0);
  *unaff_FS_OFFSET = local_c;
  return 0;
  while( true ) {
    FUN_00402e30(&local_14,&DAT_00a6ab34,*(undefined4 *)(*(int *)*piVar4 + 8));
    FUN_0040fec0(local_14);
    piVar4 = piVar4 + 1;
    if (0xb3b09f < (int)piVar4) break;
LAB_0058bb86:
    if ((int *)*piVar4 == (int *)0x0) break;
  }
LAB_0058bbb9:
  FUN_00402e30(&local_14,"\n***** [ All references targeting %s have been nullified. ]\n",
               *(undefined4 *)(*param_1 + 8));
  uVar1 = local_14;
  FUN_0040fec0(local_14);
  FUN_0040fec0("*****\n\n");
  for (iVar3 = param_1[4]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  FUN_00401f20(uVar1);
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_0058bc20(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0x10);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x14) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      iVar2 = piVar1[2];
      (**(code **)(*(int *)(in_ECX + 0xc) + 8))(piVar1);
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + -1;
      if (iVar2 != 0) {
        FUN_00401f20(*(undefined4 *)(iVar2 + 8));
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined2 *)(iVar2 + 0xe) = 0;
        *(undefined2 *)(iVar2 + 0xc) = 0;
        FUN_00401f20(iVar2);
      }
    } while (*(int *)(in_ECX + 0x18) != 0);
  }
  return;
}



int FUN_0058bc80(char *param_1)

{
  int *piVar1;
  char *_Str1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  while( true ) {
    if ((piVar1 == (int *)0x0) || ((undefined4 *)*piVar1 == (undefined4 *)0x0)) {
      return 0;
    }
    if ((param_1 == (char *)0x0) || (_Str1 = *(char **)*piVar1, _Str1 == (char *)0x0)) {
      iVar2 = (uint)(param_1 == (char *)0x0) * 2 + -1;
    }
    else {
      iVar2 = __stricmp(_Str1,param_1);
    }
    if (iVar2 == 0) break;
    piVar1 = (int *)piVar1[1];
  }
  return *piVar1;
}



void FUN_0058bcd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf883;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  in_ECX[6] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[3] = &PTR_FUN_00a6a1dc;
  local_4 = 1;
  FUN_004028d0(param_1,0);
  in_ECX[2] = param_2;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0058bd50(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_00b3b0bc;
  do {
    if (*piVar3 != 0) {
      do {
        piVar1 = (int *)piVar3[-2];
        iVar2 = *piVar1;
        piVar3[-2] = iVar2;
        if (iVar2 == 0) {
          piVar3[-1] = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 4) = 0;
        }
        iVar2 = piVar1[2];
        (**(code **)(piVar3[-3] + 8))(piVar1);
        *piVar3 = *piVar3 + -1;
        if (iVar2 != 0) {
          FUN_00401f20(*(undefined4 *)(iVar2 + 8));
          *(undefined4 *)(iVar2 + 8) = 0;
          *(undefined2 *)(iVar2 + 0xe) = 0;
          *(undefined2 *)(iVar2 + 0xc) = 0;
          FUN_00401f20(iVar2);
        }
      } while (*piVar3 != 0);
    }
    piVar3 = piVar3 + 4;
  } while ((int)piVar3 < 0xb3b27c);
  return;
}



void FUN_0058bdd0(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char *_Str2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int *in_ECX;
  int iVar8;
  
  if (*(char *)(*in_ECX + 5) == '\0') {
    for (puVar2 = *(undefined4 **)(in_ECX[5] + 0x14); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[5]) {
      cVar6 = FUN_00589770();
      if (cVar6 == '\0') {
        puVar2[2] = in_ECX[1];
      }
      else {
        puVar5 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
        while (puVar3 = puVar5, puVar3 != (undefined4 *)0x0) {
          puVar4 = puVar3;
          puVar5 = (undefined4 *)*puVar3;
        }
        _Str2 = (char *)in_ECX[2];
        if ((_Str2 == (char *)0x0) || (*(char **)(puVar4[2] + 8) == (char *)0x0)) {
          iVar7 = (uint)(_Str2 == (char *)0x0) * 2 + -1;
        }
        else {
          iVar7 = __stricmp(*(char **)(puVar4[2] + 8),_Str2);
        }
        if (iVar7 != 0) {
          FUN_004028d0(in_ECX[2],0);
          *(undefined4 *)(puVar4[2] + 4) = 0;
          iVar7 = (**(code **)(**(int **)puVar4[2] + 0xc))();
          if (iVar7 == 0x387) {
            *(uint *)(*(int *)puVar4[2] + 0x2c) = *(uint *)(*(int *)puVar4[2] + 0x2c) | 2;
          }
          if ((short)((int *)puVar4[2])[6] == 0xfe6) {
            puVar1 = (uint *)(*(int *)puVar4[2] + 0x2c);
            *puVar1 = *puVar1 | 0x20;
          }
        }
      }
    }
    iVar7 = 0;
    for (puVar2 = *(undefined4 **)(in_ECX[5] + 0x14); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[5]) {
      iVar8 = 0;
      if (puVar2[3] != 0) {
        puVar5 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
        while (puVar3 = puVar5, puVar3 != (undefined4 *)0x0) {
          puVar4 = puVar3;
          puVar5 = (undefined4 *)*puVar3;
        }
        iVar8 = puVar4[2];
        if ((iVar8 != 0) && (iVar8 != iVar7)) {
          FUN_0058bee0(0);
        }
      }
      iVar7 = iVar8;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0058bee0(char param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *in_ECX;
  float *pfVar14;
  float fVar15;
  long lVar16;
  uint uVar17;
  char *pcVar18;
  ushort uVar19;
  int *unaff_FS_OFFSET;
  float10 extraout_ST0;
  float10 fVar20;
  float local_158;
  float local_154;
  float local_150;
  char *local_14c;
  ushort local_148;
  undefined2 local_146;
  int *local_144;
  int local_140;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined **local_138;
  int *local_134;
  undefined4 local_130;
  int local_12c;
  float *local_128;
  float local_124;
  long local_120;
  int *local_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined2 local_112;
  char local_110 [255];
  undefined1 local_11;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bf8cc;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_158;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xfffffe98;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((((DAT_00b3b0a1 != '\0') && ((short)in_ECX[6] != 0xfa2)) || (*in_ECX == 0)) ||
     (*(char *)(*in_ECX + 5) != '\0')) goto LAB_0058c96e;
  local_118 = 0;
  local_114 = 0;
  local_112 = 0;
  local_4 = 0;
  local_11c = in_ECX;
  cVar6 = FUN_0058bad0();
  if (cVar6 == '\0') {
    local_124 = (float)in_ECX[1];
    pfVar1 = (float *)(in_ECX + 1);
    local_12c = 0;
    local_134 = (int *)0x0;
    local_130 = 0;
    local_138 = &PTR_FUN_00a6a1cc;
    local_144 = *(int **)(in_ECX[4] + 4);
    local_4._0_1_ = 1;
    if (local_144 != (int *)0x0) {
LAB_0058bfb0:
      fVar15 = (float)local_144[3];
      local_150 = (float)local_144[2];
      uVar19 = 0;
      local_14c = (char *)0x0;
      local_148 = 0;
      local_146 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      piVar5 = (int *)local_144[4];
      piVar3 = local_144;
      while (piVar4 = piVar5, piVar4 != (int *)0x0) {
        piVar3 = piVar4;
        piVar5 = (int *)piVar4[4];
      }
      piVar5 = (int *)*piVar3;
      while (piVar4 = piVar5, piVar4 != (int *)0x0) {
        piVar3 = piVar4;
        piVar5 = (int *)*piVar4;
      }
      pfVar14 = (float *)piVar3[2];
      local_154 = *pfVar14;
      local_158 = fVar15;
      local_128 = pfVar14;
      if (fVar15 == 2.10195e-44) {
        if (local_12c != 0) {
          fVar15 = (float)local_144[2];
          local_150 = *pfVar1;
          *pfVar1 = (float)local_134[2];
          local_158 = fVar15;
          FUN_005889f0(uVar7);
          goto LAB_0058c047;
        }
LAB_0058c063:
        lVar16 = 0;
        local_120 = 0;
        if (*(ushort *)(pfVar14 + 6) < 10000) {
          uVar9 = 0;
          pcVar18 = local_14c;
        }
        else {
          uVar12 = FUN_00589080(*(ushort *)(pfVar14 + 6));
          FUN_004028d0(uVar12,0);
          _memset(local_110,0x20,0xff);
          uVar19 = local_148;
          pcVar18 = local_14c;
          local_11 = 0;
          if (local_148 == 0xffff) {
            pcVar8 = local_14c;
            do {
              cVar6 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar6 != '\0');
            uVar9 = (int)pcVar8 - (int)(local_14c + 1);
          }
          else {
            uVar9 = (uint)local_148;
          }
          while ((uVar9 = uVar9 - 1, uVar9 != 0 &&
                 (local_14c[-(uint)(local_14c != (char *)0x0) & uVar9] != '_'))) {
            local_110[uVar9] = local_14c[-(uint)(local_14c != (char *)0x0) & uVar9];
          }
          if (uVar9 != 0) {
            lVar16 = _atol(local_110);
            local_120 = lVar16;
          }
          if (uVar19 == 0xffff) {
            pcVar8 = pcVar18;
            do {
              cVar6 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar6 != '\0');
            uVar9 = (int)pcVar8 - (int)(pcVar18 + 1);
          }
          else {
            uVar9 = (uint)uVar19;
          }
        }
        pcVar8 = local_14c;
        if ((uVar9 != 0) && (*pfVar1 != 0.0)) {
          if (uVar19 == 0xffff) {
            pcVar10 = pcVar18;
            do {
              cVar6 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar6 != '\0');
            uVar9 = (int)pcVar10 - (int)(pcVar18 + 1);
          }
          else {
            uVar9 = (uint)uVar19;
          }
          if ((pcVar18[-(uint)(pcVar18 != (char *)0x0) & uVar9 - 1] != '_') &&
             ((lVar16 == 0 || (*pfVar1 == (float)local_120)))) goto LAB_0058c33e;
          local_140 = 0;
          local_13c = 0;
          local_13a = 0;
          FUN_004028d0(local_14c,0);
          local_4 = CONCAT31(local_4._1_3_,3);
          uVar17 = 2;
          uVar9 = FUN_00404fd0();
          iVar13 = local_140;
          if (2 < uVar9) {
            do {
              if (pcVar8[-(uint)(pcVar8 != (char *)0x0) & uVar17 - 1] == '_') break;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar9);
          }
          if (pcVar8[-(uint)(pcVar8 != (char *)0x0) & uVar17 - 1] == '_') {
            *(undefined1 *)((-(uint)(local_140 != 0) & uVar17) + local_140) = 0;
          }
          uVar12 = FUN_009828c0();
          FUN_00402e30(&local_140,&DAT_00a43804,iVar13,uVar12);
          iVar13 = local_140;
          *pfVar1 = 0.0;
          uVar9 = FUN_0058b040(local_140,0xffffffff);
          fVar15 = local_154;
          puVar2 = *(undefined4 **)((int)local_154 + 0x18);
          do {
            if (puVar2 == (undefined4 *)0x0) break;
            pfVar14 = (float *)puVar2[2];
            puVar2 = (undefined4 *)*puVar2;
            if (*(ushort *)(pfVar14 + 6) == uVar9) goto LAB_0058c2a8;
          } while ((int)(uint)*(ushort *)(pfVar14 + 6) < (int)uVar9);
          iVar11 = FUN_0058b220(uVar9);
          if (iVar11 != 0) {
            FUN_0058ca00(0);
          }
          puVar2 = *(undefined4 **)((int)fVar15 + 0x18);
          do {
            if (puVar2 == (undefined4 *)0x0) break;
            pfVar14 = (float *)puVar2[2];
            puVar2 = (undefined4 *)*puVar2;
            if (*(ushort *)(pfVar14 + 6) == uVar9) goto LAB_0058c2a8;
          } while ((int)(uint)*(ushort *)(pfVar14 + 6) < (int)uVar9);
          goto LAB_0058c30f;
        }
        goto LAB_0058c33e;
      }
LAB_0058c047:
      if (fVar15 != 1.4013e-44) goto LAB_0058c063;
      FUN_005896f0(pfVar1);
      pcVar18 = local_14c;
      goto LAB_0058c82b;
    }
    goto LAB_0058c898;
  }
  goto LAB_0058c966;
LAB_0058c2a8:
  iVar11 = local_144[4];
  if (iVar11 == 0) {
LAB_0058c2d9:
    if (local_144[5] == 0) goto LAB_0058c2e6;
    *(undefined4 *)(local_144[5] + 0x10) = 0;
  }
  else {
    if (local_144[5] == 0) {
      if (iVar11 != 0) {
        *(undefined4 *)(iVar11 + 0x14) = 0;
        local_144[4] = 0;
        goto LAB_0058c2e6;
      }
      goto LAB_0058c2d9;
    }
    *(int *)(local_144[5] + 0x10) = iVar11;
    *(int *)(local_144[4] + 0x14) = local_144[5];
    local_144[4] = 0;
  }
  local_144[5] = 0;
LAB_0058c2e6:
  fVar15 = pfVar14[5];
  iVar11 = *(int *)((int)fVar15 + 0x14);
  while (iVar11 != 0) {
    fVar15 = *(float *)((int)fVar15 + 0x14);
    iVar11 = *(int *)((int)fVar15 + 0x14);
  }
  *(int **)((int)fVar15 + 0x14) = local_144;
  local_144[4] = (int)fVar15;
  local_144[2] = (int)pfVar14[1];
  local_150 = pfVar14[1];
  local_128 = pfVar14;
LAB_0058c30f:
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00401f20(iVar13);
  local_140 = 0;
  local_13a = 0;
  local_13c = 0;
  pcVar18 = local_14c;
LAB_0058c33e:
  piVar3 = local_11c;
  fVar15 = 0.0;
  if ((int)local_158 < 0x7d2) {
    if (local_158 == 2.804e-42) {
      if (*local_144 != 0) {
        pfVar14 = local_128;
        if ((((short)local_11c[6] == 0xfde) &&
            (iVar13 = (**(code **)(*(int *)*local_11c + 0xc))(), pfVar14 = local_128,
            iVar13 == 0x387)) && (cVar6 = FUN_00517b20(local_128 + 2), cVar6 != '\0')) {
          *(uint *)(*piVar3 + 0x2c) = *(uint *)(*piVar3 + 0x2c) | 2;
        }
        if ((((short)piVar3[6] == 0xfe6) &&
            (iVar13 = (**(code **)(*(int *)*piVar3 + 0xc))(), iVar13 == 0x386)) &&
           (cVar6 = FUN_00517b20(pfVar14 + 2), cVar6 != '\0')) {
          *(uint *)(*piVar3 + 0x2c) = *(uint *)(*piVar3 + 0x2c) | 0x20;
        }
        FUN_004028d0(pfVar14[2],0);
        *pfVar1 = local_150;
      }
    }
    else if (((local_158 != 0.0) && (local_158 != 4.90454e-44)) && (local_158 != 1.41531e-43)) {
      FUN_004a7a60("ERROR: Unknown action enumeration %i \n",local_158);
    }
  }
  else {
    switch(local_158) {
    case 2.8054e-42:
      *pfVar1 = local_150 + *pfVar1;
      break;
    case 2.8068e-42:
      *pfVar1 = *pfVar1 - local_150;
      break;
    case 2.8082e-42:
      *pfVar1 = local_150 * *pfVar1;
      break;
    case 2.8096e-42:
      if (local_150 != 0.0) {
        *pfVar1 = *pfVar1 / local_150;
      }
      break;
    case 2.811e-42:
      iVar13 = FUN_0047df80(0);
      local_154 = ((float)iVar13 / 32767.0) * local_150;
      fVar20 = (float10)FUN_00404f70(local_154);
      *pfVar1 = (float)(fVar20 + (float10)1.0);
      break;
    default:
      FUN_004a7a60("ERROR: Unknown action enumeration %i \n",local_158);
      break;
    case 2.81381e-42:
      local_158 = 2.8026e-45;
      if (*pfVar1 <= local_150) {
        local_158 = 1.4013e-45;
      }
      *pfVar1 = (float)(int)local_158;
      break;
    case 2.81521e-42:
      local_158 = 2.8026e-45;
      if (local_150 < *pfVar1 == (local_150 == *pfVar1)) {
        local_158 = 1.4013e-45;
      }
      *pfVar1 = (float)(int)local_158;
      break;
    case 2.81661e-42:
      local_158 = 2.8026e-45;
      if (local_150 != *pfVar1) {
        local_158 = 1.4013e-45;
      }
      *pfVar1 = (float)(int)local_158;
      break;
    case 2.81801e-42:
      local_158 = 2.8026e-45;
      if (local_150 < *pfVar1) {
        local_158 = 1.4013e-45;
      }
      *pfVar1 = (float)(int)local_158;
      break;
    case 2.81941e-42:
      local_158 = 2.8026e-45;
      if (local_150 <= *pfVar1) {
        local_158 = 1.4013e-45;
      }
      *pfVar1 = (float)(int)local_158;
      break;
    case 2.82081e-42:
      local_158 = local_150;
      if (*pfVar1 < local_150) {
        local_158 = *pfVar1;
      }
      *pfVar1 = local_158;
      break;
    case 2.82222e-42:
      local_158 = local_150;
      if (local_150 < *pfVar1) {
        local_158 = *pfVar1;
      }
      *pfVar1 = local_158;
      break;
    case 2.82362e-42:
      if ((*pfVar1 == 2.0) && (local_150 == 2.0)) {
        local_158 = 2.8026e-45;
        *pfVar1 = 2.0;
      }
      else {
        local_158 = 1.4013e-45;
        *pfVar1 = 1.0;
      }
      break;
    case 2.82502e-42:
      if ((*pfVar1 == 2.0) || (local_150 == 2.0)) {
        local_158 = 2.8026e-45;
        *pfVar1 = 2.0;
      }
      else {
        local_158 = 1.4013e-45;
        *pfVar1 = 1.0;
      }
      break;
    case 2.82642e-42:
      local_158 = 2.8026e-45;
      if (local_150 == *pfVar1) {
        local_158 = 1.4013e-45;
      }
      *pfVar1 = (float)(int)local_158;
      break;
    case 2.82782e-42:
      if (*pfVar1 < 0.0) {
        local_154 = ABS(*pfVar1);
        iVar13 = FUN_009828c0();
        *pfVar1 = (float)(extraout_ST0 * (float10)(iVar13 + 1) + (float10)*pfVar1);
      }
      local_154 = *pfVar1;
      fVar20 = (float10)FUN_00982bfa();
      local_154 = (float)fVar20;
      *pfVar1 = local_154;
      break;
    case 2.82922e-42:
      local_154 = local_150 + *pfVar1;
      fVar20 = (float10)FUN_00404f70(local_154);
      *pfVar1 = (float)fVar20;
      break;
    case 2.83062e-42:
      if (*pfVar1 < 0.0) {
        local_154 = ABS(local_150 + *pfVar1);
        *pfVar1 = local_154;
      }
      break;
    case 2.83202e-42:
      if (local_150 == 2.0) {
        fVar15 = *pfVar1;
      }
      *pfVar1 = fVar15;
      local_158 = fVar15;
      break;
    case 2.83343e-42:
      if (local_150 == 1.0) {
        fVar15 = *pfVar1;
      }
      *pfVar1 = fVar15;
      local_158 = fVar15;
      break;
    case 2.83483e-42:
      local_154 = *pfVar1;
      fVar20 = (float10)FUN_00986b80();
      local_154 = (float)fVar20;
      *pfVar1 = local_154;
      break;
    case 2.83623e-42:
      local_154 = *pfVar1;
      fVar20 = (float10)FUN_00986cd0();
      local_154 = (float)fVar20;
      *pfVar1 = local_154;
      break;
    case 2.83763e-42:
      local_154 = local_150 + *pfVar1;
      fVar20 = (float10)FUN_00484370(local_154);
      *pfVar1 = (float)fVar20;
      break;
    case 2.83903e-42:
      local_158 = 1.4013e-45;
      if (local_150 != 2.0) {
        local_158 = 2.8026e-45;
      }
      *pfVar1 = (float)(int)local_158;
      break;
    case 2.84043e-42:
    }
  }
LAB_0058c82b:
  piVar3 = (int *)local_144[1];
  local_4._0_1_ = 1;
  local_144 = piVar3;
  FUN_00401f20(pcVar18);
  local_14c = (char *)0x0;
  local_146 = 0;
  local_148 = 0;
  piVar5 = local_134;
  if (piVar3 == (int *)0x0) goto joined_r0x0058c863;
  goto LAB_0058bfb0;
joined_r0x0058c863:
  for (; local_134 = piVar5, local_12c != 0; local_12c = local_12c + -1) {
    *pfVar1 = (float)piVar5[2];
    local_134 = (int *)*piVar5;
    if (local_134 == (int *)0x0) {
      local_130 = 0;
    }
    else {
      local_134[1] = 0;
    }
    (*(code *)local_138[2])(piVar5);
    piVar5 = local_134;
  }
LAB_0058c898:
  if (((*(int *)(local_11c[4] + 4) != 0) && ((short)local_11c[6] == 0xfde)) &&
     (local_124 != *pfVar1)) {
    uVar12 = FUN_009828c0();
    FUN_00402e30(local_11c + 2,&DAT_00a300d4,uVar12);
  }
  if (((local_124 != *pfVar1) || (cVar6 = FUN_00589770(), cVar6 != '\0')) || (param_1 != '\0')) {
    FUN_0058bdd0();
    piVar3 = (int *)*local_11c;
    if (((piVar3 != (int *)0x0) && ((char)piVar3[1] == '\0')) &&
       (iVar13 = (**(code **)(*piVar3 + 0x14))((short)local_11c[6],*pfVar1,local_11c[2]),
       iVar13 == 0)) {
      FUN_0058b2f0((short)local_11c[6],*pfVar1,local_11c[2]);
    }
  }
  DAT_00b3b0ac = DAT_00b3b0ac + -1;
  (&DAT_00b3af10)[DAT_00b3b0ac] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00589690();
LAB_0058c966:
  FUN_00401f20(0);
LAB_0058c96e:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0058ca00(float param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x1a) = 1;
  if ((param_1 != *(float *)(in_ECX + 4)) || (*(short *)(in_ECX + 0x18) == 0xfde)) {
    FUN_004028d0(&DAT_00a2f7ec,0);
    *(float *)(in_ECX + 4) = param_1;
    FUN_00588930();
    FUN_0058bee0(1);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0058cab6) */
/* WARNING: Removing unreachable block (ram,0x0058cac0) */
/* WARNING: Removing unreachable block (ram,0x0058cac9) */
/* WARNING: Removing unreachable block (ram,0x0058caab) */
/* WARNING: Removing unreachable block (ram,0x0058cacd) */
/* WARNING: Removing unreachable block (ram,0x0058cad0) */
/* WARNING: Removing unreachable block (ram,0x0058caef) */
/* WARNING: Removing unreachable block (ram,0x0058caf6) */
/* WARNING: Removing unreachable block (ram,0x0058caf8) */
/* WARNING: Removing unreachable block (ram,0x0058cafe) */
/* WARNING: Removing unreachable block (ram,0x0058cb02) */
/* WARNING: Removing unreachable block (ram,0x0058cb18) */
/* WARNING: Removing unreachable block (ram,0x0058cb0a) */
/* WARNING: Removing unreachable block (ram,0x0058cb14) */

void FUN_0058ca50(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 0x1a) = 0;
  FUN_004028d0(param_1,0);
  local_4 = 0;
  FUN_004028d0(&DAT_00a36430,0);
  FUN_004028d0(0,0);
  *(undefined4 *)(in_ECX + 4) = 0;
  FUN_00588930(uVar1);
  FUN_0058bee0(1);
  FUN_00401f20(0);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0058cb70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 4);
  }
  piVar4 = (int *)FUN_00401f00(0x18);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0;
    *piVar4 = iVar1;
    piVar4[1] = 0;
    piVar4[3] = param_2;
    piVar4[4] = 0;
    piVar4[5] = 0;
  }
  *(int **)(iVar1 + 4) = piVar4;
  piVar4[2] = param_1;
  uVar3 = *(undefined4 *)(iVar1 + 4);
  FUN_0058bee0(0);
  return uVar3;
}



int * FUN_0058cbe0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 4);
  }
  piVar3 = (int *)FUN_00401f00(0x18);
  if (piVar3 != (int *)0x0) {
    piVar3[3] = param_2;
    piVar3[2] = param_1;
    *piVar3 = iVar1;
    piVar3[1] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    *(int **)(iVar1 + 4) = piVar3;
    FUN_0058bee0(0);
    return piVar3;
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  FUN_0058bee0(0);
  return (int *)0x0;
}



int * FUN_0058cc60(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  
  if ((4000 < param_2) && ((param_2 < DAT_00b13bc0 || (9999 < param_2)))) {
    iVar3 = *(int *)(in_ECX + 0x10);
    *(undefined4 *)(iVar3 + 0xc) = 0x65;
    iVar1 = *(int *)(iVar3 + 4);
    while (iVar1 != 0) {
      iVar3 = *(int *)(iVar3 + 4);
      iVar1 = *(int *)(iVar3 + 4);
    }
    piVar2 = (int *)FUN_00401f00(0x18);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      fVar4 = (float10)FUN_00588bd0(param_2);
      piVar2[2] = (int)(float)fVar4;
      *piVar2 = iVar3;
      piVar2[1] = 0;
      piVar2[3] = param_3;
      piVar2[4] = 0;
      piVar2[5] = 0;
    }
    *(int **)(iVar3 + 4) = piVar2;
    iVar3 = FUN_0058b220(param_2);
    iVar3 = *(int *)(iVar3 + 0x14);
    iVar1 = *(int *)(iVar3 + 0x14);
    while (iVar1 != 0) {
      iVar3 = *(int *)(iVar3 + 0x14);
      iVar1 = *(int *)(iVar3 + 0x14);
    }
    *(int **)(iVar3 + 0x14) = piVar2;
    piVar2[4] = iVar3;
    FUN_0058bee0(0);
    return piVar2;
  }
  return (int *)0x0;
}



void FUN_0058cd30(void)

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
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  iVar2 = FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0058bcd0(&DAT_00a6aba4,in_ECX);
  }
  *in_ECX = uVar3;
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 4) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0058cdb0(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    FUN_005852c0();
    FUN_00401f20(iVar1);
  }
  in_ECX[3] = 0;
  if ((char)in_ECX[4] != '\0') {
    for (piVar2 = in_ECX + 1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_005852c0();
        FUN_00401f20(iVar1);
      }
    }
  }
  iVar1 = in_ECX[2];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[2] + 4);
    FUN_00401f20(in_ECX[2]);
    in_ECX[2] = iVar1;
  }
  in_ECX[1] = 0;
  return;
}



undefined4 FUN_0058ce30(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
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
  iVar2 = FUN_00401f00(0x1c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0058bcd0(param_1,in_ECX);
  }
  local_4 = 0xffffffff;
  FUN_0067b1e0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_0058ceb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058b220(param_1);
  if (iVar1 != 0) {
    FUN_0058ca00(param_2);
  }
  return;
}



void FUN_0058ced0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058b220(param_1);
  if (iVar1 != 0) {
    FUN_0058ca50(param_2);
  }
  return;
}



void FUN_0058cef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0058b220(param_1);
  FUN_0058cb70(param_2,param_3);
  return;
}



void FUN_0058cf10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0058b220(param_1);
  FUN_0058cc60(param_2,param_3,param_4);
  return;
}



undefined4 * FUN_0058cf40(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_8;
  
  puVar3 = (undefined4 *)param_1[4];
  iVar10 = 0;
  puVar9 = (undefined4 *)0x0;
  local_8 = 0;
joined_r0x0058cf5a:
  while( true ) {
    while( true ) {
      while( true ) {
        if (puVar3 == (undefined4 *)0x0) {
          return param_1;
        }
        piVar4 = (int *)puVar3[2];
        param_1 = (undefined4 *)*piVar4;
        puVar3 = (undefined4 *)*puVar3;
        if (param_1 != (undefined4 *)0x28) break;
        iVar10 = piVar4[4];
        if (local_8 == 0) {
          local_8 = iVar10;
        }
        DAT_00b3b0a1 = 1;
      }
      if (param_1 != (undefined4 *)0x2d) break;
      DAT_00b3b0a1 = 0;
      puVar5 = *(undefined4 **)(iVar10 + 0x18);
      while (puVar5 != (undefined4 *)0x0) {
        piVar4 = puVar5 + 2;
        param_1 = puVar5 + 2;
        puVar5 = (undefined4 *)*puVar5;
        if (*(short *)(*piVar4 + 0x18) != 0xfa2) {
          param_1 = (undefined4 *)FUN_0058bee0();
        }
      }
      iVar10 = *(int *)(iVar10 + 0x10);
    }
    if (param_1 == (undefined4 *)0x32) break;
    if (param_1 == (undefined4 *)0x1e) {
      puVar9 = (undefined4 *)FUN_009828c0();
      param_1 = puVar9;
    }
    else if (param_1 == (undefined4 *)0x23) {
      puVar9 = (undefined4 *)0x0;
    }
    else if (param_1 == (undefined4 *)0x37) {
      if (puVar9 == (undefined4 *)0x0) goto LAB_0058d198;
      FUN_0058b220(puVar9);
      param_1 = (undefined4 *)FUN_0058cbe0();
    }
    else {
      if (param_1 != (undefined4 *)0x3c) {
        if (param_1 != (undefined4 *)0x14) goto LAB_0058d175;
        if (puVar9 == (undefined4 *)0x0) goto LAB_0058d198;
        goto LAB_0058d180;
      }
      if (puVar9 == (undefined4 *)0x0) goto LAB_0058d198;
      iVar8 = FUN_0058b800();
      param_1 = (undefined4 *)0x0;
      if (iVar8 != 0) {
        FUN_009828c0();
        param_1 = (undefined4 *)FUN_0058cf10(puVar9,iVar8);
      }
    }
  }
  if (iVar10 == 0) goto LAB_0058d198;
  if ((float)piVar4[1] == 0.0) {
    if (*(ushort *)(piVar4 + 3) == 0xffff) {
      pcVar6 = (char *)piVar4[2];
      pcVar1 = pcVar6 + 1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      uVar7 = (int)pcVar6 - (int)pcVar1;
    }
    else {
      uVar7 = (uint)*(ushort *)(piVar4 + 3);
    }
    if (uVar7 == 0) goto LAB_0058d014;
  }
  else {
LAB_0058d014:
    if ((piVar4[4] != 0xfde) && (piVar4[4] != 0xfe6)) {
      iVar8 = FUN_0058b220();
      param_1 = (undefined4 *)0x0;
      if (iVar8 != 0) {
        param_1 = (undefined4 *)FUN_0058ca00();
      }
      goto joined_r0x0058cf5a;
    }
  }
  if (piVar4[4] == 0xbba) {
    FUN_004028d0(piVar4[2],0);
    param_1 = (undefined4 *)FUN_0058a020();
  }
  else if (piVar4[4] == 0xfe6) {
    iVar8 = FUN_0058b220();
    param_1 = (undefined4 *)0x0;
    if (iVar8 != 0) {
      param_1 = (undefined4 *)FUN_0058ca50();
    }
    *(uint *)(iVar10 + 0x2c) = *(uint *)(iVar10 + 0x2c) | 0x20;
  }
  else {
    iVar8 = FUN_0058b220();
    param_1 = (undefined4 *)0x0;
    if (iVar8 != 0) {
      param_1 = (undefined4 *)FUN_0058ca50();
    }
  }
  goto joined_r0x0058cf5a;
LAB_0058d175:
  if (param_1 == (undefined4 *)0x19) {
    if (puVar9 == (undefined4 *)0x0) {
LAB_0058d198:
      param_1 = (undefined4 *)FUN_004a7a60();
    }
    else {
LAB_0058d180:
      FUN_009828c0();
      param_1 = (undefined4 *)FUN_0058cef0(puVar9);
    }
  }
  goto joined_r0x0058cf5a;
}



void FUN_0058d1c0(float param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  float local_4;
  
  if ((*(int *)(in_ECX + 0x10) != 0) && (*(char *)(*(int *)(in_ECX + 0x10) + 4) == '\0')) {
    fVar4 = (float10)FUN_00588bd0(0xfd0);
    local_4 = (float)(fVar4 - (float10)1.0);
    iVar3 = FUN_0058b220(0xfd0);
    if (iVar3 != 0) {
      FUN_0058ca00(local_4);
    }
    FUN_00776690(&local_4);
  }
  *(float *)(in_ECX + 0x10) = param_1;
  if (param_1 != 0.0) {
    fVar4 = (float10)FUN_00588bd0(0xfd0);
    param_1 = (float)(fVar4 + (float10)1.0);
    iVar3 = FUN_0058b220(0xfd0);
    if (iVar3 != 0) {
      FUN_0058ca00(param_1);
    }
    if (param_2 != 0) {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x10) + 0x34);
      do {
        puVar1 = puVar2;
        if (puVar1 == (undefined4 *)0x0) {
          FUN_006aa320(&param_1);
          return;
        }
        puVar2 = (undefined4 *)*puVar1;
      } while (puVar1[2] != param_2);
      FUN_00776690(&param_1);
      FUN_005986d0(puVar1,&param_1);
      return;
    }
    FUN_006aa320(&param_1);
  }
  return;
}



void FUN_0058d2f0(int param_1,char *param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  float10 extraout_ST0;
  float local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bf90b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = 0.0;
  if (param_4 == '\0') {
    iVar4 = FUN_00588ef0(param_2,uVar3);
    local_14 = (float)iVar4;
    if (local_14 == 0.0) goto LAB_0058d34e;
  }
  else {
LAB_0058d34e:
    if (*param_2 == '_') {
      iVar4 = FUN_0058b040(param_2,0xffffffff);
      local_14 = (float)iVar4;
    }
  }
  iVar4 = FUN_00401f00(0x18);
  local_4 = 0;
  if (iVar4 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    uVar5 = FUN_009828c0(param_3);
    piVar6 = (int *)FUN_00589fa0(param_1,(float)extraout_ST0,param_2,uVar5,param_3);
  }
  local_4 = 0xffffffff;
  uVar3 = 0;
  pcVar7 = param_2;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (pcVar7 != param_2 + 1) {
    do {
      cVar1 = param_2[uVar3];
      if ((((cVar1 < '0') || ('9' < cVar1)) && (cVar1 != '-')) && (cVar1 != '.')) goto LAB_0058d465;
      uVar3 = uVar3 + 1;
      pcVar7 = param_2;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
    } while (uVar3 < (uint)((int)pcVar7 - (int)(param_2 + 1)));
  }
  if (local_14 == -1.0) {
    FID_conflict__sscanf(param_2,"%f",&local_14);
  }
  if (local_14 == 0.0) {
    FID_conflict__sscanf(param_2,"%f",&local_14);
  }
  FUN_004028d0(&DAT_00a2f7ec,0);
  piVar6[1] = (int)local_14;
  iVar4 = FUN_009828c0();
  piVar6[4] = iVar4;
LAB_0058d465:
  iVar4 = *(int *)(local_10 + 0x14);
  piVar9 = (int *)0x0;
  piVar10 = (int *)0x0;
  piVar11 = (int *)0x0;
  if (iVar4 != 0) {
    piVar9 = *(int **)(iVar4 + 8);
    iVar4 = *(int *)(iVar4 + 4);
    if (iVar4 != 0) {
      piVar10 = *(int **)(iVar4 + 8);
      if (*(int *)(iVar4 + 4) != 0) {
        piVar11 = *(int **)(*(int *)(iVar4 + 4) + 8);
      }
    }
  }
  if (param_1 == 0xbba) {
    if ((piVar9 != (int *)0x0) && (*piVar9 == 10)) {
      if ((float)piVar9[1] == 999.0) {
        if (*(int *)(*(int *)(local_10 + 8) + 0xc) == 0) {
          uVar5 = FUN_0058bc80(param_2);
          *(undefined4 *)(*(int *)(local_10 + 8) + 0xc) = uVar5;
          if (*(int *)(*(int *)(local_10 + 8) + 0xc) == 0) {
            uVar5 = FUN_0058ce30(param_2);
            *(undefined4 *)(*(int *)(local_10 + 8) + 0xc) = uVar5;
          }
        }
        else {
          FUN_004a7a60("Can\'t have nested template definitions in an XML file.");
        }
        iVar4 = *(int *)(local_10 + 0x14);
        puVar8 = *(undefined4 **)(iVar4 + 4);
        *(undefined4 **)(local_10 + 0x14) = puVar8;
        if (puVar8 == (undefined4 *)0x0) {
          *(undefined4 *)(local_10 + 0x10) = 0;
        }
        else {
          *puVar8 = 0;
        }
        iVar2 = *(int *)(iVar4 + 8);
        (**(code **)(*(int *)(local_10 + 0xc) + 8))(iVar4);
        *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + -1;
        if (iVar2 != 0) {
          FUN_00401f20(*(undefined4 *)(iVar2 + 8));
          *(undefined4 *)(iVar2 + 8) = 0;
          *(undefined2 *)(iVar2 + 0xe) = 0;
          *(undefined2 *)(iVar2 + 0xc) = 0;
          FUN_00401f20(iVar2);
        }
        if (piVar6 == (int *)0x0) goto LAB_0058d943;
        iVar4 = piVar6[2];
LAB_0058d85f:
        FUN_00401f20(iVar4);
        piVar6[2] = 0;
        *(undefined2 *)((int)piVar6 + 0xe) = 0;
        *(undefined2 *)(piVar6 + 3) = 0;
        FUN_00401f20(piVar6);
        goto LAB_0058d943;
      }
      if ((901.0 <= (float)piVar9[1]) && ((float)piVar9[1] < 907.0 != ((float)piVar9[1] == 907.0)))
      {
        *piVar9 = 0x28;
        FUN_004028d0(param_2,0);
        if (piVar6 != (int *)0x0) {
          FUN_00401f20(piVar6[2]);
          piVar6[2] = 0;
          *(undefined2 *)((int)piVar6 + 0xe) = 0;
          *(undefined2 *)(piVar6 + 3) = 0;
          FUN_00401f20(piVar6);
        }
        goto LAB_0058d943;
      }
    }
    *piVar6 = 0x32;
    piVar6[4] = 0xbba;
    puVar8 = (undefined4 *)(**(code **)(*(int *)(local_10 + 0xc) + 4))();
    puVar8[2] = piVar6;
    *puVar8 = 0;
    puVar8[1] = *(undefined4 *)(local_10 + 0x14);
    if (*(undefined4 **)(local_10 + 0x14) == (undefined4 *)0x0) {
LAB_0058d939:
      *(undefined4 **)(local_10 + 0x10) = puVar8;
    }
    else {
      **(undefined4 **)(local_10 + 0x14) = puVar8;
    }
  }
  else {
    if (param_1 == 0xf) {
      if ((local_14 == 999.0) && (*(int *)(*(int *)(local_10 + 8) + 0xc) != 0)) {
        *(undefined4 *)(*(int *)(local_10 + 8) + 0xc) = 0;
        if (piVar6 != (int *)0x0) {
          FUN_00401f20(piVar6[2]);
          piVar6[2] = 0;
          *(undefined2 *)((int)piVar6 + 0xe) = 0;
          *(undefined2 *)(piVar6 + 3) = 0;
          FUN_00401f20(piVar6);
        }
        goto LAB_0058d943;
      }
      if (piVar9 != (int *)0x0) {
        if ((((*piVar9 == 0xbb9) && (piVar10 != (int *)0x0)) &&
            ((*piVar10 == 0x1e || (*piVar10 == 0x14)))) && (local_14 == (float)piVar10[1])) {
          if (((4001.0 <= (float)piVar6[1]) && ((float)piVar6[1] <= 4097.0)) || (9999 < piVar6[4]))
          {
            *piVar10 = 0x32;
          }
          else if (((float)piVar6[1] < 2001.0) ||
                  ((float)piVar6[1] < 2027.0 == ((float)piVar6[1] == 2027.0))) {
            *piVar10 = -1;
            FUN_004a7a60("Bad trait/action type in XML");
          }
          else {
            *piVar10 = 0x37;
          }
          iVar4 = FUN_009828c0();
          piVar10[4] = iVar4;
          piVar10[1] = piVar9[1];
          FUN_004028d0(piVar9[2],0);
          iVar4 = FUN_005889b0();
          if (iVar4 != 0) {
            FUN_00401f20(*(undefined4 *)(iVar4 + 8));
            *(undefined4 *)(iVar4 + 8) = 0;
            *(undefined2 *)(iVar4 + 0xe) = 0;
            *(undefined2 *)(iVar4 + 0xc) = 0;
            FUN_00401f20(iVar4);
          }
          FUN_00401f20(piVar6[2]);
          piVar6[2] = 0;
          *(undefined2 *)((int)piVar6 + 0xe) = 0;
          *(undefined2 *)(piVar6 + 3) = 0;
          FUN_00401f20(piVar6);
          goto LAB_0058d943;
        }
        if (((*piVar9 == 0xbbc) && (piVar10 != (int *)0x0)) &&
           ((*piVar10 == 0xbbb &&
            (((piVar11 != (int *)0x0 && (*piVar11 == 0x14)) && ((float)piVar11[1] == local_14))))))
        {
          *piVar11 = 0x3c;
          iVar4 = FUN_009828c0();
          piVar11[4] = iVar4;
          piVar11[1] = piVar9[1];
          FUN_004fb4c0(piVar10 + 2);
          iVar4 = FUN_005889b0();
          if (iVar4 != 0) {
            FUN_00401f20(*(undefined4 *)(iVar4 + 8));
            *(undefined4 *)(iVar4 + 8) = 0;
            *(undefined2 *)(iVar4 + 0xe) = 0;
            *(undefined2 *)(iVar4 + 0xc) = 0;
            FUN_00401f20(iVar4);
          }
          iVar4 = FUN_005889b0();
          if (iVar4 != 0) {
            FUN_00401f20(*(undefined4 *)(iVar4 + 8));
            *(undefined4 *)(iVar4 + 8) = 0;
            *(undefined2 *)(iVar4 + 0xe) = 0;
            *(undefined2 *)(iVar4 + 0xc) = 0;
            FUN_00401f20(iVar4);
          }
          if (piVar6 == (int *)0x0) goto LAB_0058d943;
          iVar4 = piVar6[2];
          goto LAB_0058d85f;
        }
      }
    }
    iVar4 = piVar6[4];
    if (((iVar4 < 0xfa1) || (0x1001 < iVar4)) && (iVar4 < 10000)) {
      if ((iVar4 < 0x7d1) || (0x7eb < iVar4)) {
        if ((*piVar6 == 0xf) &&
           ((901.0 <= (float)piVar6[1] && ((float)piVar6[1] < 907.0 != ((float)piVar6[1] == 907.0)))
           )) {
          *piVar6 = 0x2d;
        }
      }
      else if (*piVar6 == 10) {
        *piVar6 = 0x14;
      }
      else if (*piVar6 == 0xf) {
        *piVar6 = 0x19;
      }
    }
    else if (*piVar6 == 10) {
      *piVar6 = 0x1e;
    }
    else if (*piVar6 == 0xf) {
      *piVar6 = 0x23;
    }
    puVar8 = (undefined4 *)(**(code **)(*(int *)(local_10 + 0xc) + 4))();
    puVar8[2] = piVar6;
    *puVar8 = 0;
    puVar8[1] = *(undefined4 *)(local_10 + 0x14);
    if (*(undefined4 **)(local_10 + 0x14) == (undefined4 *)0x0) goto LAB_0058d939;
    **(undefined4 **)(local_10 + 0x14) = puVar8;
  }
  *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + 1;
  *(undefined4 **)(local_10 + 0x14) = puVar8;
LAB_0058d943:
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0058d960(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  
  fVar6 = (float10)FUN_00583d50();
  fVar1 = (float)in_ECX[3];
  fVar2 = (float)in_ECX[2];
  fVar3 = (float)in_ECX[2];
  iVar4 = FUN_0058b220(in_ECX[1]);
  if (iVar4 != 0) {
    FUN_0058ca00((fVar1 - fVar2) * (float)fVar6 + fVar3);
  }
  *(uint *)(*in_ECX + 0x2c) = *(uint *)(*in_ECX + 0x2c) | 0x80;
  if ((float)fVar6 == 1.0) {
    iVar4 = in_ECX[3];
    iVar5 = FUN_0058b220(in_ECX[1]);
    if (iVar5 != 0) {
      FUN_0058ca00(iVar4);
    }
    FUN_005895e0();
    return 1;
  }
  return 0;
}



void FUN_0058da00(int param_1,int param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 4) = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 2;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  FUN_004028d0(&DAT_00a2f7ec,0);
  *(undefined4 *)(in_ECX + 0x28) = 0;
  if (param_1 != 0) {
    FUN_0058d1c0(param_1,param_3);
  }
  if (param_2 != 0) {
    FUN_004028d0(param_2,0);
  }
  if (DAT_00b3b0cc == 0) {
    FUN_0058a1c0();
  }
  return;
}



void FUN_0058da70(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int extraout_EDX;
  undefined4 *puStack_4;
  
  puStack_4 = in_ECX;
  if ((*(char *)(in_ECX + 1) == '\0') && (*(char *)((int)in_ECX + 5) == '\0')) {
    iVar3 = in_ECX[0xd];
    *(undefined1 *)((int)in_ECX + 5) = 1;
    while (iVar3 != 0) {
      FUN_00588b20();
      iVar3 = extraout_EDX;
    }
  }
  iVar3 = FUN_00582160(0,1);
  if (*(undefined4 **)(iVar3 + 0x98) == in_ECX) {
    *(undefined4 *)(iVar3 + 0x98) = 0;
    *(undefined4 *)(iVar3 + 0x9c) = 0;
  }
  if (*(undefined4 **)(iVar3 + 0xa0) == in_ECX) {
    *(undefined4 *)(iVar3 + 0xa0) = 0;
    *(undefined4 *)(iVar3 + 0xa4) = 0;
  }
  *(undefined1 *)(in_ECX + 1) = 1;
  FUN_00589890();
  FUN_0058d1c0(0,0);
  if (in_ECX[8] != 0) {
    do {
      piVar1 = (int *)in_ECX[6];
      iVar3 = *piVar1;
      in_ECX[6] = iVar3;
      if (iVar3 == 0) {
        in_ECX[7] = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      iVar3 = piVar1[2];
      (**(code **)(in_ECX[5] + 8))(piVar1);
      in_ECX[8] = in_ECX[8] + -1;
      if (iVar3 != 0) {
        FUN_00589bb0();
        FUN_00401f20(iVar3);
      }
    } while (in_ECX[8] != 0);
  }
  if ((in_ECX[9] != 0) && (*(int *)(in_ECX[9] + 0x1c) != 0)) {
    FUN_00977c50(3);
    (**(code **)(**(int **)(in_ECX[9] + 0x1c) + 0x88))(&puStack_4,in_ECX[9]);
    if ((puStack_4 != (undefined4 *)0x0) &&
       ((LVar4 = InterlockedDecrement(puStack_4 + 1), LVar4 == 0 && (puStack_4 != (undefined4 *)0x0)
        ))) {
      (**(code **)*puStack_4)(1);
    }
    FUN_00977c50(2);
  }
  if (in_ECX[0xf] != 0) {
    do {
      piVar1 = (int *)in_ECX[0xd];
      iVar3 = *piVar1;
      in_ECX[0xd] = iVar3;
      if (iVar3 == 0) {
        in_ECX[0xe] = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      puVar2 = (undefined4 *)piVar1[2];
      (**(code **)(in_ECX[0xc] + 8))(piVar1);
      in_ECX[0xf] = in_ECX[0xf] + -1;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (in_ECX[0xf] != 0);
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0058dbd0(undefined4 param_1,uint param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_10b8 [3];
  char local_10b5;
  int local_10b4;
  char local_10ad;
  uint local_10ac;
  undefined4 local_10a8;
  undefined4 local_10a4;
  uint *local_10a0;
  uint *local_109c;
  uint local_1098;
  undefined4 local_1094;
  byte local_1090 [127];
  byte abStack_1011 [4097];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bf93e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_10b8;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffef38;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10a4 = param_1;
  local_109c = (uint *)FUN_00401f00(0x14,uVar4);
  iVar7 = 0;
  local_4 = 0;
  if (local_109c == (uint *)0x0) {
    local_10a8 = 0;
  }
  else {
    local_10a8 = FUN_0058cd30();
  }
  local_4 = 0xffffffff;
  local_109c = (uint *)0x0;
  if (param_2 == 0) {
    local_109c = (uint *)FUN_00585220(param_1,0);
    local_10ac = local_109c[1];
    local_1098 = *local_109c;
  }
  else {
    local_10ac = param_2;
    local_1098 = param_3;
  }
  puVar3 = local_109c;
  bVar2 = false;
  cVar6 = '\0';
  abStack_1011[1] = '\0';
  local_1094 = 0;
  local_10ad = '\0';
  local_10b5 = '\0';
  local_10b4 = 1;
  local_10a0 = (uint *)0x0;
  if (local_109c != (uint *)0x0) {
    local_10a0 = (uint *)FUN_00589110(local_109c,1);
    if (local_10a0 == puVar3) {
      local_10a0 = (uint *)0x0;
    }
    else {
      local_10ac = local_10a0[1];
      local_1098 = *local_10a0;
    }
  }
  uVar4 = 0;
  if (local_1098 != 0) {
    do {
      bVar1 = *(byte *)(local_10ac + uVar4);
      if (bVar1 == 10) {
        local_10b4 = local_10b4 + 1;
      }
      if (cVar6 == '\0') {
        if (bVar1 == 0x3c) {
          if (((uVar4 + 3 < local_1098) && (*(char *)(local_10ac + 1 + uVar4) == '!')) &&
             ((*(char *)(local_10ac + 2 + uVar4) == '-' &&
              (*(char *)(local_10ac + 3 + uVar4) == '-')))) {
            bVar2 = false;
            cVar6 = '\x04';
          }
          else {
            cVar6 = '\x01';
            local_1090[0] = 0;
            local_10b5 = '\0';
            iVar7 = 0;
          }
        }
      }
      else if (cVar6 == '\x01') {
        if ((local_1090[0] == 0) && (bVar1 == 0x2f)) {
          local_10b5 = '\x01';
        }
        else if ((bVar1 == 0x3e) ||
                (((uVar4 + 1 < local_1098 && (bVar1 == 0x2f)) &&
                 (*(char *)(local_10ac + 1 + uVar4) == '>')))) {
          if (local_1090[0] == 0) {
            if (!bVar2) {
              FUN_004a7a60("XML ERROR: %s -- in file \'%s\' on line %i.","Empty tag name",local_10a4
                           ,local_10b4);
              DAT_00b3b0a0 = 1;
              local_10a8 = 0;
              goto LAB_0058e236;
            }
          }
          else {
            uVar10 = 0;
            if (local_10b5 == '\0') {
              pbVar5 = local_1090;
              uVar9 = 10;
              iVar7 = local_10b4;
              FUN_00588a60(10,pbVar5,local_10b4,0);
              FUN_0058d2f0(uVar9,pbVar5,iVar7,uVar10);
            }
            else {
              pbVar5 = local_1090;
              uVar9 = 0xf;
              iVar7 = local_10b4;
              FUN_00588a60(0xf,pbVar5,local_10b4);
              FUN_0058d2f0(uVar9,pbVar5,iVar7,uVar10);
            }
          }
          cVar6 = (*(char *)(local_10ac + uVar4) != '/') + '\x02';
          bVar2 = false;
          iVar7 = 0;
        }
        else if (bVar1 < 0x21) {
          if (local_1090[0] != 0) {
            uVar10 = 0;
            if (local_10b5 == '\0') {
              uVar9 = 10;
            }
            else {
              uVar9 = 0xf;
            }
            pbVar5 = local_1090;
            iVar7 = local_10b4;
            FUN_00588a60(uVar9,pbVar5,local_10b4,0);
            FUN_0058d2f0(uVar9,pbVar5,iVar7,uVar10);
            iVar8 = 0;
LAB_0058e1c9:
            bVar2 = true;
            iVar7 = iVar8;
          }
        }
        else if (bVar2) {
          cVar6 = '\x05';
          bVar2 = false;
          uVar4 = uVar4 - 1;
        }
        else {
          local_1090[iVar7] = bVar1;
          local_1090[iVar7 + 1] = 0;
          iVar7 = iVar7 + 1;
        }
      }
      else if (cVar6 == '\x04') {
        if (((uVar4 + 2 < local_1098) && (bVar1 == 0x2d)) &&
           ((*(char *)(local_10ac + 1 + uVar4) == '-' && (*(char *)(local_10ac + 2 + uVar4) == '>'))
           )) {
          cVar6 = '\x03';
          bVar2 = false;
          uVar4 = uVar4 + 2;
        }
      }
      else if (cVar6 == '\x05') {
        if ((bVar1 == 0x3e) ||
           (((uVar4 + 1 < local_1098 && (bVar1 == 0x2f)) &&
            (*(char *)(local_10ac + 1 + uVar4) == '>')))) {
          FUN_004a7a60("XML ERROR: %s -- in file \'%s\' on line %i.","Attribute with no value",
                       local_10a4,local_10b4);
          DAT_00b3b0a0 = 1;
          local_10a8 = 0;
          goto LAB_0058e236;
        }
        if (bVar1 == 0x3d) {
          if (abStack_1011[1] == '\0') {
            FUN_004a7a60("XML ERROR: %s -- in file \'%s\' on line %i.","Missing attribute name",
                         local_10a4,local_10b4);
            DAT_00b3b0a0 = 1;
            local_10a8 = 0;
            goto LAB_0058e236;
          }
          local_1094 = FUN_00588ef0(abStack_1011 + 1);
          abStack_1011[1] = '\0';
          cVar6 = '\x06';
          bVar2 = false;
          iVar7 = 0;
        }
        else {
          if (0x20 < bVar1) {
            if (!bVar2) goto LAB_0058df46;
            FUN_004a7a60("XML ERROR: %s -- in file \'%s\' on line %i.",
                         "Unexpected word after attribute name",local_10a4,local_10b4);
            DAT_00b3b0a0 = 1;
            local_10a8 = 0;
            goto LAB_0058e236;
          }
          if (abStack_1011[1] != '\0') {
            local_1094 = FUN_00588ef0(abStack_1011 + 1);
            abStack_1011[1] = '\0';
            iVar8 = 0;
            goto LAB_0058e1c9;
          }
        }
      }
      else if (cVar6 == '\x06') {
        if (bVar1 == 0x22) {
          local_10ad = local_10ad == '\0';
        }
        else if (local_10ad == '\0') {
          if ((bVar1 == 0x3e) ||
             (((uVar4 + 1 < local_1098 && (bVar1 == 0x2f)) &&
              (*(char *)(local_10ac + 1 + uVar4) == '>')))) {
            if (abStack_1011[1] == '\0') {
              if (!bVar2) {
                FUN_004a7a60("XML ERROR: %s -- in file \'%s\' on line %i.",
                             "Missing attribute\'s value",local_10a4,local_10b4);
                DAT_00b3b0a0 = 1;
                local_10a8 = 0;
                goto LAB_0058e236;
              }
            }
            else {
              uVar9 = 0;
              pbVar5 = abStack_1011 + 1;
              uVar10 = local_1094;
              iVar7 = local_10b4;
              FUN_00588a60(local_1094,pbVar5,local_10b4,0);
              FUN_0058d2f0(uVar10,pbVar5,iVar7,uVar9);
            }
            iVar7 = 0;
            abStack_1011[1] = '\0';
            cVar6 = (*(char *)(local_10ac + uVar4) != '/') + '\x02';
            bVar2 = false;
          }
          else if (bVar1 < 0x21) {
            if (abStack_1011[1] != '\0') {
              uVar9 = 0;
              pbVar5 = abStack_1011 + 1;
              uVar10 = local_1094;
              iVar7 = local_10b4;
              FUN_00588a60(local_1094,pbVar5,local_10b4,0);
              FUN_0058d2f0(uVar10,pbVar5,iVar7,uVar9);
              abStack_1011[1] = '\0';
              iVar8 = 0;
              goto LAB_0058e1c9;
            }
          }
          else {
            if (!bVar2) goto LAB_0058df46;
            uVar4 = uVar4 - 1;
            cVar6 = '\x05';
            bVar2 = false;
          }
        }
        else {
LAB_0058df46:
          abStack_1011[iVar7 + 1] = bVar1;
          iVar8 = iVar7 + 1;
          abStack_1011[iVar7 + 2] = 0;
          iVar7 = iVar8;
          if (0x1000 < iVar8) {
            FUN_004a7a60("XML Read buffer too small!");
          }
        }
      }
      else if (cVar6 == '\x02') {
        if (bVar1 != 0x3e) {
          FUN_004a7a60("XML ERROR: %s -- in file \'%s\' on line %i.",
                       "Close-tag marker \'/\' not followed by end-of-tag marker \'>\'",local_10a4,
                       local_10b4);
          DAT_00b3b0a0 = 1;
          local_10a8 = 0;
          goto LAB_0058e236;
        }
        uVar9 = 0;
        pbVar5 = local_1090;
        uVar10 = 0xf;
        iVar8 = local_10b4;
        FUN_00588a60(0xf,pbVar5,local_10b4,0);
        FUN_0058d2f0(uVar10,pbVar5,iVar8,uVar9);
        cVar6 = '\x03';
        local_1090[0] = 0;
      }
      else if (cVar6 == '\x03') {
        if (bVar1 == 0x3c) {
          if (((uVar4 + 3 < local_1098) && (*(char *)(local_10ac + 1 + uVar4) == '!')) &&
             ((*(char *)(local_10ac + 2 + uVar4) == '-' &&
              (*(char *)(local_10ac + 3 + uVar4) == '-')))) {
            bVar2 = false;
            cVar6 = '\x04';
          }
          else {
            if (abStack_1011[1] != '\0') {
              pbVar5 = abStack_1011 + 1;
              do {
                bVar1 = *pbVar5;
                pbVar5 = pbVar5 + 1;
              } while (bVar1 != 0);
              iVar7 = (int)pbVar5 - (int)(abStack_1011 + 2);
              do {
                iVar8 = iVar7;
                iVar7 = iVar8 + -1;
              } while (abStack_1011[iVar8] < 0x21);
              abStack_1011[iVar8 + 1] = 0;
              if (abStack_1011[1] == '&') {
                uVar10 = 0;
              }
              else {
                if (abStack_1011[1] == '\0') goto LAB_0058e15c;
                uVar10 = 1;
              }
              pbVar5 = abStack_1011 + 1;
              uVar9 = 0xbb9;
              iVar7 = local_10b4;
              FUN_00588a60(0xbb9,pbVar5,local_10b4,uVar10);
              FUN_0058d2f0(uVar9,pbVar5,iVar7,uVar10);
            }
LAB_0058e15c:
            iVar7 = 0;
            bVar2 = false;
            abStack_1011[1] = '\0';
            local_10b5 = '\0';
            cVar6 = '\x01';
            local_1090[0] = 0;
          }
        }
        else {
          if (((uVar4 + 1 < local_1098) && (bVar1 == 0x2f)) &&
             (*(char *)(local_10ac + 1 + uVar4) == '>')) {
            FUN_004a7a60("XML ERROR: %s -- in file \'%s\' on line %i.",
                         "Unballanced close-tag marker pair \'/>\' found",local_10a4,local_10b4);
            DAT_00b3b0a0 = 1;
            local_10a8 = 0;
            goto LAB_0058e236;
          }
          if (bVar1 == 0x3e) {
            FUN_004a7a60("XML ERROR: %s -- in file \'%s\' on line %i.",
                         "Unballanced end-of-tag marker \'>\' found",local_10a4,local_10b4);
            DAT_00b3b0a0 = 1;
            local_10a8 = 0;
            goto LAB_0058e236;
          }
          if ((0x20 < bVar1) || (bVar2)) {
            abStack_1011[iVar7 + 1] = bVar1;
            iVar8 = iVar7 + 1;
            abStack_1011[iVar7 + 2] = 0;
            if (0x1000 < iVar8) {
              FUN_004a7a60("XML Read buffer too small!");
            }
            goto LAB_0058e1c9;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_1098);
  }
  if (local_10a0 != (uint *)0x0) {
    if (local_10a0[1] != 0) {
      FUN_00401f20(local_10a0[1]);
    }
    local_10a0[1] = 0;
    FUN_00401f20(local_10a0);
  }
  if (local_109c != (uint *)0x0) {
    if (local_109c[1] != 0) {
      FUN_00401f20(local_109c[1]);
    }
    local_109c[1] = 0;
    FUN_00401f20(local_109c);
  }
LAB_0058e236:
  *unaff_FS_OFFSET = local_c;
  return local_10a8;
}



int FUN_0058e3b0(uint param_1,uint *param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  undefined4 *puVar12;
  int local_c;
  
LAB_0058e3c0:
  do {
    puVar12 = *(undefined4 **)(in_ECX + 0x18);
    while( true ) {
      if (puVar12 == (undefined4 *)0x0) goto LAB_0058e3dc;
      iVar10 = puVar12[2];
      puVar12 = (undefined4 *)*puVar12;
      if (*(ushort *)(iVar10 + 0x18) == param_1) break;
      if ((int)param_1 <= (int)(uint)*(ushort *)(iVar10 + 0x18)) goto LAB_0058e3dc;
    }
    if (*(float *)(iVar10 + 4) == 105.0) {
      local_c = 0;
      iVar10 = 0x7fffffff;
      FUN_00588bd0(0xfaa);
      iVar3 = FUN_009828c0();
      in_ECX = *(int *)(in_ECX + 0x10);
      piVar9 = *(int **)(in_ECX + 0x34);
      if (piVar9 == (int *)0x0) goto LAB_0058e3c0;
      do {
        iVar7 = piVar9[2];
        piVar6 = *(int **)(iVar7 + 0x18);
        piVar9 = (int *)*piVar9;
        piVar5 = piVar6;
        if (piVar6 != (int *)0x0) {
          while( true ) {
            uVar1 = *(ushort *)(piVar5[2] + 0x18);
            piVar2 = (int *)*piVar5;
            if (uVar1 == 0xfa1) break;
            if ((0xfa1 < uVar1) || (piVar5 = piVar2, piVar2 == (int *)0x0)) goto LAB_0058e47f;
          }
          if (*(float *)(piVar5[2] + 4) == 1.0) goto LAB_0058e4c0;
        }
LAB_0058e47f:
        if (piVar6 != (int *)0x0) {
          while( true ) {
            piVar5 = piVar6 + 2;
            piVar6 = (int *)*piVar6;
            if (*(ushort *)(*piVar5 + 0x18) == 0xff0) break;
            if ((0xff0 < *(ushort *)(*piVar5 + 0x18)) || (piVar6 == (int *)0x0)) goto LAB_0058e4c0;
          }
          FUN_00588bd0(0xfaa);
          iVar4 = FUN_009828c0();
          if ((iVar3 < iVar4) && (iVar4 < iVar10)) {
            iVar10 = iVar4;
            local_c = iVar7;
          }
        }
LAB_0058e4c0:
      } while (piVar9 != (int *)0x0);
    }
    else {
      if (*(float *)(iVar10 + 4) != 104.0) {
        if (*(float *)(iVar10 + 4) == 106.0) {
          piVar9 = *(int **)(in_ECX + 0x34);
          param_1 = 0;
          iVar10 = 0x7fffffff;
          if (piVar9 != (int *)0x0) goto LAB_0058e5f7;
          goto LAB_0058e664;
        }
        if (*(float *)(iVar10 + 4) != 107.0) {
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            return 0;
          }
          do {
            if (*(int *)(iVar10 + 0xc) == 0x7eb) {
              iVar3 = *(int *)(iVar10 + 0x10);
              while (iVar7 = iVar3, iVar7 != 0) {
                iVar10 = iVar7;
                iVar3 = *(int *)(iVar7 + 0x10);
              }
              *param_2 = (uint)*(ushort *)(*(int *)(iVar10 + 8) + 0x18);
              return **(int **)(iVar10 + 8);
            }
            iVar10 = *(int *)(iVar10 + 4);
          } while (iVar10 != 0);
          return 0;
        }
        piVar9 = *(int **)(in_ECX + 0x34);
        param_1 = 0;
        iVar10 = -0x80000000;
        if (piVar9 != (int *)0x0) break;
        goto LAB_0058e73a;
      }
      local_c = 0;
      iVar10 = -0x80000000;
      FUN_00588bd0(0xfaa);
      iVar3 = FUN_009828c0();
      in_ECX = *(int *)(in_ECX + 0x10);
      piVar9 = *(int **)(in_ECX + 0x34);
      if (piVar9 == (int *)0x0) goto LAB_0058e3c0;
      do {
        iVar7 = piVar9[2];
        piVar6 = *(int **)(iVar7 + 0x18);
        piVar9 = (int *)*piVar9;
        piVar5 = piVar6;
        if (piVar6 != (int *)0x0) {
          while( true ) {
            piVar2 = piVar5 + 2;
            uVar1 = *(ushort *)(*piVar2 + 0x18);
            piVar5 = (int *)*piVar5;
            if (uVar1 == 0xfa1) break;
            if ((0xfa1 < uVar1) || (piVar5 == (int *)0x0)) goto LAB_0058e560;
          }
          if (*(float *)(*piVar2 + 4) == 1.0) goto LAB_0058e5a1;
        }
LAB_0058e560:
        if (piVar6 != (int *)0x0) {
          while( true ) {
            piVar5 = piVar6 + 2;
            piVar6 = (int *)*piVar6;
            if (*(ushort *)(*piVar5 + 0x18) == 0xff0) break;
            if ((0xff0 < *(ushort *)(*piVar5 + 0x18)) || (piVar6 == (int *)0x0)) goto LAB_0058e5a1;
          }
          FUN_00588bd0(0xfaa);
          iVar4 = FUN_009828c0();
          if ((iVar4 < iVar3) && (iVar10 < iVar4)) {
            iVar10 = iVar4;
            local_c = iVar7;
          }
        }
LAB_0058e5a1:
      } while (piVar9 != (int *)0x0);
    }
    if (local_c != 0) {
      FUN_0058e7d0();
      return local_c;
    }
  } while( true );
  do {
    iVar3 = piVar9[2];
    piVar9 = (int *)*piVar9;
    fVar11 = (float10)FUN_00588bd0(0xfa1);
    if ((fVar11 != (float10)1.0) && (iVar7 = FUN_00588b50(0xff0), iVar7 != 0)) {
      FUN_00588bd0(0xfaa);
      iVar7 = FUN_009828c0();
      if (iVar10 < iVar7) {
        iVar10 = iVar7;
        param_1 = iVar3;
      }
    }
  } while (piVar9 != (int *)0x0);
  if (param_1 == 0) {
LAB_0058e73a:
    iVar10 = FUN_00588b50(0xff0);
    if (iVar10 != 0) {
      FUN_00578ed0(0xff0,0);
    }
    param_1 = 0x80000000;
    uVar8 = FUN_00589390();
LAB_0058e697:
    puVar12 = &param_1;
    FUN_00582160(0,1,puVar12,uVar8);
    iVar10 = FUN_0057da90(puVar12,uVar8);
    return iVar10;
  }
  goto LAB_0058e64d;
LAB_0058e3dc:
  in_ECX = *(int *)(in_ECX + 0x10);
  if (in_ECX == 0) {
    return 0;
  }
  goto LAB_0058e3c0;
LAB_0058e5f7:
  do {
    iVar3 = piVar9[2];
    piVar9 = (int *)*piVar9;
    fVar11 = (float10)FUN_00588bd0(0xfa1);
    if ((fVar11 != (float10)1.0) && (iVar7 = FUN_00588b50(0xff0), iVar7 != 0)) {
      FUN_00588bd0(0xfaa);
      iVar7 = FUN_009828c0();
      if (iVar7 < iVar10) {
        iVar10 = iVar7;
        param_1 = iVar3;
      }
    }
  } while (piVar9 != (int *)0x0);
  if (param_1 == 0) {
LAB_0058e664:
    iVar10 = FUN_00588b50(0xff0);
    if (iVar10 != 0) {
      FUN_00578ed0(0xff0,0);
    }
    param_1 = 0x80000000;
    uVar8 = FUN_00589390();
    goto LAB_0058e697;
  }
LAB_0058e64d:
  iVar10 = param_1;
  FUN_0058e7d0();
  return iVar10;
}



void FUN_0058e7d0(void)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_8;
  float local_4;
  
  local_8 = 0;
  iVar1 = FUN_0058e3b0(0xff5,&local_8);
  if (iVar1 != 0) {
    iVar1 = FUN_0058b220(0xfb3);
    if (iVar1 != 0) {
      FUN_0058ca00(0xc97423f0);
    }
    fVar2 = (float10)FUN_00588bd0(0xff5);
    local_4 = (float)fVar2;
    iVar1 = FUN_0058b220(0xfb3);
    if (iVar1 != 0) {
      FUN_0058ca00(local_4);
    }
    iVar1 = FUN_0058b220(0xfb3);
    if (iVar1 != 0) {
      FUN_0058ca00(0);
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0058eb84) */
/* WARNING: Removing unreachable block (ram,0x0058ebab) */
/* WARNING: Removing unreachable block (ram,0x0058eba7) */
/* WARNING: Removing unreachable block (ram,0x0058ebad) */
/* WARNING: Removing unreachable block (ram,0x0058ecd2) */
/* WARNING: Removing unreachable block (ram,0x0058ee1c) */
/* WARNING: Removing unreachable block (ram,0x0058ece5) */
/* WARNING: Removing unreachable block (ram,0x0058ecee) */
/* WARNING: Removing unreachable block (ram,0x0058ecf8) */
/* WARNING: Removing unreachable block (ram,0x0058ed03) */
/* WARNING: Removing unreachable block (ram,0x0058ed14) */
/* WARNING: Removing unreachable block (ram,0x0058ed9a) */
/* WARNING: Removing unreachable block (ram,0x0058edbd) */
/* WARNING: Removing unreachable block (ram,0x0058edc3) */
/* WARNING: Removing unreachable block (ram,0x0058edf4) */
/* WARNING: Removing unreachable block (ram,0x0058edfa) */
/* WARNING: Removing unreachable block (ram,0x0058ed26) */
/* WARNING: Removing unreachable block (ram,0x0058ed49) */
/* WARNING: Removing unreachable block (ram,0x0058ed4f) */
/* WARNING: Removing unreachable block (ram,0x0058ed83) */
/* WARNING: Removing unreachable block (ram,0x0058ed89) */
/* WARNING: Removing unreachable block (ram,0x0058ee06) */
/* WARNING: Removing unreachable block (ram,0x0058ebfa) */
/* WARNING: Removing unreachable block (ram,0x0058ec05) */
/* WARNING: Removing unreachable block (ram,0x0058ec16) */
/* WARNING: Removing unreachable block (ram,0x0058ec28) */
/* WARNING: Removing unreachable block (ram,0x0058ec3d) */
/* WARNING: Removing unreachable block (ram,0x0058ec43) */
/* WARNING: Removing unreachable block (ram,0x0058ec73) */
/* WARNING: Removing unreachable block (ram,0x0058ec79) */
/* WARNING: Removing unreachable block (ram,0x0058ec9d) */
/* WARNING: Removing unreachable block (ram,0x0058ee20) */
/* WARNING: Removing unreachable block (ram,0x0058ee2c) */
/* WARNING: Removing unreachable block (ram,0x0058ee32) */

undefined1 * FUN_0058e870(void)

{
  ushort *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  bool bVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined *puVar17;
  float *pfVar18;
  undefined1 *puVar19;
  int *in_ECX;
  uint uVar20;
  int *unaff_FS_OFFSET;
  float10 fVar21;
  float10 extraout_ST0;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  undefined1 auStack_100 [108];
  undefined4 uStack_94;
  float *pfStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined1 *puStack_84;
  int *piStack_80;
  int *piStack_7c;
  undefined2 *puStack_78;
  uint uStack_74;
  byte local_5f;
  byte bStack_5e;
  float fStack_5c;
  float fStack_58;
  float fStack_40;
  undefined2 *puStack_3c;
  undefined8 uStack_38;
  float fStack_30;
  undefined8 uStack_28;
  float fStack_20;
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009bf998;
  local_14 = *unaff_FS_OFFSET;
  uStack_74 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_14;
  puVar19 = auStack_100;
  local_5f = 0;
  if (in_ECX[0xb] == 0) goto LAB_0058fa8d;
  if ((in_ECX[9] != 0) && ((in_ECX[0xb] & 0x200U) != 0)) {
    puStack_78 = (undefined2 *)0xfa4;
    piStack_7c = (int *)0x58e8cd;
    fVar21 = (float10)FUN_00588bd0();
    puStack_78 = (undefined2 *)0x58e8e9;
    iVar13 = (**(code **)(*in_ECX + 0xc))();
    if (iVar13 == 0x386) {
      if (fVar21 == (float10)2.0) {
        if ((char)in_ECX[0x12] == '\0') {
LAB_0058e902:
          in_ECX[0xb] = in_ECX[0xb] | 2;
        }
      }
      else if ((char)in_ECX[0x12] != '\0') goto LAB_0058e902;
    }
  }
  if ((*(byte *)(in_ECX + 0xb) & 2) != 0) {
    puStack_78 = (undefined2 *)0x58e913;
    iVar13 = FUN_005898f0();
    if (iVar13 != 0) {
      puStack_78 = (undefined2 *)0x58e91e;
      piVar14 = (int *)FUN_005898f0();
      puStack_78 = (undefined2 *)0x58e927;
      iVar13 = (**(code **)(*piVar14 + 0x34))();
      if (iVar13 != 0x3ef) {
        puStack_78 = (undefined2 *)0x58e933;
        FUN_00578e00();
      }
    }
    puStack_78 = (undefined2 *)0x58e93a;
    FUN_00589aa0();
    puStack_78 = (undefined2 *)0x58e943;
    iVar13 = (**(code **)(*in_ECX + 8))();
    if (iVar13 != 0) {
      local_5f = 1;
      if ((in_ECX[0xb] & 2U) != 0) {
        in_ECX[0xb] = in_ECX[0xb] ^ 2;
      }
    }
  }
  if (((*(byte *)(in_ECX + 0xb) & 0x80) != 0) && (in_ECX[10] != 0)) {
    while (iVar13 = in_ECX[10], iVar13 != 0) {
      while( true ) {
        puStack_78 = (undefined2 *)0x58e977;
        cVar12 = FUN_0058d960();
        if (cVar12 != '\0') break;
        iVar13 = *(int *)(iVar13 + 0x14);
        if (iVar13 == 0) goto LAB_0058e988;
      }
      if (iVar13 == 0) break;
    }
  }
LAB_0058e988:
  if (((*(byte *)(in_ECX + 0xb) & 4) != 0) && (iVar13 = in_ECX[9], iVar13 != 0)) {
    puStack_78 = (undefined2 *)0xfa1;
    piStack_7c = (int *)0x58e9a1;
    fVar21 = (float10)FUN_00588bd0();
    if (fVar21 == (float10)1.0) {
LAB_0058e9cb:
      bVar10 = true;
    }
    else {
      puStack_78 = (undefined2 *)0xfa3;
      piStack_7c = (int *)0x58e9ba;
      fVar21 = (float10)FUN_00588bd0();
      if (fVar21 == (float10)2.0) goto LAB_0058e9cb;
      bVar10 = false;
    }
    if (bVar10) {
      *(ushort *)(iVar13 + 0x18) = *(ushort *)(iVar13 + 0x18) | 1;
    }
    else {
      *(ushort *)(iVar13 + 0x18) = *(ushort *)(iVar13 + 0x18) & 0xfffe;
    }
    local_5f = 1;
    if ((in_ECX[0xb] & 4U) != 0) {
      in_ECX[0xb] = in_ECX[0xb] ^ 4;
    }
  }
  iVar13 = in_ECX[9];
  if (iVar13 == 0) {
    bStack_5e = 1;
  }
  else {
    bStack_5e = *(byte *)(iVar13 + 0x18);
    while ((bStack_5e = bStack_5e & 1, bStack_5e == 0 &&
           (iVar13 = *(int *)(iVar13 + 0x1c), iVar13 != 0))) {
      bStack_5e = *(byte *)(iVar13 + 0x18);
    }
  }
  puStack_78 = (undefined2 *)0x58ea32;
  iVar13 = (**(code **)(*in_ECX + 0xc))();
  puStack_78 = (undefined2 *)0x1;
  piStack_7c = (undefined4 *)0x0;
  piStack_80 = (int *)0x58ea44;
  iVar15 = FUN_00582160();
  if ((*(char *)(iVar15 + 0xb8) != '\0') && (bStack_5e != 0)) {
    if (*(short *)(in_ECX[9] + 0xb6) == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = **(int **)(in_ECX[9] + 0xb0);
    }
    puStack_78 = (undefined2 *)0x58ea76;
    iVar16 = (**(code **)(*in_ECX + 0xc))();
    if ((iVar16 == 0x386) && (iVar15 != 0)) {
      puStack_78 = (undefined2 *)0x6;
      piStack_7c = (undefined4 *)0x58ea8a;
      iVar15 = FUN_00707530();
      if (iVar15 != 0) {
        puStack_78 = (undefined2 *)0x0;
        piStack_7c = (undefined4 *)0x58ea96;
        FUN_004057b0();
        in_ECX[0xb] = in_ECX[0xb] | 0x20;
      }
    }
  }
  if ((((iVar13 == 0x386) && ((*(byte *)(in_ECX + 0xb) & 0x20) != 0)) && (in_ECX[9] != 0)) &&
     ((bStack_5e == 0 || (DAT_00b3b0a2 != '\0')))) {
    puStack_78 = (undefined2 *)0x0;
    piStack_7c = (undefined4 *)0x58ead1;
    iVar15 = FUN_00405790();
    if (iVar15 != 0) {
      puStack_78 = (undefined2 *)0x6;
      piStack_7c = (undefined4 *)0x58eae2;
      iVar15 = FUN_00707530();
      if (iVar15 != 0) {
        puStack_78 = (undefined2 *)0xfe6;
        uStack_c = 0;
        piStack_7c = (undefined4 *)0x58eb00;
        iVar15 = FUN_00588c10();
        if (iVar15 != 0) {
          puStack_3c = (undefined2 *)&puStack_78;
          piStack_7c = in_ECX + 0x11;
          piStack_80 = (int *)0x58eb1a;
          FUN_004a19f0();
          piStack_7c = (int *)0xfd2;
          uStack_c._0_1_ = 1;
          piStack_80 = (int *)0x58eb2b;
          fVar21 = (float10)FUN_00588bd0();
          iStack_8c = in_ECX[2];
          piStack_7c = (int *)(float)fVar21;
          piStack_80 = in_ECX + 0x10;
          pfStack_90 = (float *)0x58eb45;
          FUN_00419b10();
          pfStack_90 = &fStack_40;
          uStack_c._0_1_ = 0;
          uStack_94 = 0x58eb58;
          iStack_8c = iVar15;
          puStack_78 = (undefined2 *)FUN_00591360();
          uStack_c._0_1_ = 2;
          piStack_7c = (undefined4 *)0x58eb6a;
          FUN_0055e2a0();
          uStack_c._0_1_ = 0;
          puStack_78 = (undefined2 *)0x58eb78;
          FUN_007016a0();
        }
        uStack_c = 0xffffffff;
        puStack_78 = (undefined2 *)0x58ee51;
        FUN_007016a0();
      }
    }
  }
  if ((((*(byte *)(in_ECX + 0xb) & 0x10) != 0) && (in_ECX[9] != 0)) && (bStack_5e == 0)) {
    puStack_78 = (undefined2 *)0x0;
    piStack_7c = (int *)0x58ee79;
    iVar15 = FUN_00405790();
    puStack_78 = (undefined2 *)0xfcb;
    piStack_7c = (int *)0x58ee87;
    fVar21 = (float10)FUN_00588bd0();
    fVar3 = (float)fVar21;
    puStack_78 = (undefined2 *)0xfca;
    piStack_7c = (int *)0x58ee97;
    fVar21 = (float10)FUN_00588bd0();
    fVar4 = (float)fVar21;
    puStack_78 = (undefined2 *)0xfda;
    piStack_7c = (int *)0x58eea7;
    fVar21 = (float10)FUN_00588bd0();
    puStack_78 = (undefined2 *)0xfd9;
    piStack_7c = (undefined4 *)0x58eeb7;
    FUN_00588bd0();
    puStack_3c = (undefined2 *)(float)extraout_ST0;
    if (iVar15 != 0) {
      puVar7 = *(undefined4 **)(*(int *)(iVar15 + 0xb4) + 0x1c);
      *puVar7 = 0;
      puVar7[1] = 0;
      fStack_40 = -fVar4;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = fStack_40;
      puVar7[6] = fVar3;
      puVar7[7] = 0;
      uStack_28 = (double)(ulonglong)(uint)fVar3;
      puVar7[8] = 0;
      puVar7[9] = fVar3;
      puVar7[10] = 0;
      puStack_78 = (undefined2 *)0x6;
      puVar7[0xb] = fStack_40;
      piStack_7c = (int *)0x58ef7e;
      fStack_20 = fStack_40;
      iVar16 = FUN_00707530();
      fStack_5c = fVar3;
      fStack_58 = fVar4;
      if ((((iVar16 != 0) && (iVar13 == 0x386)) && (**(int **)(iVar16 + 0x20) != 0)) &&
         (*(int *)(**(int **)(iVar16 + 0x20) + 8) != 0)) {
        puStack_78 = (undefined2 *)0xfcf;
        piStack_7c = (int *)0x58efb5;
        fVar22 = (float10)FUN_00588bd0();
        if (fVar22 == (float10)2.0) {
          puStack_78 = (undefined2 *)0x3;
        }
        else {
          puStack_78 = (undefined2 *)0x0;
        }
        piStack_7c = (int *)0x58efcf;
        FUN_00405870();
        puStack_78 = (undefined2 *)0xfd2;
        piStack_7c = (int *)0x58efdb;
        fVar22 = (float10)FUN_00588bd0();
        fVar5 = (float)fVar22;
        puStack_78 = (undefined2 *)0xfcf;
        piStack_7c = (int *)0x58efeb;
        fVar22 = (float10)FUN_00588bd0();
        if ((fVar22 != (float10)-1.0) && (0.0 <= fVar5)) {
          fStack_5c = fVar5;
          if (fVar5 == 0.0) {
            fStack_5c = 100.0;
          }
          puStack_78 = (undefined2 *)0xfe6;
          piStack_7c = (int *)0x58f02e;
          puStack_78 = (undefined2 *)FUN_00588c10();
          piStack_7c = (int *)0x58f038;
          FUN_00419b10();
          uStack_c = 4;
          if ((int)uStack_28 == 0) {
LAB_0058f0f8:
            if (**(int **)(iVar16 + 0x20) == 0) {
              piVar14 = (int *)0x0;
            }
            else {
              piVar14 = *(int **)(**(int **)(iVar16 + 0x20) + 8);
            }
            uStack_38 = (double)(fStack_5c / 100.0);
            puStack_78 = (undefined2 *)0x58f11d;
            fStack_40 = (float)(**(code **)(*piVar14 + 0x4c))();
            fStack_5c = (float)(int)fStack_40;
            if ((int)fStack_40 < 0) {
              fStack_5c = fStack_5c + 4.2949673e+09;
            }
            fStack_5c = fStack_5c * (float)uStack_38;
            if (**(int **)(iVar16 + 0x20) == 0) {
              piVar14 = (int *)0x0;
            }
            else {
              piVar14 = *(int **)(**(int **)(iVar16 + 0x20) + 8);
            }
            puStack_78 = (undefined2 *)0x58f150;
            fStack_40 = (float)(**(code **)(*piVar14 + 0x50))();
            fStack_58 = (float)(int)fStack_40;
            if ((int)fStack_40 < 0) {
              fStack_58 = fStack_58 + 4.2949673e+09;
            }
            fStack_58 = fStack_58 * (float)uStack_38;
          }
          else {
            puStack_78 = (undefined2 *)0x58f054;
            iVar13 = FUN_00404fd0();
            if (iVar13 == 0) goto LAB_0058f0f8;
            puStack_78 = &DAT_00a36430;
            piStack_7c = (int *)0x58f06a;
            cVar12 = FUN_005755d0();
            if (cVar12 != '\0') goto LAB_0058f0f8;
            if (**(int **)(iVar16 + 0x20) == 0) {
              piVar14 = (int *)0x0;
            }
            else {
              piVar14 = *(int **)(**(int **)(iVar16 + 0x20) + 8);
            }
            fStack_40 = (float)in_ECX[0x10];
            uStack_38 = (double)(fStack_5c / 100.0);
            puStack_78 = (undefined2 *)0x58f09e;
            iVar13 = (**(code **)(*piVar14 + 0x4c))();
            fVar5 = (float)iVar13;
            if (iVar13 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            fStack_5c = (fVar5 * (float)uStack_38) / fStack_40;
            if (**(int **)(iVar16 + 0x20) == 0) {
              piVar14 = (int *)0x0;
            }
            else {
              piVar14 = *(int **)(**(int **)(iVar16 + 0x20) + 8);
            }
            fStack_40 = (float)in_ECX[0x10];
            puStack_78 = (undefined2 *)0x58f0dc;
            iVar13 = (**(code **)(*piVar14 + 0x50))();
            fVar5 = (float)iVar13;
            if (iVar13 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            fStack_58 = (fVar5 * (float)uStack_38) / fStack_40;
          }
          uStack_c = 0xffffffff;
          puStack_78 = (undefined2 *)0x58f17b;
          FUN_00402da0();
        }
      }
      pfVar18 = *(float **)(*(int *)(iVar15 + 0xb4) + 0x28);
      if (pfVar18 != (float *)0x0) {
        fStack_40 = (float)fVar21 / fStack_5c;
        fVar5 = (float)puStack_3c / fStack_58;
        *pfVar18 = fStack_40;
        pfVar18[1] = fVar5;
        fVar4 = fVar4 / fStack_58 + fVar5;
        pfVar18[2] = fStack_40;
        pfVar18[3] = fVar4;
        puStack_3c = (undefined2 *)(fVar3 / fStack_5c + fStack_40);
        pfVar18[4] = (float)puStack_3c;
        pfVar18[5] = fVar5;
        pfVar18[6] = (float)puStack_3c;
        uStack_28 = (double)CONCAT44(fVar4,puStack_3c);
        pfVar18[7] = fVar4;
      }
      puVar1 = (ushort *)(*(int *)(iVar15 + 0xb4) + 0x2e);
      *puVar1 = *puVar1 | 9;
      piStack_7c = (int *)(uint)*(ushort *)(*(int *)(iVar15 + 0xb4) + 8);
      puStack_78 = *(undefined2 **)(*(int *)(iVar15 + 0xb4) + 0x1c);
      piStack_80 = (int *)0x58f27f;
      FUN_0072a0f0();
      local_5f = 1;
      if ((in_ECX[0xb] & 0x10U) != 0) {
        in_ECX[0xb] = in_ECX[0xb] ^ 0x10;
      }
      iVar13 = *(int *)(iVar15 + 0xb4);
      if (iVar13 != 0) {
        *(ushort *)(iVar13 + 0x2e) = *(ushort *)(iVar13 + 0x2e) & 0xfff | 0x8000;
      }
    }
  }
  if ((((*(byte *)(in_ECX + 0xb) & 0x40) != 0) && (in_ECX[9] != 0)) && (bStack_5e == 0)) {
    puStack_78 = (undefined2 *)0x58f2c6;
    iVar13 = (**(code **)(*in_ECX + 0xc))();
    if (iVar13 == 0x388) {
      puStack_78 = (undefined2 *)0x58f2d4;
      FUN_00590970();
    }
    local_5f = 1;
    if ((in_ECX[0xb] & 0x40U) != 0) {
      in_ECX[0xb] = in_ECX[0xb] ^ 0x40;
    }
  }
  if ((*(byte *)(in_ECX + 0xb) & 1) == 0) {
LAB_0058f5c2:
    if (in_ECX[9] != 0) {
      if ((in_ECX[0xb] & 0x100U) != 0) {
        puStack_3c = (undefined2 *)(float)DAT_00b06c4c;
        uStack_28 = (double)DAT_00b06c4c;
        puStack_78 = (undefined2 *)0x58f5f0;
        fVar23 = (float10)FUN_0057d7a0();
        fVar21 = (float10)uStack_28;
        puStack_3c = (undefined2 *)(float)DAT_00b06c50;
        uStack_28 = (double)DAT_00b06c50;
        puStack_78 = (undefined2 *)0x58f60f;
        fVar24 = (float10)FUN_0057d7f0();
        fVar22 = (float10)uStack_28;
        puStack_78 = (undefined2 *)0x58f61e;
        fVar25 = (float10)FUN_00588c50();
        fStack_40 = (float)fVar25;
        puStack_78 = (undefined2 *)0x58f629;
        fVar25 = (float10)FUN_00588cf0();
        puStack_78 = (undefined2 *)0xfca;
        piStack_7c = (int *)0x58f639;
        fVar26 = (float10)FUN_00588bd0();
        puStack_78 = (undefined2 *)
                     (float)((fVar26 + (float10)(float)fVar25) * (float10)(float)(fVar22 / fVar24));
        piStack_7c = (int *)0xfcb;
        piStack_80 = (int *)0x58f659;
        puStack_3c = puStack_78;
        fVar26 = (float10)FUN_00588bd0();
        piStack_7c = (int *)(float)((float10)(float)(fVar21 / fVar23) *
                                   ((float10)fStack_40 + fVar26));
        piStack_80 = (int *)((float)fVar25 * (float)(fVar22 / fVar24));
        puStack_84 = (undefined1 *)(float)((float10)fStack_40 * (float10)(float)(fVar21 / fVar23));
        uStack_88 = 0x58f6a2;
        puStack_3c = (undefined2 *)puStack_84;
        FUN_0058b670();
        local_5f = 1;
        if ((in_ECX[0xb] & 1U) != 0) {
          in_ECX[0xb] = in_ECX[0xb] ^ 0x100;
        }
      }
      if ((in_ECX[9] != 0) && ((in_ECX[0xb] & 0x200U) != 0)) {
        for (iVar13 = in_ECX[4]; iVar13 != 0; iVar13 = *(int *)(iVar13 + 0x10)) {
          piVar14 = *(int **)(iVar13 + 0x18);
          if (piVar14 != (int *)0x0) {
            while( true ) {
              piVar2 = piVar14 + 2;
              uVar6 = *(ushort *)(*piVar2 + 0x18);
              piVar14 = (int *)*piVar14;
              if (uVar6 == 0xfa4) break;
              if ((0xfa4 < uVar6) || (piVar14 == (int *)0x0)) goto LAB_0058f712;
            }
            puStack_3c = *(undefined2 **)(*piVar2 + 4);
            if ((float)puStack_3c == 2.0) {
              puStack_3c = (undefined2 *)(float)DAT_00b06c4c;
              uStack_28 = (double)DAT_00b06c4c;
              puStack_78 = (undefined2 *)0x58f739;
              fVar22 = (float10)FUN_0057d7a0();
              fVar21 = (float10)uStack_28;
              puStack_3c = (undefined2 *)(float)DAT_00b06c50;
              uStack_28 = (double)DAT_00b06c50;
              puStack_78 = (undefined2 *)0x58f758;
              fVar23 = (float10)FUN_0057d7f0();
              puStack_3c = (undefined2 *)(float)((float10)uStack_28 / fVar23);
              puStack_78 = (undefined2 *)0x58f767;
              fVar23 = (float10)FUN_00588c50();
              puStack_78 = (undefined2 *)0x58f772;
              fVar24 = (float10)FUN_00588cf0();
              puStack_78 = (undefined2 *)0xfcb;
              piStack_7c = (int *)0x58f782;
              fVar25 = (float10)FUN_00588bd0();
              puStack_78 = (undefined2 *)0xfca;
              fStack_40 = (float)((fVar25 + (float10)(float)fVar23) *
                                 (float10)(float)(fVar21 / fVar22));
              piStack_7c = (int *)0x58f79a;
              fVar21 = (float10)FUN_00588bd0();
              uVar20 = 0;
              puStack_3c = (undefined2 *)
                           (float)((float10)(float)puStack_3c * ((float10)(float)fVar24 + fVar21));
              puStack_78 = (undefined2 *)0x58f7d4;
              FUN_004784a0();
              puStack_78 = (undefined2 *)0x58f7db;
              FUN_00477f90();
              if (*(short *)(in_ECX[9] + 0xb8) == 0) break;
              goto LAB_0058f7f0;
            }
          }
LAB_0058f712:
        }
        goto LAB_0058f882;
      }
    }
  }
  else if (in_ECX[9] != 0) {
    if (bStack_5e != 0) goto LAB_0058f5c2;
    puStack_78 = (undefined2 *)0xfa6;
    piStack_7c = (int *)0x58f30e;
    fVar21 = (float10)FUN_00588bd0();
    if (fVar21 == (float10)2.0) {
LAB_0058f452:
      puStack_78 = (undefined2 *)0xfad;
      uStack_38._0_4_ = DAT_00b3f9a8;
      uStack_38._4_4_ = DAT_00b3f9ac;
      fStack_30 = DAT_00b3f9b0;
      piStack_7c = (int *)0x58f47b;
      fVar21 = (float10)FUN_00588bd0();
      uStack_38 = (double)CONCAT44(uStack_38._4_4_,(float)fVar21);
      puStack_78 = (undefined2 *)0xfac;
      piStack_7c = (int *)0x58f48b;
      fVar21 = (float10)FUN_00588bd0();
      puStack_78 = (undefined2 *)0xfab;
      fStack_30 = (float)-fVar21;
      piStack_7c = (int *)0x58f49d;
      fVar21 = (float10)FUN_00588bd0();
      uStack_38 = (double)CONCAT44((float)(fVar21 * (float10)-0.00800000037997961),(float)uStack_38)
      ;
      puStack_78 = (undefined2 *)0x58f4b0;
      iVar13 = (**(code **)(*in_ECX + 0xc))();
      if (iVar13 == 0x388) {
        puStack_78 = (undefined2 *)0xfed;
        uStack_28 = (double)uStack_38._4_4_;
        piStack_7c = (int *)0x58f4cb;
        fVar21 = (float10)FUN_00588bd0();
        uStack_38 = (double)CONCAT44((float)((float10)uStack_28 - fVar21),(float)uStack_38);
      }
      puStack_78 = (undefined2 *)0x1;
      piStack_7c = (undefined4 *)0x0;
      piStack_80 = (int *)0x58f4dc;
      iVar13 = FUN_00582160();
      if (in_ECX[4] == *(int *)(iVar13 + 0x68)) {
        uStack_28 = (double)(float)uStack_38;
        puStack_78 = (undefined2 *)0x58f4f4;
        fVar21 = (float10)FUN_0057d7a0();
        uStack_38 = (double)CONCAT44(uStack_38._4_4_,
                                     (float)((float10)uStack_28 - fVar21 * (float10)0.5));
        puStack_78 = (undefined2 *)0x58f507;
        fVar21 = (float10)FUN_0057d7f0();
        uStack_28 = (double)(fVar21 + (float10)fStack_30);
        puStack_78 = (undefined2 *)0x58f514;
        fVar21 = (float10)FUN_0057d7f0();
        fStack_30 = (float)((float10)uStack_28 - fVar21 * (float10)0.5);
      }
      iVar13 = in_ECX[9];
      *(float *)(iVar13 + 0x54) = (float)uStack_38;
      *(float *)(iVar13 + 0x58) = uStack_38._4_4_;
      *(float *)(iVar13 + 0x5c) = fStack_30;
      iVar13 = in_ECX[9];
      uVar20 = 0;
      if (*(short *)(iVar13 + 0xb8) != 0) {
        do {
          if (uVar20 < *(ushort *)(iVar13 + 0xb6)) {
            puStack_78 = *(undefined2 **)(*(int *)(iVar13 + 0xb0) + uVar20 * 4);
          }
          else {
            puStack_78 = (undefined2 *)0x0;
          }
          piStack_7c = &DAT_00b3fcd4;
          piStack_80 = (int *)0x58f573;
          iVar15 = FUN_00560920();
          if ((iVar15 != 0) && (*(char *)((int)in_ECX + 6) == '\0')) {
            *(float *)(iVar15 + 0x54) = DAT_00b3f9a8;
            *(float *)(iVar15 + 0x58) = DAT_00b3f9ac;
            *(float *)(iVar15 + 0x5c) = DAT_00b3f9b0;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < *(ushort *)(iVar13 + 0xb8));
      }
      puStack_78 = (undefined2 *)0x58f5b0;
      FUN_00589430();
    }
    else {
      puStack_78 = (undefined2 *)0x1;
      piStack_7c = (int *)0x0;
      piStack_80 = (int *)0x58f328;
      iVar13 = FUN_00582160();
      if (in_ECX[4] == *(int *)(iVar13 + 0x68)) goto LAB_0058f452;
      puStack_78 = (undefined2 *)0xfab;
      piStack_7c = (int *)0x58f343;
      fVar21 = (float10)FUN_00588bd0();
      fStack_30 = DAT_00b3f9b0;
      uStack_38._4_4_ = DAT_00b3f9ac;
      uStack_38._0_4_ = DAT_00b3f9a8;
      puStack_3c = (undefined2 *)(float)fVar21;
      iVar13 = in_ECX[9];
      *(float *)(iVar13 + 0x54) = DAT_00b3f9a8;
      *(float *)(iVar13 + 0x58) = uStack_38._4_4_;
      puStack_78 = (undefined2 *)0xfad;
      *(float *)(iVar13 + 0x5c) = fStack_30;
      piStack_7c = (int *)0x58f37f;
      fVar21 = (float10)FUN_00588bd0();
      puStack_78 = (undefined2 *)0xfac;
      uStack_38._0_4_ = (float)(fVar21 + (float10)(float)uStack_38);
      uStack_28 = (double)fStack_30;
      piStack_7c = (undefined4 *)0x58f39b;
      fVar21 = (float10)FUN_00588bd0();
      fStack_30 = (float)((float10)uStack_28 - fVar21);
      uStack_38 = (double)CONCAT44((float)puStack_3c * -0.008 + uStack_38._4_4_,(float)uStack_38);
      puStack_78 = (undefined2 *)0x58f3be;
      iVar13 = (**(code **)(*in_ECX + 0xc))();
      if (iVar13 == 0x388) {
        puStack_78 = (undefined2 *)0xfed;
        uStack_28 = (double)uStack_38._4_4_;
        piStack_7c = (undefined4 *)0x58f3d9;
        fVar21 = (float10)FUN_00588bd0();
        uStack_38 = (double)CONCAT44((float)((float10)uStack_28 - fVar21),(float)uStack_38);
      }
      fVar3 = fStack_30;
      iVar13 = in_ECX[9];
      uVar20 = 0;
      if (*(short *)(iVar13 + 0xb8) != 0) {
        do {
          if (uVar20 < *(ushort *)(iVar13 + 0xb6)) {
            puStack_78 = *(undefined2 **)(*(int *)(iVar13 + 0xb0) + uVar20 * 4);
          }
          else {
            puStack_78 = (undefined2 *)0x0;
          }
          piStack_7c = &DAT_00b3fcd4;
          piStack_80 = (int *)0x58f423;
          iVar15 = FUN_00560920();
          if (iVar15 != 0) {
            *(float *)(iVar15 + 0x54) = (float)uStack_38;
            *(float *)(iVar15 + 0x58) = uStack_38._4_4_;
            *(float *)(iVar15 + 0x5c) = fVar3;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < *(ushort *)(iVar13 + 0xb8));
      }
    }
    local_5f = 1;
    if ((in_ECX[0xb] & 1U) != 0) {
      in_ECX[0xb] = in_ECX[0xb] ^ 1;
    }
    goto LAB_0058f5c2;
  }
  goto LAB_0058f899;
LAB_0058f7f0:
  do {
    if ((uVar20 < *(ushort *)(in_ECX[9] + 0xb6)) &&
       (piVar14 = *(int **)(*(int *)(in_ECX[9] + 0xb0) + uVar20 * 4), piVar14 != (int *)0x0)) {
      puStack_78 = (undefined2 *)0x58f814;
      for (puVar17 = (undefined *)(**(code **)(*piVar14 + 4))(); puVar17 != (undefined *)0x0;
          puVar17 = *(undefined **)(puVar17 + 4)) {
        if (puVar17 == &DAT_00b352a4) {
          bVar11 = 1;
          goto LAB_0058f834;
        }
      }
      bVar11 = 0;
LAB_0058f834:
      if ((-(uint)bVar11 & (uint)piVar14) != 0) {
        puStack_78 = (undefined2 *)0x58f847;
        puStack_78 = (undefined2 *)FUN_009828c0();
        piStack_7c = (int *)0x58f851;
        piStack_7c = (int *)FUN_009828c0();
        piStack_80 = (int *)0x58f85b;
        piStack_80 = (int *)FUN_009828c0();
        puStack_84 = (undefined1 *)0x58f865;
        puStack_84 = (undefined1 *)FUN_009828c0();
        uStack_88 = 0x58f86d;
        FUN_004a17f0();
      }
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 < *(ushort *)(in_ECX[9] + 0xb8));
LAB_0058f882:
  local_5f = 1;
  if ((in_ECX[0xb] & 0x200U) != 0) {
    in_ECX[0xb] = in_ECX[0xb] ^ 0x200;
  }
LAB_0058f899:
  if (((((*(byte *)(in_ECX + 0xb) & 8) != 0) && (bStack_5e == 0)) &&
      (puVar8 = (undefined2 *)in_ECX[9], puVar8 != (undefined2 *)0x0)) &&
     (fStack_58 = 0.0, puVar8[0x5c] != 0)) {
    do {
      if (((uint)fStack_58 < (uint)(ushort)puVar8[0x5b]) &&
         (puVar9 = *(undefined2 **)(*(int *)(puVar8 + 0x58) + (int)fStack_58 * 4),
         puVar9 != (undefined2 *)0x0)) {
        puStack_78 = (undefined2 *)0x2;
        piStack_7c = (int *)0x58f915;
        iVar13 = FUN_00707530();
        piStack_7c = (int *)0x58f921;
        puStack_78 = puVar8;
        piVar14 = (int *)FUN_00588e60();
        puStack_78 = (undefined2 *)0xfa7;
        piStack_7c = (int *)0x58f932;
        fVar21 = (float10)FUN_00588bd0();
        puStack_78 = (undefined2 *)0xfcc;
        piStack_7c = (int *)0x58f948;
        fVar22 = (float10)FUN_00588bd0();
        puStack_78 = (undefined2 *)0xfcd;
        fVar3 = (float)(fVar22 / (float10)255.0);
        piStack_7c = (int *)0x58f95e;
        fVar22 = (float10)FUN_00588bd0();
        puStack_78 = (undefined2 *)0xfce;
        fVar4 = (float)(fVar22 / (float10)255.0);
        piStack_7c = (int *)0x58f974;
        fVar22 = (float10)FUN_00588bd0();
        piStack_7c = &DAT_00b3fcd4;
        fStack_40 = (float)(fVar22 / (float10)255.0);
        piStack_80 = (int *)0x58f989;
        puStack_78 = puVar9;
        iVar15 = FUN_00560920();
        if (iVar13 == 0) {
          if ((iVar15 == 0) || (iVar13 = *(int *)(*(int *)(iVar15 + 0xb4) + 0x24), iVar13 == 0))
          goto LAB_0058fa6b;
          puStack_78 = (undefined2 *)0x58f9f2;
          iVar16 = (**(code **)(*piVar14 + 0xc))();
          if ((iVar16 != 0x387) || ((char)piVar14[0x14] == '\0')) {
            uVar20 = (uint)*(ushort *)(*(int *)(iVar15 + 0xb4) + 8);
            if (uVar20 != 0) {
              pfVar18 = (float *)(iVar13 + 4);
              do {
                uVar20 = uVar20 - 1;
                pfVar18[2] = (float)(fVar21 / (float10)255.0);
                pfVar18[-1] = fVar3;
                *pfVar18 = fVar4;
                pfVar18[1] = fStack_40;
                pfVar18 = pfVar18 + 4;
              } while (uVar20 != 0);
            }
            puVar1 = (ushort *)(*(int *)(iVar15 + 0xb4) + 0x2e);
            *puVar1 = *puVar1 | 4;
          }
        }
        else {
          *(int *)(iVar13 + 0x54) = *(int *)(iVar13 + 0x54) + 2;
          *(float *)(iVar13 + 0x50) = (float)(fVar21 / (float10)255.0);
          *(float *)(iVar13 + 0x40) = fVar3;
          uStack_28 = (double)CONCAT44(fVar4,fVar3);
          *(float *)(iVar13 + 0x44) = fVar4;
          fStack_20 = fStack_40;
          *(float *)(iVar13 + 0x48) = fStack_40;
        }
        local_5f = 1;
        if ((in_ECX[0xb] & 8U) != 0) {
          in_ECX[0xb] = in_ECX[0xb] ^ 8;
        }
      }
LAB_0058fa6b:
      fStack_58 = (float)((int)fStack_58 + 1);
    } while ((uint)fStack_58 < (uint)(ushort)puVar8[0x5c]);
  }
  puVar19 = (undefined1 *)(uint)local_5f;
LAB_0058fa8d:
  *unaff_FS_OFFSET = local_14;
  return puVar19;
}



void FUN_0058fab0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bf9e1;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a690e8;
  local_4 = 2;
  iVar3 = FUN_00582160(0,1,uVar2);
  if (*(undefined4 **)(iVar3 + 0x98) == in_ECX) {
    *(undefined4 *)(iVar3 + 0x98) = 0;
    *(undefined4 *)(iVar3 + 0x9c) = 0;
  }
  if (*(undefined4 **)(iVar3 + 0x88) == in_ECX) {
    *(undefined4 *)(iVar3 + 0x88) = 0;
  }
  if (*(char *)(in_ECX + 1) == '\0') {
    FUN_0040fec0("WARNING: Base tile should have been released before deleted.");
    FUN_0058da70();
  }
  iVar3 = in_ECX[10];
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar3 = *(int *)(in_ECX[10] + 0x14);
    if (iVar1 != 0) {
      FUN_00401f20(iVar1);
    }
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_0057e4b0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0057e450();
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0058fba0(char param_1)

{
  int *piVar1;
  float fVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int in_ECX;
  byte bVar14;
  float10 fVar15;
  
  if (*(char *)(in_ECX + 5) != '\0') {
    return;
  }
  iVar10 = *(int *)(in_ECX + 0x10);
  iVar9 = FUN_00582160(0,1);
  if (iVar10 == *(int *)(iVar9 + 0x68)) {
    fVar15 = (float10)FUN_00588bd0(0xfa5);
    if (fVar15 == (float10)102.0) {
      iVar10 = FUN_0058b220(0xfa5);
      if (iVar10 == 0) goto LAB_0058fc2f;
      uVar6 = 0x45bbb000;
    }
    else {
      fVar15 = (float10)FUN_00588bd0(0xfa5);
      if ((fVar15 != (float10)103.0) || (iVar10 = FUN_0058b220(0xfa5), iVar10 == 0))
      goto LAB_0058fc2f;
      uVar6 = 0x45bbb800;
    }
    FUN_0058ca00(uVar6);
  }
LAB_0058fc2f:
  uVar7 = DAT_00b3b0a2;
  DAT_00b3b0a2 = 1;
  cVar8 = FUN_0058e870();
  puVar4 = *(undefined4 **)(in_ECX + 0x34);
  DAT_00b3b0a2 = uVar7;
joined_r0x0058fc56:
  if (puVar4 == (undefined4 *)0x0) {
    if ((param_1 == '\0') && (cVar8 != '\0')) {
      FUN_00707370(0,1);
    }
    return;
  }
  piVar5 = (int *)puVar4[2];
  piVar11 = (int *)piVar5[6];
  puVar4 = (undefined4 *)*puVar4;
  piVar12 = piVar11;
  if (piVar11 != (int *)0x0) {
    while( true ) {
      piVar1 = piVar12 + 2;
      uVar3 = *(ushort *)(*piVar1 + 0x18);
      piVar12 = (int *)*piVar12;
      if (uVar3 == 0xfa1) break;
      if ((0xfa1 < uVar3) || (piVar12 == (int *)0x0)) goto LAB_0058fca1;
    }
    if (*(float *)(*piVar1 + 4) == 1.0) goto LAB_0058fce3;
  }
LAB_0058fca1:
  piVar12 = (int *)0x0;
  if (piVar11 != (int *)0x0) {
    while( true ) {
      uVar3 = *(ushort *)(piVar11[2] + 0x18);
      piVar12 = (int *)*piVar11;
      if (uVar3 == 0xfa3) break;
      if ((0xfa3 < uVar3) || (piVar11 = piVar12, piVar12 == (int *)0x0)) goto LAB_0058fd1a;
    }
    fVar2 = *(float *)(piVar11[2] + 4);
    piVar12 = (int *)CONCAT22((short)((uint)piVar12 >> 0x10),
                              (ushort)(2.0 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
                              (ushort)(fVar2 == 2.0) << 0xe);
    if (fVar2 == 2.0) goto LAB_0058fce3;
  }
  goto LAB_0058fd1a;
LAB_0058fce3:
  bVar14 = 0;
  if (piVar5[9] != 0) {
    bVar14 = *(byte *)(piVar5[9] + 0x18) & 1;
  }
  for (iVar10 = piVar5[4]; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x10)) {
    if (*(int *)(iVar10 + 0x24) != 0) {
      bVar14 = bVar14 | *(byte *)(*(int *)(iVar10 + 0x24) + 0x18) & 1;
    }
  }
  piVar12 = (int *)0x0;
  if (bVar14 == 0) {
LAB_0058fd1a:
    if ((param_1 == '\0') && (cVar8 == '\0')) {
      uVar13 = (uint)piVar12 & 0xffffff00;
    }
    else {
      uVar13 = 1;
    }
    FUN_0058fba0(uVar13);
  }
  iVar10 = (**(code **)(*piVar5 + 0xc))();
  if (iVar10 == 0x388) {
    FUN_00590d20(piVar5[0x16]);
  }
  goto joined_r0x0058fc56;
}



void FUN_0058fd90(int param_1)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bfa08;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[5] = &PTR_FUN_00a6909c;
  in_ECX[0xf] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xc] = &PTR_FUN_00a690ac;
  in_ECX[9] = 0;
  in_ECX[4] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  *(undefined1 *)((int)in_ECX + 6) = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6aec4;
  if (param_1 != 0) {
    FUN_0058d1c0(param_1,0);
  }
  *(undefined1 *)(in_ECX + 0x14) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0058fe50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bfa38;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6aec4;
  local_4 = 0;
  if (*(char *)(in_ECX + 1) == '\0') {
    FUN_0058da70(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_0058fab0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0058fec0(void)

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
  local_10 = FUN_00401f00(0x54,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_0058fd90(0);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_0058ff30(byte param_1)

{
  FUN_0058fe50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0058ffe0(byte param_1)

{
  FUN_00590670();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}


