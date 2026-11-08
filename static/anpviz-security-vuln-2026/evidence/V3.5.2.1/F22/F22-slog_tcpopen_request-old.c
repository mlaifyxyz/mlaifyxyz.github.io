/* libcgibin.so (bf05b4a5d143a0e4d8d048b045f84603d8e8f793e6306f3cb6412695e19b8cf6), Ghidra 12.2 headless; requested 00052f5c */
/* function slog_tcpopen_request @ 00052f5c */

/* slog_tcpopen_request(char const*, char (*) [200], char*) */

undefined4 slog_tcpopen_request(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  
  iVar2 = strcmp(param_1,(char *)(DAT_00052fa8 + 0x52f6a));
  if (iVar2 == 0) {
    iVar2 = check_userpassword(param_1,param_2,param_3);
    uVar4 = 0;
    if (iVar2 == 0) {
      sVar3 = strlen(param_3);
      iVar2 = DAT_00052fb0;
      cVar1 = *(char *)(DAT_00052fac + 0x52f8e);
      *(undefined2 *)(param_3 + sVar3) = *(undefined2 *)(DAT_00052fac + 0x52f8c);
      param_3[sVar3 + 2] = cVar1;
      system((char *)(iVar2 + 0x52f9a));
      return 0;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


