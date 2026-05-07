
uint FUN_00530020(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint3 in_ECX;
  undefined4 uStack_4;
  
  uStack_4 = (uint)in_ECX;
  uVar1 = FUN_0052f010((int)&uStack_4 + 3,param_1,param_2,0,0,0);
  return uVar1 & ~-(uint)(uStack_4._3_1_ != '\0');
}



void FUN_00530050(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *in_ECX;
  undefined2 uVar8;
  uint uVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b8b0a;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a5555c;
  in_ECX[6] = &PTR_FUN_00a55548;
  local_4 = 2;
  if (in_ECX != (undefined4 *)0xffffffd8) {
    while( true ) {
      uVar9 = 0;
      iVar2 = in_ECX[10];
      if (iVar2 == 0) break;
      uVar3 = *(uint *)(iVar2 + 0x10);
      if (uVar3 != 0) {
        do {
          if (uVar9 < *(uint *)(iVar2 + 0x10)) {
            piVar10 = *(int **)(*(int *)(iVar2 + 8) + uVar9 * 4);
            if (piVar10 != (int *)0x0) {
              if (uVar9 < *(uint *)(iVar2 + 0x10)) {
                if (*(int *)(*(int *)(iVar2 + 8) + uVar9 * 4) != 0) {
                  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
                }
              }
              else {
                *(uint *)(iVar2 + 0x10) = uVar9 + 1;
              }
              *(undefined4 *)(*(int *)(iVar2 + 8) + uVar9 * 4) = 0;
              *(undefined2 *)(piVar10 + 8) = 0xffff;
              (**(code **)(*piVar10 + 0x10))(1);
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar3);
      }
      *(undefined ***)(iVar2 + 4) = &PTR__scalar_deleting_destructor__00a5547c;
      FUN_00401f20(*(undefined4 *)(iVar2 + 8),uVar7);
      FUN_00401f20(iVar2);
      puVar4 = (undefined4 *)in_ECX[0xb];
      if (puVar4 == (undefined4 *)0x0) {
        in_ECX[10] = 0;
      }
      else {
        in_ECX[0xb] = puVar4[1];
        in_ECX[10] = *puVar4;
        FUN_00401f20(puVar4,uVar7);
      }
    }
  }
  piVar6 = DAT_00b36510;
  piVar10 = (int *)0x0;
  if (DAT_00b36510 != (int *)0x0) {
    piVar1 = DAT_00b36510 + 1;
    piVar5 = (int *)DAT_00b36510[1];
    while (piVar5 != (int *)0x0) {
      iVar2 = *piVar1;
      piVar10 = *(int **)(iVar2 + 4);
      FUN_00401f20(iVar2,uVar7);
      *piVar1 = (int)piVar10;
      piVar5 = piVar10;
    }
    *piVar6 = (int)piVar10;
    FUN_00401f20(DAT_00b36510,uVar7);
    DAT_00b36510 = piVar10;
  }
  thunk_FUN_0046b170();
  FUN_00401f20(in_ECX[0xd]);
  in_ECX[0xd] = piVar10;
  uVar8 = SUB42(piVar10,0);
  *(undefined2 *)((int)in_ECX + 0x3a) = uVar8;
  *(undefined2 *)(in_ECX + 0xe) = uVar8;
  FUN_00401f20(in_ECX[7]);
  in_ECX[7] = piVar10;
  *(undefined2 *)((int)in_ECX + 0x22) = uVar8;
  *(undefined2 *)(in_ECX + 8) = uVar8;
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_005301e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '9') {
    FUN_00451210(in_ECX);
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 < 0x49545352) {
        if (iVar2 == 0x49545351) {
          local_c = 0;
          FUN_004510e0(&local_c);
          uVar3 = FUN_0046b680(0xffffffff);
          FUN_0046bb20(&local_c,uVar3);
          iVar2 = FUN_0052fc40(local_c,0);
          if (iVar2 != 0) {
            FUN_00452910(*(int *)(iVar2 + 0xc) + 100);
            *(undefined4 *)(iVar2 + 0x18) = 10;
          }
        }
        else if (iVar2 == 0x41544144) {
          FUN_00450c20(in_ECX + 9,1);
        }
        else if (iVar2 == 0x44494445) {
          FUN_00450c20(&stack0xffffffec,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
        }
      }
      else if (iVar2 == 0x4c4c5546) {
        if (in_ECX == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = in_ECX + 6;
        }
        FUN_0046c7a0(piVar4,param_1);
      }
      else if (iVar2 == 0x58444958) {
        FUN_004510e0(in_ECX + 0xc);
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_004510b0();
    }
    uVar3 = 1;
    DAT_00b3650c = in_ECX;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_00530340(byte param_1)

{
  FUN_00530050();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00530430(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [8];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8b38;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    FUN_0056a850(param_1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  FUN_00434920(uVar1);
  local_4 = 0;
  FUN_0056a850(local_14);
  local_4 = 0xffffffff;
  thunk_FUN_0056a750();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_005304c0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  if (*(uint *)(in_ECX + 0xc) <= param_1) {
    return 0;
  }
  piVar1 = (int *)(*(int *)(in_ECX + 4) + param_1 * 4);
  iVar2 = *piVar1;
  *piVar1 = 0;
  if (iVar2 != 0) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
  }
  uVar3 = *(int *)(in_ECX + 0xc) - 1;
  if (param_1 == uVar3) {
    *(uint *)(in_ECX + 0xc) = uVar3;
  }
  return iVar2;
}



void FUN_00530500(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[3];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[3] + 4);
    FUN_00401f20(in_ECX[3]);
    in_ECX[3] = iVar1;
  }
  in_ECX[2] = 0;
  iVar1 = in_ECX[1];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[1] + 4);
    FUN_00401f20(in_ECX[1]);
    in_ECX[1] = iVar1;
  }
  *in_ECX = 0;
  return;
}



void FUN_00530590(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  int *piVar6;
  
  if ((param_1 != 0) && (*(short *)(in_ECX + 0x20) != -1)) {
    iVar3 = FUN_0052f520(in_ECX);
    piVar1 = *(int **)(iVar3 + 8);
    if (piVar1[*(ushort *)(in_ECX + 0x20)] == in_ECX) {
      FUN_005304c0((uint)*(ushort *)(in_ECX + 0x20));
    }
    else {
      uVar5 = *(uint *)(iVar3 + 0x10);
      uVar4 = 0;
      piVar6 = piVar1;
      if (0 < (int)uVar5) {
        do {
          if (*piVar6 == in_ECX) {
            if (uVar4 < uVar5) {
              iVar2 = piVar1[uVar4];
              piVar1[uVar4] = 0;
              if (iVar2 != 0) {
                *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
              }
              uVar5 = *(int *)(iVar3 + 0x10) - 1;
              if (uVar4 == uVar5) {
                *(uint *)(iVar3 + 0x10) = uVar5;
              }
            }
            break;
          }
          uVar4 = uVar4 + 1;
          piVar6 = piVar6 + 1;
        } while ((int)uVar4 < (int)uVar5);
      }
    }
    FUN_005a56f0();
    FUN_0052efe0(iVar3 + 4);
  }
  return;
}



void FUN_00530620(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = DAT_00b36584;
  while (iVar1 = DAT_00b36580, cVar2 = FUN_0046cb60(), cVar2 == '\0') {
    if (iVar1 != 0) {
      FUN_0052e1c0();
      FUN_00401f20(iVar1);
      piVar3 = DAT_00b36584;
    }
    if (piVar3 == (int *)0x0) {
      DAT_00b36580 = 0;
    }
    else {
      DAT_00b36584 = (int *)piVar3[1];
      DAT_00b36580 = *piVar3;
      FUN_00401f20(piVar3);
      piVar3 = DAT_00b36584;
    }
  }
  return;
}



void FUN_00530690(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  
  puVar1 = (undefined4 *)(in_ECX + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    while( true ) {
      cVar3 = FUN_0046cb60();
      if (cVar3 != '\0') break;
      puVar2 = *(undefined4 **)(in_ECX + 0x2c);
      if (puVar2 == (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x2c) = puVar2[1];
        *puVar1 = *puVar2;
        FUN_00401f20(puVar2);
      }
    }
  }
  return;
}



void FUN_005306d0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  if ((((*(uint *)(in_ECX + 8) >> 0xe & 1) == 0) && ((char)param_1 != '\0')) &&
     ((*(uint *)(in_ECX + 8) >> 3 & 1) != 0)) {
    piVar1 = (int *)FUN_0052f690();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x90))(1);
    }
  }
  FUN_0046c640(param_1);
  return;
}



void FUN_005307d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    if (((param_2 != 0) && (*(int *)(param_2 + 0xc) == 0)) &&
       (*(int *)(param_2 + 8) == DAT_00b060b4)) {
      iVar1 = FUN_0052f690();
      if (iVar1 != 0) {
        *param_1 = DAT_00b05e20;
        param_1[3] = 7;
        param_1[2] = *(undefined4 *)(iVar1 + 0xc);
        param_1[1] = 0;
        param_1[4] = 0;
      }
    }
  }
  return;
}



uint FUN_00530830(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint in_ECX;
  
  if ((((*(uint *)(in_ECX + 8) >> 5 & 1) != 0) || (param_2 == 0)) ||
     (((*(byte *)(in_ECX + 0x25) >> 2 & 1) != 0 && (*(char *)(in_ECX + 0x22) != '\0')))) {
    return in_ECX & 0xffffff00;
  }
  if ((*(int *)(param_2 + 0x54) == 0) && (*(int *)(param_2 + 0x50) == 0)) {
    uVar1 = FUN_0056a510(param_3,param_4,param_1,0);
    return uVar1;
  }
  if ((*(int *)(in_ECX + 0x1c) == 0) && (*(int *)(in_ECX + 0x18) == 0)) {
    uVar1 = FUN_0056a510(param_3,param_4,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_0056a510(param_3,param_4,param_1,(int *)(in_ECX + 0x18));
  return uVar1;
}



void FUN_005308d0(void)

{
  int in_ECX;
  
  FUN_0066c6a0(in_ECX + 0x28);
  return;
}



void FUN_005308e0(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
      iVar1 = *in_ECX;
      if (iVar1 != 0) {
        FUN_0052e1c0();
        FUN_00401f20(iVar1);
      }
      piVar2 = (int *)in_ECX[1];
      if (piVar2 == (int *)0x0) {
        *in_ECX = 0;
      }
      else {
        in_ECX[1] = piVar2[1];
        *in_ECX = *piVar2;
        FUN_00401f20(piVar2);
      }
    }
  }
  return;
}



