/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0006ce9c */
/* function FUN_0006ce9c @ 0006ce9c */

undefined4 FUN_0006ce9c(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  char *local_598;
  char local_57c [32];
  undefined1 auStack_55c [16];
  uint local_54c [8];
  char local_52c [68];
  undefined4 local_4e8;
  undefined1 auStack_4e4 [32];
  char acStack_4c4 [36];
  undefined1 auStack_4a0 [36];
  char local_47c [52];
  char local_448 [64];
  undefined1 auStack_408 [88];
  char local_3b0 [128];
  char local_330 [128];
  char local_2b0 [128];
  char local_230 [256];
  char local_130 [260];
  
  if (param_1 != (char *)0x0) {
    iVar1 = strncasecmp(param_1,(char *)(DAT_0006d29c + 0x6cebc /*"Digest "*/),7);
    if (iVar1 == 0) {
      param_1 = param_1 + 7;
    }
    else {
      iVar1 = strncasecmp(param_1,(char *)(DAT_0006d2c4 + 0x6d030 /*"Digest"*/),6);
      if (iVar1 == 0) {
        param_1 = param_1 + 6;
      }
    }
    local_3b0[0] = '\0';
    local_3b0[1] = '\0';
    local_3b0[2] = '\0';
    local_3b0[3] = '\0';
    memset(local_3b0 + 4,0,0x7c);
    local_330[0] = '\0';
    local_330[1] = '\0';
    local_330[2] = '\0';
    local_330[3] = '\0';
    memset(local_330 + 4,0,0x7c);
    local_598 = local_130;
    local_230[0] = '\0';
    local_230[1] = '\0';
    local_230[2] = '\0';
    local_230[3] = '\0';
    memset(local_230 + 4,0,0xfc);
    local_2b0[0] = '\0';
    local_2b0[1] = '\0';
    local_2b0[2] = '\0';
    local_2b0[3] = '\0';
    memset(local_2b0 + 4,0,0x7c);
    local_130[0] = '\0';
    local_130[1] = '\0';
    local_130[2] = '\0';
    local_130[3] = '\0';
    memset(local_130 + 4,0,0xfc);
    builtin_strncpy(local_52c,"MD5",4);
    local_57c[0] = '\0';
    local_57c[1] = '\0';
    local_57c[2] = '\0';
    local_57c[3] = '\0';
    local_54c[0] = 0;
    local_54c[1] = 0;
    local_54c[2] = 0;
    local_54c[3] = 0;
    local_54c[4] = 0;
    local_54c[5] = 0;
    local_54c[6] = 0;
    local_54c[7] = 0;
    local_57c[4] = '\0';
    local_57c[5] = '\0';
    local_57c[6] = '\0';
    local_57c[7] = '\0';
    local_57c[8] = '\0';
    local_57c[9] = '\0';
    local_57c[10] = '\0';
    local_57c[0xb] = '\0';
    local_57c[0xc] = '\0';
    local_57c[0xd] = '\0';
    local_57c[0xe] = '\0';
    local_57c[0xf] = '\0';
    local_52c[4] = '\0';
    local_52c[5] = '\0';
    local_52c[6] = '\0';
    local_52c[7] = '\0';
    local_52c[8] = '\0';
    local_52c[9] = '\0';
    local_52c[10] = '\0';
    local_52c[0xb] = '\0';
    local_52c[0xc] = '\0';
    local_52c[0xd] = '\0';
    local_52c[0xe] = '\0';
    local_52c[0xf] = '\0';
    local_52c[0x10] = '\0';
    local_52c[0x11] = '\0';
    local_52c[0x12] = '\0';
    local_52c[0x13] = '\0';
    local_52c[0x14] = '\0';
    local_52c[0x15] = '\0';
    local_52c[0x16] = '\0';
    local_52c[0x17] = '\0';
    local_52c[0x18] = '\0';
    local_52c[0x19] = '\0';
    local_52c[0x1a] = '\0';
    local_52c[0x1b] = '\0';
    local_52c[0x1c] = '\0';
    local_52c[0x1d] = '\0';
    local_52c[0x1e] = '\0';
    local_52c[0x1f] = '\0';
    local_448[0] = '\0';
    local_448[1] = '\0';
    local_448[2] = '\0';
    local_448[3] = '\0';
    memset(local_448 + 4,0,0x3c);
    iVar1 = FUN_0006cda4(param_1,DAT_0006d2a0 + 0x6cf7c /*"username"*/,local_3b0,0x80);
    if (iVar1 != 0) {
      FUN_0006cda4(param_1,DAT_0006d2a4 + 0x6cf8e /*"realm"*/,local_330,0x80);
      FUN_0006cda4(param_1,DAT_0006d2a8 + 0x6cf9c /*"nonce"*/,local_230,0x100);
      FUN_0006cda4(param_1,DAT_0006d2ac + 0x6cfaa /*"cnonce"*/,local_2b0,0x80);
      FUN_0006cda4(param_1,DAT_0006d2b0 + 0x6cfba /*"uri"*/,local_598,0x100);
      FUN_0006cda4(param_1,DAT_0006d2b4 + 0x6cfc8 /*"qop"*/,local_54c,0x20);
      FUN_0006cda4(param_1,DAT_0006d2b8 + 0x6cfd6 /*"nc"*/,local_57c,0x10);
      FUN_0006cda4(param_1,DAT_0006d2bc + 0x6cfe4 /*"algorithm"*/,local_52c,0x20);
      FUN_0006cda4(param_1,DAT_0006d2c0 + 0x6cff2 /*"response"*/,local_448,0x40);
      if (local_448[0] != '\0') {
        local_47c[0] = '\0';
        local_47c[1] = '\0';
        local_47c[2] = '\0';
        local_47c[3] = '\0';
        memset(local_47c + 4,0,0x2e);
        iVar1 = MsgUserGetPassword(local_3b0,local_47c);
        if (iVar1 == 0) {
          iVar3 = DAT_0006d2c8 + 0x6d046 /*":"*/;
          Crypt_MD5Init(auStack_408);
          sVar2 = strlen(local_3b0);
          Crypt_MD5Update(auStack_408,local_3b0,sVar2);
          Crypt_MD5Update(auStack_408,iVar3,1);
          sVar2 = strlen(local_330);
          Crypt_MD5Update(auStack_408,local_330,sVar2);
          Crypt_MD5Update(auStack_408,iVar3,1);
          sVar2 = strlen(local_47c);
          Crypt_MD5Update(auStack_408,local_47c,sVar2);
          Crypt_MD5Final(auStack_4a0,auStack_408);
          iVar1 = strcasecmp(local_52c,(char *)(DAT_0006d2cc + 0x6d0b2 /*"md5-sess"*/));
          if (iVar1 == 0) {
            Crypt_MD5Init(auStack_408);
            Crypt_MD5Update(auStack_408,auStack_4a0,0x10);
            Crypt_MD5Update(auStack_408,iVar3,1);
            sVar2 = strlen(local_230);
            Crypt_MD5Update(auStack_408,local_230,sVar2);
            Crypt_MD5Update(auStack_408,iVar3,1);
            sVar2 = strlen(local_2b0);
            Crypt_MD5Update(auStack_408,local_2b0,sVar2);
            Crypt_MD5Final(auStack_4a0,auStack_408);
          }
          FUN_0006ce68(auStack_4a0,local_52c + 0x20);
          local_4e8 = 0;
          memset(auStack_4e4,0,0x1d);
          iVar1 = DAT_0006d2d0;
          if ((local_130[0] == '\0') && (local_598 = param_3, param_3 == (char *)0x0)) {
            local_598 = (char *)(DAT_0006d2e4 + 0x6d284);
          }
          Crypt_MD5Init(auStack_408);
          sVar2 = strlen(param_2);
          Crypt_MD5Update(auStack_408,param_2,sVar2);
          Crypt_MD5Update(auStack_408,iVar1 + 0x6d150,1);
          sVar2 = strlen(local_598);
          Crypt_MD5Update(auStack_408,local_598,sVar2);
          iVar3 = strcasecmp((char *)local_54c,(char *)(DAT_0006d2d4 + 0x6d17a /*"auth-int"*/));
          if (iVar3 == 0) {
            Crypt_MD5Update(auStack_408,iVar1 + 0x6d150,1);
            Crypt_MD5Update(auStack_408,&local_4e8,0x20);
          }
          iVar1 = DAT_0006d2d8;
          Crypt_MD5Final(local_57c + 0x10,auStack_408);
          iVar1 = iVar1 + 0x6d196;
          FUN_0006ce68(local_57c + 0x10,auStack_4a0);
          Crypt_MD5Init(auStack_408);
          Crypt_MD5Update(auStack_408,local_52c + 0x20,0x20);
          Crypt_MD5Update(auStack_408,iVar1,1);
          sVar2 = strlen(local_230);
          Crypt_MD5Update(auStack_408,local_230,sVar2);
          Crypt_MD5Update(auStack_408,iVar1,1);
          if ((local_54c[0] & 0xff) != 0) {
            sVar2 = strlen(local_57c);
            Crypt_MD5Update(auStack_408,local_57c,sVar2);
            Crypt_MD5Update(auStack_408,iVar1,1);
            sVar2 = strlen(local_2b0);
            Crypt_MD5Update(auStack_408,local_2b0,sVar2);
            Crypt_MD5Update(auStack_408,iVar1,1);
            sVar2 = strlen((char *)local_54c);
            Crypt_MD5Update(auStack_408,local_54c,sVar2);
            Crypt_MD5Update(auStack_408,iVar1,1);
          }
          Crypt_MD5Update(auStack_408,auStack_4a0,0x20);
          Crypt_MD5Final(auStack_55c,auStack_408);
          FUN_0006ce68(auStack_55c,acStack_4c4);
          iVar1 = strcasecmp(acStack_4c4,local_448);
          if (iVar1 == 0) {
            return 1;
          }
          DebugPrint(1,7,DAT_0006d2dc + 0x6d264 /*"[%s:%u]web_auth: Digest mismatch user=%s expected=%s got=%s
"*/,DAT_0006d2e0 + 0x6d26a /*"web_auth_verify_digest"*/,0x14d,local_3b0,acStack_4c4,
                     local_448);
          return 0;
        }
      }
    }
  }
  return 0;
}


