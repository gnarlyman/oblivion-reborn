
void FUN_005704a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bdc79;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6851c;
  iVar1 = in_ECX[7];
  local_4 = 3;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) != 0) {
      (**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(local_14,iVar1,uVar3);
      if (local_14[0] != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(local_14[0] + 1);
        if ((LVar4 == 0) && (local_14[0] != (undefined4 *)0x0)) {
          (**(code **)*local_14[0])(1);
        }
      }
    }
    puVar2 = (undefined4 *)in_ECX[7];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      in_ECX[7] = 0;
    }
  }
  if (*(int *)(in_ECX[6] + 0x48) != 0) {
    FUN_007ee740(in_ECX[6]);
  }
  iVar1 = in_ECX[6];
  puVar2 = *(undefined4 **)(iVar1 + 0x48);
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  if (in_ECX[9] != 0) {
    FUN_00401f20(in_ECX[9]);
  }
  iVar1 = in_ECX[6];
  if (iVar1 != 0) {
    FUN_0056c0f0();
    FUN_00401f20(iVar1);
  }
  puVar2 = (undefined4 *)in_ECX[0xb];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0xb] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0xc];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0xc] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0xc];
  local_4._0_1_ = 2;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0xb];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[7];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0056bc50();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00570690(byte param_1)

{
  FUN_005704a0();
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
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a686c4;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* WARNING: Removing unreachable block (ram,0x00570750) */
/* WARNING: Removing unreachable block (ram,0x0057075e) */
/* WARNING: Removing unreachable block (ram,0x00570762) */
/* WARNING: Removing unreachable block (ram,0x0057076c) */

void FUN_00570700(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bdcb3;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0056bc20(0,0);
  *in_ECX = &PTR_FUN_00a686cc;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005707a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009bdce3;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a686cc;
  local_4 = 1;
  if (in_ECX[7] != 0) {
    FUN_004384e0(in_ECX[7],0,1);
  }
  iVar1 = in_ECX[6];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(local_14,iVar1,uVar3);
    if (local_14[0] != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(local_14[0] + 1);
      if ((LVar4 == 0) && (local_14[0] != (undefined4 *)0x0)) {
        (**(code **)*local_14[0])(1);
      }
    }
  }
  puVar2 = (undefined4 *)in_ECX[6];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[6] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[6];
  local_4 = local_4 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0056bc50();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005708d0(byte param_1)

{
  FUN_005707a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005708f0(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (param_1 != (int *)0x0) {
    iVar5 = FUN_00560920(&DAT_00b40864,param_1);
    piVar4 = param_3;
    iVar3 = param_2;
    if ((iVar5 != 0) && (param_3 = (int *)0x0, *(int *)(iVar5 + 0xd0) != 0)) {
      do {
        piVar6 = (int *)FUN_004954b0(param_3);
        if (piVar6 != (int *)0x0) {
          for (puVar7 = (undefined4 *)(**(code **)(*piVar6 + 4))(); puVar7 != (undefined4 *)0x0;
              puVar7 = (undefined4 *)puVar7[1]) {
            if (puVar7 == &DAT_00b40c3c) {
              bVar1 = 1;
              goto LAB_00570970;
            }
          }
          bVar1 = 0;
LAB_00570970:
          uVar8 = -(uint)bVar1 & (uint)piVar6;
          if (uVar8 != 0) {
            bVar2 = true;
            iVar10 = *piVar4;
            do {
              iVar10 = iVar10 + -1;
              if (iVar10 < 0) {
                if (bVar2) {
                  param_2 = *(int *)(uVar8 + 0x18);
                  FUN_0042bb90(*piVar4,&param_2);
                  *piVar4 = *piVar4 + 1;
                }
                break;
              }
              if (*(int *)(*(int *)(iVar3 + 4) + iVar10 * 4) == *(int *)(uVar8 + 0x18)) {
                bVar2 = false;
              }
            } while (bVar2);
          }
        }
        param_3 = (int *)((int)param_3 + 1);
      } while (param_3 < *(int **)(iVar5 + 0xd0));
    }
    iVar5 = (**(code **)(*param_1 + 8))();
    if (iVar5 != 0) {
      uVar8 = 0;
      if (*(short *)(iVar5 + 0xb6) != 0) {
        if (*(short *)(iVar5 + 0xb6) != 0) goto LAB_005709fc;
        uVar9 = 0;
        while( true ) {
          FUN_005708f0(uVar9,iVar3,piVar4);
          uVar8 = uVar8 + 1;
          if (*(ushort *)(iVar5 + 0xb6) <= uVar8) break;
LAB_005709fc:
          uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0xb0) + uVar8 * 4);
        }
      }
    }
  }
  return;
}



void FUN_00570a30(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 local_68;
  undefined **local_64;
  int local_60;
  undefined2 local_5c;
  ushort local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined1 local_54 [36];
  undefined1 local_30 [36];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bdd08;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff88;
  *unaff_FS_OFFSET = (int)&local_c;
  local_5c = 10;
  local_64 = &PTR__scalar_deleting_destructor__00a686c4;
  local_56 = 1;
  local_5a = 0;
  local_58 = 0;
  local_60 = FUN_00401f00(0x28,uVar1);
  local_4 = 0;
  local_68 = 0;
  FUN_005708f0(param_1,&local_64,&local_68);
  uVar1 = 0;
  if (local_5a != 0) {
    do {
      iVar3 = *(int *)(local_60 + uVar1 * 4);
      if (iVar3 != 0) {
        FUN_007103c0(local_54);
        puVar4 = (undefined4 *)(iVar3 + 0x30);
        puVar2 = (undefined4 *)FUN_007100a0(local_30,puVar4);
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_5a);
  }
  local_64 = &PTR__scalar_deleting_destructor__00a686c4;
  FUN_00401f20(local_60);
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_00570b40(int *param_1)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float local_1c;
  
  local_1c = -1.0;
  for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x34)) {
    fVar3 = *(float *)(iVar4 + 0x18) - *(float *)(iVar4 + 0x14);
    if (fVar3 < local_1c) {
      fVar3 = local_1c;
    }
    local_1c = fVar3;
  }
  iVar4 = (**(code **)(*param_1 + 8))();
  if (iVar4 != 0) {
    uVar1 = *(ushort *)(iVar4 + 0xb8);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if (((uVar5 < *(ushort *)(iVar4 + 0xb6)) &&
            (iVar2 = *(int *)(*(int *)(iVar4 + 0xb0) + uVar5 * 4), iVar2 != 0)) &&
           (fVar6 = (float10)FUN_00570b40(iVar2), (float10)local_1c <= fVar6)) {
          fVar6 = (float10)FUN_00570b40(iVar2);
          local_1c = (float)fVar6;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)(uint)uVar1);
    }
  }
  return (float10)local_1c;
}



void FUN_00570c00(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 0x18) + 0xc);
  if (piVar1 != (int *)0x0) {
    for (puVar5 = (undefined *)(**(code **)(*piVar1 + 4))(); puVar5 != (undefined *)0x0;
        puVar5 = *(undefined **)(puVar5 + 4)) {
      if (puVar5 == &DAT_00b3cac0) {
        bVar2 = 1;
        goto LAB_00570c30;
      }
    }
    bVar2 = 0;
LAB_00570c30:
    if ((((-(uint)bVar2 & (uint)piVar1) != 0) &&
        (cVar4 = FUN_0055e000(param_1,&param_1), iVar3 = param_1, cVar4 != '\0')) && (param_1 != 0))
    {
      FUN_006c9ba0(0,0,0x3f800000,0,0,0);
      if (*(float *)(in_ECX + 8) < *(float *)(iVar3 + 0x30)) {
        *(float *)(in_ECX + 8) = *(float *)(iVar3 + 0x30);
        return;
      }
    }
  }
  return;
}



char * FUN_00570ca0(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int in_ECX;
  int iVar11;
  
  iVar11 = 0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    iVar11 = 6;
  }
  iVar5 = FUN_0073d5d0();
  pcVar6 = *(char **)(in_ECX + 0x1c);
  pcVar1 = pcVar6 + 1;
  do {
    cVar4 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar4 != '\0');
  pcVar6 = pcVar6 + ((iVar11 + iVar5 + 0x23) - (int)pcVar1);
  piVar9 = *(int **)(*(int *)(in_ECX + 0x18) + 0xc);
  if (piVar9 != (int *)0x0) {
    for (puVar7 = (undefined *)(**(code **)(*piVar9 + 4))(); puVar7 != (undefined *)0x0;
        puVar7 = *(undefined **)(puVar7 + 4)) {
      if (puVar7 == &DAT_00b3cac0) {
        bVar3 = 1;
        goto LAB_00570d06;
      }
    }
    bVar3 = 0;
LAB_00570d06:
    if ((-(uint)bVar3 & (uint)piVar9) != 0) {
      uVar8 = FUN_004da760(-(uint)bVar3 & (uint)piVar9);
      pcVar6 = pcVar6 + (uVar8 & 0xffff);
    }
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar2 != (undefined4 *)0x0) {
      piVar9 = (int *)FUN_0046b250(*puVar2);
      uVar10 = (**(code **)(*piVar9 + 0xd4))
                         (*(undefined4 *)((int)puVar2 + 5),0x104,
                          "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,pcVar6,*puVar2,uVar10);
      return pcVar6;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",pcVar6,0x104,
                 "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
  }
  return pcVar6;
}



void FUN_00570da0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  short *psVar6;
  char cVar7;
  char *pcVar8;
  undefined *puVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  int in_ECX;
  char local_31;
  uint local_30;
  short *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  local_24 = 0;
  iVar2 = *(int *)(DAT_00b33b00 + 0x14);
  local_2c = (short *)0x0;
  cVar7 = FUN_0045a170();
  if (cVar7 != '\0') {
    local_28 = 0x4b4f4c42;
    FUN_0045b9a0(&local_28,4);
    local_2c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_24,2);
  }
  FUN_0056bd80();
  pcVar8 = *(char **)(in_ECX + 0x1c);
  cVar7 = (char)pcVar8;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_31 = (char)pcVar8 - (cVar7 + '\x01');
  FUN_0045b9a0(&local_31,1);
  FUN_0045b9a0(*(undefined4 *)(in_ECX + 0x1c),local_31);
  FUN_007150f0(*(int *)(in_ECX + 0x18) + 0x30);
  FUN_0045b9a0(local_10,0x10);
  iVar3 = *(int *)(in_ECX + 0x18);
  local_1c = *(undefined4 *)(iVar3 + 0x54);
  local_18 = *(undefined4 *)(iVar3 + 0x58);
  local_14 = *(undefined4 *)(iVar3 + 0x5c);
  FUN_0045b9a0(&local_1c,0xc);
  local_20 = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x60);
  FUN_0045b9a0(&local_20,4);
  local_30 = 0;
  piVar11 = *(int **)(*(int *)(in_ECX + 0x18) + 0xc);
  uVar10 = 0;
  if (piVar11 != (int *)0x0) {
    for (puVar9 = (undefined *)(**(code **)(*piVar11 + 4))(); puVar9 != (undefined *)0x0;
        puVar9 = *(undefined **)(puVar9 + 4)) {
      if (puVar9 == &DAT_00b3cac0) {
        bVar5 = 1;
        goto LAB_00570ee4;
      }
    }
    bVar5 = 0;
LAB_00570ee4:
    uVar10 = -(uint)bVar5 & (uint)piVar11;
    if (uVar10 != 0) {
      local_30 = FUN_004da760(uVar10);
      local_30 = local_30 & 0xffff;
    }
  }
  FUN_0045b9a0(&local_30,2);
  if ((short)local_30 != 0) {
    FUN_004da7f0(uVar10,0xbf800000);
  }
  if (DAT_00b05bac != '\0') {
    puVar4 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - iVar2,299,
                   "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
    }
    else {
      piVar11 = (int *)FUN_0046b250(*puVar4);
      uVar12 = (**(code **)(*piVar11 + 0xd4))
                         (*(undefined4 *)((int)puVar4 + 5),299,
                          "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - iVar2,*puVar4,uVar12);
    }
  }
  cVar7 = FUN_0045a170();
  psVar6 = local_2c;
  if (cVar7 != '\0') {
    uVar10 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_2c + 0xffffU < uVar10) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",299);
    }
    *psVar6 = (short)uVar10 - (short)psVar6;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005713f0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  float in_stack_0000002c;
  char in_stack_00000030;
  float fVar10;
  undefined4 auStack_30 [9];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bdd43;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0056bc20(param_1,param_2);
  piVar1 = in_ECX + 6;
  *in_ECX = &PTR_FUN_00a686cc;
  *piVar1 = 0;
  in_ECX[2] = 0;
  in_ECX[7] = 0;
  puVar7 = (undefined4 *)*piVar1;
  local_4 = 1;
  if (puVar7 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar7 + 1);
    if ((LVar4 == 0) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1,uVar3);
    }
    *piVar1 = 0;
  }
  uVar5 = FUN_00439eb0(param_4,0,0,1);
  in_ECX[7] = param_4;
  if (in_stack_00000030 == '\0') {
    uVar5 = FUN_00700900();
  }
  else {
    if (DAT_00b333a0 == 0) {
      puVar7 = (undefined4 *)*piVar1;
      if (puVar7 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar7 + 1);
        if ((LVar4 == 0) && (puVar7 != (undefined4 *)0x0)) {
          (**(code **)*puVar7)(1);
        }
        *piVar1 = 0;
      }
      goto LAB_005714de;
    }
    uVar5 = FUN_00441760(uVar5);
  }
  FUN_0075fa90(uVar5);
LAB_005714de:
  if (*piVar1 != 0) {
    fVar9 = (float10)FUN_00570b40(*piVar1);
    in_ECX[2] = (float)fVar9;
    FUN_00982c30();
    fVar9 = (float10)FUN_0098598a();
    fVar10 = -(float)fVar9;
    uVar5 = 0;
    fVar9 = (float10)FUN_0098598a(0,fVar10);
    FUN_007118e0((float)fVar9,uVar5,fVar10);
    iVar6 = *piVar1;
    *(undefined4 *)(iVar6 + 0x54) = in_stack_00000020;
    *(undefined4 *)(iVar6 + 0x58) = in_stack_00000024;
    *(undefined4 *)(iVar6 + 0x5c) = in_stack_00000028;
    puVar7 = auStack_30;
    puVar8 = (undefined4 *)(*piVar1 + 0x30);
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    pcVar2 = *(code **)(*param_3 + 0x84);
    *(float *)(*piVar1 + 0x60) = ABS(in_stack_0000002c);
    (*pcVar2)(*piVar1,1);
    FUN_00707610();
    FUN_00707370(_DAT_00b33a30,1);
    FUN_00570a30(*piVar1);
    FUN_00715b40(*piVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00571660(uchar *param_1,float param_2,float param_3,int param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  
  iVar6 = 0;
  piVar7 = (int *)(in_ECX + 8);
  do {
    if (param_2 == (float)piVar7[-2]) {
      if ((param_3 == (float)piVar7[-1]) && (*piVar7 == param_4)) {
        if (param_1 != (uchar *)0x0) {
          puVar2 = (undefined4 *)(in_ECX + 0x10 + iVar6 * 0x1c);
          if (*(ushort *)(puVar2 + 1) == 0xffff) {
            pcVar4 = (char *)*puVar2;
            pcVar1 = pcVar4 + 1;
            do {
              cVar3 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar3 != '\0');
            uVar5 = (int)pcVar4 - (int)pcVar1;
          }
          else {
            uVar5 = (uint)*(ushort *)(puVar2 + 1);
          }
          if (uVar5 != 0) {
            __mbsnbcpy(param_1,(uchar *)*puVar2,0x7fe);
            return 1;
          }
        }
        *param_1 = '\0';
        return 1;
      }
    }
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 7;
    if (199 < iVar6) {
      *param_1 = '\0';
      return 0;
    }
  } while( true );
}



undefined4 FUN_00571720(float param_1,float param_2,int param_3)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(in_ECX + 8);
  do {
    if (param_1 == (float)piVar2[-2]) {
      if ((param_2 == (float)piVar2[-1]) && (*piVar2 == param_3)) {
        return *(undefined4 *)(in_ECX + 0x10 + iVar1 * 0x1c);
      }
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 7;
    if (199 < iVar1) {
      return 0;
    }
  } while( true );
}



void FUN_00571790(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bdd68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a68794;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a68784;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00571800(byte param_1)

{
  FUN_00571790();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00571820(void)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  int *piVar4;
  int local_8;
  undefined4 *local_4;
  
  FUN_00977c50(3);
  piVar4 = (int *)(in_ECX + 0xc);
  local_8 = 200;
  do {
    if (*piVar4 != 0) {
      iVar2 = FUN_00582160(0,1);
      (**(code **)(**(int **)(iVar2 + 0x70) + 0x88))(&local_4,*piVar4);
      puVar1 = local_4;
      if (local_4 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(local_4 + 1);
        if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      puVar1 = (undefined4 *)*piVar4;
      if (puVar1 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar1 + 1);
        if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *piVar4 = 0;
      }
      piVar4[-1] = 0;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      FUN_00401f20(piVar4[1]);
      piVar4[1] = 0;
      *(undefined2 *)((int)piVar4 + 10) = 0;
      *(undefined2 *)(piVar4 + 2) = 0;
      piVar4[3] = -0x40800000;
    }
    piVar4 = piVar4 + 7;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_00977c50(2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00571a4e) */
/* WARNING: Removing unreachable block (ram,0x00571a16) */
/* WARNING: Removing unreachable block (ram,0x00571a36) */
/* WARNING: Removing unreachable block (ram,0x00571a66) */

int * FUN_00571900(char *param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float10 fVar8;
  uint local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bdda3;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*param_1 == '\0') ||
     (((iVar5 = FUN_00585c10(1,uVar3), iVar5 == 0 || (*(char *)(iVar5 + 0x31) < '\x01')) &&
      (iVar5 = FUN_00582160(0,1), *(char *)(iVar5 + 0x50) == '\0')))) {
    piVar4 = (int *)0x0;
  }
  else {
    fVar2 = (float)DAT_00b06c50;
    fVar1 = (float)DAT_00b06c4c;
    fVar7 = (float10)FUN_0057d7f0();
    fVar8 = (float10)FUN_0057d7f0();
    uVar6 = 1;
    if (param_4 == 3) {
      uVar6 = 4;
    }
    else if (param_4 == 2) {
      uVar6 = 2;
    }
    local_28 = 0;
    iVar5 = FUN_00401f00(0xdc);
    local_4 = 0;
    if (iVar5 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_0070b780(0);
    }
    local_4 = 0xffffffff;
    local_1c = (float)(DAT_00b12dac._2_2_ >> 8) / 255.0;
    local_18 = (float)(DAT_00b12dac._2_2_ & 0xff) / 255.0;
    local_34 = DAT_00b12dac >> 8 & 0xff;
    local_14 = (float)local_34 / 255.0;
    local_34 = DAT_00b12dac & 0xff;
    local_10 = (float)local_34 / 255.0;
    local_24 = 0;
    local_20 = 0;
    local_1e = 0;
    FUN_004028d0(param_1,0);
    local_4 = 1;
    FUN_00576a30();
    iVar5 = FUN_00575870(0,0,0,&local_24,&local_28,uVar6,&local_1c,1);
    *(undefined4 *)(iVar5 + 0x54) = 0;
    *(undefined4 *)(iVar5 + 0x58) = 0;
    *(undefined4 *)(iVar5 + 0x5c) = 0;
    (**(code **)(*piVar4 + 0x84))(iVar5,1);
    *(ushort *)(piVar4 + 6) = *(ushort *)(piVar4 + 6) & 0xfffe;
    iVar5 = FUN_00582160(0,1);
    if (*(int *)(iVar5 + 0x70) != 0) {
      iVar5 = FUN_00582160(0,1);
      (**(code **)(**(int **)(iVar5 + 0x70) + 0x84))(piVar4,1);
    }
    piVar4[0x15] = (int)((param_2 - 640.0) * (0.75 / (fVar2 / fVar1)));
    piVar4[0x16] = -0x3f600000;
    piVar4[0x17] = (int)(float)((float10)(double)(fVar7 - (float10)param_3) - fVar8 * (float10)0.5);
    FUN_00707610();
    FUN_00707980();
    FUN_00707370(0,1);
    FUN_00401f20(local_24);
  }
  *unaff_FS_OFFSET = local_c;
  return piVar4;
}



int * FUN_00571bd0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return (int *)0x0;
  }
  uVar3 = 0;
  if (*(short *)(param_1 + 0x14) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x10) + (uVar3 & 0xffff) * 4);
      uVar3 = uVar3 + 1;
      if (piVar1 != (int *)0x0) {
        for (puVar2 = (undefined *)(**(code **)(*piVar1 + 4))(); puVar2 != (undefined *)0x0;
            puVar2 = *(undefined **)(puVar2 + 4)) {
          if (puVar2 == &DAT_00b3a6a8) {
            *param_4 = piVar1[7];
            if (param_3 == piVar1[6]) {
              return piVar1;
            }
            break;
          }
        }
      }
    } while (uVar3 < *(ushort *)(param_1 + 0x14));
  }
  return (int *)0x0;
}



void FUN_00571c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bddd3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar1);
  *in_ECX = &PTR_FUN_00a687bc;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  local_4 = 1;
  in_ECX[3] = param_1;
  FUN_004028d0(param_2,0);
  in_ECX[6] = param_3;
  in_ECX[7] = param_4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00571ce0(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bddf8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x10),uVar1);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined2 *)(in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  local_4 = 0xffffffff;
  FUN_00721410();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00571d40(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bde36;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  local_4 = 1;
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  FUN_00401f20(in_ECX[4],uVar2);
  in_ECX[4] = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  in_ECX[6] = 0xbf800000;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00571df0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bde76;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x10),uVar2);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined2 *)(in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  FUN_00401f20(0);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined2 *)(in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
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



void FUN_00571e80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  void *in_ECX;
  undefined2 *puVar4;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bdec4;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(in_ECX,0x1c,200,FUN_00571d40,FUN_00571df0);
  *(undefined4 *)((int)in_ECX + 0x15ec) = 0;
  *(undefined4 *)((int)in_ECX + 0x15e4) = 0;
  *(undefined4 *)((int)in_ECX + 0x15e8) = 0;
  *(undefined ***)((int)in_ECX + 0x15e0) = &PTR_FUN_00a687a4;
  local_4 = 1;
  puVar4 = (undefined2 *)((int)in_ECX + 0x14);
  local_14 = 200;
  do {
    *(undefined4 *)(puVar4 + -6) = 0;
    *(undefined4 *)(puVar4 + -10) = 0;
    *(undefined4 *)(puVar4 + -8) = 0;
    puVar1 = *(undefined4 **)(puVar4 + -4);
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
      *(undefined4 *)(puVar4 + -4) = 0;
    }
    FUN_00401f20(*(undefined4 *)(puVar4 + -2));
    *(undefined4 *)(puVar4 + -2) = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 2) = 0xbf800000;
    puVar4 = puVar4 + 0xe;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00571f70(byte param_1)

