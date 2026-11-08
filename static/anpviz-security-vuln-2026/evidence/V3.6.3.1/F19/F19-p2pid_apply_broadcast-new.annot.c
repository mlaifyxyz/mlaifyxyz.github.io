/* libtools.so (f8b5d696eeedf96627281df63171e56ec4aa767c44ff4dca16a2615622ef1bd8), Ghidra 12.2 headless; requested 000941f8 */
/* function FUN_000941f8 @ 000941f8 */

undefined4 FUN_000941f8(uint *param_1)

{
  int iVar1;
  void *__buf;
  char *param0;
  size_t sVar2;
  pthread_t __th;
  int iVar3;
  int *piVar4;
  int iVar5;
  ssize_t sVar6;
  char *pcVar7;
  __fd_mask *p_Var8;
  uint *__s;
  uint uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  __fd_mask *p_Var12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int local_23c;
  char *local_230;
  timeval local_218;
  sockaddr local_210;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0;
  char acStack_1e0 [28];
  undefined4 uStack_1c4;
  fd_set local_1c0;
  fd_set local_140;
  fd_set local_c0;
  
  pcVar7 = (char *)(DAT_00094808 + 0x94244 /*"ipc_p2pid_thread"*/);
  prctl(0xf);
  __buf = malloc(0x1400);
  param0 = malloc(0x1400);
  if (param0 == (char *)0x0 || __buf == (void *)0x0) {
    printf((char *)(DAT_00094888 + 0x9458c /*"[%s:%d] malloc failed

"*/),pcVar7,0x1d9);
switchD_00094276_caseD_4:
    iVar13 = *(int *)(DAT_0009488c + 0x94594);
    if (__buf == (void *)0x0) goto LAB_000942be;
    goto LAB_000942b6;
  }
  if (param_1 == (uint *)0x0) {
    printf((char *)(DAT_00094818 + 0x9430e /*"[%s:%d] param=NULL

"*/),pcVar7,0x1df);
    iVar13 = *(int *)(DAT_0009481c + 0x94318);
    goto LAB_000942b6;
  }
  __s = param_1 + 1;
  sVar2 = strlen((char *)__s);
  if (0x20 < (int)sVar2 || sVar2 == 0) {
    printf((char *)(DAT_0009480c + 0x942ac /*"[%s:%d] szSN length %d error

"*/),pcVar7,0x1e6,sVar2);
    iVar13 = *(int *)(DAT_00094810 + 0x942b6);
    goto LAB_000942b6;
  }
  uVar9 = *param_1;
  if (0x12 < uVar9) {
    printf((char *)(DAT_00094820 + 0x9432a /*"[%s:%d] apply type %d error > %d

"*/),pcVar7,0x1eb,uVar9,0x13);
    iVar13 = *(int *)(DAT_00094824 + 0x94334);
    goto LAB_000942b6;
  }
  switch(uVar9) {
  case 0:
    local_200 = *(undefined4 *)(DAT_00094884 + 0x94572 /*"DANALE"*/);
    local_1fc._0_3_ = (undefined3)*(undefined4 *)(DAT_00094884 + 0x94576 /*"LE"*/);
    break;
  case 1:
    local_200 = *(undefined4 *)(DAT_00094880 + 0x94560 /*"GOOLINK"*/);
    local_1fc = *(undefined4 *)(DAT_00094880 + 0x94564 /*"INK"*/);
    break;
  case 2:
    local_200 = *(undefined4 *)(DAT_0009487c + 0x9454e /*"EYEPLUS"*/);
    local_1fc = *(undefined4 *)(DAT_0009487c + 0x94552 /*"LUS"*/);
    break;
  case 3:
    puVar11 = (undefined4 *)(DAT_00094878 + 0x94544 /*"TUTK"*/);
    goto LAB_0009452e;
  default:
    goto switchD_00094276_caseD_4;
  case 5:
    puVar11 = (undefined4 *)(DAT_00094874 + 0x94530 /*"TUYA"*/);
LAB_0009452e:
    local_200 = *puVar11;
    local_1fc = CONCAT31(local_1fc._1_3_,(char)puVar11[1]);
    break;
  case 6:
    local_200 = *(undefined4 *)(DAT_00094870 + 0x94520 /*"AC18PLUS_CONSUME"*/);
    local_1fc = *(undefined4 *)(DAT_00094870 + 0x94524 /*"PLUS_CONSUME"*/);
    local_1f8 = *(undefined4 *)(DAT_00094870 + 0x94528 /*"_CONSUME"*/);
    local_1f4 = *(undefined4 *)(DAT_00094870 + 0x9452c /*"SUME"*/);
    local_1f0 = (undefined1)*(undefined4 *)(DAT_00094870 + 0x94530);
    break;
  case 7:
    local_200 = *(undefined4 *)(DAT_0009486c + 0x94510 /*"TUYA_NVR"*/);
    local_1fc = *(undefined4 *)(DAT_0009486c + 0x94514 /*"_NVR"*/);
    local_1f8 = CONCAT31(local_1f8._1_3_,(char)*(undefined4 *)(DAT_0009486c + 0x94518));
    break;
  case 0xb:
    local_200 = *(undefined4 *)(DAT_00094868 + 0x944fe /*"AC18PLUS_NVR"*/);
    local_1fc = *(undefined4 *)(DAT_00094868 + 0x94502 /*"PLUS_NVR"*/);
    local_1f8 = *(undefined4 *)(DAT_00094868 + 0x94506 /*"_NVR"*/);
    local_1f4 = CONCAT31(local_1f4._1_3_,(char)*(undefined4 *)(DAT_00094868 + 0x9450a));
    break;
  case 0xc:
    local_200 = *(undefined4 *)(DAT_00094864 + 0x944ee /*"AC18PRO_CONSUME"*/);
    local_1fc = *(undefined4 *)(DAT_00094864 + 0x944f2 /*"PRO_CONSUME"*/);
    local_1f8 = *(undefined4 *)(DAT_00094864 + 0x944f6 /*"CONSUME"*/);
    local_1f4 = *(undefined4 *)(DAT_00094864 + 0x944fa /*"UME"*/);
    break;
  case 0xd:
    local_200 = *(undefined4 *)(DAT_00094860 + 0x944d6 /*"AC18PRO_CMCC4G"*/);
    local_1fc = *(undefined4 *)(DAT_00094860 + 0x944da /*"PRO_CMCC4G"*/);
    local_1f8 = *(undefined4 *)(DAT_00094860 + 0x944de /*"CMCC4G"*/);
    local_1f4._0_3_ = (undefined3)*(undefined4 *)(DAT_00094860 + 0x944e2 /*"4G"*/);
    break;
  case 0xe:
    local_200 = *(undefined4 *)(DAT_0009485c + 0x944c4 /*"AC18PRO_NVR"*/);
    local_1fc = *(undefined4 *)(DAT_0009485c + 0x944c8 /*"PRO_NVR"*/);
    local_1f8 = *(undefined4 *)(DAT_0009485c + 0x944cc /*"NVR"*/);
    break;
  case 0xf:
    local_200 = *(undefined4 *)(DAT_00094858 + 0x944b4 /*"TENCENT_IOT_IPC"*/);
    local_1fc = *(undefined4 *)(DAT_00094858 + 0x944b8 /*"ENT_IOT_IPC"*/);
    local_1f8 = *(undefined4 *)(DAT_00094858 + 0x944bc /*"IOT_IPC"*/);
    local_1f4 = *(undefined4 *)(DAT_00094858 + 0x944c0 /*"IPC"*/);
    break;
  case 0x12:
    local_200 = *(undefined4 *)(DAT_00094828 + 0x94342 /*"DOT_IPC"*/);
    local_1fc = *(undefined4 *)(DAT_00094828 + 0x94346 /*"IPC"*/);
  }
  local_230 = (char *)&local_200;
  GetDeviceTypeStr(acStack_1e0);
  iVar3 = GetCurrentTimeStamp();
  iVar1 = DAT_00094834;
  iVar13 = *(int *)(DAT_0009482c + 0x94360);
  if (iVar13 == 0) {
    pcVar7 = (char *)(DAT_00094830 + 0x943b0 /*"ipc_p2pid_thread"*/);
    uVar9 = broadcastserver(0xbbb);
    local_23c = 0;
    do {
      if ((int)uVar9 < 1) {
        piVar4 = __errno_location();
        printf((char *)(DAT_00094850 + 0x94496 /*"[%s:%d] create socket failed, errno=%d

"*/),(char *)(iVar1 + 0x943b8),0x233,*piVar4);
        SLEEP_SECOND(1);
        iVar13 = *(int *)(DAT_00094854 + 0x944a4);
        if (iVar13 != 0) break;
      }
      else {
        if (*(int *)(DAT_00094838 + 0x9439a) == 0) {
          uVar15 = uVar9 >> 5;
          uVar16 = 1 << (uVar9 & 0x1f);
          pcVar10 = (char *)(DAT_0009483c + 0x943e8 /*"ipc_p2pid_thread"*/);
LAB_000943c8:
          local_218.tv_sec = 1;
          local_218.tv_usec = 0;
          iVar13 = GetCurrentTimeStamp();
          if (300000 < (uint)(iVar13 - iVar3)) {
            close(uVar9);
            iVar13 = *(int *)(DAT_000948b0 + 0x94742);
            break;
          }
          if ((uint)(iVar13 - local_23c) < 0x1f5) {
          }
          else {
            p_Var8 = local_1c0.fds_bits + 0x1f;
            sprintf(param0,(char *)(DAT_00094890 + 0x945b0 /*"<ENCRYPT>
<MESSAGE_HEADER Msg_type="SYSTEM_IDAPPLY_MESSAGE" Msg_code="%d" Msg_flag="0" />
<MESSAGE_BODY>
<DEVICE DeviceType="%s" SERIALID="%s" UUID="%s" TYPE="%s" />
</MESSAGE_BODY>
</ENCRYPT>
"*/),0x65,acStack_1e0,(char *)__s,
                    (char *)(param_1 + 9),local_230);
            p_Var12 = local_140.fds_bits + 0x1f;
            do {
              p_Var8 = p_Var8 + 1;
              *p_Var8 = 0;
            } while (p_Var12 != p_Var8);
            do {
              p_Var12 = p_Var12 + 1;
              *p_Var12 = 0;
            } while (local_c0.fds_bits + 0x1f != p_Var12);
            local_218.tv_usec = 0;
            uVar14 = local_c0.fds_bits[uVar15];
            local_140.fds_bits[uVar15] = local_140.fds_bits[uVar15] | uVar16;
            local_c0.fds_bits[uVar15] = uVar14 | uVar16;
            local_218.tv_sec = 2;
            iVar5 = select(uVar9 + 1,(fd_set *)0x0,&local_140,&local_c0,&local_218);
            if (iVar5 < 0) {
              piVar4 = __errno_location();
              printf((char *)(DAT_000948a8 + 0x9471c /*"[%s:%d] select failed, error=%d

"*/),(char *)(DAT_000948a4 + 0x9474c /*"ipc_p2pid_thread"*/),0x266,*piVar4
                    );
              goto LAB_00094434;
            }
            if (iVar5 == 0) {
              printf((char *)(DAT_000948a0 + 0x94702 /*"[%s:%d] select timeout

"*/),pcVar10,0x26b);
              goto LAB_00094434;
            }
            uVar14 = uVar16 & local_c0.fds_bits[uVar15];
            if (uVar14 != 0) {
              printf((char *)(DAT_000948ac + 0x9472e /*"[%s:%d] select sock find socket error

"*/),pcVar7,0x272);
              goto LAB_00094434;
            }
            if ((uVar16 & local_140.fds_bits[uVar15]) == 0) goto LAB_000943f8;
            local_210.sa_family = 2;
            local_210.sa_data[0] = '\v';
            local_210.sa_data[1] = -0x45;
            local_210.sa_data[2] = -1;
            local_210.sa_data[3] = -1;
            local_210.sa_data[4] = -1;
            local_210.sa_data[5] = -1;
            local_210.sa_data._6_4_ = uVar14;
            local_210.sa_data._10_4_ = uVar14;
            sVar2 = strlen(param0);
            sVar6 = sendto(uVar9,param0,sVar2,0,&local_210,0x10);
            if (sVar6 < 1) {
              piVar4 = __errno_location();
              iVar13 = *piVar4;
              pcVar10 = strerror(iVar13);
              printf((char *)(DAT_000948d8 + 0x947fa /*"[%s:%d] sendto failed, error=%d, errinfo=%s

"*/),
                     (char *)((int)&DAT_00094828 + DAT_000948d4 + 2),0x27f,iVar13,pcVar10);
              sn_broadcast_route_add();
              SLEEP_SECOND(1);
              goto LAB_00094444;
            }
            local_23c = iVar13;
          }
LAB_000943f8:
          puVar11 = &uStack_1c4;
          do {
            puVar11 = puVar11 + 1;
            *puVar11 = 0;
          } while (puVar11 != local_1c0.fds_bits + 0x1f);
          local_1c0.fds_bits[uVar15] = local_1c0.fds_bits[uVar15] | uVar16;
          iVar13 = select(uVar9 + 1,&local_1c0,(fd_set *)0x0,(fd_set *)0x0,&local_218);
          if (iVar13 < 0) {
            piVar4 = __errno_location();
            pcVar10 = (char *)(DAT_000948b4 + 0x9478e /*"ipc_p2pid_thread"*/);
            printf((char *)(DAT_000948b8 + 0x94762 /*"[%s:%d] select failed, error=%d

"*/),pcVar10,0x29b,*piVar4);
            close(uVar9);
            mysystem_with_param(DAT_000948c0 + 0x94774 /*"ifconfig %s up"*/,DAT_000948bc + 0x94772 /*"eth0"*/);
            SLEEP_SECOND(1);
            DebugPrint(1,7,DAT_000948c4 + 0x9478a /*"[%s:%u]exit send and recv loop

"*/,pcVar10,0x2dc);
            goto LAB_00094462;
          }
          if ((iVar13 != 0) && ((uVar16 & local_1c0.fds_bits[uVar15]) != 0)) {
            local_140.fds_bits[0] = 0x10;
            sVar6 = recvfrom(uVar9,__buf,0x1400,0,&local_210,(socklen_t *)&local_140);
            if (sVar6 < 1) {
              piVar4 = __errno_location();
              pcVar10 = (char *)(DAT_000948c8 + 0x947dc /*"ipc_p2pid_thread"*/);
              printf((char *)(DAT_000948cc + 0x947b0 /*"[%s:%d] recvfrom failed, error=%d

"*/),pcVar10,0x2b0,*piVar4);
              close(uVar9);
              SLEEP_SECOND(1);
              DebugPrint(1,7,DAT_000948d0 + 0x947cc /*"[%s:%u]exit send and recv loop

"*/,pcVar10,0x2dc);
              goto LAB_00094462;
            }
            *(undefined1 *)((int)__buf + sVar6) = 0;
            iVar13 = get_id_cmd(__buf);
            sprintf((char *)&local_c0,(char *)(DAT_00094894 + 0x946aa /*"%d.%d.%d.%d"*/),
                    (uint)(byte)local_210.sa_data[2],(uint)local_210.sa_data._2_4_ >> 8 & 0xff,
                    (uint)local_210.sa_data._2_4_ >> 0x10 & 0xff,
                    (uint)local_210.sa_data._2_4_ >> 0x18);
            if (iVar13 == 0x66) {
              iVar13 = HandleCmdIdResponse(0x66,uVar9,__buf,param0,local_210._0_4_,
                                           local_210.sa_data._2_4_,local_210.sa_data._6_4_,
                                           local_210.sa_data._10_4_,__s);
              if (0 < iVar13) {
                close(uVar9);
                if (*(code **)(DAT_00094898 + 0x946ec) != (code *)0x0) {
                  (**(code **)(DAT_00094898 + 0x946ec))();
                }
                iVar13 = *(int *)(DAT_0009489c + 0x946f2);
                break;
              }
              goto LAB_00094444;
            }
          }
LAB_00094434:
          if (*(int *)(DAT_00094840 + 0x9443c) != 0) goto LAB_00094444;
          goto LAB_000943c8;
        }
LAB_00094444:
        DebugPrint(1,7,DAT_00094848 + 0x94456 /*"[%s:%u]exit send and recv loop

"*/,DAT_00094844 + 0x9448a /*"ipc_p2pid_thread"*/,0x2dc);
        close(uVar9);
LAB_00094462:
        iVar13 = *(int *)(DAT_0009484c + 0x94468);
        if ((0 < iVar13) || (iVar13 != 0)) break;
      }
      uVar9 = broadcastserver(0xbbb);
    } while( true );
  }
LAB_000942b6:
  free(__buf);
LAB_000942be:
  if (param0 != (char *)0x0) {
    free(param0);
  }
  *(undefined4 *)(DAT_00094814 + 0x942e0) = 0;
  free(param_1);
  if (iVar13 == 0) {
    __th = pthread_self();
    pthread_detach(__th);
    return 0;
  }
  return 0;
}


