/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00026dbc */
/* function FUN_00026dbc @ 00026dbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00026dbc(undefined4 param_1,byte *param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_2 = *_DAT_00026de8 & 1;
  iVar1 = FUN_0004a668();
  if (iVar1 == 0) {
    *param_3 = 0;
    return;
  }
  *param_3 = 1;
  (*(code *)PTR_strcpy_00124440)(param_4,iVar1 + 0x69);
  return;
}