{
  FUN_00571ce0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00571f90(char param_1)

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
  if ((DAT_00b3a6a4 == 0) && (param_1 != '\0')) {
    local_10 = FUN_00401f00(0x15f0,uVar1);
    local_4 = 0;
    if (local_10 != 0) {
      DAT_00b3a6a4 = FUN_00571e80();
      *unaff_FS_OFFSET = local_c;
      return;
    }
    DAT_00b3a6a4 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00572010(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  LONG LVar6;
  int iVar7;
  void *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14;
  int *piStack_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009bdf04;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_00571820(uVar5);
  puVar1 = *(undefined4 **)((int)in_ECX + 0x15e4);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      local_4 = local_4 & 0xffffff00;
      FUN_00571790();
      local_4 = 0xffffffff;
      _eh_vector_destructor_iterator_(in_ECX,0x1c,200,FUN_00571df0);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar7 = puVar1[2];
    iVar2 = *(int *)(iVar7 + 0xc);
    puVar1 = (undefined4 *)*puVar1;
    if (2 < *(uint *)(iVar2 + 4)) {
      (**(code **)(**(int **)(iVar2 + 0x1c) + 0x88))(&local_14,iVar2);
      puVar3 = local_14;
      if (((local_14 != (undefined4 *)0x0) &&
          (LVar6 = InterlockedDecrement(local_14 + 1), LVar6 == 0)) && (puVar3 != (undefined4 *)0x0)
         ) {
        (**(code **)*puVar3)(1);
      }
      puVar3 = *(undefined4 **)(iVar7 + 0xc);
      if (puVar3 != (undefined4 *)0x0) {
        LVar6 = InterlockedDecrement(puVar3 + 1);
        if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        *(undefined4 *)(iVar7 + 0xc) = 0;
      }
    }
    piVar4 = *(int **)((int)in_ECX + 0x15e4);
    do {
      piStack_10 = piVar4;
      if (piStack_10 == (int *)0x0) {
        piStack_10 = (int *)0x0;
        break;
      }
      piVar4 = (int *)*piStack_10;
    } while (iVar7 != piStack_10[2]);
    if (piStack_10 != (int *)0x0) {
      iVar7 = FUN_007aa860(&piStack_10);
    }
    if (iVar7 != 0) {
      FUN_00571df0();
      FUN_00401f20(iVar7);
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572170(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  LONG LVar6;
  int iVar7;
  int *piVar8;
  undefined4 *local_8;
  undefined4 *local_4;
  
  cVar3 = FUN_00578f60();
  if (cVar3 == '\0') {
    iVar4 = FUN_00571f90(1);
    piVar8 = (int *)(iVar4 + 0xc);
    iVar7 = 200;
    do {
      if (0.0 < (float)piVar8[3]) {
        local_8 = (undefined4 *)((float)piVar8[3] - _DAT_00b33e9c);
        piVar8[3] = (int)local_8;
        if (((float)local_8 < 0.0 != ((float)local_8 == 0.0)) && (*piVar8 != 0)) {
          iVar5 = FUN_00582160(0,1);
          (**(code **)(**(int **)(iVar5 + 0x70) + 0x88))(&local_4,*piVar8);
          puVar1 = local_4;
          if ((local_4 != (undefined4 *)0x0) &&
             ((LVar6 = InterlockedDecrement(local_4 + 1), LVar6 == 0 &&
              (puVar1 != (undefined4 *)0x0)))) {
            (**(code **)*puVar1)(1);
          }
          puVar1 = (undefined4 *)*piVar8;
          if (puVar1 != (undefined4 *)0x0) {
            LVar6 = InterlockedDecrement(puVar1 + 1);
            if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
              (**(code **)*puVar1)(1);
            }
            *piVar8 = 0;
          }
          piVar8[-1] = 0;
          piVar8[-3] = 0;
          piVar8[-2] = 0;
          FUN_00401f20(piVar8[1]);
          piVar8[1] = 0;
          *(undefined2 *)((int)piVar8 + 10) = 0;
          *(undefined2 *)(piVar8 + 2) = 0;
          piVar8[3] = -0x40800000;
        }
      }
      piVar8 = piVar8 + 7;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    puVar1 = *(undefined4 **)(iVar4 + 0x15e4);
joined_r0x0057228a:
    if (puVar1 != (undefined4 *)0x0) {
      iVar7 = puVar1[2];
      iVar5 = *(int *)(iVar7 + 0xc);
      puVar1 = (undefined4 *)*puVar1;
      if (1 < *(uint *)(iVar5 + 4)) goto LAB_005722f8;
      puVar2 = *(undefined4 **)(iVar4 + 0x15e4);
      do {
        local_4 = puVar2;
        if (local_4 == (undefined4 *)0x0) {
          local_4 = (undefined4 *)0x0;
          break;
        }
        puVar2 = (undefined4 *)*local_4;
      } while (iVar7 != local_4[2]);
      goto joined_r0x005723b8;
    }
  }
  return;
LAB_005722f8:
  if (0.0 < *(float *)(iVar7 + 0x18)) {
    local_4 = (undefined4 *)(*(float *)(iVar7 + 0x18) - _DAT_00b33e9c);
    *(undefined4 **)(iVar7 + 0x18) = local_4;
    if ((float)local_4 < 0.0) {
      (**(code **)(**(int **)(iVar5 + 0x1c) + 0x88))(&local_8,iVar5);
      puVar2 = local_8;
      if (((local_8 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(local_8 + 1), LVar6 == 0)
          ) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      puVar2 = *(undefined4 **)(iVar7 + 0xc);
      if (puVar2 != (undefined4 *)0x0) {
        LVar6 = InterlockedDecrement(puVar2 + 1);
        if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(iVar7 + 0xc) = 0;
      }
      puVar2 = *(undefined4 **)(iVar4 + 0x15e4);
      do {
        local_4 = puVar2;
        if (local_4 == (undefined4 *)0x0) {
          local_4 = (undefined4 *)0x0;
          break;
        }
        puVar2 = (undefined4 *)*local_4;
      } while (iVar7 != local_4[2]);
joined_r0x005723b8:
      if (local_4 != (undefined4 *)0x0) {
        iVar7 = FUN_007aa860(&local_4);
      }
      if (iVar7 != 0) {
        FUN_00571df0();
        FUN_00401f20(iVar7);
      }
    }
  }
  goto joined_r0x0057228a;
}



uint FUN_005723e0(char *param_1,float param_2,float param_3,float param_4,int param_5,float param_6,
                 int param_7)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  LONG LVar10;
  int in_ECX;
  char *pcVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  int *unaff_FS_OFFSET;
  uint local_1c;
  undefined4 local_18;
  char *local_14;
  ushort local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bdf28;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = FUN_00582160(0,1,uVar6);
  if (*(int *)(iVar7 + 0x70) == 0) {
LAB_00572519:
    local_1c = 0;
    goto LAB_0057282b;
  }
  FUN_00977c50(3);
  local_1c = 0;
  bVar5 = false;
  if (param_7 == 0) {
    param_7 = DAT_00b12db4;
  }
  local_14 = (char *)0x0;
  local_10 = 0;
  local_e = 0;
  local_4 = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    bVar5 = true;
  }
  else {
    FUN_004028d0(param_1,0);
    local_18 = 0x4b0;
    param_1 = (char *)0x0;
    FUN_00576a30();
    FUN_00574a80(&local_14,&local_18,&param_1,0,10);
    if (0 < param_5) {
      iVar7 = 0;
      if (local_10 == 0xffff) {
        pcVar11 = local_14;
        do {
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        uVar12 = (int)pcVar11 - (int)(local_14 + 1);
      }
      else {
        uVar12 = (uint)local_10;
      }
      uVar14 = 0;
      if (uVar12 != 0) {
        do {
          if (param_5 + -1 <= iVar7) break;
          if (local_14[-(uint)(local_14 != (char *)0x0) & uVar14] == '\n') {
            iVar7 = iVar7 + 1;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar12);
      }
      if (uVar14 == uVar12) {
        FUN_00401f20(local_14);
        goto LAB_00572519;
      }
      uVar12 = 0;
      cVar2 = local_14[-(uint)(local_14 != (char *)0x0) & uVar14];
      while ((cVar2 != '\n' && (cVar2 != '\0'))) {
        local_14[-(uint)(local_14 != (char *)0x0) & uVar12] = cVar2;
        uVar14 = uVar14 + 1;
        uVar12 = uVar12 + 1;
        cVar2 = local_14[-(uint)(local_14 != (char *)0x0) & uVar14];
      }
      if (local_14[-(uint)(local_14 != (char *)0x0) & uVar14] != '\0') {
        cVar2 = local_14[-(uint)(local_14 != (char *)0x0) & uVar12];
        local_1c = uVar12;
        while (cVar2 != '\0') {
          local_1c = local_1c + 1;
          cVar2 = local_14[-(uint)(local_14 != (char *)0x0) & local_1c];
        }
      }
      local_14[-(uint)(local_14 != (char *)0x0) & uVar12] = '\0';
    }
  }
  iVar7 = 0;
  pfVar15 = (float *)(in_ECX + 8);
  pfVar13 = pfVar15;
  do {
    if (((param_2 == pfVar13[-2]) && (param_3 == pfVar13[-1])) && (*pfVar13 == param_4)) break;
    iVar7 = iVar7 + 1;
    pfVar13 = pfVar13 + 7;
  } while (iVar7 < 200);
  if (iVar7 == 200) {
    iVar7 = 0;
    do {
      if (*pfVar15 == 0.0) break;
      iVar7 = iVar7 + 1;
      pfVar15 = pfVar15 + 7;
    } while (iVar7 < 200);
    if (iVar7 == 200) {
      FUN_004a7a60("Too many unique debug text items. \n");
      FUN_00977c50(2);
      FUN_00401f20(local_14);
      local_1c = 0xffffffff;
      goto LAB_0057282b;
    }
LAB_00572712:
    if (bVar5) {
      puVar3 = *(undefined4 **)(in_ECX + 0xc + iVar7 * 0x1c);
      pfVar13 = (float *)(in_ECX + iVar7 * 0x1c);
      if (puVar3 != (undefined4 *)0x0) {
        LVar10 = InterlockedDecrement(puVar3 + 1);
        if ((LVar10 == 0) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        pfVar13[3] = 0.0;
      }
    }
    else {
      puVar9 = (undefined4 *)FUN_00571900(local_14,param_2,param_3,param_4,param_7);
      puVar3 = *(undefined4 **)(in_ECX + 0xc + iVar7 * 0x1c);
      pfVar13 = (float *)(in_ECX + iVar7 * 0x1c);
      if (puVar3 != puVar9) {
        if (((puVar3 != (undefined4 *)0x0) &&
            (LVar10 = InterlockedDecrement(puVar3 + 1), LVar10 == 0)) &&
           (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        pfVar13[3] = (float)puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar9 + 1);
        }
      }
    }
    if (pfVar13[3] == 0.0) {
      pfVar13[2] = 0.0;
      *pfVar13 = 0.0;
      fVar4 = -1.0;
    }
    else {
      FUN_004028d0(local_14,0);
      FUN_006ff420(local_14);
      *pfVar13 = param_2;
      pfVar13[2] = param_4;
      pfVar13[1] = param_3;
      fVar4 = param_6;
    }
    pfVar13[6] = fVar4;
  }
  else {
    if ((bVar5) || (*(int *)(in_ECX + 0xc + iVar7 * 0x1c) == 0)) {
LAB_00572691:
      piVar1 = (int *)(in_ECX + 0xc + iVar7 * 0x1c);
      if (*(int *)(in_ECX + 0xc + iVar7 * 0x1c) != 0) {
        iVar8 = FUN_00582160(0,1,uVar6);
        (**(code **)(**(int **)(iVar8 + 0x70) + 0x88))(&param_1,*piVar1);
        pcVar11 = param_1;
        if (((param_1 != (char *)0x0) &&
            (LVar10 = InterlockedDecrement((LONG *)(param_1 + 4)), LVar10 == 0)) &&
           (pcVar11 != (char *)0x0)) {
          (*(code *)**(undefined4 **)pcVar11)(1);
        }
        puVar3 = (undefined4 *)*piVar1;
        if (puVar3 != (undefined4 *)0x0) {
          LVar10 = InterlockedDecrement(puVar3 + 1);
          if ((LVar10 == 0) && (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          *piVar1 = 0;
        }
      }
      goto LAB_00572712;
    }
    if ((local_14 == (char *)0x0) ||
       (pcVar11 = *(char **)(in_ECX + iVar7 * 0x1c + 0x10), pcVar11 == (char *)0x0)) {
      iVar8 = (uint)(local_14 == (char *)0x0) * 2 + -1;
    }
    else {
      iVar8 = __stricmp(pcVar11,local_14);
    }
    if (iVar8 != 0) goto LAB_00572691;
  }
  FUN_00977c50(2);
  FUN_00401f20(local_14);
LAB_0057282b:
  *unaff_FS_OFFSET = local_c;
  return local_1c;
}



undefined4 FUN_00572850(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint3 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 unaff_EBP;
  undefined4 *puVar11;
  int *piVar12;
  uint *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined1 *puVar13;
  int **ppiVar14;
  undefined4 uStack_c0;
  int *local_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float fStack_a8;
  undefined1 auStack_80 [36];
  undefined1 auStack_5c [36];
  undefined1 auStack_38 [44];
  uint local_c;
  undefined1 *puStack_8;
  int *local_4;
  
  uVar1 = (uint3)uStack_c0;
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_009bdfbd;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff30;
  *unaff_FS_OFFSET = (uint)&local_c;
  if (param_1 == (int *)0x0) {
LAB_00572af7:
    uVar7 = 0;
  }
  else {
    uStack_c0 = (uint)(uint3)uStack_c0;
    local_b8 = (undefined4 *)FUN_009828c0(uVar2);
    iVar3 = FUN_00571bd0(param_1,param_2,param_3,&local_b8);
    if (iVar3 == 0) {
      piVar6 = (int *)FUN_00401f00(0xe4);
      local_4 = (int *)0x2;
      local_bc = piVar6;
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        FUN_0070b780(0);
        piVar6[0x38] = 0;
        *piVar6 = (int)&PTR_FUN_00a45134;
        *(undefined2 *)(piVar6 + 0x37) = 9;
      }
      local_4 = (int *)0xffffffff;
      FUN_006ff420("FloatingText");
      local_bc = (int *)FUN_00401f00(0x20);
      local_4 = (int *)0x3;
      if (local_bc == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00571c50(piVar6,param_2,param_3,local_b8);
      }
      local_4 = (int *)0xffffffff;
LAB_00572a72:
      local_b8 = (undefined4 *)(*(int *)(iVar3 + 0x1c) + param_3);
      local_ac = 10000;
      local_b4 = 0;
      local_b0 = 0;
      FUN_004028d0(param_2,0);
      local_4 = (int *)&DAT_00000004;
      FUN_00576a30();
      iVar4 = FUN_00575870(0,0,0,&local_b4,&local_ac,2,&DAT_00b25ae0,0);
      if (iVar4 == 0) {
        FUN_00401f20(local_b4);
        goto LAB_00572af7;
      }
      (**(code **)(*piVar6 + 0x84))(iVar4,1);
      FUN_004028d0(unaff_retaddr,0);
      FUN_0070fd30(0x3fc90fdb);
      puVar8 = (undefined4 *)FUN_007100a0(auStack_80,(undefined4 *)(iVar4 + 0x30));
      local_b0 = 0;
      local_ac = 0;
      fStack_a8 = (float)uStack_c0;
      puVar11 = (undefined4 *)(iVar4 + 0x30);
      for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      piVar6[0x15] = 0;
      piVar6[0x16] = 0;
      piVar6[0x17] = (int)fStack_a8;
      FUN_0070fd30(0xbfc90fdb);
      FUN_0070fd80(0x40490fdb);
      puVar13 = auStack_80;
      piVar9 = piVar6 + 0xc;
      FUN_007100a0(auStack_38,auStack_5c);
      piVar9 = (int *)FUN_007100a0(puVar13,piVar9);
      piVar12 = piVar6 + 0xc;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar12 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar12 = piVar12 + 1;
      }
      piVar6[0x18] = 0x3f000000;
      *(int **)(iVar3 + 0xc) = piVar6;
      puVar8 = (undefined4 *)FUN_00401f00(0x1c);
      local_c._0_1_ = 5;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar8 = &PTR_FUN_00a2fd04;
        *(undefined2 *)(puVar8 + 6) = 8;
      }
      *(ushort *)(puVar8 + 6) = *(ushort *)(puVar8 + 6) & 0xffd7 | 0x10;
      local_c._0_1_ = 4;
      FUN_00405680(puVar8);
      puVar8 = (undefined4 *)FUN_00401f00(0x1c);
      local_c._0_1_ = 6;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar8 = &PTR_FUN_00a3d604;
        *(undefined2 *)(puVar8 + 6) = 0xec;
        *(undefined1 *)((int)puVar8 + 0x1a) = 0;
      }
      local_c = CONCAT31(local_c._1_3_,4);
      *(ushort *)(puVar8 + 6) = *(ushort *)(puVar8 + 6) & 0xdfff | 1;
      FUN_00405680(puVar8);
      piVar9 = local_4;
      if ((char)((uint)unaff_EBP >> 0x18) == '\0') {
        FUN_006ff8a0(iVar3);
      }
      (**(code **)(*piVar9 + 0x84))(piVar6,1);
      FUN_00707610();
      FUN_00707980();
      FUN_00707370(0,0);
      local_bc = (int *)FUN_00401f00(0x1c);
      local_4._0_1_ = 7;
      if (local_bc == (int *)0x0) {
        local_bc = (int *)0x0;
      }
      else {
        local_bc = (int *)FUN_00571d40();
      }
      *local_bc = (int)local_b8;
      local_bc[1] = (int)local_b8;
      local_bc[6] = param_4;
      local_4 = (int *)CONCAT31(local_4._1_3_,4);
      FUN_004028d0(param_2,0);
      FUN_0075fa90(piVar6);
      ppiVar14 = &local_bc;
      FUN_00571f90(1,ppiVar14);
      FUN_005b1e20(ppiVar14);
      FUN_00401f20(local_b4);
    }
    else {
      iVar4 = FUN_00571f90(1);
      puVar8 = *(undefined4 **)(iVar4 + 0x15e4);
      iVar4 = DAT_00b3a6a4;
      do {
        if (puVar8 == (undefined4 *)0x0) {
          (**(code **)(*param_1 + 0x88))(&local_b8,*(undefined4 *)(iVar3 + 0xc));
          puVar8 = local_b8;
          if (((local_b8 != (undefined4 *)0x0) &&
              (LVar5 = InterlockedDecrement(local_b8 + 1), LVar5 == 0)) &&
             (puVar8 != (undefined4 *)0x0)) {
            (**(code **)*puVar8)(1);
          }
          local_bc = (int *)FUN_00401f00(0xe4);
          local_4 = (int *)0x1;
          if (local_bc == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)FUN_004ba360();
          }
          local_4 = (int *)0xffffffff;
          FUN_006ff420("FloatingText");
          uStack_c0 = CONCAT13(1,uVar1);
          goto LAB_00572a72;
        }
        if (iVar4 == 0) {
          local_bc = (int *)FUN_00401f00(0x15f0);
          local_4 = (int *)0x0;
          if (local_bc == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00571e80();
          }
          local_4 = (int *)0xffffffff;
          DAT_00b3a6a4 = iVar4;
        }
        piVar6 = puVar8 + 2;
        puVar8 = (undefined4 *)*puVar8;
      } while (*(int *)(*piVar6 + 0xc) != *(int *)(iVar3 + 0xc));
      *(int *)(*piVar6 + 0x18) = param_4;
    }
    uVar7 = 1;
  }
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



void FUN_00572d90(void)

{
  int iVar1;
  
  iVar1 = DAT_00b3a6a4;
  if (DAT_00b3a6a4 != 0) {
    FUN_00572010();
    FUN_00401f20(iVar1);
    DAT_00b3a6a4 = 0;
  }
  return;
}



uint FUN_00572df0(int param_1)

{
  float fVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_00b12dc0 + param_1 * 0x18;
  if (((&DAT_00b12dd0)[param_1 * 6] != 0) && ((&DAT_00b12dc8)[param_1 * 0x18] != '\0')) {
    fVar1 = (float)(&DAT_00b12dd4)[param_1 * 6];
    puVar2 = (undefined *)
             CONCAT22((short)((uint)puVar2 >> 0x10),
                      (ushort)(1.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                      (ushort)(fVar1 == 1.0) << 0xe);
    if (1.0 >= fVar1 && (fVar1 == 1.0) == 0) {
      return CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
  }
  return (uint)puVar2 & 0xffffff00;
}



uint FUN_00572e30(int param_1)

{
  float fVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_00b12dc0 + param_1 * 0x18;
  if (((&DAT_00b12dd0)[param_1 * 6] != 0) && ((&DAT_00b12dc8)[param_1 * 0x18] != '\0')) {
    fVar1 = (float)(&DAT_00b12dd4)[param_1 * 6];
    puVar2 = (undefined *)
             CONCAT22((short)((uint)puVar2 >> 0x10),
                      (ushort)(1.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                      (ushort)(fVar1 == 1.0) << 0xe);
    if (fVar1 == 1.0) {
      return CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
  }
  return (uint)puVar2 & 0xffffff00;
}



int FUN_00572e70(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)(&DAT_00b12dc0 + param_1 * 0x18) >> 8);
  if (((&DAT_00b12dd0)[param_1 * 6] != 0) && ((&DAT_00b12dc8)[param_1 * 0x18] != '\0')) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}



float10 FUN_00572ea0(int param_1)

{
  return (float10)(float)(&DAT_00b12dd4)[param_1 * 6];
}



void FUN_00572ec0(int param_1,char param_2)

{
  int iVar1;
  LONG LVar2;
  undefined4 *unaff_retaddr;
  
  iVar1 = (&DAT_00b12dd0)[param_1 * 6];
  if (iVar1 != 0) {
    if ((param_2 == '\0') && (DAT_00b3a6d4 == '\0')) {
      (&DAT_00b12dc8)[param_1 * 0x18] = 0;
      return;
    }
    (**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(&param_2,iVar1);
    if (((unaff_retaddr != (undefined4 *)0x0) &&
        (LVar2 = InterlockedDecrement(unaff_retaddr + 1), LVar2 == 0)) &&
       (unaff_retaddr != (undefined4 *)0x0)) {
      (**(code **)*unaff_retaddr)(1);
    }
    (&DAT_00b12dd4)[param_1 * 6] = 0;
    (&DAT_00b12dd0)[param_1 * 6] = 0;
    FUN_00440af0(0,0,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572f60(char param_1)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  undefined4 *local_4;
  
  iVar5 = 0;
  do {
    iVar1 = (&DAT_00b12dd0)[iVar5 * 6];
    if (iVar1 != 0) {
      if ((&DAT_00b12dc8)[iVar5 * 0x18] == '\0') {
        if (0.0 < (float)(&DAT_00b12dd4)[iVar5 * 6]) {
          fVar2 = (float)(&DAT_00b12dd4)[iVar5 * 6] -
                  (1.0 / (float)(&DAT_00b12dcc)[iVar5 * 6]) * _DAT_00b33e9c;
          (&DAT_00b12dd4)[iVar5 * 6] = fVar2;
          if (fVar2 < 0.0) {
            (&DAT_00b12dd4)[iVar5 * 6] = 0;
          }
          FUN_004a2a90(iVar1,(&DAT_00b12dd4)[iVar5 * 6]);
        }
        else {
          (**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(&local_4,iVar1);
          puVar3 = local_4;
          if (((local_4 != (undefined4 *)0x0) &&
              (LVar4 = InterlockedDecrement(local_4 + 1), LVar4 == 0)) &&
             (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          (&DAT_00b12dd0)[iVar5 * 6] = 0;
          (&DAT_00b12dd4)[iVar5 * 6] = 0;
        }
      }
      else {
        if ((param_1 != '\0') && (iVar5 == 2)) {
          FUN_005adb40();
        }
        if ((float)(&DAT_00b12dd4)[iVar5 * 6] < 1.0) {
          fVar2 = (1.0 / (float)(&DAT_00b12dcc)[iVar5 * 6]) * _DAT_00b33e9c +
                  (float)(&DAT_00b12dd4)[iVar5 * 6];
          (&DAT_00b12dd4)[iVar5 * 6] = fVar2;
          if (1.0 < fVar2) {
            (&DAT_00b12dd4)[iVar5 * 6] = 0x3f800000;
          }
          FUN_004a2a90((&DAT_00b12dd0)[iVar5 * 6],(&DAT_00b12dd4)[iVar5 * 6]);
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}



void FUN_005730b0(undefined4 param_1,undefined4 param_2,char param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_009be061;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0xdc,uVar2);
  piVar5 = (int *)0x0;
  local_4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar5 = (int *)FUN_0070b780(0);
  }
  local_4 = (int *)0xffffffff;
  if (param_3 == '\0') {
    in_ECX[1] = piVar5;
    FUN_006ff420("FaderNode Above Menus");
  }
  else {
    *in_ECX = piVar5;
    FUN_006ff420("FaderNode Below Menus");
  }
  iVar3 = FUN_00401f00(0x114,uVar2);
  local_4 = (int *)0x1;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00719760();
  }
  local_4 = (int *)0xffffffff;
  FUN_006ff420("FaderNodeLight");
  *(int *)(iVar3 + 0xb8) = *(int *)(iVar3 + 0xb8) + 1;
  *(undefined4 *)(iVar3 + 0xe0) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0xe4) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0xe8) = 0x3f800000;
  FUN_00708e40(piVar5);
  (**(code **)(*piVar5 + 0x84))(iVar3,1);
  puVar4 = (undefined4 *)FUN_00401f00(0x1c);
  local_c = 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar4 = &PTR_FUN_00a2fd04;
    *(undefined2 *)(puVar4 + 6) = 8;
  }
  local_c = -1;
  *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) & 0xffef | 0x28;
  FUN_00405680(puVar4);
  fVar1 = (float)DAT_00b06c4c;
  param_1 = 1.0;
  if ((float)DAT_00b06c50 / fVar1 != 0.75) {
    param_1 = 1.3333334;
  }
  if (fVar1 != 1280.0) {
    param_1 = (1280.0 / fVar1) * param_1;
  }
  piVar5[0x18] = (int)ABS(param_1);
  piVar5[0x15] = 0;
  piVar5[0x16] = unaff_retaddr;
  piVar5[0x17] = 0;
  (**(code **)(*local_4 + 0x84))(piVar5,1);
  *unaff_FS_OFFSET = unaff_retaddr;
  return;
}



void FUN_005732d0(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  LONG LVar10;
  undefined4 *unaff_EBX;
  int *piVar11;
  int *unaff_FS_OFFSET;
  float local_20 [5];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009be0c7;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = param_1 * 0x18;
  if ((&DAT_00b12dd0)[param_1 * 6] != 0) {
    if ((&DAT_00b12dc8)[iVar1] != '\0') goto LAB_00573742;
    FUN_00572ec0(param_1,1);
  }
  pfVar4 = (float *)FUN_00401f00(0x30,uVar3);
  puVar5 = (undefined4 *)FUN_00401f00(0x20);
  puVar6 = (undefined2 *)FUN_00401f00(0xc);
  fVar2 = (float)DAT_00b06c4c * 0.5;
  local_20[0] = (float)DAT_00b06c50 * 0.5;
  *pfVar4 = -fVar2;
  pfVar4[1] = 0.0;
  pfVar4[2] = local_20[0];
  pfVar4[3] = -fVar2;
  pfVar4[4] = 0.0;
  local_20[4] = -local_20[0];
  pfVar4[5] = local_20[4];
  pfVar4[6] = fVar2;
  pfVar4[7] = 0.0;
  pfVar4[8] = local_20[0];
  pfVar4[9] = fVar2;
  pfVar4[10] = 0.0;
  pfVar4[0xb] = local_20[4];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0x3f800000;
  puVar5[4] = 0x3f800000;
  puVar5[5] = 0;
  local_20[2] = 1.0;
  puVar5[6] = 0x3f800000;
  local_20[3] = 1.0;
  puVar5[7] = 0x3f800000;
  *puVar6 = 0;
  puVar6[1] = 1;
  puVar6[2] = 2;
  puVar6[3] = 2;
  puVar6[4] = 1;
  puVar6[5] = 3;
  iVar7 = FUN_00401f00(0xdc);
  local_4 = 0;
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_0070b780(0);
  }
  local_4 = 0xffffffff;
  (&DAT_00b12dd0)[param_1 * 6] = uVar8;
  FUN_006ff420((&PTR_s_LetterBox_dds_00b12dc4)[param_1 * 6]);
  puVar9 = (undefined4 *)FUN_00401f00(0x1c);
  local_4 = 1;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar9 = &PTR_FUN_00a3d604;
    *(undefined2 *)(puVar9 + 6) = 0xec;
    *(undefined1 *)((int)puVar9 + 0x1a) = 0;
  }
  *(ushort *)(puVar9 + 6) = *(ushort *)(puVar9 + 6) | 1;
  local_4 = 0xffffffff;
  FUN_00405680(puVar9);
  iVar7 = FUN_00401f00(0xc0);
  local_4 = 2;
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_007174b0(4,pfVar4,0,0,puVar5,1,0,2,puVar6);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)(&DAT_00b12dd0)[param_1 * 6] + 0x84))(uVar8,1);
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_c = 3;
  FUN_00402e30(local_20,"Data\\Textures\\Menus\\Faders\\%s",
               (&PTR_s_LetterBox_dds_00b12dc4)[param_1 * 6]);
  fVar2 = local_20[0];
  FUN_006ff420(local_20[0]);
  puVar5 = (undefined4 *)FUN_00701e00(fVar2,&DAT_00b256d0,1);
  if (puVar5 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar5 + 1);
  }
  local_c._0_1_ = 4;
  local_4 = FUN_00401f00(0x30);
  local_c._0_1_ = 5;
  if (local_4 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = FUN_007043b0();
  }
  local_c._0_1_ = 4;
  FUN_004057b0(puVar5);
  FUN_00405680(local_4);
  local_4 = FUN_00401f00(0x5c);
  local_c._0_1_ = 6;
  if (local_4 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_007095a0();
  }
  *(undefined4 *)(iVar7 + 0x40) = DAT_00b3fa90;
  *(undefined4 *)(iVar7 + 0x44) = DAT_00b3fa94;
  uVar8 = DAT_00b3fa98;
  *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 1;
  *(undefined4 *)(iVar7 + 0x48) = uVar8;
  *(undefined4 *)(iVar7 + 0x1c) = DAT_00b25ac4;
  *(undefined4 *)(iVar7 + 0x20) = DAT_00b25ac8;
  uVar8 = DAT_00b25acc;
  *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 1;
  local_c = CONCAT31(local_c._1_3_,4);
  *(undefined4 *)(iVar7 + 0x24) = uVar8;
  FUN_00405680(iVar7);
  FUN_0072a0f0(4,pfVar4);
  FUN_004a2a90((&DAT_00b12dd0)[param_1 * 6],0);
  piVar11 = (int *)unaff_EBX[1];
  if ((&DAT_00b12dc0)[iVar1] != '\0') {
    piVar11 = (int *)*unaff_EBX;
  }
  (**(code **)(*piVar11 + 0x84))((&DAT_00b12dd0)[param_1 * 6],1);
  FUN_00707980();
  FUN_00707610();
  FUN_00707370(0,0);
  (&DAT_00b12dcc)[param_1 * 6] = param_2;
  (&DAT_00b12dc8)[iVar1] = 1;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (puVar5 != (undefined4 *)0x0) {
    LVar10 = InterlockedDecrement(puVar5 + 1);
    if (LVar10 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  FUN_00401f20(local_20[2]);
LAB_00573742:
  *unaff_FS_OFFSET = local_c;
  return;
}



byte FUN_00573760(char param_1)

{
  switch(param_1) {
  case '\0':
    return 0x20;
  default:
    return (' ' < param_1) - 1U & 4;
  case '\"':
  case '\'':
    return 8;
  case '<':
  case '{':
    return 1;
  case '=':
    return 0x10;
  case '>':
  case '}':
    return 2;
  }
}



void FUN_00573880(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  puVar2 = (undefined4 *)in_ECX[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    (**(code **)(*in_ECX + 8))(puVar2);
    puVar2 = puVar1;
  }
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_00573950(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(in_ECX + 0x38) != 0) {
    piVar3 = (int *)(in_ECX + 0xc);
    do {
      if (*(int *)(*(int *)(in_ECX + 0x38) + 4) <= iVar4) break;
      puVar1 = (undefined4 *)*piVar3;
      if (puVar1 != (undefined4 *)0x0) {
        LVar2 = InterlockedDecrement(puVar1 + 1);
        if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *piVar3 = 0;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (*(int *)(in_ECX + 0x38) != 0);
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x38));
  *(undefined4 *)(in_ECX + 0x38) = 0;
  return;
}



int FUN_005739c0(int param_1,float *param_2,float *param_3,int param_4,float param_5,char param_6,
                int param_7)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  byte *pbVar6;
  int in_ECX;
  float10 fVar7;
  int local_4;
  
  pfVar4 = param_3;
  pfVar3 = param_2;
  *param_2 = 0.0;
  *param_3 = *(float *)(in_ECX + 0x2c);
  pbVar6 = (byte *)(param_7 + param_1);
  bVar5 = *pbVar6;
  param_2 = (float *)0x0;
  local_4 = 1;
  while ((bVar5 != 0 && (param_4 != 0))) {
    if (0 < param_4) {
      param_4 = param_4 + -1;
    }
    bVar5 = *pbVar6;
    switch(bVar5) {
    case 0x91:
    case 0x92:
      bVar5 = 0x27;
      break;
    case 0x93:
    case 0x94:
      bVar5 = 0x22;
    }
    if (bVar5 < 0x101) {
      if (bVar5 != 9) goto LAB_00573a3f;
      fVar7 = (float10)FUN_00982bfa();
      *pfVar3 = *pfVar3 + (75.0 - (float)fVar7);
    }
    else {
      bVar5 = 0;
LAB_00573a3f:
      iVar1 = *(int *)(in_ECX + 0x38) + 0x128 + (uint)bVar5 * 0x38;
      *pfVar3 = *(float *)(iVar1 + 0x2c) + *(float *)(iVar1 + 0x24) + *(float *)(iVar1 + 0x30) +
                *pfVar3;
    }
    pbVar6 = pbVar6 + 1;
    if (*pbVar6 == 10) {
      if ((float)param_2 < *pfVar3) {
        param_2 = (float *)*pfVar3;
      }
      if (param_6 == '\0') {
        fVar2 = *pfVar4 + *(float *)(in_ECX + 0x2c);
      }
      else {
        fVar2 = **(float **)(in_ECX + 0x38) + *pfVar4;
      }
      *pfVar4 = fVar2;
      if (param_4 == -2) break;
      local_4 = local_4 + 1;
      *pfVar3 = 0.0;
    }
    if (param_5 != 0.0) {
      bVar5 = *pbVar6;
      if (bVar5 == 0) break;
      if (param_4 != 0) {
        switch(bVar5) {
        case 0x91:
        case 0x92:
          bVar5 = 0x27;
          break;
        case 0x93:
        case 0x94:
          bVar5 = 0x22;
        }
        if (bVar5 < 0x101) {
          if (bVar5 != 9) goto LAB_00573b2b;
          fVar7 = (float10)FUN_00982bfa();
          param_3 = (float *)(75.0 - (float)fVar7);
        }
        else {
          bVar5 = 0;
LAB_00573b2b:
          iVar1 = *(int *)(in_ECX + 0x38) + 0x128 + (uint)bVar5 * 0x38;
          param_3 = (float *)(*(float *)(iVar1 + 0x2c) + *(float *)(iVar1 + 0x24) +
                             *(float *)(iVar1 + 0x30));
        }
        if (param_5 < *pfVar3 + (float)param_3) {
          if (param_6 == '\0') {
            fVar2 = *pfVar4 + *(float *)(in_ECX + 0x2c);
          }
          else {
            fVar2 = **(float **)(in_ECX + 0x38) + *pfVar4;
          }
          *pfVar4 = fVar2;
          if (param_4 == -2) break;
          local_4 = local_4 + 1;
          *pfVar3 = 0.0;
        }
      }
    }
    bVar5 = *pbVar6;
  }
  if (*pfVar3 < (float)param_2) {
    *pfVar3 = (float)param_2;
    return local_4;
  }
  return local_4;
}



void FUN_00573c10(undefined4 param_1,float *param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5)

{
  float *pfVar1;
  
  pfVar1 = param_2;
  if ((param_4 & 0xf) == 2) {
    FUN_005739c0(param_1,&param_2,param_3,0xfffffffe,*param_2,0,param_5);
    *pfVar1 = -(float)param_2 * 0.5;
    return;
  }
  if ((param_4 & 0xf) != 4) {
    *param_2 = 0.0;
    return;
  }
  FUN_005739c0(param_1,&param_2,param_3,0xfffffffe,*param_2,0,param_5);
  *pfVar1 = -(float)param_2;
  return;
}



void FUN_00573ca0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be0f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6895c;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a68914;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00573d00(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00401f20(param_1);
  return;
}



undefined4 FUN_00573d20(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  puVar1 = (undefined4 *)(in_ECX + 0x20);
  if (0 < param_1) {
    iVar2 = 0;
    do {
      if (puVar1 == (undefined4 *)0x0) {
        return 0xffffffff;
      }
      puVar1 = (undefined4 *)puVar1[1];
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  return *puVar1;
}



void FUN_00573d50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be128;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6896c;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a68924;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00573db0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be158;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6897c;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a68934;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00573e10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be188;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6898c;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a68944;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573e70(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be1c6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_00401e40(DAT_00b3a6b4);
  _DAT_00b3a6b8 = 0;
  DAT_00b3a6b4 = 0;
  FUN_00573950(uVar1);
  FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0xc),4,8,FUN_007016a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573f10(int param_1,int param_2,int param_3,float *param_4,undefined4 *param_5)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  
  uVar10 = _DAT_00b3a6cc & 1;
  *param_4 = *(float *)(param_1 + 0x2c) + *param_4;
  fVar7 = 0.0;
  if (uVar10 == 0) {
    _DAT_00b3a6cc = _DAT_00b3a6cc | 1;
    DAT_00b3a6c0 = 0;
    DAT_00b3a6c4 = 0;
    DAT_00b3a6c8 = 0xbf800000;
  }
  fVar2 = param_4[1];
  iVar11 = *(int *)(*(int *)(param_3 + 0xb4) + 0x1c);
  fVar3 = *(float *)(param_1 + 0x34);
  fVar4 = param_4[2];
  sVar8 = (short)param_2 * 4;
  iVar9 = param_2 * 0x30;
  *(float *)(iVar11 + iVar9) = *param_4;
  *(float *)(iVar11 + 4 + iVar9) = fVar2;
  *(float *)(iVar11 + 8 + iVar9) = fVar3 + fVar4;
  iVar11 = iVar11 + iVar9;
  fVar2 = param_4[1];
  fVar3 = *(float *)(param_1 + 0x34);
  fVar4 = param_4[2];
  fVar5 = *(float *)(param_1 + 0x28);
  *(float *)(iVar11 + 0xc) = *param_4;
  *(float *)(iVar11 + 0x10) = fVar2;
  *(float *)(iVar11 + 0x14) = (fVar3 + fVar4) - fVar5;
  fVar2 = param_4[1];
  fVar3 = *(float *)(param_1 + 0x34);
  fVar4 = param_4[2];
  *(float *)(iVar11 + 0x18) = *(float *)(param_1 + 0x24) + *param_4;
  *(float *)(iVar11 + 0x1c) = fVar2;
  *(float *)(iVar11 + 0x20) = fVar3 + fVar4;
  fVar2 = param_4[1];
  fVar3 = *(float *)(param_1 + 0x34);
  fVar4 = param_4[2];
  fVar5 = *(float *)(param_1 + 0x28);
  *(float *)(iVar11 + 0x24) = *(float *)(param_1 + 0x24) + *param_4;
  *(float *)(iVar11 + 0x28) = fVar2;
  *(float *)(iVar11 + 0x2c) = (fVar3 + fVar4) - fVar5;
  iVar11 = *(int *)(*(int *)(param_3 + 0xb4) + 0x20);
  if (iVar11 != 0) {
    puVar12 = (undefined4 *)(iVar11 + iVar9);
    *puVar12 = DAT_00b3a6c0;
    puVar12[1] = DAT_00b3a6c4;
    puVar12[2] = DAT_00b3a6c8;
    puVar12[3] = DAT_00b3a6c0;
    puVar12[4] = DAT_00b3a6c4;
    puVar12[5] = DAT_00b3a6c8;
    puVar12[6] = DAT_00b3a6c0;
    puVar12[7] = DAT_00b3a6c4;
    puVar12[8] = DAT_00b3a6c8;
    puVar12[9] = DAT_00b3a6c0;
    puVar12[10] = DAT_00b3a6c4;
    puVar12[0xb] = DAT_00b3a6c8;
  }
  if (param_5 != (undefined4 *)0x0) {
    puVar12 = (undefined4 *)(param_2 * 0x40 + *(int *)(*(int *)(param_3 + 0xb4) + 0x24));
    *puVar12 = *param_5;
    puVar12[1] = param_5[1];
    puVar12[2] = param_5[2];
    puVar12[3] = param_5[3];
    puVar12[4] = *param_5;
    puVar12[5] = param_5[1];
    puVar12[6] = param_5[2];
    puVar12[7] = param_5[3];
    puVar12[8] = *param_5;
    puVar12[9] = param_5[1];
    puVar12[10] = param_5[2];
    puVar12[0xb] = param_5[3];
    puVar12[0xc] = *param_5;
    puVar12[0xd] = param_5[1];
    puVar12[0xe] = param_5[2];
    puVar12[0xf] = param_5[3];
  }
  iVar11 = *(int *)(*(int *)(param_3 + 0xb4) + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar11 + param_2 * 0x20) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar11 + 4 + param_2 * 0x20) = uVar6;
  iVar11 = iVar11 + param_2 * 0x20;
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar11 + 0xc) = uVar6;
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar11 + 0x14) = uVar6;
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar11 + 0x1c) = uVar6;
  psVar1 = (short *)(*(int *)(*(int *)(param_3 + 0xb4) + 0x48) + param_2 * 0xc);
  *psVar1 = sVar8;
  psVar1[1] = sVar8 + 1;
  psVar1[2] = sVar8 + 2;
  psVar1[3] = sVar8 + 2;
  psVar1[4] = sVar8 + 1;
  psVar1[5] = sVar8 + 3;
  if (0.0 < *(float *)(param_1 + 0x24)) {
    fVar7 = *(float *)(param_1 + 0x30);
  }
  *param_4 = *(float *)(param_1 + 0x24) + fVar7 + *param_4;
  return;
}



undefined4 FUN_00574200(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined4 uVar9;
  int in_ECX;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009be206;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = param_1 * 4;
  uVar5 = FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 0xc >> 0x20) != 0) |
                       (uint)((ulonglong)uVar2 * 0xc),uVar4);
  iVar6 = FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 0xc >> 0x20) != 0) |
                       (uint)((ulonglong)uVar2 * 0xc));
  uVar7 = FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar2 * 8));
  pvVar8 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 0x10 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar2 * 0x10));
  iVar12 = 0;
  local_4 = 0;
  if (pvVar8 == (void *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar8,0x10,uVar2,FUN_0047ea50);
  }
  local_4 = 0xffffffff;
  if (3 < (int)uVar2) {
    param_2 = (undefined4 *)((uVar2 - 4 >> 2) + 1);
    iVar12 = (int)param_2 * 4;
    puVar10 = (undefined4 *)((int)pvVar8 + 0x20);
    puVar11 = (undefined4 *)(iVar6 + 0x18);
    do {
      puVar10[-8] = *puVar3;
      puVar10[-7] = puVar3[1];
      puVar10[-6] = puVar3[2];
      puVar10[-5] = puVar3[3];
      puVar11[-6] = 0;
      puVar11[-5] = 0xbf800000;
      puVar11[-4] = 0;
      puVar10[-4] = *puVar3;
      puVar10[-3] = puVar3[1];
      puVar10[-2] = puVar3[2];
      puVar10[-1] = puVar3[3];
      puVar11[-3] = 0;
      puVar11[-2] = 0xbf800000;
      puVar11[-1] = 0;
      *puVar10 = *puVar3;
      puVar10[1] = puVar3[1];
      puVar10[2] = puVar3[2];
      puVar10[3] = puVar3[3];
      *puVar11 = 0;
      puVar11[1] = 0xbf800000;
      puVar11[2] = 0;
      puVar10[4] = *puVar3;
      puVar10[5] = puVar3[1];
      puVar10[6] = puVar3[2];
      puVar10[7] = puVar3[3];
      puVar11[3] = 0;
      puVar11[4] = 0xbf800000;
      puVar11[5] = 0;
      puVar10 = puVar10 + 0x10;
      puVar11 = puVar11 + 0xc;
      param_2 = (undefined4 *)((int)param_2 + -1);
    } while (param_2 != (undefined4 *)0x0);
  }
  if (iVar12 < (int)uVar2) {
    puVar10 = (undefined4 *)(iVar6 + iVar12 * 0xc);
    puVar11 = (undefined4 *)(iVar12 * 0x10 + (int)pvVar8);
    iVar12 = uVar2 - iVar12;
    do {
      *puVar11 = *puVar3;
      puVar11[1] = puVar3[1];
      puVar11[2] = puVar3[2];
      puVar11[3] = puVar3[3];
      *puVar10 = 0;
      puVar10[1] = 0xbf800000;
      puVar10[2] = 0;
      puVar11 = puVar11 + 4;
      puVar10 = puVar10 + 3;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  lVar1 = (ulonglong)(uint)(param_1 * 6) * 2;
  uVar9 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  iVar12 = FUN_00401f00(0xd0);
  local_4 = 1;
  if (iVar12 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a1780(uVar2,uVar5,iVar6,pvVar8,uVar7,1,0,param_1 * 2,uVar9,0,0,0,0);
  }
  local_4 = 0xffffffff;
  FUN_00405680(*(undefined4 *)(in_ECX + 0xc));
  FUN_00707610();
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005744e0(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  short *psVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  short *in_ECX;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int *unaff_FS_OFFSET;
  float fStack_428;
  short *psStack_424;
  int iStack_420;
  int iStack_41c;
  int iStack_418;
  int iStack_414;
  char acStack_410 [1024];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009be24c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_428;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xfffffbc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar12 = 0;
  if ((*in_ECX == 0) && (*(int *)(in_ECX + 2) != 0)) {
    piVar8 = (int *)FUN_00431130(*(int *)(in_ECX + 2),0,0x2800,0x80,uVar7);
    if ((piVar8 == (int *)0x0) || ((char)piVar8[9] == '\0')) {
      FUN_004a7a60("Font file not found: %s. \n",*(undefined4 *)(in_ECX + 2));
      if (piVar8 != (int *)0x0) {
        (**(code **)*piVar8)(1);
      }
      goto LAB_00574a15;
    }
    uVar9 = FUN_00401f00(0x3928);
    *(undefined4 *)(in_ECX + 0x1c) = uVar9;
    uVar9 = (**(code **)(*piVar8 + 0x1c))();
    FUN_0042c8e0(*(undefined4 *)(in_ECX + 0x1c),uVar9);
    (**(code **)*piVar8)(1);
    pfVar3 = *(float **)(in_ECX + 0x1c);
    in_ECX[0x16] = 0;
    in_ECX[0x17] = 0;
    pfVar11 = pfVar3 + 0x54;
    in_ECX[0x18] = 0;
    in_ECX[0x19] = 0;
    iVar13 = 0x40;
    fVar1 = 0.0;
    do {
      fVar2 = (*pfVar3 - pfVar11[3]) + *pfVar11;
      if (fVar2 < *(float *)(in_ECX + 0x16)) {
        fVar2 = *(float *)(in_ECX + 0x16);
      }
      *(float *)(in_ECX + 0x16) = fVar2;
      if (fVar1 <= *pfVar11) {
        fVar1 = *pfVar11;
      }
      fVar4 = pfVar11[3] - *pfVar11;
      if (*(float *)(in_ECX + 0x18) < fVar4) {
        fVar4 = *(float *)(in_ECX + 0x18);
      }
      *(float *)(in_ECX + 0x18) = fVar4;
      fVar5 = (*pfVar3 - pfVar11[0x11]) + pfVar11[0xe];
      if (fVar2 <= fVar5) {
        fVar2 = fVar5;
      }
      *(float *)(in_ECX + 0x16) = fVar2;
      if (fVar1 <= pfVar11[0xe]) {
        fVar1 = pfVar11[0xe];
      }
      fVar5 = pfVar11[0x11] - pfVar11[0xe];
      if (fVar4 < fVar5) {
        fVar5 = fVar4;
      }
      *(float *)(in_ECX + 0x18) = fVar5;
      fVar4 = (*pfVar3 - pfVar11[0x1f]) + pfVar11[0x1c];
      if (fVar2 <= fVar4) {
        fVar2 = fVar4;
      }
      *(float *)(in_ECX + 0x16) = fVar2;
      if (fVar1 <= pfVar11[0x1c]) {
        fVar1 = pfVar11[0x1c];
      }
      fVar4 = pfVar11[0x1f] - pfVar11[0x1c];
      if (fVar5 < fVar4) {
        fVar4 = fVar5;
      }
      *(float *)(in_ECX + 0x18) = fVar4;
      fStack_428 = (*pfVar3 - pfVar11[0x2d]) + pfVar11[0x2a];
      if (fVar2 <= fStack_428) {
        fVar2 = fStack_428;
      }
      *(float *)(in_ECX + 0x16) = fVar2;
      if (fVar1 <= pfVar11[0x2a]) {
        fVar1 = pfVar11[0x2a];
        fStack_428 = fVar1;
      }
      fVar2 = pfVar11[0x2d] - pfVar11[0x2a];
      if (fVar4 < fVar2) {
        fVar2 = fVar4;
      }
      pfVar11 = pfVar11 + 0x38;
      *(float *)(in_ECX + 0x18) = fVar2;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    fVar2 = pfVar3[0x213];
    pfVar3[0x213] = pfVar3[0x216];
    *(float *)(*(int *)(in_ECX + 0x1c) + 0x858) = fVar2;
    *(float *)(*(int *)(in_ECX + 0x1c) + 0x850) = fVar1;
    *(float *)(*(int *)(in_ECX + 0x1c) + 0x85c) = *(float *)(in_ECX + 0x18) + fVar1;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1d14) =
         *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1c6c);
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1d1c) =
         *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1c74);
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1d20) =
         *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1c78);
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1d18) =
         *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1c70);
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1d24) =
         *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1c7c);
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x14c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x158) = 0;
    *(float *)(*(int *)(in_ECX + 0x1c) + 0x150) = fVar1;
    psStack_424 = (short *)(*(float *)(in_ECX + 0x18) + fVar1);
    *(short **)(*(int *)(in_ECX + 0x1c) + 0x15c) = psStack_424;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 300) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x134) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x13c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x144) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x130) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x138) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x140) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x148) = 0;
    iVar13 = *(int *)(*(int *)(in_ECX + 0x1c) + 4);
    if (8 < iVar13) {
      FUN_004a7a60("Too many font textures for %s.\nMax textures is %d yours has %d.\n",
                   *(undefined4 *)(in_ECX + 2),8,iVar13);
      goto LAB_00574a15;
    }
    fStack_428 = 0.0;
    if (0 < iVar13) {
      psStack_424 = in_ECX + 6;
      do {
        _sprintf(acStack_410,"%s\\%s.tex","Data\\Fonts",iVar12 + 0xc + *(int *)(in_ECX + 0x1c));
        iVar13 = 0;
        puVar10 = (undefined4 *)FUN_00431130(acStack_410,0,0x2800,0x80);
        if ((puVar10 == (undefined4 *)0x0) || (*(char *)(puVar10 + 9) == '\0')) {
          FUN_004a7a60("Font file not found: %S. \n",acStack_410);
          if (puVar10 != (undefined4 *)0x0) {
            (**(code **)*puVar10)(1);
          }
          goto LAB_00574a15;
        }
        iStack_420 = 1;
        (*(code *)puVar10[1])(puVar10,&iStack_418,8,&iStack_420,1);
        iStack_41c = FUN_00401f00(0x70);
        uStack_4 = 0;
        if (iStack_41c != 0) {
          iVar13 = FUN_0070e560(iStack_418,iStack_414,&DAT_00b25e00,1,1);
        }
        uStack_4 = 0xffffffff;
        iStack_41c = 1;
        (*(code *)puVar10[1])
                  (puVar10,**(int **)(iVar13 + 0x5c) + *(int *)(iVar13 + 0x50),
                   iStack_418 * iStack_414 * 4,&iStack_41c,1);
        iStack_420 = FUN_00401f00(0x30);
        uStack_4 = 1;
        if (iStack_420 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_00704800(iVar13);
        }
        uStack_4 = 0xffffffff;
        FUN_00405900(1);
        psVar6 = psStack_424;
        FUN_0075fa90(uVar9);
        (**(code **)*puVar10)(1);
        fStack_428 = (float)((int)fStack_428 + 1);
        psStack_424 = psVar6 + 2;
        iVar12 = iVar12 + 0x24;
      } while ((int)fStack_428 < *(int *)(*(int *)(in_ECX + 0x1c) + 4));
    }
  }
  *in_ECX = *in_ECX + 1;
