/* libcgibin.so (bf05b4a5d143a0e4d8d048b045f84603d8e8f793e6306f3cb6412695e19b8cf6), Ghidra 12.2 headless; requested 0005ae64 */
/* function cgi_open_slogtcp @ 0005ae64 */

/* cgi_open_slogtcp(char const*, char const*, char const*, char*) */

int cgi_open_slogtcp(char *param_1,char *param_2,char *param_3,char *param_4)

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
  
  iVar4 = cgi_compare_url(param_3,param_4,param_1);
  if (iVar4 == 200) {
    iVar5 = cgi_is_valid_uid_or_username(param_3,param_4,param_1);
    if (iVar5 == 0) {
      return 400;
    }
    iVar5 = cgi_get_value(param_3,DAT_0005af20 + 0x5aea0,acStack_58,0x40);
    if (iVar5 == 0) {
      iVar4 = 400;
      sprintf(param_4,(char *)(DAT_0005af38 + 0x5af1c),param_1,(char *)(DAT_0005af34 + 0x5af16));
    }
    else {
      puVar11 = (undefined4 *)(DAT_0005af24 + 0x5aecc);
      puVar3 = (undefined4 *)(DAT_0005af24 + 0x5aeac);
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
        mysystem(DAT_0005af2c + 0x5aefe);
        killprocess(DAT_0005af30 + 0x5af06);
      }
      else {
        mysystem(DAT_0005af28 + 0x5aee8);
      }
    }
  }
  return iVar4;
}


