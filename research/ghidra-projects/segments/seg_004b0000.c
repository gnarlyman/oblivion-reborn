
void FUN_004b00b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2eb3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  local_4 = 0;
  FUN_0046cb80();
  local_4 = CONCAT31(local_4._1_3_,1);
  *in_ECX = &PTR_FUN_00a42dc4;
  in_ECX[9] = &PTR_LAB_00a42da8;
  *(undefined1 *)(in_ECX + 1) = 0x2b;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b0120(byte param_1)

{
  FUN_004affc0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b0140(void)

{
  FUN_0046b990();
  FUN_0046cff0();
  FUN_0046b9f0();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b0160(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_d;
  char local_9;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '+') {
    FUN_00451210(in_ECX);
    do {
      iVar3 = FUN_004510b0();
      if (iVar3 < 0x444c564d) {
        if (iVar3 == 0x444c564c) {
          local_d = local_d & 0xffffff00;
          FUN_00450c20(&local_d,0);
          FUN_0046cb10((local_d & 0x80) != 0);
          local_d = local_d & 0xffffff7f;
          FUN_0046caf0(local_d);
        }
        else if (iVar3 == 0x41544144) {
          local_9 = '\0';
          FUN_0046bda0(param_1,&local_9,1);
          FUN_0046cb30(local_9 != '\0');
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffffdc,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffdc);
        }
      }
      else if (iVar3 == 0x464c564c) {
        FUN_00450c20((int)in_ECX + 0x31,0);
      }
      else if (iVar3 == 0x4f4c564c) {
        local_1c = 0;
        local_18 = 0;
        local_14 = 1;
        FUN_00450c20(&local_1c,0xc);
        FUN_0046cbf0(local_1c,local_14,local_18);
      }
      cVar1 = FUN_0044fea0();
    } while (cVar1 != '\0');
    FUN_0046ab80(0);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004b02d0(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    FUN_0046d070(in_ECX);
    FUN_0046ab80(1);
  }
  return;
}



void FUN_004b0310(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b2e7f;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a42f1c;
  in_ECX[9] = &PTR_LAB_00a42f04;
  local_4 = 1;
  thunk_FUN_0046b170(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_0046cac0();
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b0400(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2eb3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  local_4 = 0;
  FUN_0046cb80();
  local_4 = CONCAT31(local_4._1_3_,1);
  *in_ECX = &PTR_FUN_00a42f1c;
  in_ECX[9] = &PTR_LAB_00a42f04;
  *(undefined1 *)(in_ECX + 1) = 0x40;
  FUN_0046ab80(1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b0480(byte param_1)

{
  FUN_004b0310();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b04a0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '@') {
    FUN_00451210(in_ECX);
    do {
      iVar3 = FUN_004510b0();
      if (iVar3 < 0x464c564d) {
        if (iVar3 == 0x464c564c) {
          FUN_00450c20((int)in_ECX + 0x31,0);
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffffe0,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffe0);
        }
        else if (iVar3 == 0x444c564c) {
          local_c = local_c & 0xffffff00;
          FUN_00450c20(&local_c,0);
          FUN_0046cb10((local_c & 0x80) != 0);
          local_c = local_c & 0xffffff7f;
          FUN_0046caf0(local_c);
        }
      }
      else if (iVar3 == 0x4f4c564c) {
        local_18 = 0;
        local_14 = 0;
        local_10 = 1;
        FUN_00450c20(&local_18,0xc);
        FUN_0046cbf0(local_18,local_10,local_14);
      }
      cVar1 = FUN_0044fea0();
    } while (cVar1 != '\0');
    FUN_0046ab80(0);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004b05e0(int param_1,uint param_2,undefined4 *param_3,short *param_4,undefined4 param_5)

{
  ushort *puVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  uint uVar8;
  uint uVar9;
  short sVar10;
  int *piVar11;
  int *local_8;
  int local_4;
  
  *param_3 = 0;
  *param_4 = 0;
  local_4 = in_ECX + 0x24;
  bVar3 = FUN_0046cae0();
  if ((bVar3 == 0) || (iVar5 = FUN_0047df80(0), (int)(uint)bVar3 <= iVar5 % 100)) {
    uVar8 = 0;
    piVar11 = (int *)(in_ECX + 0x28);
    iVar5 = 1;
    local_8 = (int *)0x0;
    if (piVar11 != (int *)0x0) {
      do {
        puVar1 = (ushort *)*piVar11;
        if (puVar1 == (ushort *)0x0) break;
        iVar6 = FUN_009832e6(*(undefined4 *)(puVar1 + 2),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03280,0);
        uVar9 = (uint)*puVar1;
        if ((param_2 & 0xffff) < uVar9) break;
        if (iVar6 != 0) {
          uVar7 = FUN_00415360();
          iVar6 = FUN_0041b7c0(uVar7);
          if (iVar6 != param_1) break;
        }
        if ((uVar8 < uVar9) && ((uVar8 == 0 || (cVar4 = FUN_0046cb00(), cVar4 == '\0')))) {
          iVar5 = 1;
          uVar8 = uVar9;
          local_8 = piVar11;
        }
        else {
          iVar5 = iVar5 + 1;
        }
        piVar11 = (int *)piVar11[1];
      } while (piVar11 != (int *)0x0);
      if (local_8 != (int *)0x0) {
        iVar6 = FUN_0047df80(0);
        iVar6 = iVar6 % iVar5;
        piVar11 = local_8;
        do {
          if (iVar6 == 0) {
            uVar7 = *(undefined4 *)(*piVar11 + 4);
            sVar10 = *(short *)(*piVar11 + 8);
            iVar5 = FUN_009832e6(uVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06318,0);
            uVar2 = param_5;
            if ((iVar5 != 0) && ((char)param_5 != '\0')) {
              param_5 = 0;
              local_8 = (int *)0x0;
              FUN_004b05e0(param_1,param_2,&param_5,&local_8,uVar2);
              sVar10 = (short)local_8 * sVar10;
              uVar7 = param_5;
            }
            *param_3 = uVar7;
            *param_4 = sVar10;
            return;
          }
          piVar11 = (int *)piVar11[1];
          iVar6 = iVar6 + -1;
        } while (piVar11 != (int *)0x0);
      }
    }
  }
  return;
}



undefined4 FUN_004b0770(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_4;
  
  local_4 = 0;
  FUN_004b05e0(param_1,param_2,&local_4,&param_2,1);
  if (local_4 != 0) {
    uVar1 = FUN_009832e6(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
    return uVar1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004b07c0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int *local_4;
  
  piVar5 = (int *)0x0;
  cVar1 = FUN_0046cb50();
  if (cVar1 == '\0') {
    iVar4 = FUN_004b0770(param_1,param_2);
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00401f00(8);
      if (piVar5 != (int *)0x0) {
        *piVar5 = 0;
        piVar5[1] = 0;
        FUN_00446cb0(iVar4);
        return piVar5;
      }
      FUN_00446cb0(iVar4);
    }
  }
  else {
    local_4 = (int *)(in_ECX + 0x28);
    if (local_4 != (int *)0x0) {
      do {
        iVar4 = *local_4;
        if (iVar4 != 0) {
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)FUN_00401f00(8);
            if (piVar5 == (int *)0x0) {
              piVar5 = (int *)0x0;
            }
            else {
              *piVar5 = 0;
              piVar5[1] = 0;
            }
          }
          iVar2 = FUN_009832e6(*(undefined4 *)(iVar4 + 4),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
          if (iVar2 == 0) {
            iVar4 = FUN_009832e6(*(undefined4 *)(iVar4 + 4),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06318,0)
            ;
            if ((iVar4 != 0) && (iVar4 = FUN_004b0770(param_1,param_2), iVar4 != 0)) {
              FUN_00446cb0(iVar4);
            }
          }
          else {
            if (*piVar5 != 0) {
              piVar3 = (int *)FUN_00401f00(8);
              if (piVar3 != (int *)0x0) {
                *piVar3 = *piVar5;
                piVar3[1] = 0;
                piVar3[1] = piVar5[1];
                piVar5[1] = (int)piVar3;
                *piVar5 = iVar2;
                goto LAB_004b08a7;
              }
              _DAT_00000004 = piVar5[1];
              piVar5[1] = 0;
            }
            *piVar5 = iVar2;
          }
        }
LAB_004b08a7:
        local_4 = (int *)local_4[1];
        if (local_4 == (int *)0x0) {
          return piVar5;
        }
      } while( true );
    }
  }
  return (int *)0x0;
}



int * FUN_004b0920(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_8;
  
  piVar6 = (int *)0x0;
  local_8 = 0;
  do {
    iVar1 = *param_1;
    uVar2 = FUN_0041b770(local_8);
    uVar2 = (**(code **)(iVar1 + 0x284))(uVar2);
    piVar3 = (int *)FUN_004b07c0(local_8,uVar2);
    piVar5 = piVar3;
    if (piVar3 != (int *)0x0) {
      do {
        iVar1 = *piVar5;
        if (iVar1 != 0) {
          piVar4 = piVar6;
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)FUN_00401f00(8);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = 0;
              piVar6[1] = 0;
            }
          }
          else {
            do {
              if (*piVar4 == iVar1) break;
              piVar4 = (int *)piVar4[1];
            } while (piVar4 != (int *)0x0);
            if (piVar4 != (int *)0x0) goto LAB_004b09d1;
          }
          if (*piVar6 != 0) {
            piVar4 = (int *)FUN_00401f00(8);
            if (piVar4 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              *piVar4 = *piVar6;
              piVar4[1] = 0;
            }
            piVar4[1] = piVar6[1];
            piVar6[1] = (int)piVar4;
          }
          *piVar6 = iVar1;
        }
LAB_004b09d1:
        piVar5 = (int *)piVar5[1];
      } while (piVar5 != (int *)0x0);
      iVar1 = piVar3[1];
      while (iVar1 != 0) {
        iVar1 = *(int *)(piVar3[1] + 4);
        FUN_00401f20(piVar3[1]);
        piVar3[1] = iVar1;
      }
      *piVar3 = 0;
    }
    FUN_00401f20(piVar3);
    local_8 = local_8 + 1;
    if (5 < local_8) {
      return piVar6;
    }
  } while( true );
}



int * FUN_004b0a30(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b3ba6;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  pcVar4 = (char *)(**(code **)(*(int *)(in_ECX + 0x30) + 0x14))(uVar3);
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (pcVar4 == pcVar1) {
    iVar6 = FUN_00401f00(0xdc);
    uStack_4 = 0;
    if (iVar6 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_0070b780(0);
    }
    uStack_4 = 0xffffffff;
  }
  else {
    piVar5 = (int *)FUN_004b3310(param_1);
  }
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 8))();
    if (iVar6 == 0) {
      iVar6 = FUN_00401f00(0xdc);
      uStack_4 = 1;
      if (iVar6 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)FUN_0070b780(0);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*piVar7 + 0x84))(piVar5,0);
      *unaff_FS_OFFSET = unaff_ESI;
      return piVar7;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return piVar5;
}



short FUN_004b0b40(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = FUN_0046ac50(param_1);
  sVar2 = FUN_00470400(param_1);
  return sVar2 + sVar1;
}



void FUN_004b0b70(undefined4 param_1)

{
  FUN_0046b5e0(param_1);
  FUN_00470420(param_1);
  return;
}



void FUN_004b0b90(undefined4 param_1,undefined4 param_2)

{
  FUN_0046b600(param_1,param_2);
  FUN_00470440(param_1,param_2);
  return;
}



void FUN_004b0bc0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xf8) = *param_1;
  *(undefined4 *)(in_ECX + 0xfc) = param_1[1];
  uVar1 = param_1[2];
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
  *(undefined4 *)(in_ECX + 0x100) = uVar1;
  return;
}



void FUN_004b0bf0(void)

{
  undefined4 *in_ECX;
  
  FUN_0071a490();
  in_ECX[0x42] = 0;
  *in_ECX = &PTR_FUN_00a43044;
  in_ECX[0x43] = 0x3f800000;
  in_ECX[0x44] = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b0d10(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x1a') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    in_ECX[0x21] = 0;
    in_ECX[0x20] = 0;
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4c4c5547) {
        if (iVar3 == 0x4c4c5546) {
          FUN_0046c7a0(in_ECX + 9,param_1);
        }
        else if (iVar3 < 0x44494446) {
          if (iVar3 == 0x44494445) {
            FUN_00450c20(&stack0xffffffec,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
          }
          else {
            if (iVar3 != 0x41544144) {
              if (iVar3 == 0x42444f4d) goto LAB_004b0e8b;
              goto LAB_004b0e98;
            }
            FUN_0046bda0(param_1,in_ECX + 0x1c,0x18);
LAB_004b0ea0:
            if ((float)in_ECX[0x21] == 0.0) {
              in_ECX[0x21] = 0x42b40000;
            }
            if ((float)in_ECX[0x20] == 0.0) {
              in_ECX[0x20] = 0x3f800000;
            }
          }
        }
        else if (iVar3 == 0x49524353) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x16] = local_c;
          FUN_0046f020(in_ECX);
        }
        else {
          if (iVar3 == 0x4c444f4d) {
LAB_004b0e8b:
            FUN_0046db00(in_ECX + 0xc,param_1);
          }
LAB_004b0e98:
          if (iVar3 == 0x41544144) goto LAB_004b0ea0;
        }
      }
      else {
        if (0x4e4f4349 < iVar3) {
          if (iVar3 == 0x54444f4d) goto LAB_004b0e8b;
          goto LAB_004b0e98;
        }
        if (iVar3 == 0x4e4f4349) {
          FUN_004700e0(in_ECX + 0x12,param_1);
        }
        else if (iVar3 == 0x4d414e46) {
          FUN_004510e0(in_ECX + 0x22);
        }
        else {
          if (iVar3 != 0x4d414e53) goto LAB_004b0e98;
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x23] = local_c;
        }
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004b0fc0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03518,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(iVar1 + 0x70);
    *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(iVar1 + 0x74);
    *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(iVar1 + 0x78);
    *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
    *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(iVar1 + 0x80);
    *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(iVar1 + 0x84);
    *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(iVar1 + 0x88);
    *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(iVar1 + 0x8c);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1160(void)

{
  DAT_00b35ac0 = DAT_00b08138 == '\x01';
  if (DAT_00b08140 == '\x01') {
    DAT_00b35ac0 = DAT_00b35ac0 | 2;
  }
  if (DAT_00b08148 == '\x01') {
    DAT_00b35ac0 = DAT_00b35ac0 | 4;
  }
  if (DAT_00b35ac0 == 0) {
    DAT_00b35ac0 = 4;
  }
  if (((DAT_00b08158 != 0) && (DAT_00b08158 != 1)) && (DAT_00b08158 != 2)) {
    DAT_00b08158 = 1;
  }
  if (((DAT_00b08160 != 0) && (DAT_00b08160 != 1)) && (DAT_00b08160 != 2)) {
    DAT_00b08160 = 2;
  }
  if (_DAT_00b08188 == 0.0) {
    _DAT_00b08188 = 1.0;
  }
  if (_DAT_00b08190 == 0.0) {
    _DAT_00b08190 = 1.0;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1210(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 0;
  if ((DAT_00b35ac0 & 1) != 0) {
    local_4 = _DAT_00b08178;
  }
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 3;
  *(undefined4 *)(in_ECX + 0x108) = local_4;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  if (((DAT_00b35ac0 & 2) == 0) &&
     ((*(int *)(DAT_00b333a0 + 0x34) == 0 || (DAT_00b08180 != '\x01')))) goto LAB_004b1308;
  fVar2 = (float)in_EAX;
  if (in_EAX < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar2 = fVar2 * _DAT_00b08188;
  if (DAT_00b08158 == 0) {
    *(float *)(in_ECX + 0x10c) = _DAT_00b08168;
  }
  else if (DAT_00b08158 == 2) {
    if (fVar2 == 0.0) goto LAB_004b12d1;
    *(float *)(in_ECX + 0x10c) = _DAT_00b08168 / (fVar2 * fVar2);
  }
  else if (fVar2 == 0.0) {
LAB_004b12d1:
    *(undefined4 *)(in_ECX + 0x10c) = 0x3c23d70a;
  }
  else {
    *(float *)(in_ECX + 0x10c) = (1.0 / fVar2) * _DAT_00b08168;
  }
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
LAB_004b1308:
  fVar2 = _DAT_00b08170;
  if (((DAT_00b35ac0 & 4) == 0) &&
     ((*(int *)(DAT_00b333a0 + 0x34) != 0 || (DAT_00b08180 != '\x01')))) {
    return;
  }
  fVar1 = (float)in_EAX;
  if (in_EAX < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar3 = fVar1 * _DAT_00b08190;
  if (DAT_00b08160 == 0) {
    *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
    *(float *)(in_ECX + 0x110) = fVar2;
    return;
  }
  if (DAT_00b08160 == 1) {
    if (fVar3 == 0.0) {
      *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
      *(undefined4 *)(in_ECX + 0x110) = 0x3c23d70a;
      return;
    }
    fVar2 = (1.0 / fVar1) * _DAT_00b08170;
    *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
    *(float *)(in_ECX + 0x110) = fVar2;
    return;
  }
  if (fVar3 == 0.0) {
    *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
    *(undefined4 *)(in_ECX + 0x110) = 0x3c23d70a;
    return;
  }
  fVar2 = _DAT_00b08170 / (fVar3 * fVar3);
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
  *(float *)(in_ECX + 0x110) = fVar2;
  return;
}



void FUN_004b1410(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2f9b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4319c;
  in_ECX[9] = &PTR_FUN_00a43184;
  in_ECX[0xc] = &PTR_FUN_00a43164;
  in_ECX[0x12] = &PTR_FUN_00a43148;
  in_ECX[0x15] = &PTR_LAB_00a43134;
  in_ECX[0x18] = &PTR_LAB_00a43120;
  in_ECX[0x1a] = &PTR_LAB_00a43100;
  local_4 = 5;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 4;
  FUN_004703b0();
  local_4._0_1_ = 3;
  FUN_00470580();
  local_4._0_1_ = 2;
  FUN_00470040();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046d850();
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b1580(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(short *)(param_1 + 0xb6) != 0) {
    if (*(short *)(param_1 + 0xb6) == 0) goto LAB_004b15e9;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 8))();
        if (iVar3 == 0) {
          iVar3 = FUN_00707530(2);
          if (iVar3 != 0) {
            *(undefined4 *)(iVar3 + 0x40) = DAT_00b3fa90;
            *(undefined4 *)(iVar3 + 0x44) = DAT_00b3fa94;
            uVar2 = DAT_00b3fa98;
            *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + 1;
            *(undefined4 *)(iVar3 + 0x48) = uVar2;
          }
        }
        else {
          FUN_004b1580(piVar1);
        }
      }
LAB_004b15e9:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_1 + 0xb6));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1600(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  bool bVar10;
  float10 fVar11;
  undefined4 *puVar12;
  int *local_140;
  float fStack_13c;
  double dStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b2fce;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_140;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffeb0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) goto LAB_004b1a17;
  iVar4 = (**(code **)(*param_1 + 0x170))(uVar3);
  if ((*(byte *)(local_140 + 0x1f) & 0x20) == 0) {
    iVar5 = FUN_006ecc80();
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*param_1 + 0x174))();
      dStack_138 = (double)*(float *)(iVar5 + 8);
      FUN_006ecc80();
      fVar11 = (float10)FUN_004cace0();
      if ((float10)dStack_138 < fVar11) goto LAB_004b16af;
    }
  }
  else {
LAB_004b16af:
    if ((*(char *)(iVar4 + 4) == '\x1a') && (cVar2 = FUN_004de320(param_2), cVar2 != '\0')) {
      FUN_0046ab60(1);
      FUN_004b1580(param_2);
    }
    cVar2 = (**(code **)(*param_1 + 400))();
    if ((cVar2 == '\0') && ((*(byte *)(local_140 + 0x1f) & 0x20) != 0)) goto LAB_004b1a17;
  }
  fStack_13c = (float)(uint)*(byte *)((int)local_140 + 0x7a);
  fStack_130 = (float)*(byte *)(local_140 + 0x1e) / 255.0;
  fStack_12c = (float)*(byte *)((int)local_140 + 0x79) / 255.0;
  fStack_128 = (float)(int)fStack_13c / 255.0;
  if ((*(byte *)(local_140 + 0x1f) & 4) != 0) {
    fStack_13c = -fStack_130;
    fStack_12c = -fStack_12c;
    fStack_128 = -fStack_128;
    dStack_138 = (double)CONCAT44(dStack_138._4_4_,fStack_128);
    fStack_130 = fStack_13c;
    fStack_124 = fStack_13c;
    fStack_120 = fStack_12c;
    fStack_11c = fStack_128;
    fStack_118 = fStack_12c;
  }
  piVar6 = (int *)(**(code **)(*param_2 + 0x58))("AttachLight");
  if ((piVar6 == (int *)0x0) || (piVar6 = (int *)(**(code **)(*piVar6 + 8))(), piVar6 == (int *)0x0)
     ) {
    piVar6 = param_2;
  }
  uVar3 = 0;
  if (*(short *)((int)piVar6 + 0xb6) != 0) {
    if (*(short *)((int)piVar6 + 0xb6) == 0) goto LAB_004b1802;
    do {
      piVar9 = *(int **)(piVar6[0x2c] + uVar3 * 4);
      if (piVar9 != (int *)0x0) {
        for (puVar7 = (undefined4 *)(**(code **)(*piVar9 + 4))(); puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)puVar7[1]) {
          if (puVar7 == &DAT_00b3fd80) {
            bVar1 = 1;
            goto LAB_004b17f4;
          }
        }
        bVar1 = 0;
LAB_004b17f4:
        puVar7 = (undefined4 *)(-(uint)bVar1 & (uint)piVar9);
        piVar9 = local_140;
        if (puVar7 != (undefined4 *)0x0) goto LAB_004b18c0;
      }
LAB_004b1802:
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((int)piVar6 + 0xb6));
  }
  piVar9 = local_140;
  uVar8 = (**(code **)(*local_140 + 0xd4))();
  __snprintf(acStack_114,0x104,"%s PtLight",uVar8);
  puVar7 = (undefined4 *)FUN_00401f00(0x114);
  dStack_138 = (double)CONCAT44(dStack_138._4_4_,puVar7);
  uStack_4 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_0071a490();
    puVar7[0x42] = 0;
    *puVar7 = &PTR_FUN_00a43044;
    puVar7[0x43] = 0x3f800000;
    puVar7[0x44] = 0;
  }
  uStack_4 = 0xffffffff;
  FUN_006ff420(acStack_114);
  (**(code **)(*piVar6 + 0x84))(puVar7,1);
  FUN_00707370(0,0);
LAB_004b18c0:
  FUN_004dd130(puVar7);
  puVar7[0x38] = DAT_00b3fa90;
  puVar7[0x39] = DAT_00b3fa94;
  uVar8 = DAT_00b3fa98;
  puVar7[0x2e] = puVar7[0x2e] + 1;
  iVar4 = puVar7[0x2e];
  puVar7[0x3a] = uVar8;
  puVar7[0x3e] = DAT_00b3fa90;
  puVar7[0x3f] = DAT_00b3fa94;
  puVar7[0x40] = DAT_00b3fa98;
  puVar7[0x2e] = iVar4 + 1;
  fStack_124 = (float)piVar9[0x1d];
  if (piVar9[0x1d] < 0) {
    fStack_124 = fStack_124 + 4.2949673e+09;
  }
  dStack_138 = (double)CONCAT44(dStack_138._4_4_,fStack_124);
  puVar7[0x3e] = fStack_124;
  puVar7[0x3f] = fStack_124;
  puVar7[0x3b] = fStack_130;
  puVar7[0x40] = fStack_124;
  puVar7[0x3c] = fStack_12c;
  puVar7[0x3d] = fStack_128;
  puVar7[0x2e] = iVar4 + 3;
  bVar10 = DAT_00b43384 != '\0';
  fStack_120 = fStack_124;
  fStack_11c = fStack_124;
  if (bVar10) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b43400);
    _DAT_00b43478 = GetCurrentThreadId();
    _DAT_00b4347c = _DAT_00b4347c + 1;
  }
  uVar8 = 0;
  puVar12 = puVar7;
  FUN_007b4280(0,puVar7,0);
  FUN_007c6ae0(puVar12,uVar8);
  if (bVar10) {
    _DAT_00b4347c = _DAT_00b4347c + -1;
    if (_DAT_00b4347c == 0) {
      _DAT_00b43478 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b43400);
  }
  FUN_004b1210();
  iVar4 = local_140[0x22];
  puVar7[0x2e] = puVar7[0x2e] + 1;
  puVar7[0x37] = iVar4;
LAB_004b1a17:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_004b1a50(undefined4 *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  LONG LVar9;
  int in_ECX;
  undefined1 uVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_30;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar6 = param_1;
  puStack_8 = &LAB_009b3008;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar4 = *(uint *)(in_ECX + 0x7c);
  uVar10 = 0;
  local_4 = 0;
  if ((uVar4 & 0x48) == 0) {
    if ((((char)uVar4 < '\0') || ((uVar4 & 0x100) != 0)) ||
       ((param_3 != 0.0 && (*(float *)((int)param_3 + 0xc) == 0.0)))) {
      fVar1 = (float)param_1[0x37];
      local_30 = 0.1;
      if ((uVar4 & 0x100) != 0) {
        local_30 = 0.05;
      }
      if (*param_2 <= fVar1) {
        fVar1 = fVar1 - local_30 * _DAT_00b33e9c;
      }
      else {
        fVar1 = local_30 * _DAT_00b33e9c + fVar1;
      }
      param_1[0x2e] = param_1[0x2e] + 1;
      param_1[0x37] = fVar1;
      if (ABS(fVar1 - *param_2) < local_30) {
        if ((param_3 == 0.0) || (*(float *)((int)param_3 + 0xc) != 0.0)) {
          uVar4 = *(uint *)(in_ECX + 0x7c);
          if ((uVar4 & 0x48) == 0) {
            if (((char)uVar4 < '\0') || ((uVar4 & 0x100) != 0)) {
              if (*param_2 <= 0.5) {
                *param_2 = *(float *)(in_ECX + 0x88);
              }
              else {
                *param_2 = *(float *)(in_ECX + 0x88) * 0.25;
              }
            }
          }
          else {
            iVar8 = FUN_0047df80(0,uVar7);
            *param_2 = ((float)(iVar8 % 0x4b) * 0.01 + 0.25) * *(float *)(in_ECX + 0x88);
          }
        }
        else {
          uVar10 = 1;
        }
      }
    }
  }
  else {
    fVar1 = (float)param_1[0x42];
    fVar2 = (float)param_1[0x43];
    fVar3 = (float)param_1[0x44];
    fVar5 = _DAT_00b33e9c;
    if ((uVar4 & 0x40) != 0) {
      fVar5 = _DAT_00b33e9c * 0.5;
    }
    iVar8 = FUN_0047df80(0,uVar7);
    fVar1 = ((float)iVar8 / 5461.0 + 1.1) * fVar5 + fVar1;
    iVar8 = FUN_0047df80(0);
    fVar2 = ((float)iVar8 / 5461.0 + 1.2) * fVar5 + fVar2;
    iVar8 = FUN_0047df80(0);
    fVar3 = ((float)iVar8 / 3640.0 + 1.3) * fVar5 + fVar3;
    if (6.2831855 < fVar1) {
      fVar1 = fVar1 - 6.2831855;
    }
    if (6.2831855 < fVar2) {
      fVar2 = fVar2 - 6.2831855;
    }
    if (6.2831855 < fVar3) {
      fVar3 = fVar3 - 6.2831855;
    }
    param_1[0x2e] = param_1[0x2e] + 1;
    param_1[0x42] = fVar1;
    param_1[0x2e] = param_1[0x2e] + 1;
    param_1[0x43] = fVar2;
    param_1[0x2e] = param_1[0x2e] + 1;
    param_1[0x44] = fVar3;
    fVar11 = (float10)FUN_00986300();
    fVar12 = (float10)FUN_00986300();
    fVar13 = (float10)FUN_00986300();
    param_3 = (float)fVar12 * (float)fVar11 * _DAT_00b08150 * 0.5;
    if (param_3 + _DAT_00b08150 <= 0.0) {
      param_3 = 0.0;
    }
    param_1[0x15] = param_3 * (float)fVar11;
    param_1[0x16] = param_3 * (float)fVar12;
    param_1[0x17] = param_3 * (float)fVar13;
    FUN_00707370(0,1);
    fVar11 = (float10)FUN_00986300();
    fVar12 = (float10)FUN_00986300();
    fVar13 = (float10)FUN_00986300();
    fVar1 = (float)fVar11 / 5.0 + (((float)fVar13 + 1.0) * ((float)fVar12 + 1.0) * 0.5 * 0.5) / 3.0;
    param_1 = (undefined4 *)fVar1;
    if (1.0 < fVar1) {
      param_1 = (undefined4 *)0x3f800000;
    }
    if (-1.0 <= (float)param_1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = -1.0;
    }
    fVar2 = *(float *)(in_ECX + 0x88);
    puVar6[0x2e] = puVar6[0x2e] + 1;
    puVar6[0x37] = ((fVar1 * 0.5 + 0.5) * 0.4 + 0.6) * fVar2;
  }
  local_4 = 0xffffffff;
  if ((puVar6 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar6 + 1), LVar9 == 0)) {
    (**(code **)*puVar6)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return uVar10;
}



