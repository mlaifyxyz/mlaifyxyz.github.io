/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 0001f1bc */
/* function FUN_0001f1bc @ 0001f1bc */

uint FUN_0001f1bc(undefined4 param_1,char *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  FILE *__stream;
  size_t sVar4;
  undefined4 **__dest;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *local_370;
  undefined1 auStack_36c [28];
  undefined1 local_350;
  undefined4 *local_330;
  undefined1 auStack_32c [252];
  undefined4 *local_230;
  undefined1 auStack_22c [252];
  undefined4 local_130;
  char acStack_12c [256];
  
  *param_3 = 0;
  iVar1 = ixmlParseBuffer();
  if (iVar1 == 0) {
    DebugPrint(8,7,"[%s:%u]xml error\r\n\n",DAT_0001f5bc,0xc2);
    return 0xffffffff;
  }
  piVar2 = (int *)ixmlDocument_getElementsByTagName(iVar1,"MESSAGE_HEADER");
  if (piVar2 == (int *)0x0) {
    ixmlDocument_free(iVar1);
    return 0xffffffff;
  }
  puVar6 = *(undefined4 **)(*piVar2 + 0x2c);
  if (puVar6 == (undefined4 *)0x0) {
    ixmlNodeList_free();
    local_330 = puVar6;
    memset(auStack_32c,0,0xfc);
    local_230 = puVar6;
    memset(auStack_22c,0,0xfc);
    local_370 = puVar6;
    memset(auStack_36c,0,0x3c);
    uVar7 = 0xffffffff;
LAB_0001f3f4:
    if (0 < DAT_000a9e60) {
      piVar2 = (int *)ixmlDocument_getElementsByTagName(iVar1,"OPERATOR_AUTH");
      if (piVar2 == (int *)0x0) {
        uVar9 = 0xf8;
        pcVar5 = "[%s:%u]Not found auth node\n";
LAB_0001f586:
        uVar7 = 0xffffff9c;
        DebugPrint(8,7,pcVar5,DAT_0001f5bc,uVar9);
        goto LAB_0001f356;
      }
      puVar6 = *(undefined4 **)(*piVar2 + 0x2c);
joined_r0x0001f424:
      if (puVar6 != (undefined4 *)0x0) {
        do {
          pcVar5 = (char *)*puVar6;
          iVar3 = strcmp(pcVar5,"Username");
          if (iVar3 == 0) {
            pcVar5 = (char *)puVar6[1];
            __dest = &local_330;
            if (pcVar5 != (char *)0x0) goto LAB_0001f444;
          }
          else {
            iVar3 = strcmp(pcVar5,"Password");
            if (iVar3 == 0) {
              pcVar5 = (char *)puVar6[1];
              __dest = &local_230;
              if (pcVar5 == (char *)0x0) goto code_r0x0001f474;
LAB_0001f444:
              strncpy((char *)__dest,pcVar5,0x100);
            }
          }
          puVar6 = (undefined4 *)puVar6[10];
          if (puVar6 == (undefined4 *)0x0) break;
        } while( true );
      }
      ixmlNodeList_free(piVar2);
      if (((char)local_330 == '\0') || ((char)local_230 == '\0')) {
        pcVar5 = "[%s:%u]Not found auth info\n";
        uVar9 = 0x116;
        goto LAB_0001f586;
      }
      iVar3 = strcasecmp((char *)&local_230,DAT_0001f5b8);
      if (iVar3 != 0) {
        piVar2 = (int *)(DAT_000b3620 + 0x1b20);
        iVar3 = *piVar2;
        if (iVar3 < 1) {
          iVar8 = 0;
        }
        else {
          iVar8 = 0;
          pcVar5 = (char *)(DAT_000b3620 + 0x1b4c);
          while( true ) {
            sVar4 = strlen(pcVar5);
            our_md5_encode(&local_370,pcVar5,sVar4);
            local_350 = 0;
            iVar3 = strcmp(pcVar5 + -0x28,(char *)&local_330);
            if ((iVar3 == 0) &&
               ((iVar3 = strcmp((char *)&local_370,(char *)&local_230), iVar3 == 0 ||
                (iVar3 = strcmp(pcVar5,(char *)&local_230), iVar3 == 0)))) break;
            iVar3 = *piVar2;
            iVar8 = iVar8 + 1;
            pcVar5 = pcVar5 + 0x78;
            if ((iVar3 <= iVar8) || (iVar8 == 10)) goto LAB_0001f50a;
          }
          iVar3 = *piVar2;
        }
LAB_0001f50a:
        if (iVar8 == iVar3) {
          uVar9 = 0x12d;
          pcVar5 = "[%s:%u]verify user password failed!!!\n\n";
          goto LAB_0001f586;
        }
        goto LAB_0001f2bc;
      }
      DebugPrint(8,7,"[%s:%u]Super password %s checked ok.\n",DAT_0001f5bc,0x137,&local_230);
    }
  }
  else {
    uVar7 = 0xffffffff;
    do {
      while( true ) {
        pcVar5 = (char *)*puVar6;
        iVar3 = strcmp(pcVar5,"Msg_type");
        if (iVar3 != 0) break;
LAB_0001f22c:
        puVar6 = (undefined4 *)puVar6[10];
        if (puVar6 == (undefined4 *)0x0) goto LAB_0001f26e;
      }
      iVar3 = strcmp(pcVar5,"Msg_code");
      if (iVar3 == 0) {
        if ((char *)puVar6[1] != (char *)0x0) {
          uVar7 = atoi((char *)puVar6[1]);
        }
        goto LAB_0001f22c;
      }
      iVar3 = strcmp(pcVar5,"Msg_flag");
      if ((iVar3 != 0) || ((char *)puVar6[1] == (char *)0x0)) goto LAB_0001f22c;
      iVar3 = atoi((char *)puVar6[1]);
      *param_3 = iVar3;
      puVar6 = (undefined4 *)puVar6[10];
    } while (puVar6 != (undefined4 *)0x0);
LAB_0001f26e:
    puVar6 = (undefined4 *)0x0;
    ixmlNodeList_free(piVar2);
    local_330 = puVar6;
    memset(auStack_32c,0,0xfc);
    local_230 = puVar6;
    memset(auStack_22c,0,0xfc);
    local_370 = puVar6;
    memset(auStack_36c,0,0x3c);
    if ((uVar7 & 0xfffffffd) != 1) goto LAB_0001f3f4;
  }
LAB_0001f2bc:
  local_130 = 0;
  memset(acStack_12c,0,0xfc);
  if (DAT_000a9e84 == '\0') {
    __stream = fopen64("/tmp/vendor_id_md5.dat","rb");
    if (__stream != (FILE *)0x0) {
      sVar4 = fread(&local_130,1,0x100,__stream);
      fclose(__stream);
      if (0 < (int)sVar4) {
        *(char *)((int)&local_130 + sVar4) = '\0';
        strcpy(param_2,(char *)&local_130);
        strcpy(DAT_0001f5b4,(char *)&local_130);
      }
    }
  }
  else {
    pcVar5 = stpcpy((char *)&local_130,DAT_0001f5b4);
    memcpy(param_2,&local_130,(size_t)(pcVar5 + (1 - (int)&local_130)));
  }
  piVar2 = (int *)ixmlDocument_getElementsByTagName(iVar1,"VENDOR_PARAM");
  if (piVar2 == (int *)0x0) {
    if ((char)local_130 != '\0') {
      uVar7 = 0xffffffff;
    }
  }
  else {
    for (puVar6 = *(undefined4 **)(*piVar2 + 0x2c); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[10]) {
      pcVar5 = (char *)*puVar6;
      iVar3 = strcmp(pcVar5,"VendorId");
      if ((iVar3 == 0) || (iVar3 = strcmp(pcVar5,"VendorID"), iVar3 == 0)) {
        if ((char *)puVar6[1] == (char *)0x0) {
          uVar7 = 0xffffffff;
        }
        else {
          iVar3 = strcmp((char *)puVar6[1],(char *)&local_130);
          if (iVar3 != 0) {
            uVar7 = 0xffffffff;
          }
        }
        break;
      }
    }
    ixmlNodeList_free(piVar2);
  }
LAB_0001f356:
  ixmlDocument_free(iVar1);
  return uVar7;
code_r0x0001f474:
  puVar6 = (undefined4 *)puVar6[10];
  goto joined_r0x0001f424;
}