void FUN_00530930(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_005308e0(uVar3);
  while ((param_1 != (int *)0x0 && (iVar1 = *param_1, iVar1 != 0))) {
    param_1 = (int *)param_1[1];
    iVar4 = FUN_00401f00(0x18);
    local_4 = 0;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0052e150();
    }
    local_4 = 0xffffffff;
    FUN_0052e110(iVar1);
    if (iVar4 != 0) {
      piVar5 = in_ECX + 1;
      iVar1 = *piVar5;
      piVar2 = in_ECX;
      while (iVar1 != 0) {
        piVar2 = (int *)*piVar5;
        piVar5 = piVar2 + 1;
        iVar1 = piVar2[1];
      }
      if (*piVar2 == 0) {
        *piVar2 = iVar4;
      }
      else {
        piVar5 = (int *)FUN_00401f00(8);
        if (piVar5 == (int *)0x0) {
          piVar2[1] = 0;
        }
        else {
          *piVar5 = iVar4;
          piVar5[1] = 0;
          piVar2[1] = (int)piVar5;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00530a10(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  
  if (param_2 != (int *)0x0) {
    FUN_00530500();
    piVar4 = param_2 + 2;
    while ((piVar4 != (int *)0x0 && (iVar1 = *piVar4, iVar1 != 0))) {
      piVar4 = (int *)piVar4[1];
      piVar5 = in_ECX + 2;
      iVar2 = in_ECX[3];
      while (iVar2 != 0) {
        piVar5 = (int *)piVar5[1];
        iVar2 = piVar5[1];
      }
      if (*piVar5 == 0) {
        *piVar5 = iVar1;
      }
      else {
        piVar3 = (int *)FUN_00401f00(8);
        if (piVar3 == (int *)0x0) {
          piVar5[1] = 0;
        }
        else {
          *piVar3 = iVar1;
          piVar3[1] = 0;
          piVar5[1] = (int)piVar3;
        }
      }
    }
    do {
      iVar1 = *param_2;
      if (iVar1 == 0) {
        return;
      }
      param_2 = (int *)param_2[1];
      piVar4 = in_ECX + 1;
      iVar2 = *piVar4;
      piVar5 = in_ECX;
      while (iVar2 != 0) {
        piVar5 = (int *)*piVar4;
        piVar4 = piVar5 + 1;
        iVar2 = piVar5[1];
      }
      if (*piVar5 == 0) {
        *piVar5 = iVar1;
      }
      else {
        piVar4 = (int *)FUN_00401f00(8);
        if (piVar4 == (int *)0x0) {
          piVar5[1] = 0;
        }
        else {
          *piVar4 = iVar1;
          piVar4[1] = 0;
          piVar5[1] = (int)piVar4;
        }
      }
    } while (param_2 != (int *)0x0);
  }
  return;
}



void FUN_00530ae0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8b73;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a5568c;
  FUN_00434920();
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  *(undefined2 *)((int)in_ECX + 0x23) = 0;
  *(undefined1 *)((int)in_ECX + 0x25) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0xd] = 0;
  *(undefined1 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0xffff;
  *(undefined1 *)(in_ECX + 1) = 0x3a;
  in_ECX[0xc] = 0;
  thunk_FUN_0046b090();
  *(char *)((int)in_ECX + 0x23) = (char)param_1;
  if (param_1 == 1) {
    puVar2 = (undefined4 *)FUN_00401f00(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
    }
    *(byte *)((int)in_ECX + 0x25) = *(byte *)((int)in_ECX + 0x25) | 2;
    in_ECX[0xc] = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00530ba0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 0x30) == 0) {
      puVar2 = (undefined4 *)FUN_00401f00(0x10);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined4 **)(in_ECX + 0x30) = puVar2;
        FUN_00530a10(in_ECX,param_1);
        return;
      }
      *(undefined4 *)(in_ECX + 0x30) = 0;
    }
    FUN_00530a10(in_ECX,param_1);
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x30);
  if (iVar1 != 0) {
    FUN_00530500();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  puVar2 = (undefined4 *)FUN_00401f00(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 **)(in_ECX + 0x30) = puVar2;
    return;
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 * FUN_00530c40(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint local_2c;
  int local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009b8b9b;
  local_10 = *unaff_FS_OFFSET;
  local_2c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  if (in_ECX != DAT_00b36528) {
    DAT_00b36528 = in_ECX;
    FUN_00530620();
    iVar2 = FUN_0046b680(0xffffffff);
    if ((iVar2 != 0) && (*(int *)(in_ECX + 0x34) != 0)) {
      iVar2 = FUN_004520f0();
      cVar1 = FUN_00451460(*(undefined4 *)(in_ECX + 0x34));
      if ((cVar1 != '\0') &&
         (cVar1 = FUN_004511c0(), cVar1 == (&DAT_00b05e00)[(uint)*(byte *)(in_ECX + 4) * 0xc])) {
        local_18 = 0;
        iVar3 = FUN_004510b0();
        while (iVar3 != 0) {
          iVar4 = 0;
          if (iVar3 == 0x314d414e) {
            if (local_18 != 0) {
              FUN_00450c20(&local_2c,*(undefined4 *)(iVar2 + 0x254));
              FUN_004028d0(&local_2c,0);
            }
          }
          else if (iVar3 == 0x54445254) {
            iVar3 = FUN_00401f00(0x18);
            local_8 = 0;
            if (iVar3 != 0) {
              iVar4 = FUN_0052e150();
            }
            local_8 = 0xffffffff;
            FUN_0052e0d0(iVar2);
            iVar3 = iVar4;
            FUN_00530c40(iVar4);
            FUN_0067b1e0(iVar3);
            local_18 = iVar4;
          }
          cVar1 = FUN_0044fea0();
          if (cVar1 == '\0') break;
          iVar3 = FUN_004510b0();
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return &DAT_00b36580;
}



void FUN_00530db0(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_5c [80];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8bc8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff9c;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(uint *)(in_ECX + 8) >> 0xe & 1) == 0) {
    if (*(short *)(in_ECX + 0x20) != -1) {
      iVar2 = FUN_0052f690();
      if (iVar2 != 0) {
        FUN_00530590(iVar2);
      }
    }
    FUN_0056a750(uVar1);
    FUN_00530620();
    FUN_00530690();
    FUN_004fbaa0();
    local_4 = 0;
    FUN_004fc7a0(local_5c);
    local_4 = 0xffffffff;
    FUN_004fc980();
  }
  iVar2 = *(int *)(in_ECX + 0x30);
  DAT_00b36528 = 0;
  DAT_00b3652c = 0;
  if (iVar2 != 0) {
    FUN_00530500();
    FUN_00401f20(iVar2);
  }
  thunk_FUN_0046b170();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00530fb0(int param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = param_1;
  cVar3 = FUN_004511c0();
  if (cVar3 != ':') {
    return 0;
  }
  cVar3 = FUN_0044fab0();
  if (cVar3 == '\0') {
    in_ECX[0xd] = *(int *)(iVar2 + 0x25c);
  }
  param_1 = -1;
  local_10 = 0;
  FUN_00451210(in_ECX);
  iVar4 = FUN_004510b0();
  while (iVar4 != 0) {
    if (iVar4 < 0x49545352) {
      if (iVar4 == 0x49545351) {
        FUN_004510e0(&local_10);
        puVar5 = &local_10;
LAB_0053117d:
        FUN_0046bb20(puVar5,iVar2);
      }
      else if (iVar4 < 0x454d414f) {
        if (iVar4 == 0x454d414e) {
          uStack_c = 0;
          FUN_004510e0(&uStack_c);
          FUN_0067b1e0(uStack_c);
        }
        else {
          if (iVar4 == 0x41445443) goto LAB_0053115a;
          if (iVar4 == 0x41544144) {
            pcVar1 = (char *)((int)in_ECX + 0x23);
            FUN_00450c20(pcVar1,3);
            if ('\x06' < *pcVar1) {
              (**(code **)(*in_ECX + 0x8c))(1);
            }
            if (*pcVar1 == '\x01') {
              FUN_00530ba0(0);
            }
          }
        }
      }
      else if (iVar4 == 0x464c4354) {
        if (in_ECX[0xc] == 0) {
          puVar5 = (undefined4 *)FUN_00401f00(0x10);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
          }
          in_ECX[0xc] = (int)puVar5;
        }
        uStack_8 = 0;
        FUN_004510e0(&uStack_8);
        FUN_0067b1e0(uStack_8);
      }
    }
    else if (iVar4 == 0x4d414e50) {
      FUN_004510e0(&param_1);
      if (param_1 != 0) {
        puVar5 = &param_1;
        goto LAB_0053117d;
      }
    }
    else if (iVar4 == 0x54445443) {
LAB_0053115a:
      FUN_0056a7b0(iVar2);
    }
    else if (iVar4 == 0x544c4354) {
      if (in_ECX[0xc] == 0) {
        puVar5 = (undefined4 *)FUN_00401f00(0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
        }
        in_ECX[0xc] = (int)puVar5;
      }
      uStack_4 = 0;
      FUN_004510e0(&uStack_4);
      FUN_0067b1e0(uStack_4);
    }
    cVar3 = FUN_0044fea0();
    if (cVar3 == '\0') break;
    iVar4 = FUN_004510b0();
  }
  if ((((uint)in_ECX[2] >> 5 & 1) == 0) &&
     (cVar3 = FUN_0052fd20(local_10,in_ECX,param_1), cVar3 == '\0')) {
    iVar2 = in_ECX[3];
    uVar6 = (**(code **)(*DAT_00b3650c + 0xd4))(DAT_00b3650c[3],local_10);
    FUN_004a7a60("Unable to insert topic info (%08X) into topic \'%s\' (%08X), quest (%08X).",iVar2,
                 uVar6);
  }
  return 1;
}



void FUN_00531200(undefined4 *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_00401f20(*param_1);
  *param_1 = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  piVar2 = (int *)FUN_00530c40();
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[1];
    if (iVar1 != 0) {
      uVar3 = FUN_0052e100();
      FUN_00412fa0(uVar3);
      if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
        FUN_00412fa0(&DAT_00a5580c);
      }
    }
  } while (param_2 == '\0');
  return;
}



void FUN_00531270(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00530c40();
  FUN_00530930(uVar1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined * FUN_00531290(void)

{
  size_t _Size;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint local_7c;
  undefined1 local_6c [80];
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009b8bf8;
  local_10 = *unaff_FS_OFFSET;
  local_7c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  if (in_ECX != DAT_00b3652c) {
    DAT_00b3652c = in_ECX;
    local_18 = in_ECX;
    local_14 = local_7c;
    FUN_004fbaa0();
    local_8 = 0;
    FUN_004fc7a0(local_6c);
    FUN_0046ab80(0);
    FUN_0046b590();
    iVar2 = FUN_0046b680(0xffffffff);
    if ((iVar2 != 0) && (*(int *)(in_ECX + 0x34) != 0)) {
      iVar2 = FUN_004520f0();
      cVar1 = FUN_00451460(*(undefined4 *)(in_ECX + 0x34));
      if ((cVar1 != '\0') &&
         (cVar1 = FUN_004511c0(), cVar1 == (&DAT_00b05e00)[(uint)*(byte *)(in_ECX + 4) * 0xc])) {
        iVar3 = FUN_004510b0();
        while (iVar3 != 0) {
          if (iVar3 == 0x41444353) {
            _Size = *(size_t *)(iVar2 + 0x254);
            _memset(&local_7c,0,_Size);
            FUN_00450c20(&local_7c,0);
            FUN_004f9df0(_Size,&local_7c);
            in_ECX = local_18;
          }
          else if (iVar3 == 0x4f524353) {
            puVar4 = (undefined4 *)FUN_00401f00(0x10);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = 0;
              *(undefined2 *)(puVar4 + 1) = 0;
              *(undefined2 *)((int)puVar4 + 6) = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
            }
            FUN_004510e0(&local_1c);
            puVar4[2] = local_1c;
            FUN_0067b1e0(puVar4);
            in_ECX = local_18;
          }
          else if (iVar3 == 0x52484353) {
            FUN_00450c20(&DAT_00b36548,0);
            FUN_0060d0a0();
          }
          cVar1 = FUN_0044fea0();
          if (cVar1 == '\0') break;
          iVar3 = FUN_004510b0();
        }
        FUN_004fbb60(in_ECX);
      }
    }
    local_8 = 0xffffffff;
    FUN_004fc980();
  }
  *unaff_FS_OFFSET = local_10;
  return &DAT_00b36530;
}



void FUN_00531470(int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 != 0) {
    iVar3 = FUN_00531290();
    cVar2 = FUN_004f9fa0();
    if (((cVar2 != '\0') && (iVar3 != 0)) && (*(int *)(iVar3 + 0x20) != 0)) {
      uVar6 = 1;
      uVar5 = 0;
      uVar4 = FUN_0041e920(0,1);
      FUN_004fbe00(param_1,uVar4,uVar5,uVar6);
    }
    if ((*(byte *)((int)in_ECX + 0x25) >> 4 & 1) == 0) {
      pcVar1 = *(code **)(*in_ECX + 0x40);
      *(undefined1 *)((int)in_ECX + 0x22) = 1;
      (*pcVar1)(0x10000000);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005314d0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *local_23c;
  undefined4 local_238;
  undefined2 local_234;
  undefined2 local_232;
  int local_230;
  int *local_22c;
  int local_228;
  undefined4 local_224;
  int *local_220;
  int local_21c;
  char acStack_218 [260];
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8c36;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_23c;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffdb4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = in_ECX + 2;
  local_21c = param_1;
  local_22c = (int *)0x0;
  local_23c = piVar5;
  local_220 = in_ECX;
  if (param_1 == 0) {
    local_224 = 0;
    iVar4 = local_228;
  }
  else {
    local_224 = FUN_0046b680(0xffffffff);
    iVar4 = local_228;
  }
  while ((piVar6 = piVar5, piVar6 != (int *)0x0 && (local_228 = *piVar6, local_228 != 0))) {
    FUN_0046bb20(&local_228,local_224,uVar2);
    uVar3 = FUN_0046b250(local_228,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05390,0);
    iVar4 = FUN_009832e6(uVar3);
    piVar5 = local_22c;
    if (iVar4 == 0) {
      piVar1 = (int *)piVar6[1];
      if (piVar1 == (int *)0x0) {
        if (local_22c == (int *)0x0) {
          *piVar6 = 0;
        }
        else {
          FUN_0065c620(local_228);
          local_23c = (int *)piVar5[1];
        }
      }
      else {
        piVar6[1] = piVar1[1];
        *piVar6 = *piVar1;
        FUN_00401f20(piVar1);
      }
      iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0544c,0);
      piVar5 = (int *)FUN_0052f690(iVar4);
      piVar6 = (int *)FUN_0052f570(iVar4);
      local_238 = 0;
      local_234 = 0;
      local_232 = 0;
      local_4 = 0;
      FUN_00531200(&local_238,1);
      local_230 = piVar6[3];
      uVar3 = *(undefined4 *)(iVar4 + 0xc);
      uVar7 = (**(code **)(*piVar5 + 0xd4))(piVar5[3]);
      uVar8 = (**(code **)(*piVar6 + 0xd4))(local_230,uVar7);
      uVar7 = local_238;
      _sprintf(acStack_218,"TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)",uVar3,
               local_238,uVar8);
      FUN_004a7a60("Unable to find topic (%08X) for conversation data \'Link To\' on %s",local_228,
                   acStack_218);
      local_4 = 0xffffffff;
      FUN_00401f20(uVar7);
      local_238 = 0;
      local_232 = 0;
      local_234 = 0;
      piVar5 = local_23c;
      in_ECX = local_220;
      iVar4 = local_228;
      param_1 = local_21c;
    }
    else {
      local_23c = (int *)piVar6[1];
      *piVar6 = iVar4;
      piVar5 = local_23c;
      local_22c = piVar6;
      iVar4 = local_228;
    }
  }
  local_22c = (int *)0x0;
  local_228 = iVar4;
  while ((piVar5 = in_ECX, piVar5 != (int *)0x0 && (local_230 = *piVar5, local_230 != 0))) {
    local_23c = piVar5;
    FUN_0046bb20(&local_230,local_224,uVar2);
    uVar3 = FUN_0046b250(local_230,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05390,0);
    iVar4 = FUN_009832e6(uVar3);
    piVar6 = local_22c;
    if (iVar4 == 0) {
      piVar1 = (int *)piVar5[1];
      if (piVar1 == (int *)0x0) {
        if (local_22c == (int *)0x0) {
          *piVar5 = 0;
        }
        else {
          FUN_0065c620(local_230);
          local_23c = (int *)piVar6[1];
        }
      }
      else {
        piVar5[1] = piVar1[1];
        *piVar5 = *piVar1;
        FUN_00401f20(piVar1);
      }
      iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0544c,0);
      piVar5 = (int *)FUN_0052f690(iVar4);
      piVar6 = (int *)FUN_0052f570(iVar4);
      local_238 = 0;
      local_234 = 0;
      local_232 = 0;
      local_4 = 1;
      FUN_00531200(&local_238,1);
      local_220 = (int *)piVar6[3];
      uVar3 = *(undefined4 *)(iVar4 + 0xc);
      uVar7 = (**(code **)(*piVar5 + 0xd4))(piVar5[3]);
      uVar8 = (**(code **)(*piVar6 + 0xd4))(local_220,uVar7);
      uVar7 = local_238;
      _sprintf(acStack_114,"TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)",uVar3,
               local_238,uVar8);
      FUN_004a7a60("Unable to find topic (%08X) for conversation data \'Link From\' on %s",local_230
                   ,acStack_114);
      local_4 = 0xffffffff;
      FUN_00401f20(uVar7);
      local_238 = 0;
      local_232 = 0;
      local_234 = 0;
      param_1 = local_21c;
      in_ECX = local_23c;
    }
    else {
      *piVar5 = iVar4;
      in_ECX = (int *)piVar5[1];
      local_22c = piVar5;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00531880(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b8c83;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a5568c;
  local_4 = 1;
  FUN_00530db0(uVar1);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_0056a750();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005318f0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int local_130;
  undefined4 local_12c;
  undefined2 local_128;
  undefined2 local_126;
  int *local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8cab;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_130;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffec0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    local_11c = FUN_0046b680(0xffffffff);
    local_124 = (int *)0x0;
    piVar5 = (int *)(in_ECX + 0x28);
    piVar4 = local_124;
    iVar3 = local_130;
    while ((piVar7 = piVar5, local_124 = piVar4, piVar7 != (int *)0x0 &&
           (local_130 = *piVar7, local_130 != 0))) {
      FUN_0046bb20(&local_130,local_11c,uVar1);
      uVar2 = FUN_0046b250(local_130,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05390,0);
      iVar3 = FUN_009832e6(uVar2);
      if (iVar3 == 0) {
        piVar5 = (int *)piVar7[1];
        if (piVar5 == (int *)0x0) {
          if (piVar4 == (int *)0x0) {
            *piVar7 = 0;
          }
          else {
            FUN_0065c620(local_130);
            piVar7 = (int *)piVar4[1];
          }
        }
        else {
          piVar7[1] = piVar5[1];
          *piVar7 = *piVar5;
          FUN_00401f20(piVar5);
        }
        piVar4 = (int *)FUN_0052f690();
        piVar5 = (int *)FUN_0052f570(in_ECX);
        local_12c = 0;
        local_128 = 0;
        local_126 = 0;
        local_4 = 0;
        FUN_00531200(&local_12c,1);
        uVar2 = local_12c;
        if ((piVar4 == (int *)0x0) || (piVar5 == (int *)0x0)) {
          _sprintf(local_114,"TopicInfo %08X \"%s\"",*(undefined4 *)(in_ECX + 0xc),local_12c);
        }
        else {
          local_120 = piVar5[3];
          local_118 = *(undefined4 *)(in_ECX + 0xc);
          uVar2 = (**(code **)(*piVar4 + 0xd4))(piVar4[3]);
          uVar6 = (**(code **)(*piVar5 + 0xd4))(local_120,uVar2);
          uVar2 = local_12c;
          _sprintf(local_114,"TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)",local_118,
                   local_12c,uVar6);
        }
        FUN_004a7a60("Unable to find topic (%08X) for %s",local_130,local_114);
        local_4 = 0xffffffff;
        FUN_00401f20(uVar2);
        local_12c = 0;
        local_126 = 0;
        local_128 = 0;
        piVar5 = piVar7;
        piVar4 = local_124;
        iVar3 = local_130;
      }
      else {
        *piVar7 = iVar3;
        piVar5 = (int *)piVar7[1];
        piVar4 = piVar7;
        iVar3 = local_130;
      }
    }
    local_130 = iVar3;
    if (in_ECX != -0x18) {
      FUN_0056a480(in_ECX);
    }
    if (*(int *)(in_ECX + 0x30) != 0) {
      FUN_005314d0(in_ECX);
    }
    FUN_0046ab80(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00531b40(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8ceb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0544c,0,uVar2);
  if (iVar3 != 0) {
    FUN_0046acb0(param_1);
    *(undefined2 *)(in_ECX + 0x23) = *(undefined2 *)(iVar3 + 0x23);
    *(undefined1 *)(in_ECX + 0x25) = *(undefined1 *)(iVar3 + 0x25);
    FUN_00530690();
    piVar7 = (int *)(iVar3 + 0x28);
    while ((piVar7 != (int *)0x0 && (iVar1 = *piVar7, iVar1 != 0))) {
      piVar7 = (int *)piVar7[1];
      piVar8 = (int *)(in_ECX + 0x28);
      iVar5 = *(int *)(in_ECX + 0x2c);
      while (iVar5 != 0) {
        piVar8 = (int *)piVar8[1];
        iVar5 = piVar8[1];
      }
      if (*piVar8 == 0) {
        *piVar8 = iVar1;
      }
      else {
        piVar4 = (int *)FUN_00401f00(8);
        if (piVar4 == (int *)0x0) {
          piVar8[1] = 0;
        }
        else {
          *piVar4 = iVar1;
          piVar4[1] = 0;
          piVar8[1] = (int)piVar4;
        }
      }
    }
    FUN_00530620();
    piVar7 = (int *)FUN_00530c40();
    while ((piVar7 != (int *)0x0 && (iVar1 = *piVar7, iVar1 != 0))) {
      piVar7 = (int *)piVar7[1];
      iVar5 = FUN_00401f00(0x18);
      local_4 = 0;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0052e150();
      }
      local_4 = 0xffffffff;
      FUN_0052e110(iVar1);
      piVar8 = (int *)FUN_00530c40();
      if (iVar5 != 0) {
        piVar4 = piVar8 + 1;
        iVar1 = *piVar4;
        while (iVar1 != 0) {
          piVar8 = (int *)*piVar4;
          piVar4 = piVar8 + 1;
          iVar1 = piVar8[1];
        }
        if (*piVar8 == 0) {
          *piVar8 = iVar5;
        }
        else {
          piVar4 = (int *)FUN_00401f00(8);
          if (piVar4 == (int *)0x0) {
            piVar8[1] = 0;
          }
          else {
            *piVar4 = iVar5;
            piVar4[1] = 0;
            piVar8[1] = (int)piVar4;
          }
        }
      }
    }
    uVar6 = FUN_00531290();
    FUN_00531290(uVar6);
    FUN_004fc7a0(uVar6);
    *(undefined2 *)(in_ECX + 0x20) = *(undefined2 *)(iVar3 + 0x20);
    FUN_00530430(iVar3 + 0x18);
    if (*(int *)(iVar3 + 0x30) != 0) {
      FUN_00530ba0(*(int *)(iVar3 + 0x30));
    }
    FUN_0046ab80(*(uint *)(iVar3 + 8) >> 3 & 0xffffff01);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00531d30(byte param_1)

{
  FUN_00531880();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00531d60(byte param_1)

{
  FUN_008a2550();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00531d80(void)

{
  DAT_00b2eb3c = DAT_00b2eb3c + 1 & 0xffff;
  if (DAT_00b2eb3c == 0) {
    DAT_00b2eb3c = 10;
  }
  return;
}



void FUN_00531dc0(byte param_1)

{
  FUN_0089f2e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00531de0(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x2b0);
  }
  return 0;
}



undefined4 * FUN_00531e00(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    puVar1 = (undefined4 *)FUN_008ac070();
    return puVar1;
  }
  return &DAT_00ba7a40;
}



void FUN_00531e30(byte param_1)

{
  FUN_008ae930();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00531e60(byte param_1)

{
  FUN_008ae9f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00531e80(void)

{
  FUN_0089f4d0();
  return;
}



void FUN_00531e90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if ((int *)*in_ECX != (int *)0x0) {
    (**(code **)(*(int *)*in_ECX + 0x5c))(param_1);
    if (param_1 != 0) {
      iVar1 = *in_ECX;
      uVar2 = FUN_008aeb80(0xff,0x2e,0x2e,0x19);
      FUN_0088bb60(iVar1,uVar2);
    }
  }
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x5c))(param_1);
    if (param_1 != 0) {
      iVar1 = in_ECX[1];
      uVar2 = FUN_008aeb80(0xff,0x2e,0x2e,0x19);
      FUN_0088bb60(iVar1,uVar2);
    }
  }
  return;
}



undefined4 FUN_00531f10(void)

{
  int iVar1;
  int *in_ECX;
  
  if (((int *)*in_ECX != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)*in_ECX + 0x58))(), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x2b0);
  }
  return 0;
}



void FUN_00531f70(byte param_1)

{
  FUN_008aec30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00531fa0(byte param_1)

{
  FUN_008aed50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00531fc0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8d18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a559cc;
  in_ECX[3] = 0;
  _DAT_00ba7d34 = _DAT_00ba7d34 + 1;
  *in_ECX = &PTR_FUN_00a55b9c;
  DAT_00ba7f5c = DAT_00ba7f5c + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  *in_ECX = &PTR_FUN_00a55c2c;
  _DAT_00ba7f68 = _DAT_00ba7f68 + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a55cbc;
  FUN_008af1a0(param_1);
  _DAT_00ba7f74 = _DAT_00ba7f74 + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00532070(byte param_1)

{
  FUN_008aefb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00532090(float param_1,char param_2)

{
  uint uVar1;
  int *in_ECX;
  float *unaff_FS_OFFSET;
  undefined4 local_14;
  float local_10;
  float local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8d48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (float)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = (int)&PTR_FUN_00a5591c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = (int)&PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  *in_ECX = (int)&PTR_FUN_00a55afc;
  _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
  *in_ECX = (int)&PTR_FUN_00a55d4c;
  _DAT_00ba7f80 = _DAT_00ba7f80 + 1;
  local_4 = 0;
  if (param_2 != '\0') {
    param_1 = param_1 * 0.14287673;
  }
  local_14 = 0;
  local_10 = param_1;
  (**(code **)(*in_ECX + 0x70))(&local_14);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_00532160(byte param_1)

{
  FUN_008af310();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00532180(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7538;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
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



void FUN_00532210(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *in_ECX = *param_1;
  in_ECX[1] = uVar1;
  in_ECX[2] = uVar2;
  in_ECX[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  in_ECX[4] = param_1[4];
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar2;
  in_ECX[7] = uVar3;
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  return;
}



void FUN_00532250(void)

{
  undefined4 *in_ECX;
  
  in_ECX[5] = 0x80000000;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 2) = 2;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
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
  in_ECX[9] = 0;
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
  in_ECX[8] = 0x3f800000;
  in_ECX[0xd] = 0x3f800000;
  in_ECX[0x12] = 0x3f800000;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  return;
}



void FUN_005322e0(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b8d78;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a55dec;
  local_4 = 0;
  if (-1 < (int)in_ECX[6]) {
    FUN_008a75d0(in_ECX[4],(in_ECX[6] & 0x3fffffff) * 0x30,0x14);
  }
  *in_ECX = &PTR_LAB_00a559bc;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00532370(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  LONG LVar6;
  int *in_ECX;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  uint local_e0;
  undefined4 local_dc;
  undefined4 uStack_d4;
  int iStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 uStack_74;
  int iStack_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b8ddd;
  local_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff00;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar3 = FUN_00401f00(0x14,uVar2);
  puVar7 = (undefined4 *)0x0;
  local_14 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00532090(param_1,1);
  }
  FUN_00532250();
  local_14 = 1;
  FUN_00532250();
  local_80 = param_2 << 0x10 | 0x18;
  DAT_00b2eb3c = DAT_00b2eb3c + 1 & 0xffff;
  local_14._0_1_ = 2;
  if (DAT_00b2eb3c == 0) {
    DAT_00b2eb3c = 10;
  }
  uVar4 = DAT_00b2eb3c << 0x10;
  if (iVar3 == 0) {
    local_7c = 0;
  }
  else {
    local_7c = *(undefined4 *)(iVar3 + 8);
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_60 = 0x3f800000;
  local_4c = 0x3f800000;
  local_38 = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar5 = FUN_00401f00(0x14,uVar2);
  local_14._0_1_ = 3;
  if (iVar5 != 0) {
    puVar7 = (undefined4 *)FUN_00531fc0(&local_80);
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_14._0_1_ = 2;
  if (puVar1 != puVar7) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar1 + 1), LVar6 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *in_ECX = (int)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if (iVar3 == 0) {
    local_dc = 0;
  }
  else {
    local_dc = *(undefined4 *)(iVar3 + 8);
  }
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_94 = 0;
  uStack_c0 = 0x3f800000;
  uStack_ac = 0x3f800000;
  uStack_98 = 0x3f800000;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_e0 = uVar4 | 0x18;
  iVar3 = FUN_00401f00(0x14);
  local_14._0_1_ = 4;
  if (iVar3 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_00531fc0(&local_e0);
  }
  puVar1 = (undefined4 *)in_ECX[1];
  local_14._0_1_ = 2;
  if (puVar1 != puVar7) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar1 + 1), LVar6 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = (int)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  local_14 = CONCAT31(local_14._1_3_,1);
  if (-1 < iStack_cc) {
    FUN_008a75d0(uStack_d4,iStack_cc * 8,0x14);
  }
  local_14 = 0xffffffff;
  if (-1 < iStack_6c) {
    FUN_008a75d0(uStack_74,iStack_6c * 8,0x14);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_005326b0(float *param_1,float *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_214 [11];
  undefined1 local_209;
  float *local_208;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined **local_1d0;
  undefined4 local_1cc;
  undefined1 *local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b0 [396];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_009b8e0b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_214;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffde0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_204 = param_3;
  iVar6 = 0;
  local_209 = 0;
  local_208 = param_2;
  if (*in_ECX != 0) {
    local_1c0 = local_1b0;
    local_1cc = 0x7f7fffff;
    local_1d0 = &PTR_FUN_00a55dec;
    local_1b8 = 0x80000008;
    local_1bc = 0;
    local_1e0 = 0x34000000;
    local_1dc = 0x34000000;
    local_14 = 0;
    local_200 = *param_1 * 0.14287673;
    local_1fc = param_1[1] * 0.14287673;
    local_1f8 = param_1[2] * 0.14287673;
    local_1f0 = *param_2 * 0.14287673;
    local_1ec = param_2[1] * 0.14287673;
    local_1e8 = param_2[2] * 0.14287673;
    piVar5 = *(int **)(*in_ECX + 8);
    if (piVar5 != (int *)0x0) {
      FUN_0089f570(uVar3);
      (**(code **)(*piVar5 + 0x30))(&local_200,&local_1f0,&local_1d0,0);
      FUN_0089f570();
    }
    local_209 = 0 < local_1bc;
    if ((bool)local_209) {
      FUN_008af890();
      iVar7 = 0;
      for (; iVar6 < local_1bc; iVar6 = iVar6 + 1) {
        if (((byte)*(undefined4 *)(*(int *)(local_1c0 + iVar7 + 0x28) + 0x1c) & 0x3f) != 0x14) {
LAB_0053283f:
          uVar1 = local_204;
          FUN_00532210(local_1c0 + iVar6 * 0x30);
          FUN_0043f3e0(local_208,uVar1);
          break;
        }
        iVar4 = FUN_008afce0(*(int *)(local_1c0 + iVar7 + 0x28));
        if (iVar4 == 0) goto LAB_0053283f;
        piVar5 = (int *)FUN_004dc270(iVar4);
        if (piVar5 == (int *)0x0) goto LAB_0053283f;
        cVar2 = (**(code **)(*piVar5 + 0x188))();
        if (cVar2 == '\0') goto LAB_0053283f;
        iVar4 = FUN_0065a2c0();
        if ((iVar4 == 0) || ((*(uint *)(iVar4 + 500) >> 0xb & 1) == 0)) goto LAB_0053283f;
        iVar7 = iVar7 + 0x30;
      }
    }
    local_14 = 0xffffffff;
    FUN_005322e0();
  }
  *unaff_FS_OFFSET = local_1c;
  return local_209;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_005328b0(int param_1,float *param_2,undefined4 param_3,float param_4)

{
  code *pcVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_224 [7];
  undefined1 local_21d;
  int iStack_21c;
  undefined4 *local_218;
  undefined4 *local_214;
  int iStack_210;
  int iStack_20c;
  undefined4 local_208;
  float local_200;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined **local_1d0;
  undefined4 local_1cc;
  undefined1 *local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b0 [396];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b8e4b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_224;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffdd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_1f0 = *param_2 * 0.14287673;
  local_21d = 0;
  fStack_1ec = param_2[1] * 0.14287673;
  fStack_1e8 = param_2[2] * 0.14287673;
  if ((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) {
    pfVar3 = (float *)&DAT_00ba7a40;
  }
  else {
    pfVar3 = (float *)FUN_008ac070(uVar2);
  }
  local_1e0 = *pfVar3;
  fStack_1dc = pfVar3[1];
  fStack_1d8 = pfVar3[2];
  fStack_1d4 = pfVar3[3];
  iVar4 = FUN_0065a2c0();
  if (param_1 == iVar4) {
    iVar4 = *in_ECX;
    local_200 = fStack_1e8;
    local_1e0 = fStack_1d8;
    if (fStack_1d8 < fStack_1e8) {
      local_218 = (undefined4 *)(param_4 * 0.14287673);
      fStack_1e8 = fStack_1e8 - (float)local_218;
    }
  }
  else {
    iVar4 = in_ECX[1];
  }
  local_1c0 = local_1b0;
  local_1cc = 0x7f7fffff;
  local_1d0 = &PTR_FUN_00a55dec;
  local_1b8 = 0x80000008;
  local_1bc = 0;
  local_208 = 0;
  local_14 = 0;
  if ((iVar4 == 0) || (*(int *)(iVar4 + 8) == 0)) {
    local_214 = (undefined4 *)0x0;
  }
  else {
    local_214 = (undefined4 *)(*(int *)(iVar4 + 8) + 0x14);
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_008ac0c0();
  }
  local_218 = (undefined4 *)(iVar5 + 0x14);
  if ((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_008ac0c0();
  }
  if (*(int *)(iVar5 + 8) == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *(int **)(*(int *)(iVar5 + 8) + 0x2b0);
  }
  if (piVar7 == (int *)0x0) goto LAB_00532b4f;
  (**(code **)(*piVar7 + 0x58))();
  iVar5 = (**(code **)(*piVar7 + 0x58))();
  iVar5 = *(int *)(iVar5 + 0x7c);
  (**(code **)(*piVar7 + 0x58))();
  if (iVar5 == 0) goto LAB_00532b4f;
  iStack_210 = iVar5;
  (**(code **)(*piVar7 + 0x58))();
  iVar6 = (**(code **)(*piVar7 + 0x58))();
  if (*(int *)(iVar6 + 0x78) == 0) {
    iStack_20c = 0;
  }
  else {
    iStack_20c = *(int *)(iVar6 + 0x78) + 0xc;
  }
  (**(code **)(*piVar7 + 0x58))();
  if (iVar4 == 0) {
LAB_00532ace:
    iStack_21c = 0;
  }
  else {
    if (*(int *)(iVar4 + 8) != 0) {
      FUN_0089f570();
      FUN_008abac0(&local_1f0,0);
      FUN_0089f570();
    }
    if ((*(int *)(iVar4 + 8) == 0) ||
       (piVar7 = (int *)(*(int *)(iVar4 + 8) + 0x14), piVar7 == (int *)0x0)) goto LAB_00532ace;
    iStack_21c = *piVar7;
  }
  piVar7 = (int *)*local_214;
  iVar6 = (**(code **)(*(int *)*local_218 + 8))();
  iVar8 = (**(code **)(*piVar7 + 8))();
  iVar4 = iStack_21c;
  pcVar1 = *(code **)(iVar5 + 0x998 + (uint)*(byte *)(iVar8 * 0x20 + iVar6 + 400 + iVar5) * 0x14);
  if (pcVar1 != (code *)0x0) {
    iVar5 = *(int *)(iStack_21c + 0xc);
    *(undefined4 *)(iStack_21c + 0xc) = param_3;
    iStack_21c = iVar5;
    (*pcVar1)(local_214,local_218,&iStack_210,&local_1d0);
    *(int *)(iVar4 + 0xc) = iStack_21c;
    local_21d = 0 < local_1bc;
  }
LAB_00532b4f:
  local_14 = 0xffffffff;
  FUN_005322e0();
  *unaff_FS_OFFSET = local_1c;
  return local_21d;
}



void FUN_00532b90(byte param_1)

{
  FUN_005322e0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00532bc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b8e93;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  local_4 = 1;
  FUN_00532370(param_1,param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00532c20(float param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  *param_2 = (float)fVar2;
  *param_3 = (float)fVar1;
  return;
}



void FUN_00532c60(byte param_1)

{
  FUN_008affa0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 FUN_00532c80(int *param_1)

{
  undefined1 uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x5c))();
    return uVar1;
  }
  return 0;
}



void FUN_00532cb0(byte param_1)

{
  FUN_008b0210();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00532cd0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8eb8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a5591c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55e8c;
  _DAT_00ba7f98 = _DAT_00ba7f98 + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a55f2c;
  FUN_008b0750(param_1);
  _DAT_00ba7fa4 = _DAT_00ba7fa4 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00532d80(byte param_1)

{
  FUN_008b0560();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00532dd0(byte param_1)

{
  FUN_00897b00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00532df0(undefined4 *param_1)

{
  uint uVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8ef0;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  if (param_1 != (undefined4 *)0x0) {
    *in_ECX = param_1;
    InterlockedIncrement(param_1 + 1);
  }
  in_ECX[1] = 0;
  local_4 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(param_1 + 1);
    if (LVar2 == 0) {
      (**(code **)*param_1)(1,uVar1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00532ea0(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a56050;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00532ef0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  if ((*(short *)(in_ECX + 0x14) != 0) && ((int *)**(int **)(in_ECX + 0xc) != (int *)0x0)) {
    iVar2 = (**(code **)(*(int *)**(int **)(in_ECX + 0xc) + 0x58))();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x2b0);
    }
    if ((iVar2 != 0) && (uVar3 = 0, *(short *)(in_ECX + 0x14) != 0)) {
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x60))();
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(in_ECX + 0x14));
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00532f50(int *param_1,float *param_2)

{
  int *piVar1;
  float10 fVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auStack_94 [8];
  int local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  int *local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_94;
  local_64 = param_1;
  if ((param_1 != (int *)0x0) && (*(short *)(in_ECX + 0x14) != 0)) {
    fVar2 = (float10)fcos((float10)0.7853982);
    fVar6 = (float10)fsin((float10)0.7853982);
    local_68 = (float)fVar2;
    local_6c = (float)fVar6;
    local_88 = 0.0;
    local_50 = 0x40400000;
    uStack_4c = 0;
    uStack_48 = 0;
    fStack_44 = 0.0;
    iVar4 = 0;
    local_60 = 0x3f000000;
    uStack_5c = 0;
    uStack_58 = 0;
    fStack_54 = 0.0;
    local_8c = 2;
    local_74 = in_ECX;
    do {
      local_70 = 2.8026e-45;
      local_84 = -2048.0;
      do {
        piVar5 = *(int **)(*(int *)(local_74 + 0xc) + iVar4 * 4);
        local_80 = *param_2 + local_84;
        local_78 = param_2[2];
        local_7c = param_2[1] + local_88;
        iVar4 = iVar4 + 1;
        local_30 = local_80 * 0.14287673;
        local_2c = local_7c * 0.14287673;
        local_28 = local_78 * 0.14287673;
        (**(code **)(*piVar5 + 0x94))(&local_30);
        fVar8 = local_70 * local_70 + 0.0;
        fVar10 = local_6c * local_6c + 0.0;
        fVar11 = local_70 * local_70 + 0.0;
        fVar12 = local_6c * local_6c + 0.0;
        fVar7 = fVar10 + fVar8;
        auVar9._4_4_ = fVar8 + fVar10;
        auVar9._0_4_ = fVar7;
        auVar9._8_4_ = fVar12 + fVar11;
        auVar9._12_4_ = fVar11 + fVar12;
        auVar9 = rsqrtss(auVar9,auVar9);
        fVar8 = auVar9._0_4_;
        fStack_38 = (float)local_64 * fVar8 * (fStack_54 - fVar7 * fVar8 * fVar8);
        fStack_44 = fStack_38 * local_70;
        fStack_40 = fStack_38 * 0.0;
        fStack_3c = fStack_38 * 0.0;
        fStack_38 = fStack_38 * local_6c;
        param_1 = (int *)(**(code **)(*piVar5 + 0x98))(&fStack_44);
        local_70 = (float)((int)local_70 + -1);
        local_84 = local_84 + 2048.0;
      } while (local_70 != 0.0);
      local_8c = local_8c + -1;
      local_88 = local_88 + 2048.0;
    } while (local_8c != 0);
    if (*(short *)(local_74 + 0x14) != 0) {
      param_1 = *(int **)(local_74 + 0xc);
      if ((int *)*param_1 != (int *)0x0) {
        iVar4 = (**(code **)(*(int *)*param_1 + 0x58))();
        if (iVar4 == 0) {
          param_1 = (int *)0x0;
        }
        else {
          param_1 = *(int **)(iVar4 + 0x2b0);
        }
        if (param_1 != (int *)0x0) goto LAB_0053319b;
      }
    }
    piVar5 = (int *)0x0;
    if (*(short *)(local_74 + 0x14) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(local_74 + 0xc) + (int)piVar5 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x5c))(local_64);
        }
        uVar3 = FUN_008aeb80(0xdc,0x96,0x28,0xff);
        FUN_0088bb60(piVar1,uVar3);
        param_1 = (int *)(uint)*(ushort *)(local_74 + 0x14);
        piVar5 = (int *)((int)piVar5 + 1);
      } while (piVar5 < param_1);
    }
  }
LAB_0053319b:
  return (uint)param_1 & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005331c0(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b36590 & 1) == 0) {
    _DAT_00b36590 = _DAT_00b36590 | 1;
    DAT_00b3658c = 0;
    _atexit(FUN_00a1c550);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b3658c) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b3658c) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b3658c) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b3658c) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  iVar1 = *(int *)(in_ECX + 4);
  puVar2 = *(undefined4 **)(iVar1 + param_1 * 4);
  if (puVar2 != (undefined4 *)*param_2) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    iVar3 = *param_2;
    *(int *)(iVar1 + param_1 * 4) = iVar3;
    if (iVar3 != 0) {
      InterlockedIncrement((LONG *)(iVar3 + 4));
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533290(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8f23;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0();
  *in_ECX = &PTR_FUN_00a559cc;
  in_ECX[3] = 0;
  _DAT_00ba7d34 = _DAT_00ba7d34 + 1;
  *in_ECX = &PTR_FUN_00a55dfc;
  DAT_00ba7f8c = DAT_00ba7f8c + 1;
  *in_ECX = &PTR_FUN_00a5605c;
  local_4 = 0;
  FUN_00532df0();
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[6] = 0;
  FUN_008a4260();
  DAT_00ba7d80 = DAT_00ba7d80 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00533360(byte param_1)

{
  FUN_008a5820();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533380(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b8f48;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a56114;
  *(undefined2 *)((int)in_ECX + 0x16) = 1;
  in_ECX[2] = &PTR_FUN_00a56050;
  *(undefined2 *)(in_ECX + 4) = 0;
  *(undefined2 *)((int)in_ECX + 0x12) = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  in_ECX[3] = 0;
  _DAT_00b36588 = _DAT_00b36588 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00533400(void)

{
  FUN_00532ef0();
  FUN_00477ef0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533420(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b8f83;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56114;
  _DAT_00b36588 = _DAT_00b36588 + -1;
  local_4 = 1;
  FUN_00532ef0(uVar2);
  FUN_00477ef0();
  in_ECX[2] = &PTR_FUN_00a56050;
  pvVar1 = (void *)in_ECX[3];
  local_4 = local_4 & 0xffffff00;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005334d0(byte param_1)

{
  FUN_00533420();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005334f0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 uVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_174 [12];
  undefined4 *local_168;
  undefined4 *local_164;
  uint local_160;
  int local_15c;
  int local_158;
  undefined4 *local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_104;
  int local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_60;
  undefined4 local_54;
  undefined1 local_40;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b8fdd;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_174;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffe80;
  *unaff_FS_OFFSET = (int)&local_1c;
  uVar5 = 0;
  local_158 = param_1;
  if (*(short *)(in_ECX + 0x14) == 0) {
    if (param_1 != 0) {
      local_15c = in_ECX;
      FUN_008a5790(uVar2);
      local_60 = 0;
      local_110 = 0x10011;
      local_f0 = 0x10011;
      local_54 = _DAT_00b114a4;
      local_14 = 0;
      local_40 = 7;
      local_160 = 0;
      if (param_2 != 0) {
        do {
          iVar1 = *(int *)(param_1 + local_160 * 4);
          if (iVar1 != 0) {
            local_128 = 0;
            local_124 = 0xbf800000;
            local_12c = 0x11;
            local_130 = 0x11;
            local_140 = 0x41924e47;
            local_150 = 0;
            local_14c = 0;
            local_13c = 0x3e124e47;
            local_138 = 0x41924e47;
            local_134 = 0;
            local_120 = *(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x1c);
            FUN_008b0c60();
            local_164 = (undefined4 *)FUN_00401f00(0x14);
            local_14 = CONCAT31(local_14._1_3_,1);
            if (local_164 == (undefined4 *)0x0) {
              local_168 = (undefined4 *)0x0;
            }
            else {
              local_168 = (undefined4 *)FUN_00532cd0(&local_150);
            }
            puVar3 = local_168;
            local_154 = local_168;
            if (local_168 != (undefined4 *)0x0) {
              InterlockedIncrement(local_168 + 1);
            }
            local_10c = puVar3[2];
            local_14._0_1_ = 2;
            local_ec = local_10c;
            local_164 = (undefined4 *)FUN_00401f00(0x1c);
            local_14 = CONCAT31(local_14._1_3_,3);
            if (local_164 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              puVar3 = (undefined4 *)FUN_00533290(&local_110);
            }
            local_164 = puVar3;
            if (puVar3 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar3 + 1);
            }
            uVar2 = (uint)*(ushort *)(local_15c + 0x12);
            local_14._0_1_ = 4;
            if (*(ushort *)(local_15c + 0x10) <= uVar2) {
              FUN_00523b10(*(ushort *)(local_15c + 0x16) + uVar2);
            }
            FUN_005331c0(uVar2,&local_164);
            local_14._0_1_ = 2;
            if ((puVar3 != (undefined4 *)0x0) &&
               (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) {
              (**(code **)*puVar3)(1);
            }
            puVar3 = local_168;
            local_14 = (uint)local_14._1_3_ << 8;
            LVar4 = InterlockedDecrement(local_168 + 1);
            if (LVar4 == 0) {
              (**(code **)*puVar3)(1);
            }
          }
          local_160 = local_160 + 1;
          param_1 = local_158;
        } while (local_160 < param_2);
      }
      local_14 = 0xffffffff;
      if (-1 < local_fc) {
        FUN_008a75d0(local_104,local_fc * 8,0x14);
      }
    }
    uVar5 = 1;
  }
  *unaff_FS_OFFSET = local_1c;
  return uVar5;
}



void FUN_005337e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((*(int **)(in_ECX + 0x1a0) != (int *)0x0) &&
     ((**(code **)(**(int **)(in_ECX + 0x1a0) + 0x5c))(param_1), param_1 != 0)) {
    uVar1 = *(undefined4 *)(in_ECX + 0x1a0);
    uVar2 = FUN_008aeb80(0xff,0x10,0x10,0x19);
    FUN_0088bb60(uVar1,uVar2);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00533830(float *param_1,float *param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 auStack_54 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_54;
  if ((param_3 != 0.0) && (*(int *)(in_ECX + 0x1a0) != 0)) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x1a0) + 8);
    if ((iVar2 == 0) || (piVar1 = (int *)(iVar2 + 0x14), piVar1 == (int *)0x0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0xc) = param_3 * 0.14287673;
    }
  }
  *(undefined4 *)(in_ECX + 4) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (*(int *)(in_ECX + 0x1a0) != 0) {
    local_30 = 0x34000000;
    local_2c = 0x34000000;
    local_50 = *param_1 * 0.14287673;
    local_4c = param_1[1] * 0.14287673;
    local_48 = param_1[2] * 0.14287673;
    local_40 = *param_2 * 0.14287673;
    local_3c = param_2[1] * 0.14287673;
    local_38 = param_2[2] * 0.14287673;
    piVar1 = *(int **)(*(int *)(in_ECX + 0x1a0) + 8);
    if (piVar1 != (int *)0x0) {
      FUN_0089f570();
      (**(code **)(*piVar1 + 0x30))(&local_50,&local_40);
      FUN_0089f570();
    }
  }
  return *(undefined4 *)(in_ECX + 0x14);
}



undefined4 FUN_00533930(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  iVar1 = *(int *)(param_1 * 0x30 + *(int *)(in_ECX + 0x10) + 0x28);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) + iVar1 != 0)) {
    piVar2 = (int *)FUN_0047f990(local_8,&DAT_00ba7b80);
    if (*piVar2 != 0) {
      uVar3 = FUN_00452a60();
      return uVar3;
    }
  }
  return 0;
}



void FUN_00533980(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b9048;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x1a0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_005322e0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00533a00(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  uint local_80;
  undefined4 local_7c;
  undefined4 uStack_74;
  int iStack_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b942e;
  local_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff70;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar3 = FUN_00401f00(0x14,uVar2);
  puVar5 = (undefined4 *)0x0;
  local_14 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00532090(param_1,1);
  }
  FUN_00532250();
  local_80 = param_2 << 0x10 | 0x1c;
  local_14 = 1;
  if (iVar3 == 0) {
    local_7c = 0;
  }
  else {
    local_7c = *(undefined4 *)(iVar3 + 8);
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_60 = 0x3f800000;
  local_4c = 0x3f800000;
  local_38 = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar3 = FUN_00401f00(0x14,uVar2);
  local_14._0_1_ = 2;
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)FUN_00531fc0(&local_80);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x1a0);
  local_14 = CONCAT31(local_14._1_3_,1);
  if (puVar1 != puVar5) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(in_ECX + 0x1a0) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  FUN_008a7f20(0x1c,3,0);
  FUN_008a7f20(0x1c,0x15,0);
  FUN_008a7f20(0x1c,6,0);
  FUN_008a7f20(0x1c,7,0);
  FUN_008a7f20(0x1c,8,0);
  FUN_008a7f20(0x1c,0xb,0);
  FUN_008a7f20(0x1c,0x12,0);
  FUN_008a7f20(0x1c,0x14,0);
  FUN_008a7f20(0x1c,0x18,0);
  FUN_008a7f20(0x1c,0x19,0);
  FUN_008a7f20(0x1c,0x1a,0);
  FUN_008a7f20(0x1c,0x1c,0);
  FUN_008a7f20(0x1c,0x1e,0);
  local_14 = 0xffffffff;
  if (-1 < iStack_6c) {
    FUN_008a75d0(uStack_74,iStack_6c * 8,0x14);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_00533c40(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b9086;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a55dec;
  in_ECX[4] = in_ECX + 8;
  in_ECX[6] = 0x80000008;
  in_ECX[1] = 0x7f7fffff;
  in_ECX[5] = 0;
  in_ECX[0x68] = 0;
  local_4 = 1;
  FUN_00533a00(param_1,param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void thunk_FUN_008897a0(void)

{
  undefined4 *puVar1;
  
  if (DAT_00ba7a00 != (int *)0x0) {
    (**(code **)(*DAT_00ba7a00 + 0x10))(1);
  }
  if (DAT_00ba8038 != (int *)0x0) {
    (**(code **)(*DAT_00ba8038 + 8))(1);
  }
  FUN_008905b0();
  FUN_00891010();
  puVar1 = DAT_00ba7904;
  if (DAT_00ba7904 != (undefined4 *)0x0) {
    if ((*(short *)(DAT_00ba7904 + 1) != 0) &&
       (*(short *)((int)DAT_00ba7904 + 6) = *(short *)((int)DAT_00ba7904 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00ba7904 = (undefined4 *)0x0;
  }
  FUN_008bbb90();
  return;
}



void FUN_00533d30(undefined4 param_1,undefined4 param_2)

{
  FUN_004941a0(param_1,param_2,&stack0x0000000c);
  return;
}



void FUN_00533e70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b90b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a5614c;
  local_4 = 0;
  if (((undefined4 *)in_ECX[2] != (undefined4 *)0x0) && (*(char *)(in_ECX + 3) != '\0')) {
    (*(code *)**(undefined4 **)in_ECX[2])(1,uVar1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00533ee0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b90f3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a56188;
  *(undefined1 *)(in_ECX + 3) = 1;
  iVar2 = FUN_00401f00(0x154,uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00430970(param_1,1,0x2800,0);
  }
  in_ECX[2] = uVar3;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00533f70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b90b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56188;
  local_4 = 0;
  if (((undefined4 *)in_ECX[2] != (undefined4 *)0x0) && (*(char *)(in_ECX + 3) != '\0')) {
    (*(code *)**(undefined4 **)in_ECX[2])(1,uVar1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00534020(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00ba7fb0;
  if (DAT_00ba7fb0 != (undefined4 *)0x0) {
    if (*(short *)(DAT_00ba7fb0 + 1) == 0) {
      DAT_00ba7fb0 = (undefined4 *)param_1;
      return;
    }
    *(short *)((int)DAT_00ba7fb0 + 6) = *(short *)((int)DAT_00ba7fb0 + 6) + -1;
    if (*(short *)((int)puVar1 + 6) != 0) {
      DAT_00ba7fb0 = (undefined4 *)param_1;
      return;
    }
    (**(code **)*puVar1)(1);
  }
  DAT_00ba7fb0 = (undefined4 *)param_1;
  return;
}



void FUN_00534070(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00ba7fb4;
  if (DAT_00ba7fb4 != (undefined4 *)0x0) {
    if (*(short *)(DAT_00ba7fb4 + 1) == 0) {
      DAT_00ba7fb4 = (undefined4 *)param_1;
      return;
    }
    *(short *)((int)DAT_00ba7fb4 + 6) = *(short *)((int)DAT_00ba7fb4 + 6) + -1;
    if (*(short *)((int)puVar1 + 6) != 0) {
      DAT_00ba7fb4 = (undefined4 *)param_1;
      return;
    }
    (**(code **)*puVar1)(1);
  }
  DAT_00ba7fb4 = (undefined4 *)param_1;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005340f0(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  uint uVar7;
  char *pcVar8;
  char local_a4 [31];
  char cStack_85;
  char local_84 [128];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_a4;
  __splitpath(param_1,(char *)0x0,(char *)0x0,local_84,local_a4);
  pcVar4 = local_a4;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)local_a4;
  pcVar4 = &cStack_85;
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = local_a4;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar6 = FUN_008b18f0(local_84);
  if (*(uint *)(in_ECX + 0xc) == (*(uint *)(in_ECX + 0x10) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 8),8);
  }
  iVar2 = *(int *)(in_ECX + 0xc);
  iVar3 = *(int *)(in_ECX + 8);
  *(undefined4 *)(iVar3 + iVar2 * 8) = uVar6;
  *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = param_2;
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
  return;
}



void FUN_005341d0(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b9118;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a561b4;
  iVar2 = DAT_00b34d90;
  local_4 = 0;
  if (*(char *)(in_ECX + 3) != '\0') {
    puVar1 = (undefined1 *)(DAT_00b34d90 + 0x10);
    uVar4 = FUN_00533d30(in_ECX[2],puVar1,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *puVar1 = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined1 *)(in_ECX + 3) = 0;
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00534250(byte param_1)

{
  FUN_00533e70();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_005342b0(byte param_1)

{
  FUN_00533f70();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00534340(void)

{
  uint uVar1;
  int iVar2;
  uint *unaff_FS_OFFSET;
  undefined1 auStack_10 [4];
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b914b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (uint)&local_c;
  iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x17);
  *(undefined2 *)(iVar2 + 4) = 0x10;
  local_c = 0;
  FUN_00533ee0(uStack_4);
  *unaff_FS_OFFSET = uVar1;
  return;
}



void FUN_00534430(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_009b918e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a56214;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0x80000000;
  local_4 = 1;
  uStack_3 = 0;
  FUN_008b0e10(uVar1);
  _local_4 = CONCAT31(uStack_3,2);
  FUN_008b0e80(0x6e8d163b,1);
  FUN_008b0e80(0x6cee9071,1);
  FUN_008b0e80(0xf0de4355,1);
  FUN_008b0e80(0x2ff8c16f,1);
  FUN_008b0e80(0xf0fe4356,1);
  FUN_008b0e80(0x275ec1fd,1);
  FUN_008b0e80(0x1adaad0e,1);
  FUN_008b0e80(0x70dc41cb,1);
  FUN_008b0e80(0x1ff88f0e,1);
  FUN_008b0e80(0x475d86b1,1);
  FUN_008b0e80(0x6fe84a9b,1);
  FUN_008b0e80(0x21c8ab2a,1);
  FUN_008b0e80(0x309314d9,1);
  FUN_008b0e80(0xad67fa3a,1);
  FUN_008b0e80(0xad67fa3a,1);
  FUN_008b0e80(0xf032de34,1);
  FUN_008b0e80(0x34df5494,1);
  FUN_008b0e80(0xf02e32df,1);
  FUN_008b0e80(0xf043d534,1);
  FUN_008b0e80(0xf02de43e,1);
  FUN_008b0e80(0xf02132df,1);
  FUN_008b0e80(0xf02132ff,1);
  FUN_008b0e80(0x2a1db936,1);
  FUN_008b0e80(0x68c4e1dc,1);
  FUN_005340f0("hkVisualDebugger.cpp",0x26);
  FUN_005340f0("hkVisualDebugger.cpp",0x56);
  FUN_005340f0("hkVisualDebugger.cpp",0x5d);
  FUN_005340f0("hkVisualDebugger.cpp",0x6a);
  FUN_005340f0("hkVisualDebugger.cpp",0x6e);
  FUN_005340f0("hkVisualDebugger.cpp",0x73);
  FUN_005340f0("hkVisualDebugger.cpp",0x7e);
  FUN_005340f0("hkVisualDebugger.cpp",0x85);
  FUN_005340f0("hkVisualDebugger.cpp",0xbf);
  FUN_005340f0("hkVisualDebugger.cpp",0xf6);
  FUN_005340f0("hkVisualDebugger.cpp",0x115);
  *(undefined1 *)(in_ECX + 8) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00534c20(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 1;
  local_8 = 0;
  iVar2 = FUN_00494410(&local_8);
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar7 = (char *)(iVar2 + *(int *)(iVar2 + 8) + 0xf);
  do {
    pcVar6 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = param_1;
  for (uVar5 = (uint)((int)pcVar4 - (int)param_1) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = (int)pcVar4 - (int)param_1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar4 = param_1 + 1;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *(int *)(iVar2 + 8) = (int)(param_1 + (*(int *)(iVar2 + 8) - (int)pcVar4));
  iVar2 = FUN_00494410(&local_4);
  uVar3 = FUN_00533d30(4,(undefined1 *)(iVar2 + 0x10));
  *(undefined1 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  *(undefined4 *)(iVar2 + 8) = 0;
  return;
}



void FUN_00534d30(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      (**(code **)(*DAT_00ba7d98 + 4))(*(undefined4 *)(*param_1 + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00534d70(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char local_a4 [31];
  char cStack_85;
  char local_84 [128];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_a4;
  if (*(int *)(in_ECX + 0xc) != 0) {
    __splitpath(param_1,(char *)0x0,(char *)0x0,local_84,local_a4);
    pcVar3 = local_a4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar3 - (int)local_a4;
    pcVar3 = &cStack_85;
    do {
      pcVar7 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = local_a4;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar3 = pcVar3 + 1;
    }
    iVar8 = 0;
    if (0 < *(int *)(in_ECX + 0xc)) {
      do {
        iVar2 = *(int *)(*(int *)(in_ECX + 8) + 4 + iVar8 * 8);
        iVar5 = FUN_008b17c0(local_84,*(undefined4 *)(*(int *)(in_ECX + 8) + iVar8 * 8));
        if ((iVar5 == 0) && (param_2 == iVar2)) {
          return 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(in_ECX + 0xc));
    }
  }
  return 1;
}



void FUN_00534f40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  char *pcVar5;
  int *in_ECX;
  
  uVar3 = param_5;
  uVar2 = param_4;
  iVar1 = param_2;
  if (param_2 == -1) {
    cVar4 = FUN_00534d70(param_4,param_5);
  }
  else {
    pcVar5 = (char *)(**(code **)(*in_ECX + 0x10))(&param_2,param_2);
    cVar4 = *pcVar5;
  }
  if (cVar4 != '\0') {
    switch(param_1) {
    case 0:
      (**(code **)(*in_ECX + 0x30))("Report",iVar1,param_3,uVar2,uVar3);
      return;
    case 1:
      (**(code **)(*in_ECX + 0x30))("Warning",iVar1,param_3,uVar2,uVar3);
      return;
    case 2:
    case 3:
      (**(code **)(*in_ECX + 0x28))("Assert",iVar1,param_3,uVar2,uVar3);
      return;
    default:
      (**(code **)(*in_ECX + 0x2c))("Error",iVar1,param_3,uVar2,uVar3);
    }
  }
  return;
}



void FUN_00535010(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b91ce;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56214;
  local_4 = 2;
  FUN_00534d30(in_ECX + 2);
  local_4._0_1_ = 1;
  FUN_008b0e60(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],in_ECX[4] * 8,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005350c0(byte param_1)

{
  FUN_00535010();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005350f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  size_t _Count;
  int *unaff_FS_OFFSET;
  uint uStack_124;
  undefined1 auStack_118 [252];
  int iStack_1c;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b91fe;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_118;
  uStack_124 = DAT_00b30aac ^ (uint)&stack0xfffffee0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0088b070();
  iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x124,0x15);
  *(undefined2 *)(iVar2 + 4) = 0x124;
  local_c = 0;
  iVar2 = FUN_00534430();
  puVar1 = DAT_00ba7fb0;
  local_c = -1;
  if (((DAT_00ba7fb0 != (undefined4 *)0x0) && (*(short *)(DAT_00ba7fb0 + 1) != 0)) &&
     (*(short *)((int)DAT_00ba7fb0 + 6) = *(short *)((int)DAT_00ba7fb0 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  DAT_00ba7fb0 = (undefined4 *)iVar2;
  puVar3 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(8,0x15);
  *(undefined2 *)(puVar3 + 1) = 8;
  *(undefined2 *)((int)puVar3 + 6) = 1;
  *puVar3 = &PTR_LAB_00a561e0;
  puVar1 = DAT_00ba7fb4;
  if (((DAT_00ba7fb4 != (undefined4 *)0x0) && (*(short *)(DAT_00ba7fb4 + 1) != 0)) &&
     (*(short *)((int)DAT_00ba7fb4 + 6) = *(short *)((int)DAT_00ba7fb4 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  DAT_00ba7fb4 = puVar3;
  GetCurrentDirectoryA(0x104,(LPSTR)&uStack_124);
  pcVar4 = _strstr((char *)&uStack_124,"TES4");
  if (pcVar4 == (char *)0x0) {
    pcVar4 = _strstr((char *)&uStack_124,"tes4");
    if (pcVar4 == (char *)0x0) goto LAB_00535245;
  }
  _Count = (int)pcVar4 - (int)&uStack_124;
  _strncpy((char *)(iVar2 + 0x20),(char *)&uStack_124,_Count);
  *(undefined1 *)(_Count + 0x20 + iVar2) = 0;
LAB_00535245:
  _DAT_00b2e8a8 = _DAT_00b376f8;
  _DAT_00ba7a60 = _DAT_00b374b0;
  _DAT_00b2e76c = _DAT_00b374b8;
  iVar2 = FUN_0056a360(3);
  _DAT_00b2e774 = (float)iVar2 * 0.01;
  _DAT_00b2e770 = _DAT_00b374a8;
  _DAT_00b2e778 = _DAT_00b37470 * 0.14287673;
  FUN_008896f0(DAT_00b11638);
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void FUN_005352e0(byte param_1)

{
  FUN_005341d0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00535310(void)

{
  FUN_008a7f20(0x1c,1,1);
  FUN_008a7f20(0x1c,0x13,1);
  FUN_008a7f20(0x1c,2,1);
  FUN_008a7f20(0x1c,3,1);
  FUN_008a7f20(0x1c,4,1);
  FUN_008a7f20(0x1c,5,1);
  FUN_008a7f20(0x1c,6,1);
  FUN_008a7f20(0x1c,7,0);
  FUN_008a7f20(0x1c,8,1);
  FUN_008a7f20(0x1c,9,1);
  FUN_008a7f20(0x1c,10,1);
  FUN_008a7f20(0x1c,0xb,0);
  FUN_008a7f20(0x1c,0xc,1);
  FUN_008a7f20(0x1c,0xd,1);
  FUN_008a7f20(0x1c,0xe,1);
  FUN_008a7f20(0x1c,0xf,0);
  FUN_008a7f20(0x1c,0x10,0);
  FUN_008a7f20(0x1c,0x11,1);
  FUN_008a7f20(0x1c,0x12,1);
  FUN_008a7f20(0x1c,0x14,1);
  FUN_008a7f20(0x1c,0x15,0);
  FUN_008a7f20(0x1c,0x18,0);
  FUN_008a7f20(0x1c,0x1a,0);
  FUN_008a7f20(0x1c,0x1b,0);
  FUN_008a7f20(0x1c,0x1c,0);
  FUN_008a7f20(0x1c,0x1d,0);
  FUN_008a7f20(0x1c,0x1e,0);
  FUN_008a7f20(0x1c,0x1f,0);
  return;
}



void FUN_00535460(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  piVar1 = *(int **)(in_ECX + 0x1a0);
  if (((piVar1 == (int *)0x0) || (iVar2 = piVar1[2], iVar2 == 0)) || (iVar2 == -0x14)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 0x30);
  }
  *(int *)(in_ECX + 0x1a8) = param_1;
  if (((piVar1 != (int *)0x0) && (iVar2 = piVar1[2], iVar2 != 0)) && (iVar2 != -0x14)) {
    *(uint *)(iVar2 + 0x30) = uVar3 & 0xffff | param_1 << 0x10;
  }
  (**(code **)(*piVar1 + 0x80))();
  return;
}



void FUN_005354c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((*(int **)(in_ECX + 0x1a0) != (int *)0x0) &&
     ((**(code **)(**(int **)(in_ECX + 0x1a0) + 0x5c))(param_1), param_1 != 0)) {
    uVar1 = *(undefined4 *)(in_ECX + 0x1a0);
    uVar2 = FUN_008aeb80(0x58,0xad,0x56,0xf);
    FUN_0088bb60(uVar1,uVar2);
  }
  return;
}



undefined4 FUN_00535510(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int **)(in_ECX + 0x1a0) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x1a0) + 0x58))(), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x2b0);
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00535540(float *param_1,float *param_2,float param_3)

{
  int *piVar1;
  int in_ECX;
  undefined1 auStack_64 [8];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_64;
  local_50 = param_3 * *param_2;
  local_4c = param_2[1] * param_3;
  local_48 = param_3 * param_2[2];
  local_5c = *param_1 + local_50;
  local_58 = local_4c + param_1[1];
  local_54 = param_1[2] + local_48;
  FUN_00535310();
  if (*(int *)(in_ECX + 0x1a0) == 0) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 4) = 0x7f7fffff;
  }
  else {
    local_2c = 0x3c23d70a;
    local_30 = 0x3c23d70a;
    local_50 = *param_1 * 0.14287673;
    local_4c = param_1[1] * 0.14287673;
    local_48 = param_1[2];
    *(undefined4 *)(in_ECX + 0x14) = 0;
    local_48 = local_48 * 0.14287673;
    local_40 = local_5c * 0.14287673;
    local_3c = local_58 * 0.14287673;
    local_38 = local_54 * 0.14287673;
    *(undefined4 *)(in_ECX + 4) = 0x7f7fffff;
    piVar1 = *(int **)(*(int *)(in_ECX + 0x1a0) + 8);
    if (piVar1 != (int *)0x0) {
      FUN_0089f570();
      (**(code **)(*piVar1 + 0x30))(&local_50,&local_40);
      FUN_0089f570();
    }
    if (0 < *(int *)(in_ECX + 0x14)) {
      FUN_008af890();
      return 1;
    }
  }
  return 0;
}



void FUN_00535680(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b9276;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x1a0);
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1a0) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x1a0);
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_005322e0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00535730(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_74;
  int local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b942e;
  local_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff70;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar3 = FUN_00401f00(0x14,uVar2);
  puVar5 = (undefined4 *)0x0;
  local_14 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00532090(param_1,1);
  }
  FUN_00532250();
  local_80 = param_2 << 0x10 | 0x1c;
  local_14 = 1;
  *(int *)(in_ECX + 0x1a8) = param_2;
  if (iVar3 == 0) {
    local_7c = 0;
  }
  else {
    local_7c = *(undefined4 *)(iVar3 + 8);
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_60 = 0x3f800000;
  local_4c = 0x3f800000;
  local_38 = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar3 = FUN_00401f00(0x14,uVar2);
  local_14._0_1_ = 2;
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)FUN_00531fc0(&local_80);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x1a0);
  local_14 = CONCAT31(local_14._1_3_,1);
  if (puVar1 != puVar5) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(in_ECX + 0x1a0) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  *(undefined1 *)(in_ECX + 0x1a4) = 1;
  local_14 = 0xffffffff;
  if (-1 < local_6c) {
    FUN_008a75d0(local_74,local_6c * 8,0x14);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_005358f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b9086;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a55dec;
  in_ECX[4] = in_ECX + 8;
  in_ECX[6] = 0x80000008;
  in_ECX[1] = 0x7f7fffff;
  in_ECX[5] = 0;
  in_ECX[0x68] = 0;
  local_4 = 1;
  FUN_00535730(param_1,param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00535980(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a562bc;
  in_ECX[9] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xc] = 0;
  in_ECX[1] = 0x3f800000;
  return;
}



void FUN_005359a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = param_1;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  if ((((*(uint *)(in_ECX + 0x40) ^ *(uint *)(iVar2 + 0x1c)) & 0x3f) != 0) ||
     ((short)(*(uint *)(iVar2 + 0x1c) >> 0x10) == *(short *)(in_ECX + 0x42))) {
    FUN_008b1ab0(param_1,param_2);
  }
  return;
}



void FUN_00535a00(int param_1,int param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b93e8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[9] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xc] = 0;
  in_ECX[1] = 0x3f800000;
  *in_ECX = &PTR_FUN_00a562c8;
  local_4 = 0;
  in_ECX[0x10] = 0;
  if (param_2 != 0) {
    FUN_0065abe0(&param_2);
    in_ECX[0x10] = param_2;
    if (param_1 < 0x18) {
      param_1 = 0x1c;
    }
    *(uint *)(&DAT_00ba7db0 + param_1 * 4) = 1 << ((byte)param_2 & 0x1f) | 0xa277f;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00535aa0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}



float10 FUN_00535ac0(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  if (in_ECX != 0) {
    if (*(int *)(in_ECX + 8) != 0) {
      iVar1 = FUN_008a98d0();
      if (iVar1 != 0) {
        fVar2 = (float10)FUN_0089da90();
        return (float10)(float)fVar2;
      }
    }
    if (*(int *)(in_ECX + 8) != 0) {
      fVar2 = (float10)FUN_0089da90();
      return (float10)(float)fVar2;
    }
  }
  return (float10)0.0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00535be0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  undefined1 auStack_164 [12];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float afStack_124 [13];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [60];
  undefined1 auStack_a4 [112];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_164;
  if (param_2 == 0) {
    return;
  }
  iVar3 = FUN_0047fac0(param_2);
  if (iVar3 == 0) {
    return;
  }
  piVar1 = *(int **)(iVar3 + 0x10);
  if (piVar1 == (int *)0x0) {
    return;
  }
  piVar5 = (int *)0x0;
  if ((DAT_00b36598 != 0) || (DAT_00b36594 != 0)) {
    piVar4 = &DAT_00b36594;
    do {
      piVar2 = (int *)piVar4[1];
      if ((piVar2 == (int *)0x0) && (*piVar4 == 0)) break;
      if (piVar5 != (int *)0x0) goto LAB_00535ca7;
      piVar4 = (int *)*piVar4;
      if ((piVar4 != (int *)0x0) && ((int *)*piVar4 == piVar1)) {
        piVar5 = piVar4;
      }
      piVar4 = piVar2;
    } while (piVar2 != (int *)0x0);
    if (piVar5 != (int *)0x0) goto LAB_00535ca7;
  }
  piVar5 = (int *)FUN_00401f00(0x10);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
  }
  *piVar5 = (int)piVar1;
  piVar5[1] = param_2;
  fVar6 = (float10)FUN_00535ac0();
  piVar5[2] = (int)(float)fVar6;
  piVar5[3] = 0;
  FUN_00446cb0(piVar5);
LAB_00535ca7:
  local_158 = (float)piVar5[2];
  local_f0 = *param_1;
  uStack_ec = param_1[1];
  uStack_e8 = param_1[2];
  uStack_e4 = param_1[3];
  FUN_008b1dd0(&DAT_00b2f080);
  (**(code **)(*piVar1 + 0xac))(local_e0);
  FUN_008b1f10(&uStack_e4);
  FUN_008b1f70(auStack_a4,afStack_124);
  fStack_134 = DAT_00b370d8 * fStack_34;
  fStack_130 = DAT_00b370d8 * fStack_30;
  fStack_12c = DAT_00b370d8 * fStack_2c;
  fStack_128 = DAT_00b370d8 * fStack_28;
  (**(code **)(*piVar1 + 0xa4))(&fStack_154);
  fStack_154 = 1.0 / (DAT_00b370d8 + local_158);
  fStack_150 = local_158 * fStack_150;
  fStack_14c = local_158 * fStack_14c;
  fStack_148 = local_158 * fStack_148;
  fStack_144 = local_158 * fStack_144;
  fStack_140 = fStack_154 * (fStack_150 + fStack_130);
  fStack_13c = fStack_154 * (fStack_14c + fStack_12c);
  fStack_138 = fStack_154 * (fStack_148 + fStack_128);
  fStack_134 = fStack_154 * (fStack_144 + afStack_124[0]);
  FUN_008a9c60(&fStack_140);
  FUN_008a6410();
  local_158 = DAT_00b370d8 + local_158;
  piVar5[3] = piVar5[3] + 1;
  piVar5[2] = (int)local_158;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00535dd0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_174 [12];
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float afStack_124 [13];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 auStack_e4 [16];
  undefined1 auStack_a4 [4];
  undefined1 local_a0 [108];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_174;
  iVar5 = 0;
  if ((DAT_00b36598 != 0) || (DAT_00b36594 != 0)) {
    piVar2 = &DAT_00b36594;
    do {
      piVar1 = (int *)piVar2[1];
      if ((piVar1 == (int *)0x0) && (*piVar2 == 0)) break;
      if (iVar5 != 0) goto LAB_00535e3a;
      iVar3 = *piVar2;
      if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == param_2)) {
        iVar5 = iVar3;
      }
      piVar2 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (iVar5 != 0) {
LAB_00535e3a:
      if (param_2 != 0) {
        iVar3 = FUN_0047fac0(param_2);
        if ((iVar3 != 0) && (piVar2 = *(int **)(iVar3 + 0x10), piVar2 != (int *)0x0)) {
          local_168 = *(float *)(iVar5 + 8);
          local_f0 = *param_1;
          uStack_ec = param_1[1];
          uStack_e8 = param_1[2];
          auStack_e4[0] = param_1[3];
          FUN_008b1dd0(&DAT_00b2f080);
          (**(code **)(*piVar2 + 0xac))(local_a0);
          FUN_008b1f10(auStack_a4);
          FUN_008b1f70(auStack_e4,afStack_124);
          fStack_144 = DAT_00b370d8 * fStack_34;
          fStack_140 = DAT_00b370d8 * fStack_30;
          fStack_13c = DAT_00b370d8 * fStack_2c;
          fStack_138 = DAT_00b370d8 * fStack_28;
          (**(code **)(*piVar2 + 0xa4))(&fStack_164);
          fStack_164 = 1.0 / (local_168 - DAT_00b370d8);
          fStack_160 = local_168 * fStack_160;
          fStack_15c = local_168 * fStack_15c;
          fStack_158 = local_168 * fStack_158;
          fStack_154 = local_168 * fStack_154;
          fStack_130 = fStack_164 * (fStack_160 - fStack_140);
          fStack_12c = fStack_164 * (fStack_15c - fStack_13c);
          fStack_128 = fStack_164 * (fStack_158 - fStack_138);
          afStack_124[0] = fStack_164 * (fStack_154 - fStack_134);
          FUN_008a9c60(&fStack_130);
          fVar8 = fStack_160 - fStack_140;
          fVar9 = fStack_15c - fStack_13c;
          fVar10 = fStack_158 - fStack_138;
          fVar7 = fVar10 * fVar10;
          fVar6 = fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
          auVar11._4_4_ = fVar7;
          auVar11._0_4_ = fVar6;
          auVar11._8_4_ = fVar7;
          auVar11._12_4_ = fVar7;
          auVar11 = rsqrtss(auVar11,auVar11);
          fVar7 = auVar11._0_4_;
          fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
          if (piVar2[2] == 0) {
            pfVar4 = (float *)&DAT_00ba7a40;
          }
          else {
            pfVar4 = (float *)(*(int *)(piVar2[2] + 0x50) + 0xd0);
          }
          fStack_150 = *pfVar4 + fVar6 * fVar8 * 1.5;
          fStack_14c = pfVar4[1] + fVar6 * fVar9 * 1.5;
          fStack_148 = pfVar4[2] + fVar6 * fVar10 * 1.5;
          fStack_144 = pfVar4[3] + fVar6 * (fStack_154 - fStack_134) * 1.5;
          iVar3 = piVar2[2];
          if (iVar3 != 0) {
            FUN_0089f570();
            FUN_008a6410();
            (**(code **)(**(int **)(iVar3 + 0x50) + 0x54))(&fStack_150);
            FUN_0089f570();
          }
          fVar6 = local_168 - DAT_00b370d8;
          *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + -1;
          *(float *)(iVar5 + 8) = fVar6;
          if (*(int *)(iVar5 + 0xc) < 1) {
            FUN_00401f20(iVar5);
            FUN_0065c620(iVar5);
          }
        }
      }
    }
  }
  return;
}



void FUN_00536060(undefined4 param_1)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b92a8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a562d4;
  local_4 = 0;
  FUN_00532df0();
  in_ECX[1] = param_1;
  *(undefined1 *)(in_ECX + 2) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005360d0(byte param_1)

{
  FUN_004cd260();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005360f0(void)

{
  undefined4 *in_ECX;
  
  FUN_00536060(0);
  *in_ECX = &PTR_FUN_00a562f4;
  return;
}



undefined4 FUN_00536110(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_008afce0(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_004dc270();
      return uVar2;
    }
  }
  return 0;
}



int FUN_00536140(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*param_1 + 8);
  }
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 0x10);
    if (0x1d < iVar5) {
      iVar5 = 0x1e;
    }
    return (int)(char)iVar5;
  }
  piVar3 = (int *)param_1[3];
  piVar2 = param_1;
  while (piVar1 = piVar3, piVar1 != (int *)0x0) {
    piVar2 = piVar1;
    piVar3 = (int *)piVar1[3];
  }
  if (((byte)piVar2[7] & 0x3f) == 0x11) {
    cVar4 = FUN_00440ac0(param_2);
    return (int)cVar4;
  }
  cVar4 = FUN_008afc90(param_1);
  return (int)cVar4;
}



undefined4 FUN_005361b0(undefined4 param_1)

{
  switch(param_1) {
  default:
    return DAT_00b37150;
  case 1:
  case 0x10:
    return DAT_00b37158;
  case 2:
  case 0x11:
    return DAT_00b37160;
  case 3:
  case 0x12:
    return DAT_00b37168;
  case 4:
  case 0x13:
    return DAT_00b37170;
  case 5:
  case 0xb:
  case 0x14:
  case 0x1a:
    return DAT_00b37178;
  case 6:
  case 0x15:
    return DAT_00b37180;
  case 7:
  case 0x16:
    return DAT_00b37188;
  case 8:
  case 0x17:
    return DAT_00b37190;
  case 9:
  case 0xc:
  case 0x18:
  case 0x1b:
    return DAT_00b37198;
  case 0xd:
  case 0x1c:
    return DAT_00b371a0;
  case 0xe:
  case 0x1d:
    return DAT_00b371a8;
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00536260(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (float10)_DAT_00b37a78;
  case 1:
    return (float10)_DAT_00b37a80;
  case 2:
    return (float10)_DAT_00b37a88;
  case 3:
    return (float10)_DAT_00b37a90;
  case 4:
    return (float10)_DAT_00b37a98;
  case 5:
    return (float10)_DAT_00b37aa0;
  case 6:
    return (float10)_DAT_00b37aa8;
  case 7:
    return (float10)_DAT_00b37ab0;
  case 8:
    return (float10)_DAT_00b37ab8;
  case 9:
    return (float10)_DAT_00b37ac0;
  default:
    return (float10)0;
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005362f0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) ||
      (piVar3 = (int *)(*(int *)(param_1 + 8) + 0x14), piVar3 == (int *)0x0)) ||
     (iVar8 = *piVar3, iVar8 == 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(iVar8 + 8);
  }
  piVar4 = (int *)(**(code **)(*piVar3 + 0x88))();
  if (piVar4 == (int *)0x0) {
    fVar9 = (float10)FUN_00536260(piVar3[4]);
  }
  else {
    iVar8 = 0;
    for (iVar5 = (**(code **)(*(int *)piVar4[2] + 0x20))(); iVar5 != -1;
        iVar5 = (**(code **)(*(int *)piVar4[2] + 0x24))(iVar5)) {
      uVar6 = (**(code **)(*piVar4 + 0x9c))(iVar5);
      FUN_00536260(uVar6);
      iVar8 = iVar8 + 1;
    }
    fVar9 = (float10)0.0 / (float10)iVar8;
  }
  fVar1 = (float)fVar9;
  if (((param_1 == 0) || (iVar8 = *(int *)(param_1 + 8), iVar8 == 0)) || (iVar8 == -0x14)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(iVar8 + 0x30);
  }
  if (((byte)uVar7 & 0x3f) == 8) {
    if (fVar1 <= 0.0) {
switchD_005363e5_caseD_1:
      fVar2 = _DAT_00b37ac8;
      goto switchD_005363e5_caseD_11;
    }
    fVar2 = 0.0;
    switch(uVar7 >> 8 & 0x1f) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 8:
    case 0xb:
    case 0xe:
      goto switchD_005363e5_caseD_1;
    case 6:
    case 7:
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x10:
    case 0x18:
      return (float10)(fVar1 * _DAT_00b37ad0);
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
switchD_005363e5_caseD_11:
      return (float10)(fVar1 * fVar2);
    default:
      break;
    }
  }
  return (float10)(fVar1 * 1.0);
}



float10 FUN_00536460(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    if ((iVar1 != 0) && (iVar1 != -0x14)) {
      return (float10)(&DAT_00b116e0)[*(uint *)(iVar1 + 0x30) >> 8 & 0x1f];
    }
    return (float10)DAT_00b116e0;
  }
  return (float10)1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005364b0(int *param_1,float *param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float unaff_EBX;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_34;
  if (param_1 != (int *)0x0) {
    iVar3 = FUN_0047fac0(param_1);
    if ((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 0x10), piVar1 != (int *)0x0)) {
      iVar3 = piVar1[2];
      if ((iVar3 == 0) || (iVar3 == -0x14)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(iVar3 + 0x30);
      }
      local_34 = (float)(&DAT_00b11760)[uVar5 >> 8 & 0x1f] * param_3;
      (**(code **)(*piVar1 + 0xa8))(&local_30);
      local_34 = local_34 - *param_2;
      local_30 = local_30 - param_2[1];
      fStack_2c = fStack_2c - param_2[2];
      iVar3 = piVar1[2];
      fVar7 = fStack_2c * fStack_2c;
      fVar6 = fVar7 + local_30 * local_30 + local_34 * local_34;
      auVar8._4_4_ = fVar7;
      auVar8._0_4_ = fVar6;
      auVar8._8_4_ = fVar7;
      auVar8._12_4_ = fVar7;
      auVar8 = rsqrtss(auVar8,auVar8);
      fVar7 = auVar8._0_4_;
      fVar7 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
      fVar6 = (*(float *)(*(int *)(iVar3 + 0x50) + 200) * 0.25 + 0.75) * unaff_EBX;
      iVar2 = *(int *)(iVar3 + 0x50);
      local_34 = *(float *)(iVar2 + 0xd0) + fVar6 * fVar7 * local_34;
      local_30 = *(float *)(iVar2 + 0xd4) + fVar6 * fVar7 * local_30;
      fStack_2c = *(float *)(iVar2 + 0xd8) + fVar6 * fVar7 * fStack_2c;
      fStack_28 = *(float *)(iVar2 + 0xdc) + fVar6 * fVar7 * (fStack_28 - param_2[3]);
      FUN_008a6410();
      (**(code **)(**(int **)(iVar3 + 0x50) + 0x54))(&local_34);
    }
    iVar3 = (**(code **)(*param_1 + 8))();
    if (iVar3 != 0) {
      uVar5 = 0;
      if (*(short *)(iVar3 + 0xb6) != 0) {
        if (*(short *)(iVar3 + 0xb6) != 0) goto LAB_00536617;
        uVar4 = 0;
        while( true ) {
          FUN_005364b0(uVar4,param_2,param_3);
          uVar5 = uVar5 + 1;
          if (*(ushort *)(iVar3 + 0xb6) <= uVar5) break;
LAB_00536617:
          uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0xb0) + uVar5 * 4);
        }
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00536660(int *param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_34 [4];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_34;
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_0047fac0(param_1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
      if (iVar1 == 0) {
        pfVar2 = (float *)&DAT_00ba7a40;
      }
      else {
        pfVar2 = (float *)(*(int *)(iVar1 + 0x50) + 0xd0);
      }
      local_30 = *param_2 + *pfVar2;
      fStack_2c = param_2[1] + pfVar2[1];
      fStack_28 = param_2[2] + pfVar2[2];
      fStack_24 = pfVar2[3] + 0.0;
      FUN_004d6af0(&local_30);
    }
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
      uVar4 = 0;
      if (*(short *)(iVar1 + 0xb6) != 0) {
        if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_00536707;
        uVar3 = 0;
        while( true ) {
          FUN_00536660(uVar3,param_2);
          uVar4 = uVar4 + 1;
          if (*(ushort *)(iVar1 + 0xb6) <= uVar4) break;
LAB_00536707:
          uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar4 * 4);
        }
      }
    }
  }
  return;
}



void FUN_00536740(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    if (param_1[0x2a] != 0) {
      FUN_00435ce0(0);
    }
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
      uVar3 = 0;
      if (*(short *)((int)param_1 + 0xb6) != 0) {
        if (*(short *)((int)param_1 + 0xb6) != 0) goto LAB_0053677e;
        uVar2 = 0;
        while( true ) {
          FUN_00536740(uVar2);
          uVar3 = uVar3 + 1;
          if (*(ushort *)((int)param_1 + 0xb6) <= uVar3) break;
LAB_0053677e:
          uVar2 = *(undefined4 *)(param_1[0x2c] + uVar3 * 4);
        }
      }
    }
  }
  return;
}



void FUN_005367b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int aiStack_8 [2];
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = FUN_0047fac0(param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
    if ((iVar1 == 0) ||
       ((piVar2 = (int *)(iVar1 + 0x14), piVar2 == (int *)0x0 || (iVar1 = *piVar2, iVar1 == 0)))) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
    if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 8), piVar2 != (int *)0x0)) {
      iVar1 = (**(code **)(*piVar2 + 8))();
      if (iVar1 == 0x10) {
        iVar1 = (**(code **)(*piVar2 + 0x1c))();
      }
      else {
        iVar1 = (**(code **)(*piVar2 + 8))();
        if (iVar1 == 9) {
          (**(code **)(*piVar2 + 0x1c))(aiStack_8);
          *param_2 = *param_2 + aiStack_8[0];
          goto LAB_0053685f;
        }
        iVar1 = (**(code **)(*piVar2 + 8))();
        if ((iVar1 != 0x18) || ((int *)piVar2[3] == (int *)0x0)) goto LAB_0053685f;
        iVar1 = (**(code **)(*(int *)piVar2[3] + 0x1c))();
      }
      *param_3 = *param_3 + iVar1;
    }
  }
LAB_0053685f:
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 != 0) {
    uVar4 = 0;
    if (*(short *)((int)param_1 + 0xb6) != 0) {
      if (*(short *)((int)param_1 + 0xb6) != 0) goto LAB_00536881;
      uVar3 = 0;
      while( true ) {
        FUN_005367b0(uVar3,param_2,param_3);
        uVar4 = uVar4 + 1;
        if (*(ushort *)((int)param_1 + 0xb6) <= uVar4) break;
LAB_00536881:
        uVar3 = *(undefined4 *)(param_1[0x2c] + uVar4 * 4);
      }
    }
  }
  return;
}



char FUN_005368b0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return '\0';
  }
  iVar2 = FUN_0047fac0(param_1);
  if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) &&
      ((iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 8), iVar2 == 0 ||
       (iVar2 = (**(code **)(**(int **)(iVar2 + 0x50) + 8))(), iVar2 != 6)))) &&
     (iVar2 = FUN_004b6d90(), iVar2 != 7)) {
    return '\x01';
  }
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    uVar4 = 0;
    if (*(short *)(iVar2 + 0xb6) != 0) {
      if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_00536921;
      uVar3 = 0;
      while( true ) {
        cVar1 = FUN_005368b0(uVar3);
        if (cVar1 != '\0') {
          return cVar1;
        }
        uVar4 = uVar4 + 1;
        if (*(ushort *)(iVar2 + 0xb6) <= uVar4) break;
LAB_00536921:
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar4 * 4);
      }
      return '\0';
    }
  }
  return '\0';
}



int FUN_00536980(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  if (in_ECX == param_1) {
    return *(int *)(in_ECX + 4);
  }
  iVar2 = param_1;
  if (param_1 != 0) {
    while (iVar1 = *(int *)(iVar2 + 4), in_ECX != iVar1) {
      iVar2 = iVar1;
      if (iVar1 == 0) {
        return param_1;
      }
    }
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
  }
  return param_1;
}



void FUN_005369b0(int param_1)

{
  int in_ECX;
  
  for (; (in_ECX != 0 && (*(int *)(in_ECX + 0xc) != param_1)); in_ECX = *(int *)(in_ECX + 4)) {
  }
  return;
}



void FUN_005369d0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x10);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_00401e40(iVar2 - (uint)*(byte *)(iVar2 + -1));
    iVar2 = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



void FUN_00536a10(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar3 = *(int *)(in_ECX + 0x10);
  iVar1 = iVar3;
  if (param_1 == iVar3) {
    iVar3 = *(int *)(param_1 + 4);
  }
  else {
    do {
      iVar2 = iVar1;
      if (iVar2 == 0) goto LAB_00536a46;
      iVar1 = *(int *)(iVar2 + 4);
    } while (param_1 != iVar1);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
  }
LAB_00536a46:
  *(int *)(in_ECX + 0x10) = iVar3;
  FUN_00401e40();
  return;
}



undefined4 FUN_00536ae0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



void FUN_00536b30(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 != 0) {
    do {
      if (*(uint *)(iVar1 + 0xc) == param_1) break;
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = thunk_FUN_00401aa0(0x50,1);
  bVar3 = 0x10 - ((byte)iVar1 & 0xf);
  puVar2 = (uint *)(iVar1 + (uint)bVar3);
  *(byte *)((int)puVar2 + -1) = bVar3;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = param_2;
  puVar2[3] = param_1;
  puVar2[0xc] = 0x1f;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *puVar2 = *puVar2 | param_3;
  puVar2[1] = *(uint *)(in_ECX + 0x10);
  *(uint **)(in_ECX + 0x10) = puVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536bc0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  if (iVar1 != 0) {
    do {
      if (*(int *)(iVar1 + 8) == param_2) break;
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
    if (iVar1 != 0) {
      return;
    }
  }
  puVar2 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    _DAT_00000004 = *(undefined4 *)(in_ECX + 0x18);
    *(undefined4 *)(in_ECX + 0x18) = 0;
    return;
  }
  puVar2[2] = param_2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[3] = param_1;
  puVar2[4] = 0;
  puVar2[1] = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 **)(in_ECX + 0x18) = puVar2;
  return;
}



int FUN_00536c30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar4 = FUN_00536bc0(param_2,param_1[10]);
  if ((iVar4 != 0) && (iVar5 = FUN_00536b30(param_3,param_1[8],param_4), iVar5 != 0)) {
    uVar9 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    *(undefined4 *)(iVar5 + 0x10) = *param_1;
    *(undefined4 *)(iVar5 + 0x14) = uVar9;
    *(undefined4 *)(iVar5 + 0x18) = uVar2;
    *(undefined4 *)(iVar5 + 0x1c) = uVar3;
    iVar6 = *(int *)(iVar4 + 8);
    if ((*(char *)(iVar6 + 0x18) == '\x01') && (iVar6 = *(int *)(iVar6 + 0x10) + iVar6, iVar6 != 0))
    {
      iVar1 = *(int *)(iVar6 + 0x50);
      local_20 = *(undefined4 *)(iVar1 + 0xd0);
      uStack_1c = *(undefined4 *)(iVar1 + 0xd4);
      uStack_18 = *(undefined4 *)(iVar1 + 0xd8);
      uStack_14 = *(undefined4 *)(iVar1 + 0xdc);
      if ((*(int *)(iVar6 + 0xc) != 0) && (piVar7 = (int *)FUN_00494f10(), piVar7 != (int *)0x0)) {
        piVar8 = (int *)(**(code **)(*piVar7 + 0x88))();
        if ((piVar8 != (int *)0x0) && (param_1[0xb] != -1)) {
          uVar9 = (**(code **)(*piVar8 + 0x9c))(param_1[0xb]);
          *(undefined4 *)(iVar5 + 0x30) = uVar9;
          *(int **)(iVar5 + 0x20) = piVar7;
          *(undefined4 *)(iVar5 + 0x24) = local_20;
          *(undefined4 *)(iVar5 + 0x28) = uStack_1c;
          *(undefined4 *)(iVar5 + 0x2c) = uStack_18;
          return iVar4;
        }
        *(int *)(iVar5 + 0x30) = piVar7[4];
        *(undefined4 *)(iVar5 + 0x20) = local_20;
        *(undefined4 *)(iVar5 + 0x24) = uStack_1c;
        *(undefined4 *)(iVar5 + 0x28) = uStack_18;
        *(undefined4 *)(iVar5 + 0x2c) = uStack_14;
        return iVar4;
      }
    }
    else {
      local_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
    }
    *(undefined4 *)(iVar5 + 0x20) = local_20;
    *(undefined4 *)(iVar5 + 0x24) = uStack_1c;
    *(undefined4 *)(iVar5 + 0x28) = uStack_18;
    *(undefined4 *)(iVar5 + 0x2c) = uStack_14;
  }
  return iVar4;
}



