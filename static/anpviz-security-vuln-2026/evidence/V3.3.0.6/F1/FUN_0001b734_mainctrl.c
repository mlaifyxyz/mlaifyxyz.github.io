uint FUN_0001b734(undefined4 param_1,char *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  FILE *__stream;
  size_t sVar4;
  undefined4 **__dest;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  char *__s;
  undefined4 uVar10;
  undefined4 *local_368;
  undefined1 auStack_364 [28];
  undefined1 local_348;
  undefined4 *local_328;
  undefined1 auStack_324 [252];
  undefined4 *local_228;
  undefined1 auStack_224 [252];
  uint local_128;
  undefined1 auStack_124 [256];
  
  *param_3 = 0;
  iVar1 = ixmlParseBuffer();
  if (iVar1 == 0) {
    DebugPrint(8,7,"[%s:%u]xml error\r\n\n",DAT_0001bb40,0xbe);
    return 0xffffffff;
  }
  piVar2 = (int *)ixmlDocument_getElementsByTagName(iVar1,"MESSAGE_HEADER");
  if (piVar2 == (int *)0x0) {
    ixmlDocument_free(iVar1);
    return 0xffffffff;
  }
  puVar7 = *(undefined4 **)(*piVar2 + 0x2c);
  if (puVar7 == (undefined4 *)0x0) {
    ixmlNodeList_free();
    local_328 = puVar7;
    memset(auStack_324,0,0xfc);
    local_228 = puVar7;
    memset(auStack_224,0,0xfc);
    uVar6 = 0xffffffff;
    local_368 = puVar7;
    memset(auStack_364,0,0x3c);
  }
  else {
    uVar6 = 0xffffffff;
    do {
      while( true ) {
        pcVar8 = (char *)*puVar7;
        iVar3 = strcmp(pcVar8,"Msg_type");
        if (iVar3 != 0) break;
LAB_0001b780:
        puVar7 = (undefined4 *)puVar7[10];
        if (puVar7 == (undefined4 *)0x0) goto LAB_0001b7d0;
      }
      iVar3 = strcmp(pcVar8,"Msg_code");
      if (iVar3 == 0) {
        if ((char *)puVar7[1] != (char *)0x0) {
          uVar6 = atoi((char *)puVar7[1]);
        }
        goto LAB_0001b780;
      }
      iVar3 = strcmp(pcVar8,"Msg_flag");
      if ((iVar3 != 0) || ((char *)puVar7[1] == (char *)0x0)) goto LAB_0001b780;
      iVar3 = atoi((char *)puVar7[1]);
      *param_3 = iVar3;
      puVar7 = (undefined4 *)puVar7[10];
    } while (puVar7 != (undefined4 *)0x0);
LAB_0001b7d0:
    puVar7 = (undefined4 *)0x0;
    ixmlNodeList_free(piVar2);
    local_328 = puVar7;
    memset(auStack_324,0,0xfc);
    local_228 = puVar7;
    memset(auStack_224,0,0xfc);
    local_368 = puVar7;
    memset(auStack_364,0,0x3c);
    if ((uVar6 & 0xfffffffd) == 1) goto LAB_0001b818;
  }
  if (0 < DAT_0008997c) {
    piVar2 = (int *)ixmlDocument_getElementsByTagName(iVar1,"OPERATOR_AUTH");
    if (piVar2 == (int *)0x0) {
      uVar10 = 0xf4;
      pcVar8 = "[%s:%u]Not found auth node\n";
LAB_0001ba92:
      DebugPrint(8,7,pcVar8,DAT_0001bb40,uVar10);
      ixmlDocument_free(iVar1);
      return 0xffffff9c;
    }
    puVar7 = *(undefined4 **)(*piVar2 + 0x2c);
joined_r0x0001b96a:
    if (puVar7 != (undefined4 *)0x0) {
      do {
        pcVar8 = (char *)*puVar7;
        iVar3 = strcmp(pcVar8,"Username");
        if (iVar3 == 0) {
          pcVar8 = (char *)puVar7[1];
          __dest = &local_328;
          if (pcVar8 != (char *)0x0) goto LAB_0001b982;
        }
        else {
          iVar3 = strcmp(pcVar8,"Password");
          if (iVar3 == 0) {
            pcVar8 = (char *)puVar7[1];
            __dest = &local_228;
            if (pcVar8 == (char *)0x0) goto code_r0x0001b9be;
LAB_0001b982:
            strncpy((char *)__dest,pcVar8,0x100);
          }
        }
        puVar7 = (undefined4 *)puVar7[10];
        if (puVar7 == (undefined4 *)0x0) break;
      } while( true );
    }
    ixmlNodeList_free(piVar2);
    if (((char)local_328 == '\0') || ((char)local_228 == '\0')) {
      uVar10 = 0x112;
      pcVar8 = "[%s:%u]Not found auth info\n";
      goto LAB_0001ba92;
    }
    iVar5 = strcasecmp((char *)&local_228,DAT_0001bb3c);
    iVar3 = DAT_000907b8;
    if (iVar5 != 0) {
      iVar5 = *(int *)(DAT_000907b8 + 0x1b04);
      if (iVar5 < 1) {
        iVar9 = 0;
      }
      else {
        piVar2 = (int *)(DAT_000907b8 + 0x1b04);
        iVar9 = 0;
        pcVar8 = (char *)(DAT_000907b8 + 0x1b08);
        do {
          __s = pcVar8 + 0x28;
          sVar4 = strlen(__s);
          our_md5_encode(&local_368,__s,sVar4);
          local_348 = 0;
          iVar5 = strcmp(pcVar8,(char *)&local_328);
          pcVar8 = pcVar8 + 0x78;
          if ((iVar5 == 0) &&
             ((iVar5 = strcmp((char *)&local_368,(char *)&local_228), iVar5 == 0 ||
              (iVar5 = strcmp(__s,(char *)&local_228), iVar5 == 0)))) {
            iVar5 = *(int *)(iVar3 + 0x1b04);
            break;
          }
          iVar5 = *piVar2;
          iVar9 = iVar9 + 1;
        } while (iVar9 < 10 && iVar9 < iVar5);
      }
      if (iVar9 == iVar5) {
        uVar10 = 0x129;
        pcVar8 = "[%s:%u]verify user password failed!!!\n\n";
        goto LAB_0001ba92;
      }
      goto LAB_0001b818;
    }
    DebugPrint(8,7,"[%s:%u]Super password %s checked ok.\n",DAT_0001bb40,0x133,&local_228);
  }
LAB_0001b818:
  local_128 = 0;
  memset(auStack_124,0,0xfc);
  if (DAT_000899a0 == '\0') {
    __stream = fopen64("/tmp/vendor_id_md5.dat","rb");
    if (__stream != (FILE *)0x0) {
      sVar4 = fread(&local_128,1,0x100,__stream);
      fclose(__stream);
      if (0 < (int)sVar4) {
        *(char *)((int)&local_128 + sVar4) = '\0';
        strcpy(param_2,(char *)&local_128);
        strcpy(DAT_0001bb38,(char *)&local_128);
      }
    }
  }
  else {
    pcVar8 = stpcpy((char *)&local_128,DAT_0001bb38);
    memcpy(param_2,&local_128,(size_t)(pcVar8 + (1 - (int)&local_128)));
  }
  piVar2 = (int *)ixmlDocument_getElementsByTagName(iVar1,"VENDOR_PARAM");
  if (piVar2 == (int *)0x0) {
    if ((local_128 & 0xff) != 0) {
      uVar6 = 0xffffffff;
    }
  }
  else {
    for (puVar7 = *(undefined4 **)(*piVar2 + 0x2c); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[10]) {
      pcVar8 = (char *)*puVar7;
      iVar3 = strcmp(pcVar8,"VendorId");
      if ((iVar3 == 0) || (iVar3 = strcmp(pcVar8,"VendorID"), iVar3 == 0)) {
        if ((char *)puVar7[1] == (char *)0x0) {
          uVar6 = 0xffffffff;
        }
        else {
          iVar3 = strcmp((char *)puVar7[1],(char *)&local_128);
          if (iVar3 != 0) {
            uVar6 = 0xffffffff;
          }
        }
        break;
      }
    }
    ixmlNodeList_free(piVar2);
  }
  ixmlDocument_free(iVar1);
  return uVar6;
code_r0x0001b9be:
  puVar7 = (undefined4 *)puVar7[10];
  goto joined_r0x0001b96a;
}