void FUN_004b1f90(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b306f;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b31d0(uVar1);
  in_ECX[9] = &PTR_FUN_00a322a0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046d7e0();
  local_4._0_1_ = 2;
  FUN_0046ffd0();
  in_ECX[0x12] = &PTR_FUN_00a320a4;
  local_4._0_1_ = 3;
  FUN_0046ef60();
  FUN_004705a0();
  local_4._0_1_ = 4;
  FUN_00470470();
  *in_ECX = &PTR_FUN_00a4319c;
  in_ECX[9] = &PTR_FUN_00a43184;
  in_ECX[0xc] = &PTR_FUN_00a43164;
  in_ECX[0x12] = &PTR_FUN_00a43148;
  in_ECX[0x15] = &PTR_LAB_00a43134;
  in_ECX[0x18] = &PTR_LAB_00a43120;
  in_ECX[0x1a] = &PTR_LAB_00a43100;
  *(undefined1 *)(in_ECX + 1) = 0x1a;
  in_ECX[0x23] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x22] = 0x3f800000;
  in_ECX[0x21] = 0x42b40000;
  local_4 = CONCAT31(local_4._1_3_,5);
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b20b0(byte param_1)

{
  FUN_004b1410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_004b20d0(int *param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *in_ECX;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int *unaff_FS_OFFSET;
  float10 fVar16;
  undefined4 uStack_7c;
  int *piStack_78;
  uint local_74;
  undefined1 local_64 [36];
  undefined4 *local_40;
  undefined4 *local_3c;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_009b30a0;
  local_10 = *unaff_FS_OFFSET;
  local_74 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  iVar14 = 0;
  local_18 = 0;
  local_24 = 0;
  piStack_78 = param_1;
  local_8 = 0;
  uStack_7c = 0x4b2116;
  local_14 = local_74;
  local_1c = (int *)(**(code **)(*in_ECX + 0x110))();
  if (local_1c == (int *)0x0) {
    iVar4 = 0;
    goto LAB_004b22b0;
  }
  if (DAT_00b333f4 == '\0') {
    DAT_00b333f4 = 1;
    uStack_7c = 0x4b213d;
    pcVar3 = (char *)(**(code **)(*in_ECX + 0xd4))();
    DAT_00b333f4 = '\0';
    if (pcVar3 == (char *)0x0) goto LAB_004b215d;
    pcVar5 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar3 - (int)pcVar5;
  }
  else {
LAB_004b215d:
    iVar4 = 0;
  }
  uStack_7c = 0x4b2167;
  iVar4 = -(iVar4 + 0x10);
  puVar10 = (undefined1 *)((int)&piStack_78 + iVar4);
  if (*(ushort *)(in_ECX + 0xe) == 0xffff) {
    pcVar5 = (char *)in_ECX[0xd];
    pcVar3 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar5 - (int)pcVar3;
  }
  else {
    uVar6 = (uint)*(ushort *)(in_ECX + 0xe);
  }
  if (uVar6 == 0) {
    pcVar2 = *(code **)(*local_1c + 8);
    puVar9 = (undefined1 *)((int)&uStack_7c + iVar4);
    *(undefined4 *)((int)&uStack_7c + iVar4) = 0x4b2195;
    iVar14 = (*pcVar2)();
    pcVar2 = *(code **)(*in_ECX + 0xd4);
    puVar10 = puVar9 + -4;
    local_18 = iVar14;
    *(undefined4 *)(puVar9 + -4) = 0x4b21a6;
    uVar7 = (*pcVar2)();
    *(undefined4 *)(puVar10 + -4) = uVar7;
    *(undefined4 *)(puVar10 + -8) = 0x4b21ae;
    FUN_006ff420();
  }
  if ((((uint)in_ECX[2] >> 4 & 1) != 0) && (param_1 != (int *)0x0)) {
    *(undefined4 *)(puVar10 + -4) = 1;
    *(undefined4 *)(puVar10 + -8) = 0x4b21c5;
    FUN_0046a9c0();
  }
  local_20 = 1.0;
  if (param_1 != (int *)0x0) {
    pcVar2 = *(code **)(*param_1 + 0xec);
    puVar11 = (undefined4 *)(puVar10 + -4);
    puVar10 = puVar10 + -4;
    *puVar11 = 0x4b21da;
    fVar16 = (float10)(*pcVar2)();
    local_20 = (float)fVar16;
  }
  *(undefined4 *)(puVar10 + -4) = 0x4b21e5;
  FUN_00478b90();
  local_28 = local_20;
  local_2c = local_20;
  local_30 = local_20;
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(ushort *)(in_ECX + 0xe) == 0xffff) {
    pcVar5 = (char *)in_ECX[0xd];
    pcVar3 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar5 - (int)pcVar3;
  }
  else {
    uVar6 = (uint)*(ushort *)(in_ECX + 0xe);
  }
  if (uVar6 != 0) {
    *(undefined4 ***)(puVar10 + -4) = &local_40;
    *(undefined4 *)(puVar10 + -8) = 0x4b2225;
    iVar14 = FUN_00700610();
    local_18 = iVar14;
  }
  iVar4 = 0;
  if (iVar14 != 0) {
    pcVar2 = *(code **)(*param_1 + 0x174);
    puVar12 = (undefined4 *)(puVar10 + -4);
    puVar10 = puVar10 + -4;
    *puVar12 = 0x4b223a;
    puVar8 = (undefined4 *)(*pcVar2)();
    *(undefined4 *)(iVar14 + 0x54) = *puVar8;
    *(undefined4 *)(iVar14 + 0x58) = puVar8[1];
    uVar7 = puVar8[2];
    *(undefined1 **)(puVar10 + -4) = local_64;
    *(undefined4 *)(iVar14 + 0x5c) = uVar7;
    *(undefined4 *)(puVar10 + -8) = 0x4b2256;
    puVar8 = (undefined4 *)FUN_004d7af0();
    puVar15 = (undefined4 *)(iVar14 + 0x30);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar15 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar15 = puVar15 + 1;
    }
    *(undefined4 *)(puVar10 + -4) = 0;
    *(undefined4 *)(puVar10 + -8) = 0;
    *(undefined4 *)(puVar10 + -8) = 0;
    *(undefined4 *)(puVar10 + -0xc) = 0x4b2272;
    FUN_00707370();
    iVar4 = local_18;
  }
  *(int *)(puVar10 + -4) = iVar4;
  *(int **)(puVar10 + -8) = param_1;
  *(undefined4 *)(puVar10 + -0xc) = 0x4b2281;
  FUN_004b1600();
  *(undefined4 *)(puVar10 + -4) = 0x4b2288;
  FUN_00707610();
  local_8 = local_8 & 0xffffff00;
  if (local_40 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*local_40;
    *(undefined4 *)(puVar10 + -4) = 1;
    puVar13 = (undefined4 *)(puVar10 + -8);
    puVar10 = puVar10 + -8;
    *puVar13 = 0x4b229b;
    (*pcVar2)();
  }
  if (local_3c != (undefined4 *)0x0) {
    pcVar2 = *(code **)*local_3c;
    *(undefined4 *)(puVar10 + -4) = 1;
    *(undefined4 *)(puVar10 + -8) = 0x4b22aa;
    (*pcVar2)();
  }
LAB_004b22b0:
  *unaff_FS_OFFSET = local_10;
  return iVar4;
}



void FUN_004b22e0(int *param_1)

{
  if (*param_1 != 0) {
    InterlockedIncrement((LONG *)(*param_1 + 4));
  }
  FUN_004b1a50();
  return;
}



void FUN_004b2320(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xec))(param_1,0);
  return;
}



void FUN_004b2340(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  uVar2 = FUN_0046d3f0();
  (**(code **)(iVar1 + 0x118))(uVar2);
  return;
}



undefined4 FUN_004b2360(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x20);
}



void FUN_004b23a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}



void FUN_004b23c0(int param_1)

{
  int *in_ECX;
  
  if (param_1 == in_ECX[1]) {
    in_ECX[1] = *(int *)(in_ECX[1] + 0x20);
  }
  if (param_1 == in_ECX[2]) {
    in_ECX[2] = *(int *)(in_ECX[2] + 0x1c);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20) = *(undefined4 *)(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *in_ECX = *in_ECX + -1;
  return;
}



void FUN_004b2410(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[2];
  while (iVar1 != 0) {
    piVar2 = (int *)in_ECX[2];
    iVar1 = piVar2[7];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(1);
    }
    in_ECX[2] = iVar1;
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}



undefined4 FUN_004b2460(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}



void FUN_004b2470(void)

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
  in_ECX[3] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_004b24f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  LONG LVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cf808;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*param_1 != 0) && (uVar3 = 0, *(short *)(in_ECX + 10) != 0)) {
    iVar1 = *(int *)(in_ECX + 4);
    do {
      if (*(int *)(iVar1 + (uint)uVar3 * 4) == *param_1) {
        uVar5 = (uint)uVar3;
        puVar2 = *(undefined4 **)(iVar1 + uVar5 * 4);
        local_4 = 0;
        if (puVar2 != (undefined4 *)0x0) {
          LVar6 = InterlockedDecrement(puVar2 + 1);
          if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1,uVar4);
          }
          *(undefined4 *)(iVar1 + uVar5 * 4) = 0;
        }
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
        if (uVar5 == *(ushort *)(in_ECX + 10) - 1) {
          *(ushort *)(in_ECX + 10) = *(ushort *)(in_ECX + 10) - 1;
        }
        goto LAB_004b2546;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(in_ECX + 10));
  }
  uVar5 = 0xffffffff;
LAB_004b2546:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



void FUN_004b25b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a4375c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004b25d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a4377c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004b25f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a4375c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b2620(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a4377c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_004b2650(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x10,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_004b2470();
  }
  local_4 = 0xffffffff;
  FUN_007214a0(iVar3,param_1);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_004b26d0(void)

{
  FUN_00477ef0();
  return;
}



undefined4 FUN_004b26e0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  uVar1 = FUN_0046d3f0();
  FUN_004384e0(uVar1,1,1);
  (**(code **)(*in_ECX + 0x110))(0);
  FUN_00707610();
  FUN_00707980();
  FUN_00707370(0,0);
  return 1;
}



void FUN_004b2730(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  
  uVar2 = param_3;
  iVar1 = (int)param_1;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    param_1 = (int *)0x0;
    cVar3 = FUN_0055e000(param_3,&param_1);
    if ((cVar3 == '\0') || (piVar4 = param_1, param_1 == (int *)0x0)) {
      piVar4 = (int *)FUN_00401f00(8);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = 0;
        piVar4[1] = 0;
      }
      FUN_00452570(uVar2,piVar4);
    }
    do {
      if ((piVar4 == (int *)0x0) || (((int *)piVar4[1] == (int *)0x0 && (*piVar4 == 0))))
      goto LAB_004b27c4;
      piVar5 = (int *)*piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*piVar5 != iVar1);
    if (piVar5 == (int *)0x0) {
LAB_004b27c4:
      piVar5 = (int *)FUN_00401f00(8);
      *piVar5 = iVar1;
      piVar5[1] = 0;
      FUN_00446cb0(piVar5);
    }
    piVar5[1] = piVar5[1] + param_2;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004b27f0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *local_10c;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_10c;
  local_10c = (int *)0x0;
  cVar3 = FUN_0055e000(param_1,&local_10c);
  piVar2 = local_10c;
  if ((cVar3 != '\0') && (local_10c != (int *)0x0)) {
    cVar3 = FUN_0046cb60();
    while (cVar3 == '\0') {
      piVar1 = (int *)*piVar2;
      if ((*piVar1 != 0) && (piVar1[1] != 0)) {
        FUN_0046d540(local_108,*piVar1);
        FUN_004384e0(local_108,1,piVar1[1]);
      }
      FUN_00401f20(piVar1);
      piVar1 = (int *)piVar2[1];
      if (piVar1 == (int *)0x0) {
        *piVar2 = 0;
      }
      else {
        piVar2[1] = piVar1[1];
        *piVar2 = *piVar1;
        FUN_00401f20(piVar1);
      }
      cVar3 = FUN_0046cb60();
    }
    FUN_00401f20(piVar2);
    FUN_004524c0(param_1);
  }
  return;
}



undefined4 FUN_004b28e0(int param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar2 = (int *)FUN_009832e6(param_2,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if ((piVar2 == (int *)0x0) || (param_1 == 0)) {
    return 0;
  }
  sVar1 = FUN_0041e860();
  param_2 = (int)sVar1;
  if (((*(char *)(in_ECX + 4) == '\x19') && (piVar2 == DAT_00b333c4)) && (1 < param_2)) {
    uVar3 = FUN_005c05d0(&param_2,0xffffffff,0,param_2,param_1);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0x2cc))(param_1,param_2,param_3);
  return 1;
}



int * FUN_004b2980(int param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  if ((char)in_ECX[1] != '\x1e') {
    return (int *)0x0;
  }
  iVar1 = FUN_0055f7e0(1);
  if (iVar1 != 0) {
    iVar1 = param_1;
    piVar2 = in_ECX;
    FUN_0055f7e0(1,param_1);
    piVar2 = (int *)FUN_0055f800(iVar1,piVar2);
  }
  (**(code **)(*in_ECX + 0x120))(piVar2);
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0x9c))();
    if ((iVar1 != 0) && (param_1 != 0)) {
      iVar1 = (**(code **)(*piVar2 + 0x9c))();
      FUN_004d7880(*(undefined4 *)(iVar1 + 0x48));
    }
  }
  return piVar2;
}



bool FUN_004b2a00(void)

{
  char *_Str1;
  int iVar1;
  int in_ECX;
  char *_Str2;
  
  if (in_ECX == 0) {
    return false;
  }
  switch(*(undefined1 *)(in_ECX + 4)) {
  case 0x12:
    _Str2 = "EditorMarker.NIF";
    _Str1 = (char *)FUN_0046d3f0();
    iVar1 = __stricmp(_Str1,_Str2);
    if (iVar1 == 0) {
      return true;
    }
    break;
  case 0x18:
    if (DAT_00b35ebc == in_ECX) {
      return true;
    }
    break;
  case 0x1a:
    iVar1 = FUN_0046da90();
    if (iVar1 == 0) {
      return true;
    }
    break;
  case 0x1c:
    if ((((((DAT_00b35ea4 == in_ECX) || (DAT_00b35eb4 == in_ECX)) || (DAT_00b35ec0 == in_ECX)) ||
         ((DAT_00b35ec4 == in_ECX || (DAT_00b35eb8 == in_ECX)))) ||
        ((DAT_00b35ea8 == in_ECX || ((DAT_00b35ed4 == in_ECX || (DAT_00b35eac == in_ECX)))))) ||
       (DAT_00b35eb0 == in_ECX)) {
      return true;
    }
    break;
  case 0x29:
    return true;
  }
  return *(int *)(in_ECX + 0xc) - 100U < 0x14;
}



void FUN_004b2b00(int *param_1,char *param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_004693e0();
  if (iVar1 == 0) {
    iVar1 = FUN_0046d3f0();
  }
  fVar2 = (float10)(**(code **)(*param_1 + 0xec))();
  _sprintf(param_2,"%s%i",iVar1,(int)ROUND((float)(fVar2 * (float10)100.0)));
  return;
}



void thunk_FUN_004b2410(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[2];
  while (iVar1 != 0) {
    piVar2 = (int *)in_ECX[2];
    iVar1 = piVar2[7];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(1);
    }
    in_ECX[2] = iVar1;
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_004b2b80(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[2];
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    if (*(int *)(iVar1 + 0x20) != 0) {
      *(int *)(*(int *)(iVar1 + 0x20) + 0x1c) = param_1;
    }
    *(int *)(iVar1 + 0x20) = param_1;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    in_ECX[2] = param_1;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    in_ECX[1] = param_1;
  }
  *in_ECX = *in_ECX + 1;
  *(int **)(param_1 + 0x18) = in_ECX;
  return;
}



uint FUN_004b2bd0(void)

