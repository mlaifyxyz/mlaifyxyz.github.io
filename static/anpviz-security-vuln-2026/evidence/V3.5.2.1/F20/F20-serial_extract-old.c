/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 0001f688 */
/* function FUN_0001f688 @ 0001f688 */

int FUN_0001f688(undefined4 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *param_2 = '\0';
  iVar1 = ixmlParseBuffer();
  if (iVar1 == 0) {
    DebugPrint(8,7,"[%s:%u]xml error\r\n\n",DAT_0001f71c,0x1cd);
    iVar1 = -1;
  }
  else {
    piVar2 = (int *)ixmlDocument_getElementsByTagName(iVar1,"IPC_SERIALNUMBER");
    if (piVar2 == (int *)0x0) {
      ixmlDocument_free(iVar1);
      iVar1 = -1;
    }
    else {
      for (puVar4 = *(undefined4 **)(*piVar2 + 0x2c); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)puVar4[10]) {
        iVar3 = strcmp((char *)*puVar4,"SerialNumber");
        if (iVar3 == 0) {
          if ((char *)puVar4[1] != (char *)0x0) {
            strcpy(param_2,(char *)puVar4[1]);
          }
          break;
        }
      }
      ixmlNodeList_free(piVar2);
      ixmlDocument_free(iVar1);
      iVar1 = -(uint)(*param_2 == '\0');
    }
  }
  return iVar1;
}


