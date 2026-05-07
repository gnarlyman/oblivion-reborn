
undefined4 FUN_00500170(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    return 0;
  }
  *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)((int)param_2 + 0x39) = *(undefined1 *)(param_1 + 0x29);
  param_2[0xd] = *(int *)(param_1 + 0x24);
  if (*param_2 != 0) {
    do {
      iVar4 = FUN_004ff4c0(param_2);
    } while (iVar4 != 0xffff);
    if (0 < param_2[5]) {
      return 0;
    }
    param_2[7] = 0;
    if ((char)param_2[6] == '\0') {
      if ((param_2 + 0x14 != (int *)0x0) && (cVar3 = FUN_0046cb60(), cVar3 == '\0')) {
        iVar4 = *(int *)(param_2[0x14] + 0x410);
        if (iVar4 == 0xffff) {
          return 0;
        }
        if (iVar4 == 0x1d) {
          cVar3 = FUN_004fd2a0(param_2);
          if (cVar3 == '\0') {
            return 0;
          }
          goto LAB_00500219;
        }
      }
      FUN_004fce30(param_2,"You need to start scripts with \"scriptname ScriptName\"");
      return 0;
    }
  }
LAB_00500219:
  for (piVar2 = param_2 + 0x14; (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))));
      piVar2 = (int *)piVar2[1]) {
    piVar1 = (int *)*piVar2;
    param_2[7] = *piVar1;
    cVar3 = FUN_004ff710(param_1,param_2,piVar1);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  param_2[0xc] = param_2[9];
  cVar3 = FUN_004fd060();
  if (cVar3 == '\0') {
    return 0;
  }
  FUN_004fc850(param_2);
  return 1;
}



undefined1 FUN_00500280(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  int local_64 [2];
  int local_5c;
  undefined1 local_4c;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_20 [8];
  int *local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6d68;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff8c;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004fcd60(uVar4);
  local_4 = 0;
  local_5c = param_3;
  local_4c = 1;
  if (param_2 == 0) {
LAB_00500332:
    local_18 = param_1;
  }
  else {
    iVar5 = FUN_004d7240();
    if (iVar5 == 0) goto LAB_00500332;
    local_18 = (int *)FUN_004d7240();
    local_3c = local_18[6];
    local_38 = local_18[7];
    local_34 = local_18[8];
    local_30 = local_18[9];
    local_2c = local_18[10];
    FUN_004fc040(local_18 + 0x10,local_20,0);
  }
  if ((param_3 != 1) && (DAT_00b333f4 == '\0')) {
    DAT_00b333f4 = 1;
    pcVar6 = (char *)(**(code **)(*local_18 + 0xd4))();
    DAT_00b333f4 = '\0';
    if (pcVar6 != (char *)0x0) {
      pcVar1 = pcVar6 + 1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar1) {
        uVar8 = 0;
        puVar7 = (undefined *)(**(code **)(*local_18 + 0xd4))(0);
        goto LAB_00500395;
      }
    }
  }
  puVar7 = (&PTR_s_DefaultCompiler_00b0a110)[local_5c];
  uVar8 = 0;
LAB_00500395:
  FUN_004028d0(puVar7,uVar8);
  local_64[0] = param_1[0xb];
  uVar3 = FUN_00500170(param_1,local_64);
  local_4 = 0xffffffff;
  FUN_004ff440();
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_005003f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f43c0(param_3,local_4,0,param_7);
  return;
}



undefined1
FUN_00500650(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0x100))(local_4,0,local_8,0,1,0,0,0,1,0);
  }
  return 1;
}



undefined1
FUN_00500d90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (uint)(local_8 != 0);
  uVar3 = local_4;
  FUN_00542ea0(local_4,uVar2);
  FUN_00542260(uVar3,uVar2);
  return 1;
}



undefined1
FUN_00501040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_8);
  if (cVar1 != '\0') {
    if (local_8 < local_4) {
      local_8 = local_4;
    }
    iVar2 = local_8;
    pcVar3 = DAT_00b02184;
    iVar4 = local_4;
    if (local_4 < local_8 + 1) {
      do {
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(0,0,iVar4);
          iVar2 = local_8;
          pcVar3 = DAT_00b02184;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2 + 1);
    }
    return 1;
  }
  return 0;
}



void FUN_00501670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6060(param_3,local_4,0,param_7);
  return;
}



undefined1
FUN_005016d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  piVar2 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x290))(local_4,local_8);
  }
  return 1;
}



undefined1
FUN_005017e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  piVar2 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (piVar2 != (int *)0x0) {
    if (DAT_00b361ac != '\0') {
      (**(code **)(*piVar2 + 0x2a8))(local_4,local_8);
      return 1;
    }
    (**(code **)(*piVar2 + 0x2a0))(local_4,local_8,0);
  }
  return 1;
}



void FUN_00501a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f45d0(param_3,local_4,0,param_7);
  return;
}



void FUN_00501a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  char local_1;
  
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4410(param_3,(int)local_1,0,param_7);
  return;
}



void FUN_00501ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  char local_1;
  
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4490(param_3,(int)local_1,0,param_7);
  return;
}



void FUN_00501b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  char local_1;
  
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f8890(param_3,(int)local_1,0,param_7);
  return;
}



void FUN_00501ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  char local_1;
  
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4500(param_3,(int)local_1,0,param_7);
  return;
}



undefined1
FUN_00501c40(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_c,
                       &local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_3 != (int *)0x0) {
    iVar2 = (**(code **)(*param_3 + 0x164))();
    if (iVar2 != 0) {
      uVar3 = local_8;
      uVar4 = local_c;
      (**(code **)(*param_3 + 0x164))(local_4,local_8,local_c);
      FUN_00477b60(local_4,uVar3,uVar4);
      (**(code **)(*param_3 + 0x90))(1);
    }
  }
  return 1;
}



void FUN_00501ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f9120(param_3,local_4,0,param_7);
  return;
}



undefined1
FUN_00501f50(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *local_8;
  int *local_4;
  
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if (((param_3 != (int *)0x0) && (iVar2 = (**(code **)(*param_3 + 0x120))(), iVar2 != 0)) &&
     (local_8 != (int *)0x0)) {
    iVar2 = (**(code **)(*local_8 + 0x18))();
    if ((iVar2 != 1) && (iVar2 = (**(code **)(*local_8 + 0x18))(), iVar2 != 4)) {
      FUN_00699da0();
      if (local_4 == (int *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(*local_4 + 0x124))();
      }
      iVar2 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
      if (iVar2 == 0) {
        iVar2 = FUN_006ecc80();
        iVar4 = FUN_006ecc80();
        if (((iVar2 != 0) && (iVar4 != 0)) &&
           ((cVar1 = FUN_0043f8c0(iVar2,1), cVar1 != '\0' &&
            (cVar1 = FUN_0043f8c0(iVar4,0), cVar1 != '\0')))) {
          FUN_00699190(local_8,uVar3,0);
        }
      }
      else {
        cVar1 = FUN_00414fe0();
        if (cVar1 != '\0') {
          FUN_005f59e0(local_8,local_4,0);
          return 1;
        }
        cVar1 = FUN_00415030();
        if (cVar1 != '\0') {
          FUN_005f5870(local_8,local_4);
          return 1;
        }
        iVar2 = FUN_006ecc80();
        iVar4 = FUN_006ecc80();
        if ((((iVar2 != 0) && (iVar4 != 0)) && (cVar1 = FUN_0043f8c0(iVar2,1), cVar1 != '\0')) &&
           (cVar1 = FUN_0043f8c0(iVar4,0), cVar1 != '\0')) {
          FUN_00699190(local_8,uVar3,0);
          return 1;
        }
      }
    }
  }
  return 1;
}



undefined4
FUN_00502140(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((param_3 != 0) &&
     (iVar2 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0), iVar2 != 0)) {
    FUN_006a1f70(local_8,0,0);
    cVar1 = FUN_00414f80(param_5);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



void FUN_00502270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4570(0,local_4,0,param_7);
  return;
}



void FUN_00502690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f61a0(param_3,local_4,0,param_7);
  return;
}



void FUN_005026f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f62a0(param_3,local_4,0,param_7);
  return;
}



void FUN_00502750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6350(param_3,local_4,0,param_7);
  return;
}



void FUN_00502810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6400(param_3,local_4,0,param_7);
  return;
}



void FUN_00502890(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f48f0(param_3,local_4,0,param_7);
  return;
}



void FUN_00502960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4980(param_3,local_4,0,param_7);
  return;
}



void FUN_00502a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6640(param_3,local_4,0,param_7);
  return;
}



void FUN_00502aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f66a0(param_3,local_4,0,param_7);
  return;
}



void FUN_00502b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4b10(0,local_4,0,param_7);
  return;
}



void FUN_00502b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f67a0(param_3,local_4,0,param_7);
  return;
}



void FUN_00502be0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4b70(param_3,local_4,0,param_7);
  return;
}



void FUN_00502c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_8);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4bc0(param_3,local_4,local_8,param_7);
  return;
}



void FUN_00502f70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6ab0(param_3,local_4,0,param_7);
  return;
}



void FUN_00503010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6b50(param_3,local_4,0,param_7);
  return;
}



void FUN_00503070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6d70(param_3,local_4,0,param_7);
  return;
}



void FUN_005030d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_8);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6d70(param_3,local_4,local_8,param_7);
  return;
}



void FUN_00503140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6e50(param_3,local_4,0,param_7);
  return;
}



undefined1
FUN_005031a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if (local_8 != 0) {
    FUN_004c9840(0 < local_4);
  }
  return 1;
}



void FUN_00503210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6cf0(param_3,local_4,0,param_7);
  return;
}



void FUN_00503270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6ec0(param_3,local_4,0,param_7);
  return;
}



void FUN_00503330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6f40(param_3,local_4,0,param_7);
  return;
}



void FUN_00503390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6fc0(param_3,local_4,0,param_7);
  return;
}



void FUN_00503410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f70c0(param_3,local_4,0,param_7);
  return;
}



void FUN_00503470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6ec0(DAT_00b333c4,local_4,0,param_7);
  return;
}



void FUN_005034d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6f40(DAT_00b333c4,local_4,0,param_7);
  return;
}



void FUN_00503530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f6fc0(DAT_00b333c4,local_4,0,param_7);
  return;
}



void FUN_00503590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f70c0(DAT_00b333c4,local_4,0,param_7);
  return;
}



void FUN_005035f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4ce0(param_3,local_4,0,param_7);
  return;
}



void FUN_00503650(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4d50(param_3,local_4,0,param_7);
  return;
}



void FUN_005036b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined1 local_1;
  
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f71d0(param_3,local_1,0,param_7);
  return;
}



void FUN_00503750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f7220(param_3,local_4,0,param_7);
  return;
}



void FUN_005037b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f7280(param_3,local_4,0,param_7);
  return;
}



undefined1
FUN_00503810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_c = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_c,
                       &local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  *param_7 = 0;
  if ((local_c != 0) && (local_8 != 0)) {
    FUN_0051f0c0(local_c,local_4);
  }
  return 1;
}



undefined1
FUN_005038a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_c = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_c,
                       &local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  *param_7 = 0;
  if ((local_c != 0) && (local_8 != 0)) {
    FUN_0051f0f0(local_c,local_4);
  }
  return 1;
}



void FUN_00503930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f7330(param_3,local_4,0,param_7);
  return;
}



void FUN_00503990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f4e20(param_3,local_4,0,param_7);
  return;
}



uint FUN_00503a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  piVar1 = (int *)FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,
                               &local_4);
  if ((char)piVar1 != '\0') {
    piVar1 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    if ((piVar1 != (int *)0x0) && (local_8 != 0)) {
      fVar3 = (float)local_4;
      (**(code **)(*piVar1 + 0x374))(local_8,fVar3);
      uVar2 = FUN_004f4e20(param_3,fVar3,0,param_5);
      return uVar2;
    }
  }
  return (uint)piVar1 & 0xffffff00;
}



void FUN_00503b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f5010(param_3,local_4,0,param_7);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_00503c60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  float local_8;
  float local_4;
  
  local_8 = 0.0;
  local_4 = 0.0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  _DAT_00b42f4c = ABS(local_8);
  _DAT_00b2c73c = ABS(local_4);
  return 1;
}



undefined1
FUN_00504150(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  *param_7 = 0;
  if ((param_3 != 0) && (param_6 != 0)) {
    cVar1 = FUN_004fb5f0(local_4,0x10);
    if (cVar1 != '\0') {
      *param_7 = 0x3ff0000000000000;
    }
  }
  return 1;
}



undefined1
FUN_00504310(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 != '\0') {
    uVar2 = 0x10000;
    switch(local_8) {
    case 2:
      uVar2 = 0x20000;
      break;
    case 3:
      uVar2 = 0x40000;
      break;
    case 4:
      uVar2 = 0x80000;
      break;
    case 5:
      uVar2 = 0x100000;
      break;
    case 6:
      uVar2 = 0x200000;
    }
    *param_7 = 0;
    if (((param_3 != 0) && (param_6 != 0)) && (cVar1 = FUN_004fb5f0(local_4,uVar2), cVar1 != '\0'))
    {
      *param_7 = 0x3ff0000000000000;
    }
    return 1;
  }
  return 0;
}



undefined1
FUN_00504820(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined1 uVar2;
  int local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((param_3 != 0) && (local_4 != 0)) {
    uVar2 = FUN_004f74b0(param_3,local_4,0,param_7);
    return uVar2;
  }
  return 1;
}



undefined1
FUN_00504bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_7;
  *param_7 = 0;
  param_7 = (undefined8 *)0x0;
  local_8 = 0;
  local_4 = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&param_7,&local_8,
                       &local_4);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar6 = 0xffffffff;
  uVar5 = 0;
  uVar4 = param_7;
  uVar3 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0,param_7,0,0xffffffff);
  cVar2 = FUN_00675c40(local_4,local_8,uVar3,uVar4,uVar5,uVar6);
  if (cVar2 != '\0') {
    *puVar1 = 0x3ff0000000000000;
  }
  return 1;
}



undefined1
FUN_00504c60(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 local_4;
  
  puVar1 = param_7;
  *param_7 = 0;
  param_7 = (undefined8 *)0xffffffff;
  local_4 = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&param_7);
  if (cVar2 == '\0') {
    return 0;
  }
  if (param_3 != 0) {
    uVar3 = FUN_004f7af0(param_3,local_4,param_7,puVar1);
    return uVar3;
  }
  return 1;
}



