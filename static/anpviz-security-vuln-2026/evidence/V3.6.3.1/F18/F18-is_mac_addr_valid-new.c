/* ===== is_mac_addr_valid @ 0006619c ===== */

undefined4 is_mac_addr_valid(char *param_1)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((((param_1 == (char *)0x0) || (sVar1 = strlen(param_1), sVar1 != 0x11)) ||
       (param_1[2] != ':')) ||
      (((param_1[5] != ':' || (param_1[8] != ':')) ||
       ((param_1[0xb] != ':' || (param_1[0xe] != ':')))))) ||
     ((((param_1[3] == '0' && (param_1[4] == '0')) &&
       ((param_1[6] == '0' &&
        ((((param_1[7] == '0' && (param_1[9] == '0')) && (param_1[10] == '0')) &&
         ((param_1[0xc] == '0' && (param_1[0xd] == '0')))))))) &&
      ((param_1[0xf] == '0' && (param_1[0x10] == '0')))))) {
    return 0;
  }
  iVar2 = strcasecmp(param_1,(char *)(DAT_00066270 + 0x661d8));
  uVar3 = 0;
  if ((((iVar2 != 0) &&
       (iVar2 = strcasecmp(param_1,(char *)(DAT_00066274 + 0x661e4)), uVar3 = 0, iVar2 != 0)) &&
      ((iVar2 = strcasecmp(param_1,(char *)(DAT_00066278 + 0x661f0)), uVar3 = 0, iVar2 != 0 &&
       (((iVar2 = strcasecmp(param_1,(char *)(DAT_0006627c + 0x661fc)), uVar3 = 0, iVar2 != 0 &&
         (iVar2 = strcasecmp(param_1,(char *)(DAT_00066280 + 0x66208)), uVar3 = 0, iVar2 != 0)) &&
        (iVar2 = strcasecmp(param_1,(char *)(DAT_00066284 + 0x66214)), uVar3 = 0, iVar2 != 0))))))
     && ((iVar2 = strcasecmp(param_1,(char *)(DAT_00066288 + 0x66220)), uVar3 = 0, iVar2 != 0 &&
         (iVar2 = strcasecmp(param_1,(char *)(DAT_0006628c + 0x6622c)), uVar3 = 0, iVar2 != 0)))) {
    uVar3 = 1;
  }
  return uVar3;
}


