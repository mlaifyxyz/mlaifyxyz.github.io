/* hik_server (9fbc544a08dee4f84df11770754e254b13e8d25d5fb8d514b795f85a790cb910), Ghidra 12.2 headless; requested 0002ae9c */
/* function FUN_0002ae9c @ 0002ae9c */

undefined4 FUN_0002ae9c(char *param_1)

{
  int iVar1;
  
  if (((**(int **)(DAT_0002aeec + 0x2aea4 + DAT_0002aef0) == 0) ||
      (**(int **)(DAT_0002aeec + 0x2aea4 + DAT_0002aef4) != 0)) ||
     (iVar1 = strncmp((char *)(DAT_0002aef8 + 0x2aee0),param_1,0x10), iVar1 == 0)) {
    return 1;
  }
  DebugPrint(8,7,DAT_0002af00 + 0x2aedc,DAT_0002aefc + 0x2aed6,0x17f,param_1);
  return 0;
}


