/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 000a4178 */
/* function FUN_000a4178 @ 000a4178 */

int FUN_000a4178(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                undefined4 param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char acStack_58 [64];
  
  iVar4 = FUN_0009e288(param_3,param_4,param_1);
  if (iVar4 == 200) {
    iVar5 = FUN_000a06bc(param_3,param_4,param_1,param_5);
    if (iVar5 == 0) {
      return 400;
    }
    iVar5 = FUN_0009d0d0(param_3,DAT_000a4238 + 0xa41b6,acStack_58,0x40);
    if (iVar5 == 0) {
      iVar4 = 400;
      sprintf(param_4,(char *)(DAT_000a4250 + 0xa4232),param_1,(char *)(DAT_000a424c + 0xa422c));
    }
    else {
      puVar11 = (undefined4 *)(DAT_000a423c + 0xa41e2);
      puVar3 = (undefined4 *)(DAT_000a423c + 0xa41c2);
      do {
        puVar10 = puVar3;
        pcVar9 = param_4;
        uVar6 = puVar10[1];
        uVar7 = puVar10[2];
        uVar8 = puVar10[3];
        *(undefined4 *)pcVar9 = *puVar10;
        *(undefined4 *)(pcVar9 + 4) = uVar6;
        *(undefined4 *)(pcVar9 + 8) = uVar7;
        *(undefined4 *)(pcVar9 + 0xc) = uVar8;
        param_4 = pcVar9 + 0x10;
        puVar3 = puVar10 + 4;
      } while (puVar10 + 4 != puVar11);
      uVar6 = puVar10[5];
      uVar7 = puVar10[6];
      uVar2 = *(undefined2 *)(puVar10 + 7);
      cVar1 = *(char *)((int)puVar10 + 0x1e);
      *(undefined4 *)(pcVar9 + 0x10) = puVar10[4];
      *(undefined4 *)(pcVar9 + 0x14) = uVar6;
      *(undefined4 *)(pcVar9 + 0x18) = uVar7;
      *(undefined2 *)(pcVar9 + 0x1c) = uVar2;
      pcVar9[0x1e] = cVar1;
      iVar5 = atoi(acStack_58);
      if (iVar5 == 0) {
        mysystem(DAT_000a4244 + 0xa4214);
        killprocess(DAT_000a4248 + 0xa421c);
      }
      else {
        mysystem(DAT_000a4240 + 0xa41fe);
      }
    }
  }
  return iVar4;
}