void FUN_00536d30(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(in_ECX + 0x18);
    iVar1 = iVar3;
    if (param_1 == iVar3) {
      iVar3 = *(int *)(param_1 + 4);
    }
    else {
      do {
        iVar2 = iVar1;
        if (iVar2 == 0) goto LAB_00536d65;
        iVar1 = *(int *)(iVar2 + 4);
      } while (param_1 != iVar1);
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    }
LAB_00536d65:
    *(int *)(in_ECX + 0x18) = iVar3;
    FUN_005369d0();
    FUN_00401f20(param_1);
  }
  return;
}



void FUN_00536e10(void)

{
  undefined4 *in_ECX;
  
  FUN_00536060(0);
  in_ECX[5] = &PTR_LAB_00a56320;
  *in_ECX = &PTR_FUN_00a56350;
  in_ECX[5] = &PTR_LAB_00a56338;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  return;
}



void FUN_00536e50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar4 = *(int *)(in_ECX + 0x18);
  while (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 4);
    iVar3 = *(int *)(iVar4 + 0x10);
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 4);
      FUN_00401e40(iVar3 - (uint)*(byte *)(iVar3 + -1));
      iVar3 = iVar2;
    }
    *(undefined4 *)(iVar4 + 0x10) = 0;
    FUN_00401f20(iVar4);
    iVar4 = iVar1;
  }
  iVar4 = *(int *)(in_ECX + 0x1c);
  *(undefined4 *)(in_ECX + 0x18) = 0;
  if (iVar4 != 0) {
    do {
      iVar1 = *(int *)(iVar4 + 4);
      FUN_00401f20(iVar4);
      iVar4 = iVar1;
    } while (iVar1 != 0);
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  return;
}



