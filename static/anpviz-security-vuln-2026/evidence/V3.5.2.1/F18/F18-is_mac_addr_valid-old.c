/* ===== is_mac_addr_valid @ 0006304c ===== */

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
  iVar2 = strcasecmp(param_1,(char *)(DAT_00063120 + 0x63088));
  uVar3 = 0;
  if ((((iVar2 != 0) &&
       (iVar2 = strcasecmp(param_1,(char *)(DAT_00063124 + 0x63094)), uVar3 = 0, iVar2 != 0)) &&
      ((iVar2 = strcasecmp(param_1,(char *)(DAT_00063128 + 0x630a0)), uVar3 = 0, iVar2 != 0 &&
       (((iVar2 = strcasecmp(param_1,(char *)(DAT_0006312c + 0x630ac)), uVar3 = 0, iVar2 != 0 &&
         (iVar2 = strcasecmp(param_1,(char *)(DAT_00063130 + 0x630b8)), uVar3 = 0, iVar2 != 0)) &&
        (iVar2 = strcasecmp(param_1,(char *)(DAT_00063134 + 0x630c4)), uVar3 = 0, iVar2 != 0))))))
     && ((iVar2 = strcasecmp(param_1,(char *)(DAT_00063138 + 0x630d0)), uVar3 = 0, iVar2 != 0 &&
         (iVar2 = strcasecmp(param_1,(char *)(DAT_0006313c + 0x630dc)), uVar3 = 0, iVar2 != 0)))) {
    uVar3 = 1;
  }
  return uVar3;
}


