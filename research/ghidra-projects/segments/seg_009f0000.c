
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f1c00(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ba9c7;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_00b39534 = 0;
  }
  else {
    DAT_00b39534 = FUN_0041bae0("fEnchantPettyLimit",0x41700000);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    _DAT_00b39538 = 0;
  }
  else {
    _DAT_00b39538 = FUN_0041bae0("fEnchantLesserLimit",0x41c80000);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    _DAT_00b3953c = 0;
  }
  else {
    _DAT_00b3953c = FUN_0041bae0("fEnchantCommonLimit",0x42200000);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 3;
  if (iVar2 == 0) {
    _DAT_00b39540 = 0;
  }
  else {
    _DAT_00b39540 = FUN_0041bae0("fEnchantGreaterLimit",0x42700000);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 4;
  if (iVar2 == 0) {
    _DAT_00b39544 = 0;
  }
  else {
    _DAT_00b39544 = FUN_0041bae0("fEnchantGrandLimit",0x42aa0000);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f3310(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009baa11;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_10;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = FUN_00401f00(8,uVar1);
  local_4 = 0;
  if (local_10 == 0) {
    DAT_00b39548 = 0;
  }
  else {
    DAT_00b39548 = FUN_00419a70("sDeviceKeyboard","Keyboard");
  }
  local_4 = 0xffffffff;
  local_10 = FUN_00401f00(8,uVar1);
  local_4 = 1;
  if (local_10 == 0) {
    DAT_00b3954c = 0;
  }
  else {
    DAT_00b3954c = FUN_00419a70("sDeviceMouse","Mouse");
  }
  local_4 = 0xffffffff;
  local_10 = FUN_00401f00(8,uVar1);
  local_4 = 2;
  if (local_10 != 0) {
    _DAT_00b39550 = FUN_00419a70("sDeviceJoystick","Joystick");
    *unaff_FS_OFFSET = local_c;
    return;
  }
  _DAT_00b39550 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f3400(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb01e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_00b3957c = 0;
  }
  else {
    DAT_00b3957c = FUN_00419a70("sKBEsc",&DAT_00a61fd4);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    _DAT_00b39580 = 0;
  }
  else {
    _DAT_00b39580 = FUN_00419a70(&DAT_00a61fc0,&DAT_00a61fc8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    _DAT_00b39584 = 0;
  }
  else {
    _DAT_00b39584 = FUN_00419a70(&DAT_00a61fb4,&DAT_00a61fbc);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 3;
  if (iVar2 == 0) {
    _DAT_00b39588 = 0;
  }
  else {
    _DAT_00b39588 = FUN_00419a70(&DAT_00a61fa8,&DAT_00a61fb0);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 4;
  if (iVar2 == 0) {
    _DAT_00b3958c = 0;
  }
  else {
    _DAT_00b3958c = FUN_00419a70(&DAT_00a61f9c,&DAT_00a61fa4);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 5;
  if (iVar2 == 0) {
    _DAT_00b39590 = 0;
  }
  else {
    _DAT_00b39590 = FUN_00419a70(&DAT_00a61f90,&DAT_00a61f98);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 6;
  if (iVar2 == 0) {
    _DAT_00b39594 = 0;
  }
  else {
    _DAT_00b39594 = FUN_00419a70(&DAT_00a61f84,&DAT_00a61f8c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 7;
  if (iVar2 == 0) {
    _DAT_00b39598 = 0;
  }
  else {
    _DAT_00b39598 = FUN_00419a70(&DAT_00a61f78,&DAT_00a61f80);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 8;
  if (iVar2 == 0) {
    _DAT_00b3959c = 0;
  }
  else {
    _DAT_00b3959c = FUN_00419a70(&DAT_00a61f6c,&DAT_00a61f74);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 9;
  if (iVar2 == 0) {
    _DAT_00b395a0 = 0;
  }
  else {
    _DAT_00b395a0 = FUN_00419a70(&DAT_00a61f60,&DAT_00a61f68);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 10;
  if (iVar2 == 0) {
    _DAT_00b395a4 = 0;
  }
  else {
    _DAT_00b395a4 = FUN_00419a70(&DAT_00a61f54,&DAT_00a61f5c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xb;
  if (iVar2 == 0) {
    _DAT_00b395a8 = 0;
  }
  else {
    _DAT_00b395a8 = FUN_00419a70("sKBMinus",&DAT_00a3a0e4);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xc;
  if (iVar2 == 0) {
    _DAT_00b395ac = 0;
  }
  else {
    _DAT_00b395ac = FUN_00419a70("sKBEquals",&DAT_00a61f44);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xd;
  if (iVar2 == 0) {
    _DAT_00b395b0 = 0;
  }
  else {
    _DAT_00b395b0 = FUN_00419a70("sKBBack","Backspace");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xe;
  if (iVar2 == 0) {
    _DAT_00b395b4 = 0;
  }
  else {
    _DAT_00b395b4 = FUN_00419a70("sKBTab",&DAT_00a61f20);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xf;
  if (iVar2 == 0) {
    _DAT_00b395b8 = 0;
  }
  else {
    _DAT_00b395b8 = FUN_00419a70(&DAT_00a61f0c,&DAT_00a61f14);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x10;
  if (iVar2 == 0) {
    _DAT_00b395bc = 0;
  }
  else {
    _DAT_00b395bc = FUN_00419a70(&DAT_00a61f00,&DAT_00a61f08);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x11;
  if (iVar2 == 0) {
    _DAT_00b395c0 = 0;
  }
  else {
    _DAT_00b395c0 = FUN_00419a70(&DAT_00a61ef4,&DAT_00a61efc);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x12;
  if (iVar2 == 0) {
    _DAT_00b395c4 = 0;
  }
  else {
    _DAT_00b395c4 = FUN_00419a70(&DAT_00a61eec,&DAT_00a2fa88);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x13;
  if (iVar2 == 0) {
    _DAT_00b395c8 = 0;
  }
  else {
    _DAT_00b395c8 = FUN_00419a70(&DAT_00a61ee0,&DAT_00a61ee8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x14;
  if (iVar2 == 0) {
    _DAT_00b395cc = 0;
  }
  else {
    _DAT_00b395cc = FUN_00419a70(&DAT_00a61ed8,&DAT_00a519fc);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x15;
  if (iVar2 == 0) {
    _DAT_00b395d0 = 0;
  }
  else {
    _DAT_00b395d0 = FUN_00419a70(&DAT_00a61ed0,&DAT_00a2fa90);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x16;
  if (iVar2 == 0) {
    _DAT_00b395d4 = 0;
  }
  else {
    _DAT_00b395d4 = FUN_00419a70(&DAT_00a61ec4,&DAT_00a61ecc);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x17;
  if (iVar2 == 0) {
    _DAT_00b395d8 = 0;
  }
  else {
    _DAT_00b395d8 = FUN_00419a70(&DAT_00a61eb8,&DAT_00a61ec0);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x18;
  if (iVar2 == 0) {
    _DAT_00b395dc = 0;
  }
  else {
    _DAT_00b395dc = FUN_00419a70(&DAT_00a61eac,&DAT_00a61eb4);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x19;
  if (iVar2 == 0) {
    _DAT_00b395e0 = 0;
  }
  else {
    _DAT_00b395e0 = FUN_00419a70("sKBLBracket",&DAT_00a61ea8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1a;
  if (iVar2 == 0) {
    _DAT_00b395e4 = 0;
  }
  else {
    _DAT_00b395e4 = FUN_00419a70("sKBRBracket",&DAT_00a61e98);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1b;
  if (iVar2 == 0) {
    _DAT_00b395e8 = 0;
  }
  else {
    _DAT_00b395e8 = FUN_00419a70("sKBReturn","Enter");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1c;
  if (iVar2 == 0) {
    _DAT_00b395ec = 0;
  }
  else {
    _DAT_00b395ec = FUN_00419a70("sKBLControl","L-Ctrl");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1d;
  if (iVar2 == 0) {
    _DAT_00b395f0 = 0;
  }
  else {
    _DAT_00b395f0 = FUN_00419a70(&DAT_00a61e58,&DAT_00a61e60);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1e;
  if (iVar2 == 0) {
    _DAT_00b395f4 = 0;
  }
  else {
    _DAT_00b395f4 = FUN_00419a70(&DAT_00a61e4c,&DAT_00a61e54);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1f;
  if (iVar2 == 0) {
    _DAT_00b395f8 = 0;
  }
  else {
    _DAT_00b395f8 = FUN_00419a70(&DAT_00a61e44,&DAT_00a2fa80);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x20;
  if (iVar2 == 0) {
    _DAT_00b395fc = 0;
  }
  else {
    _DAT_00b395fc = FUN_00419a70(&DAT_00a61e3c,&DAT_00a54e58);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x21;
  if (iVar2 == 0) {
    _DAT_00b39600 = 0;
  }
  else {
    _DAT_00b39600 = FUN_00419a70(&DAT_00a61e30,&DAT_00a61e38);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x22;
  if (iVar2 == 0) {
    _DAT_00b39604 = 0;
  }
  else {
    _DAT_00b39604 = FUN_00419a70(&DAT_00a61e24,&DAT_00a61e2c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x23;
  if (iVar2 == 0) {
    _DAT_00b39608 = 0;
  }
  else {
    _DAT_00b39608 = FUN_00419a70(&DAT_00a61e18,&DAT_00a61e20);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x24;
  if (iVar2 == 0) {
    _DAT_00b3960c = 0;
  }
  else {
    _DAT_00b3960c = FUN_00419a70(&DAT_00a61e0c,&DAT_00a61e14);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x25;
  if (iVar2 == 0) {
    _DAT_00b39610 = 0;
  }
  else {
    _DAT_00b39610 = FUN_00419a70(&DAT_00a61e04,&DAT_00a2fa78);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x26;
  if (iVar2 == 0) {
    _DAT_00b39614 = 0;
  }
  else {
    _DAT_00b39614 = FUN_00419a70("sKBSemicolon",&DAT_00a3206c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x27;
  if (iVar2 == 0) {
    _DAT_00b39618 = 0;
  }
  else {
    _DAT_00b39618 = FUN_00419a70("sKBApostrophe",&DAT_00a56270);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x28;
  if (iVar2 == 0) {
    _DAT_00b3961c = 0;
  }
  else {
    _DAT_00b3961c = FUN_00419a70("sKBTilde",&DAT_00a61de0);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x29;
  if (iVar2 == 0) {
    _DAT_00b39620 = 0;
  }
  else {
    _DAT_00b39620 = FUN_00419a70("sKBLShift","L-Shift");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x2a;
  if (iVar2 == 0) {
    _DAT_00b39624 = 0;
  }
  else {
    _DAT_00b39624 = FUN_00419a70("sKBBackslash",&DAT_00a3207c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x2b;
  if (iVar2 == 0) {
    _DAT_00b39628 = 0;
  }
  else {
    _DAT_00b39628 = FUN_00419a70(&DAT_00a61da8,&DAT_00a519f8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x2c;
  if (iVar2 == 0) {
    _DAT_00b3962c = 0;
  }
  else {
    _DAT_00b3962c = FUN_00419a70(&DAT_00a61da0,&DAT_00a51a00);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x2d;
  if (iVar2 == 0) {
    _DAT_00b39630 = 0;
  }
  else {
    _DAT_00b39630 = FUN_00419a70(&DAT_00a61d94,&DAT_00a61d9c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x2e;
  if (iVar2 == 0) {
    _DAT_00b39634 = 0;
  }
  else {
    _DAT_00b39634 = FUN_00419a70(&DAT_00a61d8c,&DAT_00a3a4c8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x2f;
  if (iVar2 == 0) {
    _DAT_00b39638 = 0;
  }
  else {
    _DAT_00b39638 = FUN_00419a70(&DAT_00a61d80,&DAT_00a61d88);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x30;
  if (iVar2 == 0) {
    _DAT_00b3963c = 0;
  }
  else {
    _DAT_00b3963c = FUN_00419a70(&DAT_00a61d74,&DAT_00a61d7c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x31;
  if (iVar2 == 0) {
    _DAT_00b39640 = 0;
  }
  else {
    _DAT_00b39640 = FUN_00419a70(&DAT_00a61d6c,&DAT_00a54e54);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x32;
  if (iVar2 == 0) {
    _DAT_00b39644 = 0;
  }
  else {
    _DAT_00b39644 = FUN_00419a70("sKBComma",&DAT_00a319fc);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x33;
  if (iVar2 == 0) {
    _DAT_00b39648 = 0;
  }
  else {
    _DAT_00b39648 = FUN_00419a70("sKBPeriod",&DAT_00a51bb0);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x34;
  if (iVar2 == 0) {
    _DAT_00b3964c = 0;
  }
  else {
    _DAT_00b3964c = FUN_00419a70("sKBSlash",&DAT_00a61d50);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x35;
  if (iVar2 == 0) {
    _DAT_00b39650 = 0;
  }
  else {
    _DAT_00b39650 = FUN_00419a70("sKBRShift","R-Shift");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x36;
  if (iVar2 == 0) {
    _DAT_00b39654 = 0;
  }
  else {
    _DAT_00b39654 = FUN_00419a70("sKBMultiply","Pad *");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x37;
  if (iVar2 == 0) {
    _DAT_00b39658 = 0;
  }
  else {
    _DAT_00b39658 = FUN_00419a70("sKBLMenu","L-Alt");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x38;
  if (iVar2 == 0) {
    _DAT_00b3965c = 0;
  }
  else {
    _DAT_00b3965c = FUN_00419a70("sKBSpace","Space");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x39;
  if (iVar2 == 0) {
    _DAT_00b39660 = 0;
  }
  else {
    _DAT_00b39660 = FUN_00419a70("sKBCapital",&DAT_00a61cec);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x3a;
  if (iVar2 == 0) {
    _DAT_00b39664 = 0;
  }
  else {
    _DAT_00b39664 = FUN_00419a70("sKBF1",&DAT_00a61cdc);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x3b;
  if (iVar2 == 0) {
    _DAT_00b39668 = 0;
  }
  else {
    _DAT_00b39668 = FUN_00419a70("sKBF2",&DAT_00a61cd0);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x3c;
  if (iVar2 == 0) {
    _DAT_00b3966c = 0;
  }
  else {
    _DAT_00b3966c = FUN_00419a70("sKBF3",&DAT_00a61cc4);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x3d;
  if (iVar2 == 0) {
    _DAT_00b39670 = 0;
  }
  else {
    _DAT_00b39670 = FUN_00419a70("sKBF4",&DAT_00a61cb8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x3e;
  if (iVar2 == 0) {
    _DAT_00b39674 = 0;
  }
  else {
    _DAT_00b39674 = FUN_00419a70("sKBF5",&DAT_00a61cac);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x3f;
  if (iVar2 == 0) {
    _DAT_00b39678 = 0;
  }
  else {
    _DAT_00b39678 = FUN_00419a70("sKBF6",&DAT_00a61ca0);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x40;
  if (iVar2 == 0) {
    _DAT_00b3967c = 0;
  }
  else {
    _DAT_00b3967c = FUN_00419a70("sKBF7",&DAT_00a61c94);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x41;
  if (iVar2 == 0) {
    _DAT_00b39680 = 0;
  }
  else {
    _DAT_00b39680 = FUN_00419a70("sKBF8",&DAT_00a61c88);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x42;
  if (iVar2 == 0) {
    _DAT_00b39684 = 0;
  }
  else {
    _DAT_00b39684 = FUN_00419a70("sKBF9",&DAT_00a61c7c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x43;
  if (iVar2 == 0) {
    _DAT_00b39688 = 0;
  }
  else {
    _DAT_00b39688 = FUN_00419a70("sKBF10",&DAT_00a61c70);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x44;
  if (iVar2 == 0) {
    _DAT_00b3968c = 0;
  }
  else {
    _DAT_00b3968c = FUN_00419a70("sKBNumlock",&DAT_00a61c64);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x45;
  if (iVar2 == 0) {
    _DAT_00b39690 = 0;
  }
  else {
    _DAT_00b39690 = FUN_00419a70("sKBScroll","Scroll");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x46;
  if (iVar2 == 0) {
    _DAT_00b39694 = 0;
  }
  else {
    _DAT_00b39694 = FUN_00419a70("sKBNumpad7","Pad 7");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x47;
  if (iVar2 == 0) {
    _DAT_00b39698 = 0;
  }
  else {
    _DAT_00b39698 = FUN_00419a70("sKBNumpad8","Pad 8");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x48;
  if (iVar2 == 0) {
    _DAT_00b3969c = 0;
  }
  else {
    _DAT_00b3969c = FUN_00419a70("sKBNumpad9","Pad 9");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x49;
  if (iVar2 == 0) {
    _DAT_00b396a0 = 0;
  }
  else {
    _DAT_00b396a0 = FUN_00419a70("sKBSubtract","Pad -");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x4a;
  if (iVar2 == 0) {
    _DAT_00b396a4 = 0;
  }
  else {
    _DAT_00b396a4 = FUN_00419a70("sKBNumpad4","Pad 4");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x4b;
  if (iVar2 == 0) {
    _DAT_00b396a8 = 0;
  }
  else {
    _DAT_00b396a8 = FUN_00419a70("sKBNumpad5","Pad 5");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x4c;
  if (iVar2 == 0) {
    _DAT_00b396ac = 0;
  }
  else {
    _DAT_00b396ac = FUN_00419a70("sKBNumpad6","Pad 6");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x4d;
  if (iVar2 == 0) {
    _DAT_00b396b0 = 0;
  }
  else {
    _DAT_00b396b0 = FUN_00419a70("sKBAdd","Pad +");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x4e;
  if (iVar2 == 0) {
    _DAT_00b396b4 = 0;
  }
  else {
    _DAT_00b396b4 = FUN_00419a70("sKBNumpad1","Pad 1");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x4f;
  if (iVar2 == 0) {
    _DAT_00b396b8 = 0;
  }
  else {
    _DAT_00b396b8 = FUN_00419a70("sKBNumpad2","Pad 2");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x50;
  if (iVar2 == 0) {
    _DAT_00b396bc = 0;
  }
  else {
    _DAT_00b396bc = FUN_00419a70("sKBNumpad3","Pad 3");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x51;
  if (iVar2 == 0) {
    _DAT_00b396c0 = 0;
  }
  else {
    _DAT_00b396c0 = FUN_00419a70("sKBNumpad0","Pad 0");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x52;
  if (iVar2 == 0) {
    _DAT_00b396c4 = 0;
  }
  else {
    _DAT_00b396c4 = FUN_00419a70("sKBDecimal","Pad .");
  }
  local_4 = 0xffffffff;
  _DAT_00b396c8 = 0;
  _DAT_00b396cc = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x53;
  if (iVar2 == 0) {
    _DAT_00b396d0 = 0;
  }
  else {
    _DAT_00b396d0 = FUN_00419a70("sKBOEM102",&DAT_00a61b48);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x54;
  if (iVar2 == 0) {
    _DAT_00b396d4 = 0;
  }
  else {
    _DAT_00b396d4 = FUN_00419a70("sKBF11",&DAT_00a61b38);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x55;
  if (iVar2 == 0) {
    _DAT_00b396d8 = 0;
  }
  else {
    _DAT_00b396d8 = FUN_00419a70("sKBF12",&DAT_00a61b2c);
  }
  local_4 = 0xffffffff;
  _DAT_00b396dc = 0;
  _DAT_00b396e0 = 0;
  _DAT_00b396e4 = 0;
  _DAT_00b396e8 = 0;
  _DAT_00b396ec = 0;
  _DAT_00b396f0 = 0;
  _DAT_00b396f4 = 0;
  _DAT_00b396f8 = 0;
  _DAT_00b396fc = 0;
  _DAT_00b39700 = 0;
  _DAT_00b39704 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x56;
  if (iVar2 == 0) {
    _DAT_00b39708 = 0;
  }
  else {
    _DAT_00b39708 = FUN_00419a70("sKBF13",&DAT_00a61b20);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x57;
  if (iVar2 == 0) {
    _DAT_00b3970c = 0;
  }
  else {
    _DAT_00b3970c = FUN_00419a70("sKBF14",&DAT_00a61b14);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x58;
  if (iVar2 == 0) {
    _DAT_00b39710 = 0;
  }
  else {
    _DAT_00b39710 = FUN_00419a70("sKBF15",&DAT_00a61b08);
  }
  local_4 = 0xffffffff;
  _DAT_00b39714 = 0;
  _DAT_00b39718 = 0;
  _DAT_00b3971c = 0;
  _DAT_00b39720 = 0;
  _DAT_00b39724 = 0;
  _DAT_00b39728 = 0;
  _DAT_00b3972c = 0;
  _DAT_00b39730 = 0;
  _DAT_00b39734 = 0;
  _DAT_00b39738 = 0;
  _DAT_00b3973c = 0;
  _DAT_00b39740 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x59;
  if (iVar2 == 0) {
    _DAT_00b39744 = 0;
  }
  else {
    _DAT_00b39744 = FUN_00419a70("sKBABNTC1",&DAT_00a61d50);
  }
  local_4 = 0xffffffff;
  _DAT_00b39748 = 0;
  _DAT_00b3974c = 0;
  _DAT_00b39750 = 0;
  _DAT_00b39754 = 0;
  _DAT_00b39758 = 0;
  _DAT_00b3975c = 0;
  _DAT_00b39760 = 0;
  _DAT_00b39764 = 0;
  _DAT_00b39768 = 0;
  _DAT_00b3976c = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x5a;
  if (iVar2 == 0) {
    _DAT_00b39770 = 0;
  }
  else {
    _DAT_00b39770 = FUN_00419a70("sKBABNTC2","Pad .");
  }
  local_4 = 0xffffffff;
  _DAT_00b39774 = 0;
  _DAT_00b39778 = 0;
  _DAT_00b3977c = 0;
  _DAT_00b39780 = 0;
  _DAT_00b39784 = 0;
  _DAT_00b39788 = 0;
  _DAT_00b3978c = 0;
  _DAT_00b39790 = 0;
  _DAT_00b39794 = 0;
  _DAT_00b39798 = 0;
  _DAT_00b3979c = 0;
  _DAT_00b397a0 = 0;
  _DAT_00b397a4 = 0;
  _DAT_00b397a8 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x5b;
  if (iVar2 == 0) {
    _DAT_00b397ac = 0;
  }
  else {
    _DAT_00b397ac = FUN_00419a70("sKBNumPadEquals","Pad =");
  }
  local_4 = 0xffffffff;
  _DAT_00b397b0 = 0;
  _DAT_00b397b4 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x5c;
  if (iVar2 == 0) {
    _DAT_00b397b8 = 0;
  }
  else {
    _DAT_00b397b8 = FUN_00419a70("sKBPrevtrack",&DAT_00a61ac8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x5d;
  if (iVar2 == 0) {
    _DAT_00b397bc = 0;
  }
  else {
    _DAT_00b397bc = FUN_00419a70("sKBAt",&DAT_00a61ab4);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x5e;
  if (iVar2 == 0) {
    _DAT_00b397c0 = 0;
  }
  else {
    _DAT_00b397c0 = FUN_00419a70("sKBColon",&DAT_00a61aa8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x5f;
  if (iVar2 == 0) {
    _DAT_00b397c4 = 0;
  }
  else {
    _DAT_00b397c4 = FUN_00419a70("sKBUnderline",&DAT_00a61a98);
  }
  local_4 = 0xffffffff;
  _DAT_00b397c8 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x60;
  if (iVar2 == 0) {
    _DAT_00b397cc = 0;
  }
  else {
    _DAT_00b397cc = FUN_00419a70("sKBStop",&DAT_00a61a80);
  }
  local_4 = 0xffffffff;
  _DAT_00b397d0 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x61;
  if (iVar2 == 0) {
    _DAT_00b397d4 = 0;
  }
  else {
    _DAT_00b397d4 = FUN_00419a70("sKBUnlabeled","Unlabeled");
  }
  local_4 = 0xffffffff;
  _DAT_00b397d8 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x62;
  if (iVar2 == 0) {
    _DAT_00b397dc = 0;
  }
  else {
    _DAT_00b397dc = FUN_00419a70("sKBNextTrack",&DAT_00a61a54);
  }
  local_4 = 0xffffffff;
  _DAT_00b397e0 = 0;
  _DAT_00b397e4 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 99;
  if (iVar2 == 0) {
    _DAT_00b397e8 = 0;
  }
  else {
    _DAT_00b397e8 = FUN_00419a70("sKBNumPadEnter","Pad Enter");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 100;
  if (iVar2 == 0) {
    _DAT_00b397ec = 0;
  }
  else {
    _DAT_00b397ec = FUN_00419a70("sKBRControl","R-Ctrl");
  }
  local_4 = 0xffffffff;
  _DAT_00b397f0 = 0;
  _DAT_00b397f4 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x65;
  if (iVar2 == 0) {
    _DAT_00b397f8 = 0;
  }
  else {
    _DAT_00b397f8 = FUN_00419a70("sKBMute",&DAT_00a61a0c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x66;
  if (iVar2 == 0) {
    _DAT_00b397fc = 0;
  }
  else {
    _DAT_00b397fc = FUN_00419a70("sKBCalculator",&DAT_00a619fc);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x67;
  if (iVar2 == 0) {
    _DAT_00b39800 = 0;
  }
  else {
    _DAT_00b39800 = FUN_00419a70("sKBPlayPause",&DAT_00a619e4);
  }
  local_4 = 0xffffffff;
  _DAT_00b39804 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x68;
  if (iVar2 == 0) {
    _DAT_00b39808 = 0;
  }
  else {
    _DAT_00b39808 = FUN_00419a70("sKBMediaStop",&DAT_00a61a80);
  }
  local_4 = 0xffffffff;
  _DAT_00b3980c = 0;
  _DAT_00b39810 = 0;
  _DAT_00b39814 = 0;
  _DAT_00b39818 = 0;
  _DAT_00b3981c = 0;
  _DAT_00b39820 = 0;
  _DAT_00b39824 = 0;
  _DAT_00b39828 = 0;
  _DAT_00b3982c = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x69;
  if (iVar2 == 0) {
    _DAT_00b39830 = 0;
  }
  else {
    _DAT_00b39830 = FUN_00419a70("sKBVolumeDown","Vol -");
  }
  local_4 = 0xffffffff;
  _DAT_00b39834 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x6a;
  if (iVar2 == 0) {
    _DAT_00b39838 = 0;
  }
  else {
    _DAT_00b39838 = FUN_00419a70("sKBVolumeUp","Vol +");
  }
  local_4 = 0xffffffff;
  _DAT_00b3983c = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x6b;
  if (iVar2 == 0) {
    _DAT_00b39840 = 0;
  }
  else {
    _DAT_00b39840 = FUN_00419a70("sKBWebHome",&DAT_00a61994);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x6c;
  if (iVar2 == 0) {
    _DAT_00b39844 = 0;
  }
  else {
    _DAT_00b39844 = FUN_00419a70("sKBNumPadComma","Pad ,");
  }
  local_4 = 0xffffffff;
  _DAT_00b39848 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x6d;
  if (iVar2 == 0) {
    _DAT_00b3984c = 0;
  }
  else {
    _DAT_00b3984c = FUN_00419a70("sKBDivide","Pad /");
  }
  local_4 = 0xffffffff;
  _DAT_00b39850 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x6e;
  if (iVar2 == 0) {
    _DAT_00b39854 = 0;
  }
  else {
    _DAT_00b39854 = FUN_00419a70("sKBSysRq","PrntScrn");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x6f;
  if (iVar2 == 0) {
    _DAT_00b39858 = 0;
  }
  else {
    _DAT_00b39858 = FUN_00419a70("sKBRMenu","R-Alt");
  }
  local_4 = 0xffffffff;
  _DAT_00b3985c = 0;
  _DAT_00b39860 = 0;
  _DAT_00b39864 = 0;
  _DAT_00b39868 = 0;
  _DAT_00b3986c = 0;
  _DAT_00b39870 = 0;
  _DAT_00b39874 = 0;
  _DAT_00b39878 = 0;
  _DAT_00b3987c = 0;
  _DAT_00b39880 = 0;
  _DAT_00b39884 = 0;
  _DAT_00b39888 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x70;
  if (iVar2 == 0) {
    _DAT_00b3988c = 0;
  }
  else {
    _DAT_00b3988c = FUN_00419a70("sKBPause","Pause");
  }
  local_4 = 0xffffffff;
  _DAT_00b39890 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x71;
  if (iVar2 == 0) {
    _DAT_00b39894 = 0;
  }
  else {
    _DAT_00b39894 = FUN_00419a70("sKBHome",&DAT_00a61914);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x72;
  if (iVar2 == 0) {
    _DAT_00b39898 = 0;
  }
  else {
    _DAT_00b39898 = FUN_00419a70("sKBUp",&DAT_00a61908);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x73;
  if (iVar2 == 0) {
    _DAT_00b3989c = 0;
  }
  else {
    _DAT_00b3989c = FUN_00419a70("sKBPrior",&DAT_00a618f8);
  }
  local_4 = 0xffffffff;
  _DAT_00b398a0 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x74;
  if (iVar2 == 0) {
    _DAT_00b398a4 = 0;
  }
  else {
    _DAT_00b398a4 = FUN_00419a70("sKBLeft",&DAT_00a52974);
  }
  local_4 = 0xffffffff;
  _DAT_00b398a8 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x75;
  if (iVar2 == 0) {
    _DAT_00b398ac = 0;
  }
  else {
    _DAT_00b398ac = FUN_00419a70("sKBRight","Right");
  }
  local_4 = 0xffffffff;
  _DAT_00b398b0 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x76;
  if (iVar2 == 0) {
    _DAT_00b398b4 = 0;
  }
  else {
    _DAT_00b398b4 = FUN_00419a70("sKBEnd",&DAT_00a51c18);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x77;
  if (iVar2 == 0) {
    _DAT_00b398b8 = 0;
  }
  else {
    _DAT_00b398b8 = FUN_00419a70("sKBDown",&DAT_00a618c8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x78;
  if (iVar2 == 0) {
    _DAT_00b398bc = 0;
  }
  else {
    _DAT_00b398bc = FUN_00419a70("sKBNext",&DAT_00a618b8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x79;
  if (iVar2 == 0) {
    _DAT_00b398c0 = 0;
  }
  else {
    _DAT_00b398c0 = FUN_00419a70("sKBInsert","Insert");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x7a;
  if (iVar2 == 0) {
    _DAT_00b398c4 = 0;
  }
  else {
    _DAT_00b398c4 = FUN_00419a70("sKBDelete","Delete");
  }
  local_4 = 0xffffffff;
  _DAT_00b398c8 = 0;
  _DAT_00b398cc = 0;
  _DAT_00b398d0 = 0;
  _DAT_00b398d4 = 0;
  _DAT_00b398d8 = 0;
  _DAT_00b398dc = 0;
  _DAT_00b398e0 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x7b;
  if (iVar2 == 0) {
    _DAT_00b398e4 = 0;
  }
  else {
    _DAT_00b398e4 = FUN_00419a70("sKBLWin",&DAT_00a61880);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x7c;
  if (iVar2 == 0) {
    _DAT_00b398e8 = 0;
  }
  else {
    _DAT_00b398e8 = FUN_00419a70("sKBRWin",&DAT_00a61870);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x7d;
  if (iVar2 == 0) {
    _DAT_00b398ec = 0;
  }
  else {
    _DAT_00b398ec = FUN_00419a70("sKBApps",&DAT_00a61860);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x7e;
  if (iVar2 == 0) {
    _DAT_00b398f0 = 0;
  }
  else {
    _DAT_00b398f0 = FUN_00419a70("sKBPower","Power");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x7f;
  if (iVar2 == 0) {
    _DAT_00b398f4 = 0;
  }
  else {
    _DAT_00b398f4 = FUN_00419a70("sKBSleep","Sleep");
  }
  local_4 = 0xffffffff;
  _DAT_00b398f8 = 0;
  _DAT_00b398fc = 0;
  _DAT_00b39900 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x80;
  if (iVar2 == 0) {
    _DAT_00b39904 = 0;
  }
  else {
    _DAT_00b39904 = FUN_00419a70("sKBWake",&DAT_00a61830);
  }
  local_4 = 0xffffffff;
  _DAT_00b39908 = 0;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x81;
  if (iVar2 == 0) {
    _DAT_00b3990c = 0;
  }
  else {
    _DAT_00b3990c = FUN_00419a70("sKBWebSearch","Search");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x82;
  if (iVar2 == 0) {
    _DAT_00b39910 = 0;
  }
  else {
    _DAT_00b39910 = FUN_00419a70("sKBWebFavorites",&PTR_LAB_00a61814);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x83;
  if (iVar2 == 0) {
    _DAT_00b39914 = 0;
  }
  else {
    _DAT_00b39914 = FUN_00419a70("sKBWebRefresh","Refresh");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x84;
  if (iVar2 == 0) {
    _DAT_00b39918 = 0;
  }
  else {
    _DAT_00b39918 = FUN_00419a70("sKBWebStop","Web Stop");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x85;
  if (iVar2 == 0) {
    _DAT_00b3991c = 0;
  }
  else {
    _DAT_00b3991c = FUN_00419a70("sKBWebForward","Web ->");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x86;
  if (iVar2 == 0) {
    _DAT_00b39920 = 0;
  }
  else {
    _DAT_00b39920 = FUN_00419a70("sKBWebBack","Web <-");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x87;
  if (iVar2 == 0) {
    _DAT_00b39924 = 0;
  }
  else {
    _DAT_00b39924 = FUN_00419a70("sKBMyComputer","My Comp");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x88;
  if (iVar2 == 0) {
    _DAT_00b39928 = 0;
  }
  else {
    _DAT_00b39928 = FUN_00419a70("sKBMail",&DAT_00a61788);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x89;
  if (iVar2 != 0) {
    _DAT_00b3992c = FUN_00419a70("sKBMediaSelect","Select");
    *unaff_FS_OFFSET = local_c;
    return;
  }
  _DAT_00b3992c = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f54d0(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb0a3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_00b39554 = 0;
  }
  else {
    DAT_00b39554 = FUN_00419a70("sMouseLeftButton","L-Button");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    DAT_00b39558 = 0;
  }
  else {
    DAT_00b39558 = FUN_00419a70("sMouseRightButton","R-Button");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    _DAT_00b3955c = 0;
  }
  else {
    _DAT_00b3955c = FUN_00419a70("sMouseMiddleButton","Wheel");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 3;
  if (iVar2 == 0) {
    _DAT_00b39560 = 0;
  }
  else {
    _DAT_00b39560 = FUN_00419a70("sMouseButton3","Button 3");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 4;
  if (iVar2 == 0) {
    _DAT_00b39564 = 0;
  }
  else {
    _DAT_00b39564 = FUN_00419a70("sMouseButton4","Button 4");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 5;
  if (iVar2 == 0) {
    _DAT_00b39568 = 0;
  }
  else {
    _DAT_00b39568 = FUN_00419a70("sMouseButton5","Button 5");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 6;
  if (iVar2 == 0) {
    _DAT_00b3956c = 0;
  }
  else {
    _DAT_00b3956c = FUN_00419a70("sMouseButton6","Button 6");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 7;
  if (iVar2 == 0) {
    _DAT_00b39570 = 0;
  }
  else {
    _DAT_00b39570 = FUN_00419a70("sMouseButton7","Button 7");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 8;
  if (iVar2 == 0) {
    _DAT_00b39574 = 0;
  }
  else {
    _DAT_00b39574 = FUN_00419a70("sMouseButton8","Button 8");
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f5700(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb118;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_00b39930 = 0;
  }
  else {
    DAT_00b39930 = FUN_00419a70("sJoyUp",&DAT_00a61908);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    DAT_00b39934 = 0;
  }
  else {
    DAT_00b39934 = FUN_00419a70("sJoyUpRight","Up-Rt");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    _DAT_00b39938 = 0;
  }
  else {
    _DAT_00b39938 = FUN_00419a70("sJoyRight","Right");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 3;
  if (iVar2 == 0) {
    _DAT_00b3993c = 0;
  }
  else {
    _DAT_00b3993c = FUN_00419a70("sJoyDownRight","Dn-Rt");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 4;
  if (iVar2 == 0) {
    _DAT_00b39940 = 0;
  }
  else {
    _DAT_00b39940 = FUN_00419a70("sJoyDown",&DAT_00a618c8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 5;
  if (iVar2 == 0) {
    _DAT_00b39944 = 0;
  }
  else {
    _DAT_00b39944 = FUN_00419a70("sJoyDownLeft","Dn-Left");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 6;
  if (iVar2 == 0) {
    _DAT_00b39948 = 0;
  }
  else {
    _DAT_00b39948 = FUN_00419a70("sJoyLeft",&DAT_00a52974);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 7;
  if (iVar2 == 0) {
    _DAT_00b3994c = 0;
  }
  else {
    _DAT_00b3994c = FUN_00419a70("sJoyUpLeft","Up-Left");
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f5940(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb295;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_00b39950 = 0;
  }
  else {
    DAT_00b39950 = FUN_00419a70("sXboxDPadY","tilt the D-Pad up or down");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    DAT_00b39954 = 0;
  }
  else {
    DAT_00b39954 = FUN_00419a70("sXboxDPadUp","tilt the D-Pad up");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    _DAT_00b39958 = 0;
  }
  else {
    _DAT_00b39958 = FUN_00419a70("sXboxDPadDown","tilt the D-Pad down");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 3;
  if (iVar2 == 0) {
    _DAT_00b3995c = 0;
  }
  else {
    _DAT_00b3995c = FUN_00419a70("sXboxDPadX","tilt the D-Pad left or right");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 4;
  if (iVar2 == 0) {
    _DAT_00b39960 = 0;
  }
  else {
    _DAT_00b39960 = FUN_00419a70("sXboxDPadRight","tilt the D-Pad right");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 5;
  if (iVar2 == 0) {
    _DAT_00b39964 = 0;
  }
  else {
    _DAT_00b39964 = FUN_00419a70("sXboxDPadLeft","tilt the D-Pad left");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 6;
  if (iVar2 == 0) {
    _DAT_00b39968 = 0;
  }
  else {
    _DAT_00b39968 = FUN_00419a70("sXboxStart","press the Start button");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 7;
  if (iVar2 == 0) {
    _DAT_00b3996c = 0;
  }
  else {
    _DAT_00b3996c = FUN_00419a70("sXboxBack","press the Back button");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 8;
  if (iVar2 == 0) {
    _DAT_00b39970 = 0;
  }
  else {
    _DAT_00b39970 = FUN_00419a70("sXboxLThumb","click the Left Stick");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 9;
  if (iVar2 == 0) {
    _DAT_00b39974 = 0;
  }
  else {
    _DAT_00b39974 = FUN_00419a70("sXboxRThumb","click the Right Stick");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 10;
  if (iVar2 == 0) {
    _DAT_00b39978 = 0;
  }
  else {
    _DAT_00b39978 = FUN_00419a70("sXboxA","press the A button");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xb;
  if (iVar2 == 0) {
    _DAT_00b3997c = 0;
  }
  else {
    _DAT_00b3997c = FUN_00419a70("sXboxB","press the B button");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xc;
  if (iVar2 == 0) {
    _DAT_00b39980 = 0;
  }
  else {
    _DAT_00b39980 = FUN_00419a70("sXboxX","press the X button");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xd;
  if (iVar2 == 0) {
    _DAT_00b39984 = 0;
  }
  else {
    _DAT_00b39984 = FUN_00419a70("sXboxY","press the Y button");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xe;
  if (iVar2 == 0) {
    _DAT_00b39988 = 0;
  }
  else {
    _DAT_00b39988 = FUN_00419a70("sXboxRBumper","press the Right Bumper");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xf;
  if (iVar2 == 0) {
    _DAT_00b3998c = 0;
  }
  else {
    _DAT_00b3998c = FUN_00419a70("sXboxLBumper","press the Left Bumper");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x10;
  if (iVar2 == 0) {
    _DAT_00b39990 = 0;
  }
  else {
    _DAT_00b39990 = FUN_00419a70("sXboxLTrigger","pull the Left Trigger");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x11;
  if (iVar2 == 0) {
    _DAT_00b39994 = 0;
  }
  else {
    _DAT_00b39994 = FUN_00419a70("sXboxRTrigger","pull the Right Trigger");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x12;
  if (iVar2 == 0) {
    _DAT_00b39998 = 0;
  }
  else {
    _DAT_00b39998 = FUN_00419a70("sXboxLThumbY","move the Left Stick up or down");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x13;
  if (iVar2 == 0) {
    _DAT_00b3999c = 0;
  }
  else {
    _DAT_00b3999c = FUN_00419a70("sXboxLThumbUp","move the Left Stick up");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x14;
  if (iVar2 == 0) {
    _DAT_00b399a0 = 0;
  }
  else {
    _DAT_00b399a0 = FUN_00419a70("sXboxLThumbDown","move the Left Stick down");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x15;
  if (iVar2 == 0) {
    _DAT_00b399a4 = 0;
  }
  else {
    _DAT_00b399a4 = FUN_00419a70("sXboxLThumbX","move the Left Stick left or right");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x16;
  if (iVar2 == 0) {
    _DAT_00b399a8 = 0;
  }
  else {
    _DAT_00b399a8 = FUN_00419a70("sXboxLThumbLeft","move the Left Stick left");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x17;
  if (iVar2 == 0) {
    _DAT_00b399ac = 0;
  }
  else {
    _DAT_00b399ac = FUN_00419a70("sXboxLThumbRight","move the Left Stick right");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x18;
  if (iVar2 == 0) {
    _DAT_00b399b0 = 0;
  }
  else {
    _DAT_00b399b0 = FUN_00419a70("sXboxRThumbY","move the Right Stick up or down");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x19;
  if (iVar2 == 0) {
    _DAT_00b399b4 = 0;
  }
  else {
    _DAT_00b399b4 = FUN_00419a70("sXboxRThumbUp","move the Right Stick up");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1a;
  if (iVar2 == 0) {
    _DAT_00b399b8 = 0;
  }
  else {
    _DAT_00b399b8 = FUN_00419a70("sXboxRThumbDown","move the Right Stick down");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1b;
  if (iVar2 == 0) {
    _DAT_00b399bc = 0;
  }
  else {
    _DAT_00b399bc = FUN_00419a70("sXboxRThumbX","move the Right Stick left or right");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1c;
  if (iVar2 == 0) {
    _DAT_00b399c0 = 0;
  }
  else {
    _DAT_00b399c0 = FUN_00419a70("sXboxRThumbLeft","move the Right Stick left");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1d;
  if (iVar2 == 0) {
    _DAT_00b399c4 = 0;
  }
  else {
    _DAT_00b399c4 = FUN_00419a70("sXboxRThumbRight","move the Right Stick right");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1e;
  if (iVar2 == 0) {
    _DAT_00b399c8 = 0;
  }
  else {
    _DAT_00b399c8 = FUN_00419a70("sXboxNone","assign a button in the Controls menu");
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f6040(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb3ef;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_00b399d0 = 0;
  }
  else {
    DAT_00b399d0 = FUN_00419a70("sUActnForward","Forward");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    DAT_00b399d4 = 0;
  }
  else {
    DAT_00b399d4 = FUN_00419a70("sUActnBack",&DAT_00a2fa64);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    _DAT_00b399d8 = 0;
  }
  else {
    _DAT_00b399d8 = FUN_00419a70("sUActnSldleft","Slide Left");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 3;
  if (iVar2 == 0) {
    _DAT_00b399dc = 0;
  }
  else {
    _DAT_00b399dc = FUN_00419a70("sUActnSldright","Slide Right");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 4;
  if (iVar2 == 0) {
    _DAT_00b399e0 = 0;
  }
  else {
    _DAT_00b399e0 = FUN_00419a70("sUActnUse","Attack");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 5;
  if (iVar2 == 0) {
    _DAT_00b399e4 = 0;
  }
  else {
    _DAT_00b399e4 = FUN_00419a70("sUActnActivate","Activate");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 6;
  if (iVar2 == 0) {
    _DAT_00b399e8 = 0;
  }
  else {
    _DAT_00b399e8 = FUN_00419a70("sUActnBlock","Block");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 7;
  if (iVar2 == 0) {
    _DAT_00b399ec = 0;
  }
  else {
    _DAT_00b399ec = FUN_00419a70("sUActnCast",&DAT_00a2fa2c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 8;
  if (iVar2 == 0) {
    _DAT_00b399f0 = 0;
  }
  else {
    _DAT_00b399f0 = FUN_00419a70("sUActnRdyitem","Ready Weapon");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 9;
  if (iVar2 == 0) {
    _DAT_00b399f4 = 0;
  }
  else {
    _DAT_00b399f4 = FUN_00419a70("sUActnCrouch",&DAT_00a51e0c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 10;
  if (iVar2 == 0) {
    _DAT_00b399f8 = 0;
  }
  else {
    _DAT_00b399f8 = FUN_00419a70("sUActnRun",&DAT_00a2fa0c);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xb;
  if (iVar2 == 0) {
    _DAT_00b399fc = 0;
  }
  else {
    _DAT_00b399fc = FUN_00419a70("sUActnTogglerun","Always Run");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xc;
  if (iVar2 == 0) {
    _DAT_00b39a00 = 0;
  }
  else {
    _DAT_00b39a00 = FUN_00419a70("sUActnAutomove","Auto Move");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xd;
  if (iVar2 == 0) {
    _DAT_00b39a04 = 0;
  }
  else {
    _DAT_00b39a04 = FUN_00419a70("sUActnJump",&DAT_00a2f9ec);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xe;
  if (iVar2 == 0) {
    _DAT_00b39a08 = 0;
  }
  else {
    _DAT_00b39a08 = FUN_00419a70("sUActnTogglepov","Change View");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xf;
  if (iVar2 == 0) {
    _DAT_00b39a0c = 0;
  }
  else {
    _DAT_00b39a0c = FUN_00419a70("sUActnMenumode","Journal");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x10;
  if (iVar2 == 0) {
    _DAT_00b39a10 = 0;
  }
  else {
    _DAT_00b39a10 = FUN_00419a70("sUActnRestmenu",&DAT_00a4f060);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x11;
  if (iVar2 == 0) {
    _DAT_00b39a14 = 0;
  }
  else {
    _DAT_00b39a14 = FUN_00419a70("sUActnQuickmenu","Quick Menu");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x12;
  if (iVar2 == 0) {
    _DAT_00b39a18 = 0;
  }
  else {
    _DAT_00b39a18 = FUN_00419a70("sUActnQuick1","Quick1");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x13;
  if (iVar2 == 0) {
    _DAT_00b39a1c = 0;
  }
  else {
    _DAT_00b39a1c = FUN_00419a70("sUActnQuick2","Quick2");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x14;
  if (iVar2 == 0) {
    _DAT_00b39a20 = 0;
  }
  else {
    _DAT_00b39a20 = FUN_00419a70("sUActnQuick3","Quick3");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x15;
  if (iVar2 == 0) {
    _DAT_00b39a24 = 0;
  }
  else {
    _DAT_00b39a24 = FUN_00419a70("sUActnQuick4","Quick4");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x16;
  if (iVar2 == 0) {
    _DAT_00b39a28 = 0;
  }
  else {
    _DAT_00b39a28 = FUN_00419a70("sUActnQuick5","Quick5");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x17;
  if (iVar2 == 0) {
    _DAT_00b39a2c = 0;
  }
  else {
    _DAT_00b39a2c = FUN_00419a70("sUActnQuick6","Quick6");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x18;
  if (iVar2 == 0) {
    _DAT_00b39a30 = 0;
  }
  else {
    _DAT_00b39a30 = FUN_00419a70("sUActnQuick7","Quick7");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x19;
  if (iVar2 == 0) {
    _DAT_00b39a34 = 0;
  }
  else {
    _DAT_00b39a34 = FUN_00419a70("sUActnQuick8","Quick8");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1a;
  if (iVar2 == 0) {
    _DAT_00b39a38 = 0;
  }
  else {
    _DAT_00b39a38 = FUN_00419a70("sUActnQuicksave","QuickSave");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1b;
  if (iVar2 == 0) {
    _DAT_00b39a3c = 0;
  }
  else {
    _DAT_00b39a3c = FUN_00419a70("sUActnQuickload","QuickLoad");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x1c;
  if (iVar2 == 0) {
    _DAT_00b39a40 = 0;
  }
  else {
    _DAT_00b39a40 = FUN_00419a70("sUActnGrab",&DAT_00a2f960);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f7e00(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb452;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_00b39a44 = 0;
  }
  else {
    DAT_00b39a44 = FUN_00419a70("sBladeOneHand","Blade - One Hand");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    DAT_00b39a48 = 0;
  }
  else {
    DAT_00b39a48 = FUN_00419a70("sBladeTwoHand","Blade - Two Hand");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    _DAT_00b39a4c = 0;
  }
  else {
    _DAT_00b39a4c = FUN_00419a70("sBluntOneHand","Blunt - One Hand");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 3;
  if (iVar2 == 0) {
    _DAT_00b39a50 = 0;
  }
  else {
    _DAT_00b39a50 = FUN_00419a70("sBluntTwoHand","Blunt - Two Hand");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 4;
  if (iVar2 == 0) {
    _DAT_00b39a54 = 0;
  }
  else {
    _DAT_00b39a54 = FUN_00419a70("sStaff","Staff");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 5;
  if (iVar2 == 0) {
    _DAT_00b39a58 = 0;
  }
  else {
    _DAT_00b39a58 = FUN_00419a70(&DAT_00a63df4,&DAT_00a451f8);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f8070(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb541;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_00b39a64 = 0;
  }
  else {
    DAT_00b39a64 = FUN_00419a70("sTargetTypeTake",&DAT_00a64124);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    _DAT_00b39a68 = 0;
  }
  else {
    _DAT_00b39a68 = FUN_00419a70("sTargetTypeOpen",&DAT_00a33bb4);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    _DAT_00b39a6c = 0;
  }
  else {
    _DAT_00b39a6c = FUN_00419a70("sTargetTypeSit",&DAT_00a64100);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 3;
  if (iVar2 == 0) {
    _DAT_00b39a70 = 0;
  }
  else {
    _DAT_00b39a70 = FUN_00419a70("sTargetTypeActivate","Activate");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 4;
  if (iVar2 == 0) {
    _DAT_00b39a74 = 0;
  }
  else {
    _DAT_00b39a74 = FUN_00419a70("sTargetTypeSleep","Sleep");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 5;
  if (iVar2 == 0) {
    _DAT_00b39a78 = 0;
  }
  else {
    _DAT_00b39a78 = FUN_00419a70("sTargetTypeRead",&DAT_00a640c0);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 6;
  if (iVar2 == 0) {
    _DAT_00b39a7c = 0;
  }
  else {
    _DAT_00b39a7c = FUN_00419a70("sTargetTypeTalk",&DAT_00a63d54);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 7;
  if (iVar2 == 0) {
    _DAT_00b39a80 = 0;
  }
  else {
    _DAT_00b39a80 = FUN_00419a70("sTargetTypeOpenDoor",&DAT_00a33bb4);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 8;
  if (iVar2 == 0) {
    _DAT_00b39a84 = 0;
  }
  else {
    _DAT_00b39a84 = FUN_00419a70("sTargetTypeHorse",&DAT_00a64084);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 9;
  if (iVar2 == 0) {
    _DAT_00b39a88 = 0;
  }
  else {
    _DAT_00b39a88 = FUN_00419a70("sTargetTypeCrown",&DAT_00a63d54);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 10;
  if (iVar2 == 0) {
    _DAT_00b39a8c = 0;
  }
  else {
    _DAT_00b39a8c = FUN_00419a70("sTargetTypeVampire","Feed/Talk");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xb;
  if (iVar2 == 0) {
    _DAT_00b39a90 = 0;
  }
  else {
    _DAT_00b39a90 = FUN_00419a70("sTargetTypeEquip",&DAT_00a528e4);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xc;
  if (iVar2 == 0) {
    _DAT_00b39a94 = 0;
  }
  else {
    _DAT_00b39a94 = FUN_00419a70("sTargetTypeUnequip","Unequip");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xd;
  if (iVar2 == 0) {
    _DAT_00b39a98 = 0;
  }
  else {
    _DAT_00b39a98 = FUN_00419a70("sTargetTypeDrink","Drink");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xe;
  if (iVar2 == 0) {
    _DAT_00b39a9c = 0;
  }
  else {
    _DAT_00b39a9c = FUN_00419a70("sTargetTypeEat",&DAT_00a63ff4);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0xf;
  if (iVar2 == 0) {
    _DAT_00b39aa0 = 0;
  }
  else {
    _DAT_00b39aa0 = FUN_00419a70("sTargetTypeRecharge","Recharge");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x10;
  if (iVar2 == 0) {
    _DAT_00b39aa4 = 0;
  }
  else {
    _DAT_00b39aa4 = FUN_00419a70("sTargetTypeBrew",&DAT_00a63fc8);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x11;
  if (iVar2 == 0) {
    _DAT_00b39aa8 = 0;
  }
  else {
    _DAT_00b39aa8 = FUN_00419a70("sTargetTypeApply","Apply");
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(8);
  local_4 = 0x12;
  if (iVar2 == 0) {
    _DAT_00b39aac = 0;
  }
  else {
    _DAT_00b39aac = FUN_00419a70("sTargetTypeRepair","Repair");
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f88b0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbafa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b11f8c);
  _atexit(FUN_00a232a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8950(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc37a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b120b4);
  _atexit(FUN_00a23310);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f89b0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc3aa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b120bc);
  _atexit(FUN_00a23340);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8a10(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc3da;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b120c4);
  _atexit(FUN_00a23370);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8a70(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc40a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b120cc);
  _atexit(FUN_00a233a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8ad0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc43a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b120d4);
  _atexit(FUN_00a233d0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8b30(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc46a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b120dc);
  _atexit(FUN_00a23400);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8b90(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc49a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b120e4);
  _atexit(FUN_00a23430);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8bf0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc4ca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b120ec);
  _atexit(FUN_00a23460);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8c50(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc4fa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b120f4);
  _atexit(FUN_00a23490);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8cb0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc52a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b120fc);
  _atexit(FUN_00a234c0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8d10(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc55a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12104);
  _atexit(FUN_00a234f0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f8d70(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc58a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1210c);
  _atexit(FUN_00a23520);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f90d0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bcd7a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b125e8);
  _atexit(FUN_00a23600);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f9130(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bcdaa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b125f0);
  _atexit(FUN_00a23630);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f9190(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bcdda;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b125f8);
  _atexit(FUN_00a23660);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f91f0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bce0a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12600);
  _atexit(FUN_00a23690);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f9250(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bce3a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12608);
  _atexit(FUN_00a236c0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f92b0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bce6a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12610);
  _atexit(FUN_00a236f0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f9310(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bce9a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12618);
  _atexit(FUN_00a23720);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f9370(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bceca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12620);
  _atexit(FUN_00a23750);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f93d0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bcefa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12628);
  _atexit(FUN_00a23780);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f9430(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bcf2a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12630);
  _atexit(FUN_00a237b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f9490(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bcf5a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12638);
  _atexit(FUN_00a237e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009f9530(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bd68a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1274c);
  _atexit(FUN_00a23820);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fac60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bdfea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12dac);
  _atexit(FUN_00a24280);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009facc0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be01a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b12db4);
  _atexit(FUN_00a242b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fad40(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be70a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&PTR_s_Data_Fonts_Kingthings_Regular_fn_00b12e1c);
  _atexit(FUN_00a242e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fada0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be73a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&PTR_s_Data_Fonts_Kingthings_Shadowed_f_00b12e24);
  _atexit(FUN_00a24310);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fae00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be76a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&PTR_s_Data_Fonts_Tahoma_Bold_Small_fnt_00b12e2c);
  _atexit(FUN_00a24340);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fae60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be79a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&PTR_s_Data_Fonts_Daedric_Font_fnt_00b12e34);
  _atexit(FUN_00a24370);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009faec0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be7ca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&PTR_s_Data_Fonts_Handwritten_fnt_00b12e3c);
  _atexit(FUN_00a243a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009faf20(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be82a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13200);
  _atexit(FUN_00a243d0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009faf80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be85a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13208);
  _atexit(FUN_00a24400);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fafe0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be88a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13210);
  _atexit(FUN_00a24430);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb040(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be8ba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13218);
  _atexit(FUN_00a24460);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb0a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be8ea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13220);
  _atexit(FUN_00a24490);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb100(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be91a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13228);
  _atexit(FUN_00a244c0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb160(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be94a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13230);
  _atexit(FUN_00a244f0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb1c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be97a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13238);
  _atexit(FUN_00a24520);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb220(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bed6a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13580);
  _atexit(FUN_00a24550);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb280(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bed9a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13588);
  _atexit(FUN_00a24580);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb2e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bedca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13590);
  _atexit(FUN_00a245b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb340(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bedfa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13598);
  _atexit(FUN_00a245e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb3a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bee2a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135a0);
  _atexit(FUN_00a24610);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb400(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bee5a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135a8);
  _atexit(FUN_00a24640);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb460(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bee8a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135b0);
  _atexit(FUN_00a24670);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb4c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009beeba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135b8);
  _atexit(FUN_00a246a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb520(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009beeea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135c0);
  _atexit(FUN_00a246d0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb580(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bef1a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135c8);
  _atexit(FUN_00a24700);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb5e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bef4a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135d0);
  _atexit(FUN_00a24730);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb640(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bef7a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135d8);
  _atexit(FUN_00a24760);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb6a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009befaa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135e0);
  _atexit(FUN_00a24790);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb700(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009befda;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135e8);
  _atexit(FUN_00a247c0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb760(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf00a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135f0);
  _atexit(FUN_00a247f0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb7c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf03a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b135f8);
  _atexit(FUN_00a24820);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb820(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf06a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13600);
  _atexit(FUN_00a24850);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb880(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf09a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13608);
  _atexit(FUN_00a24880);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb8e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf0ca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13610);
  _atexit(FUN_00a248b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fb940(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf0fa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13618);
  _atexit(FUN_00a248e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fba70(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf3aa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13984);
  _atexit(FUN_00a24950);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fbad0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf3da;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1398c);
  _atexit(FUN_00a24980);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fbb30(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf40a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13994);
  _atexit(FUN_00a249b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fbb90(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf43a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1399c);
  _atexit(FUN_00a249e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fbbf0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf46a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b139a4);
  _atexit(FUN_00a24a10);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fbc70(void)

{
  FUN_0057d390((double)DAT_00b139a4);
  DAT_00b3a704 = FUN_009828c0();
  return;
}



void FUN_009fbce0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c00ba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b13fc4);
  _atexit(FUN_00a24a80);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fbe90(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c042a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b140b0);
  _atexit(FUN_00a24b20);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009fbf20(void)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c04be;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004028d0(&DAT_00a2f7ec,0);
  local_4 = 0;
  _DAT_00b3b378 = 0;
  _DAT_00b3b37c = 0;
  _DAT_00b3b37e = 0;
  FUN_004028d0("item_pickup",0);
  local_4._0_1_ = 1;
  _DAT_00b3b380 = 0;
  _DAT_00b3b384 = 0;
  _DAT_00b3b386 = 0;
  FUN_004028d0("open_container",0);
  local_4._0_1_ = 2;
  _DAT_00b3b388 = 0;
  _DAT_00b3b38c = 0;
  _DAT_00b3b38e = 0;
  FUN_004028d0("chair_sit",0);
  local_4._0_1_ = 3;
  _DAT_00b3b390 = 0;
  _DAT_00b3b394 = 0;
  _DAT_00b3b396 = 0;
  FUN_004028d0("activate_pull_push",0);
  local_4._0_1_ = 4;
  _DAT_00b3b398 = 0;
  _DAT_00b3b39c = 0;
  _DAT_00b3b39e = 0;
  FUN_004028d0("bed_sleep",0);
  local_4._0_1_ = 5;
  _DAT_00b3b3a0 = 0;
  _DAT_00b3b3a4 = 0;
  _DAT_00b3b3a6 = 0;
  FUN_004028d0("book_scroll_read",0);
  local_4._0_1_ = 6;
  _DAT_00b3b3a8 = 0;
  _DAT_00b3b3ac = 0;
  _DAT_00b3b3ae = 0;
  FUN_004028d0("npc_talk",0);
  local_4._0_1_ = 7;
  _DAT_00b3b3b0 = 0;
  _DAT_00b3b3b4 = 0;
  _DAT_00b3b3b6 = 0;
  FUN_004028d0("open_door",0);
  local_4._0_1_ = 8;
  _DAT_00b3b3b8 = 0;
  _DAT_00b3b3bc = 0;
  _DAT_00b3b3be = 0;
  FUN_004028d0("horses",0);
  local_4._0_1_ = 9;
  _DAT_00b3b3c0 = 0;
  _DAT_00b3b3c4 = 0;
  _DAT_00b3b3c6 = 0;
  FUN_004028d0("crown",0);
  local_4 = CONCAT31(local_4._1_3_,10);
  _DAT_00b3b3c8 = 0;
  _DAT_00b3b3cc = 0;
  _DAT_00b3b3ce = 0;
  FUN_004028d0("vampire",0);
  _atexit(FUN_00a24b60);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc170(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c065a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14130);
  _atexit(FUN_00a24b90);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc1d0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c068a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14138);
  _atexit(FUN_00a24bc0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc230(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c06ba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14140);
  _atexit(FUN_00a24bf0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc290(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c06ea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14148);
  _atexit(FUN_00a24c20);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc2f0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c071a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14150);
  _atexit(FUN_00a24c50);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc350(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c074a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14158);
  _atexit(FUN_00a24c80);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc3b0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c077a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14160);
  _atexit(FUN_00a24cb0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc410(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c07aa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14168);
  _atexit(FUN_00a24ce0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc470(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c07da;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14170);
  _atexit(FUN_00a24d10);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc4e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0b3a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&PTR_s_0002466E_00b1436c);
  _atexit(FUN_00a24d50);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc540(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0b6a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&PTR_s_Special_TES4Title_mp3_00b14374);
  _atexit(FUN_00a24d80);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc5a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0dca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14380);
  _atexit(FUN_00a24db0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc600(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0dfa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14388);
  _atexit(FUN_00a24de0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc660(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0e2a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14390);
  _atexit(FUN_00a24e10);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc700(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c21aa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b147fc);
  _atexit(FUN_00a24ea0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc760(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c21da;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14804);
  _atexit(FUN_00a24ed0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc7c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c220a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1480c);
  _atexit(FUN_00a24f00);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc820(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c223a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14814);
  _atexit(FUN_00a24f30);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc880(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c226a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1481c);
  _atexit(FUN_00a24f60);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc8e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c229a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14824);
  _atexit(FUN_00a24f90);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc940(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c22ca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1482c);
  _atexit(FUN_00a24fc0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fc9a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c22fa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14834);
  _atexit(FUN_00a24ff0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fca00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c232a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1483c);
  _atexit(FUN_00a25020);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fca60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c235a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14844);
  _atexit(FUN_00a25050);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcac0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c238a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1484c);
  _atexit(FUN_00a25080);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcb20(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c23ba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14854);
  _atexit(FUN_00a250b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcb80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c23ea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1485c);
  _atexit(FUN_00a250e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcbe0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c241a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14864);
  _atexit(FUN_00a25110);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcc40(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c244a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1486c);
  _atexit(FUN_00a25140);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcca0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c247a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14874);
  _atexit(FUN_00a25170);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcd00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c24aa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1487c);
  _atexit(FUN_00a251a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcd60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c24da;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14884);
  _atexit(FUN_00a251d0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcdc0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c250a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1488c);
  _atexit(FUN_00a25200);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fce20(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c253a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14894);
  _atexit(FUN_00a25230);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcf40(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2c9a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b148c4);
  _atexit(FUN_00a252c0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fcfa0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2cca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b148cc);
  _atexit(FUN_00a252f0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd000(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2cfa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b148d4);
  _atexit(FUN_00a25320);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd060(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2d2a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b148dc);
  _atexit(FUN_00a25350);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd0c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2d5a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b148e4);
  _atexit(FUN_00a25380);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd120(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2d8a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b148ec);
  _atexit(FUN_00a253b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd180(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2dba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b148f4);
  _atexit(FUN_00a253e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd1e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2dea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b148fc);
  _atexit(FUN_00a25410);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd240(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2e1a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14904);
  _atexit(FUN_00a25440);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd2a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2e4a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1490c);
  _atexit(FUN_00a25470);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd330(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2e7a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14974);
  _atexit(FUN_00a254b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd3f0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c345a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14b94);
  _atexit(FUN_00a254f0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd450(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c348a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14b9c);
  _atexit(FUN_00a25520);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd4b0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c34ba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ba4);
  _atexit(FUN_00a25550);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd510(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c34ea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14bac);
  _atexit(FUN_00a25580);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd570(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c351a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14bb4);
  _atexit(FUN_00a255b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd5d0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c354a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14bbc);
  _atexit(FUN_00a255e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd630(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c357a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14bc4);
  _atexit(FUN_00a25610);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd690(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c35aa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14bcc);
  _atexit(FUN_00a25640);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd6f0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c37da;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14cb4);
  _atexit(FUN_00a25670);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd750(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c380a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14cbc);
  _atexit(FUN_00a256a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd7b0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c383a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14cc4);
  _atexit(FUN_00a256d0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd810(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c386a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ccc);
  _atexit(FUN_00a25700);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd870(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c389a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14cd4);
  _atexit(FUN_00a25730);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd8d0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c38ca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14cdc);
  _atexit(FUN_00a25760);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fd9a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3c9a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14e34);
  _atexit(FUN_00a257b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fda00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3cca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14e3c);
  _atexit(FUN_00a257e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fda60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3cfa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14e44);
  _atexit(FUN_00a25810);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdac0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c42da;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14e88);
  _atexit(FUN_00a25860);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdb20(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c430a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14e90);
  _atexit(FUN_00a25890);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdb80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c433a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14e98);
  _atexit(FUN_00a258c0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdbe0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c436a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ea0);
  _atexit(FUN_00a258f0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdc40(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c439a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ea8);
  _atexit(FUN_00a25920);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdca0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c43ca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14eb0);
  _atexit(FUN_00a25950);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdd00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c43fa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&PTR_s___vault_TES4_LevelData__00b14eb8);
  _atexit(FUN_00a25980);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdd60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c442a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ec0);
  _atexit(FUN_00a259b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fddc0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c445a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ec8);
  _atexit(FUN_00a259e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fde20(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c448a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ed0);
  _atexit(FUN_00a25a10);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fde80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c44ba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ed8);
  _atexit(FUN_00a25a40);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdee0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c44ea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ee0);
  _atexit(FUN_00a25a70);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdf40(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c451a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ee8);
  _atexit(FUN_00a25aa0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fdfa0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c454a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ef0);
  _atexit(FUN_00a25ad0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe000(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c457a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14ef8);
  _atexit(FUN_00a25b00);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe060(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c45aa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f00);
  _atexit(FUN_00a25b30);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe0c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c45da;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f08);
  _atexit(FUN_00a25b60);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe120(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c460a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f10);
  _atexit(FUN_00a25b90);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe180(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c463a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f18);
  _atexit(FUN_00a25bc0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe1e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c466a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f20);
  _atexit(FUN_00a25bf0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe240(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c469a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f28);
  _atexit(FUN_00a25c20);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe2a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c46ca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f30);
  _atexit(FUN_00a25c50);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe300(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c46fa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f38);
  _atexit(FUN_00a25c80);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe360(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c472a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f40);
  _atexit(FUN_00a25cb0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe3c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c475a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f48);
  _atexit(FUN_00a25ce0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe420(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c478a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f50);
  _atexit(FUN_00a25d10);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe480(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c47ba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b14f58);
  _atexit(FUN_00a25d40);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe590(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c498a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b15370);
  _atexit(FUN_00a25d70);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe6d0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c4cba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b15748);
  _atexit(FUN_00a25dd0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe730(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c4cea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b15750);
  _atexit(FUN_00a25e00);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe7b0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c4e3a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b15800);
  _atexit(FUN_00a25e40);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe810(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c519a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b15814);
  _atexit(FUN_00a25e70);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe870(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c51ca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1581c);
  _atexit(FUN_00a25ea0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe8d0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c51fa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b15824);
  _atexit(FUN_00a25ed0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe930(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c522a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1582c);
  _atexit(FUN_00a25f00);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fe990(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c525a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b15834);
  _atexit(FUN_00a25f30);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fea50(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c55fa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b15a68);
  _atexit(FUN_00a25fa0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fee00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c662a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16178);
  _atexit(FUN_00a25fd0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fee60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c665a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16180);
  _atexit(FUN_00a26000);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009feec0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c668a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16188);
  _atexit(FUN_00a26030);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fef20(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c66ba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16190);
  _atexit(FUN_00a26060);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fef80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c66ea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16198);
  _atexit(FUN_00a26090);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009fefe0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c671a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b161a0);
  _atexit(FUN_00a260c0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff040(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c674a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b161a8);
  _atexit(FUN_00a260f0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff0a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c677a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b161b0);
  _atexit(FUN_00a26120);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff100(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c67aa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b161b8);
  _atexit(FUN_00a26150);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff160(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c67da;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b161c0);
  _atexit(FUN_00a26180);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff1c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c680a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b161c8);
  _atexit(FUN_00a261b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff220(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c683a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b161d0);
  _atexit(FUN_00a261e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff280(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c686a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b161d8);
  _atexit(FUN_00a26210);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff2e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c689a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b161e0);
  _atexit(FUN_00a26240);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff340(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c692a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16244);
  _atexit(FUN_00a26280);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff3a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c695a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1624c);
  _atexit(FUN_00a262b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff400(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c698a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16254);
  _atexit(FUN_00a262e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff460(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c69ba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1625c);
  _atexit(FUN_00a26310);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff4c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c69ea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16264);
  _atexit(FUN_00a26340);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff520(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6a1a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1626c);
  _atexit(FUN_00a26370);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff580(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6a4a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16274);
  _atexit(FUN_00a263a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff5e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6a7a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1627c);
  _atexit(FUN_00a263d0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff640(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6aaa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16284);
  _atexit(FUN_00a26400);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff6a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6ada;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1628c);
  _atexit(FUN_00a26430);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff700(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6b0a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16294);
  _atexit(FUN_00a26460);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff760(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6b3a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b1629c);
  _atexit(FUN_00a26490);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff7c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6b6a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162a4);
  _atexit(FUN_00a264c0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff820(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6b9a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162ac);
  _atexit(FUN_00a264f0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff880(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6bca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162b4);
  _atexit(FUN_00a26520);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff8e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6bfa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162bc);
  _atexit(FUN_00a26550);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff940(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6c2a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162c4);
  _atexit(FUN_00a26580);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ff9a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6c5a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162cc);
  _atexit(FUN_00a265b0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ffa00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6c8a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162d4);
  _atexit(FUN_00a265e0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ffa60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6cba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162dc);
  _atexit(FUN_00a26610);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ffac0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6cea;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162e4);
  _atexit(FUN_00a26640);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ffb20(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6d1a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162ec);
  _atexit(FUN_00a26670);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ffb80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6d4a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162f4);
  _atexit(FUN_00a266a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ffbe0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6d7a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b162fc);
  _atexit(FUN_00a266d0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ffc40(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6daa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b16304);
  _atexit(FUN_00a26700);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009ffcf0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6e1a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b23c50);
  _atexit(FUN_00a26740);
  *unaff_FS_OFFSET = local_c;
  return;
}


