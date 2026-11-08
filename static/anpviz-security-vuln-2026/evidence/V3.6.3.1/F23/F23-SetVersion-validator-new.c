/* dbg_server (78868d0860e011e8688d40ce4a83d129a82857970dd535dc7b4a675d2c91e308), Ghidra 12.2 headless; requested 00012560 */
/* function FUN_00012560 @ 00012560 */

undefined4 FUN_00012560(byte *param_1)

{
  size_t sVar1;
  uint uVar2;
  bool bVar3;
  
  if (((param_1 == (byte *)0x0) || (uVar2 = (uint)*param_1, uVar2 == 0)) ||
     (sVar1 = strlen((char *)param_1), 0x30 < sVar1)) {
    return 0;
  }
  do {
    if ((9 < uVar2 - 0x30) && (0x19 < (uVar2 & 0xffffffdf) - 0x41)) {
      bVar3 = 0x5e < uVar2;
      if (uVar2 != 0x5f) {
        bVar3 = uVar2 != 0x2d;
      }
      if (bVar3 && (uVar2 != 0x5f && uVar2 != 0x2e)) {
        return 0;
      }
    }
    param_1 = param_1 + 1;
    uVar2 = (uint)*param_1;
    if (uVar2 == 0) {
      return 1;
    }
  } while( true );
}


