/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0005d010 */
/* function FUN_0005d010 @ 0005d010 */

void FUN_0005d010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_17c [100];
  undefined1 auStack_118 [256];
  
  DebugPrint(8,7,DAT_0005d09c,DAT_0005d0a0,0x1fa9,DAT_0005d098);
  iVar1 = FUN_0001d4ba(param_3,DAT_0005d0a4);
  if (iVar1 == 0) {
    __assert(DAT_0005d0b0,DAT_0005d0ac,0x1fac);
  }
  memset(auStack_17c,0,100);
  memset(auStack_118,0,0x100);
  iVar1 = FUN_00034a9c(iVar1,auStack_17c);
  if (iVar1 == 0) {
    iVar1 = FUN_00067144(param_1,auStack_17c,auStack_118);
  }
  FUN_0005498c(param_1,param_2,iVar1,DAT_0005d0b4,auStack_118,0,param_4);
  return;
}


