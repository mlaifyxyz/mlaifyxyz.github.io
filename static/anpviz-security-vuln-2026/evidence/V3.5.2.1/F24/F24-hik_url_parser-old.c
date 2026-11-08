/* hik_server (9fbc544a08dee4f84df11770754e254b13e8d25d5fb8d514b795f85a790cb910), Ghidra 12.2 headless; requested 00032c08 */
/* function FUN_00032c08 @ 00032c08 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00032c08(long *param_1,int param_2)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  PlaybackFileInfo *pPVar11;
  time_t tVar12;
  long lVar13;
  CPlayFileSession *pCVar14;
  PlaybackFileInfo *pPVar15;
  PlaybackFileInfo **ppPVar16;
  CPlaybackSession *this;
  uint uVar17;
  void *pvVar18;
  int *piVar19;
  char *pcVar20;
  undefined4 uVar21;
  int iVar22;
  char cVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  byte bVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int iVar29;
  uint uVar30;
  uint *puVar31;
  char *pcVar32;
  void *__s;
  uint *puVar33;
  short sVar34;
  bool bVar35;
  bool bVar36;
  PlaybackFileInfo **local_10f0;
  uint local_10e4;
  PlaybackFileInfo **local_10d4;
  uint local_10d0;
  PlaybackFileInfo **local_10cc;
  tm *local_10c8;
  uint local_10c0;
  int iStack_10b4;
  long local_10b0;
  int iStack_10ac;
  int iStack_10a8;
  int iStack_10a4;
  uint uStack_10a0;
  uint uStack_109c;
  uint uStack_1098;
  char *local_1094;
  uint local_1090;
  char local_108c [16];
  char *pcStack_107c;
  undefined4 local_1078;
  char local_1074 [16];
  char *pcStack_1064;
  undefined4 local_1060;
  char local_105c [16];
  PlaybackFileInfo *local_104c;
  size_t local_1048;
  uint local_1044 [4];
  PlaybackFileInfo **ppPStack_1034;
  PlaybackFileInfo *local_1030;
  PlaybackFileInfo *local_102c [4];
  PlaybackFileInfo *local_101c;
  size_t local_1018;
  uint local_1014;
  undefined4 uStack_1010;
  undefined4 uStack_100c;
  undefined4 uStack_1008;
  int local_1004 [12];
  char local_fd4 [64];
  int local_f94;
  undefined1 auStack_f90 [96];
  char local_f30 [128];
  char local_eb0 [128];
  int local_e30;
  undefined1 auStack_e2c [252];
  undefined1 *local_d30;
  undefined1 local_d2c [4];
  undefined1 auStack_d28 [248];
  PlaybackFileInfo *local_c30;
  PlaybackFileInfo *local_c2c;
  PlaybackFileInfo *local_c28;
  PlaybackFileInfo *local_c24;
  PlaybackFileInfo *local_c20;
  PlaybackFileInfo *local_c1c;
  PlaybackFileInfo *local_c18;
  PlaybackFileInfo *local_c14;
  PlaybackFileInfo *local_b30;
  undefined1 auStack_b2c [252];
  tm local_a30 [5];
  PlaybackFileInfo *local_930;
  PlaybackFileInfo *local_92c;
  PlaybackFileInfo *local_928;
  PlaybackFileInfo *local_924;
  PlaybackFileInfo *local_920;
  PlaybackFileInfo *local_91c;
  PlaybackFileInfo *local_918;
  PlaybackFileInfo *local_914;
  char cStack_831;
  undefined4 local_830;
  undefined4 local_82c;
  uint local_828;
  undefined4 uStack_824;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined1 local_80c;
  int local_190;
  int local_18c;
  uint local_188;
  uint local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined1 auStack_160 [44];
  undefined4 local_134;
  uint *local_130 [3];
  uint local_124 [4];
  undefined4 local_114;
  uint *local_110;
  uint local_10c;
  uint local_108;
  char *local_104;
  ushort local_fa;
  uint local_f8;
  uint local_f4 [5];
  timeval local_e0;
  uint local_d8 [8];
  uint *local_b8;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  long local_a4;
  undefined4 local_a0;
  long local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [40];
  int local_6c;
  char local_68 [36];
  int local_44;
  undefined1 auStack_40 [20];
  
  if (*(int *)(param_2 + 0x20) == 10) {
switchD_00032c20_caseD_4:
    return -1;
  }
  FUN_000360e4();
  uVar21 = FUN_000360f4();
  iVar29 = DAT_00032a54;
  iVar22 = DAT_00031e58;
  switch(uVar21) {
  case 0:
    local_f8 = 1;
    local_f4[0] = 1;
    local_f4[1] = 0;
    FUN_00037618(&local_98);
    iVar22 = iVar22 + 0x311a0;
    FUN_00037668(&local_98,param_2);
    if (*(char *)((int)param_1 + 0x5f) == '\0') {
      local_6c = 0xb;
      FUN_0002ded8(param_1,&local_98);
    }
    else {
      iVar29 = FUN_00036f58(param_2,DAT_00031e5c + 0x311b6);
      if (iVar29 != 0) {
        pcVar20 = (char *)FUN_00036c2c();
        local_110 = (uint *)FUN_00036c74(iVar29);
        pcVar5 = *(char **)(param_2 + 0x2c);
        local_130[0] = (uint *)0xa55;
        local_130[1] = (uint *)param_1;
        local_130[2] = (uint *)pcVar5;
        DebugPrint(8,7,DAT_00031e64 + 0x311ec,DAT_00031e60 + 0x311e6);
        local_130[2] = (uint *)(uint)*(byte *)(param_1 + 0x18);
        local_130[0] = (uint *)0xa56;
        local_130[1] = (uint *)param_1;
        DebugPrint(8,7,DAT_00031e68 + 0x31212,DAT_00031e6c + 0x31216);
        local_f4[2] = 0;
        local_f4[3] = 0;
        local_104 = local_68;
        memset(local_68,0,0x40);
        local_130[2] = local_f4 + 1;
        local_130[0] = local_f4 + 3;
        local_130[1] = (uint *)local_68;
        FUN_000234b4(pcVar5,local_f4,&local_f8,local_f4 + 2);
        if (**(int **)(iVar22 + DAT_00031e70) == 1) {
          local_f4[0] = param_1[0x3c];
          local_f8 = param_1[0x3d];
        }
        if ((param_1[0x3b] == 1) && (**(int **)(iVar22 + DAT_00031ea0) != 0)) {
          if (local_f4[0] == 0) {
            local_f4[0] = 2;
          }
          else if (local_f4[0] == 1) {
            local_f4[0] = 3;
          }
        }
        if ((int)local_f4[2] < 1) {
          if (0 < (int)local_f4[3]) {
            *(undefined1 *)(param_1 + 0x18) = 0x10;
            iVar4 = FUN_0002650c(local_f8,local_f4[0]);
            if (iVar4 != 0) {
              local_10c = 0;
              bVar26 = *(byte *)(param_1 + 0x18);
              local_108 = (uint)(param_1[0xf] == 0);
              goto LAB_00031696;
            }
LAB_00031be4:
            local_6c = 0x26;
            FUN_0002ded8(param_1,&local_98);
            goto LAB_000314d0;
          }
          pcVar6 = strchr(pcVar5,0x2a);
          if (pcVar6 == (char *)0x0) {
            local_114 = (char *)0x0;
            local_108 = 0;
          }
          else {
            iVar4 = FUN_0002650c(local_f8,local_f4[0]);
            if (iVar4 == 0) {
              *(undefined1 *)(param_1 + 0x18) = 1;
              local_114 = (char *)0x0;
              local_108 = 0;
            }
            else {
              *(undefined1 *)(param_1 + 0x18) = 0x11;
              local_114 = (char *)0x1;
              local_108 = (uint)(param_1[0xf] == 0);
            }
          }
          pcVar6 = strstr(pcVar5,(char *)(DAT_00031eb8 + 0x3183e));
          if (pcVar6 != (char *)0x0) {
            *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
          }
          pcVar6 = strstr(pcVar5,(char *)(DAT_00031ebc + 0x31858));
          if (pcVar6 != (char *)0x0) {
            iVar4 = FUN_0002650c(local_f8,local_f4[0]);
            if (iVar4 == 0) goto LAB_00031be4;
            if (param_1[0xf] == 0) {
              local_108 = (uint)(param_1[0x10] == 0);
            }
            local_114 = (char *)0x1;
            *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 0x10;
          }
          pcVar6 = strstr(pcVar5,(char *)(DAT_00031ec0 + 0x3188c));
          if ((pcVar6 == (char *)0x0) &&
             (pcVar6 = strstr(pcVar5,(char *)(DAT_00031ee8 + 0x31a26)), pcVar6 == (char *)0x0)) {
            local_10c = 0;
          }
          else {
            *(undefined1 *)((int)param_1 + 99) = 1;
            local_130[1] = (uint *)0x1;
            local_130[0] = (uint *)0xab3;
            DebugPrint(8,7,DAT_00031ec8 + 0x318b4,DAT_00031ec4 + 0x318b2);
            local_10c = 1;
          }
          pcVar32 = (char *)(DAT_00031ecc + 0x318c4);
          pcVar6 = strcasestr(pcVar5,pcVar32);
          if (pcVar6 == (char *)0x0) {
            bVar26 = *(byte *)(param_1 + 0x18);
            if (local_114 != (char *)0x0) goto LAB_00031696;
            if (bVar26 < 2) goto LAB_0003127a;
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 0x10;
            local_130[0] = (uint *)0xab9;
            local_130[1] = (uint *)pcVar32;
            DebugPrint(8,7,DAT_00031ed0 + 0x318ee,DAT_00031ed4 + 0x318f0);
            if (pcVar20 == (char *)0x0) {
              *(undefined1 *)(param_1 + 0x18) = 0;
              local_114 = (char *)0x1;
            }
            else {
              bVar26 = *(byte *)(param_1 + 0x18);
LAB_00031696:
              if (bVar26 == 0x10) {
                local_114 = (char *)0x1;
                goto LAB_0003127a;
              }
              local_114 = (char *)0x1;
            }
          }
        }
        else {
          local_108 = 0;
          local_114 = (char *)0x0;
          local_10c = 0;
          *(undefined1 *)(param_1 + 0x18) = 1;
LAB_0003127a:
          gettimeofday(&local_e0,(__timezone_ptr_t)0x0);
          srandom(local_e0.tv_usec);
          lVar13 = random();
          param_1[0xd] = lVar13;
        }
        local_d8[0] = 0;
        local_d8[1] = 0;
        local_d8[2] = 0;
        local_d8[3] = 0;
        local_d8[4] = 0;
        local_d8[5] = 0;
        local_d8[6] = 0;
        local_d8[7] = 0;
        FUN_0002cafc(local_d8);
        FUN_00037694(&local_98,local_d8);
        local_130[0] = (uint *)0xadf;
        local_130[2] = local_110;
        local_130[1] = (uint *)pcVar20;
        DebugPrint(8,7,DAT_00031e78 + 0x312d6,DAT_00031e74 + 0x312d0);
        if (((uint)pcVar20 & 0xfffffffd) == 1) {
          *(undefined1 *)(param_1 + 0x17) = 1;
          local_fa = 0;
          local_f4[4] = 0;
          pcVar20 = (char *)FUN_00026934(local_f8);
          if ((int)pcVar20 < 0xb) {
            iVar4 = FUN_00036bb0(iVar29);
            puVar31 = (uint *)0x1;
            if (iVar4 == 0) {
              puVar31 = (uint *)0x3;
              *(undefined1 *)(param_1 + 0x17) = 3;
            }
            if (((char)param_1[0x39] == '\0') ||
               (pcVar20 = strstr(pcVar5,(char *)(DAT_00031e9c + 0x31518)), pcVar20 == (char *)0x0))
            {
              if (((local_108 ^ 1) & (uint)local_114) == 0) {
                if (local_10c == 0) {
                  uVar30 = param_1[4] & 0xffff;
                  local_fa = (ushort)param_1[4];
                  param_1[0xc] = uVar30;
                  if (puVar31 == (uint *)0x3) {
                    FUN_00037c30(&local_98,param_2,uVar30,1);
                  }
                  else {
                    FUN_00037c30(&local_98,param_2,uVar30,3);
                  }
                  goto LAB_00031a60;
                }
LAB_00031806:
                iVar22 = param_1[0xf];
                if (iVar22 != 0) {
                  uVar21 = FUN_00036bb0(iVar29);
                  FUN_00034e18(iVar22,uVar21);
                }
                local_fa = *(ushort *)(param_1 + 0xc);
                FUN_00037c30(&local_98,param_2,local_fa,4);
              }
              else {
                iVar22 = param_1[0xf];
                if (iVar22 != 0) {
                  uVar21 = FUN_00036bb0(iVar29);
                  FUN_00034de8(iVar22,uVar21,0);
                }
                iVar22 = param_1[0x10];
                if (iVar22 != 0) {
                  uVar21 = FUN_00036bb0(iVar29);
                  FUN_00035488(iVar22,uVar21,0);
                }
                local_fa = *(ushort *)(param_1 + 0xc);
                FUN_00037c30(&local_98,param_2,local_fa,2);
              }
            }
            else {
              FUN_00037c30(&local_98,param_2,local_fa,6);
            }
            goto LAB_000317d0;
          }
          local_130[0] = (uint *)0xafe;
          local_130[1] = (uint *)pcVar20;
          DebugPrint(8,7,DAT_00031f00 + 0x31d48,DAT_00031efc + 0x31d42);
LAB_00031d4a:
          local_6c = 0x26;
          FUN_0002ded8(param_1,&local_98);
        }
        else {
          local_f4[4] = (uint)pcVar20 | (uint)local_110;
          if (local_f4[4] == 0) {
            *(undefined1 *)(param_1 + 0x17) = 0;
            local_fa = 0;
            local_130[1] = (uint *)FUN_00026934(local_f8);
            if (10 < (int)local_130[1]) {
              local_130[0] = (uint *)0xb50;
              DebugPrint(8,7,DAT_00031f10 + 0x31dd4,DAT_00031f0c + 0x31dce);
              goto LAB_00031d4a;
            }
            local_130[2] = (uint *)(uint)*(byte *)(param_1 + 0x39);
            local_130[0] = (uint *)0xb56;
            local_124[0] = local_108;
            local_130[1] = (uint *)local_114;
            DebugPrint(8,7,DAT_00031e7c + 0x31320,DAT_00031e80 + 0x31324);
            if (((local_108 ^ 1) & (uint)local_114) != 0) {
              if (((char)param_1[0x39] == '\0') ||
                 (pcVar20 = strstr(pcVar5,(char *)(DAT_00031e84 + 0x3134e)), pcVar20 == (char *)0x0)
                 ) {
                iVar22 = param_1[0xf];
                if (iVar22 != 0) {
                  uVar21 = FUN_00036bb0(iVar29);
                  FUN_00034de8(iVar22,uVar21,0);
                }
              }
              else {
                puVar24 = *(undefined4 **)(iVar22 + DAT_00031e88);
                SemWait(*puVar24);
                iVar22 = FUN_000393a4();
                local_fa = FUN_00035868(*(undefined4 *)(iVar22 + 4));
                SemRelease(*puVar24);
                if ((param_1[0xf] == 0) || (iVar22 = FUN_00034d6c(), iVar22 == 0)) {
                  local_130[0] = (uint *)0xb6d;
                  DebugPrint(8,7,DAT_00031e90 + 0x313a4,DAT_00031e8c + 0x313a0);
                  uVar30 = (uint)local_fa;
                  param_1[0xc] = uVar30;
                  if (param_1[0xf] != 0) {
                    bVar26 = *(byte *)(param_1 + 0x17);
                    local_124[1] = FUN_00036bb0(iVar29);
                    local_130[2] = (uint *)0x0;
                    local_130[0] = (uint *)0xb72;
                    local_130[1] = (uint *)(uint)bVar26;
                    local_124[0] = uVar30;
                    DebugPrint(8,7,DAT_00031e94 + 0x313d4,DAT_00031e98 + 0x313dc);
                    FUN_0003532c(param_1[0xf],0);
                    pvVar18 = (void *)param_1[0xf];
                    if (pvVar18 != (void *)0x0) {
                      FUN_00034bfc(pvVar18);
                      operator_delete(pvVar18,0x50);
                    }
                    param_1[0xf] = 0;
                  }
                  pvVar18 = operator_new(0x50);
                  FUN_00034bac(pvVar18,param_1);
                  param_1[0xf] = (long)pvVar18;
                  FUN_00034e64(pvVar18,local_f8);
                  FUN_00034e94(param_1[0xf],local_f4[0]);
                  local_b8 = (uint *)0x0;
                  local_b0 = 0;
                  local_ac = 0;
                  local_a8 = 0;
                  local_a4 = 0;
                  local_a0 = 0;
                  local_9c = 0;
                  local_b4 = param_1[0xc] & 0xffff;
                  uVar3 = FUN_00036bb0(iVar29);
                  local_b0 = param_1[9];
                  local_a4 = param_1[0xe];
                  local_9c = param_1[0xd];
                  local_b4 = CONCAT22(uVar3,(undefined2)local_b4);
                  local_a0._0_2_ =
                       CONCAT11(*(undefined1 *)((int)param_1 + 0x62),(undefined1)local_a0);
                  iVar22 = FUN_00034c00(param_1[0xf],&local_b8);
                  if (iVar22 == -1) {
                    pvVar18 = (void *)param_1[0xf];
                    if (pvVar18 != (void *)0x0) {
                      FUN_00034bfc(pvVar18);
                      operator_delete(pvVar18,0x50);
                    }
                    param_1[0xf] = 0;
                    local_6c = 0x26;
                    FUN_0002ded8(param_1,&local_98);
                    iVar22 = -1;
                    goto LAB_000314d2;
                  }
                }
                else {
                  local_130[0] = (uint *)0xb69;
                  DebugPrint(8,7,DAT_00031f08 + 0x31d88,DAT_00031f04 + 0x31d84);
                }
              }
              local_130[0] = (uint *)0xba1;
              local_fa = (ushort)param_1[0xc];
              local_130[1] = (uint *)(param_1[0xc] & 0xffff);
              DebugPrint(8,7,DAT_00031ef0 + 0x31ab8,DAT_00031eec + 0x31ab2);
              FUN_00037c30(&local_98,param_2,local_fa,1);
              goto LAB_000317d0;
            }
            if (local_10c != 0) goto LAB_00031806;
            puVar24 = *(undefined4 **)(iVar22 + DAT_00031e88);
            SemWait(*puVar24);
            iVar4 = FUN_000393a4();
            local_fa = FUN_00035868(*(undefined4 *)(iVar4 + 4));
            SemRelease(*puVar24);
            iVar4 = DAT_00031ef4;
            local_130[1] = (uint *)(uint)local_fa;
            local_130[0] = (uint *)0xbbc;
            param_1[0xc] = (long)local_130[1];
            DebugPrint(8,7,DAT_00031ef8 + 0x31b30,iVar4 + 0x31b2a);
            FUN_00037c30(&local_98,param_2,local_fa,1);
            puVar31 = (uint *)0x0;
LAB_00031a60:
            local_130[1] = (uint *)(uint)local_fa;
          }
          else {
            if (pcVar20 == (char *)0x0 && local_110 == (uint *)0x1) {
              puVar33 = (uint *)((uint)local_114 & 0xff);
              puVar31 = local_f4 + 4;
              *(undefined1 *)(param_1 + 0x17) = 2;
              local_fa = 0;
              local_f4[4] = 0;
              local_130[0] = puVar31;
              local_10c = FUN_00022504(local_f4[0] & 0xff,local_f8 & 0xff,puVar33,&local_fa);
              local_10c = local_10c & 0xff;
              if (local_10c == 0) {
                if (local_114 == (char *)0x0) {
                  cVar23 = *(char *)((int)param_1 + 0x61) + '\a';
                }
                else {
                  cVar23 = *(char *)((int)param_1 + 0x61) + '\x14';
                }
                *(char *)((int)param_1 + 0x61) = cVar23;
                if (param_1[0xf] == 0) {
                  pcVar20 = (char *)FUN_00026934(local_f8);
                  if (10 < (int)pcVar20) {
                    local_130[0] = (uint *)0xbf3;
                    local_130[1] = (uint *)pcVar20;
                    DebugPrint(8,7,DAT_00031f18 + 0x31e3e,DAT_00031f14 + 0x31e38);
                    goto LAB_00031d4a;
                  }
                  FUN_00037b94(&local_98,param_2,&local_fa,puVar31);
                  if ((local_f4[4] != 0) && (local_fa == 0)) {
                    sVar34 = **(short **)(iVar22 + DAT_00031ea4);
                    if (local_114 == (char *)0x0) {
                      if (local_f4[0] == 0) {
                        sVar34 = sVar34 + 0x194;
                      }
                      else {
                        sVar34 = sVar34 + 0x192;
                      }
                    }
                    else {
                      sVar34 = sVar34 + 400;
                    }
                    local_fa = ((short)local_f8 + -1) * 10 + sVar34;
                    local_10c = 1;
                  }
                  local_130[0] = puVar33;
                  FUN_000225e0(local_f4[0] & 0xff,local_f8 & 0xff);
                  FUN_0003797c(&local_98,param_2,local_fa,local_f4[4]);
                  if (local_10c == 0) {
                    sVar2 = ((short)local_f8 + -1) * 10;
                    sVar34 = **(short **)(iVar22 + DAT_00031ea4);
                    if (local_114 == (char *)0x0) {
                      if (local_f4[0] == 0) {
                        puVar31 = (uint *)0x2;
                        local_fa = sVar2 + sVar34 + 0x194;
                        local_130[1] = (uint *)(uint)local_fa;
                      }
                      else {
                        puVar31 = (uint *)0x2;
                        local_fa = sVar2 + sVar34 + 0x192;
                        local_130[1] = (uint *)(uint)local_fa;
                      }
                    }
                    else {
                      puVar31 = (uint *)0x2;
                      local_fa = sVar2 + sVar34 + 400;
                      local_130[1] = (uint *)(uint)local_fa;
                    }
                  }
                  else {
                    local_130[1] = (uint *)(uint)local_fa;
                    puVar31 = (uint *)0x2;
                  }
                  goto LAB_000316ce;
                }
                FUN_00037b94(&local_98,param_2,&local_fa,puVar31);
                if ((local_f4[4] != 0) && (local_fa == 0)) {
                  sVar2 = ((short)local_f8 + -1) * 10;
                  sVar34 = **(short **)(iVar22 + DAT_00031ea4);
                  if (local_114 == (char *)0x0) {
                    if (local_f4[0] == 0) {
                      local_fa = sVar2 + sVar34 + 0x194;
                    }
                    else {
                      local_fa = sVar2 + sVar34 + 0x192;
                    }
                  }
                  else {
                    local_fa = sVar2 + sVar34 + 400;
                  }
                }
                local_130[0] = puVar33;
                FUN_000225e0(local_f4[0] & 0xff,local_f8 & 0xff);
                FUN_00034de8(param_1[0xf],local_fa,local_f4[4]);
              }
              else if (local_10c == 2) {
                *(char *)((int)param_1 + 0x61) = *(char *)((int)param_1 + 0x61) + '\x01';
              }
              else if (local_10c == 3) {
                *(char *)((int)param_1 + 0x61) = *(char *)((int)param_1 + 0x61) + '\x02';
              }
              else if (local_10c == 4) {
                *(char *)((int)param_1 + 0x61) = *(char *)((int)param_1 + 0x61) + '\x03';
              }
              else if (local_10c == 6) {
                *(char *)((int)param_1 + 0x61) = *(char *)((int)param_1 + 0x61) + '\x04';
              }
              FUN_0003797c(&local_98,param_2,local_fa,local_f4[4]);
              goto LAB_000317d0;
            }
            puVar31 = (uint *)0xffffffff;
            local_fa = 0;
            *(undefined1 *)(param_1 + 0x17) = 0xff;
            local_130[1] = (uint *)0x0;
            local_10c = 0;
            local_f4[4] = 0;
          }
LAB_000316ce:
          local_130[0] = (uint *)0xc22;
          DebugPrint(8,7,DAT_00031eac + 0x316e8,DAT_00031ea8 + 0x316e6);
          if (local_fa == 0) goto LAB_00031d4a;
          if ((local_68[0] == '\0') || (param_1[0x10] != 0)) {
            pvVar18 = operator_new(0x50);
            FUN_00034bac(pvVar18,param_1);
            param_1[0xf] = (long)pvVar18;
            FUN_00034e64(pvVar18,local_f8);
            FUN_00034e94(param_1[0xf],local_f4[0]);
            local_b4._0_2_ = 0;
            local_b4._2_2_ = 0;
            local_b0 = 0;
            local_ac = 0;
            local_a8 = 0;
            local_9c = param_1[0xd];
            local_a4 = param_1[0xe];
            local_a0 = (uint)*(byte *)((int)param_1 + 0x62) << 8;
            if ((*(byte *)((int)param_1 + 0x61) < 0x1c) &&
               ((~(0x8f00080U >> (uint)*(byte *)((int)param_1 + 0x61)) & 1) == 0)) {
              if (local_114 == (char *)0x0) {
                if (local_10c == 0) {
                  local_b8 = puVar31;
                  local_b0 = FUN_00036bdc(iVar29);
                  pcVar20 = (char *)thunk_FUN_00036bb0(iVar29);
                  local_b4._2_2_ = (ushort)pcVar20;
                }
                else {
                  pcVar20 = (char *)(uint)local_fa;
                  local_b0 = local_f4[4];
                  local_b4._0_2_ = 0;
                  local_b4._2_2_ = local_fa;
                  local_b8 = puVar31;
                }
                local_ac = 0;
                local_a8 = local_a8 & 0xffff0000;
              }
              else if (local_10c == 0) {
                local_b8 = puVar31;
                local_ac = FUN_00036bdc(iVar29);
                uVar3 = thunk_FUN_00036bb0(iVar29);
                pcVar20 = (char *)(uint)local_b4._2_2_;
                local_a8 = CONCAT22(local_a8._2_2_,uVar3);
              }
              else {
                local_ac = local_f4[4];
                local_a8 = (uint)local_fa;
                pcVar20 = (char *)0x0;
                local_b8 = puVar31;
              }
            }
            else {
              local_b0 = param_1[9];
              local_b8 = puVar31;
              pcVar20 = (char *)FUN_00036bb0(iVar29);
              local_b4._2_2_ = (ushort)pcVar20;
              if (((uint)local_114 & local_108) == 0) {
              }
              else {
                local_b4._2_2_ = 0;
                uVar3 = FUN_00036bb0(iVar29);
                lVar13 = param_1[0xf];
                local_a8 = CONCAT22(local_a8._2_2_,uVar3);
                uVar21 = FUN_00036bb0(iVar29);
                FUN_00034de8(lVar13,uVar21,0);
                pcVar20 = (char *)(uint)local_b4._2_2_;
              }
            }
            local_130[0] = (uint *)0xcd8;
            local_130[1] = (uint *)pcVar20;
            local_130[2] = local_b8;
            DebugPrint(8,7,DAT_00031eb4 + 0x317ae,DAT_00031eb0 + 0x317ac);
            local_b4 = CONCAT22(local_b4._2_2_,local_fa);
            FUN_00034d60(param_1[0xf],0);
            iVar22 = FUN_00034c00(param_1[0xf],&local_b8);
            if (iVar22 == -1) {
LAB_000319e2:
              FUN_0002282c(local_f4[0] & 0xff,local_f8 & 0xff,(uint)puVar31 & 0xff,
                           (uint)local_114 & 0xff);
              local_6c = 0x26;
              FUN_0002ded8(param_1,&local_98);
              goto LAB_000314d2;
            }
LAB_000317d0:
            local_6c = 1;
            FUN_0002ded8(param_1,&local_98);
            goto LAB_000314d0;
          }
          piVar19 = *(int **)(iVar22 + DAT_00031ed8);
          if (*piVar19 == 0) {
            pvVar18 = operator_new(0x54);
            FUN_00035378(pvVar18,param_1);
            param_1[0x10] = (long)pvVar18;
            FUN_00035494(pvVar18,local_f8);
            FUN_0003549c(param_1[0x10],local_f4[0]);
            local_b4._0_2_ = 0;
            local_b4._2_2_ = 0;
            local_b0 = 0;
            local_ac = 0;
            local_a8 = 0;
            local_9c = param_1[0xd];
            local_a4 = param_1[0xe];
            local_a0 = (uint)*(byte *)((int)param_1 + 0x62) << 8;
            if ((*(byte *)((int)param_1 + 0x61) < 0x1c) &&
               ((int)((0x8f00080U >> (uint)*(byte *)((int)param_1 + 0x61)) << 0x1f) < 0)) {
              if (local_114 == (char *)0x0) {
                if (local_10c == 0) {
                  local_b8 = puVar31;
                  local_b0 = FUN_00036bdc(iVar29);
                  pcVar20 = (char *)thunk_FUN_00036bb0(iVar29);
                  local_b4._2_2_ = (ushort)pcVar20;
                }
                else {
                  pcVar20 = (char *)(uint)local_fa;
                  local_b0 = local_f4[4];
                  local_b4._0_2_ = 0;
                  local_b4._2_2_ = local_fa;
                  local_b8 = puVar31;
                }
                local_ac = 0;
                local_a8 = local_a8 & 0xffff0000;
              }
              else if (local_10c == 0) {
                local_b8 = puVar31;
                local_ac = FUN_00036bdc(iVar29);
                uVar3 = thunk_FUN_00036bb0(iVar29);
                pcVar20 = (char *)(uint)local_b4._2_2_;
                local_a8 = CONCAT22(local_a8._2_2_,uVar3);
              }
              else {
                local_ac = local_f4[4];
                local_a8 = (uint)local_fa;
                pcVar20 = (char *)0x0;
                local_b8 = puVar31;
              }
            }
            else {
              local_b0 = param_1[9];
              local_b8 = puVar31;
              pcVar20 = (char *)FUN_00036bb0(iVar29);
              local_b4._2_2_ = (ushort)pcVar20;
              if (((uint)local_114 & local_108) != 0) {
                local_b4._2_2_ = 0;
                uVar3 = FUN_00036bb0(iVar29);
                lVar13 = param_1[0x10];
                local_a8 = CONCAT22(local_a8._2_2_,uVar3);
                uVar21 = FUN_00036bb0(iVar29);
                FUN_00035488(lVar13,uVar21,0);
                pcVar20 = (char *)(uint)local_b4._2_2_;
              }
            }
            local_130[0] = (uint *)0xc78;
            local_130[1] = (uint *)pcVar20;
            local_130[2] = local_b8;
            DebugPrint(8,7,DAT_00031edc + 0x319a2,DAT_00031ee0 + 0x319ae);
            lVar13 = param_1[0x10];
            *(undefined4 *)(DAT_00031ee4 + 0x319be) = 0;
            local_b4 = CONCAT22(local_b4._2_2_,local_fa);
            FUN_00035474(lVar13);
            iVar22 = FUN_000353cc(param_1[0x10],&local_b8,local_104);
            if (iVar22 == -1) goto LAB_000319e2;
            *piVar19 = 1;
            goto LAB_000317d0;
          }
          local_6c = 0x14;
          FUN_0002ded8(param_1,&local_98);
        }
        iVar22 = -1;
        goto LAB_000314d2;
      }
      local_6c = 10;
      FUN_0002ded8(param_1,&local_98);
    }
LAB_000314d0:
    iVar22 = 0;
LAB_000314d2:
    FUN_000375b4(&local_98);
    return iVar22;
  case 1:
    iVar22 = FUN_00032900(param_1,param_2);
    return iVar22;
  case 2:
    DebugPrint(8,7,DAT_000327f8 + 0x31f6e,DAT_000327f4 + 0x31f6c);
    FUN_000267c0(param_1[0xe],(char)param_1[0x18],*(undefined1 *)((int)param_1 + 0x62),
                 *(undefined1 *)((int)param_1 + 99));
    FUN_00037618(auStack_160);
    FUN_00037668(auStack_160,param_2);
    if (*(char *)((int)param_1 + 0x5f) == '\0') {
      local_134 = 0xb;
      FUN_0002ded8(param_1,auStack_160);
      goto LAB_00032290;
    }
    iVar22 = FUN_00036f58(param_2,DAT_000327fc + 0x31fa4);
    if ((iVar22 == 0) || (iVar22 = FUN_00036384(), iVar22 == 0)) {
      uVar21 = 0;
      uVar30 = 0;
    }
    else {
      uVar21 = *(undefined4 *)(iVar22 + 0x14);
      uVar30 = *(uint *)(iVar22 + 0x10) / 1000;
      DebugPrint(8,7,DAT_00032800 + 0x31fde,DAT_00032804 + 0x31fe4);
      if ((long *)*param_1 == (long *)0x0) {
        if (param_1[1] != 0) {
          CPlayFileSession::Seek(param_1[1]);
        }
      }
      else {
        CPlaybackSession::GetPlayTime((long *)*param_1);
        DebugPrint(8,7,DAT_0003280c + 0x3201e,DAT_00032808 + 0x32018);
        CPlaybackSession::Seek(*param_1);
      }
    }
    iVar22 = FUN_00036f58(param_2,DAT_00032810 + 0x3203e);
    if (iVar22 != 0) {
      local_130[0] = (uint *)0x1;
      FUN_00036fa8(param_2,DAT_00032814 + 0x32052,local_130);
      DebugPrint(8,7,DAT_0003281c + 0x3207e,DAT_00032818 + 0x3207c);
      FUN_00036f04(auStack_160,DAT_00032820 + 0x32090,local_130[0]);
      if (param_1[0xf] != 0) {
        FUN_00034ec4(param_1[0xf],local_130[0]);
      }
      iVar22 = *param_1;
      if (iVar22 == 0) {
        iVar22 = param_1[1];
        if (iVar22 != 0) {
          if ((int)local_130[0] < 0) {
            CPlayFileSession::Slow(iVar22);
          }
          else {
            CPlayFileSession::Fast(iVar22);
          }
        }
      }
      else if ((int)local_130[0] < 0) {
        CPlaybackSession::Slow(iVar22);
      }
      else {
        CPlaybackSession::Fast(iVar22);
      }
    }
    if (param_1[0xf] == 0) {
      if (((*(byte *)((int)param_1 + 0x61) & 0xfb) < 3) || ((char)param_1[0x39] != '\0')) {
        bVar36 = false;
        local_134 = 1;
      }
      else {
        local_134 = 0x26;
        bVar36 = false;
      }
    }
    else {
      iVar22 = FUN_000352d0(param_1[0xf],uVar30,uVar21);
      if (iVar22 == -1) {
        pvVar18 = (void *)param_1[0xf];
        *(undefined1 *)(param_1 + 8) = 1;
        if (pvVar18 != (void *)0x0) {
          FUN_00034bfc(pvVar18);
          operator_delete(pvVar18,0x50);
        }
        bVar36 = false;
        param_1[0xf] = 0;
        local_134 = 0x26;
      }
      else {
        bVar36 = true;
        local_134 = 1;
      }
    }
    local_180 = 0;
    local_17c = 0;
    uStack_178 = 0;
    local_174 = 0;
    uStack_170 = 0;
    local_16c = 0;
    uStack_168 = 0;
    local_164 = 0;
    FUN_0002cafc(&local_180,param_1[0xd]);
    FUN_00037694(auStack_160,&local_180);
    FUN_00037768(auStack_160,DAT_00032828 + 0x32106,DAT_00032824 + 0x32104);
    memset(local_130,0,0x100);
    DebugPrint(8,7,DAT_00032830 + 0x32136,DAT_0003282c + 0x32130);
    if (*(byte *)(param_1 + 0x17) == 3) {
      local_190 = 0;
      local_18c = 0;
      local_188 = 0;
      local_184 = 0;
      if ((char)param_1[0x39] == '\0') {
        cVar23 = (char)param_1[0x18];
        lVar13 = param_1[0xe];
        if (cVar23 == '\x10') {
          FUN_00026878(lVar13,0x10,&local_190,&local_18c);
          iVar22 = 500;
          do {
            if (local_18c != 0) break;
            FUN_00026878(param_1[0xe],(char)param_1[0x18],&local_190,&local_18c);
            if (local_18c != 0) {
              DebugPrint(8,7,DAT_0003288c + 0x3267a,DAT_00032888 + 0x32678);
              break;
            }
            usleep(10000);
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          sprintf((char *)local_130,(char *)(DAT_0003287c + 0x32620),local_18c,local_184);
        }
        else if (cVar23 == '\x01') {
          FUN_00026878(lVar13,1,&local_190,&local_18c);
          iVar22 = 500;
          do {
            if (local_190 != 0) break;
            FUN_00026878(param_1[0xe],(char)param_1[0x18],&local_190,&local_18c);
            if (local_190 != 0) {
              DebugPrint(8,7,DAT_00032884 + 0x32648,DAT_00032880 + 0x32646);
              break;
            }
            usleep(10000);
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          sprintf((char *)local_130,(char *)(DAT_00032878 + 0x325cc),local_190,local_188);
        }
        else {
          FUN_00026878(lVar13,cVar23,&local_190,&local_18c);
          iVar22 = 500;
          do {
            if ((local_18c != 0) && (local_190 != 0)) break;
            FUN_00026878(param_1[0xe],(char)param_1[0x18],&local_190,&local_18c);
            if ((local_190 != 0) && (local_18c != 0)) {
              DebugPrint(8,7,DAT_00032874 + 0x3257e,DAT_00032870 + 0x3257c);
              break;
            }
            usleep(10000);
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          sprintf((char *)local_130,(char *)(DAT_00032840 + 0x32360),local_190,local_188,local_18c,
                  local_184);
        }
        iVar22 = DAT_0003286c;
        if (*(char *)((int)param_1 + 99) != '\0') {
          sVar10 = strlen((char *)local_130);
          uVar21 = *(undefined4 *)(iVar22 + 0x32538);
          uVar27 = *(undefined4 *)(iVar22 + 0x3253c);
          uVar28 = *(undefined4 *)(iVar22 + 0x32540);
          *(undefined4 *)((int)local_130 + sVar10) = *(undefined4 *)(iVar22 + 0x32534);
          *(undefined4 *)((int)local_124 + (sVar10 - 8)) = uVar21;
          *(undefined4 *)((int)local_124 + (sVar10 - 4)) = uVar27;
          uVar21 = *(undefined4 *)(iVar22 + 0x32544);
          uVar27 = *(undefined4 *)(iVar22 + 0x32548);
          uVar25 = *(undefined4 *)(iVar22 + 0x3254c);
          *(undefined4 *)((int)local_124 + sVar10) = uVar28;
          uVar3 = *(undefined2 *)(iVar22 + 0x32550);
          uVar1 = *(undefined1 *)(iVar22 + 0x32552);
          *(undefined4 *)((int)local_124 + sVar10 + 4) = uVar21;
          *(undefined4 *)((int)local_124 + sVar10 + 8) = uVar27;
          *(undefined4 *)((int)local_124 + sVar10 + 0xc) = uVar25;
          *(undefined2 *)((int)local_124 + sVar10 + 0x10) = uVar3;
          *(undefined1 *)((int)local_124 + sVar10 + 0x12) = uVar1;
        }
        FUN_00037768(auStack_160,DAT_00032844 + 0x32378,local_130);
        cVar23 = *(char *)((int)param_1 + 0x5e);
        if (param_1[0x3b] == 1) {
          if (cVar23 == '\0') {
            cVar23 = '\x02';
          }
          else if (cVar23 == '\x01') {
            cVar23 = '\x03';
          }
        }
        DebugPrint(8,7,DAT_0003284c + 0x323a8,DAT_00032848 + 0x323a4);
        FUN_00015c68(*(undefined1 *)((int)param_1 + 0x5d),cVar23);
      }
      else {
        if (param_1[0xf] != 0) {
          FUN_00026878(param_1[0xe],(char)param_1[0x18],&local_190,&local_18c);
          iVar29 = 1;
          iVar22 = DAT_00032850 + 0x32412;
          do {
            if (local_18c != 0) break;
            FUN_00026878(param_1[0xe],(char)param_1[0x18],&local_190,&local_18c);
            if (local_18c != 0) {
              DebugPrint(8,7,DAT_00032868 + 0x3250a,DAT_00032864 + 0x32508);
              break;
            }
            usleep(10000);
            if (((uint)(iVar29 * -0x3d70a3d7) >> 2 | iVar29 * 0x40000000) < 0x28f5c29) {
              DebugPrint(8,7,DAT_00032860 + 0x32496,iVar22);
            }
            iVar29 = iVar29 + 1;
          } while (iVar29 != 0x1f5);
          sprintf((char *)local_130,(char *)(DAT_00032858 + 0x32468),local_18c,local_184,
                  (char *)(DAT_00032854 + 0x32466));
        }
        FUN_00037768(auStack_160,DAT_0003285c + 0x32476,local_130);
      }
      FUN_0002ded8(param_1,auStack_160);
      FUN_00026828(param_1[0xe]);
      goto LAB_00032290;
    }
    if (((bVar36) && ((*(byte *)(param_1 + 0x17) & 0xfd) == 0)) && (param_1[0xf] != 0)) {
      iVar22 = FUN_0002650c(*(undefined1 *)((int)param_1 + 0x5d),
                            *(undefined1 *)((int)param_1 + 0x5e));
      lVar13 = param_1[0xf];
      if (iVar22 == 0) {
        iVar22 = 500;
        do {
          FUN_00034de0(lVar13);
          iVar29 = FUN_00026160();
          if (iVar29 != 0) {
            lVar13 = param_1[0xf];
            break;
          }
          usleep(10000);
          iVar22 = iVar22 + -1;
          lVar13 = param_1[0xf];
        } while (iVar22 != 0);
        FUN_00034de0(lVar13);
        uVar30 = FUN_0002618c();
        uVar21 = FUN_00034de0(param_1[0xf]);
        FUN_00026268(uVar21,1);
        sprintf((char *)local_130,(char *)(DAT_00032838 + 0x3225a),iVar29 + 1,uVar30);
      }
      else if ((char)param_1[0x18] == '\x10') {
        FUN_00034de0(lVar13);
        iVar22 = FUN_000261b8();
        if (iVar22 == 0) {
          iVar29 = 500;
          do {
            FUN_00034de0(param_1[0xf]);
            iVar22 = FUN_000261b8();
            if (iVar22 != 0) break;
            usleep(10000);
            iVar29 = iVar29 + -1;
          } while (iVar29 != 0);
        }
        FUN_00034de0(param_1[0xf]);
        uVar30 = FUN_000261e4();
        uVar21 = FUN_00034de0(param_1[0xf]);
        FUN_00026268(uVar21,0);
        if ((char)param_1[0x39] == '\0') {
          sprintf((char *)local_130,(char *)(DAT_0003289c + 0x327e2),iVar22 + 1,uVar30);
        }
        else {
          sprintf((char *)local_130,(char *)(DAT_00032898 + 0x3278c),iVar22 + 1,uVar30,
                  (char *)(DAT_00032894 + 0x32788));
        }
      }
      else if ((char)param_1[0x18] == '\x01') {
        FUN_00034de0(lVar13);
        iVar22 = FUN_00026160();
        if (iVar22 == 0) {
          iVar29 = 500;
          do {
            FUN_00034de0(param_1[0xf]);
            iVar22 = FUN_00026160();
            if (iVar22 != 0) break;
            usleep(10000);
            iVar29 = iVar29 + -1;
          } while (iVar29 != 0);
        }
        FUN_00034de0(param_1[0xf]);
        uVar30 = FUN_0002618c();
        uVar21 = FUN_00034de0(param_1[0xf]);
        FUN_00026268(uVar21,1);
        sprintf((char *)local_130,(char *)(DAT_00032890 + 0x326da),iVar22 + 1,uVar30);
      }
      else {
        FUN_00034de0(lVar13);
        iVar22 = FUN_00026160();
        if ((char)param_1[0x17] == '\x02') {
          iVar29 = FUN_000228e0(*(undefined1 *)((int)param_1 + 0x5e),
                                *(undefined1 *)((int)param_1 + 0x5d),2,1);
          lVar13 = param_1[0xf];
          if (iVar29 < 1) goto LAB_00032194;
          if (iVar22 == 0) {
            iVar4 = 500;
            do {
              FUN_00034de0(lVar13);
              iVar22 = FUN_00026160();
              if (iVar22 != 0) {
                lVar13 = param_1[0xf];
                iVar29 = 0;
                break;
              }
              usleep(10000);
              iVar4 = iVar4 + -1;
              lVar13 = param_1[0xf];
              iVar29 = 0;
            } while (iVar4 != 0);
          }
          else {
            iVar29 = 0;
          }
        }
        else {
          lVar13 = param_1[0xf];
LAB_00032194:
          if ((char)param_1[0x18] == '\0') {
            FUN_00034de0(lVar13);
            iVar29 = FUN_000261b8();
            iVar4 = 0;
            while( true ) {
              lVar13 = param_1[0xf];
              iVar22 = 0;
              if (iVar29 != 0 || iVar4 == 500) break;
              FUN_00034de0(lVar13);
              iVar29 = FUN_000261b8();
              usleep(10000);
              iVar4 = iVar4 + 1;
            }
          }
          else {
            FUN_00034de0(lVar13);
            iVar29 = FUN_000261b8();
            iVar4 = 500;
            do {
              lVar13 = param_1[0xf];
              if (iVar29 != 0 && iVar22 != 0) goto LAB_000321d8;
              FUN_00034de0(lVar13);
              iVar22 = FUN_00026160();
              FUN_00034de0(param_1[0xf]);
              iVar29 = FUN_000261b8();
              if (iVar22 != 0 && 0 < iVar29) break;
              usleep(10000);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            lVar13 = param_1[0xf];
          }
        }
LAB_000321d8:
        FUN_00034de0(lVar13);
        uVar30 = FUN_000261e4();
        FUN_00034de0(param_1[0xf]);
        uVar17 = FUN_0002618c();
        uVar21 = FUN_00034de0(param_1[0xf]);
        FUN_00026268(uVar21,2);
        sprintf((char *)local_130,(char *)(DAT_00032834 + 0x32208),iVar22 + 1,uVar17,iVar29 + 1,
                uVar30);
      }
      FUN_00037768(auStack_160,DAT_0003283c + 0x32268,local_130);
      cVar23 = *(char *)((int)param_1 + 0x5e);
      if (param_1[0x3b] == 1) {
        if (cVar23 == '\0') {
          cVar23 = '\x02';
        }
        else if (cVar23 == '\x01') {
          cVar23 = '\x03';
        }
      }
      if ((int)((uint)*(byte *)(param_1 + 0x18) << 0x1f) < 0) {
        FUN_00015c68(*(undefined1 *)((int)param_1 + 0x5d),cVar23);
      }
    }
    FUN_0002ded8(param_1,auStack_160);
LAB_00032290:
    FUN_000375b4(auStack_160);
    return 0;
  case 3:
    pcVar20 = local_68 + 0x20;
    local_6c = param_2;
    FUN_00037618(pcVar20);
    FUN_00037668(pcVar20,local_6c);
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_68[0xc] = '\0';
    local_68[0xd] = '\0';
    local_68[0xe] = '\0';
    local_68[0xf] = '\0';
    local_68[0x10] = '\0';
    local_68[0x11] = '\0';
    local_68[0x12] = '\0';
    local_68[0x13] = '\0';
    local_68[0x14] = '\0';
    local_68[0x15] = '\0';
    local_68[0x16] = '\0';
    local_68[0x17] = '\0';
    local_68[0x18] = '\0';
    local_68[0x19] = '\0';
    local_68[0x1a] = '\0';
    local_68[0x1b] = '\0';
    local_68[0x1c] = '\0';
    local_68[0x1d] = '\0';
    local_68[0x1e] = '\0';
    local_68[0x1f] = '\0';
    FUN_0002cafc(local_68,param_1[0xd]);
    FUN_00037694(pcVar20,local_68);
    FUN_0002ded8(param_1,pcVar20);
    FUN_000375b4(pcVar20);
    return 0;
  default:
    goto switchD_00032c20_caseD_4;
  case 5:
    break;
  case 7:
    puVar31 = local_d8 + 4;
    FUN_00037618(puVar31);
    local_9c = 1;
    FUN_00037668(puVar31,param_2);
    local_98 = 0;
    memset(auStack_94,0,0x7c);
    pvVar18 = memcpy(&local_98,(void *)(DAT_00032a58 + 0x329c0),0x50);
    FUN_00037880(puVar31,pvVar18);
    FUN_0002ded8(param_1,puVar31);
    iVar22 = FileExist(DAT_00032a5c + 0x329d8);
    if (iVar22 == 1) {
      local_e0.tv_usec = 0;
      local_d8[0] = local_d8[0] & 0xffffff00;
      local_e0.tv_sec = (__time_t)local_d8;
      iVar22 = FUN_00036f58(param_2,DAT_00032a60 + 0x329f6);
      puVar33 = (uint *)local_e0.tv_sec;
      if (iVar22 != 0) {
        piVar19 = (int *)FUN_00036384();
        (**(code **)(*piVar19 + 8))(piVar19,&local_e0);
        puVar33 = (uint *)local_e0.tv_sec;
        pcVar20 = strstr((char *)local_e0.tv_sec,(char *)(DAT_00032a64 + 0x32a1a));
        if (pcVar20 == (char *)0x0) {
          **(undefined4 **)(iVar29 + 0x329a2 + DAT_00032a68) = 1;
        }
      }
      if (puVar33 != local_d8) {
        operator_delete(puVar33);
        FUN_000375b4(puVar31);
        return 0;
      }
    }
    FUN_000375b4(puVar31);
    return 0;
  case 8:
    iVar22 = FUN_00032a6c(param_1,param_2);
    return iVar22;
  case 9:
    local_44 = param_2;
    FUN_00037618(auStack_40);
    FUN_00037668(auStack_40,local_44);
    FUN_0002ded8(param_1,auStack_40);
    FUN_000375b4(auStack_40);
    return 0;
  case 0xb:
    iVar22 = FUN_00032b84(param_1,param_2);
    return iVar22;
  case 0xc:
    iVar22 = FUN_00032bc0(param_1,param_2);
    return iVar22;
  }
  pcStack_1064 = local_105c;
  local_1094 = local_108c;
  pcStack_107c = local_1074;
  local_10b0 = 1;
  local_1090 = 0;
  iStack_10b4 = 0;
  local_108c[0] = '\0';
  local_1078 = 0;
  iVar29 = DAT_0002ec14 + 0x2e370;
  local_1074[0] = '\0';
  local_1060 = 0;
  local_105c[0] = '\0';
  iStack_10ac = 0;
  memset(local_f30,0,0x80);
  memset(local_eb0,0,0x80);
  memset(*(void **)(iVar29 + DAT_0002ec18),0,0x12c0);
  iVar22 = FUN_00036f58(param_2,DAT_0002ec1c + 0x2e3a6);
  if (iVar22 == 0) {
    local_10e4 = 1;
    bVar36 = false;
  }
  else {
    iVar4 = FUN_00036384();
    if (iVar4 != 0) {
      piVar19 = (int *)FUN_00036384(iVar22);
      (**(code **)(*piVar19 + 8))(piVar19,&pcStack_107c);
    }
    pcVar20 = pcStack_107c;
    pcVar5 = strcasestr(pcStack_107c,(char *)(DAT_0002ec20 + 0x2e3d2));
    if ((((pcVar5 == (char *)0x0) &&
         (pcVar5 = strcasestr(pcVar20,(char *)(DAT_0002eccc + 0x2e946)), pcVar5 == (char *)0x0)) &&
        (pcVar5 = strcasestr(pcVar20,(char *)(DAT_0002ecd0 + 0x2e956)), pcVar5 == (char *)0x0)) &&
       (pcVar5 = strcasestr(pcVar20,(char *)(DAT_0002ecd4 + 0x2e966)), pcVar5 == (char *)0x0)) {
      local_10e4 = (uint)(*(int *)(*(int *)(iVar29 + DAT_0002ecd8) + 4) != 0);
      bVar36 = false;
    }
    else {
      DebugPrint(8,7,DAT_0002ec28 + 0x2e3f6,DAT_0002ec24 + 0x2e3f0,0x685,pcVar20);
      local_10e4 = **(uint **)(iVar29 + DAT_0002ec2c);
      if (local_10e4 != 0) {
        local_10e4 = (uint)(**(int **)(iVar29 + DAT_0002ecc8) == 0);
      }
      bVar36 = true;
    }
  }
  iVar22 = access((char *)(DAT_0002ec30 + 0x2e418),0);
  if ((iVar22 != 0) && (iVar22 = FUN_00036f58(param_2,DAT_0002ec34 + 0x2e426), iVar22 != 0)) {
    iVar4 = FUN_00036384();
    if (iVar4 != 0) {
      piVar19 = (int *)FUN_00036384(iVar22);
      (**(code **)(*piVar19 + 8))(piVar19,&pcStack_1064);
    }
    pcVar20 = pcStack_1064;
    pcVar5 = strstr(pcStack_1064,(char *)(DAT_0002ec38 + 0x2e44e));
    if (pcVar5 == (char *)0x0) {
      *(undefined1 *)(param_1 + 0x39) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x39) = 1;
      DebugPrint(8,7,DAT_0002ec3c + 0x2e478,DAT_0002ec40 + 0x2e47a,0x69f,pcVar20);
    }
  }
  pcVar20 = *(char **)(param_2 + 0x2c);
  iVar22 = FUN_00036f58(param_2,DAT_0002ec44 + 0x2e488);
  sVar10 = 0;
  if (iVar22 != 0) {
    iVar4 = FUN_00036384();
    if (iVar4 != 0) {
      piVar19 = (int *)FUN_00036384(iVar22);
      (**(code **)(*piVar19 + 8))(piVar19,&local_1094);
    }
    pcVar6 = operator_new__(local_1090);
    uVar30 = local_1090;
    memset(pcVar6,0,local_1090);
    pcVar5 = local_1094;
    iVar22 = strncasecmp(local_1094,(char *)(DAT_0002ec48 + 0x2e4ca),5);
    if (iVar22 == 0) {
      FUN_000222fc(pcVar5 + 6,uVar30 - 6,pcVar6,0);
      sVar7 = strlen(pcVar6);
      sVar10 = 0;
      if (sVar7 != 0) {
        pcVar5 = pcVar6 + -1;
        do {
          pcVar5 = pcVar5 + 1;
          if (*pcVar5 == ':') {
            memcpy(local_f30,pcVar6,sVar10);
            if (1 < (int)(sVar7 - sVar10)) {
              memcpy(local_eb0,pcVar6 + sVar10 + 1,(sVar7 - sVar10) - 1);
            }
            goto LAB_0002e52e;
          }
          sVar10 = sVar10 + 1;
        } while (sVar7 != sVar10);
        memcpy(local_f30,pcVar6,sVar10);
      }
LAB_0002e52e:
      free(pcVar6);
      DebugPrint(8,7,DAT_0002ec50 + 0x2e550,DAT_0002ec4c + 0x2e54a,0x6ca,local_f30,local_eb0);
      iVar22 = FUN_0002237c(local_f30,local_eb0,local_10e4);
      if (iVar22 != 0) goto LAB_0002e574;
      *(undefined1 *)((int)param_1 + 0x5f) = 1;
      if (pcVar20 != (char *)0x0) goto LAB_0002e648;
      goto LAB_0002e6be;
    }
    FUN_00037640(&local_830,0xb);
    FUN_00037668(&local_830,param_2);
    FUN_00037768(&local_830,DAT_0002ecf8 + 0x2ea52,DAT_0002ecf4 + 0x2ea50);
    FUN_0002ded8(param_1,&local_830);
LAB_0002ea5c:
    FUN_000375b4(&local_830);
    goto LAB_0002ea62;
  }
LAB_0002e574:
  DebugPrint(8,7,DAT_0002ec58 + 0x2e58e,DAT_0002ec54 + 0x2e588,0x6d5,pcVar20);
  pcVar20 = pcVar20 + 7;
  pcVar5 = strchr(pcVar20,0x3a);
  pcVar6 = strchr(pcVar20,0x40);
  if (pcVar5 == (char *)0x0 || pcVar6 == (char *)0x0) {
    strncpy((char *)&local_830,pcVar20,0x1ff);
    pcVar5 = strstr((char *)&local_830,(char *)(DAT_0002ecdc + 0x2e99a));
    pcVar6 = strstr((char *)&local_830,(char *)(DAT_0002ece0 + 0x2e9a2));
    if (pcVar5 == (char *)0x0 || pcVar6 == (char *)0x0) {
      pcVar5 = strstr((char *)&local_830,(char *)(DAT_0002ece4 + 0x2e9c6));
      pcVar6 = strstr((char *)&local_830,(char *)(DAT_0002ece8 + 0x2e9ce));
      if (pcVar6 == (char *)0x0 || pcVar5 == (char *)0x0) {
        pcVar6 = strstr((char *)&local_830,(char *)(DAT_0002ecec + 0x2e9f2));
        if (pcVar6 != (char *)0x0 && pcVar5 != (char *)0x0) {
          pcVar32 = pcVar6 + 10;
          strncpy(local_f30,pcVar5 + 5,(int)pcVar6 - (int)(pcVar5 + 5));
          pcVar5 = strstr(pcVar32,(char *)(DAT_0002ecf0 + 0x2ea1c));
          if (pcVar5 == (char *)0x0) {
            local_eb0[0] = '\0';
            local_f30[0] = '\0';
          }
          else {
            strncpy(local_eb0,pcVar32,(int)pcVar5 - (int)pcVar32);
          }
        }
      }
      else {
        strncpy(local_f30,pcVar5 + 5,(size_t)(pcVar6 + (-5 - (int)pcVar5)));
        strncpy(local_eb0,pcVar6 + 10,0xf);
        pcVar5 = strchr(local_eb0,0x26);
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
        }
      }
    }
    else {
      strncpy(local_f30,pcVar5 + 10,(size_t)(pcVar6 + (-10 - (int)pcVar5)));
      strcpy(local_eb0,pcVar6 + 10);
    }
  }
  else {
    DebugPrint(8,7,DAT_0002ec60 + 0x2e5ce,DAT_0002ec5c + 0x2e5c6,0x6db,pcVar5);
    DebugPrint(8,7,DAT_0002ec68 + 0x2e5ec,DAT_0002ec64 + 0x2e5e4,0x6dc,pcVar6);
    memcpy(local_f30,pcVar20,(int)pcVar5 - (int)pcVar20);
    memcpy(local_eb0,pcVar5 + 1,(size_t)(pcVar6 + (-1 - (int)pcVar5)));
  }
  DebugPrint(8,7,DAT_0002ec6c + 0x2e620,DAT_0002ec70 + 0x2e628,0x71a,local_f30,local_eb0);
  iVar22 = FUN_0002237c(local_f30,local_eb0,local_10e4);
  if (iVar22 != 0) {
    FUN_00037640(&local_830,0xb);
    FUN_00037668(&local_830,param_2);
    FUN_00037768(&local_830,DAT_00030934 + 0x2ffec,DAT_00030930 + 0x2ffea);
    FUN_0002ded8(param_1,&local_830);
    goto LAB_0002ea5c;
  }
  *(undefined1 *)((int)param_1 + 0x5f) = 1;
LAB_0002e648:
  local_830 = (PlaybackFileInfo *)0x0;
  memset(&local_82c,0,0x7c);
  pcVar5 = strchr(pcVar20,0x3f);
  if (pcVar5 == (char *)0x0) {
    sVar7 = strlen(pcVar20);
  }
  else {
    sVar7 = (int)pcVar5 - (int)pcVar20;
  }
  memcpy(&local_830,pcVar20,sVar7);
  if (1 < 0x80 - sVar7) {
    cVar23 = (&cStack_831)[sVar7];
    bVar35 = cVar23 != '/';
    if (bVar35) {
      *(char *)((int)&local_830 + sVar7) = '/';
      cVar23 = '\0';
    }
    if (bVar35) {
      *(char *)((int)&local_830 + sVar7 + 1) = cVar23;
    }
  }
  pcVar5 = strstr(pcVar20,(char *)(DAT_0002ec74 + 0x2e6a0));
  if (pcVar5 == (char *)0x0) {
    snprintf((char *)(param_1 + 0x19),0x80,(char *)(DAT_00030928 + 0x2ffa4),(char *)&local_830);
  }
  else {
    snprintf((char *)(param_1 + 0x19),0x80,(char *)(DAT_0002ec78 + 0x2e6bc),(char *)&local_830);
  }
LAB_0002e6be:
  iStack_10a8 = 0;
  iStack_10a4 = 0;
  memset(local_fd4,0,0x40);
  iVar4 = FUN_000234b4(pcVar20,&iStack_10ac,&local_10b0,&iStack_10a8,&iStack_10a4,local_fd4,
                       &iStack_10b4);
  iVar22 = iStack_10ac;
  if (iVar4 < 0) {
    FUN_00037640(&local_830,0xe);
    FUN_00037668(&local_830,param_2);
    FUN_0002ded8(param_1,&local_830);
    goto LAB_0002ea5c;
  }
  if (**(int **)(iVar29 + DAT_0002ec7c) == 1) {
    param_1[0x3c] = iStack_10ac;
    param_1[0x3d] = local_10b0;
  }
  if (((local_fd4[0] != '\0') && (*param_1 == 0)) && (param_1[1] == 0)) {
    if (**(int **)(iVar29 + DAT_000308ac) != 0) {
      FUN_00037640(&local_830,0x14);
      FUN_00037668(&local_830,param_2);
      FUN_0002ded8(param_1,&local_830);
      goto LAB_0002ea5c;
    }
    memset(local_a30,0,0x2c);
    DebugPrint(8,7,DAT_000308b4 + 0x2fbb8,DAT_000308b0 + 0x2fbac,0x76b,iStack_10b4,local_fd4);
    if (iStack_10b4 == 0) {
      memset(&local_830,0,0x100);
      sprintf((char *)&local_830,(char *)(DAT_000309f0 + 0x30862),(char *)(DAT_000309ec + 0x3085e),
              local_fd4);
      iVar4 = FileExist(&local_830);
      if (iVar4 == 0) {
        sprintf((char *)&local_830,(char *)(DAT_00031038 + 0x30c02),(char *)(DAT_00031034 + 0x30bfc)
                ,local_fd4);
      }
    }
    else {
      sscanf(local_fd4,(char *)(DAT_000308b8 + 0x2fc02),(int *)&local_101c,local_1004,&local_f94,
             &local_e30,(int *)&local_d30,(int *)&local_c30);
      DebugPrint(8,7,DAT_000308c0 + 0x2fc3e,DAT_000308bc + 0x2fc3c,0x771,local_101c,local_1004[0],
                 local_f94,local_e30,local_d30,local_c30);
    }
    iVar4 = DAT_000308c4;
    local_a30[0].tm_min = (int)local_d30;
    local_a30[0].tm_hour = local_e30;
    local_a30[0].tm_sec = (int)local_c30;
    local_a30[0].tm_mday = local_f94;
    local_a30[0].tm_mon = local_1004[0] + -1;
    local_a30[0].tm_year = (int)(local_101c + -0x76c);
    tVar12 = mktime(local_a30);
    lVar13 = random();
    param_1[0xd] = lVar13;
    __s = *(void **)(iVar29 + iVar4);
    memset(__s,0,0x13c);
    pvVar18 = *(void **)(iVar29 + DAT_000308c8);
    memset(pvVar18,0,0x38);
    puVar24 = *(undefined4 **)(iVar29 + DAT_000308cc);
    *puVar24 = 0;
    puVar24[1] = 0;
    puVar24[2] = 0;
    if (iStack_10b4 == 0) {
      iVar4 = FileExist(&local_830);
      if (iVar4 != 0) {
        DebugPrint(8,7,DAT_000308d4 + 0x2fcf6,DAT_000308d0 + 0x2fcf2,0x79a,&local_830);
        local_930 = (PlaybackFileInfo *)&local_928;
        pPVar11 = (PlaybackFileInfo *)strlen((char *)&local_830);
        local_b30 = pPVar11;
        if (pPVar11 < (PlaybackFileInfo *)0x10) {
          pPVar15 = (PlaybackFileInfo *)&local_928;
          if (pPVar11 == (PlaybackFileInfo *)0x1) {
            local_928 = (PlaybackFileInfo *)CONCAT31(local_928._1_3_,(char)local_830);
          }
          else if (pPVar11 != (PlaybackFileInfo *)0x0) {
            goto LAB_00030c40;
          }
        }
        else {
          pPVar15 = (PlaybackFileInfo *)
                    std::__cxx11::string::_M_create((uint *)&local_930,(uint)&local_b30);
          local_928 = local_b30;
          local_930 = pPVar15;
LAB_00030c40:
          memcpy(pPVar15,&local_830,(size_t)pPVar11);
          pPVar15 = local_930;
        }
        local_92c = local_b30;
        pPVar15[(int)local_b30] = (PlaybackFileInfo)0x0;
        pCVar14 = operator_new(0x208,*(nothrow_t **)(iVar29 + DAT_000308d8));
        if (pCVar14 == (CPlayFileSession *)0x0) {
          param_1[1] = 0;
          if (local_930 == (PlaybackFileInfo *)&local_928) goto LAB_0002fd9e;
LAB_0002fd8e:
          operator_delete(local_930);
          if (param_1[1] == 0) goto LAB_0002fd9e;
        }
        else {
          CPlayFileSession::CPlayFileSession
                    (pCVar14,param_1[0xd],&local_930,DAT_000308e4 + 0x2fd78,
                     *(undefined4 *)(iVar29 + DAT_000308e0),*(undefined4 *)(iVar29 + DAT_000308dc),0
                    );
          param_1[1] = (long)pCVar14;
          if (local_930 != (PlaybackFileInfo *)&local_928) goto LAB_0002fd8e;
        }
        CPlayFileSession::Start();
        DebugPrint(8,7,DAT_00031030 + 0x30bbc,DAT_0003102c + 0x30bb6,0x7a0,&local_830);
        goto LAB_00030a98;
      }
      DebugPrint(8,7,DAT_00031028 + 0x30b7c,DAT_00031024 + 0x30b78,0x792,&local_830);
      FUN_00037640(&local_930,0x14);
      FUN_00037668(&local_930,param_2);
      FUN_0002ded8(param_1,&local_930);
    }
    else {
      this = operator_new(0x240,*(nothrow_t **)(iVar29 + DAT_00031004));
      if (this == (CPlaybackSession *)0x0) {
        *param_1 = 0;
      }
      else {
        CPlaybackSession::CPlaybackSession
                  (this,param_1[0xd],0,tVar12,
                   (_func_void_uint_VIDEO_PARAM_ptr_AUDIO_PARAM_ptr *)(DAT_00031010 + 0x30a34),
                   *(_func_PlaybackPushResult_uint_char_ptr_uint_ulonglong_int **)
                    (iVar29 + DAT_0003100c),
                   *(_func_PlaybackPushResult_uint_char_ptr_uint_ulonglong **)
                    (iVar29 + DAT_00031008),(_func_void_uint *)0x0);
        *param_1 = (long)this;
        CPlaybackSession::Start();
        DebugPrint(8,7,DAT_00031018 + 0x30a8a,DAT_00031014 + 0x30a86,0x7ac,0,local_101c,
                   local_1004[0],local_f94,local_e30,local_d30,local_c30,tVar12);
LAB_00030a98:
        *(undefined4 *)(DAT_0003101c + 0x30aa2) = 1;
      }
LAB_0002fd9e:
      pthread_create((pthread_t *)(param_1 + 0x3e),(pthread_attr_t *)0x0,
                     *(__start_routine **)(iVar29 + DAT_000308e8),param_1);
      local_10d0 = 0;
      do {
        iVar4 = *(int *)((int)__s + 0x24);
        if (iVar4 != 0) goto LAB_0002fdd4;
        usleep(20000);
        local_10d0 = local_10d0 + 1;
      } while (local_10d0 != 0x5dc);
      iVar4 = *(int *)((int)__s + 0x24);
LAB_0002fdd4:
      DebugPrint(8,7,DAT_000308f0 + 0x2fdf2,DAT_000308ec + 0x2fdf0,0x7c1,local_10d0,iVar4);
      iVar4 = *(int *)((int)__s + 0x24);
      if (iVar4 != 0) {
        puVar24 = *(undefined4 **)(iVar29 + DAT_000308f4);
        memset(puVar24 + 1,0,0x70);
        uVar21 = *(undefined4 *)((int)__s + 0x28);
        uVar27 = *(undefined4 *)((int)__s + 0x2c);
        puVar24[2] = iVar4;
        *puVar24 = uVar27;
        puVar24[3] = uVar21;
        uVar21 = alignBy(iVar4,0x10);
        uVar27 = *(undefined4 *)((int)__s + 0x28);
        puVar24[4] = uVar21;
        uVar21 = alignBy(uVar27,0x10);
        puVar24[5] = uVar21;
        puVar24[6] = 0;
        puVar24[9] = 0x578;
        puVar24[7] = 0x57c;
        uVar27 = GetAudioEncoderType((int)pvVar18 + 4);
        iVar4 = (int)__s + 4;
        uVar21 = uVar27;
        DebugPrint(8,7,DAT_000308fc + 0x2fe6e,DAT_000308f8 + 0x2fe6c,0x7d9,uVar27,iVar4);
        pcVar5 = (char *)((int)__s + 4);
        pcVar20 = strstr(pcVar5,(char *)(DAT_00030900 + 0x2fe7c));
        if (pcVar20 == (char *)0x0) {
          pcVar20 = strstr(pcVar5,(char *)(DAT_00031020 + 0x30b38));
          if (pcVar20 == (char *)0x0) {
            pcVar20 = strstr(pcVar5,(char *)(DAT_0003103c + 0x30c18));
            if (pcVar20 == (char *)0x0) {
              uVar30 = 0;
            }
            else {
              FUN_0002a57c(0,3,uVar27,4,puVar24,1);
              uVar30 = 6;
            }
          }
          else {
            FUN_0002a57c(0,5,uVar27,4,puVar24,1);
            uVar30 = 1;
          }
        }
        else {
          DebugPrint(8,7,DAT_00030908 + 0x2fea0,DAT_00030904 + 0x2fe9c,0x7dd,uVar21,iVar4);
          FUN_0002a57c(0,10,uVar27,4,puVar24,1);
          uVar30 = 10;
        }
        **(uint **)(iVar29 + DAT_0003090c) = uVar30;
        goto LAB_0002e738;
      }
      FUN_0002d370(param_1);
      FUN_00037640(&local_930,0xe);
      FUN_00037668(&local_930,param_2);
      FUN_0002ded8(param_1,&local_930);
    }
    FUN_000375b4(&local_930);
    goto LAB_0002ea62;
  }
  uVar30 = *(uint *)(*(int *)(iVar29 + DAT_0002ec80) + iStack_10ac * 4);
LAB_0002e738:
  if (**(int **)(iVar29 + DAT_0002ec84) == 0) {
    iVar4 = FUN_000173a4(iStack_10ac);
    if (iVar4 == 0) {
      iStack_10a4 = 1;
    }
    if ((iVar22 == 2) && (iVar4 = MsgGetFunctionEnabled(DAT_00030910 + 0x2fee8), iVar4 < 1)) {
      FUN_00037640(&local_830,0xe);
      FUN_00037668(&local_830,param_2);
      FUN_0002ded8(param_1,&local_830);
      goto LAB_0002ea5c;
    }
  }
  else if (3 < iVar22) {
    FUN_00037640(&local_830,0xe);
    FUN_00037668(&local_830,param_2);
    FUN_0002ded8(param_1,&local_830);
    goto LAB_0002ea5c;
  }
  iVar4 = iStack_10ac;
  lVar13 = local_10b0;
  DebugPrint(8,7,DAT_0002ec88 + 0x2e788,DAT_0002ec8c + 0x2e78c,0x823,uVar30,iStack_10ac,local_10b0,
             iStack_10a8,iStack_10a4,(char)param_1[0x39]);
  iVar8 = FUN_00036f58(param_2,DAT_0002ec90 + 0x2e798);
  if (iVar8 == 0) {
    iVar8 = FUN_00036f58(param_2,DAT_00030918 + 0x2ff3a);
    if (iVar8 != 0) {
      iVar9 = FUN_00036384();
      if (iVar9 != 0) {
        piVar19 = (int *)FUN_00036384(iVar8);
        (**(code **)(*piVar19 + 8))(piVar19,&pcStack_107c);
      }
      pcVar20 = pcStack_107c;
      pcVar5 = strstr(pcStack_107c,(char *)(DAT_0003091c + 0x2ff66));
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = strstr(pcVar20,(char *)(DAT_00030920 + 0x2ff7a)), pcVar5 == (char *)0x0)) {
        pcVar20 = strstr(pcVar20,(char *)(DAT_00030924 + 0x2ff8c));
        goto joined_r0x0002ff90;
      }
      goto LAB_0002e7ce;
    }
  }
  else {
    iVar9 = FUN_00036384();
    if (iVar9 != 0) {
      piVar19 = (int *)FUN_00036384(iVar8);
      (**(code **)(*piVar19 + 8))(piVar19,&pcStack_107c);
    }
    pcVar20 = pcStack_107c;
    pcVar5 = strstr(pcStack_107c,(char *)(DAT_0002ec94 + 0x2e7c4));
    if ((pcVar5 == (char *)0x0) &&
       (pcVar5 = strstr(pcVar20,(char *)(DAT_00030938 + 0x30024)), pcVar5 == (char *)0x0)) {
      pcVar20 = strstr(pcVar20,(char *)(DAT_0003093c + 0x30036));
joined_r0x0002ff90:
      if (pcVar20 == (char *)0x0) goto LAB_0002e7d6;
    }
LAB_0002e7ce:
    *(undefined1 *)((int)param_1 + 0x62) = 1;
  }
LAB_0002e7d6:
  *(char *)((int)param_1 + 0x5d) = (char)local_10b0;
  *(char *)((int)param_1 + 0x5e) = (char)iStack_10ac;
  FUN_00037640(local_1004,1);
  FUN_00037668(local_1004,param_2);
  FUN_00036e88(local_1004,DAT_0002ec9c + 0x2e814,DAT_0002ec98 + 0x2e812);
  DebugPrint(8,7,DAT_0002eca4 + 0x2e82e,DAT_0002eca0 + 0x2e82a,0x84a);
  local_104c = (PlaybackFileInfo *)local_1044;
  local_1048 = 0;
  local_1044[0] = local_1044[0] & 0xffffff00;
  std::__cxx11::string::_M_replace((uint)&local_104c,0,(char *)0x0,DAT_0002eca8 + 0x2e852);
  if (0x3fffffff - local_1048 < 0x36) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error((char *)(DAT_000310c4 + 0x30d8e));
  }
  std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ecac + 0x2e872);
  piVar19 = *(int **)(iVar29 + DAT_0002ecb0);
  if (*piVar19 == 0) {
    if (0x3fffffff - local_1048 < 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310b4 + 0x30d6e));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ed28 + 0x2ebfe);
  }
  else {
    if (0x3fffffff - local_1048 < 0x1c) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_0003110c + 0x30e32));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ecb4 + 0x2e89e);
  }
  if (0x3fffffff - local_1048 < 8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error((char *)(DAT_00031110 + 0x30e3a));
  }
  std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ecb8 + 0x2e8ba);
  if (0x3fffffff - local_1048 < 0x12) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error((char *)(DAT_000310b8 + 0x30d76));
  }
  std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ecbc + 0x2e8d4);
  if (*piVar19 == 0) {
    if (0x3fffffff - local_1048 < 0x17) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310b0 + 0x30d66));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ed24 + 0x2ebea);
  }
  else {
    if (0x3fffffff - local_1048 < 0xc) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310bc + 0x30d7e));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ecc0 + 0x2e8f6);
  }
  if (*(int *)(DAT_0002ecc4 + 0x2e8fe) != 0) {
    if (0x3fffffff - local_1048 < 0x1d) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031104 + 0x30e22));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_00030914 + 0x2ff2a);
  }
  if (10 < uVar30) {
    if (uVar30 != 0xff) goto switchD_0002e914_caseD_3;
    if (0x3fffffff - local_1048 < 7) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310c0 + 0x30d86));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ecfc + 0x2eac2);
    if (0x3fffffff - local_1048 < 0x10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031054 + 0x30cae));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ed00 + 0x2eadc);
    if (0x3fffffff - local_1048 < 0xd) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031050 + 0x30ca6));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ed04 + 0x2eaf6);
    if ((0 < iStack_10a4) || (iStack_10a4 == 0 && iStack_10a8 == 0)) {
      FUN_0002d688(&local_830);
      std::__cxx11::string::_M_append((char *)&local_104c,(uint)local_830);
      if (local_830 != (PlaybackFileInfo *)&local_828) {
        operator_delete(local_830);
      }
    }
    iVar22 = access((char *)(DAT_0002ed08 + 0x2eb32),0);
    if (iVar22 == 0) {
      piVar19 = *(int **)(iVar29 + DAT_0002ed0c);
      if (*piVar19 != 1) {
        *piVar19 = 0;
        goto LAB_0002f11a;
      }
      goto LAB_0002eb4c;
    }
    **(undefined4 **)(iVar29 + DAT_0003092c) = 0;
    goto LAB_0002f11a;
  }
  switch(uVar30) {
  case 0:
    if (0x3fffffff - local_1048 < 7) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310d8 + 0x30dca));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb24 + 0x2f7d4);
    if (0x3fffffff - local_1048 < 0x10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310d4 + 0x30dc2));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb28 + 0x2f7ee);
    if (0x3fffffff - local_1048 < 0xd) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310d0 + 0x30dba));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb2c + 0x2f808);
    if (0x3fffffff - local_1048 < 0x16) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031164 + 0x30eea));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb30 + 0x2f822);
    if (0x3fffffff - local_1048 < 0x18) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031160 + 0x30ee2));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb34 + 0x2f83c);
    if (0x3fffffff - local_1048 < 0x25) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_0003115c + 0x30eda));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb38 + 0x2f856);
    pcVar20 = (char *)(*(int *)(iVar29 + DAT_0002fac0) +
                      (iStack_10ac + (local_10b0 + -1) * 4) * 0x400);
    sVar10 = strlen(pcVar20);
    if (0x3fffffff - local_1048 < sVar10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031158 + 0x30ed2));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,(uint)pcVar20);
    if (0x3fffffff - local_1048 < 3) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031098 + 0x30d36));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb3c + 0x2f8ac);
    if (0x3fffffff - local_1048 < 0x10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031094 + 0x30d2e));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb40 + 0x2f8c6);
    if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031168 + 0x30ef2));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb44 + 0x2f8e0);
    iVar22 = FUN_0002650c(local_10b0,iStack_10ac);
    if (iVar22 == 0) goto LAB_0002f076;
    if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310e4 + 0x30de2));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb48 + 0x2f90c);
    if (0x3fffffff - local_1048 < 0x16) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310e0 + 0x30dda));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb4c + 0x2f926);
    if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310dc + 0x30dd2));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb50 + 0x2f940);
    break;
  case 1:
    local_f94 = 0;
    local_e30 = 0;
    local_930 = (PlaybackFileInfo *)0x0;
    memset(&local_92c,0,0xfc);
    local_830 = (PlaybackFileInfo *)0x0;
    memset(&local_82c,0,0xfc);
    if (*(int *)(DAT_0002fadc + 0x2f55a) == 0) {
      iVar4 = *(int *)(iVar29 + DAT_0002fae0);
      rtsp_h264_get_pps_sps
                (*(int *)(iVar29 + DAT_0002fae4) + iVar22 * 0x400,
                 *(undefined4 *)(iVar4 + iVar22 * 4),local_a30,&local_e30,&local_b30,&local_f94);
      DebugPrint(8,7,DAT_0002faec + 0x2f5d4,DAT_0002fae8 + 0x2f5d2,0x87f,
                 *(undefined4 *)(iVar4 + iVar22 * 4),local_e30,local_f94);
    }
    else {
      uVar21 = *(undefined4 *)(iVar29 + DAT_00030944);
      rtsp_h264_get_pps_sps
                (uVar21,**(undefined4 **)(iVar29 + DAT_00030940),local_a30,&local_e30,&local_b30,
                 &local_f94);
      DebugPrint(8,7,DAT_0003094c + 0x3012a,DAT_00030948 + 0x30124,0x87a,uVar21,local_e30,local_f94)
      ;
    }
    iVar4 = local_f94;
    local_10c8 = local_a30;
    local_10cc = &local_b30;
    if ((local_e30 < 1) || (local_f94 < 1)) {
      memset(&local_930,0,0x100);
      if (*(int *)(DAT_0002faf0 + 0x2f5fe) == 0) {
        FUN_00022120(*(int *)(iVar29 + DAT_00030984) + iVar22 * 0x400,sVar10,&local_930);
      }
      else {
        FUN_00022120(*(undefined4 *)(iVar29 + DAT_0002fa48),sVar10,&local_930,0);
      }
      memset(&local_830,0,0x100);
      local_10f0 = (PlaybackFileInfo **)0x4d0014;
    }
    else {
      local_10f0 = (PlaybackFileInfo **)
                   (((uint)local_b30 >> 0x10 & 0xff) << 8 | ((uint)local_b30 >> 8 & 0xff) << 0x10 |
                   (uint)local_b30 >> 0x18);
      memset(&local_930,0,0x100);
      FUN_00022120(local_10cc,iVar4,&local_930,0);
      memset(&local_830,0,0x100);
      FUN_00022120(local_10c8,local_e30,&local_830,0);
    }
    local_10c8 = local_a30;
    local_10cc = &local_b30;
    DebugPrint(8,7,DAT_0002faf8 + 0x2f646,DAT_0002faf4 + 0x2f642,0x8ab);
    deubug_show_data_hex(local_10cc,(undefined2)local_f94,1);
    DebugPrint(8,7,DAT_0002fb00 + 0x2f66c,DAT_0002fafc + 0x2f668,0x8ad);
    deubug_show_data_hex(local_10c8,(undefined2)local_e30,1);
    if (0x3fffffff - local_1048 < 7) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310f0 + 0x30dfa));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb04 + 0x2f694);
    if (*(int *)(DAT_0002fb08 + 0x2f69e) == 0) {
LAB_0003034c:
      if (0x3fffffff - local_1048 < 0x10) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_00031150 + 0x30ec2));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_00030988 + 0x30366);
    }
    else {
      pPVar11 = (PlaybackFileInfo *)*param_1;
      if (pPVar11 == (PlaybackFileInfo *)0x0) {
        if ((ulong *)param_1[1] == (ulong *)0x0) goto LAB_0003034c;
        local_c30 = pPVar11;
        local_c2c = pPVar11;
        local_c28 = pPVar11;
        local_c24 = pPVar11;
        local_c20 = pPVar11;
        local_c1c = pPVar11;
        local_c18 = pPVar11;
        local_c14 = pPVar11;
        CPlayFileSession::GetPlaybackFileTime((ulong *)param_1[1]);
        sprintf((char *)&local_c30,(char *)(DAT_000309b8 + 0x3066a),0,(int)local_d30);
      }
      else {
        local_c30 = (PlaybackFileInfo *)0x0;
        local_c2c = (PlaybackFileInfo *)0x0;
        local_c28 = (PlaybackFileInfo *)0x0;
        local_c24 = (PlaybackFileInfo *)0x0;
        local_c20 = (PlaybackFileInfo *)0x0;
        local_c1c = (PlaybackFileInfo *)0x0;
        local_c18 = (PlaybackFileInfo *)0x0;
        local_c14 = (PlaybackFileInfo *)0x0;
        puVar24 = *(undefined4 **)(iVar29 + DAT_0002fa24);
        CPlaybackSession::GetPlaybackFileInfo(pPVar11);
        DebugPrint(8,7,DAT_0002fb10 + 0x2f6fe,DAT_0002fb0c + 0x2f6fa,0x8b7,*puVar24,puVar24[2],
                   puVar24[1]);
        if (iStack_10b4 == 0) {
          sprintf((char *)&local_c30,(char *)(DAT_000309c4 + 0x306e8),0,puVar24[2]);
        }
        else {
          sprintf((char *)&local_c30,(char *)(DAT_0002fb14 + 0x2f722),0,puVar24[1]);
        }
      }
      local_10d4 = &local_c30;
      sVar10 = strlen((char *)local_10d4);
      if (0x3fffffff - local_1048 < sVar10) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_00031124 + 0x30e62));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,(uint)local_10d4);
      DebugPrint(8,7,DAT_0002fb1c + 0x2f75e,DAT_0002fb18 + 0x2f758,0x8c8,local_10d4);
    }
    if (0x3fffffff - local_1048 < 0xd) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031120 + 0x30e5a));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb20 + 0x2f778);
    if (iStack_10a8 < 1) {
      if (iStack_10a8 != 0) goto LAB_00030304;
      if (iStack_10a4 == 0) goto LAB_00030206;
      if (iStack_10a4 < 1) goto LAB_0002f076;
    }
    else {
LAB_00030206:
      if (0x3fffffff - local_1048 < 0x16) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_0003111c + 0x30e52));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_00030964 + 0x30220);
      if (0x3fffffff - local_1048 < 0x18) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_00031118 + 0x30e4a));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_00030968 + 0x3023c);
      if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_00031114 + 0x30e42));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_0003096c + 0x30258);
      if (0x3fffffff - local_1048 < 0x1b) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_00031130 + 0x30e7a));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_00030970 + 0x30274);
      sprintf((char *)&local_c30,(char *)(DAT_00030974 + 0x30284),local_10f0);
      sVar10 = strlen((char *)&local_c30);
      if (0x3fffffff - local_1048 < sVar10) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_0003112c + 0x30e72));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,(uint)&local_c30);
      if (0x3fffffff - local_1048 < 0x2b) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_00031128 + 0x30e6a));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_00030978 + 0x302c4);
      if (*(int *)(DAT_0003097c + 0x302ce) == 0) {
        sVar10 = strlen((char *)&local_930);
        if (0x3fffffff - local_1048 < sVar10) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error((char *)(DAT_000310ac + 0x30d5e));
        }
        std::__cxx11::string::_M_append((char *)&local_104c,(uint)&local_930);
        if (local_1048 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error((char *)(DAT_000310a8 + 0x30d56));
        }
        std::__cxx11::string::_M_append((char *)&local_104c,DAT_000309bc + 0x306a8);
        sVar10 = strlen((char *)&local_830);
        if (0x3fffffff - local_1048 < sVar10) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error((char *)(DAT_000310a4 + 0x30d4e));
        }
        std::__cxx11::string::_M_append((char *)&local_104c,(uint)&local_830);
      }
      if (bVar36) {
        if (0x3fffffff - local_1048 < 2) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error((char *)(DAT_0003105c + 0x30cbe));
        }
        std::__cxx11::string::_M_append((char *)&local_104c,DAT_000309ac + 0x30486);
      }
      else {
        FUN_0002d900(&local_d30,iVar22);
        std::__cxx11::string::_M_append((char *)&local_104c,(uint)local_d30);
        if (local_d30 != auStack_d28) {
          operator_delete(local_d30);
        }
      }
LAB_00030304:
      if ((iStack_10a4 < 1) && (iStack_10a4 != 0 || iStack_10a8 != 0)) goto LAB_0002f076;
    }
    FUN_0002d688(&local_c30);
    std::__cxx11::string::_M_append((char *)&local_104c,(uint)local_c30);
    pPVar11 = local_c30;
    if (local_c30 != (PlaybackFileInfo *)&local_c28) {
LAB_0002f072:
      operator_delete(pPVar11);
    }
    goto LAB_0002f076;
  case 2:
    if (0x3fffffff - local_1048 < 7) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_0003107c + 0x30cfe));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002faa8 + 0x2f396);
    if (0x3fffffff - local_1048 < 0x10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031078 + 0x30cf6));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002faac + 0x2f3b2);
    if (0x3fffffff - local_1048 < 0xd) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031074 + 0x30cee));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fab0 + 0x2f3ce);
    if (0x3fffffff - local_1048 < 0x16) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031070 + 0x30ce6));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fab4 + 0x2f3ea);
    if (0x3fffffff - local_1048 < 0x1b) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_0003106c + 0x30cde));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fab8 + 0x2f406);
    if (0x3fffffff - local_1048 < 0x25) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031068 + 0x30cd6));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fabc + 0x2f422);
    pcVar20 = (char *)(*(int *)(iVar29 + DAT_0002fac0) +
                      (iStack_10ac + (local_10b0 + -1) * 4) * 0x400);
    sVar10 = strlen(pcVar20);
    if (0x3fffffff - local_1048 < sVar10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031064 + 0x30cce));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,(uint)pcVar20);
    if (0x3fffffff - local_1048 < 3) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031060 + 0x30cc6));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fac4 + 0x2f47c);
    if (0x3fffffff - local_1048 < 0x10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310cc + 0x30db2));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fac8 + 0x2f498);
    if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310c8 + 0x30daa));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002facc + 0x2f4b4);
    iVar22 = FUN_0002650c(local_10b0,iStack_10ac);
    if (iVar22 == 0) goto LAB_0002f076;
    if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031148 + 0x30eaa));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fad0 + 0x2f4e2);
    if (0x3fffffff - local_1048 < 0x16) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031144 + 0x30ea2));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fad4 + 0x2f4fe);
    if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_0003114c + 0x30eb2));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fad8 + 0x2f51a);
    break;
  default:
switchD_0002e914_caseD_3:
    DebugPrint(8,7,DAT_0002fb58 + 0x2f958,DAT_0002fb54 + 0x2f954,0x9e9);
    if (0x3fffffff - local_1048 < 7) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310ec + 0x30df2));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb5c + 0x2f972);
    if (0x3fffffff - local_1048 < 0x10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310e8 + 0x30dea));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb60 + 0x2f98c);
    if (0x3fffffff - local_1048 < 0xd) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031058 + 0x30cb6));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fb64 + 0x2f9a6);
    if (iStack_10a8 < 1) {
      if (iStack_10a8 != 0) goto LAB_000301a4;
      if (iStack_10a4 == 0) goto LAB_00030130;
      if (iStack_10a4 < 1) break;
    }
    else {
LAB_00030130:
      if (0x3fffffff - local_1048 < 0x16) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_0003104c + 0x30c9e));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_00030950 + 0x3014a);
      if (0x3fffffff - local_1048 < 0x1b) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_00031048 + 0x30c96));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_00030954 + 0x30166);
      if (0x3fffffff - local_1048 < 0x10) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_00031044 + 0x30c8e));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_00030958 + 0x30182);
      if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_00031040 + 0x30c86));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_0003095c + 0x3019e);
LAB_000301a4:
      if ((iStack_10a4 < 1) && (iStack_10a4 != 0 || iStack_10a8 != 0)) break;
    }
    FUN_0002d688(&local_830);
    std::__cxx11::string::_M_append((char *)&local_104c,(uint)local_830);
    if (local_830 != (PlaybackFileInfo *)&local_828) {
      operator_delete(local_830);
    }
    break;
  case 7:
    DebugPrint(8,7,DAT_0002fa80 + 0x2f26a,DAT_0002fa7c + 0x2f266,0x9d7);
    if (0x3fffffff - local_1048 < 7) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031080 + 0x30d06));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fa84 + 0x2f286);
    if (0x3fffffff - local_1048 < 0x10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031088 + 0x30d16));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fa88 + 0x2f2a2);
    if (0x3fffffff - local_1048 < 0xd) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031084 + 0x30d0e));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fa8c + 0x2f2be);
    if (0x3fffffff - local_1048 < 0x16) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031090 + 0x30d26));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fa90 + 0x2f2da);
    if (0x3fffffff - local_1048 < 0x18) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_0003108c + 0x30d1e));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fa94 + 0x2f2f6);
    if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_0003109c + 0x30d3e));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fa98 + 0x2f312);
    iVar22 = FUN_0002650c(local_10b0,iStack_10ac);
    if (iVar22 == 0) goto LAB_0002f076;
    if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031174 + 0x30f0a));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fa9c + 0x2f340);
    if (0x3fffffff - local_1048 < 0x16) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031170 + 0x30f02));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002faa0 + 0x2f35c);
    if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_0003116c + 0x30efa));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002faa4 + 0x2f378);
    break;
  case 10:
    local_830 = (PlaybackFileInfo *)0x0;
    memset(&local_82c,0,0x7fc);
    if (*(int *)(DAT_0002fa20 + 0x2ed4c) == 0) {
LAB_000301da:
      local_830 = *(PlaybackFileInfo **)(DAT_00030960 + 0x301ea);
      local_82c = *(undefined4 *)(DAT_00030960 + 0x301ee);
      local_828 = *(uint *)(DAT_00030960 + 0x301f2);
      uStack_824 = *(undefined4 *)(DAT_00030960 + 0x301f6);
      local_820 = *(undefined4 *)(DAT_00030960 + 0x301fa);
      uStack_81c = *(undefined4 *)(DAT_00030960 + 0x301fe);
      uStack_818 = *(undefined4 *)(DAT_00030960 + 0x30202);
      uStack_814 = *(undefined4 *)(DAT_00030960 + 0x30206);
      uStack_810 = *(undefined4 *)(DAT_00030960 + 0x3020a);
      local_80c = (undefined1)*(undefined4 *)(DAT_00030960 + 0x3020e);
    }
    else {
      pPVar11 = (PlaybackFileInfo *)*param_1;
      if (pPVar11 == (PlaybackFileInfo *)0x0) {
        if ((ulong *)param_1[1] == (ulong *)0x0) goto LAB_000301da;
        local_930 = pPVar11;
        local_92c = pPVar11;
        local_928 = pPVar11;
        local_924 = pPVar11;
        local_920 = pPVar11;
        local_91c = pPVar11;
        local_918 = pPVar11;
        local_914 = pPVar11;
        CPlayFileSession::GetPlaybackFileTime((ulong *)param_1[1]);
        sprintf((char *)&local_930,(char *)(DAT_000309b4 + 0x30628),0,local_a30[0].tm_sec);
      }
      else {
        local_920 = (PlaybackFileInfo *)0x0;
        local_92c = (PlaybackFileInfo *)0x0;
        local_928 = (PlaybackFileInfo *)0x0;
        local_924 = (PlaybackFileInfo *)0x0;
        local_914 = (PlaybackFileInfo *)0x0;
        local_91c = (PlaybackFileInfo *)0x0;
        local_918 = (PlaybackFileInfo *)0x0;
        local_930 = (PlaybackFileInfo *)0x0;
        puVar24 = *(undefined4 **)(iVar29 + DAT_0002fa24);
        CPlaybackSession::GetPlaybackFileInfo(pPVar11);
        lVar13 = puVar24[1];
        iVar4 = puVar24[2];
        DebugPrint(8,7,DAT_0002fa2c + 0x2eda8,DAT_0002fa28 + 0x2eda4,0x8fa,*puVar24,iVar4,lVar13);
        if (iStack_10b4 == 0) {
          sprintf((char *)&local_930,(char *)(DAT_000309c0 + 0x306d8),0,puVar24[2]);
        }
        else {
          sprintf((char *)&local_930,(char *)(DAT_0002fa30 + 0x2edce),0,puVar24[1]);
        }
      }
      sprintf((char *)&local_830,(char *)(DAT_0002fa34 + 0x2eddc),(char *)&local_930);
      DebugPrint(8,7,DAT_0002fa3c + 0x2edf8,DAT_0002fa38 + 0x2edf4,0x90e,&local_830,iVar4,lVar13);
    }
    local_10f0 = &local_92c;
    local_f94 = 0;
    memset(auStack_f90,0,0x60);
    local_e30 = 0;
    memset(auStack_e2c,0,0xfc);
    memset(local_d2c,0,0xfc);
    local_c30 = (PlaybackFileInfo *)0x0;
    memset(&local_c2c,0,0xfc);
    uStack_10a0 = 0;
    local_b30 = (PlaybackFileInfo *)0x0;
    uStack_109c = 0;
    uStack_1098 = 0;
    memset(auStack_b2c,0,0xfc);
    local_a30[0].tm_sec = 0;
    memset(&local_a30[0].tm_min,0,0xfc);
    local_930 = (PlaybackFileInfo *)0x0;
    memset(local_10f0,0,0xfc);
    if (*(int *)(DAT_0002fa40 + 0x2eea0) == 0) {
      uVar21 = *(undefined4 *)(*(int *)(iVar29 + DAT_00030980) + iVar22 * 4);
      iVar4 = *(int *)(iVar29 + DAT_00030984) + iVar22 * 0x400;
    }
    else {
      iVar4 = *(int *)(iVar29 + DAT_0002fa48);
      uVar21 = **(undefined4 **)(iVar29 + DAT_0002fa44);
    }
    rtsp_h265_get_vps_pps_sps
              (iVar4,uVar21,&local_e30,&uStack_10a0,&local_c30,&uStack_1098,&local_d30,&uStack_109c)
    ;
    if (uStack_10a0 == 0) {
      DebugPrint(8,7,DAT_000309a0 + 0x303f8,DAT_0003099c + 0x303f4,0x930);
    }
    if (uStack_109c == 0) {
      DebugPrint(8,7,DAT_00030998 + 0x303da,DAT_00030994 + 0x303d6,0x935);
    }
    if (uStack_1098 == 0) {
      DebugPrint(8,7,DAT_000309a8 + 0x30416,DAT_000309a4 + 0x30412,0x939);
    }
    if ((((int)uStack_10a0 < 1) || ((int)uStack_109c < 1)) || ((int)uStack_1098 < 1)) {
      uVar17 = 0;
      local_10c0 = 0;
      local_10d0 = 0;
      local_10f0 = (PlaybackFileInfo **)0x0;
    }
    else {
      pvVar18 = operator_new__(uStack_10a0);
      uVar17 = FUN_0002d580(pvVar18,uStack_10a0,&local_e30);
      if (uVar17 < 0x12) {
        operator_delete__(pvVar18);
        DebugPrint(8,7,DAT_000309cc + 0x3072c,DAT_000309c8 + 0x3072a,0x94d);
      }
      DebugPrint(8,7,DAT_000309d4 + 0x30742,DAT_000309d0 + 0x3073e,0x950);
      deubug_show_data_hex(&local_e30,uStack_10a0 & 0xffff,1);
      DebugPrint(8,7,DAT_000309dc + 0x30764,DAT_000309d8 + 0x30760,0x952);
      deubug_show_data_hex(&local_d30,uStack_109c & 0xffff,1);
      DebugPrint(8,7,DAT_000309e4 + 0x30786,DAT_000309e0 + 0x30782,0x954);
      deubug_show_data_hex(&local_c30,uStack_1098 & 0xffff,1);
      uVar17 = (uint)*(byte *)((int)pvVar18 + 6);
      local_10d0 = uVar17 & 0x1f;
      local_10f0 = (PlaybackFileInfo **)((int)uVar17 >> 6);
      local_10c0 = (uVar17 & 0x3f) >> 5;
      uVar17 = (uint)*(byte *)((int)pvVar18 + 0x11);
      sprintf((char *)&local_f94,(char *)(DAT_000309e8 + 0x307be),
              (uint)*(byte *)((int)pvVar18 + 0xb),(uint)*(byte *)((int)pvVar18 + 0xc),
              (uint)*(byte *)((int)pvVar18 + 0xd),(uint)*(byte *)((int)pvVar18 + 0xe),
              (uint)*(byte *)((int)pvVar18 + 0xf),(uint)*(byte *)((int)pvVar18 + 0x10));
      operator_delete__(pvVar18);
      memset(&local_930,0,0x100);
      memset(&local_b30,0,0x100);
      memset(local_a30,0,0x100);
      FUN_00022120(&local_e30,uStack_10a0,&local_930,0);
      FUN_00022120(&local_d30,uStack_109c,&local_b30,0);
      FUN_00022120(&local_c30,uStack_1098,local_a30,0);
    }
    if ((iStack_10a8 < 1) && (iStack_10a8 != 0 || iStack_10a4 != 0)) {
      ppPStack_1034 = local_102c;
      pPVar11 = (PlaybackFileInfo *)strlen((char *)&local_830);
      local_101c = pPVar11;
      if (pPVar11 < (PlaybackFileInfo *)0x10) {
        if (pPVar11 == (PlaybackFileInfo *)0x1) {
          local_102c[0] = (PlaybackFileInfo *)CONCAT31(local_102c[0]._1_3_,(char)local_830);
          ppPVar16 = local_102c;
        }
        else {
          ppPVar16 = local_102c;
          if (pPVar11 != (PlaybackFileInfo *)0x0) {
            ppPVar16 = local_102c;
            goto LAB_00030ab4;
          }
        }
      }
      else {
        ppPVar16 = (PlaybackFileInfo **)
                   std::__cxx11::string::_M_create((uint *)&ppPStack_1034,(uint)&local_101c);
        local_102c[0] = local_101c;
        ppPStack_1034 = ppPVar16;
LAB_00030ab4:
        memcpy(ppPVar16,&local_830,(size_t)pPVar11);
        ppPVar16 = ppPStack_1034;
      }
      local_1030 = local_101c;
      *(PlaybackFileInfo *)((int)ppPVar16 + (int)local_101c) = (PlaybackFileInfo)0x0;
      puVar24 = (undefined4 *)
                std::__cxx11::string::_M_replace
                          ((uint)&ppPStack_1034,0,(char *)0x0,(uint)local_104c);
      uVar17 = local_1044[0];
      pPVar11 = local_104c;
      pPVar15 = (PlaybackFileInfo *)(puVar24 + 2);
      if ((PlaybackFileInfo *)*puVar24 == pPVar15) {
        local_1014 = *(uint *)pPVar15;
        uStack_1010 = puVar24[3];
        uStack_100c = puVar24[4];
        uStack_1008 = puVar24[5];
        local_101c = (PlaybackFileInfo *)&local_1014;
      }
      else {
        local_1014 = puVar24[2];
        local_101c = (PlaybackFileInfo *)*puVar24;
      }
      local_1018 = puVar24[1];
      *puVar24 = pPVar15;
      puVar24[1] = 0;
      *(undefined1 *)(puVar24 + 2) = 0;
      if (local_101c == (PlaybackFileInfo *)&local_1014) {
        if (local_1018 != 0) {
          if (local_1018 == 1) {
            *local_104c = local_1014._0_1_;
          }
          else {
            memcpy(local_104c,(PlaybackFileInfo *)&local_1014,local_1018);
          }
        }
        local_104c[local_1018] = (PlaybackFileInfo)0x0;
      }
      else {
        bVar36 = local_104c == (PlaybackFileInfo *)local_1044;
        local_104c = local_101c;
        if ((bVar36) || (local_1044[0] = local_1014, pPVar11 == (PlaybackFileInfo *)0x0)) {
          local_1044[0] = local_1014;
          local_101c = (PlaybackFileInfo *)&local_1014;
        }
        else {
          local_101c = pPVar11;
          local_1014 = uVar17;
        }
      }
      local_1048 = local_1018;
      local_1018 = 0;
      *local_101c = (PlaybackFileInfo)0x0;
      if (local_101c != (PlaybackFileInfo *)&local_1014) {
        operator_delete(local_101c);
      }
      if (ppPStack_1034 != local_102c) {
        operator_delete(ppPStack_1034);
      }
      if (0x3fffffff - local_1048 < 2) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error((char *)(DAT_00031154 + 0x30eca));
      }
      std::__cxx11::string::_M_append((char *)&local_104c,DAT_000309b0 + 0x30586);
    }
    else {
      sVar10 = strlen((char *)&local_830);
      pcVar20 = (char *)((int)&local_830 + sVar10);
      if (*(int *)(DAT_0002fa4c + 0x2ef24) == 0) {
        sprintf(pcVar20,(char *)(DAT_0002fa50 + 0x2ef4c),(uint)local_10f0,local_10d0,local_10c0,
                uVar17,(char *)&local_f94,(char *)&local_930,(char *)&local_b30,(char *)local_a30);
      }
      else {
        sprintf(pcVar20,(char *)(DAT_0003098c + 0x3037e),(uint)local_10f0,local_10d0,local_10c0,
                uVar17,(char *)&local_f94);
      }
      ppPStack_1034 = local_102c;
      pPVar11 = (PlaybackFileInfo *)strlen((char *)&local_830);
      local_101c = pPVar11;
      if (pPVar11 < (PlaybackFileInfo *)0x10) {
        if (pPVar11 == (PlaybackFileInfo *)0x1) {
          local_102c[0] = (PlaybackFileInfo *)CONCAT31(local_102c[0]._1_3_,(char)local_830);
          ppPVar16 = local_102c;
        }
        else {
          ppPVar16 = local_102c;
          if (pPVar11 != (PlaybackFileInfo *)0x0) {
            ppPVar16 = local_102c;
            goto LAB_0003059a;
          }
        }
      }
      else {
        ppPVar16 = (PlaybackFileInfo **)
                   std::__cxx11::string::_M_create((uint *)&ppPStack_1034,(uint)&local_101c);
        local_102c[0] = local_101c;
        ppPStack_1034 = ppPVar16;
LAB_0003059a:
        memcpy(ppPVar16,&local_830,(size_t)pPVar11);
        ppPVar16 = ppPStack_1034;
      }
      local_1030 = local_101c;
      *(PlaybackFileInfo *)((int)ppPVar16 + (int)local_101c) = (PlaybackFileInfo)0x0;
      puVar24 = (undefined4 *)
                std::__cxx11::string::_M_replace
                          ((uint)&ppPStack_1034,0,(char *)0x0,(uint)local_104c);
      uVar17 = local_1044[0];
      pPVar11 = local_104c;
      pPVar15 = (PlaybackFileInfo *)(puVar24 + 2);
      if ((PlaybackFileInfo *)*puVar24 == pPVar15) {
        local_1014 = *(uint *)pPVar15;
        uStack_1010 = puVar24[3];
        uStack_100c = puVar24[4];
        uStack_1008 = puVar24[5];
        local_101c = (PlaybackFileInfo *)&local_1014;
      }
      else {
        local_1014 = puVar24[2];
        local_101c = (PlaybackFileInfo *)*puVar24;
      }
      local_1018 = puVar24[1];
      *puVar24 = pPVar15;
      puVar24[1] = 0;
      *(undefined1 *)(puVar24 + 2) = 0;
      if (local_101c == (PlaybackFileInfo *)&local_1014) {
        if (local_1018 != 0) {
          if (local_1018 == 1) {
            *local_104c = local_1014._0_1_;
          }
          else {
            memcpy(local_104c,(PlaybackFileInfo *)&local_1014,local_1018);
          }
        }
        local_104c[local_1018] = (PlaybackFileInfo)0x0;
      }
      else {
        bVar35 = local_104c == (PlaybackFileInfo *)local_1044;
        local_104c = local_101c;
        if ((bVar35) || (local_1044[0] = local_1014, pPVar11 == (PlaybackFileInfo *)0x0)) {
          local_1044[0] = local_1014;
          local_101c = (PlaybackFileInfo *)&local_1014;
        }
        else {
          local_101c = pPVar11;
          local_1014 = uVar17;
        }
      }
      local_1048 = local_1018;
      local_1018 = 0;
      *local_101c = (PlaybackFileInfo)0x0;
      if (local_101c != (PlaybackFileInfo *)&local_1014) {
        operator_delete(local_101c);
      }
      if (ppPStack_1034 != local_102c) {
        operator_delete(ppPStack_1034);
      }
      if (bVar36) {
        if (0x3fffffff - local_1048 < 2) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error((char *)(DAT_000310f4 + 0x30e02));
        }
        std::__cxx11::string::_M_append((char *)&local_104c,DAT_00030990 + 0x303a2);
      }
      else {
        FUN_0002d900(&local_101c,iVar22);
        std::__cxx11::string::_M_append((char *)&local_104c,(uint)local_101c);
        if (local_101c != (PlaybackFileInfo *)&local_1014) {
          operator_delete(local_101c);
        }
      }
    }
    if ((0 < iStack_10a4) || (iStack_10a4 == 0 && iStack_10a8 == 0)) {
      FUN_0002d688(&local_101c);
      std::__cxx11::string::_M_append((char *)&local_104c,(uint)local_101c);
      pPVar11 = local_101c;
      if (local_101c != (PlaybackFileInfo *)&local_1014) goto LAB_0002f072;
    }
LAB_0002f076:
    iVar22 = access((char *)(DAT_0002fa54 + 0x2f080),0);
    if (iVar22 == 0) {
      piVar19 = *(int **)(iVar29 + DAT_0002fa58);
      if (*piVar19 != 1) {
        *piVar19 = 0;
        goto LAB_0002f09c;
      }
      goto LAB_0002eb4c;
    }
    **(undefined4 **)(iVar29 + DAT_0003092c) = 0;
    goto LAB_0002f09c;
  }
  iVar22 = access((char *)(DAT_0002fb68 + 0x2f9cc),0);
  piVar19 = *(int **)(iVar29 + DAT_0002fa58);
  if ((iVar22 == 0) && (*piVar19 == 1)) {
LAB_0002eb4c:
    if (0x3fffffff - local_1048 < 0x1d) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031140 + 0x30e9a));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ed10 + 0x2eb64);
    if (0x3fffffff - local_1048 < 0x15) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_0003113c + 0x30e92));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ed14 + 0x2eb7e);
    if (0x3fffffff - local_1048 < 0x27) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031138 + 0x30e8a));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ed18 + 0x2eb98);
    if (0x3fffffff - local_1048 < 0x25) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031134 + 0x30e82));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ed1c + 0x2ebb2);
    if (0x3fffffff - local_1048 < 0xc) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031108 + 0x30e2a));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002ed20 + 0x2ebcc);
  }
  *piVar19 = 0;
  if (uVar30 != 0xff) {
LAB_0002f09c:
    memset(&local_830,0,0x51);
    FUN_0002630c(local_10b0,iStack_10ac,&local_830,*(undefined4 *)(DAT_0002fa5c + 0x2f0b4));
    if (0x3fffffff - local_1048 < 0x19) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310a0 + 0x30d46));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fa60 + 0x2f0da);
    sVar10 = strlen((char *)&local_830);
    if (0x3fffffff - local_1048 < sVar10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_00031100 + 0x30e1a));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,(uint)&local_830);
    if (0x3fffffff - local_1048 < 3) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error((char *)(DAT_000310fc + 0x30e12));
    }
    std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fa64 + 0x2f118);
  }
LAB_0002f11a:
  if ((0 < iStack_10a8) || (iStack_10a8 == 0 && iStack_10a4 == 0)) {
    FUN_0002d868(&local_830);
    std::__cxx11::string::_M_append((char *)&local_104c,(uint)local_830);
    if (local_830 != (PlaybackFileInfo *)&local_828) {
      operator_delete(local_830);
    }
  }
  if (0x3fffffff - local_1048 < 0x12) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error((char *)(DAT_000310f8 + 0x30e0a));
  }
  std::__cxx11::string::_M_append((char *)&local_104c,DAT_0002fa68 + 0x2f166);
  if ((char)param_1[0x39] != '\0') {
    local_930 = (PlaybackFileInfo *)&local_928;
    pPVar11 = (PlaybackFileInfo *)strlen((char *)(param_1 + 0x19));
    local_830 = pPVar11;
    if (pPVar11 < (PlaybackFileInfo *)0x10) {
      pPVar15 = (PlaybackFileInfo *)&local_928;
      if (pPVar11 == (PlaybackFileInfo *)0x1) {
        local_928 = (PlaybackFileInfo *)CONCAT31(local_928._1_3_,(char)param_1[0x19]);
      }
      else if (pPVar11 != (PlaybackFileInfo *)0x0) {
        goto LAB_00030062;
      }
    }
    else {
      pPVar15 = (PlaybackFileInfo *)
                std::__cxx11::string::_M_create((uint *)&local_930,(uint)&local_830);
      local_928 = local_830;
      local_930 = pPVar15;
LAB_00030062:
      memcpy(pPVar15,param_1 + 0x19,(size_t)pPVar11);
      pPVar15 = local_930;
    }
    local_92c = local_830;
    pPVar15[(int)local_830] = (PlaybackFileInfo)0x0;
    FUN_0002db88(&local_830,&local_930,*(undefined4 *)(*(int *)(iVar29 + DAT_0002fa6c) + 0x908));
    std::__cxx11::string::_M_append((char *)&local_104c,(uint)local_830);
    if (local_830 != (PlaybackFileInfo *)&local_828) {
      operator_delete(local_830);
    }
    if (local_930 != (PlaybackFileInfo *)&local_928) {
      operator_delete(local_930);
    }
  }
  local_830 = (PlaybackFileInfo *)0x0;
  local_82c = 0;
  local_828 = local_828 & 0xffff0000;
  sprintf((char *)&local_830,(char *)(DAT_0002fa70 + 0x2f1fc),local_1048);
  FUN_00036e88(local_1004,DAT_0002fa74 + 0x2f212,&local_830);
  FUN_00036e88(local_1004,DAT_0002fa78 + 0x2f226,param_1 + 0x19);
  FUN_0002df40(param_1,local_1004,local_104c,local_1048);
  if (local_104c != (PlaybackFileInfo *)local_1044) {
    operator_delete(local_104c);
  }
  FUN_000375b4(local_1004);
LAB_0002ea62:
  if (pcStack_1064 != local_105c) {
    operator_delete(pcStack_1064);
  }
  if (pcStack_107c != local_1074) {
    operator_delete(pcStack_107c);
  }
  if (local_1094 != local_108c) {
    operator_delete(local_1094);
  }
  return 0;
}


