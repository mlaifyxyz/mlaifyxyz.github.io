/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 000a6b20 */
/* function FUN_000a6b20 @ 000a6b20 */

undefined4 FUN_000a6b20(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  size_t __n;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *__s;
  code *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = DAT_000a6bd4;
  DebugPrint(8,7,DAT_000a6bd0 + 0xa6b40,DAT_000a6bcc + 0xa6b3a,0x20e0,param_1);
  iVar3 = 0;
  iVar7 = DAT_000a6bdc + 0xa6b62;
  iVar4 = *(int *)(iVar4 + 0xa6b54 + DAT_000a6bd8);
  iVar6 = DAT_000a6be0 + 0xa6b66;
  do {
    __s = *(char **)(iVar4 + iVar3 * 8);
    if (*__s != '\0') {
      __n = strlen(__s);
      iVar1 = strncmp(__s,param_1,__n);
      if (iVar1 == 0) {
        DebugPrint(8,7,iVar6,iVar7,0x20ec,__s);
        pcVar5 = *(code **)(iVar3 * 8 + iVar4 + 4);
        if (pcVar5 != (code *)0x0) {
          uVar2 = (*pcVar5)(*(undefined4 *)(iVar4 + iVar3 * 8),param_3,param_1,param_2,param_4);
          return uVar2;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x43);
  return 0;
}