undefined1
FUN_005050b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined1 uVar2;
  int local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((param_3 != 0) && (local_4 != 0)) {
    uVar2 = FUN_004f7fa0(param_3,local_4,0,param_7);
    return uVar2;
  }
  return 1;
}



void FUN_00505350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f5650(param_3,local_4,0,param_7);
  return;
}



undefined1
FUN_00505480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_004f80e0(param_3,local_4,0,param_7);
  return 1;
}



undefined1
FUN_005054e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_004f8140(param_3,local_4,0,param_7);
  return 1;
}



undefined1
FUN_00505540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_004f81a0(param_3,local_4,0,param_7);
  return 1;
}



undefined1
FUN_005055a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_004f8200(param_3,local_4,0,param_7);
  return 1;
}



undefined1
FUN_00505600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_004f8260(param_3,local_4,0,param_7);
  return 1;
}



void FUN_00505710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f8300(param_3,local_4,0,param_7);
  return;
}



void FUN_00505770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f5730(param_3,local_4,0,param_7);
  return;
}



void FUN_005058d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f8370(param_3,local_4,0,param_7);
  return;
}



void FUN_00505990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004f83d0(param_3,local_4,0,param_7);
  return;
}



undefined1
FUN_00505dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 local_4;
  
  puVar1 = param_7;
  *param_7 = 0;
  local_4 = 0;
  param_7 = (undefined8 *)0x0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&param_7);
  if (cVar2 == '\0') {
    return 0;
  }
  if (param_7 == (undefined8 *)0x0) {
    param_7 = (undefined8 *)(**(code **)(*DAT_00b333c4 + 0x170))();
  }
  FUN_004f8b90(param_3,local_4,param_7,puVar1);
  return 1;
}



undefined1
FUN_00505e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  if (local_8 == 0) {
    local_8 = (**(code **)(*DAT_00b333c4 + 0x170))();
  }
  if (local_4 != 0) {
    FUN_004caa10(local_8);
  }
  return 1;
}



undefined1
FUN_00505f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_004f8e70(param_3,local_4,0,param_7);
  return 1;
}



undefined1
FUN_00505fe0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  char *pcVar6;
  undefined4 local_18;
  undefined4 local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = 0xbf800000;
  local_14 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_14,&local_18,
                       uVar2);
  if (cVar1 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (param_3 == (int *)0x0) {
    param_3 = DAT_00b333c4;
  }
  uVar3 = FUN_006ecc80();
  cVar1 = FUN_0043f8c0(uVar3,0);
  if (cVar1 != '\0') {
    iVar4 = (**(code **)(*param_3 + 0x154))();
    if (iVar4 != 0) {
      iStack_10 = FUN_00401f00(0x4c);
      uStack_4 = 0;
      if (iStack_10 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_006a0980(param_3,local_14,local_18);
      }
      uStack_4 = 0xffffffff;
      cVar1 = (**(code **)(*piVar5 + 0x68))();
      if (cVar1 == '\0') {
        (**(code **)*piVar5)(1);
        if (DAT_00b361ac == '\0') goto LAB_0050618e;
        iVar4 = FUN_004da2a0();
        if (iVar4 != 0) {
          uVar3 = FUN_004da2a0();
          FUN_00579b60("Shader effect initialization failed for %s",uVar3);
          *unaff_FS_OFFSET = local_c;
          return 1;
        }
        pcVar6 = "Shader effect initialization failed for reference";
      }
      else {
        FUN_00678d30(piVar5);
        if (DAT_00b361ac == '\0') goto LAB_0050618e;
        iVar4 = FUN_004da2a0();
        if (iVar4 != 0) {
          uVar3 = FUN_004da2a0();
          FUN_00579b60("Shader effect has been applied to %s",uVar3);
          *unaff_FS_OFFSET = local_c;
          return 1;
        }
        pcVar6 = "Shader effect has been applied to reference";
      }
      FUN_00579b60(pcVar6);
    }
  }
LAB_0050618e:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined1
FUN_005061b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0xbf800000;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = DAT_00b333c4;
  }
  FUN_00678e70(param_3,local_8);
  iVar2 = FUN_004da2a0();
  if (iVar2 != 0) {
    uVar3 = FUN_004da2a0();
    FUN_00579b60("Shader effect has been removed from %s",uVar3);
    return 1;
  }
  FUN_00579b60("Shader effect has been removed from reference");
  return 1;
}



undefined1
FUN_00506310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_004f8590(param_3,local_4,0,param_7);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_005065b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int local_1c;
  int local_18;
  float local_14 [5];
  
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1c,&local_18,
                       local_14);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((((-1 < local_1c) && (-1 < local_18)) && (-1 < (int)local_14[0])) &&
     (((local_1c < 0x100 && (local_18 < 0x100)) && ((int)local_14[0] < 0x100)))) {
    _DAT_00b45e24 = (float)local_1c / 255.0;
    _DAT_00b45e28 = (float)local_18 / 255.0;
    _DAT_00b45e2c = (float)(int)local_14[0] / 255.0;
    _DAT_00b45e30 = 0x3f800000;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_00506680(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int local_1c;
  int local_18;
  float local_14 [5];
  
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1c,&local_18,
                       local_14);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((((-1 < local_1c) && (-1 < local_18)) && (-1 < (int)local_14[0])) &&
     (((local_1c < 0x100 && (local_18 < 0x100)) && ((int)local_14[0] < 0x100)))) {
    _DAT_00b45e34 = (float)local_1c / 255.0;
    _DAT_00b45e38 = (float)local_18 / 255.0;
    _DAT_00b45e3c = (float)(int)local_14[0] / 255.0;
    _DAT_00b45e40 = 0x3f800000;
  }
  return 1;
}



undefined1
FUN_005069d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  float local_c;
  longlong local_8;
  
  local_c = 0.0;
  cVar3 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_c);
  if (cVar3 != '\0') {
    if (0.0 < local_c) {
      local_8 = (longlong)ROUND(local_c * 1048576.0);
      uVar2 = (undefined4)local_8;
      iVar4 = FUN_00401210();
      local_8 = CONCAT44(local_8._4_4_,iVar4);
      fVar1 = (float)iVar4;
      if (iVar4 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      FUN_00579b60("Free memory [was]: %.3f MB",(double)(fVar1 * 9.536743e-07));
      FUN_00401170(uVar2);
    }
    iVar4 = FUN_00401210();
    local_8 = CONCAT44(local_8._4_4_,iVar4);
    fVar1 = (float)iVar4;
    if (iVar4 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_00579b60("Free memory [is]: %.3f MB",(double)(fVar1 * 9.536743e-07));
    return 1;
  }
  return 0;
}



undefined1
FUN_00506b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  uint local_20;
  char *local_1c [7];
  
  local_20 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_20);
  if (cVar1 == '\0') {
    return 0;
  }
  if (local_20 < 7) {
    uVar2 = 1 << ((byte)local_20 & 0x1f);
    if ((DAT_00b2c678 & uVar2) == 0) {
      DAT_00b2c678 = DAT_00b2c678 | uVar2;
    }
    else {
      DAT_00b2c678 = DAT_00b2c678 & ~uVar2;
    }
    if (DAT_00b361ac != '\0') {
      local_1c[0] = "Undetermined";
      local_1c[1] = "Architecture";
      local_1c[2] = "Furniture";
      local_1c[3] = "Actors";
      local_1c[4] = "Items";
      local_1c[5] = "Misc";
      local_1c[6] = "Other";
      puVar3 = &DAT_00a4b910;
      if ((DAT_00b2c678 & uVar2) == 0) {
        puVar3 = &DAT_00a4b90c;
      }
      FUN_00579b60("Shadows %s: %s",local_1c[local_20],puVar3);
      return 1;
    }
  }
  else if (DAT_00b361ac != '\0') {
    FUN_00579b60("Shadow object type must be [0,6]");
  }
  return 1;
}



void FUN_00506f00(undefined4 *param_1,code *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = (param_3 + -1) / 9;
  iVar6 = 1;
  puVar2 = param_1;
  iVar7 = iVar6;
  if (0 < iVar5) {
    do {
      iVar6 = iVar6 * 3 + 1;
    } while (iVar6 <= iVar5);
    iVar7 = iVar6;
    if (iVar6 < 1) {
      return;
    }
  }
  do {
    for (; iVar6 <= param_3 + -1; iVar6 = iVar6 + 1) {
      uVar1 = param_1[iVar6];
      puVar4 = puVar2;
      iVar5 = iVar6;
      while ((iVar7 <= iVar5 && (iVar3 = (*param_2)(uVar1,*puVar4), iVar3 < 0))) {
        param_1[iVar5] = *puVar4;
        iVar5 = iVar5 - iVar7;
        puVar4 = puVar4 + -iVar7;
      }
      param_1[iVar5] = uVar1;
      puVar2 = puVar2 + 1;
    }
    iVar6 = iVar7 / 3;
    puVar2 = param_1;
    iVar7 = iVar6;
  } while (0 < iVar6);
  return;
}



undefined4 FUN_00506fd0(void)