LAB_00574a15:
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00574a80(int *param_1,int *param_2,int *param_3,undefined4 param_4,char param_5)

{
  ushort *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int in_ECX;
  int iVar11;
  uint uVar12;
  int local_24;
  int local_20;
  uint local_1c;
  int local_c;
  
  piVar5 = param_1;
  pcVar6 = (char *)*param_1;
  iVar11 = 0;
  if ((pcVar6 == (char *)0x0) || (*(int *)(in_ECX + 0x38) == 0)) {
    return 0;
  }
  local_1c = 0;
  local_c = 0;
  local_24 = 0;
  local_20 = FUN_009828c0();
  puVar1 = (ushort *)(param_1 + 1);
  param_1 = (int *)0x0;
  if (*puVar1 == 0xffff) {
    pcVar2 = pcVar6 + 1;
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    uVar7 = (int)pcVar6 - (int)pcVar2;
  }
  else {
    uVar7 = (uint)*puVar1;
  }
  iVar4 = *param_3;
  if (*param_2 == 0) {
    *param_2 = 999999;
  }
  uVar12 = 0;
  if (uVar7 != 0) {
    do {
      pcVar6 = (char *)((-(uint)(*piVar5 != 0) & uVar12) + *piVar5);
      cVar3 = *pcVar6;
      if (cVar3 == '\0') break;
      if (cVar3 == '\t') {
        iVar11 = (iVar11 / 0x4b + 1) * 0x4b;
      }
      else if (cVar3 == '\n') {
        *pcVar6 = param_5;
        local_20 = FUN_009828c0();
        if (local_24 <= iVar11) {
          local_24 = iVar11;
        }
        iVar11 = 0;
        param_1 = (int *)((int)param_1 + 1);
        local_1c = 0;
      }
      else {
        if (cVar3 == ' ') {
          local_1c = uVar12;
        }
        switch(cVar3) {
        case -0x6f:
        case -0x6e:
          break;
        case -0x6d:
        case -0x6c:
        }
        iVar8 = FUN_009828c0();
        iVar11 = iVar11 + iVar8;
        if (local_1c == uVar12) {
          local_c = iVar11;
        }
        if (*param_2 < iVar11) {
          if (local_1c == 0) {
            uVar9 = FUN_00404fd0();
            if (*(ushort *)((int)piVar5 + 6) <= uVar9) {
              iVar8 = FUN_00404fd0();
              if (iVar8 + 1U < (uint)*(ushort *)((int)piVar5 + 6)) {
                FUN_00412fa0(&DAT_00a366d0);
                iVar8 = *piVar5;
                iVar10 = FUN_00404fd0();
                uVar9 = iVar10 - 1;
              }
              else {
                FUN_00412fa0(&DAT_00a68a2c);
                iVar8 = *piVar5;
                iVar10 = FUN_00404fd0();
                *(undefined1 *)((-(uint)(iVar8 != 0) & iVar10 - 1U) + *piVar5) = 0;
                iVar8 = *piVar5;
                iVar10 = FUN_00404fd0();
                uVar9 = iVar10 - 2;
              }
              *(undefined1 *)((-(uint)(iVar8 != 0) & uVar9) + *piVar5) = 0;
            }
            for (uVar9 = uVar7 + 2; uVar12 < uVar9; uVar9 = uVar9 - 1) {
              iVar8 = *piVar5;
              *(undefined1 *)((-(uint)(iVar8 != 0) & uVar9) + iVar8) =
                   *(undefined1 *)((-(uint)(iVar8 != 0) & uVar9 - 2) + iVar8);
            }
            *(undefined1 *)((-(uint)(*piVar5 != 0) & uVar12 - 1) + *piVar5) = 0x2d;
            *(char *)((-(uint)(*piVar5 != 0) & uVar12) + *piVar5) = param_5;
            local_20 = FUN_009828c0();
            iVar8 = FUN_009828c0();
            if (local_24 <= iVar11 - iVar8) {
              local_24 = iVar11 - iVar8;
            }
            iVar11 = 0;
            param_1 = (int *)((int)param_1 + 1);
            local_1c = 0;
          }
          else {
            *(char *)((-(uint)(*piVar5 != 0) & local_1c) + *piVar5) = param_5;
            local_20 = FUN_009828c0();
            if (local_24 <= local_c) {
              local_24 = local_c;
            }
            param_1 = (int *)((int)param_1 + 1);
            local_1c = 0;
            iVar11 = iVar11 - local_c;
          }
        }
      }
      if ((0 < iVar4) && (iVar4 <= (int)param_1)) {
        iVar4 = *piVar5;
        cVar3 = *(char *)((-(uint)(iVar4 != 0) & uVar12) + iVar4);
        while (cVar3 != param_5) {
          uVar12 = uVar12 - 1;
          cVar3 = *(char *)((-(uint)(iVar4 != 0) & uVar12) + iVar4);
        }
        *(undefined1 *)((-(uint)(iVar4 != 0) & uVar12) + iVar4) = 0;
        local_20 = FUN_009828c0();
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar7);
  }
  if ((*(char *)*piVar5 != '\0') && (uVar7 <= uVar12)) {
    param_1 = (int *)((int)param_1 + 1);
  }
  if (local_24 <= iVar11) {
    local_24 = iVar11;
  }
  *param_2 = local_24;
  *param_3 = local_20;
  return (int)param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_00574e00(undefined4 *param_1,int param_2,int *param_3,uint param_4,uint param_5,uint *param_6,
            char *param_7,char param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  ulonglong uVar4;
  uint *local_820 [2];
  undefined4 local_818;
  undefined4 *local_814;
  undefined1 local_810 [2048];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be2a2;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_820;
  *unaff_FS_OFFSET = (int)&local_c;
  local_814 = param_1;
  local_820[0] = param_6;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  cVar1 = *(char *)(*param_3 + param_2);
  local_4 = 0;
  local_818 = 1;
  local_810[0] = 0;
  *param_7 = cVar1;
  uVar4 = FUN_00573760(cVar1);
  do {
    iVar2 = (int)(uVar4 >> 0x20);
    uVar3 = (uint)uVar4;
    if ((uVar4 & 0x20) != 0) {
      *local_820[0] = 0x20;
LAB_00574f42:
      FUN_00412fa0(local_810);
      *unaff_FS_OFFSET = local_c;
      return param_1;
    }
    if ((param_4 & uVar3) != 0) {
      *local_820[0] = uVar3;
      *param_3 = *param_3 + 1;
      goto LAB_00574f42;
    }
    if ((param_5 != 0) && ((param_5 & uVar3) == 0)) {
      cVar1 = *(char *)(*param_3 + param_2);
      *param_7 = cVar1;
      uVar3 = FUN_00573760(cVar1);
      *local_820[0] = uVar3;
      goto LAB_00574f42;
    }
    if (((*param_7 != '\n') && (*param_7 != '\r')) && (param_8 != '\0')) {
      local_810[iVar2] = *(undefined1 *)(*param_3 + param_2);
      local_810[iVar2 + 1] = 0;
      if (2000 < iVar2 + 1) {
        FUN_00412fa0(local_810);
        local_810[0] = 0;
      }
    }
    *param_3 = *param_3 + 1;
    cVar1 = *(char *)(*param_3 + param_2);
    *param_7 = cVar1;
    uVar4 = FUN_00573760(cVar1);
  } while( true );
}



void FUN_00574f90(byte param_1)

{
  FUN_00573ca0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_00574fb0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 4);
  iVar4 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    piVar3 = puVar1 + 2;
    puVar1 = (undefined4 *)*puVar1;
    if (*piVar3 != 0) {
      puVar2 = *(undefined4 **)(*piVar3 + 4);
      while (puVar2 != (undefined4 *)0x0) {
        piVar3 = (int *)puVar2[2];
        puVar2 = (undefined4 *)*puVar2;
        if ((piVar3 != (int *)0x0) &&
           ((((char *)piVar3[7] == (char *)0x0 || (*(char *)piVar3[7] == '\0')) &&
            (*piVar3 == param_1)))) {
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  return iVar4;
}



undefined4
FUN_00575000(char *param_1,ushort param_2,float param_3,float param_4,float param_5,char *param_6,
            int *param_7)

{
  char cVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  LONG LVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009be301;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  pfVar5 = (float *)FUN_00401f00();
  puVar6 = (undefined4 *)FUN_00401f00();
  puVar7 = (undefined4 *)FUN_00401f00();
  puVar8 = (undefined4 *)FUN_00401f00();
  local_4._0_1_ = 1;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar8,0x10,4,FUN_0047ea50);
  }
  local_4._0_1_ = 0;
  puVar9 = (undefined2 *)FUN_00401f00();
  iVar15 = (int)param_7;
  pcVar4 = param_6;
  *pfVar5 = param_3;
  pfVar5[1] = param_4;
  pfVar5[2] = param_5 + (float)(int)param_7;
  pfVar5[3] = param_3;
  pfVar5[4] = param_4;
  pfVar5[5] = param_5;
  pfVar5[6] = (float)(int)param_6 + param_3;
  pfVar5[7] = param_4;
  pfVar5[8] = param_5 + (float)(int)param_7;
  pfVar5[9] = (float)(int)param_6 + param_3;
  pfVar5[10] = param_4;
  pfVar5[0xb] = param_5;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0xbf800000;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0xbf800000;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0xbf800000;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0xbf800000;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0x3f800000;
  puVar7[4] = 0x3f800000;
  puVar7[5] = 0;
  puVar7[6] = 0x3f800000;
  puVar7[7] = 0x3f800000;
  param_7 = (int *)0x0;
  while( true ) {
    if (param_2 == 0xffff) {
      param_6 = param_1 + 1;
      pcVar10 = param_1;
      do {
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar11 = (int)pcVar10 - (int)param_6;
    }
    else {
      uVar11 = (uint)param_2;
    }
    if (uVar11 <= param_7) break;
    if (param_1[-(uint)(param_1 != (char *)0x0) & (uint)param_7] == '/') {
      param_1[-(uint)(param_1 != (char *)0x0) & (uint)param_7] = '\\';
    }
    param_7 = (int *)((int)param_7 + 1);
  }
  param_7 = (int *)0x0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    param_7 = (int *)&stack0xffffffb8;
    local_4._0_1_ = 2;
    FUN_004028d0("(BookIMG)",0);
    local_4._0_1_ = 0;
    puVar12 = (undefined4 *)FUN_00591360(&param_6,param_1);
    pcVar10 = param_6;
    param_7 = (int *)*puVar12;
    if ((param_6 != (char *)0x0) &&
       ((LVar13 = InterlockedDecrement((LONG *)(param_6 + 4)), LVar13 == 0 &&
        (pcVar10 != (char *)0x0)))) {
      (*(code *)**(undefined4 **)pcVar10)();
    }
    if (param_7 != (int *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      iVar14 = (**(code **)(*param_7 + 0x50))();
      fVar2 = (float)iVar14;
      if (iVar14 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      puVar7[2] = 0;
      puVar7[3] = ((float)iVar15 * 1.0) / fVar2;
      iVar14 = (**(code **)(*param_7 + 0x4c))();
      fVar2 = (float)iVar14;
      if (iVar14 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      puVar7[4] = ((float)(int)pcVar4 * 1.0) / fVar2;
      puVar7[5] = 0;
      iVar14 = (**(code **)(*param_7 + 0x50))();
      fVar2 = (float)iVar14;
      if (iVar14 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      iVar14 = (**(code **)(*param_7 + 0x4c))();
      fVar3 = (float)iVar14;
      if (iVar14 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      puVar7[6] = ((float)(int)pcVar4 * 1.0) / fVar3;
      puVar7[7] = ((float)iVar15 * 1.0) / fVar2;
    }
  }
  *puVar8 = DAT_00b25ae0;
  puVar8[1] = DAT_00b25ae4;
  puVar8[2] = DAT_00b25ae8;
  puVar8[3] = DAT_00b25aec;
  puVar8[4] = DAT_00b25ae0;
  puVar8[5] = DAT_00b25ae4;
  puVar8[6] = DAT_00b25ae8;
  puVar8[7] = DAT_00b25aec;
  puVar8[8] = DAT_00b25ae0;
  puVar8[9] = DAT_00b25ae4;
  puVar8[10] = DAT_00b25ae8;
  puVar8[0xb] = DAT_00b25aec;
  puVar8[0xc] = DAT_00b25ae0;
  puVar8[0xd] = DAT_00b25ae4;
  puVar8[0xe] = DAT_00b25ae8;
  puVar8[0xf] = DAT_00b25aec;
  *puVar9 = 0;
  puVar9[1] = 1;
  puVar9[2] = 2;
  puVar9[3] = 2;
  puVar9[4] = 1;
  puVar9[5] = 3;
  iVar15 = FUN_00401f00();
  local_4._0_1_ = 3;
  if (iVar15 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_004a1780(4,pfVar5,puVar6,puVar8,puVar7,1,0,2);
  }
  local_4._0_1_ = 0;
  iVar15 = FUN_00401f00();
  local_4._0_1_ = 4;
  if (iVar15 != 0) {
    FUN_007043b0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004057b0();
  FUN_00405870();
  FUN_00405680();
  FUN_00707610();
  FUN_00401f20();
  *unaff_FS_OFFSET = local_c;
  return uVar16;
}



bool FUN_005755d0(char *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  if ((param_1 != (char *)0x0) && ((char *)*in_ECX != (char *)0x0)) {
    iVar1 = __stricmp((char *)*in_ECX,param_1);
    return iVar1 == 0;
  }
  return (char)((param_1 == (char *)0x0) * '\x02') == '\x01';
}



void FUN_00575610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

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
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  FUN_004028d0(&DAT_00a2f7ec,0);
  in_ECX[2] = param_1;
  in_ECX[3] = param_2;
  in_ECX[5] = param_4;
  in_ECX[4] = param_3;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = param_5;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005756a0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[9];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[9] + 4);
    FUN_00401f20(in_ECX[9]);
    in_ECX[9] = iVar1;
  }
  in_ECX[8] = 0;
  FUN_00401f20(*in_ECX);
  *in_ECX = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  return;
}



void FUN_00575720(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x1c));
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined2 *)(in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 0x20) = 0;
  return;
}



void FUN_00575740(byte param_1)

{
  FUN_00573d50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00575760(byte param_1)

{
  FUN_00573db0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00575780(byte param_1)

{
  FUN_00573e10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005757a0(undefined4 param_1,char *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009be366;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(in_ECX + 6,4,8,FUN_007c88a0,FUN_007016a0);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 2) = 0;
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((int)pcVar3 - (int)(param_2 + 1) != 0) {
      pcVar3 = (char *)FUN_00401f00(((int)pcVar3 - (int)(param_2 + 1)) + 1,uVar2);
      *(char **)(in_ECX + 2) = pcVar3;
      do {
        cVar1 = *param_2;
        *pcVar3 = cVar1;
        param_2 = param_2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    *(undefined4 *)(in_ECX + 4) = param_1;
    if (param_3 != '\0') {
      FUN_005744e0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00575870(undefined4 *param_1,float param_2,float param_3,int *param_4,int *param_5,
                undefined4 param_6,undefined4 param_7,int param_8)

{
  char cVar1;
  float fVar2;
  int *piVar3;
  byte bVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int in_ECX;
  uint uVar10;
  float10 fVar11;
  double local_30;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(ushort *)(param_4 + 1) == 0xffff) {
    pcVar5 = (char *)*param_4;
    pcVar8 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar5 - (int)pcVar8;
  }
  else {
    uVar6 = (uint)*(ushort *)(param_4 + 1);
  }
  if ((uVar6 == 0) || (*(int *)(in_ECX + 0x38) == 0)) {
    return 0;
  }
  iVar7 = *param_4;
  local_30 = (double)CONCAT44(local_30._4_4_,(float)*param_5);
  FUN_00573c10(iVar7,&local_30,&local_28,param_6,0);
  local_1c = local_30._0_4_ + (float)param_1;
  local_14 = param_2;
  local_18 = param_3;
  if ((char)param_8 != '\0') {
    fVar2 = (*(float **)(in_ECX + 0x38))[0x214] - **(float **)(in_ECX + 0x38);
    local_14 = param_2 - (fVar2 + fVar2);
  }
  uVar10 = 0;
  uVar6 = FUN_00404fd0();
  if (uVar6 != 0) {
    do {
      if (*(char *)((-(uint)(iVar7 != 0) & uVar10) + iVar7) == '\0') break;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
    if (uVar10 != 0) {
      iVar7 = FUN_00574200(uVar10,param_7);
      local_28 = (double)CONCAT44(param_3,param_1);
      *(undefined4 **)(iVar7 + 0x54) = param_1;
      local_20 = local_14;
      *(float *)(iVar7 + 0x58) = param_3;
      local_10 = 0;
      *(float *)(iVar7 + 0x5c) = local_14;
      local_c = 0;
      local_8 = 0x3f800000;
      *param_5 = 0;
      local_4 = 0x3f800000;
      pcVar8 = (char *)*param_4;
      uVar6 = 0;
      param_1 = (undefined4 *)0x0;
      param_8 = 0;
      if (*pcVar8 != '\0') {
        local_28 = (double)local_1c;
        local_30 = (double)local_1c;
        do {
          bVar4 = pcVar8[-(uint)(pcVar8 != (char *)0x0) & uVar6];
          if (bVar4 == 3) {
            param_1 = (undefined4 *)0x0;
          }
          if (bVar4 == 9) {
            fVar11 = (float10)FUN_00982bfa();
            param_3 = (float)fVar11;
            local_1c = (75.0 - param_3) + (float)local_28;
          }
          else if (bVar4 == 10) {
            param_3 = (float)*param_5;
            FUN_00573c10(pcVar8,&param_3,&param_2,param_6,uVar6 + 1);
            local_1c = param_3;
            local_14 = local_14 - **(float **)(in_ECX + 0x38);
          }
          switch(bVar4) {
          case 0x91:
          case 0x92:
            bVar4 = 0x27;
            break;
          case 0x93:
          case 0x94:
            bVar4 = 0x22;
          }
          if (0x100 < bVar4) {
            bVar4 = 0;
          }
          FUN_00573f10(*(int *)(in_ECX + 0x38) + 0x128 + (uint)bVar4 * 0x38,param_8,iVar7,&local_1c,
                       param_1);
          piVar3 = param_5;
          param_8 = param_8 + 1;
          local_28 = (double)local_1c;
          iVar9 = FUN_009828c0();
          *piVar3 = iVar9;
          pcVar8 = (char *)*param_4;
          if (pcVar8[-(uint)(pcVar8 != (char *)0x0) & uVar6] == '\x02') {
            param_1 = &local_10;
          }
          uVar6 = uVar6 + 1;
        } while (pcVar8[-(uint)(pcVar8 != (char *)0x0) & uVar6] != '\0');
      }
      FUN_0072a0f0(*(undefined2 *)(*(int *)(iVar7 + 0xb4) + 8),
                   *(undefined4 *)(*(int *)(iVar7 + 0xb4) + 0x1c));
      return iVar7;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00575b40(int *param_1,int param_2)

{
  uchar uVar1;
  byte bVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uchar *_Str1;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  int in_ECX;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  int *piVar17;
  char *pcVar18;
  undefined1 auStack_4d4 [2];
  byte bStack_4d2;
  char local_4d1;
  char *local_4d0;
  char *local_4cc;
  int local_4c8;
  char *local_4c4;
  undefined4 local_4c0;
  int local_4bc;
  int local_4b8;
  byte bStack_4b1;
  char *local_4b0;
  char *local_4a8;
  char *local_4a4;
  uchar *local_4a0;
  undefined4 local_49c;
  int local_498;
  char *local_494;
  char *local_490;
  int local_48c;
  int local_488;
  uchar local_484 [128];
  char local_404 [1024];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_4d4;
  iVar15 = 0;
  local_4c8 = param_2;
  if (*param_1 == 0) {
    return;
  }
  if (*(int *)(param_2 + 8) < 1) {
    *(undefined4 *)(param_2 + 8) = 0x7fffffff;
  }
  if (*(int *)(param_2 + 0xc) < 1) {
    *(undefined4 *)(param_2 + 0xc) = 0x7fffffff;
  }
  if (*(int *)(param_2 + 0x14) < 1) {
    *(undefined4 *)(param_2 + 0x14) = 0x7fffffff;
  }
  local_49c = 0;
  if (*(int *)(in_ECX + 8) == 3) {
    local_49c = 6;
  }
  local_4a8 = (char *)0x0;
  local_498 = 0;
  local_48c = 0;
  local_4bc = 0;
  local_4c0 = FUN_009828c0();
  local_4b8 = 1;
  if (*(ushort *)(param_1 + 1) == 0xffff) {
    local_4a4 = (char *)*param_1;
    pcVar8 = local_4a4 + 1;
    do {
      cVar7 = *local_4a4;
      local_4a4 = local_4a4 + 1;
    } while (cVar7 != '\0');
    local_4a4 = local_4a4 + -(int)pcVar8;
  }
  else {
    local_4a4 = (char *)(uint)*(ushort *)(param_1 + 1);
  }
  local_488 = *(int *)(local_4c8 + 0x14);
  pcVar18 = local_4a4 + 4;
  pcVar8 = (char *)thunk_FUN_00401aa0(pcVar18,1);
  local_4c4 = pcVar8;
  _memset(pcVar8,0,(size_t)pcVar18);
  local_490 = pcVar8;
  pcVar8 = (char *)thunk_FUN_00401aa0(pcVar18,1);
  _memset(pcVar8,0,(size_t)pcVar18);
  _sprintf(local_4c4,"%s",*param_1);
  bVar4 = false;
  local_4d0 = (char *)0x0;
  local_4d1 = '\0';
  local_404[0] = '\0';
  local_4cc = (char *)0x0;
  local_4b0 = pcVar18;
  bVar6 = false;
  if (local_4a4 != (char *)0x0) {
    do {
      bVar4 = bVar6;
      local_494 = local_4cc + (int)local_4c4;
      if (local_4cc[(int)local_4c4] == '&') {
        iVar9 = 0;
        if ((local_4cc + 1)[(int)local_4c4] == '\0') {
LAB_00575cd9:
          iVar10 = 0;
        }
        else {
          do {
            iVar10 = iVar9;
            if ((((0x7e < iVar9) || (cVar7 = local_494[iVar9], cVar7 == ';')) || (cVar7 == '\n')) ||
               (cVar7 == *(char *)(local_4c8 + 0x1c))) break;
            local_484[iVar9] = local_494[iVar9 + 1];
            iVar10 = iVar9 + 1;
            iVar5 = iVar9 + 2;
            iVar9 = iVar10;
          } while (local_494[iVar5] != '\0');
          if (iVar10 == 0) goto LAB_00575cd9;
          iVar10 = iVar10 + -1;
        }
        local_484[iVar10] = '\0';
        local_4a0 = local_484;
        do {
          uVar1 = *local_4a0;
          local_4a0 = local_4a0 + 1;
        } while (uVar1 != '\0');
        local_4a0 = local_4a0 + (2 - (int)(local_484 + 1));
        iVar9 = 0;
        iVar10 = (**(code **)(DAT_00b35574 + 4))(local_484);
        for (puVar3 = *(undefined4 **)(DAT_00b3557c + iVar10 * 4); puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)*puVar3) {
          cVar7 = (**(code **)(DAT_00b35574 + 8))(local_484,puVar3[1]);
          if (cVar7 != '\0') {
            iVar9 = puVar3[2];
            break;
          }
        }
        iVar10 = 0;
        do {
          if ((&DAT_00b399d0)[iVar10] == iVar9) break;
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x1d);
        if (iVar10 == 0x1d) {
          iVar10 = 0;
          do {
            if ((undefined4 *)(&DAT_00b399d0)[iVar10] == (undefined4 *)0x0) {
              _Str1 = (uchar *)0x0;
            }
            else {
              _Str1 = *(uchar **)(&DAT_00b399d0)[iVar10];
            }
            iVar9 = __mbscmp(_Str1,local_484);
            if (iVar9 == 0) goto LAB_00575db9;
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x1d);
        }
        else {
LAB_00575db9:
          if (iVar10 < 0x1d) {
            FUN_0057c240(iVar10,local_404);
            pcVar18 = local_404;
            do {
              cVar7 = *pcVar18;
              pcVar18 = pcVar18 + 1;
            } while (cVar7 != '\0');
            uVar14 = (int)pcVar18 - (int)(local_404 + 1);
            if (uVar14 - (int)local_4a0 != 0) {
              local_4b0 = local_4b0 + (uVar14 - (int)local_4a0);
              pcVar8 = (char *)FUN_00401e60(pcVar8,local_4b0);
            }
            uVar11 = 0;
            if (uVar14 != 0) {
              do {
                pcVar8[(int)local_4d0] = local_404[uVar11];
                uVar11 = uVar11 + 1;
                local_4d0 = local_4d0 + 1;
              } while (uVar11 < uVar14);
            }
            local_4cc = local_4cc + (int)(local_4a0 + -1);
            bVar4 = true;
            goto LAB_00575e4a;
          }
        }
        local_4d0[(int)pcVar8] = *local_494;
        local_4d0 = local_4d0 + 1;
        bVar4 = true;
      }
      else {
        local_4d0[(int)pcVar8] = local_4cc[(int)local_4c4];
        local_4d0 = local_4d0 + 1;
      }
LAB_00575e4a:
      local_4cc = local_4cc + 1;
      bVar6 = bVar4;
    } while (local_4cc < local_4a4);
  }
  local_4d0[(int)pcVar8] = '\0';
  if (bVar4) {
    local_4a4 = local_4d0;
    local_490 = (char *)FUN_00401e60(local_4c4,local_4d0 + 4);
    pcVar18 = pcVar8;
    do {
      cVar7 = *pcVar18;
      pcVar18[(int)local_490 - (int)pcVar8] = cVar7;
      pcVar18 = pcVar18 + 1;
    } while (cVar7 != '\0');
  }
  pcVar18 = (char *)0x0;
  *pcVar8 = '\0';
  local_4a0 = (uchar *)0x0;
  if (local_4a4 != (char *)0x0) {
    pcVar16 = &DAT_00000004;
    local_4d0 = &DAT_00000004;
    local_4cc = &DAT_00000006;
    local_4c4 = (char *)0x3;
LAB_00575ed0:
    bVar2 = local_4a0[(int)local_490];
    if (bVar2 != 0) {
      if (bVar2 == 0xb) goto LAB_00576273;
      bStack_4b1 = *(byte *)(local_4c8 + 0x1c);
      if (bVar2 == bStack_4b1) {
        local_4c4 = local_4c4 + 1;
        local_4cc = local_4cc + 1;
        pcVar18[(int)pcVar8] = bStack_4b1;
        pcVar18 = pcVar18 + 1;
        pcVar16 = pcVar16 + 1;
        local_4d0 = pcVar16;
        if (local_4b0 <= pcVar18) {
          pcVar8 = (char *)FUN_00401e60(pcVar8,pcVar16);
          local_4b0 = pcVar16;
        }
        local_4c0 = FUN_009828c0();
        FUN_0067b1e0(iVar15);
        if (local_4bc <= iVar15) {
          local_4bc = iVar15;
        }
        iVar15 = 0;
        local_4b8 = local_4b8 + 1;
        local_4a8 = (char *)0x0;
      }
      else {
        if (bVar2 == 9) {
          iVar15 = (iVar15 / 0x4b + 1) * 0x4b;
          goto LAB_00576273;
        }
        bStack_4d2 = bVar2;
        switch(bVar2) {
        case 0x91:
        case 0x92:
          bStack_4d2 = 0x27;
          break;
        case 0x93:
        case 0x94:
          bStack_4d2 = 0x22;
        }
        local_494 = (char *)((uint)bStack_4d2 * 0x38);
        iVar9 = FUN_009828c0();
        pcVar12 = local_4cc;
        iVar10 = iVar15 + iVar9;
        iVar15 = iVar10;
        if (bStack_4d2 == 0x20) {
          local_4d1 = '\0';
          local_4a8 = pcVar18;
          local_498 = iVar10 - iVar9;
          local_48c = iVar10;
        }
        else if (bStack_4d2 == 0x7e) {
          local_4d1 = '\x01';
          iVar15 = iVar10 - iVar9;
          local_4a8 = pcVar18;
          local_498 = iVar10;
          local_48c = iVar10;
        }
        if (*(int *)(local_4c8 + 8) < iVar15) {
          if (local_4a8 == (char *)0x0) {
            if (local_4b0 <= local_4c4) {
              pcVar8 = (char *)FUN_00401e60(pcVar8,local_4cc);
              local_4b0 = pcVar12;
            }
            (pcVar18 + 1)[(int)pcVar8] = (pcVar18 + -1)[(int)pcVar8];
            (pcVar18 + 2)[(int)pcVar8] = pcVar18[(int)pcVar8];
            pcVar18[(int)pcVar8] = '\n';
            (pcVar18 + -1)[(int)pcVar8] = '-';
            local_4c4 = local_4c4 + 2;
            local_4cc = local_4cc + 2;
            local_4d0 = local_4d0 + 2;
            local_4c0 = FUN_009828c0();
            iVar9 = FUN_009828c0();
            iVar15 = iVar15 - iVar9;
            FUN_0067b1e0(iVar15);
            if (local_4bc <= iVar15) {
              local_4bc = iVar15;
            }
          }
          else {
            if (local_4d1 == '\0') {
              if (local_4a8 == pcVar18) {
                bStack_4d2 = bStack_4b1;
              }
              else {
                pcVar8[(int)local_4a8] = bStack_4b1;
              }
              local_4c0 = FUN_009828c0();
              FUN_0067b1e0(local_498);
              if (local_4bc <= local_498) {
                local_4bc = local_498;
              }
              local_4b8 = local_4b8 + 1;
              iVar15 = iVar15 - local_48c;
              local_4a8 = (char *)0x0;
              goto LAB_00576226;
            }
            local_4b0 = local_4b0 + 4;
            local_4d1 = '\0';
            pcVar8 = (char *)FUN_00401e60(pcVar8,local_4b0);
            pcVar16 = pcVar8 + (int)local_4a8;
            _memmove(pcVar16 + 2,pcVar16,(int)pcVar18 - (int)local_4a8);
            pcVar16[1] = '\n';
            *pcVar16 = '-';
            local_4c4 = local_4c4 + 2;
            local_4cc = local_4cc + 2;
            local_4d0 = local_4d0 + 2;
            local_4c0 = FUN_009828c0();
            iVar9 = FUN_009828c0();
            iVar15 = iVar15 - iVar9;
            FUN_0067b1e0(iVar15);
            if (local_4bc <= iVar15) {
              local_4bc = iVar15;
            }
          }
          pcVar18 = pcVar18 + 2;
          local_4b8 = local_4b8 + 1;
          local_4a8 = (char *)0x0;
          iVar15 = FUN_009828c0();
          iVar9 = FUN_009828c0();
          iVar15 = iVar15 + iVar9;
          pcVar16 = local_4d0;
        }
LAB_00576226:
        if (bStack_4d2 != 0x7e) {
          pcVar18[(int)pcVar8] = bStack_4d2;
          local_4c4 = local_4c4 + 1;
          local_4cc = local_4cc + 1;
          pcVar18 = pcVar18 + 1;
          pcVar16 = pcVar16 + 1;
          local_4d0 = pcVar16;
        }
        if (local_4b0 <= pcVar18) {
          pcVar8 = (char *)FUN_00401e60(pcVar8,pcVar16);
          local_4b0 = pcVar16;
        }
      }
      if (((local_488 < 1) || (local_4b8 <= local_488)) || (pcVar18 == (char *)0x0))
      goto LAB_00576273;
      if (pcVar18[(int)pcVar8] != *(char *)(local_4c8 + 0x1c)) {
        do {
          pcVar18 = pcVar18 + -1;
        } while (pcVar18[(int)pcVar8] != *(char *)(local_4c8 + 0x1c));
      }
      pcVar18[(int)pcVar8] = '\0';
      local_4c0 = FUN_009828c0();
    }
  }
LAB_005762c8:
  if (*pcVar8 != '\0') {
    pcVar16 = pcVar18;
    if (*(int *)(local_4c8 + 0x10) != 0) {
      pcVar16 = (char *)0x0;
      uVar14 = 0;
      pcVar12 = (char *)0x0;
      if (pcVar18 != (char *)0x0) {
        do {
          if ((*(uint *)(local_4c8 + 0x10) <= uVar14) && (uVar14 < *(uint *)(local_4c8 + 0x14))) {
            pcVar8[(int)pcVar16] = pcVar12[(int)pcVar8];
            pcVar16 = pcVar16 + 1;
          }
          if (pcVar12[(int)pcVar8] == '\n') {
            uVar14 = uVar14 + 1;
          }
          pcVar12 = pcVar12 + 1;
        } while (pcVar12 < pcVar18);
      }
      pcVar8[(int)pcVar16] = '\0';
    }
    if (*pcVar8 != '\0') goto LAB_0057634a;
  }
  *pcVar8 = ' ';
  pcVar8[1] = '\0';
  pcVar16 = (char *)0x1;
  local_4b8 = 1;
  local_4c0 = FUN_009828c0();
  iVar15 = FUN_009828c0();
LAB_0057634a:
  if (iVar15 != 0) {
    piVar17 = (int *)(local_4c8 + 0x20);
    iVar9 = *(int *)(local_4c8 + 0x24);
    while (iVar9 != 0) {
      piVar17 = (int *)piVar17[1];
      iVar9 = piVar17[1];
    }
    if (*piVar17 == 0) {
      *piVar17 = iVar15;
    }
    else {
      piVar13 = (int *)FUN_00401f00(8);
      if (piVar13 == (int *)0x0) {
        piVar17[1] = 0;
      }
      else {
        *piVar13 = iVar15;
        piVar13[1] = 0;
        piVar17[1] = (int)piVar13;
      }
    }
  }
  iVar9 = local_4c8;
  if (local_4bc <= iVar15) {
    local_4bc = iVar15;
  }
  pcVar16[(int)pcVar8] = '\0';
  FUN_004028d0(pcVar8,0);
  *(int *)(iVar9 + 8) = local_4bc;
  *(undefined4 *)(iVar9 + 0xc) = local_4c0;
  *(undefined4 *)(iVar9 + 0x10) = 0;
  *(int *)(iVar9 + 0x14) = local_4b8;
  *(char **)(iVar9 + 0x18) = pcVar16;
  FUN_00401e40(local_490);
  FUN_00401e40(pcVar8);
  return;
LAB_00576273:
  local_4a0 = local_4a0 + 1;
  if (local_4a4 <= local_4a0) goto LAB_005762c8;
  goto LAB_00575ed0;
}



void FUN_00576420(void)

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
  puStack_8 = &LAB_009be3c7;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005757a0(1,PTR_s_Data_Fonts_Kingthings_Regular_fn_00b12e1c,1);
  }
  local_4 = 0xffffffff;
  *in_ECX = uVar3;
  iVar2 = FUN_00401f00(0x3c,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005757a0(2,PTR_s_Data_Fonts_Kingthings_Shadowed_f_00b12e24,1);
  }
  local_4 = 0xffffffff;
  in_ECX[1] = uVar3;
  iVar2 = FUN_00401f00(0x3c,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005757a0(3,PTR_s_Data_Fonts_Tahoma_Bold_Small_fnt_00b12e2c,1);
  }
  local_4 = 0xffffffff;
  in_ECX[2] = uVar3;
  iVar2 = FUN_00401f00(0x3c);
  local_4 = 3;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005757a0(4,PTR_s_Data_Fonts_Daedric_Font_fnt_00b12e34,1);
  }
  local_4 = 0xffffffff;
  in_ECX[3] = uVar3;
  iVar2 = FUN_00401f00(0x3c);
  local_4 = 4;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005757a0(5,PTR_s_Data_Fonts_Handwritten_fnt_00b12e3c,1);
  }
  in_ECX[4] = uVar3;
  *(undefined1 *)(in_ECX + 5) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00576570(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(in_ECX + iVar2 * 4);
    if (iVar1 != 0) {
      FUN_00573e70();
      FUN_00401f20(iVar1);
    }
    *(undefined4 *)(in_ECX + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return;
}



void FUN_005765b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be548;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a68a60;
  in_ECX[5] = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x18);
  in_ECX[6] = param_3;
  local_4 = 0;
  in_ECX[7] = param_4;
  in_ECX[0xe] = param_1;
  puVar2 = (undefined4 *)FUN_0046c0d0(uVar1);
  puVar2[2] = param_2;
  *puVar2 = 0;
  puVar2[1] = in_ECX[2];
  if ((undefined4 *)in_ECX[2] == (undefined4 *)0x0) {
    in_ECX[1] = puVar2;
  }
  else {
    *(undefined4 *)in_ECX[2] = puVar2;
  }
  in_ECX[3] = in_ECX[3] + 1;
  in_ECX[2] = puVar2;
  in_ECX[8] = 0x23;
  *(undefined4 **)(param_2 + 0x30) = in_ECX;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00576670(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,int param_5
                ,int param_6,undefined4 param_7,undefined4 param_8,char param_9)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  byte *local_5c;
  undefined2 local_58;
  undefined2 local_56;
  double local_54;
  double local_4c;
  float local_44;
  float local_40 [5];
  undefined4 local_2c;
  int local_28;
  undefined4 local_1c;
  int local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  piVar5 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009be400;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_5c = (byte *)0x0;
  local_58 = 0;
  local_56 = 0;
  FUN_004028d0(*param_1,0);
  local_4 = 0;
  if (*param_3 == 0) {
    *param_3 = 0x7fffffff;
  }
  if (param_5 == 0) {
    param_5 = 0x7fffffff;
  }
  param_3 = (int *)0x0;
  if (*(int *)(in_ECX + 8) == 3) {
    param_3 = (int *)0x6;
  }
  FUN_00575610(*param_2,*piVar5,param_4,param_5,param_7);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00575b40(&local_5c,local_40 + 3);
  FUN_004028d0(local_40[3],0);
  *param_2 = local_2c;
  *piVar5 = local_28;
  iVar9 = 0;
  param_1 = (undefined4 *)0x0;
  if (param_6 == 4) {
    param_1 = (undefined4 *)-local_14[0];
  }
  else if (param_6 == 2) {
    iVar3 = FUN_00573d20(0);
    param_1 = (undefined4 *)-(iVar3 / 2);
  }
  local_40[0] = (float)(int)param_1;
  local_40[2] = 0.0;
  local_40[1] = 0.0;
  if (param_9 != '\0') {
    fVar1 = *(float *)(in_ECX + 0x2c) - **(float **)(in_ECX + 0x38);
    local_40[2] = 0.0 - (fVar1 + fVar1 + (float)(int)param_3);
  }
  iVar3 = FUN_00574200(local_1c,param_8);
  local_4c = 0.0;
  *(undefined4 *)(iVar3 + 0x54) = 0;
  local_44 = local_40[2];
  *(undefined4 *)(iVar3 + 0x58) = 0;
  _param_9 = 0;
  param_1 = (undefined4 *)0x0;
  *(float *)(iVar3 + 0x5c) = local_40[2];
  if (*local_5c != 0) {
    local_54 = (double)local_40[0];
    local_4c = (double)local_40[0];
    pbVar4 = local_5c;
    do {
      bVar2 = *pbVar4;
      if (bVar2 == (byte)param_7) {
        iVar9 = iVar9 + 1;
        local_40[0] = 0.0;
        if (param_6 == 4) {
          iVar7 = 0;
          piVar5 = local_14;
          if (0 < iVar9) {
            do {
              if (piVar5 == (int *)0x0) goto LAB_0057686e;
              piVar5 = (int *)piVar5[1];
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar9);
            if (piVar5 == (int *)0x0) {
LAB_0057686e:
              local_40[0] = 1.0;
              goto LAB_005768c4;
            }
          }
          local_40[0] = (float)-*piVar5;
        }
        else if (param_6 == 2) {
          iVar7 = 0;
          piVar5 = local_14;
          if (iVar9 < 1) {
LAB_005768a4:
            iVar7 = *piVar5;
          }
          else {
            do {
              if (piVar5 == (int *)0x0) goto LAB_005768a8;
              piVar5 = (int *)piVar5[1];
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar9);
            if (piVar5 != (int *)0x0) goto LAB_005768a4;
LAB_005768a8:
            iVar7 = -1;
          }
          local_40[0] = (float)-(iVar7 / 2);
        }
LAB_005768c4:
        local_40[2] = local_40[2] - ((float)(int)param_3 + **(float **)(in_ECX + 0x38));
      }
      else if (bVar2 == 9) {
        fVar10 = (float10)FUN_00982bfa();
        local_40[0] = (75.0 - (float)fVar10) + (float)local_54;
      }
      switch(bVar2) {
      case 0x91:
      case 0x92:
        bVar2 = 0x27;
        break;
      case 0x93:
      case 0x94:
        bVar2 = 0x22;
      }
      if (0x100 < bVar2) {
        bVar2 = 0;
      }
      FUN_00573f10(*(int *)(in_ECX + 0x38) + 0x128 + (uint)bVar2 * 0x38,_param_9,iVar3,local_40,
                   param_8);
      _param_9 = _param_9 + 1;
      local_54 = (double)local_40[0];
      uVar6 = FUN_009828c0();
      *param_2 = uVar6;
      param_1 = (undefined4 *)((int)param_1 + 1);
      uVar8 = -(uint)(local_5c != (byte *)0x0) & (uint)param_1;
      pbVar4 = local_5c + uVar8;
    } while (local_5c[uVar8] != 0);
  }
  pbVar4 = local_5c;
  FUN_0072a0f0(*(undefined2 *)(*(int *)(iVar3 + 0xb4) + 8),
               *(undefined4 *)(*(int *)(iVar3 + 0xb4) + 0x1c));
  local_4 = local_4 & 0xffffff00;
  FUN_005756a0();
  FUN_00401f20(pbVar4);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_00576a30(void)

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
  if (DAT_00b3a6bc == 0) {
    local_10 = FUN_00401f00(0x18,uVar1);
    local_4 = 0;
    if (local_10 != 0) {
      DAT_00b3a6bc = FUN_00576420();
      *unaff_FS_OFFSET = local_c;
      return;
    }
    DAT_00b3a6bc = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00576ab0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  uint uVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  undefined4 *local_40;
  undefined4 *local_3c;
  int local_38;
  int local_34 [10];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009be438;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 4);
  iVar6 = *(int *)(in_ECX + 0x18);
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_00576f08:
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if (iVar6 == 0) {
      if (puVar1 != (undefined4 *)0x0) {
        iVar6 = puVar1[2];
        iVar9 = 0;
        local_34[0] = 0;
        local_34[1] = 0;
        local_34[2] = 0;
        local_34[3] = 0;
        local_34[4] = 0;
        do {
          local_34[iVar9 + 5] = 0;
          iVar5 = FUN_00574fb0();
          if (0 < iVar5) {
            FUN_00576a30();
            iVar5 = FUN_00574200();
            *(undefined4 *)(iVar5 + 0x54) = DAT_00b3f9a8;
            *(undefined4 *)(iVar5 + 0x58) = DAT_00b3f9ac;
            local_34[iVar9 + 5] = iVar5;
            *(undefined4 *)(iVar5 + 0x5c) = DAT_00b3f9b0;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 5);
        local_38 = 0;
        local_40 = (undefined4 *)0x0;
        local_3c = (undefined4 *)0x0;
        local_4 = 0;
        if (iVar6 != 0) {
          puVar1 = *(undefined4 **)(iVar6 + 4);
          while ((puVar1 != (undefined4 *)0x0 && (0 < *(int *)(param_2 + 0x28)))) {
            piVar3 = puVar1 + 2;
            puVar1 = (undefined4 *)*puVar1;
            puVar2 = *(undefined4 **)(*piVar3 + 4);
            puVar4 = local_40;
            while (local_40 = puVar4, puVar2 != (undefined4 *)0x0) {
              piVar3 = (int *)puVar2[2];
              puVar2 = (undefined4 *)*puVar2;
              FUN_00576a30();
              if ((piVar3[7] == 0) || (*(char *)piVar3[7] == '\0')) {
                local_34[*piVar3] = local_34[*piVar3] + 1;
                FUN_00573f10();
              }
              else {
                FUN_004028d0(piVar3[7],0);
                local_4._0_1_ = 1;
                FUN_00576a30();
                local_4 = (uint)local_4._1_3_ << 8;
                iVar6 = FUN_00575000();
                if (iVar6 != 0) {
                  puVar7 = (undefined4 *)FUN_0046c0d0();
                  puVar7[2] = iVar6;
                  *puVar7 = 0;
                  puVar7[1] = local_3c;
                  local_40 = puVar7;
                  if (local_3c != (undefined4 *)0x0) {
                    *local_3c = puVar7;
                    local_40 = puVar4;
                  }
                  local_38 = local_38 + 1;
                  puVar4 = local_40;
                  local_3c = puVar7;
                }
              }
            }
          }
          uVar8 = 0;
          do {
            iVar6 = local_34[uVar8 + 5];
            if (iVar6 != 0) {
              FUN_0072a0f0();
              *(undefined4 *)(iVar6 + 0x54) = DAT_00b3f9a8;
              *(undefined4 *)(iVar6 + 0x58) = DAT_00b3f9ac;
              *(undefined4 *)(iVar6 + 0x5c) = DAT_00b3f9b0;
              FUN_00707610();
              FUN_00707980();
              FUN_00707370();
              (**(code **)(*param_1 + 0x84))();
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 5);
          while (local_38 != 0) {
            puVar1 = (undefined4 *)*local_40;
            if (puVar1 != (undefined4 *)0x0) {
              puVar1[1] = 0;
            }
            iVar6 = local_40[2];
            FUN_00573d00();
            FUN_0072a0f0();
            *(undefined4 *)(iVar6 + 0x54) = DAT_00b3f9a8;
            *(undefined4 *)(iVar6 + 0x58) = DAT_00b3f9ac;
            *(undefined4 *)(iVar6 + 0x5c) = DAT_00b3f9b0;
            FUN_00707610();
            FUN_00707980();
            FUN_00707370();
            (**(code **)(*param_1 + 0x84))();
            local_40 = puVar1;
          }
        }
        local_4 = 2;
        while (local_40 != (undefined4 *)0x0) {
          local_40 = (undefined4 *)*local_40;
          FUN_00573d00();
        }
      }
      goto LAB_00576f08;
    }
    puVar1 = (undefined4 *)*puVar1;
    iVar6 = iVar6 + -1;
  } while( true );
}



void FUN_00576f30(uint param_1,undefined1 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7)

{
  uint uVar1;
  uint *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be46b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  local_4 = 0;
  if ((int)param_1 < 5) {
    param_1 = param_1 & ((int)param_1 < 0) - 1;
  }
  else {
    param_1 = 5;
  }
  *in_ECX = param_1;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  *(undefined1 *)(in_ECX + 1) = param_2;
  in_ECX[4] = param_5;
  in_ECX[5] = param_6;
  in_ECX[6] = param_7;
  FUN_00401f20(in_ECX[7],uVar1);
  in_ECX[7] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  FUN_00576a30();
  uVar1 = FUN_009828c0();
  in_ECX[9] = uVar1;
  FUN_00576a30();
  uVar1 = FUN_009828c0();
  in_ECX[10] = uVar1;
  uVar1 = FUN_009828c0();
  in_ECX[0xb] = uVar1;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00577060(void)

{
  uint uVar1;
  int iVar2;
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
  iVar2 = FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00576f30(*in_ECX,*(undefined1 *)(in_ECX + 1),in_ECX[2],in_ECX[3],in_ECX[4],in_ECX[5]
                         ,in_ECX[6]);
  }
  local_4 = 0xffffffff;
  FUN_004028d0(in_ECX[7],0);
  *(undefined4 *)(iVar2 + 0x24) = in_ECX[9];
  *(undefined4 *)(iVar2 + 0x28) = in_ECX[10];
  *(undefined4 *)(iVar2 + 0x2c) = in_ECX[0xb];
  *(undefined4 *)(iVar2 + 0x34) = in_ECX[0xd];
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



void FUN_00577120(undefined1 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 4) = param_1;
  if ((*(int *)(in_ECX + 0x1c) == 0) || (**(char **)(in_ECX + 0x1c) == '\0')) {
    FUN_00576a30();
    uVar1 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0x24) = uVar1;
    FUN_00576a30();
    uVar1 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0x28) = uVar1;
    FUN_00576a30();
    uVar1 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0x2c) = uVar1;
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  return;
}



void FUN_005771c0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be498;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = in_ECX[3];
  local_4 = 0;
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
    iVar1 = piVar2[2];
    (**(code **)(*in_ECX + 8))(piVar2,uVar3);
    in_ECX[3] = in_ECX[3] + -1;
    if (iVar1 != 0) {
      FUN_00401f20(*(undefined4 *)(iVar1 + 0x1c));
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      *(undefined2 *)(iVar1 + 0x22) = 0;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      FUN_00401f20(iVar1);
    }
    iVar1 = in_ECX[3];
  }
  local_4 = 0xffffffff;
  FUN_00573d50();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00577270(void)

{
  int iVar1;
  
  iVar1 = DAT_00b3a6bc;
  if (DAT_00b3a6bc != 0) {
    FUN_00576570();
    FUN_00401f20(iVar1);
    DAT_00b3a6bc = 0;
  }
  return;
}



int FUN_005772a0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009be4ec;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = in_ECX[4];
  iVar7 = 0;
  if (in_ECX[10] < param_1[9] + iVar6) {
    if ((char)param_1[1] == ' ') {
      FUN_00577120(0);
      param_2 = FUN_00401f00(0x34,uVar5);
      local_4 = 3;
      if (param_2 == 0) {
        uRam00000018 = *(undefined4 *)(&DAT_00b12e08 + *piVar4 * 4);
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_00577710(in_ECX[0xc],piVar4,0,in_ECX[10]);
        *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(&DAT_00b12e08 + *piVar4 * 4);
      }
    }
    else {
      for (iVar6 = in_ECX[2]; iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
        if (*(char *)(*(int *)(iVar6 + 8) + 4) == ' ') {
          param_2 = FUN_00401f00(0x34,uVar5);
          local_4 = 0;
          if (param_2 != 0) {
            iVar7 = FUN_00577710(in_ECX[0xc],piVar4,0,in_ECX[10]);
          }
          local_4 = 0xffffffff;
          *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(&DAT_00b12e08 + *piVar4 * 4);
          iVar6 = FUN_005889b0();
          if (in_ECX[3] != 0) goto LAB_00577384;
          goto LAB_005773c4;
        }
      }
      param_2 = FUN_00401f00(0x34,uVar5);
      local_4 = 1;
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_00577710(in_ECX[0xc],piVar4,0,in_ECX[10]);
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(&DAT_00b12e08 + *piVar4 * 4);
      param_2 = FUN_00401f00(0x38,uVar5);
      local_4 = 2;
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        param_2 = FUN_00576f30(0,0x2d,0x3eeae7d5,0x3e6cf41f,0x3e04816f,0x3f800000,1);
      }
      local_4 = 0xffffffff;
      iVar6 = in_ECX[3];
      for (iVar8 = 0; (iVar6 != 0 && (in_ECX[10] < (*(int *)(param_2 + 0x24) - iVar8) + in_ECX[4]));
          iVar8 = iVar8 + *(int *)(iVar2 + 0x24)) {
        iVar6 = in_ECX[2];
        puVar1 = *(undefined4 **)(iVar6 + 4);
        in_ECX[2] = (int)puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          in_ECX[1] = 0;
        }
        else {
          *puVar1 = 0;
        }
        iVar2 = *(int *)(iVar6 + 8);
        (**(code **)(*in_ECX + 8))(iVar6);
        in_ECX[3] = in_ECX[3] + -1;
        FUN_005772a0(iVar2,1);
        iVar6 = in_ECX[3];
      }
      in_ECX[4] = in_ECX[4] - iVar8;
      FUN_005772a0(param_2,0);
    }
    goto LAB_005773e7;
  }
  if ((param_1[7] == 0) || (*(char *)param_1[7] == '\0')) {
    iVar7 = in_ECX[3];
    bVar3 = false;
    if (iVar7 == 0) {
      in_ECX[6] = *(int *)(&DAT_00b12e08 + *param_1 * 4);
    }
    if ((char)param_2 == '\0') {
      if (((iVar7 != 0) && (*(int **)(in_ECX[2] + 8) != (int *)0x0)) &&
         (*param_1 != **(int **)(in_ECX[2] + 8))) {
        bVar3 = true;
      }
      param_1[0xd] = param_1[0xc] + iVar6;
      in_ECX[4] = in_ECX[4] + param_1[9];
    }
    else {
      if (((iVar7 != 0) && (*(int **)(in_ECX[1] + 8) != (int *)0x0)) &&
         (*param_1 != **(int **)(in_ECX[1] + 8))) {
        bVar3 = true;
      }
      param_1[0xd] = param_1[0xc];
      puVar1 = (undefined4 *)in_ECX[1];
      in_ECX[4] = param_1[9];
      while (puVar1 != (undefined4 *)0x0) {
        iVar6 = puVar1[2];
        puVar1 = (undefined4 *)*puVar1;
        *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x30) + in_ECX[4];
        in_ECX[4] = in_ECX[4] + *(int *)(iVar6 + 0x24);
      }
    }
    if (bVar3) goto LAB_00577635;
  }
  else {
    if ((char)param_2 == '\0') {
      param_1[0xd] = iVar6;
      in_ECX[4] = in_ECX[4] + param_1[9];
    }
    else {
      param_1[0xd] = 0;
      puVar1 = (undefined4 *)in_ECX[1];
      in_ECX[4] = param_1[9];
      while (puVar1 != (undefined4 *)0x0) {
        iVar6 = puVar1[2];
        puVar1 = (undefined4 *)*puVar1;
        *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x30) + in_ECX[4];
        in_ECX[4] = in_ECX[4] + *(int *)(iVar6 + 0x24);
      }
    }
LAB_00577635:
    iVar6 = in_ECX[6];
    if (in_ECX[6] <= param_1[10]) {
      iVar6 = param_1[10];
    }
    in_ECX[6] = iVar6;
  }
  iVar6 = in_ECX[7];
  if (in_ECX[7] <= param_1[0xb]) {
    iVar6 = param_1[0xb];
  }
  in_ECX[7] = iVar6;
  if ((char)param_2 == '\0') {
    FUN_005b1e20(&param_1);
  }
  else {
    FUN_006aa320(&param_1);
  }
  iVar6 = *(int *)(in_ECX[0xc] + 0x10);
  if (iVar6 <= in_ECX[4]) {
    iVar6 = in_ECX[4];
  }
  *(int *)(in_ECX[0xc] + 0x10) = iVar6;
  iVar7 = 0;
