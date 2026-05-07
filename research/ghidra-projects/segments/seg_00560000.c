
void FUN_00560110(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *puVar3;
  
  if (DAT_00b39e04 == 0) {
    FUN_0055f750(0);
  }
  if (*(int *)(DAT_00b39e04 + 4) != 0) {
    FUN_00977c50(3);
    if (DAT_00b39e04 == 0) {
      FUN_0055f750(0);
    }
    puVar1 = *(undefined4 **)(DAT_00b39e04 + 4);
    puVar3 = (undefined4 *)(DAT_00b39e04 + 4);
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *puVar3 = 0;
    }
    puVar1 = DAT_00b43108;
    if (DAT_00b43108 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(DAT_00b43108 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_00b43108 = (undefined4 *)0x0;
    }
    FUN_00440420("Data\\Textures\\Trees\\CanopyShadow.dds",0);
    FUN_00977c50(2);
  }
  return;
}



undefined2 FUN_005601e0(void)

{
  undefined2 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    uVar1 = FUN_007871f0();
    return uVar1;
  }
  return 0;
}



undefined2 FUN_00560200(void)

{
  undefined2 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    uVar1 = FUN_00787200();
    return uVar1;
  }
  return 0;
}



void FUN_00560220(int *param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_ECX;
  code *pcVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined2 in_FPUControlWord;
  float10 fVar9;
  uint *puVar10;
  undefined4 uStack_15c;
  uint uStack_158;
  uint auStack_154 [2];
  float local_14c;
  float fStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined1 local_138 [52];
  float fStack_104;
  char cStack_c8;
  float fStack_c4;
  int iStack_c0;
  char cStack_8c;
  float fStack_88;
  int iStack_84;
  char cStack_48;
  float fStack_3c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bcf8b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffe94;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007879a0(uVar4);
  iVar8 = 0;
  local_4 = 0;
  local_14c = 0.0;
  if ((((param_1 != (int *)0x0) && (iVar5 = (**(code **)(*param_1 + 0x9c))(), iVar5 != 0)) &&
      (*(int *)(in_ECX + 0xc) != 0)) &&
     ((DAT_00b125e8 != '\0' && (iVar5 = FUN_0055f7e0(1), *(char *)(iVar5 + 0x20) != '\0')))) {
    iStack_13c = param_1[0x24];
    iStack_140 = param_1[0x23];
    iStack_144 = param_1[0x22];
    FUN_00787070(iStack_144,iStack_140,iStack_13c);
    iVar5 = FUN_0055f7e0(1);
    if (*(char *)(iVar5 + 0x23) == '\0') {
      FUN_0078bfb0();
      fVar9 = (float10)FUN_007871a0();
    }
    else {
      FUN_0078c110(0x3f800000);
      fVar9 = (float10)1;
    }
    fStack_148 = (float)fVar9;
    FUN_00787dc0(local_138,fStack_148);
    uVar4 = auStack_154[0];
    auStack_154[0] = auStack_154[0] & 0xffffff00;
    if (cStack_48 != '\0') {
      uStack_15c = CONCAT22(in_FPUControlWord,(undefined2)uStack_15c);
      auStack_154[0] = CONCAT31(SUB43(uVar4,1),1);
      uStack_158 = (uint)ROUND(fStack_3c);
      (**(code **)(*param_1 + 0xd8))(uStack_158 & 0xff);
    }
    (**(code **)(*param_1 + 0xcc))(auStack_154[0]);
    if (0.0 < local_14c) {
      uStack_158 = uStack_158 & 0xffffff00;
      sVar2 = FUN_005601e0();
      if (0 < sVar2) {
        fVar9 = (float10)FUN_007871a0();
        sVar3 = FUN_00787c10((float)fVar9);
        in_ECX = auStack_154[0];
        if (0 < sVar2) {
          do {
            if (sVar3 == (short)iVar8) {
              pcVar7 = *(code **)(*param_1 + 0xd0);
              uStack_158 = CONCAT31(uStack_158._1_3_,1);
              uStack_15c = (uint)ROUND(fStack_104);
              uVar4 = uStack_15c & 0xff;
            }
            else {
              pcVar7 = *(code **)(*param_1 + 0xd0);
              uVar4 = 0xff;
            }
            (*pcVar7)(iVar8,uVar4);
            iVar8 = iVar8 + 1;
            in_ECX = auStack_154[0];
          } while ((short)iVar8 < sVar2);
        }
      }
      (**(code **)(*param_1 + 0xc4))(uStack_158);
      cVar1 = FUN_00506fd0();
      if (cVar1 == '\0') {
        uStack_15c = 0;
      }
      else {
        uStack_15c = uStack_15c & 0xffffff00;
        if ((*(int *)(in_ECX + 0xc) != 0) && (sVar2 = FUN_00787200(), 0 < sVar2)) {
          if (((cStack_c8 != '\0') || (cStack_8c != '\0')) && (iVar8 = 0, 0 < sVar2)) {
            iVar5 = 0;
            do {
              if ((cStack_c8 == '\0') || (iStack_c0 != iVar5)) {
                if ((cStack_8c == '\0') || (iStack_84 != iVar5)) {
                  pcVar7 = *(code **)(*param_1 + 0xd4);
                  uVar4 = 0xff;
                }
                else {
                  pcVar7 = *(code **)(*param_1 + 0xd4);
                  uStack_15c = CONCAT31(uStack_15c._1_3_,1);
                  uVar4 = (int)ROUND(fStack_88) & 0xff;
                }
              }
              else {
                pcVar7 = *(code **)(*param_1 + 0xd4);
                uStack_15c = CONCAT31(uStack_15c._1_3_,1);
                uVar4 = (int)ROUND(fStack_c4) & 0xff;
              }
              (*pcVar7)(iVar8,uVar4);
              iVar8 = iVar8 + 1;
              iVar5 = iVar5 + 1;
            } while ((short)iVar8 < sVar2);
          }
          if (*(int *)(in_ECX + 0x20) != 0) {
            iVar8 = FUN_00787050();
            if (iVar8 == 0) {
              puVar10 = auStack_154;
            }
            else {
              puVar10 = auStack_154;
              FUN_00787050(puVar10);
            }
            uVar6 = FUN_0078c280(puVar10);
            FUN_007f18a0(uVar6,auStack_154[0]);
          }
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xc4))(0);
      uStack_15c = 0;
    }
    (**(code **)(*param_1 + 200))(uStack_15c);
  }
  local_4 = 0xffffffff;
  FUN_00787b20();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00560600(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float fStack_140;
  float fStack_13c;
  int local_138;
  float fStack_134;
  undefined1 auStack_130 [4];
  uint uStack_12c;
  char cStack_115;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bcfc9;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_140;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffeb0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_138 = param_1;
  if (param_1 != 0) {
    piVar9 = (int *)(param_1 + 0x24);
    iVar5 = (**(code **)(*(int *)(param_1 + 0x24) + 0x14))(uVar4);
    if (iVar5 != 0) {
      pcVar6 = (char *)(**(code **)(*piVar9 + 0x14))();
      if ((*pcVar6 != '\0') && (in_ECX[2] == 0)) {
        builtin_strncpy(acStack_114,"Tree",4);
        acStack_114[4] = 's';
        acStack_114[5] = '\0';
        pcVar7 = (char *)(**(code **)(*piVar9 + 0x14))();
        pcVar6 = pcVar7;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        pcVar11 = &cStack_115;
        do {
          pcVar10 = pcVar11 + 1;
          pcVar11 = pcVar11 + 1;
        } while (*pcVar10 != '\0');
        pcVar10 = pcVar7;
        for (uVar4 = (uint)((int)pcVar6 - (int)pcVar7) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar4 = (int)pcVar6 - (int)pcVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        fStack_13c = (float)FUN_00401f00(0xa0);
        uStack_4 = 0;
        if (fStack_13c == 0.0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0078d6a0();
        }
        uStack_4 = 0xffffffff;
        cVar3 = FUN_0078e310(acStack_114);
        if (cVar3 == '\0') {
          if (iVar5 != 0) {
            FUN_0078c9b0();
            FUN_00401f20(iVar5);
          }
        }
        else {
          FUN_00786fa0();
          uStack_4 = 1;
          FUN_0078a890(auStack_130);
          if (uStack_12c < 4) {
            FUN_0078b700(2);
          }
          else {
            FUN_0078b700(1);
            if (6 < uStack_12c) {
              uVar8 = (**(code **)(*piVar9 + 0x14))();
              FUN_004a7a60("Tree %s has too many leaf maps (greater than six).  Leaves may not display properly."
                           ,uVar8);
            }
          }
          FUN_007870d0(1);
          FUN_00787060(&fStack_13c,&fStack_134);
          fStack_140 = _DAT_00b39e18 * fStack_13c;
          FUN_0078b0e0(fStack_140,_DAT_00b39e18 * fStack_134);
          FUN_0078bbf0(0,0xbf800000,0xbf800000);
          FUN_0078be70(0,4);
          *(undefined4 *)(iVar5 + 0x18) = 1;
          FUN_0078b950(0);
          FUN_0078baa0(0);
          FUN_0078b820(0);
          FUN_0078b320(0);
          FUN_0078b560(0);
          FUN_0078b440(0);
          fStack_140 = _DAT_00b0760c * _DAT_00b39e08;
          FUN_007871d0(fStack_140,_DAT_00b0760c * _DAT_00b39e10);
          uStack_4 = 0xffffffff;
          FUN_00786fc0();
          iVar2 = local_138;
          pcVar1 = *(code **)(*in_ECX + 0xc);
          in_ECX[2] = 1;
          in_ECX[3] = iVar5;
          (*pcVar1)(local_138);
          cVar3 = FUN_0078cca0(0,param_2,1);
          if (cVar3 != '\0') {
            FUN_00789030();
            iVar5 = FUN_0078b220();
            in_ECX[0x12] = iVar5;
            fVar12 = (float10)FUN_00787140();
            in_ECX[0x14] = (int)(float)fVar12;
            fVar12 = (float10)FUN_00787120();
            in_ECX[0x15] = (int)(float)fVar12;
            (**(code **)(*in_ECX + 0x14))(iVar2);
            FUN_0078b0c0();
            FUN_0078c160();
            FUN_00789ec0();
            goto LAB_005608da;
          }
        }
        uVar8 = 0;
        goto LAB_005608dc;
      }
    }
  }
LAB_005608da:
  uVar8 = 1;
LAB_005608dc:
  *unaff_FS_OFFSET = local_c;
  return uVar8;
}



int * FUN_00560920(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar1 = (**(code **)(*param_2 + 4))();
  while( true ) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    if (iVar1 == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return param_2;
}



void FUN_00560960(void)

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
  puStack_8 = &LAB_009bd055;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a654d4;
  in_ECX[4] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  puVar1 = (undefined4 *)in_ECX[7];
  local_4 = 7;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[7] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[8];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[8] = 0;
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xd] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0xe];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xe] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xf] = 0;
  }
  in_ECX[0x12] = 1;
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 0x13) = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00560ac0(int *param_1)

{
  float fVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  LONG LVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float local_144;
  float fStack_140;
  undefined4 *local_13c;
  int *local_138;
  int local_134;
  char *pcStack_130;
  char cStack_115;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bd0ce;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_144;
  *unaff_FS_OFFSET = (int)&local_c;
  local_138 = param_1;
  local_13c = (undefined4 *)0x0;
  local_4 = 0;
  if (((param_1 != (int *)0x0) && (*(int *)(in_ECX + 0xc) != 0)) && (*(int *)(in_ECX + 8) != 2)) {
    local_144 = _DAT_00b12610;
    local_134 = in_ECX;
    if ((_DAT_00b12610 < 0.0) || (1.0 < _DAT_00b12610)) {
      fVar11 = (float10)(**(code **)(*param_1 + 0x14c))();
      local_144 = (float)fVar11;
    }
    if ((0.0 <= local_144) && (local_144 <= 1.0)) {
      FUN_007870e0();
    }
    local_144 = _DAT_00b12618;
    if ((_DAT_00b12618 < 0.0) || (1.0 < _DAT_00b12618)) {
      fVar11 = (float10)(**(code **)(*param_1 + 0x154))();
      local_144 = (float)fVar11;
    }
    if ((0.0 <= local_144) && (local_144 <= 1.0)) {
      FUN_00787100();
    }
    local_144 = _DAT_00b12608;
    fVar1 = _DAT_00b12608;
    if (_DAT_00b12608 < 0.0) {
      fVar11 = (float10)(**(code **)(*param_1 + 0x134))();
      fVar1 = (float)fVar11;
    }
    if (0.0 <= fVar1) {
      *(float *)(in_ECX + 0x44) = fVar1;
    }
    fStack_140 = _DAT_00b12620;
    local_144 = _DAT_00b12628;
    if ((((_DAT_00b12620 < 0.0) || (90.0 < _DAT_00b12620)) || (_DAT_00b12628 < 0.0)) ||
       ((90.0 < _DAT_00b12628 || (_DAT_00b12628 < _DAT_00b12620)))) {
      fVar11 = (float10)(**(code **)(*param_1 + 0x13c))();
      fStack_140 = (float)fVar11;
      fVar11 = (float10)(**(code **)(*param_1 + 0x144))();
      local_144 = (float)fVar11;
    }
    if (((0.0 <= fStack_140) && (fStack_140 < 90.0 != (fStack_140 == 90.0))) &&
       ((!NAN(local_144) && 0.0 < local_144 != (local_144 == 0.0) &&
        ((local_144 <= 90.0 && (fStack_140 <= local_144)))))) {
      FUN_00787160();
      FUN_00787180();
    }
    if (*(int *)(in_ECX + 0x34) == 0) {
      FUN_00786fa0();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0078a890();
      pcVar4 = "Textures\\Trees\\Branches\\";
      pcVar9 = acStack_114;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar9 = pcVar9 + 4;
      }
      *pcVar9 = *pcVar4;
      pcVar4 = pcStack_130;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      pcVar9 = &cStack_115;
      do {
        pcVar10 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
      } while (*pcVar10 != '\0');
      pcVar10 = pcStack_130;
      for (uVar8 = (uint)((int)pcVar4 - (int)pcStack_130) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar9 = pcVar9 + 4;
      }
      pcVar5 = acStack_114;
      for (uVar8 = (int)pcVar4 - (int)pcStack_130 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar9 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      }
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      pcVar5 = pcVar5 + (-5 - (int)&stack0xfffffea4);
      (&stack0xfffffea5)[(int)pcVar5] = 100;
      (&stack0xfffffea6)[(int)pcVar5] = 100;
      (&stack0xfffffea7)[(int)pcVar5] = 0x73;
      FUN_00442890(&fStack_140,acStack_114,1);
      local_4._0_1_ = 2;
      FUN_0055e2a0();
      local_4._0_1_ = 1;
      FUN_007016a0();
      if (local_13c != (undefined4 *)0x0) {
        fStack_140 = (float)FUN_00401f00();
        local_4._0_1_ = 3;
        if (fStack_140 != 0.0) {
          FUN_007043b0();
        }
        local_4._0_1_ = 1;
        FUN_0075fa90();
        FUN_004057b0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00786fc0();
      param_1 = local_138;
    }
    if ((*(int *)(in_ECX + 0x38) == 0) && (iVar7 = FUN_00449190(), in_ECX = local_134, iVar7 != 0))
    {
      pcVar4 = (char *)param_1[0x10];
      pcVar9 = "Textures\\Trees\\Leaves\\";
      pcVar10 = acStack_114;
      for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      *(undefined2 *)pcVar10 = *(undefined2 *)pcVar9;
      pcVar10[2] = pcVar9[2];
      pcVar9 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "";
        pcVar9 = pcVar4;
      }
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      pcVar10 = &cStack_115;
      do {
        pcVar5 = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
      } while (*pcVar5 != '\0');
      pcVar5 = pcVar9;
      for (uVar8 = (uint)((int)pcVar4 - (int)pcVar9) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = (int)pcVar4 - (int)pcVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_00442890(&fStack_140,acStack_114,1);
      local_4._0_1_ = 4;
      FUN_0055e2a0();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_007016a0();
      in_ECX = local_134;
    }
    if (*(int *)(in_ECX + 0x3c) == 0) {
      FUN_00786fa0();
      local_4._0_1_ = 5;
      FUN_004b9c40();
      FUN_00442890(&local_134,acStack_114,1);
      local_4._0_1_ = 6;
      FUN_0055e2a0();
      local_4._0_1_ = 5;
      FUN_007016a0();
      if (local_13c != (undefined4 *)0x0) {
        local_138 = (int *)FUN_00401f00();
        local_4._0_1_ = 7;
        if (local_138 != (int *)0x0) {
          FUN_007043b0();
        }
        local_4._0_1_ = 5;
        FUN_0075fa90();
        FUN_004057b0();
        FUN_00405870();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00786fc0();
    }
    puVar3 = local_13c;
    local_4 = 0xffffffff;
    if ((local_13c != (undefined4 *)0x0) &&
       (LVar6 = InterlockedDecrement(local_13c + 1), LVar6 == 0)) {
      (**(code **)*puVar3)();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00561030(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a3d604;
    *(undefined2 *)(puVar2 + 6) = 0xec;
    *(undefined1 *)((int)puVar2 + 0x1a) = 0;
  }
  *(ushort *)(puVar2 + 6) = *(ushort *)(puVar2 + 6) & 0xf3fe | 0x1200;
  *(undefined1 *)((int)puVar2 + 0x1a) = 0x54;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x005614ed) */
/* WARNING: Removing unreachable block (ram,0x005614fb) */

int * FUN_005610c0(float param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  uint local_20;
  int *local_1c;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bd129;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = 0;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) == 0) {
    local_1c = (int *)0x0;
  }
  else {
    if (64.0 < *(float *)(in_ECX + 0x50)) {
      if (param_1 == 1.0) {
        FUN_0075fa90(*(undefined4 *)(in_ECX + 0x40));
      }
      else {
        uVar5 = FUN_008afdc0(param_1 * *(float *)(in_ECX + 0x50),
                             *(float *)(in_ECX + 0x54) * param_1 * 0.5,uVar1);
        FUN_0075fa90(uVar5);
      }
    }
    iVar2 = FUN_00401f00(0xf0);
    local_4._0_1_ = 1;
    if (iVar2 == 0) {
      local_1c = (int *)0x0;
    }
    else {
      local_1c = (int *)FUN_005640e0(in_ECX,0);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (((*(int *)(in_ECX + 0x14) != 0) && (*(int *)(in_ECX + 0x24) != 0)) &&
       (*(int *)(in_ECX + 0x2c) != 0)) {
      if (*(int *)(in_ECX + 0xc) == 0) {
        local_20._0_2_ = 0;
      }
      else {
        local_20._0_2_ = FUN_007871f0();
      }
      iVar2 = FUN_007b4290(4);
      iVar3 = (**(code **)(*local_1c + 0xa0))();
      if ((iVar3 != 0) && (*(int *)(in_ECX + 0x34) != 0)) {
        FUN_00405680(*(int *)(in_ECX + 0x34));
      }
      iVar3 = 0;
      if ((ushort)local_20 != 0) {
        do {
          if (*(int *)(iVar6 + *(int *)(in_ECX + 0x14)) != 0) {
            iVar4 = FUN_00401f00(0xc0);
            local_4._0_1_ = 2;
            if (iVar4 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00719a20(*(undefined4 *)(iVar6 + *(int *)(in_ECX + 0x14)));
            }
            local_4 = (uint)local_4._1_3_ << 8;
            iVar4 = FUN_00561030();
            if (iVar4 != 0) {
              *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) & 0xfdff;
              FUN_00405680(iVar4);
            }
            if (*(int *)(iVar6 + *(int *)(in_ECX + 0x24)) != 0) {
              FUN_007e24c0();
              FUN_00405680(*(undefined4 *)(iVar6 + *(int *)(in_ECX + 0x24)));
            }
            if (*(int *)(in_ECX + 8) == 2) {
              iVar4 = *(int *)(iVar6 + *(int *)(in_ECX + 0x2c));
              if (iVar4 != 0) {
                FUN_00405680(iVar4);
              }
              FUN_004ec910(*(undefined4 *)(iVar2 + 4));
            }
            (**(code **)(*local_1c + 0xb8))(iVar3,uVar5);
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 4;
        } while ((ushort)iVar3 < (ushort)local_20);
      }
      if (*(int *)(in_ECX + 8) != 2) {
        uVar5 = (**(code **)(*local_1c + 0xa0))(4,1,1);
        FUN_007b8940(uVar5);
        iVar6 = 0;
        if ((ushort)local_20 != 0) {
          do {
            iVar2 = (**(code **)(*local_1c + 0xac))(iVar6);
            if (iVar2 != 0) {
              uVar5 = FUN_00707530(3);
              FUN_0075fa90(uVar5);
              (**(code **)(*DAT_00b3f928 + 0xb0))(iVar2,0,0,0);
            }
            iVar6 = iVar6 + 1;
          } while ((ushort)iVar6 < (ushort)local_20);
        }
      }
    }
    iVar6 = 0;
    if (((*(int *)(in_ECX + 0x18) != 0) && (*(int *)(in_ECX + 0x28) != 0)) &&
       (*(int *)(in_ECX + 0x30) != 0)) {
      if (*(int *)(in_ECX + 0xc) == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_00787200();
        local_20 = local_20 & 0xffff;
      }
      FUN_007b4290(6);
      if ((ushort)local_20 != 0) {
        iVar2 = 0;
        do {
          if (*(int *)(*(int *)(in_ECX + 0x18) + iVar2) != 0) {
            iVar3 = FUN_00401f00(0xc0);
            local_4._0_1_ = 3;
            if (iVar3 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00717570(*(undefined4 *)(*(int *)(in_ECX + 0x18) + iVar2));
            }
            local_4 = (uint)local_4._1_3_ << 8;
            iVar3 = FUN_00561030();
            if (iVar3 != 0) {
              FUN_00405680(iVar3);
            }
            if (*(int *)(*(int *)(in_ECX + 0x28) + iVar2) != 0) {
              FUN_007e24c0();
              FUN_00405680(*(undefined4 *)(*(int *)(in_ECX + 0x28) + iVar2));
            }
            iVar3 = *(int *)(*(int *)(in_ECX + 0x30) + iVar2);
            if (iVar3 != 0) {
              FUN_00405680(iVar3);
            }
            (**(code **)(*local_1c + 0xbc))(iVar6,uVar5);
            FUN_004ec910(*(undefined4 *)(local_20 + 4));
            (**(code **)(**(int **)(local_20 + 4) + 0x18))(uVar5);
            (**(code **)(*DAT_00b3f928 + 0xb0))(uVar5,0,0,0);
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + 4;
        } while ((ushort)iVar6 < (ushort)local_20);
      }
    }
    (**(code **)(*local_1c + 0xa8))();
    if (*(int *)(in_ECX + 0x1c) != 0) {
      (**(code **)(*local_1c + 0xc0))(*(int *)(in_ECX + 0x1c));
    }
    FUN_00707610();
    FUN_00707980();
    FUN_007073a0(0);
    FUN_00565510(*(undefined4 *)(in_ECX + 0xc),param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return local_1c;
}



void FUN_00561520(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  pvVar1 = *(void **)(in_ECX + 0x14);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  pvVar1 = *(void **)(in_ECX + 0x18);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x20);
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  pvVar1 = *(void **)(in_ECX + 0x24);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  pvVar1 = *(void **)(in_ECX + 0x28);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  pvVar1 = *(void **)(in_ECX + 0x2c);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  pvVar1 = *(void **)(in_ECX + 0x30);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x34);
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x38);
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x38) = 0;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x3c);
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x40);
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x40) = 0;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00561b8d) */
/* WARNING: Removing unreachable block (ram,0x00561b91) */
/* WARNING: Removing unreachable block (ram,0x00561b9a) */
/* WARNING: Removing unreachable block (ram,0x00561ba0) */
/* WARNING: Removing unreachable block (ram,0x00561bb1) */
/* WARNING: Removing unreachable block (ram,0x00561bbc) */
/* WARNING: Removing unreachable block (ram,0x00561bc6) */
/* WARNING: Removing unreachable block (ram,0x00561cda) */
/* WARNING: Removing unreachable block (ram,0x00561d20) */
/* WARNING: Removing unreachable block (ram,0x00561e25) */
/* WARNING: Removing unreachable block (ram,0x00561e30) */
/* WARNING: Removing unreachable block (ram,0x00561ef6) */
/* WARNING: Removing unreachable block (ram,0x00561f3c) */
/* WARNING: Removing unreachable block (ram,0x00561f58) */
/* WARNING: Removing unreachable block (ram,0x00561fef) */

void FUN_005616f0(void)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  ushort uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  ushort *puVar10;
  void *pvVar11;
  void *_Dst;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  LONG LVar18;
  int in_ECX;
  uint uVar19;
  uint *puVar20;
  ushort uVar21;
  int *unaff_FS_OFFSET;
  undefined4 *local_248;
  undefined4 *local_240;
  undefined4 *local_23c;
  uint local_224;
  undefined1 local_1b0 [8];
  ushort *local_1a8;
  undefined4 *local_1a4;
  ushort local_1a0;
  int local_19c;
  float *local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_180;
  int local_17c;
  int local_4c;
  undefined1 *puStack_48;
  uint local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_009bd1d3;
  local_4c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xfffffd80;
  *unaff_FS_OFFSET = (int)&local_4c;
  FUN_007879a0(uVar7);
  local_44 = 0;
  if ((*(int *)(in_ECX + 0xc) != 0) && (*(int *)(in_ECX + 8) != 2)) {
    pvVar11 = *(void **)(in_ECX + 0x14);
    if (pvVar11 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar11,4,*(int *)((int)pvVar11 + -4),FUN_007016a0);
      FUN_00401f20();
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
    pvVar11 = *(void **)(in_ECX + 0x24);
    if (pvVar11 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar11,4,*(int *)((int)pvVar11 + -4),FUN_007016a0);
      FUN_00401f20();
      *(undefined4 *)(in_ECX + 0x24) = 0;
    }
    if (*(int *)(in_ECX + 0xc) != 0) {
      uVar6 = FUN_007871f0();
      uVar7 = (uint)uVar6;
      if ((((((uVar6 != 0) &&
             (FUN_0078c6f0(local_1b0,1,0xffffffff,0xffffffff,0xffffffff), local_18c != 0)) &&
            (local_198 != (float *)0x0)) && ((local_188 != 0 && (local_19c != 0)))) &&
          (local_180 != 0)) && ((local_17c != 0 && (uVar19 = (uint)local_1a0, local_1a0 != 0)))) {
        puVar8 = (uint *)FUN_00401f00();
        local_44._0_1_ = 1;
        if (puVar8 == (uint *)0x0) {
          puVar20 = (uint *)0x0;
        }
        else {
          puVar20 = puVar8 + 1;
          *puVar8 = uVar7;
          _eh_vector_constructor_iterator_(puVar20,4,uVar7,FUN_007c88a0,FUN_007016a0);
        }
        local_44._0_1_ = 0;
        *(uint **)(in_ECX + 0x14) = puVar20;
        puVar8 = (uint *)FUN_00401f00();
        local_44._0_1_ = 2;
        if (puVar8 == (uint *)0x0) {
          puVar20 = (uint *)0x0;
        }
        else {
          puVar20 = puVar8 + 1;
          *puVar8 = uVar7;
          _eh_vector_constructor_iterator_(puVar20,4,uVar7,FUN_007c88a0,FUN_007016a0);
        }
        local_44._0_1_ = 0;
        *(uint **)(in_ECX + 0x24) = puVar20;
        puVar8 = (uint *)FUN_00401f00();
        local_44._0_1_ = 3;
        if (puVar8 == (uint *)0x0) {
          puVar20 = (uint *)0x0;
        }
        else {
          puVar20 = puVar8 + 1;
          *puVar8 = uVar7;
          _eh_vector_constructor_iterator_(puVar20,4,uVar7,FUN_007c88a0,FUN_007016a0);
        }
        local_44 = (uint)local_44._1_3_ << 8;
        *(uint **)(in_ECX + 0x2c) = puVar20;
        if (uVar6 != 0) {
          do {
            FUN_0075fa90();
            FUN_0075fa90();
            FUN_0075fa90();
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if ((local_190 != 0) && (pfVar5 = local_198, local_194 != 0)) {
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            fVar1 = pfVar5[1];
            fVar2 = pfVar5[2];
            iVar9 = __isnan((double)*pfVar5);
            if (((iVar9 != 0) || (iVar9 = __isnan((double)fVar1), iVar9 != 0)) ||
               (iVar9 = __isnan((double)fVar2), iVar9 != 0)) {
              *pfVar5 = DAT_00b258e8;
              pfVar5[1] = DAT_00b258ec;
              pfVar5[2] = DAT_00b258f0;
            }
            pfVar5 = pfVar5 + 3;
          }
        }
        local_224 = 0;
        if (uVar6 != 0) {
          do {
            FUN_0078c6f0(local_1b0,1,local_224,0xffffffff,0xffffffff);
            if (((local_1a0 != 0) && (local_1a8 != (ushort *)0x0)) &&
               (local_1a4 != (undefined4 *)0x0)) {
              puVar10 = (ushort *)FUN_00401f00();
              uVar21 = *local_1a8;
              *puVar10 = uVar21;
              pvVar11 = (void *)FUN_00401f00((uint)uVar21 * 2);
              _memcpy(pvVar11,(void *)*local_1a4,(uint)*puVar10 * 2);
              _Dst = (void *)FUN_00401f00(local_1a0);
              _memset(_Dst,0,(uint)local_1a0);
              uVar7 = 0;
              if (*puVar10 != 0) {
                do {
                  *(undefined1 *)((uint)*(ushort *)((int)pvVar11 + uVar7 * 2) + (int)_Dst) = 1;
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *puVar10);
              }
              uVar21 = 0;
              local_44._0_1_ = 4;
              if (local_1a0 != 0) {
                do {
                  if (*(char *)((uint)uVar21 + (int)_Dst) != '\0') {
                    FUN_0042d800();
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar21 < local_1a0);
              }
              FUN_00401f20();
              uVar12 = FUN_00401f00();
              uVar13 = FUN_00401f00(0);
              uVar14 = FUN_00401f00(0);
              local_23c = (undefined4 *)0x0;
              if ((local_190 != 0) && (local_194 != 0)) {
                uVar15 = FUN_00401f00();
                uVar16 = FUN_00401f00(0);
                iVar9 = FUN_00401f00(0x14);
                local_44._0_1_ = 5;
                if (iVar9 == 0) {
                  local_23c = (undefined4 *)0x0;
                }
                else {
                  local_23c = (undefined4 *)FUN_007d7310();
                }
                local_44._0_1_ = 4;
                local_23c[3] = uVar15;
                local_23c[4] = uVar16;
              }
              uVar15 = FUN_00401f00();
              iVar9 = FUN_00401f00();
              local_44 = CONCAT31(local_44._1_3_,6);
              if (iVar9 == 0) {
                local_240 = (undefined4 *)0x0;
              }
              else {
                local_240 = (undefined4 *)FUN_007f2360();
              }
              if (local_240 != (undefined4 *)0x0) {
                InterlockedIncrement(local_240 + 1);
              }
              local_44._0_1_ = 7;
              local_240[2] = uVar15;
              *(undefined2 *)(local_240 + 3) = 0;
              iVar9 = FUN_00401f00();
              local_44._0_1_ = 8;
              if (iVar9 == 0) {
                puVar17 = (undefined4 *)0x0;
              }
              else {
                puVar17 = (undefined4 *)
                          FUN_00719cb0(0,uVar12,uVar13,0,uVar14,1,0,*local_1a8 - 2,1,puVar10,pvVar11
                                      );
              }
              iVar9 = *(int *)(in_ECX + 0x14);
              iVar4 = (local_224 & 0xffff) * 4;
              puVar3 = *(undefined4 **)(iVar9 + iVar4);
              local_44._0_1_ = 7;
              if (puVar3 != puVar17) {
                if (((puVar3 != (undefined4 *)0x0) &&
                    (LVar18 = InterlockedDecrement(puVar3 + 1), LVar18 == 0)) &&
                   (puVar3 != (undefined4 *)0x0)) {
                  (**(code **)*puVar3)();
                }
                *(undefined4 **)(iVar9 + iVar4) = puVar17;
                if (puVar17 != (undefined4 *)0x0) {
                  InterlockedIncrement(puVar17 + 1);
                }
              }
              iVar9 = *(int *)(iVar4 + *(int *)(in_ECX + 0x14));
              *(ushort *)(iVar9 + 0x2e) = *(ushort *)(iVar9 + 0x2e) & 0xfff | 0x4000;
              *(undefined1 *)(*(int *)(iVar4 + *(int *)(in_ECX + 0x14)) + 0x30) = 0x11;
              *(undefined1 *)(*(int *)(iVar4 + *(int *)(in_ECX + 0x14)) + 0x31) = 0x1f;
              iVar9 = FUN_00401f00();
              local_44._0_1_ = 9;
              if (iVar9 == 0) {
                local_248 = (undefined4 *)0x0;
              }
              else {
                local_248 = (undefined4 *)FUN_007f2030();
              }
              iVar9 = *(int *)(in_ECX + 0x24);
              puVar17 = *(undefined4 **)(iVar9 + iVar4);
              local_44 = CONCAT31(local_44._1_3_,7);
              if (puVar17 != local_248) {
                if (((puVar17 != (undefined4 *)0x0) &&
                    (LVar18 = InterlockedDecrement(puVar17 + 1), LVar18 == 0)) &&
                   (puVar17 != (undefined4 *)0x0)) {
                  (**(code **)*puVar17)();
                }
                *(undefined4 **)(iVar9 + iVar4) = local_248;
                if (local_248 != (undefined4 *)0x0) {
                  InterlockedIncrement(local_248 + 1);
                }
              }
              if (local_23c != (undefined4 *)0x0) {
                iVar9 = *(int *)(iVar4 + *(int *)(in_ECX + 0x24));
                puVar17 = *(undefined4 **)(iVar9 + 0xd4);
                if (puVar17 != local_23c) {
                  if (((puVar17 != (undefined4 *)0x0) &&
                      (LVar18 = InterlockedDecrement(puVar17 + 1), LVar18 == 0)) &&
                     (puVar17 != (undefined4 *)0x0)) {
                    (**(code **)*puVar17)();
                  }
                  *(undefined4 **)(iVar9 + 0xd4) = local_23c;
                  InterlockedIncrement(local_23c + 1);
                }
              }
              local_44 = CONCAT31(local_44._1_3_,4);
              LVar18 = InterlockedDecrement(local_240 + 1);
              if (LVar18 == 0) {
                (**(code **)*local_240)();
              }
              local_44 = local_44 & 0xffffff00;
              FUN_00401f20();
            }
            local_224 = local_224 + 1;
          } while ((ushort)local_224 < uVar6);
        }
        FUN_00788fd0();
        local_19c = 0;
        FUN_00789020();
        local_180 = 0;
        local_17c = 0;
      }
    }
  }
  local_44 = 0xffffffff;
  FUN_00787b20();
  *unaff_FS_OFFSET = local_4c;
  return;
}



