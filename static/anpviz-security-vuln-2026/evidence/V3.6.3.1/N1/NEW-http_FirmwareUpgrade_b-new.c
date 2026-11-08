/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0007eaa8 */
/* function FUN_0007eaa8 @ 0007eaa8 */

void FUN_0007eaa8(void)

{
  pthread_t __th;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  __th = pthread_self();
  iVar1 = DAT_0007eb3c;
  pthread_detach(__th);
  iVar1 = iVar1 + 0x7eac4;
  usleep(100000);
  if (**(int **)(iVar1 + DAT_0007eb40) - 0x405U < 2) {
    puVar2 = *(undefined4 **)(iVar1 + DAT_0007eb50);
    puVar3 = *(undefined4 **)(iVar1 + DAT_0007eb54);
    DebugPrint(8,7,DAT_0007eb60 + 0x7eb2a,DAT_0007eb5c + 0x7eb28,0x5e1,
               **(undefined4 **)(iVar1 + DAT_0007eb58),*puVar3,puVar3[1],*puVar2);
    MsgAppBinLocalUpdate(DAT_0007eb64 + 0x7eb38,*puVar3,*puVar2);
  }
  else {
    DebugPrint(8,7,DAT_0007eb48 + 0x7eae8,DAT_0007eb44 + 0x7eae4,0x5e6);
    MsgAppBinLocalUpdate(DAT_0007eb4c + 0x7eaf2,0);
  }
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}


