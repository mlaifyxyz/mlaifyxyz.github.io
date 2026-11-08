/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0008905c */
/* function FUN_0008905c @ 0008905c */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_0008905c(undefined4 param_1,undefined4 param_2,char *param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  char *pcVar8;
  uint *__s2;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  code *pcVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  void *pvVar17;
  uint uVar18;
  void **ppvVar19;
  int iVar20;
  int *piVar21;
  char *pcVar22;
  char *pcVar23;
  char **__src;
  uint *puVar24;
  char **local_1550;
  int local_154c;
  char *pcStack_1540;
  char *pcStack_153c;
  char *local_1538;
  char *local_1534;
  char *pcStack_1530;
  char *local_152c;
  char *pcStack_1528;
  char *local_1524;
  char acStack_1520 [32];
  char *local_1500;
  char *pcStack_14fc;
  char *local_14f8;
  char *local_14f4;
  char *pcStack_14f0;
  char *local_14ec;
  char *pcStack_14e8;
  char *local_14e4;
  char *local_14e0;
  undefined4 uStack_14dc;
  char *local_14d8;
  char *local_14d4;
  char *pcStack_14d0;
  char *local_14cc;
  char *pcStack_14c8;
  char *local_14c4;
  char *local_14c0;
  char *pcStack_14bc;
  char *local_14b8;
  char *local_14b4;
  char *pcStack_14b0;
  char *local_14ac;
  char *local_14a8;
  char *local_14a4;
  undefined4 local_14a0;
  undefined4 local_149c;
  undefined4 local_1498;
  undefined4 local_1494;
  undefined4 uStack_1490;
  undefined4 local_148c;
  undefined4 uStack_1488;
  undefined4 local_1484;
  uint local_1460 [16];
  char *local_1420;
  char *pcStack_141c;
  char *local_1418;
  char *local_1414;
  char *local_1410;
  char *local_140c;
  char *pcStack_1408;
  char *local_1404;
  undefined4 uStack_13e0;
  undefined1 auStack_13dc [2];
  undefined1 auStack_13da [4];
  char acStack_13d6 [246];
  stat64 local_12e0 [2];
  void *local_11e0;
  undefined1 auStack_11dc [12];
  undefined4 local_11d0;
  char acStack_110c [32];
  char acStack_10ec [64];
  undefined2 local_10ac;
  undefined1 local_10aa;
  char acStack_10a2 [64];
  undefined2 local_1062;
  undefined1 local_1060;
  undefined4 local_1020;
  uint local_1008;
  char acStack_1004 [64];
  undefined4 local_fc4;
  undefined2 local_fc0;
  undefined1 local_fbe;
  undefined4 local_f84;
  undefined2 local_f80;
  char acStack_f44 [64];
  char acStack_f04 [64];
  undefined4 local_ec4;
  char acStack_ec0 [64];
  char acStack_e80 [64];
  char acStack_e40 [1120];
  undefined1 auStack_9e0 [2324];
  int iStack_cc;
  
  iVar15 = DAT_00089b78 + 0x89078;
  iVar2 = GetCurrentTimeStamp();
  iVar4 = param_4;
  if (param_4 == 0) {
    iVar4 = DAT_00089ba4 + 0x891dc;
  }
  iVar20 = DAT_00089b7c + 0x890c2 /*"http_get_proc"*/;
  pvVar17 = (void *)(DAT_00089b80 + 0x890a6);
  pcVar5 = param_3;
  DebugPrint(1,7,DAT_00089b84 + 0x890ac /*"[%s:%u]%s: ---http_url-->>%s

"*/,iVar20,0x1e7,iVar4,param_3);
  memset(pvVar17,0,2000);
  FUN_0009b370(param_3,pvVar17);
  pcVar3 = calloc(1000,1);
  if (pcVar3 == (char *)0x0) {
    DebugPrint(1,7,DAT_00089cc4 + 0x89926 /*"[%s:%u]resultBuf malloc error!

"*/,iVar20,499,iVar4,pcVar5);
    return 0xffffffff;
  }
  iVar4 = FUN_000a6fd8(param_3,pvVar17,pcVar3);
  piVar21 = *(int **)(iVar15 + DAT_00089b88);
  if ((*piVar21 == 0) || (iVar20 = strcmp(param_3,(char *)(DAT_00089b8c + 0x890fc /*"/openslog"*/)), iVar20 != 0)) {
    iVar20 = FUN_0009c260(param_3,DAT_00089b94 + 0x89148,pcVar3);
    if (iVar4 == 0 || iVar20 == 0) goto LAB_00089108;
  }
  else if (iVar4 == 0) {
LAB_00089108:
    if (*pcVar3 == '\0') {
      uVar13 = *(undefined4 *)(DAT_00089ba8 + 0x891e4 /*"ok"*/);
      *(short *)pcVar3 = (short)uVar13;
      pcVar3[2] = (char)((uint)uVar13 >> 0x10);
      pcVar12 = (code *)**(undefined4 **)(iVar15 + DAT_00089b90);
    }
    else {
      pcVar12 = (code *)**(undefined4 **)(iVar15 + DAT_00089b90);
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(param_1,pcVar3,0x3eb);
    }
    free(pcVar3);
    return 0;
  }
  free(pcVar3);
  pcVar5 = strstr(param_3,(char *)(DAT_00089b98 + 0x8916a /*"snapshot.cgi"*/));
  if (pcVar5 != (char *)0x0) {
    if (**(int **)(iVar15 + DAT_00089b9c) != 0) {
      pvVar17 = calloc(0x400,1);
      iVar4 = FUN_000a06bc(param_3,pvVar17,DAT_00089ba0 + 0x89192 /*"/snapshot.cgi"*/,param_6);
      if (iVar4 == 0) {
        if ((code *)**(undefined4 **)(iVar15 + DAT_00089b90) != (code *)0x0) {
          (*(code *)**(undefined4 **)(iVar15 + DAT_00089b90))(param_1,pvVar17,0x191);
        }
        free(pvVar17);
        return 0x191;
      }
      free(pvVar17);
    }
    uVar13 = FUN_000888f0(param_1,param_2,param_3,param_4);
    return uVar13;
  }
  iVar4 = FUN_000887a4(param_1,param_3,param_4,param_5,param_6);
  if (iVar4 == 0) {
    return 0;
  }
  if (((*piVar21 != 0) && (**(int **)(iVar15 + DAT_00089bcc) != 0)) ||
     (**(int **)(iVar15 + DAT_00089bac) != 0)) {
    local_11e0 = (void *)0x0;
    iVar4 = FUN_0008866c(param_3);
    if (iVar4 == 1) {
      if ((code *)**(undefined4 **)(iVar15 + DAT_00089b90) == (code *)0x0) {
        return 0x194;
      }
      (*(code *)**(undefined4 **)(iVar15 + DAT_00089b90))(param_1,DAT_00089c08 + 0x8951c);
      return 0x194;
    }
    iVar4 = FUN_0007a6ec(param_3,param_4,&local_11e0);
    if (iVar4 < 1) {
      if (local_11e0 != (void *)0x0) goto LAB_000892a6;
    }
    else {
      if (local_11e0 == (void *)0x0) {
        return 0;
      }
      DebugPrint(1,7,DAT_00089bb4 + 0x89284 /*"[%s:%u]%s
"*/,DAT_00089bb0 + 0x8929e /*"http_get_proc"*/,0x262,local_11e0);
      if ((code *)**(undefined4 **)(iVar15 + DAT_00089b90) != (code *)0x0) {
        (*(code *)**(undefined4 **)(iVar15 + DAT_00089b90))(param_1,local_11e0,0x3eb);
      }
      if (local_11e0 == (void *)0x0) {
        return 0;
      }
LAB_000892a6:
      free(local_11e0);
    }
    if (iVar4 != -1) {
      return 0;
    }
  }
  if (**(int **)(iVar15 + DAT_00089bb8) != 0) {
    DebugPrint(1,7,DAT_00089c10 + 0x89538 /*"[%s:%u]%s

"*/,DAT_00089c0c + 0x8955a /*"http_get_proc"*/,0x28a,param_3);
    iVar4 = strcmp(param_3,(char *)(DAT_00089c14 + 0x89546 /*"/user"*/));
    if (iVar4 == 0) {
      uVar13 = FUN_000886b4(param_1,param_2,DAT_00089c7c + 0x897b2 /*"user.html"*/,DAT_00089c78 + 0x897b0 /*"text/html"*/);
      return uVar13;
    }
    iVar4 = strcmp(param_3,(char *)(DAT_00089c18 + 0x89558 /*"/admin"*/));
    if (iVar4 == 0) {
      uVar13 = FUN_000886b4(param_1,param_2,DAT_00089c20 + 0x89572 /*"admin.html"*/,DAT_00089c1c + 0x89570 /*"text/html"*/);
      return uVar13;
    }
  }
  cVar1 = *param_3;
  if (((cVar1 == '/') && (param_3[1] == '\0')) ||
     (pcVar5 = strstr(param_3,(char *)(DAT_00089bf0 + 0x8941e /*"/WEBlogin?username"*/)), pcVar5 != (char *)0x0)) {
    local_11e0 = (void *)0x0;
    memset(auStack_11dc,0,0x7c);
    read_file_to_string(DAT_00089bbc + 0x892ee /*"/etc/filesys.ver"*/,&local_11e0,0x80);
    pcVar5 = strstr((char *)&local_11e0,(char *)(DAT_00089bc0 + 0x892fa /*"_AEZJ"*/));
    if (pcVar5 != (char *)0x0) {
      uVar13 = FUN_000886b4(param_1,param_2,DAT_00089bc8 + 0x89314 /*"welcome.html"*/,DAT_00089bc4 + 0x89312 /*"text/html"*/);
      return uVar13;
    }
    pcVar5 = strstr(param_3,(char *)(DAT_00089c24 + 0x89582 /*"/WEBlogin?username"*/));
    if (pcVar5 == (char *)0x0) {
      uVar13 = *(undefined4 *)(DAT_00089c40 + 0x89608 /*"Login=0"*/);
      uVar9 = *(undefined4 *)(DAT_00089c40 + 0x8960c /*"n=0"*/);
      puVar16 = *(undefined4 **)(iVar15 + DAT_00089c2c);
      *puVar16 = *(undefined4 *)(DAT_00089c40 + 0x89604 /*"SkipLogin=0"*/);
      puVar16[1] = uVar13;
      puVar16[2] = uVar9;
    }
    else {
      uVar13 = *(undefined4 *)(DAT_00089c28 + 0x89596 /*"Login=1"*/);
      uVar9 = *(undefined4 *)(DAT_00089c28 + 0x8959a /*"n=1"*/);
      puVar16 = *(undefined4 **)(iVar15 + DAT_00089c2c);
      *puVar16 = *(undefined4 *)(DAT_00089c28 + 0x89592 /*"SkipLogin=1"*/);
      puVar16[1] = uVar13;
      puVar16[2] = uVar9;
      strcpy((char *)((int)puVar16 + 0xb),param_3);
    }
    DebugPrint(1,7,DAT_00089c34 + 0x895be /*"[%s:%u]web login Path:%s
"*/,DAT_00089c30 + 0x895e0 /*"http_get_proc"*/,0x2a7,puVar16);
    uVar13 = FUN_000886b4(param_1,param_2,DAT_00089c3c + 0x895d4 /*"index.html"*/,DAT_00089c38 + 0x895d0 /*"text/html"*/);
    return uVar13;
  }
  pcVar3 = strstr(param_3,(char *)(DAT_00089bf4 + 0x89432 /*"/?userName"*/));
  if (pcVar3 != (char *)0x0) {
    iVar4 = DAT_00089bf8 + 0x89472 /*"http_get_proc"*/;
    pcVar3 = (char *)(DAT_00089bfc + 0x89464 /*"&"*/);
    DebugPrint(1,7,DAT_00089c00 + 0x8945c /*"[%s:%u]Dahua tmp token web login Path:%s
"*/,iVar4,0x2b2,param_3);
    memset(&local_149c,0,0x3c);
    uStack_13e0 = pcVar5;
    memset(auStack_13dc,0,0x7c);
    pcVar5 = strtok(param_3,pcVar3);
    if (pcVar5 != (char *)0x0) {
      iVar20 = DAT_00089c04 + 0x894b4 /*"[%s:%u]tmpWebLoginToken iIndex:%d, ptoken:%s 

"*/;
      iVar2 = 0;
      do {
        DebugPrint(1,7,iVar20,iVar4,700,iVar2,pcVar5);
        if (iVar2 == 0) {
          strncpy((char *)&local_14a0,pcVar5,0x3f);
        }
        else if (iVar2 == 1) {
          strncpy((char *)&uStack_13e0,pcVar5,0x7f);
        }
        pcVar5 = strtok((char *)0x0,pcVar3);
        iVar2 = iVar2 + 1;
        usleep(10000);
      } while (pcVar5 != (char *)0x0);
    }
    iVar2 = DAT_00089c44 + 0x89654 /*"http_get_proc"*/;
    DebugPrint(1,7,DAT_00089c48 + 0x89634 /*"[%s:%u]########tmpUserName:%s, tmpWebLoginToken:%s 

"*/,iVar2,0x2cb,&local_14a0,&uStack_13e0);
    local_1460[0] = 0;
    memset(local_1460 + 1,0,0x3c);
    local_12e0[0].st_dev._0_4_ = (char *)0x0;
    memset((undefined4 *)((int)&local_12e0[0].st_dev + 4),0,0x7c);
    sVar6 = strlen((char *)&local_14a0);
    iVar20 = DAT_00089c4c + 0x89672 /*"/tmp/ez_weblogin_token.txt"*/;
    memcpy(local_1460,(void *)((int)&local_1498 + 3),sVar6 - 0xb);
    sVar6 = strlen((char *)&uStack_13e0);
    memcpy(local_12e0,auStack_13da,sVar6 - 6);
    DebugPrint(1,7,DAT_00089c50 + 0x896a0 /*"[%s:%u]webLoginUserName:%s, webLoginToken:%s 

"*/,iVar2,0x2d2,local_1460,local_12e0);
    local_11e0 = (void *)0x0;
    memset(auStack_11dc,0,0x7c);
    local_1420 = (char *)0x0;
    memset(&pcStack_141c,0,0x3c);
    MsgUserGetPassword(local_1460,&local_1420);
    iVar4 = FileExist(iVar20);
    if (iVar4 == 0) {
      DebugPrint(1,7,DAT_00089c8c + 0x897f6 /*"[%s:%u]Don't get device current web login tmptoken, return 404

"*/,iVar2,0x2df);
      uVar13 = FUN_000886b4(param_1,param_2,DAT_00089c94 + 0x8980c /*"f404.html"*/,DAT_00089c90 + 0x89808 /*"text/html"*/);
      return uVar13;
    }
    read_file_to_string(iVar20,&local_11e0,0x80);
    ppvVar19 = &local_11e0;
    DebugPrint(1,7,DAT_00089c54 + 0x896fe /*"[%s:%u]Get device current web login tmptoken:%s 

"*/,iVar2,0x2db,&local_11e0);
    sVar6 = strlen((char *)local_12e0);
    iVar4 = strncmp((char *)&local_11e0,(char *)local_12e0,sVar6);
    if (iVar4 == 0) {
      sprintf(*(char **)(iVar15 + DAT_00089c2c),(char *)(DAT_00089c80 + 0x897ca /*"SkipLogin=1/WEBlogin?username=%s&password=%s"*/),(char *)local_1460,
              (char *)&local_1420);
      uVar13 = FUN_000886b4(param_1,param_2,DAT_00089c88 + 0x897e0 /*"index.html"*/,DAT_00089c84 + 0x897dc /*"text/html"*/);
      return uVar13;
    }
    DebugPrint(1,7,DAT_00089c58 + 0x8972c /*"[%s:%u]Device login tmptoken != current token, return 404

"*/,iVar2,0x2ea,ppvVar19);
    DebugPrint(1,7,DAT_00089c5c + 0x8973c /*"[%s:%u]devToken:%s, webLoginToken:%s 

"*/,iVar2,0x2eb,&local_11e0,local_12e0);
    uVar13 = FUN_000886b4(param_1,param_2,DAT_00089c64 + 0x8975a /*"f404.html"*/,DAT_00089c60 + 0x89756 /*"text/html"*/);
    return uVar13;
  }
  iVar4 = strcmp(param_3,(char *)(DAT_00089c68 + 0x8976a /*"/zjadmin"*/));
  if (((iVar4 == 0) ||
      (pcVar5 = strstr(param_3,(char *)(DAT_00089c6c + 0x89778 /*"/?cloudhost"*/)), pcVar5 != (char *)0x0)) ||
     ((cVar1 == '/' && (param_3[1] == '?')))) {
    uVar13 = FUN_000886b4(param_1,param_2,DAT_00089c74 + 0x8979a /*"index.html"*/,DAT_00089c70 + 0x89798 /*"text/html"*/);
    return uVar13;
  }
  memset(&uStack_13e0,0,0x100);
  strcpy((char *)&uStack_13e0,param_3);
  pcVar5 = strchr((char *)&uStack_13e0,0x3f);
  if (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
  }
  sVar6 = strlen((char *)&uStack_13e0);
  if (10 < sVar6) {
    iVar4 = strncmp((char *)&uStack_13e0,(char *)(DAT_00089c98 + 0x89852 /*"/playback/"*/),10);
    if (iVar4 == 0) {
      uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_00089cd8 + 0x89a1a /*"application/octet-stream"*/);
      return uVar13;
    }
    pcVar5 = (char *)strncmp((char *)&uStack_13e0,(char *)(DAT_00089c9c + 0x89866 /*"/facejpeg/"*/),10);
    if (pcVar5 == (char *)0x0) {
      pvVar17 = calloc(0x400,1);
      if (pvVar17 == (void *)0x0) {
        return 0x191;
      }
      iVar4 = FUN_000a06bc(param_3,pvVar17,0,param_6);
      free(pvVar17);
      if (iVar4 == 0) {
        return 0x191;
      }
      memset(&local_11e0,0,0x80);
      snprintf((char *)&local_11e0,0x80,(char *)(DAT_00089cc8 + 0x89988 /*"/tmp/jpeg/%s"*/),acStack_13d6);
      local_1420 = pcVar5;
      pcStack_141c = pcVar5;
      local_1418 = pcVar5;
      local_1414 = pcVar5;
      local_1410 = pcVar5;
      local_140c = pcVar5;
      pcStack_1408 = pcVar5;
      local_1404 = pcVar5;
      iVar4 = FUN_0009d0d0(param_3,DAT_00089ccc + 0x89994 /*"&t"*/,&local_1420,0x20);
      if (iVar4 == 0) {
        FUN_0009d0d0(param_3,DAT_00089ce8 + 0x89a70 /*"?t"*/,&local_1420,0x20);
      }
      if (((char)local_1420 == '\0') ||
         ((iVar4 = stat64((char *)&local_11e0,local_12e0), iVar4 == 0 &&
          (lVar7 = atol((char *)&local_1420), local_12e0[0].st_mtim.tv_sec == lVar7)))) {
        uVar13 = FUN_000886b4(param_1,param_2,&local_11e0,DAT_00089cd0 + 0x899e6 /*"image/jpeg"*/);
        return uVar13;
      }
      return 0x194;
    }
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089ca0 + 0x89878 /*"*.css"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_00089cd4 + 0x899fc /*"text/css"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089ca4 + 0x8988a /*"*.js"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_00089cdc + 0x89a30 /*"text/javascript"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089ca8 + 0x8989c /*"*.map"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_00089ce4 + 0x89a5c /*"text/javascript"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089cac + 0x898ae /*"*.swf"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_00089ce0 + 0x89a46 /*"application/x-shockwave-flash"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089cb0 + 0x898be /*"*.html"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b230 + 0x8b0b2 /*"text/html"*/);
    return uVar13;
  }
  pcVar3 = (char *)(DAT_00089cb4 + 0x898ce /*"ConfigFile.ini"*/);
  pcVar5 = strstr(param_3,pcVar3);
  if (pcVar5 != (char *)0x0) {
    uVar13 = FUN_000886b4(param_1,param_2,pcVar3,DAT_0008b22c + 0x8b09c /*"helloworld"*/);
    return uVar13;
  }
  pcVar3 = (char *)(DAT_00089cb8 + 0x898e4 /*"config.xml"*/);
  pcVar5 = strstr(param_3,pcVar3);
  if (pcVar5 != (char *)0x0) {
    uVar13 = FUN_000886b4(param_1,param_2,pcVar3,DAT_00089d18 + 0x89b5a /*"application/octet-stream"*/);
    return uVar13;
  }
  pcVar3 = (char *)(DAT_00089cbc + 0x898fa /*"snapshot.jpeg"*/);
  pcVar5 = strstr(param_3,pcVar3);
  if (pcVar5 != (char *)0x0) {
    uVar13 = FUN_000886b4(param_1,param_2,pcVar3,DAT_00089cc0 + 0x89912 /*"application/zip"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089cec + 0x89a7c /*"*.xml"*/);
  if (((iVar4 == 0) || (iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089cf0 + 0x89a8c /*"*.xsd"*/), iVar4 == 0)) ||
     (iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089cf4 + 0x89a9c /*"*.wsdl"*/), iVar4 == 0)) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b228 + 0x8b08a /*"text/xml"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089cf8 + 0x89aac /*"*.jpg"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b224 + 0x8b074 /*"image/jpeg"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089cfc + 0x89abc /*"*.gif"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b220 + 0x8b05e /*"image/gif"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089d00 + 0x89acc /*"*.png"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b21c + 0x8b048 /*"image/png"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089d04 + 0x89adc /*"*.ico"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b218 + 0x8b032 /*"image/ico"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089d08 + 0x89aec /*"*.mp3"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b214 + 0x8b01c /*"audio/mp3"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_00089d0c + 0x89afc /*"*.mp4"*/);
  if (iVar4 == 0) {
    if (**(int **)(iVar15 + DAT_00089d10) == 0) {
      uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_00089d1c + 0x89b70 /*"video/mp4"*/);
      return uVar13;
    }
    pvVar17 = calloc(0x2800,1);
    iVar4 = FUN_000a06bc(param_3,pvVar17,0,param_6);
    free(pvVar17);
    if (iVar4 == 0) {
      return 0x191;
    }
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_00089d14 + 0x89b48 /*"video/mp4"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa68 + 0x89d2a /*"*.hevc"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b23c + 0x8b0f4 /*"video/hevc"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa6c + 0x89d3c /*"*.h265"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b238 + 0x8b0de /*"video/h265"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa70 + 0x89d4e /*"*.avi"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b234 + 0x8b0c8 /*"video/avi"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa74 + 0x89d60 /*"*.flv"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b254 + 0x8b16c /*"video/x-flv"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa78 + 0x89d72 /*"*.log"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b250 + 0x8b156 /*"application/octet-stream"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa7c + 0x89d84 /*"*.txt"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008b258 + 0x8b182 /*"text/plain"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa80 + 0x89d96 /*"*.zip"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008ab68 + 0x8a5bc /*"application/zip"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa84 + 0x89da8 /*"*.tgz"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008ab98 + 0x8a69c /*"application/x-compressed"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa88 + 0x89dba /*"*.h264"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008ab94 + 0x8a684 /*"application/octet-stream"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa8c + 0x89dcc /*"*.webm"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008ab90 + 0x8a66c /*"application/octet-stream"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa90 + 0x89dde /*"*.mem"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008ab8c + 0x8a654 /*"application/octet-stream"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa94 + 0x89df0 /*"*.wasm"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008ab24 + 0x8a256 /*"application/octet-stream"*/);
    return uVar13;
  }
  iVar4 = FUN_000886d8(&uStack_13e0,DAT_0008aa98 + 0x89e02 /*"*.exe"*/);
  if (iVar4 == 0) {
    uVar13 = FUN_000886b4(param_1,param_2,(int)&uStack_13e0 + 1,DAT_0008ab20 + 0x8a23e /*"application/octet-stream"*/);
    return uVar13;
  }
  iVar4 = DAT_0008aa9c + 0x89e46 /*"http_get_proc"*/;
  DebugPrint(8,7,DAT_0008aaa0 + 0x89e24 /*"[%s:%u]http_url:%s

"*/,iVar4,0x38c,param_3);
  if (5 < **(int **)(iVar15 + DAT_0008aaa4)) {
    uVar18 = 60000;
    if (**(int **)(iVar15 + DAT_0008aaa8) != 0) {
      uVar18 = 180000;
    }
    if ((uint)(iVar2 - **(int **)(iVar15 + DAT_0008aaac)) < uVar18) {
      DebugPrint(1,7,DAT_0008b240 + 0x8b118 /*"[%s:%u]please wait %d s,password will unlock 

"*/,iVar4,0x399,uVar18 / 1000);
      if ((code *)**(undefined4 **)(iVar15 + DAT_0008b1d4) != (code *)0x0) {
        (*(code *)**(undefined4 **)(iVar15 + DAT_0008b1d4))(param_1,DAT_0008b244 + 0x8b132 /*"The user is locked"*/,0x3eb);
      }
      uVar13 = FUN_000886b4(param_1,param_2,DAT_0008b24c + 0x8b140 /*"f404.html"*/,DAT_0008b248 + 0x8b13e /*"text/html"*/);
      return uVar13;
    }
  }
  pcVar5 = strstr(param_3,(char *)(DAT_0008aab0 + 0x89e6e /*"httpPTZ/"*/));
  if (pcVar5 != (char *)0x0) {
    local_1420 = (char *)0x0;
    local_1418 = (char *)0x0;
    pcStack_141c = (char *)0x0;
    local_1414 = (char *)0x0;
    local_1410 = (char *)0x0;
    local_140c = (char *)0x0;
    pcStack_1408 = (char *)0x0;
    local_1404 = (char *)0x0;
    local_11e0 = (void *)0x0;
    memset(auStack_11dc,0,0xfc);
    pcVar5 = strstr(param_3,(char *)(DAT_0008aab4 + 0x89eac /*"stop"*/));
    if (pcVar5 != (char *)0x0) {
LAB_0008a09a:
      local_1420 = *(char **)(DAT_0008aaf0 + 0x8a0a6 /*"stop"*/);
      pcStack_141c = (char *)CONCAT31(pcStack_141c._1_3_,
                                      (char)*(undefined4 *)(DAT_0008aaf0 + 0x8a0aa));
      goto LAB_0008a000;
    }
    pcVar3 = (char *)(DAT_0008aab8 + 0x89ec4 /*"zoomwide"*/);
    pcVar5 = strstr(param_3,pcVar3);
    if (pcVar5 == (char *)0x0) {
      pcVar3 = (char *)(DAT_0008aabc + 0x89ed8 /*"zoomtele"*/);
      pcVar5 = strstr(param_3,pcVar3);
      if (pcVar5 == (char *)0x0) {
        pcVar3 = (char *)(DAT_0008aac0 + 0x89eec /*"FocusFarAutoOff"*/);
        pcVar5 = strstr(param_3,pcVar3);
        if (pcVar5 == (char *)0x0) {
          pcVar3 = (char *)(DAT_0008aac4 + 0x89f00 /*"FocusNearAutoOff"*/);
          pcVar5 = strstr(param_3,pcVar3);
          if (pcVar5 == (char *)0x0) {
            pcVar3 = (char *)(DAT_0008aac8 + 0x89f14 /*"IrisOpenAutoOff"*/);
            pcVar5 = strstr(param_3,pcVar3);
            if (pcVar5 != (char *)0x0) goto LAB_0008a07a;
            pcVar3 = (char *)(DAT_0008aacc + 0x89f28 /*"IrisCloseAutoOff"*/);
            pcVar5 = strstr(param_3,pcVar3);
            if (pcVar5 == (char *)0x0) {
              pcVar5 = strstr(param_3,(char *)(DAT_0008aad0 + 0x89f3c /*"ptzCtrl="*/));
              if (pcVar5 != (char *)0x0) {
                pcVar5 = pcVar5 + 8;
                pcVar3 = strchr(pcVar5,0x2f);
                if (pcVar3 == (char *)0x0) {
                  return 400;
                }
                local_12e0[0].__pad1 = 0;
                local_12e0[0].st_dev._0_4_ = (char *)0x0;
                local_12e0[0].st_dev._4_4_ = 0;
                local_12e0[0].__st_ino = 0;
                local_12e0[0].st_mode = 0;
                local_12e0[0].st_nlink = 0;
                local_12e0[0].st_uid = 0;
                local_12e0[0].st_gid = 0;
                strncpy((char *)local_12e0,pcVar5,(int)pcVar3 - (int)pcVar5);
                pcVar5 = strstr(param_3,(char *)(DAT_0008aad4 + 0x89f86 /*"panspeed="*/));
                pcVar5 = pcVar5 + 9;
                pcVar3 = strchr(pcVar5,0x2f);
                if (pcVar3 == (char *)0x0) {
                  return 400;
                }
                local_14a0 = 0;
                local_149c = 0;
                strncpy((char *)&local_14a0,pcVar5,(int)pcVar3 - (int)pcVar5);
                pcVar5 = strstr(param_3,(char *)(DAT_0008aad8 + 0x89fbe /*"tiltspeed="*/));
                pcVar5 = pcVar5 + 10;
                pcVar3 = strchr(pcVar5,0x2f);
                local_1460[1] = 0;
                if (pcVar3 == (char *)0x0) {
                  strcpy((char *)local_1460,pcVar5);
                }
                else {
                  strncpy((char *)local_1460,pcVar5,(int)pcVar3 - (int)pcVar5);
                }
                sprintf((char *)&local_11e0,(char *)(DAT_0008aadc + 0x89ffc /*"<xml><cmd>%s</cmd><panspeed>%s</panspeed><tiltspeed>%s</tiltspeed></xml>"*/),(char *)local_12e0,
                        (char *)&local_14a0,(char *)local_1460);
                goto LAB_0008a000;
              }
              goto LAB_0008a09a;
            }
          }
          local_1420 = *(char **)pcVar3;
          pcStack_141c = *(char **)(pcVar3 + 4);
          local_1418 = *(char **)(pcVar3 + 8);
          local_1414 = *(char **)(pcVar3 + 0xc);
          local_1410 = (char *)CONCAT31(local_1410._1_3_,(char)*(undefined4 *)(pcVar3 + 0x10));
        }
        else {
LAB_0008a07a:
          local_1420 = *(char **)pcVar3;
          pcStack_141c = *(char **)(pcVar3 + 4);
          local_1418 = *(char **)(pcVar3 + 8);
          local_1414 = *(char **)(pcVar3 + 0xc);
        }
        goto LAB_0008a000;
      }
    }
    local_1420 = *(char **)pcVar3;
    pcStack_141c = *(char **)(pcVar3 + 4);
    local_1418 = (char *)CONCAT31(local_1418._1_3_,(char)*(undefined4 *)(pcVar3 + 8));
LAB_0008a000:
    if (((uint)local_11e0 & 0xff) == 0) {
      sprintf((char *)&local_11e0,(char *)(DAT_0008aae0 + 0x8a012 /*"<xml>
<cmd>%s</cmd>
</xml>
"*/),(char *)&local_1420);
    }
    AuxMsgPTZCmd(&local_11e0);
    DebugPrint(8,7,DAT_0008aae8 + 0x8a034 /*"[%s:%u]>>-------setPTZCmd=%s<<---------

"*/,DAT_0008aae4 + 0x8a056 /*"http_get_proc"*/,0x3f6,&local_11e0);
    return 200;
  }
  pcVar3 = (char *)(DAT_0008aaf4 + 0x8a0be /*"common.js"*/);
  pcVar5 = strstr(param_3,pcVar3);
  if (pcVar5 != (char *)0x0) {
    puts((char *)(DAT_0008ab84 + 0x8a62c /*"request common.js file"*/));
    uVar13 = FUN_000886b4(param_1,param_2,pcVar3,DAT_0008ab88 + 0x8a63a /*"text/javascript"*/);
    return uVar13;
  }
  pcVar3 = (char *)(DAT_0008aaf8 + 0x8a0d2 /*"login.html"*/);
  pcVar5 = strstr(param_3,pcVar3);
  if (pcVar5 != (char *)0x0) {
    puts((char *)(DAT_0008ab7c + 0x8a60c /*"request login.html file"*/));
    uVar13 = FUN_000886b4(param_1,param_2,pcVar3,DAT_0008ab80 + 0x8a61a /*"text/html"*/);
    return uVar13;
  }
  pcVar3 = (char *)(DAT_0008aafc + 0x8a0e6 /*"player.html"*/);
  pcVar5 = strstr(param_3,pcVar3);
  if (pcVar5 != (char *)0x0) {
    puts((char *)(DAT_0008ab74 + 0x8a5ec /*"request player.html file"*/));
    uVar13 = FUN_000886b4(param_1,param_2,pcVar3,DAT_0008ab78 + 0x8a5fa /*"text/html"*/);
    return uVar13;
  }
  pcVar3 = (char *)(DAT_0008ab00 + 0x8a0fa /*"WEBConfig.exe"*/);
  pcVar5 = strstr(param_3,pcVar3);
  if (pcVar5 != (char *)0x0) {
    puts((char *)(DAT_0008ab6c + 0x8a5cc /*"request WEBConfig.exe file"*/));
    uVar13 = FUN_000886b4(param_1,param_2,pcVar3,DAT_0008ab70 + 0x8a5da /*"application/octet-stream"*/);
    return uVar13;
  }
  pcVar3 = (char *)(DAT_0008ab04 + 0x8a10e /*"command_port.ini"*/);
  pcVar5 = strstr(param_3,pcVar3);
  if (pcVar5 != (char *)0x0) {
    puts((char *)(DAT_0008ab9c + 0x8a6ac /*"request command_port.ini file"*/));
    uVar13 = FUN_000886b4(param_1,param_2,pcVar3,DAT_0008aba0 + 0x8a6ba /*"text/html"*/);
    return uVar13;
  }
  pcVar22 = (char *)(DAT_0008ab08 + 0x8a124 /*"wireless_sta?"*/);
  pcVar3 = strstr(param_3,pcVar22);
  if (pcVar3 == (char *)0x0) {
    pcVar5 = strstr(param_3,(char *)(DAT_00089bd0 + 0x89332 /*"ipc/wireless"*/));
    if (pcVar5 == (char *)0x0) {
LAB_0008afd6:
      uVar13 = FUN_000886b4(param_1,param_2,DAT_0008b210 + 0x8afe4 /*"f404.html"*/,DAT_0008b20c + 0x8afe2 /*"text/html"*/);
      return uVar13;
    }
    pcVar5 = strstr(param_3,(char *)(DAT_00089bd4 + 0x89344 /*"cmd=search"*/));
    if (pcVar5 != (char *)0x0) {
      piVar21 = (int *)(DAT_00089bdc + 0x89368);
      iVar4 = DAT_00089bd8 + 0x8938a /*"http_get_proc"*/;
      DebugPrint(8,7,DAT_00089be0 + 0x8936e /*"[%s:%u]recv client search wifi req (http_url:%s)

"*/,iVar4,0x4ae,param_3);
      memset(piVar21,0,0x2a34);
      MsgGetWifiApInfos(piVar21);
      DebugPrint(8,7,DAT_00089be4 + 0x89398 /*"[%s:%u]wifi ap count: %d

"*/,iVar4,0x4b3,*piVar21);
      if (*piVar21 < 1) {
        if ((code *)**(undefined4 **)(iVar15 + DAT_0008ab5c) == (code *)0x0) {
          return 0;
        }
        (*(code *)**(undefined4 **)(iVar15 + DAT_0008ab5c))(param_1,DAT_0008aba4 + 0x8a6e2,0x3eb);
        return 0;
      }
      iVar4 = 0;
      local_11e0 = (void *)0x0;
      memset(auStack_11dc,0,0x7fc);
      piVar21 = (int *)(DAT_00089be8 + 0x893c8);
      pcVar3 = (char *)(DAT_00089bec + 0x893ce /*"ssid=%s
keyindex=%d
"*/);
      pcVar5 = (char *)(DAT_00089be8 + 0x893cc);
      ppvVar19 = &local_11e0;
      do {
        iVar4 = iVar4 + 1;
        iVar2 = snprintf((char *)ppvVar19,(size_t)(auStack_9e0 + -(int)ppvVar19),pcVar3,pcVar5,iVar4
                        );
        pcVar5 = pcVar5 + 0xd8;
        ppvVar19 = (void **)((int)ppvVar19 + iVar2);
      } while (iVar4 < *piVar21);
      if ((code *)**(undefined4 **)(iVar15 + DAT_00089b90) == (code *)0x0) {
        return 0;
      }
      (*(code *)**(undefined4 **)(iVar15 + DAT_00089b90))(param_1,&local_11e0,0x3eb);
      return 0;
    }
    pcVar5 = strstr(param_3,(char *)(DAT_0008aba8 + 0x8a6f0 /*"cmd=get"*/));
    if (pcVar5 != (char *)0x0) {
      iVar4 = DAT_0008abac + 0x8a732 /*"http_get_proc"*/;
      pcVar5 = param_3;
      DebugPrint(8,7,DAT_0008abb0 + 0x8a710 /*"[%s:%u]recv client get wifi req (http_url:%s)

"*/,iVar4,0x4d7,param_3);
      pcVar3 = strstr(param_3,(char *)(DAT_0008abb4 + 0x8a720 /*"keyindex="*/));
      if (pcVar3 == (char *)0x0) {
        DebugPrint(8,7,DAT_0008abc4 + 0x8a7e2 /*"[%s:%u]invalid params

"*/,iVar4,0x4dc,pcVar5);
        return 400;
      }
      piVar21 = (int *)atoi(pcVar3 + 9);
      piVar11 = (int *)(DAT_0008abb8 + 0x8a73a);
      __s2 = (uint *)*piVar11;
      if ((int)__s2 < (int)piVar21) {
        uVar13 = 0x4e3;
        iVar2 = DAT_0008aaec + 0x8a05a /*"[%s:%u]invalid idx(idx:%d, ttalcnt:%d)

"*/;
LAB_0008a058:
        DebugPrint(8,7,iVar2,iVar4,uVar13,piVar21,__s2);
        return 400;
      }
      iVar4 = (int)piVar21 + -1;
      iVar2 = piVar11[iVar4 * 0x36 + 0x31];
      if (iVar2 != 0) {
        iVar14 = piVar11[iVar4 * 0x36 + 0x32];
        iVar20 = 1;
        if (iVar14 == 1) goto LAB_0008a794;
        if ((iVar14 == 2) && (iVar2 == 2)) {
          iVar20 = 3;
          goto LAB_0008a794;
        }
        if ((iVar2 == 2) && (iVar14 == 3)) {
          iVar20 = 4;
          goto LAB_0008a794;
        }
        if (iVar14 != 2) {
          if ((iVar2 == 3) && (iVar14 == 3)) {
            iVar20 = 6;
            goto LAB_0008a794;
          }
        }
        else if (iVar2 == 3) {
          iVar20 = 5;
          goto LAB_0008a794;
        }
      }
      iVar20 = 0;
LAB_0008a794:
      sprintf((char *)&local_11e0,(char *)(DAT_0008abc0 + 0x8a7b0 /*"enable=1
ssid=%s
authentication=%d
keyindex=%d
key=*********
status=0"*/),
              (char *)(iVar4 * 0xd8 + DAT_0008abbc + 0x8a7ac),iVar20,(int)piVar21);
      if ((code *)**(undefined4 **)(iVar15 + DAT_0008ab5c) == (code *)0x0) {
        return 0;
      }
      (*(code *)**(undefined4 **)(iVar15 + DAT_0008ab5c))(param_1,&local_11e0,0x3eb);
      return 0;
    }
    pcVar5 = strstr(param_3,(char *)(DAT_0008abc8 + 0x8a7f6 /*"cmd=current"*/));
    if (pcVar5 != (char *)0x0) {
      iVar4 = DAT_0008abcc + 0x8a836 /*"http_get_proc"*/;
      DebugPrint(8,7,DAT_0008abd0 + 0x8a816 /*"[%s:%u]recv client get current wifi info(http_url:%s)

"*/,iVar4,0x50e,param_3);
      local_12e0[0].st_dev._0_4_ = (char *)0x0;
      memset((undefined4 *)((int)&local_12e0[0].st_dev + 4),0,0xfc);
      memset(&local_11e0,0,0x11a8);
      param_3 = (char *)MsgGetNetworkStatus(&local_11e0);
      if (param_3 == (char *)0x0) {
        piVar21 = *(int **)(iVar15 + DAT_0008abd4);
        iVar4 = 0;
        if (piVar21[0x76] != 0) {
          iVar4 = strcmp((char *)(piVar21 + 0x77),(char *)(DAT_0008abd8 + 0x8a862 /*"wep"*/));
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = strcmp((char *)(piVar21 + 0x77),(char *)(DAT_0008abdc + 0x8a874 /*"wpa"*/));
            if (iVar4 == 0) {
              iVar4 = strcmp((char *)(piVar21 + 200),(char *)(DAT_0008abe0 + 0x8a888 /*"TKIP"*/));
              if (iVar4 == 0) {
                iVar4 = 3;
              }
              else {
                iVar2 = strcmp((char *)(piVar21 + 200),(char *)(DAT_0008abe4 + 0x8a89a /*"AES"*/));
                iVar4 = 0;
                if (iVar2 == 0) {
                  iVar4 = 4;
                }
              }
            }
            else {
              iVar4 = 0;
            }
          }
        }
        sprintf((char *)local_12e0,(char *)(DAT_0008abe8 + 0x8a8c6 /*"enable=%d
ssid=%s
authentication=%d
keyindex=1
key=*********
status=%d"*/),*piVar21,
                (char *)((int)piVar21 + 0x13e),iVar4,(uint)(iStack_cc != 0));
        if ((code *)**(undefined4 **)(iVar15 + DAT_0008ab5c) == (code *)0x0) {
          return 0;
        }
        (*(code *)**(undefined4 **)(iVar15 + DAT_0008ab5c))(param_1,local_12e0,0x3eb);
        return 0;
      }
      uVar13 = 0x519;
      iVar2 = DAT_0008abec + 0x8a8ee /*"[%s:%u]MsgGetNetworkStatus fail(ret:%d)

"*/;
LAB_0008a8ec:
      DebugPrint(8,7,iVar2,iVar4,uVar13,param_3);
      return 400;
    }
    pcVar5 = strstr(param_3,(char *)(DAT_0008abf0 + 0x8a906 /*"cmd=set"*/));
    if (pcVar5 == (char *)0x0) goto LAB_0008afd6;
    iVar4 = MsgGetNetworkWIFIConfig(&local_11e0);
    if (iVar4 < 0) {
      uVar13 = 0x545;
      iVar2 = DAT_0008ac18 + 0x8a9e6 /*"http_cgi_bin"*/;
      iVar4 = DAT_0008ac1c + 0x8a9e8 /*"[%s:%u]get wifi config fail

"*/;
    }
    else {
      local_1420 = (char *)((uint)local_1420 & 0xffffff00);
      builtin_strncpy(acStack_1520,"wep",4);
      iVar4 = DAT_0008abf4 + 0x8a97e /*"http_get_proc"*/;
      local_14e0 = (char *)0x584548;
      local_1460[0] = local_1460[0] & 0xffffff00;
      DebugPrint(8,7,DAT_0008abf8 + 0x8a962 /*"[%s:%u]recv client set wifi req111111111111(http_url:%s)

"*/,iVar4,0x561,param_3);
      pcVar5 = strstr(param_3,(char *)(DAT_0008abfc + 0x8a978 /*"cmd=set&"*/));
      iVar2 = DAT_0008ac04;
      if (pcVar5 == (char *)0x0) {
        uVar13 = 0x568;
        iVar2 = DAT_0008ac14 + 0x8a9da /*"[%s:%u]invalid params(http_url:%s)

"*/;
        goto LAB_0008a8ec;
      }
      iVar20 = -1;
      iVar14 = -1;
      pcVar5 = strtok(pcVar5,(char *)(DAT_0008ac00 + 0x8a98c /*"&"*/));
      local_154c = -1;
      pcVar3 = (char *)(DAT_0008ac08 + 0x8a99a /*"enable="*/);
      pcVar22 = (char *)(DAT_0008ac0c + 0x8a9a2 /*"authentication="*/);
      while( true ) {
        iVar4 = DAT_0008b194;
        if (pcVar5 == (char *)0x0) break;
        pcVar23 = strstr(pcVar5,pcVar3);
        if (pcVar23 == (char *)0x0) {
          pcVar23 = strstr(pcVar5,(char *)(iVar2 + 0x8a994));
          if (pcVar23 == (char *)0x0) {
            pcVar23 = strstr(pcVar5,pcVar22);
            if (pcVar23 == (char *)0x0) {
              pcVar23 = strstr(pcVar5,(char *)(DAT_0008b1ec + 0x8af0a /*"keyindex="*/));
              if (pcVar23 == (char *)0x0) {
                pcVar5 = strstr(pcVar5,(char *)(DAT_0008b1f0 + 0x8af3c /*"key="*/));
                if (pcVar5 != (char *)0x0) {
                  strcpy((char *)&local_1420,pcVar5 + 4);
                }
              }
              else {
                iVar14 = atoi(pcVar23 + 9);
              }
            }
            else {
              local_154c = atoi(pcVar23 + 0xf);
            }
          }
          else {
            strcpy((char *)local_1460,pcVar23 + 5);
          }
        }
        else {
          iVar20 = atoi(pcVar23 + 7);
        }
        pcVar5 = strtok((char *)0x0,(char *)(DAT_0008ac10 + 0x8a9c4 /*"&"*/));
      }
      if ((local_154c != -1) && (iVar20 != -1)) {
        __src = &local_1420;
        if (((char)local_1420 != '\0') && (iVar14 != -1)) {
          __s2 = local_1460;
          if ((char)local_1460[0] != '\0') {
            pcVar5 = stpcpy((char *)local_12e0,(char *)__src);
            piVar11 = (int *)(iVar4 + 0x8ac46);
            iVar4 = DAT_0008b198 + 0x8ac72 /*"http_get_proc"*/;
            iVar2 = iVar14;
            puVar24 = __s2;
            DebugPrint(8,7,DAT_0008b19c + 0x8ac58 /*"[%s:%u]auth:%d, enable:%d, key:%s, ssidIdx:%d, ssid:%s

"*/,iVar4,0x597,local_154c,iVar20,__src,iVar14,__s2);
            if ((*piVar11 < iVar14) || (iVar14 < 1)) {
              DebugPrint(8,7,DAT_0008b1e8 + 0x8aef2 /*"[%s:%u]invalid ssid idx(%d, total:%d)

"*/,DAT_0008b1e4 + 0x8af14 /*"http_get_proc"*/,0x59c,iVar14,*piVar11,
                         __src,iVar2,puVar24);
              return 400;
            }
            iVar14 = iVar14 + -1;
            piVar21 = piVar11 + iVar14 * 0x36 + 1;
            iVar2 = strcmp((char *)piVar21,(char *)__s2);
            if (iVar2 != 0) {
              uVar13 = 0x5a4;
              iVar2 = DAT_0008b1dc + 0x8aebe /*"[%s:%u]ssid not match(ssid_ipc:%s, ssid_req:%s)

"*/;
              goto LAB_0008a058;
            }
            strcpy((char *)&local_1500,(char *)(piVar11 + iVar14 * 0x36 + 0x21));
            iVar4 = piVar11[iVar14 * 0x36 + 0x31];
            iVar2 = piVar11[iVar14 * 0x36 + 0x32];
            if (iVar2 == 1) {
              uVar18 = (int)pcVar5 - (int)local_12e0;
              if (((uVar18 & 0xfffffff7) == 5) || (uVar18 == 0x10)) {
                local_14e0 = *(char **)(DAT_0008b1e0 + 0x8aece /*"ASCII"*/);
                uStack_14dc = (char *)CONCAT22(uStack_14dc._2_2_,
                                               (short)*(undefined4 *)(DAT_0008b1e0 + 0x8aed2 /*"I"*/));
              }
LAB_0008ae68:
              local_14c0 = *(char **)(DAT_0008b1c8 + 0x8ae6e /*"TKIP"*/);
              pcStack_14bc = (char *)CONCAT31(pcStack_14bc._1_3_,
                                              (char)*(undefined4 *)(DAT_0008b1c8 + 0x8ae72));
            }
            else {
              builtin_strncpy(acStack_1520,"wpa",4);
              local_14c0 = *(char **)(DAT_0008b1a0 + 0x8acd4 /*"TKIP"*/);
              pcStack_14bc = (char *)CONCAT31(pcStack_14bc._1_3_,
                                              (char)*(undefined4 *)(DAT_0008b1a0 + 0x8acd8));
              if (iVar2 == 2) goto LAB_0008ae68;
              if (iVar2 == 3) {
                local_14c0 = (char *)0x534541;
              }
            }
            local_1550 = &local_14c0;
            local_14a0 = *(undefined4 *)(DAT_0008b1a4 + 0x8ad12 /*"WPAPSK"*/);
            local_149c = CONCAT22(CONCAT11(local_149c._3_1_,
                                           (char)((uint)*(undefined4 *)(DAT_0008b1a4 + 0x8ad16 /*"SK"*/) >>
                                                 0x10)),
                                  (short)*(undefined4 *)(DAT_0008b1a4 + 0x8ad16 /*"SK"*/));
            if (iVar4 == 2) {
              local_149c._0_3_ = (undefined3)*(undefined4 *)(DAT_0008b1a4 + 0x8ad16 /*"SK"*/);
            }
            else if (iVar4 == 3) {
              local_14a0 = *(undefined4 *)(DAT_0008b1a8 + 0x8ad38 /*"WPA2PSK"*/);
              local_149c = *(undefined4 *)(DAT_0008b1a8 + 0x8ad3c /*"PSK"*/);
            }
            local_11e0 = (void *)0x1;
            local_11d0 = 1;
            strncpy(acStack_110c,(char *)(DAT_0008b1ac + 0x8ad4e /*"managed"*/),0x1f);
            strncpy(acStack_10a2,(char *)__s2,0x40);
            local_1020 = 1;
            local_1062 = *(undefined2 *)(DAT_0008b1b4 + 0x8ad78 /*"CN"*/);
            local_1060 = *(undefined1 *)(DAT_0008b1b4 + 0x8ad7a);
            local_10ac = (undefined2)*(undefined4 *)(DAT_0008b1b0 + 0x8ad72 /*"33"*/);
            local_10aa = (undefined1)((uint)*(undefined4 *)(DAT_0008b1b0 + 0x8ad72 /*"33"*/) >> 0x10);
            strncpy(acStack_10ec,(char *)&local_1500,0x3f);
            local_1008 = (uint)(iVar4 != 0);
            strcpy(acStack_1004,acStack_1520);
            local_fc4 = *(undefined4 *)(DAT_0008b1b8 + 0x8adc2 /*"SHARED"*/);
            local_fc0 = (undefined2)*(undefined4 *)(DAT_0008b1b8 + 0x8adc6 /*"ED"*/);
            local_f84 = *(undefined4 *)(DAT_0008b1bc + 0x8adc4 /*"WEP64"*/);
            local_fbe = (undefined1)((uint)*(undefined4 *)(DAT_0008b1b8 + 0x8adc6 /*"ED"*/) >> 0x10);
            local_f80 = (undefined2)*(undefined4 *)(DAT_0008b1bc + 0x8adc8 /*"4"*/);
            local_ec4 = 1;
            strncpy(acStack_f44,(char *)&local_14e0,0x3f);
            strncpy(acStack_f04,(char *)local_12e0,0x3f);
            strncpy(acStack_ec0,(char *)local_1550,0x3f);
            strncpy(acStack_e80,(char *)&local_14a0,0x3f);
            strncpy(acStack_e40,(char *)local_12e0,0x3f);
            iVar4 = MsgSetNetworkWIFIConfig(&local_11e0);
            if (iVar4 == 0) {
              DebugPrint(8,7,DAT_0008b1d0 + 0x8ae8e /*"[%s:%u]set wifi config success

"*/,DAT_0008b1cc + 0x8aeb0 /*"http_get_proc"*/,0x5ef);
              if ((code *)**(undefined4 **)(iVar15 + DAT_0008b1d4) != (code *)0x0) {
                (*(code *)**(undefined4 **)(iVar15 + DAT_0008b1d4))
                          (param_1,DAT_0008b1d8 + 0x8aeaa,0x3eb);
              }
LAB_0008a534:
              signal(0xe,*(__sighandler_t *)(iVar15 + DAT_0008ab64));
              alarm(2);
              return 0;
            }
            uVar13 = 0x5eb;
            iVar2 = DAT_0008b1c0 + 0x8ae3c /*"http_cgi_bin"*/;
            iVar4 = DAT_0008b1c4 + 0x8ae3e /*"[%s:%u]set wifi config fail

"*/;
            goto LAB_0008a4ae;
          }
        }
      }
      uVar13 = 0x591;
      iVar2 = DAT_0008ac20 + 0x8aa4a /*"http_cgi_bin"*/;
      iVar4 = DAT_0008ac24 + 0x8aa4c /*"[%s:%u]invalid params

"*/;
    }
    uVar9 = 400;
    DebugPrint(8,7,iVar4,iVar2 + 0x28,uVar13);
  }
  else {
    iVar4 = MsgGetNetworkWIFIConfig(&local_11e0);
    if (iVar4 < 0) {
      uVar13 = 0x41d;
      iVar2 = DAT_0008b200 + 0x8afb8 /*"http_cgi_bin"*/;
      iVar4 = DAT_0008b204 + 0x8afba /*"[%s:%u]set wifi config fail

"*/;
    }
    else {
      local_12e0[0].st_dev._0_4_ = pcVar5;
      memset((undefined4 *)((int)&local_12e0[0].st_dev + 4),0,0xfc);
      local_1460[0] = 0;
      memset(local_1460 + 1,0,0x3c);
      pcStack_1540 = pcVar5;
      pcStack_153c = pcVar5;
      local_1538 = pcVar5;
      local_1534 = pcVar5;
      pcStack_1530 = pcVar5;
      local_152c = pcVar5;
      pcStack_1528 = pcVar5;
      local_1524 = pcVar5;
      local_1420 = pcVar5;
      memset(&pcStack_141c,0,0x3c);
      acStack_1520[0] = '\0';
      acStack_1520[1] = '\0';
      acStack_1520[2] = '\0';
      acStack_1520[3] = '\0';
      acStack_1520[4] = '\0';
      acStack_1520[5] = '\0';
      acStack_1520[6] = '\0';
      acStack_1520[7] = '\0';
      acStack_1520[8] = '\0';
      acStack_1520[9] = '\0';
      acStack_1520[10] = '\0';
      acStack_1520[0xb] = '\0';
      acStack_1520[0xc] = '\0';
      acStack_1520[0xd] = '\0';
      acStack_1520[0xe] = '\0';
      acStack_1520[0xf] = '\0';
      acStack_1520[0x10] = '\0';
      acStack_1520[0x11] = '\0';
      acStack_1520[0x12] = '\0';
      acStack_1520[0x13] = '\0';
      acStack_1520[0x14] = '\0';
      acStack_1520[0x15] = '\0';
      acStack_1520[0x16] = '\0';
      acStack_1520[0x17] = '\0';
      acStack_1520[0x18] = '\0';
      acStack_1520[0x19] = '\0';
      acStack_1520[0x1a] = '\0';
      acStack_1520[0x1b] = '\0';
      acStack_1520[0x1c] = '\0';
      acStack_1520[0x1d] = '\0';
      acStack_1520[0x1e] = '\0';
      acStack_1520[0x1f] = '\0';
      pcVar5 = strstr(param_3,pcVar22);
      pcVar3 = (char *)(DAT_0008ab0c + 0x8a1d8 /*"SSID="*/);
      pcVar23 = (char *)(DAT_0008ab10 + 0x8a1de /*"SecurityMode="*/);
      pcVar22 = (char *)(DAT_0008ab14 + 0x8a1e4 /*"passwd="*/);
      strcpy((char *)local_12e0,pcVar5 + 0xd);
      pcVar5 = strtok((char *)local_12e0,(char *)(DAT_0008ab18 + 0x8a1fa /*"&"*/));
      while (pcVar5 != (char *)0x0) {
        pcVar8 = strstr(pcVar5,pcVar3);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = strstr(pcVar5,pcVar23);
          if (pcVar8 == (char *)0x0) {
            pcVar8 = strstr(pcVar5,pcVar22);
            if (pcVar8 == (char *)0x0) {
              pcVar8 = strstr(pcVar5,(char *)(DAT_0008b208 + 0x8afc6 /*"WirelessMode="*/));
              if (pcVar8 != (char *)0x0) {
                strcpy(acStack_1520,pcVar5 + 0xd);
              }
            }
            else {
              strcpy((char *)&local_1420,pcVar5 + 7);
            }
          }
          else {
            strcpy((char *)&pcStack_1540,pcVar5 + 0xd);
          }
        }
        else {
          strcpy((char *)local_1460,pcVar5 + 5);
        }
        pcVar5 = strtok((char *)0x0,(char *)(DAT_0008ab1c + 0x8a228 /*"&"*/));
      }
      local_1498 = 0;
      local_149c = 0;
      local_1494 = 0;
      uStack_1490 = 0;
      local_148c = 0;
      uStack_1488 = 0;
      local_1484 = 0;
      local_1500 = pcVar5;
      pcStack_14fc = pcVar5;
      local_14f8 = pcVar5;
      local_14f4 = pcVar5;
      pcStack_14f0 = pcVar5;
      local_14ec = pcVar5;
      pcStack_14e8 = pcVar5;
      local_14e4 = pcVar5;
      local_14e0 = pcVar5;
      uStack_14dc = pcVar5;
      local_14d8 = pcVar5;
      local_14d4 = pcVar5;
      pcStack_14d0 = pcVar5;
      local_14cc = pcVar5;
      pcStack_14c8 = pcVar5;
      local_14c4 = pcVar5;
      local_14c0 = pcVar5;
      pcStack_14bc = pcVar5;
      local_14b8 = pcVar5;
      local_14b4 = pcVar5;
      pcStack_14b0 = pcVar5;
      local_14ac = pcVar5;
      local_14a8 = pcVar5;
      local_14a4 = pcVar5;
      uVar18 = atoi((char *)&pcStack_1540);
      uVar10 = uVar18 - 3;
      if (uVar18 == 0) {
        local_1500 = *(char **)(DAT_0008b1f4 + 0x8af6a /*"TKIP"*/);
        pcStack_14fc = (char *)CONCAT31(pcStack_14fc._1_3_,
                                        (char)*(undefined4 *)(DAT_0008b1f4 + 0x8af6e));
        local_14e0 = *(char **)(DAT_0008b1f8 + 0x8af6c /*"WPA2PSK"*/);
        uStack_14dc = *(char **)(DAT_0008b1f8 + 0x8af70 /*"PSK"*/);
        local_1008 = 0;
LAB_0008a384:
        local_14c0 = (char *)0x584548;
        local_14a0 = 0x617077;
        if (uVar18 == 2) {
LAB_0008a54c:
          local_14a0 = 0x706577;
        }
        else {
          if (uVar10 < 4) goto LAB_0008a4f0;
          if (uVar18 == 0) {
            local_14a0 = *(undefined4 *)(DAT_0008ab30 + 0x8a3ac /*"NONE"*/);
            local_149c = CONCAT31(local_149c._1_3_,(char)*(undefined4 *)(DAT_0008ab30 + 0x8a3b0));
          }
        }
      }
      else {
        local_1500 = *(char **)(DAT_0008ab28 + 0x8a32a /*"TKIP"*/);
        pcStack_14fc = (char *)CONCAT31(pcStack_14fc._1_3_,
                                        (char)*(undefined4 *)(DAT_0008ab28 + 0x8a32e));
        if ((uVar10 & 0xfffffffd) == 0) {
          pcStack_14fc = (char *)CONCAT31(pcStack_14fc._1_3_,
                                          (char)*(undefined4 *)(DAT_0008ab28 + 0x8a32e));
        }
        else if ((uVar18 & 0xfffffffd) == 4) {
          local_1500 = (char *)0x534541;
        }
        local_14e0 = *(char **)(DAT_0008ab2c + 0x8a35e /*"WPA2PSK"*/);
        uStack_14dc = *(char **)(DAT_0008ab2c + 0x8a362 /*"PSK"*/);
        if (uVar10 < 2) {
          local_1008 = 1;
          local_14e0 = *(char **)(DAT_0008ab50 + 0x8a4d8 /*"WPAPSK"*/);
          uStack_14dc._2_2_ = (undefined2)((uint)uStack_14dc >> 0x10);
          uStack_14dc = (char *)CONCAT22(uStack_14dc._2_2_,
                                         (short)*(undefined4 *)(DAT_0008ab50 + 0x8a4dc /*"SK"*/));
        }
        else {
          if (1 < uVar18 - 5) {
            local_14c0 = (char *)0x584548;
            if (uVar18 != 1) {
              local_1008 = 1;
              goto LAB_0008a384;
            }
            sVar6 = strlen((char *)&local_1420);
            local_1008 = 1;
            if (((sVar6 & 0xfffffff7) == 5) || (sVar6 == 0x10)) {
              local_14c0 = *(char **)(DAT_0008b1fc + 0x8af9e /*"ASCII"*/);
              pcStack_14bc = (char *)CONCAT22(pcStack_14bc._2_2_,
                                              (short)*(undefined4 *)(DAT_0008b1fc + 0x8afa2 /*"I"*/));
            }
            goto LAB_0008a54c;
          }
          local_14e0 = *(char **)(DAT_0008ab2c + 0x8a35e /*"WPA2PSK"*/);
          uStack_14dc = *(char **)(DAT_0008ab2c + 0x8a362 /*"PSK"*/);
          local_14c0 = (char *)0x584548;
          local_14a0 = 0x617077;
          if (3 < uVar10) {
            local_1008 = 1;
            goto LAB_0008a3b8;
          }
          local_1008 = 1;
        }
LAB_0008a4f0:
        local_14c0 = (char *)0x584548;
        local_14a0 = 0x617077;
      }
LAB_0008a3b8:
      local_11e0 = (void *)0x1;
      local_11d0 = 1;
      strncpy(acStack_110c,(char *)(DAT_0008ab34 + 0x8a3c8 /*"managed"*/),0x1f);
      strncpy(acStack_10a2,(char *)local_1460,0x40);
      local_1020 = 1;
      local_1062 = *(undefined2 *)(DAT_0008ab3c + 0x8a3f2 /*"CN"*/);
      local_1060 = *(undefined1 *)(DAT_0008ab3c + 0x8a3f4);
      local_10ac = (undefined2)*(undefined4 *)(DAT_0008ab38 + 0x8a3ec /*"33"*/);
      local_10aa = (undefined1)((uint)*(undefined4 *)(DAT_0008ab38 + 0x8a3ec /*"33"*/) >> 0x10);
      strncpy(acStack_10ec,acStack_1520,0x3f);
      strcpy(acStack_1004,(char *)&local_14a0);
      local_fc4 = *(undefined4 *)(DAT_0008ab40 + 0x8a432 /*"SHARED"*/);
      local_fc0 = (undefined2)*(undefined4 *)(DAT_0008ab40 + 0x8a436 /*"ED"*/);
      local_f84 = *(undefined4 *)(DAT_0008ab44 + 0x8a434 /*"WEP64"*/);
      local_fbe = (undefined1)((uint)*(undefined4 *)(DAT_0008ab40 + 0x8a436 /*"ED"*/) >> 0x10);
      local_f80 = (undefined2)*(undefined4 *)(DAT_0008ab44 + 0x8a438 /*"4"*/);
      local_ec4 = 1;
      strncpy(acStack_f44,(char *)&local_14c0,0x3f);
      strncpy(acStack_f04,(char *)&local_1420,0x40);
      strncpy(acStack_ec0,(char *)&local_1500,0x3f);
      strncpy(acStack_e80,(char *)&local_14e0,0x3f);
      strncpy(acStack_e40,(char *)&local_1420,0x40);
      iVar4 = MsgSetNetworkWIFIConfig(&local_11e0);
      if (iVar4 == 0) {
        DebugPrint(8,7,DAT_0008ab58 + 0x8a518 /*"[%s:%u]set wifi config success

"*/,DAT_0008ab54 + 0x8a53a /*"http_get_proc"*/,0x49e);
        if ((code *)**(undefined4 **)(iVar15 + DAT_0008ab5c) != (code *)0x0) {
          (*(code *)**(undefined4 **)(iVar15 + DAT_0008ab5c))(param_1,DAT_0008ab60 + 0x8a534,0x3eb);
        }
        goto LAB_0008a534;
      }
      uVar13 = 0x49a;
      iVar2 = DAT_0008ab48 + 0x8a4ae /*"http_cgi_bin"*/;
      iVar4 = DAT_0008ab4c + 0x8a4b0 /*"[%s:%u]set wifi config fail

"*/;
    }
LAB_0008a4ae:
    uVar9 = 500;
    DebugPrint(8,7,iVar4,iVar2 + 0x28,uVar13);
  }
  return uVar9;
}