{
  char cVar1;
  int in_ECX;
  uint local_4;
  
  local_4 = 0;
  cVar1 = FUN_0055e000(*(undefined4 *)(in_ECX + 0xc),&local_4);
  return -(uint)(cVar1 != '\0') & local_4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004b2c00(void)

{
  char cVar1;
  int in_ECX;
  int local_10c;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_10c;
  local_10c = 0;
  cVar1 = FUN_0055e000(*(undefined4 *)(in_ECX + 0xc),&local_10c);
  if ((cVar1 != '\0') && (local_10c != 0)) {
    FUN_0046d540(local_108);
    FUN_0060cf60(0x4c544d44,local_108);
  }
  return;
}



void FUN_004b2c80(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (DAT_00b08314 != 0) {
    do {
      if (*(int *)(DAT_00b08318 + uVar3 * 4) != 0) {
        piVar2 = *(int **)(DAT_00b08318 + uVar3 * 4);
        goto joined_r0x004b2ca6;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_00b08314);
  }
  piVar2 = (int *)0x0;
joined_r0x004b2ca6:
  do {
    if (piVar2 == (int *)0x0) {
      FUN_007c2a40();
      return;
    }
    piVar4 = (int *)*piVar2;
    iVar1 = piVar2[2];
    if (piVar4 == (int *)0x0) {
      uVar3 = (**(code **)(PTR_PTR_00b08310 + 4))(piVar2[1]);
      do {
        uVar3 = uVar3 + 1;
        if (DAT_00b08314 <= uVar3) {
          piVar4 = (int *)0x0;
          break;
        }
        piVar4 = *(int **)(DAT_00b08318 + uVar3 * 4);
      } while (piVar4 == (int *)0x0);
    }
    piVar2 = piVar4;
    if (iVar1 != 0) {
      FUN_0046d450();
      FUN_00401f20(iVar1);
    }
  } while( true );
}



void FUN_004b2d30(ushort param_1,undefined2 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a43850;
  *(ushort *)(in_ECX + 2) = param_1;
  *(undefined2 *)((int)in_ECX + 0xe) = param_2;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  if (param_1 == 0) {
    in_ECX[1] = 0;
  }
  else {
    uVar3 = (uint)param_1;
    puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3 * 4) | uVar3 * 4 + 4,uVar1);
    local_4 = 0;
    if (puVar2 == (uint *)0x0) {
      in_ECX[1] = 0;
    }
    else {
      *puVar2 = uVar3;
      _eh_vector_constructor_iterator_(puVar2 + 1,4,uVar3,FUN_007c88a0,FUN_007016a0);
      in_ECX[1] = puVar2 + 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b2e00(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a4379c;
  in_ECX[3] = 0;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b2e60(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b3318;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a43830;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a4377c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b2ed0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_0044d880();
  return;
}



void FUN_004b2ef0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b3348;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a43810;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a4375c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b2f60(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a43850;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b2fb0(byte param_1)

{
  FUN_004b2e60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b2fd0(byte param_1)

{
  FUN_004b2ef0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b2ff0(void)

{
  undefined4 *in_ECX;
  
  FUN_0046c460();
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  *in_ECX = &PTR_FUN_00a4385c;
  return;
}



void FUN_004b3010(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a43644;
  if (in_ECX[6] != 0) {
    FUN_004b23c0(in_ECX);
  }
  FUN_0046c280();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004b3030(int param_1,float *param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8)

{
  float *pfVar1;
  undefined4 in_ECX;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  undefined1 auStack_174 [12];
  float local_168;
  uint local_164;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  char local_150 [268];
  uint local_44;
  
  local_44 = DAT_00b30aac ^ (uint)auStack_174;
  local_154 = param_8;
  if ((((param_8 != 0) && (param_1 != 0)) && (param_2 != (float *)0x0)) &&
     (((param_3 != 0 && (param_4 != 0)) &&
      (local_158 = in_ECX, FUN_0046d540(local_150), local_150[0] != '\0')))) {
    local_15c = FUN_004b2bd0();
    local_164 = 0;
    if (param_4 != 0) {
      local_160 = (int)param_2 - param_1;
      pfVar3 = (float *)(param_1 + 8);
      do {
        pfVar1 = (float *)FUN_00401f00();
        pfVar2 = (float *)0x0;
        if (pfVar1 != (float *)0x0) {
          pfVar1[7] = 0.0;
          pfVar2 = pfVar1;
        }
        FUN_0075fa90();
        fVar4 = (float10)FUN_00985a00((double)*(float *)(param_3 + local_164 * 4));
        local_168 = (float)fVar4;
        pfVar2[6] = local_168 / 100.0;
        fVar4 = (float10)FUN_00985a00((double)pfVar3[-2]);
        local_168 = (float)fVar4;
        *pfVar2 = local_168;
        fVar4 = (float10)FUN_00985a00((double)pfVar3[-1]);
        local_168 = (float)fVar4;
        pfVar2[1] = local_168;
        fVar4 = (float10)FUN_00985a00((double)*pfVar3);
        local_168 = (float)fVar4;
        pfVar2[2] = local_168;
        pfVar2[3] = *param_2;
        pfVar2[4] = param_2[1];
        pfVar2[5] = *(float *)(local_160 + (int)pfVar3);
        FUN_004385b0(local_150,pfVar2,local_15c);
        local_164 = local_164 + 1;
        pfVar3 = pfVar3 + 3;
        param_2 = param_2 + 3;
        in_ECX = local_158;
      } while (local_164 < param_4);
    }
    FUN_004b2730(in_ECX,param_4,param_6);
  }
  return;
}



void FUN_004b31d0(void)

{
  undefined4 *in_ECX;
  
  FUN_0046c460();
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  *in_ECX = &PTR_FUN_00a43984;
  return;
}



void FUN_004b31f0(void)

{
  undefined4 *in_ECX;
  
  FUN_0046c460();
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  *in_ECX = &PTR_FUN_00a43aac;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3210(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  if ((in_ECX == DAT_00b35ea4) || (in_ECX == DAT_00b35eb4)) {
    param_1 = 0;
  }
  iVar1 = FUN_004693e0();
  if (iVar1 == 0) {
    iVar1 = FUN_0046d3f0();
  }
  if (param_1 != 0) {
    fVar3 = (float10)FUN_004d7260();
    if (fVar3 != (float10)1.0) {
      FUN_004b2b00(param_1,local_108);
      FUN_004384e0(local_108,1,1);
      iVar2 = ModelLoader_IsModelLoaded(local_108);
      if (iVar2 == 0) {
        FUN_004384e0(iVar1,1,1);
        _DAT_00b35ac4 = _DAT_00b35ac4 + -1;
      }
      else {
        _DAT_00b35ac8 = _DAT_00b35ac8 + -1;
      }
      goto LAB_004b32dc;
    }
  }
  FUN_004384e0(iVar1,1,1);
LAB_004b32dc:
  if ((*(char *)(in_ECX + 4) == '#') && (param_1 != DAT_00b333c4)) {
    FaceGen_ReleaseFace0Face1();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3310(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  uint local_10c;
  undefined1 auStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_10c;
  iVar2 = FUN_004693e0();
  if (iVar2 == 0) {
    iVar2 = FUN_0046d3f0();
  }
  local_10c = local_10c & 0xffffff00;
  if (param_1 != (int *)0x0) {
    if (((int *)param_1[7] != (int *)0x0) &&
       (cVar1 = (**(code **)(*(int *)param_1[7] + 0xf4))(), cVar1 != '\0')) {
      local_10c = CONCAT31(local_10c._1_3_,1);
    }
    fVar5 = (float10)(**(code **)(*param_1 + 0xec))();
    if (fVar5 != (float10)1.0) {
      FUN_004b2b00(param_1,auStack_108);
      iVar3 = ModelLoader_IsModelLoaded(auStack_108);
      if (iVar3 != 0) {
        InterlockedIncrement((LONG *)(iVar3 + 4));
        _DAT_00b35ac8 = _DAT_00b35ac8 + 1;
        if (*(int *)(iVar3 + 8) != 0) {
          return;
        }
      }
    }
  }
  uVar6 = 1;
  uVar4 = FUN_004a2a30();
  FUN_00439eb0(iVar2,local_10c,uVar4,uVar6);
  return;
}



void FUN_004b3400(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int local_4;
  
  local_4 = 0;
  cVar2 = FUN_0055e000(*(undefined4 *)(in_ECX + 0xc),&local_4);
  iVar1 = local_4;
  if ((cVar2 != '\0') && (local_4 != 0)) {
    FUN_0046d450();
    FUN_00401f20(iVar1);
  }
  FUN_00452570(*(undefined4 *)(in_ECX + 0xc),param_1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004b3460(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 in_ECX;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  puVar1 = (undefined1 *)FUN_00401f00(8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  FUN_0046d540(local_108);
  FUN_0046d750(param_1,in_ECX,local_108);
  FUN_004b3400(puVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b34e0(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b35ad8 & 1) == 0) {
    _DAT_00b35ad8 = _DAT_00b35ad8 | 1;
    DAT_00b35ad4 = 0;
    _atexit(FUN_00a1b600);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b35ad4) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b35ad4) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b35ad4) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b35ad4) {
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



void FUN_004b3640(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a43644;
  if (in_ECX[6] != 0) {
    FUN_004b23c0(in_ECX);
  }
  FUN_0046c280();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_004b3680(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort uVar4;
  LONG LVar5;
  int in_ECX;
  uint uVar6;
  
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar4 = 0;
  if (*(ushort *)(in_ECX + 10) != 0) {
    iVar1 = *(int *)(in_ECX + 4);
    do {
      if (*(int *)(iVar1 + (uint)uVar4 * 4) == 0) {
        uVar6 = (uint)uVar4;
        puVar2 = *(undefined4 **)(iVar1 + uVar6 * 4);
        if (puVar2 != (undefined4 *)*param_1) {
          if (puVar2 != (undefined4 *)0x0) {
            LVar5 = InterlockedDecrement(puVar2 + 1);
            if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
          }
          iVar3 = *param_1;
          *(int *)(iVar1 + uVar6 * 4) = iVar3;
          if (iVar3 != 0) {
            InterlockedIncrement((LONG *)(iVar3 + 4));
          }
        }
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
        return uVar6;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 10));
  }
  uVar6 = (uint)*(ushort *)(in_ECX + 10);
  if (*(ushort *)(in_ECX + 8) <= uVar6) {
    FUN_00523b10(*(ushort *)(in_ECX + 0xe) + uVar6);
  }
  FUN_004b34e0(uVar6,param_1);
  return uVar6;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004b3750(int *param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  LONG LVar8;
  int *piVar9;
  int *in_ECX;
  int iVar10;
  int *piVar11;
  uint *unaff_FS_OFFSET;
  float10 fVar12;
  int *piStack_140;
  int *local_13c;
  int *piStack_138;
  undefined4 *puStack_134;
  undefined4 *puStack_130;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_118 [264];
  uint local_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b33b8;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&piStack_140;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffeb0;
  *unaff_FS_OFFSET = (uint)&local_c;
  piVar11 = (int *)0x0;
  local_13c = param_1;
  if ((in_ECX == DAT_00b35ea4) || (in_ECX == DAT_00b35eb4)) {
    local_13c = (int *)0x0;
  }
  piVar9 = local_13c;
  piVar4 = (int *)(**(code **)(*in_ECX + 0x110))(local_13c,uVar3);
  if (piVar4 == (int *)0x0) goto LAB_004b3c39;
  if ((((uint)in_ECX[2] >> 4 & 1) != 0) && (piVar9 != (int *)0x0)) {
    FUN_0046a9c0(1);
  }
  if (((char)param_1 != '\0') || (piVar4[1] != 1)) goto switchD_004b3803_caseD_21;
  switch((char)in_ECX[1]) {
  case '\x12':
  case '$':
    cVar2 = FUN_00480820(piVar4);
    if (cVar2 != '\0') {
      param_1 = (int *)0x1;
    }
    break;
  default:
    goto switchD_004b3803_caseD_13;
  case '\x14':
    iVar5 = FUN_009832e6();
    if ((iVar5 == 0) || (cVar2 = FUN_00468ff0(0xd,0), cVar2 == '\0'))
    goto switchD_004b3803_caseD_13;
    break;
  case '\x18':
    iVar5 = (**(code **)(*piVar4 + 8))();
    piVar9 = piStack_140;
    if (((iVar5 != 0) && (iVar5 = FUN_00405790(0), piVar9 = piStack_140, iVar5 != 0)) &&
       (iVar5 = FUN_00405790(0), piVar9 = piStack_140, *(int *)(iVar5 + 0xc) != 0)) {
      iVar5 = FUN_00405790(0);
      iVar5 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar5 + 0xc));
      piVar9 = piStack_140;
      if ((iVar5 != 0) && (iVar5 = FUN_004715a0("Unequip"), piVar9 = piStack_140, iVar5 != 0))
      break;
    }
switchD_004b3803_caseD_13:
    iVar5 = FUN_006ff9c0(&DAT_00a7d0ec);
    if (((iVar5 != 0) && ((*(uint *)(iVar5 + 0xc) >> 4 & 1) != 0)) ||
       ((piVar11 = piVar4, piVar9 != (int *)0x0 &&
        (fVar1 = (float)piVar4[0x18], fVar12 = (float10)(**(code **)(*piVar9 + 0xec))(),
        (float10)fVar1 != fVar12)))) break;
    goto LAB_004b3bec;
  case '!':
  case '\"':
  case '#':
    break;
  }
switchD_004b3803_caseD_21:
  local_13c = (int *)0x3f800000;
  if (piVar9 != (int *)0x0) {
    fVar12 = (float10)FUN_004d7260();
    local_13c = (int *)(float)fVar12;
  }
  if ((float)local_13c == (float)piVar4[0x18]) {
LAB_004b3963:
    local_13c = (int *)0x3f800000;
  }
  else if ((float)local_13c == 0.0) {
    uVar6 = FUN_004da2a0();
    FUN_004a7a60("%s has a scale of 0.  Change it in the editor.",uVar6);
    goto LAB_004b3963;
  }
  FUN_00478b90();
  fStack_11c = (float)local_13c;
  fStack_120 = (float)local_13c;
  fStack_124 = (float)local_13c;
  puStack_8 = (undefined1 *)0x0;
  if ((char)param_1 == '\0') {
    piVar11 = (int *)FUN_00700610(&puStack_134);
  }
  else {
    piVar7 = (int *)FUN_004430c0(piVar4,&puStack_134);
    piStack_138 = piVar7;
    if (piVar7 != (int *)0x0) {
      InterlockedIncrement(piVar7 + 1);
    }
    puStack_8._0_1_ = 1;
    if ((piVar7 == (int *)0x0) || (iVar5 = (**(code **)(*piVar7 + 8))(), iVar5 == 0)) {
      iVar5 = FUN_00401f00(0xdc);
      puStack_8._0_1_ = 3;
      if (iVar5 == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)FUN_0070b780(0);
      }
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
      (**(code **)(*piVar11 + 0x84))(piVar7,1);
    }
    else {
      FUN_00405070(piVar7);
      puStack_8._0_1_ = 2;
      FUN_004b3680(&stack0xfffffebc);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
      FUN_007016a0();
      piVar11 = piVar7;
    }
    puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
    piVar9 = piStack_140;
    if ((piVar7 != (int *)0x0) &&
       (LVar8 = InterlockedDecrement(piVar7 + 1), piVar9 = piStack_140, LVar8 == 0)) {
      (**(code **)*piVar7)(1);
      piVar9 = piStack_140;
    }
  }
  if (((float)local_13c == 1.0) || ((float)piVar4[0x18] != 1.0)) {
    puStack_8 = (undefined1 *)0xffffffff;
    if (puStack_134 != (undefined4 *)0x0) {
      (**(code **)*puStack_134)(1);
    }
    if (puStack_130 != (undefined4 *)0x0) {
      (**(code **)*puStack_130)(1);
    }
    if (piVar11 != (int *)0x0) {
LAB_004b3bec:
      *(ushort *)(piVar11 + 6) = *(ushort *)(piVar11 + 6) & 0xfffe;
      iVar5 = piVar11[7];
      piVar11[0x18] = 0x3f800000;
      piVar9 = &DAT_00b26dc4;
      piVar4 = piVar11 + 0xc;
      for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
        *piVar4 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar4 = piVar4 + 1;
      }
      piVar11[0x15] = DAT_00b3f9a8;
      piVar11[0x16] = DAT_00b3f9ac;
      piVar11[0x17] = DAT_00b3f9b0;
      if (iVar5 != 0) {
        piVar11[7] = 0;
      }
    }
  }
  else {
    piVar11[0x18] = (int)ABS((float)local_13c);
    FUN_004b2b00(piVar9,auStack_118);
    iVar5 = ModelLoader_IsModelLoaded(auStack_118);
    if (iVar5 == 0) {
      piStack_138 = (int *)FUN_00401f00(0xc);
      puStack_8._0_1_ = 4;
      if (piStack_138 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_00434a70(auStack_118,piVar11);
      }
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      cVar2 = FUN_00434800(auStack_118,iVar5);
      piVar9 = piStack_140;
      if (cVar2 == '\0') {
        if (iVar5 != 0) {
          FUN_004349b0();
          FUN_00401f20(iVar5);
          piVar9 = piStack_140;
        }
      }
      else {
        _DAT_00b35ac4 = _DAT_00b35ac4 + 1;
      }
    }
    piVar9 = (int *)(**(code **)(*in_ECX + 0xec))(piVar9,param_1);
    if (piVar11 != piVar9) {
      FUN_00405070(piVar11);
      puStack_8._0_1_ = 5;
      FUN_004b24f0(&stack0xfffffebc);
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FUN_007016a0();
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_004781a0();
    piVar11 = piVar9;
  }
LAB_004b3c39:
  *unaff_FS_OFFSET = local_10;
  return piVar11;
}



void FUN_004b3c90(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x54) = 0;
  thunk_FUN_0046b090();
  return;
}



undefined4 FUN_004b3ca0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_2 != (int *)0x0) {
    cVar1 = (**(code **)(*param_2 + 400))();
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*param_2 + 0x380))();
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  iVar2 = FUN_004db6b0();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004db6b0();
    if (piVar3 != param_2) {
      piVar3 = (int *)FUN_009832e6(param_2,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
        uVar4 = FUN_004db6b0(0xffffffff);
        (**(code **)(iVar2 + 0x248))(param_1,uVar4);
      }
    }
  }
  return 1;
}



void FUN_004b3d30(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int local_4;
  
  if (((uint)in_ECX[2] >> 3 & 1) == 0) {
    FUN_0046f020(in_ECX);
    local_4 = in_ECX[0x15];
    if (local_4 != 0) {
      uVar1 = FUN_0046b680(0xffffffff);
      FUN_0046bb20(&local_4,uVar1);
      uVar1 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03500,0);
      iVar2 = FUN_009832e6(uVar1);
      in_ECX[0x15] = iVar2;
      if (iVar2 == 0) {
        uVar1 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
        FUN_004a7a60("Could not find open sound (%08X) for activator \'%s\' (%08X).",local_4,uVar1);
      }
    }
    FUN_0046ab80(1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b3dd0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  FUN_00451210(in_ECX);
  FUN_0046ab80(0);
  iVar2 = FUN_004510b0();
  do {
    if (iVar2 == 0) {
      return 1;
    }
    if (iVar2 < 0x4c444f4e) {
      if ((iVar2 == 0x4c444f4d) || (iVar2 == 0x42444f4d)) {
LAB_004b3e94:
        if (in_ECX == (int *)0x0) {
          FUN_0046db00(0,param_1);
        }
        else {
          FUN_0046db00(in_ECX + 0xc,param_1);
        }
      }
      else if (iVar2 == 0x44494445) {
        FUN_00450c20(&stack0xffffffec,0x200);
        (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
      }
      else if (iVar2 == 0x49524353) {
        local_c = 0;
        FUN_004510e0(&local_c);
        in_ECX[0x13] = local_c;
        FUN_0046f020(in_ECX);
      }
    }
    else if (iVar2 == 0x4c4c5546) {
      if (in_ECX == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = in_ECX + 9;
      }
      FUN_0046c7a0(piVar3,param_1);
    }
    else if (iVar2 == 0x4d414e53) {
      local_c = 0;
      FUN_004510e0(&local_c);
      in_ECX[0x15] = local_c;
    }
    else if (iVar2 == 0x54444f4d) goto LAB_004b3e94;
    cVar1 = FUN_0044fea0();
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = FUN_004510b0();
  } while( true );
}



void FUN_004b3f10(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_0046ef80();
  if (*(int *)(in_ECX + 0x54) != 0) {
    FUN_0046ba80(0x4d414e53,*(undefined4 *)(*(int *)(in_ECX + 0x54) + 0xc));
  }
  FUN_0046b9f0();
  return;
}



void FUN_004b3ff0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b3446;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a43cb4;
  in_ECX[9] = &PTR_FUN_00a43ca0;
  in_ECX[0xc] = &PTR_FUN_00a43c80;
  in_ECX[0x12] = &PTR_LAB_00a43c6c;
  local_4 = 2;
  thunk_FUN_0046b170(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046d850();
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b40a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b348e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b31d0(uVar1);
  in_ECX[9] = &PTR_FUN_00a322a0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046d7e0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0046ef60();
  *in_ECX = &PTR_FUN_00a43cb4;
  in_ECX[9] = &PTR_FUN_00a43ca0;
  in_ECX[0xc] = &PTR_FUN_00a43c80;
  in_ECX[0x12] = &PTR_LAB_00a43c6c;
  *(undefined1 *)(in_ECX + 1) = 0x12;
  in_ECX[0x15] = 0;
  thunk_FUN_0046b090();
  FUN_0046ab80(1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b4150(byte param_1)

{
  FUN_004b3ff0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b4170(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b34df;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a43dfc;
  in_ECX[6] = &PTR_FUN_00a43dd8;
  local_4 = 1;
  thunk_FUN_0046b170(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_0046d850();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b41f0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b053a8,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(iVar1 + 0x30);
  }
  return;
}



void FUN_004b4290(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b4a48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  FUN_0046d7e0();
  *in_ECX = &PTR_FUN_00a43dfc;
  in_ECX[6] = &PTR_FUN_00a43dd8;
  *(undefined1 *)(in_ECX + 1) = 0x41;
  in_ECX[0xc] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b4300(byte param_1)

{
  FUN_004b4170();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b43a0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == 'A') {
    FUN_00451210(in_ECX);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x44494446) {
        if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffffec,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
        }
        else if (iVar3 == 0x41544144) {
          local_c = 0;
          FUN_0046bda0(param_1,&local_c,4);
          in_ECX[0xc] = local_c;
        }
        else if (iVar3 == 0x42444f4d) goto LAB_004b444e;
      }
      else if ((iVar3 == 0x4c444f4d) || (iVar3 == 0x54444f4d)) {
LAB_004b444e:
        if (in_ECX == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = in_ECX + 6;
        }
        FUN_0046db00(piVar4,param_1);
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004b4500(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_00470070(0x4e4f4349);
  FUN_0046ef80();
  FUN_0046bbb0(in_ECX + 0x78,1);
  FUN_0046b9f0();
  return;
}



short FUN_004b4560(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = FUN_0046ac50(param_1);
  sVar2 = FUN_00470400(param_1);
  return sVar2 + sVar1;
}



void FUN_004b4590(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    FUN_0046f020(in_ECX);
    FUN_0046ab80(1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b45c0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x13') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4c444f4e) {
        if (iVar3 == 0x4c444f4d) {
LAB_004b46c3:
          if (in_ECX == (int *)0x0) {
            FUN_0046db00(0,param_1);
          }
          else {
            FUN_0046db00(in_ECX + 0xc,param_1);
          }
        }
        else if (iVar3 < 0x44494446) {
          if (iVar3 == 0x44494445) {
            FUN_00450c20(&stack0xffffffec,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
          }
          else if (iVar3 == 0x41544144) {
            FUN_0046bda0(param_1,in_ECX + 0x1e,1);
          }
          else if (iVar3 == 0x42444f4d) goto LAB_004b46c3;
        }
        else if (iVar3 == 0x49524353) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x16] = local_c;
          FUN_0046f020(in_ECX);
        }
      }
      else if (iVar3 == 0x4c4c5546) {
        if (in_ECX == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = in_ECX + 9;
        }
        FUN_0046c7a0(piVar4,param_1);
      }
      else if (iVar3 == 0x4e4f4349) {
        if (in_ECX == (int *)0x0) {
          FUN_004700e0(0,param_1);
        }
        else {
          FUN_004700e0(in_ECX + 0x12,param_1);
        }
      }
      else if (iVar3 == 0x54444f4d) goto LAB_004b46c3;
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004b4740(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06adc,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined1 *)(in_ECX + 0x78) = *(undefined1 *)(iVar1 + 0x78);
  }
  return;
}



void FUN_004b47f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b35f2;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a43fb4;
  in_ECX[9] = &PTR_FUN_00a43fa0;
  in_ECX[0xc] = &PTR_FUN_00a43f80;
  in_ECX[0x12] = &PTR_FUN_00a43f64;
  in_ECX[0x15] = &PTR_LAB_00a43f50;
  in_ECX[0x18] = &PTR_LAB_00a43f30;
  in_ECX[0x1a] = &PTR_LAB_00a43f1c;
  in_ECX[0x1c] = &PTR_LAB_00a43f08;
  local_4 = 6;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 5;
  FUN_0046e2f0();
  local_4._0_1_ = 4;
  FUN_00470580();
  local_4._0_1_ = 3;
  FUN_004703b0();
  local_4._0_1_ = 2;
  FUN_00470040();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046d850();
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b4910(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b365a;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  in_ECX[9] = &PTR_FUN_00a322a0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046d7e0();
  local_4._0_1_ = 2;
  FUN_0046ffd0();
  in_ECX[0x12] = &PTR_FUN_00a320a4;
  local_4._0_1_ = 3;
  FUN_0046ef60();
  FUN_00470470();
  local_4._0_1_ = 4;
  FUN_004705a0();
  local_4._0_1_ = 5;
  FUN_0046e300();
  *in_ECX = &PTR_FUN_00a43fb4;
  in_ECX[9] = &PTR_FUN_00a43fa0;
  in_ECX[0xc] = &PTR_FUN_00a43f80;
  in_ECX[0x12] = &PTR_FUN_00a43f64;
  in_ECX[0x15] = &PTR_LAB_00a43f50;
  in_ECX[0x18] = &PTR_LAB_00a43f30;
  in_ECX[0x1a] = &PTR_LAB_00a43f1c;
  in_ECX[0x1c] = &PTR_LAB_00a43f08;
  *(undefined1 *)(in_ECX + 1) = 0x13;
  local_4 = CONCAT31(local_4._1_3_,6);
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b4a10(byte param_1)

{
  FUN_004b47f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b4a30(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046ef80();
  FUN_0046a7b0();
  FUN_00468d60();
  FUN_0046bbb0(in_ECX + 0xe4,2);
  FUN_0046b9f0();
  return;
}



void FUN_004b4a70(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03778,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined2 *)(in_ECX + 0xe4) = *(undefined2 *)(iVar1 + 0xe4);
  }
  return;
}



void FUN_004b4b50(undefined4 param_1)

{
  FUN_0046b5e0(param_1);
  FUN_00470420(param_1);
  return;
}



void FUN_004b4b70(void)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b36ac;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0x68),0xc,2,thunk_FUN_00470040);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0x38),0x18,2,FUN_0046d850);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 8),0x18,2,FUN_0046d850);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b4c00(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0xe4) = 0;
  thunk_FUN_0046b090();
  *(undefined4 *)(in_ECX + 0x48) = 3;
  return;
}



void FUN_004b4c20(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (((uint)in_ECX[2] >> 3 & 1) == 0) {
    if ((short)in_ECX[0x1a] == 0) {
      uVar1 = (**(code **)(*in_ECX + 0xd4))();
      FUN_004a7a60("Armor \'%s\' needs to have biped slots selected in the editor.",uVar1);
    }
    FUN_0046f020(in_ECX);
    FUN_0046a880(in_ECX);
    FUN_0046ab80(1);
  }
  return;
}



byte FUN_004b4c70(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x6a) >> 7;
}



int FUN_004b4c80(void)

{
  int in_ECX;
  
  return (-(uint)((*(byte *)(in_ECX + 0x6a) & 0x80) != 0) & 0xfffffff7) + 0x1b;
}



void FUN_004b4c90(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b379b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a441bc;
  in_ECX[9] = &PTR_FUN_00a441a4;
  in_ECX[0xc] = &PTR_LAB_00a44190;
  in_ECX[0xf] = &PTR_LAB_00a44178;
  in_ECX[0x13] = &PTR_LAB_00a44158;
  in_ECX[0x15] = &PTR_LAB_00a44144;
  in_ECX[0x17] = &PTR_LAB_00a4412c;
  in_ECX[0x19] = &PTR_FUN_00a44118;
  local_4 = 5;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 4;
  FUN_004b4b70();
  local_4._0_1_ = 3;
  FUN_0046c9b0();
  local_4._0_1_ = 2;
  FUN_00470580();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004703b0();
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b4d90(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x14') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x49524354) {
        if (iVar3 == 0x49524353) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0xd] = local_c;
          FUN_0046f020(in_ECX);
        }
        else if (iVar3 < 0x42324f4e) {
          if (iVar3 == 0x42324f4d) {
            FUN_004510e0(&local_18);
            in_ECX[0x2a] = local_18;
          }
          else if (iVar3 < 0x33444f4e) {
            if (iVar3 == 0x33444f4d) {
              FUN_00450c20(&stack0xffffffdc);
              (**(code **)(in_ECX[0x21] + 0x18))();
            }
            else if (iVar3 == 0x32444f4d) {
              FUN_00450c20(&stack0xffffffdc);
              (**(code **)(in_ECX[0x27] + 0x18))();
            }
            else if (iVar3 == 0x324f4349) {
              FUN_00450c20(&stack0xffffffd8,0);
              FUN_004028d0(&stack0xffffffd8,0);
            }
          }
          else if (iVar3 == 0x34444f4d) {
            FUN_00450c20(&stack0xffffffdc);
            (**(code **)(in_ECX[0x2d] + 0x18))();
          }
          else if (iVar3 == 0x41544144) {
            FUN_0046bda0(param_1,in_ECX + 0x39,2);
          }
        }
        else if (iVar3 < 0x42444f4e) {
          if (iVar3 == 0x42444f4d) {
            FUN_004510e0(&local_1c);
            in_ECX[0x1e] = local_1c;
          }
          else if (iVar3 == 0x42334f4d) {
            FUN_004510e0(&local_14);
            in_ECX[0x24] = local_14;
          }
          else if (iVar3 == 0x42344f4d) {
            FUN_004510e0(&local_10);
            in_ECX[0x30] = local_10;
          }
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffffdc);
          (**(code **)(*in_ECX + 0xd8))();
        }
      }
      else if (iVar3 < 0x54324f4e) {
        if (iVar3 == 0x54324f4d) {
          piVar4 = in_ECX + 0x27;
          goto LAB_004b50ff;
        }
        if (iVar3 < 0x4d414e42) {
          if (iVar3 == 0x4d414e41) {
            local_c = 0;
            FUN_004510f0(&local_c);
            *(undefined2 *)(in_ECX + 0x11) = (undefined2)local_c;
          }
          else if (iVar3 == 0x4c444f4d) {
            FUN_00450c20(&stack0xffffffdc);
            (**(code **)(in_ECX[0x1b] + 0x18))();
          }
          else if (iVar3 == 0x4c4c5546) {
            if (in_ECX == (int *)0x0) {
              FUN_0046c7a0(0,param_1);
            }
            else {
              FUN_0046c7a0(in_ECX + 9,param_1);
            }
          }
        }
        else if (iVar3 == 0x4d414e45) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x10] = local_c;
        }
        else if (iVar3 == 0x4e4f4349) {
          FUN_00450c20(&stack0xffffffd8,0);
          FUN_004028d0(&stack0xffffffd8,0);
        }
      }
      else if (iVar3 < 0x54444d43) {
        if (iVar3 == 0x54444d42) {
          FUN_00450c20(in_ECX + 0x1a,4);
        }
        else {
          if (iVar3 == 0x54334f4d) {
            piVar4 = in_ECX + 0x21;
          }
          else {
            if (iVar3 != 0x54344f4d) goto LAB_004b5107;
            piVar4 = in_ECX + 0x2d;
          }
LAB_004b50ff:
          FUN_0046d940(piVar4,param_1);
        }
      }
      else if (iVar3 == 0x54444f4d) {
        piVar4 = in_ECX + 0x1b;
        goto LAB_004b50ff;
      }
LAB_004b5107:
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004b5140(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b37ff;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  in_ECX[9] = &PTR_FUN_00a322a0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046ef60();
  FUN_0046a790();
  FUN_00470470();
  local_4._0_1_ = 2;
  FUN_004705a0();
  local_4._0_1_ = 3;
  FUN_0046ca50();
  local_4._0_1_ = 4;
  FUN_004690d0();
  *in_ECX = &PTR_FUN_00a441bc;
  in_ECX[9] = &PTR_FUN_00a441a4;
  in_ECX[0xc] = &PTR_LAB_00a44190;
  in_ECX[0xf] = &PTR_LAB_00a44178;
  in_ECX[0x13] = &PTR_LAB_00a44158;
  in_ECX[0x15] = &PTR_LAB_00a44144;
  in_ECX[0x17] = &PTR_LAB_00a4412c;
  in_ECX[0x19] = &PTR_FUN_00a44118;
  *(undefined1 *)(in_ECX + 1) = 0x14;
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined2 *)(in_ECX + 0x39) = 0;
  thunk_FUN_0046b090();
  in_ECX[0x12] = 3;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b5240(byte param_1)

{
  FUN_004b4c90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b5260(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_00470070(0x4e4f4349);
  FUN_0046ef80();
  FUN_0046a7b0();
  FUN_0046a700();
  FUN_0046bbb0(in_ECX + 0x88,2);
  FUN_0046b9f0();
  return;
}



undefined4 FUN_004b52d0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x89) == -1) {
    return 0xffffffff;
  }
  uVar1 = FUN_00565be0(2,*(char *)(in_ECX + 0x89));
  return uVar1;
}



short FUN_004b52f0(uint param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = FUN_0046ac50(param_1);
  sVar2 = FUN_00470400(param_1);
  sVar1 = sVar1 + sVar2;
  if ((param_1 & 4) != 0) {
    sVar1 = sVar1 + 1;
  }
  return sVar1;
}



void FUN_004b5330(uint param_1)

{
  int in_ECX;
  
  FUN_0046b5e0(param_1);
  FUN_00470420(param_1);
  if ((param_1 & 4) != 0) {
    FUN_0045b9a0(in_ECX + 0x89,1);
  }
  return;
}



void FUN_004b5370(uint param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_0046b600(param_1,param_2);
  FUN_00470440(param_1,param_2);
  if ((param_1 & 4) != 0) {
    FUN_004534d0(in_ECX + 0x89,1);
  }
  return;
}



void FUN_004b53b0(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x88) = 0;
  *(undefined1 *)(in_ECX + 0x89) = 0xff;
  thunk_FUN_0046b090();
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  return;
}



void FUN_004b53e0(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    FUN_0046f020(in_ECX);
    FUN_0046a880(in_ECX);
    if (*(char *)(in_ECX + 0x89) != -1) {
      iVar1 = FUN_00565be0(2,*(char *)(in_ECX + 0x89));
      if ((iVar1 < 0xc) || (0x21 < iVar1)) {
        *(undefined1 *)(in_ECX + 0x89) = 0xff;
      }
    }
    FUN_0046ab80(1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b5440(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x15') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4c444f4e) {
        if (iVar3 == 0x4c444f4d) {
LAB_004b55cf:
          if (in_ECX == (int *)0x0) {
            FUN_0046db00(0,param_1);
          }
          else {
            FUN_0046db00(in_ECX + 0xc,param_1);
          }
        }
        else if (iVar3 < 0x43534545) {
          if (iVar3 == 0x43534544) {
            if (in_ECX == (int *)0x0) {
              FUN_0046a390(0,param_1);
            }
            else {
              FUN_0046a390(in_ECX + 0x20,param_1);
            }
          }
          else if (iVar3 == 0x41544144) {
            FUN_0046bda0(param_1,in_ECX + 0x22,2);
          }
          else if (iVar3 == 0x42444f4d) goto LAB_004b55cf;
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffffec,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
        }
        else if (iVar3 == 0x49524353) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x16] = local_c;
          FUN_0046f020(in_ECX);
        }
      }
      else if (iVar3 < 0x4d414e46) {
        if (iVar3 == 0x4d414e45) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x19] = local_c;
        }
        else if (iVar3 == 0x4c4c5546) {
          if (in_ECX == (int *)0x0) {
            FUN_0046c7a0(0,param_1);
          }
          else {
            FUN_0046c7a0(in_ECX + 9,param_1);
          }
        }
        else if (iVar3 == 0x4d414e41) {
          local_c = 0;
          FUN_004510f0(&local_c);
          *(undefined2 *)(in_ECX + 0x1a) = (undefined2)local_c;
        }
      }
      else if (iVar3 == 0x4e4f4349) {
        if (in_ECX == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = in_ECX + 0x12;
        }
        FUN_004700e0(piVar4,param_1);
      }
      else if (iVar3 == 0x54444f4d) goto LAB_004b55cf;
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004b5640(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b084f0,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined2 *)(in_ECX + 0x88) = *(undefined2 *)(iVar1 + 0x88);
  }
  return;
}



void FUN_004b58c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b38eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a44454;
  in_ECX[9] = &PTR_FUN_00a44440;
  in_ECX[0xc] = &PTR_FUN_00a44420;
  in_ECX[0x12] = &PTR_FUN_00a44404;
  in_ECX[0x15] = &PTR_LAB_00a443f0;
  in_ECX[0x18] = &PTR_LAB_00a443d8;
  in_ECX[0x1c] = &PTR_LAB_00a443b8;
  in_ECX[0x1e] = &PTR_LAB_00a443a4;
  in_ECX[0x20] = &PTR_LAB_00a4438c;
  local_4 = 5;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 4;
  FUN_00470580();
  local_4._0_1_ = 3;
  FUN_004703b0();
  local_4._0_1_ = 2;
  FUN_00470040();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046d850();
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b59f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b394f;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  in_ECX[9] = &PTR_FUN_00a322a0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046d7e0();
  local_4._0_1_ = 2;
  FUN_0046ffd0();
  in_ECX[0x12] = &PTR_FUN_00a320a4;
  local_4._0_1_ = 3;
  FUN_0046ef60();
  FUN_0046a790();
  FUN_00470470();
  local_4._0_1_ = 4;
  FUN_004705a0();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_0046a400();
  in_ECX[0x12] = &PTR_FUN_00a44404;
  *in_ECX = &PTR_FUN_00a44454;
  in_ECX[9] = &PTR_FUN_00a44440;
  in_ECX[0xc] = &PTR_FUN_00a44420;
  in_ECX[0x15] = &PTR_LAB_00a443f0;
  in_ECX[0x18] = &PTR_LAB_00a443d8;
  in_ECX[0x1c] = &PTR_LAB_00a443b8;
  in_ECX[0x1e] = &PTR_LAB_00a443a4;
  in_ECX[0x20] = &PTR_LAB_00a4438c;
  *(undefined1 *)(in_ECX + 1) = 0x15;
  *(undefined2 *)(in_ECX + 0x22) = 0;
  *(undefined1 *)((int)in_ECX + 0x89) = 0xff;
  thunk_FUN_0046b090();
  in_ECX[0x1b] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b5b10(byte param_1)