void FUN_005622b0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  uint *puVar13;
  LONG LVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  ushort uVar23;
  int in_ECX;
  byte *pbVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  undefined4 *puVar30;
  int *unaff_FS_OFFSET;
  bool bVar31;
  float10 fVar32;
  undefined4 *local_1e4;
  uint local_1d8;
  int iStack_1d0;
  uint uStack_1c8;
  undefined4 *local_1c4;
  uint uStack_1bc;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b4;
  undefined4 *puStack_1ac;
  int iStack_1a8;
  uint uStack_1a4;
  float fStack_1a0;
  undefined2 uStack_19c;
  int iStack_198;
  undefined1 local_154 [4];
  uint local_150;
  undefined4 *local_14c;
  undefined1 local_138 [132];
  uint uStack_b4;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_9c;
  undefined4 *puStack_98;
  int iStack_8c;
  int iStack_88;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd283;
  local_c = *unaff_FS_OFFSET;
  uVar10 = DAT_00b30aac ^ (uint)&stack0xfffffe0c;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007879a0(uVar10);
  local_4 = 0;
  FUN_00786fa0();
  local_1c4 = (undefined4 *)0x0;
  local_4._0_1_ = 2;
  bVar7 = false;
  if (((*(int *)(in_ECX + 0xc) != 0) && (iVar11 = FUN_0078a740(), iVar11 != 0)) &&
     (*(int *)(in_ECX + 8) != 2)) {
    pvVar3 = *(void **)(in_ECX + 0x18);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,4,*(int *)((int)pvVar3 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar3 + -4);
      *(undefined4 *)(in_ECX + 0x18) = 0;
    }
    pvVar3 = *(void **)(in_ECX + 0x28);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,4,*(int *)((int)pvVar3 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar3 + -4);
      *(undefined4 *)(in_ECX + 0x28) = 0;
    }
    if (*(int *)(in_ECX + 0xc) != 0) {
      uVar8 = FUN_00787200();
      uVar10 = (uint)uVar8;
      if (uVar8 != 0) {
        FUN_0078a890(local_154);
        if ((ushort)local_150 != 0) {
          local_1d8 = local_150 & 0xffff;
          uVar28 = 1;
          local_1e4 = local_14c;
          do {
            if ((ushort)uVar28 < (ushort)local_150) {
              puVar15 = local_14c + (uVar28 & 0xffff);
              uVar27 = local_150 - uVar28 & 0xffff;
              do {
                pbVar24 = (byte *)*puVar15;
                pbVar12 = (byte *)*local_1e4;
                do {
                  bVar1 = *pbVar12;
                  bVar31 = bVar1 < *pbVar24;
                  if (bVar1 != *pbVar24) {
LAB_00562438:
                    iVar11 = (1 - (uint)bVar31) - (uint)(bVar31 != 0);
                    goto LAB_0056243d;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar12[1];
                  bVar31 = bVar1 < pbVar24[1];
                  if (bVar1 != pbVar24[1]) goto LAB_00562438;
                  pbVar12 = pbVar12 + 2;
                  pbVar24 = pbVar24 + 2;
                } while (bVar1 != 0);
                iVar11 = 0;
LAB_0056243d:
                if (iVar11 != 0) {
                  bVar7 = true;
                }
                puVar15 = puVar15 + 1;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
            local_1e4 = local_1e4 + 1;
            uVar28 = uVar28 + 1;
            local_1d8 = local_1d8 - 1;
          } while (local_1d8 != 0);
          puVar13 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar10 * 4) | uVar10 * 4 + 4);
          local_4._0_1_ = 3;
          if (puVar13 == (uint *)0x0) {
            puVar29 = (uint *)0x0;
          }
          else {
            puVar29 = puVar13 + 1;
            *puVar13 = uVar10;
            _eh_vector_constructor_iterator_(puVar29,4,uVar10,FUN_007c88a0,FUN_007016a0);
          }
          local_4._0_1_ = 2;
          *(uint **)(in_ECX + 0x18) = puVar29;
          puVar13 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar10 * 4) | uVar10 * 4 + 4);
          local_4._0_1_ = 4;
          if (puVar13 == (uint *)0x0) {
            puVar29 = (uint *)0x0;
          }
          else {
            puVar29 = puVar13 + 1;
            *puVar13 = uVar10;
            _eh_vector_constructor_iterator_(puVar29,4,uVar10,FUN_007c88a0,FUN_007016a0);
          }
          local_4._0_1_ = 2;
          *(uint **)(in_ECX + 0x28) = puVar29;
          puVar13 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar10 * 4) | uVar10 * 4 + 4);
          local_4._0_1_ = 5;
          if (puVar13 == (uint *)0x0) {
            puVar29 = (uint *)0x0;
          }
          else {
            puVar29 = puVar13 + 1;
            *puVar13 = uVar10;
            _eh_vector_constructor_iterator_(puVar29,4,uVar10,FUN_007c88a0,FUN_007016a0);
          }
          local_4._0_1_ = 2;
          *(uint **)(in_ECX + 0x30) = puVar29;
          if (uVar8 != 0) {
            iVar11 = 0;
            local_1d8 = uVar10;
            do {
              iVar16 = *(int *)(in_ECX + 0x18);
              puVar15 = *(undefined4 **)(iVar16 + iVar11);
              if (puVar15 != (undefined4 *)0x0) {
                LVar14 = InterlockedDecrement(puVar15 + 1);
                if ((LVar14 == 0) && (puVar15 != (undefined4 *)0x0)) {
                  (**(code **)*puVar15)(1);
                }
                *(undefined4 *)(iVar16 + iVar11) = 0;
              }
              iVar16 = *(int *)(in_ECX + 0x28);
              puVar15 = *(undefined4 **)(iVar16 + iVar11);
              if (puVar15 != (undefined4 *)0x0) {
                LVar14 = InterlockedDecrement(puVar15 + 1);
                if ((LVar14 == 0) && (puVar15 != (undefined4 *)0x0)) {
                  (**(code **)*puVar15)(1);
                }
                *(undefined4 *)(iVar16 + iVar11) = 0;
              }
              iVar16 = *(int *)(in_ECX + 0x30);
              puVar15 = *(undefined4 **)(iVar16 + iVar11);
              if (puVar15 != (undefined4 *)0x0) {
                LVar14 = InterlockedDecrement(puVar15 + 1);
                if ((LVar14 == 0) && (puVar15 != (undefined4 *)0x0)) {
                  (**(code **)*puVar15)(1);
                }
                *(undefined4 *)(iVar16 + iVar11) = 0;
              }
              iVar11 = iVar11 + 4;
              local_1d8 = local_1d8 - 1;
            } while (local_1d8 != 0);
          }
          iVar11 = FUN_00401f00(0x20);
          local_4._0_1_ = 6;
          if (iVar11 == 0) {
            puVar15 = (undefined4 *)0x0;
          }
          else {
            puVar15 = (undefined4 *)FUN_007f1810();
          }
          puVar30 = *(undefined4 **)(in_ECX + 0x20);
          local_4 = CONCAT31(local_4._1_3_,2);
          if (puVar30 != puVar15) {
            if (((puVar30 != (undefined4 *)0x0) &&
                (LVar14 = InterlockedDecrement(puVar30 + 1), LVar14 == 0)) &&
               (puVar30 != (undefined4 *)0x0)) {
              (**(code **)*puVar30)(1);
            }
            *(undefined4 **)(in_ECX + 0x20) = puVar15;
            if (puVar15 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar15 + 1);
            }
          }
          *(undefined4 *)(*(int *)(in_ECX + 0x20) + 0xc) = *(undefined4 *)(in_ECX + 0x44);
          if ((*(int *)(in_ECX + 0xc) != 0) &&
             (iVar11 = *(int *)(*(int *)(in_ECX + 0xc) + 0x10), iVar11 != 0)) {
            *(undefined4 *)(*(int *)(in_ECX + 0x20) + 0x10) = *(undefined4 *)(iVar11 + 0x3c);
            *(undefined4 *)(*(int *)(in_ECX + 0x20) + 0x14) =
                 *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x10) + 0x40);
            if (param_1 != (int *)0x0) {
              iVar11 = *(int *)(in_ECX + 0x20);
              fVar32 = (float10)(**(code **)(*param_1 + 0x164))();
              pcVar4 = *(code **)(*param_1 + 0x16c);
              *(float *)(iVar11 + 0x18) = (float)fVar32;
              iVar11 = *(int *)(in_ECX + 0x20);
              fVar32 = (float10)(*pcVar4)();
              *(float *)(iVar11 + 0x1c) = (float)fVar32;
            }
          }
          iStack_1a8 = 0;
          if (uVar8 != 0) {
            local_1d8 = 0;
            do {
              FUN_0078c6f0(local_138,4,0xffffffff,0xffffffff,iStack_1a8);
              puVar15 = puStack_98;
              iVar11 = iStack_a8;
              sVar9 = (short)uStack_b4;
              uVar10 = uStack_b4 * 4;
              uVar27 = uStack_b4 & 0xffff;
              uVar28 = uVar10 & 0xffff;
              if (sVar9 != 0) {
                iVar16 = FUN_00401f00(uVar28 * 0xc);
                iVar17 = FUN_00401f00(uVar28 * 0xc);
                iVar18 = FUN_00401f00(uVar28 * 8);
                iVar19 = FUN_00401f00(uVar28 * 0x10);
                iVar20 = FUN_00401f00(uVar27 * 0xc);
                if (sVar9 != 0) {
                  iStack_198 = 0;
                  uStack_1a4 = 0;
                  uVar23 = 0;
                  local_1e4 = (undefined4 *)0x0;
                  iVar11 = iVar11 - (int)puVar15;
                  uStack_1bc = uVar27;
                  do {
                    uVar25 = (uint)uVar23;
                    iVar21 = (uVar25 * 3 + 9) * 4;
                    *(undefined4 *)(iVar21 + iVar16) = *(undefined4 *)((int)puVar15 + iVar11);
                    *(undefined4 *)(iVar21 + 4 + iVar16) =
                         *(undefined4 *)((int)puVar15 + iVar11 + 4);
                    *(undefined4 *)(iVar21 + 8 + iVar16) =
                         *(undefined4 *)((int)puVar15 + iVar11 + 8);
                    iVar5 = (uVar25 * 3 + 6) * 4;
                    *(undefined4 *)(iVar5 + iVar16) = *(undefined4 *)((int)puVar15 + iVar11);
                    *(undefined4 *)(iVar5 + 4 + iVar16) = *(undefined4 *)((int)puVar15 + iVar11 + 4)
                    ;
                    *(undefined4 *)(iVar5 + 8 + iVar16) = *(undefined4 *)((int)puVar15 + iVar11 + 8)
                    ;
                    iVar6 = uVar25 * 0xc;
                    *(undefined4 *)(iVar6 + 0xc + iVar16) = *(undefined4 *)((int)puVar15 + iVar11);
                    *(undefined4 *)(iVar6 + 0x10 + iVar16) =
                         *(undefined4 *)((int)puVar15 + iVar11 + 4);
                    *(undefined4 *)(iVar6 + 0x14 + iVar16) =
                         *(undefined4 *)((int)puVar15 + iVar11 + 8);
                    *(undefined4 *)(iVar6 + iVar16) = *(undefined4 *)((int)puVar15 + iVar11);
                    *(undefined4 *)(iVar6 + 4 + iVar16) = *(undefined4 *)((int)puVar15 + iVar11 + 4)
                    ;
                    *(undefined4 *)(iVar6 + 8 + iVar16) = *(undefined4 *)((int)puVar15 + iVar11 + 8)
                    ;
                    *(undefined4 *)(iVar21 + iVar17) = *puVar15;
                    *(undefined4 *)(iVar21 + 4 + iVar17) = puVar15[1];
                    *(undefined4 *)(iVar21 + 8 + iVar17) = puVar15[2];
                    *(undefined4 *)(iVar5 + iVar17) = *puVar15;
                    *(undefined4 *)(iVar5 + 4 + iVar17) = puVar15[1];
                    *(undefined4 *)(iVar5 + 8 + iVar17) = puVar15[2];
                    *(undefined4 *)(iVar6 + 0xc + iVar17) = *puVar15;
                    *(undefined4 *)(iVar6 + 0x10 + iVar17) = puVar15[1];
                    *(undefined4 *)(iVar6 + 0x14 + iVar17) = puVar15[2];
                    *(undefined4 *)(iVar6 + iVar17) = *puVar15;
                    *(undefined4 *)(iVar6 + 4 + iVar17) = puVar15[1];
                    *(undefined4 *)(iVar6 + 8 + iVar17) = puVar15[2];
                    fStack_1a0 = (float)*(byte *)((int)local_1e4 + 1 + iStack_9c) / 255.0;
                    if (!NAN(fStack_1a0) && 1.0 < fStack_1a0 != (fStack_1a0 == 1.0)) {
                      fStack_1a0 = 0.99;
                    }
                    puStack_1b8 = *(undefined4 **)((int)local_1e4 + iStack_a4);
                    puStack_1b4 = (undefined4 *)(iVar18 + uVar25 * 8);
                    puStack_1ac = puStack_1b8 + 7;
                    uStack_1c8 = 2;
                    iStack_1d0 = 4;
                    puVar30 = (undefined4 *)(uVar25 * 0x10 + iVar19);
                    do {
                      if (bVar7) {
                        uVar22 = *puStack_1b8;
                        uVar26 = *puStack_1ac;
                      }
                      else {
                        uVar22 = *puStack_1b8;
                        uVar26 = puStack_1b8[1];
                      }
                      *puStack_1b4 = uVar22;
                      puStack_1b4[1] = uVar26;
                      bVar1 = *(byte *)(iStack_198 + iStack_ac);
                      uVar25 = uStack_1c8 & 0x80000003;
                      if ((int)uVar25 < 0) {
                        uVar25 = (uVar25 - 1 | 0xfffffffc) + 1;
                      }
                      uVar22 = *(undefined4 *)((int)local_1e4 + iStack_8c);
                      bVar2 = *(byte *)(iStack_198 + iStack_88);
                      iVar21 = FUN_0078a740();
                      uVar26 = *(undefined4 *)(iVar21 + local_1d8);
                      *puVar30 = uVar22;
                      puVar30[1] = (float)((uint)bVar2 * 4);
                      puStack_1ac = puStack_1ac + -2;
                      puStack_1b8 = puStack_1b8 + 2;
                      puStack_1b4 = puStack_1b4 + 2;
                      puVar30[2] = (float)(int)(uVar25 + (uint)bVar1 * 4) + fStack_1a0;
                      uStack_1c8 = uStack_1c8 + 1;
                      iStack_1d0 = iStack_1d0 + -1;
                      puVar30[3] = uVar26;
                      puVar30 = puVar30 + 4;
                    } while (iStack_1d0 != 0);
                    uVar25 = uStack_1a4 & 0xffff;
                    uStack_1a4 = uStack_1a4 + 6;
                    local_1e4 = (undefined4 *)((int)local_1e4 + 4);
                    *(ushort *)(iVar20 + uVar25 * 2) = uVar23 + 3;
                    *(ushort *)(iVar20 + 2 + uVar25 * 2) = uVar23 + 1;
                    *(ushort *)(iVar20 + 4 + uVar25 * 2) = uVar23 + 2;
                    *(ushort *)(iVar20 + 8 + uVar25 * 2) = uVar23 + 1;
                    *(ushort *)(iVar20 + 6 + uVar25 * 2) = uVar23;
                    *(ushort *)(iVar20 + 10 + uVar25 * 2) = uVar23 + 3;
                    iStack_198 = iStack_198 + 1;
                    uVar23 = uVar23 + 4;
                    puVar15 = puVar15 + 3;
                    uStack_1bc = uStack_1bc - 1;
                  } while (uStack_1bc != 0);
                }
                iVar11 = FUN_00401f00(0x58);
                local_4._0_1_ = 7;
                if (iVar11 == 0) {
                  local_1e4 = (undefined4 *)0x0;
                }
                else {
                  local_1e4 = (undefined4 *)
                              FUN_0071fb40(uVar28,iVar16,iVar17,0,iVar18,1,0,uVar27 * 2,iVar20);
                }
                iVar11 = *(int *)(in_ECX + 0x18);
                puVar15 = *(undefined4 **)(iVar11 + local_1d8);
                local_4._0_1_ = 2;
                if (puVar15 != local_1e4) {
                  if (((puVar15 != (undefined4 *)0x0) &&
                      (LVar14 = InterlockedDecrement(puVar15 + 1), LVar14 == 0)) &&
                     (puVar15 != (undefined4 *)0x0)) {
                    (**(code **)*puVar15)(1);
                  }
                  *(undefined4 **)(iVar11 + local_1d8) = local_1e4;
                  if (local_1e4 != (undefined4 *)0x0) {
                    InterlockedIncrement(local_1e4 + 1);
                  }
                }
                iVar11 = FUN_00401f00(0x10);
                local_4._0_1_ = 8;
                if (iVar11 == 0) {
                  puVar15 = (undefined4 *)0x0;
                }
                else {
                  puVar15 = (undefined4 *)FUN_007f2360();
                }
                local_4._0_1_ = 2;
                if (local_1c4 != puVar15) {
                  if ((local_1c4 != (undefined4 *)0x0) &&
                     (LVar14 = InterlockedDecrement(local_1c4 + 1), LVar14 == 0)) {
                    (**(code **)*local_1c4)(1);
                  }
                  local_1c4 = puVar15;
                  if (puVar15 != (undefined4 *)0x0) {
                    InterlockedIncrement(puVar15 + 1);
                  }
                }
                uStack_19c = (undefined2)uVar10;
                local_1c4[2] = iVar19;
                *(undefined2 *)(local_1c4 + 3) = uStack_19c;
                iVar11 = FUN_00401f00(0xb0);
                local_4._0_1_ = 9;
                if (iVar11 == 0) {
                  local_1e4 = (undefined4 *)0x0;
                }
                else {
                  local_1e4 = (undefined4 *)
                              FUN_007f1960(iStack_1a8,local_1c4,*(undefined4 *)(in_ECX + 0x20));
                }
                iVar11 = *(int *)(in_ECX + 0x28);
                puVar15 = *(undefined4 **)(iVar11 + local_1d8);
                local_4 = CONCAT31(local_4._1_3_,2);
                if (puVar15 != local_1e4) {
                  if (((puVar15 != (undefined4 *)0x0) &&
                      (LVar14 = InterlockedDecrement(puVar15 + 1), LVar14 == 0)) &&
                     (puVar15 != (undefined4 *)0x0)) {
                    (**(code **)*puVar15)(1);
                  }
                  *(undefined4 **)(iVar11 + local_1d8) = local_1e4;
                  if (local_1e4 != (undefined4 *)0x0) {
                    InterlockedIncrement(local_1e4 + 1);
                  }
                }
                (**(code **)(**(int **)(local_1d8 + *(int *)(in_ECX + 0x28)) + 0x7c))
                          (*(undefined4 *)(in_ECX + 0x38));
                (**(code **)(**(int **)(local_1d8 + *(int *)(in_ECX + 0x28)) + 0x58))(0);
                uVar22 = (**(code **)(**(int **)(local_1d8 + *(int *)(in_ECX + 0x28)) + 0x94))(0);
                FUN_006c61e0(uVar22);
                iVar11 = *(int *)(local_1d8 + *(int *)(in_ECX + 0x18));
                *(ushort *)(iVar11 + 0x2e) = *(ushort *)(iVar11 + 0x2e) & 0xfff | 0x4000;
                *(undefined1 *)(*(int *)(local_1d8 + *(int *)(in_ECX + 0x18)) + 0x30) = 0x11;
                *(undefined1 *)(*(int *)(local_1d8 + *(int *)(in_ECX + 0x18)) + 0x31) = 0x1f;
              }
              iStack_1a8 = iStack_1a8 + 1;
              local_1d8 = local_1d8 + 4;
            } while ((ushort)iStack_1a8 < uVar8);
          }
          FUN_00787210();
          local_4._0_1_ = 1;
          if ((local_1c4 != (undefined4 *)0x0) &&
             (LVar14 = InterlockedDecrement(local_1c4 + 1), LVar14 == 0)) {
            (**(code **)*local_1c4)(1);
          }
          goto LAB_00562dcd;
        }
      }
    }
    local_4._0_1_ = 1;
    FUN_007016a0();
  }
LAB_00562dcd:
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00786fc0();
  local_4 = 0xffffffff;
  FUN_00787b20();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00562e20(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  LONG LVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_170;
  undefined4 *local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150 [12];
  undefined1 local_144 [312];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd2df;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffe84;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007879a0(uVar2);
  local_168 = 0;
  local_164 = 0;
  local_4 = 0;
  local_160 = 0;
  local_15c = 0;
  local_158 = 0xbf800000;
  local_154 = 0;
  if (((*(int *)(in_ECX + 0xc) != 0) && (*(int *)(in_ECX + 8) != 2)) && (param_1 != 0)) {
    FUN_0078b690(local_144,local_150);
    FUN_0078d140(&local_168,&local_15c);
    FUN_0078c110(0);
    FUN_004ba3c0(&local_170,0);
    *(ushort *)((int)local_170 + 0x2e) = *(ushort *)((int)local_170 + 0x2e) & 0xfff | 0x4000;
    *(undefined1 *)(local_170 + 0xc) = 0x11;
    local_4._0_1_ = 1;
    *(undefined1 *)((int)local_170 + 0x31) = 0x1f;
    local_16c = (undefined4 *)FUN_00401f00(0xc0);
    local_4._0_1_ = 2;
    if (local_16c == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00717570(local_170);
    }
    piVar1 = (int *)(in_ECX + 0x1c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0075fa90(uVar3);
    FUN_006ff420(&DAT_00a451f0);
    puVar4 = (undefined4 *)FUN_00561030();
    local_16c = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    if (puVar4 != (undefined4 *)0x0) {
      FUN_00405680(puVar4);
    }
    if (*(int *)(in_ECX + 0x3c) != 0) {
      FUN_00405680(*(int *)(in_ECX + 0x3c));
    }
    FUN_007b8940(*piVar1,1,1,1);
    iVar5 = FUN_00707530(4);
    if (iVar5 != 0) {
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x402000;
      *(undefined4 *)(iVar5 + 0x24) = 0;
    }
    iVar5 = FUN_00560920(&DAT_00b44f90,*(undefined4 *)(*piVar1 + 0xbc));
    if (iVar5 != 0) {
      (**(code **)(*DAT_00b3f928 + 0xb0))(*piVar1,0,0,*(undefined4 *)(iVar5 + 0x7c));
      FUN_00769030();
    }
    FUN_0078d140(local_144,local_150);
    local_4._0_1_ = 1;
    if (puVar4 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar4 + 1);
      if (LVar6 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_170 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(local_170 + 1);
      if ((LVar6 == 0) && (local_170 != (undefined4 *)0x0)) {
        (**(code **)*local_170)(1);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00787b20();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005630a0(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int in_ECX;
  uint *puVar6;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  undefined1 auStack_2c [28];
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bd34a;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401020(&DAT_00a2f830,uVar2);
  if ((((unaff_retaddr != 0) && (*(int *)(unaff_retaddr + 0xc) != 0)) &&
      (*(int *)(unaff_retaddr + 8) != 2)) && (*(int *)(in_ECX + 8) == 0)) {
    iVar3 = FUN_0078dc10();
    *(int *)(in_ECX + 0xc) = iVar3;
    if (iVar3 != 0) {
      FUN_0075fa90(unaff_retaddr);
      *(undefined4 *)(in_ECX + 8) = 2;
      FUN_0055e2a0(unaff_retaddr + 0x34);
      FUN_0055e2a0(unaff_retaddr + 0x38);
      FUN_0055e2a0(unaff_retaddr + 0x3c);
      FUN_0055e2a0(unaff_retaddr + 0x20);
      *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(unaff_retaddr + 0x44);
      *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(unaff_retaddr + 0x48);
      *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(unaff_retaddr + 0x50);
      *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(unaff_retaddr + 0x54);
      if (*(int *)(unaff_retaddr + 0x40) == 0) {
        FUN_0075fa90(0);
      }
      else {
        FUN_00478c80(0x3f800000);
        puStack_8 = (undefined1 *)0x0;
        uVar4 = FUN_00700610(auStack_2c);
        FUN_0075fa90(uVar4);
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_004781a0();
      }
      uVar1 = FUN_005601e0();
      uVar2 = (uint)uVar1;
      if (((uVar1 != 0) && (*(int *)(unaff_retaddr + 0x14) != 0)) &&
         ((*(int *)(unaff_retaddr + 0x24) != 0 && (*(int *)(unaff_retaddr + 0x2c) != 0)))) {
        puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2 * 4) | uVar2 * 4 + 4);
        puStack_8 = (undefined1 *)0x1;
        if (puVar5 == (uint *)0x0) {
          puVar6 = (uint *)0x0;
        }
        else {
          puVar6 = puVar5 + 1;
          *puVar5 = uVar2;
          _eh_vector_constructor_iterator_(puVar6,4,uVar2,FUN_007c88a0,FUN_007016a0);
        }
        *(uint **)(in_ECX + 0x14) = puVar6;
        puStack_8 = (undefined1 *)0xffffffff;
        puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2 * 4) | uVar2 * 4 + 4);
        puStack_8 = (undefined1 *)0x2;
        if (puVar5 == (uint *)0x0) {
          puVar6 = (uint *)0x0;
        }
        else {
          puVar6 = puVar5 + 1;
          *puVar5 = uVar2;
          _eh_vector_constructor_iterator_(puVar6,4,uVar2,FUN_007c88a0,FUN_007016a0);
        }
        puStack_8 = (undefined1 *)0xffffffff;
        *(uint **)(in_ECX + 0x24) = puVar6;
        puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2 * 4) | uVar2 * 4 + 4);
        puStack_8 = (undefined1 *)0x3;
        if (puVar5 == (uint *)0x0) {
          puVar6 = (uint *)0x0;
        }
        else {
          puVar6 = puVar5 + 1;
          *puVar5 = uVar2;
          _eh_vector_constructor_iterator_(puVar6,4,uVar2,FUN_007c88a0,FUN_007016a0);
        }
        puStack_8 = (undefined1 *)0xffffffff;
        *(uint **)(in_ECX + 0x2c) = puVar6;
        if (uVar1 != 0) {
          iVar3 = 0;
          do {
            FUN_0055e2a0(*(int *)(unaff_retaddr + 0x14) + iVar3);
            if (*(int *)(iVar3 + *(int *)(unaff_retaddr + 0x24)) == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_00700900();
            }
            FUN_0075fa90(uVar4);
            FUN_0055e2a0(*(int *)(unaff_retaddr + 0x2c) + iVar3);
            iVar3 = iVar3 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
      }
      if (*(int *)(in_ECX + 0xc) != 0) {
        uVar1 = FUN_00787200();
        uVar2 = (uint)uVar1;
        if (((uVar1 != 0) && (*(int *)(unaff_retaddr + 0x18) != 0)) &&
           ((*(int *)(unaff_retaddr + 0x28) != 0 && (*(int *)(unaff_retaddr + 0x30) != 0)))) {
          puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2 * 4) | uVar2 * 4 + 4);
          puStack_8 = (undefined1 *)0x4;
          if (puVar5 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          else {
            puVar6 = puVar5 + 1;
            *puVar5 = uVar2;
            _eh_vector_constructor_iterator_(puVar6,4,uVar2,FUN_007c88a0,FUN_007016a0);
          }
          puStack_8 = (undefined1 *)0xffffffff;
          *(uint **)(in_ECX + 0x18) = puVar6;
          puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2 * 4) | uVar2 * 4 + 4);
          puStack_8 = (undefined1 *)0x5;
          if (puVar5 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          else {
            puVar6 = puVar5 + 1;
            *puVar5 = uVar2;
            _eh_vector_constructor_iterator_(puVar6,4,uVar2,FUN_007c88a0,FUN_007016a0);
          }
          puStack_8 = (undefined1 *)0xffffffff;
          *(uint **)(in_ECX + 0x28) = puVar6;
          puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2 * 4) | uVar2 * 4 + 4);
          puStack_8 = (undefined1 *)0x6;
          if (puVar5 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          else {
            puVar6 = puVar5 + 1;
            *puVar5 = uVar2;
            _eh_vector_constructor_iterator_(puVar6,4,uVar2,FUN_007c88a0,FUN_007016a0);
          }
          puStack_8 = (undefined1 *)0xffffffff;
          *(uint **)(in_ECX + 0x30) = puVar6;
          if (uVar1 != 0) {
            iVar3 = 0;
            do {
              FUN_0055e2a0(*(int *)(unaff_retaddr + 0x18) + iVar3);
              if (*(int *)(iVar3 + *(int *)(unaff_retaddr + 0x28)) == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = FUN_00700900();
              }
              FUN_0075fa90(uVar4);
              FUN_0055e2a0(*(int *)(unaff_retaddr + 0x30) + iVar3);
              iVar3 = iVar3 + 4;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
        }
      }
      if (*(int *)(unaff_retaddr + 0x1c) != 0) {
        uVar4 = FUN_00700900();
        FUN_0075fa90(uVar4);
      }
      FUN_00401040();
      uVar4 = 1;
      goto LAB_00563547;
    }
  }
  FUN_00401040();
  uVar4 = 0;
LAB_00563547:
  *unaff_FS_OFFSET = iStack_10;
  return uVar4;
}



void FUN_00563560(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bd3c5;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a654d4;
  local_4 = 7;
  FUN_00561520(uVar3);
  iVar1 = in_ECX[3];
  if (iVar1 != 0) {
    FUN_0078c9b0();
    FUN_00401f20(iVar1);
    in_ECX[3] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x10];
  local_4._0_1_ = 6;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0xf];
  local_4._0_1_ = 5;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0xe];
  local_4._0_1_ = 4;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0xd];
  local_4._0_1_ = 3;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[8];
  local_4._0_1_ = 2;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[7];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[4];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005636e0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  LONG LVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int in_ECX;
  uint uVar9;
  char *pcVar10;
  int *unaff_FS_OFFSET;
  float fStack_6ac;
  undefined **ppuStack_6a8;
  undefined4 *puStack_4a0;
  int iStack_498;
  undefined4 uStack_220;
  undefined1 auStack_21c [4];
  char acStack_218 [257];
  char acStack_117 [3];
  undefined4 uStack_114;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bd3eb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_6ac;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffff944;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(int *)(in_ECX + 0xc) != 0) && (*(int *)(in_ECX + 8) != 2)) {
    FUN_005616f0(uVar3);
    FUN_005622b0(param_1);
    FUN_00562e20(param_1);
    puVar1 = *(undefined4 **)(in_ECX + 0x40);
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x40) = 0;
    }
    pcVar5 = (char *)(**(code **)(*(int *)(param_1 + 0x24) + 0x14))();
    pcVar10 = (char *)&uStack_114;
    do {
      cVar2 = *pcVar5;
      *pcVar10 = cVar2;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    pcVar10 = (char *)&uStack_114;
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    iVar6 = (int)pcVar10 - ((int)&uStack_114 + 1);
    if (4 < iVar6) {
      acStack_218[iVar6 + 0x100] = '\0';
    }
    FUN_00713a30();
    ppuStack_6a8 = &PTR_FUN_00a3690c;
    auStack_21c = (undefined1  [4])0x0;
    uStack_220 = 0;
    builtin_strncpy(acStack_218,"Data\\Meshes\\Trees",0x12);
    uStack_4 = 0;
    pcVar10 = (char *)&uStack_114;
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar3 = (int)pcVar10 - (int)&uStack_114;
    pcVar10 = auStack_21c + 3;
    do {
      pcVar5 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)&uStack_114;
    for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    puVar1 = (undefined4 *)(auStack_21c + 3);
    do {
      puVar7 = puVar1;
      puVar1 = (undefined4 *)((int)puVar7 + 1);
    } while (*(char *)((int)puVar7 + 1) != '\0');
    *(undefined4 *)((int)puVar7 + 1) = 0x46494e2e;
    *(undefined1 *)((int)puVar7 + 5) = 0;
    cVar2 = FUN_006f9980(acStack_218,0);
    if ((cVar2 != '\0') && (iStack_498 == 1)) {
      uVar8 = FUN_00560920(&DAT_00b3fa80,*puStack_4a0);
      iVar6 = FUN_004a05e0(uVar8);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x10) != 0)) {
        FUN_0075fa90(*(int *)(iVar6 + 0x10));
      }
    }
    if ((*(int *)(in_ECX + 0x40) == 0) && (64.0 < *(float *)(in_ECX + 0x50))) {
      fStack_6ac = *(float *)(in_ECX + 0x54) * 0.5;
      uVar8 = FUN_008afdc0(*(undefined4 *)(in_ECX + 0x50),fStack_6ac);
      FUN_0075fa90(uVar8);
    }
    uStack_4 = 0xffffffff;
    FUN_00436420();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00563960(byte param_1)

{
  FUN_00563560();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005639a0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  if ((in_ECX != 0) && (piVar1 = *(int **)(in_ECX + 8), piVar1 != (int *)0x0)) {
    FUN_0089f570();
    (**(code **)(*piVar1 + 0x38))(param_1);
    FUN_0089f570();
  }
  return;
}



