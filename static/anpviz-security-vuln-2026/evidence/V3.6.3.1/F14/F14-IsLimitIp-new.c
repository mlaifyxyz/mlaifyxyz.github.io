/* ===== IsLimitIp @ 00046790 ===== */

undefined4 IsLimitIp(int param_1)

{
  int __fd;
  ssize_t sVar1;
  int *piVar3;
  int *piVar2;
  int local_28;
  int aiStack_24 [5];
  int iStack_10;
  
  __fd = open64((char *)(DAT_000467f0 + 0x4679e),0);
  if (((__fd < 0) || (sVar1 = read(__fd,&local_28,0x18), sVar1 != 0x18)) ||
     (close(__fd), local_28 == 0)) {
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 == -0x43434344) {
      return 0;
    }
    piVar2 = aiStack_24;
    do {
      piVar3 = piVar2 + 1;
      if (*piVar2 != 0 && *piVar2 == param_1) {
        return 0;
      }
      piVar2 = piVar3;
    } while (piVar3 != &iStack_10);
  }
  return 1;
}


