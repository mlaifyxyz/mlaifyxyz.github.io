/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0001dc14 */
/* function FUN_0001dc14 @ 0001dc14 */

int FUN_0001dc14(byte *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar7;
  byte *pbVar6;
  int iVar8;
  uint uVar9;
  
  iVar3 = DAT_0001dca0;
  if ((((param_1 == (byte *)0x0) || (param_3 == 0)) || (param_2 < 1)) || (param_4 < 1)) {
    return 0;
  }
  pbVar7 = param_1;
  iVar8 = 0;
  do {
    pbVar6 = pbVar7 + 1;
    bVar2 = *pbVar7;
    uVar9 = (uint)bVar2;
    if ((((uVar9 & 0xffffffdf) - 0x41 < 0x1a) || (uVar9 == 0x5f)) ||
       ((uVar4 = uVar9 - 0x2a & 0xff, uVar4 < 0x10 && ((int)((0xffd9U >> uVar4) << 0x1f) < 0)))) {
      iVar5 = iVar8 + 1;
      *(byte *)(param_3 + iVar8) = bVar2;
      if ((param_1 + param_2 == pbVar6) || (param_4 <= iVar5)) goto LAB_0001dc6a;
    }
    else {
      iVar5 = iVar8 + 3;
      if (param_4 <= iVar5) {
        return 0;
      }
      *(undefined1 *)(param_3 + iVar8) = 0x25;
      uVar1 = *(undefined1 *)(iVar3 + (uVar9 & 0xf));
      *(undefined1 *)(iVar8 + param_3 + 1) = *(undefined1 *)(iVar3 + (uint)(bVar2 >> 4));
      *(undefined1 *)(iVar8 + param_3 + 2) = uVar1;
      if (param_1 + param_2 == pbVar6) {
LAB_0001dc6a:
        *(undefined1 *)(param_3 + iVar5) = 0;
        return iVar5;
      }
    }
    pbVar7 = pbVar6;
    iVar8 = iVar5;
  } while( true );
}


