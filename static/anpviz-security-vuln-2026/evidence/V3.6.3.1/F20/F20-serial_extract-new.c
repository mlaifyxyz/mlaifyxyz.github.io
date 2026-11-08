/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 0001fd2c */
/* function FUN_0001fd2c @ 0001fd2c */

int FUN_0001fd2c(undefined4 param_1,char *param_2,size_t param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *param_2 = '\0';
  iVar1 = ixmlParseBuffer();
  if (iVar1 == 0) {
    DebugPrint(8,7,"[%s:%u]xml error\r\n\n",DAT_0001fdd0,0x22b);
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
            snprintf(param_2,param_3,"%s",(char *)puVar4[1]);
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


