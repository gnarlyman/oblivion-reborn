
void FUN_00862600(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + param_2 * 4);
      if ((iVar1 != 0) && (puVar2 = *(undefined4 **)(iVar1 + 4), puVar2 != (undefined4 *)0x0)) {
        LVar3 = InterlockedDecrement(puVar2 + 1);
        if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(uint *)(param_1 + 0x18));
  }
  return;
}



void FUN_00862660(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  
  iVar2 = FUN_007b4280(*(uint *)(param_2 + 0x1c) >> 0x1c);
  if (((param_3 == 0x148) || (param_3 == 0x14a)) ||
     ((puVar3 = DAT_00b43114, (*(uint *)(param_2 + 0x1c) & 0x20000) == 0 &&
      ((DAT_00b43074 == '\0' || (puVar3 = DAT_00b430f4, (*(uint *)(param_2 + 0x1c) & 0x200000) == 0)
       ))))) {
    if (iVar2 != 0) {
      puVar3 = DAT_00b430f4;
      if (DAT_00b430ad != '\0') {
        puVar3 = (undefined4 *)FUN_00405a30();
      }
      goto LAB_008626d3;
    }
  }
  else {
LAB_008626d3:
    if (puVar3 != (undefined4 *)0x0) goto LAB_008626dd;
  }
  puVar3 = DAT_00b430f4;
LAB_008626dd:
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 4);
  puVar1 = *(undefined4 **)(iVar2 + 4);
  if (puVar1 != puVar3) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  FUN_007715e0(0);
  return;
}



void FUN_00862730(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + param_3 * 4);
  iVar3 = (**(code **)(*param_2 + 0x8c))(0);
  if (iVar3 == 0) {
    puVar4 = DAT_00b430f0;
    if ((param_2[7] & 0x80U) == 0) {
      puVar4 = DAT_00b430dc;
    }
  }
  else {
    puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar1 + 4);
  if (puVar2 != puVar4) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(iVar1 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  return;
}



float10 FUN_008627c0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_c4;
  float local_c0;
  float local_bc;
  undefined4 *local_b8;
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
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
  
  iVar4 = 0;
  local_c4 = 0;
  iVar1 = FUN_007ee1f0();
  if ((iVar1 != 0) || (iVar1 = FUN_007ee1d0(), iVar1 != 0)) {
    local_b8 = &DAT_00b46298;
    do {
      if (DAT_00b42e88 <= local_c4) break;
      puVar5 = (undefined4 *)(iVar1 + 8);
      puVar6 = local_74;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_40[0] = local_74[0];
      local_40[1] = local_74[1];
      local_40[2] = local_74[2];
      local_40[3] = local_50;
      local_30 = local_74[3];
      local_2c = local_64;
      local_28 = local_60;
      uVar2 = 5;
      local_24 = local_4c;
      local_20 = local_5c;
      local_1c = local_58;
      local_18 = local_54;
      local_14 = local_48;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = local_44;
      puVar5 = local_40;
      puVar6 = local_b8;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_c0 = *(float *)(iVar1 + 0x40);
      local_bc = 1.0;
      while( true ) {
        if ((uVar2 & 1) != 0) {
          local_bc = local_c0 * local_bc;
        }
        uVar2 = uVar2 >> 1;
        if (uVar2 == 0) break;
        local_c0 = local_c0 * local_c0;
      }
      *(float *)((int)&DAT_00b46218 + iVar4) = 1.0 - local_bc;
      switch(*(undefined1 *)(iVar1 + 0x44)) {
      case 0:
        *(undefined4 *)((int)&DAT_00b47008 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00b4700c + iVar4) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b47010 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00b47014 + iVar4) = 0x3f000000;
        break;
      case 1:
        *(undefined4 *)((int)&DAT_00b47008 + iVar4) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b4700c + iVar4) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b47010 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00b47014 + iVar4) = 0x3f000000;
        break;
      case 2:
        *(undefined4 *)((int)&DAT_00b47008 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00b4700c + iVar4) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b47010 + iVar4) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b47014 + iVar4) = 0x3f000000;
        break;
      case 3:
        *(undefined4 *)((int)&DAT_00b47008 + iVar4) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b4700c + iVar4) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b47010 + iVar4) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b47014 + iVar4) = 0x3f000000;
        break;
      default:
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("Invalid sub texture in decal",0);
        }
      }
      local_b8 = local_b8 + 0x10;
      local_c4 = local_c4 + 1;
      iVar4 = iVar4 + 0x10;
      if (local_c4 < DAT_00b42e88) {
        iVar1 = FUN_007ee1f0();
      }
    } while (iVar1 != 0);
  }
  return (float10)local_c4;
}



