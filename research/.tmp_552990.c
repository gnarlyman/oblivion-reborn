
void FaceGen_SilentSkipLoop_TESRace_unk12
               (int param_1,int param_2,int param_3,char param_4,float param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  int local_30;
  undefined1 local_24 [12];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bbd68;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_3 != 0) {
    if (param_1 == 0) {
      param_1 = param_2;
      if (param_2 != 0) {
LAB_005529d7:
        FaceGen_FallbackPopulator(param_1,param_3,uVar3);
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
    else {
      if (param_2 == 0) goto LAB_005529d7;
      iVar6 = 0;
      iVar5 = param_1 - param_3;
      do {
        piVar8 = (int *)(iVar6 * 0x30 + param_3);
        iVar7 = param_3 + 0x30;
        local_30 = 2;
        do {
          iVar1 = *(int *)(iVar5 + (int)piVar8);
          if ((iVar1 == 0) || (iVar2 = *(int *)(iVar5 + 4 + (int)piVar8), iVar2 == 0)) {
            *piVar8 = 0;
            piVar8[1] = 0;
            FUN_00527160(0,0);
          }
          else {
            *piVar8 = iVar1;
            piVar8[1] = iVar2;
            FUN_00527160(iVar1 * iVar2,0);
            if ((iVar6 == 1) && (param_4 != '\0')) {
              FUN_005520e0(iVar5 + iVar7);
              if (0.0 < param_5) {
                FUN_005511d0();
                fVar9 = (float10)FUN_00982c30();
                if (param_5 < (float)fVar9) {
                  FUN_00551d40(param_5 / (float)fVar9);
                }
              }
            }
            else {
              uVar4 = FUN_00552530(local_24,(int)piVar8 + (param_2 - param_1) + iVar5);
              local_4 = 0;
              FUN_005520e0(uVar4);
              local_4 = 0xffffffff;
              if (local_18 != 0) {
                FUN_00401f20(local_18);
              }
              local_18 = 0;
              local_14 = 0;
              local_10 = 0;
              if (0.0 < param_5) {
                FUN_005511d0();
                fVar9 = (float10)FUN_00982c30();
                if (param_5 < (float)fVar9) {
                  FUN_00551d40(param_5 / (float)fVar9);
                }
              }
            }
          }
          iVar7 = iVar7 + 0x18;
          piVar8 = piVar8 + 6;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}