void FUN_005639d0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    uVar1 = FUN_008ac0a0();
    FUN_0043f3e0(param_1,uVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563a30(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd428;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a5591c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a65654;
  FUN_008b76e0(param_1);
  _DAT_00ba7fe8 = _DAT_00ba7fe8 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00563ad0(byte param_1)

{
  FUN_008b7400();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563af0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d69f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  in_ECX[3] = 0;
  *in_ECX = &PTR_FUN_00a5591c;
  in_ECX[4] = 0;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a656f4;
  FUN_008a2160(param_1);
  _DAT_00ba7d64 = _DAT_00ba7d64 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00563b90(byte param_1)

{
  FUN_008a1b10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563bb0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd458;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a5591c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  *in_ECX = &PTR_FUN_00a55afc;
  _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a65794;
  FUN_008b6b90(param_1);
  _DAT_00ba7fd4 = _DAT_00ba7fd4 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00563c60(byte param_1)

{
  FUN_008b66c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00563c80(ushort param_1)

{
  ushort uVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xdc) != 0) && (*(int *)(in_ECX + 0xe0) != 0)) {
    uVar1 = FUN_005601e0();
    if (param_1 < uVar1) {
      return *(undefined4 *)(*(int *)(in_ECX + 0xe0) + (uint)param_1 * 4);
    }
  }
  return 0;
}



undefined4 FUN_00563cc0(ushort param_1)

{
  ushort uVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xdc) != 0) && (*(int *)(in_ECX + 0xe4) != 0)) {
    uVar1 = FUN_00560200();
    if (param_1 < uVar1) {
      return *(undefined4 *)(*(int *)(in_ECX + 0xe4) + (uint)param_1 * 4);
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00563f90(float param_1)

{
  float fVar1;
  undefined4 in_EAX;
  undefined2 uVar3;
  uint3 uVar2;
  byte bVar4;
  int in_ECX;
  
  uVar3 = (undefined2)((uint)in_EAX >> 0x10);
  if (param_1 == 0.0) {
    return CONCAT31((int3)(CONCAT22(uVar3,(ushort)(param_1 < 0.0) << 8 | (ushort)NAN(param_1) << 10
                                          | (ushort)(param_1 == 0.0) << 0xe) >> 8),1);
  }
  if (*(float *)(in_ECX + 0xec) == 0.0) {
    *(float *)(in_ECX + 0xec) =
         (float)DAT_00b3a000 * (_DAT_00b3a024 / (float)DAT_00b3a01c) + _DAT_00b3a024 + param_1;
    bVar4 = DAT_00b3a000 + 1;
    DAT_00b3a000 = (char)((longlong)(ulonglong)bVar4 % (longlong)DAT_00b3a01c);
    return CONCAT31((int3)((ulonglong)((longlong)(ulonglong)bVar4 / (longlong)DAT_00b3a01c) >> 8),1)
    ;
  }
  fVar1 = *(float *)(in_ECX + 0xec);
  uVar2 = (uint3)(CONCAT22(uVar3,(ushort)(fVar1 < param_1) << 8 |
                                 (ushort)(NAN(fVar1) || NAN(param_1)) << 10 |
                                 (ushort)(fVar1 == param_1) << 0xe) >> 8);
  if (fVar1 < param_1) {
    *(float *)(in_ECX + 0xec) = param_1 + _DAT_00b3a024;
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00564030(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = _DAT_00b2efc4;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0x3f800000;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00564080(undefined4 param_1)

{
  int *in_ECX;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_2c = _DAT_00b2efc4;
  local_14 = 0;
  local_20 = 0x3f800000;
  local_30 = 0;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  FUN_0047dcd0(param_1);
  (**(code **)(*in_ECX + 0x70))(&local_30);
  return;
}



void FUN_005640e0(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 *in_ECX;
  uint *puVar11;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd4e6;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070b780(0);
  puVar2 = param_1;
  *in_ECX = &PTR_FUN_00a65854;
  in_ECX[0x37] = 0;
  in_ECX[0x3a] = 0;
  puVar1 = (undefined4 *)in_ECX[0x37];
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if (puVar1 != param_1) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar4);
    }
    in_ECX[0x37] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  *(ushort *)(in_ECX + 6) = *(ushort *)(in_ECX + 6) | 2;
  param_1 = (uint *)FUN_00401f00(0xdc);
  local_4._0_1_ = 3;
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0070b780(0);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_006ff420("Branches");
  FUN_0070b250(&param_1,0,uVar6);
  puVar1 = param_1;
  if (((param_1 != (undefined4 *)0x0) &&
      (LVar5 = InterlockedDecrement((LONG *)(param_1 + 1)), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  param_1 = (uint *)FUN_00401f00(0xdc);
  local_4._0_1_ = 4;
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0070b780(0);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_006ff420("Leaves");
  iVar7 = FUN_0055f7e0(1);
  if (*(int *)(iVar7 + 8) != 0) {
    iVar7 = FUN_0055f7e0(1);
    FUN_00405680(*(undefined4 *)(iVar7 + 8));
  }
  FUN_0070b250(&param_1,1,uVar6);
  puVar1 = param_1;
  if (((param_1 != (undefined4 *)0x0) &&
      (LVar5 = InterlockedDecrement((LONG *)(param_1 + 1)), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar8 = (uint *)FUN_00401f00(0xe4);
  local_4._0_1_ = 5;
  param_1 = puVar8;
  if (puVar8 == (uint *)0x0) {
    puVar8 = (uint *)0x0;
  }
  else {
    FUN_0070b780(0);
    puVar8[0x38] = 0;
    *puVar8 = (uint)&PTR_FUN_00a45134;
    *(undefined2 *)(puVar8 + 0x37) = 9;
  }
  local_4._0_1_ = 2;
  FUN_006ff420("Billboard");
  *(ushort *)(puVar8 + 0x37) = (ushort)puVar8[0x37] & 0xfff9 | 1;
  FUN_0070fe20(0xbfc90fdb,0x3f800000,0,0);
  FUN_0070b250(&param_1,2,puVar8);
  puVar8 = param_1;
  if (((param_1 != (uint *)0x0) && (LVar5 = InterlockedDecrement((LONG *)(param_1 + 1)), LVar5 == 0)
      ) && (puVar8 != (uint *)0x0)) {
    (**(code **)*puVar8)(1);
  }
  uVar3 = FUN_005601e0();
  if (uVar3 == 0) {
    in_ECX[0x38] = 0;
  }
  else {
    puVar8 = (uint *)(uint)uVar3;
    param_1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < (uint)((int)puVar8 * 4)) |
                                   (int)puVar8 * 4 + 4U);
    local_4._0_1_ = 6;
    if (param_1 == (uint *)0x0) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = param_1 + 1;
      *param_1 = (uint)puVar8;
      _eh_vector_constructor_iterator_(puVar11,4,(int)puVar8,FUN_007c88a0,FUN_007016a0);
    }
    local_4._0_1_ = 2;
    in_ECX[0x38] = puVar11;
    if (uVar3 != 0) {
      iVar7 = 0;
      param_1 = puVar8;
      do {
        iVar9 = in_ECX[0x38];
        puVar1 = *(undefined4 **)(iVar9 + iVar7);
        if (puVar1 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(puVar1 + 1);
          if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          *(undefined4 *)(iVar9 + iVar7) = 0;
        }
        iVar7 = iVar7 + 4;
        param_1 = (uint *)((int)param_1 + -1);
      } while (param_1 != (uint *)0x0);
    }
  }
  uVar3 = FUN_00560200();
  if (uVar3 == 0) {
    in_ECX[0x39] = 0;
  }
  else {
    uVar4 = (uint)uVar3;
    param_1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar4 * 4) | uVar4 * 4 + 4);
    local_4._0_1_ = 7;
    if (param_1 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      puVar8 = param_1 + 1;
      *param_1 = uVar4;
      _eh_vector_constructor_iterator_(puVar8,4,uVar4,FUN_007c88a0,FUN_007016a0);
    }
    local_4._0_1_ = 2;
    in_ECX[0x39] = puVar8;
    if (uVar3 != 0) {
      iVar7 = 0;
      param_1 = (uint *)uVar4;
      do {
        iVar9 = in_ECX[0x39];
        puVar1 = *(undefined4 **)(iVar9 + iVar7);
        if (puVar1 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(puVar1 + 1);
          if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          *(undefined4 *)(iVar9 + iVar7) = 0;
        }
        iVar7 = iVar7 + 4;
        param_1 = (uint *)((int)param_1 - 1);
      } while (param_1 != (uint *)0x0);
      param_1 = (uint *)0x0;
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x3a];
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x3a] = 0;
  }
  iVar7 = FUN_0055f7e0(1);
  FUN_006ff8a0(*(undefined4 *)(iVar7 + 0x18));
  iVar7 = param_2;
  iVar9 = param_2;
  if (param_2 == 0) {
    iVar9 = *(int *)(in_ECX[0x37] + 0x40);
  }
  if (iVar9 != 0) {
    piVar10 = (int *)FUN_00401f00(0x14);
    local_4._0_1_ = 8;
    param_1 = (uint *)piVar10;
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      FUN_00897600();
      *piVar10 = (int)&PTR_FUN_00a55fcc;
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    if (iVar7 == 0) {
      iVar7 = *(int *)(in_ECX[0x37] + 0x40);
    }
    FUN_00897670(iVar7);
    (**(code **)(*piVar10 + 0x4c))();
  }
  in_ECX[0x3b] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005645b0(void)

{
  int in_ECX;
  
  if (*(short *)(in_ECX + 0xb6) == 0) {
    return 0;
  }
  return **(undefined4 **)(in_ECX + 0xb0);
}



void FUN_00564620(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bd534;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a65854;
  pvVar1 = (void *)in_ECX[0x38];
  local_4 = 2;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
    in_ECX[0x38] = 0;
  }
  pvVar1 = (void *)in_ECX[0x39];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
    in_ECX[0x39] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x3a];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x37];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0070b810(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00564730(ushort param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (((in_ECX[0x37] == 0) || (in_ECX[0x38] == 0)) || (param_2 == 0)) {
LAB_00564831:
    FUN_00401f20(0);
  }
  else {
    uVar3 = FUN_005601e0(uVar4);
    uVar1 = param_1;
    if (uVar3 <= param_1) goto LAB_00564831;
    piVar5 = (int *)(**(code **)(*in_ECX + 0xa0))();
    if (piVar5 != (int *)0x0) {
      piVar6 = (int *)(in_ECX[0x38] + (uint)uVar1 * 4);
      if (*piVar6 != 0) {
        (**(code **)(*piVar5 + 0x88))(&param_1,*piVar6);
        FUN_007016a0();
      }
      (**(code **)(*piVar5 + 0x84))(iVar2,1);
      FUN_0075fa90(iVar2);
      local_4 = 0xffffffff;
      FUN_00402da0();
      uVar7 = 1;
      goto LAB_0056483c;
    }
    local_4 = 0xffffffff;
    FUN_00402da0();
  }
  uVar7 = 0;
LAB_0056483c:
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



undefined4 FUN_00564860(ushort param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (((in_ECX[0x37] == 0) || (in_ECX[0x39] == 0)) || (param_2 == 0)) {
LAB_00564961:
    FUN_00401f20(0);
  }
  else {
    uVar3 = FUN_00560200(uVar4);
    uVar1 = param_1;
    if (uVar3 <= param_1) goto LAB_00564961;
    piVar5 = (int *)(**(code **)(*in_ECX + 0xa4))();
    if (piVar5 != (int *)0x0) {
      piVar6 = (int *)(in_ECX[0x39] + (uint)uVar1 * 4);
      if (*piVar6 != 0) {
        (**(code **)(*piVar5 + 0x88))(&param_1,*piVar6);
        FUN_007016a0();
      }
      (**(code **)(*piVar5 + 0x84))(iVar2,1);
      FUN_0075fa90(iVar2);
      local_4 = 0xffffffff;
      FUN_00402da0();
      uVar7 = 1;
      goto LAB_0056496c;
    }
    local_4 = 0xffffffff;
    FUN_00402da0();
  }
  uVar7 = 0;
LAB_0056496c:
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



void FUN_00564990(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  LONG LVar4;
  int *in_ECX;
  
  puVar1 = param_1;
  if ((param_1 != (undefined4 *)0x0) &&
     (piVar3 = (int *)(**(code **)(*in_ECX + 0xa8))(), piVar3 != (int *)0x0)) {
    FUN_006ff420("Billboard");
    if ((in_ECX[0x3a] != 0) &&
       ((((**(code **)(*piVar3 + 0x88))(&param_1,in_ECX[0x3a]), puVar2 = param_1,
         param_1 != (undefined4 *)0x0 && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0)) &&
        (puVar2 != (undefined4 *)0x0)))) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*piVar3 + 0x84))(puVar1,1);
    FUN_0075fa90(puVar1);
  }
  return;
}



undefined4 FUN_00564a20(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = param_1;
  if ((*(int *)(in_ECX + 0xe8) != 0) && (param_1 != 0)) {
    iVar2 = FUN_00707530(6);
    if (iVar2 != 0) {
      if (iVar2 == iVar1) {
        return 0;
      }
      FUN_00708560(&param_1,6);
      FUN_007016a0();
    }
    FUN_00405680(iVar1);
    return 1;
  }
  return 0;
}



undefined4 FUN_00564a80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int *in_ECX;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bd558;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  iVar3 = (**(code **)(*in_ECX + 0xa4))(uVar2);
  if (iVar3 != 0) {
    puVar1 = *(undefined4 **)(iVar3 + 0xa8);
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    uStack_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      uVar5 = FUN_00560920(&DAT_00ba7f78,puVar1[4]);
    }
    uStack_4 = 0xffffffff;
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



void FUN_00564b70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
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
  in_ECX[1] = 0;
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
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00564bf0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6e18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a5591c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  *in_ECX = &PTR_FUN_00a55afc;
  _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6593c;
  _DAT_00ba7ff4 = _DAT_00ba7ff4 + 1;
  FUN_00564080(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00564ca0(byte param_1)

{
  FUN_008b7da0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00564cc0(byte param_1)

{
  FUN_00564620();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00564e30(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int in_ECX;
  int iVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char *_SubStr;
  int iStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  int *piStack_260;
  int iStack_25c;
  float fStack_258;
  float fStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  undefined4 uStack_234;
  undefined1 uStack_230;
  undefined1 uStack_22f;
  int iStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  float fStack_214;
  undefined4 uStack_210;
  undefined1 uStack_20c;
  undefined1 uStack_20b;
  int iStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined1 auStack_1fc [12];
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 auStack_1d4 [12];
  undefined **ppuStack_1c8;
  undefined1 uStack_1c4;
  undefined1 *puStack_1c0;
  int iStack_1bc;
  undefined4 uStack_1b8;
  undefined1 auStack_1b4 [260];
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
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009bd58b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&iStack_274;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffd80;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*(int **)(in_ECX + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xdc) + 4))();
  }
  cVar3 = FUN_00563f90(param_1);
  if (cVar3 != '\0') {
    piStack_260 = (int *)FUN_00564a80(uVar4);
    if (piStack_260 != (int *)0x0) {
      iVar5 = (**(code **)(*piStack_260 + 0x58))();
      if (iVar5 != 0) {
        _SubStr = "~CF";
        pcVar6 = (char *)FUN_007875c0();
        pcVar6 = _strstr(pcVar6,_SubStr);
        if (pcVar6 == (char *)0x0) {
          iStack_274 = DAT_00b3a004;
        }
        else {
          iStack_274 = pcVar6[3] + -0x30;
        }
        puStack_1c0 = auStack_1b4;
        ppuStack_1c8 = &PTR_FUN_00a56370;
        uStack_1b8 = 0x80000010;
        iStack_1bc = 0;
        uStack_1c4 = 0;
        fStack_248 = (float)iStack_274 * _DAT_00b3a024 * 100.0;
        uStack_14 = 0;
        FUN_005639a0(&ppuStack_1c8);
        iStack_25c = 0;
        if (0 < iStack_1bc) {
          iStack_274 = 0;
          do {
            iVar5 = *(int *)(puStack_1c0 + iStack_274 + 8);
            if (*(char *)(iVar5 + 0x18) == '\x02') {
              iVar9 = *(int *)(iVar5 + 0x10) + iVar5;
            }
            else {
              iVar9 = 0;
            }
            if (*(char *)(iVar5 + 0x18) == '\x01') {
              iVar5 = *(int *)(iVar5 + 0x10) + iVar5;
            }
            else {
              iVar5 = 0;
            }
            if (iVar9 == 0) {
              if (iVar5 != 0) {
                fStack_270 = (float)FUN_0047e020(100);
                if ((float)(int)fStack_270 <= fStack_248) {
                  iVar9 = *(int *)(iVar5 + 0x50);
                  fStack_40 = *(float *)(iVar9 + 0xe0);
                  fStack_3c = *(float *)(iVar9 + 0xe4);
                  fStack_38 = *(float *)(iVar9 + 0xe8);
                  uStack_34 = *(undefined4 *)(iVar9 + 0xec);
                  fStack_1f0 = *(float *)(iVar9 + 0xd0) * *(float *)(iVar9 + 0xd0);
                  fStack_1ec = *(float *)(iVar9 + 0xd4) * *(float *)(iVar9 + 0xd4);
                  fStack_1e8 = *(float *)(iVar9 + 0xd8) * *(float *)(iVar9 + 0xd8);
                  fStack_1e4 = *(float *)(iVar9 + 0xdc) * *(float *)(iVar9 + 0xdc);
                  if (1.0 < fStack_1e8 + fStack_1ec + fStack_1f0) {
                    fStack_258 = SQRT(fStack_1e8 + fStack_1ec + fStack_1f0);
                    fStack_270 = (float)FUN_0047dfd0(DAT_00b3a00c,DAT_00b3a014);
                    fStack_26c = (1.0 - (float)(int)fStack_270 / 100.0) * fStack_258;
                    fVar10 = (float10)FUN_0047e140();
                    fStack_270 = (float)fVar10;
                    fVar10 = (float10)FUN_0047e140();
                    fStack_264 = (float)fVar10;
                    fVar10 = (float10)FUN_0047e140();
                    fStack_268 = (float)(fVar10 - (float10)0.25);
                    auVar14._8_4_ = fStack_268 * fStack_268;
                    auVar14._4_4_ = auVar14._8_4_;
                    auVar14._0_4_ = auVar14._8_4_;
                    auVar14._12_4_ = auVar14._8_4_;
                    auVar15._4_12_ = auVar14._4_12_;
                    auVar15._0_4_ =
                         auVar14._8_4_ + fStack_264 * fStack_264 + fStack_270 * fStack_270;
                    auVar14 = rsqrtss(auVar15,auVar15);
                    fVar11 = auVar14._0_4_;
                    fStack_b0 = fStack_270 * fVar11 * fStack_26c;
                    fStack_ac = fStack_264 * fVar11 * fStack_26c;
                    fStack_a8 = fStack_268 * fVar11 * fStack_26c;
                    fStack_a4 = fVar11 * 0.0 * fStack_26c;
                    FUN_008a6410();
                    (**(code **)(**(int **)(iVar5 + 0x50) + 0x54))(&fStack_b0);
                  }
                  if (1.0 < fStack_38 * fStack_38 + fStack_3c * fStack_3c + fStack_40 * fStack_40) {
                    fStack_258 = SQRT(fStack_38 * fStack_38 +
                                      fStack_3c * fStack_3c + fStack_40 * fStack_40);
                    fStack_26c = (float)FUN_0047e020(0x14);
                    fStack_268 = ((float)(int)fStack_26c / 100.0 + 90.0) * fStack_258;
                    fVar10 = (float10)FUN_0047e140();
                    fStack_26c = (float)fVar10;
                    fVar10 = (float10)FUN_0047e140();
                    fStack_270 = (float)fVar10;
                    fVar10 = (float10)FUN_0047e140();
                    fStack_264 = (float)(fVar10 - (float10)0.25);
                    auVar16._8_4_ = fStack_264 * fStack_264;
                    auVar16._4_4_ = auVar16._8_4_;
                    auVar16._0_4_ = auVar16._8_4_;
                    auVar16._12_4_ = auVar16._8_4_;
                    auVar17._4_12_ = auVar16._4_12_;
                    auVar17._0_4_ =
                         auVar16._8_4_ + fStack_270 * fStack_270 + fStack_26c * fStack_26c;
                    auVar14 = rsqrtss(auVar17,auVar17);
                    fVar11 = auVar14._0_4_;
                    fStack_a0 = fStack_26c * fVar11 * fStack_268;
                    fStack_9c = fStack_270 * fVar11 * fStack_268;
                    fStack_98 = fStack_264 * fVar11 * fStack_268;
                    fStack_94 = fVar11 * 0.0 * fStack_268;
                    FUN_008a6410();
                    (**(code **)(**(int **)(iVar5 + 0x50) + 0x58))(&fStack_a0);
                  }
                  if (**(int **)(puStack_1c0 + iStack_274 + 8) == 0) {
                    iVar9 = 0;
                  }
                  else {
                    iVar9 = *(int *)(**(int **)(puStack_1c0 + iStack_274 + 8) + 8);
                  }
                  uStack_230 = 4;
                  if (iVar9 == 0) {
                    uStack_22f = 0;
                  }
                  else {
                    uStack_22f = *(undefined1 *)(iVar9 + 0x10);
                  }
                  uStack_234 = 0x3f800000;
                  fStack_258 = SQRT(fStack_1e8 + fStack_1ec + fStack_1f0);
                  fStack_238 = fStack_258 * 6.99904;
                  iStack_22c = iVar5 + (int)piStack_260;
                  puVar8 = (undefined4 *)FUN_0043f3e0(auStack_1d4,*(int *)(iVar5 + 0x50) + 0x40);
                  uStack_244 = *puVar8;
                  uStack_240 = puVar8[1];
                  uStack_228 = *(undefined4 *)(iVar5 + 0xc);
                  uStack_23c = puVar8[2];
                  uStack_224 = 0;
                  FUN_006b0c70(&uStack_244);
                }
              }
            }
            else {
              iVar5 = FUN_00891130(1000,iVar9);
              if (iVar5 != 0) {
                iVar5 = FUN_0065a2c0();
                if (iVar5 != 0) {
                  fVar10 = (float10)FUN_0047e0f0();
                  fStack_268 = (float)fVar10;
                  fVar10 = (float10)FUN_0047e0f0();
                  fStack_264 = (float)fVar10;
                  fVar10 = (float10)FUN_0047e0f0();
                  puVar2 = puStack_1c0;
                  fStack_270 = (float)fVar10;
                  iVar1 = *(int *)(*(int *)(puStack_1c0 + iStack_274 + 8) + 8);
                  auVar12._8_4_ = fStack_270 * fStack_270;
                  auVar12._4_4_ = auVar12._8_4_;
                  auVar12._0_4_ = auVar12._8_4_;
                  auVar12._12_4_ = auVar12._8_4_;
                  auVar13._4_12_ = auVar12._4_12_;
                  auVar13._0_4_ = auVar12._8_4_ + fStack_264 * fStack_264 + fStack_268 * fStack_268;
                  auVar14 = rsqrtss(auVar13,auVar13);
                  fStack_84 = auVar14._0_4_;
                  fStack_90 = fStack_268 * fStack_84;
                  fStack_8c = fStack_264 * fStack_84;
                  fStack_88 = fStack_270 * fStack_84;
                  fStack_84 = fStack_84 * 0.0;
                  uStack_80 = *(undefined4 *)(iVar1 + 0x30);
                  uStack_7c = *(undefined4 *)(iVar1 + 0x34);
                  uStack_78 = *(undefined4 *)(iVar1 + 0x38);
                  uStack_74 = *(undefined4 *)(iVar1 + 0x3c);
                  uStack_64 = 0;
                  fStack_70 = fStack_90;
                  fStack_6c = fStack_8c;
                  fStack_68 = fStack_88;
                  uStack_50 = uStack_80;
                  uStack_4c = uStack_7c;
                  uStack_48 = uStack_78;
                  uStack_44 = uStack_74;
                  uStack_60 = FUN_00494ef0();
                  uStack_58 = *(undefined4 *)(puVar2 + iStack_274 + 8);
                  uStack_54 = 0;
                  uStack_5c = 0;
                  (**(code **)(*(int *)(iVar5 + 0x1f0) + 8))(&uStack_80);
                  uStack_210 = 0x3f800000;
                  uStack_20c = 4;
                  uStack_20b = 7;
                  if (*(int *)(iVar5 + 8) != 0) {
                    uVar7 = FUN_008ac0a0();
                    FUN_0043f3e0(auStack_1fc,uVar7);
                  }
                  fVar10 = (float10)FUN_00404c90();
                  fStack_214 = (float)fVar10;
                  iStack_208 = iVar9 + (int)piStack_260;
                  puVar8 = (undefined4 *)FUN_0043f3e0(auStack_1fc,&uStack_50);
                  uStack_220 = *puVar8;
                  uStack_21c = puVar8[1];
                  uStack_218 = puVar8[2];
                  uStack_204 = 0;
                  uStack_200 = 0;
                  FUN_006b0c70(&uStack_220);
                }
              }
            }
            iStack_274 = iStack_274 + 0x10;
            iStack_25c = iStack_25c + 1;
          } while (iStack_25c < iStack_1bc);
        }
        uStack_14 = 0xffffffff;
        FUN_00536f90();
      }
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00565510(undefined4 param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *in_ECX;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [12];
  undefined4 *puStack_128;
  float afStack_124 [4];
  float fStack_114;
  float fStack_110;
  int iStack_10c;
  float local_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [4];
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a4;
  int iStack_9c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  uint uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009bd643;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_134;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffec0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if ((DAT_00b1274c != '\x01') || (uVar1 = FUN_00787d90(uVar1), uVar1 == 0)) goto LAB_00565bb0;
  local_108 = _DAT_00b39e18 * param_2;
  uStack_104 = (**(code **)(*in_ECX + 0xa4))();
  FUN_00532250();
  uVar7 = 0;
  uStack_14 = 0;
  if (uVar1 == 1) {
    FUN_00789d40(0,&iStack_10c,afStack_124 + 3,afStack_124);
    afStack_124[3] = local_108 * afStack_124[3] * 0.14287673;
    fStack_114 = fStack_114 * 0.14287673 * local_108;
    fStack_110 = fStack_110 * 0.14287673 * local_108;
    afStack_124[0] = afStack_124[0] * 0.14287673 * local_108;
    afStack_124[1] = afStack_124[1] * 0.14287673 * local_108;
    puStack_128 = (undefined4 *)(afStack_124[2] * 0.14287673);
    afStack_124[2] = local_108 * (float)puStack_128;
    if (iStack_10c == 0) {
      FUN_00564b70();
      fStack_40 = afStack_124[3];
      fStack_3c = fStack_114;
      fStack_38 = fStack_110;
      fStack_34 = 0.0;
      FUN_0047dcd0(&fStack_40);
      puStack_128 = (undefined4 *)FUN_00401f00(0x14);
      uStack_14._0_1_ = 1;
      if (puStack_128 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00532090(afStack_124[0],0);
      }
      uStack_14._0_1_ = 0;
      if (iVar3 == 0) {
        fStack_fc = 0.0;
      }
      else {
        fStack_fc = *(float *)(iVar3 + 8);
      }
      puStack_128 = (undefined4 *)FUN_00401f00(0x14);
      uStack_14._0_1_ = 2;
      if (puStack_128 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00563af0(auStack_100);
      }
      uStack_14 = (uint)uStack_14._1_3_ << 8;
      if (iVar3 == 0) goto LAB_005658f6;
      uStack_ac = *(undefined4 *)(iVar3 + 8);
    }
    else {
      if (iStack_10c == 1) {
        FUN_00564030();
        fStack_e8 = fStack_110 + afStack_124[0];
        fStack_f0 = afStack_124[3];
        fStack_ec = fStack_114;
        uStack_e4 = 0;
        puStack_128 = (undefined4 *)((afStack_124[1] + fStack_110) - afStack_124[0]);
        fStack_e0 = afStack_124[3];
        fStack_dc = fStack_114;
        uStack_d4 = 0;
        fStack_fc = afStack_124[0];
        fStack_d8 = (float)puStack_128;
        puStack_128 = (undefined4 *)FUN_00401f00(0x14);
        uStack_14 = CONCAT31(uStack_14._1_3_,3);
        if (puStack_128 == (undefined4 *)0x0) {
LAB_0056576e:
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_00563bb0(auStack_100);
        }
      }
      else {
        if (iStack_10c != 2) goto LAB_00565adb;
        FUN_00564b70();
        iVar3 = 0;
        do {
          iVar2 = iVar3 + 1;
          afStack_124[iVar3] = afStack_124[iVar3] * 0.5;
          iVar3 = iVar2;
        } while (iVar2 < 3);
        puStack_128 = (undefined4 *)(afStack_124[2] + fStack_110);
        fStack_50 = afStack_124[3];
        fStack_4c = fStack_114;
        uStack_44 = 0;
        fStack_40 = afStack_124[0];
        fStack_3c = afStack_124[1];
        fStack_38 = afStack_124[2];
        fStack_34 = 0.0;
        fStack_48 = (float)puStack_128;
        FUN_0047dcd0(&fStack_50);
        puStack_128 = (undefined4 *)FUN_00401f00(0x14);
        uStack_14._0_1_ = 4;
        if (puStack_128 == (undefined4 *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_00564bf0(&fStack_40);
        }
        uStack_14._0_1_ = 0;
        if (iVar3 == 0) {
          fStack_fc = 0.0;
        }
        else {
          fStack_fc = *(float *)(iVar3 + 8);
        }
        puStack_128 = (undefined4 *)FUN_00401f00(0x14);
        uStack_14 = CONCAT31(uStack_14._1_3_,5);
        if (puStack_128 == (undefined4 *)0x0) goto LAB_0056576e;
        iVar3 = FUN_00563af0(auStack_100);
      }
      uStack_14 = uStack_14 & 0xffffff00;
      if (iVar3 == 0) {
LAB_005658f6:
        uStack_ac = 0;
      }
      else {
        uStack_ac = *(undefined4 *)(iVar3 + 8);
      }
    }
  }
  else {
    fStack_50 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    uStack_44 = 0x80000000;
    uStack_14._0_1_ = 6;
    uStack_14._1_3_ = 0;
    if (uVar1 != 0) {
      do {
        FUN_00789d40(uVar7,&iStack_10c,afStack_124,afStack_124 + 3);
        if (iStack_10c == 0) {
          afStack_124[0] = local_108 * afStack_124[0] * 0.14287673;
          afStack_124[1] = afStack_124[1] * 0.14287673 * local_108;
          afStack_124[2] = afStack_124[2] * 0.14287673 * local_108;
          puStack_128 = (undefined4 *)(afStack_124[3] * 0.14287673);
          afStack_124[3] = local_108 * (float)puStack_128;
          fStack_40 = afStack_124[0];
          fStack_3c = afStack_124[1];
          fStack_38 = afStack_124[2];
          fStack_34 = afStack_124[3];
          if (fStack_48 == (float)(uStack_44 & 0x3fffffff)) {
            FUN_008a6ee0(&fStack_4c,0x10);
          }
          pfVar4 = (float *)((int)fStack_48 * 0x10 + (int)fStack_4c);
          fStack_48 = (float)((int)fStack_48 + 1);
          *pfVar4 = fStack_40;
          pfVar4[1] = fStack_3c;
          pfVar4[2] = fStack_38;
          pfVar4[3] = fStack_34;
        }
        else {
          FUN_004a7a60("Multiple bounding volumes around a tree must all be spheres.");
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    puStack_128 = (undefined4 *)FUN_00401f00(0x14);
    uStack_14 = CONCAT31(uStack_14._1_3_,7);
    if ((puStack_128 == (undefined4 *)0x0) || (iVar3 = FUN_00563a30(&fStack_50), iVar3 == 0)) {
      uStack_ac = 0;
    }
    else {
      uStack_ac = *(undefined4 *)(iVar3 + 8);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (-1 < (int)uStack_44) {
      FUN_008a75d0(fStack_4c,uStack_44 << 4,0x14);
    }
  }
LAB_00565adb:
  uStack_b0 = 0x40009;
  puStack_128 = (undefined4 *)FUN_00401f00(0x14);
  uStack_14._0_1_ = 8;
  if (puStack_128 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00531fc0(&uStack_b0);
  }
  uStack_14._0_1_ = 0;
  puVar6 = (undefined4 *)FUN_00401f00(0x14);
  uStack_14._0_1_ = 9;
  puStack_128 = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    FUN_00897640(uStack_104);
    *puVar6 = &PTR_FUN_00a655cc;
  }
  uStack_14 = (uint)uStack_14._1_3_ << 8;
  FUN_00897670(uVar5);
  uStack_14 = 0xffffffff;
  if (-1 < iStack_9c) {
    FUN_008a75d0(uStack_a4,iStack_9c * 8,0x14);
  }
LAB_00565bb0:
  *unaff_FS_OFFSET = local_1c;
  return;
}



int FUN_00565be0(undefined4 param_1,char param_2)

{
  switch(param_1) {
  case 0:
    return (int)param_2;
  case 1:
    return param_2 + 8;
  case 2:
    return param_2 + 0xc;
  case 3:
    return param_2 + 0x21;
  case 4:
    return param_2 + 0x25;
  case 5:
    return param_2 + 0x28;
  case 6:
    return param_2 + 0x2a;
  default:
    return 0;
  }
}



char FUN_00565c50(undefined4 param_1,char param_2)

{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_2 + -8;
  case 2:
    return param_2 + -0xc;
  case 3:
    return param_2 + -0x21;
  case 4:
    return param_2 + -0x25;
  case 5:
    return param_2 + -0x28;
  case 6:
    return param_2 + -0x2a;
  default:
    return '\0';
  }
}



undefined * FUN_00565cc0(uint param_1)

{
  if (param_1 < 0x28) {
    if ((undefined4 *)(&PTR_DAT_00b12758)[param_1] != (undefined4 *)0x0) {
      return *(undefined **)(&PTR_DAT_00b12758)[param_1];
    }
  }
  else if ((int)param_1 < 0x48) {
    return (&PTR_DAT_00b12868)[param_1];
  }
  return (undefined *)0x0;
}



undefined4 FUN_00565cf0(uint param_1)

{
  if ((param_1 < 0x21) && ((undefined4 *)(&PTR_DAT_00b127f8)[param_1] != (undefined4 *)0x0)) {
    return *(undefined4 *)(&PTR_DAT_00b127f8)[param_1];
  }
  return 0;
}



undefined4 FUN_00565d10(uint param_1)

{
  if ((param_1 < 0x21) && ((undefined4 *)(&PTR_DAT_00b12880)[param_1] != (undefined4 *)0x0)) {
    return *(undefined4 *)(&PTR_DAT_00b12880)[param_1];
  }
  return 0;
}



undefined4 FUN_00565d30(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return DAT_00b3a2bc;
  case 1:
    return DAT_00b3a2c4;
  case 2:
    return DAT_00b3a2cc;
  case 3:
    return DAT_00b3a2d4;
  case 4:
    return DAT_00b3a2dc;
  case 5:
    return DAT_00b3a2e4;
  case 6:
    return DAT_00b3a2ec;
  case 7:
    return DAT_00b3a2f4;
  default:
    return 0;
  }
}



byte FUN_00565da0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x1c) >> 6 & 1;
}



byte FUN_00565db0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x1c) >> 4 & 1;
}



byte FUN_00565dc0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x1c) >> 7;
}



byte FUN_00565dd0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x1c) >> 5 & 1;
}



uint FUN_00565de0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x1c) >> 8 & 0xffffff01;
}



uint FUN_00565df0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x1c) >> 10 & 0xffffff01;
}



void FUN_00565e00(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 0x24) == 0) {
      iVar2 = FUN_00401f00(0xc);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_005696b0();
      }
      *(undefined4 *)(in_ECX + 0x24) = uVar3;
    }
    local_4 = 0xffffffff;
    FUN_00569840(param_1,0);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = *(int *)(in_ECX + 0x24);
  if (iVar2 != 0) {
    FUN_00569730(uVar1);
    FUN_00401f20(iVar2);
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00565ec0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 0x28) == 0) {
      iVar2 = FUN_00401f00(0xc);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00569e40();
      }
      *(undefined4 *)(in_ECX + 0x28) = uVar3;
    }
    local_4 = 0xffffffff;
    FUN_00569ef0(param_1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = *(int *)(in_ECX + 0x28);
  if (iVar2 != 0) {
    FUN_0060d0a0(uVar1);
    FUN_00401f20(iVar2);
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00565f80(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [8];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd6b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    FUN_00569dd0(param_1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  FUN_00569d60(uVar1);
  local_4 = 0;
  FUN_00569dd0(local_14);
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00566010(int param_1)

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



uint FUN_005660a0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x1c) >> 0xb & 0xffffff01;
}



uint FUN_005660b0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x1c) >> 0xe & 0xffffff01;
}



void FUN_005660c0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x4000;
    return;
  }
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffffbfff;
  return;
}



uint FUN_005660e0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x1c) >> 0xf & 0xffffff01;
}



void FUN_005660f0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    FUN_00569ab0();
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    FUN_0056a080();
    return;
  }
  return;
}



void FUN_00566190(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if (iVar1 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x28);
  if (iVar1 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar1);
  }
  FUN_0056a750();
  thunk_FUN_0046b170();
  return;
}