void FUN_00536ee0(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x10); (iVar1 != 0 && (*(int *)(iVar1 + 0xc) != param_2));
      iVar1 = *(int *)(iVar1 + 4)) {
  }
  FUN_00536a10(iVar1);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00536d30(param_1);
  }
  return;
}



undefined4 FUN_00536f20(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = FUN_006ecc80();
  if (iVar2 != 0) {
    cVar1 = FUN_004c97f0();
    iVar2 = DAT_00b35c24;
    if (cVar1 != '\0') {
      iVar2 = FUN_00424180();
    }
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + 0x24);
    }
  }
  return 0;
}



void FUN_00536f70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a56370;
  in_ECX[2] = in_ECX + 5;
  in_ECX[4] = 0x80000010;
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  return;
}



void FUN_00536f90(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b92d8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56370;
  local_4 = 0;
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],in_ECX[4] << 4,0x14);
  }
  *in_ECX = &PTR_LAB_00a56314;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_00537020(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  int *piVar11;
  uint *unaff_FS_OFFSET;
  undefined1 local_142;
  int iStack_140;
  uint uStack_13c;
  uint uStack_138;
  int local_134;
  int *piStack_130;
  int iStack_12c;
  uint uStack_128;
  undefined1 auStack_120 [4];
  undefined1 uStack_11c;
  int iStack_118;
  uint uStack_114;
  uint local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b9321;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffeac;
  *unaff_FS_OFFSET = (uint)&local_c;
  piVar11 = *(int **)(in_ECX + 0xc);
  iVar10 = 0;
  local_142 = 0;
  if ((((piVar11 == (int *)0x0) || (((uint)piVar11[2] >> 0xb & 1) != 0)) ||
      (((uint)piVar11[2] >> 5 & 1) != 0)) ||
     (local_134 = in_ECX, iVar6 = (**(code **)(*piVar11 + 0x154))(uVar5), iVar6 == 0)) {
    local_142 = 0;
  }
  else {
    piVar11 = (int *)(*(int *)(*(int *)(in_ECX + 8) + 0x10) + *(int *)(in_ECX + 8));
    piStack_130 = piVar11;
    iVar6 = (**(code **)(*piVar11 + 0x10))();
    if (iVar6 == 1) {
      if (piVar11[0x49] != 0) {
        FUN_00536f70();
        uStack_4 = 0;
        uStack_114 = 0;
        uStack_11c = 0;
        (**(code **)(*piVar11 + 0x38))(auStack_120);
        uVar5 = uStack_114;
        if (uStack_114 != 0) {
          iStack_140 = 0;
          uStack_13c = 0;
          uStack_138 = 0x80000000;
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          if (0 < (int)uStack_114) {
            FUN_008a6e40(&iStack_140,uStack_114 & ((int)uStack_114 < 0) - 1,4);
          }
          bVar1 = false;
          if (0 < (int)uVar5) {
            iStack_12c = 0;
            uStack_128 = uVar5;
            do {
              iVar10 = *(int *)(iStack_118 + 8 + iStack_12c);
              if ((iVar10 != 0) && (piVar11 = (int *)FUN_00536110(iVar10), piVar11 != (int *)0x0)) {
                iVar6 = 0;
                if (0 < (int)uStack_13c) {
                  do {
                    if (*(int **)(iStack_140 + iVar6 * 4) == piVar11) {
                      if (iVar6 != -1) goto LAB_0053727b;
                      break;
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < (int)uStack_13c);
                }
                if (uStack_13c == (uStack_138 & 0x3fffffff)) {
                  FUN_008a6ee0(&iStack_140,4);
                }
                *(int **)(iStack_140 + uStack_13c * 4) = piVar11;
                uStack_13c = uStack_13c + 1;
                iVar6 = *(int *)(in_ECX + 0xc) + 0x44;
                bVar2 = FUN_004fbf90(piVar11,iVar6,0x10000000);
                cVar3 = (**(code **)(*piVar11 + 0x188))();
                if ((-(uint)(cVar3 != '\0') & (uint)piVar11) != 0) {
                  bVar4 = FUN_004fbf90(piVar11,iVar6,0x40000000);
                  bVar2 = bVar2 | bVar4;
                  cVar3 = (**(code **)(*piVar11 + 400))();
                  piVar7 = (int *)(-(uint)(cVar3 != '\0') & (uint)piVar11);
                  if ((piVar7 != (int *)0x0) &&
                     (cVar3 = (**(code **)(*piVar7 + 0x198))(0), cVar3 == '\0')) {
                    bVar4 = FUN_004fbf90(piVar11,iVar6,0x20000000);
                    bVar2 = bVar2 | bVar4;
                  }
                }
                if (!bVar1) {
                  FUN_004d8350(piVar11);
                  bVar1 = true;
                }
                if (bVar2 == 0) {
                  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) == 0) {
                    (**(code **)(*piStack_130 + 0x20))(iVar10);
                  }
                }
                else {
                  local_142 = 1;
                }
              }
LAB_0053727b:
              iStack_12c = iStack_12c + 0x10;
              uStack_128 = uStack_128 - 1;
              in_ECX = local_134;
            } while (uStack_128 != 0);
            uStack_128 = 0;
          }
          uStack_4 = uStack_4 & 0xffffff00;
          if (-1 < (int)uStack_138) {
            FUN_008a75d0(iStack_140,uStack_138 * 4,0x14);
          }
        }
        uStack_4 = 0xffffffff;
        FUN_00536f90();
      }
    }
    else {
      iVar6 = (**(code **)(*piVar11 + 0x10))();
      if ((iVar6 == 0) && (uVar5 = piVar11[0x25], uVar5 != 0)) {
        iStack_140 = 0;
        uStack_13c = 0;
        uStack_138 = 0x80000000;
        uStack_4 = 2;
        if (0 < (int)uVar5) {
          FUN_008a6e40(&iStack_140,((int)uVar5 < 0) - 1 & uVar5,4);
          do {
            iVar6 = *(int *)(piVar11[0x24] + iVar10 * 4);
            if (iVar6 != 0) {
              iVar8 = FUN_00536110(iVar6);
              iVar9 = 0;
              if (0 < (int)uStack_13c) {
                do {
                  if (*(int *)(iStack_140 + iVar9 * 4) == iVar8) {
                    if (iVar9 != -1) goto LAB_00537401;
                    break;
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (int)uStack_13c);
              }
              if (uStack_13c == (uStack_138 & 0x3fffffff)) {
                FUN_008a6ee0(&iStack_140,4);
              }
              *(int *)(iStack_140 + uStack_13c * 4) = iVar8;
              uStack_13c = uStack_13c + 1;
              cVar3 = FUN_004fbf90(iVar8,*(int *)(local_134 + 0xc) + 0x44,0x10000000);
              if (cVar3 == '\0') {
                (**(code **)(*piStack_130 + 0x20))(iVar6);
              }
              else {
                local_142 = 1;
              }
            }
LAB_00537401:
            iVar10 = iVar10 + 1;
            piVar11 = piStack_130;
          } while (iVar10 < (int)uVar5);
        }
        uStack_4 = 0xffffffff;
        if (-1 < (int)uStack_138) {
          FUN_008a75d0(iStack_140,uStack_138 * 4,0x14);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return local_142;
}



void FUN_00537480(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b9358;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56350;
  in_ECX[5] = &PTR_LAB_00a56338;
  local_4 = 0;
  FUN_00536e50(uVar1);
  local_4 = 0xffffffff;
  in_ECX[5] = &PTR_LAB_00a56320;
  FUN_004cd260();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005374f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(in_ECX + 0x18);
joined_r0x00537504:
    iVar4 = iVar1;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 4);
      iVar6 = *(int *)(iVar4 + 0x10);
      for (iVar2 = iVar6; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        if (*(int *)(iVar2 + 0xc) == param_1) {
          iVar3 = iVar6;
          if (iVar2 != iVar6) goto joined_r0x0053752f;
          iVar6 = *(int *)(iVar2 + 4);
          goto LAB_00537546;
        }
      }
      goto LAB_0053755e;
    }
  }
  return;
  while (iVar3 = *(int *)(iVar5 + 4), iVar2 != iVar3) {
joined_r0x0053752f:
    iVar5 = iVar3;
    if (iVar5 == 0) goto LAB_00537546;
  }
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar3 + 4);
LAB_00537546:
  *(int *)(iVar4 + 0x10) = iVar6;
  if (iVar2 != 0) {
    FUN_00401e40(iVar2 - (uint)*(byte *)(iVar2 + -1));
  }
LAB_0053755e:
  if (*(int *)(iVar4 + 0x10) == 0) {
    FUN_00536d30(iVar4);
  }
  goto joined_r0x00537504;
}



undefined4 FUN_005375f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0x18);
  uVar1 = 0;
  if (iVar2 != 0) {
    while (*(int *)(iVar2 + 8) != param_1) {
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) {
        return uVar1;
      }
    }
    if (iVar2 != 0) {
      FUN_00536ee0(iVar2,param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}



void FUN_00537630(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  for (iVar1 = *(int *)(in_ECX + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    FUN_00537020(param_1);
  }
  for (iVar1 = *(int *)(in_ECX + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar3 = *(int *)(iVar1 + 0x10);
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 4);
      (**(code **)(**(int **)(iVar3 + 0xc) + 0x110))(iVar1,iVar3);
      iVar3 = iVar2;
    }
  }
  return;
}



void FUN_00537690(byte param_1)

{
  FUN_00536f90();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_005376c0(byte param_1)

{
  FUN_00537480();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00537760(void)

{
  DAT_00ba7a50 = &LAB_005376e0;
  return;
}



float10 FUN_00537770(float param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < param_1) {
    return (float10)1.0;
  }
  if (param_1 < 0.0) {
    fVar1 = -1.0;
  }
  return (float10)fVar1;
}



void FUN_005377b0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_008a6410();
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x6c))(param_1,param_2);
  return;
}



float10 FUN_005377e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x20);
  uVar2 = iVar1 * param_2 + param_1;
  if (uVar2 < (uint)(iVar1 * iVar1)) {
    return (float10)*(float *)(*(int *)(in_ECX + 0x18) + uVar2 * 4);
  }
  return (float10)-3.4028235e+38;
}



void FUN_00537830(void)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b93b8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008b2170(uVar3);
  in_ECX[5] = 0x3f800000;
  *in_ECX = &PTR_FUN_00a56384;
  iVar2 = DAT_00b06a2c;
  in_ECX[8] = DAT_00b06a2c;
  lVar1 = (ulonglong)(uint)(iVar2 * iVar2) * 4;
  local_4 = 0;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  in_ECX[6] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005378b0(float param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined1 local_18 [8];
  float local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b938b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 == 0.0) || (fVar9 = (float10)0, fVar9 < (float10)*(float *)(in_ECX + 0x14))) {
LAB_00537bf8:
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (*(int *)((int)param_1 + 8) != 0) {
    fVar9 = (float10)FUN_0089da90(uVar2);
  }
  if (*(int *)((int)param_1 + 8) == 0) {
    puVar3 = &DAT_00ba7a40;
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(*(int *)((int)param_1 + 8) + 0x50) + 0xd0);
  }
  FUN_0043f3e0(local_18,puVar3);
  param_1 = _DAT_00b37b28 * ABS(local_10) + (float)fVar9;
  if (0.0 < local_10) {
    param_1 = _DAT_00b37b30 * param_1;
  }
  FUN_004d6900(&local_24);
  local_28 = param_2;
  if (((*(int *)(DAT_00b333a0 + 0x34) == 0) &&
      (cVar1 = FUN_00440590(&local_24,&local_28), cVar1 != '\0')) && (param_2 < local_28))
  goto LAB_00537bf8;
  if (*(int *)(DAT_00b33398 + 0x24) == 0) goto LAB_00537bd8;
  if (param_1 <= _DAT_00b37b08) {
LAB_005379ff:
    if (_DAT_00b37b10 < param_1) {
      iVar4 = FUN_006ade50("CWaterMedium",0x102,1);
      pfVar5 = (float *)FUN_00403c00();
      local_2c = *pfVar5;
      if (iVar4 != 0) goto LAB_00537a7f;
    }
    if (param_1 <= _DAT_00b37b18) goto LAB_00537bd8;
    iVar4 = FUN_006ade50("CWaterSmall",0x102,1);
    pfVar5 = (float *)FUN_00403c00();
    local_2c = *pfVar5;
    if (iVar4 == 0) goto LAB_00537bd8;
  }
  else {
    iVar4 = FUN_006ade50("CWaterLarge",0x102,1);
    local_2c = _DAT_00b37b40;
    if (iVar4 == 0) goto LAB_005379ff;
  }
LAB_00537a7f:
  local_1c = param_2;
  FUN_006b7360(local_24,local_20,param_2);
  FUN_006b7190(0);
  if ((0.0 < local_2c) && (iVar4 = FUN_006ecc80(), iVar4 != 0)) {
    FUN_006ecc80();
    iVar4 = FUN_004cafc0();
    if (iVar4 != 0) {
      FUN_006ecc80();
      piVar6 = (int *)FUN_004cafc0();
      cVar1 = (**(code **)(*piVar6 + 0x88))();
      if (cVar1 == '\0') {
        FUN_006ecc80();
        uVar7 = FUN_004c9be0(DAT_00b333c4);
        uVar15 = 3;
        FUN_006ecc80(uVar7,3);
        uVar7 = FUN_00441800(uVar7,uVar15);
        iVar4 = FUN_00401f00(0x20);
        uStack_4 = 0;
        if (iVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar16 = 1;
          uVar10 = 0x3f800000;
          uVar15 = DAT_00b37b38;
          uVar11 = DAT_00b258dc;
          uVar12 = DAT_00b258e0;
          uVar13 = DAT_00b258e4;
          fVar14 = local_1c;
          uVar8 = FUN_006ecc80(0x3f800000,uVar7,DAT_00b37b38,DAT_00b258dc,DAT_00b258e0,DAT_00b258e4,
                               local_24,local_20,local_1c,local_2c,1);
          uVar7 = FUN_005713f0(uVar8,uVar10,uVar7,uVar15,uVar11,uVar12,uVar13,local_24,local_20,
                               fVar14,local_2c,uVar16);
        }
        uStack_4 = 0xffffffff;
        FUN_00678d30(uVar7);
      }
    }
  }
