/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0007d538 */
/* function FUN_0007d538 @ 0007d538 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0007d538(undefined4 param_1,char *param_2,char *param_3,char *param_4,int param_5,
                 char *param_6,size_t param_7,uint *param_8)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  FILE *pFVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  code *pcVar14;
  uint uVar15;
  byte *pbVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  char *__ptr;
  char cVar21;
  uint uVar22;
  char *pcVar23;
  bool bVar24;
  bool bVar25;
  uint local_860;
  uint local_85c;
  uint local_858;
  uint local_854;
  uint local_850;
  char *local_848;
  uint local_83c;
  undefined4 local_828;
  undefined1 auStack_824 [60];
  undefined4 local_7e8;
  char acStack_7e4 [60];
  undefined4 local_7a8;
  char acStack_7a4 [29];
  undefined1 local_787;
  uint local_768;
  undefined1 auStack_764 [29];
  undefined1 local_747;
  uint local_728;
  undefined1 auStack_724 [252];
  char local_628 [512];
  char local_428 [512];
  char local_228 [516];
  
  iVar2 = strcmp(param_2,(char *)(DAT_0007e1f0 + 0x7d54e));
  iVar11 = DAT_0007e1f4 + 0x7d55e;
  if (iVar2 == 0) {
    cVar21 = '\x01';
    local_848 = (char *)(DAT_0007e22c + 0x7d7d2);
    local_858 = 1;
    uVar12 = 0;
    local_860 = 0;
    local_85c = 0;
    local_850 = 0;
LAB_0007d7da:
    iVar2 = *(int *)(param_3 + 4);
    bVar24 = iVar2 == 0;
    bVar25 = bVar24;
  }
  else {
    iVar2 = strcmp(param_2,(char *)(DAT_0007e1f8 + 0x7d56e));
    if (iVar2 != 0) {
      iVar2 = strcmp(param_2,(char *)(DAT_0007e298 + 0x7dd34));
      if (iVar2 == 0) {
        cVar21 = '\x03';
        local_848 = (char *)(DAT_0007e2b8 + 0x7de8c);
        uVar12 = 0;
        local_860 = 0;
        local_85c = 0;
        local_858 = 0;
        local_850 = 0;
      }
      else {
        iVar2 = strcmp(param_2,(char *)(DAT_0007e29c + 0x7dd48));
        if (iVar2 == 0) {
          local_85c = 1;
          cVar21 = '\x04';
          local_848 = *(char **)(iVar11 + DAT_0007e2c4);
          uVar12 = 0;
          local_860 = 0;
          local_858 = 0;
          local_850 = 0;
        }
        else {
          iVar2 = strcmp(param_2,(char *)(DAT_0007e2a0 + 0x7dd5c));
          if (iVar2 == 0) {
            cVar21 = '\a';
            uVar12 = 1;
            local_848 = (char *)(DAT_0007e2d8 + 0x7e082);
            local_860 = 0;
            local_85c = 0;
            local_858 = 0;
            local_850 = 0;
          }
          else {
            pcVar17 = strstr(param_2,(char *)(DAT_0007e2a4 + 0x7dd70));
            if (pcVar17 == (char *)0x0) {
              iVar2 = strcmp(param_2,(char *)(DAT_0007e5b4 + 0x7e494));
              if (iVar2 == 0) {
                local_850 = 1;
                cVar21 = '\x05';
                local_848 = *(char **)(iVar11 + DAT_0007e5b8);
                uVar12 = 0;
                local_860 = 0;
                local_85c = 0;
                local_858 = 0;
              }
              else {
                uVar12 = 0;
                cVar21 = '\0';
                local_860 = 0;
                local_85c = 0;
                local_858 = 0;
                local_850 = 0;
                local_848 = (char *)0x0;
              }
            }
            else {
              uVar12 = 0;
              local_848 = (char *)FUN_0008de24(param_2);
              local_850 = 0;
              cVar21 = '\r';
              DebugPrint(1,7,DAT_0007e2ac + 0x7dd9a,DAT_0007e2a8 + 0x7ddb8,0x1fd,local_848);
              local_85c = 0;
              local_858 = 0;
              local_860 = 1;
            }
          }
        }
      }
      goto LAB_0007d7da;
    }
    cVar21 = '\x02';
    local_848 = (char *)(DAT_0007e1fc + 0x7d586);
    iVar2 = *(int *)(param_3 + 4);
    bVar24 = iVar2 == 0;
    uVar12 = 0;
    local_860 = 0;
    local_85c = 0;
    local_858 = 0;
    local_850 = 0;
    bVar25 = false;
  }
  if (bVar24) {
    uVar19 = 0;
    uVar6 = *param_8;
    if ((int)uVar6 < 1) {
      return 0xffffffff;
    }
    pcVar17 = strstr(param_6,param_2);
    if (pcVar17 == (char *)0x0) {
      return 0xffffffff;
    }
    DebugPrint(1,7,DAT_0007e234 + 0x7d824,DAT_0007e230 + 0x7d840,0x236,uVar6,param_5);
    pcVar17 = strstr(param_6,(char *)(DAT_0007e238 + 0x7d834));
    if (pcVar17 == (char *)0x0) {
      return 0xffffffff;
    }
    pbVar16 = (byte *)(pcVar17 + 0xc);
    uVar6 = *param_8 - ((int)pbVar16 - (int)param_6);
    local_728 = uVar19;
    memset(auStack_724,0,0xfc);
    if ((int)uVar6 < 1) {
      return 0xffffffff;
    }
    pcVar4 = (char *)(DAT_0007e23c + 0x7d87c);
    pcVar17 = (char *)(DAT_0007e240 + 0x7d882);
    uVar9 = uVar19;
    uVar18 = uVar19;
    uVar22 = uVar19;
    local_854 = uVar19;
    local_83c = uVar19;
    do {
      bVar1 = *pbVar16;
      uVar15 = (uint)bVar1;
      if ((uVar15 < 0xe) && ((int)((0x2401U >> uVar15) << 0x1f) < 0)) break;
      if (uVar18 == 0) {
        iVar2 = strncmp((char *)pbVar16,pcVar17,0x13);
        if (iVar2 != 0) goto LAB_0007deda;
        pbVar16 = pbVar16 + 0x12;
        uVar18 = 1;
      }
      else {
        if (uVar9 == 0) {
          iVar2 = strncmp((char *)pbVar16,pcVar4,8);
          if (iVar2 == 0) {
            pbVar16 = pbVar16 + 7;
            uVar9 = uVar18;
            goto LAB_0007d8be;
          }
        }
        else {
LAB_0007deda:
          if (!(uVar15 != 0x3d || uVar9 != 1)) {
            local_854 = 1;
            uVar9 = 1;
            goto LAB_0007d8be;
          }
        }
        if ((local_854 != 0) && (uVar15 != 0x20 && (int)local_83c < 0x100)) {
          *(byte *)((int)&local_728 + local_83c) = bVar1;
          local_83c = local_83c + 1;
        }
      }
LAB_0007d8be:
      uVar22 = uVar22 + 1;
      pbVar16 = pbVar16 + 1;
    } while (uVar6 != uVar22);
    if (local_83c == 0) {
      return 0xffffffff;
    }
    pcVar4 = param_3 + 0x14;
    DebugPrint(1,7,DAT_0007e248 + 0x7d8fa,DAT_0007e244 + 0x7d918,0x255,&local_728,local_83c);
    iVar2 = 0;
    strcpy(pcVar4,(char *)&local_728);
    pcVar17 = (char *)(DAT_0007e24c + 0x7d91a);
    *(int *)(param_3 + 4) = param_5;
    *param_3 = cVar21;
    param_3[0x10] = '\0';
    param_3[0x11] = '\0';
    param_3[0x12] = '\0';
    param_3[0x13] = '\0';
    pcVar17 = strstr(param_6,pcVar17);
    if ((pcVar17 != (char *)0x0) && (0 < (int)(*param_8 - (int)(pcVar17 + (0xe - (int)param_6))))) {
      pbVar16 = (byte *)(pcVar17 + 0xd);
      pbVar10 = pbVar16 + (*param_8 - (int)(pcVar17 + (0xe - (int)param_6)));
      do {
        pbVar16 = pbVar16 + 1;
        uVar6 = (uint)*pbVar16;
        if (uVar6 < 0xe) {
          if ((int)((0x2401U >> uVar6) << 0x1f) < 0) break;
        }
        else if (uVar6 - 0x30 < 10) {
          iVar2 = iVar2 + 1;
        }
      } while (pbVar10 != pbVar16);
      if (iVar2 != 0) {
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
      }
    }
    local_628[0] = '\0';
    local_628[1] = '\0';
    local_628[2] = '\0';
    local_628[3] = '\0';
    memset(local_628 + 4,0,0x1fc);
    local_428[0] = '\0';
    local_428[1] = '\0';
    local_428[2] = '\0';
    local_428[3] = '\0';
    memset(local_428 + 4,0,0x1fc);
    local_228[0] = '\0';
    local_228[1] = '\0';
    local_228[2] = '\0';
    local_228[3] = '\0';
    memset(local_228 + 4,0,0x1fc);
    sprintf(local_628,(char *)(DAT_0007e250 + 0x7d9bc),pcVar4);
    sprintf(local_428,(char *)(DAT_0007e254 + 0x7d9ca),pcVar4);
    sprintf(local_228,(char *)(DAT_0007e258 + 0x7d9d8),pcVar4);
    pcVar17 = strstr(param_6,local_628);
    if (pcVar17 == (char *)0x0) goto LAB_0007ddc2;
    local_828 = 0;
    memset(auStack_824,0,0x3c);
    local_7e8 = 0;
    memset(acStack_7e4,0,0x3c);
    local_854 = local_858 | local_85c | local_850;
    uVar12 = uVar12 | local_860 | local_854;
    if (uVar12 == 0) {
      FUN_0007cb80(param_6,*param_8,&local_828,&local_7e8,param_3 + 0x114,0x40,0x40,0x40);
      if ((((char)local_828 == '\0') || ((char)local_7e8 == '\0')) || (param_3[0x114] == '\0'))
      goto LAB_0007df24;
      DebugPrint(1,7,DAT_0007e594 + 0x7e38e,DAT_0007e590 + 0x7e3a8,0x288,&local_828,&local_7e8,
                 param_3 + 0x114);
      local_7a8 = 0;
      memset(acStack_7a4,0,0x3c);
      local_768 = uVar12;
      memset(auStack_764,0,0x3c);
      iVar2 = MsgUserGetPassword(&local_828,&local_7a8);
      if (iVar2 != 0) {
        param_3[4] = '\0';
        param_3[5] = '\0';
        param_3[6] = '\0';
        param_3[7] = '\0';
        *param_3 = '\0';
        memset(pcVar4,0,0x100);
        return 0xffffffff;
      }
      local_787 = 0;
      sVar3 = strlen((char *)&local_7a8);
      our_md5_encode(&local_768,&local_7a8,sVar3);
      iVar2 = strcasecmp((char *)&local_768,(char *)&local_7e8);
      if (iVar2 != 0) {
        param_3[4] = '\0';
        param_3[5] = '\0';
        param_3[6] = '\0';
        param_3[7] = '\0';
        *param_3 = '\0';
        memset(pcVar4,0,0x100);
        return 0xffffffff;
      }
      pcVar20 = strstr(pcVar17,(char *)(DAT_0007e598 + 0x7e3f6));
    }
    else {
      pcVar20 = strstr(pcVar17,(char *)(DAT_0007e25c + 0x7da36));
      if (local_860 != 0) {
        FUN_0008debc();
      }
    }
    if (pcVar20 == (char *)0x0) goto LAB_0007ddc2;
    pcVar20 = strstr(pcVar20,(char *)(DAT_0007e260 + 0x7da52));
    if (pcVar20 == (char *)0x0) goto LAB_0007ddc2;
    __ptr = pcVar20 + 4;
    pcVar23 = *(char **)(param_3 + 8);
    DebugPrint(1,7,DAT_0007e268 + 0x7da80,DAT_0007e264 + 0x7da9c,699,pcVar23);
    uVar12 = *param_8 - ((int)__ptr - (int)param_6);
    local_854 = local_854 | local_860;
    if (local_854 != 0) {
      sVar3 = strlen(local_228);
      if (sVar3 < uVar12) {
        iVar2 = strncmp(__ptr + (uVar12 - sVar3),local_228,sVar3);
        if (iVar2 != 0) goto LAB_0007dac0;
        param_3[4] = '\0';
        param_3[5] = '\0';
        param_3[6] = '\0';
        param_3[7] = '\0';
        *param_3 = '\0';
        memset(pcVar4,0,0x100);
        strcpy(param_4,param_3 + 0x114);
        uVar12 = uVar12 - sVar3;
      }
      else {
LAB_0007dac0:
        local_854 = 0;
      }
      if (local_85c == 0) {
LAB_0007dacc:
        if ((local_860 != 0) && (iVar2 = FUN_0008dfd8(param_1,param_3,uVar12), iVar2 != 0)) {
          DebugPrint(1,7,DAT_0007e5d8 + 0x7e564,DAT_0007e5d4 + 0x7e584,0x2f5,pcVar23);
          return 0xffffffff;
        }
        if ((local_850 == 0) || (iVar2 = FUN_0007d25c(pcVar17,uVar12), iVar2 == 0))
        goto LAB_0007daf2;
        uVar8 = 0x2fd;
        iVar11 = DAT_0007e5bc + 0x7e4c0;
        iVar2 = DAT_0007e5c0 + 0x7e4c2;
      }
      else {
        iVar2 = FUN_0007cd78(pcVar17,uVar12);
        if (iVar2 == 0) {
          pcVar23 = local_848;
          DebugPrint(1,7,DAT_0007e5a8 + 0x7e45e,DAT_0007e5a4 + 0x7e47c,0x2ee,local_848);
          goto LAB_0007dacc;
        }
        uVar8 = 0x2e8;
        iVar11 = DAT_0007e5cc + 0x7e50c;
        iVar2 = DAT_0007e5d0 + 0x7e50e;
      }
      DebugPrint(1,7,iVar2,iVar11 + 0x24,uVar8);
LAB_0007df24:
      param_3[4] = '\0';
      param_3[5] = '\0';
      param_3[6] = '\0';
      param_3[7] = '\0';
      *param_3 = '\0';
      memset(param_3 + 0x14,0,0x100);
      return 0xffffffff;
    }
    sVar3 = strlen(local_428);
    if ((sVar3 < uVar12) && (uVar12 - sVar3 != 0)) {
      pcVar17 = __ptr;
      do {
        iVar13 = memcmp(pcVar17,local_428,sVar3);
        iVar2 = DAT_0007e2e8;
        if (iVar13 == 0) {
          uVar12 = (int)pcVar17 - (int)__ptr;
          *(uint *)(param_3 + 8) = uVar12;
          DebugPrint(1,7,DAT_0007e2ec + 0x7e172,iVar2 + 0x7e188,0x2d8,uVar12);
          param_3[4] = '\0';
          param_3[5] = '\0';
          param_3[6] = '\0';
          param_3[7] = '\0';
          *param_3 = '\0';
          memset(pcVar4,0,0x100);
          local_854 = 1;
          strcpy(param_4,param_3 + 0x114);
          break;
        }
        pcVar17 = pcVar17 + 1;
      } while (pcVar17 != pcVar20 + (uVar12 - sVar3) + 4);
    }
LAB_0007daf2:
    if ((**(int **)(iVar11 + DAT_0007e214) - 0x405U < 2) && (0x500000 < *(int *)(param_3 + 8))) {
      DebugPrint(1,7,DAT_0007e5c8 + 0x7e4e8,DAT_0007e5c4 + 0x7e500,0x309,*(int *)(param_3 + 8));
    }
    else {
      pFVar5 = fopen64(local_848,(char *)(DAT_0007e26c + 0x7db1a));
      sVar3 = fwrite(__ptr,1,uVar12,pFVar5);
      if (uVar12 != sVar3) {
        piVar7 = __errno_location();
        pcVar17 = strerror(*piVar7);
        DebugPrint(1,7,DAT_0007e274 + 0x7db52,DAT_0007e270 + 0x7db70,0x315,sVar3,pcVar17);
      }
      fclose(pFVar5);
    }
    iVar2 = *(int *)(param_3 + 0xc);
    iVar13 = DAT_0007e278 + 0x7db96;
    param_3[0x10] = '\x01';
    param_3[0x11] = '\0';
    param_3[0x12] = '\0';
    param_3[0x13] = '\0';
    *(uint *)(param_3 + 0xc) = iVar2 + uVar12;
    DebugPrint(1,7,DAT_0007e27c + 0x7db88,iVar13,0x31d,*(undefined4 *)(param_3 + 8),iVar2 + uVar12);
    if (local_854 != 0) {
      if ((code *)**(undefined4 **)(iVar11 + DAT_0007e224) != (code *)0x0) {
        if (local_860 == 0) {
          (*(code *)**(undefined4 **)(iVar11 + DAT_0007e224))(param_1,DAT_0007e280 + 0x7dbb4,200);
        }
        else {
          FUN_0008df8c(param_1);
        }
      }
      uVar19 = local_858;
      if (local_858 == 0) {
        memset(param_3,0,0x154);
        uVar19 = local_854;
      }
    }
    goto LAB_0007ddc2;
  }
  if (iVar2 != param_5 || (bVar25 || iVar2 < 0)) {
    return 0xffffffff;
  }
  if (*param_3 == '\0' || *param_3 != cVar21) {
    return 0xffffffff;
  }
  local_7e8 = 0;
  memset(acStack_7e4,0,0x3c);
  local_7a8 = 0;
  memset(acStack_7a4,0,0x3c);
  local_628[0] = '\0';
  local_628[1] = '\0';
  local_628[2] = '\0';
  local_628[3] = '\0';
  memset(local_628 + 4,0,0x1fc);
  local_428[0] = '\0';
  local_428[1] = '\0';
  local_428[2] = '\0';
  local_428[3] = '\0';
  memset(local_428 + 4,0,0x1fc);
  pcVar17 = param_3 + 0x14;
  local_228[0] = '\0';
  local_228[1] = '\0';
  local_228[2] = '\0';
  local_228[3] = '\0';
  memset(local_228 + 4,0,0x1fc);
  sprintf(local_628,(char *)(DAT_0007e200 + 0x7d640),pcVar17);
  sprintf(local_428,(char *)(DAT_0007e204 + 0x7d652),pcVar17);
  sprintf(local_228,(char *)(DAT_0007e208 + 0x7d660),pcVar17);
  sVar3 = strlen(local_628);
  iVar2 = strncmp(param_6,local_628,sVar3);
  uVar12 = local_860 | uVar12 | local_858 | local_85c | local_850;
  local_854 = uVar12;
  if (iVar2 == 0) {
    if (uVar12 == 0) {
      FUN_0007cb80(param_6,*param_8,&local_7e8,&local_7a8,param_3 + 0x114,0x40,0x40,0x40);
      if ((((char)local_7e8 == '\0') || ((char)local_7a8 == '\0')) || (param_3[0x114] == '\0'))
      goto LAB_0007df24;
      DebugPrint(1,7,DAT_0007e2e0 + 0x7e09e,DAT_0007e2dc + 0x7e0ba,0x34e,&local_7e8,&local_7a8,
                 param_3 + 0x114);
      local_768 = uVar12;
      memset(auStack_764,0,0x3c);
      local_728 = uVar12;
      memset(auStack_724,0,0x3c);
      iVar2 = MsgUserGetPassword(&local_7e8,&local_768);
      local_747 = 0;
      if (iVar2 != 0) {
        param_3[4] = '\0';
        param_3[5] = '\0';
        param_3[6] = '\0';
        param_3[7] = '\0';
        *param_3 = '\0';
        memset(pcVar17,0,0x100);
        return 0xffffffff;
      }
      sVar3 = strlen((char *)&local_768);
      our_md5_encode(&local_728,&local_768,sVar3);
      iVar2 = strcasecmp((char *)&local_728,(char *)&local_7a8);
      if (iVar2 != 0) goto LAB_0007df24;
      pcVar4 = strstr(param_6,(char *)(DAT_0007e2e4 + 0x7e10e));
    }
    else {
      pcVar4 = strstr(param_6,(char *)(DAT_0007e20c + 0x7d6a0));
      if (local_860 != 0) {
        FUN_0008debc();
      }
    }
    if ((pcVar4 == (char *)0x0) ||
       (pcVar4 = strstr(pcVar4,(char *)(DAT_0007e210 + 0x7d6be)), pcVar4 == (char *)0x0)) {
LAB_0007ddbe:
      uVar19 = 0;
      goto LAB_0007ddc2;
    }
    pcVar20 = pcVar4 + 4;
    uVar19 = *param_8 - ((int)pcVar20 - (int)param_6);
    if (uVar12 != 0) {
      sVar3 = strlen(local_228);
      local_854 = 0;
      if (sVar3 < uVar19) {
        iVar2 = strncmp(pcVar20 + (uVar19 - sVar3),local_228,sVar3);
        if (iVar2 == 0) {
          param_3[4] = '\0';
          param_3[5] = '\0';
          param_3[6] = '\0';
          param_3[7] = '\0';
          *param_3 = '\0';
          memset(pcVar17,0,0x100);
          strcpy(param_4,param_3 + 0x114);
          uVar19 = uVar19 - sVar3;
          local_854 = uVar12;
        }
      }
      if (local_85c == 0) {
LAB_0007d6fa:
        if ((local_860 != 0) && (iVar2 = FUN_0008dfd8(param_1,param_3,uVar19), iVar2 != 0)) {
          uVar8 = 0x3ba;
          iVar11 = DAT_0007e588 + 0x7e314;
          iVar2 = DAT_0007e58c + 0x7e316;
          goto LAB_0007e314;
        }
        if ((local_850 == 0) || (iVar2 = FUN_0007d25c(param_6,uVar19), iVar2 == 0))
        goto LAB_0007d722;
        uVar8 = 0x3c2;
        iVar11 = DAT_0007e2f8 + 0x7e1be;
        iVar2 = DAT_0007e2fc + 0x7e1c0;
      }
      else {
        iVar2 = FUN_0007cd78(param_6,uVar19);
        if (iVar2 == 0) {
          DebugPrint(1,7,DAT_0007e2cc + 0x7dffa,DAT_0007e2c8 + 0x7e018,0x3b3,local_848);
          goto LAB_0007d6fa;
        }
        uVar8 = 0x3ad;
        iVar11 = DAT_0007e300 + 0x7e1ee;
        iVar2 = (int)&DAT_0007e1f0 + DAT_0007e304;
      }
      DebugPrint(1,7,iVar2,iVar11 + 0x24,uVar8);
      goto LAB_0007e1ce;
    }
    sVar3 = strlen(local_428);
    if ((sVar3 < uVar19) && (uVar19 - sVar3 != 0)) {
      pcVar23 = pcVar20;
      do {
        iVar13 = memcmp(pcVar23,local_428,sVar3);
        iVar2 = DAT_0007e2bc;
        if (iVar13 == 0) {
          uVar19 = (int)pcVar23 - (int)pcVar20;
          *(uint *)(param_3 + 8) = uVar19;
          DebugPrint(1,7,DAT_0007e2c0 + 0x7df92,iVar2 + 0x7dfa8,0x39e,uVar19);
          param_3[4] = '\0';
          param_3[5] = '\0';
          param_3[6] = '\0';
          param_3[7] = '\0';
          *param_3 = '\0';
          memset(pcVar17,0,0x100);
          local_854 = 1;
          strcpy(param_4,param_3 + 0x114);
          break;
        }
        pcVar23 = pcVar23 + 1;
      } while (pcVar4 + (uVar19 - sVar3) + 4 != pcVar23);
    }
LAB_0007d722:
    if ((**(int **)(iVar11 + DAT_0007e214) - 0x405U < 2) && (0x500000 < *(int *)(param_3 + 8))) {
      DebugPrint(1,7,DAT_0007e2f4 + 0x7e1aa,DAT_0007e2f0 + 0x7e1c8,0x3cf,*(int *)(param_3 + 8));
    }
    else {
      pFVar5 = fopen64(local_848,(char *)(DAT_0007e218 + 0x7d74a));
      sVar3 = fwrite(pcVar20,1,uVar19,pFVar5);
      if (uVar19 != sVar3) {
        piVar7 = __errno_location();
        pcVar17 = strerror(*piVar7);
        DebugPrint(1,7,DAT_0007e2d4 + 0x7e020,DAT_0007e2d0 + 0x7e03e,0x3db,sVar3,pcVar17);
      }
      fclose(pFVar5);
    }
    iVar2 = *(int *)(param_3 + 0xc);
    iVar13 = DAT_0007e21c + 0x7d79e;
    param_3[0x10] = '\x01';
    param_3[0x11] = '\0';
    param_3[0x12] = '\0';
    param_3[0x13] = '\0';
    *(uint *)(param_3 + 0xc) = iVar2 + uVar19;
    DebugPrint(1,7,DAT_0007e220 + 0x7d790,iVar13,0x3e1,*(undefined4 *)(param_3 + 8),iVar2 + uVar19);
    if (local_854 == 0) goto LAB_0007ddbe;
    if ((code *)**(undefined4 **)(iVar11 + DAT_0007e224) != (code *)0x0) {
      if (local_860 == 0) {
        (*(code *)**(undefined4 **)(iVar11 + DAT_0007e224))(param_1,DAT_0007e228 + 0x7d7c0,200);
        goto LAB_0007dd0e;
      }
      goto LAB_0007e328;
    }
  }
  else {
    uVar19 = *param_8;
    if (uVar12 == 0) {
      sVar3 = strlen(local_428);
      if ((sVar3 < uVar19) && (uVar19 - sVar3 != 0)) {
        pcVar4 = param_6;
        do {
          iVar13 = memcmp(pcVar4,local_428,sVar3);
          iVar2 = DAT_0007e2b0;
          if (iVar13 == 0) {
            uVar19 = (int)pcVar4 - (int)param_6;
            *(uint *)(param_3 + 8) = uVar19;
            DebugPrint(1,7,DAT_0007e2b4 + 0x7de44,iVar2 + 0x7de5a,0x411,uVar19);
            param_3[4] = '\0';
            param_3[5] = '\0';
            param_3[6] = '\0';
            param_3[7] = '\0';
            *param_3 = '\0';
            memset(pcVar17,0,0x100);
            strcpy(param_4,param_3 + 0x114);
            if (*(int *)(param_3 + 0x10) < 1) {
              pcVar14 = (code *)**(undefined4 **)(iVar11 + DAT_0007e224);
              if (pcVar14 == (code *)0x0) goto LAB_0007dd0e;
              goto LAB_0007dd02;
            }
            local_854 = 1;
            goto LAB_0007dc7a;
          }
          pcVar4 = pcVar4 + 1;
        } while (param_6 + (uVar19 - sVar3) != pcVar4);
      }
      if (*(int *)(param_3 + 0x10) < 1) goto LAB_0007ddbe;
LAB_0007dc7a:
      if ((1 < **(int **)(iVar11 + DAT_0007e214) - 0x405U) ||
         (iVar2 = *(int *)(param_3 + 8), iVar2 < 0x500001)) {
        pFVar5 = fopen64(local_848,(char *)(DAT_0007e288 + 0x7dca2));
        uVar19 = fwrite(param_6,1,uVar19,pFVar5);
        fclose(pFVar5);
        iVar2 = *(int *)(param_3 + 8);
      }
      iVar13 = *(int *)(param_3 + 0xc);
      *(uint *)(param_3 + 0xc) = iVar13 + uVar19;
      DebugPrint(1,7,DAT_0007e290 + 0x7dce2,DAT_0007e28c + 0x7dd00,0x443,iVar2,iVar13 + uVar19);
      if (local_854 == 0) goto LAB_0007ddbe;
    }
    else {
      sVar3 = strlen(local_228);
      if (uVar19 <= sVar3) {
LAB_0007dc24:
        if (*(int *)(param_3 + 0x10) < 1) goto LAB_0007ddbe;
        local_854 = 0;
LAB_0007dc34:
        if (local_85c != 0) {
          uVar6 = GetStoragePathFreeSpace(**(undefined4 **)(iVar11 + DAT_0007e284));
          uVar12 = uVar19 & ~((int)uVar19 >> 0x20);
          if ((int)uVar19 < 0) {
            uVar12 = uVar19 + 0xfffff;
          }
          uVar9 = (int)uVar6 >> 0x1f;
          bVar25 = (uint)((int)uVar12 >> 0x1f) <= uVar9;
          if (uVar9 == (int)uVar12 >> 0x1f) {
            bVar25 = (uint)((int)uVar12 >> 0x14) <= uVar6;
          }
          if (!bVar25) {
            DebugPrint(8,7,DAT_0007e5b0 + 0x7e480,DAT_0007e5ac + 0x7e49c,0x422,uVar19,uVar6,uVar9);
LAB_0007e1ce:
            param_3[4] = '\0';
            param_3[5] = '\0';
            param_3[6] = '\0';
            param_3[7] = '\0';
            *param_3 = '\0';
            memset(pcVar17,0,0x100);
            return 0xffffffff;
          }
        }
        if (local_860 != 0) {
          iVar2 = FUN_0008dfd8(param_1,param_3,uVar19);
          if (iVar2 != 0) {
            uVar8 = 0x42d;
            iVar11 = DAT_0007e59c + 0x7e40a;
            iVar2 = DAT_0007e5a0 + 0x7e40c;
LAB_0007e314:
            DebugPrint(1,7,iVar2,iVar11 + 0x24,uVar8);
            return 0xffffffff;
          }
        }
        goto LAB_0007dc7a;
      }
      iVar2 = strncmp(param_6 + (uVar19 - sVar3),local_228,sVar3);
      if (iVar2 != 0) goto LAB_0007dc24;
      param_3[4] = '\0';
      param_3[5] = '\0';
      param_3[6] = '\0';
      param_3[7] = '\0';
      *param_3 = '\0';
      memset(pcVar17,0,0x100);
      strcpy(param_4,param_3 + 0x114);
      uVar19 = uVar19 - sVar3;
      if (0 < *(int *)(param_3 + 0x10)) goto LAB_0007dc34;
    }
    pcVar14 = (code *)**(int **)(iVar11 + DAT_0007e224);
    if (pcVar14 != (code *)0x0) {
      if (local_860 == 0) {
LAB_0007dd02:
        (*pcVar14)(param_1,DAT_0007e294 + 0x7dd0e,200);
      }
      else {
LAB_0007e328:
        FUN_0008df8c(param_1);
      }
    }
  }
LAB_0007dd0e:
  uVar19 = 1;
  if (local_858 == 0) {
    memset(param_3,0,0x154);
    uVar19 = 1;
  }
LAB_0007ddc2:
  memset(param_6,0,param_7);
  *param_8 = 0;
  return uVar19;
}


