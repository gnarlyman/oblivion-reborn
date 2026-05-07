
void FUN_00a00130(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6e4a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b23c58);
  _atexit(FUN_00a26770);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00a00190(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6ffa;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004040e0(&DAT_00b23c60);
  _atexit(FUN_00a267a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0a290(void)

{
  _DAT_00b3ff54 = 0x3f800000;
  _DAT_00b3ff60 = 0x3f000000;
  _DAT_00b3ff4c = 0;
  _DAT_00b3ff48 = 0;
  _DAT_00b3ff5c = 0x3f000000;
  _DAT_00b3ff58 = 0x3f800000;
  FUN_0072fdf0();
  return;
}