LAB_005773e7:
  *unaff_FS_OFFSET = local_c;
  return iVar7;
  while( true ) {
    FUN_005772a0(iVar6,1);
    iVar8 = in_ECX[2];
    puVar1 = *(undefined4 **)(iVar8 + 4);
    in_ECX[2] = (int)puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      in_ECX[1] = 0;
    }
    else {
      *puVar1 = 0;
    }
    iVar6 = *(int *)(iVar8 + 8);
    (**(code **)(*in_ECX + 8))(iVar8);
    in_ECX[3] = in_ECX[3] + -1;
    in_ECX[4] = in_ECX[4] - *(int *)(iVar6 + 0x24);
    if (in_ECX[3] == 0) break;
LAB_00577384:
    if (*(char *)(iVar6 + 4) == ' ') break;
  }
LAB_005773c4:
  if (iVar6 != 0) {
    FUN_00401f20(*(undefined4 *)(iVar6 + 0x1c));
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    *(undefined2 *)(iVar6 + 0x22) = 0;
    *(undefined2 *)(iVar6 + 0x20) = 0;
    FUN_00401f20(iVar6);
  }
  goto LAB_005773e7;
}



void FUN_00577690(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0x3eeae7d5;
  in_ECX[3] = 0x3e6cf41f;
  in_ECX[4] = 0x3e04816f;
  *in_ECX = 0;
  in_ECX[5] = 0x3f800000;
  in_ECX[6] = 1;
  FUN_00401f20(in_ECX[7]);
  in_ECX[7] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  FUN_00577120(0x20);
  return;
}



void FUN_00577710(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be518;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a68a50;
  in_ECX[4] = 0;
  in_ECX[9] = *(undefined4 *)(param_2 + 0x18);
  in_ECX[10] = param_4;
  in_ECX[0xc] = param_1;
  local_4 = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = param_3;
  FUN_005772a0(param_2,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005777a0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be548;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = in_ECX[3];
  local_4 = 0;
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
    iVar1 = piVar2[2];
    (**(code **)(*in_ECX + 8))(piVar2,uVar3);
    in_ECX[3] = in_ECX[3] + -1;
    if (iVar1 != 0) {
      FUN_005771c0();
      FUN_00401f20(iVar1);
    }
    iVar1 = in_ECX[3];
  }
  local_4 = 0xffffffff;
  FUN_00573db0();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00577840(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar5 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009be586;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = 0;
  iVar2 = param_2;
  if (1 < param_2) {
    iVar2 = param_2 - (param_2 + -1);
    iVar4 = *(int *)(in_ECX + 0x20) * (param_2 + -1);
  }
  if ((*(int *)(in_ECX + 0xc) == 0) || (iVar2 != 0)) {
    param_2 = FUN_00401f00(0x34,uVar1);
    piVar5 = param_1;
    local_4 = 0;
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00577710(in_ECX,param_1,iVar4,*(undefined4 *)(in_ECX + 0x18));
    }
    local_4 = 0xffffffff;
  }
  else {
    iVar2 = FUN_005772a0(param_1,0);
  }
  param_1 = (int *)iVar2;
  if ((piVar5 != (int *)0x0) && ((piVar5[7] == 0 || (*(char *)piVar5[7] == '\0')))) {
    FUN_00576a30();
    param_2 = *piVar5;
    FUN_00576a30();
    uVar3 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0x20) = uVar3;
  }
  if (iVar2 == 0) {
    if ((piVar5 != (int *)0x0) &&
       (((char *)piVar5[7] == (char *)0x0 || (*(char *)piVar5[7] == '\0')))) {
      piVar5 = (int *)(in_ECX + 0x24 + *piVar5 * 4);
      *piVar5 = *piVar5 + 1;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x1c) <
        *(int *)(iVar2 + 0x18) + *(int *)(in_ECX + 0x14) + *(int *)(iVar2 + 0x20)) {
      *(undefined4 *)(iVar2 + 0x20) = 0;
      param_1 = (int *)FUN_00401f00(0x3c,uVar1);
      local_4 = 1;
      if (param_1 == (int *)0x0) {
        uRam00000014 = *(undefined4 *)(iVar2 + 0x18);
        *(undefined4 *)(iVar2 + 0x30) = 0;
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_005765b0(*(undefined4 *)(in_ECX + 0x38),iVar2,*(undefined4 *)(in_ECX + 0x18),
                             *(undefined4 *)(in_ECX + 0x1c));
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar2 + 0x18);
        *(int *)(iVar2 + 0x30) = iVar4;
      }
    }
    else {
      FUN_005b1e20(&param_1);
      *(int *)(in_ECX + 0x14) =
           *(int *)(in_ECX + 0x14) + *(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x20);
      iVar4 = in_ECX;
    }
    if (((char *)piVar5[7] == (char *)0x0) || (*(char *)piVar5[7] == '\0')) {
      piVar5 = (int *)(iVar4 + 0x24 + *piVar5 * 4);
      *piVar5 = *piVar5 + 1;
    }
    if (iVar4 != in_ECX) goto LAB_005779ed;
  }
  iVar4 = 0;
LAB_005779ed:
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