LAB_00537bd8:
  *(undefined4 *)(in_ECX + 0x14) = _DAT_00b37b20;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00537cc0(void)

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
  if (DAT_00b3659c == 0) {
    local_10 = FUN_00401f00(0x2c,uVar1);
    local_4 = 0;
    if (local_10 != 0) {
      DAT_00b3659c = FUN_00537830();
      *unaff_FS_OFFSET = local_c;
      return;
    }
    DAT_00b3659c = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00537d40(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_4;
  
  iVar2 = FUN_00537cc0();
  iVar1 = *(int *)(iVar2 + 0x20);
  *(undefined4 *)(iVar2 + 0x1c) = 0xff7fffff;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          local_4 = -3.4028235e+38;
          piVar3 = (int *)FUN_00482150(iVar5,iVar6);
          if ((*piVar3 != 0) && ((*(byte *)(*piVar3 + 0x24) >> 1 & 1) != 0)) {
            fVar7 = (float10)FUN_004cace0();
            local_4 = (float)fVar7;
          }
          *(float *)(*(int *)(iVar2 + 0x18) + (*(int *)(iVar2 + 0x20) * iVar6 + iVar5) * 4) =
               local_4 * 0.14287673;
          if (*(float *)(iVar2 + 0x1c) < local_4) {
            *(float *)(iVar2 + 0x1c) = local_4;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  piVar3 = (int *)FUN_00482150(0,0);
  if (*piVar3 != 0) {
    uVar4 = FUN_004c9a80();
    *(undefined4 *)(iVar2 + 0x24) = uVar4;
    uVar4 = FUN_004c9aa0();
    *(undefined4 *)(iVar2 + 0x28) = uVar4;
  }
  if (*(float *)(iVar2 + 0x1c) == -3.4028235e+38) {
    *(undefined1 *)(iVar2 + 8) = 0;
    return;
  }
  *(undefined1 *)(iVar2 + 8) = 1;
  return;
}



void FUN_00537e40(float param_1)

{
  uint uVar1;
  float *pfVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b93b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008b2170(uVar1);
  in_ECX[5] = 0x3f800000;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a56384;
  in_ECX[8] = 1;
  pfVar2 = (float *)FUN_00401f00(4);
  in_ECX[6] = pfVar2;
  *pfVar2 = param_1 * 0.14287673;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00537ed0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a56384;
  FUN_00401f20(in_ECX[6]);
  FUN_004cd260();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537f10(float param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int *piVar8;
  LONG LVar9;
  char *pcVar10;
  uint uVar11;
  int in_ECX;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float fStack_194;
  char cStack_18d;
  float local_188;
  float *pfStack_184;
  float fStack_180;
  undefined1 uStack_179;
  int iStack_178;
  float fStack_174;
  uint local_170;
  float fStack_16c;
  float local_168;
  undefined1 uStack_161;
  int iStack_160;
  int local_15c;
  float fStack_158;
  undefined4 *puStack_148;
  float local_144;
  undefined4 *puStack_140;
  float fStack_13c;
  float fStack_138;
  float afStack_120 [4];
  float afStack_110 [5];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [8];
  float fStack_d8;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&fStack_194;
  local_170 = 0;
  if (*(char *)(in_ECX + 8) != '\0') {
    *(float *)(in_ECX + 0x14) = *(float *)(in_ECX + 0x14) - param_1;
    local_188 = _DAT_00b37ae0 * _DAT_00b37ae0;
    local_168 = local_188 * 0.14287673;
    local_144 = _DAT_00b37ae8 * 0.14287673;
    local_15c = in_ECX;
    pfVar7 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
    iStack_178 = in_ECX + 0xc;
    fStack_c0 = *pfVar7 * 0.14287673;
    fStack_bc = pfVar7[1] * 0.14287673;
    fStack_b8 = pfVar7[2] * 0.14287673;
LAB_00537fc0:
    if (iStack_178 == 0) {
LAB_00537fe2:
      bVar5 = false;
    }
    else {
      piVar8 = (int *)FUN_00677c70(&puStack_148);
      local_170 = local_170 | 1;
      if (*piVar8 == 0) goto LAB_00537fe2;
      bVar5 = true;
    }
    puVar6 = puStack_148;
    if (((((local_170 & 1) != 0) &&
         (local_170 = local_170 & 0xfffffffe, puStack_148 != (undefined4 *)0x0)) &&
        (LVar9 = InterlockedDecrement(puStack_148 + 1), LVar9 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    if (bVar5) {
      piVar8 = (int *)FUN_00677c70(&puStack_140);
      puVar6 = puStack_140;
      piVar8 = (int *)*piVar8;
      if (((puStack_140 != (undefined4 *)0x0) &&
          (LVar9 = InterlockedDecrement(puStack_140 + 1), LVar9 == 0)) &&
         (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      iVar12 = local_15c;
      iVar2 = piVar8[2];
      if ((iVar2 == 0) || (*(char *)(iVar2 + 0x92) != '\0')) {
LAB_0053882d:
        iStack_178 = *(int *)(iStack_178 + 4);
      }
      else {
        iVar13 = *(int *)(iVar2 + 0x50);
        fStack_f0 = *(float *)(iVar13 + 0x40);
        fStack_ec = *(float *)(iVar13 + 0x44);
        fStack_e8 = *(float *)(iVar13 + 0x48);
        uStack_e4 = *(undefined4 *)(iVar13 + 0x4c);
        fStack_158 = (fStack_e8 - fStack_b8) * (fStack_e8 - fStack_b8) +
                     (fStack_ec - fStack_bc) * (fStack_ec - fStack_bc) +
                     (fStack_f0 - fStack_c0) * (fStack_f0 - fStack_c0);
        if (fStack_158 <= local_168) {
          if (*(uint *)(local_15c + 0x20) < 2) {
            fVar14 = (float10)FUN_005377e0(0,0);
          }
          else {
            FUN_0043f3e0(&fStack_13c,&fStack_f0);
            iStack_160 = (int)ROUND(fStack_13c);
            fStack_16c = (float)(int)ROUND(fStack_138);
            iVar13 = *(int *)(iVar12 + 0x20);
            uVar11 = ((((int)fStack_16c >> 0xc) - *(int *)(iVar12 + 0x28)) * iVar13 -
                     *(int *)(iVar12 + 0x24)) + (iStack_160 >> 0xc);
            if (uVar11 < (uint)(iVar13 * iVar13)) {
              fVar14 = (float10)*(float *)(*(int *)(iVar12 + 0x18) + uVar11 * 4);
            }
            else {
              fVar14 = (float10)-3.4028235e+38;
            }
          }
          fStack_174 = (float)fVar14;
          fStack_158 = fStack_e8;
          if (fStack_e8 <= fStack_174 + local_144) {
            (**(code **)(*piVar8 + 0xb0))(auStack_e0);
            if (fStack_174 < fStack_d8) {
              if (((uint)piVar8[6] >> 3 & 1) == 0) {
                piVar8[6] = piVar8[6] & 0xfffffff7;
                goto LAB_0053882d;
              }
              local_188 = fStack_174 * 6.99904;
              FUN_005378b0(piVar8,local_188);
              piVar8[6] = piVar8[6] & 0xfffffff7;
              iStack_178 = *(int *)(iStack_178 + 4);
            }
            else {
              iVar12 = *(int *)(iVar2 + 8);
              fStack_b0 = *(float *)(iVar12 + 0x20);
              fStack_ac = *(float *)(iVar12 + 0x24);
              fStack_a8 = *(float *)(iVar12 + 0x28);
              fStack_a4 = *(float *)(iVar12 + 0x2c);
              iVar12 = *(int *)(iVar2 + 0x50);
              uStack_50 = *(undefined4 *)(iVar12 + 0xd0);
              uStack_4c = *(undefined4 *)(iVar12 + 0xd4);
              fStack_48 = *(float *)(iVar12 + 0xd8);
              uStack_44 = *(undefined4 *)(iVar12 + 0xdc);
              fVar14 = (float10)FUN_0089da90();
              local_188 = (float)fVar14;
              fVar1 = (fStack_c8 - fStack_d8) * 0.25 + fStack_d8;
              pfStack_184 = (float *)((fStack_174 - fVar1) /
                                     (((fStack_c8 - fStack_d8) * 0.85 + fStack_d8) - fVar1));
              if (0.0 < (float)pfStack_184) {
                fVar14 = (float10)FUN_005362f0(piVar8);
                fStack_180 = (float)fVar14;
                uStack_179 = 1;
                if (((float)pfStack_184 < _DAT_00b118e0) && (0.0 < fStack_180)) {
                  fVar1 = _DAT_00b118d8;
                  if ((_DAT_00b118dc < (float)pfStack_184) ||
                     ((fVar1 = _DAT_00b365a4, _DAT_00b118d4 < (float)pfStack_184 ||
                      (fVar1 = _DAT_00b118d0, _DAT_00b365a0 < (float)pfStack_184)))) {
                    fStack_180 = fVar1;
                  }
                  fStack_158 = fStack_48;
                  if (ABS(fStack_48) < _DAT_00b118cc) {
                    uStack_179 = 0;
                  }
                }
                fStack_180 = -fStack_180;
                pfStack_184 = (float *)(fStack_180 * local_188);
                fStack_60 = (float)pfStack_184 * fStack_b0;
                fStack_5c = (float)pfStack_184 * fStack_ac;
                fStack_58 = (float)pfStack_184 * fStack_a8;
                fStack_54 = (float)pfStack_184 * fStack_a4;
                if (*(int *)(iVar2 + 0x78) + *(int *)(iVar2 + 0x6c) == 0) {
                  FUN_008a3e00(&fStack_40);
                  afStack_110[0] = 0.0;
                  afStack_110[1] = 0.0;
                  afStack_110[2] = 0.0;
                  afStack_120[0] = fStack_30 - fStack_40;
                  afStack_120[1] = fStack_2c - fStack_3c;
                  afStack_120[2] = fStack_28 - fStack_38;
                  afStack_120[3] = fStack_24 - fStack_34;
                  afStack_110[3] = 0.0;
                  if (afStack_120[1] <= afStack_120[0]) {
                    if (afStack_120[2] <= afStack_120[0]) {
                      iVar12 = 0;
                    }
                    else {
                      iVar12 = 2;
                    }
                  }
                  else if (afStack_120[2] <= afStack_120[1]) {
                    iVar12 = 1;
                  }
                  else {
                    iVar12 = 2;
                  }
                  if (afStack_120[0] <= afStack_120[1]) {
                    if (afStack_120[0] <= afStack_120[2]) {
                      iVar13 = 0;
                    }
                    else {
                      iVar13 = 2;
                    }
                  }
                  else if (afStack_120[1] <= afStack_120[2]) {
                    iVar13 = 1;
                  }
                  else {
                    iVar13 = 2;
                  }
                  pfStack_184 = afStack_120 + iVar12;
                  if (afStack_120[iVar12] <= afStack_120[iVar13] * 1.5) {
                    iVar12 = *(int *)(iVar2 + 0x50);
                    afStack_110[4] = *(float *)(iVar12 + 0x60);
                    fStack_fc = *(float *)(iVar12 + 100);
                    fStack_f8 = *(float *)(iVar12 + 0x68);
                    fStack_f4 = *(float *)(iVar12 + 0x6c);
                  }
                  else {
                    fVar14 = (float10)FUN_00537770(fStack_180);
                    pcVar3 = *(code **)(*piVar8 + 0x90);
                    afStack_110[iVar13] =
                         (float)(((float10)*pfStack_184 / (float10)afStack_120[iVar13]) *
                                 (float10)0.10000000149011612 * fVar14);
                    (*pcVar3)(&fStack_a0);
                    iVar12 = *(int *)(iVar2 + 0x50);
                    pfStack_184 = (float *)(fStack_94 * 2.0);
                    fVar1 = fStack_94 * (float)pfStack_184 - 1.0;
                    fStack_90 = fStack_a0;
                    fStack_8c = fStack_9c;
                    fStack_88 = fStack_98;
                    fStack_84 = 0.0;
                    fStack_158 = fStack_98 * afStack_110[2] +
                                 fStack_9c * afStack_110[1] + fStack_a0 * afStack_110[0];
                    fVar4 = fStack_158 * 2.0;
                    afStack_110[4] =
                         *(float *)(iVar12 + 0x60) +
                         (fStack_9c * afStack_110[2] - fStack_98 * afStack_110[1]) *
                         (float)pfStack_184 + fVar4 * fStack_a0 + fVar1 * afStack_110[0];
                    fStack_fc = *(float *)(iVar12 + 100) +
                                (fStack_98 * afStack_110[0] - fStack_a0 * afStack_110[2]) *
                                (float)pfStack_184 + fVar4 * fStack_9c + fVar1 * afStack_110[1];
                    fStack_f8 = *(float *)(iVar12 + 0x68) +
                                (fStack_a0 * afStack_110[1] - fStack_9c * afStack_110[0]) *
                                (float)pfStack_184 + fVar4 * fStack_98 + fVar1 * afStack_110[2];
                    fStack_f4 = *(float *)(iVar12 + 0x6c) +
                                (afStack_110[3] * 0.0 - afStack_110[3] * 0.0) * (float)pfStack_184 +
                                fVar4 * 0.0 + fVar1 * afStack_110[3];
                    FUN_008a78e0((float *)(iVar12 + 0x60),afStack_110 + 4,0xff7fff00,0);
                  }
                }
                else {
                  iVar12 = *(int *)(iVar2 + 0x50);
                  afStack_110[4] = *(float *)(iVar12 + 0x60);
                  fStack_fc = *(float *)(iVar12 + 100);
                  fStack_f8 = *(float *)(iVar12 + 0x68);
                  fStack_f4 = *(float *)(iVar12 + 0x6c);
                }
                FUN_008a6410();
                (**(code **)(**(int **)(iVar2 + 0x50) + 0x68))(param_1,&fStack_60,afStack_110 + 4);
                fStack_194 = fStack_194 * -1.0;
                fStack_8c = fStack_194 * fStack_bc;
                fStack_88 = fStack_194 * fStack_b8;
                fStack_84 = fStack_194 * fStack_b4;
                fStack_80 = fStack_194 * fStack_b0;
                FUN_008a6410();
                (**(code **)(**(int **)(iVar2 + 0x50) + 0x6c))(param_1,&fStack_8c);
                iVar12 = *(int *)(iVar2 + 0x50);
                local_144 = *(float *)(iVar12 + 0xd0);
                puStack_140 = *(undefined4 **)(iVar12 + 0xd4);
                fStack_194 = *(float *)(iVar12 + 0xd8);
                fStack_138 = *(float *)(iVar12 + 0xdc);
                fStack_13c = 0.0;
                if (cStack_18d != '\0') {
                  fVar14 = (float10)FUN_009866bc();
                  fStack_194 = (float)fVar14 * fStack_194;
                }
                fStack_16c = SQRT(fStack_13c * fStack_13c +
                                  (float)puStack_140 * (float)puStack_140 + local_144 * local_144);
                if (_DAT_00b37ad8 < fStack_16c) {
                  fVar14 = (float10)FUN_009866bc();
                  fVar1 = (float)fVar14;
                  local_144 = fVar1 * local_144;
                  puStack_140 = (undefined4 *)(fVar1 * (float)puStack_140);
                  fStack_138 = fVar1 * fStack_138;
                }
                fStack_13c = fStack_194;
                FUN_008a6410();
                (**(code **)(**(int **)(iVar2 + 0x50) + 0x54))(&local_144);
                fVar14 = (float10)FUN_009866bc();
                fStack_7c = (float)fVar14;
                iVar12 = *(int *)(iVar2 + 0x50);
                fStack_88 = fStack_7c * *(float *)(iVar12 + 0xe0);
                fStack_84 = fStack_7c * *(float *)(iVar12 + 0xe4);
                fStack_80 = fStack_7c * *(float *)(iVar12 + 0xe8);
                fStack_7c = fStack_7c * *(float *)(iVar12 + 0xec);
                FUN_008a6410();
                (**(code **)(**(int **)(iVar2 + 0x50) + 0x58))(&fStack_88);
                if (((uint)piVar8[6] >> 3 & 1) != 0) goto LAB_0053882d;
                local_188 = fStack_174 * 6.99904;
                piVar8[6] = piVar8[6] | 8;
                FUN_005378b0(piVar8,local_188);
                iStack_178 = *(int *)(iStack_178 + 4);
              }
              else {
                iStack_178 = *(int *)(iStack_178 + 4);
              }
            }
          }
          else {
            iStack_178 = *(int *)(iStack_178 + 4);
          }
        }
        else {
          if (((((uint)piVar8[6] >> 3 & 1) != 0) &&
              (pcVar10 = (char *)FUN_008a63f0(&uStack_161), *pcVar10 != '\0')) && (piVar8[2] != 0))
          {
            FUN_008a6440();
          }
          iStack_178 = *(int *)(iStack_178 + 4);
        }
      }
      goto LAB_00537fc0;
    }
  }
  return;
}



undefined1 FUN_00538910(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 4);
}



void FUN_00538920(void)

{
  FUN_008a7f20(0x1d,1,1);
  FUN_008a7f20(0x1d,0x13,1);
  FUN_008a7f20(0x1d,2,1);
  FUN_008a7f20(0x1d,3,1);
  FUN_008a7f20(0x1d,4,1);
  FUN_008a7f20(0x1d,5,1);
  FUN_008a7f20(0x1d,6,1);
  FUN_008a7f20(0x1d,7,0);
  FUN_008a7f20(0x1d,8,1);
  FUN_008a7f20(0x1d,9,1);
  FUN_008a7f20(0x1d,10,1);
  FUN_008a7f20(0x1d,0xb,0);
  FUN_008a7f20(0x1d,0xc,0);
  FUN_008a7f20(0x1d,0xd,1);
  FUN_008a7f20(0x1d,0xe,1);
  FUN_008a7f20(0x1d,0xf,1);
  FUN_008a7f20(0x1d,0x10,0);
  FUN_008a7f20(0x1d,0x11,1);
  FUN_008a7f20(0x1d,0x12,1);
  FUN_008a7f20(0x1d,0x14,1);
  FUN_008a7f20(0x1d,0x15,0);
  FUN_008a7f20(0x1d,0x18,0);
  FUN_008a7f20(0x1d,0x1a,0);
  FUN_008a7f20(0x1d,0x1b,0);
  FUN_008a7f20(0x1d,0x1c,0);
  FUN_008a7f20(0x1d,0x1d,0);
  FUN_008a7f20(0x1d,0x1e,0);
  FUN_008a7f20(0x1d,0x1f,0);
  return;
}



void FUN_00538a70(undefined1 *param_1)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x14) < 1.0) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_00538a90(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  piVar1 = (int *)*in_ECX;
  if (((piVar1 == (int *)0x0) || (iVar2 = piVar1[2], iVar2 == 0)) || (iVar2 == -0x14)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 0x30);
  }
  in_ECX[2] = param_1;
  if (((piVar1 != (int *)0x0) && (iVar2 = piVar1[2], iVar2 != 0)) && (iVar2 != -0x14)) {
    *(uint *)(iVar2 + 0x30) = uVar3 & 0xffff | param_1 << 0x10;
  }
  (**(code **)(*piVar1 + 0x80))();
  return;
}



void FUN_00538ae0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if (((int *)*in_ECX != (int *)0x0) &&
     ((**(code **)(*(int *)*in_ECX + 0x5c))(param_1), param_1 != 0)) {
    iVar1 = *in_ECX;
    uVar2 = FUN_008aeb80(0x58,0xad,0x56,0x19);
    FUN_0088bb60(iVar1,uVar2);
  }
  return;
}



void FUN_00538b20(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *in_ECX = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  in_ECX[2] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_00538b60(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7538;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    *in_ECX = 0;
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



void FUN_00538c00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a563ec;
  in_ECX[4] = in_ECX + 8;
  in_ECX[6] = 0x80000008;
  in_ECX[0xd] = 0x3f800000;
  in_ECX[0x19] = 0x3f800000;
  in_ECX[0x25] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x31] = 0x3f800000;
  in_ECX[0x1c] = 0;
  in_ECX[0x3d] = 0x3f800000;
  in_ECX[0x28] = 0;
  in_ECX[0x49] = 0x3f800000;
  in_ECX[0x34] = 0;
  in_ECX[0x55] = 0x3f800000;
  in_ECX[0x40] = 0;
  in_ECX[0x61] = 0x3f800000;
  in_ECX[0x4c] = 0;
  in_ECX[0x58] = 0;
  in_ECX[100] = 0;
  in_ECX[1] = 0x3f800000;
  in_ECX[5] = 0;
  return;
}



void FUN_00538c80(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b93e8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a563ec;
  local_4 = 0;
  if (-1 < (int)in_ECX[6]) {
    FUN_008a75d0(in_ECX[4],(in_ECX[6] & 0x3fffffff) * 0x30,0x14);
  }
  *in_ECX = &PTR_LAB_00a48dd0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00538d10(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int *in_ECX;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_74;
  int local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b942e;
  local_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff70;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar3 = FUN_00401f00(0x14,uVar2);
  puVar5 = (undefined4 *)0x0;
  local_14 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00532090(param_1,1);
  }
  FUN_00532250();
  local_80 = param_2 << 0x10 | 0x1d;
  local_14 = 1;
  in_ECX[2] = param_2;
  if (iVar3 == 0) {
    local_7c = 0;
  }
  else {
    local_7c = *(undefined4 *)(iVar3 + 8);
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_60 = 0x3f800000;
  local_4c = 0x3f800000;
  local_38 = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar3 = FUN_00401f00(0x14,uVar2);
  local_14._0_1_ = 2;
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)FUN_00531fc0(&local_80);
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_14 = CONCAT31(local_14._1_3_,1);
  if (puVar1 != puVar5) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *in_ECX = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  *(undefined1 *)(in_ECX + 1) = 1;
  local_14 = 0xffffffff;
  if (-1 < local_6c) {
    FUN_008a75d0(local_74,local_6c * 8,0x14);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00538ec0(float *param_1,float *param_2,float param_3,float *param_4,undefined1 *param_5)

{
  float *pfVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_584 [11];
  char cStack_579;
  int *piStack_578;
  int *local_574;
  int *local_570;
  float local_56c;
  int *piStack_568;
  float fStack_564;
  float local_560;
  float *local_55c;
  int *piStack_558;
  float fStack_554;
  float fStack_550;
  int iStack_54c;
  undefined1 uStack_545;
  int iStack_544;
  int iStack_540;
  undefined4 uStack_53c;
  undefined1 uStack_535;
  undefined1 *local_534;
  int *local_52c;
  int iStack_528;
  uint uStack_524;
  float *local_520;
  float *local_51c;
  undefined1 auStack_518 [4];
  undefined1 auStack_514 [4];
  undefined1 auStack_510 [16];
  undefined1 uStack_500;
  undefined1 uStack_4ff;
  int *piStack_4f4;
  short sStack_4ee;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  float fStack_4cc;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  undefined4 uStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  undefined1 auStack_490 [32];
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  undefined4 uStack_3fc;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3ac;
  undefined1 *puStack_3a8;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  undefined **local_370;
  undefined4 local_36c;
  undefined1 *local_360;
  int local_35c;
  undefined4 local_358;
  undefined1 local_350 [384];
  undefined1 auStack_1d0 [16];
  int iStack_1c0;
  int iStack_1bc;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  uint local_14;
  
  puStack_18 = &LAB_009b9471;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_584;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffa70;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_55c = param_4;
  piVar6 = (int *)0x0;
  DAT_00b365a8 = 0;
  local_51c = param_1;
  local_520 = param_2;
  local_534 = param_5;
  local_574 = (int *)0x0;
  if ((char)in_ECX[1] == '\0') goto LAB_005397e5;
  local_360 = local_350;
  local_36c = 0x7f7fffff;
  local_370 = &PTR_FUN_00a55dec;
  local_358 = 0x80000008;
  local_35c = 0;
  local_14 = 0;
  local_52c = (int *)0x0;
  if ((int *)*in_ECX != (int *)0x0) {
    iVar7 = (**(code **)(*(int *)*in_ECX + 0x58))(uVar5);
    if (iVar7 == 0) {
      local_52c = (int *)0x0;
    }
    else {
      local_52c = *(int **)(iVar7 + 0x2b0);
    }
  }
  local_56c = *param_1 + param_3 * *param_2;
  local_560 = param_1[1] + param_2[1] * param_3;
  local_570 = (int *)(param_3 * param_2[2] + param_1[2]);
  *local_534 = 0;
  *local_55c = 3.4028235e+38;
  FUN_00959bc0();
  _DAT_00b3a6e4 = 0xdad;
  bVar4 = false;
  fStack_4c0 = *param_1 * 0.14287673;
  local_14 = CONCAT31(local_14._1_3_,1);
  uStack_500 = 0;
  uStack_4ff = 1;
  fStack_4bc = param_1[1] * 0.14287673;
  fStack_4b8 = param_1[2] * 0.14287673;
  fStack_4b0 = local_56c * 0.14287673;
  fStack_4ac = local_560 * 0.14287673;
  fStack_4a8 = (float)local_570 * 0.14287673;
  if (*in_ECX != 0) {
    fStack_4cc = 0.01;
    uStack_4d0 = 0x3c23d70a;
    uStack_4d4 = uStack_4a4;
    fStack_4e0 = fStack_4b0;
    fStack_4dc = fStack_4ac;
    fStack_4d8 = fStack_4a8;
    FUN_00538920();
    if ((*in_ECX != 0) && (piVar6 = *(int **)(*in_ECX + 8), piVar6 != (int *)0x0)) {
      FUN_0089f570();
      (**(code **)(*piVar6 + 0x30))(&fStack_4c0,&fStack_4e0,&local_370,0);
      FUN_0089f570();
    }
    if (0 < local_35c) {
      FUN_008af890();
      bVar4 = true;
    }
  }
  fStack_564 = 3.4028235e+38;
  piVar6 = (int *)0x0;
  fStack_550 = 3.4028235e+38;
  fStack_554 = 3.4028235e+38;
  local_570 = (int *)0x0;
  piStack_558 = (int *)0x0;
  uStack_53c = 0;
  cStack_579 = DAT_00b11908;
  iStack_540 = 0;
  iStack_544 = 0;
  iStack_54c = 0;
  if (bVar4) {
    piStack_568 = (int *)0x0;
    piStack_578 = (int *)0x0;
    iStack_528 = 0;
    local_560 = 0.0;
    if (0 < local_35c) {
      local_56c = 0.0;
      do {
        fVar12 = local_56c;
        piVar3 = *(int **)(local_360 + (int)local_56c + 0x28);
        pfVar1 = (float *)(local_360 + (int)local_56c);
        fStack_3a0 = *pfVar1;
        fStack_39c = pfVar1[1];
        fStack_398 = pfVar1[2];
        fStack_394 = pfVar1[3];
        if (piVar3 != (int *)0x0) {
          _DAT_00b3a6e4 = 0xdb0;
          iVar7 = FUN_004806e0(piVar3);
          _DAT_00b3a6e4 = 0xdb1;
          if (iVar7 != 0) {
            piStack_578 = (int *)FUN_004dc270(iVar7);
          }
          if ((piStack_578 != (int *)0x0) && (piStack_578 != DAT_00b333c4)) {
            if ((char)piVar3[6] == '\x01') {
              iVar7 = piVar3[4] + (int)piVar3;
            }
            else {
              iVar7 = 0;
            }
            uStack_524 = piVar3[7] & 0x3f;
            bVar4 = false;
            if (uStack_524 == 1) {
              if (((int *)*piVar3 != (int *)0x0) &&
                 (iVar11 = (**(code **)(*(int *)*piVar3 + 8))(), iVar11 == 0x18)) goto LAB_0053920b;
            }
            else if (uStack_524 - 4 < 3) {
LAB_0053920b:
              bVar4 = true;
            }
            piVar6 = piStack_578;
            if (((iVar7 == 0) || (iVar7 == iStack_528)) || (!bVar4)) {
              _DAT_00b3a6e4 = 0xdb2;
              if (((piStack_568 != piStack_578) &&
                  (iVar11 = (**(code **)(*piStack_578 + 0x154))(), iVar11 != 0)) &&
                 (iStack_54c < DAT_00b11920)) {
                iStack_54c = iStack_54c + 1;
                uVar10 = (**(code **)(*piVar6 + 0x154))(0);
                FUN_00481890(auStack_510,local_51c,local_520,param_3,uVar10);
              }
            }
            else {
              iStack_528 = iVar7;
              if (iStack_544 < DAT_00b11918) {
                iStack_544 = iStack_544 + 1;
                uStack_470 = 0;
                uStack_46c = 0;
                puVar8 = (undefined4 *)FUN_00497340(auStack_514);
                uStack_470 = *puVar8;
                iVar11 = *(int *)(iVar7 + 0x50);
                uStack_460 = *(undefined4 *)(iVar11 + 0x10);
                uStack_45c = *(undefined4 *)(iVar11 + 0x14);
                uStack_458 = *(undefined4 *)(iVar11 + 0x18);
                uStack_454 = *(undefined4 *)(iVar11 + 0x1c);
                uStack_450 = *(undefined4 *)(iVar11 + 0x20);
                uStack_44c = *(undefined4 *)(iVar11 + 0x24);
                uStack_448 = *(undefined4 *)(iVar11 + 0x28);
                uStack_444 = *(undefined4 *)(iVar11 + 0x2c);
                uStack_440 = *(undefined4 *)(iVar11 + 0x30);
                uStack_43c = *(undefined4 *)(iVar11 + 0x34);
                uStack_438 = *(undefined4 *)(iVar11 + 0x38);
                uStack_434 = *(undefined4 *)(iVar11 + 0x3c);
                uStack_430 = *(undefined4 *)(iVar11 + 0x40);
                uStack_42c = *(undefined4 *)(iVar11 + 0x44);
                uStack_428 = *(undefined4 *)(iVar11 + 0x48);
                uStack_424 = *(undefined4 *)(iVar11 + 0x4c);
                FUN_0088fd10(&uStack_460,&fStack_4c0);
                FUN_0088fd10(&uStack_460,&fStack_4b0);
                fStack_4cc = 1.0;
                (**(code **)(*(int *)*piVar3 + 0x14))(&uStack_545,auStack_490,&fStack_4e0);
                pcVar9 = (char *)FUN_00538a70(&uStack_535);
                if ((*pcVar9 != '\0') && (fStack_4cc < fStack_564)) {
                  fStack_564 = fStack_4cc;
                  local_570 = piStack_578;
                }
              }
            }
            piVar6 = local_52c;
            piVar3 = piStack_578;
            switch(uStack_524) {
            case 1:
            case 0xd:
            case 0x11:
            case 0x12:
              break;
            default:
switchD_005393bd_caseD_2:
              if ((cStack_579 != '\0') && (local_52c != (int *)0x0)) {
                fVar14 = fStack_4b0 - fStack_4c0;
                fVar15 = fStack_4ac - fStack_4bc;
                fVar16 = fStack_4a8 - fStack_4b8;
                fStack_4a0 = fStack_3a0 - fStack_4c0;
                fStack_49c = fStack_39c - fStack_4bc;
                fStack_498 = fStack_398 - fStack_4b8;
                fStack_494 = fStack_394 - fStack_4b4;
                fVar13 = fVar16 * fVar16;
                fVar12 = fVar13 + fVar15 * fVar15 + fVar14 * fVar14;
                auVar17._4_4_ = fVar13;
                auVar17._0_4_ = fVar12;
                auVar17._8_4_ = fVar13;
                auVar17._12_4_ = fVar13;
                auVar17 = rsqrtss(auVar17,auVar17);
                fVar13 = auVar17._0_4_;
                fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
                fVar13 = fVar12 * fVar16 * fStack_498 +
                         fVar12 * fVar15 * fStack_49c + fVar12 * fVar14 * fStack_4a0;
                fVar14 = fStack_4a0 - fVar13 * fVar12 * fVar14;
                fVar15 = fStack_49c - fVar13 * fVar12 * fVar15;
                fVar12 = fStack_498 - fVar13 * fVar12 * fVar16;
                fStack_4e0 = SQRT(fVar12 * fVar12 + fVar15 * fVar15 + fVar14 * fVar14);
                piStack_568 = (int *)(fStack_4e0 * 6.99904);
                if (((float)piStack_568 < fStack_554) && (iStack_540 < DAT_00b11910)) {
                  if ((piStack_558 == (int *)0x0) || (piStack_558 != piStack_578)) {
                    iStack_540 = iStack_540 + 1;
                    FUN_004f5ea0();
                    puVar8 = (undefined4 *)FUN_00497340(auStack_518);
                    uStack_3fc = *puVar8;
                    fStack_420 = fStack_4c0;
                    fStack_41c = fStack_4bc;
                    fStack_418 = fStack_4b8;
                    fStack_414 = fStack_4b4;
                    uStack_3c0 = DAT_00ba7a40;
                    uStack_3bc = DAT_00ba7a44;
                    uStack_3b8 = DAT_00ba7a48;
                    uStack_3b4 = uRam00ba7a4c;
                    fStack_410 = fStack_3a0;
                    fStack_40c = fStack_39c;
                    fStack_408 = fStack_398;
                    fStack_404 = fStack_394;
                    FUN_00538c00();
                    puStack_3a8 = auStack_1d0;
                    local_14 = CONCAT31(local_14._1_3_,2);
                    uStack_3ac = 0;
                    (**(code **)(*piVar6 + 0x88))(&fStack_420);
                    if ((iStack_1bc < 1) ||
                       (((iVar11 = FUN_004806e0(*(undefined4 *)(iStack_1c0 + 0x20)), iVar11 != 0 &&
                         (piVar6 = (int *)FUN_004dc270(iVar11), piVar6 != (int *)0x0)) &&
                        (piVar6 == piVar3)))) {
                      fStack_4e0 = SQRT(fStack_498 * fStack_498 +
                                        fStack_49c * fStack_49c + fStack_4a0 * fStack_4a0);
                      fStack_550 = fStack_4e0 * 6.99904;
                      fStack_554 = (float)piStack_568;
                      piStack_558 = piVar3;
                      if (iVar7 == 0) {
                        uStack_53c = 0;
                      }
                      else {
                        uStack_53c = *(undefined4 *)(iVar7 + 0xc);
                      }
                    }
                    local_14 = CONCAT31(local_14._1_3_,1);
                    FUN_00538c80();
                  }
                  else {
                    fStack_4e0 = SQRT(fStack_498 * fStack_498 +
                                      fStack_49c * fStack_49c + fStack_4a0 * fStack_4a0);
                    fStack_550 = fStack_4e0 * 6.99904;
                    fStack_554 = (float)piStack_568;
                  }
                }
              }
              break;
            case 6:
              if (iVar7 != 0) goto switchD_005393bd_caseD_2;
            }
            fVar12 = local_56c;
            piVar6 = local_570;
            piStack_568 = piVar3;
          }
        }
        local_560 = (float)((int)local_560 + 1);
        local_56c = (float)((int)fVar12 + 0x30);
      } while ((int)local_560 < local_35c);
    }
  }
  fStack_564 = fStack_564 * param_3;
  if (sStack_4ee == 0) {
    if (piVar6 != (int *)0x0) {
      *local_55c = fStack_564;
      local_574 = piVar6;
    }
  }
  else {
    _DAT_00b3a6e4 = 0xdb7;
    local_574 = (int *)FUN_004dc270(*(undefined4 *)*piStack_4f4);
    *local_55c = *(float *)(*piStack_4f4 + 0x14);
    if (fStack_564 < *local_55c) {
      *local_55c = fStack_564;
      local_574 = piVar6;
    }
  }
  pfVar1 = local_55c;
  piVar6 = local_574;
  _DAT_00b3a6e4 = 0xdba;
  if (cStack_579 == '\0') goto LAB_005397b8;
  if ((local_574 == (int *)0x0) || (iVar7 = (**(code **)(*local_574 + 0x170))(), iVar7 == 0)) {
LAB_0053978f:
    if ((piStack_558 != (int *)0x0) && (piVar6 != piStack_558)) {
      *pfVar1 = fStack_550;
      *local_534 = 1;
      local_574 = piStack_558;
      DAT_00b365a8 = uStack_53c;
      piVar6 = piStack_558;
    }
  }
  else {
    iVar7 = (**(code **)(*piVar6 + 0x170))();
    cVar2 = *(char *)(iVar7 + 4);
    if (cVar2 == '\x1a') {
      iVar7 = (**(code **)(*piVar6 + 0x170))();
      if ((*(uint *)(iVar7 + 0x7c) >> 1 & 1) == 0) goto LAB_0053978f;
    }
    else if ((cVar2 == '\x1c') || (cVar2 == '\x1e')) goto LAB_0053978f;
  }
LAB_005397b8:
  local_14 = local_14 & 0xffffff00;
  FUN_00959ec0();
  local_14 = 0xffffffff;
  FUN_005322e0();
LAB_005397e5:
  *unaff_FS_OFFSET = local_1c;
  return piVar6;
}



void FUN_00539830(byte param_1)

{
  FUN_00538c80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00539850(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[3];
  uVar2 = param_2[6];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[7];
  param_1[4] = param_2[1];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  uVar1 = param_2[5];
  uVar2 = param_2[8];
  param_1[8] = param_2[2];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_005398e0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_38 [20];
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_38;
  FUN_00539850(param_1,param_2);
  fVar1 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0x2c);
  *(float *)(param_1 + 0x30) = *(float *)(param_2 + 0x24) * 0.14287673;
  *(float *)(param_1 + 0x34) = fVar1 * 0.14287673;
  *(float *)(param_1 + 0x38) = fVar2 * 0.14287673;
  *(undefined4 *)(param_1 + 0x3c) = uStack_24;
  return param_1;
}



void FUN_00539960(byte param_1)

{
  FUN_008a0250();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00539980(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *in_ECX = *param_1;
  in_ECX[1] = uVar1;
  in_ECX[2] = uVar2;
  in_ECX[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  in_ECX[4] = param_1[4];
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar2;
  in_ECX[7] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  in_ECX[8] = param_1[8];
  in_ECX[9] = uVar1;
  in_ECX[10] = uVar2;
  in_ECX[0xb] = uVar3;
  uVar1 = param_1[0xd];
  uVar2 = param_1[0xe];
  uVar3 = param_1[0xf];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = uVar1;
  in_ECX[0xe] = uVar2;
  in_ECX[0xf] = uVar3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005399b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7418;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  iVar2 = 0;
  in_ECX[3] = 0;
  *in_ECX = &PTR_FUN_00a564a4;
  DAT_00ba7d4c = DAT_00ba7d4c + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a5653c;
  if (param_1 != 0) {
    iVar2 = param_1 + 4;
  }
  FUN_008a0610(iVar2);
  _DAT_00ba7fc8 = _DAT_00ba7fc8 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00539a40(byte param_1)

{
  FUN_008b2b70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00539a60(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b9628;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a565d4;
  local_4 = 0;
  iVar2 = FUN_00452a60(uVar1);
  if (iVar2 != 0) {
    iVar2 = FUN_00700010(&DAT_00ba7f3c);
    if (iVar2 != 0) {
      FUN_006ffe90(iVar2);
    }
  }
  local_4 = 0xffffffff;
  FUN_0088ea60();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00539b00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
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
  in_ECX[0x1f] = 0;
  in_ECX[0x14] = 0x3f800000;
  in_ECX[0x19] = 0x3f800000;
  in_ECX[0x1e] = 0x3f800000;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  return;
}



void FUN_00539b40(byte param_1)

{
  FUN_00539a60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00539b60(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 1;
  *in_ECX = &PTR_FUN_00a56658;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00539b80(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e4 [4];
  undefined **local_e0;
  int local_dc;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int *local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b9579;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_e4;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff10;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 == 0) goto LAB_00539dd2;
  FUN_00707370(0,1);
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar5 == 0) goto LAB_00539dd2;
  local_cc = FUN_0047fac0(iVar5,uVar3);
  if (local_cc == 0) goto LAB_00539dd2;
  local_dc = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_d8 = 1;
  local_e0 = &PTR_FUN_00a56658;
  local_14 = 0;
  FUN_00452a60();
  FUN_008b2b00();
  piVar1 = *(int **)(in_ECX + 0x10);
  local_c8 = *(int **)(local_cc + 0x10);
  if (piVar1 == (int *)0x0) {
    local_d4 = 0;
  }
  else {
    local_d4 = piVar1[2];
  }
  if (local_c8 == (int *)0x0) {
    local_d0 = 0;
  }
  else {
    local_d0 = local_c8[2];
  }
  FUN_005398e0(&local_b0,iVar5 + 100);
  *(undefined4 *)(local_dc + 0xc) = 0;
  *(undefined4 *)(local_dc + 0x10) = 0x3dcccccd;
  local_c0 = 0;
  local_bc = 0;
  local_70 = local_b0;
  uStack_6c = uStack_ac;
  uStack_68 = uStack_a8;
  uStack_64 = uStack_a4;
  local_b8 = 0x3f800000;
  local_60 = local_a0;
  uStack_5c = uStack_9c;
  uStack_58 = uStack_98;
  uStack_54 = uStack_94;
  local_b4 = 0;
  local_50 = local_90;
  uStack_4c = uStack_8c;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  local_40 = local_80;
  uStack_3c = uStack_7c;
  uStack_38 = uStack_78;
  uStack_34 = uStack_74;
  FUN_008b23e0(&local_70,&local_b0,&local_80,&local_c0);
  local_c4 = FUN_00401f00(0x10);
  local_14._0_1_ = 1;
  if (local_c4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005399b0(&local_e0);
  }
  local_14 = (uint)local_14._1_3_ << 8;
  FUN_008a46c0(uVar4);
  piVar2 = local_c8;
  if (((local_c8 == (int *)0x0) || (iVar5 = local_c8[2], iVar5 == 0)) || (iVar5 == -0x14)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar5 + 0x30);
  }
  if (((piVar1 != (int *)0x0) && (iVar5 = piVar1[2], iVar5 != 0)) && (iVar5 != -0x14)) {
    *(uint *)(iVar5 + 0x30) = uVar3 & 0xfffff6c0 | 0x1608;
  }
  (**(code **)(*piVar1 + 0x80))();
  iVar5 = (**(code **)(*piVar2 + 0x58))();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x2b0);
  }
  if (iVar5 == 0) {
    iVar5 = FUN_00560920(&DAT_00ba7a20,local_cc);
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) goto LAB_00539daf;
  }
  else {
LAB_00539daf:
    FUN_00532c80(piVar1);
  }
  local_14 = 0xffffffff;
  local_e0 = &PTR_FUN_00a56484;
  FUN_008a0200(0);
LAB_00539dd2:
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00539e00(float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1d8 [12];
  undefined4 local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  float local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_104;
  int local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_40;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b95e5;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_1d8;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffe20;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined4 *)(in_ECX + 0x14) = 0x3f800000;
  *(ushort *)(in_ECX + 0xc) = *(ushort *)(in_ECX + 0xc) | 0x41;
  local_1bc = param_4;
  if (64.0 < param_1) {
    param_1 = 64.0;
  }
  local_1ac = 0;
  local_1a8 = param_1 - param_2;
  local_1cc = 0;
  local_1c4 = 0;
  local_1a4 = 0;
  local_1c8 = param_2;
  local_1b8 = 0;
  local_1b4 = param_2;
  local_1b0 = 0;
  local_1c0 = FUN_00401f00(0x14,uVar1);
  local_14 = 0;
  if (local_1c0 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_008b6a40(&local_1ac,&local_1b8,param_2);
  }
  local_14 = 0xffffffff;
  FUN_008a5790();
  local_14 = 1;
  local_110 = 0;
  local_f0 = 0;
  if (iVar2 == 0) {
    local_10c = 0;
  }
  else {
    local_10c = *(undefined4 *)(iVar2 + 8);
  }
  local_60 = 0x40000000;
  local_58 = 0x40000000;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  local_140 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_1a0 = 0;
  local_130 = 0;
  uStack_12c = 0;
  uStack_124 = 0;
  local_19c = 0;
  local_150 = 0x3f800000;
  local_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_13c = 0x3f800000;
  local_180 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_128 = 0x3f800000;
  local_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  local_160 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  local_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 8);
  }
  local_ec = local_10c;
  FUN_008b6550(uVar3,0x40000000,&local_1a0);
  local_70 = local_190;
  uStack_6c = uStack_18c;
  uStack_68 = uStack_188;
  uStack_64 = uStack_184;
  local_a0 = local_180;
  uStack_9c = uStack_17c;
  uStack_98 = uStack_178;
  uStack_94 = uStack_174;
  local_90 = local_170;
  uStack_8c = uStack_16c;
  uStack_88 = uStack_168;
  uStack_84 = uStack_164;
  local_80 = local_160;
  uStack_7c = uStack_15c;
  uStack_78 = uStack_158;
  uStack_74 = uStack_154;
  local_40 = 6;
  local_1c0 = FUN_00401f00(0x1c);
  local_14._0_1_ = 2;
  if (local_1c0 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00533290(&local_110);
  }
  local_14._0_1_ = 1;
  FUN_00897670(uVar3);
  FUN_00539b80(local_1bc);
  iVar2 = FUN_00452a60();
  if (iVar2 != 0) {
    piVar4 = (int *)FUN_00700010(&DAT_00ba7f3c);
    if (piVar4 == (int *)0x0) {
      local_1c0 = FUN_00401f00(100);
      local_14._0_1_ = 3;
      if (local_1c0 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_008aa810();
      }
      local_14._0_1_ = 1;
    }
    *(ushort *)(piVar4 + 2) = *(ushort *)(piVar4 + 2) | 8;
    (**(code **)(*piVar4 + 0x58))(iVar2);
  }
  local_14 = 0xffffffff;
  if (-1 < local_fc) {
    FUN_008a75d0(local_104,local_fc * 8,0x14);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_0053a130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b9628;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0088ebd0(param_3);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a565d4;
  FUN_00539e00(param_1,param_2,param_4,param_3);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053a1b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0x3f800000;
  local_4 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_0_4__0_6_00b11abc,"%f, %f",&local_8,&local_4);
  _DAT_00b2ec70 = local_8;
  _DAT_00b2ec74 = local_4;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11ab4,"%f, %f",&local_4,&local_8);
  _DAT_00b2ec78 = local_4;
  _DAT_00b2ec7c = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_0_6__0_8_00b11aac,"%f, %f",&local_4,&local_8);
  _DAT_00b2ec80 = local_4;
  _DAT_00b2ec84 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_0_5__0_7_00b11aa4,"%f, %f",&local_4,&local_8);
  _DAT_00b2ec88 = local_4;
  _DAT_00b2ec8c = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_0_2__0_5_00b11a9c,"%f, %f",&local_4,&local_8);
  _DAT_00b2ec90 = local_4;
  _DAT_00b2ec94 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11a94,"%f, %f",&local_4,&local_8);
  _DAT_00b2ec98 = local_4;
  _DAT_00b2ec9c = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11a8c,"%f, %f",&local_4,&local_8);
  _DAT_00b2eca0 = local_4;
  _DAT_00b2eca4 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_0_2__0_5_00b11a84,"%f, %f",&local_4,&local_8);
  _DAT_00b2ecc0 = local_4;
  _DAT_00b2ecc4 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11a7c,"%f, %f",&local_4,&local_8);
  _DAT_00b2ecc8 = local_4;
  _DAT_00b2eccc = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11a74,"%f, %f",&local_4,&local_8);
  uVar2 = _DAT_00b11a2c;
  uVar1 = _DAT_00b11a24;
  _DAT_00b2ecd0 = local_4;
  uVar3 = 0;
  _DAT_00b2ecd4 = local_8;
  _DAT_00b2ec58 = _DAT_00b11a34;
  _DAT_00b2ec54 = _DAT_00b11a3c;
  do {
    if (0.0 < *(float *)((int)&DAT_00b2ee68 + uVar3) !=
        (*(float *)((int)&DAT_00b2ee68 + uVar3) == 0.0)) {
      *(undefined4 *)((int)&DAT_00b2ee68 + uVar3) = uVar1;
    }
    if (0.0 < *(float *)((int)&DAT_00b2eee8 + uVar3) !=
        (*(float *)((int)&DAT_00b2eee8 + uVar3) == 0.0)) {
      *(undefined4 *)((int)&DAT_00b2eee8 + uVar3) = uVar2;
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x80);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053a460(void)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0x3f800000;
  local_4 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_0_3__0_9_00b11b2c,"%f, %f",&local_8,&local_4);
  _DAT_00b2ed70 = local_8;
  _DAT_00b2ed74 = local_4;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b24,"%f, %f",&local_4,&local_8);
  _DAT_00b2ed78 = local_4;
  _DAT_00b2ed7c = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b1c,"%f, %f",&local_4,&local_8);
  _DAT_00b2ed80 = local_4;
  _DAT_00b2ed84 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b14,"%f, %f",&local_4,&local_8);
  _DAT_00b2ed88 = local_4;
  _DAT_00b2ed8c = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b0c,"%f, %f",&local_4,&local_8);
  _DAT_00b2ed90 = local_4;
  _DAT_00b2ed94 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b04,"%f, %f",&local_4,&local_8);
  _DAT_00b2ed98 = local_4;
  _DAT_00b2ed9c = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11afc,"%f, %f",&local_4,&local_8);
  _DAT_00b2eda8 = local_4;
  _DAT_00b2edac = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11af4,"%f, %f",&local_4,&local_8);
  _DAT_00b2edb0 = local_4;
  _DAT_00b2edb4 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11aec,"%f, %f",&local_4,&local_8);
  _DAT_00b2edc0 = local_4;
  _DAT_00b2edc4 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11ae4,"%f, %f",&local_4,&local_8);
  _DAT_00b2edc8 = local_4;
  _DAT_00b2edcc = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11adc,"%f, %f",&local_4,&local_8);
  _DAT_00b2edd8 = local_4;
  _DAT_00b2eddc = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11ad4,"%f, %f",&local_4,&local_8);
  _DAT_00b2ede0 = local_4;
  _DAT_00b2ede4 = local_8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053a720(void)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0x3f800000;
  local_4 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b34,"%f, %f",&local_8,&local_4);
  _DAT_00b2e668 = local_8;
  _DAT_00b2e66c = local_4;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b3c,"%f, %f",&local_4,&local_8);
  _DAT_00b2e670 = local_4;
  _DAT_00b2e674 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b44,"%f, %f",&local_4,&local_8);
  _DAT_00b2e678 = local_4;
  _DAT_00b2e67c = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b4c,"%f, %f",&local_4,&local_8);
  _DAT_00b2e680 = local_4;
  _DAT_00b2e684 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b54,"%f, %f",&local_4,&local_8);
  _DAT_00b2e688 = local_4;
  _DAT_00b2e68c = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b5c,"%f, %f",&local_4,&local_8);
  _DAT_00b2e690 = local_4;
  _DAT_00b2e694 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b64,"%f, %f",&local_4,&local_8);
  _DAT_00b2e698 = local_4;
  _DAT_00b2e69c = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b6c,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6a0 = local_4;
  _DAT_00b2e6a4 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b74,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6a8 = local_4;
  _DAT_00b2e6ac = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b7c,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6b0 = local_4;
  _DAT_00b2e6b4 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b84,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6b8 = local_4;
  _DAT_00b2e6bc = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b8c,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6c0 = local_4;
  _DAT_00b2e6c4 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0f__1_0_00b11b94,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6c8 = local_4;
  _DAT_00b2e6cc = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11b9c,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6d0 = local_4;
  _DAT_00b2e6d4 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11ba4,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6d8 = local_4;
  _DAT_00b2e6dc = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11bac,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6e0 = local_4;
  _DAT_00b2e6e4 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11bb4,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6e8 = local_4;
  _DAT_00b2e6ec = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11bbc,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6f0 = local_4;
  _DAT_00b2e6f4 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11bc4,"%f, %f",&local_4,&local_8);
  _DAT_00b2e6f8 = local_4;
  _DAT_00b2e6fc = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11bcc,"%f, %f",&local_4,&local_8);
  _DAT_00b2e700 = local_4;
  _DAT_00b2e704 = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11bd4,"%f, %f",&local_4,&local_8);
  _DAT_00b2e708 = local_4;
  _DAT_00b2e70c = local_8;
  local_4 = 0x3f800000;
  local_8 = 0x3f800000;
  FID_conflict__sscanf(PTR_s_1_0__1_0_00b11bdc,"%f, %f",&local_4,&local_8);
  _DAT_00b2e718 = local_4;
  _DAT_00b2e71c = local_8;
  _DAT_00b2ec5c = _DAT_00b11c0c;
  _DAT_00b2ec60 = _DAT_00b11c04;
  FUN_008a3180(_DAT_00b11be4,_DAT_00b11bec,_DAT_00b11bf4,_DAT_00b11bfc);
  return;
}



