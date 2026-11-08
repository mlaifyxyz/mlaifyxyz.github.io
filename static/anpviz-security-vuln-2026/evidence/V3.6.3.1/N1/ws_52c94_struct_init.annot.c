/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00052c94 */
/* function FUN_00052c94 @ 00052c94 */

void FUN_00052c94(void)

{
  ushort *puVar1;
  ushort uVar2;
  byte bVar3;
  bool bVar4;
  
  puVar1 = DAT_00052cfc;
  memset(DAT_00052cfc,0,0x810c);
  memset(DAT_00052d00,0,0x5b8);
  memset(DAT_00052d04,0,0x84);
  bVar4 = *(int *)(DAT_00052d08 + 0x1c) != 0 || *(int *)(DAT_00052d08 + 0x18) != 0;
  bVar3 = 0;
  if (bVar4) {
    bVar3 = (byte)*puVar1;
  }
  puVar1[0x42] = (ushort)*(undefined4 *)(DAT_00052d08 + 0x24);
  if (bVar4) {
    *(byte *)puVar1 = bVar3 | 8;
  }
  uVar2 = FUN_000227c8();
  puVar1[0x44] = 0x20;
  puVar1[0x45] = 0;
  puVar1[0x144c] = 0x3c;
  puVar1[0x144d] = 0;
  *puVar1 = *puVar1 & 0xf9fd | 0x200;
  puVar1[0x43] = uVar2;
  return;
}


