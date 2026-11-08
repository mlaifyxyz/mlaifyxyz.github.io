/* ===== Digest_ParseAuthorization @ 0006d964 ===== */

undefined4 Digest_ParseAuthorization(char *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  char *apcStack_1c [2];
  
  if (param_2 == 0 || param_1 == (char *)0x0) {
    return 0;
  }
  iVar1 = strncasecmp(param_1,(char *)(DAT_0006da9c + 0x6d97c),7);
  if (iVar1 == 0) {
    param_1 = param_1 + 7;
    sVar2 = strlen(param_1);
    iVar1 = FUN_0006d0d4(param_1,sVar2,DAT_0006daa0 + 0x6d99a,param_2,0x40);
    if ((((iVar1 != 0) &&
         (iVar1 = FUN_0006d0d4(param_1,sVar2,DAT_0006daa4 + 0x6d9b4,param_2 + 0x260,0x80),
         iVar1 != 0)) &&
        (iVar1 = FUN_0006d0d4(param_1,sVar2,DAT_0006daa8 + 0x6d9cc,param_2 + 0x160,0x80), iVar1 != 0
        )) && ((iVar1 = FUN_0006d0d4(param_1,sVar2,DAT_0006daac + 0x6d9e8,param_2 + 0x40,0x100),
               iVar1 != 0 &&
               (iVar1 = FUN_0006d0d4(param_1,sVar2,DAT_0006dab0 + 0x6da00,param_2 + 0x30c,100),
               iVar1 != 0)))) {
      iVar1 = FUN_0006d0d4(param_1,sVar2,DAT_0006dab4 + 0x6da18,param_2 + 0x2e0,0x20);
      if (iVar1 == 0) {
        *(undefined1 *)(param_2 + 0x2e0) = 0;
      }
      iVar1 = FUN_0006d0d4(param_1,sVar2,DAT_0006dab8 + 0x6da32,param_2 + 0x140,0x20);
      if (iVar1 == 0) {
        *(undefined1 *)(param_2 + 0x140) = 0;
        *(undefined1 *)(param_2 + 0x1e0) = 0;
        *(undefined1 *)(param_2 + 0x300) = 0;
        *(undefined4 *)(param_2 + 0x370) = 0;
        return 1;
      }
      iVar1 = FUN_0006d0d4(param_1,sVar2,DAT_0006dabc + 0x6da62,param_2 + 0x1e0,0x80);
      if (iVar1 == 0) {
        *(undefined1 *)(param_2 + 0x1e0) = 0;
      }
      iVar1 = FUN_0006d0d4(param_1,sVar2,DAT_0006dac0 + 0x6da7e,(char *)(param_2 + 0x300),0xc);
      if (iVar1 == 0) {
        *(undefined1 *)(param_2 + 0x300) = 0;
      }
      lVar3 = strtol((char *)(param_2 + 0x300),apcStack_1c,0x10);
      *(long *)(param_2 + 0x370) = lVar3;
      return 1;
    }
  }
  return 0;
}


/* ===== Digest_AuthVerify @ 0006db20 ===== */

undefined4 Digest_AuthVerify(char *param_1,int param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_1c;
  
  local_1c = 0;
  if ((((((param_2 == 0 || param_1 == (char *)0x0) || (param_5 == 0 || param_3 == 0)) ||
        (*param_1 == '\0')) ||
       ((*(char *)(param_2 + 0x160) != '\0' &&
        (iVar1 = strcmp(param_1 + 0x160,(char *)(param_2 + 0x160)), iVar1 != 0)))) ||
      (((iVar1 = sscanf(param_1 + 0x160,(char *)(DAT_0006dbb8 + 0x6db68),&local_1c), iVar1 == 1 &&
        ((local_1c != 0 && (uVar3 = time((time_t *)0x0), local_1c <= uVar3)))) &&
       (300 < uVar3 - local_1c)))) ||
     (((param_4 != (char *)0x0 && (*param_4 != '\0')) &&
      (iVar1 = FUN_0006cf08(param_1 + 0x40,param_4), iVar1 == 0)))) {
    return 0;
  }
  uVar2 = FUN_0006d360(param_1,param_2,param_3,param_5);
  return uVar2;
}