void FUN_00862ad0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (0x146 < param_2) {
    FUN_007aec60((&DAT_00b46ed8)[param_3]);
    return;
  }
  iVar1 = FUN_009828c0();
  if (iVar1 <= DAT_00b2dd00) {
    FUN_007aec60((&DAT_00b46c20)[param_3]);
    return;
  }
  FUN_007aec60((&DAT_00b46ed8)[param_3]);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00862b40(int param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  float10 fVar21;
  
  uVar17 = DAT_00b474a4;
  uVar16 = DAT_00b474a0;
  uVar15 = DAT_00b4749c;
  uVar14 = DAT_00b47498;
  uVar13 = DAT_00b47494;
  uVar12 = DAT_00b47490;
  uVar11 = DAT_00b4748c;
  uVar10 = DAT_00b4747c;
  uVar9 = DAT_00b47478;
  uVar8 = DAT_00b47474;
  uVar7 = DAT_00b47470;
  uVar6 = DAT_00b47414;
  uVar5 = DAT_00b47410;
  uVar4 = DAT_00b47404;
  uVar3 = DAT_00b47400;
  uVar2 = DAT_00b473fc;
  uVar1 = DAT_00b473e8;
  uVar20 = DAT_00b473e0;
  uVar18 = DAT_00b473dc;
  if (param_1 < 299) {
    if (param_1 == 0x12a) {
      return DAT_00b473d0;
    }
    if (param_1 != 4) {
      if (param_1 != 5) {
        return 0;
      }
      return DAT_00b473d8;
    }
    return DAT_00b473d4;
  }
  switch(param_1) {
  case 0x12d:
    if (param_3 != '\0') {
      FUN_00862ad0(DAT_00b473dc,param_1,1);
      return uVar18;
    }
    goto LAB_00862d4d;
  case 0x12e:
    uVar18 = DAT_00b473e0;
    if (param_3 != '\0') {
      FUN_00862ad0(DAT_00b473e0,param_1,1);
      return uVar20;
    }
    goto LAB_00862d4d;
  case 0x12f:
    _DAT_00b46f98 = param_2[0x3c];
    _DAT_00b46f9c = param_2[0x3d];
    _DAT_00b46fa0 = param_2[0x3e];
    _DAT_00b46fa4 = param_2[0x3f];
    uVar18 = DAT_00b473e4;
    if (param_3 == '\0') {
      uVar20 = 2;
    }
    else {
      uVar20 = 3;
    }
    goto LAB_00862e85;
  case 0x130:
    uVar18 = DAT_00b473e8;
    if (param_3 != '\0') {
      FUN_00862ad0(DAT_00b473e8,param_1,5);
      return uVar1;
    }
    goto LAB_00862d80;
  case 0x131:
    uVar18 = DAT_00b473ec;
    if (param_3 != '\0') {
      uVar20 = 7;
      goto LAB_00862c8b;
    }
    goto LAB_00862c89;
  case 0x132:
    uVar18 = DAT_00b473f0;
    if (param_3 != '\0') {
      uVar20 = 7;
      goto LAB_00862c8b;
    }
LAB_00862c89:
    uVar20 = 6;
LAB_00862c8b:
    FUN_00862ad0(uVar18,param_1,uVar20);
    uVar20 = (**(code **)(*param_2 + 0x88))(1);
    FUN_0076c910(uVar20);
    uVar20 = (**(code **)(*param_2 + 0x8c))(1);
    FUN_0076c910(uVar20);
    return uVar18;
  case 0x133:
    uVar18 = DAT_00b473f4;
    if (param_3 != '\0') {
      uVar20 = 9;
      goto LAB_00862dba;
    }
    goto LAB_00862db8;
  case 0x134:
    uVar18 = DAT_00b473f8;
    if (param_3 != '\0') {
      uVar20 = 9;
      goto LAB_00862dba;
    }
    goto LAB_00862db8;
  case 0x135:
    uVar18 = DAT_00b473fc;
    if (param_3 != '\0') {
      FUN_00862ad0(DAT_00b473fc,param_1,1);
      return uVar2;
    }
    goto LAB_00862d4d;
  case 0x136:
    uVar18 = DAT_00b47400;
    if (param_3 != '\0') {
      FUN_00862ad0(DAT_00b47400,param_1,1);
      return uVar3;
    }
LAB_00862d4d:
    FUN_00862ad0(uVar18,param_1,0);
    return uVar18;
  case 0x137:
    uVar18 = DAT_00b47404;
    if (param_3 != '\0') {
      FUN_00862ad0(DAT_00b47404,param_1,5);
      return uVar4;
    }
LAB_00862d80:
    FUN_00862ad0(uVar18,param_1,4);
    return uVar18;
  case 0x138:
    uVar18 = DAT_00b47408;
    if (param_3 != '\0') {
      uVar20 = 9;
      goto LAB_00862dba;
    }
    goto LAB_00862db8;
  case 0x139:
    uVar18 = DAT_00b4740c;
    if (param_3 != '\0') {
      uVar20 = 9;
      goto LAB_00862dba;
    }
LAB_00862db8:
    uVar20 = 8;
LAB_00862dba:
    FUN_00862ad0(uVar18,param_1,uVar20);
    uVar20 = (**(code **)(*param_2 + 0x90))(0);
    FUN_0076c910(uVar20);
    return uVar18;
  case 0x13a:
    uVar18 = DAT_00b47410;
    if (param_3 != '\0') {
      FUN_00862ad0(DAT_00b47410,param_1,0xb);
      return uVar5;
    }
    goto LAB_00862e2a;
  case 0x13b:
    uVar18 = DAT_00b47414;
    if (param_3 != '\0') {
      FUN_00862ad0(DAT_00b47414,param_1,0xb);
      return uVar6;
    }
LAB_00862e2a:
    FUN_00862ad0(uVar18,param_1,10);
    return uVar18;
  case 0x13c:
    _DAT_00b46f98 = param_2[0x3c];
    _DAT_00b46f9c = param_2[0x3d];
    _DAT_00b46fa0 = param_2[0x3e];
    _DAT_00b46fa4 = param_2[0x3f];
    uVar18 = DAT_00b47418;
    if (param_3 == '\0') {
      uVar20 = 0xc;
    }
    else {
      uVar20 = 0xd;
    }
LAB_00862e85:
    FUN_00862ad0(uVar18,param_1,uVar20);
    FUN_0076c910(DAT_00b430f8);
    FUN_0076c910(param_2[0x41]);
    return uVar18;
  case 0x13d:
    uVar18 = DAT_00b4741c;
    goto LAB_00862fac;
  case 0x13e:
    uVar18 = DAT_00b47420;
    if (param_3 != '\0') {
      uVar20 = 0x11;
      goto LAB_00862eeb;
    }
    goto LAB_00862ee9;
  case 0x13f:
    uVar18 = DAT_00b47424;
    if (param_3 != '\0') {
      uVar20 = 0x11;
      goto LAB_00862eeb;
    }
LAB_00862ee9:
    uVar20 = 0x10;
LAB_00862eeb:
    FUN_00862ad0(uVar18,param_1,uVar20);
    uVar20 = (**(code **)(*param_2 + 0x88))(1);
    FUN_0076c910(uVar20);
    uVar20 = (**(code **)(*param_2 + 0x8c))(1);
    FUN_0076c910(uVar20);
    return uVar18;
  case 0x140:
    uVar18 = DAT_00b47428;
    if (param_3 != '\0') {
      uVar20 = 0x13;
      goto LAB_00863001;
    }
    goto LAB_00862fff;
  case 0x141:
    uVar18 = DAT_00b4742c;
    if (param_3 != '\0') {
      uVar20 = 0x13;
      goto LAB_00863001;
    }
    goto LAB_00862fff;
  case 0x142:
    uVar18 = DAT_00b47430;
    goto LAB_00862f79;
  case 0x143:
    uVar18 = DAT_00b47434;
LAB_00862f79:
    if (param_3 != '\0') {
      FUN_00862ad0(uVar18,param_1,0xb);
      return uVar18;
    }
    FUN_00862ad0(uVar18,param_1,10);
    return uVar18;
  case 0x144:
    uVar18 = DAT_00b47438;
LAB_00862fac:
    if (param_3 != '\0') {
      FUN_00862ad0(uVar18,param_1,0xf);
      return uVar18;
    }
    FUN_00862ad0(uVar18,param_1,0xe);
    return uVar18;
  case 0x145:
    uVar18 = DAT_00b4743c;
    if (param_3 != '\0') {
      uVar20 = 0x13;
      goto LAB_00863001;
    }
    goto LAB_00862fff;
  case 0x146:
    uVar18 = DAT_00b47440;
    if (param_3 != '\0') {
      uVar20 = 0x13;
      goto LAB_00863001;
    }
LAB_00862fff:
    uVar20 = 0x12;
LAB_00863001:
    FUN_00862ad0(uVar18,param_1,uVar20);
    uVar20 = (**(code **)(*param_2 + 0x90))(0);
    FUN_0076c910(uVar20);
    return uVar18;
  case 0x147:
    uVar18 = DAT_00b47444;
    break;
  case 0x148:
    uVar18 = DAT_00b47448;
    break;
  case 0x149:
    uVar18 = DAT_00b4744c;
    break;
  case 0x14a:
    uVar18 = DAT_00b47450;
    break;
  case 0x14b:
    uVar18 = DAT_00b47454;
    break;
  case 0x14c:
    uVar18 = DAT_00b47458;
    break;
  case 0x14d:
    uVar18 = DAT_00b4745c;
    break;
  case 0x14e:
    return DAT_00b47460;
  case 0x14f:
    return DAT_00b47464;
  case 0x150:
    return DAT_00b47468;
  case 0x151:
    return DAT_00b4746c;
  case 0x152:
    uVar18 = (**(code **)(*param_2 + 0x88))(0);
    FUN_0076c910(uVar18);
    FUN_0076c910(DAT_00b43128);
    FUN_00862600(uVar7,2);
    fVar21 = (float10)FUN_008627c0(param_2);
    _DAT_00b46de8 = (float)fVar21;
    _DAT_00b46fd8 = _DAT_00b46de8;
    return uVar7;
  case 0x153:
    uVar18 = (**(code **)(*param_2 + 0x88))(0);
    FUN_0076c910(uVar18);
    FUN_0076c910(DAT_00b43128);
    FUN_00862600(uVar8,2);
    fVar21 = (float10)FUN_008627c0(param_2);
    _DAT_00b46de8 = (float)fVar21;
    _DAT_00b46fd8 = _DAT_00b46de8;
    return uVar8;
  case 0x154:
    uVar18 = (**(code **)(*param_2 + 0x88))(0);
    FUN_0076c910(uVar18);
    FUN_00862600(uVar9,1);
    return uVar9;
  case 0x155:
    uVar18 = (**(code **)(*param_2 + 0x88))(0);
    FUN_0076c910(uVar18);
    FUN_00862600(uVar10,1);
    return uVar10;
  case 0x156:
    uVar18 = DAT_00b47480;
    goto LAB_00863235;
  case 0x157:
    uVar18 = DAT_00b47484;
    goto LAB_00863235;
  case 0x158:
    uVar18 = DAT_00b47488;
LAB_00863235:
    iVar19 = (**(code **)(*param_2 + 0x8c))(0);
    if (iVar19 != 0) {
      uVar20 = (**(code **)(*param_2 + 0x8c))(0);
      FUN_0076c910(uVar20);
      FUN_00862600(uVar18,1);
      return uVar18;
    }
    FUN_0076c910(DAT_00b430dc);
    FUN_00862600(uVar18,1);
    return uVar18;
  case 0x159:
    FUN_00862600(DAT_00b4748c,0);
    return uVar11;
  case 0x15a:
    FUN_00862600(DAT_00b47490,0);
    return uVar12;
  case 0x15b:
    FUN_00862600(DAT_00b47494,0);
    return uVar13;
  case 0x15c:
    FUN_00862600(DAT_00b47498,0);
    return uVar14;
  case 0x15d:
    FUN_00862600(DAT_00b4749c,0);
    return uVar15;
  case 0x15e:
    FUN_007fed20(param_2,DAT_00b474a0);
    return uVar16;
  case 0x15f:
    FUN_007fed20(param_2,DAT_00b474a4);
    return uVar17;
  default:
    return 0;
  }
  FUN_00862660(uVar18,param_2,param_1);
  FUN_00862730(uVar18,param_2,0);
  return uVar18;
}