void FUN_005661e0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bd70c;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int)*(char *)(in_ECX + 0x20)) {
    if (2 < (int)param_1) {
      if ((int)param_1 < 7) {
        iVar1 = *(int *)(in_ECX + 0x28);
        if (iVar1 != 0) {
          FUN_0060d0a0(uVar2);
          FUN_00401f20(iVar1);
        }
        *(undefined4 *)(in_ECX + 0x28) = 0;
      }
      else if (param_1 == 7) {
        iVar1 = *(int *)(in_ECX + 0x24);
        if (iVar1 != 0) {
          FUN_00569730();
          FUN_00401f20(iVar1);
        }
        *(undefined4 *)(in_ECX + 0x24) = 0;
        goto LAB_0056626b;
      }
    }
    if (param_1 < 10) {
LAB_0056626b:
                    /* WARNING: Could not recover jumptable at 0x00566272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_LAB_00566358)[(byte)(&DAT_00566368)[param_1]])();
      return;
    }
    *(char *)(in_ECX + 0x20) = (char)param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00566380(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03e00,0);
  if (iVar1 != 0) {
    FUN_0046acb0(iVar1);
    FUN_00565e00(*(undefined4 *)(iVar1 + 0x24));
    FUN_00565ec0(*(undefined4 *)(iVar1 + 0x28));
    FUN_00565f80(iVar1 + 0x2c);
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    FUN_00566010(iVar1 + 0x34);
    FUN_005661e0((int)*(char *)(iVar1 + 0x20));
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(iVar1 + 0x18);
  }
  return;
}



undefined4 FUN_00566400(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03e00,0);
  if (iVar2 == 0) {
    return 1;
  }
  cVar1 = FUN_0046ad70(iVar2);
  if (cVar1 != '\0') {
    return 1;
  }
  if (*(char *)(in_ECX + 0x20) != *(char *)(iVar2 + 0x20)) {
    return 1;
  }
  if (*(int *)(in_ECX + 0x1c) == *(int *)(iVar2 + 0x1c)) {
    if (*(int *)(in_ECX + 0x24) == 0) {
      if (*(int *)(iVar2 + 0x24) != 0) {
        return 1;
      }
    }
    else {
      cVar1 = FUN_00569940(*(undefined4 *)(iVar2 + 0x24));
      if (cVar1 != '\0') {
        return 1;
      }
    }
    if (*(int *)(in_ECX + 0x28) == 0) {
      if (*(int *)(iVar2 + 0x28) != 0) {
        return 1;
      }
    }
    else {
      cVar1 = FUN_00569f70(*(undefined4 *)(iVar2 + 0x28));
      if (cVar1 != '\0') {
        return 1;
      }
    }
    if (in_ECX == -0x2c) {
      if (iVar2 != -0x2c) {
        return 1;
      }
    }
    else {
      cVar1 = FUN_00569e00(iVar2 + 0x2c);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    if (in_ECX == -0x34) {
      if (iVar2 != -0x34) {
        return 1;
      }
    }
    else {
      cVar1 = FUN_0056a4b0(iVar2 + 0x34);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}



void FUN_005664d0(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046ae40(0x54444b50,in_ECX + 0x1c,8);
  if (*(int *)(in_ECX + 0x24) != 0) {
    FUN_00569ad0();
  }
  if (in_ECX != -0x2c) {
    FUN_00569db0();
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    FUN_0056a0f0();
  }
  if (in_ECX != -0x34) {
    FUN_0056a450();
  }
  FUN_0046b9f0();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_00566530(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009bd753;
  local_10 = *unaff_FS_OFFSET;
  local_14 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  cVar1 = FUN_004511c0(local_14);
  if (cVar1 == '=') {
    FUN_00451210(in_ECX);
    do {
      iVar3 = FUN_004510b0();
      if (iVar3 < 0x54444c51) {
        if (iVar3 == 0x54444c50) {
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          FUN_00450c20(&local_40,0xc);
          FUN_005696c0(&local_40);
          local_8 = 6;
          FUN_00565e00(local_54);
          local_8 = 0xffffffff;
          FUN_00569730();
        }
        else if (iVar3 == 0x41445443) {
LAB_00566763:
          FUN_0056a7b0(param_1);
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffff94,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffff94);
        }
        else if (iVar3 == 0x54444b50) {
          if (*(int *)(param_1 + 0x254) == 4) {
            local_18 = 0;
            FUN_00450c20(&local_18,4);
            in_ECX[7] = local_18 & 0xffff;
            FUN_005661e0((int)local_18._2_1_);
          }
          else if (*(int *)(param_1 + 0x254) == 8) {
            local_20 = 0;
            local_1c = 0;
            FUN_00450c20(&local_20,8);
            in_ECX[7] = local_20;
            FUN_005661e0((int)(char)local_1c);
          }
          else {
            FUN_004a7a60("File \'%s\' contains package data of unrecognized type.",param_1 + 0x1c);
            in_ECX[7] = 0;
            if ((char)in_ECX[8] != '\0') {
              if (in_ECX[10] == 0) {
                local_18 = FUN_00401f00(0xc);
                local_8 = 4;
                if (local_18 != 0) {
                  iVar3 = FUN_00569e40();
                  local_8 = 0xffffffff;
                  in_ECX[10] = iVar3;
                  *(undefined1 *)(in_ECX + 8) = 0;
                  goto LAB_005667b0;
                }
                local_8 = 0xffffffff;
                in_ECX[10] = 0;
              }
              *(undefined1 *)(in_ECX + 8) = 0;
            }
          }
        }
      }
      else if (iVar3 == 0x54445350) {
        local_28 = 0;
        local_24 = 0;
        FUN_00450c20(&local_28,8);
        FUN_00569d80(&local_28);
        local_8 = 7;
        FUN_00565f80(local_48);
        local_8 = 0xffffffff;
        FUN_0060d0a0();
      }
      else {
        if (iVar3 == 0x54445443) goto LAB_00566763;
        if (iVar3 == 0x54445450) {
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          FUN_00450c20(&local_34,0xc);
          FUN_0056a0a0(&local_34);
          local_8 = 8;
          FUN_00565ec0(local_60);
          local_8 = 0xffffffff;
          FUN_0060d0a0();
        }
      }
LAB_005667b0:
      cVar1 = FUN_0044fea0();
    } while (cVar1 != '\0');
    FUN_0046ab80(0);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}



void FUN_005667f0(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    if (*(int *)(in_ECX + 0x24) != 0) {
      FUN_00569b20(in_ECX);
    }
    if (*(int *)(in_ECX + 0x28) != 0) {
      FUN_0056a140(in_ECX);
    }
    if (in_ECX != -0x34) {
      FUN_0056a480(in_ECX);
    }
    FUN_0046ab80(1);
  }
  return;
}



void FUN_00566830(char param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00446b80(*(undefined4 *)(in_ECX + 0xc));
  if (cVar1 != '\0') {
    if (param_1 != '\0') {
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x800;
      return;
    }
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xfffff7ff;
  }
  return;
}



void FUN_00566870(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[10] != 0) {
    iVar2 = FUN_00569e60();
    if (iVar2 == param_1) {
      if (param_2 == '\0') {
        in_ECX[7] = in_ECX[7] & 0xffff7fff;
        cVar1 = FUN_00446b80(in_ECX[3]);
        if (cVar1 == '\0') {
          (**(code **)(*in_ECX + 0x44))(0x10000000);
        }
      }
      else {
        in_ECX[7] = in_ECX[7] | 0x8000;
        cVar1 = FUN_00446b80(in_ECX[3]);
        if (cVar1 == '\0') {
          (**(code **)(*in_ECX + 0x40))(0x10000000);
          return;
        }
      }
    }
  }
  return;
}



void FUN_005668e0(char param_1)

{
  char cVar1;
  int *in_ECX;
  
  if (param_1 == '\0') {
    in_ECX[7] = in_ECX[7] & 0xfffeffff;
    cVar1 = FUN_00446b80(in_ECX[3]);
    if (cVar1 == '\0') {
      (**(code **)(*in_ECX + 0x44))(0x8000000);
    }
  }
  else {
    in_ECX[7] = in_ECX[7] | 0x10000;
    cVar1 = FUN_00446b80(in_ECX[3]);
    if (cVar1 == '\0') {
      (**(code **)(*in_ECX + 0x40))(0x8000000);
      return;
    }
  }
  return;
}



undefined4 FUN_00566940(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((*(int *)(in_ECX + 0x24) == 0) || (iVar1 = FUN_00569740(), iVar1 == 2)) {
    if (param_1 != 0) {
      uVar3 = FUN_004d79b0();
    }
  }
  else {
    uVar2 = FUN_00569740();
    switch(uVar2) {
    case 0:
      iVar1 = FUN_005697e0();
      if (iVar1 != 0) {
        FUN_005697e0();
LAB_005669b0:
        uVar3 = FUN_004d6670();
        return uVar3;
      }
      break;
    case 1:
      iVar1 = FUN_00569800();
      if (iVar1 != 0) {
        FUN_00569800();
        uVar3 = FUN_004c9cf0();
        return uVar3;
      }
      break;
    case 3:
      if (param_1 != 0) {
        uVar3 = FUN_005e1f40();
        return uVar3;
      }
      break;
    case 4:
    case 5:
      if (((param_1 != 0) && (*(int **)(param_1 + 0x58) != (int *)0x0)) &&
         (iVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x184))(), iVar1 == in_ECX)) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x3b8))();
        if (iVar1 == 0) {
          uVar3 = FUN_004d6670();
          return uVar3;
        }
        goto LAB_005669b0;
      }
    }
  }
  return uVar3;
}



undefined4 FUN_00566a40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((*(int *)(in_ECX + 0x24) == 0) || (iVar1 = FUN_00569740(), iVar1 == 2)) {
    if (param_1 != 0) {
      uVar3 = FUN_004d79d0();
    }
  }
  else {
    uVar2 = FUN_00569740();
    switch(uVar2) {
    case 0:
      iVar1 = FUN_005697e0();
      if (iVar1 != 0) {
        FUN_005697e0();
LAB_00566a9a:
        uVar3 = FUN_006ecc80();
        return uVar3;
      }
      break;
    case 1:
      uVar3 = FUN_00569800();
      return uVar3;
    case 3:
      if (param_1 != 0) {
        uVar3 = FUN_005e1f60();
        return uVar3;
      }
      break;
    case 4:
    case 5:
      if (((param_1 != 0) && (*(int **)(param_1 + 0x58) != (int *)0x0)) &&
         (iVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x184))(), iVar1 == in_ECX)) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x3b8))();
        if (iVar1 == 0) {
          uVar3 = FUN_006ecc80();
          return uVar3;
        }
        goto LAB_00566a9a;
      }
    }
  }
  return uVar3;
}



float * FUN_00566b30(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  float *pfVar7;
  int in_ECX;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  fVar2 = DAT_00b3f9b0;
  fVar1 = DAT_00b3f9ac;
  iVar4 = *(int *)(in_ECX + 0x24);
  *param_1 = DAT_00b3f9a8;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  if ((iVar4 == 0) || (iVar4 = FUN_00569740(), iVar4 == 2)) {
    if (param_2 == (int *)0x0) {
      return param_1;
    }
    pfVar7 = (float *)FUN_004d79f0();
    goto LAB_00566cc7;
  }
  uVar5 = FUN_00569740();
  switch(uVar5) {
  case 0:
    iVar4 = FUN_005697e0();
    if (iVar4 == 0) {
      return param_1;
    }
    FUN_005697e0();
    cVar3 = FUN_004d74d0();
    if ((cVar3 != '\0') && (iVar4 = FUN_005697e0(), iVar4 != 0)) {
      pfVar7 = (float *)FUN_00625290(local_18);
      fVar1 = pfVar7[1];
      *param_1 = *pfVar7;
      fVar2 = pfVar7[2];
      param_1[1] = fVar1;
      param_1[2] = fVar2;
      return param_1;
    }
    piVar6 = (int *)FUN_005697e0();
    goto LAB_00566c57;
  case 1:
    iVar4 = FUN_00569800();
    if (iVar4 == 0) {
      return param_1;
    }
    piVar6 = (int *)FUN_004cba50();
    if (piVar6 == (int *)0x0) {
      cVar3 = FUN_004c97f0();
      if (cVar3 != '\0') {
        return param_1;
      }
      FUN_00569800();
      iVar4 = FUN_004c9a80();
      *param_1 = (float)(iVar4 << 0xc);
      FUN_00569800();
      iVar4 = FUN_004c9aa0();
      param_1[1] = (float)(iVar4 << 0xc);
      param_1[2] = 0.0;
      return param_1;
    }
LAB_00566c57:
    pfVar7 = (float *)(**(code **)(*piVar6 + 0x174))();
    break;
  default:
    goto switchD_00566b80_caseD_2;
  case 3:
    if (param_2 == (int *)0x0) {
      return param_1;
    }
    pfVar7 = (float *)(**(code **)(*param_2 + 0xf4))(local_c);
    break;
  case 4:
  case 5:
    if (param_2 == (int *)0x0) {
      return param_1;
    }
    if ((int *)param_2[0x16] == (int *)0x0) {
      return param_1;
    }
    iVar4 = (**(code **)(*(int *)param_2[0x16] + 0x184))();
    if (iVar4 != in_ECX) {
      return param_1;
    }
    piVar6 = (int *)(**(code **)(*(int *)param_2[0x16] + 0x3b8))();
    if (piVar6 != (int *)0x0) goto LAB_00566c57;
    pfVar7 = (float *)(**(code **)(*param_2 + 0x174))();
  }
LAB_00566cc7:
  fVar1 = pfVar7[1];
  fVar2 = pfVar7[2];
  *param_1 = *pfVar7;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
switchD_00566b80_caseD_2:
  return param_1;
}



int FUN_00566d00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x24) == 0) || (iVar1 = FUN_00569740(), iVar1 == 2)) {
switchD_00566d26_caseD_3:
    iVar1 = param_1;
    if (param_1 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = FUN_00569740();
    iVar1 = 0;
    switch(uVar2) {
    case 0:
      iVar3 = FUN_005697e0();
      if (iVar3 != 0) {
        iVar1 = FUN_005697e0();
        return iVar1;
      }
      break;
    case 3:
      goto switchD_00566d26_caseD_3;
    case 4:
    case 5:
      if (param_1 == 0) {
        return 0;
      }
      if (*(int **)(param_1 + 0x58) == (int *)0x0) {
        return 0;
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x184))();
      if (iVar1 != in_ECX) {
        return 0;
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x3b8))();
      if (iVar1 == 0) {
        return param_1;
      }
    }
  }
  return iVar1;
}



undefined4 FUN_00566db0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    uVar1 = FUN_005697a0();
    return uVar1;
  }
  return 0;
}



undefined1 FUN_00566dc0(int *param_1,char param_2,float param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  float *pfVar9;
  int in_ECX;
  int unaff_ESI;
  int *piVar10;
  float10 fVar11;
  undefined1 unaff_retaddr;
  undefined8 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (((*(int *)(in_ECX + 0x24) != 0) && (iVar3 = FUN_00569740(), iVar3 == 3)) &&
     (cVar1 = FUN_005e0260(), cVar1 == '\0')) {
    return 1;
  }
  iVar3 = FUN_00566940(param_1);
  iVar4 = FUN_00566a40(param_1);
  if ((iVar4 != 0) && (cVar1 = FUN_004c97f0(), cVar1 == '\0')) {
    iVar4 = 0;
  }
  iVar5 = FUN_004d6670();
  iVar6 = FUN_006ecc80();
  local_20 = (double)CONCAT44(local_20._4_4_,iVar6);
  if (iVar6 != 0) {
    cVar1 = FUN_004c97f0();
    if (cVar1 != '\0') {
      if ((int)local_20 != iVar4) {
        return 0;
      }
      if ((*(int *)(in_ECX + 0x24) != 0) && (iVar3 = FUN_00569740(), iVar3 == 1)) {
        return 1;
      }
      goto LAB_00566e69;
    }
    local_20 = (double)((ulonglong)local_20 & 0xffffffff00000000);
  }
  if (iVar4 != 0) {
    return 0;
  }
  if (iVar5 != iVar3) {
    return 0;
  }
LAB_00566e69:
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005697a0();
  }
  if (param_2 == '\0') {
    if (param_3 != -1.0) {
      iVar3 = FUN_009828c0();
    }
  }
  else {
    iVar3 = 0;
  }
  FUN_00566b30(&local_18,param_1);
  piVar10 = (int *)0x0;
  if (*(int *)(in_ECX + 0x24) != 0) {
    piVar10 = (int *)FUN_005697e0();
  }
  if ((iVar3 == 0) && (*(int *)(in_ECX + 0x24) != 0)) {
    if (piVar10 == (int *)0x0) {
      FUN_00569740();
    }
    else {
      piVar7 = (int *)(**(code **)(*param_1 + 0x380))();
      if ((piVar10 == piVar7) && (param_1[0x16] != 0)) {
        (**(code **)(*param_1 + 0x380))();
        FUN_00625290(&fStack_c);
        iVar3 = (**(code **)(*(int *)param_1[0x16] + 8))();
        if (iVar3 == 0) {
          local_18 = fStack_c;
          fStack_14 = fStack_8;
          fStack_10 = fStack_4;
        }
      }
      else {
        cVar1 = FUN_004d74b0();
        if ((cVar1 == '\0') ||
           (((int *)param_1[0x16] == (int *)0x0 ||
            (iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x380))(), iVar3 == 0)))) {
          iVar3 = (**(code **)(*piVar10 + 0x170))();
          if ((iVar3 != DAT_00b35eb0) &&
             (iVar3 = (**(code **)(*piVar10 + 0x170))(), iVar3 != DAT_00b35eac)) {
            cVar1 = (**(code **)(*piVar10 + 400))();
            if (cVar1 == '\0') {
              (**(code **)(*piVar10 + 0x170))();
              uVar8 = (**(code **)(*piVar10 + 0x170))();
              FUN_0046d5c0(uVar8);
              FUN_009828c0();
              FUN_009828c0();
            }
            else {
              iVar3 = (**(code **)(*piVar10 + 0x18c))();
              if (iVar3 != 9) {
                uVar8 = (**(code **)(*piVar10 + 0x170))();
                FUN_0046d5c0(uVar8);
                FUN_009828c0();
                FUN_009828c0();
              }
            }
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)param_1[0x16] + 8))();
          if (iVar3 == 0) {
            pfVar9 = (float *)(**(code **)(*(int *)param_1[0x16] + 0x380))();
            local_18 = *pfVar9;
            fStack_14 = pfVar9[1];
            fStack_10 = pfVar9[2];
          }
        }
      }
    }
  }
  if ((*(char *)(in_ECX + 0x20) == '\x05') && ((int)local_20 != 0)) {
    iVar3 = (**(code **)(*param_1 + 0x174))();
    local_20 = (double)*(float *)(iVar3 + 8);
    iVar3 = FUN_00566b30(&fStack_c,param_1);
    if (100.0 < ABS((float)local_20 - *(float *)(iVar3 + 8))) {
      return 0;
    }
  }
  cVar2 = '\0';
  cVar1 = (**(code **)(*param_1 + 0x334))(1);
  if ((cVar1 != '\0') && (iVar3 = (**(code **)(*param_1 + 0x330))(), iVar3 != 0)) {
    (**(code **)(*param_1 + 0x330))();
    cVar2 = FUN_006163a0();
  }
  cVar1 = FUN_00684b30(param_1,(int)&local_20 + 4,(float)unaff_ESI,1);
  if ((cVar1 == '\0') || (cVar2 != '\0')) {
    if (piVar10 == (int *)0x0) {
      return unaff_retaddr;
    }
    cVar1 = FUN_004d74b0();
    if (cVar1 == '\0') {
      return unaff_retaddr;
    }
    if ((int *)param_1[0x16] == (int *)0x0) {
      return unaff_retaddr;
    }
    iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x380))();
    if (iVar3 == 0) {
      return unaff_retaddr;
    }
    pfVar9 = (float *)(**(code **)(*param_1 + 0x174))();
    fStack_10 = local_20._4_4_ - *pfVar9;
    fStack_c = local_18 - pfVar9[1];
    fStack_8 = fStack_14 - pfVar9[2];
    fVar11 = (float10)FUN_00404c90();
    if ((((float10)100.0 <= fVar11) || (iVar3 = (**(code **)(*param_1 + 0x18c))(), iVar3 != 4)) &&
       (iVar3 = (**(code **)(*param_1 + 0x18c))(), iVar3 != 9)) {
      return unaff_retaddr;
    }
  }
  return 1;
}



uint FUN_00567280(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX & 0xffffff00;
  if ((param_1 != 0) && (*(int **)(param_1 + 0x58) != (int *)0x0)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0xc0))();
  }
  return uVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005672a0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  bool bVar4;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)acStack_108;
  switch((char)in_ECX[8]) {
  case '\0':
    if (in_ECX[10] != 0) {
      iVar1 = FUN_00569e60();
      if (((iVar1 == 0) && (iVar1 = FUN_00569e70(), iVar1 == 0)) &&
         (iVar1 = FUN_00569e80(), iVar1 == 0)) break;
      iVar1 = FUN_00569e50();
      if (iVar1 == 0) {
        piVar2 = (int *)FUN_00569e60();
        iVar1 = (**(code **)(*piVar2 + 0x170))();
        switch(*(undefined1 *)(iVar1 + 4)) {
        case 0x12:
        case 0x17:
        case 0x18:
        case 0x1c:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x24:
switchD_00567361_caseD_1:
          in_ECX[6] = 2;
          goto LAB_00567606;
        case 0x23:
          goto switchD_00567361_caseD_f;
        }
      }
      else {
        if (iVar1 == 1) {
          iVar1 = FUN_00569e70();
          switch(*(undefined1 *)(iVar1 + 4)) {
          default:
switchD_00567361_caseD_2:
            in_ECX[6] = 0x1a;
            return;
          case 0x23:
            goto switchD_00567361_caseD_f;
          }
        }
        if (iVar1 == 2) {
          uVar3 = FUN_00569e80();
          switch(uVar3) {
          case 1:
          case 7:
          case 0xb:
          case 0xc:
          case 0x10:
            goto switchD_00567361_caseD_1;
          default:
            goto switchD_00567361_caseD_2;
          case 0xf:
            goto switchD_00567361_caseD_f;
          }
        }
      }
      in_ECX[6] = 3;
      break;
    }
    if ((in_ECX[9] != 0) && (iVar1 = FUN_005697a0(), iVar1 != 0)) {
      in_ECX[6] = 1;
      break;
    }
  case '\x06':
    in_ECX[6] = 0;
    break;
  case '\x01':
    if ((in_ECX[10] != 0) &&
       (((iVar1 = FUN_00569e60(), iVar1 != 0 || (iVar1 = FUN_00569e70(), iVar1 != 0)) ||
        (iVar1 = FUN_00569e80(), iVar1 != 0)))) {
      in_ECX[6] = 7;
      break;
    }
  default:
switchD_005672c8_caseD_d:
    in_ECX[6] = -1;
    break;
  case '\x02':
    if ((in_ECX[10] != 0) &&
       (((iVar1 = FUN_00569e60(), iVar1 != 0 || (iVar1 = FUN_00569e70(), iVar1 != 0)) ||
        (iVar1 = FUN_00569e80(), iVar1 != 0)))) {
      iVar1 = FUN_00569e50();
      if (iVar1 == 0) {
        piVar2 = (int *)FUN_00569e60();
        iVar1 = (**(code **)(*piVar2 + 0x170))();
        if (*(char *)(iVar1 + 4) != '#') {
          piVar2 = (int *)FUN_00569e60();
          iVar1 = (**(code **)(*piVar2 + 0x170))();
LAB_00567507:
          bVar4 = *(char *)(iVar1 + 4) == '$';
LAB_0056750b:
          if (!bVar4) goto LAB_00567519;
        }
      }
      else {
        if (iVar1 != 1) {
          if (iVar1 == 2) {
            iVar1 = FUN_00569e80();
            if (iVar1 == 0xf) goto LAB_0056750d;
            iVar1 = FUN_00569e80();
            bVar4 = iVar1 == 0x10;
            goto LAB_0056750b;
          }
LAB_00567519:
          in_ECX[6] = 9;
          break;
        }
        iVar1 = FUN_00569e70();
        if (*(char *)(iVar1 + 4) != '#') {
          iVar1 = FUN_00569e70();
          goto LAB_00567507;
        }
      }
LAB_0056750d:
      in_ECX[6] = 8;
      break;
    }
    goto switchD_005672c8_caseD_d;
  case '\x03':
    in_ECX[6] = 5;
    break;
  case '\x04':
    in_ECX[6] = 4;
    break;
  case '\x05':
    in_ECX[6] = 1;
    break;
  case '\a':
    in_ECX[6] = 0x1d;
    break;
  case '\b':
    in_ECX[6] = 0x1e;
    break;
  case '\t':
    in_ECX[6] = 0x20;
    break;
  case '\n':
    in_ECX[6] = 0x23;
    break;
  case '\v':
    in_ECX[6] = 0x22;
    break;
  case '\f':
    in_ECX[6] = 0xc;
    break;
  case '\x0e':
    in_ECX[6] = 0xd;
    break;
  case '\x0f':
    in_ECX[6] = 0xb;
    break;
  case '\x11':
    in_ECX[6] = 0x14;
    break;
  case '\x12':
    in_ECX[6] = 10;
    break;
  case '\x13':
    in_ECX[6] = 0xf;
    break;
  case '\x15':
    in_ECX[6] = 0x15;
    break;
  case '\x16':
    in_ECX[6] = 0x17;
    break;
  case '\x17':
    in_ECX[6] = 0x18;
    break;
  case '\x18':
    in_ECX[6] = 0x19;
    break;
  case '\x19':
    in_ECX[6] = 0x1b;
    break;
  case '\x1a':
    in_ECX[6] = 0x1c;
    break;
  case '\x1c':
    in_ECX[6] = 0x21;
    break;
  case '\x1d':
    in_ECX[6] = 0x24;
    break;
  case '\x1e':
    in_ECX[6] = 0x25;
    break;
  case '\x1f':
    in_ECX[6] = 0x26;
    break;
  case ' ':
    in_ECX[6] = 0x27;
  }
LAB_00567606:
  if (in_ECX[6] == -1) {
    uVar3 = (**(code **)(*in_ECX + 0xd4))();
    _sprintf(acStack_108,
             "Package \'%s\' is not a valid package because it is missing necessary Target Or Location Info."
             ,uVar3);
    FUN_004a7a60(acStack_108);
  }
  return;
switchD_00567361_caseD_f:
  in_ECX[6] = 0x16;
  return;
}



undefined1 FUN_00567770(void)

{
  undefined1 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  switch(*(undefined1 *)(in_ECX + 0x20)) {
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1b:
  case 0x1c:
  case 0x1e:
  case 0x20:
    uVar1 = 1;
  }
  return uVar1;
}



float10 FUN_005677b0(int *param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  float10 fVar7;
  int local_24;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  local_24 = 0;
  if (param_2 != 1) {
    if (param_2 == 2) {
      piVar3 = (int *)FUN_005eae10();
      if (piVar3 == (int *)0x0) goto LAB_005679eb;
      (**(code **)(*piVar3 + 0x174))();
      cVar2 = FUN_004d74b0();
      if (cVar2 != '\0') goto LAB_00567a4b;
      iVar5 = (**(code **)(*piVar3 + 0x170))();
      if ((iVar5 == DAT_00b35eb0) ||
         (iVar5 = (**(code **)(*piVar3 + 0x170))(), iVar5 == DAT_00b35eac)) {
LAB_00567b37:
        return (float10)0x14;
      }
      if ((*(int *)(in_ECX + 0x28) == 0) ||
         ((iVar5 = FUN_00569e60(), iVar5 == 0 || (local_24 = FUN_00452a60(), local_24 == 0)))) {
        cVar2 = (**(code **)(*piVar3 + 400))();
        if (cVar2 == '\0') {
          uVar4 = (**(code **)(*piVar3 + 0x170))();
          FUN_0046d5c0(uVar4);
          local_24 = FUN_009828c0();
          iVar5 = (**(code **)(*piVar3 + 0x170))();
          cVar2 = *(char *)(iVar5 + 4);
          if (((cVar2 != '\x12') && (cVar2 != '\x17')) && (cVar2 != '\x1c')) {
            (**(code **)(*param_1 + 0x26c))();
            local_24 = FUN_009828c0();
            fVar7 = (float10)FUN_005e40c0();
            iVar5 = (**(code **)(*piVar3 + 0x174))();
            fVar1 = *(float *)(iVar5 + 8);
            if ((fVar1 < (float)fVar7) &&
               (iVar5 = (**(code **)(*param_1 + 0x15c))(auStack_18),
               (float)fVar7 - fVar1 < *(float *)(iVar5 + 8) * 0.5)) {
              (**(code **)(*param_1 + 0x15c))(auStack_c);
              local_24 = FUN_009828c0();
            }
          }
          if (local_24 != 0) goto LAB_00567b6b;
        }
LAB_005679eb:
        return (float10)DAT_00b36b28;
      }
    }
    else {
      if (param_2 != 3) goto LAB_00567b6b;
      if (*(int *)(in_ECX + 0x24) == 0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_005697a0();
      }
      if (local_24 == 0) {
        if ((*(int *)(in_ECX + 0x24) != 0) && (piVar3 = (int *)FUN_005697e0(), piVar3 != (int *)0x0)
           ) {
          cVar2 = FUN_004d74b0();
          if (cVar2 != '\0') goto LAB_00567a4b;
          uVar4 = (**(code **)(*piVar3 + 0x170))();
          FUN_0046d5c0(uVar4);
          local_24 = FUN_009828c0();
        }
        if (local_24 == 0) goto LAB_00567846;
      }
      if (local_24 < 0) {
LAB_00567846:
        return (float10)DAT_00b36b28;
      }
    }
    goto LAB_00567b6b;
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_005697a0();
  }
  if (local_24 != 0) goto LAB_00567b6b;
  if (*(int *)(in_ECX + 0x24) == 0) {
LAB_00567b5d:
    if (local_24 != 0) goto LAB_00567b6b;
  }
  else {
    piVar3 = (int *)FUN_005697e0();
    if (piVar3 == (int *)0x0) {
      iVar5 = FUN_00569740();
      if (iVar5 == 3) goto LAB_00567a4b;
      goto LAB_00567b5d;
    }
    piVar6 = (int *)(**(code **)(*param_1 + 0x380))();
    if ((piVar3 == piVar6) || (cVar2 = FUN_004d74b0(), cVar2 != '\0')) {
LAB_00567a4b:
      return (float10)10;
    }
    cVar2 = (**(code **)(*piVar3 + 400))();
    if (cVar2 == '\0') {
      iVar5 = (**(code **)(*piVar3 + 0x170))();
      if ((iVar5 == DAT_00b35eb0) ||
         (iVar5 = (**(code **)(*piVar3 + 0x170))(), iVar5 == DAT_00b35eac)) goto LAB_00567b37;
      uVar4 = (**(code **)(*piVar3 + 0x170))();
      FUN_0046d5c0(uVar4);
      FUN_009828c0();
      local_24 = FUN_009828c0();
    }
    else {
      iVar5 = (**(code **)(*piVar3 + 0x18c))();
      if (iVar5 == 9) {
        return (float10)0x5a;
      }
      uVar4 = (**(code **)(*piVar3 + 0x170))();
      FUN_0046d5c0(uVar4);
      FUN_009828c0();
      local_24 = FUN_009828c0();
    }
    if (-1 < local_24) goto LAB_00567b5d;
  }
  local_24 = DAT_00b36b28;
LAB_00567b6b:
  return (float10)local_24;
}



undefined4 FUN_00567b80(char *param_1)

{
  char cVar1;
  int in_ECX;
  char cVar2;
  bool bVar3;
  
  cVar2 = *(char *)(in_ECX + 0x2c);
  if ((((cVar2 == -1) && (*param_1 == -1)) || (cVar1 = *param_1, cVar2 == cVar1)) &&
     ((((cVar2 = *(char *)(in_ECX + 0x2e), cVar2 == '\0' && (param_1[2] == -1)) ||
       (cVar1 = param_1[2], cVar2 == cVar1)) &&
      (((cVar2 = *(char *)(in_ECX + 0x2d), cVar2 == -1 && (param_1[1] == -1)) ||
       (cVar1 = param_1[1], cVar2 == cVar1)))))) {
    cVar2 = *(char *)(in_ECX + 0x2f);
    if (((cVar2 == -1) && (param_1[3] == -1)) || (cVar1 = param_1[3], cVar2 == cVar1)) {
      return 0;
    }
    if (cVar2 == -1) {
      return 1;
    }
    if (cVar1 == -1) {
      return 0xffffffff;
    }
    bVar3 = SBORROW1(cVar2,cVar1);
    cVar2 = cVar2 - cVar1;
  }
  else {
    if (cVar2 == -1) {
      return 1;
    }
    if (cVar1 == -1) {
      return 0xffffffff;
    }
    bVar3 = SBORROW1(cVar2,cVar1);
    cVar2 = cVar2 - cVar1;
  }
  if (bVar3 == cVar2 < '\0') {
    return 1;
  }
  return 0xffffffff;
}



undefined1 FUN_00567c00(char param_1)

{
  char cVar1;
  undefined1 uVar2;
  int in_ECX;
  bool bVar3;
  
  cVar1 = FUN_00402c40();
  if ((param_1 != '\0') && (cVar1 = cVar1 + -1, cVar1 < '\0')) {
    cVar1 = '\x06';
  }
  uVar2 = 0;
  switch(*(undefined1 *)(in_ECX + 0x2d)) {
  case 0:
    bVar3 = cVar1 == '\0';
    break;
  case 1:
    bVar3 = cVar1 == '\x01';
    break;
  case 2:
    bVar3 = cVar1 == '\x02';
    break;
  case 3:
    bVar3 = cVar1 == '\x03';
    break;
  case 6:
switchD_00567c26_caseD_6:
    bVar3 = cVar1 == '\x06';
    break;
  case 7:
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      return 1;
    }
    return 0;
  case 8:
    if (cVar1 != '\0') goto switchD_00567c26_caseD_6;
    goto LAB_00567c6a;
  case 9:
    if ((cVar1 == '\x01') || (cVar1 == '\x03')) goto LAB_00567c6a;
  case 5:
    bVar3 = cVar1 == '\x05';
    break;
  case 10:
    if (cVar1 == '\x02') goto LAB_00567c6a;
  case 4:
    bVar3 = cVar1 == '\x04';
    break;
  default:
    goto switchD_00567c26_default;
  }
  if (bVar3) {
LAB_00567c6a:
    uVar2 = 1;
  }
switchD_00567c26_default:
  return uVar2;
}



undefined1 FUN_00567ca0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x28) == 0) {
    return 0;
  }
  iVar2 = FUN_00569e50();
  if (iVar2 == 0) {
    iVar2 = FUN_00569e60();
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = (int *)FUN_00569e60();
    cVar1 = (**(code **)(*piVar3 + 400))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return 0;
      }
      iVar2 = FUN_00569e80();
      if (1 < iVar2 - 0xfU) {
        return 0;
      }
      return 1;
    }
    iVar2 = FUN_00569e70();
    if (*(char *)(iVar2 + 4) != '#') {
      if (*(char *)(iVar2 + 4) != '$') {
        return 0;
      }
      return 1;
    }
  }
  return 1;
}



short FUN_00567d20(void)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  short sVar6;
  
  sVar6 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar6 = 6;
  }
  sVar6 = sVar6 + 9;
  if (*(int *)(in_ECX + 0x24) != 0) {
    sVar3 = FUN_00569a20();
    sVar6 = sVar6 + sVar3;
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    sVar3 = FUN_0056a000();
    sVar6 = sVar6 + sVar3;
  }
  sVar6 = sVar6 + 4;
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0xe9d,"..\\TES Shared\\Package.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,sVar6,*puVar1,uVar5);
      return sVar6;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar6,0xe9d,
                 "..\\TES Shared\\Package.cpp");
    return sVar6;
  }
  return sVar6;
}



void FUN_00567e00(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  short *psVar8;
  byte local_9;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  psVar8 = (short *)0x0;
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    psVar8 = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  FUN_0045b9a0(in_ECX + 0x1c,8);
  local_9 = *(int *)(in_ECX + 0x24) != 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    local_9 = local_9 | 2;
  }
  FUN_0046ac70(&local_9,1);
  if (*(int *)(in_ECX + 0x24) != 0) {
    FUN_00569cf0();
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    FUN_0056a290();
  }
  FUN_0045b9a0(in_ECX + 0x18,4);
  if (DAT_00b05bac != '\0') {
    iVar2 = *(int *)(DAT_00b33b00 + 0x14);
    puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar2 - iVar1,0xeba,
                   "..\\TES Shared\\Package.cpp");
    }
    else {
      piVar6 = (int *)FUN_0046b250(*puVar3);
      uVar7 = (**(code **)(*piVar6 + 0xd4))
                        (*(undefined4 *)((int)puVar3 + 5),0xeba,"..\\TES Shared\\Package.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar2 - iVar1,*puVar3,uVar7);
    }
  }
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)psVar8 + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\Package.cpp",0xeba);
    }
    *psVar8 = (short)uVar4 - (short)psVar8;
  }
  return;
}



void FUN_00567f70(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  char *pcVar9;
  byte bStack_19;
  uint local_18;
  int local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bd796;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = 0;
  iVar8 = 0;
  cVar3 = FUN_0045a170(uVar4);
  if (cVar3 != '\0') {
    FUN_004534d0(&local_14,4);
    if (local_14 != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\Package.cpp",0xec0,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar2);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\Package.cpp",0xec0,*puVar2,uVar6);
      }
    }
    iVar8 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_18,2);
  }
  FUN_004534d0(in_ECX + 0x1c,8);
  FUN_0046ac80(&bStack_19,1);
  if ((bStack_19 & 1) != 0) {
    iStack_10 = FUN_00401f00(0xc);
    uStack_4 = 0;
    if (iStack_10 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_005696b0();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x24) = uVar6;
    FUN_00569a40();
  }
  if ((bStack_19 & 2) != 0) {
    iStack_10 = FUN_00401f00(0xc);
    uStack_4 = 1;
    if (iStack_10 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00569e40();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x28) = uVar6;
    FUN_0056a020();
  }
  FUN_004534d0(in_ECX + 0x18,4);
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar7 = local_18 & 0xffff;
      if (uVar7 + iVar8 < uVar4) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar4 - uVar7) - iVar8;
        pcVar9 = "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
        ;
      }
      else {
        if (uVar7 + iVar8 <= uVar4) goto LAB_0056821e;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar7 - uVar4) + iVar8;
        pcVar9 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar9,iVar8,"..\\TES Shared\\Package.cpp",0xed7,uVar1);
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar7 = (local_18 & 0xffff) + iVar8;
      if (uVar7 < uVar4) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar4 - (local_18 & 0xffff)) - iVar8,"..\\TES Shared\\Package.cpp",0xed7,
                     *puVar2,uVar6);
        *unaff_FS_OFFSET = local_c;
        return;
      }
      if (uVar4 < uVar7) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_18 & 0xffff) - uVar4) + iVar8,"..\\TES Shared\\Package.cpp",0xed7,
                     *puVar2,uVar6);
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
  }
LAB_0056821e:
  *unaff_FS_OFFSET = local_c;
  return;
}



char FUN_00568240(int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_1 != 0) {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0x10:
      cVar1 = '\x1a';
      break;
    case 0x12:
      return '\x01';
    case 0x13:
      return '\x02';
    case 0x14:
    case 0x22:
      return '\x03';
    case 0x15:
      return '\x04';
    case 0x16:
      return '\x05';
    case 0x17:
      return '\x06';
    case 0x18:
      return '\a';
    case 0x19:
      return (-((*(byte *)(param_1 + 0x7c) & 2) != 0) & 0xcU) + 8;
    case 0x1a:
      return '\t';
    case 0x1b:
      return '\n';
    case 0x1f:
      return '\v';
    case 0x20:
      return '\f';
    case 0x21:
      if ((*(char *)(param_1 + 0x90) != '\x05') && (*(char *)(param_1 + 0x90) != '\x04')) {
        return '\x18';
      }
      return '\x19';
    case 0x23:
      return '\x0f';
    case 0x24:
      return '\x10';
    case 0x26:
      return '\x11';
    case 0x27:
      return '\x12';
    case 0x28:
      cVar1 = FUN_00484320();
      return (cVar1 != '\0') + '\x13';
    }
  }
  return cVar1;
}



undefined1 FUN_00568370(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x10:
    switch(param_2) {
    case 0x1a:
      goto switchD_0056849a_caseD_d;
    case 0x1b:
    case 0x1c:
    case 0x1d:
      if (param_2 == 0x1b) {
        cVar1 = FUN_00414fe0();
        if (cVar1 == '\0') {
          return 0;
        }
        return 1;
      }
      if (param_2 == 0x1c) {
        cVar1 = FUN_00415030();
        if (cVar1 == '\0') {
          return 0;
        }
        return 1;
      }
      if (param_2 != 0x1d) {
        return 0;
      }
      cVar1 = FUN_00415080();
      if (cVar1 == '\0') {
        return 0;
      }
      return 1;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      uVar2 = FUN_00415360();
      switch(uVar2) {
      case 0x14:
        bVar4 = param_2 == 0x1e;
        break;
      case 0x15:
        bVar4 = param_2 == 0x1f;
        break;
      case 0x16:
        bVar4 = param_2 == 0x20;
        break;
      case 0x17:
        bVar4 = param_2 == 0x21;
        break;
      case 0x18:
        bVar4 = param_2 == 0x22;
        break;
      case 0x19:
        bVar4 = param_2 == 0x23;
        break;
      default:
        return 0;
      }
      break;
    default:
      return 0;
    }
  default:
    goto switchD_0056839c_caseD_11;
  case 0x12:
    bVar4 = param_2 == 1;
    break;
  case 0x13:
    bVar4 = param_2 == 2;
    break;
  case 0x14:
    bVar4 = param_2 == 3;
    goto LAB_00568468;
  case 0x15:
    bVar4 = param_2 == 4;
    break;
  case 0x16:
    if (param_2 != 5) {
      bVar4 = param_2 == 0x16;
      break;
    }
    goto switchD_0056849a_caseD_d;
  case 0x17:
    bVar4 = param_2 == 6;
    break;
  case 0x18:
    bVar4 = param_2 == 7;
    break;
  case 0x19:
    if (param_2 != 8) {
      if (param_2 != 0x14) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x7c) & 2) == 0) {
        return 0;
      }
      return 1;
    }
    goto switchD_0056849a_caseD_d;
  case 0x1a:
    bVar4 = param_2 == 9;
    break;
  case 0x1b:
    bVar4 = param_2 == 10;
    break;
  case 0x1f:
    bVar4 = param_2 == 0xb;
    break;
  case 0x20:
    bVar4 = param_2 == 0xc;
    break;
  case 0x21:
    switch(param_2) {
    case 0xd:
    case 0x15:
    case 0x16:
      goto switchD_0056849a_caseD_d;
    default:
      goto switchD_0056839c_caseD_11;
    case 0x18:
    case 0x19:
      switch(*(undefined1 *)(param_1 + 0x90)) {
      case 0:
      case 1:
      case 2:
      case 3:
        bVar4 = param_2 == 0x18;
        break;
      case 4:
      case 5:
        bVar4 = param_2 == 0x19;
        break;
      default:
        goto switchD_0056839c_caseD_11;
      }
      break;
    }
  case 0x22:
    bVar4 = param_2 == 0xe;
LAB_00568468:
    if (!bVar4) {
      if (param_2 < 0x15) {
        return 0;
      }
      if (0x16 < param_2) {
        return 0;
      }
      return 1;
    }
    goto switchD_0056849a_caseD_d;
  case 0x23:
    bVar4 = param_2 == 0xf;
    break;
  case 0x24:
    bVar4 = param_2 == 0x10;
    break;
  case 0x26:
    bVar4 = param_2 == 0x11;
    break;
  case 0x27:
    bVar4 = param_2 == 0x12;
    break;
  case 0x28:
    if (param_2 != 0x13) {
      if (param_2 != 0x14) {
        return 0;
      }
      cVar1 = FUN_00484320();
      if (cVar1 == '\0') {
        return 0;
      }
      return 1;
    }
    goto switchD_0056849a_caseD_d;
  }
  if (bVar4) {
switchD_0056849a_caseD_d:
    uVar3 = 1;
  }
switchD_0056839c_caseD_11:
  return uVar3;
}



void FUN_00568640(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bd7de;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6743c;
  local_4 = 2;
  if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
    FUN_00675090(in_ECX);
  }
  cVar2 = FUN_00446b80(in_ECX[3]);
  if (cVar2 != '\0') {
    in_ECX[7] = in_ECX[7] & 0xfffff7ff;
  }
  iVar1 = in_ECX[9];
  if (iVar1 != 0) {
    FUN_00569730(uVar3);
    FUN_00401f20(iVar1);
  }
  iVar1 = in_ECX[10];
  if (iVar1 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar1);
  }
  FUN_0056a750();
  thunk_FUN_0046b170();
  local_4._0_1_ = 1;
  thunk_FUN_0056a750();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0060d0a0();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00568730(void)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [8];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd808;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  FUN_00569d60(uVar2);
  local_4 = 0;
  FUN_00569dd0(local_14);
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  *(undefined4 *)(in_ECX + 0x18) = 0xffffffff;
  cVar1 = FUN_00446b80(*(undefined4 *)(in_ECX + 0xc));
  if (cVar1 != '\0') {
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xfffff7ff;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_005687d0(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  undefined1 auStack_164 [2];
  char local_162;
  undefined1 uStack_161;
  int iStack_160;
  float local_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  int iStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  char acStack_130 [300];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_164;
  if ((param_1 == (int *)0x0) || (iVar3 = FUN_005eae10(), iVar3 == 0)) {
    return 0;
  }
  local_162 = '\0';
  piVar4 = (int *)FUN_005eae10();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x174))();
  fStack_158 = *pfVar5;
  fStack_154 = pfVar5[1];
  fStack_150 = pfVar5[2];
  iVar3 = FUN_004d7630();
  if (iVar3 != 0) {
    pfVar5 = (float *)FUN_004d76f0();
    fStack_158 = *pfVar5;
    fStack_154 = pfVar5[1];
    fStack_150 = pfVar5[2];
  }
  iStack_160 = FUN_004d6670();
  iVar3 = FUN_006ecc80();
  if ((iVar3 != 0) && (cVar1 = FUN_004c97f0(), cVar1 == '\0')) {
    iVar3 = 0;
  }
  iStack_140 = FUN_004d6670();
  iVar6 = FUN_006ecc80();
  if ((iVar6 == 0) || (cVar1 = FUN_004c97f0(), cVar1 == '\0')) {
    if (iVar3 != 0) {
      return 0;
    }
    if (iStack_140 != iStack_160) {
      return 0;
    }
  }
  else if (iVar6 != iVar3) {
    return 0;
  }
  FUN_005677b0(param_1,2);
  iVar3 = FUN_009828c0();
  uStack_161 = 0;
  iStack_160 = iVar3;
  pfVar5 = (float *)(**(code **)(*param_1 + 0x174))();
  fStack_14c = fStack_158 - *pfVar5;
  fStack_148 = fStack_154 - pfVar5[1];
  fStack_144 = fStack_150 - pfVar5[2];
  cVar1 = FUN_004d74b0();
  if (((cVar1 == '\0') || ((int *)param_1[0x16] == (int *)0x0)) ||
     (iVar6 = (**(code **)(*(int *)param_1[0x16] + 0x380))(), iVar6 == 0)) {
    cVar1 = (**(code **)(*piVar4 + 400))();
    if (cVar1 != '\0') {
      iVar6 = (**(code **)(*piVar4 + 0x18c))();
      if (iVar6 == 9) {
        iVar3 = 0x5a;
      }
      else {
        iVar6 = (**(code **)(*param_1 + 0x18c))();
        if (iVar6 != 4) {
          if ((float)iStack_160 < 0.0 != ((float)iStack_160 == 0.0)) {
            (**(code **)(*piVar4 + 0x170))();
            FUN_0046d5c0();
            local_15c = (float)FUN_009828c0();
            iVar3 = FUN_009828c0();
            iStack_160 = iVar3;
          }
          goto LAB_00568a3d;
        }
        iVar3 = 200;
      }
      goto LAB_00568a34;
    }
    iVar6 = (**(code **)(*piVar4 + 0x170))();
    if ((iVar6 == DAT_00b35eb0) || (iVar6 = (**(code **)(*piVar4 + 0x170))(), iVar6 == DAT_00b35eac)
       ) {
      iVar3 = 0x14;
      goto LAB_00568a34;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_1[0x16] + 8))();
    if (iVar3 == 0) {
      pfVar5 = (float *)(**(code **)(*(int *)param_1[0x16] + 0x380))();
      fStack_158 = *pfVar5;
      fStack_154 = pfVar5[1];
      fStack_150 = pfVar5[2];
    }
    iVar3 = 10;
LAB_00568a34:
    local_162 = '\x01';
    iStack_160 = iVar3;
  }
LAB_00568a3d:
  local_15c = ABS(fStack_144);
  if (local_15c < _DAT_00b3a470) {
    fStack_144 = 0.0;
  }
  cVar2 = '\0';
  cVar1 = (**(code **)(*param_1 + 0x334))();
  if ((cVar1 != '\0') && (iVar6 = (**(code **)(*param_1 + 0x330))(), iVar6 != 0)) {
    (**(code **)(*param_1 + 0x330))();
    cVar2 = FUN_006163a0();
  }
  cVar1 = FUN_00684b30(param_1,&fStack_158,(float)iStack_160,local_162 == '\0');
  if ((cVar1 == '\0') || (cVar2 != '\0')) {
    cVar1 = FUN_004d74b0();
    if ((cVar1 == '\0') ||
       (((int *)param_1[0x16] == (int *)0x0 ||
        (iVar6 = (**(code **)(*(int *)param_1[0x16] + 0x380))(), iVar6 == 0)))) goto LAB_00568b4d;
    pfVar5 = (float *)(**(code **)(*param_1 + 0x174))();
    fStack_13c = fStack_158 - *pfVar5;
    fStack_138 = fStack_154 - pfVar5[1];
    fStack_134 = fStack_150 - pfVar5[2];
    fVar7 = (float10)FUN_00404c90();
    if ((((float10)100.0 <= fVar7) || (iVar6 = (**(code **)(*param_1 + 0x18c))(), iVar6 != 4)) &&
       (iVar6 = (**(code **)(*param_1 + 0x18c))(), iVar6 != 9)) goto LAB_00568b4d;
  }
  uStack_161 = 1;
LAB_00568b4d:
  piVar4 = (int *)FUN_00579440();
  if (piVar4 == param_1) {
    fVar7 = (float10)FUN_00404c90();
    _sprintf(acStack_130,"radius %.02f distance %.02f",iVar3,(double)fVar7);
    OutputDebugStringA(acStack_130);
  }
  return uStack_161;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00568bb0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  
  if (*(int *)(in_ECX + 0x28) == 0) {
    return;
  }
  iVar2 = FUN_00569e50();
  piVar7 = (int *)0x0;
  if (iVar2 == 0) {
    piVar7 = (int *)FUN_00569e60();
    if (piVar7 == (int *)0x0) goto LAB_00568e00;
    if ((((uint)piVar7[2] >> 5 & 1) != 0) && (piVar7 != (int *)0xffffffbc)) {
      piVar7 = (int *)FUN_0041fb00();
    }
  }
  else if (iVar2 == 1) {
    iVar8 = 0;
    iVar2 = FUN_00569e70();
    if (iVar2 != 0) {
      piVar7 = (int *)FUN_00569e70();
      cVar1 = (**(code **)(*piVar7 + 0xa4))();
      if (cVar1 != '\0') {
        iVar8 = FUN_00569e70();
      }
    }
    if ((DAT_00b333c4 == (int *)0x0) ||
       (iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))(), piVar7 = DAT_00b333c4, iVar8 != iVar2)) {
      puVar11 = &LAB_00567730;
      uVar10 = _DAT_00b3a3c8;
      uVar3 = (**(code **)(*param_1 + 0x174))(_DAT_00b3a3c8,&LAB_00567730,iVar8);
      uVar9 = _DAT_00b3a3c8;
      uVar4 = (**(code **)(*param_1 + 0x174))(_DAT_00b3a3c8,uVar3);
      uVar5 = FUN_006ecc80(uVar4);
      FUN_00446b90(uVar5,uVar4,uVar9,uVar3,uVar10,puVar11,iVar8);
      piVar7 = DAT_00b3a3c4;
      DAT_00b3a3c4 = (int *)0x0;
    }
  }
  else {
    if (iVar2 != 2) goto LAB_00568e00;
    FUN_00569e80();
    uVar12 = 0;
    puVar11 = &LAB_00567730;
    uVar10 = _DAT_00b3a3c8;
    uVar3 = (**(code **)(*param_1 + 0x174))(_DAT_00b3a3c8,&LAB_00567730,0);
    uVar9 = _DAT_00b3a3c8;
    uVar4 = (**(code **)(*param_1 + 0x174))(_DAT_00b3a3c8,uVar3);
    uVar5 = FUN_006ecc80(uVar4);
    FUN_00446b90(uVar5,uVar4,uVar9,uVar3,uVar10,puVar11,uVar12);
    piVar7 = DAT_00b3a3c4;
    DAT_00b3a3c4 = (int *)0x0;
  }
  if (((piVar7 != (int *)0x0) && (cVar1 = (**(code **)(*piVar7 + 400))(), cVar1 != '\0')) &&
     ((*(uint *)(in_ECX + 0x1c) & 0x800) == 0)) {
    cVar1 = *(char *)(in_ECX + 0x20);
    if ((cVar1 == '\x01') || (cVar1 == '\a')) {
      FUN_00420ef0();
      if (((piVar7 == DAT_00b333c4) &&
          ((piVar6 = (int *)(**(code **)(*(int *)param_1[0x16] + 0x3d0))(), piVar6 != DAT_00b333c4
           && (cVar1 = FUN_00663a60(param_1), cVar1 == '\0')))) &&
         (iVar2 = FUN_00663a00(), DAT_00b36a80 < iVar2)) {
        (**(code **)(*(int *)param_1[0x16] + 0x188))(param_1,0xffffffff);
        FUN_0057acc0(DAT_00b394e8,0,1,0xbf800000);
        FUN_005e03c0(piVar7);
        return;
      }
      FUN_00424c50(param_1);
    }
    else if (cVar1 == '\x02') {
      FUN_00424c50(piVar7);
      FUN_005e03c0(piVar7);
      return;
    }
  }
LAB_00568e00:
  FUN_005e03c0(piVar7);
  return;
}



void FUN_00568e10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd84e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6743c;
  FUN_00569d60();
  local_4._0_1_ = 1;
  FUN_00434920();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 1) = 0x3d;
  FUN_00568730();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00568e90(byte param_1)

{
  FUN_00568640();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00568eb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_009828c0();
  if (iVar1 != param_1) {
    if ((float)(param_1 + param_2) <= 23.0) {
      if (iVar1 <= param_1) {
        return 0;
      }
    }
    else if ((iVar1 <= param_1) && (iVar2 = FUN_009828c0(), iVar2 <= iVar1)) {
      return 0;
    }
    if (param_1 + param_2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



void thunk_FUN_0067b1e0(int param_1)

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



void FUN_00568f30(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *in_ECX;
  
  iVar2 = in_ECX[1];
  piVar1 = in_ECX + 1;
  while (iVar2 != 0) {
    iVar2 = *(int *)(*piVar1 + 4);
    FUN_00401f20(*piVar1);
    *piVar1 = iVar2;
  }
  *in_ECX = 0;
  if (param_1[1] != 0) goto LAB_00568f70;
  piVar5 = (int *)*param_1;
  while (piVar5 != (int *)0x0) {
LAB_00568f70:
    iVar2 = *param_1;
    if (iVar2 != 0) {
      iVar3 = *piVar1;
      piVar5 = piVar1;
      piVar4 = in_ECX;
      while (iVar3 != 0) {
        piVar4 = (int *)*piVar5;
        piVar5 = piVar4 + 1;
        iVar3 = piVar4[1];
      }
      if (*piVar4 == 0) {
        *piVar4 = iVar2;
      }
      else {
        piVar5 = (int *)FUN_00401f00(8);
        if (piVar5 == (int *)0x0) {
          piVar4[1] = 0;
        }
        else {
          *piVar5 = iVar2;
          piVar5[1] = 0;
          piVar4[1] = (int)piVar5;
        }
      }
    }
    param_1 = (int *)param_1[1];
    piVar5 = param_1;
  }
  return;
}



undefined4 FUN_00568fd0(int *param_1)

{
  int *in_ECX;
  
  if ((in_ECX[1] == 0) && (*in_ECX == 0)) {
    if ((param_1[1] != 0) || (*param_1 != 0)) {
      return 1;
    }
  }
  else {
    do {
      if (*in_ECX == 0) {
        return 1;
      }
      if (param_1 == (int *)0x0) {
        return 1;
      }
      if (*param_1 == 0) {
        return 1;
      }
      if (*in_ECX != *param_1) {
        return 1;
      }
      in_ECX = (int *)in_ECX[1];
      param_1 = (int *)param_1[1];
    } while (in_ECX != (int *)0x0);
    if (param_1 != (int *)0x0) {
      return 1;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00569020(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *in_ECX;
  float10 fVar8;
  undefined1 uStack_13c;
  char local_13b;
  char local_13a;
  char local_139;
  int *local_138;
  int *local_134;
  char acStack_130 [300];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&uStack_13c;
  local_138 = (int *)0x0;
  local_134 = in_ECX;
  if (param_1 != 0) {
    local_138 = (int *)FUN_005e0380();
  }
  if ((in_ECX[1] != 0) || (*in_ECX != 0)) {
    while (piVar2 = (int *)*local_134, piVar2 != (int *)0x0) {
      cVar3 = FUN_005660e0();
      if (((((cVar3 == '\0') && (cVar3 = FUN_00565df0(), cVar3 == '\0')) ||
           ((cVar3 = FUN_00565df0(), cVar3 != '\0' && (cVar3 = FUN_004200c0(piVar2), cVar3 == '\0'))
           )) && (((((uint)piVar2[7] >> 2 & 1) == 0 || (local_138 != piVar2)) ||
                  (cVar3 = FUN_00567280(param_1), cVar3 == '\0')))) &&
         (piVar1 = piVar2 + 0xb, piVar1 != (int *)0x0)) {
        local_13b = '\0';
        local_13a = '\0';
        local_139 = '\0';
        if (0x18 < (int)*(char *)((int)piVar2 + 0x2f) + piVar2[0xc]) {
          local_13b = FUN_00567c00(1);
          cVar3 = FUN_00402ba0();
          iVar5 = cVar3 + -1;
          if (iVar5 < 0) {
            iVar5 = 0x1e;
          }
          if (*(char *)((int)piVar2 + 0x2e) == iVar5) {
            local_13a = '\x01';
          }
          iVar5 = FUN_00402b80();
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) {
            iVar5 = 0xc;
          }
          if ((char)*piVar1 == iVar5) {
            local_139 = '\x01';
          }
        }
        iVar5 = *piVar1;
        if (((((char)iVar5 == -1) || (iVar6 = FUN_00402b80(), (char)iVar5 == iVar6)) ||
            (local_139 != '\0')) &&
           ((((cVar3 = *(char *)((int)piVar2 + 0x2e), cVar3 == '\0' ||
              (cVar4 = FUN_00402ba0(), cVar3 == cVar4)) || (local_13a != '\0')) &&
            (((*(char *)((int)piVar2 + 0x2d) == -1 || (cVar3 = FUN_00567c00(0), cVar3 != '\0')) ||
             (local_13b != '\0')))))) {
          cVar3 = *(char *)((int)piVar2 + 0x2f);
          if (cVar3 != -1) {
            iVar5 = piVar2[0xc];
            fVar8 = (float10)FUN_00402bd0();
            cVar3 = FUN_00568eb0((int)cVar3,iVar5,(float)fVar8);
            if (cVar3 == '\0') goto LAB_005691e5;
          }
          uVar7 = 0;
          if (piVar2[10] != 0) {
            uVar7 = FUN_00569e60();
          }
          cVar3 = FUN_0056a950(param_1,uVar7);
          if (cVar3 != '\0') {
            iVar5 = FUN_00579440();
            if (iVar5 == param_1) {
              uVar7 = (**(code **)(*piVar2 + 0xd4))();
              uVar7 = FUN_004da2a0((&PTR_DAT_00b12988)[(char)piVar2[8]],uVar7);
              _sprintf(acStack_130,"%s Picked Package %s (%s)",uVar7);
              FUN_00579b60(acStack_130);
            }
            if (piVar2[6] == -1) {
              FUN_005672a0();
            }
            piVar1 = local_138;
            if (local_138 != (int *)0x0) {
              if (local_138 == piVar2) {
                return piVar2;
              }
              if ((char)local_138[8] == '\x01') {
                uVar7 = (**(code **)(**(int **)(param_1 + 0x58) + 0xcc))
                                  (0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
                iVar5 = FUN_009832e6(uVar7);
                if (iVar5 != 0) {
                  FUN_00424d00(param_1);
                }
              }
              FUN_004fbf90(piVar1,param_1 + 0x44,0x800);
            }
            if (piVar2 == piVar1) {
              return piVar2;
            }
            FUN_004fbf90(piVar2,param_1 + 0x44,0x200);
            return piVar2;
          }
        }
      }
LAB_005691e5:
      local_134 = (int *)local_134[1];
      if (local_134 == (int *)0x0) {
        return local_138;
      }
    }
  }
  return local_138;
}



void FUN_005692e0(int param_1,int *param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *in_ECX;
  int iStack_1c;
  int *piStack_18;
  
  iVar4 = (**(code **)(**(int **)(param_1 + 0x58) + 0x34))();
  iVar5 = (**(code **)(**(int **)(param_1 + 0x58) + 0x38))();
  (**(code **)(**(int **)(param_1 + 0x58) + 0x3c))();
  cVar3 = FUN_00402ba0();
  iVar6 = FUN_00402b80();
  do {
    do {
      if ((iVar4 == 0) ||
         ((iVar7 = FUN_005e0380(), piStack_18 = in_ECX, in_ECX[1] == 0 && (*in_ECX == 0))))
      goto LAB_005694b0;
      do {
        iVar10 = *piStack_18;
        if (iVar10 == 0) break;
        if (((((char *)(iVar10 + 0x2c) != (char *)0x0) &&
             ((cVar1 = *(char *)(iVar10 + 0x2c), cVar1 == -1 || (cVar1 <= iVar5)))) &&
            ((*(char *)(iVar10 + 0x2e) == '\0' || (*(char *)(iVar10 + 0x2e) <= iVar4)))) &&
           ((((cVar1 = *(char *)(iVar10 + 0x2d), cVar1 == -1 ||
              (iVar8 = FUN_00402c40(), cVar1 <= iVar8)) &&
             ((*(char *)(iVar10 + 0x2f) == -1 || ((float)(int)*(char *)(iVar10 + 0x2f) < param_4))))
            && (piVar11 = param_2, iVar10 != iVar7)))) {
          for (; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
            if (*piVar11 == iVar10) goto LAB_00569410;
          }
          if (*(int *)(iVar10 + 0x18) == -1) {
            FUN_005672a0();
          }
          FUN_0067b1e0(iVar10);
        }
LAB_00569410:
        piStack_18 = (int *)piStack_18[1];
      } while (piStack_18 != (int *)0x0);
      param_4 = param_4 + 1.0;
      iStack_1c = iVar5;
      if (23.0 < param_4) {
        iStack_1c._0_1_ = (char)iVar5;
        param_4 = 0.0;
        iVar4 = iVar4 + 1;
        uVar9 = FUN_0047d2b0((int)(char)iStack_1c);
        if ((int)(uVar9 & 0xffff) < iVar4) {
          iVar4 = iVar4 - (uVar9 & 0xffff);
          iStack_1c = iVar5 + 1;
          if (0xb < iStack_1c) {
            iStack_1c = iVar5 + -0xb;
          }
        }
      }
      iVar5 = iStack_1c;
    } while ((iVar4 != cVar3) || (iStack_1c != iVar6));
    FUN_00402bd0();
    iVar7 = FUN_009828c0();
    iVar10 = FUN_009828c0();
  } while (iVar10 < iVar7);
LAB_005694b0:
  if (param_2 != (int *)0x0) {
    iVar4 = 0;
    piVar11 = param_2;
    do {
      if (*piVar11 != 0) {
        iVar4 = iVar4 + 1;
      }
      piVar11 = (int *)piVar11[1];
    } while (piVar11 != (int *)0x0);
    bVar2 = true;
    while ((iVar4 != 0 && (bVar2))) {
      bVar2 = false;
      for (piVar11 = param_2; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
        iVar5 = *piVar11;
        iVar6 = *param_2;
        iVar7 = FUN_00567b80(iVar5 + 0x2c);
        if (iVar7 == 1) {
          if (iVar5 != 0) {
            *param_2 = iVar5;
          }
          if (iVar6 != 0) {
            *piVar11 = iVar6;
          }
          bVar2 = true;
        }
      }
      iVar4 = iVar4 + -1;
      param_2 = (int *)param_2[1];
    }
  }
  return;
}



void FUN_00569540(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009bd878;
  local_14 = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_14;
  piVar2 = (int *)0x0;
  if (param_1 == (int *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_0046b680(0xffffffff);
  }
  while ((in_ECX != (int *)0x0 && ((in_ECX[1] != 0 || (*in_ECX != 0))))) {
    local_28 = *in_ECX;
    if (param_1 != (int *)0x0) {
      FUN_0046bb20(&local_28,local_24,uVar3);
    }
    uVar4 = FUN_0046b250(local_28,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03e00,0);
    iVar5 = FUN_009832e6(uVar4);
    if (iVar5 == 0) {
      local_20 = 0;
      local_1c = 0;
      local_1a = 0;
      local_c = 0;
      if (param_1 == (int *)0x0) {
        FUN_004028d0("UNKNOWN form",0);
      }
      else {
        (**(code **)(*param_1 + 0x74))(&local_20);
      }
      FUN_004a7a60("Could not find Package (%08X) for %s.",local_28,local_20);
      if (piVar2 == (int *)0x0) {
        piVar1 = (int *)in_ECX[1];
        if (piVar1 == (int *)0x0) {
          *in_ECX = 0;
        }
        else {
          in_ECX[1] = piVar1[1];
          *in_ECX = *piVar1;
          FUN_00401f20(piVar1);
        }
      }
      else {
        FUN_0065c620(local_28);
        in_ECX = (int *)piVar2[1];
      }
      local_c = 0xffffffff;
      FUN_00401f20(local_20);
      local_20 = 0;
      local_1a = 0;
      local_1c = 0;
    }
    else {
      *in_ECX = iVar5;
      piVar2 = in_ECX;
      in_ECX = (int *)in_ECX[1];
    }
  }
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_005696b0(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 3;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}



void FUN_005696c0(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 8);
  switch(*in_ECX) {
  case 0:
  case 5:
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 4);
    return;
  case 1:
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(in_ECX + 4) = 0;
    return;
  case 2:
  case 3:
    *(undefined4 *)(in_ECX + 8) = 0;
    break;
  case 4:
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 4);
    return;
  }
  return;
}



void FUN_00569730(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0xff;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}



int FUN_00569740(void)

{
  char *in_ECX;
  
  return (int)*in_ECX;
}



void FUN_00569750(int param_1)

{
  char *in_ECX;
  
  if (param_1 != *in_ECX) {
    *in_ECX = (char)param_1;
    switch((char)param_1) {
    case '\0':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
      in_ECX[8] = '\0';
      in_ECX[9] = '\0';
      in_ECX[10] = '\0';
      in_ECX[0xb] = '\0';
      break;
    case '\x01':
      in_ECX[8] = '\0';
      in_ECX[9] = '\0';
      in_ECX[10] = '\0';
      in_ECX[0xb] = '\0';
      in_ECX[4] = '\0';
      in_ECX[5] = '\0';
      in_ECX[6] = '\0';
      in_ECX[7] = '\0';
      return;
    }
  }
  return;
}



undefined4 FUN_005697a0(void)

{
  char *in_ECX;
  
  if ((*in_ECX != -1) && (*in_ECX != '\x01')) {
    return *(undefined4 *)(in_ECX + 4);
  }
  return 0;
}



void FUN_005697c0(undefined4 param_1)

{
  char *in_ECX;
  
  if ((*in_ECX != -1) && (*in_ECX != '\x01')) {
    *(undefined4 *)(in_ECX + 4) = param_1;
  }
  return;
}



undefined4 FUN_005697e0(void)

{
  char *in_ECX;
  
  if (*in_ECX == '\0') {
    return *(undefined4 *)(in_ECX + 8);
  }
  return 0;
}



void FUN_005697f0(undefined4 param_1)

{
  char *in_ECX;
  
  if (*in_ECX == '\0') {
    *(undefined4 *)(in_ECX + 8) = param_1;
  }
  return;
}



undefined4 FUN_00569800(void)

{
  char *in_ECX;
  
  if (*in_ECX == '\x01') {
    return *(undefined4 *)(in_ECX + 8);
  }
  return 0;
}



void FUN_00569810(undefined4 param_1)

{
  char *in_ECX;
  
  if (*in_ECX == '\x01') {
    *(undefined4 *)(in_ECX + 8) = param_1;
  }
  return;
}



undefined4 FUN_00569820(void)

{
  char *in_ECX;
  
  if (*in_ECX == '\x04') {
    return *(undefined4 *)(in_ECX + 8);
  }
  return 0;
}



undefined4 FUN_00569830(void)

{
  char *in_ECX;
  
  if (*in_ECX == '\x05') {
    return *(undefined4 *)(in_ECX + 8);
  }
  return 0;
}



void FUN_00569840(char *param_1,char param_2)

{
  undefined4 uVar1;
  char *in_ECX;
  
  if ((param_1 != (char *)0x0) && ((param_2 != '\0' || (*param_1 != -1)))) {
    FUN_00569750((int)*param_1);
    switch(*in_ECX) {
    case '\0':
      uVar1 = FUN_005697a0();
      FUN_005697c0(uVar1);
      if (*param_1 == '\0') {
        uVar1 = *(undefined4 *)(param_1 + 8);
      }
      else {
        uVar1 = 0;
      }
      if (*in_ECX == '\0') {
        *(undefined4 *)(in_ECX + 8) = uVar1;
        return;
      }
      break;
    case '\x01':
      if (*param_1 == '\x01') {
        uVar1 = *(undefined4 *)(param_1 + 8);
      }
      else {
        uVar1 = 0;
      }
      if (*in_ECX == '\x01') {
        *(undefined4 *)(in_ECX + 8) = uVar1;
        return;
      }
      break;
    case '\x02':
    case '\x03':
      uVar1 = FUN_005697a0();
      FUN_005697c0(uVar1);
      break;
    case '\x04':
      uVar1 = FUN_005697a0();
      FUN_005697c0(uVar1);
      if (*param_1 == '\x04') {
        uVar1 = *(undefined4 *)(param_1 + 8);
      }
      else {
        uVar1 = 0;
      }
      if (*in_ECX == '\x04') {
        *(undefined4 *)(in_ECX + 8) = uVar1;
        return;
      }
      break;
    case '\x05':
      uVar1 = FUN_005697a0();
      FUN_005697c0(uVar1);
      if (*param_1 == '\x05') {
        uVar1 = *(undefined4 *)(param_1 + 8);
      }
      else {
        uVar1 = 0;
      }
      if (*in_ECX == '\x05') {
        *(undefined4 *)(in_ECX + 8) = uVar1;
        return;
      }
    }
  }
  return;
}



bool FUN_00569940(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *in_ECX;
  int iVar4;
  
  if (param_1 == (char *)0x0) {
    return true;
  }
  cVar1 = *in_ECX;
  cVar2 = *param_1;
  if (cVar1 == cVar2) {
    if ((cVar1 == -1) || (cVar1 == '\x01')) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 4);
    }
    if ((cVar2 == -1) || (cVar2 == '\x01')) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
    }
    if (iVar4 == iVar3) {
      if (cVar1 == '\0') {
        iVar4 = *(int *)(in_ECX + 8);
      }
      else {
        iVar4 = 0;
      }
      if (cVar2 == '\0') {
        iVar3 = *(int *)(param_1 + 8);
      }
      else {
        iVar3 = 0;
      }
      if (iVar4 == iVar3) {
        if (cVar1 == '\x01') {
          iVar4 = *(int *)(in_ECX + 8);
        }
        else {
          iVar4 = 0;
        }
        if (cVar2 == '\x01') {
          iVar3 = *(int *)(param_1 + 8);
        }
        else {
          iVar3 = 0;
        }
        if (iVar4 == iVar3) {
          if (cVar1 == '\x04') {
            iVar4 = *(int *)(in_ECX + 8);
          }
          else {
            iVar4 = 0;
          }
          if (cVar2 == '\x04') {
            iVar3 = *(int *)(param_1 + 8);
          }
          else {
            iVar3 = 0;
          }
          if (iVar4 == iVar3) {
            if (cVar1 == '\x05') {
              iVar4 = *(int *)(in_ECX + 8);
            }
            else {
              iVar4 = 0;
            }
            if (cVar2 == '\x05') {
              return iVar4 != *(int *)(param_1 + 8);
            }
            return iVar4 != 0;
          }
        }
      }
    }
  }
  return true;
}



bool FUN_00569a10(void)

{
  char *in_ECX;
  
  return '\x03' < *in_ECX;
}



undefined4 FUN_00569a20(void)

{
  char cVar1;
  undefined4 uVar2;
  char *in_ECX;
  
  cVar1 = *in_ECX;
  uVar2 = 5;
  if ((-1 < cVar1) && ((cVar1 < '\x05' || (cVar1 == '\x05')))) {
    uVar2 = 9;
  }
  return uVar2;
}



void FUN_00569a40(void)

{
  char cVar1;
  char *in_ECX;
  char *local_4;
  
  local_4 = in_ECX;
  FUN_004534d0(in_ECX,1);
  FUN_004534d0(in_ECX + 4,4);
  cVar1 = *in_ECX;
  if (-1 < cVar1) {
    if (cVar1 < '\x05') {
      FUN_0045ba00(&local_4,4);
      *(char **)(in_ECX + 8) = local_4;
    }
    else if (cVar1 == '\x05') {
      FUN_004534d0(in_ECX + 8,4);
      return;
    }
  }
  return;
}



void FUN_00569ab0(void)

{
  undefined4 uVar1;
  byte *in_ECX;
  
  if (*in_ECX < 5) {
    uVar1 = FUN_0046b250(*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  return;
}



void FUN_00569ad0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *in_ECX;
  uint local_c;
  int local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)(in_ECX + 8);
  local_8 = 0;
  bVar1 = *in_ECX;
  local_c = (uint)bVar1;
  iVar3 = iVar2;
  if ((bVar1 != 5) && (iVar3 = local_8, iVar2 != 0)) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  local_8 = iVar3;
  if ((bVar1 == 0xff) || (bVar1 == 1)) {
    local_4 = 0;
  }
  else {
    local_4 = *(undefined4 *)(in_ECX + 4);
  }
  FUN_0046ae40(0x54444c50,&local_c,0xc);
  return;
}



void FUN_00569b20(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *in_ECX;
  bool bVar4;
  char *pcVar5;
  undefined4 local_4;
  
  if (*in_ECX == '\x05') {
    return;
  }
  local_4 = *(undefined4 *)(in_ECX + 8);
  uVar2 = FUN_0046b680(0xffffffff);
  FUN_0046bb20(&local_4,uVar2);
  cVar1 = *in_ECX;
  if (cVar1 == '\0') {
    uVar2 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar3 = FUN_009832e6(uVar2);
    if (iVar3 != 0) {
      if (*in_ECX != '\0') {
        return;
      }
      *(int *)(in_ECX + 8) = iVar3;
      return;
    }
    iVar3 = FUN_00404e50();
    if (iVar3 == 0) {
      iVar3 = param_1[3];
      pcVar5 = "Unable to find Package Location Reference (%08X) on owner object (%08X).";
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0xd4))();
      pcVar5 = "Unable to find Package Location Reference (%08X) on owner object \"%s\".";
    }
    FUN_004a7a60(pcVar5,local_4,iVar3);
    bVar4 = *in_ECX == '\0';
  }
  else if (cVar1 == '\x01') {
    uVar2 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
    iVar3 = FUN_009832e6(uVar2);
    if (iVar3 != 0) {
      if (*in_ECX != '\x01') {
        return;
      }
      *(int *)(in_ECX + 8) = iVar3;
      return;
    }
    iVar3 = FUN_00404e50();
    if (iVar3 == 0) {
      FUN_004a7a60("Unable to find Package Location Cell (%08X) on owner object (%08X).",local_4,
                   param_1[3]);
      bVar4 = *in_ECX == '\x01';
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0xd4))();
      FUN_004a7a60("Unable to find Package Location Cell (%08X) on owner object \"%s\".",local_4,
                   uVar2);
      bVar4 = *in_ECX == '\x01';
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    iVar3 = FUN_0046b250(local_4);
    if (iVar3 != 0) {
      if (*in_ECX != '\x04') {
        return;
      }
      *(int *)(in_ECX + 8) = iVar3;
      return;
    }
    iVar3 = FUN_00404e50();
    if (iVar3 == 0) {
      FUN_004a7a60("Unable to find Package Location Object (%08X) on owner object (%08X).",local_4,
                   param_1[3]);
      bVar4 = *in_ECX == '\x04';
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0xd4))();
      FUN_004a7a60("Unable to find Package Location Object (%08X) on owner object \"%s\".",local_4,
                   uVar2);
      bVar4 = *in_ECX == '\x04';
    }
  }
  if (bVar4) {
    in_ECX[8] = '\0';
    in_ECX[9] = '\0';
    in_ECX[10] = '\0';
    in_ECX[0xb] = '\0';
  }
  return;
}



void FUN_00569cf0(void)

{
  char cVar1;
  char *in_ECX;
  undefined4 local_4;
  
  FUN_0045b9a0(in_ECX,1);
  FUN_0045b9a0(in_ECX + 4,4);
  cVar1 = *in_ECX;
  if (-1 < cVar1) {
    if (cVar1 < '\x05') {
      local_4 = 0;
      if (*(int *)(in_ECX + 8) != 0) {
        local_4 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc);
      }
      FUN_0045f7a0(&local_4,4);
    }
    else if (cVar1 == '\x05') {
      FUN_0045b9a0(in_ECX + 8,4);
      return;
    }
  }
  return;
}



void FUN_00569d60(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0xff;
  in_ECX[1] = 0xff;
  in_ECX[2] = 0;
  in_ECX[3] = 0xff;
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}



void FUN_00569d80(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  return;
}



void FUN_00569db0(void)

{
  FUN_0046ae40(0x54445350);
  return;
}



void FUN_00569dd0(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  if (param_1 != (undefined1 *)0x0) {
    in_ECX[1] = param_1[1];
    *in_ECX = *param_1;
    in_ECX[2] = param_1[2];
    in_ECX[3] = param_1[3];
    *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  }
  return;
}



bool FUN_00569e00(char *param_1)

{
  char *in_ECX;
  
  if ((((param_1 != (char *)0x0) && (in_ECX[1] == param_1[1])) && (*in_ECX == *param_1)) &&
     ((in_ECX[2] == param_1[2] && (in_ECX[3] == param_1[3])))) {
    return *(int *)(in_ECX + 4) != *(int *)(param_1 + 4);
  }
  return true;
}



void FUN_00569e40(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 2;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}



undefined1 FUN_00569e50(void)

{
  undefined1 *in_ECX;
  
  return *in_ECX;
}



undefined4 FUN_00569e60(void)

{
  char *in_ECX;
  
  if (*in_ECX == '\0') {
    return *(undefined4 *)(in_ECX + 4);
  }
  return 0;
}



undefined4 FUN_00569e70(void)

{
  char *in_ECX;
  
  if (*in_ECX == '\x01') {
    return *(undefined4 *)(in_ECX + 4);
  }
  return 0;
}



undefined4 FUN_00569e80(void)

{
  char *in_ECX;
  
  if (*in_ECX == '\x02') {
    return *(undefined4 *)(in_ECX + 4);
  }
  return 0;
}



void FUN_00569e90(uint param_1)

{
  byte *in_ECX;
  
  if (*in_ECX != param_1) {
    *in_ECX = (byte)param_1;
    param_1 = param_1 & 0xff;
    if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
      in_ECX[4] = 0;
      in_ECX[5] = 0;
      in_ECX[6] = 0;
      in_ECX[7] = 0;
    }
  }
  return;
}



void FUN_00569ec0(undefined4 param_1)

{
  char *in_ECX;
  
  if (*in_ECX == '\0') {
    *(undefined4 *)(in_ECX + 4) = param_1;
  }
  return;
}



void FUN_00569ed0(undefined4 param_1)

{
  char *in_ECX;
  
  if (*in_ECX == '\x01') {
    *(undefined4 *)(in_ECX + 4) = param_1;
  }
  return;
}



void FUN_00569ee0(undefined4 param_1)

{
  char *in_ECX;
  
  if (*in_ECX == '\x02') {
    *(undefined4 *)(in_ECX + 4) = param_1;
  }
  return;
}



void FUN_00569ef0(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *in_ECX;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    if (*in_ECX != cVar1) {
      *in_ECX = cVar1;
      if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
        in_ECX[4] = '\0';
        in_ECX[5] = '\0';
        in_ECX[6] = '\0';
        in_ECX[7] = '\0';
      }
    }
    if (*param_1 == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 4);
    }
    else {
      uVar2 = 0;
    }
    cVar1 = *in_ECX;
    if (cVar1 == '\0') {
      *(undefined4 *)(in_ECX + 4) = uVar2;
    }
    if (*param_1 == '\x01') {
      uVar2 = *(undefined4 *)(param_1 + 4);
    }
    else {
      uVar2 = 0;
    }
    if (cVar1 == '\x01') {
      *(undefined4 *)(in_ECX + 4) = uVar2;
    }
    if (*param_1 == '\x02') {
      uVar2 = *(undefined4 *)(param_1 + 4);
    }
    else {
      uVar2 = 0;
    }
    if (cVar1 == '\x02') {
      *(undefined4 *)(in_ECX + 4) = uVar2;
    }
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  }
  return;
}



bool FUN_00569f70(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *in_ECX;
  int iVar4;
  
  if (param_1 == (char *)0x0) {
    return true;
  }
  cVar1 = *param_1;
  cVar2 = *in_ECX;
  if (cVar2 == cVar1) {
    if (cVar2 == '\0') {
      iVar4 = *(int *)(in_ECX + 4);
    }
    else {
      iVar4 = 0;
    }
    if (cVar1 == '\0') {
      iVar3 = *(int *)(param_1 + 4);
    }
    else {
      iVar3 = 0;
    }
    if (iVar4 == iVar3) {
      if (cVar2 == '\x01') {
        iVar4 = *(int *)(in_ECX + 4);
      }
      else {
        iVar4 = 0;
      }
      if (cVar1 == '\x01') {
        iVar3 = *(int *)(param_1 + 4);
      }
      else {
        iVar3 = 0;
      }
      if (iVar4 == iVar3) {
        if (cVar2 == '\x02') {
          iVar4 = *(int *)(in_ECX + 4);
        }
        else {
          iVar4 = 0;
        }
        if (cVar1 == '\x02') {
          iVar3 = *(int *)(param_1 + 4);
        }
        else {
          iVar3 = 0;
        }
        if (iVar4 == iVar3) {
          return *(int *)(in_ECX + 8) != *(int *)(param_1 + 8);
        }
      }
    }
  }
  return true;
}



undefined4 FUN_0056a000(void)

{
  undefined4 uVar1;
  byte *in_ECX;
  
  uVar1 = 5;
  if ((*in_ECX < 2) || (*in_ECX == 2)) {
    uVar1 = 9;
  }
  return uVar1;
}



void FUN_0056a020(void)

{
  byte *in_ECX;
  byte *local_4;
  
  local_4 = in_ECX;
  FUN_004534d0(in_ECX,1);
  FUN_004534d0(in_ECX + 8,4);
  if (*in_ECX < 2) {
    FUN_0045ba00(&local_4,4);
    *(byte **)(in_ECX + 4) = local_4;
  }
  else if (*in_ECX == 2) {
    FUN_004534d0(in_ECX + 4,4);
    return;
  }
  return;
}



void FUN_0056a080(void)

{
  undefined4 uVar1;
  byte *in_ECX;
  
  if (*in_ECX < 2) {
    uVar1 = FUN_0046b250(*(undefined4 *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = uVar1;
  }
  return;
}



void FUN_0056a0a0(byte *param_1)

{
  byte bVar1;
  byte *in_ECX;
  
  bVar1 = *param_1;
  if (*in_ECX != bVar1) {
    *in_ECX = bVar1;
    if (((bVar1 == 0) || (bVar1 == 1)) || (bVar1 == 2)) {
      in_ECX[4] = 0;
      in_ECX[5] = 0;
      in_ECX[6] = 0;
      in_ECX[7] = 0;
    }
  }
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  if (*in_ECX < 2) {
    *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  }
  else if (*in_ECX == 2) {
    *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
    return;
  }
  return;
}



void FUN_0056a0f0(void)

{
  byte bVar1;
  byte *in_ECX;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = *(undefined4 *)(in_ECX + 8);
  bVar1 = *in_ECX;
  local_c = (uint)bVar1;
  if (bVar1 < 2) {
    if (*(int *)(in_ECX + 4) != 0) {
      local_8 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc);
    }
  }
  else if (bVar1 == 2) {
    local_8 = *(undefined4 *)(in_ECX + 4);
  }
  FUN_0046ae40(0x54445450,&local_c,0xc);
  return;
}



void FUN_0056a140(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *in_ECX;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(in_ECX + 4);
  uVar1 = FUN_0046b680(0xffffffff);
  FUN_0046bb20(&local_4,uVar1);
  if (*in_ECX == '\0') {
    uVar1 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar2 = FUN_009832e6(uVar1);
    *(int *)(in_ECX + 4) = iVar2;
    if (iVar2 == 0) {
      if (param_1 != (int *)0x0) {
        iVar2 = FUN_00404e50();
        if (iVar2 != 0) {
          uVar1 = (**(code **)(*param_1 + 0xd4))();
          FUN_004a7a60("Unable to find Package Target Reference (%08X) on owner object \"%s\".",
                       local_4,uVar1);
          return;
        }
        FUN_004a7a60("Unable to find Package Target Reference (%08X) on owner object (%08X).",
                     local_4,param_1[3]);
        return;
      }
      FUN_004a7a60("Unable to find Package Target Reference (%08X) on unknown owner.",local_4);
    }
  }
  else if (*in_ECX == '\x01') {
    iVar2 = FUN_0046b250(local_4);
    *(int *)(in_ECX + 4) = iVar2;
    if (iVar2 == 0) {
      if (param_1 == (int *)0x0) {
        FUN_004a7a60("Unable to find Package Target Object (%08X) on unknown owner.",local_4);
        return;
      }
      iVar2 = FUN_00404e50();
      if (iVar2 != 0) {
        uVar1 = (**(code **)(*param_1 + 0xd4))();
        FUN_004a7a60("Unable to find Package Target Object (%08X) on owner object \"%s\".",local_4,
                     uVar1);
        return;
      }
      FUN_004a7a60("Unable to find Package Target Object (%08X) on owner object (%08X).",local_4,
                   param_1[3]);
      return;
    }
  }
  return;
}



void FUN_0056a290(void)

{
  byte *in_ECX;
  undefined4 local_4;
  
  FUN_0045b9a0(in_ECX,1);
  FUN_0045b9a0(in_ECX + 8,4);
  if (*in_ECX < 2) {
    local_4 = 0;
    if (*(int *)(in_ECX + 4) != 0) {
      local_4 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc);
    }
    FUN_0045f7a0(&local_4,4);
  }
  else if (*in_ECX == 2) {
    FUN_0045b9a0(in_ECX + 4,4);
    return;
  }
  return;
}



char FUN_0056a300(int param_1)

{
  if (param_1 < DAT_00b3a4f8) {
    return '\0';
  }
  if (param_1 < DAT_00b3a500) {
    return '\x01';
  }
  if (param_1 < DAT_00b3a508) {
    return '\x02';
  }
  return (DAT_00b3a510 <= param_1) + '\x03';
}



undefined4 FUN_0056a340(uint param_1)

{
  if ((param_1 < 5) && ((undefined4 *)(&PTR_DAT_00b12b38)[param_1] != (undefined4 *)0x0)) {
    return *(undefined4 *)(&PTR_DAT_00b12b38)[param_1];
  }
  return 0;
}



undefined4 FUN_0056a360(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    return DAT_00b3a4f8;
  case 2:
    return DAT_00b3a500;
  case 3:
    return DAT_00b3a508;
  case 4:
    return DAT_00b3a510;
  default:
    return 100;
  }
}



undefined2 FUN_0056a3b0(undefined4 param_1,float param_2,float param_3)

{
  switch(param_1) {
  case 0:
    if (param_3 != param_2) {
      return 0;
    }
    break;
  case 1:
    if (param_3 == param_2) {
      return 0;
    }
    break;
  case 2:
    if (param_2 <= param_3) {
      return 0;
    }
    break;
  case 3:
    if (param_2 < param_3) {
      return 0;
    }
    break;
  case 4:
    if (param_3 < param_2 != (param_3 == param_2)) {
      return 0;
    }
    break;
  case 5:
    if (param_3 < param_2) {
      return 0;
    }
  }
  return 1;
}



void FUN_0056a450(void)

{
  int *in_ECX;
  
  for (; (in_ECX != (int *)0x0 && ((in_ECX[1] != 0 || (*in_ECX != 0)))); in_ECX = (int *)in_ECX[1])
  {
    FUN_0056ad60();
  }
  return;
}



void FUN_0056a480(undefined4 param_1)

{
  int *in_ECX;
  
  for (; (in_ECX != (int *)0x0 && ((in_ECX[1] != 0 || (*in_ECX != 0)))); in_ECX = (int *)in_ECX[1])
  {
    FUN_0056ae20(param_1);
  }
  return;
}



undefined4 FUN_0056a4b0(int *param_1)

{
  char cVar1;
  int *in_ECX;
  
  while( true ) {
    if ((param_1 == (int *)0x0) || ((param_1[1] == 0 && (*param_1 == 0)))) {
      if ((in_ECX != (int *)0x0) && ((in_ECX[1] != 0 || (*in_ECX != 0)))) {
        return 1;
      }
      return 0;
    }
    if (in_ECX == (int *)0x0) {
      return 1;
    }
    if ((in_ECX[1] == 0) && (*in_ECX == 0)) break;
    cVar1 = FUN_0056abb0(*param_1);
    if (cVar1 != '\0') {
      return 1;
    }
    param_1 = (int *)param_1[1];
    in_ECX = (int *)in_ECX[1];
  }
  return 1;
}



char FUN_0056a510(undefined4 param_1,uint param_2,char *param_3,int *param_4)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int *in_ECX;
  uint uVar8;
  char local_6;
  char local_5;
  
  uVar8 = param_2;
  cVar6 = '\0';
  local_6 = '\x01';
  bVar2 = false;
  local_5 = '\0';
  bVar4 = false;
  bVar3 = false;
  *param_3 = '\0';
  bVar5 = false;
  if ((param_2 != 0) && (uVar7 = FUN_004d78e0(), uVar7 != 0)) {
    uVar8 = uVar7;
  }
  if (in_ECX != (int *)0x0) {
    do {
      if ((in_ECX[1] == 0) && (*in_ECX == 0)) break;
      pbVar1 = (byte *)*in_ECX;
      param_2 = param_2 & 0xffffff00;
      if (bVar2) {
        if (cVar6 == '\0') {
          cVar6 = FUN_0056ac50(param_1,uVar8,&param_2);
          if ((local_5 == '\0') && ((char)param_2 == '\0')) {
            local_5 = (char)param_2;
          }
          else {
            local_5 = '\x01';
            if ((char)param_2 != '\0') goto LAB_0056a6c3;
          }
          if (cVar6 == '\0') {
            bVar4 = true;
          }
        }
LAB_0056a6c3:
        if ((*pbVar1 & 1) != 0) goto LAB_0056a5bc;
        bVar2 = false;
        if ((local_6 == '\0') || (cVar6 == '\0')) {
          local_6 = '\0';
          if ((local_5 != '\0') && (!bVar4)) {
            *param_3 = '\x01';
            goto LAB_0056a5d7;
          }
          bVar5 = true;
          goto LAB_0056a5ca;
        }
        local_6 = '\x01';
      }
      else {
        if ((*pbVar1 & 1) == 0) {
          cVar6 = FUN_0056ac50(param_1,uVar8,&param_2);
          if ((local_6 == '\0') || (local_6 = '\x01', cVar6 == '\0')) {
            local_6 = '\0';
          }
          if ((char)param_2 == '\0') {
            if (cVar6 == '\0') {
              bVar5 = true;
            }
          }
          else {
            *param_3 = '\x01';
          }
        }
        else {
          cVar6 = FUN_0056ac50(param_1,uVar8,&param_2);
          local_5 = (char)param_2;
          bVar2 = true;
          bVar4 = false;
          if (((char)param_2 == '\0') && (cVar6 == '\0')) {
            bVar4 = true;
          }
        }
LAB_0056a5bc:
        if ((local_6 == '\0') && (!bVar2)) {
LAB_0056a5ca:
          if (*param_3 == '\0') goto LAB_0056a732;
        }
      }
LAB_0056a5d7:
      in_ECX = (int *)in_ECX[1];
      if (((param_4 != (int *)0x0) && (!bVar3)) &&
         ((in_ECX == (int *)0x0 || ((in_ECX[1] == 0 && (*in_ECX == 0)))))) {
        bVar3 = true;
        in_ECX = param_4;
      }
    } while (in_ECX != (int *)0x0);
    if (bVar2) {
      if ((local_6 != '\0') && (cVar6 != '\0')) {
        *param_3 = '\0';
        return '\x01';
      }
      local_6 = '\0';
      if ((local_5 == '\0') || (bVar4)) goto LAB_0056a739;
      *param_3 = '\x01';
    }
    else if (local_6 != '\0') goto LAB_0056a739;
LAB_0056a732:
    if (!bVar5) {
      return local_6;
    }
  }
LAB_0056a739:
  *param_3 = '\0';
  return local_6;
}



void FUN_0056a750(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
      iVar1 = *in_ECX;
      if (iVar1 != 0) {
        FUN_0060d0a0();
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



void thunk_FUN_0056a750(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
      iVar1 = *in_ECX;
      if (iVar1 != 0) {
        FUN_0060d0a0();
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



void FUN_0056a7b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_004510b0(uVar1);
    if (iVar2 != 0x54445443) {
      iVar2 = FUN_004510b0(uVar1);
      if (iVar2 != 0x41445443) goto LAB_0056a832;
    }
    iVar2 = FUN_00401f00(0x18);
    local_4 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_0056ae00();
    }
    local_4 = 0xffffffff;
    FUN_0056a970(param_1);
    FUN_0067b1e0(uVar3);
  }
LAB_0056a832:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0056a850(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0056a750(uVar3);
  for (; (param_1 != (int *)0x0 && ((param_1[1] != 0 || (*param_1 != 0))));
      param_1 = (int *)param_1[1]) {
    iVar4 = FUN_00401f00(0x18);
    local_4 = 0;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0056ae00();
    }
    local_4 = 0xffffffff;
    FUN_0056ab80(*param_1);
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
    local_10 = in_ECX;
    if ((int *)in_ECX[1] != (int *)0x0) {
      local_10 = (int *)in_ECX[1];
    }
    in_ECX = local_10;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0056a950(undefined4 param_1,undefined4 param_2)

{
  FUN_0056a510(param_1,param_2,&param_2,0);
  return;
}



void FUN_0056a970(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != 0) {
    iVar1 = FUN_004510b0();
    if ((iVar1 != 0x54445443) && (iVar1 = FUN_004510b0(), iVar1 != 0x41445443)) {
      return;
    }
    iVar1 = FUN_004510b0();
    FUN_00450c20(in_ECX,0x18);
    *(bool *)(in_ECX + 0x14) = iVar1 == 0x54445443;
  }
  return;
}



void FUN_0056a9c0(uint param_1)

{
  byte bVar1;
  uint uVar2;
  byte *in_ECX;
  
  uVar2 = param_1;
  if (param_1 - 0x1000 < 0x171) {
    param_1 = param_1 - 0x1000;
  }
  else if (param_1 < 0x171) {
    uVar2 = param_1 + 0x1000;
  }
  if (0x170 < param_1) {
    return;
  }
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
  *(short *)(in_ECX + 8) = (short)param_1;
  if (0x1136 < (int)uVar2) {
    return;
  }
  if (uVar2 == 0x1136) goto switchD_0056aa1c_caseD_103e;
  switch(uVar2) {
  case 0x1001:
    bVar1 = *in_ECX;
    *in_ECX = bVar1 & 0x1f | 0x80;
    if ((bVar1 & 4) == 0) {
      in_ECX[4] = 0;
      in_ECX[5] = 0;
      in_ECX[6] = 200;
      in_ECX[7] = 0x42;
      return;
    }
    break;
  case 0x106b:
    bVar1 = *in_ECX;
    *in_ECX = bVar1 & 0x1f | 0x20;
    if ((bVar1 & 4) == 0) {
      in_ECX[4] = 0;
      in_ECX[5] = 0;
      in_ECX[6] = 0;
      in_ECX[7] = 0;
      return;
    }
    break;
  case 0x10f7:
    in_ECX[0xc] = 0x21;
    in_ECX[0xd] = 0;
    in_ECX[0xe] = 0;
    in_ECX[0xf] = 0;
  case 0x103e:
  case 0x1040:
  case 0x1043:
  case 0x1044:
  case 0x1045:
  case 0x1046:
  case 0x1047:
  case 0x1048:
  case 0x105b:
  case 0x1065:
  case 0x1066:
  case 0x1067:
  case 0x1068:
  case 0x106a:
  case 0x106f:
  case 0x1070:
switchD_0056aa1c_caseD_103e:
    *in_ECX = *in_ECX & 0x1f;
    if ((*in_ECX & 4) == 0) {
      in_ECX[4] = 0;
      in_ECX[5] = 0;
      in_ECX[6] = 0x80;
      in_ECX[7] = 0x3f;
    }
  }
  return;
}



void FUN_0056ab80(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  return;
}



uint FUN_0056abb0(byte *param_1)

{
  byte bVar1;
  byte *in_ECX;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0x18;
  do {
    if (*(int *)param_1 != *(int *)in_ECX) goto LAB_0056abd8;
    uVar2 = uVar2 - 4;
    in_ECX = in_ECX + 4;
    param_1 = param_1 + 4;
  } while (3 < uVar2);
  if (uVar2 == 0) {
LAB_0056ac3d:
    bVar1 = 0;
  }
  else {
LAB_0056abd8:
    iVar3 = (uint)*param_1 - (uint)*in_ECX;
    if (iVar3 == 0) {
      if (uVar2 == 1) goto LAB_0056ac3d;
      iVar3 = (uint)param_1[1] - (uint)in_ECX[1];
      if (iVar3 == 0) {
        if (uVar2 == 2) goto LAB_0056ac3d;
        iVar3 = (uint)param_1[2] - (uint)in_ECX[2];
        if (iVar3 == 0) {
          if ((uVar2 == 3) || (iVar3 = (uint)param_1[3] - (uint)in_ECX[3], iVar3 == 0))
          goto LAB_0056ac3d;
        }
      }
    }
    bVar1 = 1;
    if (iVar3 < 1) {
      return 0xffffff01;
    }
  }
  return (uint)bVar1;
}



uint FUN_0056ac50(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  byte *in_ECX;
  int iVar4;
  int iVar5;
  double local_8;
  
  local_8 = 0.0;
  *param_3 = 0;
  iVar5 = param_1;
  if ((*in_ECX >> 1 & 1) != 0) {
    iVar5 = param_2;
    param_2 = param_1;
  }
  iVar4 = *(int *)(in_ECX + 0xc);
  if ((iVar4 == 0) && (cVar2 = FUN_0056b1d0(*(undefined2 *)(in_ECX + 8),0), cVar2 != '\0')) {
    iVar4 = param_2;
  }
  uVar3 = (uint)*(ushort *)(in_ECX + 8) * 0x28;
  if ((*(code **)(&DAT_00b0c8e0 + (uint)*(ushort *)(in_ECX + 8) * 0x28) == (code *)0x0) ||
     ((((&DAT_00b0c8d0)[uVar3] != '\0' && (iVar5 == 0)) ||
      (uVar3 = (**(code **)(&DAT_00b0c8e0 + (uint)*(ushort *)(in_ECX + 8) * 0x28))
                         (iVar5,iVar4,*(undefined4 *)(in_ECX + 0x10),&local_8), (char)uVar3 == '\0')
      ))) {
    return uVar3 & 0xffffff00;
  }
  if (((*in_ECX & 4) == 0) || (*(int *)(in_ECX + 4) == 0)) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24);
  }
  uVar3 = FUN_0056a3b0(*in_ECX >> 5,(float)local_8,uVar1);
  if ((char)uVar3 != '\0') {
    return uVar3;
  }
  if (*(short *)(in_ECX + 8) != 0x4c) {
    return uVar3;
  }
  if ((*in_ECX >> 5 != 2) && (*in_ECX >> 5 != 3)) {
    return uVar3;
  }
  *param_3 = 1;
  return uVar3;
}



void FUN_0056ad60(void)

{
  char cVar1;
  int iVar2;
  byte *in_ECX;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c [3];
  
  local_18 = *(undefined4 *)in_ECX;
  local_14 = *(undefined4 *)(in_ECX + 4);
  local_10 = *(undefined4 *)(in_ECX + 8);
  local_c[0] = *(int *)(in_ECX + 0xc);
  local_c[1] = *(int *)(in_ECX + 0x10);
  local_c[2] = *(int *)(in_ECX + 0x14);
  iVar2 = FUN_0056b170(*(undefined2 *)(in_ECX + 8));
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      cVar1 = FUN_0056b190(*(undefined2 *)(in_ECX + 8),iVar3);
      if ((cVar1 != '\0') && (local_c[iVar3] != 0)) {
        local_c[iVar3] = *(int *)(local_c[iVar3] + 0xc);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  if (((*in_ECX & 4) != 0) && (*(int *)(in_ECX + 4) != 0)) {
    local_14 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc);
  }
  FUN_0046ae40(0x41445443,&local_18,0x18);
  return;
}



undefined4 FUN_0056ae00(void)

{
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  FUN_0056a9c0(0x104c);
  return extraout_ECX;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0056ae20(int *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  byte *in_ECX;
  int *unaff_FS_OFFSET;
  int *local_84c;
  int local_848;
  undefined2 uStack_844;
  undefined2 uStack_842;
  byte *local_840;
  int local_83c;
  int local_838;
  undefined2 local_834;
  undefined2 local_832;
  char acStack_830 [1040];
  char acStack_420 [1040];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8e6;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_84c;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffff7a4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_840 = in_ECX;
  FUN_0056b2e0(param_1,in_ECX + 8,in_ECX[0x14],uVar3);
  if (*(int *)(&DAT_00b0c8e0 + (uint)*(ushort *)(in_ECX + 8) * 0x28) == 0) {
    if (*(byte *)(param_1 + 1) == 0x3a) {
      iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0544c,0);
      piVar5 = (int *)FUN_0052f690(iVar4);
      local_84c = (int *)FUN_0052f570(iVar4);
      local_838 = 0;
      local_834 = 0;
      local_832 = 0;
      local_4 = 0;
      FUN_00531200(&local_838,0);
      local_848 = local_84c[3];
      uVar7 = *(undefined4 *)(iVar4 + 0xc);
      local_83c = local_838;
      uVar6 = (**(code **)(*piVar5 + 0xd4))(piVar5[3]);
      uVar6 = (**(code **)(*local_84c + 0xd4))(local_848,uVar6);
      _sprintf(acStack_830,"TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)",uVar7,
               local_83c,uVar6);
      local_4 = 0xffffffff;
      FUN_00401f20(local_838);
      in_ECX = local_840;
    }
    else {
      puVar2 = (&PTR_DAT_00b05e04)[(uint)*(byte *)(param_1 + 1) * 3];
      uVar7 = (**(code **)(*param_1 + 0xd4))(param_1[3]);
      _sprintf(acStack_830,"Form %s %s (%08X)",puVar2,uVar7);
    }
    uVar1 = *(ushort *)(in_ECX + 8);
    iVar4 = FUN_0046b680(0xffffffff);
    FUN_004a7a60("%s in file %s contains bad condition item data. Function \"%s\" is not a condition function."
                 ,acStack_830,iVar4 + 0x1c,(&PTR_s_MessageBox_00b0c8c0)[(uint)uVar1 * 10]);
  }
  if (((*in_ECX & 4) != 0) && (local_84c = *(int **)(in_ECX + 4), local_84c != (int *)0x0)) {
    uVar7 = FUN_0046b680(0xffffffff);
    FUN_0046bb20(&local_84c,uVar7);
    uVar7 = FUN_0046b250(local_84c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03db4,0);
    iVar4 = FUN_009832e6(uVar7);
    *(int *)(in_ECX + 4) = iVar4;
    if (iVar4 == 0) {
      if (*(byte *)(param_1 + 1) == 0x3a) {
        iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0544c,0);
        piVar5 = (int *)FUN_0052f690(iVar4);
        piVar8 = (int *)FUN_0052f570(iVar4);
        local_848 = 0;
        uStack_844 = 0;
        uStack_842 = 0;
        local_4 = 1;
        FUN_00531200(&local_848,0);
        local_840 = (byte *)piVar8[3];
        uVar7 = *(undefined4 *)(iVar4 + 0xc);
        local_83c = local_848;
        uVar6 = (**(code **)(*piVar5 + 0xd4))(piVar5[3]);
        uVar6 = (**(code **)(*piVar8 + 0xd4))(local_840,uVar6);
        __snprintf(acStack_420,0x410,"TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)",
                   uVar7,local_83c,uVar6);
        local_4 = 0xffffffff;
        FUN_00401f20(local_848);
        local_848 = 0;
        uStack_842 = 0;
        uStack_844 = 0;
      }
      else {
        puVar2 = (&PTR_DAT_00b05e04)[(uint)*(byte *)(param_1 + 1) * 3];
        uVar7 = (**(code **)(*param_1 + 0xd4))(param_1[3]);
        __snprintf(acStack_420,0x410,"Form %s %s (%08X)",puVar2,uVar7);
      }
      FUN_004a7a60("Unable to find Value TESGlobal (%08X) in TESConditionItem Init for form:\n\n%s."
                   ,local_84c,acStack_420);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined2 FUN_0056b170(uint param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x171) {
    uVar1 = *(undefined2 *)(&DAT_00b0c8d2 + param_1 * 0x28);
  }
  return uVar1;
}



uint FUN_0056b190(uint param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX & 0xffffff00;
  if (param_1 < 0x171) {
    if (param_2 < *(ushort *)(&DAT_00b0c8d2 + param_1 * 0x28)) {
      uVar1 = CONCAT31((int3)(param_2 * 3 >> 8),
                       (&DAT_00b0a54d)
                       [*(int *)((&PTR_PTR_00b0c8d4)[param_1 * 10] + param_2 * 0xc + 4) * 8]);
    }
  }
  return uVar1;
}



undefined1 FUN_0056b1d0(uint param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x171) {
    if ((param_2 < *(ushort *)(&DAT_00b0c8d2 + param_1 * 0x28)) &&
       ((*(int *)((&PTR_PTR_00b0c8d4)[param_1 * 10] + param_2 * 0xc + 4) == 4 ||
        (*(int *)((&PTR_PTR_00b0c8d4)[param_1 * 10] + param_2 * 0xc + 4) == 6)))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



undefined4 FUN_0056b220(uint param_1,ushort *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)*param_2;
  if (((0x170 < uVar1) || (*(ushort *)(&DAT_00b0c8d2 + uVar1 * 0x28) <= param_1)) ||
     ((&DAT_00b0a54d)[*(int *)((&PTR_PTR_00b0c8d4)[uVar1 * 10] + param_1 * 0xc + 4) * 8] == '\0')) {
    return 0;
  }
  uVar4 = *(undefined4 *)(param_2 + param_1 * 2 + 2);
  iVar2 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    uVar4 = (**(code **)(*piVar3 + 0x170))();
    iVar2 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(iVar2 + 4);
}



void FUN_0056b2e0(uint *param_1,uint *param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = (int *)param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd940;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) {
    local_34 = 0;
    if ((ushort)*param_2 < 0x171) {
      local_34 = (uint)*(ushort *)(&DAT_00b0c8d2 + (uint)(ushort)*param_2 * 0x28);
    }
    local_30 = FUN_0046b680(0xffffffff);
    local_38 = 0;
    if (local_34 != 0) {
      local_3c = 0;
      param_1 = param_2;
      do {
        uVar8 = local_38;
        param_1 = param_1 + 1;
        uVar3 = (uint)(ushort)*param_2;
        if (uVar3 < 0x171) {
          if ((local_38 < *(ushort *)(&DAT_00b0c8d2 + uVar3 * 0x28)) &&
             ((&DAT_00b0a54d)[*(int *)((&PTR_PTR_00b0c8d4)[uVar3 * 10] + local_3c + 4) * 8] != '\0')
             ) {
            local_38 = *param_1;
            if (local_38 != 0) {
              FUN_0046bb20(&local_38,local_30);
              uVar3 = FUN_0046b250(local_38);
              *param_1 = uVar3;
              if (uVar3 == 0) {
                local_2c = 0;
                local_28 = 0;
                local_26 = 0;
                local_4 = 0;
                (**(code **)(*piVar1 + 0x74))(&local_2c);
                FUN_004a7a60("Unable to find Function Info TESForm (%08X) in TESConditionItem Parameter Init for %s."
                             ,local_38,local_2c);
                local_4 = 0xffffffff;
                FUN_00401f20(local_2c);
                local_2c = 0;
                local_26 = 0;
                local_28 = 0;
              }
              else if (*(int *)(&DAT_00b0a548 +
                               *(int *)((&PTR_PTR_00b0c8d4)[(uint)(ushort)*param_2 * 10] +
                                       local_3c + 4) * 8) == 0xb) {
                uVar3 = FUN_009832e6(uVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03280,0);
                *param_1 = uVar3;
                if (uVar3 == 0) {
                  local_24 = 0;
                  local_20 = 0;
                  local_4 = 1;
                  (**(code **)(*piVar1 + 0x74))(&local_24);
                  FUN_004a7a60("Unable to find Function Info MagicItem in TESConditionItem Parameter Init for %s."
                               ,local_38,local_24);
                  local_4 = 0xffffffff;
                  FUN_00402da0();
                }
              }
            }
          }
          else if ((uVar3 < 0x171) &&
                  ((local_38 < *(ushort *)(&DAT_00b0c8d2 + uVar3 * 0x28) &&
                   (*(int *)((&PTR_PTR_00b0c8d4)[uVar3 * 10] + local_3c + 4) == 0x16)))) {
            if (param_3 != '\0') {
              if (local_38 == 0) goto LAB_0056b643;
              piVar4 = (int *)FUN_0056b220(local_38 - 1,param_2,uVar2);
              if ((piVar4 != (int *)0x0) && (iVar5 = FUN_004fa890(*param_1), iVar5 == 0)) {
                uStack_1c = 0;
                uStack_18 = 0;
                local_4 = 2;
                (**(code **)(*piVar1 + 0x74))(&uStack_1c);
                uVar7 = local_20;
                uVar6 = (**(code **)(*piVar4 + 0xd4))();
                FUN_004a7a60("TESConditionItem Parameter for %s contains unconverted script variable data -- unable to change because script \'%s\' is uncompiled."
                             ,uVar7,uVar6);
                local_4 = 0xffffffff;
                FUN_00402da0();
                uVar8 = local_38;
              }
            }
            if ((((uVar8 != 0) && (param_3 == '\0')) &&
                (piVar4 = (int *)FUN_0056b220(uVar8 - 1,param_2,uVar2), piVar4 != (int *)0x0)) &&
               (iVar5 = FUN_004fa840(*param_1), iVar5 == 0)) {
              uStack_14 = 0;
              uStack_10 = 0;
              uStack_e = 0;
              local_4 = 3;
              (**(code **)(*piVar1 + 0x74))(&uStack_14);
              uVar7 = (**(code **)(*piVar4 + 0xd4))(uStack_18);
              FUN_004a7a60("Unable to find variableID %d on script \'%s\' in TESConditionItem Parameter Init for %s."
                           ,*param_1,uVar7);
              local_4 = 0xffffffff;
              FUN_00402da0();
            }
          }
        }
LAB_0056b643:
        local_3c = local_3c + 0xc;
        local_38 = uVar8 + 1;
      } while (local_38 < local_34);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0056b680(byte param_1)

{
  FUN_0056b6a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0056b6a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      FUN_00401f20(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  iVar2 = in_ECX[2];
  if (iVar2 != 0) {
    FUN_0056b6a0();
    FUN_00401f20(iVar2);
  }
  return;
}



void FUN_0056b720(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bd968;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)in_ECX[5];
  local_4 = 0;
  in_ECX[2] = 0;
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-1] == 0) {
        FUN_00401f20(puVar2 + -1,uVar3);
      }
      else {
        (**(code **)*puVar2)(3);
      }
    }
    if (piVar1[2] != 0) {
      FUN_0056b680(1);
    }
    FUN_00401f20(piVar1,uVar3);
  }
  FUN_00401f20(*in_ECX,uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0056b7c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a680dc;
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0056b7f0(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a6813c;
  in_ECX[3] = 0;
  return;
}



void FUN_0056b820(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c8273;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a6813c;
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a680dc;
  FUN_0055ace0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0056b920(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  uint *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar4 = (uint *)0x0;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  if (param_1 != 0) {
    uVar3 = -(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) |
            (uint)((ulonglong)param_1 * 0x10);
    puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
    local_4 = 0;
    if (puVar2 != (uint *)0x0) {
      puVar4 = puVar2 + 1;
      *puVar2 = param_1;
      _eh_vector_constructor_iterator_(puVar4,0x10,param_1,FUN_0056b7f0,FUN_0056b820);
    }
  }
  *in_ECX = puVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0056ba20(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int *unaff_FS_OFFSET;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xc,uVar1);
  uVar1 = 0;
  local_4 = 0;
  if (iVar2 == 0) {
    local_10 = (int *)0x0;
  }
  else {
    local_10 = (int *)FUN_0056b920(param_1);
  }
  local_4 = 0xffffffff;
  if (param_1 != 0) {
    iVar2 = 0;
    do {
      if (uVar1 < (uint)local_10[1]) {
        iVar4 = *local_10 + iVar2;
      }
      else {
        iVar4 = 0;
      }
      iVar3 = in_ECX[1];
      if (in_ECX[2] == iVar3) {
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = iVar3 * 2;
        }
        FUN_006e8ca0(iVar3);
      }
      *(int *)(*in_ECX + in_ECX[2] * 4) = iVar4;
      in_ECX[2] = in_ECX[2] + 1;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < param_1);
  }
  local_10[2] = in_ECX[5];
  in_ECX[5] = (int)local_10;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056baf0(undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3a600);
  _DAT_00b3a678 = GetCurrentThreadId();
  _DAT_00b3a67c = _DAT_00b3a67c + 1;
  FUN_0073a5e0(&param_1);
  _DAT_00b3a67c = _DAT_00b3a67c + -1;
  if (_DAT_00b3a67c == 0) {
    _DAT_00b3a678 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3a600);
  return;
}



undefined4 FUN_0056bb50(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  FUN_0056baf0();
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0056bb90(void)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3a600);
  _DAT_00b3a678 = GetCurrentThreadId();
  _DAT_00b3a67c = _DAT_00b3a67c + 1;
  if (DAT_00b12ba4 == 0) {
    FUN_0056ba20(DAT_00b12ba8);
    DAT_00b12ba8 = DAT_00b12ba8 * 2;
  }
  DAT_00b12ba4 = DAT_00b12ba4 + -1;
  uVar1 = *DAT_00b12b9c;
  *DAT_00b12b9c = DAT_00b12b9c[DAT_00b12ba4];
  _DAT_00b3a67c = _DAT_00b3a67c + -1;
  if (_DAT_00b3a67c == 0) {
    _DAT_00b3a678 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3a600);
  return uVar1;
}



void FUN_0056bc20(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  in_ECX[2] = param_2;
  in_ECX[3] = param_1;
  in_ECX[4] = 0;
  *in_ECX = &PTR_LAB_00a681ac;
  *(undefined1 *)(in_ECX + 5) = 0;
  return;
}



void FUN_0056bc50(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a681ac;
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  FUN_0055ace0();
  return;
}



ushort FUN_0056bc70(float param_1)

{
  float fVar1;
  int in_ECX;
  ushort uVar2;
  
  param_1 = param_1 + *(float *)(in_ECX + 0x10);
  *(float *)(in_ECX + 0x10) = param_1;
  fVar1 = *(float *)(in_ECX + 8);
  uVar2 = (ushort)(fVar1 < param_1) << 8 | (ushort)(NAN(fVar1) || NAN(param_1)) << 10 |
          (ushort)(fVar1 == param_1) << 0xe;
  if (fVar1 < param_1) {
    return uVar2;
  }
  return CONCAT11((char)(uVar2 >> 8),1);
}



undefined4 FUN_0056bca0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int local_4;
  
  local_4 = in_ECX;
  FUN_004534d0(in_ECX + 8,4);
  FUN_004534d0(in_ECX + 0x10,4);
  FUN_0045ba00(&local_4,4);
  uVar1 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
  iVar2 = FUN_009832e6(uVar1);
  *(int *)(in_ECX + 0xc) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_004ca790();
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



void FUN_0056bd80(void)

{
  int in_ECX;
  undefined4 local_4;
  
  FUN_0045b9a0(in_ECX + 8,4);
  FUN_0045b9a0(in_ECX + 0x10,4);
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    local_4 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc);
  }
  FUN_0045f7a0(&local_4,4);
  return;
}



void FUN_0056bde0(void)

{
  undefined4 *in_ECX;
  
  FUN_0056bc20(0,0);
  *in_ECX = &PTR_FUN_00a6822c;
  in_ECX[6] = 0;
  return;
}



void FUN_0056be50(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,float param_5
                 ,float param_6,float param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000030;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 local_c0 [36];
  undefined4 local_9c [18];
  undefined4 local_54 [9];
  undefined1 local_30 [36];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd99b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffefc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0056bc20(param_1,param_2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6822c;
  in_ECX[6] = param_3;
  FUN_00718a50(uVar1);
  puVar2 = (undefined4 *)(param_4 + 100);
  puVar4 = local_54;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_007103c0(local_c0);
  FUN_007107a0(local_c0,1,&stack0x00000020,&local_dc);
  local_d0 = param_5 - *(float *)(param_4 + 0x88);
  local_cc = param_6 - *(float *)(param_4 + 0x8c);
  local_c8 = param_7 - *(float *)(param_4 + 0x90);
  FUN_00710580(local_c0,&DAT_00b3f9a8,1,&local_d0,&local_e8);
  puVar2 = (undefined4 *)FUN_006f9290(local_30,local_dc,local_d8,local_d4);
  puVar4 = local_9c;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_0070fdd0(in_stack_00000030);
  puVar2 = (undefined4 *)FUN_007100a0(local_30,local_9c);
  puVar4 = (undefined4 *)(in_ECX[6] + 8);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = in_ECX[6];
  *(float *)(iVar3 + 0x2c) = -local_e8;
  *(float *)(iVar3 + 0x30) = -local_e4;
  *(float *)(iVar3 + 0x34) = -local_e0;
  FUN_007ee3e0(in_ECX[6]);
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_0056c030(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  
  iVar7 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    iVar7 = 6;
  }
  iVar3 = FUN_0073d5d0();
  if (**(int **)(in_ECX + 0x18) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(**(int **)(in_ECX + 0x18) + 0x34);
  }
  uVar4 = FUN_00452400(uVar6);
  iVar7 = iVar7 + iVar3 + 0x35 + (uVar4 & 0xffff);
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar5 = (int *)FUN_0046b250(*puVar1);
      uVar6 = (**(code **)(*piVar5 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x90,
                         "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,iVar7,*puVar1,uVar6);
      return iVar7;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",iVar7,0x90,
                 "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
  }
  return iVar7;
}



void FUN_0056c0f0(void)

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
  puVar1 = (undefined4 *)in_ECX[0x12];
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



undefined4 FUN_0056c180(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    uVar1 = FUN_0046b250(*(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x3c),0,&PTR_PTR_00b02f9c,
                         &PTR_PTR_00b03054,0);
    iVar2 = FUN_009832e6(uVar1);
    if (*(int *)(*(int *)(in_ECX + 0x18) + 0x3c) == 0) {
      if (iVar2 == 0) {
        return 1;
      }
    }
    else if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x3c) != 0) {
      return 1;
    }
  }
  return 0;
}



void FUN_0056c1d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  int local_28;
  int local_24;
  uint local_20;
  short *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  local_18 = 0;
  local_24 = *(int *)(DAT_00b33b00 + 0x14);
  local_1c = (short *)0x0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    local_20 = 0x4b4f4c42;
    FUN_0045b9a0(&local_20,4);
    local_1c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_18,2);
  }
  FUN_0056bd80();
  if (**(int **)(in_ECX + 0x18) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(**(int **)(in_ECX + 0x18) + 0x34);
  }
  FUN_0045e940(uVar5);
  FUN_0045b9a0(*(int *)(in_ECX + 0x18) + 4,4);
  FUN_007150f0(*(int *)(in_ECX + 0x18) + 8);
  FUN_0045b9a0(local_10,0x10);
  FUN_0045b9a0(*(int *)(in_ECX + 0x18) + 0x2c,0xc);
  FUN_0045b9a0(*(int *)(in_ECX + 0x18) + 0x38,4);
  FUN_0045f7a0(*(int *)(in_ECX + 0x18) + 0x3c,4);
  FUN_0045b9a0(*(int *)(in_ECX + 0x18) + 0x40,4);
  FUN_0045b9a0(*(int *)(in_ECX + 0x18) + 0x44,1);
  iVar6 = *(int *)(*(int *)(in_ECX + 0x18) + 0x3c);
  piVar7 = (int *)0x0;
  if (iVar6 != 0) {
    uVar5 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    piVar7 = (int *)FUN_009832e6(uVar5);
  }
  local_20 = local_20 & 0xffffff00;
  if (piVar7 == (int *)0x0) {
    iVar6 = FUN_004ca790();
    local_20 = CONCAT31(local_20._1_3_,1);
  }
  else {
    iVar6 = piVar7[0xf];
  }
  uVar2 = local_20;
  local_28 = FUN_00481210(iVar6,*(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x48),1,local_20);
  if ((local_28 == -1) && (piVar7 == DAT_00b333c4)) {
    iVar6 = FUN_00660110(1);
    local_28 = FUN_00481210(iVar6,*(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x48),1,uVar2);
  }
  local_14 = FUN_00480f00(iVar6,1,uVar2);
  if (local_28 == -1) {
    if (piVar7 == (int *)0x0) {
      FUN_004a7a60("Could not find geometry index for UNKNOWN reference");
    }
    else {
      iVar6 = piVar7[3];
      uVar5 = (**(code **)(*piVar7 + 0xd4))();
      FUN_004a7a60("Could not find geometry index for reference %08X %s",iVar6,uVar5);
    }
  }
  FUN_0045b9a0(&local_14,4);
  FUN_0045b9a0(&local_28,4);
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar6 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar6 - local_24,0xd2,
                   "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0xd2,
                         "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar6 - local_24,*puVar1,uVar5);
    }
  }
  cVar4 = FUN_0045a170();
  psVar3 = local_1c;
  if (cVar4 != '\0') {
    uVar2 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_1c + 0xffffU < uVar2) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",0xd2);
    }
    *psVar3 = (short)uVar2 - (short)psVar3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_0056c4c0(void)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  LONG LVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int in_ECX;
  int *unaff_FS_OFFSET;
  char *pcVar12;
  undefined1 auStack_148 [3];
  char cStack_145;
  uint local_144;
  int iStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  int local_134;
  int iStack_130;
  int local_12c;
  undefined4 *puStack_128;
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bd9cb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_148;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffea8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_144 = 0;
  local_134 = 0;
  cVar2 = FUN_0045a170(uVar3);
  if (cVar2 != '\0') {
    FUN_004534d0(&local_12c,4);
    if (local_12c != 0x4b4f4c42) {
      puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",0xdb,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar6);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",0xdb,*puVar6,uVar5);
      }
    }
    local_134 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_144,2);
  }
  cStack_145 = FUN_0056bca0();
  puVar6 = (undefined4 *)FUN_00401f00(0x4c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[0x12] = 0;
  }
  *(undefined4 **)(in_ECX + 0x18) = puVar6;
  iVar7 = FUN_0045a290(auStack_114);
  if (iVar7 != 0) {
    uVar5 = FUN_00442890(&puStack_128,auStack_114,0,0);
    uStack_4 = 0;
    FUN_0055e2a0(uVar5);
    uStack_4 = 0xffffffff;
    if (puStack_128 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puStack_128 + 1);
      if ((LVar8 == 0) && (puStack_128 != (undefined4 *)0x0)) {
        (**(code **)*puStack_128)(1);
      }
    }
  }
  if (**(int **)(in_ECX + 0x18) == 0) {
    cStack_145 = '\0';
  }
  FUN_004534d0(*(int **)(in_ECX + 0x18) + 1,4);
  FUN_004534d0(auStack_124,0x10);
  FUN_0047c600(*(int *)(in_ECX + 0x18) + 8);
  FUN_004534d0(*(int *)(in_ECX + 0x18) + 0x2c,0xc);
  FUN_004534d0(*(int *)(in_ECX + 0x18) + 0x38,4);
  FUN_0045ba00(*(int *)(in_ECX + 0x18) + 0x3c,4);
  FUN_004534d0(*(int *)(in_ECX + 0x18) + 0x40,4);
  FUN_004534d0(*(int *)(in_ECX + 0x18) + 0x44,1);
  FUN_004534d0(&iStack_140,4);
  FUN_004534d0(&uStack_138,4);
  iVar7 = *(int *)(*(int *)(in_ECX + 0x18) + 0x3c);
  piVar4 = (int *)0x0;
  if (iVar7 != 0) {
    uVar5 = FUN_0046b250(iVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    piVar4 = (int *)FUN_009832e6(uVar5);
  }
  uStack_13c = uStack_13c & 0xffffff00;
  if (piVar4 == (int *)0x0) {
    if (*(int *)(in_ECX + 0xc) != 0) {
      iVar7 = FUN_004ca790();
      uStack_13c = CONCAT31(uStack_13c._1_3_,1);
      goto LAB_0056c760;
    }
LAB_0056c913:
    cStack_145 = '\0';
  }
  else {
    iVar7 = piVar4[0xf];
LAB_0056c760:
    if ((iVar7 == 0) || (cStack_145 == '\0')) goto LAB_0056c913;
    iVar9 = FUN_00480f00(iVar7,1,uStack_13c);
    if (iStack_140 == iVar9) {
LAB_0056c822:
      piVar10 = (int *)FUN_00481320(iVar7,uStack_138,1,uStack_13c);
      if (piVar10 == (int *)0x0) {
        if (piVar4 == (int *)0x0) {
          piVar4 = *(int **)(in_ECX + 0xc);
          if (piVar4 == (int *)0x0) goto LAB_0056c913;
          iVar7 = piVar4[3];
          uVar5 = (**(code **)(*piVar4 + 0xd4))();
          pcVar12 = "Could not find geometry with index %i on cell %08X %s";
        }
        else {
          iVar7 = piVar4[3];
          uVar5 = (**(code **)(*piVar4 + 0xd4))();
          pcVar12 = "Could not find geometry with index %i on reference %08X %s";
        }
      }
      else {
        (**(code **)(*piVar10 + 0x10))();
        iVar7 = FUN_00707530(4);
        if (iVar7 == 0) {
LAB_0056c8d9:
          uVar5 = 0;
        }
        else {
          piVar10 = (int *)FUN_00707530(4);
          iVar7 = (**(code **)(*piVar10 + 0x54))();
          if (iVar7 < 1) goto LAB_0056c8d9;
          piVar10 = (int *)FUN_00707530(4);
          iVar7 = (**(code **)(*piVar10 + 0x54))();
          if (10 < iVar7) goto LAB_0056c8d9;
          uVar5 = FUN_00707530(4);
        }
        FUN_0075fa90(uVar5);
        if (*(int *)(*(int *)(in_ECX + 0x18) + 0x48) != 0) goto LAB_0056c918;
        iVar7 = piVar4[3];
        uVar5 = (**(code **)(*piVar4 + 0xd4))();
        pcVar12 = "There is no shader property on geometry with index %i on reference %08X %s";
      }
      FUN_004a7a60(pcVar12,uStack_138,iVar7,uVar5);
      goto LAB_0056c913;
    }
    if (piVar4 == DAT_00b333c4) {
      iVar7 = FUN_00660110(1);
      iVar9 = FUN_00480f00(iVar7,1,uStack_13c);
    }
    if (iStack_140 == iVar9) goto LAB_0056c822;
    if (piVar4 == (int *)0x0) {
      piVar10 = *(int **)(in_ECX + 0xc);
      if (piVar10 != (int *)0x0) {
        iStack_130 = piVar10[3];
        uVar5 = (**(code **)(*piVar10 + 0xd4))(iStack_140,iVar9);
        pcVar12 = 
        "Geometry count has changed on cell %08X %s\'s 3D.  Original count was %i, current count is %i"
        ;
        goto LAB_0056c809;
      }
    }
    else {
      iStack_130 = piVar4[3];
      uVar5 = (**(code **)(*piVar4 + 0xd4))(iStack_140,iVar9);
      pcVar12 = 
      "Geometry count has changed on reference %08X %s.  Original count was %i, current count is %i"
      ;
LAB_0056c809:
      FUN_004a7a60(pcVar12,iStack_130,uVar5);
    }
    cStack_145 = '\0';
    if (iStack_140 == iVar9) goto LAB_0056c822;
  }
LAB_0056c918:
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar3 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar6 == (undefined4 *)0x0) {
      uVar11 = local_144 & 0xffff;
      if (uVar11 + local_134 < uVar3) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar7 = (uVar3 - uVar11) - local_134;
        pcVar12 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar11 + local_134 <= uVar3) goto LAB_0056ca29;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar7 = (uVar11 - uVar3) + local_134;
        pcVar12 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar12,iVar7,"..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",0x141,uVar1);
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar6);
      iVar7 = local_134;
      uVar11 = (local_144 & 0xffff) + local_134;
      if (uVar11 < uVar3) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar3 - (local_144 & 0xffff)) - iVar7,
                     "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",0x141,*puVar6,uVar5);
      }
      else if (uVar3 < uVar11) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_144 & 0xffff) - uVar3) + iVar7,
                     "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",0x141,*puVar6,uVar5);
      }
    }
  }
LAB_0056ca29:
  cVar2 = cStack_145;
  iVar7 = *(int *)(in_ECX + 0x18);
  if (cStack_145 == '\0') {
    puVar6 = *(undefined4 **)(iVar7 + 0x48);
    if (puVar6 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar6 + 1);
      if ((LVar8 == 0) && (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      *(undefined4 *)(iVar7 + 0x48) = 0;
    }
  }
  else {
    FUN_007ee3e0(iVar7);
  }
  *unaff_FS_OFFSET = local_c;
  return cVar2;
}



void FUN_0056caa0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bda08;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6822c;
  local_4 = 0;
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
  iVar1 = in_ECX[6];
  if (iVar1 != 0) {
    FUN_0056c0f0(uVar3);
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_0056bc50();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0056cb50(byte param_1)

{
  FUN_0056caa0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0056cb70(int param_1,short param_2,char param_3,int param_4,int param_5,int param_6)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  uint uVar9;
  undefined2 uVar11;
  undefined4 uVar10;
  int iVar12;
  short *psVar13;
  undefined1 local_d;
  
  local_d = 0;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar7 = false;
  iVar12 = 0;
  psVar13 = (short *)(param_4 + param_1 * 2);
  do {
    if (param_3 == '\0') {
      sVar8 = *(short *)(param_4 + iVar12 * 2 + param_1 * 6);
    }
    else {
      sVar8 = *psVar13;
    }
    uVar9 = (uint)(ushort)(sVar8 + param_2);
    if (param_6 != 0) {
      uVar9 = (uint)*(ushort *)(param_6 + uVar9 * 2);
    }
    pfVar1 = (float *)(param_5 + uVar9 * 0xc);
    uVar11 = (undefined2)((uint)param_5 >> 0x10);
    if (0.0 <= *pfVar1) {
      if (1.0 < *pfVar1) {
        bVar4 = true;
      }
    }
    else {
      bVar3 = true;
    }
    if (0.0 <= pfVar1[1]) {
      if (1.0 < pfVar1[1]) {
        bVar6 = true;
      }
    }
    else {
      bVar5 = true;
    }
    if (0.1 < pfVar1[2]) {
      bVar7 = true;
    }
    fVar2 = *pfVar1;
    uVar10 = CONCAT22(uVar11,(ushort)(0.0 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
                             (ushort)(fVar2 == 0.0) << 0xe);
    if (0.0 < fVar2) {
      fVar2 = *pfVar1;
      uVar10 = CONCAT22(uVar11,(ushort)(1.0 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
                               (ushort)(fVar2 == 1.0) << 0xe);
      if (1.0 < fVar2 == 0 && (fVar2 == 1.0) == 0) {
        fVar2 = pfVar1[1];
        uVar10 = CONCAT22(uVar11,(ushort)(0.0 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
                                 (ushort)(fVar2 == 0.0) << 0xe);
        if (0.0 < fVar2) {
          fVar2 = pfVar1[1];
          uVar10 = CONCAT22(uVar11,(ushort)(1.0 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
                                   (ushort)(fVar2 == 1.0) << 0xe);
          if (1.0 < fVar2 == 0 && (fVar2 == 1.0) == 0) {
            fVar2 = pfVar1[2];
            uVar10 = CONCAT22(uVar11,(ushort)(fVar2 < 0.1) << 8 | (ushort)NAN(fVar2) << 10 |
                                     (ushort)(fVar2 == 0.1) << 0xe);
            if (fVar2 < 0.1 == 0 && (fVar2 == 0.1) == 0) {
              local_d = 1;
            }
          }
        }
      }
    }
    iVar12 = iVar12 + 1;
    psVar13 = psVar13 + 1;
  } while (iVar12 < 3);
  if ((((!bVar3) || (!bVar4)) && ((!bVar5 || (!bVar6)))) ||
     (uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),1), !bVar7)) {
    uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),local_d);
  }
  return uVar10;
}



undefined1 FUN_0056cce0(undefined4 param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x28) != '\0') {
    return 0;
  }
  uVar1 = FUN_0056bc70(param_1);
  *(float *)(*(int *)(in_ECX + 0x18) + 0x40) = *(float *)(in_ECX + 0x10) / *(float *)(in_ECX + 8);
  return uVar1;
}



void FUN_0056cd20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_0072af20(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(undefined2 *)(param_1 + 8),param_2,param_3,param_4,param_5,param_6);
  return;
}



void FUN_0056cd60(void)

{
  char cVar1;
  int *piVar2;
  int *in_ECX;
  
  if (DAT_00b3a690 != '\0') {
    piVar2 = (int *)FUN_0056bb90();
    if (piVar2 != (int *)0x0) {
      FUN_00478300(in_ECX);
      cVar1 = (**(code **)(*DAT_00b3f940 + 0x4c))(piVar2,1);
      if (cVar1 != '\0') {
        return;
      }
      (**(code **)(*piVar2 + 0x54))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0056cda6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x4c))();
  return;
}



void FUN_0056cdc0(byte param_1)

{
  FUN_0072ae60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0056cde0(void)

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
  puStack_8 = &LAB_009bda59;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0056bc20(0,0);
  *in_ECX = &PTR_FUN_00a6851c;
  in_ECX[7] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[6] = 0;
  puVar1 = (undefined4 *)in_ECX[7];
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[7] = 0;
  }
  in_ECX[9] = 0;
  in_ECX[8] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0056ce90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bdaa9;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0056bc20(param_1,param_2);
  *in_ECX = &PTR_FUN_00a6851c;
  in_ECX[7] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  local_4 = 3;
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[6] = param_3;
  FUN_00718a50(uVar3);
  puVar1 = (undefined4 *)in_ECX[7];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[7] = 0;
  }
  in_ECX[9] = 0;
  puVar1 = (undefined4 *)in_ECX[0xb];
  if (puVar1 != param_4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0xb] = param_4;
    if (param_4 != (undefined4 *)0x0) {
      InterlockedIncrement(param_4 + 1);
    }
  }
  puVar1 = (undefined4 *)param_4[7];
  puVar2 = (undefined4 *)in_ECX[0xc];
  if (puVar2 != puVar1) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    in_ECX[0xc] = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  in_ECX[0x13] = param_11;
  in_ECX[0xd] = param_5;
  in_ECX[0x14] = param_12;
  in_ECX[0xe] = param_6;
  in_ECX[0x10] = param_8;
  in_ECX[0xf] = param_7;
  in_ECX[0x11] = param_9;
  in_ECX[0x12] = param_10;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0056cff0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  LONG LVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int in_ECX;
  int unaff_EBX;
  undefined4 *puVar15;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bdb07;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = FUN_00401f00(0xc0,uVar7);
  puVar15 = (undefined4 *)0x0;
  local_4 = 0;
  if (iVar8 != 0) {
    puVar15 = (undefined4 *)
              FUN_007174b0(param_2,param_4,param_5,0,0,0,0,(param_3 & 0xffff) / 3,param_6);
  }
  pcVar9 = *(char **)(*(int *)(in_ECX + 0x2c) + 8);
  local_4 = 0xffffffff;
  pcVar10 = pcVar9 + 1;
  do {
    cVar6 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar6 != '\0');
  pcVar10 = (char *)FUN_00401f00(pcVar9 + (7 - (int)pcVar10),uVar7);
  _sprintf(pcVar10,"%s:%s","Decal",*(undefined4 *)(*(int *)(in_ECX + 0x2c) + 8));
  FUN_006ff420(pcVar10);
  FUN_00401f20(pcVar10);
  iVar8 = FUN_007b4290(0x10);
  piVar1 = *(int **)(iVar8 + 4);
  piVar2 = (int *)puVar15[0x2f];
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      LVar11 = InterlockedDecrement(piVar2 + 1);
      if ((LVar11 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    puVar15[0x2f] = piVar1;
    if (piVar1 != (int *)0x0) {
      InterlockedIncrement(piVar1 + 1);
    }
  }
  (**(code **)(*piVar1 + 0x18))(puVar15);
  puVar12 = (undefined4 *)FUN_00707530(4);
  FUN_007ee3e0(*(undefined4 *)(in_ECX + 0x18));
  iVar8 = *(int *)(in_ECX + 0x18);
  puVar14 = *(undefined4 **)(iVar8 + 0x48);
  if (puVar14 != puVar12) {
    if (puVar14 != (undefined4 *)0x0) {
      LVar11 = InterlockedDecrement(puVar14 + 1);
      if ((LVar11 == 0) && (puVar14 != (undefined4 *)0x0)) {
        (**(code **)*puVar14)(1);
      }
    }
    *(undefined4 **)(iVar8 + 0x48) = puVar12;
    if (puVar12 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar12 + 1);
    }
  }
  iVar8 = *(int *)(unaff_retaddr + 0xb8);
  uVar7 = *(uint *)(*(int *)(iVar8 + 8) + 0x40);
  iVar13 = FUN_00401f00(0x48);
  puStack_8 = (undefined1 *)0x1;
  if (iVar13 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_0072f8a0(uVar7,param_6,*(int *)(iVar8 + 8) + 0xc,param_3);
  }
  iVar13 = *(int *)(iVar8 + 0x14);
  puStack_8 = (undefined1 *)0xffffffff;
  puVar14 = (undefined4 *)
            FUN_00401f00(-(uint)((int)((ulonglong)uVar7 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar7 * 4));
  if (0 < (int)uVar7) {
    puVar12 = puVar14;
    do {
      *puVar12 = *(undefined4 *)((iVar13 - (int)puVar14) + (int)puVar12);
      puVar12 = puVar12 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  puVar12 = (undefined4 *)FUN_00401f00(0x2c);
  puStack_8 = (undefined1 *)0x2;
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar8 + 0x10);
    FUN_007005d0();
    *puVar12 = &PTR_FUN_00a684cc;
    puVar12[2] = param_2;
    if (param_2 != 0) {
      InterlockedIncrement((LONG *)(param_2 + 4));
    }
    puVar12[3] = 0;
    puVar12[5] = puVar14;
    puVar12[4] = uVar3;
    puVar12[6] = 0xffffffff;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  iVar8 = FUN_00401f00(0x10);
  puStack_8 = (undefined1 *)0x3;
  if (iVar8 == 0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)FUN_0072c980();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  cVar6 = FUN_0072ed50(puVar15[0x2d],param_2,0x12,4,1);
  if (cVar6 == '\0') {
    if (puVar14 != (undefined4 *)0x0) {
      (**(code **)*puVar14)(1);
    }
    if (puVar12 != (undefined4 *)0x0) {
      (**(code **)*puVar12)(1);
    }
  }
  else {
    puVar4 = (undefined4 *)puVar12[3];
    if (puVar4 != puVar14) {
      if (puVar4 != (undefined4 *)0x0) {
        LVar11 = InterlockedDecrement(puVar4 + 1);
        if ((LVar11 == 0) && (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
      }
      puVar12[3] = puVar14;
      if (puVar14 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar14 + 1);
      }
    }
    puVar14 = (undefined4 *)puVar15[0x2e];
    if (puVar14 != puVar12) {
      if (puVar14 != (undefined4 *)0x0) {
        LVar11 = InterlockedDecrement(puVar14 + 1);
        if ((LVar11 == 0) && (puVar14 != (undefined4 *)0x0)) {
          (**(code **)*puVar14)(1);
        }
      }
      puVar15[0x2e] = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar12 + 1);
      }
    }
  }
  puVar14 = (undefined4 *)FUN_00401f00(0x1c);
  puStack_8 = (undefined1 *)0x4;
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar14 = &PTR_FUN_00a2fd5c;
    *(undefined2 *)(puVar14 + 6) = 0;
  }
  *(ushort *)(puVar14 + 6) = *(ushort *)(puVar14 + 6) & 0xfffe;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00405680(puVar14);
  iVar8 = *(int *)(unaff_EBX + 0x2c);
  puVar15[0x15] = *(undefined4 *)(iVar8 + 0x54);
  puVar15[0x16] = *(undefined4 *)(iVar8 + 0x58);
  puVar15[0x17] = *(undefined4 *)(iVar8 + 0x5c);
  puVar14 = (undefined4 *)(*(int *)(unaff_EBX + 0x2c) + 0x30);
  puVar12 = puVar15 + 0xc;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar15[0x18] = ABS(*(float *)(*(int *)(unaff_EBX + 0x2c) + 0x60));
  (**(code **)(**(int **)(unaff_EBX + 0x30) + 0x84))(puVar15,1);
  fVar5 = (float)DAT_00b33ea0;
  if (DAT_00b33ea0 < 0) {
    fVar5 = fVar5 + 4.2949673e+09;
  }
  FUN_00707370(fVar5 / 1000.0,0);
  FUN_00707610();
  puVar14 = *(undefined4 **)(unaff_EBX + 0x1c);
  if (puVar14 == puVar15) {
    *(undefined4 *)(unaff_EBX + 0x20) = *(undefined4 *)(unaff_EBX + 0x2c);
  }
  else {
    if (puVar14 != (undefined4 *)0x0) {
      LVar11 = InterlockedDecrement(puVar14 + 1);
      if ((LVar11 == 0) && (puVar14 != (undefined4 *)0x0)) {
        (**(code **)*puVar14)(1);
      }
    }
    *(undefined4 **)(unaff_EBX + 0x1c) = puVar15;
    InterlockedIncrement(puVar15 + 1);
    *(undefined4 *)(unaff_EBX + 0x20) = *(undefined4 *)(unaff_EBX + 0x2c);
  }
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



undefined4 FUN_0056d480(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x18) != 0) && (*(int *)(in_ECX + 0x1c) != 0)) {
    uVar1 = FUN_0046b250(*(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x3c),0,&PTR_PTR_00b02f9c,
                         &PTR_PTR_00b03054,0);
    iVar2 = FUN_009832e6(uVar1);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x3c) != 0)) {
      return 1;
    }
  }
  return 0;
}



int FUN_0056d4e0(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int in_ECX;
  ushort *puVar11;
  int iVar12;
  
  iVar12 = 0;
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    iVar12 = 6;
  }
  iVar6 = FUN_0073d5d0();
  if (**(int **)(in_ECX + 0x18) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(**(int **)(in_ECX + 0x18) + 0x34);
  }
  uVar7 = FUN_00452400(uVar10);
  iVar2 = *(int *)(*(int *)(in_ECX + 0x1c) + 0xb4);
  iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0xb8) + 8);
  uVar8 = (uint)*(ushort *)(iVar3 + 0x40);
  iVar12 = iVar12 + iVar6 + (uVar7 & 0xffff) + 0x3b +
           ((uint)*(ushort *)(iVar2 + 0x44) + (uint)*(ushort *)(iVar2 + 8) * 0xc) * 2;
  if (uVar8 != 0) {
    puVar11 = (ushort *)(*(int *)(iVar3 + 0x44) + 0x48);
    do {
      uVar1 = *puVar11;
      puVar11 = puVar11 + 0x26;
      uVar8 = uVar8 - 1;
      iVar12 = iVar12 + 2 + (uint)uVar1 * 8;
    } while (uVar8 != 0);
  }
  if (DAT_00b05bac != '\0') {
    puVar4 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar4 != (undefined4 *)0x0) {
      piVar9 = (int *)FUN_0046b250(*puVar4);
      uVar10 = (**(code **)(*piVar9 + 0xd4))
                         (*(undefined4 *)((int)puVar4 + 5),0x51d,
                          "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,iVar12,*puVar4,uVar10);
      return iVar12;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",iVar12,0x51d,
                 "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
  }
  return iVar12;
}



void FUN_0056d5f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  short *psVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  int iStack_34;
  uint uStack_30;
  uint local_2c;
  uint uStack_28;
  int local_24;
  uint uStack_20;
  short *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 local_10 [16];
  
  local_18 = 0;
  local_24 = *(int *)(DAT_00b33b00 + 0x14);
  local_1c = (short *)0x0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    local_2c = 0x4b4f4c42;
    FUN_0045b9a0(&local_2c,4);
    local_1c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_18,2);
  }
  FUN_0056bd80();
  if (**(int **)(in_ECX + 0x18) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(**(int **)(in_ECX + 0x18) + 0x34);
  }
  FUN_0045e940(uVar5);
  FUN_0045b9a0(*(int *)(in_ECX + 0x18) + 4,4);
  FUN_007150f0(*(int *)(in_ECX + 0x18) + 8);
  FUN_0045b9a0(local_10,0x10);
  FUN_0045b9a0(*(int *)(in_ECX + 0x18) + 0x2c,0xc);
  FUN_0045b9a0(*(int *)(in_ECX + 0x18) + 0x38,4);
  FUN_0045f7a0(*(int *)(in_ECX + 0x18) + 0x3c,4);
  FUN_0045b9a0(*(int *)(in_ECX + 0x18) + 0x40,4);
  FUN_0045b9a0(*(int *)(in_ECX + 0x18) + 0x44,1);
  uVar5 = FUN_0046b250(*(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x3c),0,&PTR_PTR_00b02f9c,
                       &PTR_PTR_00b03054,0);
  piVar6 = (int *)FUN_009832e6(uVar5);
  iVar8 = *(int *)(in_ECX + 0x20);
  iVar7 = piVar6[0xf];
  if (iVar8 == 0) {
    local_2c = piVar6[3];
    uVar5 = (**(code **)(*piVar6 + 0xd4))();
    FUN_004a7a60("Could not find attached geometry for decal on reference  %08X %s",local_2c,uVar5);
  }
  iStack_34 = FUN_004810a0(iVar7,iVar8,1,0);
  if ((iStack_34 == -1) && (piVar6 == DAT_00b333c4)) {
    iVar7 = FUN_00660110(1);
    iStack_34 = FUN_004810a0(iVar7,iVar8,1,0);
  }
  uStack_14 = FUN_00480f00(iVar7,1,0);
  if (iStack_34 == -1) {
    iVar8 = piVar6[3];
    uVar5 = (**(code **)(*piVar6 + 0xd4))();
    FUN_004a7a60("Could not find geometry index for reference %08X %s",iVar8,uVar5);
  }
  FUN_0045b9a0(&uStack_14,4);
  FUN_0045b9a0(&iStack_34,4);
  iVar8 = *(int *)(*(int *)(in_ECX + 0x1c) + 0xb4);
  iVar7 = *(int *)(*(int *)(in_ECX + 0x1c) + 0xb8);
  uStack_30 = (uint)*(ushort *)(iVar8 + 8);
  iVar1 = *(int *)(*(int *)(iVar7 + 8) + 0x44);
  uStack_20 = (uint)*(ushort *)(iVar8 + 0x44);
  uStack_28 = (uint)*(ushort *)(*(int *)(iVar7 + 8) + 0x40);
  FUN_0045b9a0(&uStack_30,2);
  FUN_0045b9a0(&uStack_20,2);
  FUN_0045b9a0(&uStack_28,2);
  FUN_0045b9a0(*(undefined4 *)(iVar8 + 0x1c),(uStack_30 & 0xffff) * 0xc);
  FUN_0045b9a0(*(undefined4 *)(iVar8 + 0x20),(uStack_30 & 0xffff) * 0xc);
  FUN_0045b9a0(*(undefined4 *)(iVar8 + 0x48),(uStack_20 & 0xffff) * 2);
  iVar8 = 0;
  if ((short)uStack_28 != 0) {
    piVar6 = (int *)(iVar1 + 0x44);
    do {
      local_2c = (uint)*(ushort *)(piVar6 + 1);
      FUN_0045b9a0(&local_2c,2);
      uVar9 = 0;
      if ((short)local_2c != 0) {
        do {
          FUN_0045b9a0(*piVar6 + uVar9 * 8,8);
          uVar9 = uVar9 + 1;
        } while (uVar9 < (local_2c & 0xffff));
      }
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 0x13;
    } while (iVar8 < (int)(uStack_28 & 0xffff));
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar8 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar8 - local_24,0x580,
                   "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
    }
    else {
      piVar6 = (int *)FUN_0046b250(*puVar2);
      uVar5 = (**(code **)(*piVar6 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x580,
                         "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar8 - local_24,*puVar2,uVar5);
    }
  }
  cVar4 = FUN_0045a170();
  psVar3 = local_1c;
  if (cVar4 != '\0') {
    uVar9 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_1c + 0xffffU < uVar9) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",0x580);
    }
    *psVar3 = (short)uVar9 - (short)psVar3;
  }
  return;
}



void FUN_0056d9e0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  undefined2 uVar7;
  bool bVar8;
  void *pvVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  short *psVar14;
  float *pfVar15;
  uint uVar16;
  void *pvVar17;
  double *pdVar18;
  double *pdVar19;
  int in_ECX;
  int iVar20;
  int iVar21;
  int iVar22;
  ushort uVar23;
  short sVar24;
  int *piVar25;
  uint uVar26;
  float *pfVar27;
  float *pfVar28;
  short sVar29;
  undefined4 *puVar30;
  float *pfVar31;
  int iVar32;
  int *unaff_FS_OFFSET;
  bool bVar33;
  uint local_228;
  int local_224;
  int local_220;
  short *local_21c;
  uint local_20c;
  int local_208;
  float local_204;
  float local_200;
  float local_1fc;
  double local_1f8;
  float local_1f0;
  double local_1e8;
  float local_1e0;
  int local_1d4;
  undefined4 *local_1d0;
  void *local_1cc;
  uint local_1c8;
  char local_1c1;
  short *local_1c0;
  short *local_1bc;
  int local_1b8;
  void *local_1b4;
  void *local_1b0;
  int local_1ac;
  int local_1a8;
  undefined1 local_1a4;
  int local_1a0;
  int local_19c;
  undefined1 local_198;
  int local_194;
  int local_190;
  int local_18c;
  double local_188;
  float *local_17c;
  int local_178;
  int local_174;
  undefined1 local_170;
  int local_16c;
  int local_168;
  undefined1 local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124 [9];
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f0 [18];
  undefined4 local_a8 [9];
  undefined1 local_84 [36];
  undefined1 local_60 [36];
  undefined1 local_3c [40];
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009bdb68;
  local_14 = *unaff_FS_OFFSET;
  uVar11 = DAT_00b30aac ^ (uint)&stack0xfffffdc8;
  *unaff_FS_OFFSET = (int)&local_14;
  iVar22 = *(int *)(*(int *)(in_ECX + 0x2c) + 0xb8);
  local_224 = *(int *)(*(int *)(iVar22 + 0xc) + 8);
  puVar13 = (undefined4 *)(*(int *)(in_ECX + 0x2c) + 100);
  puVar30 = local_f0;
  for (iVar20 = 9; iVar20 != 0; iVar20 = iVar20 + -1) {
    *puVar30 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar30 = puVar30 + 1;
  }
  local_194 = in_ECX;
  FUN_007103c0(local_3c);
  FUN_007107a0(local_f0,1,(undefined4 *)(in_ECX + 0x40),&local_130,uVar11);
  FUN_0070fdd0(*(undefined4 *)(in_ECX + 0x50));
  uVar12 = FUN_006f9290(local_84,*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44),
                        *(undefined4 *)(in_ECX + 0x48));
  puVar13 = (undefined4 *)FUN_007100a0(local_60,uVar12);
  iVar20 = *(int *)(in_ECX + 0x2c);
  puVar30 = local_a8;
  for (iVar21 = 9; iVar21 != 0; iVar21 = iVar21 + -1) {
    *puVar30 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar30 = puVar30 + 1;
  }
  puVar13 = (undefined4 *)(iVar20 + 100);
  puVar30 = local_124;
  for (iVar21 = 0xd; iVar21 != 0; iVar21 = iVar21 + -1) {
    *puVar30 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar30 = puVar30 + 1;
  }
  local_100 = local_100 - *(float *)(in_ECX + 0x34);
  local_fc = local_fc - *(float *)(in_ECX + 0x38);
  local_f8 = local_f8 - *(float *)(in_ECX + 0x3c);
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  local_168 = 0;
  local_164 = 0;
  uVar11 = (uint)*(ushort *)(*(int *)(*(int *)(iVar20 + 0xb4) + 0x34) + 0xc);
  local_1c1 = FUN_00728ab0(0);
  FUN_00728b60(&local_1a0);
  FUN_00728d00(&local_1ac);
  FUN_00728e70(0,&local_13c);
  FUN_00728c00(&local_178);
  FUN_00728c80(&local_16c);
  local_1cc = *(void **)(*(int *)(iVar22 + 0xc) + 0xc);
  local_228 = 0;
  if (0 < local_224) {
    psVar14 = (short *)((int)local_1cc + 0x22);
    uVar23 = 0;
    iVar20 = local_224;
    do {
      uVar23 = uVar23 + psVar14[-2];
      local_228 = (uint)uVar23;
      if (*psVar14 == 0) {
        local_228 = local_228 * 3;
      }
      else {
        local_228 = local_228 + 2;
      }
      psVar14 = psVar14 + 0x16;
      iVar20 = iVar20 + -1;
      local_228 = local_228 & 0xffff;
    } while (iVar20 != 0);
  }
  local_1b4 = (void *)FUN_00401f00(local_228 * 6);
  local_1b0 = (void *)FUN_00401f00(uVar11 * 4);
  uVar26 = 0;
  local_1c8 = 0;
  _memset(local_1b0,-1,uVar11 * 4);
  local_1b8 = FUN_00401f00(uVar11 * 0xc);
  local_220 = FUN_00401f00(uVar11 * 0x10);
  if (local_220 == 0) {
    local_220 = 0;
  }
  else {
    iVar20 = uVar11 - 1;
    if (-1 < iVar20) {
      puVar13 = (undefined4 *)(local_220 + 8);
      do {
        puVar13[1] = 0;
        iVar20 = iVar20 + -1;
        *puVar13 = 0;
        puVar13[-1] = 0;
        puVar13[-2] = 0;
        puVar13 = puVar13 + 4;
      } while (-1 < iVar20);
    }
  }
  if (*(int *)(*(int *)(iVar22 + 8) + 0x44) != 0) {
    local_190 = FUN_00401f00(uVar11 * 0xc);
    local_17c = (float *)FUN_00401f00(uVar11 * 0xc);
    FUN_0072ae50(&local_1a0,&local_178,&local_16c,&local_1ac,uVar11,local_190,local_17c,0xc);
    iVar20 = *(int *)(*(int *)(iVar22 + 8) + 0x44);
    local_1bc = *(short **)(*(int *)(iVar22 + 8) + 0x40);
    local_1d4 = FUN_00401f00(-(uint)((int)(ZEXT48(local_1bc) * 0x4c >> 0x20) != 0) |
                             (uint)(ZEXT48(local_1bc) * 0x4c));
    local_c = 0;
    psVar14 = local_1bc;
    if (local_1d4 == 0) {
      local_1d4 = 0;
    }
    else {
      while (-1 < (int)psVar14 + -1) {
        FUN_0072ef90();
        psVar14 = (short *)((int)psVar14 + -1);
      }
    }
    local_21c = (short *)0x0;
    if (0 < (int)local_1bc) {
      do {
        local_c = 0xffffffff;
        local_1d0 = (undefined4 *)((int)local_21c * 0x4c + local_1d4);
        puVar13 = (undefined4 *)((int)local_21c * 0x4c + iVar20);
        puVar30 = local_1d0;
        for (iVar22 = 0xd; iVar22 != 0; iVar22 = iVar22 + -1) {
          *puVar30 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar30 = puVar30 + 1;
        }
        if (local_21c == (short *)0x0) {
          iVar22 = FUN_00401f00(uVar11 << 5);
          local_c = 1;
          if (iVar22 == 0) {
LAB_0056df18:
            iVar22 = 0;
          }
          else {
            iVar21 = uVar11 * 4;
            while (iVar21 = iVar21 + -1, -1 < iVar21) {
              FUN_0072efa0();
            }
          }
        }
        else {
          iVar22 = FUN_00401f00(uVar11 * 8);
          local_c = 2;
          uVar16 = uVar11;
          if (iVar22 == 0) goto LAB_0056df18;
          while (-1 < (int)(uVar16 - 1)) {
            FUN_0072efa0();
            uVar16 = uVar16 - 1;
          }
        }
        local_1d0[0x11] = iVar22;
        local_21c = (short *)((int)local_21c + 1);
      } while ((int)local_21c < (int)local_1bc);
    }
    local_c = 0xffffffff;
    local_228 = 0;
    if (uVar11 != 0) {
      local_188 = (double)local_12c;
      local_1e8 = (double)local_130;
      pfVar28 = (float *)(local_220 + 8);
      local_1f8 = (double)local_128;
      iVar22 = local_190 - (int)local_17c;
      pfVar27 = (float *)(local_1b8 + 8);
      pfVar31 = local_17c;
      do {
        local_1fc = DAT_00b3f9b0;
        local_204 = DAT_00b3f9a8;
        local_148 = *(undefined4 *)(iVar22 + (int)pfVar31);
        local_200 = DAT_00b3f9ac;
        local_144 = *(undefined4 *)(iVar22 + 4 + (int)pfVar31);
        local_140 = *(undefined4 *)(iVar22 + 8 + (int)pfVar31);
        local_158 = pfVar31[2];
        local_160 = *pfVar31;
        local_15c = pfVar31[1];
        pfVar15 = (float *)(local_174 * local_228 + local_178);
        fVar1 = *pfVar15;
        pfVar28[-2] = fVar1;
        fVar2 = pfVar15[1];
        pfVar28[-1] = fVar2;
        fVar3 = pfVar15[2];
        *pfVar28 = fVar3;
        pfVar28[1] = ((1.0 - fVar1) - fVar2) - fVar3;
        fVar1 = 1.0 - (pfVar28[-1] + pfVar28[-2] + *pfVar28);
        pfVar28[1] = fVar1;
        if (fVar1 < 0.0001) {
          pfVar28[1] = 0.0;
        }
        local_154 = DAT_00b3f9a8;
        local_150 = DAT_00b3f9ac;
        local_14c = DAT_00b3f9b0;
        FUN_00710580(local_124,&local_100,1,&local_148,&local_154);
        FUN_00710580(local_a8,&DAT_00b3f9a8,1,&local_154,&local_204);
        pfVar27[-2] = local_204 / *(float *)(local_194 + 0x4c) + 0.5;
        pfVar27[-1] = local_200 / *(float *)(local_194 + 0x4c) + 0.5;
        fVar1 = local_158 * (float)local_1f8 +
                local_160 * (float)local_1e8 + local_15c * (float)local_188;
        if (fVar1 < 0.0) {
          fVar1 = 0.0;
        }
        uVar16 = 10;
        local_1d0 = (undefined4 *)(1.0 - fVar1);
        local_21c = (short *)0x3f800000;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            local_21c = (short *)((float)local_21c * (float)local_1d0);
          }
          uVar16 = uVar16 >> 1;
          if (uVar16 == 0) break;
          local_1d0 = (undefined4 *)((float)local_1d0 * (float)local_1d0);
        }
        local_1c0 = local_21c;
        local_228 = local_228 + 1;
        pfVar28 = pfVar28 + 4;
        pfVar31 = pfVar31 + 3;
        *pfVar27 = (1.0 - ABS(local_1fc) * 0.00390625) * (float)local_21c;
        pfVar27 = pfVar27 + 3;
      } while ((int)local_228 < (int)uVar11);
    }
    local_20c = 0;
    local_21c = (short *)0x0;
    if (0 < local_224) {
      puVar13 = (undefined4 *)((int)local_1cc + 0x14);
      local_208 = local_224;
      do {
        uVar23 = *(ushort *)((int)puVar13 + 10);
        bVar33 = *(short *)((int)puVar13 + 0xe) != 0;
        psVar14 = (short *)*puVar13;
        local_224 = CONCAT31(local_224._1_3_,bVar33);
        local_188 = (double)CONCAT44(local_188._4_4_,psVar14);
        bVar8 = false;
        local_1e8 = (double)((ulonglong)local_1e8 & 0xffffffff00000000);
        if (uVar23 != 0) {
          local_1c0 = psVar14 + 2;
          local_1d0 = (undefined4 *)0x0;
          do {
            sVar29 = (short)local_21c;
            if (bVar33) {
              sVar4 = psVar14[1];
              sVar5 = *psVar14;
              sVar24 = psVar14[2];
            }
            else {
              sVar5 = local_1c0[-2];
              sVar4 = local_1c0[-1];
              sVar24 = *local_1c0;
            }
            if ((((short)(sVar5 + sVar29) == (short)(sVar4 + sVar29)) ||
                ((short)(sVar5 + sVar29) == (short)(sVar24 + sVar29))) ||
               ((short)(sVar4 + sVar29) == (short)(sVar24 + sVar29))) {
              if (bVar33) {
                bVar8 = !bVar8;
              }
            }
            else {
              cVar10 = FUN_0056cb70(local_1e8._0_4_,local_21c,local_224,local_188._0_4_,local_1b8,0)
              ;
              if (cVar10 != '\0') {
                local_18c = 0;
                local_1f8 = (double)CONCAT44(local_1f8._4_4_,psVar14);
                do {
                  if (bVar33) {
                    uVar6 = *local_1f8._0_4_;
                  }
                  else {
                    uVar6 = *(ushort *)(local_188._0_4_ + ((int)local_1d0 + local_18c) * 2);
                  }
                  uVar16 = (uint)uVar6 + (int)local_21c & 0xffff;
                  if (*(int *)((int)local_1b0 + uVar16 * 4) == -1) {
                    *(uint *)((int)local_1b0 + uVar16 * 4) = uVar26 & 0xffff;
                    *(short *)((int)local_1b4 + (local_20c & 0xffff) * 2) = (short)uVar26;
                    local_1cc = *(void **)(local_168 * uVar16 + local_16c);
                    if (*(float *)(local_220 + uVar16 * 0x10) != 0.0) {
                      iVar22 = (uint)*(ushort *)(puVar13[-4] + ((uint)local_1cc >> 0x18) * 2) * 0x4c
                               + local_1d4;
                      *(short *)(*(int *)(iVar22 + 0x44) + (uint)*(ushort *)(iVar22 + 0x48) * 8) =
                           (short)uVar26;
                      *(undefined4 *)
                       (*(int *)(iVar22 + 0x44) + 4 + (uint)*(ushort *)(iVar22 + 0x48) * 8) =
                           *(undefined4 *)(local_220 + uVar16 * 0x10);
                      *(short *)(iVar22 + 0x48) = *(short *)(iVar22 + 0x48) + 1;
                      uVar26 = local_1c8;
                    }
                    if (*(float *)(local_220 + 4 + uVar16 * 0x10) != 0.0) {
                      iVar22 = (uint)*(ushort *)(puVar13[-4] + ((uint)local_1cc >> 0x10 & 0xff) * 2)
                               * 0x4c + local_1d4;
                      *(short *)(*(int *)(iVar22 + 0x44) + (uint)*(ushort *)(iVar22 + 0x48) * 8) =
                           (short)uVar26;
                      *(undefined4 *)
                       (*(int *)(iVar22 + 0x44) + 4 + (uint)*(ushort *)(iVar22 + 0x48) * 8) =
                           *(undefined4 *)(local_220 + 4 + uVar16 * 0x10);
                      *(short *)(iVar22 + 0x48) = *(short *)(iVar22 + 0x48) + 1;
                      uVar26 = local_1c8;
                    }
                    if (*(float *)(local_220 + 8 + uVar16 * 0x10) != 0.0) {
                      iVar22 = (uint)*(ushort *)(puVar13[-4] + ((uint)local_1cc >> 8 & 0xff) * 2) *
                               0x4c + local_1d4;
                      *(short *)(*(int *)(iVar22 + 0x44) + (uint)*(ushort *)(iVar22 + 0x48) * 8) =
                           (short)uVar26;
                      *(undefined4 *)
                       (*(int *)(iVar22 + 0x44) + 4 + (uint)*(ushort *)(iVar22 + 0x48) * 8) =
                           *(undefined4 *)(local_220 + 8 + uVar16 * 0x10);
                      *(short *)(iVar22 + 0x48) = *(short *)(iVar22 + 0x48) + 1;
                      uVar26 = local_1c8;
                    }
                    if (*(float *)(local_220 + 0xc + uVar16 * 0x10) != 0.0) {
                      iVar22 = (uint)*(ushort *)(puVar13[-4] + ((uint)local_1cc & 0xff) * 2) * 0x4c
                               + local_1d4;
                      *(short *)(*(int *)(iVar22 + 0x44) + (uint)*(ushort *)(iVar22 + 0x48) * 8) =
                           (short)uVar26;
                      *(undefined4 *)
                       (*(int *)(iVar22 + 0x44) + 4 + (uint)*(ushort *)(iVar22 + 0x48) * 8) =
                           *(undefined4 *)(local_220 + 0xc + uVar16 * 0x10);
                      *(short *)(iVar22 + 0x48) = *(short *)(iVar22 + 0x48) + 1;
                    }
                    uVar26 = uVar26 + 1;
                    local_1c8 = uVar26;
                  }
                  else {
                    *(undefined2 *)((int)local_1b4 + (local_20c & 0xffff) * 2) =
                         *(undefined2 *)((int)local_1b0 + uVar16 * 4);
                  }
                  local_20c = local_20c + 1;
                  local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_1f8._0_4_ + 1);
                  local_18c = local_18c + 1;
                } while (local_18c < 3);
                if (!bVar33) goto LAB_0056e529;
                if (bVar8) {
                  uVar16 = local_20c & 0xffff;
                  uVar7 = *(undefined2 *)((int)local_1b4 + uVar16 * 2 + -6);
                  *(undefined2 *)((int)local_1b4 + uVar16 * 2 + -6) =
                       *(undefined2 *)((int)local_1b4 + uVar16 * 2 + -2);
                  *(undefined2 *)((int)local_1b4 + uVar16 * 2 + -2) = uVar7;
                }
              }
              if (bVar33) {
                bVar8 = !bVar8;
              }
            }
LAB_0056e529:
            local_1d0 = (undefined4 *)((int)local_1d0 + 3);
            iVar22 = local_1e8._0_4_ + 1;
            local_1c0 = local_1c0 + 3;
            psVar14 = psVar14 + 1;
            local_1e8 = (double)CONCAT44(local_1e8._4_4_,iVar22);
          } while (iVar22 < (int)(uint)uVar23);
        }
        local_21c = (short *)((int)local_21c + (uint)*(ushort *)(puVar13 + 2));
        puVar13 = puVar13 + 0xb;
        local_208 = local_208 + -1;
      } while (local_208 != 0);
    }
    FUN_00401f20(local_220);
    if ((short)uVar26 == 0) {
      if (0 < (int)local_1bc) {
        puVar13 = (undefined4 *)(local_1d4 + 0x44);
        psVar14 = local_1bc;
        do {
          FUN_00401f20(*puVar13);
          *puVar13 = 0;
          puVar13 = puVar13 + 0x13;
          psVar14 = (short *)((int)psVar14 + -1);
        } while (psVar14 != (short *)0x0);
      }
      FUN_00401f20(local_1d4);
    }
    else {
      pvVar17 = (void *)FUN_00401f00((local_20c & 0xffff) * 2);
      local_188 = (double)CONCAT44(local_188._4_4_,pvVar17);
      _memcpy(pvVar17,local_1b4,(local_20c & 0xffff) * 2);
      iVar22 = FUN_00401f00((uVar26 & 0xffff) * 0xc);
      iVar20 = FUN_00401f00((uVar26 & 0xffff) * 0xc);
      iVar21 = 0;
      if (3 < uVar11) {
        piVar25 = (int *)((int)local_1b0 + 8);
        iVar32 = 2;
        puVar13 = (undefined4 *)(local_1b8 + 0x18);
        do {
          if (piVar25[-2] != -1) {
            pdVar18 = (double *)(local_19c * iVar21 + local_1a0);
            local_1f8 = *pdVar18;
            local_1f0 = *(float *)(pdVar18 + 1);
            pdVar19 = (double *)(local_1a8 * iVar21 + local_1ac);
            local_1e8 = *pdVar19;
            local_1e0 = *(float *)(pdVar19 + 1);
            pfVar27 = (float *)(iVar22 + piVar25[-2] * 0xc);
            local_204 = *(float *)pdVar19 * 0.05 + *(float *)pdVar18;
            local_200 = *(float *)((int)pdVar18 + 4) + *(float *)((int)pdVar19 + 4) * 0.05;
            local_1fc = local_1f0 + local_1e0 * 0.05;
            *pfVar27 = local_204;
            pfVar27[1] = local_200;
            pfVar27[2] = local_1fc;
            puVar30 = (undefined4 *)(iVar20 + piVar25[-2] * 0xc);
            *puVar30 = puVar13[-6];
            puVar30[1] = puVar13[-5];
            puVar30[2] = puVar13[-4];
            uVar26 = local_1c8;
          }
          if (piVar25[-1] != -1) {
            pdVar18 = (double *)(local_19c * (iVar32 + -1) + local_1a0);
            local_1f8 = *pdVar18;
            local_1f0 = *(float *)(pdVar18 + 1);
            pdVar19 = (double *)(local_1a8 * (iVar32 + -1) + local_1ac);
            local_1e8 = *pdVar19;
            local_1e0 = *(float *)(pdVar19 + 1);
            pfVar27 = (float *)(iVar22 + piVar25[-1] * 0xc);
            local_204 = *(float *)pdVar19 * 0.05 + *(float *)pdVar18;
            local_200 = *(float *)((int)pdVar18 + 4) + *(float *)((int)pdVar19 + 4) * 0.05;
            local_1fc = local_1f0 + local_1e0 * 0.05;
            *pfVar27 = local_204;
            pfVar27[1] = local_200;
            pfVar27[2] = local_1fc;
            puVar30 = (undefined4 *)(iVar20 + piVar25[-1] * 0xc);
            *puVar30 = puVar13[-3];
            puVar30[1] = puVar13[-2];
            puVar30[2] = puVar13[-1];
            uVar26 = local_1c8;
          }
          if (*piVar25 != -1) {
            pdVar18 = (double *)(iVar32 * local_19c + local_1a0);
            local_1f8 = *pdVar18;
            local_1f0 = *(float *)(pdVar18 + 1);
            pdVar19 = (double *)(iVar32 * local_1a8 + local_1ac);
            local_1e8 = *pdVar19;
            local_1e0 = *(float *)(pdVar19 + 1);
            pfVar27 = (float *)(iVar22 + *piVar25 * 0xc);
            local_204 = *(float *)pdVar19 * 0.05 + *(float *)pdVar18;
            local_200 = *(float *)((int)pdVar18 + 4) + *(float *)((int)pdVar19 + 4) * 0.05;
            local_1fc = local_1f0 + local_1e0 * 0.05;
            *pfVar27 = local_204;
            pfVar27[1] = local_200;
            pfVar27[2] = local_1fc;
            puVar30 = (undefined4 *)(iVar20 + *piVar25 * 0xc);
            *puVar30 = *puVar13;
            puVar30[1] = puVar13[1];
            puVar30[2] = puVar13[2];
            uVar26 = local_1c8;
          }
          if (piVar25[1] != -1) {
            pdVar18 = (double *)(local_19c * (iVar32 + 1) + local_1a0);
            local_1f8 = *pdVar18;
            local_1f0 = *(float *)(pdVar18 + 1);
            pdVar19 = (double *)(local_1a8 * (iVar32 + 1) + local_1ac);
            local_1e8 = *pdVar19;
            local_1e0 = *(float *)(pdVar19 + 1);
            pfVar27 = (float *)(iVar22 + piVar25[1] * 0xc);
            local_204 = *(float *)pdVar19 * 0.05 + *(float *)pdVar18;
            local_200 = *(float *)((int)pdVar18 + 4) + *(float *)((int)pdVar19 + 4) * 0.05;
            local_1fc = local_1f0 + local_1e0 * 0.05;
            *pfVar27 = local_204;
            pfVar27[1] = local_200;
            pfVar27[2] = local_1fc;
            puVar30 = (undefined4 *)(iVar20 + piVar25[1] * 0xc);
            *puVar30 = puVar13[3];
            puVar30[1] = puVar13[4];
            puVar30[2] = puVar13[5];
            uVar26 = local_1c8;
          }
          iVar21 = iVar21 + 4;
          puVar13 = puVar13 + 0xc;
          piVar25 = piVar25 + 4;
          iVar32 = iVar32 + 4;
        } while (iVar21 < (int)(uVar11 - 3));
      }
      if (iVar21 < (int)uVar11) {
        puVar13 = (undefined4 *)(local_1b8 + iVar21 * 0xc);
        do {
          iVar32 = *(int *)((int)local_1b0 + iVar21 * 4);
          if (iVar32 != -1) {
            pdVar18 = (double *)(local_19c * iVar21 + local_1a0);
            local_1f8 = *pdVar18;
            local_1f0 = *(float *)(pdVar18 + 1);
            pdVar19 = (double *)(local_1a8 * iVar21 + local_1ac);
            local_1e8 = *pdVar19;
            local_1e0 = *(float *)(pdVar19 + 1);
            pfVar27 = (float *)(iVar22 + iVar32 * 0xc);
            local_204 = *(float *)pdVar19 * 0.05 + *(float *)pdVar18;
            local_200 = *(float *)((int)pdVar18 + 4) + *(float *)((int)pdVar19 + 4) * 0.05;
            local_1fc = local_1f0 + local_1e0 * 0.05;
            *pfVar27 = local_204;
            pfVar27[1] = local_200;
            pfVar27[2] = local_1fc;
            puVar30 = (undefined4 *)(iVar20 + *(int *)((int)local_1b0 + iVar21 * 4) * 0xc);
            *puVar30 = *puVar13;
            puVar30[1] = puVar13[1];
            puVar30[2] = puVar13[2];
          }
          iVar21 = iVar21 + 1;
          puVar13 = puVar13 + 3;
        } while (iVar21 < (int)uVar11);
      }
      if (0 < (int)local_1bc) {
        puVar13 = (undefined4 *)(local_1d4 + 0x44);
        local_1c0 = local_1bc;
        do {
          uVar11 = (uint)*(ushort *)(puVar13 + 1);
          local_1cc = (void *)*puVar13;
          pvVar17 = (void *)FUN_00401f00(uVar11 * 8);
          local_c = 3;
          if (pvVar17 == (void *)0x0) {
            pvVar17 = (void *)0x0;
          }
          else {
            while (uVar11 = uVar11 - 1, -1 < (int)uVar11) {
              FUN_0072efa0();
            }
          }
          pvVar9 = local_1cc;
          *puVar13 = pvVar17;
          local_c = 0xffffffff;
          _memcpy(pvVar17,local_1cc,(uint)*(ushort *)(puVar13 + 1) * 8);
          FUN_00401f20(pvVar9);
          puVar13 = puVar13 + 0x13;
          local_1c0 = (short *)((int)local_1c0 + -1);
        } while (local_1c0 != (short *)0x0);
      }
      FUN_0056cff0(*(undefined4 *)(local_194 + 0x2c),uVar26,local_20c,iVar22,iVar20,local_188._0_4_,
                   local_1d4);
    }
    FUN_00401f20(local_190);
    FUN_00401f20(local_17c);
    FUN_00401f20(local_1b4);
    FUN_00401f20(local_1b0);
    FUN_00401f20(local_1b8);
    if (local_1c1 != '\0') {
      FUN_00728b20();
    }
  }
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_0056ecd0(void)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined2 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  void *_Src;
  bool bVar14;
  char cVar15;
  ushort uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  void *_Src_00;
  void *_Dst;
  int iVar20;
  float *pfVar21;
  uint uVar22;
  void *_Dst_00;
  int iVar23;
  int iVar24;
  float *pfVar25;
  void *_Dst_01;
  int in_ECX;
  int iVar26;
  int iVar27;
  short *psVar28;
  int iVar29;
  uint uVar30;
  float *pfVar31;
  int *piVar32;
  ushort uVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  uint uVar36;
  int iVar37;
  ushort *puVar38;
  uint uVar39;
  int *unaff_FS_OFFSET;
  bool bVar40;
  int local_1cc;
  uint local_1c8;
  ushort *local_1c4;
  float local_1bc;
  ushort *local_1b8;
  ushort *local_1b4;
  float local_1b0;
  uint local_1a0;
  int local_198;
  short local_180;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124 [9];
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f0 [18];
  undefined4 local_a8 [9];
  undefined1 local_84 [36];
  undefined1 local_60 [36];
  undefined1 local_3c [40];
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009bdbc8;
  local_14 = *unaff_FS_OFFSET;
  uVar17 = DAT_00b30aac ^ (uint)&stack0xfffffe20;
  *unaff_FS_OFFSET = (int)&local_14;
  iVar29 = *(int *)(*(int *)(in_ECX + 0x2c) + 0xb8);
  local_1a0 = *(int *)(*(int *)(iVar29 + 0xc) + 8);
  puVar19 = (undefined4 *)(*(int *)(in_ECX + 0x2c) + 100);
  puVar34 = local_f0;
  for (iVar26 = 9; iVar26 != 0; iVar26 = iVar26 + -1) {
    *puVar34 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar34 = puVar34 + 1;
  }
  FUN_007103c0(local_3c);
  FUN_007107a0(local_f0,1,(undefined4 *)(in_ECX + 0x40),&local_130,uVar17);
  FUN_0070fdd0(*(undefined4 *)(in_ECX + 0x50));
  uVar18 = FUN_006f9290(local_84,*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44),
                        *(undefined4 *)(in_ECX + 0x48));
  puVar19 = (undefined4 *)FUN_007100a0(local_60,uVar18);
  iVar26 = *(int *)(in_ECX + 0x2c);
  puVar34 = local_a8;
  for (iVar27 = 9; iVar27 != 0; iVar27 = iVar27 + -1) {
    *puVar34 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar34 = puVar34 + 1;
  }
  puVar19 = (undefined4 *)(iVar26 + 100);
  puVar34 = local_124;
  for (iVar27 = 0xd; iVar27 != 0; iVar27 = iVar27 + -1) {
    *puVar34 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar34 = puVar34 + 1;
  }
  local_100 = local_100 - *(float *)(in_ECX + 0x34);
  local_fc = local_fc - *(float *)(in_ECX + 0x38);
  local_f8 = local_f8 - *(float *)(in_ECX + 0x3c);
  iVar27 = *(int *)(*(int *)(iVar29 + 8) + 0x44);
  if ((iVar27 == 0) || (*(int *)(iVar27 + 0x44) == 0)) goto LAB_0056fb28;
  uVar17 = (uint)*(ushort *)(*(int *)(iVar26 + 0xb4) + 8);
  local_1cc = *(int *)(*(int *)(iVar29 + 0xc) + 0xc);
  local_1c8 = 0;
  if (0 < (int)local_1a0) {
    psVar28 = (short *)(local_1cc + 0x22);
    uVar33 = 0;
    iVar26 = local_1a0;
    do {
      uVar33 = uVar33 + psVar28[-2];
      local_1c8 = (uint)uVar33;
      if (*psVar28 == 0) {
        local_1c8 = local_1c8 * 3;
      }
      else {
        local_1c8 = local_1c8 + 2;
      }
      psVar28 = psVar28 + 0x16;
      iVar26 = iVar26 + -1;
      local_1c8 = local_1c8 & 0xffff;
    } while (iVar26 != 0);
  }
  _Src_00 = (void *)FUN_00401f00(local_1c8 * 6);
  _Dst = (void *)FUN_00401f00(uVar17 * 4);
  _memset(_Dst,-1,uVar17 * 4);
  iVar27 = FUN_00401f00(uVar17 * 0xc);
  iVar20 = FUN_00401f00(uVar17 * 0xc);
  pfVar21 = (float *)FUN_00401f00(uVar17 * 0xc);
  iVar26 = *(int *)(*(int *)(in_ECX + 0x2c) + 0xb4);
  FUN_0072af20(*(undefined4 *)(iVar26 + 0x1c),*(undefined4 *)(iVar26 + 0x20),
               *(undefined2 *)(iVar26 + 8),iVar20,pfVar21,0,0,0xc);
  iVar26 = *(int *)(*(int *)(iVar29 + 8) + 0x44);
  uVar39 = *(uint *)(*(int *)(iVar29 + 8) + 0x40);
  local_198 = FUN_00401f00(-(uint)((int)((ulonglong)uVar39 * 0x4c >> 0x20) != 0) |
                           (uint)((ulonglong)uVar39 * 0x4c));
  local_c = 0;
  uVar22 = uVar39;
  if (local_198 == 0) {
    local_198 = 0;
  }
  else {
    while (-1 < (int)(uVar22 - 1)) {
      FUN_0072ef90();
      uVar22 = uVar22 - 1;
    }
  }
  local_1bc = 0.0;
  if (0 < (int)uVar39) {
    do {
      local_c = 0xffffffff;
      puVar19 = (undefined4 *)((int)local_1bc * 0x4c + local_198);
      puVar34 = (undefined4 *)((int)local_1bc * 0x4c + iVar26);
      puVar35 = puVar19;
      for (iVar29 = 0xd; iVar29 != 0; iVar29 = iVar29 + -1) {
        *puVar35 = *puVar34;
        puVar34 = puVar34 + 1;
        puVar35 = puVar35 + 1;
      }
      if (local_1bc == 0.0) {
        iVar29 = FUN_00401f00(uVar17 << 5);
        local_c = 1;
        if (iVar29 == 0) {
LAB_0056f094:
          iVar29 = 0;
        }
        else {
          iVar3 = uVar17 * 4;
          while (iVar3 = iVar3 + -1, -1 < iVar3) {
            FUN_0072efa0();
          }
        }
      }
      else {
        iVar29 = FUN_00401f00(uVar17 * 8);
        local_c = 2;
        uVar22 = uVar17;
        if (iVar29 == 0) goto LAB_0056f094;
        while (-1 < (int)(uVar22 - 1)) {
          FUN_0072efa0();
          uVar22 = uVar22 - 1;
        }
      }
      puVar19[0x11] = iVar29;
      local_1bc = (float)((int)local_1bc + 1);
    } while ((int)local_1bc < (int)uVar39);
  }
  local_c = 0xffffffff;
  if (uVar17 != 0) {
    iVar29 = iVar20 - (int)pfVar21;
    pfVar31 = (float *)(iVar27 + 8);
    pfVar25 = pfVar21;
    local_1b8 = (ushort *)uVar17;
    do {
      local_13c = *(undefined4 *)(iVar29 + (int)pfVar25);
      local_138 = *(undefined4 *)(iVar29 + 4 + (int)pfVar25);
      local_134 = *(undefined4 *)(iVar29 + 8 + (int)pfVar25);
      local_150 = DAT_00b3f9ac;
      local_144 = DAT_00b3f9ac;
      fVar9 = *pfVar25;
      local_14c = DAT_00b3f9b0;
      local_140 = DAT_00b3f9b0;
      local_154 = DAT_00b3f9a8;
      fVar10 = pfVar25[1];
      local_148 = DAT_00b3f9a8;
      fVar11 = pfVar25[2];
      FUN_00710580(local_124,&local_100,1,&local_13c,&local_148);
      FUN_00710580(local_a8,&DAT_00b3f9a8,1,&local_148,&local_154);
      pfVar31[-2] = local_154 / *(float *)(in_ECX + 0x4c) + 0.5;
      pfVar31[-1] = local_150 / *(float *)(in_ECX + 0x4c) + 0.5;
      local_1b0 = fVar11 * local_128 + fVar9 * local_130 + fVar10 * local_12c;
      if (local_1b0 < 0.0) {
        local_1b0 = 0.0;
      }
      uVar22 = 10;
      local_1b0 = 1.0 - local_1b0;
      local_1bc = 1.0;
      while( true ) {
        if ((uVar22 & 1) != 0) {
          local_1bc = local_1bc * local_1b0;
        }
        uVar22 = uVar22 >> 1;
        if (uVar22 == 0) break;
        local_1b0 = local_1b0 * local_1b0;
      }
      pfVar25 = pfVar25 + 3;
      local_1b8 = (ushort *)((int)local_1b8 - 1);
      *pfVar31 = (1.0 - ABS(local_14c) * 0.00390625) * local_1bc;
      pfVar31 = pfVar31 + 3;
    } while (local_1b8 != (ushort *)0x0);
  }
  uVar36 = 0;
  uVar22 = 0;
  if ((int)local_1a0 < 1) {
LAB_0056fab8:
    if (0 < (int)uVar39) {
      puVar19 = (undefined4 *)(local_198 + 0x44);
      do {
        FUN_00401f20(*puVar19);
        *puVar19 = 0;
        puVar19 = puVar19 + 0x13;
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
    }
    FUN_00401f20(local_198);
  }
  else {
    piVar32 = (int *)(local_1cc + 0x14);
    do {
      uVar33 = *(ushort *)((int)piVar32 + 10);
      iVar29 = *piVar32;
      bVar40 = *(short *)((int)piVar32 + 0xe) != 0;
      local_1cc = CONCAT31(local_1cc._1_3_,bVar40);
      bVar14 = false;
      local_1bc = 0.0;
      if (uVar33 != 0) {
        local_1c4 = (ushort *)(iVar29 + 4);
        local_1b8 = local_1c4;
        local_1b4 = local_1c4;
        do {
          puVar38 = local_1c4;
          if (!bVar40) {
            puVar38 = local_1b8;
          }
          iVar3 = piVar32[-2];
          sVar5 = *(short *)(iVar3 + (uint)puVar38[-2] * 2);
          sVar6 = *(short *)(iVar3 + (uint)puVar38[-1] * 2);
          sVar7 = *(short *)(iVar3 + (uint)*puVar38 * 2);
          if (((sVar5 == sVar6) || (sVar5 == sVar7)) || (sVar6 == sVar7)) {
            if (bVar40) {
              bVar14 = !bVar14;
            }
          }
          else {
            iVar3 = piVar32[-2];
            cVar15 = FUN_0056cb70(local_1bc,0,local_1cc,iVar29,iVar27,iVar3);
            if (cVar15 != '\0') {
              if (bVar40) {
                uVar16 = local_1c4[-2];
              }
              else {
                uVar16 = local_1b4[-2];
              }
              uVar30 = (uint)*(ushort *)(iVar3 + (uint)uVar16 * 2);
              puVar1 = (uint *)((int)_Dst + uVar30 * 4);
              if (*(int *)((int)_Dst + uVar30 * 4) == -1) {
                *puVar1 = uVar22 & 0xffff;
                *(short *)((int)_Src_00 + (uVar36 & 0xffff) * 2) = (short)uVar22;
                uVar22 = uVar22 + 1;
              }
              else {
                *(short *)((int)_Src_00 + (uVar36 & 0xffff) * 2) = (short)*puVar1;
              }
              if (bVar40) {
                uVar16 = local_1c4[-1];
              }
              else {
                uVar16 = local_1b4[-1];
              }
              uVar30 = (uint)*(ushort *)(piVar32[-2] + (uint)uVar16 * 2);
              puVar1 = (uint *)((int)_Dst + uVar30 * 4);
              if (*(int *)((int)_Dst + uVar30 * 4) == -1) {
                *puVar1 = uVar22 & 0xffff;
                *(short *)((int)_Src_00 + (uVar36 + 1 & 0xffff) * 2) = (short)uVar22;
                uVar22 = uVar22 + 1;
              }
              else {
                *(short *)((int)_Src_00 + (uVar36 + 1 & 0xffff) * 2) = (short)*puVar1;
              }
              if (bVar40) {
                uVar16 = *local_1c4;
              }
              else {
                uVar16 = *local_1b4;
              }
              uVar30 = (uint)*(ushort *)(piVar32[-2] + (uint)uVar16 * 2);
              puVar1 = (uint *)((int)_Dst + uVar30 * 4);
              if (*(int *)((int)_Dst + uVar30 * 4) == -1) {
                *puVar1 = uVar22 & 0xffff;
                *(short *)((int)_Src_00 + (uVar36 + 2 & 0xffff) * 2) = (short)uVar22;
                uVar22 = uVar22 + 1;
              }
              else {
                *(short *)((int)_Src_00 + (uVar36 + 2 & 0xffff) * 2) = (short)*puVar1;
              }
              uVar36 = uVar36 + 3;
              if (!bVar40) goto LAB_0056f4d1;
              if (bVar14) {
                uVar30 = uVar36 & 0xffff;
                uVar8 = *(undefined2 *)((int)_Src_00 + uVar30 * 2 + -6);
                *(undefined2 *)((int)_Src_00 + uVar30 * 2 + -6) =
                     *(undefined2 *)((int)_Src_00 + uVar30 * 2 + -2);
                *(undefined2 *)((int)_Src_00 + uVar30 * 2 + -2) = uVar8;
              }
            }
            if (bVar40) {
              bVar14 = !bVar14;
            }
          }
LAB_0056f4d1:
          local_1c4 = local_1c4 + 1;
          local_1b8 = local_1b8 + 3;
          local_1b4 = local_1b4 + 3;
          local_1bc = (float)((int)local_1bc + 1);
        } while ((int)local_1bc < (int)(uint)uVar33);
      }
      piVar32 = piVar32 + 0xb;
      local_1a0 = local_1a0 + -1;
    } while (local_1a0 != 0);
    local_180 = (short)uVar22;
    if (local_180 == 0) goto LAB_0056fab8;
    _Dst_00 = (void *)FUN_00401f00((uVar36 & 0xffff) * 2);
    _memcpy(_Dst_00,_Src_00,(uVar36 & 0xffff) * 2);
    iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0xb4) + 0x1c);
    iVar12 = *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0xb4) + 0x20);
    iVar23 = FUN_00401f00((uVar22 & 0xffff) * 0xc);
    iVar24 = FUN_00401f00((uVar22 & 0xffff) * 0xc);
    iVar29 = 0;
    if (3 < uVar17) {
      pfVar31 = (float *)(iVar3 + 0x1c);
      piVar32 = (int *)((int)_Dst + 8);
      puVar19 = (undefined4 *)(iVar27 + 0x18);
      pfVar25 = (float *)(iVar12 + 0x14);
      local_1a0 = (uVar17 - 4 >> 2) + 1;
      iVar29 = local_1a0 * 4;
      do {
        if (piVar32[-2] != -1) {
          pfVar2 = (float *)(iVar23 + piVar32[-2] * 0xc);
          fVar9 = pfVar25[-4];
          fVar10 = pfVar25[-3];
          fVar11 = pfVar31[-6];
          fVar4 = pfVar31[-5];
          *pfVar2 = pfVar31[-7] + pfVar25[-5] * 0.05;
          pfVar2[1] = fVar11 + fVar9 * 0.05;
          pfVar2[2] = fVar4 + fVar10 * 0.05;
          puVar34 = (undefined4 *)(iVar24 + piVar32[-2] * 0xc);
          *puVar34 = puVar19[-6];
          puVar34[1] = puVar19[-5];
          puVar34[2] = puVar19[-4];
        }
        if (piVar32[-1] != -1) {
          fVar9 = pfVar25[-1];
          fVar10 = *pfVar25;
          fVar11 = pfVar31[-3];
          fVar4 = *(float *)((iVar3 - iVar12) + (int)pfVar25);
          pfVar2 = (float *)(iVar23 + piVar32[-1] * 0xc);
          *pfVar2 = pfVar31[-4] + pfVar25[-2] * 0.05;
          pfVar2[1] = fVar11 + fVar9 * 0.05;
          pfVar2[2] = fVar4 + fVar10 * 0.05;
          puVar34 = (undefined4 *)(iVar24 + piVar32[-1] * 0xc);
          *puVar34 = puVar19[-3];
          puVar34[1] = puVar19[-2];
          puVar34[2] = puVar19[-1];
        }
        if (*piVar32 != -1) {
          pfVar2 = (float *)(iVar23 + *piVar32 * 0xc);
          fVar9 = pfVar25[2];
          fVar10 = pfVar25[3];
          fVar11 = *pfVar31;
          fVar4 = pfVar31[1];
          *pfVar2 = pfVar31[-1] + pfVar25[1] * 0.05;
          pfVar2[1] = fVar11 + fVar9 * 0.05;
          pfVar2[2] = fVar4 + fVar10 * 0.05;
          puVar34 = (undefined4 *)(iVar24 + *piVar32 * 0xc);
          *puVar34 = *puVar19;
          puVar34[1] = puVar19[1];
          puVar34[2] = puVar19[2];
        }
        if (piVar32[1] != -1) {
          pfVar2 = (float *)(iVar23 + piVar32[1] * 0xc);
          fVar9 = pfVar25[5];
          fVar10 = pfVar25[6];
          fVar11 = pfVar31[3];
          fVar4 = pfVar31[4];
          *pfVar2 = pfVar31[2] + pfVar25[4] * 0.05;
          pfVar2[1] = fVar11 + fVar9 * 0.05;
          pfVar2[2] = fVar4 + fVar10 * 0.05;
          puVar34 = (undefined4 *)(iVar24 + piVar32[1] * 0xc);
          *puVar34 = puVar19[3];
          puVar34[1] = puVar19[4];
          puVar34[2] = puVar19[5];
        }
        pfVar25 = pfVar25 + 0xc;
        pfVar31 = pfVar31 + 0xc;
        puVar19 = puVar19 + 0xc;
        piVar32 = piVar32 + 4;
        local_1a0 = local_1a0 + -1;
      } while (local_1a0 != 0);
    }
    if (iVar29 < (int)uVar17) {
      pfVar31 = (float *)(iVar29 * 0xc + iVar3);
      pfVar25 = (float *)(iVar29 * 0xc + 8 + iVar12);
      iVar37 = iVar27 - iVar3;
      do {
        iVar13 = *(int *)((int)_Dst + iVar29 * 4);
        if (iVar13 != -1) {
          pfVar2 = (float *)(iVar23 + iVar13 * 0xc);
          fVar9 = pfVar25[-1];
          fVar10 = *pfVar25;
          fVar11 = pfVar31[1];
          fVar4 = *(float *)((int)pfVar25 + (iVar3 - iVar12));
          *pfVar2 = *pfVar31 + pfVar25[-2] * 0.05;
          pfVar2[1] = fVar11 + fVar9 * 0.05;
          pfVar2[2] = fVar4 + fVar10 * 0.05;
          puVar19 = (undefined4 *)(iVar24 + *(int *)((int)_Dst + iVar29 * 4) * 0xc);
          *puVar19 = *(undefined4 *)(iVar37 + (int)pfVar31);
          puVar19[1] = *(undefined4 *)(iVar37 + 4 + (int)pfVar31);
          puVar19[2] = *(undefined4 *)(iVar37 + 8 + (int)pfVar31);
        }
        iVar29 = iVar29 + 1;
        pfVar31 = pfVar31 + 3;
        pfVar25 = pfVar25 + 3;
      } while (iVar29 < (int)uVar17);
    }
    if (0 < (int)uVar39) {
      puVar38 = (ushort *)(iVar26 + 0x48);
      iVar29 = local_198;
      local_1a0 = uVar39;
      do {
        iVar26 = 0;
        if (*puVar38 != 0) {
          do {
            uVar17 = (uint)*(ushort *)(*(int *)(puVar38 + -2) + iVar26 * 8);
            if (*(int *)((int)_Dst + uVar17 * 4) != -1) {
              *(undefined2 *)(*(int *)(iVar29 + 0x44) + (uint)*(ushort *)(iVar29 + 0x48) * 8) =
                   *(undefined2 *)((int)_Dst + uVar17 * 4);
              *(undefined4 *)(*(int *)(iVar29 + 0x44) + 4 + (uint)*(ushort *)(iVar29 + 0x48) * 8) =
                   *(undefined4 *)(*(int *)(puVar38 + -2) + 4 + iVar26 * 8);
              *(short *)(iVar29 + 0x48) = *(short *)(iVar29 + 0x48) + 1;
            }
            iVar26 = iVar26 + 1;
          } while (iVar26 < (int)(uint)*puVar38);
        }
        uVar17 = (uint)*(ushort *)(iVar29 + 0x48);
        _Src = *(void **)(iVar29 + 0x44);
        _Dst_01 = (void *)FUN_00401f00(uVar17 * 8);
        local_c = 3;
        if (_Dst_01 == (void *)0x0) {
          _Dst_01 = (void *)0x0;
        }
        else {
          while (uVar17 = uVar17 - 1, -1 < (int)uVar17) {
            FUN_0072efa0();
          }
        }
        *(void **)(iVar29 + 0x44) = _Dst_01;
        local_c = 0xffffffff;
        _memcpy(_Dst_01,_Src,(uint)*(ushort *)(iVar29 + 0x48) * 8);
        FUN_00401f20(_Src);
        puVar38 = puVar38 + 0x26;
        iVar29 = iVar29 + 0x4c;
        local_1a0 = local_1a0 - 1;
      } while (local_1a0 != 0);
    }
    FUN_0056cff0(*(undefined4 *)(in_ECX + 0x2c),uVar22,uVar36,iVar23,iVar24,_Dst_00,local_198);
  }
  FUN_00401f20(iVar20);
  FUN_00401f20(pfVar21);
  FUN_00401f20(_Src_00);
  FUN_00401f20(_Dst);
  FUN_00401f20(iVar27);
LAB_0056fb28:
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_0056fb40(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  LONG LVar5;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2c);
  if (*(int *)(iVar1 + 0xb8) != 0) {
    if (((*(char *)(in_ECX + 0x14) == '\0') && (1 < *(uint *)(*(int *)(in_ECX + 0x30) + 4))) &&
       (1 < *(uint *)(iVar1 + 4))) {
      if (*(int *)(iVar1 + 0xb4) == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *(int **)(*(int *)(iVar1 + 0xb4) + 0x34);
      }
      cVar3 = (**(code **)(*piVar4 + 0x4c))();
      if (cVar3 == '\0') {
        FUN_0056ecd0();
      }
      else {
        FUN_0056d9e0();
      }
    }
    *(undefined1 *)(in_ECX + 0x14) = 1;
    puVar2 = *(undefined4 **)(in_ECX + 0x2c);
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(in_ECX + 0x2c) = 0;
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x30);
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(in_ECX + 0x30) = 0;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_0056fc00(void)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  LONG LVar8;
  int iVar9;
  int *piVar10;
  int in_ECX;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *unaff_FS_OFFSET;
  char *pcVar14;
  undefined1 auStack_16c [3];
  char cStack_169;
  ushort auStack_168 [2];
  ushort auStack_164 [2];
  uint uStack_160;
  uint local_15c;
  undefined4 *puStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int local_144;
  undefined4 uStack_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 *puStack_134;
  int local_130;
  undefined4 *puStack_12c;
  int iStack_128;
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bdc17;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_16c;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffe84;
  *unaff_FS_OFFSET = (int)&local_c;
  local_15c = 0;
  local_144 = 0;
  cVar2 = FUN_0045a170(uVar3);
  if (cVar2 != '\0') {
    FUN_004534d0(&local_130,4);
    if (local_130 != 0x4b4f4c42) {
      puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",0x589,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar6);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",0x589,*puVar6,
                     uVar5);
      }
    }
    local_144 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_15c,2);
  }
  cStack_169 = FUN_0056bca0();
  puVar6 = (undefined4 *)FUN_00401f00(0x4c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[0x12] = 0;
  }
  *(undefined4 **)(in_ECX + 0x18) = puVar6;
  iVar7 = FUN_0045a290(auStack_114);
  if (iVar7 != 0) {
    uVar5 = FUN_00442890(&puStack_12c,auStack_114,0,0);
    uStack_4 = 0;
    FUN_0055e2a0(uVar5);
    uStack_4 = 0xffffffff;
    if (((puStack_12c != (undefined4 *)0x0) &&
        (LVar8 = InterlockedDecrement(puStack_12c + 1), LVar8 == 0)) &&
       (puStack_12c != (undefined4 *)0x0)) {
      (**(code **)*puStack_12c)(1);
    }
  }
  if (**(int **)(in_ECX + 0x18) == 0) {
    cStack_169 = '\0';
  }
  FUN_004534d0(*(int **)(in_ECX + 0x18) + 1,4);
  FUN_004534d0(auStack_124,0x10);
  FUN_0047c600(*(int *)(in_ECX + 0x18) + 8);
  FUN_004534d0(*(int *)(in_ECX + 0x18) + 0x2c,0xc);
  FUN_004534d0(*(int *)(in_ECX + 0x18) + 0x38,4);
  FUN_0045ba00(*(int *)(in_ECX + 0x18) + 0x3c,4);
  FUN_004534d0(*(int *)(in_ECX + 0x18) + 0x40,4);
  FUN_004534d0(*(int *)(in_ECX + 0x18) + 0x44,1);
  FUN_004534d0(&iStack_138,4);
  FUN_004534d0(&uStack_154,4);
  FUN_004534d0(&uStack_160,2);
  FUN_004534d0(&uStack_13c,2);
  FUN_004534d0(auStack_164,2);
  uStack_14c = FUN_00401f00((uStack_160 & 0xffff) * 0xc);
  uStack_140 = FUN_00401f00((uStack_160 & 0xffff) * 0xc);
  uStack_148 = FUN_00401f00((uStack_13c & 0xffff) * 2);
  uVar3 = (uint)auStack_164[0];
  puStack_158 = (undefined4 *)FUN_00401f00(uVar3 * 0x4c);
  uStack_4 = 1;
  puStack_134 = puStack_158;
  if (puStack_158 == (undefined4 *)0x0) {
    puStack_158 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puStack_158,0x4c,uVar3,FUN_0072ef90);
  }
  uStack_4 = 0xffffffff;
  FUN_004534d0(uStack_14c,(uStack_160 & 0xffff) * 0xc);
  FUN_004534d0(uStack_140,(uStack_160 & 0xffff) * 0xc);
  FUN_004534d0(uStack_148,(uStack_13c & 0xffff) * 2);
  iVar7 = *(int *)(*(int *)(in_ECX + 0x18) + 0x3c);
  if (iVar7 == 0) {
LAB_005700ef:
    cStack_169 = '\0';
  }
  else {
    uVar5 = FUN_0046b250(iVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    piVar4 = (int *)FUN_009832e6(uVar5);
    if ((piVar4 == (int *)0x0) || (iVar7 = piVar4[0xf], iVar7 == 0)) goto LAB_005700ef;
    iVar9 = FUN_00480f00(iVar7,1,0);
    if (iStack_138 == iVar9) {
LAB_0057004f:
      piVar10 = (int *)FUN_00481320(iVar7,uStack_154,1,0);
      if (piVar10 == (int *)0x0) {
        iVar7 = piVar4[3];
        uVar5 = (**(code **)(*piVar4 + 0xd4))();
        pcVar14 = "Could not find geometry with index %i on reference %08X %s";
      }
      else {
        uVar5 = (**(code **)(*piVar10 + 0x10))();
        FUN_0075fa90(uVar5);
        if (*(int *)(in_ECX + 0x2c) == 0) {
          iVar7 = piVar4[3];
          uVar5 = (**(code **)(*piVar4 + 0xd4))();
          pcVar14 = "Found geometry with index %i on reference %08X %s is not a TriShape";
        }
        else {
          FUN_0075fa90(*(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x1c));
          if (*(int *)(in_ECX + 0x30) != 0) goto LAB_005700f4;
          iVar7 = piVar4[3];
          uVar5 = (**(code **)(*piVar4 + 0xd4))();
          pcVar14 = "Found geometry with index %i on reference %08X %s has no parent";
        }
      }
      FUN_004a7a60(pcVar14,uStack_154,iVar7,uVar5);
      goto LAB_005700ef;
    }
    if (piVar4 == DAT_00b333c4) {
      iVar7 = FUN_00660110(1);
      iVar9 = FUN_00480f00(iVar7,1,0);
    }
    if (iStack_138 == iVar9) goto LAB_0057004f;
    iStack_150 = piVar4[3];
    uVar5 = (**(code **)(*piVar4 + 0xd4))(iStack_138,iVar9);
    FUN_004a7a60("Geometry count has changed on reference %08X %s.  Original count was %i, current count is %i"
                 ,iStack_150,uVar5);
    cStack_169 = '\0';
    if (iStack_138 == iVar9) goto LAB_0057004f;
  }
LAB_005700f4:
  iVar7 = *(int *)(in_ECX + 0x2c);
  iVar9 = 0;
  if (((iVar7 == 0) || (*(int *)(iVar7 + 0xb8) == 0)) ||
     ((iVar7 = *(int *)(iVar7 + 0xb8), *(int *)(iVar7 + 8) == 0 ||
      (iVar9 = *(int *)(*(int *)(iVar7 + 8) + 0x44),
      *(uint *)(*(int *)(iVar7 + 8) + 0x40) != (uint)auStack_164[0])))) {
    cStack_169 = '\0';
  }
  iStack_150 = 0;
  if (auStack_164[0] != 0) {
    puStack_134 = (undefined4 *)(iVar9 - (int)puStack_158);
    puVar6 = puStack_158;
    do {
      FUN_004534d0(auStack_168,2);
      if (cStack_169 == '\0') {
        FUN_00452170((uint)auStack_168[0] * 8);
      }
      else {
        *(ushort *)(puVar6 + 0x12) = auStack_168[0];
        uVar3 = (uint)auStack_168[0];
        iStack_128 = FUN_00401f00(uVar3 * 8);
        uStack_4 = 2;
        iVar7 = iStack_128;
        if (iStack_128 == 0) {
          iVar7 = 0;
        }
        else {
          while (uVar3 = uVar3 - 1, iStack_128 = iVar7, -1 < (int)uVar3) {
            FUN_0072efa0();
            iVar7 = iStack_128;
          }
        }
        puVar6[0x11] = iVar7;
        uStack_4 = 0xffffffff;
        if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x67) {
LAB_00570216:
          FUN_004534d0(puVar6[0x11],(uint)auStack_168[0] * 8);
        }
        else {
          uVar3 = 0;
          if (auStack_168[0] != 0) {
            do {
              FUN_004534d0(puVar6[0x11] + uVar3 * 8,8);
              uVar3 = uVar3 + 1;
            } while (uVar3 < auStack_168[0]);
          }
          if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x67) goto LAB_00570216;
        }
        puVar12 = (undefined4 *)((int)puStack_134 + (int)puVar6);
        puVar13 = puVar6;
        for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
      }
      iStack_150 = iStack_150 + 1;
      puVar6 = puVar6 + 0x13;
    } while (iStack_150 < (int)(uint)auStack_164[0]);
  }
  if (cStack_169 == '\0') {
    iVar7 = *(int *)(in_ECX + 0x18);
    puVar6 = *(undefined4 **)(iVar7 + 0x48);
    if (puVar6 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar6 + 1);
      if ((LVar8 == 0) && (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      *(undefined4 *)(iVar7 + 0x48) = 0;
    }
    puVar6 = *(undefined4 **)(in_ECX + 0x1c);
    if (puVar6 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar6 + 1);
      if ((LVar8 == 0) && (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      *(undefined4 *)(in_ECX + 0x1c) = 0;
    }
    uVar3 = 0;
    if (auStack_164[0] != 0) {
      piVar4 = puStack_158 + 0x11;
      do {
        if (*piVar4 != 0) {
          FUN_00401f20(*piVar4);
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 0x13;
      } while (uVar3 < auStack_164[0]);
    }
    FUN_00401f20(puStack_158);
    FUN_00401f20(uStack_14c);
    FUN_00401f20(uStack_140);
    FUN_00401f20(uStack_148);
  }
  else {
    FUN_0056cff0(*(undefined4 *)(in_ECX + 0x2c),uStack_160,uStack_13c,uStack_14c,uStack_140,
                 uStack_148,puStack_158);
  }
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar3 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar6 == (undefined4 *)0x0) {
      uVar11 = local_15c & 0xffff;
      if (uVar11 + local_144 < uVar3) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar7 = (uVar3 - uVar11) - local_144;
        pcVar14 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar11 + local_144 <= uVar3) goto LAB_00570469;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar7 = uVar11 + (local_144 - uVar3);
        pcVar14 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar14,iVar7,"..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",0x643,
                   uVar1);
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar6);
      iVar7 = local_144;
      uVar11 = (local_15c & 0xffff) + local_144;
      if (uVar11 < uVar3) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar3 - (local_15c & 0xffff)) - iVar7,
                     "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",0x643,*puVar6,
                     uVar5);
      }
      else if (uVar3 < uVar11) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_15c & 0xffff) - uVar3) + iVar7,
                     "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",0x643,*puVar6,
                     uVar5);
      }
    }
  }
LAB_00570469:
  *unaff_FS_OFFSET = local_c;
  return cStack_169;
}


