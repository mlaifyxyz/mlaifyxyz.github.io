/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00055040 */
/* function FUN_00055040 @ 00055040 */

int FUN_00055040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_1918 [6400];
  
  DebugPrint(8,7,DAT_000550d0,DAT_000550d4,0x59b,DAT_000550cc);
  iVar1 = FUN_0001d4ba(param_3,DAT_000550d8);
  if (iVar1 == 0) {
    __assert(DAT_000550e4,DAT_000550e0,0x59e);
  }
  memset(auStack_1918,0,0x1900);
  iVar1 = FUN_000300c0(iVar1,auStack_1918);
  if (iVar1 == 0) {
    iVar1 = FUN_00025950(auStack_1918);
  }
  iVar1 = FUN_0005498c(param_1,param_2,iVar1,DAT_000550e8,auStack_1918,0,param_4);
  if (iVar1 == 0) {
    FUN_0002df54();
  }
  return iVar1;
}


/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 000300c0 */
/* function FUN_000300c0 @ 000300c0 */

undefined4 FUN_000300c0(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *__dest;
  
  iVar2 = FUN_0001d4ba(param_1,DAT_00030104,param_3,param_4,param_4);
  uVar1 = DAT_00030104;
  __dest = param_2;
  while (((iVar2 != 0 && (*(int *)(iVar2 + 0xc) != 0)) &&
         (iVar3 = FUN_0001d478(*(undefined4 *)(iVar2 + 4),uVar1), iVar3 == 0))) {
    if (__dest == param_2 + 0x1900) {
      return 0xffffffe4;
    }
    strncpy(__dest,*(char **)(iVar2 + 0xc),0x7f);
    iVar2 = *(int *)(iVar2 + 0x28);
    __dest = __dest + 0x80;
  }
  return 0;
}