void FUN_00577a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be5b8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a68a60;
  in_ECX[6] = param_3;
  in_ECX[7] = param_4;
  in_ECX[0xe] = param_1;
  in_ECX[5] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  local_4 = 0;
  in_ECX[8] = 0x23;
  FUN_00577840(param_2,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00577aa0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be5e8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = in_ECX[3];
  local_4 = 0;
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
    iVar1 = piVar2[2];
    (**(code **)(*in_ECX + 8))(piVar2,uVar3);
    in_ECX[3] = in_ECX[3] + -1;
    if (iVar1 != 0) {
      FUN_005777a0();
      FUN_00401f20(iVar1);
    }
    iVar1 = in_ECX[3];
  }
  local_4 = 0xffffffff;
  FUN_00573e10();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00577b40(undefined4 param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c298b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((in_ECX[3] == 0) || (param_3 != '\0')) {
    iVar2 = FUN_00401f00(0x3c,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00577a10(in_ECX,param_1,in_ECX[4],in_ECX[5]);
    }
    local_4 = 0xffffffff;
  }
  else {
    iVar2 = FUN_00577840(param_1,param_2);
  }
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)(**(code **)(*in_ECX + 4))();
    puVar3[2] = iVar2;
    *puVar3 = 0;
    puVar3[1] = in_ECX[2];
    if ((undefined4 *)in_ECX[2] == (undefined4 *)0x0) {
      in_ECX[1] = (int)puVar3;
    }
    else {
      *(undefined4 *)in_ECX[2] = puVar3;
    }
    in_ECX[3] = in_ECX[3] + 1;
    in_ECX[2] = (int)puVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_00577c10(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  char *_Dst;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  int iVar15;
  int *unaff_FS_OFFSET;
  uint local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  char *local_e8;
  ushort local_e4;
  undefined2 local_e2;
  int local_e0;
  char *local_dc;
  uint local_d8;
  undefined4 *local_d4;
  char *local_d0;
  ushort local_cc;
  undefined2 local_ca;
  char *local_c8;
  ushort local_c4;
  undefined2 local_c2;
  undefined4 *local_c0;
  char *local_bc;
  ushort local_b8;
  undefined2 local_b6;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined2 local_9a;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  undefined4 local_80;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined4 local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  int local_50;
  uint local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009be67a;
  local_14 = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xfffffef8;
  *unaff_FS_OFFSET = (int)&local_14;
  if (*(ushort *)(param_1 + 1) == 0xffff) {
    pcVar7 = (char *)*param_1;
    pcVar14 = pcVar7 + 1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar8 = (int)pcVar7 - (int)pcVar14;
  }
  else {
    uVar8 = (uint)*(ushort *)(param_1 + 1);
  }
  _Dst = (char *)thunk_FUN_00401aa0(uVar8 + 1,1);
  local_dc = _Dst;
  _memset(_Dst,0,uVar8 + 1);
  pcVar14 = (char *)*param_1;
  pcVar7 = _Dst;
  do {
    cVar1 = *pcVar14;
    *pcVar7 = cVar1;
    pcVar14 = pcVar14 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_f0 = 0;
  local_f8 = 0;
  local_ec = local_ec & 0xffffff00;
  local_bc = (char *)0x0;
  local_b8 = 0;
  local_b6 = 0;
  local_c8 = (char *)0x0;
  local_c4 = 0;
  local_c2 = 0;
  local_d0 = (char *)0x0;
  local_cc = 0;
  local_ca = 0;
  local_e8 = (char *)0x0;
  local_e4 = 0;
  local_e2 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_9a = 0;
  local_b4 = 0x3eeae7d5;
  local_b0 = 0x3e6cf41f;
  local_ac = 0x3e04816f;
  local_a8 = 0x3f800000;
  local_c._0_1_ = 4;
  local_c._1_3_ = 0;
  FUN_00576f30(0,0x20,0x3eeae7d5,0x3e6cf41f,0x3e04816f,0x3f800000,1);
  local_c = CONCAT31(local_c._1_3_,5);
  bVar5 = false;
  local_f4 = 0;
  local_d8 = local_d8 & 0xffffff00;
  local_d4 = (undefined4 *)0x0;
  FUN_00574e00(&local_b4,_Dst,&local_f0,0,4,&local_f8,&local_ec,0);
  FUN_00401f20(local_b4,uVar6);
  if (local_f8 == 1) {
    local_d4 = (undefined4 *)FUN_00401f00(0x1c);
    if (local_d4 == (undefined4 *)0x0) {
      local_d4 = (undefined4 *)0x0;
    }
    else {
      uVar10 = *(undefined4 *)(param_2 + 0x24);
      uVar2 = *(undefined4 *)(param_2 + 0x20);
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
      local_d4[3] = 0;
      local_d4[1] = 0;
      local_d4[2] = 0;
      *local_d4 = &PTR_FUN_00a68a70;
      local_d4[4] = uVar3;
      local_d4[5] = uVar2;
      local_d4[6] = uVar10;
    }
    local_f0 = 0;
    local_c0 = local_d4;
    while( true ) {
      puVar9 = (undefined4 *)FUN_00574e00(&local_80,local_dc,&local_f0,1,0,&local_f8,&local_ec,1);
      local_c._0_1_ = 6;
      FUN_004028d0(*puVar9,0);
      local_c = CONCAT31(local_c._1_3_,5);
      FUN_00401f20(local_80);
      pcVar14 = local_bc;
      local_80 = 0;
      local_7a = 0;
      local_7c = 0;
      if (local_bc != (char *)0x0) {
        if (bVar5) {
          bVar5 = false;
          local_4c = local_4c & 0xffffff00;
          iVar11 = local_f4;
          uVar6 = local_d8;
          uVar10 = FUN_00577060(local_f4,local_d8);
          FUN_00577b40(uVar10,iVar11,uVar6);
          local_f4 = 0;
          local_d8 = local_d8 & 0xffffff00;
          FUN_004028d0(&DAT_00a2f7ec,0);
        }
        FUN_00412fa0(pcVar14);
        uVar6 = 0;
        while( true ) {
          if (local_b8 == 0xffff) {
            pcVar7 = pcVar14;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(pcVar14 + 1);
          }
          else {
            uVar8 = (uint)local_b8;
          }
          if (uVar8 <= uVar6) break;
          FUN_00577120(pcVar14[uVar6]);
          iVar11 = local_f4;
          uVar8 = local_d8;
          uVar10 = FUN_00577060(local_f4,local_d8);
          FUN_00577b40(uVar10,iVar11,uVar8);
          local_f4 = 0;
          local_d8 = local_d8 & 0xffffff00;
          uVar6 = uVar6 + 1;
        }
      }
      if ((local_f8 & 0x20) != 0) break;
      puVar9 = (undefined4 *)FUN_00574e00(&local_78,local_dc,&local_f0,6,0,&local_f8,&local_ec,1);
      local_c._0_1_ = 7;
      FUN_004028d0(*puVar9,0);
      local_c = CONCAT31(local_c._1_3_,5);
      FUN_00401f20(local_78);
      local_78 = 0;
      local_72 = 0;
      local_74 = 0;
      uVar6 = 0;
      while( true ) {
        if (local_c4 == 0xffff) {
          pcVar14 = local_c8;
          do {
            cVar1 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar14 - (int)(local_c8 + 1);
        }
        else {
          uVar8 = (uint)local_c4;
        }
        if (uVar8 <= uVar6) break;
        uVar8 = -(uint)(local_c8 != (char *)0x0) & uVar6;
        pcVar14 = local_c8 + uVar8;
        iVar11 = _toupper((int)local_c8[uVar8]);
        *pcVar14 = (char)iVar11;
        uVar6 = uVar6 + 1;
      }
      if ((local_f8 & 0x20) != 0) break;
      if ((local_f8 & 4) != 0) {
        do {
          FUN_00574e00(&local_90,local_dc,&local_f0,0,4,&local_f8,&local_ec,0);
          FUN_00401f20(local_90);
          local_90 = 0;
          local_8a = 0;
          local_8c = 0;
          if ((local_f8 & 0x22) != 0) break;
          puVar9 = (undefined4 *)
                   FUN_00574e00(&local_68,local_dc,&local_f0,0x16,0,&local_f8,&local_ec,1);
          local_c._0_1_ = 8;
          FUN_004028d0(*puVar9,0);
          local_c = CONCAT31(local_c._1_3_,5);
          FUN_00401f20(local_68);
          local_68 = 0;
          local_62 = 0;
          local_64 = 0;
          uVar6 = 0;
          while( true ) {
            if (local_cc == 0xffff) {
              pcVar14 = local_d0;
              do {
                cVar1 = *pcVar14;
                pcVar14 = pcVar14 + 1;
              } while (cVar1 != '\0');
              uVar8 = (int)pcVar14 - (int)(local_d0 + 1);
            }
            else {
              uVar8 = (uint)local_cc;
            }
            if (uVar8 <= uVar6) break;
            uVar8 = -(uint)(local_d0 != (char *)0x0) & uVar6;
            pcVar14 = local_d0 + uVar8;
            iVar11 = _toupper((int)local_d0[uVar8]);
            *pcVar14 = (char)iVar11;
            uVar6 = uVar6 + 1;
          }
          if ((local_f8 & 0x22) != 0) break;
          if ((local_f8 & 4) == 0) {
            FUN_00574e00(&local_70,local_dc,&local_f0,0,4,&local_f8,&local_ec,0);
            FUN_00401f20(local_70);
            pcVar14 = local_dc;
            local_70 = 0;
            local_6a = 0;
            local_6c = 0;
            if ((local_f8 & 0x22) != 0) break;
            if (local_f8 == 8) {
              local_f0 = local_f0 + 1;
              puVar9 = (undefined4 *)
                       FUN_00574e00(&local_88,local_dc,&local_f0,10,0,&local_f8,&local_ec,1);
              local_c._0_1_ = 9;
              FUN_004028d0(*puVar9,0);
              local_c = CONCAT31(local_c._1_3_,5);
              FUN_00401f20(local_88);
              pcVar14 = pcVar14 + local_f0;
              local_f0 = local_f0 + 1;
              local_ec = CONCAT31(local_ec._1_3_,*pcVar14);
              local_88 = 0;
              local_82 = 0;
              local_84 = 0;
              local_f8 = FUN_00573760(local_ec);
            }
            else {
              puVar9 = (undefined4 *)
                       FUN_00574e00(&local_b4,local_dc,&local_f0,6,0,&local_f8,&local_ec,1);
              local_c._0_1_ = 10;
              FUN_004028d0(*puVar9,0);
              local_c = CONCAT31(local_c._1_3_,5);
              FUN_00401f20(local_b4);
              local_b4 = 0;
              local_b0 = 0;
              uVar6 = 0;
              while( true ) {
                if (local_e4 == 0xffff) {
                  pcVar14 = local_e8;
                  do {
                    cVar1 = *pcVar14;
                    pcVar14 = pcVar14 + 1;
                  } while (cVar1 != '\0');
                  uVar8 = (int)pcVar14 - (int)(local_e8 + 1);
                }
                else {
                  uVar8 = (uint)local_e4;
                }
                if (uVar8 <= uVar6) break;
                uVar8 = -(uint)(local_e8 != (char *)0x0) & uVar6;
                pcVar14 = local_e8 + uVar8;
                iVar11 = _toupper((int)local_e8[uVar8]);
                *pcVar14 = (char)iVar11;
                uVar6 = uVar6 + 1;
              }
            }
          }
          else {
            FUN_004028d0(&DAT_00a473ac,0);
          }
          pcVar14 = local_c8;
          if ((local_c8 == (char *)0x0) ||
             (iVar11 = __stricmp(local_c8,"IMG"), pcVar7 = local_d0, iVar11 != 0)) {
            pcVar7 = local_d0;
            if (bVar5) {
              bVar5 = false;
              local_4c = local_4c & 0xffffff00;
              iVar11 = local_f4;
              uVar6 = local_d8;
              uVar10 = FUN_00577060(local_f4,local_d8);
              FUN_00577b40(uVar10,iVar11,uVar6);
              local_f4 = 0;
              local_d8 = local_d8 & 0xffffff00;
              FUN_004028d0(&DAT_00a2f7ec,0);
              pcVar7 = local_d0;
            }
          }
          else {
            bVar5 = true;
            if (local_d0 != (char *)0x0) {
              iVar11 = __stricmp(local_d0,(char *)&PTR_LAB_00a68af0);
              if (iVar11 == 0) {
                FUN_004028d0(local_e8,0);
              }
              else {
                iVar11 = __stricmp(pcVar7,"WIDTH");
                if (iVar11 == 0) {
                  FID_conflict__sscanf(local_e8,"%i",local_2c);
                }
                else {
                  iVar11 = __stricmp(pcVar7,"HEIGHT");
                  if (iVar11 == 0) {
                    FID_conflict__sscanf(local_e8,"%i",local_28);
                    local_24 = 0;
                  }
                }
              }
            }
          }
          if (pcVar14 != (char *)0x0) {
            iVar11 = __stricmp(pcVar14,"DIV");
            if (iVar11 == 0) {
              local_f4 = local_f4 + 1;
              if (((pcVar7 != (char *)0x0) &&
                  (iVar11 = __stricmp(pcVar7,"ALIGN"), pcVar14 = local_e8, iVar11 == 0)) &&
                 (local_e8 != (char *)0x0)) {
                iVar11 = __stricmp(local_e8,"LEFT");
                if (iVar11 == 0) {
                  local_38 = 1;
                }
                else {
                  iVar11 = __stricmp(pcVar14,"CENTER");
                  if (iVar11 == 0) {
                    local_38 = 2;
                  }
                  else {
                    iVar11 = __stricmp(pcVar14,"RIGHT");
                    if (iVar11 == 0) {
                      local_38 = 4;
                    }
                  }
                }
              }
            }
            else {
              iVar11 = __stricmp(pcVar14,"FONT");
              if ((iVar11 == 0) && (pcVar7 != (char *)0x0)) {
                iVar11 = __stricmp(pcVar7,"FACE");
                if (iVar11 == 0) {
                  iVar11 = 0;
                  do {
                    iVar12 = __stricmp(local_e8,*(char **)(*(int *)(local_e0 + iVar11 * 4) + 4));
                    if (iVar12 == 0) {
LAB_00578529:
                      local_50 = iVar11;
                      FUN_00577120(local_4c);
                      break;
                    }
                    iVar12 = iVar11 + 1;
                    lVar13 = _atol(local_e8);
                    if (iVar12 == lVar13) goto LAB_00578529;
                    iVar11 = iVar12;
                  } while (iVar12 < 5);
                }
                iVar11 = __stricmp(local_d0,"COLOR");
                pcVar14 = local_e8;
                if (iVar11 == 0) {
                  if (local_e4 == 0xffff) {
                    pcVar7 = local_e8;
                    do {
                      cVar1 = *pcVar7;
                      pcVar7 = pcVar7 + 1;
                    } while (cVar1 != '\0');
                    uVar6 = (int)pcVar7 - (int)(local_e8 + 1);
                  }
                  else {
                    uVar6 = (uint)local_e4;
                  }
                  if (uVar6 == 6) {
                    iVar11 = _toupper((int)*local_e8);
                    if (iVar11 < 0x41) {
                      iVar11 = _toupper((int)*pcVar14);
                      iVar11 = iVar11 + -0x30;
                    }
                    else {
                      iVar11 = _toupper((int)*pcVar14);
                      iVar11 = iVar11 + -0x37;
                    }
                    pcVar14 = local_e8;
                    iVar12 = _toupper((int)local_e8[1]);
                    if (iVar12 < 0x41) {
                      iVar12 = _toupper((int)pcVar14[1]);
                      iVar12 = iVar12 + -0x30;
                    }
                    else {
                      iVar12 = _toupper((int)pcVar14[1]);
                      iVar12 = iVar12 + -0x37;
                    }
                    local_a4 = iVar11 * 0x10 + iVar12;
                    local_a4 = ((int)local_a4 < 1) - 1 & local_a4;
                    if (0xfe < (int)local_a4) {
                      local_a4 = 0xff;
                    }
                    iVar11 = _toupper((int)pcVar14[2]);
                    if (iVar11 < 0x41) {
                      iVar11 = _toupper((int)pcVar14[2]);
                      iVar11 = iVar11 + -0x30;
                    }
                    else {
                      iVar11 = _toupper((int)pcVar14[2]);
                      iVar11 = iVar11 + -0x37;
                    }
                    iVar12 = _toupper((int)pcVar14[3]);
                    if (iVar12 < 0x41) {
                      iVar12 = _toupper((int)pcVar14[3]);
                      iVar12 = iVar12 + -0x30;
                    }
                    else {
                      iVar12 = _toupper((int)pcVar14[3]);
                      iVar12 = iVar12 + -0x37;
                    }
                    local_94 = iVar11 * 0x10 + iVar12;
                    local_94 = ((int)local_94 < 1) - 1 & local_94;
                    if (0xfe < (int)local_94) {
                      local_94 = 0xff;
                    }
                    iVar11 = _toupper((int)pcVar14[4]);
                    if (iVar11 < 0x41) {
                      iVar11 = _toupper((int)pcVar14[4]);
                      iVar11 = iVar11 + -0x30;
                    }
                    else {
                      iVar11 = _toupper((int)pcVar14[4]);
                      iVar11 = iVar11 + -0x37;
                    }
                    iVar12 = _toupper((int)pcVar14[5]);
                    if (iVar12 < 0x41) {
                      iVar12 = _toupper((int)pcVar14[5]);
                      iVar12 = iVar12 + -0x30;
                    }
                    else {
                      iVar12 = _toupper((int)pcVar14[5]);
                      iVar12 = iVar12 + -0x37;
                    }
                    local_98 = iVar11 * 0x10 + iVar12;
                    local_98 = ((int)local_98 < 1) - 1 & local_98;
                    if (0xfe < (int)local_98) {
                      local_98 = 0xff;
                    }
                    local_60 = (float)(int)local_a4 / 255.0;
                    local_5c = (float)(int)local_94 / 255.0;
                    local_58 = (float)(int)local_98 / 255.0;
                    local_54 = 0x3f800000;
                    local_3c = 0x3f800000;
                    local_48 = local_60;
                    local_44 = local_5c;
                    local_40 = local_58;
                  }
                }
              }
            }
          }
        } while ((local_f8 & 0x22) == 0);
      }
      pcVar14 = local_c8;
      if (local_c8 != (char *)0x0) {
        iVar11 = __stricmp(local_c8,"BR");
        if (iVar11 == 0) {
          local_f4 = local_f4 + 1;
        }
        else {
          iVar11 = __stricmp(pcVar14,"P");
          if (iVar11 == 0) {
            local_f4 = local_f4 + 2;
          }
          else {
            iVar11 = __stricmp(pcVar14,"HR");
            if (iVar11 == 0) {
              if (*(int *)(param_2 + 0x20) == 0x7fffffff) {
                local_f4 = local_f4 + 2;
              }
              else {
                local_d8 = CONCAT31(local_d8._1_3_,1);
                local_f4 = 0;
              }
            }
            else {
              iVar11 = __stricmp(pcVar14,"/FONT");
              if (iVar11 == 0) {
                FUN_00577690();
              }
            }
          }
        }
      }
    }
    FUN_004028d0(local_a0,0);
    _Dst = local_dc;
  }
  FUN_00401e40(_Dst);
  puVar9 = local_d4;
  if (local_d4 != (undefined4 *)0x0) {
    *(undefined1 *)(param_2 + 0x34) = 1;
    *(undefined4 *)(param_2 + 0x2c) = local_d4[3];
    if (local_d4[3] != 0) {
      iVar11 = local_d4[6];
      for (puVar4 = (undefined4 *)local_d4[1]; puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        if (iVar11 == 0) {
          if ((puVar4 != (undefined4 *)0x0) && (iVar11 = puVar4[2], iVar11 != 0)) {
            *(undefined4 *)(param_2 + 0x20) = 0;
            *(undefined4 *)(param_2 + 0x1c) = 0;
            puVar4 = *(undefined4 **)(iVar11 + 4);
            while (puVar4 != (undefined4 *)0x0) {
              iVar12 = puVar4[2];
              puVar4 = (undefined4 *)*puVar4;
              *(int *)(param_2 + 0x20) =
                   *(int *)(param_2 + 0x20) + *(int *)(iVar12 + 0x20) + *(int *)(iVar12 + 0x18);
              iVar15 = *(int *)(iVar12 + 0x10);
              if (*(int *)(iVar12 + 0x10) < *(int *)(param_2 + 0x1c)) {
                iVar15 = *(int *)(param_2 + 0x1c);
              }
              *(int *)(param_2 + 0x1c) = iVar15;
            }
            *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(iVar11 + 0xc);
          }
          break;
        }
        iVar11 = iVar11 + -1;
      }
    }
  }
  FUN_00401f20(local_34);
  local_34 = 0;
  local_2e = 0;
  local_30 = 0;
  FUN_00401f20(local_a0);
  FUN_00401f20(local_e8);
  FUN_00401f20(local_d0);
  FUN_00401f20(local_c8);
  FUN_00401f20(local_bc);
  *unaff_FS_OFFSET = local_14;
  return puVar9;
}



undefined4 * FUN_00578960(int *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *unaff_FS_OFFSET;
  undefined4 uVar14;
  undefined4 local_28;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009be6a8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff9c;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar13 = 0;
  if (*param_1 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    if (*(int *)((int)param_2 + 0x1c) < 2) {
      *(undefined4 *)((int)param_2 + 0x1c) = 0x7fffffff;
    }
    if (*(int *)((int)param_2 + 0x20) < 2) {
      *(undefined4 *)((int)param_2 + 0x20) = 0x7fffffff;
    }
    puVar7 = (undefined4 *)FUN_00577c10(param_1,param_2);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)FUN_00401f00(0x1c,uVar6);
      if (puVar7 == (undefined4 *)0x0) {
        param_2 = (undefined4 *)0x0;
      }
      else {
        uVar10 = *(undefined4 *)((int)param_2 + 0x24);
        uVar14 = *(undefined4 *)((int)param_2 + 0x20);
        uVar3 = *(undefined4 *)((int)param_2 + 0x1c);
        puVar7[3] = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = &PTR_FUN_00a68a70;
        puVar7[4] = uVar3;
        puVar7[5] = uVar14;
        puVar7[6] = uVar10;
        param_2 = puVar7;
      }
      FUN_00576f30(0,0x20,0x3eeae7d5,0x3e6cf41f,0x3e04816f,0x3f800000,1);
      local_4 = 0;
      FUN_00577690();
      if (*(ushort *)(param_1 + 1) == 0xffff) {
        pcVar8 = (char *)*param_1;
        pcVar1 = pcVar8 + 1;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        uVar6 = (int)pcVar8 - (int)pcVar1;
      }
      else {
        uVar6 = (uint)*(ushort *)(param_1 + 1);
      }
      if (uVar6 == 0) {
        FUN_004028d0(&DAT_00a36430,0);
      }
      FUN_004028d0(*param_1,0);
      uVar6 = 0;
      iVar9 = FUN_00404fd0();
      if (iVar9 != 0) {
        do {
          bVar5 = *(byte *)((-(uint)(*param_1 != 0) & uVar6) + *param_1);
          switch(bVar5) {
          case 0x91:
          case 0x92:
            bVar5 = 0x27;
            break;
          case 0x93:
          case 0x94:
            bVar5 = 0x22;
          }
          if ((uint)bVar5 == (int)*(char *)(iVar4 + 0x18)) {
            iVar13 = iVar13 + 1;
          }
          else if ((bVar5 == 9) || (0x1f < bVar5)) {
            FUN_00577120(bVar5);
            uVar14 = 0;
            uVar10 = FUN_00577060(iVar13,0);
            FUN_00577b40(uVar10,iVar13,uVar14);
            iVar13 = 0;
          }
          uVar6 = uVar6 + 1;
          uVar11 = FUN_00404fd0();
        } while (uVar6 < uVar11);
      }
      *(undefined1 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      if ((param_2 != (undefined4 *)0x0) &&
         (*(undefined4 *)(iVar4 + 0x2c) = param_2[3], param_2[3] != 0)) {
        iVar13 = param_2[6];
        for (puVar7 = (undefined4 *)param_2[1]; puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)*puVar7) {
          if (iVar13 == 0) {
            if ((puVar7 != (undefined4 *)0x0) && (iVar13 = puVar7[2], iVar13 != 0)) {
              *(undefined4 *)(iVar4 + 0x20) = 0;
              *(undefined4 *)(iVar4 + 0x1c) = 0;
              puVar7 = *(undefined4 **)(iVar13 + 4);
              while (puVar7 != (undefined4 *)0x0) {
                iVar9 = puVar7[2];
                puVar7 = (undefined4 *)*puVar7;
                *(int *)(iVar4 + 0x20) =
                     *(int *)(iVar4 + 0x20) + *(int *)(iVar9 + 0x20) + *(int *)(iVar9 + 0x18);
                iVar12 = *(int *)(iVar9 + 0x10);
                if (*(int *)(iVar9 + 0x10) < *(int *)(iVar4 + 0x1c)) {
                  iVar12 = *(int *)(iVar4 + 0x1c);
                }
                *(int *)(iVar4 + 0x1c) = iVar12;
              }
              *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar13 + 0xc);
            }
            break;
          }
          iVar13 = iVar13 + -1;
        }
      }
      FUN_00401f20(local_28);
      puVar7 = param_2;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return puVar7;
}



undefined4 FUN_00578c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be6e0;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  FUN_004028d0(param_1,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = FUN_00578960(&local_14,param_3);
  if (iVar2 != 0) {
    FUN_00576ab0(param_4,param_3);
    FUN_00577aa0(uVar1);
    FUN_00401f20(iVar2);
  }
  FUN_00401f20(local_14);
  FUN_00401f20(param_1);
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_00578cc0(undefined4 param_1)

{
  FUN_00582160(1,param_1);
  return;
}



void FUN_00578cd0(void)

{
  FUN_00582160(0,1);
  FUN_0057e510();
  return;
}



void FUN_00578cf0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00b333c4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_00b333c4 + 0x154))();
    if (iVar1 != 0) {
      FUN_00582160(0,1,param_1);
      FUN_0057d940(param_1);
    }
  }
  return;
}



void FUN_00578d30(void)

{
  int iVar1;
  
  if (DAT_00b333c4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_00b333c4 + 0x154))();
    if (iVar1 != 0) {
      FUN_005a8bc0();
      return;
    }
  }
  return;
}



void FUN_00578d50(void)

{
  int iVar1;
  
  if (DAT_00b333c4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_00b333c4 + 0x154))();
    if (iVar1 != 0) {
      FUN_005a8c90();
      return;
    }
  }
  return;
}



undefined1 FUN_00578d70(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_00582160(0,1);
  uVar1 = *(undefined1 *)(iVar2 + 0xb0);
  iVar2 = FUN_00582160(0,1);
  *(undefined1 *)(iVar2 + 0xb0) = 0xff;
  return uVar1;
}



void FUN_00578da0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x3e9);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}



undefined4 thunk_FUN_005a4510(void)

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



void FUN_00578e00(void)

{
  FUN_005ad980(0);
  return;
}



void FUN_00578e10(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3ef);
  if (iVar1 == 0) {
    FUN_005adcf0();
    return;
  }
  return;
}



void FUN_00578e30(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00589b70(0x3ef);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13270,0);
    puVar3 = (undefined4 *)FUN_009832e6(uVar2);
    if (puVar3 != (undefined4 *)0x0) {
      uVar4 = 0;
      uVar2 = 0x3ef;
      FUN_00582160(0,1,0x3ef,0);
      FUN_0057cfe0(uVar2,uVar4);
      (**(code **)*puVar3)(1);
    }
  }
  return;
}



void FUN_00578e90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00589b70(0x3ef);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13270,0);
    iVar1 = FUN_009832e6(uVar2);
    if (iVar1 != 0) {
      FUN_005ad380(param_1);
    }
  }
  return;
}



void FUN_00578ed0(undefined4 param_1,int param_2)

{
  FUN_0058ceb0(param_1,(float)param_2);
  return;
}



void FUN_00578ef0(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00583e30();
      return;
    }
  }
  return;
}



void FUN_00578f20(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00582160(0,1);
      FUN_0057e150();
      return;
    }
  }
  return;
}



bool FUN_00578f60(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      return *(char *)(iVar1 + 8) != '\x01';
    }
  }
  return false;
}



bool FUN_00578fa0(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      return *(char *)(iVar1 + 8) == '\x03';
    }
  }
  return false;
}



undefined4 FUN_00578fe0(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00582160(0,1);
          uVar2 = FUN_0057cf60();
          return uVar2;
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_00579060(void)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          uVar3 = 0;
          FUN_00582160(0,1,0);
          uVar3 = FUN_0057cfa0(uVar3);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



uint FUN_005790e0(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 extraout_var;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = FUN_00582160(0,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00582160(0,1);
    if (*(int *)(uVar2 + 0x1c) != 0) {
      uVar2 = FUN_00582160(0,1);
      if (*(int *)(uVar2 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        fVar4 = (float10)2.0;
        uVar2 = CONCAT22(extraout_var,
                         (ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                         (ushort)(fVar3 == fVar4) << 0xe);
        if (fVar3 == fVar4) {
          iVar1 = FUN_00589b70(param_1);
          uVar2 = 0;
          if (iVar1 != 0) {
            if (param_2 != 0) {
              uVar2 = FUN_005898f0();
              if ((*(uint *)(uVar2 + 0x24) & param_2) == 0) {
                return uVar2 & 0xffffff00;
              }
            }
            fVar4 = (float10)FUN_00588bd0(0xfa1);
            if (fVar4 != (float10)1.0) {
              return 1;
            }
            return 0;
          }
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_005791a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00582160(0,1);
      FUN_00583e60();
      return;
    }
  }
  return;
}



void FUN_005791e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00582160(0,1);
      FUN_005821f0();
      return;
    }
  }
  return;
}



void FUN_00579220(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00582160(0,1);
      FUN_00583f40();
      return;
    }
  }
  return;
}



void FUN_00579260(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00582160(0,1);
  if (iVar2 != 0) {
    iVar2 = FUN_00582160(0,1);
    if (*(int *)(iVar2 + 0x1c) != 0) {
      cVar1 = FUN_0040fda0();
      if (cVar1 == '\0') {
        FUN_00582160(0,1,param_1);
        FUN_0057f170(param_1);
      }
    }
  }
  return;
}



void FUN_005792b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_0040fda0();
      return;
    }
  }
  return;
}



undefined1 FUN_005792e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      return *(undefined1 *)(iVar1 + 0x50);
    }
  }
  return 0;
}



void FUN_00579320(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00582160(0,1,param_1,param_2);
      FUN_0057f490(param_1,param_2);
    }
  }
  return;
}



void FUN_00579370(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00582160(0,1,param_1,param_2);
      FUN_0057d840(param_1,param_2);
    }
  }
  return;
}



undefined1 FUN_00579400(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      return *(undefined1 *)(iVar1 + 0xa8);
    }
  }
  return 0;
}



undefined4 FUN_00579440(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          iVar1 = FUN_00582160(0,1);
          return *(undefined4 *)(iVar1 + 0xbc);
        }
      }
    }
  }
  return 0;
}



void FUN_005794c0(undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          iVar1 = FUN_00582160(0,1);
          *(undefined4 *)(iVar1 + 0xc4) = param_1;
        }
      }
    }
  }
  return;
}



undefined4 FUN_00579540(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          iVar1 = FUN_00582160(0,1);
          return *(undefined4 *)(iVar1 + 200);
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_005795c0(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          iVar1 = FUN_00582160(0,1);
          return *(undefined4 *)(iVar1 + 0xcc);
        }
      }
    }
  }
  return 0;
}



undefined4 * FUN_00579640(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = FUN_00582160(0,1);
  if (iVar3 != 0) {
    iVar3 = FUN_00582160(0,1);
    if (*(int *)(iVar3 + 0x1c) != 0) {
      iVar3 = FUN_00582160(0,1);
      if (*(int *)(iVar3 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar4 = (float10)FUN_00588bd0(0xfae);
        if (fVar4 == (float10)2.0) {
          iVar3 = FUN_00582160(0,1);
          *param_1 = *(undefined4 *)(iVar3 + 0xd0);
          uVar1 = *(undefined4 *)(iVar3 + 0xd8);
          param_1[1] = *(undefined4 *)(iVar3 + 0xd4);
          param_1[2] = uVar1;
          return param_1;
        }
      }
    }
  }
  uVar1 = DAT_00b3f9ac;
  *param_1 = DAT_00b3f9a8;
  uVar2 = DAT_00b3f9b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



undefined1 FUN_005796f0(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          iVar1 = FUN_00582160(0,1);
          return *(undefined1 *)(iVar1 + 0xdc);
        }
      }
    }
  }
  return 0;
}



void FUN_00579770(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          FUN_00582160(0,1);
          FUN_0057cee0();
          return;
        }
      }
    }
  }
  return;
}



void FUN_00579870(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00582160(0,1);
  if (iVar2 != 0) {
    iVar2 = FUN_00582160(0,1);
    if (*(int *)(iVar2 + 0x1c) != 0) {
      iVar2 = FUN_00582160(0,1);
      if (*(int *)(iVar2 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          cVar1 = FUN_00578f60();
          if (cVar1 != '\0') {
            FUN_00582160(0,1);
            FUN_0057ecb0();
            return;
          }
        }
      }
    }
  }
  return;
}



void FUN_005798f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00582160(0,1,param_1);
      FUN_0057fdc0(param_1);
    }
  }
  return;
}



void FUN_00579930(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = FUN_00582160(0,1);
  iVar2 = *(int *)(iVar2 + 0x1c);
  FUN_0058ceb0(0xfa1,0x40000000);
  if (*(int *)(iVar2 + 0x24) == 0) {
    puVar1 = (uint *)(iVar2 + 0x2c);
    *puVar1 = *puVar1 | 2;
  }
  FUN_0058e870();
  return;
}



void FUN_00579970(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_00582160(0,1);
  iVar3 = DAT_00b3a6d8;
  piVar1 = DAT_00b3a6dc;
  if ((iVar2 != 0) &&
     (iVar2 = FUN_00582160(0,1), iVar3 = DAT_00b3a6d8, piVar1 = DAT_00b3a6dc,
     *(int *)(iVar2 + 0x1c) != 0)) {
    FUN_00582160(0,1);
    FUN_0057e7c0();
    iVar3 = FUN_00403520(4,2);
    uVar6 = 0;
    FUN_00582160(0,1,0);
    iVar2 = FUN_00581390(uVar6);
    piVar5 = (int *)0x0;
    if (iVar2 != 0) {
      uVar6 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b1328c,0);
      piVar5 = (int *)FUN_009832e6(uVar6);
    }
    if (piVar5 != DAT_00b3a6dc) {
      DAT_00b3a6dc = (int *)0x0;
      DAT_00b3a6d8 = 0;
    }
    if (iVar3 != 0) {
      if (piVar5 == (int *)0x0) {
        return;
      }
      iVar3 = FUN_00588b50(0xfa8);
      if (iVar3 != 0) {
        iVar3 = *piVar5;
        FUN_00588bd0(0xfa8);
        uVar6 = FUN_009828c0(iVar2);
        (**(code **)(iVar3 + 0xc))(uVar6);
        DAT_00b3a6d8 = 0;
        DAT_00b3a6dc = (int *)0x0;
        return;
      }
    }
    iVar3 = DAT_00b3a6d8;
    piVar1 = DAT_00b3a6dc;
    if (((piVar5 != (int *)0x0) &&
        (iVar4 = FUN_00588b50(0xfa8), iVar3 = DAT_00b3a6d8, piVar1 = DAT_00b3a6dc, iVar4 != 0)) &&
       (iVar2 != DAT_00b3a6d8)) {
      if ((DAT_00b3a6d8 != 0) && (DAT_00b3a6dc != (int *)0x0)) {
        iVar3 = *DAT_00b3a6dc;
        iVar4 = DAT_00b3a6d8;
        FUN_00588bd0(0xfa8);
        uVar6 = FUN_009828c0(iVar4);
        (**(code **)(iVar3 + 0x14))(uVar6);
      }
      iVar3 = iVar2;
      piVar1 = piVar5;
      if (iVar2 != 0) {
        iVar4 = *piVar5;
        FUN_00588bd0(0xfa8);
        uVar6 = FUN_009828c0(iVar2);
        (**(code **)(iVar4 + 0x10))(uVar6);
      }
    }
  }
  DAT_00b3a6dc = piVar1;
  DAT_00b3a6d8 = iVar3;
  return;
}



void FUN_00579ae0(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      *(undefined1 *)(iVar1 + 0xb8) = 1;
      FUN_005903e0();
      return;
    }
  }
  return;
}



void FUN_00579b20(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00582160(0,1);
      FUN_0057da60();
      return;
    }
  }
  return;
}



void FUN_00579b60(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00585c10(1);
      if (('\0' < *(char *)(iVar1 + 0x31)) || (DAT_00b3b908 != '\0')) {
        puVar2 = &stack0x00000008;
        FUN_00585c10(1,param_1,puVar2);
        FUN_00585c90(param_1,puVar2);
      }
    }
  }
  return;
}



bool FUN_00579bc0(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00585c10(0);
      if (iVar1 != 0) {
        iVar1 = FUN_00585c10(1);
        return '\0' < *(char *)(iVar1 + 0x31);
      }
    }
  }
  return false;
}



uint FUN_00579c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined1 *local_4;
  
  iVar1 = FUN_00582160(0,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00582160(0,1);
    if (*(int *)(uVar2 + 0x1c) != 0) {
      local_4 = &stack0x00000014;
      iVar1 = FUN_00582160(0,1);
      if (iVar1 != 0) {
        iVar1 = FUN_00582160(0,1);
        if (*(int *)(iVar1 + 0x1c) != 0) {
          iVar1 = FUN_00582160(0,1);
          if (*(int *)(iVar1 + 0x68) != 0) {
            FUN_00582160(0,1);
            fVar3 = (float10)FUN_00588bd0(0xfae);
            if (fVar3 == (float10)2.0) {
              uVar2 = FUN_005bc8b0(param_1,param_2,param_3,param_4,&local_4);
              return uVar2;
            }
          }
        }
      }
      uVar2 = FUN_005bcc00(param_1,param_2,param_3,param_4,&local_4);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}



char FUN_00579cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined1 *local_20;
  tagMSG local_1c;
  
  DAT_00b131fc = -1;
  FUN_00572ec0(2,1);
  iVar2 = FUN_00582160(0,1);
  if (iVar2 == 0) {
    return '\0';
  }
  iVar2 = FUN_00582160(0,1);
  if (*(int *)(iVar2 + 0x1c) == 0) {
    return '\0';
  }
  local_20 = &stack0x00000010;
  iVar2 = FUN_00582160(0,1);
  if (((iVar2 != 0) && (iVar2 = FUN_00582160(0,1), *(int *)(iVar2 + 0x1c) != 0)) &&
     (iVar2 = FUN_00582160(0,1), *(int *)(iVar2 + 0x68) != 0)) {
    FUN_00582160(0,1);
    fVar3 = (float10)FUN_00588bd0(0xfae);
    if (fVar3 == (float10)2.0) {
      cVar1 = FUN_005bc8b0(param_1,&LAB_00578dc0,param_2,param_3,&local_20);
      goto LAB_00579dd3;
    }
  }
  cVar1 = FUN_005bcc00(param_1,&LAB_00578dc0,param_2,param_3,&local_20);
LAB_00579dd3:
  if (cVar1 == '\0') {
    return '\0';
  }
  if (DAT_00b131fc == -1) {
    do {
      local_1c.hwnd = (HWND)0x0;
      local_1c.message = 0;
      local_1c.wParam = 0;
      local_1c.lParam = 0;
      local_1c.time = 0;
      local_1c.pt.x = 0;
      local_1c.pt.y = 0;
      iVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      while (iVar2 != 0) {
        TranslateMessage(&local_1c);
        DispatchMessageA(&local_1c);
        iVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      }
      FUN_004046a0();
      iVar2 = FUN_00582160(0,1);
      if ((iVar2 != 0) && (iVar2 = FUN_00582160(0,1), *(int *)(iVar2 + 0x1c) != 0)) {
        FUN_00582160(0,1);
        FUN_00583e60();
      }
      iVar2 = FUN_00582160(0,1);
      if ((iVar2 != 0) && (iVar2 = FUN_00582160(0,1), *(int *)(iVar2 + 0x1c) != 0)) {
        FUN_00582160(0,1);
        FUN_005821f0();
      }
      iVar2 = FUN_00582160(0,1);
      if ((iVar2 != 0) && (iVar2 = FUN_00582160(0,1), *(int *)(iVar2 + 0x1c) != 0)) {
        FUN_00582160(0,1);
        FUN_00583f40();
      }
      iVar2 = FUN_00582160(0,1);
      if (((iVar2 != 0) && (iVar2 = FUN_00582160(0,1), *(int *)(iVar2 + 0x1c) != 0)) &&
         (cVar1 = FUN_0040fda0(), cVar1 == '\0')) {
        uVar4 = 0;
        FUN_00582160(0,1,0);
        FUN_0057f170(uVar4);
      }
      iVar2 = FUN_00582160(0,1);
      if ((iVar2 != 0) && (iVar2 = FUN_00582160(0,1), *(int *)(iVar2 + 0x1c) != 0)) {
        FUN_0040fda0();
      }
    } while (DAT_00b131fc == -1);
    return DAT_00b131fc;
  }
  return DAT_00b131fc;
}



undefined4 FUN_00579f80(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x60) != 0) {
        uVar2 = FUN_005bb6c0();
        return uVar2;
      }
    }
  }
  return 0;
}



uint FUN_00579fc0(void)

