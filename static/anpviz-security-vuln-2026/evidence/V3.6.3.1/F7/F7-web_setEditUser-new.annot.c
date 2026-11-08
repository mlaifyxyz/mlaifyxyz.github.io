/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 0009f86c */
/* function FUN_0009f86c @ 0009f86c */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0009f86c(char *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  int *__ptr;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  undefined4 *puVar17;
  char *pcVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 *puVar21;
  bool bVar22;
  bool bVar23;
  int local_144;
  int local_140;
  undefined2 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined2 local_130;
  int local_12c;
  undefined4 local_128;
  char local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  int local_100;
  short local_fc;
  char local_9c [104];
  
  memset(&local_100,0,100);
  memset(local_9c,0,100);
  local_12c = 0;
  local_11c = 0;
  local_128 = 0;
  local_120 = 0;
  local_124 = '\0';
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  uStack_134 = 0;
  local_130 = 0;
  __ptr = calloc(0x4b4,1);
  MsgGetUserConfig();
  iVar5 = FUN_0009e5d4(param_2,DAT_000a0068 + 0x9f8e8 /*"username"*/,&local_100,100);
  if ((iVar5 == 0) &&
     (iVar5 = FUN_0009d0d0(param_2,DAT_000a0084 + 0x9f9f6 /*"uid"*/,&local_100,100), iVar5 == 0)) {
LAB_0009f9fe:
    uVar13 = 400;
    sprintf(param_3,(char *)(DAT_000a008c + 0x9fa14 /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,(char *)(DAT_000a0088 + 0x9fa12 /*"username not exist to edit"*/));
    goto LAB_0009f9d6;
  }
  iVar5 = *__ptr;
  if (0 < iVar5) {
    piVar14 = __ptr + 1;
    pcVar16 = (char *)(DAT_000a006c + 0x9f904 /*"Administrator"*/);
    iVar12 = 0;
    do {
      iVar6 = strcasecmp((char *)piVar14,(char *)&local_100);
      iVar20 = iVar12 + 1;
      piVar7 = piVar14 + 0x14;
      piVar14 = piVar14 + 0x1e;
      if ((iVar6 == 0) && (iVar6 = strcmp((char *)piVar7,pcVar16), iVar6 != 0)) {
        uVar13 = 400;
        sprintf(param_3,(char *)(DAT_000a00e0 + 0x9fcea /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,(char *)(DAT_000a00dc + 0x9fce8 /*"Non administrator cannot manage user"*/));
        goto LAB_0009f9d6;
      }
      bVar22 = SBORROW4(iVar20,10);
      iVar6 = iVar12 + -9;
      if (iVar20 != 10) {
        bVar22 = SBORROW4(iVar20,iVar5);
        iVar6 = iVar20 - iVar5;
      }
      iVar12 = iVar20;
    } while (iVar6 < 0 != bVar22);
  }
  iVar5 = FUN_0009d0d0(param_2,DAT_000a0070 + 0x9f93e /*"action"*/,&local_12c,10);
  if (iVar5 == 0) {
LAB_0009f9c6:
    uVar13 = 200;
    memcpy(param_3,(void *)(DAT_000a0080 + 0x9f9d4 /*"<?xml version="1.0" encoding="UTF-8"?>
<user_management>OK</user_management>"*/),0x4e);
  }
  else {
    if (local_12c != 0x646461) {
      if (((local_12c == 0x656c6564) && ((short)local_128 == 0x6574)) && (local_128._2_1_ == '\0'))
      {
        iVar5 = FUN_0009e5d4(param_2,DAT_000a00d8 + 0x9fc7a /*"name"*/,&local_100,100);
        if (iVar5 != 0) {
          if ((local_100 == 0x696d6461) && (local_fc == 0x6e)) {
            uVar13 = 400;
            sprintf(param_3,(char *)(DAT_000a0148 + 0x9ff2e /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,
                    (char *)(DAT_000a0144 + 0x9ff2c /*"name: can not delete name:admin"*/));
            goto LAB_0009f9d6;
          }
          iVar5 = *__ptr;
          if (0 < iVar5) {
            bVar22 = false;
            iVar12 = 0;
            piVar14 = __ptr + 1;
            do {
              iVar20 = iVar12 + 1;
              iVar6 = strcasecmp((char *)piVar14,(char *)&local_100);
              if (iVar6 == 0) {
                bVar22 = true;
                MsgUserDeleteUser(&local_100);
                iVar5 = *__ptr;
              }
              bVar23 = SBORROW4(iVar20,10);
              iVar6 = iVar12 + -9;
              if (iVar20 != 10) {
                bVar23 = SBORROW4(iVar5,iVar20);
                iVar6 = iVar5 - iVar20;
              }
              iVar12 = iVar20;
              piVar14 = piVar14 + 0x1e;
            } while ((iVar20 != 10 && iVar5 != iVar20) && iVar6 < 0 == bVar23);
            if (bVar22) goto LAB_0009f9c6;
          }
          uVar13 = 400;
          sprintf(param_3,(char *)(DAT_000a0120 + 0x9fe7a /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,(char *)(DAT_000a011c + 0x9fe78 /*"error username"*/))
          ;
          goto LAB_0009f9d6;
        }
      }
      else {
        if ((local_12c != 0x74696465) || ((local_128 & 0xff) != 0)) {
          if ((local_12c == 0x5f746567) && ((local_128 == 0x72657375 && (local_124 == '\0')))) {
            MsgGetUserConfig(__ptr);
            puVar17 = (undefined4 *)(DAT_000a00b0 + 0x9fb60 /*"fig>
"*/);
            pcVar16 = param_3;
            puVar19 = (undefined4 *)(DAT_000a00b0 + 0x9fb30 /*"<?xml version="1.0" encoding="UTF-8"?>
<UserConfig>
"*/);
            do {
              puVar21 = puVar19;
              pcVar18 = pcVar16;
              uVar13 = puVar21[1];
              uVar9 = puVar21[2];
              uVar11 = puVar21[3];
              *(undefined4 *)pcVar18 = *puVar21;
              *(undefined4 *)(pcVar18 + 4) = uVar13;
              *(undefined4 *)(pcVar18 + 8) = uVar9;
              *(undefined4 *)(pcVar18 + 0xc) = uVar11;
              pcVar16 = pcVar18 + 0x10;
              puVar19 = puVar21 + 4;
            } while (puVar21 + 4 != puVar17);
            uVar2 = *(undefined2 *)(puVar21 + 5);
            cVar1 = *(char *)((int)puVar21 + 0x16);
            *(undefined4 *)(pcVar18 + 0x10) = puVar21[4];
            iVar12 = *__ptr;
            *(undefined2 *)(pcVar18 + 0x14) = uVar2;
            pcVar18[0x16] = cVar1;
            iVar5 = DAT_000a00b4;
            if (iVar12 < 1) {
              iVar12 = 0x36;
            }
            else {
              piVar14 = __ptr + 1;
              iVar12 = 0x36;
              puVar19 = (undefined4 *)(DAT_000a00b4 + 0x9fb8c /*"<Account "*/);
              pcVar18 = (char *)(DAT_000a00b8 + 0x9fb8e /*"Username="%s" "*/);
              pcVar16 = (char *)(DAT_000a00bc + 0x9fb90 /*"Group="%s" "*/);
              iVar6 = 0;
              do {
                uVar13 = *(undefined4 *)(iVar5 + 0x9fb90);
                iVar15 = iVar6 + 1;
                uVar2 = *(undefined2 *)(iVar5 + 0x9fb94);
                *(undefined4 *)(param_3 + iVar12) = *puVar19;
                *(undefined4 *)(param_3 + iVar12 + 4) = uVar13;
                *(undefined2 *)(param_3 + iVar12 + 8) = uVar2;
                iVar8 = sprintf(param_3 + iVar12 + 9,pcVar18,(char *)piVar14);
                iVar8 = iVar12 + 9 + iVar8;
                iVar12 = sprintf(param_3 + iVar8,pcVar16,(char *)(piVar14 + 0x14));
                piVar7 = piVar14 + 0x1c;
                piVar14 = piVar14 + 0x1e;
                iVar8 = iVar8 + iVar12;
                iVar12 = sprintf(param_3 + iVar8,(char *)(DAT_000a00c0 + 0x9fbd4 /*"Status="%s" "*/),(char *)piVar7);
                iVar10 = *__ptr;
                bVar22 = SBORROW4(iVar15,10);
                iVar20 = iVar6 + -9;
                if (iVar15 != 10) {
                  bVar22 = SBORROW4(iVar10,iVar15);
                  iVar20 = iVar10 - iVar15;
                }
                iVar8 = iVar8 + iVar12;
                cVar1 = *(char *)(DAT_000a00c4 + 0x9fbea);
                iVar12 = iVar8 + 4;
                *(undefined4 *)(param_3 + iVar8) = *(undefined4 *)(DAT_000a00c4 + 0x9fbe6 /*"/>
"*/);
                param_3[iVar8 + 4] = cVar1;
                iVar6 = iVar15;
              } while ((iVar15 != 10 && iVar10 != iVar15) && iVar20 < 0 == bVar22);
            }
            uVar13 = 200;
            uVar9 = *(undefined4 *)(DAT_000a00c8 + 0x9fc14 /*"erConfig>"*/);
            uVar11 = *(undefined4 *)(DAT_000a00c8 + 0x9fc18 /*"nfig>"*/);
            uVar2 = *(undefined2 *)(DAT_000a00c8 + 0x9fc1c /*">"*/);
            *(undefined4 *)(param_3 + iVar12) = *(undefined4 *)(DAT_000a00c8 + 0x9fc10 /*"</UserConfig>"*/);
            *(undefined4 *)(param_3 + iVar12 + 4) = uVar9;
            *(undefined2 *)(param_3 + iVar12 + 0xc) = uVar2;
            *(undefined4 *)(param_3 + iVar12 + 8) = uVar11;
          }
          else {
            uVar13 = 400;
            sprintf(param_3,(char *)(DAT_000a0078 + 0x9f996 /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,
                    (char *)(DAT_000a0074 + 0x9f994 /*"action: add or edit or delete or get_user"*/));
          }
          goto LAB_0009f9d6;
        }
        iVar5 = FUN_0009e5d4(param_2,DAT_000a00e4 + 0x9fd04 /*"name"*/,&local_100,100);
        bVar22 = false;
        if (iVar5 != 0) {
          if ((local_100 == 0x696d6461) && (local_fc == 0x6e)) {
            iVar5 = FUN_0009d0d0(param_2,DAT_000a014c + 0x9ff46 /*"enable"*/,&local_144,10);
            if ((iVar5 != 0) && ((local_144 == 0x61736944 && (local_140 == 0x656c62)))) {
              uVar13 = 400;
              sprintf(param_3,(char *)(DAT_000a0170 + 0xa0016 /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,
                      (char *)(DAT_000a016c + 0xa0014 /*"edit: can not disable:admin"*/));
              goto LAB_0009f9d6;
            }
            iVar5 = FUN_0009d0d0(param_2,DAT_000a0150 + 0x9ff66 /*"privilege"*/,&local_120,10);
            if ((iVar5 != 0) &&
               ((((local_120 != 0x696d6441 || (local_11c != 0x7473696e)) ||
                 (local_118 != 0x6f746172)) || ((short)local_114 != 0x72)))) {
              uVar13 = 400;
              sprintf(param_3,(char *)(DAT_000a0158 + 0x9ff8e /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,
                      (char *)(DAT_000a0154 + 0x9ff8c /*"Administrator's rights cannot be modified"*/));
              goto LAB_0009f9d6;
            }
          }
          iVar5 = *__ptr;
          if (0 < iVar5) {
            piVar14 = __ptr + 1;
            iVar6 = DAT_000a00e8 + 0x9fd36 /*"newpasswd"*/;
            iVar20 = DAT_000a00ec + 0x9fd46 /*"privilege"*/;
            iVar8 = DAT_000a00f0 + 0x9fd50 /*"enable"*/;
            iVar12 = 0;
            do {
              iVar10 = strcasecmp((char *)piVar14,(char *)&local_100);
              if (iVar10 == 0) {
                iVar5 = FUN_0009f850(param_2,iVar6,local_9c,100);
                if (iVar5 < 1) {
                  if (iVar5 == -1) {
                    strcpy(local_9c,(char *)(__ptr + iVar12 * 0x1e + 0xb));
                  }
                  else if (local_9c[0] == '\0') {
                    uVar13 = 400;
                    sprintf(param_3,(char *)(DAT_000a0178 + 0xa0052 /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,
                            (char *)(DAT_000a0174 + 0xa0050 /*"newpasswd: NULL"*/));
                    goto LAB_0009f9d6;
                  }
                }
                iVar5 = FUN_0009e1e4(param_2,iVar20,&local_120,0x14);
                if (iVar5 < 1) {
                  if (iVar5 == -1) {
                    strcpy((char *)&local_120,(char *)(__ptr + iVar12 * 0x1e + 0x15));
                  }
                  else if ((char)local_120 == '\0') {
                    uVar13 = 400;
                    sprintf(param_3,(char *)(DAT_000a0128 + 0x9fe9e /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,
                            (char *)(DAT_000a0124 + 0x9fe9c /*"privilege: NULL"*/));
                    goto LAB_0009f9d6;
                  }
                }
                else {
                  iVar5 = strcmp((char *)&local_120,(char *)(DAT_000a00f4 + 0x9fdb0 /*"User"*/));
                  if (((iVar5 != 0) &&
                      (iVar5 = strcmp((char *)&local_120,(char *)(DAT_000a00f8 + 0x9fdbc /*"Administrator"*/)),
                      iVar5 != 0)) &&
                     (iVar5 = strcmp((char *)&local_120,(char *)(DAT_000a00fc + 0x9fdc8 /*"Operator"*/)),
                     iVar5 != 0)) goto LAB_0009faec;
                }
                iVar5 = FUN_0009e1e4(param_2,iVar8,&local_144,10);
                if (iVar5 < 1) {
                  if (iVar5 == -1) {
                    strcpy((char *)&local_144,(char *)(__ptr + iVar12 * 0x1e + 0x1d));
                  }
                  else if ((char)local_144 == '\0') {
                    uVar13 = 400;
                    sprintf(param_3,(char *)(DAT_000a0130 + 0x9fec4 /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,
                            (char *)(DAT_000a012c + 0x9fec2 /*"enable: NULL"*/));
                    goto LAB_0009f9d6;
                  }
                }
                else {
                  iVar5 = strcmp((char *)&local_144,(char *)(DAT_000a0100 + 0x9fdea /*"Enable"*/));
                  if ((iVar5 != 0) &&
                     (iVar5 = strcmp((char *)&local_144,(char *)(DAT_000a0104 + 0x9fdf6 /*"Disable"*/)),
                     iVar5 != 0)) goto LAB_0009fe4a;
                }
                bVar22 = true;
                DebugPrint(8,7,DAT_000a010c + 0x9fe18 /*"[%s:%u]111MsgUserEditUser myusername=%s,mypassword=%s,mygroup=%s,mystatus=%s

"*/,DAT_000a0108 + 0x9fe14 /*"cgi_User_Management"*/,0xb0c,&local_100,
                           local_9c,&local_120,&local_144);
                MsgUserEditUser(&local_100,local_9c,&local_120,&local_144);
                iVar5 = *__ptr;
              }
              iVar15 = iVar12 + 1;
              piVar14 = piVar14 + 0x1e;
              bVar23 = SBORROW4(iVar15,10);
              iVar10 = iVar12 + -9;
              if (iVar15 != 10) {
                bVar23 = SBORROW4(iVar5,iVar15);
                iVar10 = iVar5 - iVar15;
              }
              iVar12 = iVar15;
            } while ((iVar15 != 10 && iVar5 != iVar15) && iVar10 < 0 == bVar23);
            if (bVar22) goto LAB_0009f9c6;
          }
          goto LAB_0009f9fe;
        }
      }
      uVar13 = 400;
      sprintf(param_3,(char *)(DAT_000a0140 + 0x9ff10 /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,(char *)(DAT_000a013c + 0x9ff0e /*"user name is none"*/));
      goto LAB_0009f9d6;
    }
    bVar4 = 0;
    iVar5 = FUN_0009e5d4(param_2,DAT_000a0090 + 0x9fa26 /*"name"*/,&local_100,100);
    if (iVar5 == 0) {
      bVar3 = 1;
    }
    else {
      if ((local_100 == 0x696d6461) && (local_fc == 0x6e)) {
        uVar13 = 400;
        sprintf(param_3,(char *)(DAT_000a0138 + 0x9fefa /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,(char *)(DAT_000a0134 + 0x9fef8 /*"name: can not create name:admin"*/));
        goto LAB_0009f9d6;
      }
      iVar5 = *__ptr;
      if (0 < iVar5) {
        piVar14 = __ptr + 1;
        iVar12 = 0;
        do {
          iVar20 = iVar12 + 1;
          iVar6 = strcasecmp((char *)piVar14,(char *)&local_100);
          if (iVar6 == 0) {
            uVar13 = 400;
            sprintf(param_3,(char *)(DAT_000a0160 + 0x9ffa4 /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,
                    (char *)(DAT_000a015c + 0x9ffa2 /*"error username duplicated"*/));
            goto LAB_0009f9d6;
          }
          bVar22 = SBORROW4(iVar20,10);
          iVar6 = iVar12 + -9;
          if (iVar20 != 10) {
            bVar22 = SBORROW4(iVar20,iVar5);
            iVar6 = iVar20 - iVar5;
          }
          piVar14 = piVar14 + 0x1e;
          iVar12 = iVar20;
        } while (iVar6 < 0 != bVar22);
      }
      bVar3 = 0;
    }
    iVar5 = FUN_0009e5d4(param_2,DAT_000a0094 + 0x9fa84 /*"newpasswd"*/,local_9c,100);
    if (iVar5 == 0) {
      bVar4 = 1;
    }
    else if (local_9c[0] == '\0') {
      uVar13 = 400;
      sprintf(param_3,(char *)(DAT_000a0168 + 0x9ffba /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,(char *)(DAT_000a0164 + 0x9ffb8 /*"error newpasswd: NULL"*/));
      goto LAB_0009f9d6;
    }
    iVar5 = FUN_0009d0d0(param_2,DAT_000a0098 + 0x9faa6 /*"privilege"*/,&local_120,0x14);
    if (iVar5 == 0) {
      bVar22 = true;
    }
    else {
      iVar5 = strcmp((char *)&local_120,(char *)(DAT_000a009c + 0x9faba /*"User"*/));
      bVar22 = false;
      if (iVar5 != 0) {
        iVar5 = strcmp((char *)&local_120,(char *)(DAT_000a00a0 + 0x9face /*"Administrator"*/));
        bVar22 = false;
        if (iVar5 != 0) {
          iVar5 = strcmp((char *)&local_120,(char *)(DAT_000a00a4 + 0x9fae2 /*"Operator"*/));
          bVar22 = false;
          if (iVar5 != 0) {
LAB_0009faec:
            uVar13 = 400;
            sprintf(param_3,(char *)(DAT_000a00ac + 0x9fb02 /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,
                    (char *)(DAT_000a00a8 + 0x9fb00 /*"privilege: User or Administrator or Operator"*/));
            goto LAB_0009f9d6;
          }
        }
      }
    }
    iVar5 = FUN_0009d0d0(param_2,DAT_000a00cc + 0x9fc30 /*"enable"*/,&local_144,10);
    if (iVar5 != 0) {
      iVar5 = strcmp((char *)&local_144,(char *)(DAT_000a007c + 0x9f9a4 /*"Enable"*/));
      if ((iVar5 != 0) &&
         (iVar5 = strcmp((char *)&local_144,(char *)(DAT_000a0110 + 0x9fe42 /*"Disable"*/)), iVar5 != 0)) {
LAB_0009fe4a:
        uVar13 = 400;
        sprintf(param_3,(char *)(DAT_000a0118 + 0x9fe5c /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,(char *)(DAT_000a0114 + 0x9fe5a /*"enable: Enable or Disable"*/));
        goto LAB_0009f9d6;
      }
      if (!(bool)(bVar4 | bVar3) && !bVar22) {
        MsgUserAddUser(&local_100,local_9c,&local_120,&local_144);
        goto LAB_0009f9c6;
      }
    }
    uVar13 = 400;
    sprintf(param_3,(char *)(DAT_000a00d4 + 0x9fc50 /*"<?xml version="1.0" encoding="UTF-8"?>
<fault>
<value>%s</value>
<reason>%s</reason>
</fault>
"*/),param_1,(char *)(DAT_000a00d0 + 0x9fc4e /*"The parameters should Correct include name,newpasswd,privilege,enable"*/));
  }
LAB_0009f9d6:
  free(__ptr);
  return uVar13;
}


