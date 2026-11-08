/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00026ec4 */
/* function FUN_00026ec4 @ 00026ec4 */

size_t FUN_00026ec4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  void *__s;
  int iVar6;
  size_t extraout_r0;
  size_t sVar7;
  int iVar8;
  undefined4 uVar9;
  char *extraout_r2;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  char acStack_810 [376];
  int local_684;
  void *local_680;
  char local_67c [100];
  char local_618 [512];
  int local_418;
  undefined1 auStack_414 [4];
  char acStack_410 [984];
  undefined4 local_38;
  char *local_34;
  char *local_30;
  byte *local_18;
  
  iVar11 = param_1[4];
  pbVar12 = (byte *)*param_1;
  pcVar13 = *(char **)(iVar11 + 0x28);
  local_18 = (byte *)param_4;
  sVar2 = FUN_0006b0e4(pbVar12,iVar11);
  if (sVar2 != 0) {
    return sVar2;
  }
  pcVar3 = strstr(pcVar13,DAT_00026f80);
  if (pcVar3 != (char *)0x0) {
    local_18 = pbVar12;
    uVar4 = FUN_0006aa8a(iVar11);
    iVar5 = FUN_00025bfc(uVar4,*(undefined4 *)(iVar11 + 0x80));
    if (iVar5 == 0) {
      uVar9 = 0x19f;
      uVar4 = DAT_00056700;
    }
    else {
      iVar5 = FUN_00025c08(uVar4,*(undefined4 *)(iVar11 + 0x80));
      if (iVar5 != 0) {
        FUN_00053288(pbVar12,iVar11,0);
        sleep(3);
        sVar2 = FUN_0002df54();
        return sVar2;
      }
      uVar9 = 500;
      uVar4 = DAT_000566fc;
    }
    local_18 = (byte *)0x0;
    sVar2 = FUN_00053350(pbVar12,iVar11,uVar9,uVar4);
    return sVar2;
  }
  pcVar3 = strstr(pcVar13,DAT_00026f84);
  if (pcVar3 != (char *)0x0) {
    iVar5 = 0;
    DebugPrint(1,7,DAT_000568a8,DAT_000568ac);
    local_684 = 0;
    local_618[0] = '\0';
    local_618[1] = '\0';
    local_618[2] = '\0';
    local_618[3] = '\0';
    memset(local_618 + 4,0,0x1fc);
    FUN_000227e4(*(undefined4 *)(iVar11 + 0x28),local_618,0x200);
    local_67c[0] = '\0';
    local_67c[1] = '\0';
    local_67c[2] = '\0';
    local_67c[3] = '\0';
    memset(local_67c + 4,0,0x60);
    local_680 = (void *)0x0;
    pcVar13 = strstr(local_618,DAT_000568b0);
    if (pcVar13 != (char *)0x0) {
      pcVar13 = strchr(pcVar13 + 1,0x3d);
      pcVar3 = extraout_r2;
      if (pcVar13 != (char *)0x0) {
        while( true ) {
          pcVar13 = pcVar13 + 1;
          cVar1 = *pcVar13;
          if ((cVar1 == '&') || (cVar1 == ' ')) break;
          if (iVar5 < 99) {
            pcVar3 = local_67c;
          }
          if (iVar5 < 99) {
            pcVar3[iVar5] = cVar1;
            iVar5 = iVar5 + 1;
          }
        }
        local_67c[iVar5] = '\0';
      }
    }
    __s = malloc(0x400);
    memset(__s,0,0x400);
    FUN_0006d614(&local_418,*(undefined4 *)(iVar11 + 0x18c));
    iVar6 = FUN_000a06bc(local_618,__s,0,&local_418);
    DebugPrint(1,7,DAT_000568b4,DAT_000568ac);
    free(__s);
    iVar5 = DAT_000568b8;
    if (iVar6 == 0) {
      iVar6 = FUN_0006bd78(*(undefined4 *)(DAT_000568b8 + 0x5b4),pbVar12,iVar11,DAT_000568bc);
      if (iVar6 == 0) {
        sVar2 = FUN_0006b9cc(*(undefined4 *)(iVar5 + 0x5b4),pbVar12);
        return sVar2;
      }
      pcVar13 = strstr(*(char **)(iVar11 + 0x28),DAT_000568c0);
      if (pcVar13 == (char *)0x0) {
        pcVar13 = DAT_000568c8;
      }
      else {
        pcVar13 = DAT_000568c4;
      }
      strcpy(local_67c,pcVar13);
    }
    if (local_67c[0] == '\0') {
      strcpy(local_67c,DAT_000568c8);
    }
    DebugPrint(1,7,DAT_000568cc,DAT_000568ac);
    pcVar13 = strstr(local_618,DAT_000568d0);
    iVar5 = FUN_00027abc(&local_680,&local_684,local_67c,pcVar13 != (char *)0x0);
    if (iVar5 == 0) {
      local_418 = iVar5;
      memset(auStack_414,0,0x3fc);
      pcVar13 = DAT_000568d8;
      if ((*pbVar12 & 4) == 0) {
        pcVar13 = DAT_000568d4;
      }
      iVar11 = sprintf((char *)&local_418,DAT_000568dc,DAT_000568e0,local_684,pcVar13);
      FUN_00069c08(pbVar12,&local_418,iVar11);
      FUN_00069c08(pbVar12,local_680,local_684);
    }
    else {
      FUN_00053350(pbVar12,iVar11,500,DAT_000568e4);
    }
    sVar2 = 0;
    if (local_680 != (void *)0x0) {
      free(local_680);
      sVar2 = extraout_r0;
    }
    return sVar2;
  }
  pcVar3 = strstr(pcVar13,DAT_00026f88);
  if (pcVar3 != (char *)0x0) {
    strcpy(acStack_410,DAT_00056974);
    sVar2 = strlen(acStack_410);
    pcVar13 = DAT_0005697c;
    if ((*pbVar12 & 4) == 0) {
      pcVar13 = DAT_00056978;
    }
    iVar11 = sprintf(acStack_810,DAT_00056980,DAT_00056984,sVar2,pcVar13);
    iVar5 = FUN_00069c08(pbVar12,acStack_810,iVar11);
    if (iVar11 != iVar5) {
      DebugPrint(8,7,DAT_0005698c,DAT_00056988,0x97d,iVar5,iVar11);
    }
    sVar7 = FUN_00069c08(pbVar12,acStack_410,sVar2);
    if (sVar2 != sVar7) {
      sVar7 = DebugPrint(8,7,DAT_00056990,DAT_00056988,0x983,sVar7,sVar2);
    }
    return sVar7;
  }
  pcVar3 = strstr(pcVar13,DAT_00026f8c);
  if (pcVar3 != (char *)0x0) {
    strcpy(acStack_410,DAT_00056a20);
    sVar2 = strlen(acStack_410);
    pcVar13 = DAT_00056a28;
    if ((*pbVar12 & 4) == 0) {
      pcVar13 = DAT_00056a24;
    }
    iVar11 = sprintf(acStack_810,DAT_00056a2c,DAT_00056a30,sVar2,pcVar13);
    iVar5 = FUN_00069c08(pbVar12,acStack_810,iVar11);
    if (iVar11 != iVar5) {
      DebugPrint(8,7,DAT_00056a38,DAT_00056a34,0x99f,iVar5,iVar11);
    }
    sVar7 = FUN_00069c08(pbVar12,acStack_410,sVar2);
    if (sVar2 != sVar7) {
      sVar7 = DebugPrint(8,7,DAT_00056a3c,DAT_00056a34,0x9a5,sVar7,sVar2);
    }
    return sVar7;
  }
  pcVar3 = strstr(pcVar13,DAT_00026f90);
  if (pcVar3 != (char *)0x0) {
    strcpy(acStack_410,DAT_00056acc);
    sVar2 = strlen(acStack_410);
    pcVar13 = DAT_00056ad4;
    if ((*pbVar12 & 4) == 0) {
      pcVar13 = DAT_00056ad0;
    }
    iVar11 = sprintf(acStack_810,DAT_00056ad8,DAT_00056adc,sVar2,pcVar13);
    iVar5 = FUN_00069c08(pbVar12,acStack_810,iVar11);
    if (iVar11 != iVar5) {
      DebugPrint(8,7,DAT_00056ae4,DAT_00056ae0,0x9c1,iVar5,iVar11);
    }
    sVar7 = FUN_00069c08(pbVar12,acStack_410,sVar2);
    if (sVar2 != sVar7) {
      sVar7 = DebugPrint(8,7,DAT_00056ae8,DAT_00056ae0,0x9c7,sVar7,sVar2);
    }
    return sVar7;
  }
  pcVar13 = strstr(pcVar13,DAT_00026f94);
  if (pcVar13 != (char *)0x0) {
    strcpy(acStack_410,DAT_00056b78);
    sVar2 = strlen(acStack_410);
    pcVar13 = DAT_00056b80;
    if ((*pbVar12 & 4) == 0) {
      pcVar13 = DAT_00056b7c;
    }
    iVar11 = sprintf(acStack_810,DAT_00056b84,DAT_00056b88,sVar2,pcVar13);
    iVar5 = FUN_00069c08(pbVar12,acStack_810,iVar11);
    if (iVar11 != iVar5) {
      DebugPrint(8,7,DAT_00056b90,DAT_00056b8c,0x9e3,iVar5,iVar11);
    }
    sVar7 = FUN_00069c08(pbVar12,acStack_410,sVar2);
    if (sVar2 != sVar7) {
      sVar7 = DebugPrint(8,7,DAT_00056b94,DAT_00056b8c,0x9e9,sVar7,sVar2);
    }
    return sVar7;
  }
  if (*(int *)(iVar11 + 0x84) != 4) {
    local_18 = (byte *)0x3aa;
    DebugPrint(8,7,DAT_0001fcc8,DAT_0001fccc);
    iVar11 = param_1[4];
    iVar5 = *param_1;
    if ((iVar11 == 0) || (iVar5 == 0)) {
      local_18 = (byte *)0x3b1;
      DebugPrint(8,7,DAT_0001fcd0,DAT_0001fccc);
    }
    else {
      iVar6 = *(int *)(iVar11 + 4);
      if (iVar6 == 6) {
        local_18 = (byte *)0x3b7;
        DebugPrint(8,7,DAT_0001fcd4,DAT_0001fccc);
        FUN_0001facc(iVar5,iVar11);
      }
      else if (iVar6 == 1) {
        local_18 = (byte *)0x3bd;
        DebugPrint(8,7,DAT_0001fcd8,DAT_0001fccc);
        FUN_0001f510(iVar5,iVar11);
      }
      else if (iVar6 - 9U < 2) {
        local_18 = (byte *)0x3c3;
        DebugPrint(8,7,DAT_0001fcdc,DAT_0001fccc);
        FUN_0001f3cc(iVar5,iVar11);
      }
    }
    return 0;
  }
  local_38 = 0x3344;
  DebugPrint(1,7,DAT_00064778,DAT_0006477c);
  pcVar13 = (char *)FUN_0006aa8a(iVar11);
  if (pcVar13 == (char *)0x0) {
    local_38 = 0x334f;
    DebugPrint(8,7,DAT_00064780,DAT_0006477c);
    local_38 = 0x3350;
    sVar2 = DebugPrint(8,7,DAT_00064780,DAT_0006477c);
    return sVar2;
  }
  sVar2 = strlen(pcVar13);
  iVar5 = FUN_0001d748(pcVar13,sVar2);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == 0)) {
    local_38 = 0x3359;
    DebugPrint(8,7,DAT_00064784,DAT_0006477c);
    local_38 = 0x335a;
    sVar2 = DebugPrint(8,7,DAT_00064784,DAT_0006477c);
    if (iVar5 == 0) {
      return sVar2;
    }
    goto LAB_00064596;
  }
  iVar6 = FUN_0001d478(*(int *)(iVar5 + 4),DAT_00064788);
  if (iVar6 != 0) {
    local_34 = *(char **)(iVar5 + 4);
    local_38 = 0x3362;
    DebugPrint(8,7,DAT_0006478c,DAT_0006477c);
    local_34 = *(char **)(iVar5 + 4);
    local_38 = 0x3363;
    DebugPrint(8,7,DAT_0006478c,DAT_0006477c);
    goto LAB_00064596;
  }
  iVar6 = FUN_0001d4ba(iVar5,DAT_00064790);
  if (iVar6 == 0) {
    local_38 = 0x336b;
    DebugPrint(8,7,DAT_00064794,DAT_0006477c);
    local_38 = 0x336c;
    uVar4 = DAT_00064794;
  }
  else if (*(int *)(iVar6 + 0x1c) == 0) {
    local_38 = 0x3373;
    DebugPrint(8,7,DAT_00064798,DAT_0006477c);
    local_38 = 0x3374;
    uVar4 = DAT_00064798;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar6 + 0x1c) + 4);
    if (iVar10 != 0) {
      local_38 = 0x3381;
      local_34 = (char *)iVar10;
      DebugPrint(1,7,DAT_000647a0,DAT_0006477c);
      local_34 = *(char **)(*(int *)(iVar6 + 0x1c) + 4);
      local_38 = 0x3385;
      DebugPrint(8,7,DAT_000647a4,DAT_0006477c);
      FUN_000c6ce8(*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 4),*(undefined4 *)(pbVar12 + 8));
      if ((((int)((uint)*DAT_000647a8 << 0x1f) < 0) &&
          (pcVar13 = strstr(*(char **)(iVar11 + 0x28),DAT_000647ac), pcVar13 == (char *)0x0)) &&
         (iVar10 = FUN_000613e8(pbVar12,iVar11,iVar5,*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 4)),
         iVar10 == 0)) goto LAB_00064596;
      pcVar13 = *(char **)(iVar11 + 0x28);
      uVar4 = FUN_0001d4ba(iVar5,DAT_000647b0);
      if (pcVar13 == (char *)0x0) {
        local_38 = 0x339b;
        DebugPrint(4,7,DAT_000647cc,DAT_0006477c);
      }
      else {
        local_38 = 0x3397;
        local_34 = pcVar13;
        DebugPrint(1,7,DAT_000647b4,DAT_0006477c);
      }
      iVar10 = *(int *)(*(int *)(iVar6 + 0x1c) + 4);
      if ((iVar10 == 0) ||
         (((((iVar8 = FUN_0001d478(iVar10,DAT_000647b8), iVar8 != 0 &&
             (iVar8 = FUN_0001d478(iVar10,DAT_00064a68), iVar8 != 0)) &&
            ((iVar8 = FUN_0001d478(iVar10,DAT_00064a6c), iVar8 != 0 &&
             ((iVar8 = FUN_0001d478(iVar10,DAT_00064a70), iVar8 != 0 &&
              (iVar8 = FUN_0001d478(iVar10,DAT_00064a74), iVar8 != 0)))))) &&
           (iVar8 = FUN_0001d478(iVar10,DAT_00064a78), iVar8 != 0)) &&
          (iVar10 = FUN_0001d478(iVar10,DAT_00064a7c), iVar10 != 0)))) {
        if ((pcVar13 != (char *)0x0) &&
           (((pcVar3 = strstr(pcVar13,DAT_00064a80), pcVar3 != (char *)0x0 ||
             (pcVar3 = strstr(pcVar13,DAT_00064a84), pcVar3 != (char *)0x0)) ||
            (pcVar3 = strstr(pcVar13,DAT_00064a88), pcVar3 != (char *)0x0)))) goto LAB_00064712;
        pcVar3 = strstr(pcVar13,DAT_00064a8c);
        if (((pcVar3 == (char *)0x0) &&
            (pcVar3 = strstr(pcVar13,DAT_00064a90), pcVar3 == (char *)0x0)) &&
           (pcVar3 = strstr(pcVar13,DAT_00064a94), pcVar3 == (char *)0x0)) {
          pcVar3 = strstr(pcVar13,DAT_00064a9c);
          if (((pcVar3 == (char *)0x0) &&
              (pcVar3 = strstr(pcVar13,DAT_00064aa0), pcVar3 == (char *)0x0)) &&
             (pcVar3 = strstr(pcVar13,DAT_00064aa4), pcVar3 == (char *)0x0)) {
            pcVar3 = strstr(pcVar13,DAT_00064aa8);
            if ((pcVar3 == (char *)0x0) &&
               (pcVar3 = strstr(pcVar13,DAT_00064aac), pcVar3 == (char *)0x0)) {
              pcVar3 = strstr(pcVar13,DAT_00064ab0);
              if ((pcVar3 == (char *)0x0) &&
                 (pcVar3 = strstr(pcVar13,DAT_00064ab4), pcVar3 == (char *)0x0)) {
                pcVar3 = strstr(pcVar13,DAT_00064ab8);
                if ((pcVar3 == (char *)0x0) &&
                   (pcVar3 = strstr(pcVar13,DAT_00064abc), pcVar3 == (char *)0x0)) {
                  pcVar3 = strstr(pcVar13,DAT_00064ac0);
                  if ((pcVar3 == (char *)0x0) &&
                     (pcVar3 = strstr(pcVar13,DAT_00064ac4), pcVar3 == (char *)0x0)) {
                    pcVar3 = strstr(pcVar13,DAT_00064ac8);
                    if (((pcVar3 == (char *)0x0) &&
                        (pcVar3 = strstr(pcVar13,DAT_00064acc), pcVar3 == (char *)0x0)) &&
                       (pcVar3 = strstr(pcVar13,DAT_00064ad0), pcVar3 == (char *)0x0)) {
                      pcVar3 = strstr(pcVar13,DAT_00064ad4);
                      if ((pcVar3 == (char *)0x0) &&
                         (pcVar3 = strstr(pcVar13,DAT_00064ad8), pcVar3 == (char *)0x0)) {
                        pcVar3 = strstr(pcVar13,DAT_00064adc);
                        if ((pcVar3 == (char *)0x0) &&
                           (pcVar3 = strstr(pcVar13,DAT_00064ae0), pcVar3 == (char *)0x0)) {
                          pcVar3 = strstr(pcVar13,DAT_00064ae4);
                          if ((pcVar3 == (char *)0x0) &&
                             (pcVar3 = strstr(pcVar13,DAT_00064ae8), pcVar3 == (char *)0x0)) {
                            pcVar3 = strstr(pcVar13,DAT_00064aec);
                            if ((pcVar3 == (char *)0x0) &&
                               (pcVar3 = strstr(pcVar13,DAT_00064af0), pcVar3 == (char *)0x0)) {
                              pcVar3 = strstr(pcVar13,DAT_00064af4);
                              if ((pcVar3 == (char *)0x0) &&
                                 (pcVar3 = strstr(pcVar13,DAT_00064af8), pcVar3 == (char *)0x0)) {
                                pcVar3 = strstr(pcVar13,DAT_00064afc);
                                if ((pcVar3 == (char *)0x0) &&
                                   (pcVar3 = strstr(pcVar13,DAT_00064b00), pcVar3 == (char *)0x0)) {
                                  pcVar3 = strstr(pcVar13,DAT_00064b04);
                                  if (pcVar3 == (char *)0x0) {
                                    pcVar3 = strstr(pcVar13,DAT_00064b08);
                                    pcVar13 = (char *)0x0;
                                    if (pcVar3 == (char *)0x0) goto LAB_00064720;
                                  }
                                  pcVar13 = (char *)FUN_000643f4(pbVar12,iVar11,iVar6,uVar4);
                                }
                                else {
                                  pcVar13 = (char *)FUN_000642e0(pbVar12,iVar11,iVar6,uVar4);
                                }
                              }
                              else {
                                pcVar13 = (char *)FUN_0006408c(pbVar12,iVar11,iVar6,uVar4);
                              }
                            }
                            else {
                              pcVar13 = (char *)FUN_00063f58(pbVar12,iVar11,iVar6,uVar4);
                            }
                          }
                          else {
                            pcVar13 = (char *)FUN_00063bc4(pbVar12,iVar11,iVar6,uVar4);
                          }
                        }
                        else {
                          pcVar13 = (char *)FUN_000639f0(pbVar12,iVar11,iVar6,uVar4);
                        }
                      }
                      else {
                        pcVar13 = (char *)FUN_000638dc(pbVar12,iVar11,iVar6,uVar4);
                      }
                    }
                    else {
                      pcVar13 = (char *)FUN_00063548(pbVar12,iVar11,iVar6,uVar4);
                    }
                  }
                  else {
                    pcVar13 = (char *)FUN_0006223c(pbVar12,iVar11,iVar6,uVar4);
                  }
                }
                else {
                  pcVar13 = (char *)FUN_00062c70(pbVar12,iVar11,iVar6,uVar4);
                }
              }
              else {
                pcVar13 = (char *)FUN_000620c8(pbVar12,iVar11,iVar6,uVar4);
              }
            }
            else {
              pcVar13 = (char *)FUN_00061538(pbVar12,iVar11,iVar6,uVar4);
            }
          }
          else {
            pcVar13 = (char *)FUN_00063244(pbVar12,iVar11,iVar6,uVar4);
          }
        }
        else {
          pcVar13 = *(char **)(*(int *)(iVar6 + 0x1c) + 4);
          if ((pcVar13 == (char *)0x0) ||
             (pcVar13 = strstr(pcVar13,DAT_00064a98), pcVar13 == (char *)0x0)) {
            pcVar13 = (char *)FUN_00061dc0(pbVar12,iVar11,iVar6,uVar4);
          }
          else {
            pcVar13 = (char *)FUN_00061d0c(pbVar12);
          }
        }
      }
      else {
        local_34 = *(char **)(*(int *)(iVar6 + 0x1c) + 4);
        local_30 = pcVar13;
        if (pcVar13 == (char *)0x0) {
          local_30 = DAT_000647bc;
        }
        local_38 = 0x33a1;
        DebugPrint(8,7,DAT_000647c0,DAT_0006477c);
LAB_00064712:
        pcVar13 = (char *)FUN_00061fb4(pbVar12,iVar11,iVar6,uVar4);
      }
LAB_00064720:
      local_34 = *(char **)(*(int *)(iVar6 + 0x1c) + 4);
      local_38 = 0x341b;
      local_30 = pcVar13;
      DebugPrint(1,7,DAT_000647c4,DAT_0006477c);
      local_34 = *(char **)(*(int *)(iVar6 + 0x1c) + 4);
      local_38 = 0x341d;
      local_30 = pcVar13;
      DebugPrint(8,7,DAT_000647c8,DAT_0006477c);
      if (pcVar13 == (char *)0x0) {
        FUN_00053530(pbVar12,iVar11);
      }
      goto LAB_00064596;
    }
    local_38 = 0x337a;
    DebugPrint(8,7,DAT_0006479c,DAT_0006477c);
    local_38 = 0x337b;
    uVar4 = DAT_0006479c;
  }
  DebugPrint(8,7,uVar4,DAT_0006477c);
LAB_00064596:
  sVar2 = FUN_0001d41c(iVar5);
  return sVar2;
}