{
  FUN_004b58c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b5b30(void)

{
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046ef80();
  FUN_0046a7b0();
  FUN_00468d60();
  FUN_0046bbb0(0,0);
  FUN_0046b9f0();
  return;
}



short FUN_004b5be0(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = FUN_0046ac50(param_1);
  sVar2 = FUN_00470400(param_1);
  return sVar2 + sVar1;
}



void FUN_004b5c10(undefined4 param_1,undefined4 param_2)

{
  FUN_0046b600(param_1,param_2);
  FUN_00470440(param_1,param_2);
  return;
}



void FUN_004b5c40(void)

{
  int in_ECX;
  
  thunk_FUN_0046b090();
  *(undefined4 *)(in_ECX + 0x48) = 3;
  return;
}



void FUN_004b5c60(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (((uint)in_ECX[2] >> 3 & 1) == 0) {
    if ((short)in_ECX[0x18] == 0) {
      uVar1 = (**(code **)(*in_ECX + 0xd4))();
      FUN_004a7a60("Clothing \'%s\' needs to have biped slots selected in the editor.",uVar1);
    }
    FUN_0046f020(in_ECX);
    FUN_0046a880(in_ECX);
    FUN_0046ab80(1);
  }
  return;
}



void FUN_004b5cb0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b3a14;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a44644;
  in_ECX[9] = &PTR_FUN_00a44630;
  in_ECX[0xc] = &PTR_LAB_00a4461c;
  in_ECX[0xf] = &PTR_LAB_00a44604;
  in_ECX[0x13] = &PTR_LAB_00a445e4;
  in_ECX[0x15] = &PTR_LAB_00a445d0;
  in_ECX[0x17] = &PTR_FUN_00a445bc;
  local_4 = 4;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 3;
  FUN_004b4b70();
  local_4._0_1_ = 2;
  FUN_00470580();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004703b0();
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b5db0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x16') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x49524354) {
        if (iVar3 == 0x49524353) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0xd] = local_c;
          FUN_0046f020(in_ECX);
        }
        else if (iVar3 < 0x42324f4e) {
          if (iVar3 == 0x42324f4d) {
            FUN_004510e0(&local_18);
            in_ECX[0x28] = local_18;
          }
          else if (iVar3 < 0x33444f4e) {
            if (iVar3 == 0x33444f4d) {
              FUN_00450c20(&stack0xffffffdc);
              (**(code **)(in_ECX[0x1f] + 0x18))();
            }
            else if (iVar3 == 0x32444f4d) {
              FUN_00450c20(&stack0xffffffdc);
              (**(code **)(in_ECX[0x25] + 0x18))();
            }
            else if (iVar3 == 0x324f4349) {
              FUN_00450c20(&stack0xffffffd8,0);
              FUN_004028d0(&stack0xffffffd8,0);
            }
          }
          else if (iVar3 == 0x34444f4d) {
            FUN_00450c20(&stack0xffffffdc);
            (**(code **)(in_ECX[0x2b] + 0x18))();
          }
          else if (iVar3 == 0x41544144) {
            FUN_0046bda0(param_1,0,0);
          }
        }
        else if (iVar3 < 0x42444f4e) {
          if (iVar3 == 0x42444f4d) {
            FUN_004510e0(&local_1c);
            in_ECX[0x1c] = local_1c;
          }
          else if (iVar3 == 0x42334f4d) {
            FUN_004510e0(&local_14);
            in_ECX[0x22] = local_14;
          }
          else if (iVar3 == 0x42344f4d) {
            FUN_004510e0(&local_10);
            in_ECX[0x2e] = local_10;
          }
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffffdc);
          (**(code **)(*in_ECX + 0xd8))();
        }
      }
      else if (iVar3 < 0x54324f4e) {
        if (iVar3 == 0x54324f4d) {
          piVar4 = in_ECX + 0x25;
          goto LAB_004b610f;
        }
        if (iVar3 < 0x4d414e42) {
          if (iVar3 == 0x4d414e41) {
            local_c = 0;
            FUN_004510f0(&local_c);
            *(undefined2 *)(in_ECX + 0x11) = (undefined2)local_c;
          }
          else if (iVar3 == 0x4c444f4d) {
            FUN_00450c20(&stack0xffffffdc);
            (**(code **)(in_ECX[0x19] + 0x18))();
          }
          else if (iVar3 == 0x4c4c5546) {
            if (in_ECX == (int *)0x0) {
              FUN_0046c7a0(0,param_1);
            }
            else {
              FUN_0046c7a0(in_ECX + 9,param_1);
            }
          }
        }
        else if (iVar3 == 0x4d414e45) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x10] = local_c;
        }
        else if (iVar3 == 0x4e4f4349) {
          FUN_00450c20(&stack0xffffffd8,0);
          FUN_004028d0(&stack0xffffffd8,0);
        }
      }
      else if (iVar3 < 0x54444d43) {
        if (iVar3 == 0x54444d42) {
          FUN_00450c20(in_ECX + 0x18,4);
        }
        else {
          if (iVar3 == 0x54334f4d) {
            piVar4 = in_ECX + 0x1f;
          }
          else {
            if (iVar3 != 0x54344f4d) goto LAB_004b6117;
            piVar4 = in_ECX + 0x2b;
          }
LAB_004b610f:
          FUN_0046d940(piVar4,param_1);
        }
      }
      else if (iVar3 == 0x54444f4d) {
        piVar4 = in_ECX + 0x19;
        goto LAB_004b610f;
      }
LAB_004b6117:
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004b6150(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3a64;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  in_ECX[9] = &PTR_FUN_00a322a0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046ef60();
  FUN_0046a790();
  FUN_00470470();
  local_4._0_1_ = 2;
  FUN_004705a0();
  local_4._0_1_ = 3;
  FUN_004690d0();
  local_4 = CONCAT31(local_4._1_3_,4);
  *in_ECX = &PTR_FUN_00a44644;
  in_ECX[9] = &PTR_FUN_00a44630;
  in_ECX[0xc] = &PTR_LAB_00a4461c;
  in_ECX[0xf] = &PTR_LAB_00a44604;
  in_ECX[0x13] = &PTR_LAB_00a445e4;
  in_ECX[0x15] = &PTR_LAB_00a445d0;
  in_ECX[0x17] = &PTR_FUN_00a445bc;
  *(undefined1 *)(in_ECX + 1) = 0x16;
  thunk_FUN_0046b090();
  in_ECX[0x12] = 3;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b6230(byte param_1)

{
  FUN_004b5cb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b63a0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x17') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4c4c5547) {
        if (iVar3 == 0x4c4c5546) {
          if (in_ECX == (int *)0x0) {
            FUN_0046c7a0(0,param_1);
          }
          else {
            FUN_0046c7a0(in_ECX + 0xd,param_1);
          }
        }
        else if (iVar3 < 0x44494446) {
          if (iVar3 == 0x44494445) {
            FUN_00450c20(&stack0xffffffe4,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffe4);
          }
          else if (iVar3 == 0x41544144) {
            FUN_0046bda0(param_1,in_ECX + 0x1e,1);
          }
          else if (iVar3 == 0x42444f4d) goto LAB_004b6534;
        }
        else if (iVar3 == 0x49524353) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x17] = local_c;
          FUN_0046f020(in_ECX);
        }
        else if (iVar3 == 0x4c444f4d) {
LAB_004b6534:
          if (in_ECX == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = in_ECX + 0x10;
          }
          FUN_0046db00(piVar4,param_1);
        }
      }
      else if (iVar3 < 0x4f544e44) {
        if (iVar3 == 0x4f544e43) {
          local_14 = 0;
          local_10 = 0;
          FUN_00450c20(&local_14,8);
          FUN_00469500(0);
          FUN_00469750(&local_14);
        }
        else if (iVar3 == 0x4d414e51) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x1d] = local_c;
        }
        else if (iVar3 == 0x4d414e53) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x1c] = local_c;
        }
      }
      else if (iVar3 == 0x54444f4d) goto LAB_004b6534;
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004b6580(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_0046ef80();
  FUN_004697d0();
  FUN_0046bbb0(in_ECX + 0x78,1);
  if (*(int *)(in_ECX + 0x70) != 0) {
    FUN_0046ba80(0x4d414e53,*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0xc));
  }
  if (*(int *)(in_ECX + 0x74) != 0) {
    FUN_0046ba80(0x4d414e51,*(undefined4 *)(*(int *)(in_ECX + 0x74) + 0xc));
  }
  FUN_0046b9f0();
  return;
}



void FUN_004b6600(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0850c,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined1 *)(in_ECX + 0x78) = *(undefined1 *)(iVar1 + 0x78);
    *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(iVar1 + 0x70);
    *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(iVar1 + 0x74);
  }
  return;
}



undefined4
FUN_004b66b0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  undefined4 uVar7;
  
  piVar3 = (int *)FUN_009832e6(param_2,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  param_2 = 0;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  cVar1 = FUN_004de770(piVar3,1);
  iVar4 = FUN_004d7740();
  if (((iVar4 == 0) || (cVar2 = FUN_00428e70(), cVar2 == '\0')) || (cVar1 != '\0')) {
    if (piVar3 != DAT_00b333c4) {
      if ((((*(int *)(in_ECX + 0x70) != 0) && (param_1 != (int *)0x0)) &&
          (iVar4 = (**(code **)(*param_1 + 0x154))(), iVar4 != 0)) &&
         ((*(int *)(DAT_00b33398 + 0x24) != 0 &&
          (iVar4 = FUN_006ae0a0(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0xc),0x102,0), iVar4 != 0)
          ))) {
        puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
        FUN_006b7360(*puVar5,puVar5[1],puVar5[2]);
        FUN_006b7190(0);
        FUN_006b73e0();
        FUN_00401f20(iVar4);
      }
      uVar7 = param_5;
      iVar4 = param_4;
      if (piVar3 != DAT_00b333c4) {
        if (param_4 != 0) {
          (**(code **)(*param_1 + 0x100))(param_4,0,param_5,0,0,piVar3,0,0,1,0);
        }
        cVar1 = FUN_005e32d0();
        if (((cVar1 != '\0') && (cVar1 = FUN_004de770(piVar3,1), cVar1 == '\0')) &&
           (iVar6 = FUN_004db6b0(), iVar6 != 0)) {
          (**(code **)(*piVar3 + 0x238))(param_1,iVar4,uVar7,1,0);
          return 1;
        }
        return 1;
      }
    }
    FUN_0057a8d0(param_1,0,1,0);
    return 1;
  }
  cVar1 = FUN_005e4a00(DAT_00b35ec8,0,1,0,&param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_005e4a00(DAT_00b35ecc,0,1,0,&param_2);
  }
  if ((*(int *)(iVar4 + 4) == 0) ||
     (cVar2 = FUN_005e4a00(*(int *)(iVar4 + 4),0,1,0,&param_2), cVar2 == '\0')) {
    if (DAT_00b35b1c == (int *)0x0) {
      if (cVar1 == '\0') {
        if (piVar3 == DAT_00b333c4) {
          FUN_0057add0(DAT_00b386a8,0xbf800000,0,0);
        }
        if (*(int *)(DAT_00b33398 + 0x24) != 0) {
          if (piVar3 == DAT_00b333c4) {
            uVar7 = 0x121;
          }
          else {
            uVar7 = 0x102;
          }
          iVar4 = FUN_006ade50("DRSChestLocked",uVar7,1);
          if (iVar4 != 0) {
            if (piVar3 != DAT_00b333c4) {
              puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
              FUN_006b7360(*puVar5,puVar5[1],puVar5[2]);
            }
            FUN_006b7190(0);
            FUN_006b73e0();
            FUN_00401f20(iVar4);
            return 0;
          }
        }
      }
      else {
        if (piVar3 == DAT_00b333c4) {
          iVar4 = FUN_004d77d0();
          if ((iVar4 != 0) && (iVar4 = FUN_00429990(), 99 < iVar4)) {
            FUN_0057acc0(DAT_00b38690,0,1,0x40000000);
            return 0;
          }
          FUN_0057b6a0(param_1);
          return 0;
        }
        iVar4 = (**(code **)(*piVar3 + 0x164))();
        if (iVar4 != 0) {
          FUN_00475440(1,0);
        }
        FUN_00520f00(DAT_00b35ec8);
        FUN_00520f40(1);
        FUN_00520f20(1);
        (**(code **)(*(int *)piVar3[0x16] + 0x48))(piVar3);
        FUN_00520f00(0);
        FUN_00520f40(0);
        FUN_00520f20(0xffffffff);
        iVar4 = FUN_004d77d0();
        if (iVar4 != 0) {
          FUN_00428e90();
          FUN_004d9070();
        }
      }
    }
    return 0;
  }
  if (DAT_00b35b1c != (int *)0x0) {
    return 0;
  }
  if (piVar3 == DAT_00b333c4) {
    DAT_00b35b1c = param_1;
    iVar4 = FUN_004d77d0();
    if (iVar4 != 0) {
      FUN_00428e90();
      FUN_004d9070();
    }
    FUN_00579c10(DAT_00b38c30,&LAB_004b6260,1,DAT_00b38cf0,0);
    return 1;
  }
  return 0;
}



void FUN_004b6b00(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b3b24;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a44824;
  in_ECX[9] = &PTR_LAB_00a44810;
  in_ECX[0xd] = &PTR_FUN_00a447fc;
  in_ECX[0x10] = &PTR_FUN_00a447dc;
  in_ECX[0x16] = &PTR_LAB_00a447c8;
  in_ECX[0x19] = &PTR_LAB_00a447b4;
  local_4 = 4;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 3;
  FUN_00470580();
  local_4._0_1_ = 2;
  FUN_0046d850();
  FUN_00401f20(in_ECX[0xe]);
  in_ECX[0xe] = 0;
  *(undefined2 *)((int)in_ECX + 0x3e) = 0;
  *(undefined2 *)(in_ECX + 0xf) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0046a010();
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b6be0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3b74;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b31d0(uVar1);
  local_4 = 0;
  FUN_00469690();
  in_ECX[0xd] = &PTR_FUN_00a322a0;
  in_ECX[0xe] = 0;
  *(undefined2 *)(in_ECX + 0xf) = 0;
  *(undefined2 *)((int)in_ECX + 0x3e) = 0;
  local_4._0_1_ = 2;
  FUN_0046d7e0();
  local_4._0_1_ = 3;
  FUN_0046ef60();
  FUN_004705a0();
  local_4 = CONCAT31(local_4._1_3_,4);
  *in_ECX = &PTR_FUN_00a44824;
  in_ECX[9] = &PTR_LAB_00a44810;
  in_ECX[0xd] = &PTR_FUN_00a447fc;
  in_ECX[0x10] = &PTR_FUN_00a447dc;
  in_ECX[0x16] = &PTR_LAB_00a447c8;
  in_ECX[0x19] = &PTR_LAB_00a447b4;
  *(undefined1 *)(in_ECX + 1) = 0x17;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b6cb0(byte param_1)

{
  FUN_004b6b00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



byte FUN_004b6cf0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 100) & 1;
}



byte FUN_004b6d00(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 100) >> 2 & 1;
}



byte FUN_004b6d10(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 100) >> 3 & 1;
}



void FUN_004b6d50(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_004d7630(), iVar1 != 0)) {
    FUN_0067f340(param_1);
    iVar1 = FUN_0042b410();
    if (iVar1 != 0) {
      FUN_004d76d0();
    }
    FUN_004d76d0();
    return;
  }
  return;
}



undefined4 FUN_004b6d90(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x004b6da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + 0x50) + 8))();
    return uVar1;
  }
  return 7;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b6ea0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x18') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 < 0x4d414e42) {
        if (iVar2 == 0x4d414e41) {
          local_c = 0;
          FUN_004510e0(&local_c);
          FUN_0046bb20(&local_c,param_1);
          uVar3 = FUN_0046b250(local_c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03500,0);
          iVar2 = FUN_009832e6(uVar3);
          in_ECX[0x17] = iVar2;
        }
        else if (iVar2 < 0x49524354) {
          if (iVar2 == 0x49524353) {
            local_c = 0;
            FUN_004510e0(&local_c);
            in_ECX[0x13] = local_c;
            FUN_0046f020(in_ECX);
          }
          else {
            if (iVar2 == 0x42444f4d) goto LAB_004b70b3;
            if (iVar2 == 0x44494445) {
              FUN_00450c20(&stack0xffffffec,0x200);
              (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
            }
          }
        }
        else if (iVar2 == 0x4c444f4d) {
LAB_004b70b3:
          if (in_ECX == (int *)0x0) {
            FUN_0046db00(0,param_1);
          }
          else {
            FUN_0046db00(in_ECX + 0xc,param_1);
          }
        }
        else if (iVar2 == 0x4c4c5546) {
          if (in_ECX == (int *)0x0) {
            FUN_0046c7a0(0,param_1);
          }
          else {
            FUN_0046c7a0(in_ECX + 9,param_1);
          }
        }
      }
      else if (iVar2 < 0x4d414e54) {
        if (iVar2 == 0x4d414e53) {
          local_c = 0;
          FUN_004510e0(&local_c);
          FUN_0046bb20(&local_c,param_1);
          uVar3 = FUN_0046b250(local_c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03500,0);
          iVar2 = FUN_009832e6(uVar3);
          in_ECX[0x16] = iVar2;
        }
        else if (iVar2 == 0x4d414e42) {
          local_c = 0;
          FUN_004510e0(&local_c);
          FUN_0046bb20(&local_c,param_1);
          uVar3 = FUN_0046b250(local_c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03500,0);
          iVar2 = FUN_009832e6(uVar3);
          in_ECX[0x18] = iVar2;
        }
        else if (iVar2 == 0x4d414e46) {
          FUN_00450c20(in_ECX + 0x19,1);
        }
      }
      else if (iVar2 == 0x4d414e54) {
        local_c = 0;
        FUN_004510e0(&local_c);
        FUN_00446cb0(local_c);
      }
      else if (iVar2 == 0x54444f4d) goto LAB_004b70b3;
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_004510b0();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined1 FUN_004b72c0(int param_1,int *param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_4 [4];
  
  if ((param_2 != (int *)0x0) && (param_1 != 0)) {
    iVar2 = FUN_004d7630();
    iVar6 = 0;
    pcVar3 = (char *)FUN_004d7740();
    if ((pcVar3 == (char *)0x0) && (param_4 != '\0')) {
      return 1;
    }
    if (((iVar2 != 0) && (iVar6 = FUN_0042b460(), param_2 != DAT_00b333c4)) &&
       (iVar4 = FUN_006ecc80(), iVar4 != 0)) {
      FUN_006ecc80();
      iVar4 = FUN_004ca970();
      if (iVar4 != 0) {
        piVar5 = param_2;
        FUN_006ecc80(param_2);
        cVar1 = FUN_004caac0(piVar5);
        if (cVar1 != '\0') {
          if (iVar6 == 0) {
            return 1;
          }
          iVar2 = FUN_004ca970();
          if (iVar2 != 0) {
            cVar1 = FUN_004caac0(param_2);
            if (cVar1 == '\0') {
              return 0;
            }
            return 1;
          }
          return 1;
        }
      }
    }
    cVar1 = FUN_004de770(param_2,1);
    if (cVar1 != '\0') {
      if (param_2 != DAT_00b333c4) {
        return 1;
      }
      if (param_3 == '\0') {
        return 1;
      }
      if (*(int *)(pcVar3 + 4) == 0) {
        return 1;
      }
      cVar1 = FUN_005e4a00(*(int *)(pcVar3 + 4),0,1,0,local_4);
      if (cVar1 != '\0') {
        return 0;
      }
      return 1;
    }
    cVar1 = FUN_005e6c60();
    if ((cVar1 != '\0') && (cVar1 = FUN_005e6ba0(), cVar1 != '\0')) {
      return 1;
    }
    if ((param_2 == DAT_00b333c4) && (cVar1 = (**(code **)(*DAT_00b333c4 + 0x354))(), cVar1 != '\0')
       ) {
      if (((iVar2 != 0) && (pcVar3 != (char *)0x0)) && (*pcVar3 != 'd')) {
        if (iVar6 == 0) {
          return 1;
        }
        cVar1 = FUN_004c97f0();
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = FUN_004c9830();
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
    else {
      cVar1 = FUN_005e3220();
      if ((cVar1 != '\0') &&
         ((piVar5 = (int *)(**(code **)(*(int *)param_2[0x16] + 0xcc))(), piVar5 == DAT_00b333c4 &&
          (cVar1 = (**(code **)(*param_2 + 0x354))(), cVar1 != '\0')))) {
        return 1;
      }
    }
  }
  return 0;
}



undefined1 FUN_004b7490(int *param_1,int *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_4;
  
  iVar6 = 0;
  local_4 = 0;
  *param_3 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x170))();
  if (*(char *)(iVar2 + 4) != '\x18') {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar2 = FUN_004d7630();
  pcVar3 = (char *)FUN_004d7740();
  if (pcVar3 == (char *)0x0) {
    return 1;
  }
  if (((iVar2 == 0) || (iVar6 = FUN_0042b460(), param_2 == DAT_00b333c4)) ||
     (iVar4 = FUN_006ecc80(), iVar4 == 0)) {
LAB_004b755c:
    cVar1 = FUN_004de770(param_2,1);
    if (cVar1 != '\0') {
      return 1;
    }
    cVar1 = FUN_005e6c60();
    if ((cVar1 != '\0') && (cVar1 = FUN_005e6ba0(), cVar1 != '\0')) {
      return 1;
    }
    if ((param_2 == DAT_00b333c4) && (cVar1 = (**(code **)(*DAT_00b333c4 + 0x354))(), cVar1 != '\0')
       ) {
      if ((iVar2 == 0) || (*pcVar3 == 'd')) goto LAB_004b7601;
      if (iVar6 == 0) {
        return 1;
      }
      cVar1 = FUN_004c97f0();
      if (cVar1 == '\0') {
        return 1;
      }
      cVar1 = FUN_004c9830();
    }
    else {
      cVar1 = FUN_005e3220();
      if ((cVar1 == '\0') ||
         (piVar5 = (int *)(**(code **)(*(int *)param_2[0x16] + 0xcc))(), piVar5 != DAT_00b333c4))
      goto LAB_004b7601;
      cVar1 = (**(code **)(*param_2 + 0x354))();
    }
  }
  else {
    FUN_006ecc80();
    iVar4 = FUN_004ca970();
    if (iVar4 == 0) goto LAB_004b755c;
    piVar5 = param_2;
    FUN_006ecc80(param_2);
    cVar1 = FUN_004caac0(piVar5);
    if (cVar1 == '\0') goto LAB_004b755c;
    if (iVar6 == 0) {
      return 1;
    }
    iVar6 = FUN_004ca970();
    if (iVar6 == 0) {
      return 1;
    }
    cVar1 = FUN_004caac0(param_2);
  }
  if (cVar1 != '\0') {
    return 1;
  }
LAB_004b7601:
  iVar6 = FUN_004d7740();
  if (((iVar6 != 0) && (cVar1 = FUN_00428e70(), cVar1 != '\0')) &&
     ((*(int *)(iVar6 + 4) == 0 ||
      (cVar1 = FUN_005e4a00(*(int *)(iVar6 + 4),0,1,0,&local_4), cVar1 == '\0')))) {
    iVar6 = FUN_00429990();
    if (99 < iVar6) {
      return 0;
    }
    cVar1 = FUN_005e4a00(DAT_00b35ec8,0,1,0,&local_4);
    if ((cVar1 == '\0') && (cVar1 = FUN_005e4a00(DAT_00b35ecc,0,1,0,&local_4), cVar1 == '\0')) {
      return 0;
    }
    *param_3 = 1;
  }
  return 1;
}



void FUN_004b7720(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  int *local_10;
  
  iVar3 = FUN_00420ef0();
  if (iVar3 != 0) {
    local_10 = (int *)FUN_00401f00(8);
    if (local_10 == (int *)0x0) {
      local_10 = (int *)0x0;
    }
    else {
      *local_10 = 0;
      local_10[1] = 0;
    }
    piVar4 = (int *)FUN_00401f00(8);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = 0;
      piVar4[1] = 0;
    }
    for (piVar7 = *(int **)(iVar3 + 0xc); (piVar7 != (int *)0x0 && (iVar1 = *piVar7, iVar1 != 0));
        piVar7 = (int *)piVar7[1]) {
      iVar6 = piVar4[1];
      piVar2 = piVar4;
      while (iVar6 != 0) {
        piVar2 = (int *)piVar2[1];
        iVar6 = piVar2[1];
      }
      if (*piVar2 == 0) {
        *piVar2 = iVar1;
      }
      else {
        piVar5 = (int *)FUN_00401f00(8);
        if (piVar5 == (int *)0x0) {
          piVar2[1] = 0;
        }
        else {
          *piVar5 = iVar1;
          piVar5[1] = 0;
          piVar2[1] = (int)piVar5;
        }
      }
    }
    for (; (piVar7 = local_10, piVar4 != (int *)0x0 && (iVar1 = *piVar4, iVar1 != 0));
        piVar4 = (int *)piVar4[1]) {
      iVar6 = FUN_005e03a0();
      if ((iVar6 == 0) || ((*(char *)(iVar6 + 0x20) != '\x01' && (*(char *)(iVar6 + 0x20) != '\a')))
         ) {
        if (*local_10 != 0) {
          piVar7 = (int *)FUN_00401f00(8);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = *local_10;
            piVar7[1] = 0;
          }
          piVar7[1] = local_10[1];
          local_10[1] = (int)piVar7;
        }
        *local_10 = iVar1;
      }
      else {
        FUN_00659a00();
        iVar1 = **(int **)(iVar1 + 0x58);
        fVar8 = (float10)FUN_00402bd0();
        (**(code **)(iVar1 + 0x1c))((float)(fVar8 - (float10)1.0));
      }
    }
    for (; (piVar7 != (int *)0x0 && (*piVar7 != 0)); piVar7 = (int *)piVar7[1]) {
      FUN_00424d00(*piVar7);
    }
    FUN_004526e0();
    FUN_00401f20(local_10);
    if (((*(int **)(iVar3 + 0xc))[1] == 0) && (**(int **)(iVar3 + 0xc) == 0)) {
      FUN_00420f00();
      return;
    }
  }
  return;
}



undefined1 FUN_004b78e0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x6c) == 0) && (*(int *)(in_ECX + 0x68) == 0)) {
    return 0;
  }
  return 1;
}



void FUN_004b7900(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x6c);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x6c) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x6c));
    *(int *)(in_ECX + 0x6c) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x68) = 0;
  return;
}



undefined4 FUN_004b7930(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 4) == '0') {
      iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
      if ((iVar2 != 0) && (cVar1 = FUN_004c97f0(), cVar1 != '\0')) {
        return 1;
      }
    }
    else if (*(char *)(param_1 + 4) == '5') {
      return 1;
    }
  }
  return 0;
}



void FUN_004b7980(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a44948;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004b79a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a44968;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004b79c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a44948;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b79f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a44968;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b7a20(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x6c);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x6c) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x6c));
    *(int *)(in_ECX + 0x6c) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x68) = 0;
  thunk_FUN_0046b170();
  return;
}



void FUN_004b7a60(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  
  iVar5 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05480,0);
  if (iVar5 != 0) {
    FUN_004b7900();
    piVar7 = (int *)(in_ECX + 0x68);
    for (piVar1 = (int *)(iVar5 + 0x68);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        iVar3 = piVar7[1];
        piVar4 = piVar7;
        while (iVar3 != 0) {
          piVar4 = (int *)piVar4[1];
          iVar3 = piVar4[1];
        }
        if (*piVar4 == 0) {
          *piVar4 = iVar2;
        }
        else {
          piVar6 = (int *)FUN_00401f00(8);
          if (piVar6 == (int *)0x0) {
            piVar4[1] = 0;
          }
          else {
            *piVar6 = iVar2;
            piVar6[1] = 0;
            piVar4[1] = (int)piVar6;
          }
        }
      }
      if ((int *)piVar7[1] != (int *)0x0) {
        piVar7 = (int *)piVar7[1];
      }
    }
    *(undefined1 *)(in_ECX + 100) = *(undefined1 *)(iVar5 + 100);
    *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(iVar5 + 0x5c);
    *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(iVar5 + 0x60);
    FUN_0046acb0(param_1);
  }
  return;
}



void FUN_004b7b40(int *param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int in_ECX;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x170))();
  if (iVar4 != in_ECX) {
    return;
  }
  iVar4 = FUN_004d7630();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_0042b460();
  iVar5 = FUN_0042b470();
  if (DAT_00b35b90 != 0) {
    thunk_FUN_004be420();
  }
  if (DAT_00b35b8c != 0) {
    thunk_FUN_004bd8c0();
  }
  if (iVar4 == 0) {
    if (iVar5 == 0) {
      return;
    }
    pfVar6 = (float *)FUN_006899c0();
    fVar1 = *pfVar6;
    iVar4 = FUN_006899c0();
    iVar5 = (int)ROUND(*(float *)(iVar4 + 4)) >> 0xc;
    iVar4 = FUN_004efe80((int)ROUND(fVar1) >> 0xc,iVar5);
    if ((iVar4 == 0) && (iVar4 = FUN_004f1630((int)ROUND(fVar1) >> 0xc,iVar5), iVar4 == 0)) {
      return;
    }
  }
  iVar5 = FUN_006ecc80();
  if (iVar5 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_004c97f0();
  }
  iVar7 = FUN_006ecc80();
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    FUN_006ecc80();
    iVar7 = FUN_004c9cf0();
  }
  iVar8 = FUN_004c9cf0();
  if ((((iVar7 != 0) && (iVar8 != 0)) && (iVar7 != iVar8)) && ((*(byte *)(in_ECX + 100) & 1) == 0))
  {
    iVar7 = FUN_00542ea0();
    *(undefined4 *)(iVar7 + 0x1c) = 0;
  }
  puVar9 = (undefined4 *)FUN_0042b430();
  puVar10 = (undefined4 *)FUN_006899c0();
  FUN_0066eaf0(*puVar10,puVar10[1],puVar10[2],*puVar9,puVar9[1],puVar9[2],iVar4,0);
  FUN_004b7720();
  if ((iVar4 != 0) && (cVar3 = FUN_004c97f0(), cVar3 != '\0')) {
    FUN_004cb040();
  }
  if ((*(int *)(in_ECX + 0x5c) != 0) && (iVar4 = FUN_0042b410(), iVar4 != 0)) {
    piVar11 = (int *)FUN_0042b410();
    iVar4 = (**(code **)(*piVar11 + 0x154))();
    if ((iVar4 != 0) &&
       ((*(int *)(DAT_00b33398 + 0x24) != 0 &&
        (iVar4 = FUN_006ae0a0(*(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0xc),0x121,0), iVar4 != 0)))
       ) {
      FUN_006b7190(0);
      FUN_006b73e0();
      FUN_00401f20(iVar4);
    }
  }
  iVar4 = FUN_006ecc80();
  if ((((DAT_00b13230 != '\0') && (DAT_00b13228 != '\0')) && (iVar5 != 0)) &&
     ((iVar4 != 0 && (cVar3 = FUN_004c97f0(), cVar2 != cVar3)))) {
    *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) | 0x8000;
  }
  return;
}