{
  int iVar1;
  
  if (DAT_00b125e8 != '\0') {
    iVar1 = FUN_0055f7e0(1);
    if (*(char *)(iVar1 + 0x20) != '\0') {
      iVar1 = FUN_0055f7e0(1);
      if (*(char *)(iVar1 + 0x21) != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



float10 FUN_00507010(float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_2;
  uVar2 = (uint)param_2;
  if ((int)param_2 < 0) {
    uVar2 = -(int)param_2;
  }
  param_2 = 1.0;
  while( true ) {
    if ((uVar2 & 1) != 0) {
      param_2 = param_2 * param_1;
    }
    uVar2 = uVar2 >> 1;
    if (uVar2 == 0) break;
    param_1 = param_1 * param_1;
  }
  if ((int)uVar1 < 0) {
    param_2 = 1.0 / param_2;
  }
  return (float10)param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00507060(void)

{
  if (DAT_00b43074 != '\0') {
    return (float10)(_DAT_00b431ec / _DAT_00b2c7a4);
  }
  return (float10)(_DAT_00b431e8 / _DAT_00b2c7a4);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005070a0(void)

{
  if (DAT_00b43074 != '\0') {
    return (float10)(_DAT_00b431f4 * _DAT_00b2c7a4);
  }
  return (float10)(_DAT_00b431f0 * _DAT_00b2c7a4);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005070e0(void)

{
  if (DAT_00b43074 != '\0') {
    return (float10)_DAT_00b431fc;
  }
  return (float10)_DAT_00b431f8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00507110(void)

{
  if (DAT_00b43074 != '\0') {
    return (float10)_DAT_00b43204;
  }
  return (float10)_DAT_00b43200;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00507140(void)

{
  if (DAT_00b43074 != '\0') {
    return (float10)_DAT_00b4320c;
  }
  return (float10)_DAT_00b43208;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00507170(void)

{
  if (DAT_00b43074 != '\0') {
    return (float10)_DAT_00b43214;
  }
  return (float10)_DAT_00b43210;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005071a0(void)

{
  if (DAT_00b43074 != '\0') {
    return (float10)_DAT_00b4321c;
  }
  return (float10)_DAT_00b43218;
}



undefined1
FUN_00507320(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 *puVar5;
  int local_24;
  int local_20;
  undefined1 local_1c [16];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6dc8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_24 = 0;
  local_20 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_24,&local_20,
                       uVar2);
  if (cVar1 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (param_3 != 0) {
    FUN_00469690();
    local_4 = 0;
    iVar3 = FUN_009832e6(local_24,0,&PTR_PTR_00b03268,&PTR_PTR_00b05da4,0);
    if (iVar3 == 0) {
      if ((local_24 == 0) || (local_20 == 0)) {
        uVar4 = (**(code **)(*param_5 + 0xd4))();
        FUN_004a7a60("AddItem in script \'%s\' failed to generate an item.",uVar4);
      }
      else {
        FUN_00469d10(local_24,local_20,0);
      }
    }
    else {
      puVar5 = local_1c;
      iVar3 = local_20;
      uVar4 = FUN_005e1fd0(local_20,puVar5);
      FUN_0046cde0(uVar4,iVar3,puVar5);
    }
    FUN_0046a020(param_3);
    local_4 = 0xffffffff;
    FUN_0046a010();
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined1
FUN_00507470(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((param_3 != 0) && (param_3 != -0x44)) {
    iVar2 = FUN_0041e6f0();
    if (iVar2 != 0) {
      FUN_0048da00(param_3,local_8);
    }
  }
  return 1;
}



undefined1
FUN_005074f0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_c = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_c);
  uVar1 = local_8;
  if (cVar2 == '\0') {
    return 0;
  }
  local_8 = local_8 & 0xffffff00;
  if (local_c != 0) {
    local_8 = CONCAT31(SUB43(uVar1,1),1);
  }
  if ((param_3 != 0) && (param_3 != -0x44)) {
    iVar3 = FUN_0041e6f0();
    if (iVar3 != 0) {
      FUN_00492e70(param_3,local_4,0,local_8,0);
      FUN_00665260(param_3);
    }
  }
  return 1;
}



undefined4
FUN_00507650(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  uint local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  if (DAT_00b333c4 == param_3) {
    FUN_004a7a60("Never have the player character activate something in a script very Bad");
  }
  else {
    cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
    if (cVar1 != '\0') {
      if (param_3 != 0) {
        if ((local_8 == 0) && (local_8 = FUN_004d8360(), local_8 == 0)) {
          return 1;
        }
        if ((*(uint *)(local_8 + 8) >> 0xb & 1) == 0) {
          if (local_4 == 0) {
            FUN_004d8270(1);
            FUN_004d8270(2);
            FUN_004dd260(local_8,0,0,1);
            FUN_004d82e0(2);
            FUN_004d82e0(1);
            return 1;
          }
          FUN_004dd260(local_8,0,0,1);
        }
      }
      return 1;
    }
  }
  return 0;
}



undefined1
FUN_00507800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 1;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_10);
  if (cVar2 != '\0') {
    iVar3 = FUN_004d6670();
    if ((iVar3 == 0) || (pcVar4 = (char *)FUN_004f1a60(), *pcVar4 == '\0')) {
      local_c = DAT_00b3f9a8;
      uVar9 = 0;
      puVar8 = &local_c;
      local_4 = DAT_00b3f9b0;
      local_8 = DAT_00b3f9ac;
      uVar5 = FUN_006ecc80(puVar8,0);
      iVar3 = FUN_0044ee00(uVar5,puVar8,uVar9);
    }
    if (iVar3 != 0) {
      piVar6 = (int *)FUN_004f0620();
      for (piVar1 = piVar6; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
        uVar7 = (uint)(0 < local_10);
        FUN_004d7730(uVar7);
        FUN_0042b320(uVar7);
        uVar7 = (uint)(0 < local_10);
        FUN_004d7730(uVar7);
        FUN_0042b350(uVar7);
        (**(code **)(*(int *)*piVar1 + 0x40))(0x400);
      }
      FUN_004526e0();
      FUN_00401f20(piVar6);
    }
    pcVar4 = "shown.";
    if (local_10 < 1) {
      pcVar4 = "hidden.";
    }
    FUN_00579b60("All map markers %s",pcVar4);
    return 1;
  }
  return 0;
}



undefined1
FUN_00507ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = FUN_00542ea0();
  if (*(int *)(iVar2 + 0x10) == 0) {
    FUN_00542260(local_8,local_4 != 0);
  }
  else {
    if (local_4 == 0) {
      *(int *)(iVar2 + 0x18) = local_8;
      *(undefined4 *)(DAT_00b333c4 + 0x6e8) = 0;
    }
    else {
      *(int *)(iVar2 + 0x1c) = local_8;
    }
    if (DAT_00b361ac == '\0') {
      FUN_0053fb60(1);
      return 1;
    }
  }
  return 1;
}



undefined1
FUN_00507e60(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float unaff_ESI;
  undefined4 unaff_EDI;
  float local_8;
  int local_4;
  
  if (DAT_00b42f3e == '\0') {
    return 1;
  }
  if (DAT_00b42e84 == '\0') {
    return 1;
  }
  if (DAT_00b42f48 < 2) {
    return 1;
  }
  local_8 = 0.0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_3 == (int *)0x0) {
    param_3 = DAT_00b333c4;
  }
  if ((10.0 <= local_8) || (0.0 < local_8)) {
    if (10.0 <= local_8) {
      local_4 = CONCAT31(local_4._1_3_,1);
      local_8 = 10.0;
      goto LAB_00507f19;
    }
    if (0.0 < local_8) {
      local_4 = CONCAT31(local_4._1_3_,1);
      goto LAB_00507f19;
    }
  }
  else {
    local_8 = 0.0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
LAB_00507f19:
  piVar2 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (piVar2 == (int *)0x0) {
    iVar3 = (**(code **)(*param_3 + 0x154))();
    if (iVar3 != 0) {
      FUN_007d92c0(iVar3,0,0,0,0);
      FUN_007d92c0(iVar3,0,0,1,0);
      FUN_007d92c0(iVar3,unaff_EDI,unaff_ESI,0,0);
    }
  }
  else {
    unaff_ESI = local_8;
    (**(code **)(*piVar2 + 0x270))(local_4,local_8);
  }
  if (DAT_00b361ac != '\0') {
    uVar4 = FUN_004da2a0((double)unaff_ESI);
    FUN_00579b60("%s refraction has been set to %f",uVar4);
  }
  return 1;
}



undefined1
FUN_005084a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = FUN_0043f270();
  if (iVar2 == 0) {
    iVar2 = *(int *)(DAT_00b33a98 + 0xc);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (DAT_00b35b90 != 0) {
    thunk_FUN_004be420();
  }
  if (DAT_00b35b8c != 0) {
    thunk_FUN_004bd8c0();
  }
  iVar3 = FUN_004efe80(local_4,local_8);
  if (iVar3 == 0) {
    iVar3 = FUN_004f1630(local_4,local_8);
    if (iVar3 == 0) {
      iVar3 = FUN_004471d0(0,local_4,local_8,iVar2);
      if (iVar3 == 0) goto LAB_005085ba;
    }
  }
  iVar2 = FUN_00585c10(1);
  if ('\0' < *(char *)(iVar2 + 0x31)) {
    FUN_005859c0();
    uVar5 = 0;
    uVar4 = 3;
    FUN_00582160(0,1,3,0);
    FUN_0057cfe0(uVar4,uVar5);
  }
  FUN_0066fd90(0,iVar3);
LAB_005085ba:
  *(undefined1 *)(DAT_00b333c4 + 0x117) = 1;
  return 1;
}



undefined1
FUN_005087c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int local_c;
  int local_8 [2];
  
  local_8[0] = 0;
  local_c = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,local_8,&local_c);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = FUN_00943410();
  if (iVar2 != 0) {
    if ((local_8[0] == 0) && (local_c == 0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(*(int *)(*(int *)(DAT_00b333a0 + 0x5c) + 0x20) + 0x18) = uVar3;
    *(float *)(iVar2 + 0x2c) = (float)local_8[0];
    *(float *)(iVar2 + 0x30) = (float)local_c;
  }
  return 1;
}



undefined1
FUN_00508980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [5];
  
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_20,&local_1c,
                       &local_18,local_14);
  if (cVar1 == '\0') {
    return 0;
  }
  DAT_00b2c728 = local_20;
  DAT_00b2c72c = local_1c;
  DAT_00b2c730 = local_18;
  DAT_00b2c734 = local_14[0];
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00508b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  int local_14 [5];
  
  local_1c = 0;
  local_18 = 0;
  local_14[0] = 0;
  uVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1c,&local_18,
                       local_14);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  _DAT_00b4616c = (float)local_1c * 0.00390625;
  _DAT_00b46170 = (float)local_18 * 0.00390625;
  _DAT_00b46174 = (float)local_14[0] * 0.00390625;
  _DAT_00b46178 = 0x3f800000;
  return CONCAT31((int3)((uint)((float)local_14[0] * 0.00390625) >> 8),1);
}



undefined1
FUN_00508c30(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  int local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = 0.0;
  local_28 = 0.0;
  local_2c = 0;
  local_20 = 0;
  local_30 = 0;
  cVar3 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_24,&local_28,
                       &local_2c,&local_20,&local_30);
  if (cVar3 == '\0') {
    return 0;
  }
  if ((param_3 == DAT_00b333c4) && (cVar3 = (**(code **)(*DAT_00b333c4 + 0x198))(0), cVar3 != '\0'))
  {
    return 1;
  }
  local_18 = local_24;
  local_14 = local_28;
  local_10 = local_2c;
  local_c = 0;
  local_8 = 0;
  local_4 = local_20;
  fVar1 = ROUND(local_24);
  local_1c = (int)ROUND(local_28);
  iVar5 = local_1c >> 0xc;
  iVar4 = FUN_004efe80((int)fVar1 >> 0xc,iVar5);
  if (param_3 == DAT_00b333c4) {
    if (DAT_00b35b90 != 0) {
      thunk_FUN_004be420();
    }
    if (DAT_00b35b8c != 0) {
      thunk_FUN_004bd8c0();
    }
    if ((iVar4 != 0) || (iVar4 = FUN_004f1630((int)fVar1 >> 0xc,iVar5), iVar4 != 0)) {
      FUN_0066eaf0(local_18,local_14,local_10,local_c,local_8,local_4,iVar4,1);
    }
    goto LAB_00508e06;
  }
  FUN_004d8a30(local_18,local_14,local_10);
  if ((iVar4 == 0) || (cVar3 = FUN_0043f8c0(iVar4,0), cVar3 == '\0')) {
    if (param_3 != DAT_00b333c4) {
      uVar2 = 0x7f7fffff;
      goto LAB_00508dec;
    }
  }
  else {
    FUN_004d8a10(local_4);
    uVar2 = 0;
LAB_00508dec:
    FUN_004d89d0(uVar2);
  }
  FUN_004dd4b0(param_3,iVar4,local_30);
LAB_00508e06:
  FUN_00665260(param_3);
  return 1;
}



undefined1
FUN_00508e20(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int local_2c;
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
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_2c = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_28,&local_24,
                       &local_20,&local_1c,&local_2c);
  if (cVar2 == '\0') {
    return 0;
  }
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_20;
  local_c = 0;
  local_8 = 0;
  local_4 = local_1c;
  iVar3 = FUN_006ecc80();
  if (local_2c == iVar3) {
    return 1;
  }
  if (param_3 == DAT_00b333c4) {
    if (local_2c != 0) {
      FUN_0066eaf0(local_18,local_14,local_10,local_c,local_8,local_4,local_2c,1);
      FUN_00665260(param_3);
      return 1;
    }
    goto LAB_00508f9f;
  }
  FUN_004d8a30(local_18,local_14,local_10);
  if ((local_2c == 0) || (cVar2 = FUN_0043f8c0(local_2c,0), cVar2 == '\0')) {
    if (param_3 != DAT_00b333c4) {
      uVar1 = 0x7f7fffff;
      goto LAB_00508f84;
    }
  }
  else {
    FUN_004d8a10(local_4);
    uVar1 = 0;
LAB_00508f84:
    FUN_004d89d0(uVar1);
  }
  FUN_004dd4b0(param_3,local_2c,0);
LAB_00508f9f:
  FUN_00665260(param_3);
  return 1;
}



undefined1
FUN_00508fc0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  char local_15;
  undefined4 local_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_14 = 0;
  cVar4 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_15,&local_14);
  if (cVar4 == '\0') {
    return 0;
  }
  if (param_3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
    uStack_c = *puVar5;
    uStack_8 = puVar5[1];
    uStack_4 = puVar5[2];
    if (local_15 == 'X') {
      uStack_c = local_14;
    }
    else if (local_15 == 'Y') {
      uStack_8 = local_14;
    }
    else if (local_15 == 'Z') {
      uStack_4 = local_14;
    }
    uVar3 = uStack_4;
    uVar2 = uStack_8;
    uVar1 = uStack_c;
    FUN_004d8a30(uStack_c,uStack_8,uStack_4);
    iVar6 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b05538,0);
    if (iVar6 != 0) {
      iStack_10 = FUN_0065a2c0();
      if (iStack_10 != 0) {
        iVar6 = FUN_0088d370();
        if (iVar6 != 4) {
          FUN_00452a10(&uStack_c);
        }
      }
    }
    iVar6 = (**(code **)(*param_3 + 0x154))();
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0x54) = uVar1;
      *(undefined4 *)(iVar6 + 0x58) = uVar2;
      *(undefined4 *)(iVar6 + 0x5c) = uVar3;
      FUN_00897a20(iVar6,1);
      FUN_00707370(0,0);
    }
  }
  return 1;
}



undefined1
FUN_00509110(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  char local_2d;
  float local_2c;
  float local_28;
  undefined1 auStack_24 [36];
  
  local_28 = 0.0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_2d,&local_28);
  if (cVar1 != '\0') {
    if (param_3 != (int *)0x0) {
      local_2c = local_28 * 0.017453292;
      if (local_2d == 'X') {
        FUN_004d89d0(local_2c);
      }
      else if (local_2d == 'Y') {
        FUN_004d89f0(local_2c);
      }
      else if (local_2d == 'Z') {
        FUN_004d8a10(local_2c);
      }
      iVar2 = (**(code **)(*param_3 + 0x154))();
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)FUN_004d7af0(auStack_24);
        puVar5 = (undefined4 *)(iVar2 + 0x30);
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_00897a20(iVar2,1);
        iVar2 = (**(code **)(*param_3 + 0x164))();
        if (iVar2 == 0) {
          FUN_00707370(0,0);
        }
      }
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_00509220(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_6c [12];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [52];
  
  if (param_3 != (int *)0x0) {
    uStack_8c = 0x509242;
    iVar2 = (**(code **)(*param_3 + 0x154))();
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*param_3 + 0xf8);
      puVar3 = &DAT_00b26dc4;
      puVar6 = auStack_6c;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      uStack_90 = DAT_00b3f9ac;
      uStack_8c = DAT_00b3f9b0;
      (*pcVar1)(DAT_00b3f9a8);
      puVar3 = (undefined4 *)(**(code **)(*param_3 + 0xf0))(&stack0xffffff7c);
      FUN_0070fd30(*puVar3);
      puVar3 = (undefined4 *)FUN_007100a0(auStack_34,&stack0xffffff84);
      pcVar1 = *(code **)(*param_3 + 0xf0);
      puVar6 = (undefined4 *)&stack0xffffff84;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar4 = (*pcVar1)(&stack0xffffff78);
      FUN_0070fd80(*(undefined4 *)(iVar4 + 4));
      puVar3 = (undefined4 *)FUN_007100a0(auStack_38,&stack0xffffff80);
      pcVar1 = *(code **)(*param_3 + 0xf0);
      puVar6 = (undefined4 *)&stack0xffffff80;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar4 = (*pcVar1)(&uStack_8c);
      FUN_0070fdd0(*(undefined4 *)(iVar4 + 8));
      puVar3 = (undefined4 *)FUN_007100a0(auStack_3c,&stack0xffffff7c);
      iVar4 = *param_3;
      puVar6 = (undefined4 *)&stack0xffffff7c;
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3 = (undefined4 *)(**(code **)(iVar4 + 0xf4))(&uStack_90);
      *(undefined4 *)(iVar2 + 0x54) = *puVar3;
      *(undefined4 *)(iVar2 + 0x58) = puVar3[1];
      *(undefined4 *)(iVar2 + 0x5c) = puVar3[2];
      puVar3 = (undefined4 *)&stack0xffffff78;
      puVar6 = (undefined4 *)(iVar2 + 0x30);
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar2 = (**(code **)(*param_3 + 0x164))();
      if (iVar2 == 0) {
        FUN_00707370(0,0);
      }
    }
  }
  return 1;
}



undefined4
FUN_00509520(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = 0;
  if ((((*(int *)(DAT_00b33398 + 0x24) != 0) &&
       (cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_10),
       cVar1 != '\0')) &&
      (puVar2 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(local_10 + 0xc),0x102,0),
      puVar2 != (undefined4 *)0x0)) && (param_3 != (int *)0x0)) {
    puVar3 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
    uStack_c = *puVar3;
    uStack_8 = puVar3[1];
    uStack_4 = puVar3[2];
    FUN_006b7360(uStack_c,uStack_8,uStack_4);
    FUN_006ac3e0(*puVar2,param_3);
    FUN_006b7190(0);
    FUN_006b73e0();
    FUN_00401f20(puVar2);
  }
  return 1;
}



