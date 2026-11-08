/* libtools.so (f8b5d696eeedf96627281df63171e56ec4aa767c44ff4dca16a2615622ef1bd8), Ghidra 12.2 headless; requested 0008b80c */
/* function FUN_0008b80c @ 0008b80c */

undefined4 FUN_0008b80c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *__s2;
  char *__s2_00;
  char *__s2_01;
  char *__s2_02;
  char *pcVar8;
  undefined1 auStack_128 [260];
  
  if (param_3 == 0) {
    memset(param_2,0,0x2fc);
    iVar3 = DAT_0008bdec;
    param_2[3] = 0x22a;
    param_2[5] = 0x1f9b;
    param_2[9] = 0x50;
    param_2[10] = 0x1bb;
    *param_2 = 1;
    param_2[1] = 1;
    param_2[2] = 1;
    param_2[4] = 1;
    param_2[6] = 1;
    param_2[7] = 1;
    param_2[0x4c] = 1;
    param_2[0x4e] = 1;
    param_2[0xb] = 0x303f;
    *(undefined2 *)(param_2 + 0x4d) = 8000;
    *(undefined2 *)(param_2 + 0x4f) = 0x9391;
    iVar5 = FileExist(iVar3 + 0x8baa2);
    iVar3 = DAT_0008bdf0;
    if (iVar5 != 0) {
      *(undefined1 *)((int)param_2 + 0x141) = 1;
      iVar3 = FileExist(iVar3 + 0x8bafe);
      if (iVar3 != 0) {
        *(undefined1 *)((int)param_2 + 0x142) = 1;
      }
    }
    param_2[0x51] = 0;
    *(undefined2 *)(param_2 + 0x62) = 0x78f;
    SetAllTimeSpan(param_2 + 0xb4);
  }
  param_1 = (undefined4 *)*param_1;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  __s2_01 = (char *)(DAT_0008bd98 + 0x8b834);
  __s2 = (char *)(DAT_0008bd9c + 0x8b83a);
  __s2_00 = (char *)(DAT_0008bda0 + 0x8b83c);
  __s2_02 = (char *)(DAT_0008bda4 + 0x8b83e);
