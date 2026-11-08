/* hik_server (f811b64cf1dadd8381894c33a435e98f6a14c74097b537d99c24068827c780d7), Ghidra 12.2 headless; requested 00031b10 */
/* function FUN_00031b10 @ 00031b10 */

/* WARNING: Removing unreachable block (ram,0x0002f056) */
/* WARNING: Removing unreachable block (ram,0x0002e178) */
/* WARNING: Removing unreachable block (ram,0x0002e3da) */
/* WARNING: Removing unreachable block (ram,0x0002e402) */
/* WARNING: Removing unreachable block (ram,0x0002e3f2) */
/* WARNING: Removing unreachable block (ram,0x0002e3fa) */
/* WARNING: Removing unreachable block (ram,0x0002f226) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00031b10(long *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  __suseconds_t _Var4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  size_t sVar10;
  long lVar11;
  CPlayFileSession *pCVar12;
  undefined4 uVar13;
  uint uVar14;
  string *psVar15;
  in_addr *piVar16;
  char *pcVar17;
  int iVar18;
  int *piVar19;
  undefined4 uVar20;
  int iVar21;
  int extraout_r1;
  undefined1 uVar22;
  short sVar23;
  ushort uVar24;
  uint uVar25;
  void *pvVar26;
  undefined4 *puVar27;
  in_addr *piVar28;
  void *__s;
  uint param5;
  int iVar29;
  char *__haystack;
  uint uVar30;
  int *piVar31;
  in_addr *piVar32;
  PlaybackFileInfo *pPVar33;
  bool bVar34;
  long lVar35;
  uint local_10f8;
  size_t local_10f4;
  int local_10ec;
  uint local_10e4;
  undefined1 auStack_10c4 [4];
  long local_10c0;
  uint uStack_10bc;
  int iStack_10b8;
  int iStack_10b4;
  uint uStack_10b0;
  uint uStack_10ac;
  uint local_10a8;
  char *pcStack_10a4;
  uint local_10a0;
  char local_109c [16];
  char *pcStack_108c;
  undefined4 local_1088;
  char local_1084 [16];
  char *pcStack_1074;
  undefined4 local_1070;
  char local_106c [16];
  undefined1 *local_105c;
  undefined4 local_1058;
  undefined1 local_1054 [16];
  undefined1 auStack_1044 [24];
  string asStack_102c [24];
  int local_1014 [12];
  char local_fe4 [64];
  uint local_fa4;
  undefined1 auStack_fa0 [96];
  char local_f40 [128];
  char local_ec0 [128];
  uint local_e40;
  undefined1 auStack_e3c [252];
  int local_d40;
  undefined1 auStack_d3c [252];
  int local_c40;
  undefined1 auStack_c3c [252];
  uint local_b40;
  undefined1 auStack_b3c [252];
  tm local_a40 [5];
  int local_940 [2];
  undefined2 local_938;
  char cStack_841;
  undefined4 local_840;
  undefined1 auStack_83c [1668];
  int local_190;
  int local_18c;
  uint local_188;
  uint local_184;
  undefined4 local_180;
  undefined1 auStack_17c [20];
  in_addr *local_168;
  in_addr *local_164;
  in_addr *local_160;
  in_addr *local_15c;
  uint local_158;
  int local_154;
  char *local_150;
  uint uStack_14c;
  int local_148;
  uint uStack_144;
  long local_140;
  in_addr *local_138;
  in_addr *local_134;
  in_addr *local_130 [3];
  ushort local_122;
  uint local_120;
  in_addr *local_11c;
  in_addr local_118;
  int local_114;
  in_addr local_110;
  in_addr local_10c;
  timeval tStack_108;
  uint local_100;
  undefined1 auStack_fc [28];
  char *pcStack_e0;
  undefined4 uStack_dc;
  char acStack_d8 [16];
  undefined1 auStack_c8 [20];
  undefined4 local_b4;
  char local_b0 [20];
  undefined4 uStack_9c;
  char acStack_98 [40];
  timeval local_70;
  in_addr *local_68;
  in_addr *local_64;
  undefined4 local_60;
  long local_5c;
  undefined1 local_57;
  long local_54;
  undefined1 auStack_40 [4];
  
  if (*(int *)(param_2 + 0x20) == 10) {
switchD_00031b2a_caseD_4:
    return -1;
  }
  FUN_00034764();
  uVar20 = FUN_00034774();
  iVar21 = DAT_00031958;
  switch(uVar20) {
  case 0:
    iVar21 = DAT_00030968 + 0x2fda6;
    local_120 = 1;
    local_11c = (in_addr *)0x1;
    local_118.s_addr = 0;
    FUN_0003568c(&pcStack_e0);
    FUN_00035a0a(&pcStack_e0,param_2);
    if (*(char *)((int)param_1 + 0x5f) == '\0') {
      local_b4 = 0xb;
    }
    else {
      iVar18 = FUN_00035278(param_2,DAT_0003096c + 0x2fdd6);
      if (iVar18 == 0) {
        local_b4 = 10;
      }
      else {
        local_130[0] = (in_addr *)FUN_00034a38();
        local_130[1] = (in_addr *)FUN_00034a7c(iVar18);
        piVar32 = *(in_addr **)(param_2 + 0x2c);
        local_168 = (in_addr *)0xdac;
        local_164 = (in_addr *)param_1;
        local_160 = piVar32;
        DebugPrint(8,7,DAT_00030970 + 0x2fe04,DAT_00030974 + 0x2fe0a);
        local_160 = (in_addr *)(uint)*(byte *)(param_1 + 0x18);
        local_168 = (in_addr *)0xdad;
        local_164 = (in_addr *)param_1;
        DebugPrint(8,7,DAT_00030978 + 0x2fe2a,DAT_0003097c + 0x2fe30);
        local_114 = 0;
        local_110.s_addr = 0;
        local_164 = memset(local_b0,0,0x40);
        local_160 = &local_118;
        local_168 = &local_110;
        FUN_00021bb0(piVar32,&local_11c,&local_120,&local_114);
        if (piVar32 == (in_addr *)0x0) {
          local_138 = (in_addr *)0x0;
        }
        else {
          pcVar17 = strcasestr((char *)piVar32,(char *)(DAT_00030980 + 0x2fe68));
          if ((pcVar17 == (char *)0x0) &&
             (pcVar17 = strcasestr((char *)piVar32,(char *)(DAT_00030984 + 0x2fe76)),
             pcVar17 == (char *)0x0)) {
            local_138 = (in_addr *)**(uint **)(iVar21 + DAT_00030988);
            if (local_138 != (in_addr *)0x0) {
              pcVar17 = strstr((char *)piVar32,(char *)(DAT_0003098c + 0x2fe92));
              if (pcVar17 != (char *)0x0) goto LAB_0002fe98;
              local_138 = (in_addr *)0x0;
            }
          }
          else {
LAB_0002fe98:
            *(undefined1 *)(param_1 + 0x46) = 1;
            bVar34 = param_1[0xf] == 0;
            if (bVar34) {
              local_160 = (in_addr *)0x10;
            }
            else {
              local_160 = (in_addr *)(*(byte *)(param_1 + 0x18) | 0x10);
            }
            local_164 = (in_addr *)(uint)!bVar34;
            local_138 = (in_addr *)(uint)bVar34;
            *(char *)(param_1 + 0x18) = (char)local_160;
            local_168 = (in_addr *)0xdc4;
            DebugPrint(8,7,DAT_00030990 + 0x2fece,DAT_00030994 + 0x2fed0);
          }
        }
        if (**(int **)(iVar21 + DAT_00030998) == 1) {
          local_11c = (in_addr *)param_1[0x49];
          local_120 = param_1[0x4a];
        }
        if ((param_1[0x48] == 1) && (**(int **)(iVar21 + DAT_0003099c) != 0)) {
          if (local_11c == (in_addr *)0x0) {
            local_11c = (in_addr *)0x2;
          }
          else if (local_11c == (in_addr *)0x1) {
            local_11c = (in_addr *)0x3;
          }
        }
        if (0 < local_114) {
          *(undefined1 *)(param_1 + 0x18) = 1;
          if (local_138 != (in_addr *)0x0) {
LAB_0002ff28:
            iVar7 = 0;
            goto LAB_0002ff2c;
          }
          iVar7 = 0;
          piVar28 = local_138;
LAB_000301f8:
          gettimeofday(&tStack_108,(__timezone_ptr_t)0x0);
          srandom(tStack_108.tv_usec);
          lVar11 = random();
          local_134 = local_138;
          param_1[0xd] = lVar11;
          local_138 = piVar28;
LAB_0002ff3a:
          local_100 = 0;
          memset(auStack_fc,0,0x1c);
          FUN_0002b9bc(&local_100,param_1[0xd]);
          FUN_000358b2(&pcStack_e0,&local_100);
          piVar28 = (in_addr *)0x1;
          if (((uint)local_130[0] & 0xfffffffd) != 1) {
            if (local_130[0] == (in_addr *)0x0) {
              if (local_130[1] == (in_addr *)0x0) {
                piVar28 = local_130[1];
              }
              else if (local_130[1] == (in_addr *)0x1) {
                piVar28 = (in_addr *)0x2;
              }
              else {
                piVar28 = (in_addr *)0xffffffff;
              }
            }
            else {
              piVar28 = (in_addr *)0xffffffff;
            }
          }
          local_160 = local_130[1];
          local_164 = local_130[0];
          local_168 = (in_addr *)0xeb4;
          local_15c = piVar28;
          DebugPrint(8,7,DAT_000309d0 + 0x30256,DAT_000309d4 + 0x30266);
          pcVar17 = strstr((char *)piVar32,(char *)(DAT_000309d8 + 0x30280));
          if (((pcVar17 != (char *)0x0) ||
              (pcVar17 = strstr((char *)piVar32,(char *)(DAT_000309dc + 0x3028e)),
              pcVar17 != (char *)0x0)) ||
             (pcVar17 = strcasestr((char *)piVar32,(char *)(DAT_000309e0 + 0x3029c)),
             pcVar17 != (char *)0x0)) {
            piVar28 = local_11c;
            if ((in_addr *)0x1 < local_11c) {
              piVar28 = (in_addr *)0x0;
            }
            if (*(short *)(*(int *)(iVar21 + DAT_000309e4) + (int)piVar28 * 8 + 0x2ec) == 0) {
              local_b4 = 0xe;
              goto LAB_00030106;
            }
            piVar28 = (in_addr *)0x2;
          }
          *(char *)(param_1 + 0x17) = (char)piVar28;
          local_122 = 0;
          local_10c.s_addr = 0;
          if (piVar28 == (in_addr *)0x1) {
            piVar16 = (in_addr *)FUN_000249cc(local_120);
            if ((int)piVar16 < 0xb) {
              iVar29 = FUN_000349b8(iVar18);
              if (iVar29 == 0) {
                piVar28 = (in_addr *)0x3;
                *(undefined1 *)(param_1 + 0x17) = 3;
              }
              if (((char)param_1[0x46] == '\0') ||
                 (pcVar17 = strstr((char *)piVar32,(char *)(DAT_000309f0 + 0x30340)),
                 pcVar17 == (char *)0x0)) {
                if ((local_134 == (in_addr *)0x0) || (local_138 != (in_addr *)0x0)) {
                  if (iVar7 == 0) {
                    uVar14 = param_1[4];
                    uVar25 = uVar14 & 0xffff;
                    param_1[0xc] = uVar14 & 0xffff;
                    if (piVar28 == (in_addr *)0x3) {
                      uVar20 = 1;
                    }
                    else {
                      uVar20 = 3;
                    }
                    local_122 = (ushort)uVar14;
                    goto LAB_000303da;
                  }
LAB_000303b0:
                  iVar21 = param_1[0xf];
                  if (iVar21 != 0) {
                    uVar20 = FUN_000349b8(iVar18);
                    FUN_000335a0(iVar21,uVar20);
                  }
                  local_122 = *(ushort *)(param_1 + 0xc);
                  uVar20 = 4;
                }
                else {
                  iVar21 = param_1[0xf];
                  if (iVar21 != 0) {
                    uVar20 = FUN_000349b8(iVar18);
                    FUN_00033572(iVar21,uVar20,0);
                  }
                  iVar21 = param_1[0x10];
                  if (iVar21 != 0) {
                    uVar20 = FUN_000349b8(iVar18);
                    FUN_00033c6a(iVar21,uVar20,0);
                  }
                  local_122 = *(ushort *)(param_1 + 0xc);
                  uVar20 = 2;
                }
              }
              else if (**(int **)(iVar21 + DAT_00030988) == 0) {
                uVar20 = 6;
              }
              else {
                uVar20 = 4;
              }
LAB_000303a0:
              FUN_00035c04(&pcStack_e0,param_2,local_122,uVar20);
              goto LAB_00030716;
            }
            local_168 = (in_addr *)0xed9;
            iVar21 = DAT_000309e8 + 0x302f4;
            iVar18 = DAT_000309ec + 0x302f8;
            local_164 = piVar16;
LAB_000302f6:
            DebugPrint(8,7,iVar21,iVar18);
            local_b4 = 0x26;
LAB_00030304:
            FUN_0002d434(param_1,&pcStack_e0);
            iVar21 = -1;
          }
          else {
            if (piVar28 == (in_addr *)0x0) {
              local_164 = (in_addr *)FUN_000249cc(local_120);
              if (10 < (int)local_164) {
                local_168 = (in_addr *)0xf2b;
                iVar21 = DAT_000309f4 + 0x30408;
                iVar18 = DAT_000309f8 + 0x3040c;
                goto LAB_000302f6;
              }
              local_15c = local_138;
              local_160 = (in_addr *)(uint)*(byte *)(param_1 + 0x46);
              local_164 = local_134;
              local_168 = (in_addr *)0xf31;
              DebugPrint(8,7,DAT_000309fc + 0x3041c,DAT_00030a00 + 0x30432);
              if ((local_134 == (in_addr *)0x0) || (local_138 != (in_addr *)0x0)) {
                if (iVar7 != 0) goto LAB_000303b0;
                puVar27 = *(undefined4 **)(iVar21 + DAT_000309c0);
                SemWait(*puVar27);
                iVar29 = FUN_00037164();
                local_122 = FUN_0003406a(*(undefined4 *)(iVar29 + 4));
                SemRelease(*puVar27);
                iVar29 = DAT_00030a28;
                local_164 = (in_addr *)(uint)local_122;
                param_1[0xc] = (long)local_164;
                local_168 = (in_addr *)0xf97;
                DebugPrint(8,7,iVar29 + 0x30640,DAT_00030a2c + 0x3064c);
                uVar25 = (uint)local_122;
                uVar20 = 1;
LAB_000303da:
                FUN_00035c04(&pcStack_e0,param_2,uVar25,uVar20);
                goto LAB_00030938;
              }
              if (((char)param_1[0x46] == '\0') ||
                 (pcVar17 = strstr((char *)piVar32,(char *)(DAT_00030a04 + 0x30458)),
                 pcVar17 == (char *)0x0)) {
                iVar21 = param_1[0xf];
                if (iVar21 != 0) {
                  uVar20 = FUN_000349b8(iVar18);
                  FUN_00033572(iVar21,uVar20,0);
                }
LAB_000305c8:
                local_122 = (ushort)param_1[0xc];
                local_164 = (in_addr *)(param_1[0xc] & 0xffff);
                local_168 = (in_addr *)0xf7c;
                DebugPrint(8,7,DAT_00030a20 + 0x305e4,DAT_00030a24 + 0x305ea);
                uVar20 = 1;
                goto LAB_000303a0;
              }
              puVar27 = *(undefined4 **)(iVar21 + DAT_000309c0);
              SemWait(*puVar27);
              iVar21 = FUN_00037164();
              local_122 = FUN_0003406a(*(undefined4 *)(iVar21 + 4));
              SemRelease(*puVar27);
              if ((param_1[0xf] != 0) && (iVar21 = FUN_000334fc(), iVar21 != 0)) {
                local_168 = (in_addr *)0xf44;
                DebugPrint(8,7,DAT_00030a10 + 0x304c2,DAT_00030a14 + 0x304c6);
                goto LAB_000305c8;
              }
              local_168 = (in_addr *)0xf48;
              DebugPrint(8,7,DAT_00030a08 + 0x3049e,DAT_00030a0c + 0x304a2);
              piVar32 = (in_addr *)(uint)local_122;
              param_1[0xc] = (long)piVar32;
              if (param_1[0xf] != 0) {
                bVar1 = *(byte *)(param_1 + 0x17);
                local_158 = FUN_000349b8(iVar18);
                local_160 = (in_addr *)0x0;
                local_168 = (in_addr *)0xf4d;
                local_164 = (in_addr *)(uint)bVar1;
                local_15c = piVar32;
                DebugPrint(8,7,DAT_00030a18 + 0x304f4,DAT_00030a1c + 0x30502);
                FUN_00033b36(param_1[0xf],0);
                pvVar26 = (void *)param_1[0xf];
                if (pvVar26 != (void *)0x0) {
                  FUN_00033378(pvVar26);
                  operator_delete(pvVar26,0x50);
                }
                param_1[0xf] = 0;
              }
              pvVar26 = operator_new(0x50);
              FUN_0003332c(pvVar26,param_1);
              param_1[0xf] = (long)pvVar26;
              FUN_000335ec(pvVar26,local_120);
              FUN_00033618(param_1[0xf],local_11c);
              memset(&local_70.tv_usec,0,0x1c);
              local_70.tv_sec = 0;
              local_70.tv_usec = CONCAT22(local_70.tv_usec._2_2_,(short)param_1[0xc]);
              uVar6 = FUN_000349b8(iVar18);
              local_68 = (in_addr *)param_1[9];
              local_70.tv_usec = CONCAT22(uVar6,(undefined2)local_70.tv_usec);
              local_5c = param_1[0xe];
              local_54 = param_1[0xd];
              local_57 = *(undefined1 *)((int)param_1 + 0x62);
              iVar21 = FUN_0003337a(param_1[0xf],&local_70);
              if (iVar21 != -1) goto LAB_000305c8;
              pvVar26 = (void *)param_1[0xf];
              if (pvVar26 != (void *)0x0) {
                FUN_00033378(pvVar26);
                operator_delete(pvVar26,0x50);
              }
              param_1[0xf] = 0;
              iVar21 = -1;
            }
            else {
              if (piVar28 == (in_addr *)0x2) {
                piVar32 = local_11c;
                if ((in_addr *)0x1 < local_11c) {
                  piVar32 = (in_addr *)0x0;
                }
                iVar7 = *(int *)(iVar21 + DAT_000309e4) + (int)((int)&piVar32[0x17].s_addr + 1) * 8;
                if (*(short *)(iVar7 + 4) == 0) {
                  piVar32 = (in_addr *)0x0;
LAB_000306b8:
                  local_130[0] = piVar32;
                }
                else {
                  uVar25 = *(uint *)(iVar7 + 8);
                  if (uVar25 == 0) {
                    piVar32 = (in_addr *)0x0;
                    local_130[0] = (in_addr *)0x0;
                  }
                  else {
                    piVar32 = (in_addr *)(uint)*(ushort *)(iVar7 + 6);
                    if (piVar32 == (in_addr *)0x0) goto LAB_000306b8;
                    local_130[0] = (in_addr *)
                                   (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                    (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18);
                  }
                }
                local_130[1] = (in_addr *)((uint)local_134 & 0xff);
                local_168 = &local_10c;
                cVar5 = FUN_00020eb8((uint)local_11c & 0xff,local_120 & 0xff,local_130[1],&local_122
                                    );
                if (cVar5 != '\0') {
                  if (cVar5 == '\x02') {
                    cVar5 = *(char *)((int)param_1 + 0x61) + '\x01';
LAB_000306d8:
                    *(char *)((int)param_1 + 0x61) = cVar5;
                  }
                  else {
                    if (cVar5 == '\x03') {
                      cVar5 = *(char *)((int)param_1 + 0x61) + '\x02';
                      goto LAB_000306d8;
                    }
                    if (cVar5 == '\x04') {
                      cVar5 = *(char *)((int)param_1 + 0x61) + '\x03';
                      goto LAB_000306d8;
                    }
                    if (cVar5 == '\x06') {
                      cVar5 = *(char *)((int)param_1 + 0x61) + '\x04';
                      goto LAB_000306d8;
                    }
                  }
                  FUN_00035a5c(&pcStack_e0,param_2,local_122,local_10c.s_addr);
                  goto LAB_00030716;
                }
                if (local_134 == (in_addr *)0x0) {
                  cVar5 = *(char *)((int)param_1 + 0x61) + '\a';
                }
                else {
                  cVar5 = *(char *)((int)param_1 + 0x61) + '\x14';
                }
                *(char *)((int)param_1 + 0x61) = cVar5;
                uVar24 = (ushort)piVar32;
                if (param_1[0xf] != 0) {
                  FUN_000356d8(&pcStack_e0,param_2,&local_122,&local_10c);
                  if ((local_130[0] == (in_addr *)0x0) || (piVar32 == (in_addr *)0x0)) {
                    if (((in_addr *)local_10c.s_addr != (in_addr *)0x0) && (local_122 == 0)) {
                      sVar23 = **(short **)(iVar21 + DAT_00030a30);
                      if (local_134 == (in_addr *)0x0) {
                        if (local_11c == (in_addr *)0x0) {
                          sVar23 = sVar23 + 0x194;
                        }
                        else {
                          sVar23 = sVar23 + 0x192;
                        }
                      }
                      else {
                        sVar23 = sVar23 + 400;
                      }
                      local_122 = sVar23 + ((short)local_120 + -1) * 10;
                    }
                  }
                  else {
                    local_10c.s_addr = (in_addr_t)local_130[0];
                    local_122 = uVar24;
                  }
                  local_168 = local_130[1];
                  FUN_00020f84((uint)local_11c & 0xff,local_120 & 0xff,local_122,local_10c.s_addr);
                  FUN_00033572(param_1[0xf],local_122,local_10c.s_addr);
                  FUN_00035a5c(&pcStack_e0,param_2,local_122,local_10c.s_addr);
                  local_b4 = 1;
                  goto LAB_00030106;
                }
                piVar16 = (in_addr *)FUN_000249cc(local_120);
                if (10 < (int)piVar16) {
                  local_168 = (in_addr *)0xfe5;
                  iVar21 = DAT_00030a34 + 0x307ea;
                  iVar18 = DAT_00030a38 + 0x307ee;
                  local_164 = piVar16;
                  goto LAB_000302f6;
                }
                FUN_000356d8(&pcStack_e0,param_2,&local_122,&local_10c);
                if ((local_130[0] == (in_addr *)0x0) || (piVar32 == (in_addr *)0x0)) {
                  iVar7 = 0;
                  if (((in_addr *)local_10c.s_addr != (in_addr *)0x0) && (local_122 == 0)) {
                    sVar23 = **(short **)(iVar21 + DAT_00030a30);
                    if (local_134 == (in_addr *)0x0) {
                      if (local_11c == (in_addr *)0x0) {
                        sVar23 = sVar23 + 0x194;
                      }
                      else {
                        sVar23 = sVar23 + 0x192;
                      }
                    }
                    else {
                      sVar23 = sVar23 + 400;
                    }
                    local_122 = sVar23 + ((short)local_120 + -1) * 10;
                    goto LAB_00030828;
                  }
                }
                else {
                  local_10c.s_addr = (in_addr_t)local_130[0];
                  if (local_134 == (in_addr *)0x0) {
                    local_122 = uVar24;
                  }
                  else {
                    if (piVar32 < (in_addr *)0x2) {
                      local_122 = 1;
                    }
                    else {
                      local_122 = uVar24 - 2;
                    }
                  }
LAB_00030828:
                  iVar7 = 1;
                }
                local_168 = local_130[1];
                FUN_00020f84((uint)local_11c & 0xff,local_120 & 0xff,local_122,local_10c.s_addr);
                FUN_00035a5c(&pcStack_e0,param_2,local_122,local_10c.s_addr);
                if (iVar7 == 0) {
                  sVar2 = ((short)local_120 + -1) * 10;
                  sVar23 = **(short **)(iVar21 + DAT_00030a30);
                  if (local_134 == (in_addr *)0x0) {
                    if (local_11c == (in_addr *)0x0) {
                      local_122 = sVar23 + 0x194 + sVar2;
                      goto LAB_000308c0;
                    }
                    sVar23 = sVar23 + 0x192;
                  }
                  else {
                    sVar23 = sVar23 + 400;
                  }
                  local_122 = sVar2 + sVar23;
                }
LAB_000308c0:
                local_70.tv_sec = 0;
                memset(&local_70.tv_usec,0,0x3c);
                pcVar17 = inet_ntoa(local_10c);
                local_150 = strncpy((char *)&local_70,pcVar17,0x3f);
                local_140 = param_1[0xe];
                local_154 = DAT_00030a3c + 0x308e8;
                uStack_144 = (uint)*(byte *)((int)param_1 + 0x61);
                local_158 = local_120;
                uStack_14c = (uint)local_122;
                local_15c = local_11c;
                local_160 = *(in_addr **)(param_2 + 0x1c);
                local_164 = (in_addr *)param_1[0xd];
                local_168 = (in_addr *)0x1025;
                local_148 = iVar7;
                DebugPrint(8,7,DAT_00030a40 + 0x3090e,DAT_00030a44 + 0x3091c);
              }
              else {
                iVar7 = 0;
              }
LAB_00030938:
              local_164 = (in_addr *)(uint)local_122;
              local_168 = (in_addr *)0x102c;
              DebugPrint(8,7,DAT_00030a48 + 0x3094e,DAT_00030a4c + 0x30952);
              if (local_122 == 0) {
                local_b4 = 0x26;
                goto LAB_00030304;
              }
              if ((local_b0[0] == '\0') || (param_1[0x10] != 0)) {
                if (param_1[0xf] != 0) {
                  local_15c = (in_addr *)param_1[0xe];
                  local_160 = (in_addr *)(uint)*(byte *)(param_1 + 0x17);
                  local_164 = (in_addr *)(uint)*(byte *)((int)param_1 + 0x5e);
                  local_168 = (in_addr *)0x1095;
                  DebugPrint(8,7,DAT_00030d70 + 0x30bd4,DAT_00030d74 + 0x30bea);
                  FUN_00033b36(param_1[0xf],0);
                  pvVar26 = (void *)param_1[0xf];
                  if (pvVar26 != (void *)0x0) {
                    FUN_00033378(pvVar26);
                    operator_delete(pvVar26,0x50);
                  }
                  param_1[0xf] = 0;
                }
                pvVar26 = operator_new(0x50);
                FUN_0003332c(pvVar26,param_1);
                param_1[0xf] = (long)pvVar26;
                FUN_000335ec(pvVar26,local_120);
                FUN_00033618(param_1[0xf],local_11c);
                memset(&local_70.tv_usec,0,0x18);
                local_5c = param_1[0xe];
                local_54 = param_1[0xd];
                local_57 = *(undefined1 *)((int)param_1 + 0x62);
                if ((*(byte *)((int)param_1 + 0x61) < 0x1c) &&
                   ((int)((DAT_00030d5c >> (uint)*(byte *)((int)param_1 + 0x61)) << 0x1f) < 0)) {
                  if (local_134 == (in_addr *)0x0) {
                    if (iVar7 == 0) {
                      local_70.tv_sec = (__time_t)piVar28;
                      local_68 = (in_addr *)FUN_000349e6(iVar18);
                      uVar6 = thunk_FUN_000349b8(iVar18);
                      local_70.tv_usec = CONCAT22(uVar6,(undefined2)local_70.tv_usec);
                    }
                    else {
                      local_68 = (in_addr *)local_10c.s_addr;
                      local_70.tv_usec = CONCAT22(local_122,(undefined2)local_70.tv_usec);
                      local_70.tv_sec = (__time_t)piVar28;
                    }
                    uVar24 = 0;
                    local_64 = (in_addr *)0x0;
                  }
                  else {
                    if (iVar7 == 0) {
                      local_70.tv_sec = (__time_t)piVar28;
                      local_64 = (in_addr *)FUN_000349e6(iVar18);
                      uVar6 = thunk_FUN_000349b8(iVar18);
                      local_60 = CONCAT22(local_60._2_2_,uVar6);
                      goto LAB_00030ca6;
                    }
                    local_64 = (in_addr *)local_10c.s_addr;
                    local_70.tv_sec = (__time_t)piVar28;
                    uVar24 = local_122;
                  }
                  local_60 = CONCAT22(local_60._2_2_,uVar24);
                }
                else {
                  local_68 = (in_addr *)param_1[9];
                  local_70.tv_sec = (__time_t)piVar28;
                  uVar6 = FUN_000349b8(iVar18);
                  _Var4 = local_70.tv_usec;
                  local_70.tv_usec = CONCAT22(uVar6,(undefined2)local_70.tv_usec);
                  if ((local_134 != (in_addr *)0x0) && (local_138 != (in_addr *)0x0)) {
                    local_70.tv_usec = _Var4 & 0xffff;
                    uVar6 = FUN_000349b8(iVar18);
                    local_60 = CONCAT22(local_60._2_2_,uVar6);
                    lVar11 = param_1[0xf];
                    uVar20 = FUN_000349b8(iVar18);
                    FUN_00033572(lVar11,uVar20,0);
                  }
                }
LAB_00030ca6:
                local_160 = (in_addr *)local_70.tv_sec;
                local_164 = (in_addr *)((uint)local_70.tv_usec >> 0x10);
                local_168 = (in_addr *)0x10eb;
                DebugPrint(8,7,DAT_00030d78 + 0x30cb4,DAT_00030d7c + 0x30cc4);
                local_70.tv_usec = CONCAT22(local_70.tv_usec._2_2_,local_122);
                FUN_000334f4(param_1[0xf],0);
                iVar21 = FUN_0003337a(param_1[0xf],&local_70);
                if (iVar21 != -1) {
LAB_00030bb8:
                  local_b4 = 1;
                  goto LAB_00030106;
                }
                iVar21 = -1;
              }
              else {
                piVar19 = *(int **)(iVar21 + DAT_00030d60);
                if (*piVar19 != 0) {
                  local_b4 = 0x14;
                  goto LAB_00030304;
                }
                pvVar26 = operator_new(0x54);
                FUN_00033b80(pvVar26,param_1);
                param_1[0x10] = (long)pvVar26;
                FUN_00033c74(pvVar26,local_120);
                FUN_00033c7a(param_1[0x10],local_11c);
                memset(&local_70.tv_usec,0,0x18);
                local_5c = param_1[0xe];
                local_54 = param_1[0xd];
                local_57 = *(undefined1 *)((int)param_1 + 0x62);
                if ((*(byte *)((int)param_1 + 0x61) < 0x1c) &&
                   ((int)((DAT_00030d5c >> (uint)*(byte *)((int)param_1 + 0x61)) << 0x1f) < 0)) {
                  if (local_134 == (in_addr *)0x0) {
                    if (iVar7 == 0) {
                      local_70.tv_sec = (__time_t)piVar28;
                      local_68 = (in_addr *)FUN_000349e6(iVar18);
                      uVar6 = thunk_FUN_000349b8(iVar18);
                      local_70.tv_usec = CONCAT22(uVar6,(undefined2)local_70.tv_usec);
                    }
                    else {
                      local_68 = (in_addr *)local_10c.s_addr;
                      local_70.tv_usec = CONCAT22(local_122,(undefined2)local_70.tv_usec);
                      local_70.tv_sec = (__time_t)piVar28;
                    }
                    uVar24 = 0;
                    local_64 = (in_addr *)0x0;
                  }
                  else {
                    if (iVar7 == 0) {
                      local_70.tv_sec = (__time_t)piVar28;
                      local_64 = (in_addr *)FUN_000349e6(iVar18);
                      uVar6 = thunk_FUN_000349b8(iVar18);
                      local_60 = CONCAT22(local_60._2_2_,uVar6);
                      goto LAB_00030b0e;
                    }
                    local_64 = (in_addr *)local_10c.s_addr;
                    local_70.tv_sec = (__time_t)piVar28;
                    uVar24 = local_122;
                  }
                  local_60 = CONCAT22(local_60._2_2_,uVar24);
                }
                else {
                  local_68 = (in_addr *)param_1[9];
                  local_70.tv_sec = (__time_t)piVar28;
                  uVar6 = FUN_000349b8(iVar18);
                  _Var4 = local_70.tv_usec;
                  local_70.tv_usec = CONCAT22(uVar6,(undefined2)local_70.tv_usec);
                  if ((local_134 != (in_addr *)0x0) && (local_138 != (in_addr *)0x0)) {
                    local_70.tv_usec = _Var4 & 0xffff;
                    uVar6 = FUN_000349b8(iVar18);
                    local_60 = CONCAT22(local_60._2_2_,uVar6);
                    lVar11 = param_1[0x10];
                    uVar20 = FUN_000349b8(iVar18);
                    FUN_00033c6a(lVar11,uVar20,0);
                  }
                }
LAB_00030b0e:
                local_160 = (in_addr *)local_70.tv_sec;
                local_164 = (in_addr *)((uint)local_70.tv_usec >> 0x10);
                local_168 = (in_addr *)0x1082;
                DebugPrint(8,7,DAT_00030d64 + 0x30b1c,DAT_00030d68 + 0x30b2c);
                lVar11 = param_1[0x10];
                *(undefined4 *)((int)&DAT_00030d7c + DAT_00030d6c + 2) = 0;
                local_70.tv_usec = CONCAT22(local_70.tv_usec._2_2_,local_122);
                FUN_00033c5c(lVar11);
                iVar21 = FUN_00033bce(param_1[0x10],&local_70,local_b0);
                if (iVar21 != -1) {
                  *piVar19 = 1;
                  goto LAB_00030bb8;
                }
              }
              FUN_00021108((uint)local_11c & 0xff,local_120 & 0xff,(uint)piVar28 & 0xff,
                           (uint)local_134 & 0xff);
            }
            local_b4 = 0x26;
            FUN_0002d434(param_1,&pcStack_e0);
          }
          goto LAB_0003030e;
        }
        if (0 < (int)local_110.s_addr) {
          *(undefined1 *)(param_1 + 0x18) = 0x10;
          iVar7 = FUN_00024550(local_120,local_11c);
          if (iVar7 != 0) {
            if (param_1[0xf] == 0) {
              local_138 = (in_addr *)0x1;
            }
            goto LAB_0002ff28;
          }
LAB_0002ff76:
          local_b4 = 0x26;
          goto LAB_00030106;
        }
        pcVar17 = strchr((char *)piVar32,0x2a);
        if (pcVar17 == (char *)0x0) {
LAB_0002ffa2:
          local_134 = local_138;
        }
        else {
          iVar7 = FUN_00024550(local_120,local_11c);
          if (iVar7 == 0) {
            *(undefined1 *)(param_1 + 0x18) = 1;
            goto LAB_0002ffa2;
          }
          *(undefined1 *)(param_1 + 0x18) = 0x11;
          if (param_1[0xf] == 0) {
            local_134 = (in_addr *)0x1;
            local_138 = (in_addr *)0x1;
          }
          else {
            local_134 = (in_addr *)0x1;
          }
        }
        pcVar17 = strstr((char *)piVar32,(char *)(DAT_000309a0 + 0x2ffc0));
        if (pcVar17 != (char *)0x0) {
          *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
        }
        pcVar17 = strstr((char *)piVar32,(char *)(DAT_000309a4 + 0x2ffda));
        if (pcVar17 != (char *)0x0) {
          piVar19 = *(int **)(iVar21 + DAT_00030988);
          if (*piVar19 == 0) {
            iVar7 = FUN_00024550(local_120,local_11c);
            if (iVar7 == 0) goto LAB_0002ff76;
            if (*piVar19 != 0) goto LAB_00030004;
          }
          else {
LAB_00030004:
            *(undefined1 *)(param_1 + 0x46) = 1;
          }
          if (param_1[0xf] == 0) {
            local_138 = (in_addr *)(uint)(param_1[0x10] == 0);
          }
          *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 0x10;
          local_134 = (in_addr *)0x1;
        }
        pcVar17 = strstr((char *)piVar32,(char *)(DAT_000309a8 + 0x30032));
        if ((pcVar17 == (char *)0x0) &&
           (pcVar17 = strstr((char *)piVar32,(char *)(DAT_000309ac + 0x30040)),
           pcVar17 == (char *)0x0)) {
          iVar7 = 0;
        }
        else {
          iVar7 = DAT_000309b0;
          *(undefined1 *)((int)param_1 + 99) = 1;
          local_164 = (in_addr *)0x1;
          local_168 = (in_addr *)0xe20;
          DebugPrint(8,7,iVar7 + 0x3005c,DAT_000309b4 + 0x30064);
          iVar7 = 1;
        }
        pcVar17 = strstr((char *)piVar32,(char *)(DAT_000309b8 + 0x30074));
        if ((pcVar17 == (char *)0x0) &&
           (pcVar17 = strstr((char *)piVar32,(char *)(DAT_000309bc + 0x30082)),
           pcVar17 == (char *)0x0)) {
          piVar28 = (in_addr *)(DAT_000309c4 + 0x301a0);
          pcVar17 = strcasestr((char *)piVar32,(char *)piVar28);
          iVar29 = DAT_000309c8;
          if (pcVar17 == (char *)0x0) {
            if (local_134 != (in_addr *)0x0) goto LAB_0002ff2c;
            if (*(byte *)(param_1 + 0x18) < 2) {
              piVar16 = local_134;
              goto LAB_000301ee;
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 0x10;
            local_168 = (in_addr *)0xe7e;
            local_164 = piVar28;
            DebugPrint(8,7,iVar29 + 0x301ba,DAT_000309cc + 0x301c8);
            if (local_130[0] == (in_addr *)0x0) {
              *(undefined1 *)(param_1 + 0x18) = 0;
            }
LAB_0002ff2c:
            if ((char)param_1[0x18] == '\x10') {
              piVar16 = (in_addr *)0x1;
LAB_000301ee:
              piVar28 = local_138;
              local_138 = piVar16;
              goto LAB_000301f8;
            }
            local_134 = (in_addr *)0x1;
          }
          goto LAB_0002ff3a;
        }
        FUN_0002ba54(param_1);
        if (((uint)local_130[0] & 0xfffffffd) != 1) {
          if (local_130[0] == (in_addr *)0x0) {
            if (local_130[1] == (in_addr *)0x0) {
              iVar18 = FUN_000349b8(iVar18);
              if (iVar18 != 0) {
                puVar27 = *(undefined4 **)(iVar21 + DAT_000309c0);
                SemWait(*puVar27);
                iVar21 = FUN_00037164();
                uVar20 = FUN_0003406a(*(undefined4 *)(iVar21 + 4));
                SemRelease(*puVar27);
                local_168 = (in_addr *)0x0;
                iVar21 = FUN_0002c40c(param_1,param_1[9],iVar18,uVar20);
                if (iVar21 < 0) {
                  local_b4 = 0x26;
                  goto LAB_00030106;
                }
                uVar22 = 0;
                goto LAB_000300aa;
              }
            }
            else if (local_130[1] == (in_addr *)0x1) {
              local_100 = local_100 & 0xffff0000;
              local_70.tv_sec = (__time_t)local_130[0];
              FUN_000356d8(&pcStack_e0,param_2,&local_100,&local_70);
              if (((in_addr *)local_70.tv_sec != (in_addr *)0x0) && ((local_100 & 0xffff) != 0)) {
                local_168 = (in_addr *)0x1;
                iVar21 = FUN_0002c40c(param_1,local_70.tv_sec,local_100 & 0xffff,0);
                if (iVar21 < 0) goto LAB_0002ff76;
                FUN_00035a5c(&pcStack_e0,param_2,local_100 & 0xffff,local_70.tv_sec);
                goto LAB_00030160;
              }
            }
          }
          local_b4 = 0x24;
          goto LAB_00030106;
        }
        uVar22 = *(undefined1 *)((int)param_1 + 0x67);
        uVar20 = 0;
LAB_000300aa:
        FUN_00035c04(&pcStack_e0,param_2,uVar20,uVar22);
LAB_00030160:
        if (param_1[0xd] == 0) {
          gettimeofday(&local_70,(__timezone_ptr_t)0x0);
          srandom(local_70.tv_usec);
          lVar11 = random();
          param_1[0xd] = lVar11;
        }
        local_70.tv_sec = 0;
        memset(&local_70.tv_usec,0,0x1c);
        FUN_0002b9bc(&local_70,param_1[0xd]);
        FUN_000358b2(&pcStack_e0,&local_70);
LAB_00030716:
        local_b4 = 1;
      }
    }
LAB_00030106:
    FUN_0002d434(param_1,&pcStack_e0);
    iVar21 = 0;
LAB_0003030e:
    FUN_0003583c(&pcStack_e0);
    return iVar21;
  case 1:
    iVar21 = FUN_000317be(param_1);
    return iVar21;
  case 2:
    break;
  case 3:
    local_64 = (in_addr *)param_2;
    FUN_0003568c(auStack_40);
    FUN_00035a0a(auStack_40,local_64);
    local_60 = 0;
    memset(&local_5c,0,0x1c);
    FUN_0002b9bc(&local_60,param_1[0xd]);
    FUN_000358b2(auStack_40,&local_60);
    FUN_0002d434(param_1,auStack_40);
    FUN_0003583c(auStack_40);
    return 0;
  default:
    goto switchD_00031b2a_caseD_4;
  case 5:
    iVar18 = DAT_0002e638 + 0x2da86;
    pcStack_10a4 = local_109c;
    local_10a0 = 0;
    local_109c[0] = '\0';
    pcStack_108c = local_1084;
    local_1088 = 0;
    local_1084[0] = '\0';
    pcStack_1074 = local_106c;
    local_1070 = 0;
    local_106c[0] = '\0';
    local_10c0 = 1;
    uStack_10bc = 0;
    memset(local_f40,0,0x80);
    memset(local_ec0,0,0x80);
    memset(*(void **)(iVar18 + DAT_0002e63c),0,0x12c0);
    iVar21 = FUN_00035278(param_2,DAT_0002e640 + 0x2db22);
    if (iVar21 == 0) {
      bVar34 = true;
      bVar3 = false;
    }
    else {
      iVar7 = FUN_000348ae();
      if (iVar7 != 0) {
        piVar19 = (int *)FUN_000348ae(iVar21);
        (**(code **)(*piVar19 + 8))();
      }
      pcVar17 = pcStack_108c;
      pcVar8 = strcasestr(pcStack_108c,(char *)(DAT_0002e644 + 0x2db4e));
      if ((((pcVar8 == (char *)0x0) &&
           (pcVar8 = strcasestr(pcVar17,(char *)(DAT_0002e648 + 0x2db5c)), pcVar8 == (char *)0x0))
          && (pcVar8 = strcasestr(pcVar17,(char *)(DAT_0002e64c + 0x2db6a)), pcVar8 == (char *)0x0))
         && (pcVar8 = strcasestr(pcVar17,(char *)(DAT_0002e650 + 0x2db78)), pcVar8 == (char *)0x0))
      {
        bVar3 = false;
        bVar34 = false;
        if (*(int *)(*(int *)(iVar18 + DAT_0002e65c) + 4) != 0) {
          bVar34 = true;
        }
      }
      else {
        DebugPrint(8,7,DAT_0002e654 + 0x2db90,DAT_0002e658 + 0x2db96,0x98d,pcVar17);
        if (**(int **)(iVar18 + DAT_0002e668) == 0) {
          bVar34 = false;
        }
        else {
          bVar34 = **(int **)(iVar18 + DAT_0002e66c) == 0;
        }
        bVar3 = true;
      }
    }
    iVar21 = access((char *)(DAT_0002e660 + 0x2dbba),0);
    if ((iVar21 != 0) && (iVar21 = FUN_00035278(param_2,DAT_0002e664 + 0x2dbca), iVar21 != 0)) {
      iVar7 = FUN_000348ae();
      if (iVar7 != 0) {
        piVar19 = (int *)FUN_000348ae(iVar21);
        (**(code **)(*piVar19 + 8))(piVar19,&pcStack_1074);
      }
      pcVar17 = pcStack_1074;
      pcVar8 = strstr(pcStack_1074,(char *)(DAT_0002e670 + 0x2dc26));
      if (pcVar8 == (char *)0x0) {
        *(undefined1 *)(param_1 + 0x46) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x46) = 1;
        DebugPrint(8,7,DAT_0002e674 + 0x2dc48,DAT_0002e678 + 0x2dc4c,0x9a6,pcVar17);
      }
    }
    pcVar17 = *(char **)(param_2 + 0x2c);
    iVar21 = FUN_00035278(param_2,DAT_0002e67c + 0x2dc64);
    if (iVar21 == 0) {
      local_10f4 = 0;
LAB_0002dd64:
      DebugPrint(8,7,DAT_0002e694 + 0x2dd78,DAT_0002e698 + 0x2dd80,0x9dd,pcVar17);
      pcVar17 = pcVar17 + 7;
      pcVar8 = strchr(pcVar17,0x3a);
      pcVar9 = strchr(pcVar17,0x40);
      if ((pcVar8 == (char *)0x0) || (pcVar9 == (char *)0x0)) {
        local_840 = 0;
        memset(auStack_83c,0,0x1fc);
        strncpy((char *)&local_840,pcVar17,0x1ff);
        pcVar8 = strstr((char *)&local_840,(char *)(DAT_0002e6ac + 0x2de3e));
        if ((pcVar8 == (char *)0x0) ||
           (pcVar9 = strstr((char *)&local_840,(char *)(DAT_0002e6b0 + 0x2de4e)),
           pcVar9 == (char *)0x0)) {
          pcVar8 = strstr((char *)&local_840,(char *)(DAT_0002e6b4 + 0x2de7a));
          if (pcVar8 != (char *)0x0) {
            pcVar9 = strstr((char *)&local_840,(char *)(DAT_0002e6b8 + 0x2de8c));
            if (pcVar9 == (char *)0x0) {
              pcVar9 = strstr((char *)&local_840,(char *)(DAT_0002e6bc + 0x2dec6));
              if (pcVar9 != (char *)0x0) {
                __haystack = pcVar9 + 10;
                strncpy(local_f40,pcVar8 + 5,(int)pcVar9 - (int)(pcVar8 + 5));
                pcVar8 = strstr(__haystack,(char *)(DAT_0002e6c0 + 0x2dee4));
                if (pcVar8 == (char *)0x0) {
                  local_f40[0] = '\0';
                  local_ec0[0] = '\0';
                }
                else {
                  strncpy(local_ec0,__haystack,(int)pcVar8 - (int)__haystack);
                }
              }
            }
            else {
              strncpy(local_f40,pcVar8 + 5,(size_t)(pcVar9 + (-5 - (int)pcVar8)));
              strncpy(local_ec0,pcVar9 + 10,0xf);
              pcVar8 = strchr(local_ec0,0x26);
              if (pcVar8 != (char *)0x0) {
                *pcVar8 = '\0';
              }
            }
          }
        }
        else {
          strncpy(local_f40,pcVar8 + 10,(size_t)(pcVar9 + (-10 - (int)pcVar8)));
          strcpy(local_ec0,pcVar9 + 10);
        }
      }
      else {
        DebugPrint(8,7,DAT_0002e69c + 0x2ddc0,DAT_0002e6a0 + 0x2ddc8,0x9e3,pcVar8,pcVar9);
        memcpy(local_f40,pcVar17,(int)pcVar8 - (int)pcVar17);
        memcpy(local_ec0,pcVar8 + 1,(size_t)(pcVar9 + (-1 - (int)pcVar8)));
      }
      FUN_0002b67e(local_f40);
      FUN_0002b67e(local_ec0);
      DebugPrint(8,7,DAT_0002e6a4 + 0x2de08,DAT_0002e6a8 + 0x2de0e,0xa24,local_f40,local_ec0);
      iVar21 = FUN_00020d5c(local_f40,local_ec0,bVar34);
      if (iVar21 != 0) {
        piVar19 = &local_840;
        FUN_000356b4(piVar19,0xb);
        FUN_00035a0a(piVar19,param_2);
        FUN_00035900(piVar19,DAT_0002e6c8 + 0x2df2a,DAT_0002e6c4 + 0x2df28);
        FUN_0002d434(param_1,piVar19);
        goto LAB_0002e2f4;
      }
    }
    else {
      iVar7 = FUN_000348ae();
      if (iVar7 != 0) {
        piVar19 = (int *)FUN_000348ae(iVar21);
        (**(code **)(*piVar19 + 8))(piVar19,&pcStack_10a4);
      }
      pcVar9 = operator_new__(local_10a0);
      uVar25 = local_10a0;
      memset(pcVar9,0,local_10a0);
      pcVar8 = pcStack_10a4;
      iVar21 = strncasecmp(pcStack_10a4,(char *)(DAT_0002e680 + 0x2dcae),5);
      if (iVar21 != 0) {
        piVar19 = &local_840;
        FUN_000356b4(piVar19,0xb);
        FUN_00035a0a(piVar19,param_2);
        FUN_00035900(piVar19,DAT_0002e688 + 0x2dcda,DAT_0002e684 + 0x2dcd8);
        FUN_0002d434(param_1,piVar19);
        goto LAB_0002e2f4;
      }
      FUN_00020cfa(pcVar8 + 6,uVar25 - 6,pcVar9,0);
      sVar10 = strlen(pcVar9);
      for (local_10f4 = 0; ((int)local_10f4 < (int)sVar10 && (pcVar9[local_10f4] != ':'));
          local_10f4 = local_10f4 + 1) {
      }
      memcpy(local_f40,pcVar9,local_10f4);
      if (1 < (int)(sVar10 - local_10f4)) {
        memcpy(local_ec0,pcVar9 + local_10f4 + 1,(sVar10 - local_10f4) - 1);
      }
      free(pcVar9);
      DebugPrint(8,7,DAT_0002e68c + 0x2dd4c,DAT_0002e690 + 0x2dd52,0x9d2,local_f40,local_ec0);
      iVar21 = FUN_00020d5c(local_f40,local_ec0,bVar34);
      if (iVar21 != 0) goto LAB_0002dd64;
    }
    *(undefined1 *)((int)param_1 + 0x5f) = 1;
    if (pcVar17 != (char *)0x0) {
      local_840 = 0;
      memset(auStack_83c,0,0x7c);
      pcVar8 = strchr(pcVar17,0x3f);
      if (pcVar8 == (char *)0x0) {
        sVar10 = strlen(pcVar17);
      }
      else {
        sVar10 = (int)pcVar8 - (int)pcVar17;
      }
      memcpy(&local_840,pcVar17,sVar10);
      if (1 < 0x80 - sVar10) {
        cVar5 = auStack_83c[sVar10 - 5];
        bVar34 = cVar5 != '/';
        if (bVar34) {
          cVar5 = '/';
        }
        if (bVar34) {
          *(char *)((int)&local_840 + sVar10) = cVar5;
          cVar5 = '\0';
        }
        if (bVar34) {
          auStack_83c[sVar10 - 3] = cVar5;
        }
      }
      iVar21 = strncasecmp((char *)&local_840,(char *)(DAT_0002e6cc + 0x2dfa0),7);
      if ((iVar21 == 0) ||
         (iVar21 = strncasecmp((char *)&local_840,(char *)(DAT_0002e6d0 + 0x2dfb6),8), iVar21 == 0))
      {
        pcVar8 = (char *)(DAT_0002e6d4 + 0x2dfc4);
      }
      else {
        DebugPrint(8,7,DAT_0002e6d8 + 0x2e024,DAT_0002e6dc + 0x2e02c,0xa50,pcVar17);
        pcVar8 = (char *)(DAT_0002e6e0 + 0x2e038);
      }
      snprintf((char *)(param_1 + 0x26),0x80,pcVar8,&local_840);
    }
    iStack_10b8 = 0;
    iStack_10b4 = 0;
    memset(local_fe4,0,0x40);
    iVar21 = FUN_00021bb0(pcVar17,&uStack_10bc,&local_10c0,&iStack_10b8,&iStack_10b4,local_fe4,
                          auStack_10c4);
    if (iVar21 < 0) {
      piVar19 = &local_840;
      FUN_000356b4(piVar19,0xe);
      FUN_00035a0a(piVar19,param_2);
      FUN_0002d434(param_1,piVar19);
      goto LAB_0002e2f4;
    }
    pcVar8 = strstr(pcVar17,(char *)(DAT_0002e6e4 + 0x2e068));
    if (((pcVar8 != (char *)0x0) ||
        (pcVar8 = strstr(pcVar17,(char *)(DAT_0002e6e8 + 0x2e078)), pcVar8 != (char *)0x0)) ||
       (pcVar8 = strcasestr(pcVar17,(char *)(DAT_0002e6ec + 0x2e088)), pcVar8 != (char *)0x0)) {
      uVar25 = uStack_10bc;
      if (1 < uStack_10bc) {
        uVar25 = 0;
      }
      if (*(short *)(*(int *)(iVar18 + DAT_0002e65c) + uVar25 * 8 + 0x2ec) == 0) {
        piVar19 = &local_840;
        FUN_000356b4(piVar19,0xe);
        FUN_00035a0a(piVar19,param_2);
        FUN_0002d434(param_1,piVar19);
        goto LAB_0002e2f4;
      }
    }
    uVar25 = uStack_10bc;
    if (**(int **)(iVar18 + DAT_0002e6f0) == 1) {
      param_1[0x49] = uStack_10bc;
      param_1[0x4a] = local_10c0;
    }
    if (((local_fe4[0] == '\0') || (*param_1 != 0)) || (param_1[1] != 0)) {
      local_10f8 = *(uint *)(*(int *)(iVar18 + DAT_0002e794) + uStack_10bc * 4);
    }
    else {
      if (**(int **)(iVar18 + DAT_0002e6f4) != 0) {
        piVar19 = &local_840;
        FUN_000356b4(piVar19,0x14);
        FUN_00035a0a(piVar19,param_2);
        FUN_0002d434(param_1,piVar19);
        goto LAB_0002e2f4;
      }
      memset(local_a40,0,0x2c);
      DebugPrint(8,7,DAT_0002e6f8 + 0x2e15e,DAT_0002e6fc + 0x2e16c,0xa8e,0,local_fe4);
      memset(&local_840,0,0x100);
      sprintf((char *)&local_840,(char *)(DAT_0002e710 + 0x2e202),(char *)(DAT_0002e70c + 0x2e1fe),
              local_fe4);
      iVar21 = FileExist(&local_840);
      if (iVar21 == 0) {
        sprintf((char *)&local_840,(char *)(DAT_0002e718 + 0x2e21e),(char *)(DAT_0002e714 + 0x2e21c)
                ,local_fe4);
      }
      local_a40[0].tm_sec = local_b40;
      local_a40[0].tm_min = local_c40;
      local_a40[0].tm_hour = local_d40;
      local_a40[0].tm_mday = local_e40;
      local_a40[0].tm_mon = local_fa4 - 1;
      local_a40[0].tm_year = local_1014[0] + -0x76c;
      mktime(local_a40);
      lVar11 = random();
      param_1[0xd] = lVar11;
      __s = *(void **)(iVar18 + DAT_0002e71c);
      memset(__s,0,0x13c);
      pvVar26 = *(void **)(iVar18 + DAT_0002e720);
      memset(pvVar26,0,0x38);
      puVar27 = *(undefined4 **)(iVar18 + DAT_0002e724);
      *puVar27 = 0;
      puVar27[1] = 0;
      puVar27[2] = 0;
      iVar21 = FileExist(&local_840);
      piVar19 = local_940;
      if (iVar21 == 0) {
        DebugPrint(8,7,DAT_0002e728 + 0x2e2d4,DAT_0002e72c + 0x2e2d8,0xab5,&local_840);
        FUN_000356b4(piVar19,0x14);
        FUN_00035a0a(piVar19,param_2);
        FUN_0002d434(param_1,piVar19);
        goto LAB_0002e2f4;
      }
      DebugPrint(8,7,DAT_0002e730 + 0x2e332,DAT_0002e734 + 0x2e336,0xabd,&local_840);
      FUN_0002b874(piVar19,&local_840);
      pCVar12 = operator_new(0x208,*(nothrow_t **)(iVar18 + DAT_0002e738));
      if (pCVar12 != (CPlayFileSession *)0x0) {
        CPlayFileSession::CPlayFileSession
                  (pCVar12,param_1[0xd],piVar19,DAT_0002e748 + 0x2e3ae,
                   *(undefined4 *)(iVar18 + DAT_0002e744),*(undefined4 *)(iVar18 + DAT_0002e740),0);
      }
      param_1[1] = (long)pCVar12;
      std::__cxx11::string::_M_dispose();
      if (param_1[1] != 0) {
        CPlayFileSession::Start();
        DebugPrint(8,7,DAT_0002e74c + 0x2e3c6,DAT_0002e750 + 0x2e3cc,0xac3,&local_840);
        *(undefined4 *)(DAT_0002e754 + 0x2e5d6) = 1;
      }
      pthread_create((pthread_t *)(param_1 + 0x4b),(pthread_attr_t *)0x0,
                     *(__start_routine **)(iVar18 + DAT_0002e73c),param_1);
      local_10f8 = 0;
      do {
        if (*(int *)((int)__s + 0x24) != 0) break;
        usleep(20000);
        local_10f8 = local_10f8 + 1;
      } while (local_10f8 != 0x5dc);
      DebugPrint(8,7,DAT_0002e764 + 0x2e47e,DAT_0002e768 + 0x2e48c,0xae4,local_10f8,
                 *(undefined4 *)((int)__s + 0x24));
      iVar21 = *(int *)((int)__s + 0x24);
      if (iVar21 == 0) {
        FUN_0002ca10(param_1);
        piVar19 = local_940;
        FUN_000356b4(piVar19,0xe);
        FUN_00035a0a(piVar19,param_2);
        FUN_0002d434(param_1,piVar19);
        goto LAB_0002e2f4;
      }
      puVar27 = *(undefined4 **)(iVar18 + DAT_0002e76c);
      memset(puVar27 + 1,0,0x70);
      uVar20 = *(undefined4 *)((int)__s + 0x2c);
      puVar27[2] = iVar21;
      *puVar27 = uVar20;
      puVar27[3] = *(undefined4 *)((int)__s + 0x28);
      uVar20 = alignBy(iVar21,0x10);
      puVar27[4] = uVar20;
      uVar20 = alignBy(*(undefined4 *)((int)__s + 0x28),0x10);
      puVar27[5] = uVar20;
      puVar27[6] = 0;
      puVar27[9] = 0x578;
      puVar27[7] = 0x57c;
      uVar13 = GetAudioEncoderType((int)pvVar26 + 4);
      iVar21 = (int)__s + 4;
      uVar20 = uVar13;
      DebugPrint(8,7,DAT_0002e770 + 0x2e512,DAT_0002e774 + 0x2e518,0xafc,uVar13,iVar21);
      pcVar9 = (char *)((int)__s + 4);
      pcVar8 = strstr(pcVar9,(char *)(DAT_0002e778 + 0x2e526));
      if (pcVar8 == (char *)0x0) {
        pcVar8 = strstr(pcVar9,(char *)(DAT_0002e784 + 0x2e55e));
        if (pcVar8 == (char *)0x0) {
          pcVar8 = strstr(pcVar9,(char *)(DAT_0002e788 + 0x2e580));
          if (pcVar8 == (char *)0x0) {
            local_10f8 = 0;
          }
          else {
            FUN_00029758(0,3,uVar13,4,puVar27,1);
            local_10f8 = 6;
          }
        }
        else {
          FUN_00029758(0,5,uVar13,4,puVar27,1);
          local_10f8 = 1;
        }
      }
      else {
        DebugPrint(8,7,DAT_0002e77c + 0x2e53c,DAT_0002e780 + 0x2e540,0xb00,uVar20,iVar21);
        FUN_00029758(0,10,uVar13,4,puVar27,1);
        local_10f8 = 10;
      }
      **(uint **)(iVar18 + DAT_0002e78c) = local_10f8;
    }
    if (**(int **)(iVar18 + DAT_0002e790) == 0) {
      iVar21 = FUN_00017748(uStack_10bc);
      if (iVar21 == 0) {
        iStack_10b4 = 1;
      }
      if ((uVar25 == 2) && (iVar21 = MsgGetFunctionEnabled(DAT_0002e798 + 0x2e5ec), iVar21 < 1)) {
        piVar19 = &local_840;
        FUN_000356b4(piVar19,0xe);
        FUN_00035a0a(piVar19,param_2);
        FUN_0002d434(param_1,piVar19);
        goto LAB_0002e2f4;
      }
    }
    else if (3 < (int)uVar25) {
      piVar19 = &local_840;
      FUN_000356b4(piVar19,0xe);
      FUN_00035a0a(piVar19,param_2);
      FUN_0002d434(param_1,piVar19);
      goto LAB_0002e2f4;
    }
    DebugPrint(8,7,DAT_0002f288 + 0x2e7ae,DAT_0002f28c + 0x2e7d8,0xb46,local_10f8,uStack_10bc,
               local_10c0,iStack_10b8,iStack_10b4,(char)param_1[0x46]);
    iVar21 = FUN_00035278(param_2,DAT_0002f290 + 0x2e7e4);
    if (iVar21 == 0) {
      iVar21 = FUN_00035278(param_2,DAT_0002f2b0 + 0x2e8d8);
      if (iVar21 != 0) {
        iVar7 = FUN_000348ae();
        if (iVar7 != 0) {
          piVar19 = (int *)FUN_000348ae(iVar21);
          (**(code **)(*piVar19 + 8))();
        }
        pcVar8 = pcStack_108c;
        pcVar9 = strstr(pcStack_108c,(char *)(DAT_0002f2b4 + 0x2e904));
        if ((pcVar9 == (char *)0x0) &&
           (pcVar9 = strstr(pcVar8,(char *)(DAT_0002f2b8 + 0x2e914)), pcVar9 == (char *)0x0)) {
          pcVar9 = (char *)(DAT_0002f2bc + 0x2e924);
          goto LAB_0002e8c2;
        }
        goto LAB_0002e818;
      }
    }
    else {
      iVar7 = FUN_000348ae();
      if (iVar7 != 0) {
        piVar19 = (int *)FUN_000348ae(iVar21);
        (**(code **)(*piVar19 + 8))();
      }
      pcVar8 = pcStack_108c;
      pcVar9 = strstr(pcStack_108c,(char *)(DAT_0002f294 + 0x2e812));
      if ((pcVar9 == (char *)0x0) &&
         (pcVar9 = strstr(pcVar8,(char *)(DAT_0002f2a8 + 0x2e8b6)), pcVar9 == (char *)0x0)) {
        pcVar9 = (char *)(DAT_0002f2ac + 0x2e8c4);
LAB_0002e8c2:
        pcVar8 = strstr(pcVar8,pcVar9);
        if (pcVar8 == (char *)0x0) goto LAB_0002e820;
      }
LAB_0002e818:
      *(undefined1 *)((int)param_1 + 0x62) = 1;
    }
LAB_0002e820:
    uVar14 = uStack_10bc;
    *(char *)((int)param_1 + 0x5e) = (char)uStack_10bc;
    *(char *)((int)param_1 + 0x5d) = (char)local_10c0;
    if ((((pcStack_108c != (char *)0x0) && (*pcStack_108c != '\0')) &&
        (pcVar8 = strcasestr(pcStack_108c,(char *)(DAT_0002f298 + 0x2e84c)), pcVar8 != (char *)0x0))
       && ((*(int *)(DAT_0002f29c + 0x2ea5c) == 0 &&
           ((0 < iStack_10b8 || (!(iStack_10b8 != 0 || iStack_10b4 != 0))))))) {
      if (uVar14 < 4) {
        if ((local_10f8 != 1) && (local_10f8 != 10)) goto LAB_0002eace;
        DebugPrint(8,7,DAT_0002f2a0 + 0x2e8a2,DAT_0002f2a4 + 0x2e8a8,0x789,uVar14,local_10f8);
        iVar21 = *(int *)(iVar18 + DAT_0002f2c0) + uVar14 * 0x400;
        iVar7 = *(int *)(iVar18 + DAT_0002f2c4);
        local_10ec = 0;
        do {
          iVar29 = *(int *)(iVar7 + uVar14 * 4);
          if (iVar29 - 1U < 0x400) {
            if (local_10f8 == 10) {
              local_a40[0].tm_sec = 0;
              memset(&local_a40[0].tm_min,0,0xfc);
              local_940[0] = 0;
              memset(local_940 + 1,0,0xfc);
              local_840 = 0;
              memset(auStack_83c,0,0xfc);
              local_d40 = 0;
              local_b40 = 0;
              local_c40 = 0;
              rtsp_h265_get_vps_pps_sps
                        (iVar21,iVar29,local_a40,&local_d40,&local_840,&local_b40,local_940,
                         &local_c40);
              if (((0 < local_d40) && (0 < local_c40)) && (0 < (int)local_b40)) {
                DebugPrint(8,7,DAT_0002f2c8 + 0x2e9f4,DAT_0002f2cc + 0x2ea04,0x7a1,uVar14,
                           local_10ec * 0x32,iVar29,local_d40,local_c40,local_b40);
                goto LAB_0002eace;
              }
            }
            else {
              local_940[0] = 0;
              memset(local_940 + 1,0,0xfc);
              local_840 = 0;
              memset(auStack_83c,0,0xfc);
              local_a40[0].tm_sec = 0;
              local_b40 = 0;
              rtsp_h264_get_pps_sps(iVar21,iVar29,&local_840,local_a40,local_940,&local_b40);
              if ((0 < (int)local_b40) && (0 < local_a40[0].tm_sec)) {
                DebugPrint(8,7,DAT_0002f2d0 + 0x2ea7c,DAT_0002f2d4 + 0x2ea8c,0x7b4,uVar14,
                           local_10ec * 0x32,iVar29,local_b40,local_a40[0].tm_sec);
                goto LAB_0002eace;
              }
            }
          }
          usleep(50000);
          local_10ec = local_10ec + 1;
        } while (local_10ec != 100);
        DebugPrint(8,7,DAT_0002f2d8 + 0x2eab6,DAT_0002f2dc + 0x2eaca,0x7c0,uVar14,local_10f8,
                   *(undefined4 *)(iVar7 + uVar14 * 4));
      }
      piVar19 = &local_840;
      FUN_000356b4(piVar19,0x29);
      FUN_00035a0a(piVar19,param_2);
      FUN_0002d434(param_1,piVar19);
      goto LAB_0002e2f4;
    }
LAB_0002eace:
    piVar19 = local_1014;
    FUN_000356b4(piVar19,1);
    FUN_00035a0a(piVar19,param_2);
    FUN_00035870(piVar19,DAT_0002f2e4 + 0x2eb1c,DAT_0002f2e0 + 0x2eb1a);
    DebugPrint(8,7,DAT_0002f2e8 + 0x2eb32,DAT_0002f2ec + 0x2eb36,0xb77);
    local_105c = local_1054;
    local_1058 = 0;
    local_1054[0] = 0;
    if (**(int **)(iVar18 + DAT_0002f2f0) == 0) {
      std::__cxx11::string::operator=((string *)&local_105c,(char *)(DAT_0002f300 + 0x2ec0e));
      std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f304 + 0x2ec1a));
      piVar31 = *(int **)(iVar18 + DAT_0002f308);
      if (*piVar31 == 0) {
        pcVar8 = (char *)(DAT_0002f310 + 0x2ec40);
      }
      else {
        pcVar8 = (char *)(DAT_0002f30c + 0x2ec32);
      }
      std::__cxx11::string::operator+=((string *)&local_105c,pcVar8);
      std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f314 + 0x2ec4a));
      local_840 = 0;
      memset(auStack_83c,0,0x3c);
      pcVar8 = strstr(pcVar17,(char *)(DAT_0002f318 + 0x2ec6c));
      if (((pcVar8 != (char *)0x0) ||
          (pcVar8 = strstr(pcVar17,(char *)(DAT_0002f31c + 0x2ec7c)), pcVar8 != (char *)0x0)) ||
         (pcVar17 = strcasestr(pcVar17,(char *)(DAT_0002f320 + 0x2ec8c)), pcVar17 != (char *)0x0)) {
        uVar14 = 0;
        if (uStack_10bc < 2) {
          uVar14 = uStack_10bc;
        }
        iVar21 = *(int *)(iVar18 + DAT_0002f324) + (uVar14 + 0x5d) * 8;
        if ((*(short *)(iVar21 + 4) != 0) && (uVar14 = *(uint *)(iVar21 + 8), uVar14 != 0)) {
          pcVar17 = inet_ntoa((in_addr)(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                        (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18));
          strncpy((char *)&local_840,pcVar17,0x3f);
        }
      }
      std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f328 + 0x2eccc));
      if (local_840._0_1_ == (string)0x0) {
        psVar15 = (string *)(DAT_0002f32c + 0x2ecda);
      }
      else {
        psVar15 = (string *)&local_840;
      }
      std::__cxx11::string::operator+=((string *)&local_105c,(char *)psVar15);
      std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f330 + 0x2ecee));
      uVar20 = *(undefined4 *)(param_2 + 0x1c);
      lVar11 = param_1[0xd];
      if (local_840._0_1_ == (string)0x0) {
        iVar21 = DAT_0002f338 + 0x2ed16;
        psVar15 = (string *)(DAT_0002f334 + 0x2ed14);
      }
      else {
        iVar21 = DAT_0002f344 + 0x2ed46;
        psVar15 = (string *)&local_840;
      }
      uVar14 = uStack_10bc;
      lVar35 = local_10c0;
      DebugPrint(8,7,DAT_0002f33c + 0x2ed2a,DAT_0002f340 + 0x2ed32,0xbae,lVar11,uVar20,uStack_10bc,
                 local_10c0,psVar15,iVar21);
      if (*piVar31 == 0) {
        pcVar17 = (char *)(DAT_0002f34c + 0x2ed62);
      }
      else {
        pcVar17 = (char *)(DAT_0002f348 + 0x2ed54);
      }
      std::__cxx11::string::operator+=((string *)&local_105c,pcVar17);
      if (*(int *)(DAT_0002f350 + 0x2ef6a) != 0) {
        std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f354 + 0x2ed78));
      }
      if (local_10f8 < 0xb) {
        switch(local_10f8) {
        case 0:
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb24 + 0x2f8d4));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb28 + 0x2f8de));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb2c + 0x2f8e8));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb30 + 0x2f8f2));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb34 + 0x2f8fc));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb38 + 0x2f906));
          std::__cxx11::string::operator+=
                    ((string *)&local_105c,
                     (char *)(*(int *)(iVar18 + DAT_0002fb08) +
                             (uStack_10bc + (local_10c0 + -1) * 4) * 0x400));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb3c + 0x2f92e));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb40 + 0x2f938));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb44 + 0x2f942));
          iVar21 = FUN_00024550(local_10c0,uStack_10bc);
          if (iVar21 != 0) {
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb48 + 0x2f95e))
            ;
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb4c + 0x2f968))
            ;
            pcVar17 = (char *)(DAT_0002fb50 + 0x2f970);
LAB_0002f8c4:
            std::__cxx11::string::operator+=((string *)&local_105c,pcVar17);
          }
          break;
        case 1:
          local_940[0] = 0;
          local_fa4 = 0;
          local_e40 = 0;
          memset(local_940 + 1,0,0xfc);
          local_840 = 0;
          memset(auStack_83c,0,0xfc);
          if (*(int *)(DAT_0002f364 + 0x2f040) == 0) {
            iVar21 = *(int *)(iVar18 + DAT_0002f2c4);
            rtsp_h264_get_pps_sps
                      (*(int *)(iVar18 + DAT_0002f2c0) + uVar25 * 0x400,
                       *(undefined4 *)(iVar21 + uVar25 * 4),local_a40,&local_e40,&local_b40,
                       &local_fa4);
            uVar20 = *(undefined4 *)(iVar21 + uVar25 * 4);
            uVar13 = 0xbdc;
            iVar21 = DAT_0002f378 + 0x2eeec;
            iVar7 = DAT_0002f37c + 0x2eef2;
          }
          else {
            uVar20 = *(undefined4 *)(iVar18 + DAT_0002f36c);
            rtsp_h264_get_pps_sps
                      (uVar20,**(undefined4 **)(iVar18 + DAT_0002f368),local_a40,&local_e40,
                       &local_b40,&local_fa4);
            iVar21 = DAT_0002f370 + 0x2ee7c;
            uVar13 = 0xbd7;
            iVar7 = DAT_0002f374 + 0x2ee8e;
          }
          DebugPrint(8,7,iVar21,iVar7,uVar13,uVar20,local_e40,local_fa4);
          uVar14 = local_fa4;
          if (((int)local_e40 < 1) || ((int)local_fa4 < 1)) {
            memset((string *)local_940,0,0x100);
            if (*(int *)(DAT_0002f380 + 0x2f164) == 0) {
              iVar21 = *(int *)(iVar18 + DAT_0002f2c0) + uVar25 * 0x400;
            }
            else {
              iVar21 = *(int *)(iVar18 + DAT_0002f36c);
            }
            FUN_00020be0(iVar21,local_10f4,(string *)local_940,0);
            memset((string *)&local_840,0,0x100);
            local_10f4 = DAT_0002f284;
          }
          else {
            local_10f4 = local_b40 >> 0x18 |
                         (local_b40 >> 0x10 & 0xff) << 8 | (local_b40 >> 8 & 0xff) << 0x10;
            memset((string *)local_940,0,0x100);
            FUN_00020be0(&local_b40,uVar14,(string *)local_940,0);
            memset((string *)&local_840,0,0x100);
            FUN_00020be0(local_a40,local_e40,(string *)&local_840,0);
          }
          DebugPrint(8,7,DAT_0002f384 + 0x2efb6,DAT_0002f388 + 0x2efba,0xc08);
          deubug_show_data_hex(&local_b40,local_fa4 & 0xffff,1);
          DebugPrint(8,7,DAT_0002f38c + 0x2efd8,DAT_0002f390 + 0x2efdc,0xc0a);
          deubug_show_data_hex(local_a40,local_e40 & 0xffff,1);
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f394 + 0x2eff0));
          if ((*(int *)(DAT_0002f398 + 0x2f1f8) == 0) ||
             ((pPVar33 = (PlaybackFileInfo *)*param_1, pPVar33 == (PlaybackFileInfo *)0x0 &&
              (param_1[1] == 0)))) {
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f3bc + 0x2f0b2))
            ;
          }
          else {
            local_c40 = 0;
            memset(auStack_c3c,0,0x1c);
            if (pPVar33 == (PlaybackFileInfo *)0x0) {
              if ((ulong *)param_1[1] != (ulong *)0x0) {
                CPlayFileSession::GetPlaybackFileTime((ulong *)param_1[1]);
                pcVar17 = (char *)(DAT_0002f3b0 + 0x2f090);
                iVar21 = local_d40;
                goto LAB_0002f05e;
              }
            }
            else {
              puVar27 = *(undefined4 **)(iVar18 + DAT_0002f39c);
              CPlaybackSession::GetPlaybackFileInfo(pPVar33);
              DebugPrint(8,7,DAT_0002f3a0 + 0x2f03a,DAT_0002f3a4 + 0x2f04c,0xc14,*puVar27,puVar27[2]
                         ,puVar27[1]);
              pcVar17 = (char *)(DAT_0002f3ac + 0x2f076);
              iVar21 = puVar27[2];
LAB_0002f05e:
              sprintf((char *)&local_c40,pcVar17,0,iVar21);
            }
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)&local_c40);
            DebugPrint(8,7,DAT_0002f3b4 + 0x2f0a0,DAT_0002f3b8 + 0x2f0a6,0xc25,&local_c40);
          }
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f3c0 + 0x2f0bc));
          if ((0 < iStack_10b8) || (iStack_10b8 == 0 && iStack_10b4 == 0)) {
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f3c4 + 0x2f0d6))
            ;
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f3c8 + 0x2f0e0))
            ;
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f3cc + 0x2f0ea))
            ;
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f3d0 + 0x2f0f4))
            ;
            sprintf((char *)&local_c40,(char *)(DAT_0002f3d4 + 0x2f102),local_10f4);
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)&local_c40);
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f3d8 + 0x2f116))
            ;
            if (*(int *)((int)&DAT_0002f320 + DAT_0002f3dc) == 0) {
              std::__cxx11::string::operator+=((string *)&local_105c,(char *)local_940);
              std::__cxx11::string::operator+=
                        ((string *)&local_105c,(char *)(DAT_0002f3e0 + 0x2f136));
              std::__cxx11::string::operator+=((string *)&local_105c,(char *)&local_840);
            }
            if (bVar3) {
              std::__cxx11::string::operator+=
                        ((string *)&local_105c,(char *)(DAT_0002f3e4 + 0x2f184));
            }
            else {
              FUN_0002cee6((string *)&local_d40,uVar25);
              std::__cxx11::string::operator+=((string *)&local_105c,(string *)&local_d40);
              std::__cxx11::string::_M_dispose();
            }
          }
          if ((0 < iStack_10b4) || (iStack_10b4 == 0 && iStack_10b8 == 0)) {
            FUN_0002cd34((string *)&local_c40);
            std::__cxx11::string::operator+=((string *)&local_105c,(string *)&local_c40);
            goto LAB_0002f7e8;
          }
          break;
        case 2:
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002faf0 + 0x2f82c));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002faf4 + 0x2f836));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002faf8 + 0x2f840));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fafc + 0x2f84a));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb00 + 0x2f854));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb04 + 0x2f85e));
          std::__cxx11::string::operator+=
                    ((string *)&local_105c,
                     (char *)(*(int *)(iVar18 + DAT_0002fb08) +
                             (uStack_10bc + (local_10c0 + -1) * 4) * 0x400));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb0c + 0x2f886));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb10 + 0x2f890));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb14 + 0x2f89a));
          iVar21 = FUN_00024550(local_10c0,uStack_10bc);
          if (iVar21 != 0) {
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb18 + 0x2f8b4))
            ;
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb1c + 0x2f8be))
            ;
            pcVar17 = (char *)(DAT_0002fb20 + 0x2f8c6);
            goto LAB_0002f8c4;
          }
          break;
        default:
          goto switchD_0002ed9c_caseD_3;
        case 7:
          DebugPrint(8,7,DAT_0002fb54 + 0x2f980,DAT_0002fb58 + 0x2f984,0xd34,lVar11,uVar20,uVar14,
                     lVar35,psVar15,iVar21);
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb5c + 0x2f98e));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb60 + 0x2f998));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb64 + 0x2f9a2));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb68 + 0x2f9ac));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb6c + 0x2f9b6));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb70 + 0x2f9c0));
          iVar21 = FUN_00024550(local_10c0,uStack_10bc);
          if (iVar21 != 0) {
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb74 + 0x2f9dc))
            ;
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb78 + 0x2f9e6))
            ;
            pcVar17 = (char *)(DAT_0002fb7c + 0x2f9ee);
            goto LAB_0002f8c4;
          }
          break;
        case 10:
          local_840 = 0;
          memset(auStack_83c,0,0x7fc);
          if ((*(int *)((int)&DAT_0002f3b4 + DAT_0002f3e8) == 0) ||
             ((pPVar33 = (PlaybackFileInfo *)*param_1, pPVar33 == (PlaybackFileInfo *)0x0 &&
              (param_1[1] == 0)))) {
            strcpy((char *)&local_840,(char *)(DAT_0002fa84 + 0x2f416));
          }
          else {
            local_940[0] = 0;
            memset(local_940 + 1,0,0x1c);
            if (pPVar33 == (PlaybackFileInfo *)0x0) {
              if ((ulong *)param_1[1] != (ulong *)0x0) {
                CPlayFileSession::GetPlaybackFileTime((ulong *)param_1[1]);
                pcVar17 = &UNK_0002f282 + DAT_0002f408;
                uVar14 = local_a40[0].tm_sec;
                goto LAB_0002f230;
              }
            }
            else {
              puVar27 = *(undefined4 **)(iVar18 + DAT_0002f39c);
              CPlaybackSession::GetPlaybackFileInfo(pPVar33);
              DebugPrint(8,7,DAT_0002f3ec + 0x2f206,DAT_0002f3f0 + 0x2f21c,0xc57,*puVar27,puVar27[2]
                         ,puVar27[1]);
              pcVar17 = (char *)(DAT_0002f404 + 0x2f268);
              uVar14 = puVar27[2];
LAB_0002f230:
              sprintf((char *)local_940,pcVar17,0,uVar14);
            }
            sprintf((char *)&local_840,(char *)(DAT_0002f3f8 + 0x2f242),(char *)local_940);
            DebugPrint(8,7,DAT_0002f3fc + 0x2f256,DAT_0002f400 + 0x2f25a,0xc6b,(string *)&local_840)
            ;
          }
          local_fa4 = 0;
          memset(auStack_fa0,0,0x60);
          local_e40 = 0;
          memset(auStack_e3c,0,0xfc);
          local_d40 = 0;
          memset(auStack_d3c,0,0xfc);
          local_c40 = 0;
          memset(auStack_c3c,0,0xfc);
          uStack_10b0 = 0;
          local_b40 = 0;
          uStack_10ac = 0;
          local_10a8 = 0;
          memset(auStack_b3c,0,0xfc);
          local_a40[0].tm_sec = 0;
          memset(&local_a40[0].tm_min,0,0xfc);
          local_940[0] = 0;
          memset(local_940 + 1,0,0xfc);
          if (*(int *)(DAT_0002fa88 + 0x2f6b8) == 0) {
            iVar21 = *(int *)(iVar18 + DAT_0002fa98) + uVar25 * 0x400;
            uVar20 = *(undefined4 *)(*(int *)(iVar18 + DAT_0002fa94) + uVar25 * 4);
          }
          else {
            iVar21 = *(int *)(iVar18 + DAT_0002fa90);
            uVar20 = **(undefined4 **)(iVar18 + DAT_0002fa8c);
          }
          rtsp_h265_get_vps_pps_sps
                    (iVar21,uVar20,&local_e40,&uStack_10b0,&local_c40,&local_10a8,&local_d40,
                     &uStack_10ac);
          if (uStack_10b0 == 0) {
            DebugPrint(8,7,DAT_0002fa9c + 0x2f52a,DAT_0002faa0 + 0x2f52e,0xc8d);
          }
          if (uStack_10ac == 0) {
            DebugPrint(8,7,DAT_0002faa4 + 0x2f54a,DAT_0002faa8 + 0x2f54e,0xc92);
          }
          if (local_10a8 == 0) {
            DebugPrint(8,7,DAT_0002faac + 0x2f56a,DAT_0002fab0 + 0x2f56e,0xc96);
          }
          if ((((int)uStack_10b0 < 1) || ((int)uStack_10ac < 1)) || ((int)local_10a8 < 1)) {
            param5 = 0;
            local_10e4 = 0;
            uVar30 = 0;
            uVar14 = 0;
          }
          else {
            pvVar26 = operator_new__(uStack_10b0);
            uVar14 = FUN_0002cc7a(pvVar26,uStack_10b0,&local_e40);
            if (uVar14 < 0x12) {
              operator_delete__(pvVar26);
              DebugPrint(8,7,DAT_0002fab4 + 0x2f5c0,DAT_0002fab8 + 0x2f5c2,0xcaa);
            }
            DebugPrint(8,7,DAT_0002fabc + 0x2f5d8,DAT_0002fac0 + 0x2f5dc,0xcad);
            deubug_show_data_hex(&local_e40,uStack_10b0 & 0xffff,1);
            DebugPrint(8,7,DAT_0002fac4 + 0x2f5fe,DAT_0002fac8 + 0x2f602,0xcaf);
            deubug_show_data_hex(&local_d40,uStack_10ac & 0xffff,1);
            DebugPrint(8,7,DAT_0002facc + 0x2f624,DAT_0002fad0 + 0x2f628,0xcb1);
            deubug_show_data_hex(&local_c40,local_10a8 & 0xffff,1);
            uVar30 = (uint)*(byte *)((int)pvVar26 + 6);
            param5 = (uint)*(byte *)((int)pvVar26 + 0x11);
            local_10e4 = uVar30 & 0x1f;
            uVar14 = (int)uVar30 >> 6;
            uVar30 = (uVar30 & 0x3f) >> 5;
            sprintf((char *)&local_fa4,(char *)(DAT_0002fad4 + 0x2f65a),
                    (uint)*(byte *)((int)pvVar26 + 0xb),(uint)*(byte *)((int)pvVar26 + 0xc),
                    (uint)*(byte *)((int)pvVar26 + 0xd),(uint)*(byte *)((int)pvVar26 + 0xe),
                    (uint)*(byte *)((int)pvVar26 + 0xf),(uint)*(byte *)((int)pvVar26 + 0x10));
            operator_delete__(pvVar26);
            memset((string *)local_940,0,0x100);
            memset(&local_b40,0,0x100);
            memset(local_a40,0,0x100);
            FUN_00020be0(&local_e40,uStack_10b0,(string *)local_940,0);
            FUN_00020be0(&local_d40,uStack_10ac,&local_b40,0);
            FUN_00020be0(&local_c40,local_10a8,local_a40,0);
          }
          if ((iStack_10b8 < 1) && (iStack_10b8 != 0 || iStack_10b4 != 0)) {
            FUN_0002b874(auStack_1044,(string *)&local_840);
            psVar15 = (string *)std::__cxx11::string::insert((uint)auStack_1044,(string *)0x0);
            std::__cxx11::string::string(asStack_102c,psVar15);
            std::__cxx11::string::operator=((string *)&local_105c,asStack_102c);
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
            pcVar17 = (char *)(DAT_0002fae8 + 0x2f7de);
LAB_0002f7a0:
            std::__cxx11::string::operator+=((string *)&local_105c,pcVar17);
          }
          else {
            sVar10 = strlen((char *)&local_840);
            psVar15 = (string *)&local_840 + sVar10;
            if (*(int *)(DAT_0002fad8 + 0x2f8fe) == 0) {
              sprintf((char *)psVar15,(char *)(DAT_0002fadc + 0x2f712),uVar14,local_10e4,uVar30,
                      param5,(char *)&local_fa4,(char *)local_940,(char *)&local_b40,
                      (char *)local_a40);
            }
            else {
              sprintf((char *)psVar15,(char *)(DAT_0002fae0 + 0x2f73e),uVar14,local_10e4,uVar30,
                      param5,(char *)&local_fa4);
            }
            FUN_0002b874(auStack_1044,(string *)&local_840);
            psVar15 = (string *)std::__cxx11::string::insert((uint)auStack_1044,(string *)0x0);
            std::__cxx11::string::string(asStack_102c,psVar15);
            std::__cxx11::string::operator=((string *)&local_105c,asStack_102c);
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
            if (bVar3) {
              pcVar17 = (char *)(DAT_0002fae4 + 0x2f7a2);
              goto LAB_0002f7a0;
            }
            FUN_0002cee6(asStack_102c,uVar25);
            std::__cxx11::string::operator+=((string *)&local_105c,asStack_102c);
            std::__cxx11::string::_M_dispose();
          }
          if ((0 < iStack_10b4) || (iStack_10b4 == 0 && iStack_10b8 == 0)) {
            FUN_0002cd34(asStack_102c);
            std::__cxx11::string::operator+=((string *)&local_105c,asStack_102c);
            goto LAB_0002f7e8;
          }
        }
      }
      else {
        if (local_10f8 == 0xff) {
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f358 + 0x2edc8));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f35c + 0x2edd4));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f360 + 0x2ede0));
          if ((iStack_10b4 < 1) && (iStack_10b4 != 0 || iStack_10b8 != 0)) goto LAB_0002f7ec;
          FUN_0002cd34((string *)&local_840);
          std::__cxx11::string::operator+=((string *)&local_105c,(string *)&local_840);
        }
        else {
switchD_0002ed9c_caseD_3:
          DebugPrint(8,7,DAT_0002fb80 + 0x2f9fe,DAT_0002fb84 + 0x2fa02,0xd46,lVar11,uVar20,uVar14,
                     lVar35,psVar15,iVar21);
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb88 + 0x2fa0c));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb8c + 0x2fa16));
          std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb90 + 0x2fa20));
          if ((0 < iStack_10b8) || (iStack_10b8 == 0 && iStack_10b4 == 0)) {
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb94 + 0x2fa3a))
            ;
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb98 + 0x2fa44))
            ;
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fb9c + 0x2fa4e))
            ;
            std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fba0 + 0x2fa58))
            ;
          }
          if ((iStack_10b4 < 1) && (!(iStack_10b4 == 0 && iStack_10b8 == 0))) goto LAB_0002f7ec;
          FUN_0002cd34((string *)&local_840);
          std::__cxx11::string::operator+=((string *)&local_105c,(string *)&local_840);
        }
LAB_0002f7e8:
        std::__cxx11::string::_M_dispose();
      }
LAB_0002f7ec:
      local_840 = 0;
      memset(auStack_83c,0,0xfc);
      snprintf((char *)&local_840,0x100,(char *)(DAT_0002faec + 0x2f814),0x6b,0x6b,DAT_0002fa80);
      FUN_0002b874((string *)local_940,(string *)&local_840);
      std::__cxx11::string::operator+=((string *)&local_105c,(string *)local_940);
      std::__cxx11::string::_M_dispose();
      **(undefined4 **)(iVar18 + DAT_0002fd6c) = 0;
      if (local_10f8 != 0xff) {
        memset((string *)&local_840,0,0x51);
        FUN_000243cc(local_10c0,uStack_10bc,(string *)&local_840,
                     *(undefined4 *)(DAT_0002fd70 + 0x2fdd8));
        std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fd74 + 0x2fbf0));
        std::__cxx11::string::operator+=((string *)&local_105c,(char *)&local_840);
        std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fd78 + 0x2fc04));
      }
      if ((0 < iStack_10b8) || (iStack_10b8 == 0 && iStack_10b4 == 0)) {
        FUN_0002ce88((string *)&local_840);
        std::__cxx11::string::operator+=((string *)&local_105c,(string *)&local_840);
        std::__cxx11::string::_M_dispose();
      }
      std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002fd7c + 0x2fc38));
      if ((char)param_1[0x46] != '\0') {
        FUN_0002b874((string *)local_940,param_1 + 0x26);
        FUN_0002d0c0((string *)&local_840,(string *)local_940,
                     *(undefined4 *)(*(int *)(iVar18 + DAT_0002fd80) + 0x90c),0);
        std::__cxx11::string::operator+=((string *)&local_105c,(string *)&local_840);
        std::__cxx11::string::_M_dispose();
        std::__cxx11::string::_M_dispose();
      }
    }
    else {
      FUN_0002b874(local_940,param_1 + 0x26);
      FUN_0002d208((string *)&local_840,local_940,uStack_10bc,(char)param_1[0x46]);
      std::__cxx11::string::operator=((string *)&local_105c,(string *)&local_840);
      std::__cxx11::string::_M_dispose();
      std::__cxx11::string::_M_dispose();
      if ((0 < iStack_10b8) || (iStack_10b8 == 0 && iStack_10b4 == 0)) {
        FUN_0002ce88((string *)&local_840);
        std::__cxx11::string::operator+=((string *)&local_105c,(string *)&local_840);
        std::__cxx11::string::_M_dispose();
      }
      std::__cxx11::string::operator+=((string *)&local_105c,(char *)(DAT_0002f2f4 + 0x2ebbe));
      uVar25 = uStack_10bc;
      uVar20 = FUN_00027aac(uStack_10bc);
      uVar13 = FUN_00027aba(uStack_10bc);
      DebugPrint(8,7,DAT_0002f2f8 + 0x2ebe2,DAT_0002f2fc + 0x2ebfe,0xb86,uVar25,uVar20,uVar13,
                 (char)param_1[0x46],local_1058);
    }
    local_940[0] = 0;
    local_940[1] = 0;
    local_938 = 0;
    sprintf((char *)local_940,(char *)(DAT_0002fd84 + 0x2fc90),local_1058);
    FUN_00035870(piVar19,DAT_0002fd88 + 0x2fca6,local_940);
    FUN_00035870(piVar19,DAT_0002fd8c + 0x2fcb8,param_1 + 0x26);
    FUN_0002d49c(param_1,piVar19,local_105c,local_1058);
    std::__cxx11::string::_M_dispose();
LAB_0002e2f4:
    FUN_0003583c(piVar19);
    std::__cxx11::string::_M_dispose();
    std::__cxx11::string::_M_dispose();
    std::__cxx11::string::_M_dispose();
    return 0;
  case 7:
    FUN_0003568c(auStack_c8);
    uStack_9c = 1;
    FUN_00035a0a(auStack_c8,param_2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    memset(acStack_98 + 4,0,0x7c);
    pcVar17 = strcpy(acStack_98,(char *)(DAT_0003195c + 0x318da));
    FUN_00035946(auStack_c8,pcVar17);
    FUN_0002d434(param_1,auStack_c8);
    iVar18 = FileExist(DAT_00031960 + 0x318f2);
    if (iVar18 == 1) {
      pcStack_e0 = acStack_d8;
      uStack_dc = 0;
      acStack_d8[0] = '\0';
      iVar18 = FUN_00035278(param_2,DAT_00031964 + 0x31904);
      if (iVar18 != 0) {
        piVar19 = (int *)FUN_000348ae();
        (**(code **)(*piVar19 + 8))(piVar19,&pcStack_e0);
        pcVar17 = strstr(pcStack_e0,(char *)(DAT_00031968 + 0x31926));
        if (pcVar17 == (char *)0x0) {
          **(undefined4 **)(iVar21 + 0x318be + DAT_0003196c) = 1;
        }
      }
      std::__cxx11::string::_M_dispose();
    }
    FUN_0003583c(auStack_c8);
    return 0;
  case 8:
    iVar21 = FUN_00031970(param_1);
    return iVar21;
  case 9:
    FUN_0003568c(auStack_40);
    FUN_00035a0a(auStack_40,param_2);
    FUN_00035a34(auStack_40,param_2);
    FUN_0002d434(param_1,auStack_40);
    FUN_0003583c(auStack_40);
    return 0;
  case 0xb:
    iVar21 = FUN_00031a8c(param_1);
    return iVar21;
  case 0xc:
    iVar21 = FUN_00031ac8(param_1);
    return iVar21;
  }
  iVar21 = DAT_00031108 + 0x30d9e;
  DebugPrint(8,7,DAT_00031104 + 0x30d96,DAT_0003110c + 0x30dbc);
  FUN_0002489c(param_1[0xe],(char)param_1[0x18],*(undefined1 *)((int)param_1 + 0x62),
               *(undefined1 *)((int)param_1 + 99));
  piVar19 = *(int **)(iVar21 + DAT_00031110);
  if (*piVar19 == 0) {
    iVar21 = 500;
  }
  else {
    iVar21 = 0;
  }
  FUN_0003568c(&local_160);
  FUN_00035a0a(&local_160,param_2);
  if (*(char *)((int)param_1 + 0x5f) == '\0') {
    local_134 = (in_addr *)0xb;
    FUN_0002d434(param_1,&local_160);
    goto LAB_000316e2;
  }
  iVar18 = FUN_00035278(param_2,DAT_00031114 + 0x30e12);
  if ((iVar18 == 0) || (iVar18 = FUN_000348ae(), iVar18 == 0)) {
    uVar20 = 0;
    uVar25 = 0;
  }
  else {
    uVar20 = *(undefined4 *)(iVar18 + 0x14);
    uVar25 = (uint)((ulonglong)*(uint *)(iVar18 + 0x10) * (ulonglong)DAT_00031100 >> 0x26);
    DebugPrint(8,7,DAT_00031118 + 0x30e38,DAT_0003111c + 0x30e50);
    if ((long *)*param_1 == (long *)0x0) {
      if (param_1[1] != 0) {
        CPlayFileSession::Seek(param_1[1]);
      }
    }
    else {
      CPlaybackSession::GetPlayTime((long *)*param_1);
      DebugPrint(8,7,DAT_00031120 + 0x30e70,DAT_00031124 + 0x30e74);
      CPlaybackSession::Seek(*param_1);
    }
  }
  iVar18 = FUN_00035278(param_2,DAT_00031128 + 0x30e9c);
  if (iVar18 != 0) {
    local_130[0] = (in_addr *)0x1;
    FUN_000352be(param_2,DAT_0003112c + 0x30eae,local_130);
    DebugPrint(8,7,DAT_00031130 + 0x30ec0,DAT_00031134 + 0x30ed2);
    FUN_000359c4(&local_160,DAT_00031138 + 0x30ede,local_130[0]);
    if (param_1[0xf] != 0) {
      FUN_00033644(param_1[0xf],local_130[0]);
    }
    iVar18 = *param_1;
    if (iVar18 == 0) {
      iVar18 = param_1[1];
      if (iVar18 != 0) {
        if ((int)local_130[0] < 0) {
          CPlayFileSession::Slow(iVar18);
        }
        else {
          CPlayFileSession::Fast(iVar18);
        }
      }
    }
    else if ((int)local_130[0] < 0) {
      CPlaybackSession::Slow(iVar18);
    }
    else {
      CPlaybackSession::Fast(iVar18);
    }
  }
  if (param_1[0xf] == 0) {
    if ((char)param_1[0x19] != '\0') goto LAB_00030f46;
    if ((2 < (*(byte *)((int)param_1 + 0x61) & 0xfb)) && ((char)param_1[0x46] == '\0'))
    goto LAB_00030f40;
    bVar34 = false;
    local_134 = (in_addr *)0x1;
  }
  else {
    iVar18 = FUN_00033ae0(param_1[0xf],uVar25,uVar20);
    if (iVar18 == -1) {
      pvVar26 = (void *)param_1[0xf];
      *(undefined1 *)(param_1 + 8) = 1;
      if (pvVar26 != (void *)0x0) {
        FUN_00033378(pvVar26);
        operator_delete(pvVar26,0x50);
      }
      param_1[0xf] = 0;
LAB_00030f40:
      bVar34 = false;
      local_134 = (in_addr *)0x26;
    }
    else {
LAB_00030f46:
      bVar34 = true;
      local_134 = (in_addr *)0x1;
    }
  }
  local_180 = 0;
  memset(auStack_17c,0,0x1c);
  FUN_0002b9bc(&local_180,param_1[0xd]);
  FUN_000358b2(&local_160,&local_180);
  FUN_00035900(&local_160,DAT_00031140 + 0x30f9e,DAT_0003113c + 0x30f9c);
  memset(local_130,0,0x100);
  if ((((char)param_1[0x19] == '\0') || ((char)param_1[0x18] != '\0')) || (param_1[0xf] != 0)) {
    DebugPrint(8,7,DAT_00031148 + 0x30ffc,DAT_0003114c + 0x31000);
    if (bVar34) {
      DebugPrint(8,7,DAT_00031158 + 0x31044,DAT_00031154 + 0x3103e);
    }
    if (*(byte *)(param_1 + 0x17) != 3) {
      if (((bVar34) && ((*(byte *)(param_1 + 0x17) & 0xfd) == 0)) && (param_1[0xf] != 0)) {
        iVar18 = FUN_00024550(*(undefined1 *)((int)param_1 + 0x5d),
                              *(undefined1 *)((int)param_1 + 0x5e));
        if (iVar18 == 0) {
          for (iVar7 = 0; iVar21 != iVar7; iVar7 = iVar7 + 1) {
            FUN_0003356c(param_1[0xf]);
            iVar18 = FUN_00024284();
            if (iVar18 != 0) goto LAB_0003165c;
            usleep(10000);
          }
          iVar18 = 0;
LAB_0003165c:
          FUN_0003356c(param_1[0xf]);
          uVar25 = FUN_000242a8();
          uVar20 = FUN_0003356c(param_1[0xf]);
          FUN_0002435c(uVar20,1);
          pcVar17 = (char *)(DAT_0003175c + 0x31680);
LAB_0003152a:
          iVar18 = iVar18 + 1;
LAB_000314cc:
          sprintf((char *)local_130,pcVar17,iVar18,uVar25);
        }
        else {
          lVar11 = param_1[0xf];
          if ((char)param_1[0x18] == '\x10') {
            FUN_0003356c(lVar11);
            iVar18 = FUN_000242cc();
            iVar7 = 0;
            while ((iVar7 != iVar21 && (iVar18 == 0))) {
              FUN_0003356c(param_1[0xf]);
              iVar18 = FUN_000242cc();
              if (iVar18 != 0) break;
              usleep(10000);
              iVar7 = iVar7 + 1;
            }
            FUN_0003356c(param_1[0xf]);
            uVar25 = FUN_000242f0();
            uVar20 = FUN_0003356c(param_1[0xf]);
            FUN_0002435c(uVar20,0);
            iVar18 = iVar18 + 1;
            if ((char)param_1[0x46] == '\0') {
              pcVar17 = (char *)(DAT_00031750 + 0x314ce);
              goto LAB_000314cc;
            }
            sprintf((char *)local_130,(char *)(DAT_0003174c + 0x314ae),iVar18,uVar25,
                    (char *)(DAT_00031748 + 0x314aa));
          }
          else {
            if ((char)param_1[0x18] == '\x01') {
              FUN_0003356c(lVar11);
              iVar18 = FUN_00024284();
              iVar7 = 0;
              while ((iVar21 != iVar7 && (iVar18 == 0))) {
                FUN_0003356c(param_1[0xf]);
                iVar18 = FUN_00024284();
                if (iVar18 != 0) break;
                usleep(10000);
                iVar7 = iVar7 + 1;
              }
              FUN_0003356c(param_1[0xf]);
              uVar25 = FUN_000242a8();
              uVar20 = FUN_0003356c(param_1[0xf]);
              FUN_0002435c(uVar20,1);
              pcVar17 = (char *)(DAT_00031754 + 0x3152c);
              goto LAB_0003152a;
            }
            FUN_0003356c(lVar11);
            iVar18 = FUN_00024284();
            if (((char)param_1[0x17] == '\x02') &&
               (iVar7 = FUN_000211b0(*(undefined1 *)((int)param_1 + 0x5e),
                                     *(undefined1 *)((int)param_1 + 0x5d),2,1), 0 < iVar7)) {
              iVar7 = 0;
              while ((iVar21 != iVar7 && (iVar18 == 0))) {
                FUN_0003356c(param_1[0xf]);
                iVar18 = FUN_00024284();
                if (iVar18 != 0) break;
                usleep(10000);
                iVar7 = iVar7 + 1;
              }
              iVar7 = 0;
            }
            else if ((char)param_1[0x18] == '\0') {
              FUN_0003356c(param_1[0xf]);
              iVar7 = FUN_000242cc();
              iVar18 = 0;
              while ((iVar21 != iVar18 && (iVar7 == 0))) {
                FUN_0003356c(param_1[0xf]);
                iVar7 = FUN_000242cc();
                usleep(10000);
                iVar18 = iVar18 + 1;
              }
              iVar18 = 0;
            }
            else {
              FUN_0003356c(param_1[0xf]);
              iVar7 = FUN_000242cc();
              iVar29 = 0;
              while ((iVar29 != iVar21 && ((iVar18 == 0 || (iVar7 == 0))))) {
                FUN_0003356c(param_1[0xf]);
                iVar18 = FUN_00024284();
                FUN_0003356c(param_1[0xf]);
                iVar7 = FUN_000242cc();
                if ((iVar18 != 0) && (iVar7 != 0)) break;
                usleep(10000);
                iVar29 = iVar29 + 1;
              }
            }
            FUN_0003356c(param_1[0xf]);
            uVar25 = FUN_000242f0();
            FUN_0003356c(param_1[0xf]);
            uVar14 = FUN_000242a8();
            uVar20 = FUN_0003356c(param_1[0xf]);
            FUN_0002435c(uVar20,2);
            sprintf((char *)local_130,(char *)(DAT_00031758 + 0x31636),iVar18 + 1,uVar14,iVar7 + 1,
                    uVar25);
          }
        }
        if ((char)param_1[0x19] != '\0') {
          FUN_0002bae4(param_1);
          FUN_0002baee(param_1,local_130,0x100);
        }
        FUN_00035900(&local_160,DAT_00031760 + 0x31696,local_130);
        cVar5 = *(char *)((int)param_1 + 0x5e);
        if (param_1[0x48] == 1) {
          if (cVar5 == '\0') {
            cVar5 = '\x02';
          }
          else if (cVar5 == '\x01') {
            cVar5 = '\x03';
          }
        }
        if ((*piVar19 == 0) && ((int)((uint)*(byte *)(param_1 + 0x18) << 0x1f) < 0)) {
          FUN_00016310(*(undefined1 *)((int)param_1 + 0x5d),cVar5);
        }
      }
      FUN_0002d434(param_1,&local_160);
      if (((!bVar34) || ((char)param_1[0x19] == '\0')) || (*(char *)((int)param_1 + 0x65) == '\0'))
      goto LAB_000316e2;
      goto LAB_0003140a;
    }
    local_190 = 0;
    local_18c = 0;
    local_188 = 0;
    local_184 = 0;
    if ((char)param_1[0x46] != '\0') {
      if (param_1[0xf] != 0) {
        FUN_0002492c(param_1[0xe],(char)param_1[0x18],&local_190,&local_18c);
        iVar7 = 0;
        iVar18 = DAT_00031160 + 0x310aa;
        iVar29 = DAT_00031164 + 0x310ac;
        while( true ) {
          iVar7 = iVar7 + 1;
          if ((iVar21 + 1 == iVar7) || (local_18c != 0)) goto LAB_0003119e;
          FUN_0002492c(param_1[0xe],(char)param_1[0x18],&local_190,&local_18c);
          if (local_18c != 0) break;
          usleep(10000);
          __aeabi_idivmod(iVar7,100);
          if (extraout_r1 == 0) {
            DebugPrint(8,7,iVar29,iVar18);
          }
        }
        DebugPrint(8,7,DAT_00031168 + 0x310f8,DAT_0003116c + 0x310fc);
LAB_0003119e:
        sprintf((char *)local_130,(char *)(DAT_0003170c + 0x311b0),local_18c,local_184,
                (char *)(DAT_00031708 + 0x311ac));
      }
      FUN_00035900(&local_160,DAT_00031710 + 0x311c4,local_130);
      FUN_0002d434(param_1,&local_160);
      FUN_000248ec(param_1[0xe]);
      goto LAB_000316e2;
    }
    cVar5 = (char)param_1[0x18];
    lVar11 = param_1[0xe];
    if (cVar5 == '\x10') {
      FUN_0002492c(lVar11,0x10,&local_190,&local_18c);
      iVar18 = 0;
      while( true ) {
        if ((iVar21 == iVar18) || (local_18c != 0)) goto LAB_0003124e;
        FUN_0002492c(param_1[0xe],(char)param_1[0x18],&local_190,&local_18c);
        if (local_18c != 0) break;
        usleep(10000);
        iVar18 = iVar18 + 1;
      }
      DebugPrint(8,7,DAT_00031714 + 0x3123a,DAT_00031718 + 0x31240);
LAB_0003124e:
      pcVar17 = (char *)(DAT_0003171c + 0x3125c);
      iVar21 = local_18c;
      uVar25 = local_184;
LAB_0003125a:
      sprintf((char *)local_130,pcVar17,iVar21,uVar25);
    }
    else {
      if (cVar5 == '\x01') {
        FUN_0002492c(lVar11,1,&local_190,&local_18c);
        iVar18 = 0;
        while( true ) {
          if ((iVar18 == iVar21) || (local_190 != 0)) goto LAB_000312f6;
          FUN_0002492c(param_1[0xe],(char)param_1[0x18],&local_190,&local_18c);
          if (local_190 != 0) break;
          usleep(10000);
          iVar18 = iVar18 + 1;
        }
        DebugPrint(8,7,DAT_00031724 + 0x312e6,DAT_00031728 + 0x312e8);
LAB_000312f6:
        pcVar17 = (char *)(DAT_0003172c + 0x31304);
        iVar21 = local_190;
        uVar25 = local_188;
        goto LAB_0003125a;
      }
      FUN_0002492c(lVar11,cVar5,&local_190,&local_18c);
      iVar18 = 0;
      while( true ) {
        if ((iVar18 == iVar21) || ((local_18c != 0 && (local_190 != 0)))) goto LAB_00031372;
        FUN_0002492c(param_1[0xe],(char)param_1[0x18],&local_190,&local_18c);
        if ((local_190 != 0) && (local_18c != 0)) break;
        usleep(10000);
        iVar18 = iVar18 + 1;
      }
      DebugPrint(8,7,DAT_00031734 + 0x31364,DAT_00031730 + 0x31362);
LAB_00031372:
      sprintf((char *)local_130,(char *)(DAT_00031738 + 0x31380),local_190,local_188,local_18c,
              local_184);
    }
    if (*(char *)((int)param_1 + 99) != '\0') {
      sVar10 = strlen((char *)local_130);
      strcpy((char *)((int)local_130 + sVar10),(char *)(DAT_00031720 + 0x31276));
    }
    if ((char)param_1[0x19] != '\0') {
      FUN_0002bae4(param_1);
      FUN_0002baee(param_1,local_130,0x100);
    }
    FUN_00035900(&local_160,DAT_0003173c + 0x313a4,local_130);
    cVar5 = *(char *)((int)param_1 + 0x5e);
    if (param_1[0x48] == 1) {
      if (cVar5 == '\0') {
        cVar5 = '\x02';
      }
      else if (cVar5 == '\x01') {
        cVar5 = '\x03';
      }
    }
    DebugPrint(8,7,DAT_00031740 + 0x313d4,DAT_00031744 + 0x313d6);
    if (*piVar19 == 0) {
      FUN_00016310(*(undefined1 *)((int)param_1 + 0x5d),cVar5);
    }
    FUN_0002d434(param_1,&local_160);
    FUN_000248ec(param_1[0xe]);
    if ((char)param_1[0x19] != '\0') goto LAB_0003140a;
  }
  else {
    FUN_0002bae4(param_1);
    FUN_0002baee(param_1,local_130,0x100);
    FUN_00035900(&local_160,DAT_00031144 + 0x30fd8,local_130);
    FUN_0002d434(param_1,&local_160);
LAB_0003140a:
    FUN_0002c602(param_1);
  }
  FUN_0002c830(param_1);
LAB_000316e2:
  FUN_0003583c(&local_160);
  return 0;
}