{
  int iVar1;
  uint uVar2;
  undefined2 extraout_var;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = FUN_00582160(0,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00582160(0,1);
    if (*(int *)(uVar2 + 0x1c) != 0) {
      uVar2 = FUN_00582160(0,1);
      if (*(int *)(uVar2 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        fVar4 = (float10)2.0;
        uVar2 = CONCAT22(extraout_var,
                         (ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                         (ushort)(fVar3 == fVar4) << 0xe);
        if (fVar3 == fVar4) {
          iVar1 = FUN_00589b70(0x3ff);
          if (iVar1 != 0) {
            fVar4 = (float10)FUN_00588bd0(0xfa1);
            if (fVar4 != (float10)1.0) {
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_0057a060(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          FUN_005bb1b0();
          return;
        }
      }
    }
  }
  return;
}



undefined4 FUN_0057a0d0(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          iVar1 = FUN_00589b70(0x3ff);
          if (iVar1 != 0) {
            iVar1 = FUN_005898f0();
            if (iVar1 != 0) {
              iVar1 = FUN_005b91e0();
              if (iVar1 != 0) {
                DAT_00b3b0a2 = 1;
                FUN_0058fba0(0);
                DAT_00b3b0a2 = 0;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_0057a180(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x60) != 0) {
        uVar2 = FUN_005b3760();
        return uVar2;
      }
    }
  }
  return 0;
}



uint FUN_0057a1c0(void)

{
  int iVar1;
  uint uVar2;
  undefined2 extraout_var;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = FUN_00582160(0,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00582160(0,1);
    if (*(int *)(uVar2 + 0x1c) != 0) {
      uVar2 = FUN_00582160(0,1);
      if (*(int *)(uVar2 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        fVar4 = (float10)2.0;
        uVar2 = CONCAT22(extraout_var,
                         (ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                         (ushort)(fVar3 == fVar4) << 0xe);
        if (fVar3 == fVar4) {
          iVar1 = FUN_00589b70(0x3fe);
          if (iVar1 != 0) {
            fVar4 = (float10)FUN_00588bd0(0xfa1);
            if (fVar4 != (float10)1.0) {
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_0057a260(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          FUN_005b2b70();
          return;
        }
      }
    }
  }
  return;
}



undefined4 FUN_0057a2d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x60) != 0) {
        uVar2 = FUN_005ab5a0();
        return uVar2;
      }
    }
  }
  return 0;
}



uint FUN_0057a310(void)

{
  int iVar1;
  uint uVar2;
  undefined2 extraout_var;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = FUN_00582160(0,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00582160(0,1);
    if (*(int *)(uVar2 + 0x1c) != 0) {
      uVar2 = FUN_00582160(0,1);
      if (*(int *)(uVar2 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        fVar4 = (float10)2.0;
        uVar2 = CONCAT22(extraout_var,
                         (ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                         (ushort)(fVar3 == fVar4) << 0xe);
        if (fVar3 == fVar4) {
          iVar1 = FUN_00589b70(0x3ea);
          if (iVar1 != 0) {
            fVar4 = (float10)FUN_00588bd0(0xfa1);
            if (fVar4 != (float10)1.0) {
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_0057a3b0(char param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00582160(0,1);
  if (((iVar2 != 0) && (iVar2 = FUN_00582160(0,1), *(int *)(iVar2 + 0x1c) != 0)) &&
     (iVar2 = FUN_00582160(0,1), *(int *)(iVar2 + 0x68) != 0)) {
    FUN_00582160(0,1);
    fVar3 = (float10)FUN_00588bd0(0xfae);
    if ((fVar3 == (float10)2.0) && (iVar2 = FUN_00589b70(0x3ea), iVar2 != 0)) {
      if ((param_1 == '\0') && (cVar1 = FUN_005893b0(), cVar1 == '\0')) {
        return;
      }
      FUN_005aadc0();
      return;
    }
  }
  return;
}



undefined4 FUN_0057a440(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x60) != 0) {
        uVar2 = FUN_005dcb70();
        return uVar2;
      }
    }
  }
  return 0;
}



void FUN_0057a480(char param_1,char param_2)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar3 = FUN_00582160(0,1);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_00582160(0,1);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    return;
  }
  iVar3 = FUN_00582160(0,1);
  if (*(int *)(iVar3 + 0x68) == 0) {
    return;
  }
  FUN_00582160(0,1);
  fVar7 = (float10)FUN_00588bd0(0xfae);
  if (fVar7 == (float10)2.0) {
    iVar3 = FUN_00589b70(0x3eb);
    iVar4 = FUN_00589b70(0x3ea);
    iVar5 = FUN_00589b70(0x3fe);
    iVar6 = FUN_00589b70(0x3ff);
    cVar2 = FUN_005790e0(0x3eb,-(param_2 != '\0') & 0xb);
    if (param_1 == '\0') {
      if ((cVar2 != '\0') && (iVar3 != 0)) {
        FUN_005898f0();
        FUN_00584740();
        iVar3 = FUN_00582160(0,1);
        puVar1 = (ushort *)(*(int *)(iVar3 + 0x60) + 0x18);
        *puVar1 = *puVar1 | 1;
        FUN_005b3e90();
      }
    }
    else if (cVar2 == '\0') {
      if (iVar4 != 0) {
        FUN_005898f0();
        FUN_00584740();
      }
      if (iVar5 != 0) {
        FUN_005898f0();
        FUN_00584740();
      }
      if (iVar6 != 0) {
        FUN_005898f0();
        FUN_00584740();
      }
      if ((iVar3 != 0) || (iVar3 = FUN_0057a440(), iVar3 != 0)) {
        FUN_00582160(0,1);
        FUN_0058ceb0(0x1771,0x447ac000);
      }
      iVar4 = FUN_00582160(0,1);
      puVar1 = (ushort *)(*(int *)(iVar4 + 0x60) + 0x18);
      *puVar1 = *puVar1 & 0xfffe;
      FUN_005b3e90();
      if (iVar3 != 0) {
        FUN_005898f0();
        FUN_005dcef0();
        FUN_0058fba0(0);
        FUN_005898f0();
        FUN_00584390();
      }
    }
    FUN_00582160(0,1);
    FUN_00707370(0,0);
    return;
  }
  return;
}



uint FUN_0057a650(void)

{
  int iVar1;
  uint uVar2;
  undefined2 extraout_var;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = FUN_00582160(0,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00582160(0,1);
    if (*(int *)(uVar2 + 0x1c) != 0) {
      uVar2 = FUN_00582160(0,1);
      if (*(int *)(uVar2 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        fVar4 = (float10)2.0;
        uVar2 = CONCAT22(extraout_var,
                         (ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                         (ushort)(fVar3 == fVar4) << 0xe);
        if (fVar3 == fVar4) {
          iVar1 = FUN_00589b70(0x3eb);
          if (iVar1 != 0) {
            fVar4 = (float10)FUN_00588bd0(0xfa1);
            if (fVar4 != (float10)1.0) {
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_0057a6f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (((iVar1 != 0) && (iVar1 = FUN_00582160(0,1), *(int *)(iVar1 + 0x1c) != 0)) &&
     (iVar1 = FUN_00582160(0,1), *(int *)(iVar1 + 0x68) != 0)) {
    FUN_00582160(0,1);
    fVar3 = (float10)FUN_00588bd0(0xfae);
    if (fVar3 == (float10)2.0) {
      FUN_00589b70(0x3eb,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132a8,0);
      uVar2 = FUN_005898f0();
      iVar1 = FUN_009832e6(uVar2);
      if (iVar1 != 0) {
        FUN_005da1a0(param_1);
      }
      FUN_00589b70(0x3ec,0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
      uVar2 = FUN_005898f0();
      iVar1 = FUN_009832e6(uVar2);
      if (iVar1 != 0) {
        FUN_005a5b50(param_1);
      }
    }
  }
  return;
}



void FUN_0057a7d0(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          iVar1 = FUN_00589b70(0x3eb);
          if (iVar1 != 0) {
            iVar1 = FUN_005898f0();
            if (iVar1 != 0) {
              FUN_005d9cb0();
              return;
            }
          }
        }
      }
    }
  }
  return;
}



void FUN_0057a850(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          iVar1 = FUN_00589b70(0x3eb);
          if (iVar1 != 0) {
            iVar1 = FUN_005898f0();
            if (iVar1 != 0) {
              FUN_005dcef0();
              return;
            }
          }
        }
      }
    }
  }
  return;
}



undefined4 FUN_0057a8d0(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          uVar2 = FUN_00599ee0();
          return uVar2;
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_0057a940(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          uVar2 = FUN_005dd4b0();
          return uVar2;
        }
      }
    }
  }
  return 0;
}



void FUN_0057aa90(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          FUN_005982a0();
          return;
        }
      }
    }
  }
  return;
}



undefined4 FUN_0057ab00(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          uVar2 = FUN_0059ed30();
          return uVar2;
        }
      }
    }
  }
  return 0;
}



uint FUN_0057ab70(void)

{
  float10 fVar1;
  int iVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  float10 fVar5;
  
  iVar2 = FUN_00582160(0,1);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00582160(0,1);
    if (*(int *)(uVar3 + 0x1c) != 0) {
      uVar3 = FUN_00582160(0,1);
      if (*(int *)(uVar3 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar5 = (float10)FUN_00588bd0(0xfae);
        fVar1 = (float10)2.0;
        uVar3 = CONCAT22(extraout_var,
                         (ushort)(fVar5 < fVar1) << 8 | (ushort)(NAN(fVar5) || NAN(fVar1)) << 10 |
                         (ushort)(fVar5 == fVar1) << 0xe);
        if (fVar5 == fVar1) {
          FUN_00589b70(0x3f1,0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a02c,0);
          uVar4 = FUN_005898f0();
          iVar2 = FUN_009832e6(uVar4);
          if ((iVar2 != 0) && (*(char *)(iVar2 + 100) != '\0')) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}



undefined4 FUN_0057ac20(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00589b70(0x3f1,0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a02c,0);
          uVar2 = FUN_005898f0();
          iVar1 = FUN_009832e6(uVar2);
          if (iVar1 != 0) {
            return *(undefined4 *)(iVar1 + 0x60);
          }
        }
      }
    }
  }
  return 0;
}



uint FUN_0057acc0(undefined4 param_1,undefined4 param_2,int param_3,float param_4)

{
  float10 fVar1;
  int iVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  float10 fVar5;
  float fVar6;
  
  fVar6 = 0.0;
  if (0.0 < param_4) {
    fVar6 = param_4;
  }
  iVar2 = FUN_00582160(0,1,fVar6);
  uVar3 = 0;
  if (((iVar2 != 0) && (uVar3 = FUN_00582160(0,1), *(int *)(uVar3 + 0x1c) != 0)) &&
     (uVar3 = FUN_00582160(0,1), *(int *)(uVar3 + 0x68) != 0)) {
    FUN_00582160(0,1);
    fVar5 = (float10)FUN_00588bd0(0xfae);
    fVar1 = (float10)2.0;
    uVar3 = CONCAT22(extraout_var,
                     (ushort)(fVar5 < fVar1) << 8 | (ushort)(NAN(fVar5) || NAN(fVar1)) << 10 |
                     (ushort)(fVar5 == fVar1) << 0xe);
    if (fVar5 == fVar1) {
      FUN_00589b70(0x3f2,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132c0,0);
      uVar4 = FUN_005898f0();
      iVar2 = FUN_009832e6(uVar4);
      if (iVar2 == 0) {
        FUN_005a8e30(0,&PTR_PTR_00b0a018,&PTR_PTR_00b132c0,0);
        uVar4 = FUN_005898f0();
        iVar2 = FUN_009832e6(uVar4);
        uVar3 = 0;
        if (iVar2 == 0) goto LAB_0057adbf;
      }
      uVar3 = FUN_005a9980(param_1,param_2,(param_3 != 0) + '\x01',fVar6);
      return uVar3;
    }
  }
LAB_0057adbf:
  return uVar3 & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057add0(char *param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  float10 fVar2;
  float fVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined2 extraout_var;
  undefined4 uVar7;
  float10 fVar8;
  
  if (param_2 < 0.0 != (param_2 == 0.0)) {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    fVar3 = (float)((int)pcVar4 - (int)(param_1 + 1));
    if ((int)pcVar4 - (int)(param_1 + 1) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    param_2 = _DAT_00b394f0;
    if (_DAT_00b394f0 < fVar3 * _DAT_00b394f8) {
      param_2 = fVar3 * _DAT_00b394f8;
    }
  }
  iVar5 = FUN_00582160(0,1);
  uVar6 = 0;
  if (((iVar5 != 0) && (uVar6 = FUN_00582160(0,1), *(int *)(uVar6 + 0x1c) != 0)) &&
     (uVar6 = FUN_00582160(0,1), *(int *)(uVar6 + 0x68) != 0)) {
    FUN_00582160(0,1);
    fVar8 = (float10)FUN_00588bd0(0xfae);
    fVar2 = (float10)2.0;
    uVar6 = CONCAT22(extraout_var,
                     (ushort)(fVar8 < fVar2) << 8 | (ushort)(NAN(fVar8) || NAN(fVar2)) << 10 |
                     (ushort)(fVar8 == fVar2) << 0xe);
    if (fVar8 == fVar2) {
      FUN_00589b70(0x3f2,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132c0,0);
      uVar7 = FUN_005898f0();
      iVar5 = FUN_009832e6(uVar7);
      if (iVar5 == 0) {
        FUN_005a8e30(0,&PTR_PTR_00b0a018,&PTR_PTR_00b132c0,0);
        uVar7 = FUN_005898f0();
        iVar5 = FUN_009832e6(uVar7);
        uVar6 = 0;
        if (iVar5 == 0) goto LAB_0057af0c;
      }
      uVar6 = FUN_005a95c0(param_1,param_2,param_3,param_4);
      return uVar6;
    }
  }
LAB_0057af0c:
  return uVar6 & 0xffffff00;
}



void FUN_0057af10(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00589b70(0x3f2,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132c0,0);
          uVar2 = FUN_005898f0();
          iVar1 = FUN_009832e6(uVar2);
          if (iVar1 != 0) {
            FUN_005a8f30();
            return;
          }
        }
      }
    }
  }
  return;
}



void FUN_0057afb0(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00589b70(0x3f2,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132c0,0);
          uVar2 = FUN_005898f0();
          iVar1 = FUN_009832e6(uVar2);
          if (iVar1 != 0) {
            FUN_005a9280();
            return;
          }
        }
      }
    }
  }
  return;
}



uint FUN_0057b050(undefined4 param_1)

{
  float10 fVar1;
  int iVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  float10 fVar5;
  
  iVar2 = FUN_00582160(0,1);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00582160(0,1);
    if (*(int *)(uVar3 + 0x1c) != 0) {
      uVar3 = FUN_00582160(0,1);
      if (*(int *)(uVar3 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar5 = (float10)FUN_00588bd0(0xfae);
        fVar1 = (float10)2.0;
        uVar3 = CONCAT22(extraout_var,
                         (ushort)(fVar5 < fVar1) << 8 | (ushort)(NAN(fVar5) || NAN(fVar1)) << 10 |
                         (ushort)(fVar5 == fVar1) << 0xe);
        if (fVar5 == fVar1) {
          FUN_00589b70(0x3f2,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132c0,0);
          uVar4 = FUN_005898f0();
          iVar2 = FUN_009832e6(uVar4);
          uVar3 = 0;
          if (iVar2 != 0) {
            uVar3 = FUN_005a8f80(param_1);
            return uVar3;
          }
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}



void FUN_0057b0f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00589b70(0x3f2,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132c0,0);
          uVar2 = FUN_005898f0();
          iVar1 = FUN_009832e6(uVar2);
          if (iVar1 != 0) {
            FUN_0060e0d0(param_1);
          }
        }
      }
    }
  }
  return;
}



void FUN_0057b190(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00589b70(0x3ec,0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
          uVar2 = FUN_005898f0();
          iVar1 = FUN_009832e6(uVar2);
          if (iVar1 != 0) {
            FUN_005a6a40(param_1);
          }
        }
      }
    }
  }
  return;
}



void FUN_0057b230(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00589b70(0x3ec,0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
          uVar2 = FUN_005898f0();
          iVar1 = FUN_009832e6(uVar2);
          if (iVar1 != 0) {
            FUN_005a6220(1);
          }
        }
      }
    }
  }
  return;
}



void FUN_0057b2d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00589b70(0x3ec,0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
          uVar2 = FUN_005898f0();
          iVar1 = FUN_009832e6(uVar2);
          if (iVar1 != 0) {
            FUN_005a62b0(param_1);
          }
        }
      }
    }
  }
  return;
}



uint FUN_0057b370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float10 fVar1;
  int iVar2;
  uint uVar3;
  undefined2 extraout_var;
  float10 fVar4;
  undefined1 *local_4;
  
  iVar2 = FUN_00582160(0,1);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00582160(0,1);
    if (*(int *)(uVar3 + 0x1c) != 0) {
      uVar3 = FUN_00582160(0,1);
      if (*(int *)(uVar3 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar4 = (float10)FUN_00588bd0(0xfae);
        fVar1 = (float10)2.0;
        uVar3 = CONCAT22(extraout_var,
                         (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                         (ushort)(fVar4 == fVar1) << 0xe);
        if (fVar4 == fVar1) {
          local_4 = &stack0x00000018;
          uVar3 = FUN_005a3ff0(param_1,param_2,param_3,param_4,param_5,&local_4);
          return uVar3;
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}



undefined4 FUN_0057b400(void)

{
  return DAT_00b3b2dc;
}



undefined4 FUN_0057b410(void)

{
  return DAT_00b3b2d8;
}



void FUN_0057b420(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar4 = (float10)FUN_00588bd0(0xfae);
        if (fVar4 == (float10)2.0) {
          FUN_00589b70(0x3f4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132e0,0);
          uVar2 = FUN_005898f0();
          puVar3 = (undefined4 *)FUN_009832e6(uVar2);
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)*puVar3)(1);
          }
          FUN_005d6d20();
          return;
        }
      }
    }
  }
  return;
}



void FUN_0057b560(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00589b70(0x3f5,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132fc,0);
          uVar2 = FUN_005898f0();
          iVar1 = FUN_009832e6(uVar2);
          if (iVar1 == 0) {
            FUN_005bda90();
            return;
          }
        }
      }
    }
  }
  return;
}



void FUN_0057b600(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00589b70(0x3f5,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132fc,0);
          uVar2 = FUN_005898f0();
          iVar1 = FUN_009832e6(uVar2);
          if (iVar1 == 0) {
            FUN_005bdcd0();
            return;
          }
        }
      }
    }
  }
  return;
}



void FUN_0057b6a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar4 = (float10)FUN_00588bd0(0xfae);
        if (fVar4 == (float10)2.0) {
          FUN_00589b70(0x3f6,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13314,0);
          uVar2 = FUN_005898f0();
          puVar3 = (undefined4 *)FUN_009832e6(uVar2);
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)*puVar3)(1);
          }
          FUN_005af440();
          return;
        }
      }
    }
  }
  return;
}



void FUN_0057b740(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar4 = (float10)FUN_00588bd0(0xfae);
        if (fVar4 == (float10)2.0) {
          FUN_00589b70(0x402,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13330,0);
          uVar2 = FUN_005898f0();
          puVar3 = (undefined4 *)FUN_009832e6(uVar2);
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)*puVar3)(1);
          }
          FUN_005962c0();
          return;
        }
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057b7e0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar4 = (float10)FUN_00588bd0(0xfae);
        if (fVar4 == (float10)2.0) {
          FUN_006a2190(0);
          FUN_006a2280(0);
          FUN_00678d90(DAT_00b333c4);
          FUN_0067aca0(0);
          _DAT_00b46124 = 0;
          _DAT_00b46120 = 0;
          FUN_00589b70(0x40c,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13348,0);
          uVar2 = FUN_005898f0();
          puVar3 = (undefined4 *)FUN_009832e6(uVar2);
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)*puVar3)(1);
          }
          FUN_005ca010(1);
        }
      }
    }
  }
  return;
}



undefined4
FUN_0057b8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      uVar3 = 0;
      uVar2 = 0xbf800000;
      FUN_00571f90(1,param_1,param_2,param_3,param_4,param_5,0xbf800000,0);
      uVar2 = FUN_005723e0(param_1,param_2,param_3,param_4,param_5,uVar2,uVar3);
      return uVar2;
    }
  }
  return 0;
}



void FUN_0057b950(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_005adec0(param_1,param_2);
    }
  }
  return;
}



void FUN_0057b990(char param_1,char param_2,char param_3,char param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      if (param_1 < '\x01') {
        iVar1 = 1;
      }
      else {
        iVar1 = (int)param_1;
        if (5 < iVar1) {
          iVar1 = 5;
        }
      }
      FUN_00582160(0,1,iVar1);
      FUN_0057cde0(iVar1);
      if (param_2 < '\x01') {
        iVar1 = 1;
      }
      else {
        iVar1 = (int)param_2;
        if (5 < iVar1) {
          iVar1 = 5;
        }
      }
      FUN_00582160(0,1,iVar1);
      FUN_0057ce20(iVar1);
      if (param_3 < '\x01') {
        iVar1 = 1;
      }
      else {
        iVar1 = (int)param_3;
        if (5 < iVar1) {
          iVar1 = 5;
        }
      }
      FUN_00582160(0,1,iVar1);
      FUN_0057ce60(iVar1);
      if (param_4 < '\x01') {
        iVar1 = 1;
      }
      else {
        iVar1 = (int)param_4;
        if (5 < iVar1) {
          iVar1 = 5;
        }
      }
      FUN_00582160(0,1,iVar1);
      FUN_0057cea0(iVar1);
      if ((((param_5 != 0x3eb) && (param_5 != 0x3ea)) && (param_5 != 0x3fe)) && (param_5 != 0x3ff))
      {
        param_5 = 0x3eb;
      }
      FUN_00582160(0,1,param_5);
      FUN_0057d530(param_5);
    }
  }
  return;
}



uint FUN_0057bac0(void)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00582160(0,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00582160(0,1);
    if (*(int *)(uVar2 + 0x1c) != 0) {
      iVar1 = FUN_00589b70(0x3ef);
      if (iVar1 != 0) {
        fVar3 = (float10)FUN_00588bd0(0xfa1);
        if (fVar3 != (float10)1.0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return uVar2 & 0xffffff00;
}



undefined4
FUN_0057bb20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (((iVar1 != 0) && (iVar1 = FUN_00582160(0,1), *(int *)(iVar1 + 0x1c) != 0)) && (param_1 != 0))
  {
    iVar1 = FUN_00589b70(0x400);
    if ((iVar1 == 0) && (iVar1 = FUN_005b3f00(), iVar1 == 0)) {
      return 0;
    }
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13364,0);
      iVar1 = FUN_009832e6(uVar2);
      if (iVar1 != 0) {
        FUN_0058ceb0(0xfab,0);
        FUN_005b4230(param_1,param_2,param_3,param_4,param_5,param_6);
        return 1;
      }
    }
  }
  return 0;
}



undefined4
FUN_0057bbf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (((iVar1 != 0) && (iVar1 = FUN_00582160(0,1), *(int *)(iVar1 + 0x1c) != 0)) && (param_1 != 0))
  {
    iVar1 = FUN_00589b70(0x400);
    if ((iVar1 == 0) && (iVar1 = FUN_005b3f00(), iVar1 == 0)) {
      return 0;
    }
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13364,0);
      iVar1 = FUN_009832e6(uVar2);
      if (iVar1 != 0) {
        FUN_0058ceb0(0xfab,0);
        FUN_005b4a10(param_1,param_2,param_3,param_4,param_5);
        return 1;
      }
    }
  }
  return 0;
}



undefined4
FUN_0057bcc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00582160(0,1);
  if ((iVar1 != 0) && (iVar1 = FUN_00582160(0,1), *(int *)(iVar1 + 0x1c) != 0)) {
    iVar1 = FUN_00589b70(0x400);
    if ((iVar1 == 0) && (iVar1 = FUN_005b3f00(), iVar1 == 0)) {
      return 0;
    }
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13364,0);
      iVar1 = FUN_009832e6(uVar2);
      if (iVar1 != 0) {
        FUN_0058ceb0(0xfab,0);
        FUN_005b4e10(param_1,param_2,param_3,param_4,param_5);
        return 1;
      }
    }
  }
  return 0;
}



void FUN_0057bd80(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_005b3e50();
      return;
    }
  }
  return;
}



void FUN_0057bdb0(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_005b41e0();
      return;
    }
  }
  return;
}



undefined4 FUN_0057be10(void)

{
  undefined4 uVar1;
  
  uVar1 = 8;
  if (0x5c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    uVar1 = 9;
  }
  return uVar1;
}



void FUN_0057be30(void)

{
  int iVar1;
  char local_8;
  char local_7;
  char local_6;
  char local_5;
  undefined4 local_4;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 == 0) {
LAB_0057be69:
    local_8 = -1;
  }
  else {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) == 0) goto LAB_0057be69;
    iVar1 = FUN_00582160(0,1);
    local_8 = *(char *)(iVar1 + 10);
  }
  iVar1 = FUN_00582160(0,1);
  if (iVar1 == 0) {
LAB_0057be9f:
    local_7 = -1;
  }
  else {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) == 0) goto LAB_0057be9f;
    iVar1 = FUN_00582160(0,1);
    local_7 = *(char *)(iVar1 + 0xb);
  }
  iVar1 = FUN_00582160(0,1);
  if (iVar1 == 0) {
LAB_0057bed5:
    local_6 = -1;
  }
  else {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) == 0) goto LAB_0057bed5;
    iVar1 = FUN_00582160(0,1);
    local_6 = *(char *)(iVar1 + 0xc);
  }
  iVar1 = FUN_00582160(0,1);
  if (iVar1 == 0) {
LAB_0057bf0b:
    local_5 = -1;
  }
  else {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) == 0) goto LAB_0057bf0b;
    iVar1 = FUN_00582160(0,1);
    local_5 = *(char *)(iVar1 + 0xd);
  }
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_00582160(0,1);
      FUN_00588bd0(0x1771);
      local_4 = FUN_009828c0();
      goto LAB_0057bf53;
    }
  }
  local_4 = 0xffffffff;
LAB_0057bf53:
  if (local_8 < '\x01') {
    local_8 = '\x01';
  }
  if (local_7 < '\x01') {
    local_7 = '\x01';
  }
  if (local_6 < '\x01') {
    local_6 = '\x01';
  }
  if (local_5 < '\x01') {
    local_5 = '\x01';
  }
  FUN_0045b9a0(&local_8,1);
  FUN_0045b9a0(&local_7,1);
  FUN_0045b9a0(&local_6,1);
  FUN_0045b9a0(&local_5,1);
  FUN_0045b9a0(&local_4,4);
  if (0x5c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(&DAT_00b14500,1);
  }
  return;
}



void FUN_0057c000(void)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004534d0(&local_4,1);
  FUN_004534d0(&local_8,1);
  FUN_004534d0(&local_c,1);
  FUN_004534d0(&local_10,1);
  FUN_004534d0(&local_14,4);
  FUN_0057b990(local_4,local_8,local_c,local_10,local_14);
  if (0x5c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(&DAT_00b14500,1);
  }
  return;
}



void FUN_0057c0a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      uVar2 = 1;
      FUN_00582160(0,1,1);
      FUN_0057cde0(uVar2);
      uVar2 = 1;
      FUN_00582160(0,1,1);
      FUN_0057ce20(uVar2);
      uVar2 = 1;
      FUN_00582160(0,1,1);
      FUN_0057ce60(uVar2);
      uVar2 = 4;
      FUN_00582160(0,1,4);
      FUN_0057cea0(uVar2);
      uVar2 = 0x3eb;
      FUN_00582160(0,1,0x3eb);
      FUN_0057d530(uVar2);
    }
  }
  DAT_00b14500 = 1;
  return;
}



undefined1 FUN_0057c140(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00582160(0,1);
  if (iVar2 != 0) {
    iVar2 = FUN_00582160(0,1);
    if (*(int *)(iVar2 + 0x1c) != 0) {
      iVar2 = FUN_00582160(0,1);
      if (*(int *)(iVar2 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar3 = (float10)FUN_00588bd0(0xfae);
        if (fVar3 == (float10)2.0) {
          FUN_00582160(0,1);
          iVar2 = FUN_0057cf60();
          if ((iVar2 == 1) &&
             ((((param_1 == 0x3eb || (param_1 == 0x3ea)) || (param_1 == 0x3fe)) ||
              (param_1 == 0x3ff)))) {
            uVar1 = FUN_005790e0(param_1,0);
            return uVar1;
          }
          return iVar2 == param_1;
        }
      }
    }
  }
  return false;
}



void FUN_0057c240(uint param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (0x1d < param_1) {
    return;
  }
  *param_2 = '\0';
  bVar1 = *(byte *)(param_1 + 0x1b9b + *(int *)(DAT_00b33398 + 0x20));
  iVar3 = param_1 + *(int *)(DAT_00b33398 + 0x20);
  if (bVar1 < 9) {
    pcVar5 = param_2;
    if ((undefined4 *)(&DAT_00b39554)[bVar1] == (undefined4 *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = *(char **)(&DAT_00b39554)[bVar1];
    }
    do {
      cVar2 = *pcVar4;
      *pcVar5 = cVar2;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
  }
  else {
    bVar1 = *(byte *)(iVar3 + 0x1b7e);
    if (bVar1 < 0xee) {
      pcVar5 = param_2;
      if ((undefined4 *)(&DAT_00b39578)[bVar1] == (undefined4 *)0x0) {
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4 = *(char **)(&DAT_00b39578)[bVar1];
      }
      do {
        cVar2 = *pcVar4;
        *pcVar5 = cVar2;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
    }
    else {
      bVar1 = *(byte *)(iVar3 + 0x1bb8);
      pcVar5 = DAT_00b38f20;
      if (7 < bVar1) goto LAB_0057c350;
      pcVar5 = param_2;
      if ((undefined4 *)(&DAT_00b39930)[bVar1] == (undefined4 *)0x0) {
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4 = *(char **)(&DAT_00b39930)[bVar1];
      }
      do {
        cVar2 = *pcVar4;
        *pcVar5 = cVar2;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
    }
  }
  pcVar5 = DAT_00b38f20;
  if (*param_2 != '\0') {
    FUN_004028d0(param_2,0);
    _sprintf(param_2,"%s %s",DAT_00b38f18,0);
    FUN_00401f20(0);
    return;
  }
LAB_0057c350:
  do {
    cVar2 = *pcVar5;
    *param_2 = cVar2;
    param_2 = param_2 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  return;
}



void FUN_0057c370(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be7f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_c;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  iVar2 = FUN_00582160(0,1,uVar1);
  if (iVar2 == 0) goto LAB_0057c3fc;
  iVar2 = FUN_00582160(0,1,uVar1);
  if (*(int *)(iVar2 + 0x1c) == 0) goto LAB_0057c3fc;
  iVar2 = FUN_00585c10(0);
  if (iVar2 == 0) {
LAB_0057c3d8:
    if (DAT_00b3b908 == '\0') goto LAB_0057c3fc;
  }
  else {
    iVar2 = FUN_00585c10(1);
    if (*(char *)(iVar2 + 0x31) < '\x01') goto LAB_0057c3d8;
  }
  puVar4 = &stack0x0000000c;
  uVar3 = param_1;
  FUN_00585c10(1,param_1,puVar4);
  FUN_00585c90(uVar3,puVar4);
LAB_0057c3fc:
  FUN_00401f20(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0057c420(char param_1,char param_2)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  
  iVar3 = FUN_00582160(0,1);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_00582160(0,1);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    return;
  }
  iVar3 = FUN_00582160(0,1);
  if (*(int *)(iVar3 + 0x68) == 0) {
    return;
  }
  FUN_00582160(0,1);
  fVar8 = (float10)FUN_00588bd0(0xfae);
  if (fVar8 == (float10)2.0) {
    iVar3 = FUN_00589b70(0x3eb);
    iVar4 = FUN_00589b70(0x3ea);
    iVar5 = FUN_00589b70(0x3fe);
    iVar6 = FUN_00589b70(0x3ff);
    cVar2 = FUN_005790e0(0x3ff,-(param_2 != '\0') & 0xb);
    if (param_1 == '\0') {
      if ((cVar2 != '\0') && (iVar6 != 0)) {
        FUN_005898f0();
        FUN_00584740();
        iVar3 = FUN_00582160(0,1);
        puVar1 = (ushort *)(*(int *)(iVar3 + 0x60) + 0x18);
        *puVar1 = *puVar1 | 1;
        piVar7 = (int *)FUN_005898f0();
        (**(code **)(*piVar7 + 0x14))(0,0);
        FUN_005b3e90();
      }
    }
    else if (cVar2 == '\0') {
      if (iVar3 != 0) {
        FUN_005898f0();
        FUN_00584740();
      }
      if (iVar5 != 0) {
        FUN_005898f0();
        FUN_00584740();
      }
      if (iVar4 != 0) {
        FUN_005898f0();
        FUN_00584740();
      }
      if ((iVar6 != 0) || (iVar6 = FUN_00579f80(), iVar6 != 0)) {
        FUN_00582160(0,1);
        FUN_0058ceb0(0x1771,0x447fc000);
      }
      iVar3 = FUN_00582160(0,1);
      puVar1 = (ushort *)(*(int *)(iVar3 + 0x60) + 0x18);
      *puVar1 = *puVar1 & 0xfffe;
      FUN_005b3e90();
      if (iVar6 != 0) {
        FUN_005898f0();
        FUN_00584390();
      }
      FUN_0057a060();
    }
    FUN_00582160(0,1);
    FUN_00707370(0,0);
    return;
  }
  return;
}



void FUN_0057c5f0(char param_1,char param_2)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar3 = FUN_00582160(0,1);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_00582160(0,1);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    return;
  }
  iVar3 = FUN_00582160(0,1);
  if (*(int *)(iVar3 + 0x68) == 0) {
    return;
  }
  FUN_00582160(0,1);
  fVar7 = (float10)FUN_00588bd0(0xfae);
  if (fVar7 == (float10)2.0) {
    iVar3 = FUN_00589b70(0x3eb);
    iVar4 = FUN_00589b70(0x3ea);
    iVar5 = FUN_00589b70(0x3fe);
    iVar6 = FUN_00589b70(0x3ff);
    cVar2 = FUN_005790e0(0x3fe,-(param_2 != '\0') & 0xb);
    if (param_1 == '\0') {
      if ((cVar2 != '\0') && (iVar5 != 0)) {
        FUN_005898f0();
        FUN_00584740();
        iVar3 = FUN_00582160(0,1);
        puVar1 = (ushort *)(*(int *)(iVar3 + 0x60) + 0x18);
        *puVar1 = *puVar1 | 1;
        FUN_005b3e90();
      }
    }
    else if (cVar2 == '\0') {
      if (iVar3 != 0) {
        FUN_005898f0();
        FUN_00584740();
      }
      if (iVar4 != 0) {
        FUN_005898f0();
        FUN_00584740();
      }
      if (iVar6 != 0) {
        FUN_005898f0();
        FUN_00584740();
      }
      if ((iVar5 != 0) || (iVar5 = FUN_0057a180(), iVar5 != 0)) {
        FUN_00582160(0,1);
        FUN_0058ceb0(0x1771,0x447f8000);
      }
      iVar3 = FUN_00582160(0,1);
      puVar1 = (ushort *)(*(int *)(iVar3 + 0x60) + 0x18);
      *puVar1 = *puVar1 & 0xfffe;
      FUN_005b3e90();
      FUN_0057a260();
      if (iVar5 != 0) {
        iVar3 = FUN_005898f0();
        if (*(int *)(iVar3 + 0x4c) != 0) {
          FUN_0058e7d0();
        }
        FUN_005898f0();
        FUN_00584390();
      }
    }
    FUN_00582160(0,1);
    FUN_00707370(0,0);
    return;
  }
  return;
}



void FUN_0057c7c0(char param_1,char param_2)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar3 = FUN_00582160(0,1);
  if (iVar3 != 0) {
    iVar3 = FUN_00582160(0,1);
    if (*(int *)(iVar3 + 0x1c) != 0) {
      iVar3 = FUN_00582160(0,1);
      if (*(int *)(iVar3 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar7 = (float10)FUN_00588bd0(0xfae);
        if (fVar7 == (float10)2.0) {
          iVar3 = FUN_00589b70(0x3eb);
          iVar4 = FUN_00589b70(0x3ea);
          iVar5 = FUN_00589b70(0x3fe);
          iVar6 = FUN_00589b70(0x3ff);
          cVar2 = FUN_005790e0(0x3ea,-(param_2 != '\0') & 0xb);
          if (param_1 == '\0') {
            if ((cVar2 != '\0') && (iVar4 != 0)) {
              FUN_005898f0();
              FUN_00584740();
              iVar3 = FUN_00582160(0,1);
              puVar1 = (ushort *)(*(int *)(iVar3 + 0x60) + 0x18);
              *puVar1 = *puVar1 | 1;
              FUN_005b3e90();
            }
          }
          else if (cVar2 == '\0') {
            if (iVar3 != 0) {
              FUN_005898f0();
              FUN_00584740();
            }
            if (iVar5 != 0) {
              FUN_005898f0();
              FUN_00584740();
            }
            if (iVar6 != 0) {
              FUN_005898f0();
              FUN_00584740();
            }
            if (iVar4 == 0) {
              iVar4 = FUN_0057a2d0();
            }
            else {
              FUN_0057a3b0(1);
            }
            if (iVar4 != 0) {
              FUN_00582160(0,1);
              FUN_0058ceb0(0x1771,0x447a8000);
            }
            iVar3 = FUN_00582160(0,1);
            puVar1 = (ushort *)(*(int *)(iVar3 + 0x60) + 0x18);
            *puVar1 = *puVar1 & 0xfffe;
            FUN_005b3e90();
            if (iVar4 != 0) {
              FUN_005898f0();
              FUN_00584390();
            }
          }
          FUN_00582160(0,1);
          FUN_00707370(0,0);
        }
      }
    }
  }
  return;
}



void FUN_0057c980(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7148;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00582160(0,1,uVar1);
  if (iVar2 != 0) {
    iVar2 = FUN_00582160(0,1,uVar1);
    if (*(int *)(iVar2 + 0x1c) != 0) {
      iVar2 = FUN_00582160(0,1,uVar1);
      if (*(int *)(iVar2 + 0x68) != 0) {
        FUN_00582160(0,1,uVar1);
        fVar4 = (float10)FUN_00588bd0(0xfae);
        if (fVar4 == (float10)2.0) {
          uVar3 = 0;
          local_14 = 0;
          local_10 = 0;
          local_e = 0;
          local_4 = 0;
          if (param_1 != 0) {
            uVar3 = FUN_004da2a0(*(undefined4 *)(param_1 + 0xc));
            FUN_00402e30(&local_14,"\"%s\" (%08x)",uVar3);
            uVar3 = local_14;
            uVar11 = 0;
            uVar10 = 0xbf800000;
            uVar9 = 0xffffffff;
            fVar7 = (float)(DAT_00b02e1c + 0x14);
            uVar8 = 2;
            uVar6 = 0x44200000;
            uVar5 = local_14;
            FUN_00571f90(1,local_14,0x44200000,fVar7,2,0xffffffff,0xbf800000,0);
            FUN_005723e0(uVar5,uVar6,fVar7,uVar8,uVar9,uVar10,uVar11);
          }
          FUN_00582160(0,1,param_1);
          FUN_0057cf50(param_1);
          FUN_00401f20(uVar3);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0057cac0(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (((iVar1 != 0) && (iVar1 = FUN_00582160(0,1), *(int *)(iVar1 + 0x1c) != 0)) &&
     (iVar1 = FUN_00582160(0,1), *(int *)(iVar1 + 0x68) != 0)) {
    FUN_00582160(0,1);
    fVar2 = (float10)FUN_00588bd0(0xfae);
    if (fVar2 == (float10)2.0) {
      FUN_00582160(0,1);
      FUN_00588bd0(0x1771);
      iVar1 = FUN_009828c0();
      if (iVar1 == 0) {
        FUN_00582160(0,1);
        FUN_0057e150();
        iVar1 = 0x3eb;
      }
      FUN_0057de50(0x10);
      switch(iVar1) {
      case 0x3ea:
        FUN_0057c7c0(1,0);
        break;
      case 0x3eb:
        FUN_0057a480(1,0);
        break;
      case 0x3fe:
        FUN_0057c5f0(1,0);
        break;
      case 0x3ff:
        FUN_0057c420(1,0);
      }
      FUN_005e7230(0,0);
      FUN_0057d5b0();
      return;
    }
  }
  return;
}



void FUN_0057cc00(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00582160(0,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00582160(0,1);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00582160(0,1);
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_00582160(0,1);
        fVar2 = (float10)FUN_00588bd0(0xfae);
        if (fVar2 == (float10)2.0) {
          FUN_00582160(0,1);
          FUN_0057c420(0,1);
          FUN_0057c5f0(0,1);
          FUN_0057c7c0(0,1);
          FUN_0057a480(0,1);
          FUN_0057ecb0();
          FUN_0057aa90();
          FUN_0057b600();
          FUN_005e7230(0,1);
        }
      }
    }
  }
  return;
}



undefined4 * FUN_0057ccc0(char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puStack_4;
  
  DAT_00b3a6d4 = 1;
  puVar3 = (undefined4 *)FUN_00582160(0,1);
  iVar1 = puVar3[0x1a];
  puVar2 = *(undefined4 **)(iVar1 + 0x34);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      DAT_00b3a6d4 = 0;
      return puVar3;
    }
    puVar6 = (undefined4 *)puVar2[2];
    puVar3 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if (puVar6 != (undefined4 *)0x0) {
      iVar4 = FUN_005898f0();
      puVar3 = (undefined4 *)0x0;
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_005898f0();
        iVar4 = (**(code **)(*piVar5 + 0x34))();
        puVar3 = (undefined4 *)(iVar4 + -0x3ea);
        switch(iVar4) {
        case 0x3ea:
        case 0x3eb:
        case 0x3ec:
        case 0x3ef:
        case 0x3fe:
        case 0x3ff:
        case 0x415:
          break;
        default:
switchD_0057cd2d_caseD_3ed:
          puVar3 = *(undefined4 **)(iVar1 + 0x34);
          do {
            puStack_4 = puVar3;
            if (puStack_4 == (undefined4 *)0x0) {
              puStack_4 = (undefined4 *)0x0;
              break;
            }
            puVar3 = (undefined4 *)*puStack_4;
          } while (puVar6 != (undefined4 *)puStack_4[2]);
          if (puStack_4 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_007aa860(&puStack_4);
          }
          puVar3 = (undefined4 *)0x0;
          if (puVar6 != (undefined4 *)0x0) {
            puVar3 = (undefined4 *)(**(code **)*puVar6)(1);
          }
          break;
        case 0x3f2:
          if (param_1 == '\0') goto switchD_0057cd2d_caseD_3ed;
        }
      }
    }
  } while( true );
}



void FUN_0057cde0(char param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  *(char *)(in_ECX + 10) = param_1;
  iVar1 = FUN_00589b70(0x3eb);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005898f0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))((int)param_1,0);
    }
  }
  return;
}