undefined4 FUN_005097a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  int local_54;
  int *local_50;
  undefined4 uStack_4c;
  double local_48;
  
  bVar2 = true;
  if (param_3 != 0) {
    iVar4 = FUN_004d7240();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_004d7240();
      iVar4 = FUN_004d7250();
      piVar7 = piVar5 + 0x12;
      if ((piVar5[0x13] == 0) && (*piVar7 == 0)) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))();
        FUN_00579b60("No variables in script %s",uVar6);
      }
      else if (iVar4 != 0) {
        while ((piVar7 != (int *)0x0 &&
               (puVar1 = (undefined4 *)*piVar7, puVar1 != (undefined4 *)0x0))) {
          piVar7 = (int *)piVar7[1];
          cVar3 = FUN_004fa1b0();
          if (cVar3 == '\0') {
            local_50 = (int *)puVar1[6];
            if (*(char *)(puVar1 + 4) == '\0') {
              fVar8 = (float10)FUN_004fa110(*puVar1,0);
              uVar6 = (**(code **)(*piVar5 + 0xd4))(local_50,(double)fVar8);
              FUN_00579b60("%s->%s = %0.4f",uVar6);
            }
            else {
              FUN_004fa110(*puVar1,0);
              FUN_009828c0();
              uVar6 = (**(code **)(*piVar5 + 0xd4))(local_50);
              FUN_00579b60("%s->%s = %d",uVar6);
            }
          }
          else {
            local_50 = (int *)0x0;
            fVar8 = (float10)FUN_004fa110(*puVar1,0);
            local_48 = (double)fVar8;
            FUN_004f9fc0(&local_50);
            uVar6 = (**(code **)(*piVar5 + 0xd4))(puVar1[6]);
            FUN_00579b60("%s->%s = (%08X)",uVar6);
          }
        }
      }
      bVar2 = false;
    }
    iVar4 = FUN_004d6d40();
    if (iVar4 != 0) {
      uStack_4c = FUN_00485e00(param_3,iVar4);
      iVar4 = FUN_0048d6c0();
      local_48 = (double)CONCAT44(local_48._4_4_,iVar4);
      local_54 = 0;
      if (0 < iVar4) {
        do {
          iVar4 = FUN_00486a40();
          if ((iVar4 != 0) && (iVar4 = FUN_00484f20(), iVar4 != 0)) {
            piVar7 = (int *)FUN_00484f20();
            iVar4 = FUN_00484f50();
            if ((piVar7[0x13] == 0) && (piVar7[0x12] == 0)) {
              (**(code **)(*piVar7 + 0xd4))();
              FUN_00579b60("No variables in script %s");
            }
            else {
              piVar5 = piVar7 + 0x12;
              if (iVar4 != 0) {
                while ((piVar5 != (int *)0x0 &&
                       (puVar1 = (undefined4 *)*piVar5, puVar1 != (undefined4 *)0x0))) {
                  local_50 = (int *)piVar5[1];
                  uVar6 = puVar1[6];
                  if (*(char *)(puVar1 + 4) == '\0') {
                    FUN_004fa110(*puVar1,0);
                    uVar6 = (**(code **)(*piVar7 + 0xd4))(uVar6);
                    FUN_00579b60("%s->%s = %0.4f",uVar6);
                    piVar5 = local_50;
                  }
                  else {
                    FUN_004fa110(*puVar1,0);
                    FUN_009828c0();
                    uVar6 = (**(code **)(*piVar7 + 0xd4))();
                    FUN_00579b60("%s->%s = %d",uVar6);
                    piVar5 = local_50;
                  }
                }
              }
            }
            bVar2 = false;
          }
          local_54 = local_54 + 1;
        } while (local_54 < local_48._0_4_);
      }
    }
    if (!bVar2) {
      return 1;
    }
  }
  piVar7 = (int *)(DAT_00b33a98 + 0x74);
  if ((piVar7 != (int *)0x0) && ((*(int *)(DAT_00b33a98 + 0x78) != 0 || (*piVar7 != 0)))) {
    FUN_00579b60();
    do {
      piVar5 = (int *)*piVar7;
      if (piVar5 != (int *)0x0) {
        cVar3 = (char)piVar5[8];
        if (cVar3 == 'f') {
          local_48 = (double)CONCAT44(local_48._4_4_,piVar5[9]);
          uVar6 = (**(code **)(*piVar5 + 0xd4))((double)(float)piVar5[9]);
          FUN_00579b60("%s = %0.4f",uVar6);
        }
        else {
          if (cVar3 == 'l') {
            local_48 = (double)CONCAT44(local_48._4_4_,piVar5[9]);
            FUN_009828c0();
          }
          else {
            if (cVar3 != 's') goto LAB_00509b18;
            local_48 = (double)CONCAT44(local_48._4_4_,piVar5[9]);
            FUN_009828c0();
          }
          uVar6 = (**(code **)(*piVar5 + 0xd4))();
          FUN_00579b60("%s = %d",uVar6);
        }
      }
LAB_00509b18:
      piVar7 = (int *)piVar7[1];
    } while (piVar7 != (int *)0x0);
  }
  return 1;
}



undefined1
FUN_00509b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  int *piVar6;
  float10 fVar7;
  int *local_54;
  int *local_50;
  undefined4 local_4c;
  double local_48;
  
  local_54 = (int *)0x0;
  cVar3 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_54);
  if (cVar3 != '\0') {
    if (local_54 != (int *)0x0) {
      piVar1 = (int *)local_54[7];
      if (piVar1 != (int *)0x0) {
        piVar6 = piVar1 + 0x12;
        if ((piVar1[0x13] == 0) && (*piVar6 == 0)) {
          uVar4 = (**(code **)(*local_54 + 0xd4))();
          FUN_00579b60("No script variables on quest %s",uVar4);
        }
        else if (local_54[0x16] != 0) {
          while ((piVar6 != (int *)0x0 &&
                 (puVar2 = (undefined4 *)*piVar6, puVar2 != (undefined4 *)0x0))) {
            local_50 = (int *)piVar6[1];
            cVar3 = FUN_004fa1b0();
            if (cVar3 == '\0') {
              local_4c = puVar2[6];
              if (*(char *)(puVar2 + 4) == '\0') {
                fVar7 = (float10)FUN_004fa110(*puVar2,0);
                uVar4 = (**(code **)(*piVar1 + 0xd4))(local_4c,(double)fVar7);
                FUN_00579b60("%s->%s = %0.4f",uVar4);
                piVar6 = local_50;
              }
              else {
                FUN_004fa110(*puVar2,0);
                FUN_009828c0();
                uVar4 = (**(code **)(*piVar1 + 0xd4))(local_4c);
                FUN_00579b60("%s->%s = %d",uVar4);
                piVar6 = local_50;
              }
            }
            else {
              local_4c = 0;
              fVar7 = (float10)FUN_004fa110(*puVar2,0);
              local_48 = (double)fVar7;
              FUN_004f9fc0(&local_4c);
              uVar4 = (**(code **)(*piVar1 + 0xd4))(puVar2[6]);
              FUN_00579b60("%s->%s = (%08X)",uVar4);
              piVar6 = local_50;
            }
          }
        }
      }
      FUN_00579b60();
      ppuVar5 = &PTR_DAT_00a3dae8;
      if ((*(byte *)(local_54 + 0xf) & 1) == 0) {
        ppuVar5 = (undefined **)&DAT_00a3daf4;
      }
      FUN_00579b60("Running?       %s",ppuVar5);
      uVar4 = FUN_00529750();
      FUN_00579b60("Current stage: %d",uVar4);
      FUN_00579b60("Priority:      %d",*(undefined1 *)((int)local_54 + 0x3d));
    }
    return 1;
  }
  return 0;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_0050a400(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,DWORD param_8)

{
  char cVar1;
  HANDLE hFile;
  char *pcVar2;
  int iVar3;
  DWORD nNumberOfBytesToWrite;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  DWORD local_1228;
  ushort local_1224;
  ushort local_1222;
  ushort local_121e;
  ushort local_121c;
  _SYSTEMTIME local_1214;
  char local_1204 [4608];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_1228;
  local_1228 = param_8;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6);
  if (((cVar1 != '\0') && (*PTR_DAT_00b09ef0 != '\0')) &&
     (hFile = CreateFileA(PTR_DAT_00b09ef0,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,
                          (HANDLE)0x0), hFile != (HANDLE)0xffffffff)) {
    SetFilePointer(hFile,0,(PLONG)0x0,2);
    GetLocalTime(&local_1214);
    _sprintf(local_1204,"%d/%d/%d (%02d:%02d)\t",(uint)local_1214.wMonth,(uint)local_1214.wDay,
             (uint)local_1214.wYear,(uint)local_1214.wHour);
    pcVar2 = local_1204;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,local_1204,(int)pcVar2 - (int)(local_1204 + 1),&local_1228,(LPOVERLAPPED)0x0);
    if ((param_3 == (int *)0x0) || (iVar3 = FUN_0046b680(), iVar3 == 0)) {
      _sprintf(local_1204,"\t\t");
      pcVar2 = local_1204;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      nNumberOfBytesToWrite = (int)pcVar2 - (int)(local_1204 + 1);
    }
    else {
      FUN_0046b680();
      _sprintf(local_1204,"%s\t");
      pcVar2 = local_1204;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,local_1204,(int)pcVar2 - (int)(local_1204 + 1),&local_1228,(LPOVERLAPPED)0x0);
      FUN_0046b680(0xffffffff);
      FUN_0044fa70();
      _sprintf(local_1204,"%d/%d/%d (%02d:%02d)\t",(uint)local_1222,(uint)local_121e,
               (uint)local_1224,(uint)local_121c);
      pcVar2 = local_1204;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      nNumberOfBytesToWrite = (int)pcVar2 - (int)(local_1204 + 1);
    }
    WriteFile(hFile,local_1204,nNumberOfBytesToWrite,&local_1228,(LPOVERLAPPED)0x0);
    _sprintf(local_1204,"%s\t");
    pcVar2 = local_1204;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,local_1204,(int)pcVar2 - (int)(local_1204 + 1),&local_1228,(LPOVERLAPPED)0x0);
    piVar4 = (int *)(**(code **)(*param_3 + 0x170))();
    (**(code **)(*piVar4 + 0xd4))();
    _sprintf(local_1204,"%s\t");
    pcVar2 = local_1204;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,local_1204,(int)pcVar2 - (int)(local_1204 + 1),&local_1228,(LPOVERLAPPED)0x0);
    piVar4 = (int *)FUN_006ecc80();
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') {
      FUN_004c9aa0();
      uVar5 = FUN_004c9a80();
      uVar5 = (**(code **)(*piVar4 + 0xd4))(uVar5);
      _sprintf(local_1204,"%s (%d,%d)\t",uVar5);
    }
    else {
      (**(code **)(*piVar4 + 0xd4))();
      _sprintf(local_1204,"%s\t");
    }
    pcVar2 = local_1204;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,local_1204,(int)pcVar2 - (int)(local_1204 + 1),&local_1228,(LPOVERLAPPED)0x0);
    pfVar6 = (float *)(**(code **)(*param_3 + 0x174))();
    _sprintf(local_1204,"%.0f\t",(double)*pfVar6);
    pcVar2 = local_1204;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,local_1204,(int)pcVar2 - (int)(local_1204 + 1),&local_1228,(LPOVERLAPPED)0x0);
    iVar3 = (**(code **)(*param_3 + 0x174))();
    _sprintf(local_1204,"%.0f\t",(double)*(float *)(iVar3 + 4));
    pcVar2 = local_1204;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,local_1204,(int)pcVar2 - (int)(local_1204 + 1),&local_1228,(LPOVERLAPPED)0x0);
    iVar3 = (**(code **)(*param_3 + 0x174))();
    _sprintf(local_1204,"%.0f\t",(double)*(float *)(iVar3 + 8));
    pcVar2 = local_1204;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,local_1204,(int)pcVar2 - (int)(local_1204 + 1),&local_1228,(LPOVERLAPPED)0x0);
    _sprintf(local_1204,"\"%s\"\t");
    pcVar2 = local_1204;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,local_1204,(int)pcVar2 - (int)(local_1204 + 1),&local_1228,(LPOVERLAPPED)0x0);
    _sprintf(local_1204,"\r\n");
    pcVar2 = local_1204;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,local_1204,(int)pcVar2 - (int)(local_1204 + 1),&local_1228,(LPOVERLAPPED)0x0);
    CloseHandle(hFile);
    FUN_00579b60();
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_0050a8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  int local_8;
  undefined4 local_4;
  
  local_8 = -1;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  if (local_8 != -1) {
    switch(local_8) {
    case 0:
      pcVar3 = "Actor";
      break;
    case 1:
      pcVar3 = "Marker";
      break;
    case 2:
      pcVar3 = "Land Quad";
      break;
    case 3:
      pcVar3 = "Water Quad";
      break;
    case 4:
      pcVar3 = "Static Quad";
      break;
    case 5:
      pcVar3 = "Active Quad";
      break;
    default:
      FUN_00579b60("Invalid node index. (0-5).");
      return 1;
    }
    bVar4 = (_DAT_00b35c00 & 1 << ((byte)local_8 & 0x1f)) != 0;
    local_4 = CONCAT31(local_4._1_3_,bVar4);
    FUN_00442a30(local_8,local_4,0);
    pcVar2 = "DISPLAYED";
    if (!bVar4) {
      pcVar2 = "CULLED";
    }
    FUN_00579b60("Cell %s nodes now %s.",pcVar3,pcVar2);
    return 1;
  }
  return 1;
}



undefined1
FUN_0050ab80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  *param_7 = 0;
  iVar2 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (iVar2 != 0) {
    iVar2 = FUN_005e02e0(1);
    if ((*(int *)(iVar2 + 0x40) == 0) && (*(int *)(iVar2 + 0x3c) == 0)) {
      iVar2 = FUN_005e02e0(0);
    }
    if ((iVar2 != 0) && (local_8 != 0)) {
      FUN_004675e0(local_8,local_4);
    }
  }
  return 1;
}



undefined1
FUN_0050ac40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  *param_7 = 0;
  iVar2 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (iVar2 != 0) {
    iVar3 = FUN_005e02e0(1);
    if ((*(int *)(iVar3 + 0x40) == 0) && (*(int *)(iVar3 + 0x3c) == 0)) {
      iVar3 = FUN_005e02e0(0);
    }
    if ((iVar3 != 0) && (local_8 != 0)) {
      FUN_00467670(local_8,local_4,iVar2 == DAT_00b333c4);
    }
  }
  return 1;
}