void FUN_0053ae60(void)

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
  puStack_8 = &LAB_009ba224;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00543c10(uVar2);
  *in_ECX = &PTR_FUN_00a56b40;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[5];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[5] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[4];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[4] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  *(undefined1 *)(in_ECX + 6) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0053af60(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ba224;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56b40;
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[5];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[5] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[4];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[4] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[5];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[4];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[3];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00543c90();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0053b0e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  float10 fVar7;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  if (param_1 == 0) {
    return;
  }
  FUN_0060cf60(param_1,param_2);
  if ((*(int *)(param_1 + 0xdc) != 3) && (*(int *)(param_1 + 0xdc) != 2)) goto LAB_0053b2df;
  if (*(int *)(in_ECX + 8) == 0) {
    return;
  }
  if ((DAT_00b333c4 == 0) || (iVar3 = FUN_006ecc80(), iVar3 == 0)) {
LAB_0053b20c:
    DAT_00b431a8 = *(undefined4 *)(param_1 + 0x9c);
    DAT_00b431ac = *(undefined4 *)(param_1 + 0xa0);
    DAT_00b431b0 = *(undefined4 *)(param_1 + 0xa4);
    DAT_00b431b8 = *(undefined4 *)(param_1 + 0x90);
    DAT_00b431bc = *(undefined4 *)(param_1 + 0x94);
    DAT_00b431c0 = *(undefined4 *)(param_1 + 0x98);
    local_1c = *(double *)(param_1 + 0x3c);
    DAT_00b431d0 = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    iVar3 = FUN_005645b0();
    local_1c = (double)*(float *)(iVar3 + 0x90);
    FUN_006ecc80();
    fVar7 = (float10)FUN_004cace0();
    if (fVar7 <= (float10)local_1c) goto LAB_0053b20c;
    DAT_00b431a8 = *(undefined4 *)(param_1 + 0x48);
    DAT_00b431ac = *(undefined4 *)(param_1 + 0x4c);
    DAT_00b431b0 = *(undefined4 *)(param_1 + 0x50);
    DAT_00b431b8 = *(undefined4 *)(param_1 + 0x48);
    DAT_00b431bc = *(undefined4 *)(param_1 + 0x4c);
    DAT_00b431c0 = *(undefined4 *)(param_1 + 0x50);
    local_1c = *(double *)(param_1 + 0x48);
    DAT_00b431d0 = *(undefined4 *)(param_1 + 0x50);
  }
  DAT_00b431c4 = 0x3f800000;
  DAT_00b431b4 = 0x3f800000;
  local_10 = 0x3f800000;
  DAT_00b431c8 = (undefined4)local_1c;
  DAT_00b431d4 = 0x3f800000;
  DAT_00b431cc = local_1c._4_4_;
  local_14 = DAT_00b431d0;
LAB_0053b2df:
  iVar3 = *(int *)(in_ECX + 0xc);
  if (iVar3 != 0) {
    if (*(float *)(param_1 + 0xcc) <= *(float *)(param_1 + 200)) {
      *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe;
    }
    else {
      *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 1;
    }
    if (*(char *)(in_ECX + 0x18) != '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0xcc);
      iVar3 = *(int *)(in_ECX + 0xc);
      *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(iVar3 + 0x30) = uVar1;
    }
    iVar3 = *(int *)(in_ECX + 0xc);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(param_1 + 0x50);
  }
  if (*(char *)(in_ECX + 0x18) != '\0') {
    fVar7 = (float10)FUN_00410ee0();
    fVar2 = (float)fVar7;
    iVar3 = *(int *)(DAT_00b333cc + 0xdc);
    if (iVar3 != 0) {
      puVar5 = (undefined4 *)(iVar3 + 0xec);
      puVar6 = &local_1c;
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = (undefined8 *)((int)puVar6 + 4);
      }
      if (local_8 != fVar2) {
        *(float *)(iVar3 + 0x10c) = fVar2 / local_c;
        local_8 = fVar2;
        FUN_0070c190(&local_1c);
        return;
      }
    }
  }
  return;
}



void FUN_0053b3d0(byte param_1)

{
  FUN_0053af60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0053b3f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  LONG LVar8;
  int iVar9;
  int *piVar10;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_4ac;
  undefined2 uStack_4a8;
  undefined2 uStack_4a6;
  undefined4 local_4a4;
  undefined **local_4a0;
  int *piStack_298;
  int iStack_290;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ba26f;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_4ac;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xfffffb44;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4a4 = param_2;
  FUN_00543d30(param_1);
  FUN_006ff420("Atmosphere Root");
  if (DAT_00b43070 == '\0') {
    uVar7 = FUN_007bd0d0(&local_4ac,uVar6);
    piVar10 = (int *)(in_ECX + 0x14);
    local_4 = 0;
    FUN_0055e2a0(uVar7);
    local_4 = 0xffffffff;
    if (((local_4ac != (undefined4 *)0x0) &&
        (LVar8 = InterlockedDecrement(local_4ac + 1), LVar8 == 0)) &&
       (local_4ac != (undefined4 *)0x0)) {
      (**(code **)*local_4ac)(1);
    }
    FUN_006ff420("Atmosphere Quad");
    *(ushort *)(*piVar10 + 0x18) = *(ushort *)(*piVar10 + 0x18) | 2;
    if (*(short *)(DAT_00b333cc + 0xb6) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = **(int **)(DAT_00b333cc + 0xb0);
    }
    iVar3 = *piVar10;
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar9 + 0x58);
    *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar9 + 0x5c);
    local_4ac = (undefined4 *)FUN_00401f00(0xdc);
    local_4 = 1;
    if (local_4ac == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0070b780(0);
    }
    piVar1 = (int *)(in_ECX + 0x10);
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar7);
    FUN_006ff420("Atmosphere Quad Node");
    *(ushort *)(*piVar1 + 0x18) = *(ushort *)(*piVar1 + 0x18) | 2;
    (**(code **)(*(int *)*piVar1 + 0x84))(*piVar10,0);
    (**(code **)(**(int **)(in_ECX + 4) + 0x84))(*piVar1,0);
  }
  FUN_00713a30();
  local_4a0 = &PTR_FUN_00a3690c;
  uStack_14 = 0;
  uStack_18 = 0;
  local_4ac = (undefined4 *)0x0;
  uStack_4a8 = 0;
  uStack_4a6 = 0;
  local_4 = 3;
  FUN_00402e30(&local_4ac,"Meshes\\Sky\\Atmosphere.nif");
  puVar4 = local_4ac;
  cVar5 = FUN_006f9980(local_4ac,0);
  if (((cVar5 != '\0') && (iStack_290 == 1)) &&
     (piVar10 = (int *)*piStack_298, piVar10 != (int *)0x0)) {
    iVar9 = (**(code **)(*piVar10 + 8))();
    if (iVar9 == 0) {
      cVar5 = FUN_00405650(&DAT_00b3fcd4,piVar10);
      if (cVar5 == '\0') goto LAB_0053b61d;
    }
    else {
      piVar10 = (int *)FUN_00405790(0);
    }
    if (piVar10 != (int *)0x0) {
      FUN_0075fa90(piVar10);
      FUN_006ff420("Atmosphere Mesh");
      puVar2 = (ushort *)(*(int *)(in_ECX + 8) + 0x18);
      *puVar2 = *puVar2 | 2;
      (**(code **)(**(int **)(in_ECX + 4) + 0x84))(*(int *)(in_ECX + 8),0);
      FUN_00401f20(puVar4);
      local_4 = 0xffffffff;
      FUN_00436420();
      FUN_0075fa90(local_4a4);
      goto LAB_0053b69f;
    }
  }
LAB_0053b61d:
  FUN_004a7a60("Cannot load the atmosphere model.");
  FUN_00401f20(puVar4);
  local_4 = 0xffffffff;
  FUN_00436420();
LAB_0053b69f:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0053b6d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}



uint FUN_0053b6e0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  uint uVar4;
  
  uVar4 = 0;
  do {
    puVar2 = *(undefined4 **)(in_ECX + 8 + uVar4 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(in_ECX + 8 + uVar4 * 4) = 0;
    }
    uVar1 = uVar4 + 1;
    uVar4 = uVar1 % 3;
  } while (uVar4 < 2);
  return uVar1 / 3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053b730(int param_1,undefined4 *param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  LONG LVar18;
  int in_ECX;
  uint uVar19;
  
  uVar12 = FUN_0060cf60(param_1,param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    uVar19 = 0;
    do {
      if (*(int *)(in_ECX + 8 + uVar19 * 4) == 0) {
        return uVar12;
      }
      uVar12 = (uVar19 + 1) / 3;
      uVar19 = (uVar19 + 1) % 3;
    } while (uVar19 < 2);
    if ((*(int *)(param_1 + 0xdc) == 3) || (*(int *)(param_1 + 0xdc) == 2)) {
      uVar17 = *(undefined4 *)(param_1 + 0xb0);
      uVar4 = *(undefined4 *)(param_1 + 0xa8);
      uVar5 = *(undefined4 *)(param_1 + 0xac);
      uVar6 = *(undefined4 *)(param_1 + 0x5c);
      uVar7 = *(undefined4 *)(param_1 + 0x54);
      uVar8 = *(undefined4 *)(param_1 + 0x58);
      iVar13 = FUN_00707530(4);
      if (iVar13 != 0) {
        piVar14 = (int *)FUN_00707530(4);
        iVar13 = (**(code **)(*piVar14 + 0x54))();
        if ((iVar13 == 0xb) && (iVar13 = FUN_00707530(4), iVar13 != 0)) {
          *(undefined4 *)(iVar13 + 0x6c) = uVar4;
          *(undefined4 *)(iVar13 + 0x70) = uVar5;
          *(undefined4 *)(iVar13 + 0x74) = uVar17;
          *(undefined4 *)(iVar13 + 0x78) = 0x3f800000;
        }
      }
      iVar13 = FUN_00707530(4);
      if (iVar13 != 0) {
        piVar14 = (int *)FUN_00707530(4);
        iVar13 = (**(code **)(*piVar14 + 0x54))();
        if ((iVar13 == 0xb) && (iVar13 = FUN_00707530(4), iVar13 != 0)) {
          *(undefined4 *)(iVar13 + 0x6c) = uVar7;
          *(undefined4 *)(iVar13 + 0x70) = uVar8;
          *(undefined4 *)(iVar13 + 0x74) = uVar6;
          *(undefined4 *)(iVar13 + 0x78) = 0x3f800000;
        }
      }
      puVar16 = param_2;
      uVar12 = 0;
      fVar9 = _DAT_00b365b4 - 0.0;
      do {
        if (uVar12 == 0) {
          iVar13 = 2;
        }
        else if (uVar12 == 1) {
          iVar13 = 1;
        }
        else {
          iVar13 = 0xf;
        }
        param_2 = (undefined4 *)
                  ((float)*(byte *)(iVar2 + 0x48 + iVar13) * 0.003921569 * fVar9 + 0.0);
        if (iVar3 != 0) {
          if (uVar12 == 0) {
            iVar13 = 2;
          }
          else if (uVar12 == 1) {
            iVar13 = 1;
          }
          else {
            iVar13 = 0xf;
          }
          param_2 = (undefined4 *)
                    ((1.0 - *(float *)(param_1 + 0xd8)) *
                     ((float)*(byte *)(iVar13 + 0x48 + iVar3) * 0.003921569 * fVar9 + 0.0) +
                    *(float *)(param_1 + 0xd8) * (float)param_2);
        }
        if ((ushort)uVar12 < 2) {
          param_2 = (undefined4 *)(*(float *)(param_1 + 0xc0) * (float)puVar16 * (float)param_2);
          (&DAT_00b4315c)[uVar12] = (float)param_2 + (float)(&DAT_00b4315c)[uVar12];
        }
        uVar12 = (uVar12 + 1) % 3;
      } while (uVar12 < 2);
    }
    if ((*(byte *)(param_1 + 0xfc) & 3) != 0) {
      if (iVar3 == 0) {
        if ((*(int *)(param_1 + 0xdc) == 3) || (*(int *)(param_1 + 0xdc) == 2)) {
          uVar12 = 0;
          do {
            FUN_00542d30(*(undefined4 *)(in_ECX + 8 + uVar12 * 4),iVar2 + (uVar12 * 3 + 6) * 4,0,0);
            uVar12 = (uVar12 + 1) % 3;
          } while (uVar12 < 2);
        }
      }
      else {
        uVar12 = 0;
        do {
          puVar15 = &LAB_00542e00;
          if (uVar12 != 1) {
            puVar15 = &LAB_00542e20;
          }
          iVar13 = (uVar12 * 3 + 6) * 4;
          FUN_00542d30(0,iVar13 + iVar2,puVar15,0);
          cVar11 = FUN_0045a500();
          if (cVar11 != '\0') {
            FUN_00542d30(*(undefined4 *)(in_ECX + 8 + uVar12 * 4),iVar13 + iVar3,0,0);
          }
          uVar12 = (uVar12 + 1) % 3;
        } while (uVar12 < 2);
      }
    }
    uVar19 = 0;
    do {
      if (*(int *)(in_ECX + 0x10 + uVar19 * 4) != 0) {
        piVar14 = (int *)FUN_00707530(4);
        if (piVar14 == (int *)0x0) {
          uVar12 = 0;
        }
        else {
          for (puVar16 = (undefined4 *)(**(code **)(*piVar14 + 4))(); puVar16 != (undefined4 *)0x0;
              puVar16 = (undefined4 *)puVar16[1]) {
            if (puVar16 == &DAT_00b4335c) {
              bVar10 = 1;
              goto LAB_0053bab0;
            }
          }
          bVar10 = 0;
LAB_0053bab0:
          uVar12 = -(uint)bVar10 & (uint)piVar14;
          if (uVar12 != 0) {
            iVar2 = **(int **)(*(int *)(in_ECX + 0x10 + uVar19 * 4) + 0x20);
            if (iVar2 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined4 *)(iVar2 + 8);
            }
            FUN_00802890(uVar17);
            *(undefined4 *)(uVar12 + 0x80) = *(undefined4 *)(param_1 + 0xd8);
          }
        }
        if (iVar3 == 0) {
          FUN_00708560(&param_2,6);
          puVar16 = param_2;
          if (((param_2 != (undefined4 *)0x0) &&
              (LVar18 = InterlockedDecrement(param_2 + 1), LVar18 == 0)) &&
             (puVar16 != (undefined4 *)0x0)) {
            (**(code **)*puVar16)(1);
          }
          FUN_00405680(*(undefined4 *)(in_ECX + 0x10 + uVar19 * 4));
          puVar16 = *(undefined4 **)(in_ECX + 0x10 + uVar19 * 4);
          if (puVar16 != (undefined4 *)0x0) {
            LVar18 = InterlockedDecrement(puVar16 + 1);
            if ((LVar18 == 0) && (puVar16 != (undefined4 *)0x0)) {
              (**(code **)*puVar16)(1);
            }
            *(undefined4 *)(in_ECX + 0x10 + uVar19 * 4) = 0;
          }
          FUN_00802890(0);
          *(undefined4 *)(uVar12 + 0x80) = 0;
          FUN_00707610();
        }
      }
      iVar2 = *(int *)(in_ECX + 8 + uVar19 * 4);
      iVar13 = FUN_00707530(6);
      if (iVar13 == 0) {
        puVar1 = (ushort *)(iVar2 + 0x18);
        *puVar1 = *puVar1 | 1;
      }
      else {
        puVar1 = (ushort *)(iVar2 + 0x18);
        *puVar1 = *puVar1 & 0xfffe;
      }
      uVar12 = (uVar19 + 1) / 3;
      uVar19 = (uVar19 + 1) % 3;
    } while (uVar19 < 2);
  }
  return uVar12;
}



void FUN_0053bbc0(void)

{
  byte bVar1;
  LONG LVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  
  FUN_00977c50(3);
  uVar5 = 0;
  do {
    puVar4 = *(undefined4 **)(in_ECX + 0x10 + uVar5 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar4 + 1);
      if ((LVar2 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
      *(undefined4 *)(in_ECX + 0x10 + uVar5 * 4) = 0;
    }
    if ((*(int *)(in_ECX + 8 + uVar5 * 4) != 0) &&
       (piVar3 = (int *)FUN_00707530(4), piVar3 != (int *)0x0)) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)puVar4[1]) {
        if (puVar4 == &DAT_00b4335c) {
          bVar1 = 1;
          goto LAB_0053bc30;
        }
      }
      bVar1 = 0;
LAB_0053bc30:
      if ((-(uint)bVar1 & (uint)piVar3) != 0) {
        FUN_00802890(0);
        *(undefined4 *)((-(uint)bVar1 & (uint)piVar3) + 0x80) = 0;
      }
    }
    uVar5 = (uVar5 + 1) % 3;
    if (1 < uVar5) {
      FUN_00977c50(2);
      return;
    }
  } while( true );
}



