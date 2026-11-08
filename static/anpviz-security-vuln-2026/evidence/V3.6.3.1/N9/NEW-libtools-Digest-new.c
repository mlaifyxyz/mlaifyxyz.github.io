/* ===== Digest_AuthInit @ 0006d898 ===== */

void Digest_AuthInit(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  memset(param_1,0,0x374);
  strncpy((char *)((int)param_1 + 0x260),(char *)(DAT_0006d8cc + 0x6d8b4),0x7f);
  (*(code *)PTR_strncpy_000cc094)((int)param_1 + 0x140,DAT_0006d8d0 + 0x6d8c6,0x1f);
  return;
}


/* ===== Digest_PrepareChallenge @ 0006d8d4 ===== */

void Digest_PrepareChallenge(uint param_1)

{
  char cVar1;
  ulong param3;
  ulong param4;
  uint param5;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x160) == '\0') {
    param3 = time((time_t *)0x0);
    param4 = clock();
    param5 = getpid();
    uVar2 = rand();
    snprintf((char *)(param_1 + 0x160),0x80,(char *)(DAT_0006d958 + 0x6d914),param3,param4,param5,
             uVar2 ^ param_1);
    cVar1 = *(char *)(param_1 + 0x260);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x260);
  }
  if (cVar1 == '\0') {
    strncpy((char *)(param_1 + 0x260),(char *)(DAT_0006d95c + 0x6d936),0x7f);
    cVar1 = *(char *)(param_1 + 0x140);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x140);
  }
  if (cVar1 == '\0') {
    (*(code *)PTR_strncpy_000cc094)(param_1 + 0x140,DAT_0006d960 + 0x6d94c,0x1f);
    return;
  }
  return;
}


/* ===== Digest_FormatChallenge @ 0006dac4 ===== */

void Digest_FormatChallenge(int param_1,char *param_2,char *param_3,size_t param_4)

{
  if (param_1 == 0 || (param_3 == (char *)0x0 || (int)param_4 < 1)) {
    return;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    snprintf(param_3,param_4,(char *)(DAT_0006db18 + 0x6dafe),(char *)(param_1 + 0x260),
             (char *)(param_1 + 0x160));
    return;
  }
  snprintf(param_3,param_4,(char *)(DAT_0006db1c + 0x6db12),(char *)(param_1 + 0x260),
           (char *)(param_1 + 0x160),param_2);
  return;
}


