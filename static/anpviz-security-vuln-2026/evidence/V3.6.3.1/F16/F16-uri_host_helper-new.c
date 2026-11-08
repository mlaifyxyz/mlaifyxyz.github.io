/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 000206d8 */
/* function FUN_000206d8 @ 000206d8 */

int FUN_000206d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  FILE *__stream;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(DAT_0002075c + 0x24cc);
  if (0xfffd < iVar1 - 1U) {
    uStack_c = param_4;
    DebugPrint(8,7,DAT_00020760,DAT_00020764,0x99,iVar1,param_3);
    uStack_c = uStack_c & 0xffff;
    __stream = fopen64(DAT_0002076c,DAT_00020768);
    if (__stream == (FILE *)0x0) {
      DebugPrint(8,7,DAT_00020774,DAT_00020764,0xa7,0x22a,param_3);
      iVar1 = 0x22a;
    }
    else {
      fread((void *)((int)&uStack_c + 2),1,2,__stream);
      fclose(__stream);
      DebugPrint(8,7,DAT_00020770,DAT_00020764,0xa2,(int)uStack_c._2_2_,param_3);
      iVar1 = (int)uStack_c._2_2_;
    }
  }
  return iVar1;
}


