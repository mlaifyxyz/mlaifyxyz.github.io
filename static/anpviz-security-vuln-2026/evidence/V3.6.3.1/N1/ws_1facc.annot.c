/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0001facc */
/* function FUN_0001facc @ 0001facc */

undefined4 FUN_0001facc(int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  char *__haystack;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    DebugPrint(8,7,DAT_0001fbe0,DAT_0001fbe4,0x219,param_2,param_3);
    return 0xffffffff;
  }
  __haystack = *(char **)(param_2 + 0x28);
  pcVar1 = strstr(__haystack,DAT_0001fbe8);
  if (pcVar1 != (char *)0x0) {
    FUN_0001f5c0(param_1);
    goto LAB_0001fb02;
  }
  pcVar1 = strstr(__haystack,DAT_0001fbec);
  if (pcVar1 != (char *)0x0) {
    FUN_0001f5f4(param_1);
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x84);
  if (iVar2 != 5) {
    if (iVar2 != 0xb) {
      if ((iVar2 == 10) &&
         ((((((pcVar1 = strstr(__haystack,DAT_0001fbfc), pcVar1 != (char *)0x0 ||
              (pcVar1 = strstr(__haystack,DAT_0001fc00), pcVar1 != (char *)0x0)) ||
             (pcVar1 = strstr(__haystack,DAT_0001fc04), pcVar1 != (char *)0x0)) ||
            (((pcVar1 = strstr(__haystack,DAT_0001fc08), pcVar1 != (char *)0x0 ||
              (pcVar1 = strstr(__haystack,DAT_0001fc0c), pcVar1 != (char *)0x0)) ||
             ((pcVar1 = strstr(__haystack,DAT_0001fc10), pcVar1 != (char *)0x0 ||
              ((pcVar1 = strstr(__haystack,DAT_0001fc14), pcVar1 != (char *)0x0 ||
               (pcVar1 = strstr(__haystack,DAT_0001fc18), pcVar1 != (char *)0x0)))))))) ||
           (pcVar1 = strstr(__haystack,DAT_0001fc1c), pcVar1 != (char *)0x0)) ||
          (((pcVar1 = strstr(__haystack,DAT_0001fc20), pcVar1 != (char *)0x0 ||
            (pcVar1 = strstr(__haystack,DAT_0001fc24), pcVar1 != (char *)0x0)) ||
           (pcVar1 = strstr(__haystack,DAT_0001fc28), pcVar1 != (char *)0x0)))))) {
        FUN_0001f788(param_1,param_2);
        return 0;
      }
      goto LAB_0001fb02;
    }
    if (*DAT_0001fbf8 != 1) goto LAB_0001fb02;
  }
  pcVar1 = strstr(__haystack,DAT_0001fbf0);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = strstr(__haystack,DAT_0001fbf4), pcVar1 != (char *)0x0))
  {
    FUN_0001fac0(param_1,param_2);
    return 0;
  }
LAB_0001fb02:
  FUN_0001f2b4(param_1,param_2);
  return 0;
}


