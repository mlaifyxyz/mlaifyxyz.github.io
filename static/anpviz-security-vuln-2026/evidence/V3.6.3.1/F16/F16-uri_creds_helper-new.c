/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00020778 */
/* function FUN_00020778 @ 00020778 */

undefined4 FUN_00020778(char *param_1,undefined4 param_2)

{
  char *__s2;
  char *__s2_00;
  int iVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  undefined1 auStack_7d8 [4];
  int local_7d4;
  int local_4dc;
  char acStack_4d8 [40];
  char acStack_4b0 [1164];
  
  memset(auStack_7d8,0,0x2fc);
  memset(&local_4dc,0,0x4b4);
  iVar1 = MsgGetMediaStreamConfig(auStack_7d8);
  if (((local_7d4 != 0) && (*DAT_00020828 == 0 && iVar1 == 0)) &&
     (iVar1 = MsgGetUserConfig(&local_4dc), __s2_00 = DAT_00020830, __s2 = DAT_0002082c, iVar1 == 0)
     ) {
    piVar4 = &local_4dc;
    for (iVar1 = 0; iVar1 < local_4dc; iVar1 = iVar1 + 1) {
      iVar2 = strcmp((char *)(piVar4 + 0x15),__s2);
      if ((iVar2 == 0) && (iVar2 = strcmp((char *)(piVar4 + 0x1d),__s2_00), iVar2 == 0)) {
        strcpy(param_1,acStack_4d8 + iVar1 * 0x78);
        sVar3 = strlen(acStack_4b0 + iVar1 * 0x78);
        our_md5_encode(param_2,acStack_4b0 + iVar1 * 0x78,sVar3);
        return 0;
      }
      piVar4 = piVar4 + 0x1e;
    }
  }
  return 0;
}


