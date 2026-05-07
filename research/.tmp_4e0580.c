
void FUN_004e0580(uint param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uVar5;
  
  FUN_0068f970(param_1);
  cVar2 = (**(code **)(*in_ECX + 400))();
  if ((cVar2 == '\0') && ((param_1 & 0x10000) != 0)) {
    FUN_0046aa00(0);
  }
  if (((*(uint *)(DAT_00b33b00 + 0x18) >> 6 & 1) != 0) && ((param_1 & 0x40000000) != 0)) {
    if ((((uint)in_ECX[2] >> 0xb & 1) == 0) && (((uint)in_ECX[2] >> 5 & 1) == 0)) {
      if (((in_ECX[0xf] == 0) && (in_ECX[0x10] != 0)) &&
         ((cVar2 = *(char *)(in_ECX[0x10] + 0x26), cVar2 == '\x06' || (cVar2 == '\x03')))) {
        cVar2 = FUN_004354f0(in_ECX);
        if (cVar2 == '\0') {
          uVar3 = FUN_00440c80(in_ECX[0x10],0);
          ModelLoader_QueueReference(in_ECX,uVar3);
        }
      }
    }
    else {
      (**(code **)(*in_ECX + 0x150))(0);
    }
  }
  if ((param_1 & 0x2000000) != 0) {
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 == '\0') {
      FUN_004da4f0();
    }
  }
  if ((param_1 & 0x177577e0) == 0) {
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 == '\0') goto LAB_004e0672;
  }
  FUN_00425650(param_1,in_ECX);
LAB_004e0672:
  if ((param_1 & 0x8000000) != 0) {
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 != '\0') {
      cVar2 = FUN_005e3270();
      if (cVar2 != '\0') {
        FUN_004dc5b0();
        FUN_004dc8f0(1);
        FUN_004dcab0();
        FUN_004dccf0();
      }
    }
    if ((*(uint *)(DAT_00b33b00 + 0x18) >> 6 & 1) == 0) {
      FUN_004ddb00(0);
    }
    else {
      (**(code **)(*in_ECX + 0x184))(0);
    }
  }
  iVar4 = (**(code **)(*in_ECX + 0x170))();
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar4 + 4) == '\x18') {
      if (((param_1 & 0x40000) != 0) && (*(char *)(DAT_00b33b00 + 0xa8) == '\0')) {
        cVar2 = FUN_0041f830(8);
        if (cVar2 == '\0') {
          FUN_00423df0(8);
        }
        else {
          FUN_00423e50(8);
        }
      }
      if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) ||
         (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)) {
        uVar5 = 1;
        uVar3 = FUN_0041f830(8);
        FUN_004de460(uVar3,uVar5);
      }
    }
  }
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    cVar2 = (**(code **)(*in_ECX + 0x198))(0);
    if ((cVar2 != '\0') && (in_ECX[0xf] != 0)) {
      iVar4 = FUN_0041ffa0();
      if (iVar4 != 0) {
        FUN_00497830(in_ECX);
      }
      cVar2 = (**(code **)(*in_ECX + 0x198))(0);
      if (cVar2 == '\0') {
        (**(code **)(*in_ECX + 0x164))();
      }
    }
  }
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x60000000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    iVar4 = (**(code **)(*in_ECX + 0x170))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*in_ECX + 0x170))();
      cVar2 = *(char *)(iVar4 + 4);
      if ((((cVar2 == '\x12') || (cVar2 == '\n')) || (cVar2 == '\x18')) &&
         (((uVar1 = in_ECX[2], (uVar1 >> 0xb & 1) != 0 || ((uVar1 >> 5 & 1) != 0)) ||
          ((cVar2 == '\x18' && ((uVar1 >> 0xd & 1) != 0)))))) {
        FUN_004d9310(0);
      }
    }
  }
  return;
}

