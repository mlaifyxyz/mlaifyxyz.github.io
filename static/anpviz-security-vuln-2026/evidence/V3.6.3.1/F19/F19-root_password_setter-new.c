/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 000263ac */
/* function FUN_000263ac @ 000263ac */

undefined4 FUN_000263ac(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  FILE *pFVar2;
  size_t sVar3;
  char *pcVar4;
  void *pvVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  size_t sVar10;
  undefined1 *__ptr;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar22;
  undefined4 *local_e54;
  int local_e34;
  char acStack_e30 [256];
  char acStack_d30 [16];
  byte local_d20 [5];
  byte local_d1b [235];
  char acStack_c30 [512];
  undefined4 local_a30;
  undefined1 auStack_a2c [92];
  char local_9d0 [64];
  char local_990 [351];
  undefined1 local_831;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  char local_7d0 [64];
  char local_790 [351];
  undefined1 local_631;
  
  ShmRead(param_2,acStack_e30,0x100);
  pcVar7 = acStack_e30;
  DebugPrint(8,7,"[%s:%u]update file path = %s\r\n\n",DAT_00026718,0x8ff,pcVar7);
  local_e34 = 0;
  pFVar2 = fopen64(acStack_e30,"rb");
  if (pFVar2 != (FILE *)0x0) {
    sVar3 = fread(acStack_d30,1,0xff,pFVar2);
    fclose(pFVar2);
    if (0 < (int)sVar3) {
      acStack_d30[sVar3] = '\0';
      pcVar4 = strstr(acStack_d30,"<ENCRYPT>");
      if ((pcVar4 != (char *)0x0) &&
         (pcVar4 = strstr(acStack_d30,"SYSTEM_ENCRYPTSN_MESSAGE"), pcVar4 != (char *)0x0)) {
        pvVar5 = calloc(0x400,1);
        if (pvVar5 == (void *)0x0) {
          DebugPrint(8,7,"[%s:%u]malloc %d failed\n",DAT_00027418,0x919,0x400);
          *param_1 = 0xffffffff;
          return 0;
        }
        pFVar2 = fopen64(acStack_e30,"rb");
        if (pFVar2 != (FILE *)0x0) {
          fread(pvVar5,1,0x400,pFVar2);
          fclose(pFVar2);
          DebugPrint(8,7,"[%s:%u]ENCRYPT: %s\n",DAT_00026718,0x925,pvVar5);
          DAT_000af31c = 0;
          DAT_000af39c = 0;
          DAT_000af49c = 0;
          iVar6 = get_sn_data(pvVar5,&DAT_000af31c,0x80,&DAT_000af39c,0x100,&DAT_000af49c,0x40);
          if (iVar6 == 0) {
            pcVar7 = (char *)get_chip_uuid();
            uVar8 = strcasecmp(pcVar7,&DAT_000af31c);
            if (uVar8 == 0) {
              local_830 = uVar8;
              memset(&local_82c,0,0x1fc);
              pcVar7 = (char *)get_chip_uuid();
              sprintf((char *)&local_830,"%s%s%s",pcVar7,&DAT_000af39c,"zzcc@anjvision.com");
              local_a30 = uVar8;
              memset(auStack_a2c,0,0x3c);
              sVar3 = strlen((char *)&local_830);
              our_md5_encode(&local_a30,&local_830,sVar3);
              iVar6 = strcmp((char *)&local_a30,&DAT_000af49c);
              if (iVar6 == 0) {
                uVar9 = get_sn_version(pvVar5);
                sVar3 = strlen(&DAT_000af39c);
                iVar6 = WriteEncriptDataToSoft(&DAT_000af39c,sVar3,uVar9);
                if (iVar6 < 0) {
                  DebugPrint(8,7,"[%s:%u]WriteEncriptDataToSoft failed\n",DAT_00026ed8,0x955);
                }
                else {
                  local_830 = 0;
                  local_82c = 0;
                  local_828 = 0;
                  local_824 = 0;
                  local_820 = 0;
                  local_81c = 0;
                  local_818 = 0;
                  local_814 = 0;
                  FUN_00066d80(&local_a30);
                  format_mac_addr_from_digit_to_string(&local_a30,6,&local_830,0x12);
                  DebugPrint(8,7,"[%s:%u]Set init mac: %s\n",DAT_00026718,0x95e,&local_830);
                  strcpy((char *)((int)DAT_000b9380 + 0x3e24),(char *)&local_830);
                  SetNetworkConfig();
                  delay_reboot(5);
                }
              }
              else {
                DebugPrint(8,7,"[%s:%u]checksum %s is not correct, should be %s!\n",DAT_00026ed8,
                           0x94c,&DAT_000af49c,&local_a30);
              }
            }
            else {
              DebugPrint(8,7,"[%s:%u]UUID is not correct!\n",DAT_00026ed8,0x93e);
            }
          }
          else {
            DebugPrint(8,7,"[%s:%u]CANNOT GET SN\n",DAT_00026ba8,0x930);
            DebugPrint(8,7,"[%s:%u]%s\n",DAT_00026ba8,0x931,pvVar5);
          }
        }
        free(pvVar5);
        *param_1 = 0;
        return 0;
      }
      pcVar4 = strstr(acStack_d30,"<ONVIF_CONFIG>");
      if ((pcVar4 != (char *)0x0) &&
         (pcVar4 = strstr(acStack_d30,"</ONVIF_CONFIG>"), pcVar4 != (char *)0x0)) {
        DebugPrint(8,7,"[%s:%u]GET ONVIF_CONFIG: %s\n",DAT_00026ba8,0x971,acStack_d30);
        sprintf((char *)&local_830,"%s/%s","/mnt/nand","cust");
        mysystem_with_param("mkdir -p %s",&local_830);
        sprintf((char *)&local_830,"%s/%s/%s","/mnt/nand","cust","onvif_oem.xml");
        mysystem_with_param("mv %s %s",acStack_e30,&local_830);
LAB_000268be:
        mysystem_with_param("killall web_server");
        *param_1 = 0;
        return 0;
      }
      pcVar4 = strstr(acStack_d30,"<CLEAR_ONVIF_CONFIG>");
      if (pcVar4 != (char *)0x0) {
        DebugPrint(8,7,"[%s:%u]GET ONVIF_CONFIG: %s\n",DAT_00026ba8,0x97e,acStack_d30);
        sprintf((char *)&local_830,"%s/%s/%s","/mnt/nand","cust","onvif_oem.xml");
        mysystem_with_param("rm -f %s",&local_830);
        goto LAB_000268be;
      }
      pcVar4 = strstr(acStack_d30,"<FAKE_VIDEO");
      if (pcVar4 != (char *)0x0) {
        DebugPrint(8,7,"[%s:%u]GET FAKE_VIDEO: %s\n",DAT_00026ba8,0x989,acStack_d30);
        sprintf((char *)&local_830,"%s/%s","/mnt/nand","fakevideo.xml");
        mysystem_with_param("mv %s %s",acStack_e30,&local_830);
        delay_reboot(5);
        *param_1 = 0;
        return 0;
      }
      pcVar4 = strstr(acStack_d30,"<PTZSTEP_CONFIG>");
      if ((pcVar4 != (char *)0x0) &&
         (pcVar4 = strstr(acStack_d30,"</PTZSTEP_CONFIG>"), pcVar4 != (char *)0x0)) {
        DebugPrint(8,7,"[%s:%u]GET PTZSTEP_CONFIG: %s \n",DAT_00026ba8,0x993,acStack_d30);
        sprintf((char *)&local_830,"%s/%s","/mnt/nand","ptzstep.cfg");
        mysystem_with_param("mv %s %s",acStack_e30,&local_830);
        mysystem("rm -rf /tmp/preset_reset.flag");
        mysystem_with_param("killall comm_server");
        *param_1 = 0;
        return 0;
      }
      pcVar4 = strstr(acStack_d30,"<AF_FOCUS_CONFIG>");
      if ((pcVar4 != (char *)0x0) &&
         (pcVar4 = strstr(acStack_d30,"</AF_FOCUS_CONFIG>"), pcVar4 != (char *)0x0)) {
        DebugPrint(8,7,"[%s:%u]GET AF_FOCUS_CONFIG: %s \n",DAT_00026ed8,0x9a1,acStack_d30);
        sprintf((char *)&local_830,"/tmp/%s","af_focus.config.xml");
        mysystem_with_param("mv %s %s",acStack_e30,&local_830);
LAB_00026bf2:
        mysystem_with_param("killall media_server");
        *param_1 = 0;
        return 0;
      }
      pcVar4 = strstr(acStack_d30,"<OEM_CONFIG>");
      if (pcVar4 == (char *)0x0) {
        pcVar4 = strstr(acStack_d30,"SET_OEM_SN_FLAG=");
        if (pcVar4 != (char *)0x0) {
          sVar10 = strlen((char *)local_d20);
          sVar3 = 0;
          do {
            bVar21 = sVar3 == sVar10;
            sVar3 = sVar3 + 1;
            if (bVar21) goto LAB_00026812;
            uVar1 = *(ushort *)(__ctype_b + (uint)local_d20[0] * 2);
          } while ((uVar1 & 0x40) != 0);
          local_d20[0] = (byte)uVar1 & 0x40;
LAB_00026812:
          memset(&local_830,0,0x120);
          GetOemInfo(&local_830);
          if (local_d20[0] != 0) {
            memset(local_7d0,0,0x20);
            strncpy(local_7d0,(char *)local_d20,0x1f);
          }
          SaveOemInfo(&local_830);
          *param_1 = 0;
          return 0;
        }
        pcVar4 = strstr(acStack_d30,"<AUDIOPARAM>");
        if (pcVar4 != (char *)0x0) {
          DebugPrint(8,7,"[%s:%u]GET AUDIOPARAM: %s\n",DAT_00026ed8,0x9f9,acStack_d30);
          sprintf((char *)&local_830,"%s/%s","/mnt/nand","audio.config.xml");
          mysystem_with_param("mv %s %s",acStack_e30,&local_830);
          mysystem_with_param("killall media_server");
          *param_1 = 0;
          return 0;
        }
        pcVar4 = strstr(acStack_d30,"<DEBUG_LIGHT_CONFIG>");
        if (pcVar4 != (char *)0x0) {
          DebugPrint(8,7,"[%s:%u]GET DEBUG_LIGHT_CONFIG: %s\n",DAT_00026ed8,0xa04,acStack_d30);
          sprintf((char *)&local_830,"%s/%s","/tmp","light.debug.xml");
          mysystem_with_param("mv %s %s",acStack_e30,&local_830);
          SetEncReloadAvConfig();
          *param_1 = 0;
          return 0;
        }
        pcVar4 = strstr(acStack_d30,"<DZOOMSETTING>");
        if (pcVar4 != (char *)0x0) {
          DebugPrint(8,7,"[%s:%u]GET DZOOM SETTING: %s\n",DAT_00027120,0xa0f,acStack_d30);
          mysystem_with_param("mv %s %s",acStack_e30,"/mnt/nand/dzoom.config.xml");
          uVar9 = LoadDZoomMultipleSetting();
          dVar22 = (double)CONCAT44(extraout_s1_00,uVar9);
          if ((0.0 < dVar22) && (DAT_00027118 <= ABS(dVar22))) {
            *(double *)((int)DAT_000b9380 + 0x1a90) = dVar22;
            FUN_00031fc4();
          }
          mysystem_with_param("rm -f %s","/tmp/flag.dzoom.setting");
          goto LAB_00026bf2;
        }
        pcVar4 = strstr(acStack_d30,"SET_OEM_DEVTYPE_FLAG=");
        if (pcVar4 != (char *)0x0) {
          sVar3 = strlen((char *)local_d1b);
          pbVar16 = local_d1b;
          do {
            pbVar17 = pbVar16;
            if (local_d1b + sVar3 == pbVar17) goto LAB_00026ca6;
            uVar1 = *(ushort *)(__ctype_b + (uint)*pbVar17 * 2);
            pbVar16 = pbVar17 + 1;
          } while ((uVar1 & 0x40) != 0);
          *pbVar17 = (byte)uVar1 & 0x40;
LAB_00026ca6:
          DebugPrint(8,7,"[%s:%u]SET_OEM_DEVTYPE_FLAG=%s\n\n",DAT_00026ed8,0xa2c,local_d1b);
          pcVar7 = calloc(0x120,1);
          if (pcVar7 == (char *)0x0) {
            DebugPrint(8,7,"[%s:%u]malloc size %u failed\n",DAT_00027790,0xa32,0x120);
            *param_1 = 0;
            return 0;
          }
          GetOemInfo();
          strncpy(pcVar7,(char *)local_d1b,0x1f);
          SaveOemInfo(pcVar7);
          free(pcVar7);
          iVar6 = remove(acStack_e30);
          if (iVar6 != 0) {
            piVar11 = __errno_location();
            pcVar7 = strerror(*piVar11);
            DebugPrint(8,7,"[%s:%u]can not remove tmp config  file = %s for (%s)\n\n",DAT_00027120,
                       0xa40,acStack_e30,pcVar7);
          }
          FUN_0005b428(&DAT_000c43cc,0);
          FUN_0005ade0();
          *param_1 = 0;
          return 0;
        }
        pcVar4 = strstr(acStack_d30,"DEL_OEM_DEVTYPE_FLAG=");
        if (pcVar4 != (char *)0x0) {
          DebugPrint(8,7,"[%s:%u]DEL_OEM_DEVTYPE_FLAG\n\n",DAT_00027120,0xa4b);
          __ptr = calloc(0x120,1);
          if (__ptr == (undefined1 *)0x0) {
            DebugPrint(8,7,"[%s:%u]malloc size %u failed\n",DAT_00027790,0xa50,0x120);
            *param_1 = 0;
            return 0;
          }
          GetOemInfo();
          *__ptr = 0;
          SaveOemInfo(__ptr);
          free(__ptr);
          FUN_0005b428(&DAT_000c43cc,0);
          FUN_0005ade0();
          *param_1 = 0;
          return 0;
        }
        pcVar4 = strstr(acStack_d30,"USER_DEFINE_CONFIG_FLAG");
        if (pcVar4 != (char *)0x0) {
          DebugPrint(8,7,
                     "[%s:%u]USER_DEFINE_CONFIG_FLAG found, it\'s an user defined config file!!!\n\n"
                     ,DAT_00027120,0xa64);
          snprintf((char *)&local_830,0x200,"cp -f %s /mnt/nand/userdef.cfg",acStack_e30);
          DebugPrint(8,7,"[%s:%u]run cmd: %s\n\n",DAT_00027120,0xa68,&local_830);
          mysystem(&local_830);
          iVar6 = remove(acStack_e30);
          if (iVar6 != 0) {
            piVar11 = __errno_location();
            pcVar7 = strerror(*piVar11);
            DebugPrint(8,7,"[%s:%u]can not remove tmp config  file = %s for (%s)\n\n",DAT_00027120,
                       0xa6d,acStack_e30,pcVar7);
          }
          goto LAB_00026602;
        }
        pcVar4 = strstr(acStack_d30,"SET_OEM_DEFAULT_CONFIG");
        if (pcVar4 != (char *)0x0) {
          DebugPrint(8,7,
                     "[%s:%u]SET_OEM_DEFAULT_CONFIG found, it\'s an user defined default config file!!!\n\n"
                     ,DAT_00027120,0xa75);
          pvVar5 = malloc(0x9a98);
          iVar6 = ParseConfigXML(acStack_e30,pvVar5);
          iVar12 = remove(acStack_e30);
          if (iVar12 != 0) {
            piVar11 = __errno_location();
            pcVar7 = strerror(*piVar11);
            DebugPrint(8,7,"[%s:%u]can not remove tmp config  file = %s for (%s)\n\n",DAT_00027418,
                       0xa7a,acStack_e30,pcVar7);
          }
          if (iVar6 != 0) {
            DebugPrint(8,7,"[%s:%u]parse failed: %s\n\n",DAT_00027120,0xa7f,acStack_e30);
            *param_1 = 0xffffffff;
            free(pvVar5);
            return 0;
          }
          sprintf(acStack_c30,"%s/%s","/mnt/nand","cust");
          mysystem_with_param("mkdir -p %s",acStack_c30);
          mysystem_with_param("rm -f %s/config.default.xml",acStack_c30);
          pcVar7 = (char *)product_type_str_read();
          sprintf((char *)&local_a30,"config.default.%s.xml",pcVar7);
          pbVar16 = (byte *)&local_a30;
          uVar8 = 0;
          while( true ) {
            pbVar17 = pbVar16;
            sVar3 = strlen((char *)&local_a30);
            uVar19 = uVar8 + 1;
            if (sVar3 <= uVar8) break;
            pbVar16 = pbVar17 + 1;
            uVar8 = uVar19;
            if (*pbVar17 - 0x41 < 0x1a) {
              *pbVar17 = *pbVar17 + 0x20;
            }
          }
          pcVar7 = stpcpy((char *)&local_830,acStack_c30);
          sprintf(pcVar7,"/%s",&local_a30);
          SetConfigToXML_Ex(pvVar5,&local_830,1);
          *param_1 = 0;
          free(pvVar5);
          return 0;
        }
        pcVar4 = strstr(acStack_d30,"<EXECUTE_USER_CMD>");
        if ((pcVar4 != (char *)0x0) &&
           (pcVar4 = strstr(acStack_d30,"</EXECUTE_USER_CMD>"), pcVar4 != (char *)0x0)) {
          memset(acStack_c30,0,0x200);
          pFVar2 = fopen64(acStack_e30,"rb");
          if (pFVar2 != (FILE *)0x0) {
            fread(acStack_c30,1,0x200,pFVar2);
            fclose(pFVar2);
            pcVar7 = strstr(acStack_c30,"</EXECUTE_USER_CMD>");
            if (pcVar7 != (char *)0x0) {
              pcVar7[0x13] = '\0';
            }
            DebugPrint(8,7,"[%s:%u]GET BUFFER: %s\n",DAT_00027418,0xab8,acStack_c30);
            iVar6 = ixmlParseBuffer(acStack_c30);
            if (iVar6 == 0) {
              DebugPrint(8,7,"[%s:%u]xml error:\n",DAT_00027ac4,0x89c,acStack_c30);
            }
            else {
              piVar11 = (int *)ixmlDocument_getElementsByTagName(iVar6,"EXECUTE_USER_CMD");
              if (piVar11 == (int *)0x0) {
                ixmlDocument_free(iVar6);
              }
              else {
                bVar21 = false;
                for (local_e54 = *(undefined4 **)(*piVar11 + 0x20); local_e54 != (undefined4 *)0x0;
                    local_e54 = (undefined4 *)local_e54[10]) {
                  iVar12 = strcmp((char *)*local_e54,"CMD");
                  if (iVar12 == 0) {
                    for (puVar20 = (undefined4 *)local_e54[0xb]; puVar20 != (undefined4 *)0x0;
                        puVar20 = (undefined4 *)puVar20[10]) {
                      iVar12 = strcmp((char *)*puVar20,"DATA");
                      if ((iVar12 == 0) && ((char *)puVar20[1] != (char *)0x0)) {
                        strncpy((char *)&local_a30,(char *)puVar20[1],0x1ff);
                        local_831 = 0;
                        pcVar7 = (char *)&local_a30;
                        DebugPrint(8,7,"[%s:%u]user cmd request: %s\n",DAT_00027788,0x8d4,&local_a30
                                  );
                        if ((byte)local_a30 == 0) {
LAB_0002783e:
                          DebugPrint(8,7,"[%s:%u]user cmd blocked by security policy: %s\n",
                                     DAT_00027ac4,0x8df,&local_a30);
                        }
                        else {
                          sVar3 = strlen((char *)&local_a30);
                          if (sVar3 == 0x1ff) {
                            DebugPrint(8,7,"[%s:%u]user cmd too long, rejected\n\n",DAT_00027ac0,
                                       0x85c,pcVar7);
                            goto LAB_0002783e;
                          }
                          strncpy((char *)&local_830,(char *)&local_a30,0x1ff);
                          local_631 = 0;
                          pcVar7 = strchr((char *)&local_830,0x20);
                          pcVar4 = strchr((char *)&local_830,9);
                          if (pcVar7 == (char *)0x0) {
                            if (pcVar4 != (char *)0x0) goto LAB_00027860;
                          }
                          else {
                            *pcVar7 = '\0';
                            if ((pcVar4 != (char *)0x0) && (pcVar4 < pcVar7)) {
LAB_00027860:
                              *pcVar4 = '\0';
                            }
                          }
                          puVar18 = DAT_00027794;
                          uVar8 = local_830 & 0xff;
                          if (uVar8 == 0) goto LAB_0002783e;
                          sVar3 = strlen((char *)&local_830);
                          pbVar16 = &DAT_00079c94;
                          do {
                            sVar10 = strlen((char *)pbVar16);
                            if (sVar3 == sVar10) {
                              pbVar17 = (byte *)&local_830;
                              pbVar14 = pbVar16;
                              uVar19 = uVar8;
                              do {
                                pbVar13 = pbVar14 + 1;
                                uVar15 = (uint)*pbVar14;
                                if (uVar15 == 0) goto LAB_0002779c;
                                if (uVar19 - 0x41 < 0x1a) {
                                  uVar19 = uVar19 + 0x20 & 0xff;
                                }
                                if (uVar15 - 0x41 < 0x1a) {
                                  uVar15 = uVar15 + 0x20 & 0xff;
                                }
                                if (uVar19 != uVar15) goto LAB_0002779c;
                                pbVar17 = pbVar17 + 1;
                                uVar19 = (uint)*pbVar17;
                                pbVar14 = pbVar13;
                              } while (uVar19 != 0);
                              if (*pbVar13 == 0) {
                                DebugPrint(8,7,
                                           "[%s:%u]user cmd matches denied keyword \'%s\', rejected: %s\n\n"
                                           ,DAT_0002778c,0x882,pbVar16,&local_a30);
                                goto LAB_0002783e;
                              }
                            }
LAB_0002779c:
                            pbVar16 = (byte *)*puVar18;
                            puVar18 = puVar18 + 1;
                          } while (pbVar16 != (byte *)0x0);
                          pbVar16 = &DAT_00079c94;
                          puVar18 = DAT_00027acc;
                          do {
                            if (*pbVar16 != 0) {
                              sVar3 = strlen((char *)pbVar16);
                              pcVar7 = (char *)&local_a30;
                              do {
                                if (sVar3 == 0) {
LAB_00027822:
                                  DebugPrint(8,7,
                                             "[%s:%u]user cmd references denied path \'%s\', rejected: %s\n\n"
                                             ,DAT_00027ac0,0x88d,pbVar16,&local_a30);
                                  goto LAB_0002783e;
                                }
                                pbVar17 = (byte *)(pcVar7 + -1);
                                pbVar14 = pbVar16;
                                while( true ) {
                                  pbVar17 = pbVar17 + 1;
                                  uVar8 = (uint)*pbVar17;
                                  pbVar13 = pbVar14 + 1;
                                  uVar19 = (uint)*pbVar14;
                                  if (uVar8 - 0x41 < 0x1a) {
                                    uVar8 = uVar8 + 0x20 & 0xff;
                                  }
                                  if (uVar19 - 0x41 < 0x1a) {
                                    uVar19 = uVar19 + 0x20 & 0xff;
                                  }
                                  if (uVar8 != uVar19) break;
                                  pbVar14 = pbVar13;
                                  if (pbVar13 == pbVar16 + sVar3) goto LAB_00027822;
                                }
                                pcVar7 = pcVar7 + 1;
                              } while (*pcVar7 != '\0');
                            }
                            pbVar16 = (byte *)*puVar18;
                            puVar18 = puVar18 + 1;
                          } while (pbVar16 != (byte *)0x0);
                          mysystem_with_param("%s",&local_a30);
                        }
                        bVar21 = true;
                      }
                    }
                  }
                }
                ixmlNodeList_free(piVar11);
                ixmlDocument_free(iVar6);
                if (!bVar21) {
                  DebugPrint(8,7,"[%s:%u]CMD is empty\n",DAT_00027ac4,0x8f4);
                }
              }
            }
          }
          goto LAB_00026602;
        }
        pcVar4 = strstr(acStack_d30,"FIRMWARE_CONTROL_FILE");
        if (pcVar4 == (char *)0x0) goto LAB_000265f4;
        DebugPrint(8,7,"[%s:%u]FIRMWARE_CONTROL_FILE flag found!!!\n\n",DAT_00027418,0xac5);
        pcVar7 = strstr(acStack_d30,"CLEARALL");
        if (pcVar7 == (char *)0x0) {
          pcVar7 = strstr(acStack_d30,"flag.allow.nvr");
          if (pcVar7 != (char *)0x0) {
            mysystem("touch /mnt/nand/flag.allow.nvr");
          }
          pcVar4 = strstr(acStack_d30,"flag.forbit.nvr");
          if (pcVar4 != (char *)0x0) {
            mysystem("rm -f /mnt/nand/flag.allow.nvr");
          }
          bVar21 = pcVar4 != (char *)0x0 || pcVar7 != (char *)0x0;
          pcVar7 = strstr(acStack_d30,"AR0130_NO1080P");
          if ((pcVar7 != (char *)0x0) &&
             (iVar6 = access("/mnt/nand/ar0130_no1080p.flag",0), iVar6 == -1)) {
            bVar21 = true;
            DebugPrint(8,7,"[%s:%u]set AR0130_NO1080P flag!!!\n\n",DAT_00027ac8,0xaec);
            mysystem("echo 1 > /mnt/nand/ar0130_no1080p.flag");
          }
          pcVar7 = strstr(acStack_d30,"OV9712_1080P");
          if ((pcVar7 != (char *)0x0) &&
             (iVar6 = access("/mnt/nand/ov9712_1080p.flag",0), iVar6 == -1)) {
            bVar21 = true;
            DebugPrint(8,7,"[%s:%u]set OV9712_1080P flag!!!\n\n",DAT_00027ac8,0xaf7);
            mysystem("echo 1 > /mnt/nand/ov9712_1080p.flag");
          }
          pcVar7 = strstr(acStack_d30,"OSDBIGFONT");
          if ((pcVar7 != (char *)0x0) &&
             (iVar6 = access("/mnt/nand/osdbigfont.flag",0), iVar6 == -1)) {
            bVar21 = true;
            DebugPrint(8,7,"[%s:%u]set OSDBIGFONT flag!!!\n\n",DAT_00027ac8,0xb02);
            mysystem("echo 1 > /mnt/nand/osdbigfont.flag");
          }
          pcVar7 = strstr(acStack_d30,"JFS");
          if ((pcVar7 != (char *)0x0) && (iVar6 = access("/mnt/nand/jfs.flag",0), iVar6 == -1)) {
            bVar21 = true;
            DebugPrint(8,7,"[%s:%u]set JFS flag!!!\n\n",DAT_00027ac8,0xb0d);
            mysystem("echo 1 > /mnt/nand/jfs.flag");
          }
          pcVar7 = strstr(acStack_d30,"P2PLOG");
          if ((pcVar7 != (char *)0x0) && (iVar6 = access("/mnt/nand/p2plog.flag",0), iVar6 == -1)) {
            bVar21 = true;
            DebugPrint(8,7,"[%s:%u]set P2PLOG flag!!!\n\n",DAT_00027ac8,0xb18);
            mysystem("echo 1 > /mnt/nand/p2plog.flag");
          }
          pcVar7 = strstr(acStack_d30,"USERNOLOGIN");
          if ((pcVar7 != (char *)0x0) &&
             (iVar6 = access("/mnt/nand/user_admin_login.flag",0), iVar6 == -1)) {
            bVar21 = true;
            DebugPrint(8,7,"[%s:%u]set USERNOLOGIN flag!!!\n\n",DAT_00027ac8,0xb23);
            mysystem("echo 1 > /mnt/nand/user_admin_login.flag");
          }
          pcVar7 = strstr(acStack_d30,"SHANGHAITEST");
          if ((pcVar7 != (char *)0x0) &&
             (iVar6 = access("/mnt/nand/shanghai_test.flag",0), iVar6 == -1)) {
            bVar21 = true;
            DebugPrint(8,7,"[%s:%u]set SHANGHAITEST flag!!!\n\n",DAT_00027ac8,0xb2e);
            mysystem("echo 1 > /mnt/nand/shanghai_test.flag");
          }
          pcVar7 = strstr(acStack_d30,"RTPSMALL");
          if (pcVar7 == (char *)0x0) {
            pcVar7 = strstr(acStack_d30,"RTPBIG");
            if ((pcVar7 != (char *)0x0) &&
               (iVar6 = access("/mnt/nand/rtpsize.big.flag",0), iVar6 == -1)) {
              bVar21 = true;
              DebugPrint(8,7,"[%s:%u]set RTPBIG flag!!!\n\n",DAT_00027ac8,0xb43);
              mysystem("echo 1 > /mnt/nand/rtpsize.big.flag");
            }
          }
          else {
            iVar6 = access("/mnt/nand/rtpsize.small.flag",0);
            if (iVar6 == -1) {
              bVar21 = true;
              DebugPrint(8,7,"[%s:%u]set RTPSMALL flag!!!\n\n",DAT_00027ac8,0xb39);
              mysystem("echo 1 > /mnt/nand/rtpsize.small.flag");
            }
          }
          pcVar7 = strstr(acStack_d30,"ONVIFAUTH");
          if ((pcVar7 != (char *)0x0) &&
             (iVar6 = access("/mnt/nand/onvif_auth_enable.flag",0), iVar6 == -1)) {
            bVar21 = true;
            DebugPrint(8,7,"[%s:%u]set ONVIFAUTH flag!!!\n\n",DAT_00027ac8,0xb4e);
            mysystem("echo 1 > /mnt/nand/onvif_auth_enable.flag");
          }
          pcVar7 = strstr(acStack_d30,"NOWEEKDAY");
          if ((pcVar7 != (char *)0x0) && (iVar6 = access("/mnt/nand/noweekday.flag",0), iVar6 == -1)
             ) {
            DebugPrint(8,7,"[%s:%u]set noweekday flag!!!\n\n",DAT_00027ac8,0xb5a);
            mysystem("echo 1 > /mnt/nand/noweekday.flag");
            goto LAB_00027224;
          }
          iVar6 = remove(acStack_e30);
          if (iVar6 != 0) goto LAB_00027232;
        }
        else {
          DebugPrint(8,7,"[%s:%u]set CLEARALL flag!!!\n\n",DAT_00027418,0xac9);
          mysystem("rm /mnt/nand/osdbigfont.flag -rf");
          mysystem("rm /mnt/nand/jfs.flag -rf");
          mysystem("rm /mnt/nand/p2plog.flag -rf");
          mysystem("rm /mnt/nand/user_admin_login.flag -rf");
          mysystem("rm /mnt/nand/shanghai_test.flag -rf");
          mysystem("rm /mnt/nand/rtpsize.small.flag -rf");
          mysystem("rm /mnt/nand/rtpsize.big.flag -rf");
          mysystem("rm /mnt/nand/onvif_auth_enable.flag -rf");
          mysystem("rm /mnt/nand/noweekday.flag -rf");
          mysystem("rm /mnt/nand/ar0130_no1080p.flag -rf");
          mysystem("rm /mnt/nand/ov9712_1080p.flag -rf");
LAB_00027224:
          iVar6 = remove(acStack_e30);
          if (iVar6 == 0) goto LAB_00026602;
          bVar21 = true;
LAB_00027232:
          piVar11 = __errno_location();
          pcVar7 = strerror(*piVar11);
          DebugPrint(8,7,"[%s:%u]can not remove tmp config  file = %s for (%s)\n\n",DAT_00027418,
                     0xb64,acStack_e30,pcVar7);
        }
        if (!bVar21) {
          *param_1 = 0xffffffff;
          return 0xffffffff;
        }
        goto LAB_00026602;
      }
      DebugPrint(8,7,"[%s:%u]GET OEM_CONFIG: %s\n",DAT_00026ba8,0x9ad,acStack_d30);
      memset(&local_a30,0,0x120);
      GetOemInfo(&local_a30);
      sprintf(acStack_c30,"%s/%s","/mnt/nand","cust");
      mysystem_with_param("mkdir -p %s",acStack_c30);
      sprintf(acStack_c30,"%s/%s/%s","/mnt/nand","cust","specific.xml");
      mysystem_with_param("mv %s %s",acStack_e30,acStack_c30);
      FUN_0005b428(&DAT_000c43cc,0);
      FUN_0005ade0();
      memset(&local_830,0,0x120);
      GetOemInfo(&local_830);
      if ((local_790[0] == '\0') || (iVar6 = is_mac_addr_valid(local_790), iVar6 == 0)) {
        if (local_990[0] == '\0') goto LAB_00026b6a;
        strcpy(local_790,local_990);
        if ((local_7d0[0] == '\0') && (local_9d0[0] != '\0')) goto LAB_00026b7a;
      }
      else {
        strcpy((char *)((int)DAT_000b9380 + 0x3e24),local_790);
        DebugPrint(8,7,"[%s:%u]set oem mac: %s\n",DAT_00026ed8,0x9c5,local_790);
        FUN_0006ccac(local_790);
        SetConfigToXML_force(DAT_000b9380);
LAB_00026b6a:
        if ((local_7d0[0] != '\0') || (local_9d0[0] == '\0')) goto LAB_00026602;
LAB_00026b7a:
        strcpy(local_7d0,local_9d0);
      }
      SaveOemInfo(&local_830);
      goto LAB_00026602;
    }
  }
LAB_000265f4:
  iVar6 = GetSystemControlFromFile(acStack_e30,&local_830);
  if (iVar6 < 1) {
    DebugPrint(8,7,"[%s:%u]NOT A SYSTEM CONTRL FILE\n\n",DAT_00026718,0xb80,pcVar7);
    local_e34 = 0;
    CheckUserConfigFileValidity(acStack_e30,&local_e34);
    if (local_e34 != 1) {
      DebugPrint(8,7,"[%s:%u]config file is not valid\n\n",DAT_00026ba8,0xb8f);
      iVar6 = remove(acStack_e30);
      if (iVar6 != 0) {
        piVar11 = __errno_location();
        pcVar7 = strerror(*piVar11);
        DebugPrint(8,7,"[%s:%u]can not remove tmp config  file = %s for (%s)\n\n",DAT_00026ed8,0xb94
                   ,acStack_e30,pcVar7);
      }
      FUN_000372a4();
      SystemReboot();
      *param_1 = 0xffffffff;
      return 0xffffffff;
    }
    DebugPrint(8,7,"[%s:%u]UPDATE USER CONFIG\n\n",DAT_00026718,0xb86);
    MsgLogEvent(3,"Update mysystem config.");
    uVar9 = CONFIG_FILE_PATH();
    iVar6 = CopyFile(acStack_e30,uVar9);
    if (iVar6 == 0) {
      remove(acStack_e30);
      pvVar5 = DAT_000b9380;
      memcpy(&DAT_000b9388,DAT_000b9380,0x9a98);
      iVar6 = GetConfigFromXml(pvVar5);
      if (iVar6 == 0) {
        memcpy((void *)((int)DAT_000b9380 + 0x3e24),DAT_0002671c,0x19c);
        SetNetworkConfig();
        FUN_00026214(DAT_000b9380);
        CONFIG_FILE_PATH();
        iVar6 = FUN_000261c8();
        if (iVar6 == 0) {
          uVar9 = LoadDZoomMultipleSetting();
          dVar22 = (double)CONCAT44(extraout_s1,uVar9);
          uVar9 = 0;
          if ((0.0 < dVar22) && (DAT_00026710 <= ABS(dVar22))) {
            *(double *)((int)DAT_000b9380 + 0x1a90) = dVar22;
            SetConfigToXML_force();
          }
        }
        else {
          SaveDZoomMultipleSetting((int)*(undefined8 *)((int)DAT_000b9380 + 0x1a90));
          uVar9 = 0;
        }
      }
      else {
        uVar9 = 0xffffffff;
        DebugPrint(8,7,"[%s:%u]get config faill\r\n\n",DAT_00026edc,0x7de);
      }
    }
    else {
      uVar9 = 0xffffffff;
      remove(acStack_e30);
    }
    *param_1 = uVar9;
    FUN_000372a4();
    SystemReboot();
    return uVar9;
  }
LAB_00026602:
  *param_1 = 0;
  return 0;
}


