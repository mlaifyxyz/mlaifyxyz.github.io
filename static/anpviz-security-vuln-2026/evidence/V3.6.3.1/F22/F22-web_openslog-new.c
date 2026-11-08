/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0009c1d4 */
/* function FUN_0009c1d4 @ 0009c1d4 */

undefined4 FUN_0009c1d4(char *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  
  iVar2 = strcmp(param_1,(char *)(DAT_0009c220 + 0x9c1e2));
  if (iVar2 == 0) {
    iVar2 = FUN_0009b074(param_1,param_2,param_3);
    uVar4 = 0;
    if (iVar2 == 0) {
      sVar3 = strlen(param_3);
      iVar2 = DAT_0009c228;
      cVar1 = *(char *)(DAT_0009c224 + 0x9c206);
      *(undefined2 *)(param_3 + sVar3) = *(undefined2 *)(DAT_0009c224 + 0x9c204);
      param_3[sVar3 + 2] = cVar1;
      system((char *)(iVar2 + 0x9c212));
      return 0;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


