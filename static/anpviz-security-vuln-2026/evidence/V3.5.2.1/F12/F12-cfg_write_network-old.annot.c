/* libtools.so (665b1f91c89de0969677ec055c92414318f084e075e69acecdebcfc5d6424dfe), Ghidra 12.2 headless; requested 00087714 */
/* function FUN_00087714 @ 00087714 */

undefined4 FUN_00087714(undefined4 *param_1,int *param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  char *__s2;
  char *__s2_00;
  char *__s2_01;
  char *__s2_02;
  char *pcVar5;
  undefined1 *local_58 [2];
  undefined1 auStack_50 [16];
  undefined1 *local_40 [2];
  undefined1 auStack_38 [20];
  
  if (param_3 == 0) {
    memset(param_2,0,0x2fc);
    *param_2 = 1;
    param_2[1] = 1;
    param_2[2] = 1;
    param_2[4] = 1;
    param_2[6] = 1;
    param_2[7] = 1;
    param_2[0x4c] = 1;
    param_2[0x4e] = 1;
    param_2[3] = 0x22a;
    param_2[5] = 0x1f9b;
    param_2[9] = 0x50;
    param_2[10] = 0x1bb;
    param_2[0xb] = 0x303f;
    *(undefined2 *)(param_2 + 0x4d) = 8000;
    *(undefined2 *)(param_2 + 0x4f) = 0x9391;
    *(undefined2 *)(param_2 + 0x62) = 0x78f;
    SetAllTimeSpan(param_2 + 0xb4);
  }
  param_1 = (undefined4 *)*param_1;
  if (param_1 != (undefined4 *)0x0) {
    __s2_01 = (char *)(DAT_00087c54 + 0x8773a /*"StreamAccess"*/);
    __s2 = (char *)(DAT_00087c58 + 0x87740 /*"Auth"*/);
    __s2_00 = (char *)(DAT_00087c5c + 0x87742 /*"RTPOverRTSP"*/);
    __s2_02 = (char *)(DAT_00087c60 + 0x87744 /*"VideoPort"*/);
    do {
      iVar2 = strcmp((char *)*param_1,__s2_01);
      if (iVar2 == 0) {
        puVar4 = (undefined4 *)param_1[0xb];
joined_r0x00087758:
        if (puVar4 != (undefined4 *)0x0) {
          do {
            pcVar5 = (char *)*puVar4;
            iVar2 = strcmp(pcVar5,__s2);
            if (iVar2 == 0) {
              iVar2 = 0;
              if ((char *)puVar4[1] != (char *)0x0) {
                iVar2 = atoi((char *)puVar4[1]);
              }
              param_2[1] = iVar2;
            }
            else {
              iVar2 = strcmp(pcVar5,__s2_00);
              if (iVar2 == 0) goto code_r0x00087788;
              iVar2 = strcmp(pcVar5,__s2_02);
              if (iVar2 == 0) {
                iVar2 = 0;
                if ((char *)puVar4[1] != (char *)0x0) {
                  iVar2 = atoi((char *)puVar4[1]);
                }
                param_2[3] = iVar2;
              }
              else {
                iVar2 = strcmp(pcVar5,(char *)(DAT_00087c6c + 0x87814 /*"enable_rtsp"*/));
                if (iVar2 == 0) {
                  iVar2 = 0;
                  if ((char *)puVar4[1] != (char *)0x0) {
                    iVar2 = atoi((char *)puVar4[1]);
                  }
                  *param_2 = iVar2;
                }
                else {
                  iVar2 = strcmp(pcVar5,(char *)(DAT_00087c70 + 0x87830 /*"OnvifAuth"*/));
                  if (iVar2 == 0) {
                    iVar2 = 0;
                    if ((char *)puVar4[1] != (char *)0x0) {
                      iVar2 = atoi((char *)puVar4[1]);
                    }
                    param_2[8] = iVar2;
                  }
                  else {
                    iVar2 = strcmp(pcVar5,(char *)(DAT_00087c74 + 0x8784c /*"WEBPort"*/));
                    if (iVar2 == 0) {
                      iVar2 = 0;
                      if ((char *)puVar4[1] != (char *)0x0) {
                        iVar2 = atoi((char *)puVar4[1]);
                      }
                      param_2[9] = iVar2;
                    }
                    else {
                      iVar2 = strcmp(pcVar5,(char *)(DAT_00087c78 + 0x87868 /*"enable_onvif"*/));
                      if (iVar2 == 0) {
                        iVar2 = 0;
                        if ((char *)puVar4[1] != (char *)0x0) {
                          iVar2 = atoi((char *)puVar4[1]);
                        }
                        param_2[6] = iVar2;
                      }
                      else {
                        iVar2 = strcmp(pcVar5,(char *)(DAT_00087c7c + 0x878e2 /*"enable_web"*/));
                        if (iVar2 == 0) {
                          iVar2 = 0;
                          if ((char *)puVar4[1] != (char *)0x0) {
                            iVar2 = atoi((char *)puVar4[1]);
                          }
                          param_2[7] = iVar2;
                        }
                        else {
                          iVar2 = strcmp(pcVar5,(char *)(DAT_00087c80 + 0x878fc /*"httpsPort"*/));
                          if (iVar2 == 0) {
                            iVar2 = 0;
                            if ((char *)puVar4[1] != (char *)0x0) {
                              iVar2 = atoi((char *)puVar4[1]);
                            }
                            param_2[10] = iVar2;
                          }
                          else {
                            iVar2 = strcmp(pcVar5,(char *)(DAT_00087c84 + 0x87908 /*"h5Port"*/));
                            if (iVar2 == 0) {
                              iVar2 = 0;
                              if ((char *)puVar4[1] != (char *)0x0) {
                                iVar2 = atoi((char *)puVar4[1]);
                              }
                              param_2[0xb] = iVar2;
                            }
                            else {
                              iVar2 = strcmp(pcVar5,(char *)(DAT_00087c88 + 0x87930 /*"httpsCertificate"*/));
                              if (iVar2 == 0) {
                                StrCpy(param_2 + 0xc,0x80,puVar4[1]);
                              }
                              else {
                                iVar2 = strcmp(pcVar5,(char *)(DAT_00087c8c + 0x8793c /*"httpsKey"*/));
                                if (iVar2 == 0) {
                                  StrCpy(param_2 + 0x2c,0x80,puVar4[1]);
                                }
                                else {
                                  iVar2 = strcmp(pcVar5,(char *)(DAT_00087c90 + 0x87948 /*"PTZPort"*/));
                                  if (iVar2 == 0) {
                                    iVar2 = 0;
                                    if ((char *)puVar4[1] != (char *)0x0) {
                                      iVar2 = atoi((char *)puVar4[1]);
                                    }
                                    param_2[5] = iVar2;
                                  }
                                  else {
                                    iVar2 = strcmp(pcVar5,(char *)(DAT_00087c94 + 0x87970 /*"enable_comm"*/));
                                    if (iVar2 == 0) {
                                      iVar2 = 0;
                                      if ((char *)puVar4[1] != (char *)0x0) {
                                        iVar2 = atoi((char *)puVar4[1]);
                                      }
                                      param_2[4] = iVar2;
                                    }
                                    else {
                                      iVar2 = strcmp(pcVar5,(char *)(DAT_00087c98 + 0x87998 /*"hik_port"*/));
                                      if (iVar2 == 0) {
                                        uVar1 = 0;
                                        if ((char *)puVar4[1] != (char *)0x0) {
                                          uVar3 = strtoul((char *)puVar4[1],(char **)0x0,10);
                                          uVar1 = (undefined2)uVar3;
                                        }
                                        *(undefined2 *)(param_2 + 0x4d) = uVar1;
                                      }
                                      else {
                                        iVar2 = strcmp(pcVar5,(char *)(DAT_00087c9c + 0x879b8 /*"hik_auth"*/));
                                        if (iVar2 == 0) {
                                          uVar1 = 0;
                                          if ((char *)puVar4[1] != (char *)0x0) {
                                            iVar2 = atoi((char *)puVar4[1]);
                                            uVar1 = (undefined2)iVar2;
                                          }
                                          *(undefined2 *)((int)param_2 + 0x136) = uVar1;
                                        }
                                        else {
                                          iVar2 = strcmp(pcVar5,(char *)(DAT_00087ca0 + 0x879d4 /*"enable_hik"*/));
                                          if (iVar2 == 0) {
                                            iVar2 = 0;
                                            if ((char *)puVar4[1] != (char *)0x0) {
                                              iVar2 = atoi((char *)puVar4[1]);
                                            }
                                            param_2[0x4c] = iVar2;
                                          }
                                          else {
                                            iVar2 = strcmp(pcVar5,(char *)(DAT_00087ca4 + 0x879f0 /*"dh_port"*/));
                                            if (iVar2 == 0) {
                                              uVar1 = 0;
                                              if ((char *)puVar4[1] != (char *)0x0) {
                                                uVar3 = strtoul((char *)puVar4[1],(char **)0x0,10);
                                                uVar1 = (undefined2)uVar3;
                                              }
                                              *(undefined2 *)(param_2 + 0x4f) = uVar1;
                                            }
                                            else {
                                              iVar2 = strcmp(pcVar5,(char *)(DAT_00087ca8 + 0x87a10 /*"dh_auth"*/)
                                                            );
                                              if (iVar2 == 0) {
                                                uVar1 = 0;
                                                if ((char *)puVar4[1] != (char *)0x0) {
                                                  iVar2 = atoi((char *)puVar4[1]);
                                                  uVar1 = (undefined2)iVar2;
                                                }
                                                *(undefined2 *)((int)param_2 + 0x13e) = uVar1;
                                              }
                                              else {
                                                iVar2 = strcmp(pcVar5,(char *)(DAT_00087cac +
                                                                              0x87a2c));
                                                if (iVar2 == 0) {
                                                  iVar2 = 0;
                                                  if ((char *)puVar4[1] != (char *)0x0) {
                                                    iVar2 = atoi((char *)puVar4[1]);
                                                  }
                                                  param_2[0x4e] = iVar2;
                                                }
                                                else {
                                                  iVar2 = strcmp(pcVar5,(char *)(DAT_00087cb0 +
                                                                                0x87a48));
                                                  if (iVar2 == 0) {
                                                    iVar2 = 0;
                                                    if ((char *)puVar4[1] != (char *)0x0) {
                                                      iVar2 = atoi((char *)puVar4[1]);
                                                    }
                                                    param_2[0x50] = iVar2;
                                                  }
                                                  else {
                                                    iVar2 = strcmp(pcVar5,(char *)(DAT_00087cb4 +
                                                                                  0x87a64));
                                                    if (iVar2 == 0) {
                                                      iVar2 = 0;
                                                      if ((char *)puVar4[1] != (char *)0x0) {
                                                        iVar2 = atoi((char *)puVar4[1]);
                                                      }
                                                      param_2[0x51] = iVar2;
                                                    }
                                                    else {
                                                      iVar2 = strcmp(pcVar5,(char *)(DAT_00087cb8 +
                                                                                    0x87a80));
                                                      if (iVar2 == 0) {
                                                        iVar2 = 0;
                                                        if ((char *)puVar4[1] != (char *)0x0) {
                                                          iVar2 = atoi((char *)puVar4[1]);
                                                        }
                                                        param_2[0xb3] = iVar2;
                                                      }
                                                      else {
                                                        iVar2 = strcmp(pcVar5,(char *)(DAT_00087cbc
                                                                                      + 0x87a9c));
                                                        if (iVar2 == 0) {
                                                          uVar1 = 0;
                                                          if ((char *)puVar4[1] != (char *)0x0) {
                                                            uVar3 = strtoul((char *)puVar4[1],
                                                                            (char **)0x0,10);
                                                            uVar1 = (undefined2)uVar3;
                                                          }
                                                          *(undefined2 *)(param_2 + 0x62) = uVar1;
                                                        }
                                                        else {
                                                          iVar2 = strcmp(pcVar5,(char *)(
                                                  DAT_00087cc0 + 0x87abc /*"streamno"*/));
                                                  if (iVar2 == 0) {
                                                    uVar1 = 0;
                                                    if ((char *)puVar4[1] != (char *)0x0) {
                                                      iVar2 = atoi((char *)puVar4[1]);
                                                      uVar1 = (undefined2)iVar2;
                                                    }
                                                    *(undefined2 *)((int)param_2 + 0x18a) = uVar1;
                                                  }
                                                  else {
                                                    iVar2 = strcmp(pcVar5,(char *)(DAT_00087cc4 +
                                                                                  0x87ad8));
                                                    if (iVar2 == 0) {
                                                      StrCpy(param_2 + 0x52,0x40,puVar4[1]);
                                                    }
                                                    else {
                                                      iVar2 = strcmp(pcVar5,(char *)(DAT_00087cc8 +
                                                                                    0x87ae6));
                                                      if (iVar2 == 0) {
                                                        if (puVar4[1] != 0) {
                                                          FUN_00077f5c(local_58);
                                                          FUN_00087464(local_40,local_58);
                                                          StrCpy(param_2 + 99,0x40,local_40[0]);
LAB_00087b14:
                                                          if (local_40[0] != auStack_38) {
                                                            operator_delete(local_40[0]);
                                                          }
                                                          if (local_58[0] != auStack_50) {
                                                            operator_delete(local_58[0]);
                                                          }
                                                        }
                                                      }
                                                      else {
                                                        iVar2 = strcmp(pcVar5,(char *)(DAT_00087ccc
                                                                                      + 0x87b38));
                                                        if (iVar2 == 0) {
                                                          if (puVar4[1] != 0) {
                                                            FUN_00077f5c(local_58);
                                                            FUN_00087464(local_40,local_58);
                                                            StrCpy(param_2 + 0x73,0x100,local_40[0])
                                                            ;
                                                            goto LAB_00087b14;
                                                          }
                                                        }
                                                        else {
                                                          iVar2 = strcmp(pcVar5,(char *)(
                                                  DAT_00087cd0 + 0x87b80 /*"Multicast0_enable"*/));
                                                  if (iVar2 == 0) {
                                                    uVar1 = 0;
                                                    if ((char *)puVar4[1] != (char *)0x0) {
                                                      iVar2 = atoi((char *)puVar4[1]);
                                                      uVar1 = (undefined2)iVar2;
                                                    }
                                                    *(undefined2 *)(param_2 + 0xbb) = uVar1;
                                                  }
                                                  else {
                                                    iVar2 = strcmp(pcVar5,(char *)(DAT_00087cd4 +
                                                                                  0x87b9c));
                                                    if (iVar2 == 0) {
                                                      uVar1 = 0;
                                                      if ((char *)puVar4[1] != (char *)0x0) {
                                                        uVar3 = strtoul((char *)puVar4[1],
                                                                        (char **)0x0,10);
                                                        uVar1 = (undefined2)uVar3;
                                                      }
                                                      *(undefined2 *)((int)param_2 + 0x2ee) = uVar1;
                                                    }
                                                    else {
                                                      iVar2 = strcmp(pcVar5,(char *)(DAT_00087cd8 +
                                                                                    0x87bbc));
                                                      if (iVar2 == 0) {
                                                        uVar3 = 0;
                                                        if ((char *)puVar4[1] != (char *)0x0) {
                                                          uVar3 = strtoul((char *)puVar4[1],
                                                                          (char **)0x0,10);
                                                        }
                                                        param_2[0xbc] = uVar3;
                                                      }
                                                      else {
                                                        iVar2 = strcmp(pcVar5,(char *)(DAT_00087cdc
                                                                                      + 0x87bda));
                                                        if (iVar2 == 0) {
                                                          uVar1 = 0;
                                                          if ((char *)puVar4[1] != (char *)0x0) {
                                                            iVar2 = atoi((char *)puVar4[1]);
                                                            uVar1 = (undefined2)iVar2;
                                                          }
                                                          *(undefined2 *)(param_2 + 0xbd) = uVar1;
                                                        }
                                                        else {
                                                          iVar2 = strcmp(pcVar5,(char *)(
                                                  DAT_00087ce0 + 0x87bf6 /*"Multicast1_port"*/));
                                                  if (iVar2 == 0) {
                                                    uVar1 = 0;
                                                    if ((char *)puVar4[1] != (char *)0x0) {
                                                      uVar3 = strtoul((char *)puVar4[1],(char **)0x0
                                                                      ,10);
                                                      uVar1 = (undefined2)uVar3;
                                                    }
                                                    *(undefined2 *)((int)param_2 + 0x2f6) = uVar1;
                                                  }
                                                  else {
                                                    iVar2 = strcmp(pcVar5,(char *)(DAT_00087ce4 +
                                                                                  0x87c16));
                                                    if (iVar2 == 0) {
                                                      uVar3 = 0;
                                                      if ((char *)puVar4[1] != (char *)0x0) {
                                                        uVar3 = strtoul((char *)puVar4[1],
                                                                        (char **)0x0,10);
                                                      }
                                                      param_2[0xbe] = uVar3;
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
            puVar4 = (undefined4 *)puVar4[10];
            if (puVar4 == (undefined4 *)0x0) break;
          } while( true );
        }
        puVar4 = (undefined4 *)param_1[8];
        if (puVar4 == (undefined4 *)0x0) goto LAB_00087744;
        pcVar5 = (char *)(DAT_00087c64 + 0x877a8 /*"RtmpCfg"*/);
        while (iVar2 = strcmp((char *)*puVar4,pcVar5), iVar2 != 0) {
          puVar4 = (undefined4 *)puVar4[10];
          if (puVar4 == (undefined4 *)0x0) goto LAB_00087744;
        }
        puVar4 = (undefined4 *)puVar4[8];
        if (puVar4 == (undefined4 *)0x0) goto LAB_00087744;
        pcVar5 = (char *)(DAT_00087c68 + 0x877c8 /*"TimeSpanCfg"*/);
        while (iVar2 = strcmp((char *)*puVar4,pcVar5), iVar2 != 0) {
          puVar4 = (undefined4 *)puVar4[10];
          if (puVar4 == (undefined4 *)0x0) goto LAB_00087744;
        }
        FUN_00083294(puVar4[0xb],param_2 + 0xb4);
        param_1 = (undefined4 *)param_1[10];
        goto joined_r0x00087748;
      }
LAB_00087744:
      param_1 = (undefined4 *)param_1[10];
joined_r0x00087748:
    } while (param_1 != (undefined4 *)0x0);
  }
  return 0;
code_r0x00087788:
  iVar2 = 0;
  if ((char *)puVar4[1] != (char *)0x0) {
    iVar2 = atoi((char *)puVar4[1]);
  }
  param_2[2] = iVar2;
  puVar4 = (undefined4 *)puVar4[10];
  goto joined_r0x00087758;
}