undefined1
FUN_0050ae10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  piVar2 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b05940,0);
  piVar3 = (int *)FUN_009832e6(local_8,0,&PTR_PTR_00b03070,&PTR_PTR_00b05940,0);
  if ((((piVar2 != (int *)0x0) && (piVar3 != (int *)0x0)) && (((uint)piVar2[2] >> 0xb & 1) == 0)) &&
     (((uint)piVar3[2] >> 0xb & 1) == 0)) {
    iVar4 = (**(code **)(*piVar2 + 0x18c))();
    if (iVar4 != 9) {
      uVar8 = local_4;
      cVar1 = (**(code **)(*piVar2 + 0x2f4))(local_8,0,local_4);
      if (((cVar1 != '\0') && (piVar3 != DAT_00b333c4)) && (piVar2 != piVar3)) {
        if (*(int *)(piVar3[0x16] + 8) != 0) {
          cVar1 = FUN_005660a0();
          if (cVar1 == '\0') {
            piVar2 = (int *)piVar3[0x16];
            uVar5 = (**(code **)(*piVar2 + 0x390))();
            uVar6 = (**(code **)(*piVar2 + 0xc0))(uVar5);
            uVar7 = (**(code **)(*piVar2 + 0xcc))(uVar6);
            FUN_004268b0(piVar2[2],piVar2[1],uVar7,uVar6,uVar5);
          }
        }
        uVar7 = 1;
        uVar6 = 0;
        uVar5 = FUN_005e0380(0,1);
        FUN_005f1590(uVar5,uVar6,uVar7);
        (**(code **)(*(int *)piVar3[0x16] + 0x188))(uVar8,1);
      }
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0050b0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar4;
  undefined3 uVar3;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = 0.0;
  local_14 = 0.0;
  local_8 = 0;
  local_4 = 0;
  local_10 = 0;
  local_c = 0;
  uVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_18,&local_14,
                       &local_8,&local_4,&local_10,&local_c);
  fVar1 = local_18;
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar4 = (undefined2)((uint)uVar2 >> 0x10);
  if (1.0 < local_18) {
    local_18 = 1.0;
  }
  uVar2 = CONCAT22(uVar4,(ushort)(local_18 < 0.0) << 8 | (ushort)NAN(local_18) << 10 |
                         (ushort)(local_18 == 0.0) << 0xe);
  if (local_18 < 0.0) {
    fVar1 = 0.0;
  }
  else {
    uVar2 = CONCAT22(uVar4,(ushort)(1.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 1.0) << 0xe);
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  _DAT_00b42ea8 = local_8;
  _DAT_00b42f44 = local_4;
  uVar3 = (undefined3)((uint)uVar2 >> 8);
  if (DAT_00b43074 == '\0') {
    _DAT_00b43200 = fVar1;
    _DAT_00b43208 = ABS(local_14);
    _DAT_00b43210 = local_10;
    _DAT_00b43218 = local_c;
    return CONCAT31(uVar3,1);
  }
  _DAT_00b43204 = fVar1;
  _DAT_00b4320c = ABS(local_14);
  _DAT_00b43214 = local_10;
  _DAT_00b4321c = local_c;
  return CONCAT31(uVar3,1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0050b210(void)

{
  float fVar1;
  undefined4 uVar2;
  float local_48;
  float local_44;
  
  FUN_00579b60();
  FUN_00579b60("SISG:");
  if (DAT_00b43074 == '\0') {
    local_48 = _DAT_00b431f8;
    uVar2 = DAT_00b43220;
  }
  else {
    local_48 = _DAT_00b431fc;
    uVar2 = DAT_00b43224;
  }
  FUN_00579b60("    iNumBlurpasses: %d fBlurRadius: %f",uVar2,(double)local_48);
  if (DAT_00b43074 == '\0') {
    local_48 = _DAT_00b431f0;
    fVar1 = _DAT_00b431e8;
  }
  else {
    local_48 = _DAT_00b431f4;
    fVar1 = _DAT_00b431ec;
  }
  FUN_00579b60("    fBrightClamp: %f fBrightScale: %f",(double)(fVar1 / _DAT_00b2c7a4),
               (double)(_DAT_00b2c7a4 * local_48));
  FUN_00579b60(&DAT_00a4ca6c);
  FUN_00579b60("    fSunlightDimmer: %f Lum Ramp: %f",(double)_DAT_00b42f4c,(double)_DAT_00b2c73c);
  FUN_00579b60(&DAT_00a4ca3c);
  if (DAT_00b43074 == '\0') {
    local_44 = _DAT_00b43208;
    fVar1 = _DAT_00b43200;
  }
  else {
    local_44 = _DAT_00b4320c;
    fVar1 = _DAT_00b43204;
  }
  FUN_00579b60("    fEyeAdaptSpeed: %f fEmissiveHDRMult: %f",(double)fVar1,(double)local_44);
  FUN_00579b60("    fTreeDimmer: %f fGrassDimmer: %f",(double)_DAT_00b42ea8,(double)_DAT_00b42f44);
  if (DAT_00b43074 == '\0') {
    local_44 = _DAT_00b43218;
    fVar1 = _DAT_00b43210;
  }
  else {
    local_44 = _DAT_00b4321c;
    fVar1 = _DAT_00b43214;
  }
  FUN_00579b60("    fUpperLUMClamp: %f fTargetLUM: %f",(double)fVar1,(double)local_44);
  return 1;
}



undefined1
FUN_0050b3e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  float10 fVar2;
  int local_10;
  undefined4 local_c;
  longlong local_8;
  
  local_10 = 0;
  local_c = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_10,&local_c);
  if (cVar1 == '\0') {
    return 0;
  }
  fVar2 = (float10)FUN_00507010(0x4a800000,local_10 + 1);
  local_8 = (longlong)ROUND(fVar2);
  *param_7 = 0;
  if ((param_3 != 0) && (param_6 != 0)) {
    cVar1 = FUN_004fb5f0(local_c,(undefined4)local_8);
    if (cVar1 != '\0') {
      *param_7 = 0x3ff0000000000000;
    }
  }
  return 1;
}



undefined1
FUN_0050bb70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int *local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b6df8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_3c = (int *)0x0;
  local_38 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_3c,&local_38,
                       uVar3);
  if (cVar1 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (local_38 == 0) {
    *(byte *)(local_3c + 0xd) = *(byte *)(local_3c + 0xd) & 0xf7;
    (**(code **)(*local_3c + 0x40))(4);
  }
  else {
    *(byte *)(local_3c + 0xd) = *(byte *)(local_3c + 0xd) | 8;
    (**(code **)(*local_3c + 0x40))();
    iVar4 = FUN_006ecc80();
    if (iVar4 != 0) {
      iVar4 = FUN_004ca970();
      if (iVar4 == unaff_ESI) {
        FUN_00675d50(DAT_00b333c4,0);
        uVar2 = FUN_0067f0a0();
        local_38 = CONCAT31(local_38._1_3_,uVar2);
        FUN_0067f0b0(1);
        uVar2 = FUN_0067f0c0();
        uStack_34 = CONCAT31(uStack_34._1_3_,uVar2);
        FUN_0067f0d0(1);
        uVar5 = FUN_0046b250(0x3c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
        uVar5 = FUN_009832e6(uVar5);
        FUN_0068a9f0();
        uStack_30 = 0x7f7fffff;
        uStack_2c = 0x7f7fffff;
        uStack_28 = 0x7f7fffff;
        puStack_8 = (undefined1 *)0x0;
        FUN_0068b030(DAT_00b333c4,&uStack_30,0,uVar5);
        FUN_0067f0b0(local_38);
        FUN_0067f0d0(uStack_34);
        iVar4 = FUN_0068a890(0,0);
        if (iVar4 != 0) {
          iVar4 = FUN_004d7630();
          if (iVar4 != 0) {
            iVar4 = FUN_0042b410();
            if (iVar4 != 0) {
              piVar6 = (int *)FUN_0042b410();
              uVar5 = (**(code **)(*piVar6 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05480,0);
              iVar4 = FUN_009832e6(uVar5);
              if (iVar4 != 0) {
                FUN_004b7b40(piVar6);
              }
            }
          }
        }
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_0068aa10();
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined1
FUN_0050bd80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int *local_8;
  int local_4;
  
  local_8 = (int *)0x0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if (local_4 != 0) {
    *(byte *)(local_8 + 0xd) = *(byte *)(local_8 + 0xd) | 0x40;
    (**(code **)(*local_8 + 0x40))();
    return 1;
  }
  *(byte *)(local_8 + 0xd) = *(byte *)(local_8 + 0xd) & 0xbf;
  (**(code **)(*local_8 + 0x40))(4);
  return 1;
}



undefined1
FUN_0050c430(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 unaff_ESI;
  int local_4;
  
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_3 != (int *)0x0) {
    FUN_004d8260(8);
    if (local_4 == 0) {
      FUN_004d82e0(8);
    }
    else {
      FUN_004d8270(8);
    }
    cVar1 = FUN_004d8260(8);
    (**(code **)(*param_3 + 0x44))(0x1000000);
    FUN_004212f0();
    FUN_00420ff0();
    if ((char)((uint)unaff_ESI >> 0x18) != cVar1) {
      uVar3 = FUN_004533f0(param_3,0);
      if ((uVar3 & 0x40000) == 0) {
        pcVar4 = *(code **)(*param_3 + 0x40);
      }
      else {
        pcVar4 = *(code **)(*param_3 + 0x44);
      }
      (*pcVar4)(0x40000);
    }
    (**(code **)(*param_3 + 0x44))(0x80000);
    cVar2 = FUN_004d6e60(0);
    if (cVar2 == '\0') {
      if (cVar1 == '\0') goto LAB_0050c530;
    }
    else if (cVar1 != '\0') goto LAB_0050c530;
    (**(code **)(*param_3 + 0x40))(0x80000);
  }
LAB_0050c530:
  if (DAT_00b361ac != '\0') {
    FUN_00579b60("SetDoorDefaultOpen >> %0.2f",local_4);
  }
  return 1;
}



undefined1
FUN_0050c790(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((((param_3 != DAT_00b333c4) && (param_3 != 0)) &&
      (piVar2 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0),
      piVar2 != (int *)0x0)) && (piVar2[0x16] != 0)) {
    iVar3 = (**(code **)(*piVar2 + 0x330))();
    if (iVar3 == 0) {
      (**(code **)(*piVar2 + 0x318))(0,0,0,local_8,local_4);
    }
    else {
      uVar5 = 0;
      uVar4 = FUN_006135f0(0);
      FUN_006210d0(uVar4,uVar5);
      uVar4 = (**(code **)(*(int *)piVar2[0x16] + 0x184))(0,&PTR_PTR_00b03e00,&PTR_PTR_00b0a048,0);
      iVar3 = FUN_009832e6(uVar4);
      if (iVar3 != 0) {
        if (local_4 != 0) {
          FUN_005697f0(local_4);
          *(undefined1 *)(iVar3 + 0x3c) = 0;
          return 1;
        }
        if (local_8 != 0) {
          FUN_00569750(1);
          FUN_00569810(local_8);
          *(undefined1 *)(iVar3 + 0x3c) = 0;
          return 1;
        }
      }
    }
  }
  return 1;
}



undefined1
FUN_0050c8d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((param_3 != DAT_00b333c4) && (param_3 != 0)) {
    piVar2 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    if ((piVar2 != (int *)0x0) && (piVar2[0x16] != 0)) {
      iVar3 = (**(code **)(*piVar2 + 0x330))();
      if (iVar3 != 0) {
        FUN_0061d5b0(local_4,(float)local_8);
      }
    }
  }
  return 1;
}



undefined1
FUN_0050cd30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = -1;
  local_8 = 0xffffffff;
  piVar4 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (piVar4 != (int *)0x0) {
    local_4 = FUN_005e02e0(0);
    cVar3 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_14,&local_10
                         ,&local_c,&local_8);
    if (cVar3 == '\0') {
      return 0;
    }
    iVar6 = 0;
    iVar7 = 0;
    if (piVar4 == DAT_00b333c4) {
      iVar6 = FUN_0065d4a0();
      iVar7 = FUN_0065d4c0();
      FUN_00664700(0);
      FUN_00664850(0);
    }
    iVar2 = local_4;
    piVar8 = (int *)(local_4 + 0x24);
    FUN_00467270(local_14);
    if (piVar4 == DAT_00b333c4) {
      if (iVar6 != 0) {
        FUN_00664700(iVar6);
      }
      if (iVar7 != 0) {
        FUN_00664850(iVar7);
      }
    }
    if (local_14 != 0) {
      pcVar1 = *(code **)(*piVar8 + 0x50);
      *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 0x80;
      (*pcVar1)(0x10);
      (**(code **)(*piVar8 + 0x50))(0x10);
    }
    if (piVar4 != DAT_00b333c4) {
      if (local_10 != -1) {
        iVar6 = *piVar8;
        *(short *)(iVar2 + 0x34) = (short)local_10;
        (**(code **)(iVar6 + 0x50))(0x10);
        pcVar1 = *(code **)(*piVar8 + 0x50);
        *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 0x80;
        (*pcVar1)(0x10);
        (**(code **)(*piVar8 + 0x50))(0x10);
      }
      if (local_c != -1) {
        iVar6 = *piVar8;
        *(short *)(iVar2 + 0x36) = (short)local_c;
        (**(code **)(iVar6 + 0x50))(0x10);
        pcVar1 = *(code **)(*piVar8 + 0x50);
        *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 0x80;
        (*pcVar1)(0x10);
        (**(code **)(*piVar8 + 0x50))(0x10);
      }
      iVar6 = FUN_004d6d40();
      iVar7 = FUN_005e02e0(0);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + 0x44;
      }
      iVar7 = FUN_00485e00(piVar4,iVar7);
      if ((iVar6 != 0) && (iVar7 != 0)) {
        FUN_00486030(0);
        FUN_0048df80();
        FUN_00488420();
        uVar5 = local_8;
        iVar6 = FUN_009832e6(local_8,0,&PTR_PTR_00b03de4,&PTR_PTR_00b02fb4,0);
        iVar7 = FUN_009832e6(uVar5,0,&PTR_PTR_00b03de4,&PTR_PTR_00b0375c,0);
        if (iVar6 == 0) {
          if (iVar7 != 0) {
            FUN_0051e240(piVar4,1,1,1);
          }
        }
        else {
          FUN_005227a0(piVar4,1,1,0,1);
        }
      }
      cVar3 = FUN_004d7f80();
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*piVar4 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
        iVar6 = FUN_009832e6(uVar5);
        if (iVar6 != 0) {
          FUN_005222d0(0);
        }
      }
    }
  }
  return 1;
}



