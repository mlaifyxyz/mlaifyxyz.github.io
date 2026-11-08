/* hik_server (f811b64cf1dadd8381894c33a435e98f6a14c74097b537d99c24068827c780d7), Ghidra 12.2 headless; requested 00029f78 */
/* function FUN_00029f78 @ 00029f78 */

undefined4 FUN_00029f78(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((**(int **)(DAT_00029fc4 + 0x29f80 + DAT_00029fc8) == 0) ||
      (**(int **)(DAT_00029fc4 + 0x29f80 + DAT_00029fcc) != 0)) ||
     (iVar1 = strncmp((char *)(DAT_00029fd0 + 0x29fba),param_1,0x10), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    DebugPrint(8,7,DAT_00029fd4 + 0x29fb0,DAT_00029fd8 + 0x29fb6,0x17f,param_1,param_3);
    uVar2 = 0;
  }
  return uVar2;
}


