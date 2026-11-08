/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0005cdb8 */
/* function FUN_0005cdb8 @ 0005cdb8 */

void FUN_0005cdb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_1c8 [132];
  undefined1 auStack_144 [300];
  
  DebugPrint(8,7,DAT_0005ce3c,DAT_0005ce40,0x1f51,DAT_0005ce38);
  memset(auStack_1c8,0,0x84);
  memset(auStack_144,0,300);
  iVar1 = FUN_0001d4ba(param_3,DAT_0005ce44);
  if (iVar1 == 0) {
    __assert(DAT_0005ce50,DAT_0005ce4c,0x1f57);
  }
  iVar1 = FUN_000349dc();
  if (iVar1 == 0) {
    iVar1 = FUN_000671c0(param_1,auStack_1c8,auStack_144);
  }
  FUN_0005498c(param_1,param_2,iVar1,DAT_0005ce54,auStack_144,0,param_4);
  return;
}