void FUN_0057ce20(char param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  *(char *)(in_ECX + 0xb) = param_1;
  iVar1 = FUN_00589b70(0x3ea);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005898f0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))((int)param_1,0);
    }
  }
  return;
}



void FUN_0057ce60(char param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  *(char *)(in_ECX + 0xc) = param_1;
  iVar1 = FUN_00589b70(0x3fe);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005898f0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))((int)param_1,0);
    }
  }
  return;
}



void FUN_0057cea0(char param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  *(char *)(in_ECX + 0xd) = param_1;
  iVar1 = FUN_00589b70(0x3ff);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005898f0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))((int)param_1,0);
    }
  }
  return;
}



void FUN_0057cee0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  iVar4 = 9;
  piVar3 = (int *)(in_ECX + 0x104);
  do {
    if (*piVar3 != 0) {
      iVar1 = FUN_00589b70(*piVar3);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_005898f0();
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
      }
      *piVar3 = 0;
    }
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + -1;
  } while (-1 < iVar4);
  FUN_005b41e0();
  FUN_0057cc00();
  FUN_005964b0();
  FUN_0059d890();
  *(undefined1 *)(in_ECX + 8) = 4;
  return;
}



void FUN_0057cf50(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xbc) = param_1;
  return;
}



undefined4 FUN_0057cf60(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(in_ECX + 0xe0);
  while (*piVar2 != 0) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (9 < iVar1) {
      return *(undefined4 *)(in_ECX + 0x104);
    }
  }
  if (9 < iVar1) {
    return *(undefined4 *)(in_ECX + 0x104);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(in_ECX + 0xdc + iVar1 * 4);
}



undefined4 FUN_0057cfa0(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xe0 + param_1 * 4);
}



uint FUN_0057cfb0(int param_1)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(in_ECX + 0xe0);
  do {
    if (*piVar2 == param_1) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 10);
  return uVar1 & 0xffffff00;
}



undefined4 FUN_0057cfe0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  
  iVar6 = *(int *)(in_ECX + 0xe0);
  piVar1 = (int *)(in_ECX + 0xe0);
  do {
    if (iVar6 == 0) {
      return 0xffffffff;
    }
    if (param_2 == '\0') {
      bVar3 = false;
      iVar6 = 0;
      piVar4 = (int *)(in_ECX + 0xe4);
      do {
        if ((bVar3) && (0x3e9 < piVar4[-1])) break;
        if (piVar4[-1] == param_1) {
          bVar3 = true;
LAB_0057d03c:
          if (0x3e9 < *piVar4) {
            iVar6 = iVar6 + 1;
            break;
          }
        }
        else if (bVar3) goto LAB_0057d03c;
        if (*piVar4 == param_1) {
          bVar3 = true;
LAB_0057d04c:
          if (0x3e9 < piVar4[1]) {
            iVar6 = iVar6 + 2;
            break;
          }
        }
        else if (bVar3) goto LAB_0057d04c;
        if (piVar4[1] == param_1) {
          bVar3 = true;
LAB_0057d05e:
          if (0x3e9 < piVar4[2]) {
            iVar6 = iVar6 + 3;
            break;
          }
        }
        else if (bVar3) goto LAB_0057d05e;
        if (piVar4[2] == param_1) {
          bVar3 = true;
LAB_0057d070:
          if (0x3e9 < piVar4[3]) {
            iVar6 = iVar6 + 4;
            break;
          }
        }
        else if (bVar3) goto LAB_0057d070;
        if (piVar4[3] == param_1) {
          bVar3 = true;
        }
        iVar6 = iVar6 + 5;
        piVar4 = piVar4 + 5;
      } while (iVar6 < 10);
      if (!bVar3) {
        return 0xffffffff;
      }
      if ((iVar6 < 10) && (param_1 != 3)) {
        return 0xfffffffe;
      }
    }
    iVar6 = 0;
    piVar4 = piVar1;
    piVar5 = piVar1;
    do {
      if (*piVar4 == param_1) {
        piVar5 = piVar5 + 1;
      }
      iVar2 = *piVar5;
      *piVar4 = iVar2;
      if (iVar2 == 0) break;
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 10);
    if ((*piVar1 != 3) || (*(int *)(in_ECX + 0xe4) != 0)) {
      if (0 < iVar6) {
        if ((iVar6 == 1) && ((*piVar1 == 0x3f3 || (*piVar1 == 0x3e9)))) {
          DAT_00b42d54 = 1;
        }
        return *(undefined4 *)(in_ECX + 0xdc + iVar6 * 4);
      }
      if (param_1 == 1) {
        FUN_0057cc00();
      }
      *(undefined1 *)(in_ECX + 8) = 4;
      if ((param_1 != 0x3f3) && (param_1 != 0x3e9)) {
        DAT_00b42d54 = 1;
        return 0;
      }
      DAT_00b42d54 = 0;
      return 0;
    }
    iVar6 = FUN_00585c10(0);
    if (iVar6 != 0) {
      FUN_00585c10(1);
      FUN_005859c0();
    }
    param_2 = '\0';
    iVar6 = *piVar1;
    param_1 = 3;
  } while( true );
}



void FUN_0057d1a0(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xbc) == param_1) {
    *(undefined4 *)(in_ECX + 0xbc) = 0;
  }
  if (*(int *)(in_ECX + 0xc0) == param_1) {
    *(undefined4 *)(in_ECX + 0xc0) = 0;
  }
  if (*(int *)(in_ECX + 0xc4) == param_1) {
    *(undefined4 *)(in_ECX + 0xc4) = 0;
  }
  if (*(int *)(in_ECX + 200) == param_1) {
    *(undefined4 *)(in_ECX + 200) = 0;
  }
  if (*(int *)(in_ECX + 0xcc) == param_1) {
    *(undefined4 *)(in_ECX + 0xcc) = 0;
  }
  FUN_005a47e0(param_1);
  return;
}



void FUN_0057d200(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(*(int *)(in_ECX + 0x130) + 0x10);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    FUN_00401f20(iVar2);
    iVar2 = iVar1;
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x130));
  *(undefined4 *)(in_ECX + 0x130) = 0;
  return;
}



undefined4 FUN_0057d240(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  iVar1 = 0;
  piVar4 = (int *)(in_ECX + 0xe0);
  do {
    if (*piVar4 == 0) {
      if (iVar1 < 10) {
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar2 = *(undefined4 *)(in_ECX + 0xdc + iVar1 * 4);
        }
      }
      else {
        uVar2 = *(undefined4 *)(in_ECX + 0x104);
      }
      goto LAB_0057d278;
    }
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar1 < 10);
  uVar2 = *(undefined4 *)(in_ECX + 0x104);
LAB_0057d278:
  iVar1 = FUN_00589b70(uVar2);
  if (iVar1 != 0) {
    FUN_00588bd0(0xfa5);
    iVar1 = FUN_009828c0();
    if ((iVar1 == 0x66) || (iVar1 == 0x1776)) {
      iVar1 = FUN_005898f0();
      iVar3 = FUN_005898f0();
      if (iVar3 != iVar1) {
        return 0;
      }
    }
  }
  return 1;
}



void FUN_0057d2d0(int param_1)

{
  int in_ECX;
  
  if (param_1 - 1U < 3) {
    *(int *)(in_ECX + 0x14) = param_1 + -1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return;
}



undefined1 FUN_0057d2f0(void)

{
  undefined1 *in_ECX;
  
  return *in_ECX;
}



void FUN_0057d300(undefined4 param_1,int param_2)

{
  float fVar1;
  
  fVar1 = (float)param_2;
  if (param_2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(param_1,fVar1);
  return;
}



float10 FUN_0057d330(void)

{
  uint local_4;
  
  local_4 = (uint)((double)DAT_00b06c50 / (double)DAT_00b06c4c < 0.74);
  if ((float)local_4 != 0.0) {
    return (float10)DAT_00b13608;
  }
  return (float10)DAT_00b135f8;
}



float10 FUN_0057d390(void)

{
  uint local_4;
  
  local_4 = (uint)((double)DAT_00b06c50 / (double)DAT_00b06c4c < 0.74);
  if ((float)local_4 != 0.0) {
    return (float10)DAT_00b13610;
  }
  return (float10)DAT_00b13600;
}



undefined4 FUN_0057d3f0(void)

{
  int in_ECX;
  float10 fVar1;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    fVar1 = (float10)FUN_00588bd0(0xfa1);
    if (fVar1 == (float10)2.0) {
      return 1;
    }
  }
  return 0;
}



void FUN_0057d480(void)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  
  FUN_0057b950(3,0x42480000);
  FUN_0057b950(3,0x40a00000);
  iVar2 = FUN_005a6b00();
  FUN_005a6040(1,1);
  if (iVar2 != 0) {
    FUN_0058ceb0(0xfa1,0x3f800000);
  }
  FUN_0057b950(3,0x42c80000);
  puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x24) + 0x18);
  *puVar1 = *puVar1 | 1;
  FUN_0058ceb0(0xfa1,0x3f800000);
  FUN_0058e870();
  *(undefined1 *)(in_ECX + 8) = 1;
  FUN_0058ceb0(0xfae,0x40000000);
  return;
}



void FUN_0057d530(int param_1)

{
  if (param_1 == 0) {
    param_1 = 0x3eb;
  }
  FUN_0058ceb0(0x1771,(float)param_1);
  if (param_1 == 0x3eb) {
    FUN_005a5e00(1);
    return;
  }
  if (param_1 == 0x3ea) {
    FUN_005a5e00(2);
    return;
  }
  if (param_1 == 0x3fe) {
    FUN_005a5e00(3);
    return;
  }
  if (param_1 == 0x3ff) {
    FUN_005a5e00(4);
  }
  return;
}



void FUN_0057d5b0(void)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar2 = FUN_00668d00(1);
  (**(code **)(**(int **)(in_ECX + 0x60) + 0x84))(iVar2,1);
  FUN_005a5900(0,0);
  *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffe;
  puVar1 = (ushort *)(*(int *)(in_ECX + 0x60) + 0x18);
  *puVar1 = *puVar1 & 0xfffe;
  FUN_00707980();
  FUN_00707610();
  uVar3 = FUN_007b4280(1);
  FUN_007c7050(iVar2,uVar3);
  FUN_00664c40();
  FUN_00707370(0,0);
  return;
}



int FUN_0057d640(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if (param_1 != 3) {
    iVar3 = 0;
    piVar2 = (int *)(in_ECX + 0xe0);
    while (*piVar2 != 0) {
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
      if (9 < iVar3) {
        return -1;
      }
    }
    if (9 < iVar3) {
      return -1;
    }
    *(int *)(in_ECX + 0xe0 + iVar3 * 4) = param_1;
    if (iVar3 == 0) {
      *(undefined1 *)(in_ECX + 8) = 3;
      if ((param_1 != 0x3f3) && (param_1 != 0x3e9)) {
        DAT_00b42d54 = 1;
        return 0;
      }
    }
    else if ((iVar3 == 1) && ((iVar4 = *(int *)(in_ECX + 0xe0), iVar4 == 0x3f3 || (iVar4 == 0x3e9)))
            ) {
      DAT_00b42d54 = 1;
    }
    return iVar3;
  }
  iVar3 = *(int *)(in_ECX + 0xe0);
  *(undefined4 *)(in_ECX + 0xe0) = 3;
  iVar4 = 1;
  piVar2 = (int *)(in_ECX + 0xe4);
  do {
    iVar1 = *piVar2;
    *piVar2 = iVar3;
    if (iVar1 == 0) break;
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
    iVar3 = iVar1;
  } while (iVar4 < 9);
  if (iVar4 == 9) {
    FUN_004a7a60("### Menu Stack Size is too small - a menu may have been lost");
    return 9;
  }
  if (iVar4 == 1) {
    *(undefined1 *)(in_ECX + 8) = 3;
    DAT_00b42d54 = 1;
  }
  return iVar4;
}



void FUN_0057d730(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (((param_1 != '\0') && (*(int *)(in_ECX + 0x9c) != 0)) && (*(int *)(in_ECX + 0x98) != 0)) {
    FUN_0058ceb0(0xfdd,0);
    uVar2 = *(undefined4 *)(in_ECX + 0x98);
    iVar1 = **(int **)(in_ECX + 0x9c);
    FUN_00588bd0(0xfa8);
    uVar2 = FUN_009828c0(uVar2);
    (**(code **)(iVar1 + 0x14))(uVar2);
  }
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  return;
}



float10 FUN_0057d7a0(void)

{
  if ((float)DAT_00b06c50 < (float)DAT_00b06c4c) {
    return (float10)(((float)DAT_00b06c4c / (float)DAT_00b06c50) * 960.0);
  }
  return (float10)1280.0;
}



float10 FUN_0057d7f0(void)

{
  if ((float)DAT_00b06c4c < (float)DAT_00b06c50) {
    return (float10)(((float)DAT_00b06c50 / (float)DAT_00b06c4c) * 1280.0);
  }
  return (float10)960.0;
}



void FUN_0057d840(int param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  
  if (0 < param_1) {
    DAT_00b135f8 = param_1;
    DAT_00b13600 = param_2;
    if (param_2 < 1) {
      DAT_00b13600 = param_1;
    }
  }
  fVar2 = (float10)FUN_0057d330();
  FUN_0058ceb0(0xfda,(float)fVar2);
  fVar2 = (float10)FUN_0057d390();
  FUN_0058ceb0(0xfd9,(float)fVar2);
  if ((float)DAT_00b06c4c <= (float)DAT_00b06c50) {
    fVar1 = 1280.0;
  }
  else {
    fVar1 = ((float)DAT_00b06c4c / (float)DAT_00b06c50) * 960.0;
  }
  FUN_0058ceb0(0xfcb,fVar1);
  if ((float)DAT_00b06c50 <= (float)DAT_00b06c4c) {
    fVar1 = 960.0;
  }
  else {
    fVar1 = ((float)DAT_00b06c50 / (float)DAT_00b06c4c) * 1280.0;
  }
  FUN_0058ceb0(0xfca,fVar1);
  return;
}



void FUN_0057d940(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  float10 fVar5;
  
  if (DAT_00b333c4 != 0) {
    bVar2 = false;
    if (*(int *)(in_ECX + 0x80) != 0) {
      FUN_0058ceb0(0xfa1,0x40000000);
      iVar3 = FUN_005a8260();
      if (iVar3 != 0) {
        fVar5 = (float10)FUN_00588bd0(0xfa1);
        if (fVar5 == (float10)1.0) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x80);
    if ((puVar1 == (undefined4 *)0x0) || (param_1 != 2)) {
      bVar2 = 0 < param_1;
    }
    if ((puVar1 != (undefined4 *)0x0) && (param_1 == 3)) {
      (**(code **)*puVar1)(1);
      *(undefined4 *)(in_ECX + 0x80) = 0;
    }
    if ((*(int *)(in_ECX + 0x80) == 0) && (bVar2)) {
      DAT_00b3b0a2 = 1;
      uVar4 = FUN_00590420("Data\\Menus\\Main\\hud_reticle.xml");
      *(undefined4 *)(in_ECX + 0x80) = uVar4;
      FUN_005a8000(uVar4);
      DAT_00b3b0a2 = 0;
    }
    FUN_005a8710(param_1);
  }
  return;
}



void FUN_0057da20(undefined4 param_1,char param_2)

{
  uint uVar1;
  int in_ECX;
  
  FUN_0058ced0(0xfe6,param_1);
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x1c) + 0x2c);
  if (param_2 != '\0') {
    uVar1 = uVar1 & 0xfffe;
  }
  *(uint *)(*(int *)(in_ECX + 0x1c) + 0x2c) = uVar1 | 0x20;
  FUN_0058e870();
  return;
}



void FUN_0057da60(void)

{
  int in_ECX;
  
  FUN_00977c50(3);
  (**(code **)(**(int **)(in_ECX + 0x68) + 0x18))();
  FUN_00977c50(2);
  FUN_0043fc20(1);
  return;
}



int * FUN_0057da90(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  local_10 = (int *)0x0;
  local_8 = 0x7fffffff;
  *param_1 = -0x80000000;
  local_c = -0x80000000;
  if (param_2 == (int *)0x0) {
    FUN_00587b20(1);
    iVar4 = FUN_005877d0();
    if (iVar4 == 0) {
      return (int *)0x0;
    }
    param_2 = *(int **)(iVar4 + 4);
    iVar4 = (**(code **)(*param_2 + 0xc))();
    if (((iVar4 == 0x389) && (iVar4 = FUN_005898f0(), *(int *)(iVar4 + 0x24) != 1)) &&
       (iVar4 = FUN_005898f0(), *(int *)(iVar4 + 0x24) != 8)) {
      return (int *)0x0;
    }
  }
  fVar7 = (float10)FUN_00588bd0(0xfa1);
  if (fVar7 == (float10)1.0) {
    return (int *)0x0;
  }
  puVar3 = (undefined4 *)param_2[0xd];
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = puVar3 + 2;
    puVar3 = (undefined4 *)*puVar3;
    local_c = -0x80000000;
    piVar5 = (int *)FUN_0057da90(&local_c,*puVar1);
    if ((piVar5 != (int *)0x0) &&
       ((iVar4 = local_c, iVar6 = local_8, iVar2 < local_c ||
        (((local_c == iVar2 && (iVar4 = FUN_00588b50(0xfaa), iVar4 != 0)) &&
         (iVar6 = FUN_009828c0(), iVar4 = iVar2, iVar6 < local_8)))))) {
      local_8 = iVar6;
      iVar2 = iVar4;
      local_10 = piVar5;
    }
  }
  fVar7 = (float10)FUN_00588bd0(0xfc9);
  if (((fVar7 == (float10)2.0) && (fVar7 = (float10)FUN_00588bd0(0xfa1), fVar7 != (float10)1.0)) &&
     (iVar4 = FUN_00588b50(0xff0), iVar4 != 0)) {
    local_c = FUN_009828c0();
    if (iVar2 < local_c) {
      *param_1 = local_c;
      return param_2;
    }
    if (((local_c == iVar2) && (iVar4 = FUN_00588b50(0xfaa), iVar4 != 0)) &&
       (iVar4 = FUN_009828c0(), iVar4 < local_8)) {
      local_10 = param_2;
    }
  }
  *param_1 = iVar2;
  return local_10;
}



void FUN_0057dc30(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x120) = DAT_00b33ea0;
  *(undefined4 *)(in_ECX + 0x124) = 0;
  *(undefined4 *)(in_ECX + 0x11c) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0057dc60(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar3 = DAT_00b33ea0;
  if (0.0 <= _DAT_00b135b0) {
    if (((((*(int *)(in_ECX + 0x11c) == -0x7fffffff) && (iVar4 = FUN_004032d0(0xcb,0), iVar4 == 0))
         || ((*(undefined1 **)(in_ECX + 0x11c) == &DAT_80000002 &&
             (iVar4 = FUN_004032d0(0xcd,0), iVar4 == 0)))) ||
        ((*(int *)(in_ECX + 0x11c) == -0x7ffffffd && (iVar4 = FUN_004032d0(200,0), iVar4 == 0)))) ||
       ((*(int *)(in_ECX + 0x11c) == -0x7ffffffc && (iVar4 = FUN_004032d0(0xd0,0), iVar4 == 0)))) {
      *(undefined4 *)(in_ECX + 0x11c) = 0;
    }
    else {
      if (*(int *)(in_ECX + 0x124) == 0) {
        iVar4 = iVar3 - *(int *)(in_ECX + 0x120);
        fVar1 = (float)iVar4;
        fVar2 = _DAT_00b135b0;
        if (iVar4 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
      }
      else {
        iVar4 = iVar3 - *(int *)(in_ECX + 0x124);
        fVar1 = (float)iVar4;
        if (iVar4 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar2 = _DAT_00b135b8 / param_1;
      }
      if (fVar2 <= fVar1) {
        *(int *)(in_ECX + 0x124) = iVar3;
        return *(undefined4 *)(in_ECX + 0x11c);
      }
    }
  }
  return 0;
}



void FUN_0057dd90(char param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *in_ECX;
  
  if (*in_ECX != '\0') {
    *in_ECX = param_1;
    return;
  }
  if (param_1 != '\0') {
    if (*(ushort *)(in_ECX + 0x1c) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 0x18);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      *in_ECX = param_1;
      *(int *)(in_ECX + 4) = (int)pcVar3 - (int)pcVar1;
      return;
    }
    *(uint *)(in_ECX + 4) = (uint)*(ushort *)(in_ECX + 0x1c);
  }
  *in_ECX = param_1;
  return;
}



void FUN_0057dde0(void)

{
  int in_ECX;
  
  if (500 < (uint)(DAT_00b33ea0 - *(int *)(in_ECX + 0x10))) {
    *(int *)(in_ECX + 0x10) = DAT_00b33ea0;
    *(bool *)(in_ECX + 8) = *(char *)(in_ECX + 8) == '\0';
  }
  return;
}



bool FUN_0057de00(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  FUN_00576a30();
  FUN_005739c0(param_1,local_8,local_4,0xffffffff,0x4f000000,0,0);
  iVar1 = FUN_009828c0();
  return iVar1 <= *(int *)(in_ECX + 0xc);
}



void FUN_0057de50(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    switch(param_1) {
    case 1:
      pcVar2 = "UIMenuOK";
      break;
    case 2:
    case 0x15:
      pcVar2 = "UIMenuCancel";
      break;
    case 3:
      pcVar2 = "UIMenuPrevNext";
      break;
    case 4:
      pcVar2 = "UIMenuFocus";
      break;
    case 5:
      pcVar2 = "UIMenuTabs";
      break;
    case 6:
      pcVar2 = "ITMBookPageTurn";
      break;
    case 7:
      pcVar2 = "UISpeechRollover";
      break;
    case 8:
      pcVar2 = "UISpeechRotate";
      break;
    case 9:
      pcVar2 = "UIQuestNew";
      break;
    case 10:
      pcVar2 = "UIQuestUpdate";
      break;
    case 0xb:
    case 0x14:
      pcVar2 = "UIMessage";
      break;
    case 0xc:
      pcVar2 = "MenuEnd";
      break;
    case 0xd:
      pcVar2 = "MenuStart";
      break;
    case 0xe:
      pcVar2 = "UIMenuBracket";
      break;
    case 0xf:
      pcVar2 = "UIMessageFade";
      break;
    case 0x10:
      pcVar2 = "UIInventoryOpen";
      break;
    case 0x11:
      pcVar2 = "UIInventoryClose";
      break;
    case 0x12:
      pcVar2 = "UIPotionCreate";
      break;
    case 0x13:
      pcVar2 = "DRSLocked";
      break;
    case 0x16:
      pcVar2 = "UIStatsSkillUp";
      break;
    case 0x17:
      pcVar2 = "SPLEquip";
      break;
    case 0x18:
      pcVar2 = "ITMWelkyndStoneUse";
      break;
    case 0x19:
      pcVar2 = "ITMScrollOpen";
      break;
    case 0x1a:
      pcVar2 = "ITMScrollClose";
      break;
    case 0x1b:
      pcVar2 = "ITMBookOpen";
      break;
    case 0x1c:
      pcVar2 = "ITMBookClose";
      break;
    case 0x1d:
      pcVar2 = "ITMTakeAll";
      break;
    case 0x1e:
      pcVar2 = "ITMIngredientNothing";
      break;
    case 0x1f:
      pcVar2 = "ITMIngredientDown";
      break;
    case 0x20:
      pcVar2 = "ITMSoulTrap";
      break;
    case 0x21:
      pcVar2 = "UIArmorWeaponRepairBreak";
      break;
    case 0x22:
      pcVar2 = "ITMBoundDisappear";
      break;
    case 0x23:
      pcVar2 = "ITMGoldUp";
      break;
    case 0x24:
      pcVar2 = "UIItemEnchant";
      break;
    default:
      goto switchD_0057de71_default;
    }
    iVar1 = FUN_006ade50(pcVar2,0x121,1);
    if (iVar1 != 0) {
      FUN_006b7190(0);
      FUN_006b73e0();
      FUN_00401f20(iVar1);
    }
  }
switchD_0057de71_default:
  return;
}



void FUN_0057e150(void)

{
  undefined1 uVar1;
  int iVar2;
  int in_ECX;
  int unaff_FS_OFFSET;
  
  if (((DAT_00b333c4 != 0) && (*(char *)(in_ECX + 0x94) != '\0')) &&
     (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x184) == '\0')) {
    DAT_00b3b0a2 = 1;
    uVar1 = *(undefined1 *)(in_ECX + 8);
    FUN_005ad980(0);
    iVar2 = FUN_0057a440();
    FUN_005ad980(0);
    if (iVar2 != 0) {
      FUN_0058ceb0(0xfa1,0x3f800000);
    }
    iVar2 = FUN_0057a2d0();
    FUN_005ad980(0);
    if (iVar2 != 0) {
      FUN_0058ceb0(0xfa1,0x3f800000);
    }
    iVar2 = FUN_0057a180();
    FUN_005ad980(0);
    if (iVar2 != 0) {
      FUN_0058ceb0(0xfa1,0x3f800000);
    }
    iVar2 = FUN_00579f80();
    FUN_005ad980(0);
    if (iVar2 != 0) {
      FUN_0058ceb0(0xfa1,0x3f800000);
    }
    FUN_005c1290();
    FUN_005ad980(0);
    DAT_00b3b0a2 = 0;
    *(undefined1 *)(in_ECX + 8) = uVar1;
    *(undefined1 *)(in_ECX + 0x94) = 0;
    FUN_005ad980(0);
  }
  return;
}



void FUN_0057e270(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x364) == 0) {
    *param_1 = 0;
    return;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x364) + 8);
  if ((iVar1 != 0) && (iVar1 != -0x14)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x30);
    return;
  }
  *param_1 = 0;
  return;
}



float10 FUN_0057e2d0(void)

{
  float fVar1;
  
  if ((float)DAT_00b06c4c <= (float)DAT_00b06c50) {
    fVar1 = 1280.0;
  }
  else {
    fVar1 = ((float)DAT_00b06c4c / (float)DAT_00b06c50) * 960.0;
  }
  return (float10)(-fVar1 * 0.5);
}



float10 FUN_0057e330(void)

{
  float fVar1;
  
  if ((float)DAT_00b06c4c <= (float)DAT_00b06c50) {
    fVar1 = 1280.0;
  }
  else {
    fVar1 = ((float)DAT_00b06c4c / (float)DAT_00b06c50) * 960.0;
  }
  return (float10)(fVar1 * 0.5);
}



float10 FUN_0057e390(void)

{
  float fVar1;
  
  if ((float)DAT_00b06c50 <= (float)DAT_00b06c4c) {
    fVar1 = 960.0;
  }
  else {
    fVar1 = ((float)DAT_00b06c50 / (float)DAT_00b06c4c) * 1280.0;
  }
  return (float10)(-fVar1 * 0.5);
}



float10 FUN_0057e3f0(void)

{
  float fVar1;
  
  if ((float)DAT_00b06c50 <= (float)DAT_00b06c4c) {
    fVar1 = 960.0;
  }
  else {
    fVar1 = ((float)DAT_00b06c50 / (float)DAT_00b06c4c) * 1280.0;
  }
  return (float10)(fVar1 * 0.5);
}