void FUN_004b7db0(int *param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05480,0);
  iVar2 = FUN_009832e6(uVar1);
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 100) & 1) != 0)) {
    FUN_0046aa50(1);
    iVar2 = (**(code **)(*param_1 + 0x154))();
    if (iVar2 != 0) {
      uVar1 = 0;
      (**(code **)(*param_1 + 0x154))(0);
      iVar2 = FUN_00405790(uVar1);
      if (iVar2 != 0) {
        uVar1 = 0;
        (**(code **)(*param_1 + 0x154))(0);
        iVar2 = FUN_00405790(uVar1);
        if (*(int *)(iVar2 + 0xc) != 0) {
          uVar1 = 0;
          (**(code **)(*param_1 + 0x154))(0);
          iVar2 = FUN_00405790(uVar1);
          iVar2 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar2 + 0xc));
          if ((iVar2 != 0) && (iVar3 = FUN_004715a0("Unequip"), iVar3 != 0)) {
            FUN_004715c0(0);
            *(ushort *)(iVar2 + 8) = *(ushort *)(iVar2 + 8) | 8;
            FUN_00470b20(iVar3,0,1,0x3f800000,0,0);
            if (param_2 != '\0') {
              uVar4 = 1;
              uVar1 = 0;
              (**(code **)(*param_1 + 0x154))(0,1);
              FUN_00707370(uVar1,uVar4);
              uVar1 = *(undefined4 *)(iVar3 + 0x30);
              uVar4 = 1;
              (**(code **)(*param_1 + 0x154))(uVar1,1);
              FUN_00707370(uVar1,uVar4);
              FUN_006c9cb0(0,0);
              FUN_004d90d0(*(undefined4 *)(iVar3 + 8));
              *(ushort *)(iVar2 + 8) = *(ushort *)(iVar2 + 8) & 0xfff7;
              uVar1 = (**(code **)(*param_1 + 0x154))(1);
              FUN_00897a20(uVar1);
              FUN_004d9310(0);
              return;
            }
          }
          goto LAB_004b7f5b;
        }
      }
    }
    FUN_004d90d0("Unequip");
  }