LAB_0008b846:
  iVar3 = strcmp((char *)*param_1,__s2_01);
  if (iVar3 == 0) {
    for (puVar7 = (undefined4 *)param_1[0xb]; puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[10]) {
      pcVar8 = (char *)*puVar7;
      iVar3 = strcmp(pcVar8,__s2);
      if (iVar3 == 0) {
        uVar6 = Str2Num((char *)puVar7[1]);
        param_2[1] = uVar6;
      }
      else {
        iVar3 = strcmp(pcVar8,__s2_00);
        if (iVar3 == 0) {
          uVar6 = Str2Num((char *)puVar7[1]);
          param_2[2] = uVar6;
        }
        else {
          iVar3 = strcmp(pcVar8,__s2_02);
          if (iVar3 == 0) {
            uVar6 = Str2Num((char *)puVar7[1]);
            param_2[3] = uVar6;
          }
          else {
            iVar3 = strcmp(pcVar8,(char *)(DAT_0008bda8 + 0x8b892));
            if (iVar3 == 0) {
              uVar6 = Str2Num((char *)puVar7[1]);
              *param_2 = uVar6;
            }
            else {
              iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdac + 0x8b8a4));
              if (iVar3 == 0) {
                uVar6 = Str2Num((char *)puVar7[1]);
                param_2[8] = uVar6;
              }
              else {
                iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdb0 + 0x8b8b6));
                if (iVar3 == 0) {
                  uVar6 = Str2Num((char *)puVar7[1]);
                  param_2[9] = uVar6;
                }
                else {
                  iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdb4 + 0x8b8c8));
                  if (iVar3 == 0) {
                    uVar6 = Str2Num((char *)puVar7[1]);
                    param_2[6] = uVar6;
                  }
                  else {
                    iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdb8 + 0x8b8da));
                    if (iVar3 == 0) {
                      uVar6 = Str2Num((char *)puVar7[1]);
                      param_2[7] = uVar6;
                    }
                    else {
                      iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdbc + 0x8b8ec));
                      if (iVar3 == 0) {
                        uVar6 = Str2Num((char *)puVar7[1]);
                        param_2[10] = uVar6;
                      }
                      else {
                        iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdc0 + 0x8b8fe));
                        if (iVar3 == 0) {
                          uVar6 = Str2Num((char *)puVar7[1]);
                          param_2[0xb] = uVar6;
                        }
                        else {
                          iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdc4 + 0x8b910));
                          if (iVar3 == 0) {
                            StrCpy(param_2 + 0xc,0x80,puVar7[1]);
                          }
                          else {
                            iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdc8 + 0x8b922));
                            if (iVar3 == 0) {
                              StrCpy(param_2 + 0x2c,0x80,puVar7[1]);
                            }
                            else {
                              iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdcc + 0x8b934));
                              if (iVar3 == 0) {
                                uVar6 = Str2Num((char *)puVar7[1]);
                                param_2[5] = uVar6;
                              }
                              else {
                                iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdd0 + 0x8b946));
                                if (iVar3 == 0) {
                                  uVar6 = Str2Num((char *)puVar7[1]);
                                  param_2[4] = uVar6;
                                }
                                else {
                                  iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdd4 + 0x8b958));
                                  if (iVar3 == 0) {
                                    if ((char *)puVar7[1] == (char *)0x0) {
                                      uVar2 = 0;
                                    }
                                    else {
                                      uVar4 = strtoul((char *)puVar7[1],(char **)0x0,10);
                                      uVar2 = (undefined2)uVar4;
                                    }
                                    *(undefined2 *)(param_2 + 0x4d) = uVar2;
                                  }
                                  else {
                                    iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdd8 + 0x8b96a));
                                    if (iVar3 == 0) {
                                      uVar2 = Str2Num((char *)puVar7[1]);
                                      *(undefined2 *)((int)param_2 + 0x136) = uVar2;
                                    }
                                    else {
                                      iVar3 = strcmp(pcVar8,(char *)(DAT_0008bddc + 0x8b97c));
                                      if (iVar3 == 0) {
                                        uVar6 = Str2Num((char *)puVar7[1]);
                                        param_2[0x4c] = uVar6;
                                      }
                                      else {
                                        iVar3 = strcmp(pcVar8,(char *)(DAT_0008bde0 + 0x8b98e));
                                        if (iVar3 == 0) {
                                          uVar2 = 0;
                                          if ((char *)puVar7[1] != (char *)0x0) {
                                            uVar4 = strtoul((char *)puVar7[1],(char **)0x0,10);
                                            uVar2 = (undefined2)uVar4;
                                          }
                                          *(undefined2 *)(param_2 + 0x4f) = uVar2;
                                        }
                                        else {
                                          iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdf4 + 0x8bb5a));
                                          if (iVar3 == 0) {
                                            uVar2 = Str2Num((char *)puVar7[1]);
                                            *(undefined2 *)((int)param_2 + 0x13e) = uVar2;
                                          }
                                          else {
                                            iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdf8 + 0x8bb68));
                                            if (iVar3 == 0) {
                                              uVar6 = Str2Num((char *)puVar7[1]);
                                              param_2[0x4e] = uVar6;
                                            }
                                            else {
                                              iVar3 = strcmp(pcVar8,(char *)(DAT_0008bdfc + 0x8bb76)
                                                            );
                                              if (iVar3 == 0) {
                                                uVar1 = Str2Num((char *)puVar7[1]);
                                                *(undefined1 *)(param_2 + 0x50) = uVar1;
                                              }
                                              else {
                                                iVar3 = strcmp(pcVar8,(char *)(DAT_0008be00 +
                                                                              0x8bb84));
                                                if (iVar3 == 0) {
                                                  uVar1 = Str2Num((char *)puVar7[1]);
                                                  *(undefined1 *)((int)param_2 + 0x141) = uVar1;
                                                }
                                                else {
                                                  iVar3 = strcmp(pcVar8,(char *)(DAT_0008be04 +
                                                                                0x8bb94));
                                                  if (iVar3 == 0) {
                                                    uVar1 = Str2Num((char *)puVar7[1]);
                                                    *(undefined1 *)((int)param_2 + 0x142) = uVar1;
                                                  }
                                                  else {
                                                    iVar3 = strcmp(pcVar8,(char *)(DAT_0008be08 +
                                                                                  0x8bba4));
                                                    if (iVar3 == 0) {
                                                      uVar1 = Str2Num((char *)puVar7[1]);
                                                      *(undefined1 *)((int)param_2 + 0x143) = uVar1;
                                                    }
                                                    else {
                                                      iVar3 = strcmp(pcVar8,(char *)(DAT_0008be0c +
                                                                                    0x8bbb4));
                                                      if (iVar3 == 0) {
                                                        uVar6 = Str2Num((char *)puVar7[1]);
                                                        param_2[0x51] = uVar6;
                                                      }
                                                      else {
                                                        iVar3 = strcmp(pcVar8,(char *)(DAT_0008be10
                                                                                      + 0x8bbc4));
                                                        if (iVar3 == 0) {
                                                          uVar6 = Str2Num((char *)puVar7[1]);
                                                          param_2[0xb3] = uVar6;
                                                        }
                                                        else {
                                                          iVar3 = strcmp(pcVar8,(char *)(
                                                  DAT_0008be14 + 0x8bbd4));
                                                  if (iVar3 == 0) {
                                                    uVar2 = 0;
                                                    if ((char *)puVar7[1] != (char *)0x0) {
                                                      uVar4 = strtoul((char *)puVar7[1],(char **)0x0
                                                                      ,10);
                                                      uVar2 = (undefined2)uVar4;
                                                    }
                                                    *(undefined2 *)(param_2 + 0x62) = uVar2;
                                                  }
                                                  else {
                                                    iVar3 = strcmp(pcVar8,(char *)(DAT_0008be18 +
                                                                                  0x8bc24));
                                                    if (iVar3 == 0) {
                                                      uVar2 = Str2Num((char *)puVar7[1]);
                                                      *(undefined2 *)((int)param_2 + 0x18a) = uVar2;
                                                    }
                                                    else {
                                                      iVar3 = strcmp(pcVar8,(char *)(DAT_0008be1c +
                                                                                    0x8bc34));
                                                      if (iVar3 == 0) {
                                                        StrCpy(param_2 + 0x52,0x40,puVar7[1]);
                                                      }
                                                      else {
                                                        iVar3 = strcmp(pcVar8,(char *)(DAT_0008be20
                                                                                      + 0x8bc44));
                                                        if (iVar3 == 0) {
                                                          restore_with_escape(auStack_128,puVar7[1],
                                                                              0x40);
                                                          StrCpy(param_2 + 99,0x40,auStack_128);
                                                        }
                                                        else {
                                                          iVar3 = strcmp(pcVar8,(char *)(
                                                  DAT_0008be24 + 0x8bc52));
                                                  if (iVar3 == 0) {
                                                    restore_with_escape(auStack_128,puVar7[1],0x100)
                                                    ;
                                                    StrCpy(param_2 + 0x73,0x100,auStack_128);
                                                  }
                                                  else {
                                                    iVar3 = strcmp(pcVar8,(char *)(DAT_0008be28 +
                                                                                  0x8bc60));
                                                    if (iVar3 == 0) {
                                                      uVar2 = Str2Num((char *)puVar7[1]);
                                                      *(undefined2 *)(param_2 + 0xbb) = uVar2;
                                                    }
                                                    else {
                                                      iVar3 = strcmp(pcVar8,(char *)(DAT_0008be2c +
                                                                                    0x8bc6e));
                                                      if (iVar3 == 0) {
                                                        uVar2 = 0;
                                                        if ((char *)puVar7[1] != (char *)0x0) {
                                                          uVar4 = strtoul((char *)puVar7[1],
                                                                          (char **)0x0,10);
                                                          uVar2 = (undefined2)uVar4;
                                                        }
                                                        *(undefined2 *)((int)param_2 + 0x2ee) =
                                                             uVar2;
                                                      }
                                                      else {
                                                        iVar3 = strcmp(pcVar8,(char *)(DAT_0008be30
                                                                                      + 0x8bc8e));
                                                        if (iVar3 == 0) {
                                                          uVar4 = 0;
                                                          if ((char *)puVar7[1] != (char *)0x0) {
                                                            uVar4 = strtoul((char *)puVar7[1],
                                                                            (char **)0x0,10);
                                                          }
                                                          param_2[0xbc] = uVar4;
                                                        }
                                                        else {
                                                          iVar3 = strcmp(pcVar8,(char *)(
                                                  DAT_0008be34 + 0x8bcac));
                                                  if (iVar3 == 0) {
                                                    uVar2 = Str2Num((char *)puVar7[1]);
                                                    *(undefined2 *)(param_2 + 0xbd) = uVar2;
                                                  }
                                                  else {
                                                    iVar3 = strcmp(pcVar8,(char *)(DAT_0008be38 +
                                                                                  0x8bcb8));
                                                    if (iVar3 == 0) {
                                                      uVar2 = 0;
                                                      if ((char *)puVar7[1] != (char *)0x0) {
                                                        uVar4 = strtoul((char *)puVar7[1],
                                                                        (char **)0x0,10);
                                                        uVar2 = (undefined2)uVar4;
                                                      }
                                                      *(undefined2 *)((int)param_2 + 0x2f6) = uVar2;
                                                    }
                                                    else {
                                                      iVar3 = strcmp(pcVar8,(char *)(DAT_0008be3c +
                                                                                    0x8bcd8));
                                                      if (iVar3 == 0) {
                                                        uVar4 = 0;
                                                        if ((char *)puVar7[1] != (char *)0x0) {
                                                          uVar4 = strtoul((char *)puVar7[1],
                                                                          (char **)0x0,10);
                                                        }
                                                        param_2[0xbe] = uVar4;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined4 *)param_1[8];
    if (puVar7 != (undefined4 *)0x0) {
      pcVar8 = (char *)(DAT_0008bde4 + 0x8b9ca);
      do {
        iVar3 = strcmp((char *)*puVar7,pcVar8);
        if (iVar3 == 0) {
          puVar7 = (undefined4 *)puVar7[8];
          if (puVar7 != (undefined4 *)0x0) {
            pcVar8 = (char *)(DAT_0008bde8 + 0x8b9ee);
            goto LAB_0008b9f6;
          }
          break;
        }
        puVar7 = (undefined4 *)puVar7[10];
      } while (puVar7 != (undefined4 *)0x0);
    }
  }
  goto LAB_0008b83e;
  while (puVar7 = (undefined4 *)puVar7[10], puVar7 != (undefined4 *)0x0) {
LAB_0008b9f6:
    iVar3 = strcmp((char *)*puVar7,pcVar8);
    if (iVar3 == 0) {
      FUN_0008af34(puVar7[0xb],param_2 + 0xb4);
      param_1 = (undefined4 *)param_1[10];
      goto joined_r0x0008ba10;
    }
  }
LAB_0008b83e:
  param_1 = (undefined4 *)param_1[10];
joined_r0x0008ba10:
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  goto LAB_0008b846;
}