void FUN_0057e450(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be9a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a68f98;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a68d14;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0057e4b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be9d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a68fa8;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a68d24;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057e510(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  LONG LVar7;
  int in_ECX;
  int *piVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  char *local_58;
  uint uStack_54;
  int local_30 [9];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bea2c;
  local_c = *unaff_FS_OFFSET;
  uStack_54 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_58 = (char *)0xdc;
  iVar4 = FUN_00401f00();
  local_4 = 0;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    local_58 = (char *)0x0;
    uVar5 = FUN_0070b780();
  }
  local_58 = (char *)0x40702845;
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x60) = uVar5;
  FUN_00711580(0,0);
  local_58 = (char *)0x130;
  piVar8 = local_30;
  piVar9 = (int *)(*(int *)(in_ECX + 0x60) + 0x30);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  iVar4 = FUN_00401f00();
  local_4 = 1;
  if (iVar4 == 0) {
    local_58 = (char *)0x0;
  }
  else {
    local_58 = (char *)0x57e5c3;
    local_58 = (char *)FUN_007c7340();
  }
  *(char **)(in_ECX + 100) = local_58;
  local_4 = 0xffffffff;
  local_58[0x11c] = '\x01';
  FUN_007b4270(1);
  pcVar6 = (char *)FUN_00401f00(0x1c);
  local_4 = 2;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    local_58 = (char *)0x57e601;
    FUN_006ffd30();
    *(undefined ***)pcVar6 = &PTR_FUN_00a3d604;
    pcVar6[0x18] = -0x14;
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
  }
  *(ushort *)(pcVar6 + 0x18) = *(ushort *)(pcVar6 + 0x18) & 0xfffe;
  local_4 = 0xffffffff;
  local_58 = pcVar6;
  FUN_00405680();
  local_58 = (char *)0x114;
  iVar4 = FUN_00401f00();
  local_4 = 3;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    local_58 = (char *)0x57e64c;
    uVar5 = FUN_00719760();
  }
  local_58 = "PlayerSceneLight";
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x18) = uVar5;
  FUN_006ff420();
  uVar3 = _DAT_00b135f0;
  uVar2 = _DAT_00b135e8;
  uVar5 = _DAT_00b135e0;
  iVar4 = *(int *)(in_ECX + 0x18);
  *(int *)(iVar4 + 0xb8) = *(int *)(iVar4 + 0xb8) + 1;
  *(undefined4 *)(iVar4 + 0xec) = uVar5;
  *(undefined4 *)(iVar4 + 0xf0) = uVar2;
  *(undefined4 *)(iVar4 + 0xf4) = uVar3;
  uVar3 = _DAT_00b135d8;
  uVar2 = _DAT_00b135d0;
  uVar5 = _DAT_00b135c8;
  iVar4 = *(int *)(in_ECX + 0x18);
  *(int *)(iVar4 + 0xb8) = *(int *)(iVar4 + 0xb8) + 1;
  *(undefined4 *)(iVar4 + 0xe0) = uVar5;
  local_58 = (char *)0xbedf66f3;
  *(undefined4 *)(iVar4 + 0xe4) = uVar2;
  *(undefined4 *)(iVar4 + 0xe8) = uVar3;
  FUN_00711580(0xbedf66f3,0xbedf66f3);
  piVar8 = local_30;
  piVar9 = (int *)(*(int *)(in_ECX + 0x18) + 0x30);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  local_58 = (char *)0x1;
  (**(code **)(**(int **)(in_ECX + 100) + 0x84))(*(undefined4 *)(in_ECX + 0x18));
  FUN_007c5850(*(undefined4 *)(in_ECX + 0x18));
  (**(code **)(**(int **)(in_ECX + 4) + 0x84))(*(undefined4 *)(in_ECX + 100),0);
  (**(code **)(**(int **)(in_ECX + 100) + 0x84))(*(undefined4 *)(in_ECX + 0x60),0);
  FUN_00708560(&local_58,2);
  pcVar6 = local_58;
  if (local_58 != (char *)0x0) {
    LVar7 = InterlockedDecrement((LONG *)(local_58 + 4));
    if ((LVar7 == 0) && (pcVar6 != (char *)0x0)) {
      (*(code *)**(undefined4 **)pcVar6)(1);
    }
  }
  puVar1 = (ushort *)(*(int *)(in_ECX + 0x60) + 0x18);
  *puVar1 = *puVar1 | 1;
  *(undefined1 *)(in_ECX + 8) = 1;
  FUN_0057d480();
  *unaff_FS_OFFSET = local_30[3];
  return;
}



void FUN_0057e7c0(void)

{
  ushort *puVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  if (((**(byte **)(DAT_00b33398 + 0x20) & 8) == 0) || (DAT_00b06c74 != '\0')) {
    puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x24) + 0x18);
    *puVar1 = *puVar1 & 0xfffe;
    FUN_0058ceb0(0xfa1,0x40000000);
    iVar6 = FUN_00403190(1);
    iVar7 = FUN_00403190(2);
    iVar3 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x24);
    fVar4 = *(float *)(iVar3 + 0x54);
    fVar5 = *(float *)(iVar3 + 0x5c);
    fVar8 = (float10)FUN_0057e330();
    fVar9 = (float10)FUN_0057d7a0();
    fVar9 = (fVar9 / (float10)DAT_00b06c4c) * (float10)iVar6 + (float10)fVar4;
    dVar2 = (double)fVar9;
    fVar10 = (float10)(double)(fVar8 - (float10)2.0);
    if (fVar10 < fVar9) {
      fVar9 = fVar10;
    }
    fVar11 = (float10)FUN_0057e2d0();
    fVar10 = fVar11 - (float10)2.0;
    if (fVar11 - (float10)2.0 <= (float10)(double)fVar9) {
      fVar10 = (float10)dVar2;
      fVar9 = (float10)(double)(fVar8 - (float10)2.0);
      if (fVar9 < fVar10) {
        fVar10 = fVar9;
      }
    }
    fVar4 = (float)fVar10;
    fVar8 = (float10)FUN_00588bd0(0xfab);
    fVar10 = (float10)FUN_0057e3f0();
    fVar9 = (float10)FUN_0057d7f0();
    fVar9 = (float10)fVar5 - (fVar9 / (float10)DAT_00b06c50) * (float10)iVar7;
    dVar2 = (double)fVar9;
    fVar11 = (float10)(double)(fVar10 + (float10)1.0);
    if (fVar11 < fVar9) {
      fVar9 = fVar11;
    }
    fVar12 = (float10)FUN_0057e390();
    fVar11 = fVar12 + (float10)1.0;
    if (fVar12 + (float10)1.0 <= (float10)(float)fVar9) {
      fVar11 = (float10)dVar2;
      fVar9 = (float10)(double)(fVar10 + (float10)1.0);
      if (fVar9 < fVar11) {
        fVar11 = fVar9;
      }
    }
    fVar5 = (float)fVar11;
    iVar3 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x24);
    *(float *)(iVar3 + 0x54) = fVar4;
    *(float *)(iVar3 + 0x58) = (float)(fVar8 * (float10)-0.00800000037997961);
    *(float *)(iVar3 + 0x5c) = fVar5;
    if ((fVar4 != *(float *)(in_ECX + 0x20)) || (fVar5 != *(float *)(in_ECX + 0x28))) {
      *(float *)(in_ECX + 0x20) = fVar4;
      *(float *)(in_ECX + 0x24) = (float)(fVar8 * (float10)-0.00800000037997961);
      *(float *)(in_ECX + 0x28) = fVar5;
      *(undefined1 *)(in_ECX + 0xb9) = 1;
      iVar3 = DAT_00b06c4c;
      fVar9 = (float10)FUN_0057d7a0();
      *(float *)(in_ECX + 0x2c) =
           (float)((float10)iVar3 * (float10)0.5 +
                  ((float10)iVar3 / fVar9) * (float10)*(float *)(in_ECX + 0x20));
      fVar9 = (float10)FUN_00588bd0(0xfab);
      *(float *)(in_ECX + 0x30) = (float)(fVar9 * (float10)-0.00800000037997961);
      iVar3 = DAT_00b06c50;
      fVar4 = (float)DAT_00b06c50;
      fVar9 = (float10)FUN_0057d7f0();
      *(float *)(in_ECX + 0x34) =
           (float)((float10)(fVar4 * 0.5) -
                  ((float10)iVar3 / fVar9) * (float10)*(float *)(in_ECX + 0x28));
    }
    FUN_00707370(0,1);
  }
  return;
}



void FUN_0057ea20(int *param_1,float param_2,float param_3)

{
  ushort *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  float *pfVar13;
  uint uVar14;
  float10 fVar15;
  
  piVar6 = param_1;
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar7 = (**(code **)(*param_1 + 8))();
  iVar8 = FUN_00707530(2);
  iVar9 = FUN_00588e60(iVar7);
  if ((iVar9 == 0) && (iVar7 != 0)) {
    iVar9 = FUN_00588e60(*(undefined4 *)(iVar7 + 0x1c));
  }
  param_1 = (int *)param_3;
  if (iVar9 != 0) {
    fVar15 = (float10)FUN_00588bd0(0xfa9);
    if ((float10)2.0 == fVar15) {
      if (ABS(param_2) < 1.0) {
        FUN_0058ceb0(0xfa1,0x3f800000);
        return;
      }
      FUN_0058ceb0(0xfa1,(float)(float10)2.0);
      return;
    }
    fVar15 = (float10)FUN_00588bd0(0xfa7);
    param_1 = (int *)(float)(fVar15 / (float10)255.0);
  }
  iVar10 = FUN_00560920(&DAT_00b3fcd4,piVar6);
  if (iVar10 != 0) {
    iVar2 = *(int *)(*(int *)(iVar10 + 0xb4) + 0x24);
    if (iVar2 != 0) {
      uVar11 = (uint)*(ushort *)(*(int *)(iVar10 + 0xb4) + 8);
      if (uVar11 != 0) {
        pfVar13 = (float *)(iVar2 + 0xc);
        do {
          if (0.0001 <= ABS(param_2)) {
            fVar4 = (float)param_1 * param_2;
            fVar5 = (float)param_1;
            if (fVar4 < (float)param_1) {
              fVar5 = fVar4;
            }
            if (0.0 <= fVar5) {
              if ((float)param_1 <= fVar4) {
                fVar4 = (float)param_1;
              }
            }
            else {
              fVar4 = 0.0;
            }
            *pfVar13 = fVar4;
          }
          else {
            *pfVar13 = 0.0;
          }
          pfVar13 = pfVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar1 = (ushort *)(*(int *)(iVar10 + 0xb4) + 0x2e);
      *puVar1 = *puVar1 | 4;
      goto LAB_0057ec12;
    }
  }
  if (iVar8 != 0) {
    if (0.0001 <= ABS(param_2)) {
      fVar4 = (float)param_1 * param_2;
      fVar5 = (float)param_1;
      if (fVar4 < (float)param_1) {
        fVar5 = fVar4;
      }
      fVar3 = 0.0;
      if ((0.0 <= fVar5) && (fVar3 = fVar4, (float)param_1 <= fVar4)) {
        fVar3 = (float)param_1;
      }
      *(float *)(iVar8 + 0x50) = fVar3;
    }
    else {
      *(undefined4 *)(iVar8 + 0x50) = 0;
    }
    *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
  }
LAB_0057ec12:
  if ((iVar7 != 0) &&
     ((iVar9 == 0 || (fVar15 = (float10)FUN_00588bd0(0xfa8), fVar15 != (float10)9000.0)))) {
    uVar11 = (uint)*(ushort *)(iVar7 + 0xb6);
    uVar14 = 0;
    if (uVar11 != 0) {
      do {
        if (uVar14 < uVar11) {
          uVar12 = *(undefined4 *)(*(int *)(iVar7 + 0xb0) + uVar14 * 4);
        }
        else {
          uVar12 = 0;
        }
        FUN_0057ea20(uVar12,param_2,param_1);
        uVar11 = (uint)*(ushort *)(iVar7 + 0xb6);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar11);
      return;
    }
  }
  return;
}



void FUN_0057ecb0(void)

{
  ushort *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  undefined1 local_4 [4];
  
  puVar2 = *(undefined4 **)(DAT_00b333c4 + 0x5d8);
  (**(code **)(**(int **)(in_ECX + 0x60) + 0x88))(local_4);
  if (((puVar2 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar2 + 1), LVar3 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  puVar1 = (ushort *)(*(int *)(in_ECX + 0x60) + 0x18);
  *puVar1 = *puVar1 | 1;
  FUN_00668d00(0);
  return;
}



int * FUN_0057ed20(int *param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_30 [10];
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_009beaa8;
  local_30[9] = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)(local_30 + 9);
  if (param_1 == (int *)0x0) {
    iVar3 = FUN_00401f00(0xf0,uVar2);
    local_4 = param_1;
    if (iVar3 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)FUN_004114e0(param_2,0,0);
    }
    local_4 = (int *)0xffffffff;
  }
  local_4 = (int *)0xffffffff;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0x3f800000;
  local_30[3] = 0x3f800000;
  local_30[7] = 0x3f800000;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[8] = 0;
  piVar5 = local_30;
  piVar6 = (int *)(param_1[0x37] + 0x30);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  puVar4 = (undefined4 *)FUN_00401f00(0x1c,uVar2);
  local_4 = (int *)0x1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar4 = &PTR_FUN_00a2fdb4;
    *(undefined2 *)(puVar4 + 6) = 0xf;
  }
  local_4 = (int *)0xffffffff;
  *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) & 0xfffd | 1;
  FUN_00405680(puVar4);
  FUN_00405680(*(undefined4 *)(in_ECX + 0x78));
  if (param_3 == '\0') {
    FUN_005730b0(param_1,*(undefined4 *)(in_ECX + 0x74),1);
    iVar3 = FUN_00401f00(0xdc);
    local_4 = (int *)0x2;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0070b780(0);
    }
    local_4 = (int *)0xffffffff;
    *(int *)(in_ECX + 0x54) = iVar3;
    if (iVar3 == 0) {
      FUN_006f7070(&DAT_00a2f7ec,".\\Interface\\InterfaceManager.cpp",0xb6d);
    }
    FUN_006ff420("InterfaceManager: Main Root");
    (**(code **)(*param_1 + 0x84))(*(undefined4 *)(in_ECX + 0x54),0);
    uVar1 = *(undefined4 *)(in_ECX + 0x74);
    iVar3 = *(int *)(in_ECX + 0x54);
    *(undefined4 *)(iVar3 + 0x54) = 0;
    *(undefined4 *)(iVar3 + 0x58) = uVar1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    iVar3 = FUN_00401f00(0x114);
    local_30[9] = 3;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00719760();
    }
    local_30[9] = 0xffffffff;
    FUN_006ff420("MainSceneLight");
    *(int *)(iVar3 + 0xb8) = *(int *)(iVar3 + 0xb8) + 1;
    *(undefined4 *)(iVar3 + 0xe0) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3f800000;
    FUN_00708e40(*(undefined4 *)(in_ECX + 0x54));
    (**(code **)(**(int **)(in_ECX + 0x54) + 0x84))(iVar3,1);
    puVar4 = (undefined4 *)FUN_00401f00(0x1c);
    local_30[7] = 4;
    local_4 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar4 = &PTR_FUN_00a2fd04;
      *(undefined2 *)(puVar4 + 6) = 8;
    }
    *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) & 0xffef | 0x28;
    local_30[7] = 0xffffffff;
    FUN_00405680(puVar4);
    local_4 = (int *)FUN_00401f00(0xdc);
    local_30[7] = 5;
    if (local_4 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0070b780(0);
    }
    local_30[7] = 0xffffffff;
    *(int *)(in_ECX + 0x58) = iVar3;
    if (iVar3 == 0) {
      FUN_006f7070(&DAT_00a2f7ec,".\\Interface\\InterfaceManager.cpp",0xb7f);
    }
    FUN_006ff420("InterfaceManager: Cursor Root");
    (**(code **)(*param_1 + 0x84))(*(undefined4 *)(in_ECX + 0x58),0);
    local_30[9] = *(undefined4 *)(in_ECX + 0x74);
    iVar3 = *(int *)(in_ECX + 0x58);
    *(undefined4 *)(iVar3 + 0x54) = 0;
    *(int *)(iVar3 + 0x58) = local_30[9];
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    local_30[9] = FUN_00401f00(0x114);
    local_30[5] = 6;
    if (local_30[9] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00719760();
    }
    local_30[5] = 0xffffffff;
    FUN_006ff420("CursorSceneLight");
    *(int *)(iVar3 + 0xb8) = *(int *)(iVar3 + 0xb8) + 1;
    *(undefined4 *)(iVar3 + 0xe0) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3f800000;
    FUN_00708e40(*(undefined4 *)(in_ECX + 0x58));
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x84))(iVar3,1);
    puVar4 = (undefined4 *)FUN_00401f00(0x1c);
    local_4 = (int *)0x7;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar4 = &PTR_FUN_00a2fd04;
      *(undefined2 *)(puVar4 + 6) = 8;
    }
    *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) & 0xffef | 0x28;
    local_4 = (int *)0xffffffff;
    FUN_00405680(puVar4);
    FUN_005730b0(param_1,*(undefined4 *)(in_ECX + 0x74),0);
  }
  else {
    FUN_00411160(0x420c0000,0);
  }
  *unaff_FS_OFFSET = local_30[9];
  return param_1;
}



void FUN_0057f170(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  LONG LVar9;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009beae6;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff40;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = DAT_00b3f928;
  iVar8 = in_ECX[1];
  iVar1 = *(int *)(iVar8 + 0xe4);
  FUN_0070df30(*(undefined4 *)(iVar1 + 8));
  puVar2 = (undefined4 *)piVar5[2];
  local_4 = 0;
  bVar4 = false;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_007b7650(uVar6);
  DAT_00b42ce3 = 1;
  if ((DAT_00b3f928[0x80] == 0) && (DAT_00b3f928[0x81] == 0)) {
    if (param_1 == 0) {
      FUN_007d71c0(6,0);
      bVar4 = true;
    }
    else {
      uVar7 = FUN_007d6fe0();
      FUN_007d7280(6,uVar7);
      bVar4 = true;
    }
  }
  else if (((piVar5[0x80] == 1) || (piVar5[0x81] == 1)) && ((char)piVar5[0x83] == '\x01')) {
    (**(code **)(*piVar5 + 0x13c))(0,6);
  }
  if (*(float *)(iVar8 + 0x2c) == 0.0) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    if (DAT_00b3f940 != 0) {
      if (*(char *)(DAT_00b3f940 + 0x1b0) != '\0') {
        FUN_00701ad0();
      }
      FUN_00404d60(0xffffffff);
    }
    FUN_0070c0b0(*(undefined4 *)(iVar8 + 0xdc),iVar8,iVar1,0);
    iVar8 = DAT_00b3f940;
    if (DAT_00b3f940 != 0) {
      InterlockedIncrement((LONG *)(DAT_00b3f940 + 400));
      ReleaseSemaphore(*(HANDLE *)(iVar8 + 0x198),1,(LPLONG)0x0);
    }
  }
  if (param_1 == 0) {
    if ((bVar3) && (((piVar5[0x80] == 1 || (piVar5[0x81] == 1)) && ((char)piVar5[0x83] == '\x01'))))
    {
      (**(code **)(*piVar5 + 0x13c))(0,6);
    }
  }
  else {
    FUN_007d72d0();
    FUN_007d71c0(7,0);
    iVar8 = FUN_007b4290(0xc);
    FUN_007b4900(*(undefined4 *)(iVar8 + 4),piVar5,param_1,0);
  }
  if ((DAT_00b1397a < 7) || (*(int *)(DAT_00b13974 + 0x18) == 0)) {
    FUN_005903e0();
  }
  else {
    FUN_0058fba0(0);
  }
  if ((char)in_ECX[0x1f] != '\0') {
    FUN_00707370(0,0);
  }
  *(undefined1 *)(in_ECX + 0x1f) = 0;
  iVar8 = *in_ECX;
  FUN_00701970(*(undefined4 *)(iVar8 + 0xdc));
  if ((DAT_00b33428 != 0) && (*(int *)(DAT_00b33428 + 0x20) == 2)) {
    FUN_00410810(0,1);
  }
  if (DAT_00b3f940 != 0) {
    if (*(char *)(DAT_00b3f940 + 0x1b0) != '\0') {
      FUN_00701ad0();
    }
    FUN_00404d60(3);
  }
  FUN_0070e0a0(*(undefined4 *)(iVar8 + 0xdc),iVar8,0);
  iVar8 = DAT_00b3f940;
  DAT_00b42ce3 = 0;
  if (DAT_00b3f940 != 0) {
    InterlockedIncrement((LONG *)(DAT_00b3f940 + 400));
    ReleaseSemaphore(*(HANDLE *)(iVar8 + 0x198),1,(LPLONG)0x0);
  }
  if (bVar4) {
    FUN_007d7210();
  }
  local_4 = local_4 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    LVar9 = InterlockedDecrement(puVar2 + 1);
    if (LVar9 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0070dfa0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057f490(float param_1,float param_2)

{
  ushort *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  float10 fVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((_DAT_00b3a6f4 & 1) == 0) {
    _DAT_00b3a6f4 = _DAT_00b3a6f4 | 1;
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x24);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(iVar2 + 0x5c);
  fVar3 = (float)DAT_00b06c4c;
  fVar5 = (float)DAT_00b06c50;
  if (fVar3 <= fVar5) {
    local_18 = 1280.0;
    fVar3 = 1280.0;
  }
  else {
    local_18 = (fVar3 / fVar5) * 960.0;
    fVar3 = (fVar3 / fVar5) * 960.0;
  }
  *(float *)(in_ECX + 0x20) = local_18 * param_1 - fVar3 * 0.5;
  fVar3 = (float)DAT_00b06c4c;
  fVar5 = (float)DAT_00b06c50;
  if (fVar5 <= fVar3) {
    local_14 = 960.0;
    fVar3 = 960.0;
  }
  else {
    local_14 = (fVar5 / fVar3) * 1280.0;
    fVar3 = (fVar5 / fVar3) * 1280.0;
  }
  *(float *)(in_ECX + 0x28) = fVar3 * 0.5 - local_14 * param_2;
  iVar2 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x24);
  *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(in_ECX + 0x28);
  FUN_00707370(0,1);
  fVar3 = (float)DAT_00b06c4c;
  fVar5 = (float)DAT_00b06c50;
  if (fVar3 <= fVar5) {
    fVar4 = 1280.0;
  }
  else {
    fVar4 = (fVar3 / fVar5) * 960.0;
  }
  fVar4 = (*(float *)(in_ECX + 0x20) + 3.0) * (fVar3 / fVar4) + fVar3 * 0.5;
  if (fVar5 <= fVar3) {
    fVar3 = 960.0;
  }
  else {
    fVar3 = (fVar5 / fVar3) * 1280.0;
  }
  fVar3 = fVar5 * 0.5 - (fVar5 / fVar3) * *(float *)(in_ECX + 0x28);
  if (((_DAT_00b3a6e8 != fVar4) || (_DAT_00b3a6ec != 0.0)) || (_DAT_00b3a6f0 != fVar3)) {
    _DAT_00b3a6ec = 0.0;
    _DAT_00b3a6e8 = fVar4;
    _DAT_00b3a6f0 = fVar3;
    fVar6 = (float10)FUN_00588bd0(0xfab);
    *(float *)(in_ECX + 0x2c) = fVar4;
    *(float *)(in_ECX + 0x30) = (float)(fVar6 * (float10)-0.00800000037997961);
    *(float *)(in_ECX + 0x34) = fVar3;
    *(undefined1 *)(in_ECX + 0xb9) = 1;
    if (*(char *)(in_ECX + 8) == '\x02') {
      puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x24) + 0x18);
      *puVar1 = *puVar1 & 0xfffe;
      FUN_0058ceb0(0xfa1,0x40000000);
    }
  }
  return;
}



undefined1 * FUN_0057f7a0(int param_1,int param_2)

{
  undefined1 *puVar1;
  int in_ECX;
  
  if (param_1 == 2) {
    if ((param_2 == 0x2a) || (param_2 == 0x36)) {
      *(uint *)(in_ECX + 0x118) = *(uint *)(in_ECX + 0x118) & 0xfffb;
      *(undefined1 *)(in_ECX + 0x114) = 0;
    }
    else if ((param_2 == 0x38) || (param_2 == 0xb8)) {
      *(uint *)(in_ECX + 0x118) = *(uint *)(in_ECX + 0x118) & 0xfffe;
    }
    else if ((param_2 == 0x1d) || (param_2 == 0x9d)) {
      *(uint *)(in_ECX + 0x118) = *(uint *)(in_ECX + 0x118) & 0xfffd;
    }
    *(undefined4 *)(in_ECX + 0x120) = DAT_00b33ea0;
    *(undefined4 *)(in_ECX + 0x124) = 0;
    *(undefined4 *)(in_ECX + 0x11c) = 0;
    return (undefined1 *)0x0;
  }
  if (param_1 != 1) {
    return (undefined1 *)0x0;
  }
  puVar1 = (undefined1 *)FUN_00403cf0(param_2,*(undefined1 *)(in_ECX + 0x114));
  if (puVar1 != (undefined1 *)0x1b) {
    if (puVar1 == (undefined1 *)0x8) {
      *(undefined4 *)(in_ECX + 0x120) = DAT_00b33ea0;
      *(undefined4 *)(in_ECX + 0x124) = 0;
      *(undefined4 *)(in_ECX + 0x11c) = 0x80000000;
      return (undefined1 *)0x80000000;
    }
    if (puVar1 != (undefined1 *)0x7c) {
      if (puVar1 == (undefined1 *)0xd) {
        return (undefined1 *)0x80000008;
      }
      if ((param_2 == 0x2a) || (param_2 == 0x36)) {
        *(uint *)(in_ECX + 0x118) = *(uint *)(in_ECX + 0x118) | 4;
        *(undefined1 *)(in_ECX + 0x114) = 1;
        return (undefined1 *)0x0;
      }
      if ((param_2 == 0x38) || (param_2 == 0xb8)) {
        *(uint *)(in_ECX + 0x118) = *(uint *)(in_ECX + 0x118) | 1;
        return (undefined1 *)0x0;
      }
      if ((param_2 == 0x1d) || (param_2 == 0x9d)) {
        *(uint *)(in_ECX + 0x118) = *(uint *)(in_ECX + 0x118) | 2;
        return (undefined1 *)0x0;
      }
      if (param_2 == 0xcb) {
        FUN_0057dc30(0x80000001);
        return (undefined1 *)0x80000001;
      }
      if (param_2 == 0xcd) {
        FUN_0057dc30(&DAT_80000002);
        return &DAT_80000002;
      }
      if (param_2 == 200) {
        return (undefined1 *)0x80000003;
      }
      if (param_2 == 0xd0) {
        return (undefined1 *)0x80000004;
      }
      if (param_2 == 199) {
        return (undefined1 *)0x80000005;
      }
      if (param_2 != 0xcf) {
        if (param_2 == 0xd1) {
          return (undefined1 *)0x8000000a;
        }
        if (param_2 != 0xc9) {
          if (param_2 != 0xd3) {
            return puVar1;
          }
          FUN_0057dc30(0x80000007);
          return (undefined1 *)0x80000007;
        }
        return (undefined1 *)0x80000009;
      }
      return (undefined1 *)0x80000006;
    }
  }
  return (undefined1 *)0x0;
}



void FUN_0057f9f0(float param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  float10 fVar6;
  float fVar7;
  
  fVar7 = param_1;
  if ((param_1 != 0.0) && (fVar6 = (float10)FUN_00588bd0(0xff6), fVar6 == (float10)109.0)) {
    param_1 = 0.0;
    iVar3 = FUN_0058e3b0(0xff5,&param_1);
    if (iVar3 != 0) {
      FUN_0058ceb0(0xfb3,0xc97423f0);
      fVar6 = (float10)FUN_00588bd0(0xff5);
      FUN_0058ceb0(0xfb3,(float)fVar6);
      FUN_0058ceb0(0xfb3,0);
    }
  }
  if (((*(float *)(in_ECX + 0x88) != 0.0) && (*(float *)(in_ECX + 0x88) != fVar7)) &&
     (fVar6 = (float10)FUN_00588bd0(0xff0), (float10)0.0 < fVar6)) {
    *(int *)(in_ECX + 0x8c) = *(int *)(in_ECX + 0x8c) + 1;
    fVar1 = (float)*(int *)(in_ECX + 0x8c);
    if (*(int *)(in_ECX + 0x8c) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_0058ceb0(0xff0,fVar1);
  }
  if (fVar7 == 0.0) {
    if (*(int *)(in_ECX + 0x88) == 0) goto LAB_0057fd45;
  }
  else {
    if (*(int *)(in_ECX + 0x98) != 0) {
      FUN_0058ceb0(0xfdd,0);
      piVar4 = (int *)FUN_005898f0();
      uVar5 = *(undefined4 *)(in_ECX + 0x98);
      iVar3 = *piVar4;
      FUN_00588bd0(0xfa8);
      uVar5 = FUN_009828c0(uVar5);
      (**(code **)(iVar3 + 0x14))(uVar5);
    }
    *(undefined4 *)(in_ECX + 0x98) = 0;
    *(undefined4 *)(in_ECX + 0x9c) = 0;
    if (param_2 == 0xfdd) {
      if (*(float *)(in_ECX + 0x88) == fVar7) {
        return;
      }
      if (*(float *)(in_ECX + 0x88) != 0.0) {
        FUN_0058ceb0(0xfdd,0);
        piVar4 = (int *)FUN_005898f0();
        uVar5 = *(undefined4 *)(in_ECX + 0x88);
        iVar3 = *piVar4;
        FUN_00588bd0(0xfa8);
        uVar5 = FUN_009828c0(uVar5);
        (**(code **)(iVar3 + 0x14))(uVar5);
      }
      *(float *)(in_ECX + 0x88) = fVar7;
      fVar6 = (float10)FUN_00588bd0(0xff0);
      if ((float10)0.0 < fVar6) {
        *(int *)(in_ECX + 0x8c) = *(int *)(in_ECX + 0x8c) + 1;
        FUN_0057d300(0xff0,*(undefined4 *)(in_ECX + 0x8c));
      }
      FUN_0058ceb0(0xfdd,0x3f800000);
      piVar4 = (int *)FUN_005898f0();
      uVar5 = *(undefined4 *)(in_ECX + 0x88);
      iVar3 = *piVar4;
      FUN_00588bd0(0xfa8);
      uVar5 = FUN_009828c0(uVar5);
      (**(code **)(iVar3 + 0x10))(uVar5);
      return;
    }
    if (param_2 != 0xfe1) {
      return;
    }
    FUN_00588bd0(0xfe5);
    iVar3 = FUN_009828c0();
    if (iVar3 != 0) {
      FUN_0057de50(iVar3);
    }
    fVar6 = (float10)FUN_00588bd0(0xfe2);
    param_1 = (float)(fVar6 + (float10)1.0);
    FUN_0058ceb0(0xfe3,param_1);
    FUN_0058ceb0(0xfe1,0x3f800000);
    FUN_0058ceb0(0xfe1,0);
    piVar4 = (int *)FUN_005898f0();
    iVar3 = *piVar4;
    FUN_00588bd0(0xfa8);
    uVar5 = FUN_009828c0(fVar7);
    (**(code **)(iVar3 + 0xc))(uVar5);
    FUN_0058fba0(0);
    if (*(int *)(in_ECX + 0x88) == 0) {
      return;
    }
    cVar2 = FUN_005893b0();
    if ((cVar2 != '\0') && (fVar6 = (float10)FUN_00588bd0(0xfc9), fVar6 == (float10)2.0)) {
      return;
    }
  }
  FUN_0058ceb0(0xfdd,0);
  piVar4 = (int *)FUN_005898f0();
  uVar5 = *(undefined4 *)(in_ECX + 0x88);
  iVar3 = *piVar4;
  FUN_00588bd0(0xfa8);
  uVar5 = FUN_009828c0(uVar5);
  (**(code **)(iVar3 + 0x14))(uVar5);
LAB_0057fd45:
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  return;
}



void FUN_0057fd60(void)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 0x80000000;
  iVar2 = FUN_0057da90(&local_4,0);
  if (iVar2 != 0) {
    FUN_0057f9f0(iVar2,0xfdd,0);
    puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x24) + 0x18);
    *puVar1 = *puVar1 | 1;
    FUN_0058ceb0(0xfa1,0x3f800000);
    *(undefined1 *)(in_ECX + 0xb9) = 0;
    return;
  }
  FUN_0057f9f0(0,0xfdd,0);
  return;
}



void FUN_0057fdc0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x84);
  if ((puVar1 == (undefined4 *)0x0) || (param_1 != 2)) {
    if (param_1 == 3) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x84) = 0;
    }
  }
  else {
    FUN_00588bd0(0xfa1);
  }
  if (*(undefined4 **)(in_ECX + 0x84) == (undefined4 *)0x0) {
    uVar2 = FUN_00590420("Data\\Menus\\Main\\safe_zone.xml");
    *(undefined4 *)(in_ECX + 0x84) = uVar2;
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_0057ea20(*(undefined4 *)(*(int *)(in_ECX + 0x84) + 0x24),0x3f800000,0);
    return;
  }
  (**(code **)**(undefined4 **)(in_ECX + 0x84))(1);
  *(undefined4 *)(in_ECX + 0x84) = 0;
  return;
}



void FUN_0057fe70(void)

{
  undefined1 *in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  *(undefined2 *)(in_ECX + 0x1e) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined2 *)(in_ECX + 0x24) = 0;
  *(undefined2 *)(in_ECX + 0x26) = 0;
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  in_ECX[8] = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 1;
  return;
}



void FUN_0057feb0(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009beb1b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x20),uVar1);
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined2 *)(in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 0x24) = 0;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x18));
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined2 *)(in_ECX + 0x1e) = 0;
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0057ff20(undefined4 param_1)

{
  FUN_004028d0(param_1,0);
  FUN_004028d0(param_1,0);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0057ff50(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *in_ECX;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_408;
  char local_404 [1024];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_408;
  if (*in_ECX == '\0') {
    return;
  }
  local_408 = in_ECX + 0x18;
  if (*(ushort *)(in_ECX + 0x1c) == 0xffff) {
    pcVar3 = *(char **)local_408;
    pcVar5 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar5;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 0x1c);
  }
  if (uVar4 == 0) {
    local_404[0] = '\0';
  }
  else {
    pcVar5 = *(char **)local_408;
    iVar1 = -(int)pcVar5;
    do {
      cVar2 = *pcVar5;
      pcVar5[(int)(local_404 + iVar1)] = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
  }
  if (*(ushort *)(in_ECX + 0x1c) == 0xffff) {
    pcVar3 = *(char **)local_408;
    pcVar5 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar5;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 0x1c);
  }
  switch(param_1) {
  case 0x80000000:
    iVar1 = *(int *)(in_ECX + 4);
    if (iVar1 < 1) {
      return;
    }
    iVar7 = iVar1 + -1;
    if (iVar7 < (int)uVar4) {
      pcVar5 = local_404 + iVar1;
      pcVar3 = local_404 + iVar1 + -1;
      for (iVar6 = uVar4 - iVar7; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    *(int *)(in_ECX + 4) = iVar7;
    local_404[uVar4 - 1] = '\0';
    goto LAB_005800cd;
  case 0x80000001:
    if (*(int *)(in_ECX + 4) < 1) {
      return;
    }
    uVar4 = *(int *)(in_ECX + 4) - 1;
  case 0x80000006:
    *(uint *)(in_ECX + 4) = uVar4;
    break;
  case 0x80000002:
    if (*(int *)(in_ECX + 4) < (int)uVar4) {
      *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    }
    break;
  default:
    uVar8 = uVar4;
    if (*(int *)(in_ECX + 4) < (int)uVar4) {
      iVar1 = *(int *)(in_ECX + 4);
      do {
        local_404[uVar8] = local_404[uVar8 - 1];
        uVar8 = uVar8 - 1;
      } while (iVar1 < (int)uVar8);
    }
    iVar1 = *(int *)(in_ECX + 0xc);
    local_404[uVar8] = (char)param_1;
    local_404[uVar4 + 1] = '\0';
    if ((iVar1 != -1) && (cVar2 = FUN_0057de00(local_404), cVar2 == '\0')) {
      return;
    }
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    goto LAB_005800cd;
  case 0x80000005:
    in_ECX[4] = '\0';
    in_ECX[5] = '\0';
    in_ECX[6] = '\0';
    in_ECX[7] = '\0';
    break;
  case 0x80000007:
    iVar1 = *(int *)(in_ECX + 4);
    if ((int)uVar4 <= iVar1) {
      return;
    }
    pcVar5 = local_404 + iVar1 + 1;
    pcVar3 = local_404 + iVar1;
    for (iVar7 = uVar4 - iVar1; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_404[uVar4 - 1] = '\0';
LAB_005800cd:
    FUN_004028d0(local_404,0);
    break;
  case 0x80000008:
    *in_ECX = '\0';
    break;
  case 0x80000009:
  case 0x8000000a:
    break;
  }
  return;
}