void FUN_0053bc80(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ba2d4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00543c10(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a56be0;
  _eh_vector_constructor_iterator_(in_ECX + 2,4,2,FUN_007c88a0,FUN_007016a0);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(in_ECX + 4,4,2,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0053b6e0();
  FUN_0053bbc0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0053bd20(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ba2d4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56be0;
  local_4 = 2;
  FUN_0053b6e0(uVar1);
  FUN_0053bbc0();
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 4,4,2,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 2,4,2,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_00543c90();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0053bdb0(undefined4 param_1)

{
  ushort *puVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  char *pcVar7;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 local_4c4;
  undefined2 local_4c0;
  undefined2 local_4be;
  int iStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined **local_4a0;
  int *local_298;
  int local_290;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ba306;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_4d0;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffb20;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00543d30(param_1);
  FUN_006ff420("Cloud Root");
  FUN_00713a30(uVar4);
  local_4a0 = &PTR_FUN_00a3690c;
  local_14 = 0;
  local_18 = 0;
  local_4c4 = 0;
  local_4c0 = 0;
  local_4be = 0;
  local_4 = 1;
  FUN_00402e30(&local_4c4,"Meshes\\Sky\\Clouds.nif");
  uVar6 = local_4c4;
  cVar3 = FUN_006f9980(local_4c4,0);
  if (((cVar3 != '\0') && (local_290 == 1)) && ((int *)*local_298 != (int *)0x0)) {
    for (puVar5 = (undefined4 *)(**(code **)(*(int *)*local_298 + 4))(); puVar5 != (undefined4 *)0x0
        ; puVar5 = (undefined4 *)puVar5[1]) {
      if (puVar5 == &DAT_00b3fab0) {
        iStack_4bc = *local_298;
        if (iStack_4bc == 0) {
          pcVar7 = "Could not find the root node in Clouds.nif.";
          goto LAB_0053bea3;
        }
        uVar4 = 0;
        goto LAB_0053bf14;
      }
    }
  }
  pcVar7 = "Cannot load the clouds.";
LAB_0053bea3:
  FUN_004a7a60(pcVar7);
LAB_0053bea9:
  FUN_00401f20(uVar6);
  goto LAB_0053beb1;
  while( true ) {
    puVar1 = (ushort *)(*(int *)(*piVar2 + 0xb4) + 0x2e);
    *puVar1 = *puVar1 & 0xfff;
    *(ushort *)(*piVar2 + 0x18) = *(ushort *)(*piVar2 + 0x18) | 2;
    (**(code **)(**(int **)(in_ECX + 4) + 0x84))(*piVar2,1);
    uVar4 = (uVar4 + 1) % 3;
    if (1 < uVar4) break;
LAB_0053bf14:
    if (uVar4 < *(ushort *)(iStack_4bc + 0xb6)) {
      uVar6 = *(undefined4 *)(*(int *)(iStack_4bc + 0xb0) + uVar4 * 4);
    }
    else {
      uVar6 = 0;
    }
    piVar2 = (int *)(in_ECX + 8 + uVar4 * 4);
    FUN_0075fa90(uVar6);
    if (*piVar2 == 0) {
      FUN_004a7a60("Missing expected geometry layer in Clouds.nif");
      uVar6 = local_4c4;
      goto LAB_0053bea9;
    }
  }
  _vector_constructor_iterator_(&uStack_4b8,0xc,2,FUN_0053b6d0);
  uStack_4b8 = 0x3f800000;
  uStack_4d0 = 0x3f800000;
  uStack_4b4 = 0;
  uStack_4ac = 0x3f800000;
  uStack_4cc = 0;
  uStack_4c8 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  uStack_4a4 = 0;
  FUN_00541790(*(undefined4 *)(in_ECX + 4),&uStack_4b8,0);
  FUN_00401f20(local_4c4);
LAB_0053beb1:
  local_4 = 0xffffffff;
  FUN_00436420();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0053c010(byte param_1)

{
  FUN_0053bd20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



float10 FUN_0053c030(void)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  
  fVar1 = 180.0 - *(float *)(in_ECX + 0x58);
  fVar2 = 180.0 - *(float *)(in_ECX + 0x5c);
  if (*(float *)(in_ECX + 0x74) <= 180.0) {
    if ((*(float *)(in_ECX + 0x74) <= *(float *)(in_ECX + 0x58)) &&
       (*(float *)(in_ECX + 0x5c) < *(float *)(in_ECX + 0x74) !=
        (*(float *)(in_ECX + 0x5c) == *(float *)(in_ECX + 0x74)))) {
      return (float10)((*(float *)(in_ECX + 0x74) - *(float *)(in_ECX + 0x5c)) /
                      (*(float *)(in_ECX + 0x58) - *(float *)(in_ECX + 0x5c)));
    }
    if ((fVar1 < *(float *)(in_ECX + 0x74) != (fVar1 == *(float *)(in_ECX + 0x74))) &&
       (*(float *)(in_ECX + 0x74) <= fVar2)) {
      return (float10)((fVar2 - *(float *)(in_ECX + 0x74)) / (fVar2 - fVar1));
    }
    if ((*(float *)(in_ECX + 0x58) < *(float *)(in_ECX + 0x74)) &&
       (*(float *)(in_ECX + 0x74) < fVar1)) {
      return (float10)1;
    }
  }
  return (float10)0;
}



float10 FUN_0053c100(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x5c);
  fVar2 = *(float *)(in_ECX + 0x5c) - *(float *)(in_ECX + 0x60);
  fVar4 = 180.0 - fVar1;
  fVar3 = 180.0 - fVar2;
  if (*(float *)(in_ECX + 0x74) <= 180.0) {
    if ((*(float *)(in_ECX + 0x74) < fVar1 != (*(float *)(in_ECX + 0x74) == fVar1)) &&
       (fVar2 <= *(float *)(in_ECX + 0x74))) {
      return (float10)((*(float *)(in_ECX + 0x74) - fVar2) / (fVar1 - fVar2));
    }
    if ((fVar4 < *(float *)(in_ECX + 0x74) != (fVar4 == *(float *)(in_ECX + 0x74))) &&
       (*(float *)(in_ECX + 0x74) <= fVar3)) {
      return (float10)((fVar3 - *(float *)(in_ECX + 0x74)) / (fVar3 - fVar4));
    }
    if ((fVar1 < *(float *)(in_ECX + 0x74)) && (*(float *)(in_ECX + 0x74) < fVar4)) {
      return (float10)1;
    }
  }
  return (float10)0;
}



uint FUN_0053c5e0(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((uVar2 != 0) && ((*(byte *)(uVar2 + 0x55) & 0x3f) != 0)) {
    uVar3 = *(byte *)(uVar2 + 0x55) & 0xffffff3f;
    uVar2 = FUN_00402c00();
    uVar1 = ((ulonglong)uVar2 % (ulonglong)(uVar3 * 8)) / (ulonglong)uVar3;
    uVar2 = (uint)uVar1;
    if (uVar2 != DAT_00b365bc) {
      DAT_00b365bc = uVar2;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_0053c630(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *apuStack_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ba38a;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56cac;
  puVar1 = (undefined4 *)in_ECX[5];
  local_4 = 5;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[5] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[4];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[4] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  iVar2 = in_ECX[1];
  if (*(int *)(iVar2 + 0x1c) != 0) {
    (**(code **)(**(int **)(iVar2 + 0x1c) + 0x88))(apuStack_14,iVar2,uVar3);
    if (apuStack_14[0] != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(apuStack_14[0] + 1);
      if ((LVar4 == 0) && (apuStack_14[0] != (undefined4 *)0x0)) {
        (**(code **)*apuStack_14[0])(1);
      }
    }
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  local_4._0_1_ = 4;
  _eh_vector_destructor_iterator_(in_ECX + 6,8,8,FUN_00402da0);
  puVar1 = (undefined4 *)in_ECX[5];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[4];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[3];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00543c90();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0053c830(undefined4 param_1,char *param_2)

{
  ushort *puVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  LONG LVar10;
  int iVar11;
  int *piVar12;
  int in_ECX;
  undefined1 *puVar13;
  float **ppfVar14;
  int *unaff_FS_OFFSET;
  float *local_50 [4];
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int iStack_2c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ba405;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff9c;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00543d30(param_1);
  if (param_2 == (char *)0x0) {
    param_2 = "Moon Root";
  }
  FUN_006ff420(param_2);
  uVar4 = FUN_00401f00(0x30,uVar3);
  pfVar5 = (float *)FUN_00401f00(0x30);
  local_50[2] = (float *)FUN_00401f00(0x30);
  local_50[3] = (float *)FUN_00401f00(0x30);
  fVar2 = (float)*(int *)(in_ECX + 0x6c);
  if (*(int *)(in_ECX + 0x6c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *pfVar5 = fVar2 * -1.0;
  pfVar5[1] = fVar2;
  pfVar5[2] = 0.0;
  fVar2 = (float)*(int *)(in_ECX + 0x6c);
  if (*(int *)(in_ECX + 0x6c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  pfVar5[3] = fVar2 * -1.0;
  pfVar5[4] = fVar2 * -1.0;
  pfVar5[5] = 0.0;
  fVar2 = (float)*(int *)(in_ECX + 0x6c);
  if (*(int *)(in_ECX + 0x6c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  pfVar5[6] = fVar2;
  pfVar5[7] = fVar2;
  pfVar5[8] = 0.0;
  fVar2 = (float)*(int *)(in_ECX + 0x6c);
  if (*(int *)(in_ECX + 0x6c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  pfVar5[9] = fVar2;
  pfVar5[10] = fVar2 * -1.0;
  pfVar5[0xb] = 0.0;
  fVar2 = (float)*(int *)(in_ECX + 0x6c);
  if (*(int *)(in_ECX + 0x6c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *local_50[3] = fVar2 * -1.0;
  local_50[3][1] = fVar2;
  local_50[3][2] = 0.0;
  fVar2 = (float)*(int *)(in_ECX + 0x6c);
  if (*(int *)(in_ECX + 0x6c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_50[3][3] = fVar2 * -1.0;
  local_50[3][4] = fVar2 * -1.0;
  local_50[3][5] = 0.0;
  fVar2 = (float)*(int *)(in_ECX + 0x6c);
  if (*(int *)(in_ECX + 0x6c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_50[3][6] = fVar2;
  local_50[3][7] = fVar2;
  local_50[3][8] = 0.0;
  local_40 = (float)*(int *)(in_ECX + 0x6c);
  if (*(int *)(in_ECX + 0x6c) < 0) {
    local_40 = local_40 + 4.2949673e+09;
  }
  local_3c = local_40 * -1.0;
  local_50[3][9] = local_40;
  local_50[3][10] = local_3c;
  local_38 = 0;
  local_50[3][0xb] = 0.0;
  puVar6 = (undefined4 *)FUN_00401f00(0x20);
  local_50[1] = (float *)FUN_00401f00(0x20);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0x3f800000;
  puVar6[4] = 0x3f800000;
  puVar6[5] = 0;
  puVar6[6] = 0x3f800000;
  puVar6[7] = 0x3f800000;
  *local_50[1] = 0.0;
  local_50[1][1] = 0.0;
  local_50[1][2] = 0.0;
  local_40 = 1.0;
  local_50[1][3] = 1.0;
  local_3c = 1.0;
  local_50[1][4] = 1.0;
  local_50[1][5] = 0.0;
  local_50[1][6] = 1.0;
  local_50[1][7] = 1.0;
  puVar7 = (undefined4 *)FUN_00401f00(0x40);
  local_4 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar7,0x10,4,FUN_0047ea50);
  }
  local_4 = 0xffffffff;
  puVar8 = (undefined4 *)FUN_00401f00(0x40);
  local_4 = 1;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar8,0x10,4,FUN_0047ea50);
  }
  local_40 = 1.0;
  local_4 = 0xffffffff;
  *puVar7 = 0x3f800000;
  local_3c = 0.0;
  puVar7[4] = 0x3f800000;
  local_38 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  local_34 = 0x3f800000;
  puVar7[3] = 0x3f800000;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0x3f800000;
  puVar7[8] = 0x3f800000;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0x3f800000;
  puVar7[0xc] = 0x3f800000;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0x3f800000;
  *puVar8 = 0x3f800000;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0x3f800000;
  puVar8[4] = 0x3f800000;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[8] = 0x3f800000;
  puVar8[7] = 0x3f800000;
  puVar8[0xc] = 0x3f800000;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xb] = 0x3f800000;
  puVar8[0xf] = 0x3f800000;
  puVar9 = (undefined2 *)FUN_00401f00(0xc);
  local_50[0] = (float *)FUN_00401f00(0xc);
  *puVar9 = 0;
  puVar9[2] = 2;
  puVar9[3] = 2;
  puVar9[5] = 3;
  puVar9[1] = 1;
  puVar9[4] = 1;
  *(undefined2 *)local_50[0] = 0;
  *(undefined2 *)((int)local_50[0] + 2) = 1;
  *(undefined2 *)(local_50[0] + 1) = 2;
  *(undefined2 *)((int)local_50[0] + 6) = 2;
  *(undefined2 *)(local_50[0] + 2) = 1;
  *(undefined2 *)((int)local_50[0] + 10) = 3;
  local_40 = (float)FUN_00401f00(0xc0);
  local_4 = 2;
  if (local_40 == 0.0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)FUN_007174b0(4,pfVar5,uVar4,puVar7,puVar6,1,0,2,puVar9);
  }
  puVar7 = *(undefined4 **)(in_ECX + 0x10);
  local_4 = 0xffffffff;
  if (puVar7 != puVar6) {
    if (puVar7 != (undefined4 *)0x0) {
      LVar10 = InterlockedDecrement(puVar7 + 1);
      if ((LVar10 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x10) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_006ff420("Moon Mesh");
  puVar1 = (ushort *)(*(int *)(in_ECX + 0x10) + 0x18);
  *puVar1 = *puVar1 | 2;
  iVar11 = FUN_00401f00(0xc0);
  local_4 = 3;
  if (iVar11 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)
             FUN_007174b0(4,local_50[3],local_50[2],puVar8,local_50[1],1,0,2,local_50[0]);
  }
  puVar7 = *(undefined4 **)(in_ECX + 0x14);
  local_4 = 0xffffffff;
  if (puVar7 != puVar6) {
    if (puVar7 != (undefined4 *)0x0) {
      LVar10 = InterlockedDecrement(puVar7 + 1);
      if ((LVar10 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x14) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_006ff420("Shadow Mesh");
  puVar1 = (ushort *)(*(int *)(in_ECX + 0x14) + 0x18);
  *puVar1 = *puVar1 | 2;
  puVar6 = (undefined4 *)FUN_00401f00(0x1c);
  local_4 = 4;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar6 = &PTR_FUN_00a3d604;
    *(undefined2 *)(puVar6 + 6) = 0xec;
    *(undefined1 *)((int)puVar6 + 0x1a) = 0;
  }
  if (puVar6 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar6 + 1);
  }
  *(ushort *)(puVar6 + 6) = *(ushort *)(puVar6 + 6) | 1;
  *(ushort *)(puVar6 + 6) = *(ushort *)(puVar6 + 6) & 0xffed | 0xc;
  *(ushort *)(puVar6 + 6) = *(ushort *)(puVar6 + 6) & 0xfe1f;
  *(ushort *)(puVar6 + 6) = *(ushort *)(puVar6 + 6) | 0x2000;
  local_4 = 5;
  FUN_00405680(puVar6);
  LVar10 = InterlockedDecrement(puVar6 + 1);
  if (LVar10 == 0) {
    (**(code **)*puVar6)(1);
  }
  local_4 = 0xffffffff;
  iVar11 = FUN_00542ea0();
  if (*(int *)(iVar11 + 0xdc) != 3) {
    iVar11 = FUN_00542ea0();
    if (*(int *)(iVar11 + 0xdc) != 2) goto LAB_0053cfc1;
  }
  puVar13 = (undefined1 *)0x0;
  iVar11 = FUN_00542ea0();
  if (in_ECX == *(int *)(iVar11 + 0x30)) {
    puVar13 = &LAB_00540ef0;
  }
  else {
    iVar11 = FUN_00542ea0();
    if (in_ECX == *(int *)(iVar11 + 0x34)) {
      puVar13 = &LAB_00540f20;
    }
  }
  FUN_0053fbe0(*(undefined4 *)(in_ECX + 0x14),"Textures\\Sky\\MoonShadow.dds",puVar13,1);
  *(undefined4 *)(in_ECX + 0x70) = 2;
LAB_0053cfc1:
  iVar11 = FUN_00401f00(0xdc);
  local_4 = 6;
  if (iVar11 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)FUN_0070b780(0);
  }
  puVar7 = *(undefined4 **)(in_ECX + 8);
  local_4 = 0xffffffff;
  if (puVar7 != puVar6) {
    if (puVar7 != (undefined4 *)0x0) {
      LVar10 = InterlockedDecrement(puVar7 + 1);
      if ((LVar10 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
    }
    *(undefined4 **)(in_ECX + 8) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar11 = FUN_00401f00(0xdc);
  local_4 = 7;
  if (iVar11 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)FUN_0070b780(0);
  }
  puVar7 = *(undefined4 **)(in_ECX + 0xc);
  local_4 = 0xffffffff;
  if (puVar7 != puVar6) {
    if (puVar7 != (undefined4 *)0x0) {
      LVar10 = InterlockedDecrement(puVar7 + 1);
      if ((LVar10 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_006ff420("Moon Node");
  FUN_006ff420("Shadow Node");
  puVar1 = (ushort *)(*(int *)(in_ECX + 8) + 0x18);
  *puVar1 = *puVar1 | 2;
  puVar1 = (ushort *)(*(int *)(in_ECX + 0xc) + 0x18);
  *puVar1 = *puVar1 | 2;
  (**(code **)(**(int **)(in_ECX + 8) + 0x84))(*(undefined4 *)(in_ECX + 0x10),1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x84))(*(undefined4 *)(in_ECX + 0x14),1);
  (**(code **)(**(int **)(in_ECX + 4) + 0x84))(*(undefined4 *)(in_ECX + 0xc),1);
  (**(code **)(**(int **)(in_ECX + 4) + 0x84))(*(undefined4 *)(in_ECX + 8),1);
  FUN_0070fd30(0xbfc90fdb);
  iVar11 = *(int *)(in_ECX + 0x10);
  *(undefined4 *)(iVar11 + 0x54) = 0;
  *(undefined4 *)(iVar11 + 0x58) = 0x44000000;
  *(undefined4 *)(iVar11 + 0x5c) = 0;
  ppfVar14 = local_50;
  puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 0x30);
  for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar6 = *ppfVar14;
    ppfVar14 = ppfVar14 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar11 = *(int *)(in_ECX + 0x14);
  *(undefined4 *)(iVar11 + 0x54) = 0;
  *(undefined4 *)(iVar11 + 0x58) = 0x44000000;
  *(undefined4 *)(iVar11 + 0x5c) = 0;
  ppfVar14 = local_50;
  puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x14) + 0x30);
  for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar6 = *ppfVar14;
    ppfVar14 = ppfVar14 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_007b8940(*(undefined4 *)(in_ECX + 4),10,0,1);
  iVar11 = FUN_00707530(4);
  if (iVar11 != 0) {
    piVar12 = (int *)FUN_00707530(4);
    iVar11 = (**(code **)(*piVar12 + 0x54))();
    if (iVar11 == 0xb) {
      iVar11 = FUN_00707530(4);
      if (iVar11 != 0) {
        *(undefined4 *)(iVar11 + 0x88) = 6;
      }
    }
  }
  iVar11 = FUN_00707530(4);
  if (iVar11 != 0) {
    piVar12 = (int *)FUN_00707530(4);
    iVar11 = (**(code **)(*piVar12 + 0x54))();
    if (iVar11 == 0xb) {
      iVar11 = FUN_00707530(4);
      if (iVar11 != 0) {
        *(undefined4 *)(iVar11 + 0x88) = 7;
      }
    }
  }
  *unaff_FS_OFFSET = iStack_2c;
  return;
}



void FUN_0053d260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

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
  puStack_8 = &LAB_009ba46a;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00543c10(uVar2);
  *in_ECX = &PTR_FUN_00a56cac;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  _eh_vector_constructor_iterator_(in_ECX + 6,8,8,FUN_00402d60,FUN_00402da0);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00402e30(in_ECX + 0xc,"\\Textures\\Sky\\%s_%s.dds",param_1,"one_wan");
  FUN_00402e30(in_ECX + 0x10,"\\Textures\\Sky\\%s_%s.dds",param_1,"one_wax");
  FUN_00402e30(in_ECX + 10,"\\Textures\\Sky\\%s_%s.dds",param_1,"half_wan");
  FUN_00402e30(in_ECX + 0x12,"\\Textures\\Sky\\%s_%s.dds",param_1,"half_wax");
  FUN_00402e30(in_ECX + 8,"\\Textures\\Sky\\%s_%s.dds",param_1,"three_wan");
  FUN_00402e30(in_ECX + 0x14,"\\Textures\\Sky\\%s_%s.dds",param_1,"three_wax");
  FUN_00402e30(in_ECX + 6,"\\Textures\\Sky\\%s_%s.dds",param_1,&DAT_00a56d18);
  in_ECX[0x16] = param_2;
  in_ECX[0x17] = param_3;
  in_ECX[0x1b] = param_7;
  in_ECX[0x18] = param_4;
  in_ECX[0x19] = param_5;
  in_ECX[0x1a] = param_6;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0x7f7fffff;
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[4];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[4] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[5];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[5] = 0;
  }
  in_ECX[0x1c] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0053d440(byte param_1)

{
  FUN_0053c630();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



float10 FUN_0053d460(void)

{
  int iVar1;
  
  iVar1 = _rand();
  return (float10)((float)iVar1 / 32767.0);
}



float10 FUN_0053d480(void)

{
  int iVar1;
  
  iVar1 = _rand();
  return (float10)(((float)iVar1 + (float)iVar1) / 32767.0 - 1.0);
}



void FUN_0053d4b0(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int in_ECX;
  undefined1 local_c [12];
  
  fVar1 = *(float *)(in_ECX + 0x30);
  pfVar4 = (float *)FUN_007101f0(local_c,param_2);
  fVar2 = pfVar4[1];
  fVar3 = pfVar4[2];
  *param_1 = *(float *)(in_ECX + 0x24) + fVar1 * *pfVar4;
  param_1[1] = *(float *)(in_ECX + 0x28) + fVar2 * fVar1;
  param_1[2] = *(float *)(in_ECX + 0x2c) + fVar1 * fVar3;
  return;
}



void FUN_0053d520(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ba4a6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56d7c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[1] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0053d5d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ba4a6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56d7c;
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[1] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  in_ECX[5] = 0;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[1];
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



void FUN_0053d6c0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  undefined4 *unaff_ESI;
  undefined4 *local_4;
  
  if (in_ECX[2] != 0) {
    local_4 = in_ECX;
    (**(code **)(*(int *)in_ECX[3] + 0x88))(&local_4,in_ECX[2]);
    if (local_4 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(local_4 + 1);
      if ((LVar2 == 0) && (local_4 != (undefined4 *)0x0)) {
        (**(code **)*local_4)(1);
      }
    }
    puVar1 = (undefined4 *)in_ECX[2];
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[2] = 0;
    }
  }
  if (in_ECX[1] != 0) {
    (**(code **)(*(int *)in_ECX[3] + 0x88))(&local_4,in_ECX[1]);
    if (unaff_ESI != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(unaff_ESI + 1);
      if ((LVar2 == 0) && (unaff_ESI != (undefined4 *)0x0)) {
        (**(code **)*unaff_ESI)(1);
      }
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[1] = 0;
    }
  }
  return;
}



undefined4 * FUN_0053d7a0(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int in_ECX;
  int iVar8;
  undefined4 *puVar9;
  undefined1 local_30 [12];
  undefined1 local_24 [36];
  
  param_1[0xc] = *(float *)(param_2 + 0x30) * *(float *)(in_ECX + 0x30);
  puVar6 = (undefined4 *)FUN_007100a0(local_24,param_2);
  puVar9 = param_1;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  pfVar7 = (float *)FUN_007101f0(local_30,param_2 + 0x24);
  fVar1 = *(float *)(in_ECX + 0x30);
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  fVar4 = *(float *)(in_ECX + 0x28);
  fVar5 = *(float *)(in_ECX + 0x2c);
  param_1[9] = fVar1 * *pfVar7 + *(float *)(in_ECX + 0x24);
  param_1[10] = fVar4 + fVar2 * fVar1;
  param_1[0xb] = fVar5 + fVar1 * fVar3;
  return param_1;
}



uint FUN_0053d850(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x3c);
  if (piVar1 != (int *)0x0) {
    for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      if (puVar3 == &DAT_00b3cfbc) {
        bVar2 = 1;
        goto LAB_0053d878;
      }
    }
    bVar2 = 0;
LAB_0053d878:
    if ((-(uint)bVar2 & (uint)piVar1) != 0) {
      return -(uint)bVar2 & (uint)piVar1;
    }
  }
  iVar4 = FUN_00560920(&DAT_00b3cf5c,*(undefined4 *)(in_ECX + 0x3c));
  if ((iVar4 == 0) || (bVar2 = FUN_006cc550(), bVar2 == 0xff)) {
    return 0;
  }
  if ((*(char *)(iVar4 + 0xe) == '\x01') && (bVar2 == *(byte *)(iVar4 + 0xf))) {
    return *(uint *)(iVar4 + 0x18);
  }
  return *(uint *)(*(int *)(iVar4 + 0x14) + (uint)bVar2 * 0x18);
}



void FUN_0053d8d0(byte param_1)

{
  FUN_0053d5d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0053d8f0(void)

{
  int in_ECX;
  bool bVar1;
  
  bVar1 = DAT_00b333dc == 0;
  *(int *)(in_ECX + 0xc) = DAT_00b333dc;
  if (bVar1) {
    FUN_004a7a60("Can\'t find Weather Root Node.  Precipitation has no parent on scene graph.");
  }
  return;
}



void FUN_0053d910(void)

{
  undefined1 *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *in_ECX = 2;
  return;
}



void FUN_0053d930(undefined2 param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf6ce;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar2);
  *in_ECX = &PTR_FUN_00a45ec4;
  in_ECX[7] = &PTR__scalar_deleting_destructor__00a45e70;
  *(undefined2 *)(in_ECX + 9) = 0;
  *(undefined2 *)((int)in_ECX + 0x2a) = 1;
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[8] = 0;
  *(undefined2 *)(in_ECX + 3) = param_1;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  in_ECX[2] = 0;
  in_ECX[4] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 0x1c >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 0x1c));
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,0x1c,param_2,FUN_0053d910);
  }
  in_ECX[5] = pvVar3;
  uVar1 = 0;
  if (*(short *)((int)in_ECX + 0x26) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(in_ECX[8] + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x26));
  }
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[6] = param_3;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0053da20(int *param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  float fVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  short *psVar22;
  float *pfVar23;
  int *piVar24;
  short sVar25;
  float fVar26;
  float *pfVar27;
  int *unaff_FS_OFFSET;
  bool bVar28;
  float10 fVar29;
  float10 fVar30;
  float fStack_298;
  float fStack_290;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  int *local_274;
  int *local_270;
  int *piStack_26c;
  undefined4 local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  uint uStack_254;
  undefined4 *puStack_250;
  undefined4 *puStack_24c;
  int iStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  double dStack_220;
  float fStack_218;
  undefined4 *puStack_214;
  int *piStack_210;
  int *piStack_20c;
  double dStack_208;
  double dStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int *local_1cc;
  undefined1 auStack_1c8 [12];
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined4 auStack_194 [9];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  float fStack_154;
  undefined4 auStack_150 [13];
  undefined4 auStack_11c [13];
  undefined4 auStack_e8 [13];
  undefined1 auStack_b4 [52];
  undefined1 auStack_80 [12];
  undefined4 auStack_74 [13];
  int aiStack_40 [13];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ba524;
  local_c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xfffffd44;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar10 = (int *)param_1[3];
  local_268 = 0;
  piVar24 = (int *)0x0;
  local_270 = (int *)0x0;
  local_274 = (int *)0x0;
  local_1cc = (int *)0x0;
  for (; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[0xd]) {
    for (puVar9 = (undefined4 *)(**(code **)(*piVar10 + 4))(uVar8); puVar9 != (undefined4 *)0x0;
        puVar9 = (undefined4 *)puVar9[1]) {
      if (puVar9 == &DAT_00b40bcc) {
        piVar10 = (int *)FUN_00560920(&DAT_00b40b50,piVar10[0x11]);
        piStack_20c = piVar10;
        piVar11 = (int *)FUN_0053d850();
        (**(code **)(*piVar11 + 0x5c))(0,0,&local_268);
        local_274 = (int *)((float)piVar10[0x12] * (float)local_274);
        fStack_284 = (float)((int)ROUND((float)local_274) & 0xffff);
        fStack_1e0 = 0.0;
        puVar9 = (undefined4 *)(**(code **)(*param_1 + 4))();
        goto joined_r0x0053db29;
      }
    }
  }
  goto LAB_0053f1c7;
joined_r0x0053db29:
  if (puVar9 == (undefined4 *)0x0) goto LAB_0053db3e;
  if (puVar9 == &DAT_00b40b1c) {
    uVar8 = 0;
    piVar10 = local_274;
    goto LAB_0053dba6;
  }
  puVar9 = (undefined4 *)puVar9[1];
  goto joined_r0x0053db29;
LAB_0053db3e:
  uVar8 = 0;
  do {
    if (uVar8 < (uint)param_1[0x34]) {
      puVar9 = (undefined4 *)param_1[0x32];
      uVar21 = 0;
      do {
        if (puVar9 == (undefined4 *)0x0) goto LAB_0053db6c;
        puVar16 = puVar9 + 2;
        puVar9 = (undefined4 *)*puVar9;
        piVar10 = (int *)*puVar16;
        bVar28 = uVar21 != uVar8;
        uVar21 = uVar21 + 1;
      } while (bVar28);
    }
    else {
LAB_0053db6c:
      piVar10 = (int *)0x0;
    }
    uVar8 = uVar8 + 1;
    if (piVar10 == (int *)0x0) break;
    for (puVar9 = (undefined4 *)(**(code **)(*piVar10 + 4))(); puVar9 != (undefined4 *)0x0;
        puVar9 = (undefined4 *)puVar9[1]) {
      if (puVar9 == &DAT_00b40aa4) {
        iStack_1d4 = piVar10[6];
        goto LAB_0053df26;
      }
    }
  } while( true );
LAB_0053df26:
  local_1cc = param_1;
  uStack_254 = 4;
  if (0x3ffe < fStack_278._0_2_) {
    fStack_278 = 2.29575e-41;
  }
  fVar26 = (float)((uint)fStack_278 & 0xffff);
  local_270 = (int *)fVar26;
  puVar9 = (undefined4 *)FUN_00401f00((int)fVar26 * 0x30);
  puStack_250 = puVar9;
  fVar13 = (float)FUN_00401f00((int)fVar26 << 5);
  fStack_264 = fVar13;
  uVar8 = FUN_00401f00((int)fVar26 * 0xc);
  if (fVar26 != 0.0) {
    puVar16 = (undefined4 *)((int)fVar13 + 0x10);
    sVar25 = 0;
    dStack_220 = 0.0078125;
    psVar22 = (short *)(uVar8 + 4);
    pfVar17 = (float *)(puVar9 + 6);
    dStack_208 = 0.007812501848093234;
    dStack_200 = 5.26354424712089e-315;
    piVar10 = local_270;
    do {
      fStack_1ec = (float)piStack_20c[0x10];
      fStack_284 = fStack_1ec * -1.0;
      fStack_280 = fStack_1ec * 0.0;
      pfVar17[-6] = fStack_284;
      pfVar17[-5] = fStack_280;
      pfVar17[-4] = fStack_284;
      pfVar17[-3] = fStack_1ec;
      pfVar17[-2] = fStack_280;
      pfVar17[-1] = fStack_284;
      *pfVar17 = fStack_1ec;
      pfVar17[1] = fStack_280;
      pfVar17[2] = fStack_1ec;
      pfVar17[3] = fStack_284;
      pfVar17[4] = fStack_280;
      pfVar17[5] = fStack_1ec;
      puVar16[-4] = 0;
      puVar16[-3] = 0x3f800000;
      puVar16[-2] = 0x3f800000;
      puVar16[-1] = 0x3f800000;
      *puVar16 = 0x3f800000;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16[3] = 0;
      psVar22[-1] = sVar25 + 1;
      psVar22[-2] = sVar25;
      psVar22[2] = sVar25;
      *psVar22 = sVar25 + 2;
      psVar22[1] = sVar25 + 3;
      psVar22[3] = sVar25 + 2;
      sVar25 = sVar25 + 4;
      pfVar17 = pfVar17 + 0xc;
      puVar16 = puVar16 + 8;
      psVar22 = psVar22 + 6;
      piVar10 = (int *)((int)piVar10 + -1);
      puVar9 = puStack_250;
      fVar13 = fStack_264;
      fStack_27c = fStack_284;
      fStack_1e8 = fStack_280;
      fStack_1e4 = fStack_284;
      fStack_1e0 = fStack_1ec;
      fStack_1dc = fStack_280;
      fStack_1d8 = fStack_1ec;
    } while (piVar10 != (int *)0x0);
  }
  piStack_26c = (int *)uVar8;
  iVar14 = FUN_00401f00(0xc0);
  iStack_4 = 2;
  if (iVar14 == 0) {
    puStack_24c = (undefined4 *)0x0;
  }
  else {
    iVar14 = FUN_00401f00(0x5c);
    iStack_4._0_1_ = 3;
    if (iVar14 == 0) {
      iStack_4 = CONCAT31(iStack_4._1_3_,2);
      puStack_24c = (undefined4 *)FUN_00717570(0);
    }
    else {
      uVar15 = FUN_0072ab00((int)local_270 * 4,puVar9,0,0,fVar13,1,0,(int)local_270 * 2,uVar8,0,0);
      iStack_4 = CONCAT31(iStack_4._1_3_,2);
      puStack_24c = (undefined4 *)FUN_00717570(uVar15);
    }
  }
LAB_0053e272:
  piVar10 = piStack_20c;
  puVar9 = puStack_24c;
  iStack_4 = 0xffffffff;
  if (puStack_24c != (undefined4 *)0x0) {
    fVar13 = (float)piStack_20c[6];
    fVar26 = (float)piStack_20c[7];
    iVar14 = _rand();
    fStack_264 = ((float)iVar14 / 32767.0 - 0.5) * fVar26 + fVar13;
    fVar13 = (float)piVar10[8];
    fVar26 = (float)piVar10[9];
    iVar14 = _rand();
    piStack_26c = (int *)((((float)iVar14 + (float)iVar14) / 32767.0 - 1.0) * fVar26 + fVar13);
    fVar13 = (float)piVar10[10];
    fVar26 = (float)piVar10[0xb];
    iVar14 = _rand();
    dStack_220 = (double)(float)piStack_26c;
    fVar29 = (float10)FUN_00986300();
    fVar30 = (float10)FUN_00986000();
    piStack_26c = (int *)(float)fVar30;
    dStack_220 = (double)((((float)iVar14 + (float)iVar14) / 32767.0 - 1.0) * fVar26 + fVar13);
    fVar30 = (float10)FUN_00986300();
    dStack_208 = (double)(float)fVar29;
    fVar29 = (float10)FUN_00986000();
    fStack_244 = (float)fVar29 * (float)dStack_208;
    fStack_240 = (float)dStack_208 * (float)fVar30;
    fStack_1f8 = fStack_244 * fStack_264;
    fStack_1f4 = fStack_240 * fStack_264;
    fStack_1f0 = fStack_264 * (float)piStack_26c;
    local_274 = (int *)0x0;
    iStack_248 = 0;
    piStack_210 = (int *)0x0;
    piStack_26c = (int *)0x0;
    fStack_278 = (float)piVar10[0x12];
    puVar16 = (undefined4 *)(**(code **)(*piVar10 + 4))();
    if (puVar16 != (undefined4 *)0x0) {
LAB_0053e435:
      if (puVar16 != &DAT_00b409ec) goto code_r0x0053e440;
      iVar14 = FUN_00560920(&DAT_00b409ec,piVar10);
      puVar9 = (undefined4 *)(*(int *)(iVar14 + 0x50) + 100);
      puVar16 = auStack_e8;
      for (iVar20 = 0xd; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar16 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar16 = puVar16 + 1;
      }
      puVar9 = (undefined4 *)(*(int *)(iVar14 + 0x10) + 100);
      puVar16 = auStack_11c;
      for (iVar20 = 0xd; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar16 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar16 = puVar16 + 1;
      }
      local_274 = (int *)iVar14;
      FUN_00718a80(auStack_150);
      puVar9 = (undefined4 *)FUN_0053d7a0(auStack_b4,auStack_e8);
      puVar16 = auStack_194;
      for (iVar20 = 0xd; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar16 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar16 = puVar16 + 1;
      }
      pfVar17 = (float *)FUN_007101f0(&fStack_244,&fStack_1f8);
      fStack_260 = *pfVar17;
      fStack_25c = pfVar17[1];
      fStack_258 = pfVar17[2];
      fStack_224 = fStack_258 * fStack_278 + fStack_168;
      fStack_230 = fStack_224;
      if (fStack_168 < fStack_224) {
        fStack_230 = fStack_168;
      }
      fStack_238 = *(float *)(iVar14 + 0x54) * 0.5;
      fStack_234 = *(float *)(iVar14 + 0x58) * 0.5;
      if (fStack_224 < fStack_168) {
        fStack_224 = fStack_168;
      }
      fStack_290 = *(float *)(iVar14 + 0x54) * 0.5;
      fStack_228 = *(float *)(iVar14 + 0x58) * 0.5;
      goto LAB_0053e76f;
    }
LAB_0053e447:
    for (puVar16 = (undefined4 *)(**(code **)(*piVar10 + 4))(); puVar16 != (undefined4 *)0x0;
        puVar16 = (undefined4 *)puVar16[1]) {
      if (puVar16 == &DAT_00b40968) {
        iVar14 = FUN_00560920(&DAT_00b40968,piVar10);
        piStack_210 = (int *)iVar14;
        goto LAB_0053e646;
      }
    }
    puVar16 = (undefined4 *)(**(code **)(*piVar10 + 4))();
    if (puVar16 != (undefined4 *)0x0) {
LAB_0053e473:
      if (puVar16 != &DAT_00b40944) goto code_r0x0053e47e;
      iVar14 = FUN_00560920(&DAT_00b40944,piVar10);
      iStack_248 = iVar14;
LAB_0053e646:
      puVar9 = (undefined4 *)(*(int *)(iVar14 + 0x50) + 100);
      puVar16 = auStack_e8;
      for (iVar20 = 0xd; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar16 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar16 = puVar16 + 1;
      }
      puVar9 = (undefined4 *)(*(int *)(iVar14 + 0x10) + 100);
      puVar16 = auStack_150;
      for (iVar20 = 0xd; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar16 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar16 = puVar16 + 1;
      }
      FUN_00718a80(auStack_11c);
      puVar9 = (undefined4 *)FUN_0053d7a0(auStack_b4,auStack_e8);
      puVar16 = auStack_194;
      for (iVar20 = 0xd; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar16 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar16 = puVar16 + 1;
      }
      pfVar17 = (float *)FUN_007101f0(&fStack_244,&fStack_1f8);
      fStack_260 = *pfVar17;
      fStack_25c = pfVar17[1];
      fStack_258 = pfVar17[2];
      fStack_224 = fStack_258 * fStack_278 + fStack_168;
      fStack_230 = fStack_224;
      if (fStack_168 < fStack_224) {
        fStack_230 = fStack_168;
      }
      fStack_234 = *(float *)(iVar14 + 0x54);
      fStack_238 = *(float *)(iVar14 + 0x54);
      if (fStack_224 < fStack_168) {
        fStack_224 = fStack_168;
      }
      fStack_228 = *(float *)(iVar14 + 0x54);
      fStack_290 = *(float *)(iVar14 + 0x54);
LAB_0053e76f:
      fStack_234 = -fStack_234;
      fStack_238 = -fStack_238;
      goto LAB_0053e929;
    }
LAB_0053e485:
    cVar5 = FUN_00405650(&DAT_00b408c8,piVar10);
    if (cVar5 != '\0') {
      piVar10 = (int *)FUN_00560920(&DAT_00b408c8,piVar10);
      if ((short)piVar10[0x17] == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)piVar10[0x15];
      }
      puVar9 = (undefined4 *)(iVar14 + 100);
      puVar16 = auStack_74;
      for (iVar20 = 0xd; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar16 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar16 = puVar16 + 1;
      }
      piVar24 = param_1 + 0x19;
      piVar11 = aiStack_40;
      for (iVar14 = 0xd; iVar14 != 0; iVar14 = iVar14 + -1) {
        *piVar11 = *piVar24;
        piVar24 = piVar24 + 1;
        piVar11 = piVar11 + 1;
      }
      piStack_26c = piVar10;
      FUN_00718a80(auStack_b4);
      puVar9 = (undefined4 *)FUN_0053d7a0(auStack_150,auStack_74);
      puVar16 = auStack_194;
      for (iVar14 = 0xd; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar16 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar16 = puVar16 + 1;
      }
      pfVar17 = (float *)FUN_007101f0(&fStack_244,&fStack_1f8);
      fStack_260 = *pfVar17;
      fStack_25c = pfVar17[1];
      fStack_258 = pfVar17[2];
      if ((short)piVar10[0x17] == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)piVar10[0x15];
      }
      iVar14 = *(int *)(iVar14 + 0xb4);
      fStack_1b0 = *(float *)(iVar14 + 0xc);
      fStack_1ac = *(float *)(iVar14 + 0x10);
      uStack_1a8 = *(undefined4 *)(iVar14 + 0x14);
      fStack_1a4 = *(float *)(iVar14 + 0x18);
      fStack_224 = fStack_258 * fStack_278 + fStack_168;
      fStack_230 = fStack_224;
      if (fStack_168 < fStack_224) {
        fStack_230 = fStack_168;
      }
      fStack_238 = fStack_1b0 - fStack_1a4;
      fStack_234 = fStack_1ac - fStack_1a4;
      if (fStack_224 < fStack_168) {
        fStack_224 = fStack_168;
      }
      fStack_290 = fStack_1b0 + fStack_1a4;
      fStack_228 = fStack_1ac + fStack_1a4;
LAB_0053e929:
      fStack_298 = (float)local_270;
      fVar13 = fStack_278;
      uStack_254 = uStack_254 & 0xffff;
      uVar8 = (int)local_270 * uStack_254;
      fStack_22c = fStack_290;
      pfVar17 = (float *)FUN_00401f00(-(uint)((int)((ulonglong)uVar8 * 0xc >> 0x20) != 0) |
                                      (uint)((ulonglong)uVar8 * 0xc));
      fStack_264 = fVar13 * fStack_258;
      if (0 < (int)fStack_298) {
        dStack_200 = (double)(fStack_260 * fVar13);
        dStack_208 = (double)(fStack_25c * fVar13);
        iStack_1d0 = uStack_254 * 0xc;
        dStack_220 = (double)fStack_264;
        pfVar23 = pfVar17;
        iVar14 = iStack_248;
        do {
          piVar10 = local_274;
          if (local_274 == (int *)0x0) {
            if (iVar14 == 0) {
              if (piStack_210 == (int *)0x0) {
                (**(code **)(*piStack_26c + 0x60))(&fStack_284,auStack_1c8);
                iVar20 = _rand();
                fVar13 = (float)iVar20 / 32767.0;
                fStack_284 = (float)dStack_200 * fVar13 + fStack_284;
                fStack_280 = (float)dStack_208 * fVar13 + fStack_280;
                fStack_27c = fVar13 * (float)dStack_220 + fStack_27c;
                fStack_244 = fStack_284;
                fStack_240 = fStack_280;
                fStack_23c = fStack_27c;
              }
              else {
                fVar13 = *(float *)((int)piStack_210 + 0x54);
                iVar20 = _rand();
                fVar13 = ((float)iVar20 / 32767.0) * fVar13;
                iVar20 = _rand();
                fVar26 = ((float)iVar20 / 32767.0) * _DAT_00b3f9a0;
                iVar20 = _rand();
                fVar30 = (float10)fVar26;
                fVar29 = (float10)fcos(fVar30);
                fVar30 = (float10)fsin(fVar30);
                puStack_214 = (undefined4 *)(float)fVar29;
                fStack_278 = (float)fVar30;
                fVar30 = (float10)(((float)iVar20 / 32767.0) * _DAT_00b3f9a0);
                fVar29 = (float10)fcos(fVar30);
                fVar30 = (float10)fsin(fVar30);
                fStack_264 = (float)fVar29;
                fStack_218 = (float)fVar30;
                fStack_280 = fStack_218 * fVar13;
                fStack_284 = (float)puStack_214 * fStack_280;
                fStack_280 = fStack_280 * fStack_278;
                fStack_27c = fVar13 * fStack_264;
                pfVar19 = (float *)FUN_0053d4b0(&fStack_1b0,&fStack_284);
                fStack_284 = *pfVar19;
                fStack_280 = pfVar19[1];
                fStack_27c = pfVar19[2];
                iVar20 = _rand();
                fVar13 = (float)iVar20 / 32767.0;
                fStack_284 = (float)dStack_200 * fVar13 + fStack_284;
                fStack_280 = (float)dStack_208 * fVar13 + fStack_280;
                fStack_27c = fVar13 * (float)dStack_220 + fStack_27c;
                fStack_1bc = fStack_284;
                fStack_1b8 = fStack_280;
                fStack_1b4 = fStack_27c;
              }
            }
            else {
              fVar13 = *(float *)(iVar14 + 0x54);
              iVar20 = _rand();
              fVar13 = ((float)iVar20 / 32767.0) * fVar13;
              iVar20 = _rand();
              fVar30 = (float10)(((float)iVar20 / 32767.0) * _DAT_00b3f9a0);
              fVar29 = (float10)fcos(fVar30);
              fVar30 = (float10)fsin(fVar30);
              piStack_20c = (int *)(float)fVar29;
              puStack_250 = (undefined4 *)(float)fVar30;
              fStack_284 = (float)piStack_20c * fVar13;
              fStack_280 = fVar13 * (float)puStack_250;
              iVar20 = _rand();
              fStack_27c = ((float)iVar20 / 32767.0 - 0.5) * *(float *)(iVar14 + 0x58);
              pfVar19 = (float *)FUN_0053d4b0(&uStack_160,&fStack_284);
              fStack_284 = *pfVar19;
              fStack_280 = pfVar19[1];
              fStack_27c = pfVar19[2];
              iVar20 = _rand();
              fVar13 = (float)iVar20 / 32767.0;
              fStack_284 = (float)dStack_200 * fVar13 + fStack_284;
              fStack_280 = (float)dStack_208 * fVar13 + fStack_280;
              fStack_27c = fVar13 * (float)dStack_220 + fStack_27c;
              fStack_1a0 = fStack_284;
              fStack_19c = fStack_280;
              fStack_198 = fStack_27c;
            }
          }
          else {
            fVar13 = *(float *)((int)local_274 + 0x58);
            iVar20 = _rand();
            fVar26 = *(float *)((int)piVar10 + 0x54);
            iVar18 = _rand();
            fVar4 = fStack_164;
            fStack_284 = fVar26 * ((float)iVar18 / 32767.0 - 0.5);
            fStack_280 = ((float)iVar20 / 32767.0 - 0.5) * fVar13;
            fStack_27c = 0.0;
            pfVar19 = (float *)FUN_007101f0(auStack_80,&fStack_284);
            fStack_284 = *pfVar19 * fVar4 + fStack_170;
            fStack_280 = pfVar19[1] * fVar4 + fStack_16c;
            fStack_27c = fVar4 * pfVar19[2] + fStack_168;
            fStack_1e0 = fStack_284;
            fStack_1dc = fStack_280;
            fStack_1d8 = fStack_27c;
            iVar20 = _rand();
            fVar13 = (float)iVar20 / 32767.0;
            fStack_284 = (float)dStack_200 * fVar13 + fStack_284;
            fStack_280 = (float)dStack_208 * fVar13 + fStack_280;
            fStack_27c = fVar13 * (float)dStack_220 + fStack_27c;
            fStack_1ec = fStack_284;
            fStack_1e8 = fStack_280;
            fStack_1e4 = fStack_27c;
          }
          if (0 < (int)uStack_254) {
            *pfVar23 = fStack_284;
            pfVar23[1] = fStack_280;
            pfVar23[2] = fStack_27c;
            pfVar19 = pfVar23;
            pfVar27 = pfVar23 + 3;
            for (uVar21 = uStack_254 * 0xc - 0xc >> 2; iVar14 = iStack_248, uVar21 != 0;
                uVar21 = uVar21 - 1) {
              *pfVar27 = *pfVar19;
              pfVar19 = pfVar19 + 1;
              pfVar27 = pfVar27 + 1;
            }
          }
          pfVar23 = (float *)((int)pfVar23 + iStack_1d0);
          fStack_298 = (float)((int)fStack_298 + -1);
        } while (fStack_298 != 0.0);
      }
      iVar14 = FUN_00401f00(0x2c);
      iStack_4 = 4;
      if (iVar14 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = FUN_0053d930(uVar8,1,1);
      }
      iStack_4 = 0xffffffff;
      FUN_007263b0(1);
      FUN_007260b0(0,pfVar17,uVar8 * 0xc,1);
      FUN_00401f20(pfVar17);
      FUN_007262a0(0,0,0,3,uVar8,0xc,0xc);
      puVar9 = puStack_24c;
      FUN_006c61e0(uVar15);
      iVar14 = puVar9[0x2d];
      uStack_15c = *(undefined4 *)(iVar14 + 0x10);
      uStack_160 = *(undefined4 *)(iVar14 + 0xc);
      fStack_154 = (fStack_22c - fStack_238) * 0.5;
      uStack_158 = *(undefined4 *)(iVar14 + 0x14);
      fStack_244 = 0.0;
      fStack_240 = 0.0;
      fStack_23c = 0.0;
      *(undefined4 *)(iVar14 + 0xc) = 0;
      *(undefined4 *)(iVar14 + 0x10) = 0;
      *(undefined4 *)(iVar14 + 0x14) = 0;
      *(float *)(iVar14 + 0x18) = fStack_154;
      bVar6 = 1;
      if (((int *)param_1[7] != (int *)0x0) &&
         (puVar16 = (undefined4 *)(**(code **)(*(int *)param_1[7] + 4))(), puVar16 == &DAT_00b3fd4c)
         ) {
        bVar6 = *(byte *)(param_1[7] + 0xdc) & 7;
      }
      iVar14 = FUN_00401f00(0xac);
      iStack_4 = 5;
      if (iVar14 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = FUN_007efa80(local_270,iStack_1d4,&fStack_260,&fStack_238,&fStack_22c,
                              param_3 != '\0',bVar6);
      }
      iStack_4 = 0xffffffff;
      FUN_00405680(uVar15);
      iVar14 = FUN_00707530(6);
      if (iVar14 != 0) {
        uVar15 = FUN_00707530(6);
        FUN_00405680(uVar15);
      }
      iVar14 = FUN_00707530(0);
      if (iVar14 != 0) {
        uVar15 = FUN_00707530(0);
        FUN_00405680(uVar15);
      }
      cVar5 = FUN_007b8940(puVar9,0x1b,0,1);
      if (cVar5 != '\0') goto LAB_0053f1c9;
    }
    (**(code **)*puVar9)(1);
  }
  goto LAB_0053f1c7;
code_r0x0053e440:
  puVar16 = (undefined4 *)puVar16[1];
  if (puVar16 == (undefined4 *)0x0) goto LAB_0053e447;
  goto LAB_0053e435;
code_r0x0053e47e:
  puVar16 = (undefined4 *)puVar16[1];
  if (puVar16 == (undefined4 *)0x0) goto LAB_0053e485;
  goto LAB_0053e473;
LAB_0053dba6:
  local_274 = piVar10;
  if (uVar8 < (uint)param_1[0x34]) {
    puVar9 = (undefined4 *)param_1[0x32];
    uVar21 = 0;
    do {
      if (puVar9 == (undefined4 *)0x0) goto LAB_0053dbd4;
      puVar16 = puVar9 + 2;
      puVar9 = (undefined4 *)*puVar9;
      piVar11 = (int *)*puVar16;
      bVar28 = uVar21 != uVar8;
      uVar21 = uVar21 + 1;
    } while (bVar28);
  }
  else {
LAB_0053dbd4:
    piVar11 = (int *)0x0;
  }
  uVar8 = uVar8 + 1;
  if (piVar11 != (int *)0x0) {
    piVar10 = local_270;
    if (local_270 == (int *)0x0) {
      for (puVar9 = (undefined4 *)(**(code **)(*piVar11 + 4))();
          (piVar10 = local_270, puVar9 != (undefined4 *)0x0 &&
          (piVar10 = piVar11, puVar9 != &DAT_00b40a28)); puVar9 = (undefined4 *)puVar9[1]) {
      }
    }
    local_270 = piVar10;
    piVar10 = local_274;
    if (local_274 == (int *)0x0) {
      for (puVar9 = (undefined4 *)(**(code **)(*piVar11 + 4))();
          (piVar10 = local_274, puVar9 != (undefined4 *)0x0 &&
          (piVar10 = piVar11, puVar9 != &DAT_00b40aa4)); puVar9 = (undefined4 *)puVar9[1]) {
      }
    }
    goto LAB_0053dba6;
  }
  if (local_270 != (int *)0x0) {
    if (*(short *)((int)local_270 + 0x22) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined4 *)local_270[7];
    }
    iVar14 = FUN_00560920(&DAT_00b3fab0,uVar15);
    if (iVar14 != 0) {
      uVar15 = FUN_00405790(0);
      piVar24 = (int *)FUN_00560920(&DAT_00b3fd5c,uVar15);
      local_1cc = piVar24;
    }
  }
  if (local_274 != (int *)0x0) {
    iStack_1d4 = local_274[6];
  }
  iVar14 = FUN_00560920(&DAT_00b3fd04,piVar24);
  if (iVar14 == 0) {
    iVar14 = FUN_00560920(&DAT_00b3fd2c,piVar24[0x2d]);
    puVar9 = *(undefined4 **)(iVar14 + 0x1c);
    uVar21 = (uint)*(ushort *)(iVar14 + 8);
    uVar8 = *(uint *)(iVar14 + 0x44);
    piVar10 = *(int **)(iVar14 + 0x28);
    iVar14 = *(int *)(iVar14 + 0x48);
    uVar7 = (ushort)(0xffff / (ulonglong)(longlong)(int)uVar21);
    if (uVar7 <= fStack_278._0_2_) {
      fStack_278 = (float)(uint)uVar7;
    }
    fVar13 = (float)((uint)fStack_278 & 0xffff);
    lVar1 = (ulonglong)((int)fVar13 * uVar21) * 0xc;
    local_270 = (int *)fVar13;
    uStack_254 = uVar21;
    puStack_250 = (undefined4 *)
                  FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    lVar1 = (ulonglong)((int)fVar13 * uVar21) * 8;
    piStack_210 = (int *)FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    piVar24 = (int *)(uVar8 & 0xffff);
    lVar1 = (ulonglong)(uint)((int)fVar13 * (int)piVar24) * 2;
    piStack_26c = piVar24;
    iVar20 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    puVar16 = (undefined4 *)0x0;
    puStack_24c = (undefined4 *)0x0;
    if (fVar13 != 0.0) {
      iStack_1d0 = uVar21 * 0xc;
      local_274 = piStack_210;
      iStack_248 = 0;
      fStack_218 = (float)local_270;
      puVar2 = puVar9;
      uVar8 = uVar21;
      piVar11 = piVar10;
      puStack_214 = puStack_250;
      piVar3 = piStack_210;
      puVar12 = puStack_250;
      do {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puStack_214 = *puVar2;
          puStack_214[1] = puVar2[1];
          puStack_214[2] = puVar2[2];
          *piVar3 = *piVar11;
          piVar3[1] = piVar11[1];
          puVar2 = puVar2 + 3;
          piVar11 = piVar11 + 2;
          puStack_214 = puStack_214 + 3;
          puVar16 = puStack_24c;
          piVar24 = piStack_26c;
          piVar3 = piVar3 + 2;
        }
        iVar18 = 0;
        if (0 < (int)piVar24) {
          do {
            *(short *)(iVar20 + (int)puVar16 * 2) =
                 *(short *)(iVar14 + iVar18 * 2) + (short)iStack_248;
            iVar18 = iVar18 + 1;
            puVar16 = (undefined4 *)((int)puVar16 + 1);
            puStack_24c = puVar16;
          } while (iVar18 < (int)piVar24);
        }
        local_274 = local_274 + uVar21 * 2;
        puStack_214 = puVar12 + uVar21 * 3;
        iStack_248 = iStack_248 + uVar21;
        fStack_218 = (float)((int)fStack_218 + -1);
        puVar2 = puVar9;
        uVar8 = uVar21;
        piVar11 = piVar10;
        piVar3 = local_274;
        puVar12 = puStack_214;
      } while (fStack_218 != 0.0);
    }
    fStack_264 = (float)iVar20;
    iVar14 = FUN_00401f00(0xc0);
    iStack_4 = 0;
    if (iVar14 == 0) {
      puStack_24c = (undefined4 *)0x0;
    }
    else {
      iVar14 = FUN_00401f00(0x5c);
      iStack_4._0_1_ = 1;
      if (iVar14 == 0) {
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        puStack_24c = (undefined4 *)FUN_00717570(0);
      }
      else {
        uVar15 = FUN_0072ab00((int)fStack_278 * uStack_254,puStack_250,0,0,piStack_210,1,0,
                              ((int)piVar24 / 3) * (int)fStack_278,iVar20,0,0);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        puStack_24c = (undefined4 *)FUN_00717570(uVar15);
      }
    }
    goto LAB_0053e272;
  }
LAB_0053f1c7:
  puVar9 = (undefined4 *)0x0;
LAB_0053f1c9:
  *unaff_FS_OFFSET = local_c;
  return puVar9;
}



void FUN_0053f1f0(char *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  undefined4 *unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [8];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)(in_ECX + 4);
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x88))(local_14,*(int *)(in_ECX + 4),uVar3);
    if (unaff_EBP != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(unaff_EBP + 1);
      if ((LVar4 == 0) && (unaff_EBP != (undefined4 *)0x0)) {
        (**(code **)*unaff_EBP)(1);
      }
    }
    FUN_0055e2a0(piVar1);
    FUN_006ff420("Last Precip Root");
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x84))(*(undefined4 *)(in_ECX + 8),1);
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar1 = 0;
    }
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    piVar5 = (int *)FUN_00439eb0(param_1,0,0,1);
    if (piVar5 != (int *)0x0) {
      __stricmp(param_1,"Sky\\Snow.NIF");
      uVar3 = 0;
      (**(code **)(*piVar5 + 0x60))(0,0);
      iVar6 = FUN_00401f00(0xdc);
      local_c = 0;
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_0070b780(0);
      }
      local_c = -1;
      FUN_0075fa90(uVar7);
      *(undefined4 *)(in_ECX + 0x10) = 0;
      if ((short)piVar5[0x2e] != 0) {
        do {
          if (uVar3 < *(ushort *)((int)piVar5 + 0xb6)) {
            uVar7 = *(undefined4 *)(piVar5[0x2c] + uVar3 * 4);
          }
          else {
            uVar7 = 0;
          }
          iVar6 = FUN_00560920(&DAT_00b3fab0,uVar7);
          if (iVar6 != 0) {
            if (*(short *)(iVar6 + 0xb6) == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = **(undefined4 **)(iVar6 + 0xb0);
            }
            iVar6 = FUN_00560920(&DAT_00b40864,uVar7);
            if (iVar6 != 0) {
              iVar6 = FUN_0053da20(iVar6,*(int *)(in_ECX + 0xc) + 100,uStack_4);
              if (iVar6 != 0) {
                (**(code **)(*(int *)*piVar1 + 0x84))(iVar6,1);
              }
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(piVar5 + 0x2e));
      }
      FUN_006ff420("Current Precip Root");
      (**(code **)(**(int **)(in_ECX + 0xc) + 0x84))(*piVar1,1);
      FUN_00707610();
      FUN_00707980();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0053f420(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  LONG LVar8;
  int in_ECX;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  piVar3 = param_1;
  if (*(int *)(in_ECX + 8) == 0) {
    if (param_1 != (int *)0x0) {
      if (*(ushort *)(param_1 + 2) == 0xffff) {
        pcVar5 = (char *)param_1[1];
        pcVar1 = pcVar5 + 1;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        uVar6 = (int)pcVar5 - (int)pcVar1;
      }
      else {
        uVar6 = (uint)*(ushort *)(param_1 + 2);
      }
      if (uVar6 != 0) {
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = (**(code **)(*param_1 + 0x14))(0,0,0,0,0,0);
        FUN_0043b420(&param_1,uVar7,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
        piVar4 = param_1;
        if (((param_1 != (int *)0x0) && (LVar8 = InterlockedDecrement(param_1 + 2), LVar8 == 0)) &&
           (piVar4 != (int *)0x0)) {
          (**(code **)*piVar4)(1);
        }
        *(int **)(in_ECX + 0x14) = piVar3;
        return;
      }
    }
    FUN_0053f1f0(0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053f4c0(float param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  ulonglong uVar5;
  short sVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  LONG LVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  int *piVar17;
  int in_ECX;
  float fVar18;
  float10 fVar19;
  undefined2 uVar20;
  undefined4 *local_18;
  float local_14;
  float local_10;
  float local_c;
  double dStack_8;
  
  iVar9 = FUN_00542ea0();
  if ((*(int *)(iVar9 + 0xdc) == 1) || (bVar4 = false, *(int *)(iVar9 + 0xdc) == 0)) {
    bVar4 = true;
  }
  iVar16 = *(int *)(iVar9 + 0x10);
  local_10 = *(float *)(iVar9 + 0xd8);
  if (iVar16 == 0) {
    local_14 = 0.0;
  }
  else {
    local_14 = (float)*(byte *)(iVar16 + 0x4e) * 0.003921569 * 0.999 + 0.0;
  }
  if (*(int *)(iVar9 + 0x14) == 0) {
    local_c = 0.001;
  }
  else {
    local_c = (float)*(byte *)(*(int *)(iVar9 + 0x14) + 0x4f) * 0.003921569 * 0.999 + 0.001;
  }
  cVar7 = FUN_0045a500();
  if (cVar7 == '\0') {
    iVar2 = *(int *)(in_ECX + 0x14);
    if (iVar2 == 0) {
      if (((*(byte *)(iVar9 + 0xfc) & 3) == 0) || (iVar16 == 0)) goto LAB_0053f74e;
    }
    else {
      piVar17 = (int *)(iVar16 + 0x30);
      if (piVar17 != (int *)0x0) {
        if (*(ushort *)(iVar2 + 8) == 0xffff) {
          pcVar12 = *(char **)(iVar2 + 4);
          pcVar15 = pcVar12 + 1;
          do {
            cVar7 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar7 != '\0');
          uVar13 = (int)pcVar12 - (int)pcVar15;
        }
        else {
          uVar13 = (uint)*(ushort *)(iVar2 + 8);
        }
        if (*(ushort *)(iVar16 + 0x38) == 0xffff) {
          pcVar12 = *(char **)(iVar16 + 0x34);
          pcVar15 = pcVar12 + 1;
          do {
            cVar7 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar7 != '\0');
          uVar14 = (int)pcVar12 - (int)pcVar15;
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0x38);
        }
        if (uVar13 == uVar14) {
          piVar3 = *(int **)(in_ECX + 0x14);
          pcVar15 = (char *)(**(code **)(*piVar17 + 0x14))();
          pcVar12 = (char *)(**(code **)(*piVar3 + 0x14))();
          iVar9 = __stricmp(pcVar12,pcVar15);
          if (iVar9 == 0) {
            uVar11 = (**(code **)(*piVar17 + 0x14))();
            iVar9 = ModelLoader_IsModelLoaded(uVar11);
            if (iVar9 != 0) {
              *(undefined4 *)(in_ECX + 0x14) = 0;
              FUN_0053f1f0(uVar11);
              FUN_004384e0(uVar11,1,1);
            }
            goto LAB_0053f74e;
          }
        }
      }
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
    FUN_0053f420(iVar16 + 0x30);
  }
  else {
    if (*(int *)(in_ECX + 8) != 0) {
      (**(code **)(**(int **)(in_ECX + 0xc) + 0x88))(&local_18,*(int *)(in_ECX + 8));
      puVar1 = local_18;
      if (((local_18 != (undefined4 *)0x0) &&
          (LVar10 = InterlockedDecrement(local_18 + 1), LVar10 == 0)) &&
         (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      puVar1 = *(undefined4 **)(in_ECX + 8);
      if (puVar1 != (undefined4 *)0x0) {
        LVar10 = InterlockedDecrement(puVar1 + 1);
        if ((LVar10 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(in_ECX + 8) = 0;
      }
    }
    if (*(int *)(in_ECX + 4) != 0) {
      (**(code **)(**(int **)(in_ECX + 0xc) + 0x88))(&local_18,*(int *)(in_ECX + 4));
      puVar1 = local_18;
      if (((local_18 != (undefined4 *)0x0) &&
          (LVar10 = InterlockedDecrement(local_18 + 1), LVar10 == 0)) &&
         (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      puVar1 = *(undefined4 **)(in_ECX + 4);
      if (puVar1 != (undefined4 *)0x0) {
        LVar10 = InterlockedDecrement(puVar1 + 1);
        if ((LVar10 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(in_ECX + 4) = 0;
      }
    }
    if (*(int *)(iVar9 + 0x14) != 0) {
      uVar11 = (**(code **)(*(int *)(*(int *)(iVar9 + 0x14) + 0x30) + 0x14))();
      FUN_0053f1f0(uVar11);
    }
    if (*(int *)(iVar9 + 0x10) != 0) {
      uVar11 = (**(code **)(*(int *)(*(int *)(iVar9 + 0x10) + 0x30) + 0x14))();
      FUN_0053f1f0(uVar11);
    }
  }
LAB_0053f74e:
  if ((!NAN(local_10) && 1.0 < local_10 != (local_10 == 1.0)) && (*(int *)(in_ECX + 8) != 0)) {
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x88))(&local_18,*(int *)(in_ECX + 8));
    puVar1 = local_18;
    if ((local_18 != (undefined4 *)0x0) &&
       ((LVar10 = InterlockedDecrement(local_18 + 1), LVar10 == 0 && (puVar1 != (undefined4 *)0x0)))
       ) {
      (**(code **)*puVar1)(1);
    }
    puVar1 = *(undefined4 **)(in_ECX + 8);
    if (puVar1 != (undefined4 *)0x0) {
      LVar10 = InterlockedDecrement(puVar1 + 1);
      if ((LVar10 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 8) = 0;
    }
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if ((*(int *)(in_ECX + 4) != 0) || (*(int *)(in_ECX + 8) != 0)) {
    _DAT_00b2daec = _DAT_00b2daec + param_1;
    if ((DAT_00b333c4 != 0) &&
       ((iVar9 = FUN_006ecc80(), iVar9 != 0 &&
        (iVar9 = FUN_006ecc80(), (*(byte *)(iVar9 + 0x24) >> 1 & 1) != 0)))) {
      if (*(short *)(DAT_00b333cc + 0xb6) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = **(int **)(DAT_00b333cc + 0xb0);
      }
      dStack_8 = (double)*(float *)(iVar9 + 0x90);
      FUN_006ecc80();
      fVar19 = (float10)FUN_004cace0();
      if ((float10)dStack_8 < fVar19) {
        bVar4 = true;
      }
    }
    if (*(int *)(in_ECX + 4) != 0) {
      local_18 = (undefined4 *)0x0;
      if (local_14 < local_10) {
        local_18 = (undefined4 *)((local_10 - local_14) / (1.0 - local_14));
      }
      local_14 = 0.0;
      fVar18 = local_14;
      while( true ) {
        if ((uint)fVar18 < (uint)*(ushort *)(*(int *)(in_ECX + 4) + 0xb6)) {
          iVar9 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xb0) + (int)fVar18 * 4);
        }
        else {
          iVar9 = 0;
        }
        fVar18 = (float)((int)fVar18 + 1);
        if (iVar9 == 0) break;
        local_14 = fVar18;
        iVar16 = FUN_00707530(4);
        if (iVar16 != 0) {
          piVar17 = (int *)FUN_00707530(4);
          iVar16 = (**(code **)(*piVar17 + 0x54))();
          if ((iVar16 == 0xf) && (iVar16 = FUN_00707530(4), iVar16 != 0)) {
            piVar17 = *(int **)(iVar9 + 0xb4);
            uVar5 = (ulonglong)dStack_8 >> 0x20;
            uVar13 = (uint)ROUND((float)*(int *)(iVar16 + 0x6c) * (float)local_18);
            dStack_8._0_2_ = (short)uVar13;
            sVar6 = dStack_8._0_2_;
            iVar9 = (uVar13 & 0xffff) *
                    ((uint)((longlong)(ulonglong)*(ushort *)(piVar17 + 0x10) /
                           (longlong)*(int *)(iVar16 + 0x6c)) & 0xffff);
            dStack_8 = (double)CONCAT44((int)uVar5,uVar13);
            sVar8 = (**(code **)(*piVar17 + 0x5c))();
            if ((short)iVar9 != sVar8) {
              (**(code **)(*piVar17 + 0x58))(iVar9);
              if (sVar6 == 0) {
                uVar20 = 0;
              }
              else {
                uVar20 = (undefined2)piVar17[2];
              }
              (**(code **)(*piVar17 + 0x4c))(uVar20);
            }
            *(float *)(in_ECX + 0x10) =
                 (float)*(int *)(iVar16 + 0x6c) * (float)local_18 + *(float *)(in_ECX + 0x10);
            fVar18 = local_14;
          }
        }
      }
    }
    if (*(int *)(in_ECX + 8) != 0) {
      local_14 = 0.0;
      if (local_c <= local_10) {
        fVar18 = (float)0;
      }
      else {
        local_14 = 1.0 - local_10 / local_c;
        fVar18 = (float)0;
      }
      while( true ) {
        if ((uint)fVar18 < (uint)*(ushort *)(*(int *)(in_ECX + 8) + 0xb6)) {
          iVar9 = *(int *)(*(int *)(*(int *)(in_ECX + 8) + 0xb0) + (int)fVar18 * 4);
        }
        else {
          iVar9 = 0;
        }
        fVar18 = (float)((int)fVar18 + 1);
        if (iVar9 == 0) break;
        local_c = fVar18;
        iVar16 = FUN_00707530(4);
        if (iVar16 != 0) {
          piVar17 = (int *)FUN_00707530(4);
          iVar16 = (**(code **)(*piVar17 + 0x54))();
          if ((iVar16 == 0xf) && (iVar16 = FUN_00707530(4), fVar18 = local_c, iVar16 != 0)) {
            piVar17 = *(int **)(iVar9 + 0xb4);
            uVar5 = (ulonglong)dStack_8 >> 0x20;
            uVar13 = (uint)ROUND((float)*(int *)(iVar16 + 0x6c) * local_14);
            dStack_8._0_2_ = (short)uVar13;
            sVar6 = dStack_8._0_2_;
            iVar9 = (uVar13 & 0xffff) *
                    ((uint)((longlong)(ulonglong)*(ushort *)(piVar17 + 0x10) /
                           (longlong)*(int *)(iVar16 + 0x6c)) & 0xffff);
            dStack_8 = (double)CONCAT44((int)uVar5,uVar13);
            sVar8 = (**(code **)(*piVar17 + 0x5c))();
            if ((short)iVar9 != sVar8) {
              (**(code **)(*piVar17 + 0x58))(iVar9);
              if (sVar6 == 0) {
                uVar20 = 0;
              }
              else {
                uVar20 = (undefined2)piVar17[2];
              }
              (**(code **)(*piVar17 + 0x4c))(uVar20);
            }
            *(float *)(in_ECX + 0x10) =
                 (float)*(int *)(iVar16 + 0x6c) * local_14 + *(float *)(in_ECX + 0x10);
            fVar18 = local_c;
          }
        }
      }
    }
  }
  iVar9 = *(int *)(in_ECX + 4);
  if (iVar9 != 0) {
    if (bVar4) {
      *(ushort *)(iVar9 + 0x18) = *(ushort *)(iVar9 + 0x18) | 1;
    }
    else {
      *(ushort *)(iVar9 + 0x18) = *(ushort *)(iVar9 + 0x18) & 0xfffe;
    }
  }
  iVar9 = *(int *)(in_ECX + 8);
  if (iVar9 != 0) {
    if (bVar4) {
      *(ushort *)(iVar9 + 0x18) = *(ushort *)(iVar9 + 0x18) | 1;
      return;
    }
    *(ushort *)(iVar9 + 0x18) = *(ushort *)(iVar9 + 0x18) & 0xfffe;
  }
  return;
}



undefined4 FUN_0053fb50(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
    uVar1 = FUN_00943410();
    return uVar1;
  }
  return 0;
}



void FUN_0053fb60(char param_1)

{
  int in_ECX;
  
  if ((param_1 != '\0') && (*(int *)(in_ECX + 0x14) != 0)) {
    if ((*(uint *)(in_ECX + 0xfc) & 8) == 0) {
      *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(in_ECX + 0xd8);
      *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) | 8;
      return;
    }
    if (*(int *)(in_ECX + 0x14) != 0) {
      return;
    }
  }
  *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffff7;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  return;
}



void FUN_0053fbb0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) | 0x10;
    return;
  }
  *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xffffffef;
  return;
}



void FUN_0053fbe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00544160(param_1,param_2,param_3,param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0053fc10(void)

{
  int in_ECX;
  float10 fVar1;
  
  if ((*(uint *)(in_ECX + 0xfc) & 0x1000) != 0) {
    if (((*(uint *)(in_ECX + 0xfc) & 0x100) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
      _DAT_00b35238 = (float)*(byte *)(*(int *)(in_ECX + 0xc) + 0x50) / 6.0;
      *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffeff;
    }
    fVar1 = (float10)0;
    if (fVar1 <= (float10)_DAT_00b35238 - (float10)_DAT_00b36668) {
      fVar1 = (float10)FUN_00499140();
      fVar1 = fVar1 - (float10)_DAT_00b36668;
    }
    _DAT_00b36674 = (float)fVar1;
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xffffefff;
  }
  return (float10)_DAT_00b36674;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0053fc90(void)

{
  int in_ECX;
  float10 fVar1;
  
  if ((*(uint *)(in_ECX + 0xfc) & 0x2000) != 0) {
    if (((*(uint *)(in_ECX + 0xfc) & 0x800) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
      _DAT_00b35244 = (float)*(byte *)(*(int *)(in_ECX + 0xc) + 0x53) / 6.0;
      *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffff7ff;
    }
    fVar1 = (float10)23.989999771118164;
    if ((float10)_DAT_00b36668 + (float10)_DAT_00b35244 <= fVar1) {
      fVar1 = (float10)FUN_00499200();
      fVar1 = fVar1 + (float10)_DAT_00b36668;
    }
    _DAT_00b36678 = (float)fVar1;
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xffffdfff;
  }
  return (float10)_DAT_00b36678;
}



uint FUN_0053fd20(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  
  DVar1 = GetTickCount();
  uVar2 = *(uint *)(in_ECX + 0xc);
  uVar3 = uVar2 & 0x7fffffff;
  if (0x80000000 < uVar3) {
    uVar3 = 0x80000000;
  }
  if (uVar3 < DVar1) {
    uVar2 = (DVar1 + param_1 ^ uVar2) & 0x7fffffff ^ uVar2;
    *(uint *)(in_ECX + 0xc) = uVar2;
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return DVar1 & 0xffffff00;
}



void FUN_0053fd70(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *apuStack_14 [2];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ba4a6;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56e14;
  local_4 = 1;
  if ((undefined4 *)in_ECX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[8])(1,uVar4);
  }
  if ((undefined4 *)in_ECX[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[9])(1);
  }
  if ((undefined4 *)in_ECX[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xb])(1);
  }
  if ((undefined4 *)in_ECX[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[10])(1);
  }
  if ((undefined4 *)in_ECX[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xc])(1);
  }
  if ((undefined4 *)in_ECX[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xd])(1);
  }
  if ((undefined4 *)in_ECX[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xe])(1);
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  iVar2 = in_ECX[1];
  if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) &&
      ((**(code **)(**(int **)(iVar2 + 0x1c) + 0x88))(apuStack_14,iVar2),
      apuStack_14[0] != (undefined4 *)0x0)) &&
     ((LVar5 = InterlockedDecrement(apuStack_14[0] + 1), LVar5 == 0 &&
      (apuStack_14[0] != (undefined4 *)0x0)))) {
    (**(code **)*apuStack_14[0])(1);
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  for (piVar3 = (int *)in_ECX[0x38]; (piVar3 != (int *)0x0 && ((int *)*piVar3 != (int *)0x0));
      piVar3 = (int *)piVar3[1]) {
    iVar2 = *(int *)*piVar3;
    if (iVar2 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar2);
    }
    FUN_00401f20(*piVar3);
  }
  puVar1 = (undefined4 *)in_ECX[0x38];
  iVar2 = puVar1[1];
  while (iVar2 != 0) {
    iVar2 = *(int *)(puVar1[1] + 4);
    FUN_00401f20(puVar1[1]);
    puVar1[1] = iVar2;
  }
  *puVar1 = 0;
  FUN_00401f20(in_ECX[0x38]);
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = local_4 & 0xffffff00;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 0xffffffff;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053ff90(void)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  
  if ((*(int *)(in_ECX + 0x10) != 0) &&
     ((*(int *)(in_ECX + 0xdc) == 3 || (*(int *)(in_ECX + 0xdc) == 2)))) {
    fVar3 = (float)*(byte *)(*(int *)(in_ECX + 0x10) + 0x48) * 0.003921569 * 1.0 + 0.0;
    *(float *)(in_ECX + 0xc0) = fVar3;
    if (*(int *)(in_ECX + 0x14) != 0) {
      fVar3 = fVar3 * *(float *)(in_ECX + 0xd8);
      *(float *)(in_ECX + 0xc0) = fVar3;
      *(float *)(in_ECX + 0xc0) =
           fVar3 + ((float)*(byte *)(*(int *)(in_ECX + 0x14) + 0x48) * 0.003921569 * 1.0 + 0.0) *
                   (1.0 - *(float *)(in_ECX + 0xd8));
    }
    _DAT_00b430cc = DAT_00b27104;
    _DAT_00b430d0 = DAT_00b27108;
    _DAT_00b2c670 = *(undefined4 *)(in_ECX + 0xc0);
    if (DAT_00b42d78 == (code *)0x0) {
      fVar1 = (float10)0;
    }
    else {
      fVar1 = (float10)(*DAT_00b42d78)(0,1);
    }
    fVar3 = ((float)fVar1 / 3600.0) * 6.28318 * 15.0;
    fVar1 = (float10)FUN_00986300(fVar3);
    fVar2 = (float10)FUN_00986000(fVar3,fVar3 * 0.7);
    DAT_00b44efc = (float)fVar2 * 15.0;
    DAT_00b44ef8 = (float)fVar1 * 15.0;
  }
  return;
}