LAB_004b7f5b:
  FUN_004d9310(0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b7f70(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3ba6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_004b2320(param_1);
  if (iVar2 != 0) {
    iVar3 = FUN_00700010(&DAT_00b3b900);
    if (((*(byte *)(in_ECX + 100) & 2) == 0) ||
       ((param_1 != 0 && ((*(uint *)(param_1 + 8) >> 0xd & 1) != 0)))) {
      if (iVar3 != 0) {
        FUN_006ffe90(iVar3);
      }
    }
    else {
      piVar4 = (int *)0x0;
      if (iVar3 == 0) {
        iVar3 = FUN_00401f00(0x44,uVar1);
        local_4 = 0;
        if (iVar3 != 0) {
          piVar4 = (int *)FUN_0060e0a0();
        }
        local_4 = 0xffffffff;
        FUN_0060e0c0(_DAT_00b35b2c);
        FUN_0060e0d0(&LAB_004b76a0);
        (**(code **)(*piVar4 + 0x58))(iVar2);
      }
      iVar3 = FUN_006ff9c0(&DAT_00a7d0ec);
      if (iVar3 == 0) {
        iVar3 = FUN_00401f00(0x10,uVar1);
        local_4 = 1;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_006fa820();
        }
        local_4 = 0xffffffff;
        FUN_006ff820(&DAT_00a7d0ec,iVar3);
      }
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



undefined4 FUN_004b80a0(int param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  if ((param_1 != 0) && (cVar2 = FUN_004b7930(param_1), cVar2 != '\0')) {
    for (piVar1 = (int *)(in_ECX + 0x68); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 == param_1) {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_004b80e0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_1 != param_2)) {
    uVar4 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05480,0);
    iVar5 = FUN_009832e6(uVar4);
    uVar4 = (**(code **)(*param_2 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05480,0);
    iVar6 = FUN_009832e6(uVar4);
    if (((iVar5 != 0) && (iVar6 != 0)) &&
       ((iVar7 = FUN_004d7630(), iVar7 == 0 && (iVar7 = FUN_004d7630(), iVar7 == 0)))) {
      iVar7 = FUN_004d7640();
      iVar8 = FUN_004d7640();
      if ((iVar7 != 0) && (iVar8 != 0)) {
        pfVar9 = (float *)FUN_00403c00();
        fVar1 = *pfVar9;
        pfVar9 = (float *)FUN_00403c00();
        fVar2 = fVar1;
        if (fVar1 <= *pfVar9 + 100.0) {
          pfVar9 = (float *)FUN_00403c00();
          fVar2 = *pfVar9 + 100.0;
        }
        FUN_0042b420(param_2);
        piVar10 = (int *)FUN_004d7920();
        if (piVar10 == (int *)0x0) {
          FUN_004dd070(&fStack_18,0x40490fdb);
          fVar3 = fVar1;
          if ((*(byte *)(iVar6 + 100) & 2) != 0) {
            fVar3 = fVar2;
          }
          FUN_0069dd70(fVar3);
          pfVar9 = (float *)(**(code **)(*param_2 + 0x174))();
          fStack_8 = pfVar9[1] + fStack_14;
          fStack_4 = pfVar9[2] + fStack_10;
          fStack_c = *pfVar9 + fStack_18;
          FUN_0068ca00(&fStack_c);
          pfVar9 = &fStack_c;
          fStack_c = 0.0;
          fStack_8 = 0.0;
          fStack_4 = (float)param_2[10] + 3.1415927;
        }
        else {
          uVar4 = (**(code **)(*piVar10 + 0x174))();
          FUN_0068ca00(uVar4);
          pfVar9 = (float *)(piVar10 + 8);
        }
        FUN_0042b440(pfVar9);
        FUN_0042b420(param_1);
        piVar10 = (int *)FUN_004d7920();
        if (piVar10 == (int *)0x0) {
          FUN_004dd070(&fStack_18,0x40490fdb);
          if ((*(byte *)(iVar5 + 100) & 2) != 0) {
            fVar1 = fVar2;
          }
          FUN_0069dd70(fVar1);
          pfVar9 = (float *)(**(code **)(*param_1 + 0x174))();
          fStack_8 = pfVar9[1] + fStack_14;
          fStack_4 = pfVar9[2] + fStack_10;
          fStack_c = *pfVar9 + fStack_18;
          FUN_0068ca00(&fStack_c);
          pfVar9 = &fStack_c;
          fStack_c = 0.0;
          fStack_8 = 0.0;
          fStack_4 = (float)param_1[10] + 3.1415927;
        }
        else {
          uVar4 = (**(code **)(*piVar10 + 0x174))();
          FUN_0068ca00(uVar4);
          pfVar9 = (float *)(piVar10 + 8);
        }
        FUN_0042b440(pfVar9);
      }
      FUN_00680090(param_1);
    }
  }
  return;
}



void FUN_004b83b0(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a44948;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a449c8;
  return;
}



void FUN_004b8420(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a44968;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a449e8;
  return;
}



void FUN_004b8470(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b3bd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a449e8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a44968;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b84e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b3c08;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a449c8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a44948;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b8550(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b348e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b31d0(uVar1);
  in_ECX[9] = &PTR_FUN_00a322a0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046d7e0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0046ef60();
  *in_ECX = &PTR_FUN_00a44a54;
  in_ECX[9] = &PTR_FUN_00a44a3c;
  in_ECX[0xc] = &PTR_FUN_00a44a1c;
  in_ECX[0x12] = &PTR_LAB_00a44a08;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 1) = 0x18;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b8620(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b3446;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a44a54;
  in_ECX[9] = &PTR_FUN_00a44a3c;
  in_ECX[0xc] = &PTR_FUN_00a44a1c;
  in_ECX[0x12] = &PTR_LAB_00a44a08;
  local_4 = 2;
  FUN_004b7a20(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046d850();
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_004b86c0(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int iStack_24;
  undefined1 auStack_1c [16];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3c40;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = 0;
  local_40 = 0;
  if (param_1 != 0) {
    param_1 = FUN_004d6670(uVar4);
    if ((param_1 == 0) && (iVar5 = FUN_006ecc80(), iVar5 != 0)) {
      FUN_006ecc80();
      cVar3 = FUN_004c97f0();
      if (cVar3 != '\0') {
        param_1 = FUN_006ecc80();
      }
    }
    iVar5 = 0;
    if (((param_2 != 0) && (iVar6 = FUN_004d8e40(), iVar6 != 0)) &&
       (iVar6 = FUN_004d7630(), iVar6 != 0)) {
      FUN_004d7630();
      iVar6 = FUN_0042b410();
      if (iVar6 != 0) {
        FUN_004d7630();
        FUN_0042b410();
        iVar5 = FUN_004d8af0();
      }
    }
    if (param_1 != 0) {
      FUN_004b83b0(0x25);
      uVar4 = 0;
      local_4 = 0;
      param_2 = 0;
      for (piVar1 = (int *)(local_3c + 0x68); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (*piVar1 != 0) {
          uVar4 = uVar4 + 1;
        }
      }
      local_38 = uVar4;
      if ((iVar5 != 0) && (iVar5 != param_1)) {
        piVar1 = (int *)(local_3c + 0x68);
        do {
          if ((piVar1 == (int *)0x0) || (((int *)piVar1[1] == (int *)0x0 && (*piVar1 == 0))))
          goto LAB_004b880b;
          iVar6 = *piVar1;
          piVar1 = (int *)piVar1[1];
        } while (iVar6 != iVar5);
        iVar7 = FUN_004cb070(iVar5,param_1,&local_40);
        local_40 = 0;
        param_2 = uVar4;
      }
LAB_004b880b:
      uVar8 = 0xffffffff;
      local_34 = 0xffffffff;
      local_30 = FUN_00663eb0(local_3c);
      local_30 = local_30 & 0xff;
      if (param_2 < uVar4) {
        do {
          if (iVar7 != 0) goto LAB_004b89b6;
          param_2 = param_2 + 1;
          uVar8 = FUN_0047df80(0);
          uVar8 = uVar8 % uVar4;
          while( true ) {
            iVar7 = (**(code **)(local_2c + 4))(uVar8);
            puVar2 = *(undefined4 **)(iStack_24 + iVar7 * 4);
            while( true ) {
              if (puVar2 == (undefined4 *)0x0) goto LAB_004b888c;
              cVar3 = (**(code **)(local_2c + 8))(uVar8,puVar2[1]);
              if (cVar3 != '\0') break;
              puVar2 = (undefined4 *)*puVar2;
            }
            if (*(char *)(puVar2 + 2) == '\0') break;
            uVar8 = FUN_0047df80(0);
            uVar8 = uVar8 % local_38;
          }
LAB_004b888c:
          iVar7 = 0;
          uVar4 = 0;
          piVar1 = (int *)(local_3c + 0x68);
          while( true ) {
            if ((piVar1 == (int *)0x0) || (((int *)piVar1[1] == (int *)0x0 && (*piVar1 == 0))))
            goto LAB_004b88d5;
            if (uVar4 == uVar8) break;
            uVar4 = uVar4 + 1;
            piVar1 = (int *)piVar1[1];
          }
          iVar7 = *piVar1;
LAB_004b88d5:
          iVar5 = FUN_004cb070(iVar7,param_1,&local_40);
          if ((local_40 != 0) && (local_34 == 0xffffffff)) {
            local_34 = uVar8;
          }
          iVar7 = iVar5;
          if ((iVar5 != 0) && (uVar8 == local_30)) {
            iVar7 = 0;
            local_40 = iVar5;
            local_34 = uVar8;
          }
          FUN_00452570(uVar4,1);
          uVar4 = local_38;
        } while (param_2 < local_38);
      }
      if (((iVar7 == 0) && (local_40 != 0)) && ((*(byte *)(local_3c + 100) & 1) != 0)) {
        FUN_004b6d50(local_40);
        iVar7 = FUN_004d6670();
        if (iVar7 == 0) {
          iVar5 = FUN_006ecc80();
          iVar7 = local_40;
          uVar8 = local_34;
          if ((iVar5 != 0) &&
             (cVar3 = FUN_004c97f0(), iVar7 = local_40, uVar8 = local_34, cVar3 != '\0')) {
            FUN_004b8420(0x25);
            local_4._0_1_ = 1;
            FUN_004cbe50(auStack_1c);
            FUN_007c2a40();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004b8470();
            iVar7 = local_40;
            uVar8 = local_34;
          }
        }
        else {
          FUN_004f2630();
          iVar7 = local_40;
          uVar8 = local_34;
        }
      }
LAB_004b89b6:
      if (uVar8 != 0xffffffff) {
        FUN_00663ee0(local_3c,uVar8);
      }
      local_4 = 0xffffffff;
      FUN_004b84e0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar7;
}



void FUN_004b8a00(byte param_1)

{
  FUN_004b84e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b8a20(byte param_1)

{
  FUN_004b8470();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b8a40(byte param_1)

{
  FUN_004b8620();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b94f0(void)

{
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_00470070(0x4e4f4349);
  FUN_0046ef80();
  FUN_0046bbb0(0,0);
  FUN_0046b9f0();
  return;
}



void FUN_004b9540(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b054b8,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
  }
  return;
}



bool FUN_004b9570(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b054b8,0);
  if (iVar2 == 0) {
    return true;
  }
  cVar1 = FUN_0046ad70(iVar2);
  return cVar1 != '\0';
}



void FUN_004b95b0(undefined4 param_1)

{
  FUN_0046b5e0(param_1);
  FUN_00470420(param_1);
  return;
}



void FUN_004b95d0(undefined4 param_1,undefined4 param_2)

{
  FUN_0046b600(param_1,param_2);
  FUN_00470440(param_1,param_2);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b9600(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  FUN_00451210(in_ECX);
  FUN_0046ab80(0);
  iVar2 = FUN_004510b0();
  do {
    if (iVar2 == 0) {
      return 1;
    }
    if (iVar2 < 0x4c444f4e) {
      if (iVar2 == 0x4c444f4d) {
LAB_004b96f1:
        if (in_ECX == (int *)0x0) {
          FUN_0046db00(0,param_1);
        }
        else {
          FUN_0046db00(in_ECX + 0xc,param_1);
        }
      }
      else if (iVar2 < 0x44494446) {
        if (iVar2 == 0x44494445) {
          FUN_00450c20(&stack0xffffffec,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
        }
        else if (iVar2 == 0x41544144) {
          FUN_0046bda0(param_1,0,0);
        }
        else if (iVar2 == 0x42444f4d) goto LAB_004b96f1;
      }
      else if (iVar2 == 0x49524353) {
        local_c = 0;
        FUN_004510e0(&local_c);
        in_ECX[0x16] = local_c;
        FUN_0046f020(in_ECX);
      }
    }
    else if (iVar2 == 0x4c4c5546) {
      if (in_ECX == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = in_ECX + 9;
      }
      FUN_0046c7a0(piVar3,param_1);
    }
    else if (iVar2 == 0x4e4f4349) {
      if (in_ECX == (int *)0x0) {
        FUN_004700e0(0,param_1);
      }
      else {
        FUN_004700e0(in_ECX + 0x12,param_1);
      }
    }
    else if (iVar2 == 0x54444f4d) goto LAB_004b96f1;
    cVar1 = FUN_0044fea0();
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = FUN_004510b0();
  } while( true );
}



void FUN_004b9770(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b3d2b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a44ca4;
  in_ECX[9] = &PTR_FUN_00a44c8c;
  in_ECX[0xc] = &PTR_FUN_00a44c6c;
  in_ECX[0x12] = &PTR_FUN_00a44c50;
  in_ECX[0x15] = &PTR_LAB_00a44c3c;
  in_ECX[0x18] = &PTR_LAB_00a44c1c;
  in_ECX[0x1a] = &PTR_LAB_00a44c08;
  local_4 = 5;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 4;
  FUN_00470580();
  local_4._0_1_ = 3;
  FUN_004703b0();
  local_4._0_1_ = 2;
  FUN_00470040();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046d850();
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b9860(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3d8f;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  in_ECX[9] = &PTR_FUN_00a322a0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046d7e0();
  local_4._0_1_ = 2;
  FUN_0046ffd0();
  in_ECX[0x12] = &PTR_FUN_00a320a4;
  local_4._0_1_ = 3;
  FUN_0046ef60();
  FUN_00470470();
  local_4._0_1_ = 4;
  FUN_004705a0();
  local_4 = CONCAT31(local_4._1_3_,5);
  *in_ECX = &PTR_FUN_00a44ca4;
  in_ECX[9] = &PTR_FUN_00a44c8c;
  in_ECX[0xc] = &PTR_FUN_00a44c6c;
  in_ECX[0x12] = &PTR_FUN_00a44c50;
  in_ECX[0x15] = &PTR_LAB_00a44c3c;
  in_ECX[0x18] = &PTR_LAB_00a44c1c;
  in_ECX[0x1a] = &PTR_LAB_00a44c08;
  *(undefined1 *)(in_ECX + 1) = 0x1b;
  FUN_0046ab80(1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b9950(byte param_1)

{
  FUN_004b9770();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004b9970(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b2d6f;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a44dec;
  in_ECX[9] = &PTR_FUN_00a44dc8;
  local_4 = 1;
  thunk_FUN_0046b170(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_0046d850();
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b99f0(void)

{
  FUN_0046b990();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_004b2c00();
  FUN_0046b9f0();
  return;
}



void FUN_004b9aa0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab058;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  local_4 = 0;
  FUN_0046d7e0();
  *in_ECX = &PTR_FUN_00a44dec;
  in_ECX[9] = &PTR_FUN_00a44dc8;
  *(undefined1 *)(in_ECX + 1) = 0x1c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004b9b10(byte param_1)

{
  FUN_004b9970();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004b9b30(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x1c') {
    FUN_00451210(in_ECX);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4c444f4e) {
        if ((iVar3 == 0x4c444f4d) || (iVar3 == 0x42444f4d)) {
LAB_004b9bbe:
          if (in_ECX == (int *)0x0) {
            FUN_0046db00(0,param_1);
          }
          else {
            FUN_0046db00(in_ECX + 9,param_1);
          }
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xfffffff0,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xfffffff0);
        }
      }
      else if (iVar3 == 0x4c544d44) {
        FUN_004b3460(param_1);
      }
      else if (iVar3 == 0x54444f4d) goto LAB_004b9bbe;
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void thunk_FUN_00470040(void)

{
  FUN_00470040();
  return;
}



void FUN_004b9c40(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
  
  cVar1 = 'T';
  pcVar3 = param_1;
  do {
    *pcVar3 = cVar1;
    cVar1 = pcVar3[(int)("Textures\\Trees\\Billboards" + (1 - (int)param_1))];
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)(**(code **)(*(int *)(in_ECX + 0x24) + 0x14))();
  cVar1 = *pcVar2;
  while ((cVar1 != '.' && (cVar1 != '\0'))) {
    pcVar2 = pcVar2 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar2;
  }
  if (*pcVar2 == '.') {
    builtin_strncpy(pcVar3,".dds",4);
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = '\0';
  return;
}



ushort FUN_004b9cb0(void)

{
  float fVar1;
  int in_ECX;
  ushort uVar2;
  
  if (0.0 < *(float *)(in_ECX + 0x78)) {
    fVar1 = *(float *)(in_ECX + 0x78);
    if (fVar1 < 200.0 != (fVar1 == 200.0)) {
      return (ushort)(fVar1 < 200.0) << 8 | (ushort)NAN(fVar1) << 10 |
             (ushort)(fVar1 == 200.0) << 0xe;
    }
  }
  fVar1 = *(float *)(in_ECX + 0x7c);
  uVar2 = (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe;
  if (0.0 < fVar1) {
    fVar1 = *(float *)(in_ECX + 0x7c);
    uVar2 = (ushort)(350.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
            (ushort)(fVar1 == 350.0) << 0xe;
    if (350.0 >= fVar1) {
      return uVar2;
    }
  }
  return CONCAT11((char)(uVar2 >> 8),1);
}



void FUN_004b9cf0(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x14));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x18));
  return;
}



undefined4 FUN_004b9d10(float *param_1)

{
  float *in_ECX;
  
  if ((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) {
    return 0;
  }
  return 1;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a44f6c;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_004b9da0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3dce;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b31f0(uVar1);
  local_4 = 0;
  FUN_0046d7e0();
  in_ECX[9] = &PTR_FUN_00a44f10;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046ffd0();
  in_ECX[0xf] = &PTR_FUN_00a44f30;
  *in_ECX = &PTR_FUN_00a44fb4;
  in_ECX[9] = &PTR_FUN_00a44f94;
  in_ECX[0xf] = &PTR_FUN_00a44f78;
  in_ECX[0x12] = &PTR__scalar_deleting_destructor__00a44f6c;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  *(undefined2 *)((int)in_ECX + 0x56) = 1;
  *(undefined2 *)((int)in_ECX + 0x52) = 0;
  *(undefined2 *)(in_ECX + 0x15) = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x16] = 0x40200000;
  *(undefined1 *)(in_ECX + 1) = 0x1e;
  in_ECX[0x17] = 0x40a00000;
  in_ECX[0x18] = 0x42aa0000;
  in_ECX[0x19] = 0x3f000000;
  in_ECX[0x1a] = 0x3f333333;
  in_ECX[0x1c] = 0x3f800000;
  in_ECX[0x1d] = 0x3f800000;
  in_ECX[0x1e] = DAT_00b3fc80;
  in_ECX[0x1f] = DAT_00b3fc84;
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_004b9f60(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x70);
}



void FUN_004b9f90(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b3e51;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a44fb4;
  in_ECX[9] = &PTR_FUN_00a44f94;
  in_ECX[0xf] = &PTR_FUN_00a44f78;
  local_4 = 3;
  thunk_FUN_0046b170(uVar1);
  in_ECX[0x12] = &PTR__scalar_deleting_destructor__00a44f6c;
  FUN_00401f20(in_ECX[0x13]);
  local_4._0_1_ = 1;
  FUN_00470040();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0046d850();
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004ba2a0(void)

{
  ushort uVar1;
  uint uVar2;
  int in_ECX;
  
  uVar1 = *(ushort *)(in_ECX + 0x52);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0047df80(0);
  return *(undefined4 *)(*(int *)(in_ECX + 0x4c) + (uVar2 % (uint)uVar1) * 4);
}



void FUN_004ba2d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,void *param_6,void *param_7)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[3] = param_4;
  in_ECX[2] = param_3;
  in_ECX[4] = param_5;
  pvVar1 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_5 * 0xc >> 0x20) != 0) |
                                (uint)((ulonglong)param_5 * 0xc));
  in_ECX[5] = pvVar1;
  _memcpy(pvVar1,param_6,in_ECX[4] * 0xc);
  pvVar1 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)(uint)in_ECX[4] * 4));
  in_ECX[6] = pvVar1;
  _memcpy(pvVar1,param_7,in_ECX[4] * 4);
  return;
}



void FUN_004ba360(void)

{
  undefined4 *in_ECX;
  
  FUN_0070b780(0);
  in_ECX[0x38] = 0;
  *in_ECX = &PTR_FUN_00a45134;
  *(undefined2 *)(in_ECX + 0x37) = 9;
  return;
}



void FUN_004ba3a0(byte param_1)

{
  FUN_004b9f90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_004ba3c0(int *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float local_1c;
  float local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3e86;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  pfVar4 = (float *)FUN_00401f00(0x30,uVar3);
  fVar1 = *(float *)(in_ECX + 0x7c);
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    fVar1 = 1400.0;
  }
  fVar2 = fVar1 * 0.5;
  *pfVar4 = -fVar2;
  pfVar4[1] = 0.0;
  pfVar4[2] = 0.0;
  pfVar4[9] = fVar2;
  pfVar4[10] = 0.0;
  pfVar4[0xb] = 0.0;
  pfVar4[3] = -fVar2;
  if (param_2 == '\0') {
    local_18 = 0.0;
    local_1c = fVar1;
  }
  else {
    local_1c = 0.0;
    local_18 = fVar1;
  }
  pfVar4[4] = local_1c;
  pfVar4[6] = fVar2;
  pfVar4[5] = local_18;
  pfVar4[7] = local_1c;
  pfVar4[8] = local_18;
  puVar5 = (undefined4 *)FUN_00401f00(0x30,uVar3);
  *puVar5 = 0;
  puVar5[1] = 0x3f800000;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0x3f800000;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0x3f800000;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0x3f800000;
  puVar5[0xb] = 0;
  puVar6 = (undefined4 *)FUN_00401f00(0x20);
  *puVar6 = 0x3f800000;
  puVar6[1] = 0x3f800000;
  puVar6[2] = 0x3f800000;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0x3f800000;
  puVar7 = (undefined4 *)FUN_00401f00(0x40);
  local_4 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar7,0x10,4,FUN_0047ea50);
  }
  local_4 = 0xffffffff;
  *puVar7 = 0x3f800000;
  puVar7[1] = 0x3f800000;
  puVar7[2] = 0x3f800000;
  puVar7[3] = 0;
  puVar7[4] = 0x3f800000;
  puVar7[5] = 0x3f800000;
  puVar7[6] = 0x3f800000;
  puVar7[8] = 0x3f800000;
  puVar7[7] = 0;
  puVar7[9] = 0x3f800000;
  puVar7[10] = 0x3f800000;
  puVar7[0xc] = 0x3f800000;
  puVar7[0xb] = 0;
  puVar7[0xd] = 0x3f800000;
  puVar7[0xe] = 0x3f800000;
  puVar7[0xf] = 0;
  puVar8 = (undefined2 *)FUN_00401f00(0xc);
  *puVar8 = 0;
  puVar8[1] = 2;
  puVar8[2] = 1;
  puVar8[3] = 0;
  puVar8[4] = 3;
  puVar8[5] = 2;
  iVar9 = FUN_00401f00(0x58);
  local_4 = 1;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_0071fb40(4,pfVar4,puVar5,puVar7,puVar6,1,0,2,puVar8);
  }
  *param_1 = iVar9;
  if (iVar9 != 0) {
    InterlockedIncrement((LONG *)(iVar9 + 4));
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_004ba780(undefined4 param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 **ppuVar4;
  LONG LVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int in_ECX;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  undefined4 *local_124;
  undefined4 *local_120;
  int *piStack_11c;
  undefined4 *local_118;
  undefined1 local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3f12;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_124;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffecc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar11 = (undefined4 *)0x0;
  local_120 = (undefined4 *)0x0;
  if (((*(float *)(in_ECX + 0x78) <= 0.0) ||
      (*(float *)(in_ECX + 0x78) < 200.0 == (*(float *)(in_ECX + 0x78) == 200.0))) &&
     ((*(float *)(in_ECX + 0x7c) <= 0.0 || (350.0 < *(float *)(in_ECX + 0x7c))))) {
    FUN_004b9c40(local_114);
    if (DAT_00b333a0 == 0) {
      local_124 = (undefined4 *)0x0;
      ppuVar4 = &local_124;
      puVar10 = (undefined4 *)&DAT_00000002;
    }
    else {
      ppuVar4 = (undefined4 **)FUN_00442890(&local_118,local_114,0,0);
      puVar10 = (undefined4 *)0x1;
      puVar11 = local_124;
    }
    puVar1 = *ppuVar4;
    local_124 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    local_4 = 1;
    if (((((uint)puVar10 & 2) != 0) &&
        (puVar10 = (undefined4 *)((uint)puVar10 & 0xfffffffd), local_120 = puVar10,
        puVar11 != (undefined4 *)0x0)) && (LVar5 = InterlockedDecrement(puVar11 + 1), LVar5 == 0)) {
      (**(code **)*puVar11)(1,uVar3);
    }
    local_4._0_1_ = 2;
    if (((((uint)puVar10 & 1) != 0) && (local_118 != (undefined4 *)0x0)) &&
       ((LVar5 = InterlockedDecrement(local_118 + 1), LVar5 == 0 && (local_118 != (undefined4 *)0x0)
        ))) {
      (**(code **)*local_118)(1);
    }
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004ba3c0(&local_120,param_1);
      local_4._0_1_ = 3;
      piStack_11c = (int *)FUN_00401f00(0xc0);
      puVar11 = local_120;
      local_4._0_1_ = 4;
      if (piStack_11c == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00717570(local_120);
      }
      local_4._0_1_ = 3;
      FUN_006ff420(&DAT_00a451f0);
      piStack_11c = (int *)FUN_00401f00(0x30);
      local_4._0_1_ = 5;
      if (piStack_11c == (int *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_007043b0();
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004057b0(local_124);
      FUN_00405870(0);
      FUN_00405680(uVar7);
      iVar8 = FUN_0055f7e0(1);
      if (*(int *)(iVar8 + 0x14) != 0) {
        FUN_00405680(*(int *)(iVar8 + 0x14));
      }
      piVar9 = (int *)FUN_00401f00(0xe4);
      local_4._0_1_ = 6;
      piStack_11c = piVar9;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        FUN_0070b780(0);
        piVar9[0x38] = 0;
        *piVar9 = (int)&PTR_FUN_00a45134;
        *(undefined2 *)(piVar9 + 0x37) = 9;
      }
      pcVar2 = *(code **)(*piVar9 + 0x84);
      *(ushort *)(piVar9 + 0x37) = *(ushort *)(piVar9 + 0x37) & 0xfffd | 5;
      local_4._0_1_ = 3;
      (*pcVar2)(uVar6,1);
      FUN_006ff420("Tree distant 3d billboard");
      local_4 = CONCAT31(local_4._1_3_,2);
      if ((puVar11 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar11 + 1), LVar5 == 0))
      {
        (**(code **)*puVar11)(1);
      }
      puVar11 = local_124;
      local_4 = 0xffffffff;
      LVar5 = InterlockedDecrement(local_124 + 1);
      if (LVar5 == 0) {
        (**(code **)*puVar11)(1);
      }
      goto LAB_004baa4e;
    }
  }
  piVar9 = (int *)0x0;
LAB_004baa4e:
  *unaff_FS_OFFSET = local_c;
  return piVar9;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004baa80(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int iStack_230;
  int local_22c;
  undefined4 local_228;
  undefined4 *puStack_224;
  undefined4 uStack_220;
  int iStack_21c;
  undefined1 local_218 [260];
  undefined1 local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b3f59;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&iStack_230;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffdc0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_22c = param_3;
  if ((((param_7 != 0) && (param_1 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (DAT_00b125e8 != '\0')))) {
    cVar1 = FUN_004b9cb0(uVar2);
    if (cVar1 != '\0') {
      puVar4 = (undefined4 *)0x0;
      cVar1 = FUN_007b2a00(*(undefined4 *)(in_ECX + 0xc));
      if (cVar1 == '\0') {
        FUN_004b9c40(local_114);
        FUN_0047d8f0(local_114,local_218);
        uVar3 = (**(code **)(*DAT_00b35300 + 4))(local_218,0);
        FUN_00405070(uVar3);
        iStack_4 = 0;
        if (iStack_230 == 0) {
          iStack_21c = FUN_00401f00(0x1c);
          iStack_4._0_1_ = 1;
          if (iStack_21c == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_004ba2d0(in_ECX,param_5,param_6,param_7,param_4,param_1,local_22c);
          }
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_00438670(local_218,uVar3);
          iStack_4 = 0xffffffff;
          FUN_007016a0();
          goto LAB_004bac69;
        }
        puVar4 = (undefined4 *)FUN_004ba780(1);
        iStack_4 = 0xffffffff;
        FUN_007016a0();
        if (puVar4 == (undefined4 *)0x0) goto LAB_004bac69;
      }
      FUN_007b20b0();
      uStack_220 = *(undefined4 *)(in_ECX + 0xc);
      local_228 = 0;
      puStack_224 = puVar4;
      FUN_007b4010(param_5,param_6,param_7,&local_228,param_1,local_22c,param_4);
      if (puStack_224 != (undefined4 *)0x0) {
        (**(code **)*puStack_224)(1);
      }
    }
  }
LAB_004bac69:
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_004baca0(int *param_1)

{
  ushort uVar1;
  int in_ECX;
  uint uVar2;
  
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (*(ushort *)(in_ECX + 10) != 0) {
    do {
      if (*(int *)(*(int *)(in_ECX + 4) + (uint)uVar1 * 4) == 0) {
        *(int *)(*(int *)(in_ECX + 4) + (uint)uVar1 * 4) = *param_1;
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
        return (uint)uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(in_ECX + 10));
  }
  uVar2 = (uint)*(ushort *)(in_ECX + 10);
  if (*(ushort *)(in_ECX + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(in_ECX + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,param_1);
  return uVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004bad20(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *_Dst;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x1e') {
    FUN_00451210(in_ECX);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4d414e44) {
        if (iVar3 == 0x4d414e43) {
          if (*(int *)(param_1 + 0x254) == 0x20) {
            FUN_00450c20(in_ECX + 0x16,0x20);
          }
        }
        else if (iVar3 < 0x4c444f4e) {
          if ((iVar3 == 0x4c444f4d) || (iVar3 == 0x42444f4d)) {
LAB_004bae22:
            if (in_ECX == (int *)0x0) {
              FUN_0046db00(0,param_1);
            }
            else {
              FUN_0046db00(in_ECX + 9,param_1);
            }
          }
          else if (iVar3 == 0x44494445) {
            FUN_00450c20(&stack0xffffffe4,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffe4);
          }
        }
        else if ((iVar3 == 0x4d414e42) && (*(int *)(param_1 + 0x254) == 8)) {
          FUN_00450c20(in_ECX + 0x1e,8);
        }
      }
      else if (iVar3 == 0x4d414e53) {
        uVar5 = *(uint *)(param_1 + 0x254);
        if ((uVar5 != 0) && ((uVar5 & 3) == 0)) {
          uVar4 = uVar5 >> 2;
          _Dst = (int *)FUN_00401f00(uVar4 * 4);
          _memset(_Dst,0,uVar5);
          FUN_00450c20(_Dst,uVar5);
          FUN_0065dd90();
          piVar6 = _Dst;
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            if (*piVar6 != 0) {
              uVar5 = (uint)*(ushort *)((int)in_ECX + 0x52);
              if (*(ushort *)(in_ECX + 0x14) <= uVar5) {
                FUN_004e4a10(*(ushort *)((int)in_ECX + 0x56) + uVar5);
              }
              FUN_0042bb90(uVar5,piVar6);
            }
            piVar6 = piVar6 + 1;
          }
          FUN_00401f20(_Dst);
        }
      }
      else if (iVar3 == 0x4e4f4349) {
        if (in_ECX == (int *)0x0) {
          FUN_004700e0(0,param_1);
        }
        else {
          FUN_004700e0(in_ECX + 0xf,param_1);
        }
      }
      else if (iVar3 == 0x54444f4d) goto LAB_004bae22;
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004bb000(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_00470070(0x4e4f4349);
  FUN_0046ef80();
  FUN_0046a7b0();
  FUN_0046bbb0(in_ECX + 0x90,0x10);
  FUN_0046b9f0();
  return;
}



undefined4 FUN_004bb060(void)

{
  int in_ECX;
  
  return *(undefined4 *)(&DAT_00b086a0 + *(char *)(in_ECX + 0x90) * 4);
}



short FUN_004bb070(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = FUN_0046ac50(param_1);
  sVar2 = FUN_00470400(param_1);
  return sVar2 + sVar1;
}



void FUN_004bb0a0(undefined4 param_1)

{
  FUN_0046b5e0(param_1);
  FUN_00470420(param_1);
  return;
}



void FUN_004bb0c0(undefined4 param_1,undefined4 param_2)

{
  FUN_0046b600(param_1,param_2);
  FUN_00470440(param_1,param_2);
  return;
}



void FUN_004bb120(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    FUN_0046f020(in_ECX);
    FUN_0046a880(in_ECX);
    FUN_0046ab80(1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004bb150(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '!') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 < 0x4c4c5547) {
        if (iVar2 == 0x4c4c5546) {
          if (in_ECX == (int *)0x0) {
            FUN_0046c7a0(0,param_1);
          }
          else {
            FUN_0046c7a0(in_ECX + 9,param_1);
          }
        }
        else if (iVar2 < 0x44494446) {
          if (iVar2 == 0x44494445) {
            FUN_00450c20(&stack0xffffffec,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
          }
          else if (iVar2 == 0x41544144) {
            FUN_0046bda0(param_1,in_ECX + 0x24,0x10);
          }
          else if (iVar2 == 0x42444f4d) goto LAB_004bb2d1;
        }
        else if (iVar2 == 0x49524353) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x16] = local_c;
          FUN_0046f020(in_ECX);
        }
        else if (iVar2 == 0x4c444f4d) {
LAB_004bb2d1:
          if (in_ECX == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = in_ECX + 0xc;
          }
          FUN_0046db00(piVar3,param_1);
        }
      }
      else if (iVar2 < 0x4e4f434a) {
        if (iVar2 == 0x4e4f4349) {
          if (in_ECX == (int *)0x0) {
            FUN_004700e0(0,param_1);
          }
          else {
            FUN_004700e0(in_ECX + 0x12,param_1);
          }
        }
        else if (iVar2 == 0x4d414e41) {
          local_c = 0;
          FUN_004510f0(&local_c);
          *(undefined2 *)(in_ECX + 0x1a) = (undefined2)local_c;
        }
        else if (iVar2 == 0x4d414e45) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x19] = local_c;
        }
      }
      else if (iVar2 == 0x54444f4d) goto LAB_004bb2d1;
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_004510b0();
    }
    if ('\x05' < (char)in_ECX[0x24]) {
      uVar4 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
      FUN_004a7a60("Clearing invalid type on weapon \'%s\' (%08X).",uVar4);
      *(undefined1 *)(in_ECX + 0x24) = 0;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



void FUN_004bb350(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036fc,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(iVar1 + 0x90);
    *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(iVar1 + 0x94);
    *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(iVar1 + 0x98);
    *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(iVar1 + 0x9c);
    *(undefined1 *)(in_ECX + 4) = *(undefined1 *)(iVar1 + 4);
  }
  return;
}



void FUN_004bb4b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b40ad;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a45354;
  in_ECX[9] = &PTR_FUN_00a4533c;
  in_ECX[0xc] = &PTR_FUN_00a4531c;
  in_ECX[0x12] = &PTR_FUN_00a45300;
  in_ECX[0x15] = &PTR_LAB_00a452ec;
  in_ECX[0x18] = &PTR_LAB_00a452d4;
  in_ECX[0x1c] = &PTR_LAB_00a452b4;
  in_ECX[0x1e] = &PTR_LAB_00a452a0;
  in_ECX[0x20] = &PTR_LAB_00a45288;
  in_ECX[0x22] = &PTR_LAB_00a45270;
  local_4 = 7;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 6;
  FUN_004689a0();
  local_4._0_1_ = 5;
  FUN_0046c9b0();
  local_4._0_1_ = 4;
  FUN_00470580();
  local_4._0_1_ = 3;
  FUN_004703b0();
  local_4._0_1_ = 2;
  FUN_00470040();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046d850();
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bb610(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b412b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  in_ECX[9] = &PTR_FUN_00a322a0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046d7e0();
  local_4._0_1_ = 2;
  FUN_0046ffd0();
  in_ECX[0x12] = &PTR_FUN_00a320a4;
  local_4._0_1_ = 3;
  FUN_0046ef60();
  FUN_0046a790();
  FUN_00470470();
  local_4._0_1_ = 4;
  FUN_004705a0();
  local_4._0_1_ = 5;
  FUN_0046ca50();
  local_4._0_1_ = 6;
  FUN_00468a60();
  *in_ECX = &PTR_FUN_00a45354;
  in_ECX[9] = &PTR_FUN_00a4533c;
  in_ECX[0xc] = &PTR_FUN_00a4531c;
  in_ECX[0x12] = &PTR_FUN_00a45300;
  in_ECX[0x15] = &PTR_LAB_00a452ec;
  in_ECX[0x18] = &PTR_LAB_00a452d4;
  in_ECX[0x1c] = &PTR_LAB_00a452b4;
  in_ECX[0x1e] = &PTR_LAB_00a452a0;
  in_ECX[0x20] = &PTR_LAB_00a45288;
  in_ECX[0x22] = &PTR_LAB_00a45270;
  *(undefined1 *)(in_ECX + 1) = 0x21;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  in_ECX[0x27] = 0;
  thunk_FUN_0046b090();
  in_ECX[0x1b] = 2;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bb760(byte param_1)

{
  FUN_004bb4b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004bb790(void)

{
  FUN_00414c70();
  thunk_FUN_0046b170();
  return;
}



void FUN_004bb7b0(void)

{
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_00470070(0x4e4f4349);
  FUN_0046ef80();
  FUN_00414a20();
  FUN_0046bbb0(0,0);
  FUN_0046b9f0();
  return;
}



void FUN_004bb810(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b06ac0,0);
  if (iVar1 != 0) {
    FUN_004b9540(param_1);
    FUN_00414dc0(iVar1 + 0x78);
  }
  return;
}



void FUN_004bb8a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b4163;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b9860(uVar1);
  local_4 = 0;
  FUN_00470330();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00414a00();
  *in_ECX = &PTR_FUN_00a45534;
  in_ECX[9] = &PTR_FUN_00a45520;
  in_ECX[0xc] = &PTR_FUN_00a45500;
  in_ECX[0x12] = &PTR_FUN_00a454e4;
  in_ECX[0x15] = &PTR_LAB_00a454d0;
  in_ECX[0x18] = &PTR_LAB_00a454b0;
  in_ECX[0x1a] = &PTR_LAB_00a4549c;
  in_ECX[0x1c] = &PTR_LAB_00a45488;
  in_ECX[0x1e] = &PTR_FUN_00a45478;
  *(undefined1 *)(in_ECX + 1) = 0x2a;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bb960(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b41af;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a45534;
  in_ECX[9] = &PTR_FUN_00a45520;
  in_ECX[0xc] = &PTR_FUN_00a45500;
  in_ECX[0x12] = &PTR_FUN_00a454e4;
  in_ECX[0x15] = &PTR_LAB_00a454d0;
  in_ECX[0x18] = &PTR_LAB_00a454b0;
  in_ECX[0x1a] = &PTR_LAB_00a4549c;
  in_ECX[0x1c] = &PTR_LAB_00a45488;
  in_ECX[0x1e] = &PTR_FUN_00a45478;
  local_4 = 1;
  FUN_00414c70(uVar1);
  thunk_FUN_0046b170();
  local_4 = local_4 & 0xffffff00;
  FUN_00470310();
  local_4 = 0xffffffff;
  FUN_004b9770();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bba10(byte param_1)

{
  FUN_004bb960();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004bba30(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '*') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x49524354) {
        if (iVar3 == 0x49524353) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x16] = local_c;
          FUN_0046f020(in_ECX);
        }
        else if (iVar3 < 0x44494446) {
          if (iVar3 == 0x44494445) {
            FUN_00450c20(&stack0xffffffec,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
          }
          else if (iVar3 == 0x41544144) {
            FUN_0046bda0(param_1,0,0);
          }
          else if (iVar3 == 0x42444f4d) goto LAB_004bbb8b;
        }
        else if (iVar3 == 0x44494645) {
          puVar4 = (undefined1 *)in_ECX[10];
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_00a2f7ec;
          }
          FUN_004154b0(param_1,puVar4);
        }
      }
      else if (iVar3 < 0x4e4f434a) {
        if (iVar3 == 0x4e4f4349) {
          if (in_ECX == (int *)0x0) {
            FUN_004700e0(0,param_1);
          }
          else {
            FUN_004700e0(in_ECX + 0x12,param_1);
          }
        }
        else {
          if (iVar3 == 0x4c444f4d) goto LAB_004bbb8b;
          if (iVar3 == 0x4c4c5546) {
            if (in_ECX == (int *)0x0) {
              FUN_0046c7a0(0,param_1);
            }
            else {
              FUN_0046c7a0(in_ECX + 9,param_1);
            }
          }
        }
      }
      else if (iVar3 == 0x54444f4d) {
LAB_004bbb8b:
        if (in_ECX == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = in_ECX + 0xc;
        }
        FUN_0046db00(piVar5,param_1);
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004bbbe0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2dc8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a456f4;
  in_ECX[9] = &PTR_FUN_00a456dc;
  in_ECX[0xc] = &PTR_FUN_00a456bc;
  in_ECX[0x12] = &PTR_FUN_00a456a0;
  in_ECX[0x15] = &PTR_LAB_00a4568c;
  in_ECX[0x18] = &PTR_LAB_00a4566c;
  in_ECX[0x1a] = &PTR_LAB_00a45658;
  local_4 = 0;
  thunk_FUN_0046b170(uVar1);
  local_4 = 0xffffffff;
  FUN_004b9770();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bbc80(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_00470070(0x4e4f4349);
  FUN_0046ef80();
  FUN_0046bbb0(0,0);
  FUN_0046ae40(0x4c554f53,in_ECX + 0x70,1);
  FUN_0046ae40(0x50434c53,in_ECX + 0x71,1);
  FUN_0046b9f0();
  return;
}



void FUN_004bbd10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2dc8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b9860(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a456f4;
  in_ECX[9] = &PTR_FUN_00a456dc;
  in_ECX[0xc] = &PTR_FUN_00a456bc;
  in_ECX[0x12] = &PTR_FUN_00a456a0;
  in_ECX[0x15] = &PTR_LAB_00a4568c;
  in_ECX[0x18] = &PTR_LAB_00a4566c;
  in_ECX[0x1a] = &PTR_LAB_00a45658;
  *(undefined1 *)(in_ECX + 1) = 0x26;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)((int)in_ECX + 0x71) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bbda0(byte param_1)

{
  FUN_004bbbe0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004bbdc0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '&') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4c4c5547) {
        if (iVar3 == 0x4c4c5546) {
          if (in_ECX == (int *)0x0) {
            FUN_0046c7a0(0,param_1);
          }
          else {
            FUN_0046c7a0(in_ECX + 9,param_1);
          }
        }
        else if (iVar3 < 0x44494446) {
          if (iVar3 == 0x44494445) {
            FUN_00450c20(&stack0xffffffec,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
          }
          else if (iVar3 == 0x41544144) {
            FUN_0046bda0(param_1,0,0);
          }
          else if (iVar3 == 0x42444f4d) goto LAB_004bbf42;
        }
        else if (iVar3 == 0x49524353) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x16] = local_c;
          FUN_0046f020(in_ECX);
        }
        else if (iVar3 == 0x4c444f4d) {
LAB_004bbf42:
          if (in_ECX == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = in_ECX + 0xc;
          }
          FUN_0046db00(piVar4,param_1);
        }
      }
      else if (iVar3 < 0x50434c54) {
        if (iVar3 == 0x50434c53) {
          if (*(int *)(param_1 + 0x254) == 1) {
            FUN_00450c20((int)in_ECX + 0x71,1);
          }
        }
        else if (iVar3 == 0x4c554f53) {
          if (*(int *)(param_1 + 0x254) == 1) {
            FUN_00450c20(in_ECX + 0x1c,1);
          }
        }
        else if (iVar3 == 0x4e4f4349) {
          if (in_ECX == (int *)0x0) {
            FUN_004700e0(0,param_1);
          }
          else {
            FUN_004700e0(in_ECX + 0x12,param_1);
          }
        }
      }
      else if (iVar3 == 0x54444f4d) goto LAB_004bbf42;
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004bbf90(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0549c,0);
  if (iVar1 != 0) {
    FUN_004b9540(param_1);
    *(undefined1 *)(in_ECX + 0x70) = *(undefined1 *)(iVar1 + 0x70);
    *(undefined1 *)(in_ECX + 0x71) = *(undefined1 *)(iVar1 + 0x71);
  }
  return;
}



undefined4 FUN_004bc020(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    return DAT_00b38d98;
  case 1:
    return DAT_00b35b3c;
  case 2:
    return DAT_00b35b4c;
  case 3:
    return DAT_00b35b5c;
  case 4:
    return DAT_00b35b6c;
  case 5:
    uVar1 = DAT_00b35b7c;
  }
  return uVar1;
}



undefined4 FUN_004bc070(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    return DAT_00b35b44;
  case 2:
    return DAT_00b35b54;
  case 3:
    return DAT_00b35b64;
  case 4:
    return DAT_00b35b74;
  case 5:
    uVar1 = DAT_00b35b84;
  }
  return uVar1;
}



/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall CButton::~CButton(void)
    public: virtual __thiscall CComboBox::~CComboBox(void)
    public: virtual __thiscall CDateTimeCtrl::~CDateTimeCtrl(void)
    public: virtual __thiscall CDialogBar::~CDialogBar(void)
     19 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void FID_conflict__CProgressCtrl(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b41d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4592c;
  local_4 = 0;
  thunk_FUN_0046b170(uVar1);
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004bc120(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x170))(uVar1);
    if (iVar2 == in_ECX) {
      iVar2 = FUN_00401f00(0xdc);
      uStack_4 = 0;
      if (iVar2 != 0) {
        uVar3 = FUN_0070b780(0);
        *unaff_FS_OFFSET = local_c;
        return uVar3;
      }
      *unaff_FS_OFFSET = local_c;
      return 0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CButton::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CComboBox::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CDateTimeCtrl::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CDialogBar::`scalar deleting destructor'(unsigned int)
     19 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void FID_conflict__scalar_deleting_destructor_(byte param_1)

{
  FID_conflict__CProgressCtrl();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004bc1e0(void)

{
  int in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0046b990();
  local_c = (float)*(ushort *)(in_ECX + 0x24);
  local_8 = (float)*(ushort *)(in_ECX + 0x26);
  local_4 = (float)*(ushort *)(in_ECX + 0x28);
  FUN_0046ae40(0x4d414e44,&local_c,0xc);
  FUN_0046b9f0();
  return;
}



void FUN_004bc290(float *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int in_ECX;
  
  uVar1 = *(ushort *)(in_ECX + 0x26);
  uVar2 = *(ushort *)(in_ECX + 0x28);
  *param_1 = (float)*(ushort *)(in_ECX + 0x24) * 0.5;
  param_1[1] = (float)uVar1 * 0.5;
  param_1[2] = (float)uVar2 * 0.5;
  return;
}



undefined2 FUN_004bc2e0(float *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_24 [36];
  
  if ((((param_2 != (int *)0x0) && (((uint)param_2[2] >> 5 & 1) == 0)) &&
      (iVar2 = (**(code **)(*param_2 + 0x170))(), *(char *)(iVar2 + 4) == ')')) &&
     (iVar2 = (**(code **)(*param_2 + 0x170))(), iVar2 != 0)) {
    fVar5 = (float10)(**(code **)(*param_2 + 0xec))();
    fVar1 = (float)fVar5;
    pfVar3 = (float *)(**(code **)(*param_2 + 0x174))();
    fStack_38 = param_1[1] - pfVar3[1];
    fStack_34 = param_1[2] - pfVar3[2];
    fStack_3c = *param_1 - *pfVar3;
    fVar5 = (float10)FUN_00982c30();
    if ((float)fVar5 < *(float *)(iVar2 + 0x2c) * fVar1) {
      uVar4 = FUN_004d7af0(auStack_24);
      pfVar3 = (float *)FUN_00710250(&fStack_30,&fStack_3c,uVar4);
      fStack_3c = *pfVar3;
      fStack_38 = pfVar3[1];
      fStack_34 = pfVar3[2];
      FUN_004bc290(&fStack_30);
      if (fStack_3c < fVar1 * fStack_30) {
        if (fStack_2c * fVar1 <= fStack_38) {
          return 0;
        }
        if (fStack_34 < fVar1 * fStack_28) {
          if (fStack_3c <= -(fVar1 * fStack_30)) {
            return 0;
          }
          if ((-(fStack_2c * fVar1) < fStack_38) && (-(fVar1 * fStack_28) < fStack_34)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



int * FUN_004bc4a0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float local_4;
  
  local_4 = 3.4028235e+38;
  piVar4 = (int *)0x0;
  for (; param_2 != (int *)0x0; param_2 = (int *)param_2[1]) {
    piVar1 = (int *)*param_2;
    if ((((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 0x170))(), iVar3 != 0)) &&
        (iVar3 = (**(code **)(*piVar1 + 0x170))(), *(char *)(iVar3 + 4) == ')')) &&
       ((cVar2 = FUN_004bc2e0(param_1,piVar1), cVar2 != '\0' &&
        (iVar3 = (**(code **)(*piVar1 + 0x170))(), *(float *)(iVar3 + 0x2c) < local_4)))) {
      local_4 = *(float *)(iVar3 + 0x2c);
      piVar4 = piVar1;
    }
  }
  return piVar4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004bc570(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  float10 extraout_ST0;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == ')') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 == 0x44494445) {
        FUN_00450c20(&stack0xffffffdc,0x200);
        (**(code **)(*in_ECX + 0xd8))(&stack0xffffffdc);
      }
      else if (iVar3 == 0x4d414e44) {
        FUN_00450c20(&local_1c,0xc);
        local_c._0_2_ = (undefined2)(int)ROUND(local_1c);
        *(undefined2 *)(in_ECX + 9) = local_c._0_2_;
        local_c._0_2_ = (undefined2)(int)ROUND(local_18);
        *(undefined2 *)((int)in_ECX + 0x26) = local_c._0_2_;
        local_c = (float)(int)ROUND(local_14);
        *(undefined2 *)(in_ECX + 10) = local_c._0_2_;
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    local_1c = (float)*(ushort *)(in_ECX + 9) * 0.5;
    local_18 = (float)*(ushort *)((int)in_ECX + 0x26) * 0.5;
    local_14 = (float)*(ushort *)(in_ECX + 10) * 0.5;
    local_c = local_14 * local_14 + local_18 * local_18 + local_1c * local_1c;
    FUN_00982c30();
    uVar2 = 1;
    in_ECX[0xb] = (int)(float)extraout_ST0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_004bc7d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b4216;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar4 = 0;
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x170))(uVar1);
    if (*(char *)(iVar2 + 4) == ')') {
      iVar2 = (**(code **)(*param_1 + 0x170))();
      uStack_1c = 0;
      uStack_18 = 0x3f800000;
      uStack_14 = 0x3f800000;
      uStack_10 = 0x3f000000;
      uVar4 = FUN_0047ea60((float)*(ushort *)(iVar2 + 0x24),(float)*(ushort *)(iVar2 + 0x26),
                           (float)*(ushort *)(iVar2 + 0x28),&uStack_1c);
      iVar2 = FUN_00401f00(0x1c);
      uStack_4 = 0;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_0047f920();
      }
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
      uStack_4 = 0xffffffff;
      FUN_00405680(iVar2);
      puVar3 = (undefined4 *)FUN_00401f00(0x1c);
      uStack_4 = 3;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar3 = &PTR_FUN_00a2fd04;
        *(undefined2 *)(puVar3 + 6) = 8;
      }
      uStack_4 = 0xffffffff;
      *(ushort *)(puVar3 + 6) = *(ushort *)(puVar3 + 6) & 0xffd7 | 0x10;
      FUN_00405680(puVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



void FUN_004bc920(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined1 auStack_24 [36];
  
  for (; (param_1 != (int *)0x0 && ((param_1[1] != 0 || (*param_1 != 0))));
      param_1 = (int *)param_1[1]) {
    piVar1 = (int *)*param_1;
    if ((((uint)piVar1[2] >> 5 & 1) == 0) &&
       ((iVar2 = (**(code **)(*piVar1 + 0x170))(), *(char *)(iVar2 + 4) == ')' &&
        (iVar2 = FUN_004bc7d0(piVar1), iVar2 != 0)))) {
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x174))();
      *(undefined4 *)(iVar2 + 0x54) = *puVar3;
      *(undefined4 *)(iVar2 + 0x58) = puVar3[1];
      *(undefined4 *)(iVar2 + 0x5c) = puVar3[2];
      puVar3 = (undefined4 *)FUN_004d7af0(auStack_24);
      puVar5 = (undefined4 *)(iVar2 + 0x30);
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      fVar6 = (float10)(**(code **)(*piVar1 + 0xec))();
      *(float *)(iVar2 + 0x60) = (float)ABS(fVar6);
      FUN_00440e60(iVar2,0x42480000);
    }
  }
  return;
}



void FUN_004bca00(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar2;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab058;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a4592c;
  *(undefined1 *)(in_ECX + 1) = 0x29;
  *(undefined2 *)(in_ECX + 9) = 400;
  *(undefined2 *)((int)in_ECX + 0x26) = 400;
  *(undefined2 *)(in_ECX + 10) = 200;
  fVar2 = (float10)FUN_00982c30();
  in_ECX[0xb] = (float)fVar2;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bca90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_00436fa0(param_1);
  *in_ECX = &PTR_FUN_00a45a68;
  in_ECX[10] = param_2;
  in_ECX[0xb] = param_3;
  return;
}



void FUN_004bcac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c38f8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436fa0(param_2);
  in_ECX[10] = param_3;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a45a68;
  in_ECX[0xb] = param_4;
  FUN_00434600(param_1);
  FUN_00434cb0(0,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bcb70(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 2);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *in_ECX = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 2);
    }
  }
  return;
}



void FUN_004bcbe0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a45ad0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a45af0;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_004bcc30(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a45ad0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004bccb0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  
  ModelLoader_CancelPending_helper2(param_1);
  if ((char)param_1 == '\0') {
    piVar5 = (int *)(*(int *)(in_ECX + 0x2c) + 0x20);
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar5 = 0;
    }
    iVar2 = *(int *)(in_ECX + 0x2c);
    puVar1 = *(undefined4 **)(iVar2 + 0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
  }
  piVar5 = *(int **)(in_ECX + 0x28);
  uVar4 = FUN_004ef1d0(**(undefined4 **)(in_ECX + 0x2c),(*(undefined4 **)(in_ECX + 0x2c))[1]);
  (**(code **)(*piVar5 + 0x10))(uVar4);
  return;
}



void FUN_004bcd70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b4248;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a45af8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a45ad0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bcde0(byte param_1)

{
  FUN_004bcd70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004bce00(void)

{
  undefined4 *puVar1;
  uint uVar2;
  void *_Dst;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b4291;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[4] = 0x25;
  in_ECX[3] = &PTR_FUN_00a45ad0;
  in_ECX[6] = 0;
  _Dst = (void *)FUN_00401f00(0x94,uVar2);
  in_ECX[5] = _Dst;
  _memset(_Dst,0,in_ECX[4] * 4);
  in_ECX[3] = &PTR_FUN_00a45af8;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  puVar1 = (undefined4 *)in_ECX[8];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[8] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[7];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[7] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bcef0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  if ((((param_1 != (int *)0x0) && ((char)param_1[10] != '\0')) && (param_1[8] != 0)) &&
     (param_1[7] != 0)) {
    local_4 = FUN_007b2110((short)*param_1,(short)param_1[1]);
    local_8 = FUN_004ef1d0((short)*piVar1,(short)piVar1[1]);
    local_c = FUN_006a9030();
joined_r0x004bcf57:
    if (local_c != 0) {
      param_1 = (int *)0x0;
      local_10 = (undefined4 *)0x0;
      FUN_00452600(&local_c,&param_1,&local_10);
      puVar2 = local_10;
      if (param_1 != (int *)0x0) goto code_r0x004bcf8a;
      goto LAB_004bcfc0;
    }
    FUN_007c2a40();
    if (2 < *(uint *)(piVar1[8] + 4)) {
      (**(code **)(*DAT_00b34424 + 0x84))(piVar1[8],1);
    }
    FUN_00707370(0,1);
    FUN_00707610();
  }
  return;
code_r0x004bcf8a:
  if (local_10 != (undefined4 *)0x0) {
    if (local_10[0xc] != 0) {
      (**(code **)(*param_1 + 0x11c))
                (local_10[5],local_10[1],local_10[9],local_10[0xc],local_4,local_8,piVar1[7],
                 piVar1[8]);
    }
LAB_004bcfc0:
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[8] = &PTR__scalar_deleting_destructor__00a45af0;
      FUN_00401f20(puVar2[9]);
      puVar2[4] = &PTR__scalar_deleting_destructor__00a45af0;
      FUN_00401f20(puVar2[5]);
      *puVar2 = &PTR__scalar_deleting_destructor__00a45af0;
      FUN_00401f20(puVar2[1]);
      FUN_00401f20(puVar2);
    }
  }
  goto joined_r0x004bcf57;
}



void FUN_004bd050(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a45b1c;
  in_ECX[6] = 0;
  in_ECX[2] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 4),uVar2);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,4,param_2,FUN_004bddb0);
  }
  in_ECX[3] = pvVar3;
  lVar1 = (ulonglong)(uint)(param_1 * 3) * 4;
  local_4 = 0xffffffff;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[1] = uVar4;
  in_ECX[4] = param_3;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bd150(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b42bb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = param_1;
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 0;
  if (puVar1 != (undefined4 *)*param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar3);
      }
    }
    iVar2 = *param_2;
    in_ECX[1] = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 8));
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bd1f0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 6) {
    FUN_004bcef0(*(undefined4 *)(in_ECX + 0x2c));
    piVar1 = *(int **)(in_ECX + 0x28);
    uVar2 = FUN_004ef1d0(**(undefined4 **)(in_ECX + 0x2c),(*(undefined4 **)(in_ECX + 0x2c))[1]);
    (**(code **)(*piVar1 + 0x10))(uVar2);
  }
  return;
}



void FUN_004bd230(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 *local_1c;
  int local_18 [2];
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b4301;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = 0;
  local_4 = 2;
  if (*(uint *)(in_ECX + 0x10) != 0) {
    piVar5 = *(int **)(in_ECX + 0x14);
    do {
      if (*piVar5 != 0) {
        local_18[0] = (*(int **)(in_ECX + 0x14))[uVar3];
        goto joined_r0x004bd291;
      }
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x10));
  }
  local_18[0] = 0;
joined_r0x004bd291:
  while (local_18[0] != 0) {
    local_1c = (undefined4 *)0x0;
    FUN_00452600(local_18,local_10,&local_1c);
    puVar1 = local_1c;
    if (local_1c != (undefined4 *)0x0) {
      local_1c[8] = &PTR__scalar_deleting_destructor__00a45af0;
      FUN_00401f20(local_1c[9]);
      puVar1[4] = &PTR__scalar_deleting_destructor__00a45af0;
      FUN_00401f20(puVar1[5]);
      *puVar1 = &PTR__scalar_deleting_destructor__00a45af0;
      FUN_00401f20(puVar1[1]);
      FUN_00401f20(puVar1);
    }
  }
  FUN_007c2a40(uVar2);
  puVar1 = *(undefined4 **)(in_ECX + 0x20);
  local_4._0_1_ = 1;
  if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  local_4 = (uint)local_4._1_3_ << 8;
  if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_4 = 0xffffffff;
  FUN_004bcd70();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bd380(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  LONG LVar4;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *unaff_retaddr;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b4328;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (uint)&local_c;
  uVar3 = FUN_004ef1d0(param_1,param_2);
  param_2 = 0;
  local_4 = 0;
  cVar1 = (**(code **)(*in_ECX + 4))(uVar3,&param_2);
  if (cVar1 != '\0') {
    IOManager_TaskStateTransition(unaff_retaddr);
  }
  local_c = 0xffffffff;
  if (unaff_retaddr != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(unaff_retaddr + 2);
    if ((LVar4 == 0) && (unaff_retaddr != (undefined4 *)0x0)) {
      (**(code **)*unaff_retaddr)(1);
    }
  }
  *unaff_FS_OFFSET = uVar2;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004bd430(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 int param_6,int param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  LONG LVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int *piStack_140;
  int *local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  int *local_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b4385;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_124;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = (undefined4 *)0x0;
  local_120 = param_4;
  local_124 = param_5;
  if (param_1 == 0) goto LAB_004bd6b0;
  piStack_140 = param_2;
  cVar1 = FUN_004bde80();
  if (cVar1 != '\0') goto LAB_004bd6b0;
  iVar2 = FUN_004ef1a0();
  if (iVar2 != 0) {
    param_1 = FUN_004ef1a0();
  }
  if (param_7 == 2) {
    piStack_140 = param_2;
    cVar1 = FUN_004f0da0();
    if (cVar1 == '\0') goto LAB_004bd6b0;
  }
  piStack_140 = (int *)0x4bd4e9;
  local_11c = (undefined1 *)FUN_00401f00();
  local_4 = 0;
  if (local_11c != (undefined1 *)0x0) {
    puVar5 = (undefined4 *)FUN_004bce00();
  }
  local_4 = 0xffffffff;
  puVar5[2] = param_1;
  *puVar5 = param_2;
  puVar5[1] = param_3;
  piStack_140 = (int *)0x4bd524;
  FUN_0075fa90();
  piStack_140 = (int *)0x4bd531;
  FUN_0075fa90();
  piStack_140 = param_2;
  *(undefined1 *)(puVar5 + 10) = 0;
  puVar5[9] = param_7;
  local_120 = FUN_004ef1d0();
  local_124 = (int *)0x0;
  local_4 = 1;
  if (DAT_00b09db0 == '\0') {
    piStack_140 = (int *)0x4bd5f7;
    local_11c = (undefined1 *)FUN_00401f00();
    local_4._0_1_ = 3;
    if (local_11c != (undefined1 *)0x0) {
      piStack_140 = local_118;
      FUN_004bca90((&DAT_00a45a58)[param_6]);
    }
LAB_004bd62a:
    local_4 = CONCAT31(local_4._1_3_,1);
    piStack_140 = (int *)0x4bd63c;
    FUN_004bcb70();
    piVar6 = local_124;
    if (local_124 == (int *)0x0) goto LAB_004bd679;
    local_11c = (undefined1 *)&piStack_140;
    piStack_140 = local_124;
    InterlockedIncrement(local_124 + 2);
    (**(code **)(*local_118 + 0xc))(local_120);
    (**(code **)(*g_IOManager_singleton + 0x3c))(piVar6);
  }
  else {
    piStack_140 = param_2;
    uVar3 = (**(code **)(*(int *)puVar5[2] + 0xd4))();
    _sprintf(acStack_114,"DistantLOD\\%s_%i_%i.lod",uVar3);
    piVar6 = (int *)0x0;
    if (DAT_00b33a04 != (int *)0x0) {
      piStack_140 = (int *)0x0;
      iVar2 = (**(code **)(*DAT_00b33a04 + 4))(acStack_114,0);
      if (iVar2 != 0) {
        piStack_140 = (int *)0x4bd5ba;
        local_11c = (undefined1 *)FUN_00401f00();
        local_4._0_1_ = 2;
        if (local_11c != (undefined1 *)0x0) {
          piStack_140 = local_118;
          FUN_004bcac0(acStack_114,(&DAT_00a45a58)[param_6]);
        }
        goto LAB_004bd62a;
      }
    }
LAB_004bd679:
    FUN_004bd230();
    piStack_140 = (int *)0x4bd686;
    FUN_00401f20();
  }
  local_4 = 0xffffffff;
  if (piVar6 != (int *)0x0) {
    piStack_140 = (int *)0x4bd6a2;
    LVar4 = InterlockedDecrement(piVar6 + 2);
    if (LVar4 == 0) {
      piStack_140 = (int *)0x4bd6b0;
      (**(code **)*piVar6)();
    }
  }
LAB_004bd6b0:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bd6e0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac408;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a45a68;
  iVar1 = in_ECX[0xb];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_004bd230(uVar2);
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_00436fd0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bd750(void)

{
  int in_ECX;
  
  if (in_ECX != 0) {
    InterlockedIncrement((LONG *)(in_ECX + 8));
  }
  FUN_0043a5f0();
  return;
}



undefined4 FUN_004bd780(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *piVar7;
  
  do {
    cVar2 = FUN_0043c070(param_1,param_2);
    if (cVar2 == '\0') {
      uVar6 = 0;
      goto LAB_004bd879;
    }
    uVar3 = in_ECX[6] & 0xfffffffe;
    uVar4 = InterlockedCompareExchange
                      ((LONG *)((in_ECX[5] & 0xfffffffe) + 8),in_ECX[6] & 0xfffffffe | 1,uVar3);
  } while (uVar4 != uVar3);
  piVar7 = (int *)((in_ECX[5] & 0xfffffffe) + 4);
  puVar1 = (undefined4 *)*piVar7;
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 2);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *piVar7 = 0;
  }
  uVar4 = in_ECX[5];
  uVar3 = InterlockedCompareExchange((LONG *)in_ECX[4],uVar3,uVar4 & 0xfffffffe);
  if (uVar3 == (uVar4 & 0xfffffffe)) {
    FUN_0043ab20(in_ECX[5] & 0xfffffffe);
  }
  else {
    FUN_0043c070(param_1,param_2);
  }
  (**(code **)(*(int *)*in_ECX + 0x34))();
  uVar6 = 1;
LAB_004bd879:
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  return uVar6;
}



void FUN_004bd8a0(byte param_1)

{
  FUN_004bd6e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004bd8c0(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 local_20 [4];
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b43d0;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = &PTR_FUN_00a45ac8;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  do {
    local_24 = (undefined4 *)0x0;
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar2 = FUN_00642d90(&local_1c,local_20,&local_24,1);
    puVar1 = local_24;
    if (cVar2 != '\0') {
      IOManager_TaskStateTransition(local_24);
    }
    local_4 = local_4 & 0xffffff00;
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1,uVar3);
      }
    }
  } while ((local_10 & 2) == 0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void thunk_FUN_004bd8c0(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_24;
  undefined1 auStack_20 [4];
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  byte bStack_10;
  int iStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_009b43d0;
  iStack_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&iStack_c;
  ppuStack_1c = &PTR_FUN_00a45ac8;
  uStack_18 = 0;
  uStack_14 = 0;
  bStack_10 = 0;
  uStack_4 = 0;
  do {
    puStack_24 = (undefined4 *)0x0;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    cVar2 = FUN_00642d90(&ppuStack_1c,auStack_20,&puStack_24,1);
    puVar1 = puStack_24;
    if (cVar2 != '\0') {
      IOManager_TaskStateTransition(puStack_24);
    }
    uStack_4 = uStack_4 & 0xffffff00;
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1,uVar3);
      }
    }
  } while ((bStack_10 & 2) == 0);
  *unaff_FS_OFFSET = iStack_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004bd990(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  LONG LVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int local_1d4;
  int local_1d0;
  undefined4 *local_1cc;
  int local_1c8 [3];
  int *local_1bc;
  undefined4 local_1b8;
  undefined **local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  byte local_1a8;
  undefined1 local_1a4 [4];
  char local_1a0 [400];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b4406;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_1d4;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffe1c;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = *param_3;
  local_1b8 = *param_2;
  local_1bc = param_3;
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  local_1c8[2] = 0;
  local_1b4 = &PTR_FUN_00a45ac8;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_4 = 0;
  local_1d0 = iVar7;
  do {
    local_1cc = (undefined4 *)0x0;
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar2 = FUN_00642d90(&local_1b4,local_1a4,&local_1cc,1);
    puVar1 = local_1cc;
    if (cVar2 != '\0') {
      uVar4 = __allshr(uVar3);
      iVar5 = 0;
      do {
        if ((&DAT_00a45a58)[iVar5] == (uVar4 & 0xff)) {
          local_1c8[iVar5] = local_1c8[iVar5] + 1;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
    }
    local_4 = local_4 & 0xffffff00;
    if ((puVar1 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar1 + 2), LVar6 == 0)) {
      (**(code **)*puVar1)(1);
    }
    if ((local_1a8 & 2) != 0) {
      _sprintf(local_1a0,"High LOD to load: %d",local_1c8[0]);
      local_1d4 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(local_1a0,(float)local_1d4,(float)local_1d0,3,0xffffffff);
      iVar7 = iVar7 + param_1;
      local_1d0 = iVar7;
      _sprintf(local_1a0,"Mid LOD to load: %d",local_1c8[1]);
      local_1d4 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(local_1a0,(float)local_1d4,(float)local_1d0,3,0xffffffff);
      iVar7 = iVar7 + param_1;
      local_1d0 = iVar7;
      _sprintf(local_1a0,"Low LOD to load: %d",local_1c8[2]);
      local_1d4 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(local_1a0,(float)local_1d4,(float)local_1d0,3,0xffffffff);
      *param_2 = local_1b8;
      *local_1bc = iVar7 + param_1;
      *unaff_FS_OFFSET = local_c;
      return;
    }
  } while( true );
}



void FUN_004bdbd0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  
  puVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  uVar2 = (**(code **)(*(int *)*puVar1 + 0x1c))(param_1,param_1);
  FUN_004bd780(uVar2,param_1);
  return;
}



void FUN_004bdc50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b4448;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_004bd8c0(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_LAB_00a45b1c;
  FUN_00642e50(1);
  FUN_00401f20(in_ECX[3]);
  FUN_00401f20(in_ECX[1]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bdcd0(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b35b8c == 0) {
    iVar2 = FUN_00401f00(0x1c,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      DAT_00b35b8c = 0;
    }
    else {
      FUN_004bd050(2,0x25,0xc);
      DAT_00b35b8c = iVar2;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004bdd40(void)

{
  int iVar1;
  
  iVar1 = DAT_00b35b8c;
  if (DAT_00b35b8c != 0) {
    FUN_004bdc50();
    FUN_00401f20(iVar1);
    DAT_00b35b8c = 0;
  }
  return;
}



void FUN_004bdda0(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x004bdda5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x38))();
  return;
}



void FUN_004bddb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  return;
}



void FUN_004bddc0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 2);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void FUN_004bddf0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 6) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x1c) + 0xc);
    if (((iVar1 != 0) && (*(char *)(*(int *)(in_ECX + 0x1c) + 0x10) != '\0')) &&
       (iVar3 = FUN_004ca790(), iVar3 != 0)) {
      FUN_00442740(iVar1);
    }
  }
  *(undefined1 *)(*(int *)(in_ECX + 0x1c) + 0x10) = 0;
  piVar2 = *(int **)(in_ECX + 0x18);
  uVar4 = FUN_004ef1d0(**(undefined4 **)(in_ECX + 0x1c),(*(undefined4 **)(in_ECX + 0x1c))[1]);
  (**(code **)(*piVar2 + 0x10))(uVar4);
  return;
}



undefined1 FUN_004bde80(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  LONG LVar4;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  undefined4 *unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b4478;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = FUN_004ef1d0(param_1,param_2,uVar2);
  param_2 = 0;
  local_4 = 0;
  uVar1 = (**(code **)(*in_ECX + 4))(uVar3,&param_2);
  local_c = -1;
  if (unaff_retaddr != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(unaff_retaddr + 2);
    if ((LVar4 == 0) && (unaff_retaddr != (undefined4 *)0x0)) {
      (**(code **)*unaff_retaddr)(1);
    }
  }
  *unaff_FS_OFFSET = unaff_ESI;
  return uVar1;
}



void FUN_004bdf20(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[3] == 0) {
      iVar2 = FUN_004f1630(*param_1,param_1[1]);
      param_1[3] = iVar2;
      if (iVar2 == 0) {
        iVar2 = FUN_00401f00(0x58);
        local_4 = 0;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_004d3210();
        }
        local_4 = 0xffffffff;
        param_1[3] = uVar3;
        FUN_004c9f90(1);
        FUN_004c9800(0);
        FUN_004ca710();
        FUN_004c9ac0(*param_1,param_1[1]);
        FUN_004efef0(param_1[3]);
      }
    }
    FUN_004d58b0(uVar1);
    iVar2 = FUN_004ce3c0();
    if (iVar2 != 0) {
      FUN_004c79a0(1);
      FUN_004c5ba0(*(undefined1 *)(DAT_00b333a0 + 0x53));
    }
    iVar2 = FUN_004af170();
    if (iVar2 != 0) {
      FUN_004e7610();
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004be040(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00436500(0);
  in_ECX[6] = param_1;
  *in_ECX = &PTR_FUN_00a45be8;
  in_ECX[7] = param_2;
  return;
}



void FUN_004be070(void)

{
  int in_ECX;
  
  FUN_004bdf20(*(undefined4 *)(in_ECX + 0x1c));
  FUN_004cd090();
  return;
}



void FUN_004be090(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  LONG LVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac708;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iVar2 = FUN_004efe80();
    if (iVar2 != 0) {
      cVar1 = FUN_004c97f0();
      if (cVar1 == '\0') {
        cVar1 = FUN_0043fea0();
      }
      else {
        cVar1 = FUN_0043fd40();
      }
      if (cVar1 != '\0') {
        FUN_00442740();
        goto LAB_004be1e0;
      }
    }
    cVar1 = FUN_004bde80();
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)FUN_00401f00();
      puVar3[2] = param_1;
      *puVar3 = param_2;
      puVar3[1] = param_3;
      *(undefined1 *)(puVar3 + 4) = 0;
      puVar3[3] = 0;
      iVar2 = FUN_00401f00();
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_004be040();
      }
      if (puVar3 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar3 + 2);
      }
      local_4 = 0;
      uVar4 = FUN_004ef1d0();
      if (puVar3 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar3 + 2);
      }
      (**(code **)(*in_ECX + 0xc))(uVar4);
      (**(code **)(*g_IOManager_singleton + 0x3c))(puVar3);
      local_4 = 0xffffffff;
      if ((puVar3 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar3 + 2), LVar5 == 0)) {
        (**(code **)*puVar3)();
      }
    }
  }
LAB_004be1e0:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004be200(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a45c0c;
  in_ECX[6] = 0;
  in_ECX[2] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 4),uVar2);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,4,param_2,FUN_004bddb0);
  }
  in_ECX[3] = pvVar3;
  lVar1 = (ulonglong)(uint)(param_1 * 3) * 4;
  local_4 = 0xffffffff;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[1] = uVar4;
  in_ECX[4] = param_3;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004be2f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a45be8;
  FUN_00401f20(in_ECX[7]);
  *in_ECX = &PTR_FUN_00a36710;
  InterlockedDecrement((LONG *)&DAT_00b35b94);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004be330(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  LONG LVar5;
  int *in_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009acc58;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar6 = DAT_00b06a2c;
  local_10 = in_ECX;
  for (uVar7 = 0; uVar7 < uVar6; uVar7 = uVar7 + 1) {
    for (uVar8 = 0; uVar8 < uVar6; uVar8 = uVar8 + 1) {
      uVar4 = FUN_004ef1d0((uVar7 - ((int)uVar6 >> 1)) + param_1,
                           (uVar8 - ((int)uVar6 >> 1)) + param_2,uVar3);
      local_10 = (int *)0x0;
      local_4 = 0;
      cVar2 = (**(code **)(*in_ECX + 4))(uVar4,&local_10);
      if (cVar2 != '\0') {
        IOManager_TaskStateTransition(local_10);
      }
      piVar1 = local_10;
      local_4 = 0xffffffff;
      if (local_10 != (int *)0x0) {
        LVar5 = InterlockedDecrement(local_10 + 2);
        if ((LVar5 == 0) && (piVar1 != (int *)0x0)) {
          (**(code **)*piVar1)(1);
        }
      }
      uVar6 = DAT_00b06a2c;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004be420(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 local_20 [4];
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b44f0;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = &PTR_FUN_00a45be0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  do {
    local_24 = (undefined4 *)0x0;
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar2 = FUN_00642d90(&local_1c,local_20,&local_24,1);
    puVar1 = local_24;
    if (cVar2 != '\0') {
      IOManager_TaskStateTransition(local_24);
    }
    local_4 = local_4 & 0xffffff00;
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1,uVar3);
      }
    }
  } while ((local_10 & 2) == 0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004be4e0(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  int *local_24;
  undefined1 local_20 [4];
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b44f0;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = &PTR_FUN_00a45be0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  do {
    local_24 = (int *)0x0;
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar2 = FUN_00642d90(&local_1c,local_20,&local_24,1);
    piVar1 = local_24;
    if ((cVar2 != '\0') && (3 < local_24[3])) {
      (**(code **)(*local_24 + 0x14))(uVar3);
    }
    local_4 = local_4 & 0xffffff00;
    if (piVar1 != (int *)0x0) {
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)*piVar1)(1);
      }
    }
  } while ((local_10 & 2) == 0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void thunk_FUN_004be420(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_24;
  undefined1 auStack_20 [4];
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  byte bStack_10;
  int iStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_009b44f0;
  iStack_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&iStack_c;
  ppuStack_1c = &PTR_FUN_00a45be0;
  uStack_18 = 0;
  uStack_14 = 0;
  bStack_10 = 0;
  uStack_4 = 0;
  do {
    puStack_24 = (undefined4 *)0x0;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    cVar2 = FUN_00642d90(&ppuStack_1c,auStack_20,&puStack_24,1);
    puVar1 = puStack_24;
    if (cVar2 != '\0') {
      IOManager_TaskStateTransition(puStack_24);
    }
    uStack_4 = uStack_4 & 0xffffff00;
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1,uVar3);
      }
    }
  } while ((bStack_10 & 2) == 0);
  *unaff_FS_OFFSET = iStack_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004be5b0(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_1c8;
  undefined4 local_1c4;
  undefined4 *local_1c0;
  int *local_1bc;
  undefined4 *puStack_1b8;
  undefined **ppuStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  byte bStack_1a8;
  undefined1 auStack_1a4 [4];
  char acStack_1a0 [400];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b4526;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_1c8;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffe28;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar9 = *param_2;
  local_1bc = param_2;
  local_1c4 = *param_3;
  local_1c0 = param_3;
  local_1c8 = iVar9;
  uVar6 = (**(code **)(*in_ECX + 0x38))(uVar5);
  _sprintf(acStack_1a0,"Exteriors to load: %d",uVar6);
  FUN_0057b8e0(acStack_1a0,(float)DAT_00b02e24,(float)local_1c8,1,0xffffffff);
  iVar9 = iVar9 + param_1;
  ppuStack_1b4 = &PTR_FUN_00a45be0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  bStack_1a8 = 0;
  uStack_4 = 0;
  local_1c8 = iVar9;
  do {
    puStack_1b8 = (undefined4 *)0x0;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    cVar4 = FUN_00642d90(&ppuStack_1b4,auStack_1a4,&puStack_1b8,1);
    puVar2 = puStack_1b8;
    if (cVar4 != '\0') {
      puVar1 = (undefined4 *)puStack_1b8[7];
      if ((int *)puVar1[2] == (int *)0x0) {
        puVar7 = &DAT_00a3bc88;
      }
      else {
        puVar7 = (undefined1 *)(**(code **)(*(int *)puVar1[2] + 0xd4))();
      }
      _sprintf(acStack_1a0,"%s - (%i, %i)",puVar7,*puVar1,puVar1[1]);
      FUN_0057b8e0(acStack_1a0,(float)DAT_00b02e24,(float)local_1c8,1,0xffffffff);
      iVar9 = iVar9 + param_1;
      local_1c8 = iVar9;
      if (DAT_00b06c50 + -10 < iVar9) {
        uStack_4 = uStack_4 & 0xffffff00;
        LVar8 = InterlockedDecrement(puVar2 + 2);
        if (LVar8 == 0) {
          (**(code **)*puVar2)(1);
        }
        break;
      }
    }
    uStack_4 = uStack_4 & 0xffffff00;
    if ((puVar2 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar2 + 2), LVar8 == 0)) {
      (**(code **)*puVar2)(1);
    }
  } while ((bStack_1a8 & 2) == 0);
  piVar3 = local_1bc;
  puVar2 = local_1c0;
  if (DAT_00b35b8c == 0) {
    *local_1bc = iVar9;
    *local_1c0 = local_1c4;
  }
  else {
    FUN_004bd990(param_1,local_1bc,local_1c0);
    *piVar3 = iVar9;
    *puVar2 = local_1c4;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004be820(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b4568;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_004be420(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_LAB_00a45c0c;
  FUN_00642e50(1);
  FUN_00401f20(in_ECX[3]);
  FUN_00401f20(in_ECX[1]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004be8a0(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b35b90 == 0) {
    iVar2 = FUN_00401f00(0x1c,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      DAT_00b35b90 = 0;
    }
    else {
      FUN_004be200(2,0x25,0xc);
      DAT_00b35b90 = iVar2;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004be910(void)

{
  int iVar1;
  
  iVar1 = DAT_00b35b90;
  if (DAT_00b35b90 != 0) {
    FUN_004be820();
    FUN_00401f20(iVar1);
    DAT_00b35b90 = 0;
  }
  return;
}



void FUN_004be940(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b45f4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a45c9c;
  local_4 = 3;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(in_ECX + 0xe,0xc,2,FUN_00470040);
  local_4._0_1_ = 1;
  thunk_FUN_005b1d70();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0046d850();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004be9d0(void)

{
  int in_ECX;
  int iVar1;
  
  FUN_0046b990();
  FUN_004eeb30(0x54534c57);
  iVar1 = 0;
  do {
    FUN_00470070(iVar1 + 0x4d414e46);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_0046ae40(0x4d414e54,in_ECX + 0x50,6);
  FUN_0046b9f0();
  return;
}



void FUN_004bec10(byte param_1)

{
  FUN_004be940();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004bec50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b462e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a45c9c;
  FUN_0046d7e0();
  local_4._0_1_ = 1;
  FUN_004eed50();
  local_4 = CONCAT31(local_4._1_3_,2);
  _eh_vector_constructor_iterator_(in_ECX + 0xe,0xc,2,FUN_0046ffd0,FUN_00470040);
  *(undefined1 *)(in_ECX + 1) = 0x2e;
  in_ECX[0x14] = 0;
  *(undefined2 *)(in_ECX + 0x15) = 0;
  *(byte *)((int)in_ECX + 0x55) = *(byte *)((int)in_ECX + 0x55) & 0xc3 | 3;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004becf0(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  
  cVar3 = FUN_004511c0();
  if (cVar3 == '.') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar4 = FUN_004510b0();
    uVar1 = DAT_00b06b18;
    iVar2 = DAT_00b34d88;
    while (DAT_00b06b18 = uVar1, DAT_00b34d88 = iVar2, iVar4 != 0) {
      if (iVar4 < 0x4d414e51) {
        if (iVar4 < 0x4d414e46) {
          if (iVar4 == 0x44494445) {
            FUN_00450c20(&stack0xffffffec,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
          }
          else if (iVar4 == 0x4c444f4d) {
            FUN_0046db00(in_ECX + 6,param_1);
          }
        }
        else if (iVar4 + -0x4d414e46 < 2) {
          FUN_004700e0(in_ECX + iVar4 * 3 + 0x183c153c,param_1);
        }
      }
      else if (iVar4 == 0x4d414e54) {
        FUN_00450c20(in_ECX + 0x14,6);
      }
      else if (iVar4 == 0x54534c57) {
        DAT_00b06b18 = 1;
        FUN_004eedd0(in_ECX + 0xc,param_1);
        DAT_00b06b18 = uVar1;
        if (iVar2 < DAT_00b34d88) {
          uVar5 = (**(code **)(*in_ECX + 0xd4))();
          FUN_004a7a60("Warnings were encountered while loading weather list chunk from climate %s",
                       uVar5);
        }
      }
      cVar3 = FUN_0044fea0();
      if (cVar3 == '\0') break;
      iVar4 = FUN_004510b0();
      uVar1 = DAT_00b06b18;
      iVar2 = DAT_00b34d88;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



void FUN_004bee70(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  FUN_004028d0("Sky\\Sun.dds",0);
  FUN_004028d0("Sky\\SunGlare.dds",0);
  (**(code **)(*(int *)(in_ECX + 0x18) + 0x18))("Sky\\Stars.nif");
  *(undefined1 *)(in_ECX + 0x50) = 0x24;
  *(undefined1 *)(in_ECX + 0x51) = 0x2a;
  *(undefined1 *)(in_ECX + 0x52) = 0x6c;
  *(undefined1 *)(in_ECX + 0x53) = 0x72;
  *(undefined1 *)(in_ECX + 0x54) = 0;
  *(undefined1 *)(in_ECX + 0x55) = 0xc3;
  iVar3 = *(int *)(in_ECX + 0x34);
  while (iVar3 != 0) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x34) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x34));
    *(int *)(in_ECX + 0x34) = iVar3;
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  piVar1 = (int *)FUN_00401f00(8);
  uVar2 = FUN_0046b250(0x15e,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05400,0);
  iVar3 = FUN_009832e6(uVar2);
  *piVar1 = iVar3;
  piVar1[1] = 100;
  if (iVar3 == 0) {
    FUN_00401f20(piVar1);
    FUN_004a7a60("Unable to add default weather to default climate.  ( TESClimate::MakeDefault() )")
    ;
    return;
  }
  FUN_00446cb0(piVar1);
  return;
}



int FUN_004bef40(void)

{
  int in_ECX;
  
  return in_ECX + 0x14;
}



void FUN_004bef50(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = *param_1;
  *(undefined4 *)(in_ECX + 0x18) = param_1[1];
  *(undefined4 *)(in_ECX + 0x1c) = param_1[2];
  return;
}



void FUN_004bef70(void)

{
  int in_ECX;
  
  FUN_0067edc0();
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x14) = DAT_00b3f9a8;
  *(undefined4 *)(in_ECX + 0x18) = DAT_00b3f9ac;
  *(undefined4 *)(in_ECX + 0x1c) = DAT_00b3f9b0;
  return;
}



void FUN_004befa0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x24));
    *(int *)(in_ECX + 0x24) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  FUN_0060d0a0();
  return;
}



void FUN_004befe0(int param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  bool bVar3;
  
  if (param_1 != 0) {
    while (iVar2 = param_1, iVar2 != in_ECX) {
      for (piVar1 = (int *)(in_ECX + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (*piVar1 == iVar2) {
          return;
        }
      }
      FUN_00446cb0(iVar2);
      bVar3 = in_ECX == 0;
      param_1 = in_ECX;
      in_ECX = iVar2;
      if (bVar3) {
        return;
      }
    }
  }
  return;
}



undefined4 FUN_004bf020(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    uVar1 = FUN_004c9a80();
    return uVar1;
  }
  return 0;
}



undefined4 FUN_004bf040(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    uVar1 = FUN_004c9aa0();
    return uVar1;
  }
  return 0;
}



float10 FUN_004bf060(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    return (float10)(*(int *)(*(int *)(in_ECX + 0x24) + 0x98) << 0xc);
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    iVar1 = FUN_004c9a80();
    return (float10)(iVar1 << 0xc);
  }
  return (float10)0;
}



float10 FUN_004bf0a0(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    return (float10)(*(int *)(*(int *)(in_ECX + 0x24) + 0x9c) << 0xc);
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    iVar1 = FUN_004c9aa0();
    return (float10)(iVar1 << 0xc);
  }
  return (float10)0;
}



void FUN_004bf110(undefined4 param_1)

{
  int in_ECX;
  
  FUN_0046c640(param_1);
  if (((char)param_1 != '\0') && (*(int *)(in_ECX + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x004bf13d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x90))();
    return;
  }
  return;
}



byte FUN_004bf150(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x1c) >> 3 & 1;
}



float10 FUN_004bf160(byte param_1,ushort param_2)

{
  int iVar1;
  float *pfVar2;
  int in_ECX;
  float local_4;
  
  local_4 = 0.0;
  if ((((param_1 < 4) && (param_2 < 0x121)) && (iVar1 = *(int *)(in_ECX + 0x24), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x40 + (uint)param_1 * 4) != 0)) {
    pfVar2 = *(float **)(*(int *)(iVar1 + 0x40 + (uint)param_1 * 4) + (uint)param_2 * 4);
    local_4 = *pfVar2 + 0.0 + pfVar2[1] + pfVar2[2] + pfVar2[3] + pfVar2[4] + pfVar2[5] + pfVar2[6]
              + pfVar2[7];
  }
  return (float10)(1.0 - local_4);
}



float10 FUN_004bf210(byte param_1,ushort param_2,ushort param_3)

{
  int iVar1;
  int in_ECX;
  float local_4;
  
  local_4 = 0.0;
  if ((((param_1 < 4) && (param_2 < 0x121)) && (param_3 < 8)) &&
     ((iVar1 = *(int *)(in_ECX + 0x24), iVar1 != 0 &&
      (*(int *)(iVar1 + 0x40 + (uint)param_1 * 4) != 0)))) {
    local_4 = *(float *)(*(int *)(*(int *)(iVar1 + 0x40 + (uint)param_1 * 4) + (uint)param_2 * 4) +
                        (uint)param_3 * 4);
  }
  return (float10)local_4;
}



void FUN_004bf270(byte param_1,ushort param_2,ushort param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  if ((((param_1 < 4) && (param_2 < 0x121)) && (param_3 < 8)) &&
     (iVar1 = *(int *)(in_ECX + 0x24), iVar1 != 0)) {
    uVar2 = (uint)param_1;
    if (0.0 < param_4) {
      *(float *)(*(int *)(*(int *)(iVar1 + 0x40 + uVar2 * 4) + (uint)param_2 * 4) +
                (uint)param_3 * 4) = param_4;
      return;
    }
    if (*(int *)(iVar1 + 0x40 + uVar2 * 4) != 0) {
      *(undefined4 *)
       (*(int *)(*(int *)(iVar1 + 0x40 + uVar2 * 4) + (uint)param_2 * 4) + (uint)param_3 * 4) = 0;
      return;
    }
  }
  return;
}



void FUN_004bf2f0(byte param_1,ushort param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (((param_1 < 4) && (param_2 < 8)) && (*(int *)(in_ECX + 0x24) != 0)) {
    uVar9 = (uint)param_2;
    if (uVar9 < 7) {
      iVar4 = uVar9 * 4;
      do {
        iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + (uint)param_1 * 4 + 0x30);
        puVar2 = (undefined4 *)(iVar5 + 4 + iVar4);
        puVar6 = (undefined4 *)(iVar5 + iVar4);
        iVar4 = iVar4 + 4;
        *puVar6 = *puVar2;
      } while (iVar4 < 0x1c);
    }
    uVar8 = (uint)param_1;
    iVar4 = 0;
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + uVar8 * 4) + 0x1c) = 0;
    if (*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + uVar8 * 4) != 0) {
      do {
        uVar7 = uVar9;
        if (3 < (int)(7 - uVar9)) {
          iVar5 = uVar9 * 4 + 8;
          uVar7 = uVar9 + 4 + (3 - uVar9 & 0xfffffffc);
          do {
            iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + uVar8 * 4) + iVar4);
            *(undefined4 *)(iVar3 + -8 + iVar5) = *(undefined4 *)(iVar3 + -4 + iVar5);
            iVar3 = *(int *)(iVar4 + *(int *)(*(int *)(in_ECX + 0x24) + 0x40 + uVar8 * 4));
            puVar2 = (undefined4 *)(iVar3 + iVar5);
            iVar5 = iVar5 + 0x10;
            *(undefined4 *)(iVar3 + -0x14 + iVar5) = *puVar2;
            iVar3 = *(int *)(iVar4 + *(int *)(*(int *)(in_ECX + 0x24) + 0x40 + uVar8 * 4));
            *(undefined4 *)(iVar3 + -0x10 + iVar5) = *(undefined4 *)(iVar3 + -0xc + iVar5);
            iVar3 = *(int *)(iVar4 + *(int *)(*(int *)(in_ECX + 0x24) + 0x40 + uVar8 * 4));
            *(undefined4 *)(iVar3 + -0xc + iVar5) = *(undefined4 *)(iVar3 + -8 + iVar5);
          } while (iVar5 < 0x18);
        }
        if ((int)uVar7 < 7) {
          iVar5 = uVar7 * 4;
          do {
            iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + uVar8 * 4) + iVar4);
            puVar2 = (undefined4 *)(iVar3 + 4 + iVar5);
            puVar6 = (undefined4 *)(iVar3 + iVar5);
            iVar5 = iVar5 + 4;
            *puVar6 = *puVar2;
          } while (iVar5 < 0x1c);
        }
        piVar1 = (int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + uVar8 * 4) + iVar4);
        iVar4 = iVar4 + 4;
        *(undefined4 *)(*piVar1 + 0x1c) = 0;
      } while (iVar4 < 0x484);
    }
  }
  return;
}



void FUN_004bf440(byte param_1,ushort param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (((param_1 < 4) && (param_2 < 8)) && (*(int *)(in_ECX + 0x24) != 0)) {
    uVar4 = (uint)param_1;
    iVar1 = *(int *)(in_ECX + 0x24);
    iVar3 = (uint)param_2 * 4;
    uVar2 = *(undefined4 *)(iVar1 + 0x20 + uVar4 * 4);
    *(undefined4 *)(iVar1 + 0x20 + uVar4 * 4) =
         *(undefined4 *)(iVar3 + *(int *)(iVar1 + 0x30 + uVar4 * 4));
    *(undefined4 *)(iVar3 + *(int *)(*(int *)(in_ECX + 0x24) + 0x30 + uVar4 * 4)) = uVar2;
    if (*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + uVar4 * 4) != 0) {
      uVar5 = 0;
      do {
        uVar6 = 0;
        _param_1 = 0.0;
        do {
          _param_2 = 0.0;
          if ((((ushort)uVar5 < 0x121) && ((ushort)uVar6 < 8)) &&
             ((iVar1 = *(int *)(in_ECX + 0x24), iVar1 != 0 &&
              (*(int *)(iVar1 + 0x40 + uVar4 * 4) != 0)))) {
            _param_2 = *(float *)(*(int *)(*(int *)(iVar1 + 0x40 + uVar4 * 4) + (uVar5 & 0xffff) * 4
                                          ) + (uVar6 & 0xffff) * 4);
          }
          uVar6 = uVar6 + 1;
          _param_1 = _param_2 + _param_1;
        } while (uVar6 < 8);
        _param_1 = 1.0 - _param_1;
        if (_param_1 < 0.0) {
          _param_1 = 0.0;
        }
        iVar1 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(float *)(iVar3 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + uVar4 * 4) + iVar1)) =
             _param_1;
      } while ((int)uVar5 < 0x121);
    }
  }
  return;
}



float10 FUN_004bf550(uint param_1,uint param_2)

{
  int in_ECX;
  int iVar1;
  float10 fVar2;
  float local_4;
  
  local_4 = 0.0;
  if (((((byte)param_1 < 4) && ((ushort)param_2 < 8)) &&
      (iVar1 = *(int *)(in_ECX + 0x24), iVar1 != 0)) &&
     ((*(int *)(iVar1 + 0x30 + (param_1 & 0xff) * 4) != 0 &&
      (*(int *)(*(int *)(iVar1 + 0x30 + (param_1 & 0xff) * 4) + (param_2 & 0xffff) * 4) != 0)))) {
    iVar1 = 0;
    do {
      fVar2 = (float10)FUN_004bf210(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
      local_4 = (float)(fVar2 + (float10)local_4);
    } while (iVar1 < 0x121);
  }
  return (float10)local_4;
}



void FUN_004bf5c0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint local_20;
  uint local_18;
  int local_14;
  uint local_10;
  
  local_20 = 0;
  iVar13 = 0x40;
  do {
    if ((byte)local_20 < 4) {
      iVar11 = 0;
      if ((*(int *)(in_ECX + 0x24) == 0) ||
         (local_14 = *(int *)(*(int *)(in_ECX + 0x24) + 0x20 + (local_20 & 0xff) * 4), local_14 == 0
         )) goto LAB_004bf600;
      local_14 = local_14 + 0x18;
      local_18 = 0;
    }
    else {
LAB_004bf600:
      iVar11 = 0;
      local_14 = 0;
      local_18 = 0;
    }
    do {
      if (((((byte)local_20 < 4) && ((ushort)local_18 < 8)) &&
          (iVar9 = *(int *)(in_ECX + 0x24), iVar9 != 0)) &&
         (iVar1 = (local_20 & 0xff) * 4 + 0x30, *(int *)(iVar1 + iVar9) != 0)) {
        iVar4 = (local_18 & 0xffff) * 4;
        iVar9 = *(int *)(iVar4 + *(int *)(iVar1 + iVar9));
        if ((iVar9 != 0) && (iVar9 != -0x18)) {
          local_10 = 0;
          iVar9 = 0;
          do {
            if (((local_18 != local_10) && ((byte)local_20 < 4)) &&
               (((ushort)local_10 < 8 &&
                ((iVar7 = *(int *)(in_ECX + 0x24), iVar7 != 0 && (*(int *)(iVar1 + iVar7) != 0))))))
            {
              iVar5 = (local_10 & 0xffff) * 4;
              iVar7 = *(int *)(iVar5 + *(int *)(iVar1 + iVar7));
              if ((iVar7 != 0) &&
                 ((iVar7 = iVar7 + 0x18, iVar7 != 0 && (cVar6 = FUN_004701b0(iVar7), cVar6 == '\0'))
                 )) {
                iVar7 = 0xc;
                do {
                  iVar3 = *(int *)(iVar7 + -0xc + *(int *)(*(int *)(in_ECX + 0x24) + iVar13));
                  iVar8 = iVar7 + 0x20;
                  *(float *)(iVar3 + iVar11) =
                       *(float *)(iVar9 + iVar3) + *(float *)(iVar3 + iVar11);
                  *(undefined4 *)
                   (iVar9 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -0x2c + iVar8)) =
                       0;
                  iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -0x28 + iVar8);
                  *(float *)(iVar3 + iVar11) =
                       *(float *)(iVar9 + iVar3) + *(float *)(iVar3 + iVar11);
                  *(undefined4 *)
                   (iVar9 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -0x28 + iVar8)) =
                       0;
                  iVar3 = *(int *)(iVar7 + -4 + *(int *)(*(int *)(in_ECX + 0x24) + iVar13));
                  *(float *)(iVar3 + iVar11) =
                       *(float *)(iVar9 + iVar3) + *(float *)(iVar3 + iVar11);
                  *(undefined4 *)
                   (iVar9 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -0x24 + iVar8)) =
                       0;
                  iVar3 = *(int *)(iVar7 + *(int *)(*(int *)(in_ECX + 0x24) + iVar13));
                  *(float *)(iVar3 + iVar11) =
                       *(float *)(iVar9 + iVar3) + *(float *)(iVar3 + iVar11);
                  *(undefined4 *)
                   (iVar9 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -0x20 + iVar8)) =
                       0;
                  iVar3 = *(int *)(iVar7 + 4 + *(int *)(*(int *)(in_ECX + 0x24) + iVar13));
                  *(float *)(iVar3 + iVar11) =
                       *(float *)(iVar9 + iVar3) + *(float *)(iVar3 + iVar11);
                  *(undefined4 *)
                   (iVar9 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -0x1c + iVar8)) =
                       0;
                  iVar3 = *(int *)(iVar7 + 8 + *(int *)(*(int *)(in_ECX + 0x24) + iVar13));
                  *(float *)(iVar3 + iVar11) =
                       *(float *)(iVar9 + iVar3) + *(float *)(iVar3 + iVar11);
                  *(undefined4 *)
                   (iVar9 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -0x18 + iVar8)) =
                       0;
                  iVar3 = *(int *)(iVar7 + 0xc + *(int *)(*(int *)(in_ECX + 0x24) + iVar13));
                  *(float *)(iVar3 + iVar11) =
                       *(float *)(iVar9 + iVar3) + *(float *)(iVar3 + iVar11);
                  *(undefined4 *)
                   (iVar9 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -0x14 + iVar8)) =
                       0;
                  iVar7 = *(int *)(iVar7 + 0x10 + *(int *)(*(int *)(in_ECX + 0x24) + iVar13));
                  *(float *)(iVar7 + iVar11) =
                       *(float *)(iVar9 + iVar7) + *(float *)(iVar7 + iVar11);
                  *(undefined4 *)
                   (iVar9 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -0x10 + iVar8)) =
                       0;
                  iVar7 = iVar8;
                } while (iVar8 < 0x474);
                iVar7 = 0x480;
                do {
                  iVar3 = *(int *)(iVar7 + *(int *)(*(int *)(in_ECX + 0x24) + iVar13));
                  iVar7 = iVar7 + 4;
                  *(float *)(iVar3 + iVar11) =
                       *(float *)(iVar9 + iVar3) + *(float *)(iVar3 + iVar11);
                  *(undefined4 *)
                   (iVar9 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -4 + iVar7)) = 0;
                } while (iVar7 < 0x484);
                if (*(int *)(in_ECX + 0x24) != 0) {
                  *(undefined4 *)(iVar5 + *(int *)(iVar1 + *(int *)(in_ECX + 0x24))) = 0;
                }
              }
            }
            local_10 = local_10 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar9 < 0x20);
          if ((local_14 != 0) && (cVar6 = FUN_004701b0(local_14), cVar6 == '\0')) {
            iVar9 = 0xc;
            do {
              *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -0xc + iVar9) + iVar11) = 0;
              *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -8 + iVar9) + iVar11) = 0;
              *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + -4 + iVar9) + iVar11) = 0;
              *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + iVar9) + iVar11)
                   = 0;
              *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + 4 + iVar9) + iVar11) = 0;
              *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + 8 + iVar9) + iVar11) = 0;
              *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + 0xc + iVar9) + iVar11) = 0;
              piVar2 = (int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + 0x10 + iVar9);
              iVar9 = iVar9 + 0x20;
              *(undefined4 *)(*piVar2 + iVar11) = 0;
            } while (iVar9 < 0x474);
            iVar9 = 0x480;
            do {
              piVar2 = (int *)(*(int *)(*(int *)(in_ECX + 0x24) + iVar13) + iVar9);
              iVar9 = iVar9 + 4;
              *(undefined4 *)(*piVar2 + iVar11) = 0;
            } while (iVar9 < 0x484);
            if (((byte)local_20 < 4) && (*(int *)(in_ECX + 0x24) != 0)) {
              *(undefined4 *)(iVar4 + *(int *)(iVar1 + *(int *)(in_ECX + 0x24))) = 0;
            }
          }
        }
      }
      local_18 = local_18 + 1;
      iVar11 = iVar11 + 4;
    } while (iVar11 < 0x20);
    iVar11 = *(int *)(iVar13 + -0x10 + *(int *)(in_ECX + 0x24));
    uVar12 = 8;
    uVar10 = 0;
    do {
      iVar9 = *(int *)(iVar11 + uVar10 * 4);
      for (; (iVar9 == 0 && (uVar10 < uVar12)); uVar12 = uVar12 - 1) {
        FUN_004bf2f0(local_20,uVar10);
        iVar11 = *(int *)(iVar13 + -0x10 + *(int *)(in_ECX + 0x24));
        iVar9 = *(int *)(iVar11 + uVar10 * 4);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar12);
    local_20 = local_20 + 1;
    iVar13 = iVar13 + 4;
    if (0x4f < iVar13) {
      return;
    }
  } while( true );
}



void FUN_004bf9b0(float *param_1,float param_2)

{
  float *in_ECX;
  
  param_2 = 1.0 / param_2;
  *param_1 = param_2 * *in_ECX;
  param_1[1] = in_ECX[1] * param_2;
  param_1[2] = param_2 * in_ECX[2];
  return;
}



void FUN_004bf9e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *in_ECX;
  float10 fVar14;
  
  fVar1 = param_2[2];
  fVar2 = in_ECX[1];
  fVar3 = param_2[1];
  fVar4 = in_ECX[2];
  fVar5 = in_ECX[2];
  fVar6 = *param_2;
  fVar7 = *in_ECX;
  fVar8 = param_2[2];
  fVar9 = param_2[1];
  fVar10 = *in_ECX;
  fVar11 = *param_2;
  fVar12 = in_ECX[1];
  fVar14 = (float10)FUN_00982c30();
  if (1e-06 < (float)fVar14) {
    fVar13 = 1.0 / (float)fVar14;
    *param_1 = fVar13 * (fVar1 * fVar2 - fVar3 * fVar4);
    param_1[1] = fVar13 * (fVar5 * fVar6 - fVar7 * fVar8);
    param_1[2] = fVar13 * (fVar9 * fVar10 - fVar11 * fVar12);
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}



void FUN_004bfaa0(float *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  
  fVar1 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  if (fVar1 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    uVar3 = ((uint)fVar1 >> 0x17) - 0x7f;
    uVar2 = (uint)fVar1 & 0x7fffff;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar2 | 0x800000;
    }
    fVar1 = 1.0 / (float)(((short)((short)uVar3 >> 1) + 0x7f) * 0x800000 |
                         *(uint *)(DAT_00b3fd88 + (uVar2 >> 0x10) * 4));
  }
  *param_1 = fVar1 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar1 * param_1[2];
  return;
}



void FUN_004bfb30(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  fVar1 = in_ECX[3];
  param_1[2] = in_ECX[2];
  param_1[3] = fVar1;
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  param_1[3] = param_2[3] + param_1[3];
  return;
}



void FUN_004bfb80(float *param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  fVar1 = in_ECX[3];
  param_1[2] = in_ECX[2];
  param_1[3] = fVar1;
  *param_1 = param_2 * *param_1;
  param_1[1] = param_2 * param_1[1];
  param_1[2] = param_1[2] * param_2;
  param_1[3] = param_2 * param_1[3];
  return;
}



void FUN_004bfbd0(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  fVar1 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = fVar1;
  *param_1 = param_2 * *param_1;
  param_1[1] = param_2 * param_1[1];
  param_1[2] = param_1[2] * param_2;
  param_1[3] = param_2 * param_1[3];
  return;
}



void FUN_004bfc40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



int FUN_004bfc80(void)

{
  int iVar1;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x19c);
  if (iVar1 == 0) {
    iVar1 = DAT_00ba7d9c;
  }
  return iVar1;
}



void FUN_004bfcc0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a45e78;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a45e70;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_004bfd10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a45e78;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 *
FUN_004bfd40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = param_5;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[5] = param_4;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



int * FUN_004bfd90(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2c);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_1;
}



void FUN_004bfdc0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 0x20) = param_1;
  if (param_1 != 0) {
    iVar1 = FUN_004c9cf0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ef1a0();
      if (iVar1 != 0) {
        *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x400;
        return;
      }
    }
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xfffffbff;
  }
  return;
}



float * FUN_004bfe00(float *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004c9a80();
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  iVar1 = *(int *)(in_ECX + 0x24);
  *param_1 = (float)(iVar2 << 0xc) + 2048.0;
  if (iVar1 == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004c9aa0();
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x9c);
  }
  param_1[1] = (float)(iVar2 << 0xc) + 2048.0;
  param_1[2] = 0.0;
  return param_1;
}



void FUN_004bfe80(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  
  FUN_007b7650();
  FUN_007ab6f0();
  uVar2 = 0;
  do {
    if ((((byte)uVar2 < 4) && (*(int *)(in_ECX + 0x24) != 0)) &&
       (*(int *)(*(int *)(in_ECX + 0x24) + 0x20 + (uVar2 & 0xff) * 4) != 0)) {
      FUN_004c9230();
    }
    uVar3 = 0;
    do {
      if ((((byte)uVar2 < 4) && ((ushort)uVar3 < 8)) &&
         ((iVar1 = *(int *)(in_ECX + 0x24), iVar1 != 0 &&
          ((*(int *)(iVar1 + 0x30 + (uVar2 & 0xff) * 4) != 0 &&
           (*(int *)(*(int *)(iVar1 + 0x30 + (uVar2 & 0xff) * 4) + (uVar3 & 0xffff) * 4) != 0))))))
      {
        FUN_004c9230();
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 8);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x004c0055) */

int FUN_004bff00(byte param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  short *psVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int local_12c;
  undefined4 *local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b465e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_12c;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffec4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = 0;
  if ((param_1 < 4) && (*(int *)(in_ECX + 0x24) != 0)) {
    local_12c = in_ECX;
    puVar4 = (undefined4 *)FUN_00401f00(0x908,uVar2);
    puVar6 = DAT_00b35bd4;
    puVar7 = puVar4;
    for (iVar3 = 0x242; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    psVar5 = (short *)FUN_00401f00(2);
    local_128 = (undefined4 *)FUN_00401f00(0x7fa);
    *psVar5 = 0x3fd;
    puVar6 = &DAT_00b08ba8;
    puVar7 = local_128;
    for (iVar3 = 0x1fe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
    local_118 = FUN_00401f00(0xc0);
    local_4 = 0;
    if (local_118 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_12c + 0x24);
      iVar1 = (uint)param_1 * 4;
      iVar3 = FUN_00719960(0x121,*(undefined4 *)(*(int *)(iVar3 + 4) + iVar1),
                           *(undefined4 *)(*(int *)(iVar3 + 8) + iVar1),
                           *(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar1),puVar4,1,0,*psVar5 + -2,1,
                           psVar5,local_128);
    }
    local_4 = 0xffffffff;
    FUN_004bfe00(&local_124,(uint)param_1);
    *(undefined4 *)(iVar3 + 0x54) = local_124;
    *(undefined4 *)(iVar3 + 0x58) = local_120;
    *(undefined4 *)(iVar3 + 0x5c) = local_11c;
    _sprintf(local_114,"Block (%i, %i)",param_1 & 0x80000003,(uint)(param_1 >> 2));
    FUN_006ff420(local_114);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}