void FUN_00863430(void)

{
  undefined4 *in_ECX;
  
  FUN_007d94b0();
  *in_ECX = &PTR_FUN_00a9576c;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x41] = 0;
  return;
}



void FUN_00863480(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009d4776;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9576c;
  puVar1 = (undefined4 *)in_ECX[0x41];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x41] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x41];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_007d7490(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00863540(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  FUN_007d7ad0(param_1,param_2);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(in_ECX + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(in_ECX + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(in_ECX + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(in_ECX + 0xfc);
  puVar1 = *(undefined4 **)(param_1 + 0x104);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x104)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x104);
    *(int *)(param_1 + 0x104) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008635e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d47ab;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_118;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffedc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007d8160(param_1,param_2,param_3);
  if (1 < DAT_00b42f48) {
    FUN_007b4160(local_114,param_1,&DAT_00a7d0e8,uVar1);
    if (local_114[0] != '\0') {
      uVar2 = FUN_007b8200(&local_118,local_114,param_2,1);
      local_4 = 0;
      FUN_0055e2a0(uVar2);
      local_4 = 0xffffffff;
      if (local_118 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(local_118 + 1);
        if ((LVar3 == 0) && (local_118 != (undefined4 *)0x0)) {
          (**(code **)*local_118)(1);
        }
      }
    }
  }
  if (*(int *)(in_ECX + 0x104) != 0) {
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x40000;
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00863700(byte param_1)

{
  FUN_00863480();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00863720(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x108,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_007d94b0();
    *puVar2 = &PTR_FUN_00a9576c;
    puVar2[0x3c] = 0;
    puVar2[0x3d] = 0;
    puVar2[0x3e] = 0;
    puVar2[0x3f] = 0;
    puVar2[0x41] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00863540(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_008637d0(int param_1,uint param_2,short *param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  int *in_ECX;
  short sVar15;
  uint uVar16;
  int *unaff_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float10 fVar22;
  bool bStack_45;
  undefined4 *puStack_38;
  undefined4 *local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d4885;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar16 = _DAT_00b42eac & 0xffff;
  piVar6 = (int *)FUN_00405760(&local_34);
  puVar11 = local_34;
  iVar10 = *piVar6;
  if (((local_34 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(local_34 + 1), LVar7 == 0))
     && (puVar11 != (undefined4 *)0x0)) {
    (**(code **)*puVar11)(1,uVar5);
  }
  uVar5 = in_ECX[7];
  bVar17 = (uVar5 & 2) != 0;
  bVar18 = (uVar5 & 0x100000) == 0;
  if ((bVar18) || (bVar3 = false, DAT_00b42e86 != '\0')) {
    bVar3 = true;
  }
  if ((short)_DAT_00b42eac != 5) {
    if ((short)_DAT_00b42eac == 6) {
      if (in_ECX[0x15] == 0) {
        if (bVar18) {
          param_4 = FUN_00401f00(0x10);
          if (bVar17) {
            uStack_4 = 4;
            if (param_4 == 0) goto LAB_008639f0;
            param_4 = FUN_007e2370(param_4,param_1,0x15c,1,0,0);
          }
          else {
            uStack_4 = 3;
            if (param_4 == 0) {
LAB_008639f0:
              param_4 = 0;
            }
            else {
              param_4 = FUN_007e2370(param_4,param_1,0x15b,1,0,0);
            }
          }
        }
        else {
          param_4 = FUN_00401f00(0x10);
          uStack_4 = 2;
          if (param_4 == 0) goto LAB_008639f0;
          param_4 = FUN_007e2370(param_4,param_1,0x15d,1,0,0);
        }
        uStack_4 = 0xffffffff;
        FUN_005b1e20(&param_4);
      }
      piVar6 = in_ECX + 0x12;
      goto LAB_0086438e;
    }
    bVar18 = (uVar5 & 0x800) == 0;
    bVar19 = (uVar5 & 0x400) == 0;
    iVar8 = (**(code **)(*in_ECX + 0x90))(0);
    if ((((DAT_00b43074 == '\0') && (DAT_00b43108 != 0)) &&
        ((((byte)DAT_00b42f40 & 0x20) != 0 &&
         (((1 < DAT_00b42f48 && (uVar1 = in_ECX[7], (uVar1 & 0x2000) == 0)) &&
          (iVar9 = FUN_007e5d00(), iVar9 != 0)))))) && ((byte)(uVar1 >> 0x1c) != 1)) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    uVar1 = in_ECX[7];
    bStack_45 = (uVar1 & 0x80) != 0;
    bVar20 = (uVar1 & 0x20000) == 0;
    bVar21 = *(int *)(*(int *)(param_1 + 0xb4) + 0x24) != 0;
    if (in_ECX[0x38] != 0) {
      bVar2 = 0;
    }
    if ((uVar1 & 0x80000) != 0) {
      piVar6 = (int *)FUN_00405760(&puStack_38);
      fStack_30 = *(float *)(*(int *)(*piVar6 + 0x10) + 0x50);
      if (((puStack_38 != (undefined4 *)0x0) &&
          (LVar7 = InterlockedDecrement(puStack_38 + 1), LVar7 == 0)) &&
         (puStack_38 != (undefined4 *)0x0)) {
        (**(code **)*puStack_38)(1);
      }
      iVar10 = *(int *)(iVar10 + 8);
      if (fStack_30 == 1.0) {
        if ((iVar10 != 0) && ((*(byte *)(iVar10 + 0x18) & 1) != 0)) {
          *(ushort *)(iVar10 + 0x18) = *(ushort *)(iVar10 + 0x18) & 0xfffe;
          in_ECX[9] = 0;
        }
      }
      else if (((0.0 < fStack_30) && (iVar10 != 0)) && ((*(byte *)(iVar10 + 0x18) & 1) == 0)) {
        *(ushort *)(iVar10 + 0x18) = *(ushort *)(iVar10 + 0x18) | 1;
        in_ECX[9] = 0;
      }
      in_ECX[8] = (int)fStack_30;
    }
    puStack_38 = (undefined4 *)in_ECX[0x29];
    if ((!bStack_45) || (_DAT_00b430a0 <= 0.0)) {
LAB_00863ca5:
      if (((float)puStack_38 == 0.0) && (0.0 < (float)in_ECX[0x29])) goto LAB_00863ce3;
      if (0.0 < (float)puStack_38) goto LAB_00863cd4;
    }
    else {
      fStack_1c = *(float *)(param_1 + 0x20);
      fStack_18 = *(float *)(param_1 + 0x24);
      fStack_14 = *(float *)(param_1 + 0x28);
      fStack_10 = *(float *)(param_1 + 0x2c);
      fStack_30 = fStack_1c - DAT_00b46658;
      local_34 = (undefined4 *)(fStack_18 - DAT_00b4665c);
      puStack_38 = (undefined4 *)(fStack_14 - DAT_00b46660);
      fStack_28 = fStack_30;
      puStack_24 = local_34;
      puStack_20 = puStack_38;
      fVar22 = (float10)FUN_00404c90();
      local_34 = (undefined4 *)(float)(fVar22 - (float10)fStack_10);
      if (bVar20) {
        if ((_DAT_00b43094 <= (float)local_34) && (_DAT_00b43098 != 0.0)) {
          fVar13 = _DAT_00b43098 - _DAT_00b43094;
          fVar14 = _DAT_00b43094;
          goto LAB_00863c8a;
        }
      }
      else if (_DAT_00b4309c <= (float)local_34) {
        fVar13 = _DAT_00b430a0 - _DAT_00b4309c;
        fVar14 = _DAT_00b4309c;
LAB_00863c8a:
        fVar13 = ((float)local_34 - fVar14) / fVar13;
        if (1.0 < fVar13) {
          fVar13 = 1.0;
        }
        puStack_38 = (undefined4 *)(1.0 - fVar13);
        goto LAB_00863ca5;
      }
      puStack_38 = (undefined4 *)0x3f800000;
LAB_00863cd4:
      if ((float)in_ECX[0x29] == 0.0) {
LAB_00863ce3:
        in_ECX[9] = 0;
      }
    }
    in_ECX[0x29] = (int)puStack_38;
    bStack_45 = (float)puStack_38 != 0.0 && bStack_45;
    if (((in_ECX[9] != (uVar16 << 8 | param_2)) && (FUN_007e24c0(), (float)in_ECX[8] != 0.0)) &&
       (bVar3)) {
      if ((uVar5 & 0x8000) == 0) {
        if ((uVar5 & 0x10000) == 0) {
          iVar10 = FUN_007b4280((uint)in_ECX[7] >> 0x1c);
          fVar13 = *(float *)(iVar10 + 0x118);
          fStack_2c = fVar13;
          fStack_30 = (float)FUN_00401f00(0x10);
          uStack_4 = 7;
          if (fStack_30 == 0.0) {
            puVar11 = (undefined4 *)0x0;
          }
          else {
            puVar11 = (undefined4 *)FUN_007e2370(fStack_30,param_1,0,1,0,0);
          }
          uStack_4 = 0xffffffff;
          *(undefined1 *)(puVar11 + 2) = 1;
          puStack_38 = puVar11;
          iVar10 = FUN_007ed1a0();
          while (iVar10 != 0) {
            if (*(char *)(iVar10 + 0xf4) == '\0') {
              *(char *)(puVar11 + 2) = *(char *)(puVar11 + 2) + '\x01';
            }
            iVar10 = FUN_007ed3b0();
          }
          if (*(byte *)(puVar11 + 2) == 0) {
            puVar11[3] = 0;
          }
          else {
            uVar12 = FUN_00401f00((uint)*(byte *)(puVar11 + 2) * 4);
            puVar11[3] = uVar12;
            iVar10 = FUN_007ed1a0();
            *(float *)puVar11[3] = fVar13;
            local_34 = (undefined4 *)0x1;
            while (iVar10 != 0) {
              if (*(char *)(iVar10 + 0xf4) == '\0') {
                *(int *)(puVar11[3] + (int)local_34 * 4) = iVar10;
                local_34 = (undefined4 *)((int)local_34 + 1);
              }
              iVar10 = FUN_007ed3b0();
            }
            *(undefined1 *)(puVar11 + 2) = local_34._0_1_;
          }
          FUN_00434980(0x1000000,0);
          if ((in_ECX[7] & 0x40000U) == 0) {
            if (!bVar17) {
              if (bVar18) {
                if (bVar19) {
                  if (iVar8 == 0) {
                    if (bVar21) {
                      sVar15 = (-(ushort)bVar2 & 0xd) + 0x135;
                    }
                    else {
                      sVar15 = (-(ushort)bVar2 & 0xd) + 0x12d;
                    }
                  }
                  else if (bVar21) {
                    sVar15 = (-(ushort)bVar2 & 0xd) + 0x138;
                  }
                  else {
                    sVar15 = (-(ushort)bVar2 & 0xd) + 0x133;
                  }
                }
                else {
                  sVar15 = (-(ushort)bVar2 & 0xd) + 0x131;
                }
              }
              else if (bVar21) {
                sVar15 = (-(ushort)bVar2 & 0xd) + 0x137;
              }
              else {
                sVar15 = (-(ushort)bVar2 & 0xd) + 0x130;
              }
              goto LAB_0086406a;
            }
            if (bVar18) {
              if (bVar19) {
                if (iVar8 == 0) {
                  if (bVar21) {
                    sVar15 = (-(ushort)bVar2 & 0xd) + 0x136;
                  }
                  else {
                    sVar15 = (-(ushort)bVar2 & 0xd) + 0x12e;
                  }
                }
                else if (bVar21) {
                  sVar15 = (-(ushort)bVar2 & 0xd) + 0x139;
                }
                else {
                  sVar15 = (-(ushort)bVar2 & 0xd) + 0x134;
                }
              }
              else {
                sVar15 = (-(ushort)bVar2 & 0xd) + 0x132;
              }
              goto LAB_0086406a;
            }
            if (DAT_00b42e8c != (code *)0x0) {
              (*DAT_00b42e8c)("SHADER ERROR : no shader to handle BSSM_3x_SPx ( skinned & parallax )"
                              ,0);
            }
          }
          else {
            sVar15 = (-(ushort)bVar2 & 0xd) + 0x12f;
LAB_0086406a:
            *(short *)(puVar11 + 1) = sVar15;
          }
          FUN_006aa320(&puStack_38);
          if ((float)in_ECX[8] < 1.0) {
            FUN_007b7650();
            cVar4 = FUN_007aa380();
            if (cVar4 != '\0') {
              fStack_30 = (float)FUN_00401f00(0x10);
              uStack_4 = 8;
              if (fStack_30 == 0.0) {
                fStack_30 = 0.0;
              }
              else {
                fStack_30 = (float)FUN_007e2370(fStack_30,param_1,0,1,0,0);
              }
              uStack_4 = 0xffffffff;
              *(ushort *)((int)fStack_30 + 4) = bVar17 + 4;
              FUN_006aa320(&fStack_30);
            }
          }
          if (in_ECX[0x38] != 0) {
            fStack_30 = (float)FUN_00401f00(0x10);
            uStack_4 = 9;
            if (fStack_30 == 0.0) {
              fStack_30 = 0.0;
            }
            else {
              fStack_30 = (float)FUN_007e2370(fStack_30,param_1,0,1,0,0);
            }
            uStack_4 = 0xffffffff;
            *(ushort *)((int)fStack_30 + 4) = bVar17 + 0x15e;
            FUN_005b1e20(&fStack_30);
          }
          if (bStack_45) {
            if (DAT_00b43074 == '\0') {
              if (!bVar20) goto LAB_0086421a;
LAB_008641f2:
              if (bVar17) {
                sVar15 = bVar21 + 0x14b;
              }
              else {
                sVar15 = (ushort)bVar21 * 2 + 0x147;
              }
LAB_0086419f:
              fStack_2c = (float)FUN_00401f00(0x10);
              uStack_4 = 0xc;
              if (fStack_2c == 0.0) {
                local_34 = (undefined4 *)0x0;
              }
              else {
                local_34 = (undefined4 *)FUN_007e2370(fStack_2c,param_1,0,0,0,0);
              }
              *(short *)(local_34 + 1) = sVar15;
            }
            else {
              if (bVar20) {
                if ((uVar1 & 0x200000) != 0) goto LAB_008641f2;
                if (bVar17) {
                  sVar15 = bVar21 + 0x14b;
                }
                else {
                  sVar15 = (ushort)bVar21 * 2 + 0x148;
                }
                goto LAB_0086419f;
              }
LAB_0086421a:
              fVar13 = (float)FUN_007ed1a0();
              fVar14 = (float)FUN_00401f00(0x10);
              if (fVar13 == 0.0) {
                uStack_4 = 0xb;
                fStack_30 = fVar14;
                fVar13 = fStack_2c;
              }
              else {
                uStack_4 = 10;
                fStack_2c = fVar14;
              }
              if (fVar14 == 0.0) {
                local_34 = (undefined4 *)0x0;
                _DAT_00000004 = 0x14d;
              }
              else {
                local_34 = (undefined4 *)FUN_007e2370(fVar14,param_1,0,0,1,fVar13);
                *(undefined2 *)(local_34 + 1) = 0x14d;
              }
            }
            uStack_4 = 0xffffffff;
            FUN_005b1e20(&local_34);
          }
          iVar10 = in_ECX[0x23];
          if (0 < iVar10) {
            cVar4 = (char)param_4;
            do {
              if ((in_ECX[7] & 0x100U) == 0) {
                if (cVar4 == '\x01') {
                  param_4 = FUN_00401f00(0x10);
                  uStack_4 = 0xd;
                  if (param_4 == 0) {
LAB_00864341:
                    puStack_38 = (undefined4 *)0x0;
                  }
                  else {
                    puStack_38 = (undefined4 *)FUN_007e2370(param_4,param_1,0x152,0,0,0);
                  }
                  goto LAB_00864343;
                }
LAB_00864362:
                *param_3 = *param_3 + 1;
              }
              else {
                if (cVar4 != '\x01') goto LAB_00864362;
                param_4 = FUN_00401f00(0x10);
                uStack_4 = 0xe;
                if (param_4 == 0) goto LAB_00864341;
                puStack_38 = (undefined4 *)FUN_007e2370(param_4,param_1,0x153,0,0,0);
LAB_00864343:
                uStack_4 = 0xffffffff;
                FUN_005b1e20(&puStack_38);
              }
              iVar10 = iVar10 - DAT_00b42e88;
            } while (0 < iVar10);
          }
        }
        else {
          param_4 = FUN_00401f00(0x10);
          uStack_4 = 6;
          if (param_4 == 0) {
            param_4 = 0;
          }
          else {
            param_4 = FUN_007e2370(param_4,param_1,0,1,0,0);
          }
          uStack_4 = 0xffffffff;
          *(undefined2 *)(param_4 + 4) = 0x158;
          FUN_006aa320(&param_4);
        }
      }
      else {
        param_4 = FUN_00401f00(0x10);
        uStack_4 = 5;
        if (param_4 == 0) {
          param_4 = 0;
        }
        else {
          param_4 = FUN_007e2370(param_4,param_1,0,1,0,0);
        }
        uStack_4 = 0xffffffff;
        *(ushort *)(param_4 + 4) = bVar17 + 0x156;
        FUN_006aa320(&param_4);
      }
      in_ECX[9] = (_DAT_00b42eac & 0xffff) << 8 | param_2;
    }
    piVar6 = in_ECX + 10;
    goto LAB_0086438e;
  }
  FUN_007ed1a0();
  if (in_ECX[0x11] == 0) {
LAB_008638ab:
    FUN_00573880();
    param_4 = FUN_00401f00(0x10);
    if (bVar17) {
      uStack_4 = 1;
      if (param_4 == 0) goto LAB_0086391f;
      param_4 = FUN_007e2370(param_4,param_1,0x155,1,1,DAT_00b42eb0);
    }
    else {
      uStack_4 = 0;
      if (param_4 == 0) {
LAB_0086391f:
        param_4 = 0;
      }
      else {
        param_4 = FUN_007e2370(param_4,param_1,0x154,1,1,DAT_00b42eb0);
      }
    }
    uStack_4 = 0xffffffff;
    FUN_005b1e20(&param_4);
  }
  else {
    if (*(char *)(*(int *)(in_ECX[0xf] + 8) + 8) != '\0') {
      **(undefined4 **)(*(int *)(in_ECX[0xf] + 8) + 0xc) = DAT_00b42eb0;
    }
    if (in_ECX[0x11] == 0) goto LAB_008638ab;
  }
  piVar6 = in_ECX + 0xe;
LAB_0086438e:
  *unaff_FS_OFFSET = local_c;
  return piVar6;
}



void FUN_008643b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007d9890(param_1);
  param_1 = FUN_0070f910(DAT_00b478a0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00864430(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00719a20(param_1);
  *in_ECX = &PTR_FUN_00a9587c;
  return;
}



void FUN_008645d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00717570(param_1);
  *in_ECX = &PTR_FUN_00a9595c;
  return;
}



void FUN_00864750(void)

{
  undefined4 *in_ECX;
  
  FUN_007ee440();
  *in_ECX = &PTR_FUN_00a95a1c;
  return;
}



void FUN_00864780(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a95a1c;
  FUN_007ee4f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_008647b0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x9c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_007ee440();
    *puVar2 = &PTR_FUN_00a95a1c;
  }
  local_4 = 0xffffffff;
  thunk_FUN_007e2490(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



int FUN_00864830(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7deb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b42eac == 5) {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (*(uint *)(in_ECX + 0x24) != param_2) {
    FUN_007e24c0(uVar2);
    param_2 = FUN_00401f00(0x10);
    local_4 = 0;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_007e2370(param_2,param_1,0x188,1,0,0);
    }
    local_4 = 0xffffffff;
    FUN_006aa320(&param_2);
    *(uint *)(in_ECX + 0x24) = (uint)DAT_00b42eac << 8 | uVar1;
  }
  *unaff_FS_OFFSET = local_c;
  return in_ECX + 0x28;
}



void FUN_00864900(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007ee5d0(param_1);
  param_1 = FUN_0070f910(DAT_00b4335c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00864950(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xc4))();
  (**(code **)(*in_ECX + 200))();
  (**(code **)(*in_ECX + 0xcc))();
  (**(code **)(*in_ECX + 0xd0))();
  (**(code **)(*in_ECX + 0xd4))();
                    /* WARNING: Could not recover jumptable at 0x00864998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xd8))();
  return;
}



undefined4 FUN_008649a0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int local_14;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d5858;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  local_10 = in_ECX;
  do {
    piVar4 = (int *)FUN_007606a0(&local_14,uVar3);
    iVar2 = *(int *)((int)&DAT_00b47620 + uVar5);
    local_4 = 0;
    if (iVar2 != *piVar4) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar4;
      *(int *)((int)&DAT_00b47620 + uVar5) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0xf0);
  (**(code **)(*local_10 + 0xc0))();
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00864a60(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d4c30;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b47620;
  local_1c = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b47620 != 0) && (iVar10 = iVar2, DAT_00b47620 != 0)) {
    *(int *)(DAT_00b47620 + 0x60) = *(int *)(DAT_00b47620 + 0x60) + 1;
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      local_1c = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar3 = *(undefined4 **)(in_ECX + 0xdc);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x15c);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c50 = 0x39082;
  _DAT_00b442e0 = 0x11c;
  if (iVar10 != DAT_00b47624) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47624;
    if (DAT_00b47624 != 0) {
      *(int *)(DAT_00b47624 + 0x60) = *(int *)(DAT_00b47624 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xc;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xe;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xf;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xdc);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x160);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c54 = 0x39082;
  _DAT_00b442e4 = 0x19c;
  if (iVar10 != DAT_00b47628) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47628;
    if (DAT_00b47628 != 0) {
      *(int *)(DAT_00b47628 + 0x60) = *(int *)(DAT_00b47628 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x10;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x11;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x12;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x13;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x14;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x15;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x16;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xe0);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x15c);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c60 = 0x79088;
  _DAT_00b442f0 = 0x11c;
  if (iVar10 != DAT_00b4762c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b4762c;
    if (DAT_00b4762c != 0) {
      *(int *)(DAT_00b4762c + 0x60) = *(int *)(DAT_00b4762c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x17;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x18;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x19;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1a;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1b;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1c;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1d;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xe0);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x160);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c68 = 0x79088;
  _DAT_00b442f8 = 0x19c;
  if (iVar10 != DAT_00b47630) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47630;
    if (DAT_00b47630 != 0) {
      *(int *)(DAT_00b47630 + 0x60) = *(int *)(DAT_00b47630 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1e;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1f;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x20;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x21;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x22;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x23;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x24;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xe4);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x164);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c7c = 0x390f2;
  _DAT_00b4430c = 0x11c;
  if (iVar10 != DAT_00b47634) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47634;
    if (DAT_00b47634 != 0) {
      *(int *)(DAT_00b47634 + 0x60) = *(int *)(DAT_00b47634 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x25;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x26;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x27;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x28;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x29;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2a;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2b;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xe4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x168));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c80 = 0x390f2;
  _DAT_00b44310 = 0x19c;
  if (iVar10 != DAT_00b47638) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47638;
    if (DAT_00b47638 != 0) {
      *(int *)(DAT_00b47638 + 0x60) = *(int *)(DAT_00b47638 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2c;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2d;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x30;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x31;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x32;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xe8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x164));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c8c = 0x790f8;
  _DAT_00b4431c = 0x11c;
  if (iVar10 != DAT_00b4763c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b4763c;
    if (DAT_00b4763c != 0) {
      *(int *)(DAT_00b4763c + 0x60) = *(int *)(DAT_00b4763c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x33;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x34;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x35;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x36;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x37;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x38;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x39;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xe8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x168));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c8c = 0x790f8;
  _DAT_00b4431c = 0x19c;
  if (iVar10 != DAT_00b47640) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47640;
    if (DAT_00b47640 != 0) {
      *(int *)(DAT_00b47640 + 0x60) = *(int *)(DAT_00b47640 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x40;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xec));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x16c));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43ca8 = 0x3b082;
  _DAT_00b44338 = 0x13c;
  if (iVar10 != DAT_00b47644) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47644;
    if (DAT_00b47644 != 0) {
      *(int *)(DAT_00b47644 + 0x60) = *(int *)(DAT_00b47644 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x41;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x42;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x43;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x44;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x45;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x46;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x47;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xec));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x170));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cac = 0x3b082;
  _DAT_00b4433c = 0x1bc;
  if (iVar10 != DAT_00b47648) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47648;
    if (DAT_00b47648 != 0) {
      *(int *)(DAT_00b47648 + 0x60) = *(int *)(DAT_00b47648 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x48;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x49;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xf0));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x16c));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cb8 = 0x7b088;
  _DAT_00b44348 = 0x13c;
  if (iVar10 != DAT_00b4764c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b4764c;
    if (DAT_00b4764c != 0) {
      *(int *)(DAT_00b4764c + 0x60) = *(int *)(DAT_00b4764c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x50;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x51;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x52;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x53;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x54;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x55;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xf0));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x170));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cc0 = 0x7b088;
  _DAT_00b44350 = 0x1bc;
  if (iVar10 != DAT_00b47650) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47650;
    if (DAT_00b47650 != 0) {
      *(int *)(DAT_00b47650 + 0x60) = *(int *)(DAT_00b47650 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x56;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x57;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x58;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x59;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xf4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x174));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cd4 = 0x3b0f2;
  _DAT_00b44364 = 0x13c;
  if (iVar10 != DAT_00b47654) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47654;
    if (DAT_00b47654 != 0) {
      *(int *)(DAT_00b47654 + 0x60) = *(int *)(DAT_00b47654 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x60;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x61;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x62;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 99;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xf4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x178));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cd8 = 0x3b0f2;
  _DAT_00b44368 = 0x1bc;
  if (iVar10 != DAT_00b47658) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47658;
    if (DAT_00b47658 != 0) {
      *(int *)(DAT_00b47658 + 0x60) = *(int *)(DAT_00b47658 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 100;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x65;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x66;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x67;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x68;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x69;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xf8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x174));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43ce4 = 0x7b0f8;
  _DAT_00b44374 = 0x13c;
  if (iVar10 != DAT_00b4765c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b4765c;
    if (DAT_00b4765c != 0) {
      *(int *)(DAT_00b4765c + 0x60) = *(int *)(DAT_00b4765c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x70;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x71;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xf8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x178));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cec = 0x7b0f8;
  _DAT_00b4437c = 0x1bc;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_1c != 0) {
    piVar7 = (int *)(local_1c + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00868910(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d5060;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = 0;
  local_1c = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((DAT_00b47660 != 0) && (local_14 = DAT_00b47660, DAT_00b47660 != 0)) {
    *(int *)(DAT_00b47660 + 0x60) = *(int *)(DAT_00b47660 + 0x60) + 1;
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      local_1c = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar3 = *(undefined4 **)(in_ECX + 0x9c);
  puVar4 = *(undefined4 **)(local_14 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(local_14 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 300);
  puVar4 = *(undefined4 **)(local_14 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(local_14 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d08 = 0x38082;
  _DAT_00b44398 = 0x10c;
  if (local_14 != DAT_00b47664) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b47664;
    if (DAT_00b47664 != 0) {
      *(int *)(DAT_00b47664 + 0x60) = *(int *)(DAT_00b47664 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xc;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xe;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xf;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x10;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x11;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x9c);
  puVar4 = *(undefined4 **)(local_14 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(local_14 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x130);
  puVar4 = *(undefined4 **)(local_14 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(local_14 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d0c = 0x38082;
  _DAT_00b4439c = 0x18c;
  if (local_14 != DAT_00b47668) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b47668;
    if (DAT_00b47668 != 0) {
      *(int *)(DAT_00b47668 + 0x60) = *(int *)(DAT_00b47668 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x12;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x13;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x14;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x15;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x16;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x17;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x18;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x19;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xa0);
  puVar4 = *(undefined4 **)(local_14 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(local_14 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 300);
  puVar4 = *(undefined4 **)(local_14 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(local_14 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d20 = 0x78088;
  _DAT_00b443b0 = 0x10c;
  if (local_14 != DAT_00b4766c) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b4766c;
    if (DAT_00b4766c != 0) {
      *(int *)(DAT_00b4766c + 0x60) = *(int *)(DAT_00b4766c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1a;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1b;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1c;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1d;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1e;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1f;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x20;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x21;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xa0);
  puVar4 = *(undefined4 **)(local_14 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(local_14 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x130);
  puVar4 = *(undefined4 **)(local_14 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(local_14 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d24 = 0x78088;
  _DAT_00b443b4 = 0x18c;
  if (local_14 != DAT_00b47670) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b47670;
    if (DAT_00b47670 != 0) {
      *(int *)(DAT_00b47670 + 0x60) = *(int *)(DAT_00b47670 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x22;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x23;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x24;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x25;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x26;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x27;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x28;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x29;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xa4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x134));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d40 = 0x380f2;
  _DAT_00b443d0 = 0x10c;
  if (local_14 != DAT_00b47674) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b47674;
    if (DAT_00b47674 != 0) {
      *(int *)(DAT_00b47674 + 0x60) = *(int *)(DAT_00b47674 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2a;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2b;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2c;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x30;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x31;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xa4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x138));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d44 = 0x380f2;
  _DAT_00b443d4 = 0x18c;
  if (local_14 != DAT_00b47678) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b47678;
    if (DAT_00b47678 != 0) {
      *(int *)(DAT_00b47678 + 0x60) = *(int *)(DAT_00b47678 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x32;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x33;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x34;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x35;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x36;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x37;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x38;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x39;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xa8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x134));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d44 = 0x780f8;
  _DAT_00b443d4 = 0x10c;
  if (local_14 != DAT_00b4767c) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b4767c;
    if (DAT_00b4767c != 0) {
      *(int *)(DAT_00b4767c + 0x60) = *(int *)(DAT_00b4767c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x40;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x41;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xa8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x138));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d5c = 0x780f8;
  _DAT_00b443ec = 0x18c;
  if (local_14 != DAT_00b47680) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b47680;
    if (DAT_00b47680 != 0) {
      *(int *)(DAT_00b47680 + 0x60) = *(int *)(DAT_00b47680 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x42;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x43;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x44;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x45;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x46;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x47;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x48;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x49;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xac));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x13c));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d74 = 0x39082;
  _DAT_00b44404 = 0x11c;
  if (local_14 != DAT_00b47684) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b47684;
    if (DAT_00b47684 != 0) {
      *(int *)(DAT_00b47684 + 0x60) = *(int *)(DAT_00b47684 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x50;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x51;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xac));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x140));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d78 = 0x39082;
  _DAT_00b44408 = 0x19c;
  if (local_14 != DAT_00b47688) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b47688;
    if (DAT_00b47688 != 0) {
      *(int *)(DAT_00b47688 + 0x60) = *(int *)(DAT_00b47688 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x52;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x53;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x54;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x55;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x56;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x57;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x58;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x59;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xb0));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x13c));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d8c = 0x79088;
  _DAT_00b4441c = 0x11c;
  if (local_14 != DAT_00b4768c) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b4768c;
    if (DAT_00b4768c != 0) {
      *(int *)(DAT_00b4768c + 0x60) = *(int *)(DAT_00b4768c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x60;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x61;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xb0));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x140));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d90 = 0x79088;
  _DAT_00b44420 = 0x19c;
  if (local_14 != DAT_00b47690) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b47690;
    if (DAT_00b47690 != 0) {
      *(int *)(DAT_00b47690 + 0x60) = *(int *)(DAT_00b47690 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x62;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 99;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 100;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x65;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x66;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x67;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x68;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x69;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xb4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x144));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43da8 = 0x390f2;
  _DAT_00b44438 = 0x11c;
  if (local_14 != DAT_00b47694) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b47694;
    if (DAT_00b47694 != 0) {
      *(int *)(DAT_00b47694 + 0x60) = *(int *)(DAT_00b47694 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x70;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x71;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xb4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x148));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43dac = 0x390f2;
  _DAT_00b4443c = 0x19c;
  FUN_0076c890(&DAT_00b47698);
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x72;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x73;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x74;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x75;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x76;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x77;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x78;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x79;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xb8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x144));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43dc0 = 0x790f8;
  _DAT_00b44450 = 0x11c;
  FUN_0076c890(&DAT_00b4769c);
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x80;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x81;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xb8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x148));
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43dc4 = 0x790f8;
  _DAT_00b44454 = 0x19c;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_1c != 0) {
    piVar7 = (int *)(local_1c + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(local_14 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0086cc90(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d4c30;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b476a0;
  local_1c = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b476a0 != 0) && (iVar10 = iVar2, DAT_00b476a0 != 0)) {
    *(int *)(DAT_00b476a0 + 0x60) = *(int *)(DAT_00b476a0 + 0x60) + 1;
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      local_1c = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar3 = *(undefined4 **)(in_ECX + 0xbc);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x14c);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43de0 = 0x38082;
  _DAT_00b44470 = 0x10c;
  if (iVar10 != DAT_00b476a4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476a4;
    if (DAT_00b476a4 != 0) {
      *(int *)(DAT_00b476a4 + 0x60) = *(int *)(DAT_00b476a4 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xc;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xe;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xf;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x10;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x11;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xbc);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x150);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43de4 = 0x38082;
  _DAT_00b44474 = 0x18c;
  if (iVar10 != DAT_00b476a8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476a8;
    if (DAT_00b476a8 != 0) {
      *(int *)(DAT_00b476a8 + 0x60) = *(int *)(DAT_00b476a8 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x12;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x13;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x14;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x15;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x16;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x17;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x18;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x19;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xc0);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x14c);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43df8 = 0x78088;
  _DAT_00b44488 = 0x10c;
  if (iVar10 != DAT_00b476ac) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476ac;
    if (DAT_00b476ac != 0) {
      *(int *)(DAT_00b476ac + 0x60) = *(int *)(DAT_00b476ac + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1a;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1b;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1c;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1d;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1e;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1f;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x20;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x21;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xc0);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x150);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43dfc = 0x78088;
  _DAT_00b4448c = 0x18c;
  if (iVar10 != DAT_00b476b0) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476b0;
    if (DAT_00b476b0 != 0) {
      *(int *)(DAT_00b476b0 + 0x60) = *(int *)(DAT_00b476b0 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x22;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x23;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x24;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x25;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x26;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x27;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x28;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x29;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xc4);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x154);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e14 = 0x380f2;
  _DAT_00b444a4 = 0x10c;
  if (iVar10 != DAT_00b476b4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476b4;
    if (DAT_00b476b4 != 0) {
      *(int *)(DAT_00b476b4 + 0x60) = *(int *)(DAT_00b476b4 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2a;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2b;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2c;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2d;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2e;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2f;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x30;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x31;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xc4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x158));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e18 = 0x380f2;
  _DAT_00b444a8 = 0x18c;
  if (iVar10 != DAT_00b476b8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476b8;
    if (DAT_00b476b8 != 0) {
      *(int *)(DAT_00b476b8 + 0x60) = *(int *)(DAT_00b476b8 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x32;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x33;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x34;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x35;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x36;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x37;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x38;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x39;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 200));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x154));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e2c = 0x780f8;
  _DAT_00b444bc = 0x10c;
  if (iVar10 != DAT_00b476bc) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476bc;
    if (DAT_00b476bc != 0) {
      *(int *)(DAT_00b476bc + 0x60) = *(int *)(DAT_00b476bc + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x40;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x41;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 200));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x158));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e30 = 0x780f8;
  _DAT_00b444c0 = 0x18c;
  if (iVar10 != DAT_00b476c0) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476c0;
    if (DAT_00b476c0 != 0) {
      *(int *)(DAT_00b476c0 + 0x60) = *(int *)(DAT_00b476c0 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x42;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x43;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x44;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x45;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x46;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x47;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x48;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x49;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xcc));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x194));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e48 = 0x39082;
  _DAT_00b444d8 = 0x11c;
  if (iVar10 != DAT_00b476c4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476c4;
    if (DAT_00b476c4 != 0) {
      *(int *)(DAT_00b476c4 + 0x60) = *(int *)(DAT_00b476c4 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x50;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x51;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xcc));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x198));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e4c = 0x39082;
  _DAT_00b444dc = 0x19c;
  if (iVar10 != DAT_00b476d8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476d8;
    if (DAT_00b476d8 != 0) {
      *(int *)(DAT_00b476d8 + 0x60) = *(int *)(DAT_00b476d8 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x52;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x53;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x54;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x55;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x56;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x57;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x58;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x59;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xd8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x19c));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e94 = 0x790f8;
  _DAT_00b44524 = 0x11c;
  if (iVar10 != DAT_00b476dc) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476dc;
    if (DAT_00b476dc != 0) {
      *(int *)(DAT_00b476dc + 0x60) = *(int *)(DAT_00b476dc + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x60;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x61;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xd8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x1a0));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e98 = 0x790f8;
  _DAT_00b44528 = 0x19c;
  if (iVar10 != DAT_00b476d0) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476d0;
    if (DAT_00b476d0 != 0) {
      *(int *)(DAT_00b476d0 + 0x60) = *(int *)(DAT_00b476d0 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x62;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 99;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 100;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x65;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x66;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x67;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x68;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x69;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xd4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x19c));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e7c = 0x390f2;
  _DAT_00b4450c = 0x11c;
  if (iVar10 != DAT_00b476d4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476d4;
    if (DAT_00b476d4 != 0) {
      *(int *)(DAT_00b476d4 + 0x60) = *(int *)(DAT_00b476d4 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x70;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x71;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xd4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x1a0));
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e80 = 0x390f2;
  _DAT_00b44510 = 0x19c;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_1c != 0) {
    piVar7 = (int *)(local_1c + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


