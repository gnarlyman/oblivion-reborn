
undefined4
FUN_00644e50(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  float10 fVar7;
  undefined4 uStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  if (param_1 == DAT_00b333c4) {
    if (in_ECX[0xd] == 0) {
      (**(code **)(*in_ECX + 0x408))();
    }
    cVar2 = FUN_006899e0();
    if (cVar2 == '\0') {
      iVar4 = *param_1;
      uVar3 = FUN_0068a160();
      (**(code **)(iVar4 + 0x1cc))(uVar3);
    }
    else {
      (**(code **)(*param_1 + 0x1cc))(param_2);
    }
    iVar4 = (**(code **)(*in_ECX + 0x378))();
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*in_ECX + 0x380))(), iVar4 != 0)) {
      iVar4 = (**(code **)(*in_ECX + 0x380))();
      (**(code **)(*DAT_00b333c4 + 0x1e8))((float)*(ushort *)(iVar4 + 0xc) / 1000.0);
      return 1;
    }
    iVar4 = (**(code **)(*DAT_00b333c4 + 0x380))();
    if (iVar4 == 0) {
      return 1;
    }
    piVar5 = (int *)(**(code **)(*DAT_00b333c4 + 0x380))();
    iVar4 = *DAT_00b333c4;
    fVar7 = (float10)(**(code **)(*piVar5 + 0x1e0))();
    (**(code **)(iVar4 + 0x1e8))((float)(fVar7 + (float10)1.5707963705062866));
    return 1;
  }
  if (param_1 == (int *)0x0) {
    return 1;
  }
  cVar2 = (**(code **)(*in_ECX + 0x34c))();
  if (cVar2 != '\0') {
    return 1;
  }
  if ((in_ECX[0xd] == 0) || (cVar2 = FUN_006899e0(), cVar2 != '\0')) {
    if (in_ECX[0xd] == 0) {
      (**(code **)(*in_ECX + 0x408))();
    }
    cVar2 = FUN_006899e0();
    if (cVar2 != '\0') {
      uStack_8 = param_2[1];
      uStack_c = *param_2;
      fStack_4 = (float)param_2[2];
      piVar5 = (int *)(**(code **)(*in_ECX + 0xcc))();
      cVar2 = FUN_005e0530();
      if ((((cVar2 == '\0') && (piVar5 != (int *)0x0)) &&
          (cVar2 = (**(code **)(*piVar5 + 400))(), cVar2 != '\0')) &&
         (cVar2 = FUN_005e0530(), fVar1 = fStack_4, cVar2 != '\0')) {
        fVar7 = (float10)FUN_005e0660();
        fStack_4 = (float)((float10)fVar1 - fVar7);
      }
      if (DAT_00b15800 == '\0') {
        cVar2 = FUN_0068b030(param_1,&uStack_c,param_3,param_4);
      }
      else {
        uVar3 = FUN_0065d550();
        FUN_006836e0(param_1,param_3,param_4,uStack_c,uStack_8,fStack_4,uVar3);
        param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
        cVar2 = FUN_00682820(param_1,&param_2);
        if (cVar2 == '\0') {
          return 0;
        }
        cVar2 = (char)param_2;
      }
      if (cVar2 == '\0') {
        FUN_005f7cf0(0,0);
        return 0;
      }
      iVar4 = *(int *)in_ECX[0xd];
      uVar3 = FUN_0068a160(0);
      (**(code **)(iVar4 + 0x14))(param_1,uVar3);
      cVar2 = FUN_006899e0();
      if (cVar2 != '\0') goto LAB_00645260;
    }
  }
  iVar4 = (**(code **)(*param_1 + 0x380))();
  if (((iVar4 != 0) && (in_ECX[0xd] != 0)) &&
     ((iVar4 = FUN_0068a180(), iVar4 != 0 &&
      ((iVar4 = FUN_004d7630(), iVar4 != 0 &&
       (fVar7 = (float10)FUN_004d7e90(param_1,0),
       fVar7 < (float10)800.0 != (fVar7 == (float10)800.0))))))) {
    (**(code **)(*param_1 + 0x380))();
    cVar2 = FUN_005e9a60();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x380))();
      FUN_005f80d0();
    }
    (**(code **)(*param_1 + 0x230))();
    return 0;
  }
  FUN_0068a9d0(param_5);
  iVar4 = FUN_00659a00();
  cVar2 = (**(code **)(*(int *)in_ECX[0xd] + 0x20))(param_1);
  if (cVar2 == '\0') {
    cVar2 = FUN_005e3270();
    if (((cVar2 == '\0') && (iVar6 = (**(code **)(*param_1 + 0x380))(), iVar6 == 0)) &&
       (cVar2 = (**(code **)(*(int *)param_1[0x16] + 0x3a0))(param_1,0), cVar2 != '\0')) {
      return 0;
    }
    (**(code **)(*(int *)in_ECX[0xd] + 0x18))(param_1);
  }
  iVar6 = FUN_00659a00();
  if (iVar4 != iVar6) {
    return 1;
  }
  cVar2 = (**(code **)(*(int *)in_ECX[0xd] + 0x20))(param_1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*(int *)in_ECX[0xd] + 0xc))();
    if ((cVar2 == '\0') && (iVar6 = (**(code **)(*in_ECX + 0x410))(), iVar6 != 0)) {
      FUN_00684ec0();
      (**(code **)(*param_1 + 0x180))(1);
    }
    cVar2 = FUN_0068aba0(param_1);
    if (cVar2 == '\0') {
      return 0;
    }
    if (in_ECX[0xd] == 0) {
      return 1;
    }
    iVar6 = FUN_00659a00();
    if (iVar4 != iVar6) {
      return 1;
    }
    iVar6 = FUN_0065ad00();
    if (iVar4 != iVar6) {
      return 1;
    }
  }
  cVar2 = FUN_006899e0();
  if (cVar2 == '\0') {
    return 1;
  }
LAB_00645260:
  (**(code **)(*param_1 + 0x180))(1);
  return 1;
}

