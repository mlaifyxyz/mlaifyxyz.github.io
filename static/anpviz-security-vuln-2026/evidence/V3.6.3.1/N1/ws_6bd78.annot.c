/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0006bd78 */
/* function FUN_0006bd78 @ 0006bd78 */

undefined4 FUN_0006bd78(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char local_4b6;
  char local_4b5;
  undefined4 local_4b4;
  undefined1 auStack_4b0 [96];
  undefined1 auStack_450 [1080];
  
  local_4b6 = '\0';
  local_4b5 = '\0';
  local_4b4 = 0;
  memset(auStack_4b0,0,0x60);
  memset(auStack_450,0,0x438);
  iVar1 = FUN_0006aaac(param_3,auStack_450);
  if (*(code **)(param_1 + 0x540) == (code *)0x0) {
LAB_0006bdbc:
    uVar2 = 1;
  }
  else {
    (**(code **)(param_1 + 0x540))
              (auStack_450,&local_4b6,&local_4b5,&local_4b4,*(undefined4 *)(param_1 + 0x53c));
    if ((*DAT_0006be18 == 0) ||
       (pcVar3 = strstr(*(char **)(param_3 + 0x28),DAT_0006be1c), pcVar3 == (char *)0x0)) {
      if (local_4b6 == '\0') goto LAB_0006bdbc;
    }
    else {
      local_4b6 = '\x01';
    }
    uVar2 = 0;
    if (local_4b5 != '\0') {
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0006ae28(auStack_450,param_1 + 0x100,param_4,&local_4b4);
      }
    }
  }
  return uVar2;
}