undefined1
FUN_0050d3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  uint local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  if (local_8 < 8) {
    iVar2 = FUN_005f1910(local_8);
    FUN_0065d1e0(local_8,iVar2 + local_4);
  }
  return 1;
}



undefined1
FUN_0050d740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  char cVar2;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8,&local_4);
  if (cVar2 == '\0') {
    return 0;
  }
  piVar1 = (int *)(DAT_00b333c4 + 0x658 + local_8 * 4);
  *piVar1 = *piVar1 + local_4;
  return 1;
}



undefined1
FUN_0050d7b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  int local_8;
  uint local_4;
  
  local_8 = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar3 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  uVar1 = local_4;
  if (iVar3 != 0) {
    bVar4 = local_8 != 0;
    local_4 = local_4 & 0xffffff00;
    if (bVar4) {
      local_4 = CONCAT31(SUB43(uVar1,1),1);
    }
    iVar3 = FUN_005e02e0(0);
    if (bVar4 == (bool)((byte)(*(uint *)(iVar3 + 0x28) >> 0xd) & 1)) {
      FUN_004209c0();
      return 1;
    }
    FUN_00420920(local_4);
  }
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_0050d8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_274 [32];
  float local_254;
  undefined4 local_250;
  undefined4 local_24c;
  char local_248 [516];
  uint local_44;
  
  local_44 = DAT_00b30aac ^ (uint)auStack_274;
  local_254 = 0.0;
  local_250 = param_6;
  local_24c = param_8;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,local_248);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = __stricmp(local_248,"velocity");
  if (iVar2 == 0) {
    if ((((0.0 <= local_254) && (local_254 < 100.0 != (local_254 == 100.0))) && (DAT_00b45fe0 != 0))
       && (local_254 != _DAT_00b45fc4)) {
      _DAT_00b45fc4 = local_254;
      FUN_007e1710();
      FUN_00579b60("set water velocity to %f",(double)local_254);
      DAT_00b3522b = 1;
      return 1;
    }
  }
  else {
    iVar2 = __stricmp(local_248,"direction");
    if (iVar2 == 0) {
      if (((0.0 <= local_254) && (local_254 <= 360.0)) &&
         ((DAT_00b45fe0 != 0 && (local_254 != _DAT_00b45fc0)))) {
        _DAT_00b45fc0 = local_254;
        FUN_007e1710();
        uVar3 = FUN_009828c0();
        FUN_00579b60("set water direction to %d",uVar3);
        DAT_00b3522b = 1;
        return 1;
      }
    }
    else {
      iVar2 = __stricmp(local_248,"amplitude");
      if (iVar2 == 0) {
        if (((0.0 <= local_254) && (local_254 < 1000.0 != (local_254 == 1000.0))) &&
           ((DAT_00b45fe0 != 0 && (local_254 != _DAT_00b45fd8)))) {
          _DAT_00b45fd8 = local_254;
          FUN_007e1710();
          FUN_00579b60("set water amplitude to %f",(double)local_254);
          DAT_00b3522b = 1;
          return 1;
        }
      }
      else {
        iVar2 = __stricmp(local_248,"frequency");
        if (iVar2 == 0) {
          if ((((0.0 <= local_254) && (local_254 <= 10.0)) && (DAT_00b45fe0 != 0)) &&
             (local_254 != _DAT_00b45fd4)) {
            _DAT_00b45fd4 = local_254;
            FUN_007e1710();
            FUN_00579b60("set water frequency to %f",(double)local_254);
            DAT_00b3522b = 1;
            return 1;
          }
        }
        else {
          iVar2 = __stricmp(local_248,"reflectivity");
          if (iVar2 == 0) {
            if ((0.0 <= local_254) && (local_254 <= 1.0)) {
              _DAT_00b45e48 = local_254;
              FUN_00579b60("set water reflectivity amount to %f",(double)local_254);
              DAT_00b3522b = 1;
              return 1;
            }
          }
          else {
            iVar2 = __stricmp(local_248,"fresnel");
            if (iVar2 == 0) {
              if ((0.0 <= local_254) && (local_254 <= 1.0)) {
                _DAT_00b45dc4 = local_254;
                FUN_00579b60("set fresnel term to %f",(double)local_254);
                DAT_00b3522b = 1;
                return 1;
              }
            }
            else {
              iVar2 = __stricmp(local_248,"opacity");
              if (iVar2 == 0) {
                if ((0.0 <= local_254) && (local_254 <= 100.0)) {
                  _DAT_00b45e4c = local_254 / 100.0;
                  uVar3 = FUN_009828c0();
                  FUN_00579b60("set water opacity to %d",uVar3);
                  DAT_00b3522b = 1;
                  return 1;
                }
              }
              else {
                iVar2 = __stricmp(local_248,"blend");
                if (iVar2 == 0) {
                  if ((0.0 <= local_254) && (local_254 <= 100.0)) {
                    _DAT_00b45e50 = local_254 / 100.0;
                  }
                  uVar3 = FUN_009828c0();
                  FUN_00579b60("set detail texture blend to %d",uVar3);
                  DAT_00b3522b = 1;
                  return 1;
                }
                iVar2 = __stricmp(local_248,"scrollx");
                if (iVar2 == 0) {
                  if ((0.0 <= local_254) && (local_254 <= 1.0)) {
                    _DAT_00b45e54 = local_254;
                    FUN_00579b60("set scroll X speed to %f",(double)local_254);
                    DAT_00b3522b = 1;
                    return 1;
                  }
                }
                else {
                  iVar2 = __stricmp(local_248,"scrolly");
                  if (iVar2 == 0) {
                    if ((0.0 <= local_254) && (local_254 <= 1.0)) {
                      _DAT_00b45e58 = local_254;
                      FUN_00579b60("set scroll Y speed to %f",(double)local_254);
                      DAT_00b3522b = 1;
                      return 1;
                    }
                  }
                  else {
                    iVar2 = __stricmp(local_248,"help");
                    if (iVar2 == 0) {
                      FUN_00579b60();
                      FUN_00579b60("direction ( 0 - 360 )");
                      FUN_00579b60("amplitude ( 0.0 - 1000.0 )");
                      FUN_00579b60("frequency ( 0.0 - 10.0 )");
                      FUN_00579b60("reflectivity ( 0.0 - 1.0 )");
                      FUN_00579b60("fresnel ( 0.0 - 1.0 )");
                      FUN_00579b60("opacity ( 0 - 100 )");
                      FUN_00579b60("blend ( 0 - 100 )");
                      FUN_00579b60("scrollx ( 0.0 - 1.0 )");
                      FUN_00579b60("scrolly ( 0.0 - 1.0 )");
                      return 1;
                    }
                    iVar2 = __stricmp(local_248,(char *)&PTR_LAB_00a4b7e4);
                    if (iVar2 == 0) {
                      DAT_00b3522b = 0;
                      return 1;
                    }
                    iVar2 = __stricmp(local_248,"displaceforce");
                    if (iVar2 == 0) {
                      if ((0.0 <= local_254) && (local_254 <= 1.0)) {
                        _DAT_00b45f68 = local_254;
                        DAT_00b3522b = 1;
                        return 1;
                      }
                    }
                    else {
                      iVar2 = __stricmp(local_248,"displacevelocity");
                      if (iVar2 == 0) {
                        if ((0.0 <= local_254) && (local_254 <= 1.0)) {
                          _DAT_00b45f6c = local_254;
                          DAT_00b3522b = 1;
                          return 1;
                        }
                      }
                      else {
                        iVar2 = __stricmp(local_248,"displacefalloff");
                        if (iVar2 == 0) {
                          if ((0.0 <= local_254) && (local_254 <= 1.0)) {
                            _DAT_00b45f70 = local_254;
                            DAT_00b3522b = 1;
                            return 1;
                          }
                        }
                        else {
                          iVar2 = __stricmp(local_248,"displacedampener");
                          if (iVar2 == 0) {
                            if ((0.0 <= local_254) && (local_254 <= 20.0)) {
                              _DAT_00b45f40 = local_254;
                              DAT_00b3522b = 1;
                              return 1;
                            }
                          }
                          else {
                            iVar2 = __stricmp(local_248,"rainforce");
                            if (iVar2 == 0) {
                              if ((0.0 <= local_254) && (local_254 <= 1.0)) {
                                _DAT_00b45f58 = local_254;
                                DAT_00b3522b = 1;
                                return 1;
                              }
                            }
                            else {
                              iVar2 = __stricmp(local_248,"rainvelocity");
                              if (iVar2 == 0) {
                                if ((0.0 <= local_254) && (local_254 <= 1.0)) {
                                  _DAT_00b45f5c = local_254;
                                  DAT_00b3522b = 1;
                                  return 1;
                                }
                              }
                              else {
                                iVar2 = __stricmp(local_248,"rainfalloff");
                                if (iVar2 == 0) {
                                  if ((0.0 <= local_254) && (local_254 <= 1.0)) {
                                    _DAT_00b45f60 = local_254;
                                    DAT_00b3522b = 1;
                                    return 1;
                                  }
                                }
                                else {
                                  iVar2 = __stricmp(local_248,"rainsize");
                                  if (((iVar2 == 0) && (0.0 <= local_254)) && (local_254 <= 1.0)) {
                                    _DAT_00b45f64 = local_254;
                                    DAT_00b3522b = 1;
                                    return 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



undefined1
FUN_0050e340(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  float unaff_EDI;
  float10 fVar5;
  float fVar6;
  float local_c [3];
  
  local_c[0] = 0.0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,local_c);
  if (cVar2 != '\0') {
    if (param_3 == (int *)0x0) {
      param_3 = DAT_00b333c4;
    }
    if ((10.0 <= local_c[0]) || (0.0 < local_c[0])) {
      if (10.0 <= local_c[0]) {
        local_c[0] = 10.0;
      }
    }
    else {
      local_c[0] = 0.0;
    }
    piVar3 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    if ((piVar3 != (int *)0x0) && ((int *)piVar3[0x16] != (int *)0x0)) {
      fVar6 = local_c[0];
      (**(code **)(*(int *)piVar3[0x16] + 0x43c))();
      if ((DAT_00b42f3e != '\0') && ((DAT_00b42e84 != '\0' && (1 < DAT_00b42f48)))) {
        fVar5 = (float10)(**(code **)(*piVar3 + 0x288))();
        local_c[0] = (float)fVar5;
        fVar5 = (float10)(**(code **)(*piVar3 + 0x288))(0x2e);
        fVar5 = (float10)FUN_004ac790(0,(float)fVar5);
        fVar5 = (float10)FUN_004ac760(0x3f800000,(float)fVar5);
        if ((unaff_EDI <= 0.0) || (piVar3 != DAT_00b333c4)) {
          if ((float)fVar5 <= 0.0) {
            pcVar1 = *(code **)(*piVar3 + 0x270);
            if (fVar6 <= 0.0) {
              (*pcVar1)(0,0);
              FUN_005ee1b0();
            }
            else {
              (*pcVar1)(1,fVar6);
            }
          }
          else {
            (**(code **)(*piVar3 + 0x324))(0x3f800000);
            fVar5 = (float10)FUN_0041ba50(0,0x3f800000,1.0 - fVar6 / 100.0);
            fVar5 = (float10)FUN_0041ba60((float)fVar5);
            fVar5 = (float10)FUN_00410eb0((float)fVar5);
            (**(code **)(*piVar3 + 0x270))(1,(float)fVar5);
          }
        }
        else {
          (**(code **)(*piVar3 + 0x324))(0x3f800000);
          (**(code **)(*piVar3 + 0x270))(1,0x3f000000);
        }
      }
      if (DAT_00b361ac != '\0') {
        uVar4 = FUN_004da2a0((double)unaff_EDI);
        FUN_00579b60("%s refraction has been set to %f",uVar4);
      }
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_0050e6a0(void)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  LONG LVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_30;
  undefined4 *local_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6e38;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar10 = 0;
  bVar1 = false;
  if (DAT_00b42d44 == (undefined4 *)0x0) {
    uVar4 = FUN_007b8200(&local_2c,"Data\\Textures\\Menus\\Map\\local\\MapPaper01.dds",1,0,uVar3);
    local_4 = 0;
    FUN_0055e2a0(uVar4);
    puVar7 = local_2c;
    local_4 = 0xffffffff;
    if (local_2c != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(local_2c + 1);
      if ((LVar5 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
    }
    bVar1 = true;
  }
  if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
    uVar3 = DAT_00b06a2c;
    for (uVar10 = 0; uVar10 < uVar3; uVar10 = uVar10 + 1) {
      for (uVar11 = 0; uVar11 < uVar3; uVar11 = uVar11 + 1) {
        piVar6 = (int *)FUN_00482150(uVar10,uVar11);
        if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
          FUN_004d06c0(&local_2c);
          uVar2 = DAT_00b3f958;
          DAT_00b3f958 = 0;
          local_4 = 1;
          FUN_004d1130(local_2c);
          puVar7 = local_2c;
          local_4 = 0xffffffff;
          DAT_00b3f958 = uVar2;
          if (local_2c != (undefined4 *)0x0) {
            LVar5 = InterlockedDecrement(local_2c + 1);
            if ((LVar5 == 0) && (puVar7 != (undefined4 *)0x0)) {
              (**(code **)*puVar7)(1);
            }
          }
        }
        uVar3 = DAT_00b06a2c;
      }
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
    uStack_24 = *puVar7;
    uStack_20 = puVar7[1];
    uStack_1c = puVar7[2];
    for (; uVar10 < DAT_00b06a2c * DAT_00b06a2c; uVar10 = uVar10 + 1) {
      uVar3 = uVar10 / DAT_00b06a2c;
      uVar11 = uVar10 % DAT_00b06a2c;
      FUN_004cce20(&uStack_24,&fStack_18,1);
      local_2c = (undefined4 *)(int)ROUND(fStack_18);
      iStack_28 = (int)ROUND(fStack_14);
      iVar9 = ((iStack_28 + -0x800 >> 0xc) - (DAT_00b06a2c >> 1)) + uVar3;
      iVar8 = (((int)(local_2c + -0x200) >> 0xc) - (DAT_00b06a2c >> 1)) + uVar11;
      FUN_004d0c20(&puStack_30,iVar8,iVar9);
      uVar2 = DAT_00b3f958;
      DAT_00b3f958 = 0;
      local_4 = 2;
      FUN_004d1230(puStack_30,iVar8,iVar9);
      puVar7 = puStack_30;
      local_4 = 0xffffffff;
      DAT_00b3f958 = uVar2;
      if (puStack_30 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puStack_30 + 1);
        if ((LVar5 == 0) && (puVar7 != (undefined4 *)0x0)) {
          (**(code **)*puVar7)(1);
        }
      }
    }
  }
  puVar7 = DAT_00b42d44;
  if ((bVar1) && (DAT_00b42d44 != (undefined4 *)0x0)) {
    LVar5 = InterlockedDecrement(DAT_00b42d44 + 1);
    if ((LVar5 == 0) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    DAT_00b42d44 = (undefined4 *)0x0;
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined1
FUN_0050eab0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 extraout_ST0;
  int *local_c;
  undefined4 local_8 [2];
  
  local_c = (int *)0x0;
  local_8[0] = 0;
  cVar3 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_c,local_8);
  if (cVar3 == '\0') {
    return 0;
  }
  cVar3 = (**(code **)(*param_3 + 400))();
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*local_c + 400))();
    piVar2 = local_c;
    if (cVar3 != '\0') {
      fVar7 = (float10)FUN_005f4880(local_8[0]);
      uVar4 = (**(code **)(*piVar2 + 0x284))(7,(float)fVar7);
      uVar4 = (**(code **)(*piVar2 + 0x284))(3,uVar4);
      FUN_00547690(uVar4);
      local_c = (int *)(float)extraout_ST0;
      piVar1 = (int *)piVar2[0x16];
      if (piVar1 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar1 + 8))();
        if (iVar5 == 0) {
          iVar5 = *piVar1;
          puVar6 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
          (**(code **)(iVar5 + 0x2f0))(piVar2,*puVar6,puVar6[1],puVar6[2],local_c);
        }
      }
    }
  }
  return 1;
}



void FUN_0050ebd0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6e68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4c9b4;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a4bfd4;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0050ed50(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [9];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6e9b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff98;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0xdc,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0070b780(0);
  }
  local_4 = 0xffffffff;
  uVar4 = FUN_004e70b0();
  FUN_00405680(uVar4);
  FUN_006ecc80();
  cVar1 = FUN_004c97f0();
  if (cVar1 == '\0') {
    uVar2 = DAT_00b06a2c;
    for (uVar9 = 0; uVar9 < uVar2; uVar9 = uVar9 + 1) {
      for (uVar10 = 0; uVar10 < uVar2; uVar10 = uVar10 + 1) {
        piVar5 = (int *)FUN_00482150(uVar9,uVar10);
        if ((*piVar5 != 0) && (piVar5 = (int *)FUN_004cced0(), piVar5 != (int *)0x0)) {
          iVar6 = FUN_004c9a80();
          iVar7 = FUN_004c9aa0();
          iVar8 = (**(code **)(*DAT_00b333c4 + 0x174))();
          uStack_34 = *(undefined4 *)(iVar8 + 8);
          fStack_3c = (float)(iVar6 << 0xc);
          fStack_38 = (float)(iVar7 << 0xc);
          (**(code **)(*piVar5 + 4))(iVar3,&fStack_3c,1);
        }
        uVar2 = DAT_00b06a2c;
      }
    }
  }
  else {
    piVar5 = (int *)FUN_004cced0();
    if (piVar5 != (int *)0x0) {
      iVar6 = (**(code **)(*DAT_00b333c4 + 0x174))();
      uStack_40 = *(undefined4 *)(iVar6 + 8);
      uStack_48 = 0;
      uStack_44 = 0;
      (**(code **)(*piVar5 + 4))(iVar3,&uStack_48,1);
      fVar13 = (float10)FUN_004cce00();
      if ((float)(fVar13 * (float10)-1.0) != 0.0) {
        puVar11 = &DAT_00b26dc4;
        puVar12 = auStack_30;
        for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        FUN_0070fdd0((float)(fVar13 * (float10)-1.0));
        puVar11 = auStack_30;
        puVar12 = (undefined4 *)(iVar3 + 0x30);
        for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
      }
    }
  }
  FUN_00707370(0,1);
  FUN_00707610();
  FUN_00440e60(iVar3,0x41f00000);
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0050f8eb) */
/* WARNING: Removing unreachable block (ram,0x0050f8f9) */

undefined1
FUN_0050ef90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  LONG LVar10;
  float *pfVar11;
  undefined4 uVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  short sVar17;
  int iVar18;
  undefined4 *puVar19;
  int *unaff_FS_OFFSET;
  float10 fVar20;
  undefined4 uVar21;
  int local_128;
  float local_124;
  undefined4 *puStack_120;
  float fStack_11c;
  int iStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint uStack_108;
  int *local_104;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  undefined4 *puStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float *pfStack_b4;
  undefined4 *puStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  float fStack_80;
  int iStack_7c;
  int iStack_78;
  float *pfStack_74;
  int iStack_70;
  undefined4 auStack_6c [9];
  float *pfStack_48;
  uint uStack_44;
  float *pfStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  float *pfStack_24;
  undefined4 *puStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6f05;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xfffffec8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_128 = 0;
  cVar4 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_128,uVar6);
  uVar5 = 0;
  if (cVar4 != '\0') {
    local_124 = (float)FUN_00401f00(0xdc);
    local_4 = 0;
    if (local_124 == 0.0) {
      local_104 = (int *)0x0;
    }
    else {
      local_104 = (int *)FUN_0070b780(0);
    }
    piVar9 = local_104;
    local_4 = 0xffffffff;
    pfVar7 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
    uVar6 = DAT_00b06a2c;
    fStack_114 = *pfVar7;
    fStack_110 = pfVar7[1];
    iVar18 = DAT_00b06a2c * DAT_00b06a2c;
    puStack_120 = (undefined4 *)(DAT_00b06a2c << 6);
    fStack_10c = pfVar7[2] + 10.0;
    uStack_44 = DAT_00b06a2c;
    local_124 = (float)iVar18;
    fVar20 = (float10)FUN_00411f00();
    fStack_10 = (float)fVar20;
    uStack_108 = 0;
    if (0 < iVar18) {
      fStack_a4 = 0.0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0x3f800000;
      uStack_a0 = (double)(int)puStack_120 * 0.5;
      uStack_f8 = 0;
      do {
        uStack_c8 = uStack_108 / DAT_00b06a2c;
        uVar14 = uStack_108 % DAT_00b06a2c;
        puStack_c4 = (undefined4 *)0x0;
        fStack_ec = DAT_00b3f9b0;
        local_4 = 1;
        fStack_f4 = DAT_00b3f9a8;
        fStack_f0 = DAT_00b3f9ac;
        uStack_e8 = uVar14;
        cVar4 = FUN_004d8b90();
        iVar18 = (int)uVar6 >> 1;
        if (cVar4 == '\0') {
          iVar8 = FUN_004d6670();
          iStack_70 = (int)ROUND(fStack_114);
          iStack_78 = (int)ROUND(fStack_110);
          iVar15 = ((iStack_70 >> 0xc) - iVar18) + uVar14;
          iVar18 = ((iStack_78 >> 0xc) - iVar18) + uStack_c8;
          fStack_f4 = (float)(iVar15 * 0x1000);
          puStack_120 = (undefined4 *)(iVar18 * 0x1000);
          fStack_f0 = (float)(int)puStack_120;
          uStack_14 = 0;
          fStack_ec = 0.0;
          fStack_1c = fStack_f4;
          fStack_18 = fStack_f0;
          if ((iVar8 != 0) && (iVar18 = FUN_004efe80(iVar15,iVar18), iVar18 != 0)) {
            FUN_004cced0();
            piVar9 = (int *)FUN_004d41a0(&puStack_20);
            puVar16 = (undefined4 *)*piVar9;
            if (puVar16 != (undefined4 *)0x0) {
              puStack_c4 = puVar16;
              InterlockedIncrement(puVar16 + 1);
            }
            puVar16 = puStack_20;
            goto joined_r0x0050f35c;
          }
        }
        else {
          iVar8 = FUN_006ecc80();
          if (iVar8 != 0) {
            fStack_e0 = fStack_114;
            fStack_dc = fStack_110;
            fStack_d8 = fStack_10c;
            FUN_004cce20(&fStack_114,&fStack_e0,1);
            iStack_84 = (int)ROUND(fStack_e0);
            iStack_7c = (int)ROUND(fStack_dc);
            iVar8 = ((iStack_7c + -0x800 >> 0xc) - iVar18) + uStack_c8;
            iVar18 = ((iStack_84 + -0x800 >> 0xc) - iVar18) + uVar14;
            fStack_f4 = (float)(iVar18 * 0x1000 + 0x800);
            puStack_120 = (undefined4 *)(iVar8 * 0x1000 + 0x800);
            fStack_f0 = (float)(int)puStack_120;
            uStack_2c = 0;
            fStack_ec = 0.0;
            fStack_34 = fStack_f4;
            fStack_30 = fStack_f0;
            FUN_004ccee0(iVar18,iVar8,0);
            piVar9 = (int *)FUN_004d4250(&puStack_28,iVar18,iVar8);
            puVar16 = (undefined4 *)*piVar9;
            if (puVar16 != (undefined4 *)0x0) {
              puStack_c4 = puVar16;
              InterlockedIncrement(puVar16 + 1);
            }
            puVar16 = puStack_28;
joined_r0x0050f35c:
            local_4 = CONCAT31(local_4._1_3_,1);
            if (((puVar16 != (undefined4 *)0x0) &&
                (LVar10 = InterlockedDecrement(puVar16 + 1), LVar10 == 0)) &&
               (puVar16 != (undefined4 *)0x0)) {
              (**(code **)*puVar16)(1);
            }
          }
        }
        pfVar7 = (float *)FUN_00401f00(0xd8c);
        pfStack_40 = pfVar7;
        puStack_120 = (undefined4 *)FUN_00401f00(0xd8c);
        pfStack_74 = (float *)FUN_00401f00(0x908);
        pfStack_b4 = (float *)FUN_00401f00(0x1210);
        if (pfStack_b4 == (float *)0x0) {
          pfStack_b4 = (float *)0x0;
        }
        else {
          iVar18 = 0x120;
          pfVar11 = pfStack_b4 + 2;
          do {
            pfVar11[-2] = 0.0;
            iVar18 = iVar18 + -1;
            pfVar11[-1] = 0.0;
            *pfVar11 = 0.0;
            pfVar11[1] = 0.0;
            pfVar11 = pfVar11 + 4;
          } while (-1 < iVar18);
        }
        iVar18 = FUN_00401f00(0xc00);
        iStack_118 = 0;
        do {
          iVar8 = iStack_118;
          fStack_a8 = (float)iStack_118;
          iStack_118 = 0;
          fStack_a8 = fStack_a8 - 32.0;
          pfVar11 = pfVar7;
          do {
            fStack_ac = (float)iStack_118;
            iStack_118 = iStack_118 + 4;
            fStack_ac = fStack_ac - 32.0;
            *pfVar11 = fStack_ac;
            pfVar11[1] = fStack_a8;
            pfVar11[2] = fStack_a4;
            pfVar11 = pfVar11 + 3;
          } while (iStack_118 < 0x44);
          iStack_118 = iVar8 + 4;
          pfVar7 = pfVar7 + 0x33;
        } while (iStack_118 < 0x44);
        uStack_e4 = 0;
        pfVar7 = pfStack_b4;
        pfVar11 = pfStack_74;
        puVar16 = puStack_120;
        do {
          fStack_80 = (float)(int)uStack_e4;
          pfStack_24 = pfVar7 + 0x44;
          pfStack_48 = pfVar11 + 0x22;
          puStack_b0 = puVar16 + 0x33;
          iStack_118 = 0;
          fStack_38 = 1.0 - fStack_80 / 17.0;
          do {
            fStack_11c = (float)iStack_118;
            *puVar16 = uStack_c0;
            puVar16[1] = uStack_bc;
            fStack_3c = fStack_11c / 17.0;
            puVar16[2] = uStack_b8;
            pfVar11[1] = fStack_38;
            *pfVar11 = fStack_3c;
            if (local_128 == 0) {
              *pfVar7 = DAT_00b25ae0;
              pfVar7[1] = DAT_00b25ae4;
              pfVar7[2] = DAT_00b25ae8;
              pfVar7[3] = DAT_00b25aec;
            }
            else {
              fStack_d4 = fStack_10 * fStack_11c + fStack_f4;
              fStack_d0 = fStack_f0 + fStack_10 * fStack_80;
              fStack_cc = fStack_ec + 0.0;
              iVar8 = FUN_004d2d00(&fStack_d4);
              fStack_94 = (float)iVar8 * 0.25;
              *pfVar7 = fStack_94;
              uStack_88 = 0;
              pfVar7[1] = fStack_94;
              pfVar7[2] = fStack_94;
              pfVar7[3] = 0.0;
              fStack_90 = fStack_94;
              fStack_8c = fStack_94;
            }
            iStack_118 = iStack_118 + 1;
            puVar16 = puVar16 + 3;
            pfVar11 = pfVar11 + 2;
            pfVar7 = pfVar7 + 4;
          } while (iStack_118 < 0x11);
          uStack_e4 = uStack_e4 + 1;
          pfVar7 = pfStack_24;
          pfVar11 = pfStack_48;
          puVar16 = puStack_b0;
        } while ((int)uStack_e4 < 0x11);
        iVar8 = 0;
        uStack_e4 = 0;
        do {
          uVar6 = 0;
          fStack_11c = (float)(uStack_e4 & 0x80000001);
          if ((int)fStack_11c < 0) {
            fStack_11c = (float)(((int)fStack_11c - 1U | 0xfffffffe) + 1);
          }
          sVar2 = (short)uStack_e4 * 0x11;
          iVar15 = ((uStack_e4 & 0xffff) + 1) * 0x11;
          do {
            uVar14 = uVar6 & 0x80000001;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
            }
            sVar1 = (short)iVar15;
            sVar17 = (short)uVar6;
            if ((float)uVar14 == fStack_11c) {
              puStack_b0 = (undefined4 *)(iVar15 + 1 + (uVar6 & 0xffff));
              sVar13 = (short)puStack_b0;
              *(short *)(iVar18 + iVar8 * 2) = sVar13;
              *(short *)(iVar18 + (iVar8 + 1) * 2) = sVar1 + sVar17;
              sVar17 = sVar17 + sVar2;
              *(short *)(iVar18 + (iVar8 + 2) * 2) = sVar17;
              *(short *)(iVar18 + (iVar8 + 3) * 2) = sVar17;
              *(short *)(iVar18 + (iVar8 + 4) * 2) = sVar17 + 1;
            }
            else {
              sVar13 = sVar1 + sVar17;
              *(short *)(iVar18 + iVar8 * 2) = sVar13;
              sVar17 = sVar17 + sVar2;
              *(short *)(iVar18 + (iVar8 + 1) * 2) = sVar17;
              sVar17 = sVar17 + 1;
              *(short *)(iVar18 + (iVar8 + 2) * 2) = sVar17;
              *(short *)(iVar18 + (iVar8 + 3) * 2) = sVar17;
              *(short *)(iVar18 + (iVar8 + 4) * 2) = sVar13 + 1;
            }
            *(short *)(iVar18 + (iVar8 + 5) * 2) = sVar13;
            uVar6 = uVar6 + 1;
            iVar8 = iVar8 + 6;
          } while ((int)uVar6 < 0x10);
          uStack_e4 = uStack_e4 + 1;
        } while ((int)uStack_e4 < 0x10);
        fStack_11c = (float)FUN_00401f00(0xc0);
        local_4._0_1_ = 4;
        if (fStack_11c == 0.0) {
          iVar18 = 0;
        }
        else {
          iVar18 = FUN_007174b0(0x121,pfStack_40,puStack_120,pfStack_b4,pfStack_74,1,0,0x200,iVar18)
          ;
        }
        piVar9 = local_104;
        local_4._0_1_ = 1;
        (**(code **)(*local_104 + 0x84))(iVar18,1);
        puVar16 = puStack_c4;
        iVar8 = uStack_e8 << 6;
        uStack_e8 = uStack_c8 << 6;
        fStack_100 = ((float)iVar8 + 32.0) - (float)uStack_a0;
        *(float *)(iVar18 + 0x54) = fStack_100;
        fStack_fc = ((float)(int)uStack_e8 + 32.0) - (float)uStack_a0;
        *(float *)(iVar18 + 0x58) = fStack_fc;
        *(undefined4 *)(iVar18 + 0x5c) = uStack_f8;
        if (puStack_c4 != (undefined4 *)0x0) {
          uStack_e8 = FUN_00401f00(0x30);
          local_4._0_1_ = 5;
          if (uStack_e8 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = FUN_007043b0();
          }
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_004057b0(puVar16);
          FUN_00405870(0);
          *(ushort *)(iVar18 + 0x18) = *(ushort *)(iVar18 + 0x18) & 0xfff5 | 4;
          FUN_00405680(iVar18);
          LVar10 = InterlockedDecrement(puVar16 + 1);
          if (LVar10 == 0) {
            (**(code **)*puVar16)(1);
          }
        }
        local_4 = 0xffffffff;
        uStack_108 = uStack_108 + 1;
        uVar6 = uStack_44;
      } while ((int)uStack_108 < (int)local_124);
    }
    pfVar7 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
    fStack_e0 = *pfVar7;
    fStack_dc = pfVar7[1];
    fStack_d8 = pfVar7[2];
    cVar4 = FUN_004d8b90();
    if (cVar4 == '\0') {
      pfVar7 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
      local_124 = *pfVar7;
      uStack_108 = (uint)ROUND(local_124);
      iVar18 = (**(code **)(*DAT_00b333c4 + 0x174))();
      local_104 = (int *)(int)ROUND(*(float *)(iVar18 + 4));
      iVar18 = ((int)uStack_108 >> 0xc) * 0x1000 + 0x800;
      local_124 = (float)(((int)local_104 >> 0xc) * 0x1000 + 0x800);
    }
    else {
      uVar21 = 1;
      pfVar7 = &fStack_d4;
      uVar12 = (**(code **)(*DAT_00b333c4 + 0x174))(pfVar7,1);
      FUN_006ecc80(uVar12);
      FUN_004cce20(uVar12,pfVar7,uVar21);
      uStack_108 = (uint)ROUND(fStack_d4);
      local_104 = (int *)(int)ROUND(fStack_d0);
      iVar18 = (((int)(uStack_108 + -0x800) >> 0xc) + 1) * 0x1000;
      local_124 = (float)((((int)local_104 + -0x800 >> 0xc) + 1) * 0x1000);
      fStack_e0 = fStack_d4;
      fStack_dc = fStack_d0;
      fStack_d8 = fStack_cc;
    }
    uStack_a0._4_4_ = (float)(int)local_124;
    uStack_a0._0_4_ = (float)iVar18;
    uStack_98 = 0;
    fStack_f4 = (fStack_e0 - (float)uStack_a0) * 0.015625;
    fStack_f0 = (fStack_dc - uStack_a0._4_4_) * 0.015625;
    fStack_ec = 0.0;
    fStack_ac = 0.0;
    fStack_a8 = 1.5;
    fStack_a4 = 1.0;
    uStack_c0 = 0x3f000000;
    uStack_bc = 0xbf000000;
    fStack_100 = -0.5;
    fStack_fc = -0.5;
    uStack_b8 = 0x3f800000;
    uStack_f8 = 0x3f800000;
    fStack_94 = 1.0;
    fStack_90 = 0.0;
    fStack_8c = 0.0;
    uStack_88 = 0;
    iVar18 = FUN_0047eef0(0,0x3fc00000,0x3f800000,0x3f000000,0xbf000000,0x3f800000,0xbf000000,
                          0xbf000000,0x3f800000,&fStack_94);
    *(float *)(iVar18 + 0x54) = fStack_f4;
    *(float *)(iVar18 + 0x58) = fStack_f0;
    *(float *)(iVar18 + 0x5c) = fStack_ec;
    piVar3 = DAT_00b333c4;
    puVar16 = &DAT_00b26dc4;
    puVar19 = auStack_6c;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar19 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar19 = puVar19 + 1;
    }
    FUN_006ecc80();
    fVar20 = (float10)FUN_004cce00();
    local_124 = (float)(fVar20 + (float10)(float)piVar3[10]);
    FUN_0070fdd0(local_124);
    puVar16 = auStack_6c;
    puVar19 = (undefined4 *)(iVar18 + 0x30);
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar19 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar19 = puVar19 + 1;
    }
    (**(code **)(*piVar9 + 0x84))(iVar18,1);
    uVar12 = FUN_004e70b0();
    FUN_00405680(uVar12);
    piVar9[0x15] = (int)fStack_114;
    piVar9[0x16] = (int)fStack_110;
    piVar9[0x17] = (int)fStack_10c;
    FUN_00707370(0,1);
    FUN_00707610();
    FUN_00440e60(piVar9,0x41f00000);
    uVar5 = 1;
  }
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



undefined4 FUN_0050fd10(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b6f51;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b3339c;
  if (DAT_00b3339c != 0) {
    FUN_00494f30(uVar2);
    FUN_00401f20(iVar3);
  }
  DAT_00b34f9c = FUN_00494f90;
  if (param_3 == (int *)0x0) {
LAB_0050fec7:
    iVar3 = FUN_00401f00(0x20);
    uStack_4 = 2;
    if (iVar3 == 0) {
      DAT_00b3339c = 0;
    }
    else {
      DAT_00b3339c = FUN_00496cb0(*(undefined4 *)(DAT_00b33398 + 0xc),
                                  *(undefined4 *)(DAT_00b33398 + 8),DAT_00b333cc,
                                  "Oblivion World Scene Graph",0x80000000,0x80000000,800,600);
    }
    uStack_4 = 0xffffffff;
    FUN_00496c00(DAT_00b333d0,"Oblivion Interface Scene Graph");
    pcVar6 = "Oblivion Interface 3D Object Scene Graph";
    iVar3 = DAT_00b333d4;
  }
  else {
    iVar3 = (**(code **)(*param_3 + 0x154))();
    if (iVar3 == 0) goto LAB_0050fec7;
    uVar4 = FUN_004da2a0();
    if (param_3 != DAT_00b333c4) {
      iVar3 = FUN_00401f00(0x20);
      uStack_4 = 1;
      if (iVar3 == 0) {
        DAT_00b3339c = 0;
      }
      else {
        uVar1 = *(undefined4 *)(DAT_00b33398 + 8);
        uVar5 = *(undefined4 *)(DAT_00b33398 + 0xc);
        uVar11 = 600;
        uVar10 = 800;
        uVar9 = 0x80000000;
        uVar8 = 0x80000000;
        uVar7 = (**(code **)(*param_3 + 0x154))(uVar4,0x80000000,0x80000000,800,600);
        DAT_00b3339c = FUN_00496cb0(uVar5,uVar1,uVar7,uVar4,uVar8,uVar9,uVar10,uVar11);
      }
      goto LAB_0050ff50;
    }
    iVar3 = FUN_00401f00(0x20);
    uStack_4 = 0;
    if (iVar3 == 0) {
      DAT_00b3339c = 0;
    }
    else {
      pcVar6 = "Player 3rd Person";
      if ((char)DAT_00b333c4[0x162] == '\0') {
        pcVar6 = "Player 1st Person";
      }
      uVar4 = *(undefined4 *)(DAT_00b33398 + 8);
      uVar1 = *(undefined4 *)(DAT_00b33398 + 0xc);
      uVar10 = 600;
      uVar9 = 800;
      uVar8 = 0x80000000;
      uVar7 = 0x80000000;
      uVar5 = (**(code **)(*param_3 + 0x154))(pcVar6,0x80000000,0x80000000,800,600);
      DAT_00b3339c = FUN_00496cb0(uVar1,uVar4,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
    }
    uStack_4 = 0xffffffff;
    pcVar6 = "Player 1st Person";
    if ((char)DAT_00b333c4[0x162] == '\0') {
      pcVar6 = "Player 3rd Person";
    }
    uVar4 = FUN_00660110((char)DAT_00b333c4[0x162]);
    FUN_00496c00(uVar4,pcVar6);
    if (DAT_00b333c4[0x176] == 0) goto LAB_0050ff50;
    pcVar6 = "Player Inventory Menu";
    iVar3 = DAT_00b333c4[0x176];
  }
  FUN_00496c00(iVar3,pcVar6);
LAB_0050ff50:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined4 FUN_0050ff70(undefined4 param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  char *pcVar10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_3 == (int *)0x0) || (iVar4 = (**(code **)(*param_3 + 0x154))(uVar3), iVar4 == 0)) {
    pcVar10 = "Must supply a valid reference to show viewer string.";
  }
  else {
    piVar5 = (int *)(**(code **)(*param_3 + 0x154))();
    puVar6 = (undefined4 *)FUN_00401f00(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = &PTR__scalar_deleting_destructor__00a38fb4;
      *(undefined2 *)(puVar6 + 2) = 0;
      *(undefined2 *)((int)puVar6 + 0xe) = 1;
      *(undefined2 *)((int)puVar6 + 10) = 0;
      *(undefined2 *)(puVar6 + 3) = 0;
      puVar6[1] = 0;
    }
    uStack_4 = 0xffffffff;
    if (piVar5 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar5 + 8))();
      piVar9 = piVar5;
      if (iVar4 != 0) {
        uVar8 = (uint)*(ushort *)((int)piVar5 + 0xb6);
        uVar3 = 0;
        if (uVar8 == 0) goto LAB_00510040;
        piVar9 = (int *)0x0;
        do {
          if (piVar9 != (int *)0x0) goto LAB_0051004a;
          if (uVar3 < uVar8) {
            piVar9 = *(int **)(piVar5[0x2c] + uVar3 * 4);
          }
          else {
            piVar9 = (int *)0x0;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar8);
      }
      if (piVar9 != (int *)0x0) {
LAB_0051004a:
        (**(code **)(*piVar9 + 0x30))(puVar6);
        uVar3 = 0;
        if (*(short *)((int)puVar6 + 10) != 0) {
          do {
            FUN_00579b60(*(undefined4 *)(puVar6[1] + uVar3 * 4));
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(ushort *)((int)puVar6 + 10));
        }
        uVar2 = 0;
        if (*(short *)((int)puVar6 + 10) != 0) {
          do {
            uVar3 = (uint)uVar2;
            uVar2 = uVar2 + 1;
            *(undefined4 *)(puVar6[1] + uVar3 * 4) = 0;
          } while (uVar2 < *(ushort *)((int)puVar6 + 10));
        }
        *(undefined2 *)((int)puVar6 + 10) = 0;
        *(undefined2 *)(puVar6 + 3) = 0;
        piVar5 = (int *)piVar9[0x2a];
        if (piVar5 != (int *)0x0) {
          for (puVar7 = (undefined4 *)(**(code **)(*piVar5 + 4))(); puVar7 != (undefined4 *)0x0;
              puVar7 = (undefined4 *)puVar7[1]) {
            if (puVar7 == &DAT_00ba7d24) {
              bVar1 = 1;
              goto LAB_005100c3;
            }
          }
          bVar1 = 0;
LAB_005100c3:
          if ((-(uint)bVar1 & (uint)piVar5) != 0) {
            (**(code **)(**(int **)((-(uint)bVar1 & (uint)piVar5) + 0x10) + 0x30))(puVar6);
            if (*(short *)((int)puVar6 + 10) != 0) {
              uVar3 = 0;
              do {
                FUN_00579b60(*(undefined4 *)(puVar6[1] + uVar3 * 4));
                uVar3 = uVar3 + 1;
              } while (uVar3 < *(ushort *)((int)puVar6 + 10));
            }
            uVar2 = 0;
            if (*(short *)((int)puVar6 + 10) != 0) {
              do {
                uVar3 = (uint)uVar2;
                uVar2 = uVar2 + 1;
                *(undefined4 *)(puVar6[1] + uVar3 * 4) = 0;
              } while (uVar2 < *(ushort *)((int)puVar6 + 10));
            }
            *(undefined2 *)((int)puVar6 + 10) = 0;
            *(undefined2 *)(puVar6 + 3) = 0;
          }
        }
        (**(code **)*puVar6)(1);
        goto LAB_00510139;
      }
    }
LAB_00510040:
    pcVar10 = "Node with no children supplied as reference...";
  }
  FUN_00579b60(pcVar10);
LAB_00510139:
  *unaff_FS_OFFSET = local_c;
  return 1;
}


