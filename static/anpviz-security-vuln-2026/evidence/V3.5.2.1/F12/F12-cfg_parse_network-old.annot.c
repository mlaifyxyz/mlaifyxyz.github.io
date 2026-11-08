/* libtools.so (665b1f91c89de0969677ec055c92414318f084e075e69acecdebcfc5d6424dfe), Ghidra 12.2 headless; requested 00073404 */
/* function FUN_00073404 @ 00073404 */

void * FUN_00073404(int *param_1)

{
  undefined4 *__ptr;
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *param2;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 auStack_410 [1004];
  
  __ptr = malloc(0x400);
  iVar1 = DAT_000737ac;
  param2 = (char *)(DAT_000737b0 + 0x73422 /*"
"*/);
  pcVar9 = (char *)((int)__ptr + 0x23);
  uVar5 = *(undefined4 *)(DAT_000737ac + 0x73424 /*"iaStreamConfig>
"*/);
  uVar6 = *(undefined4 *)(DAT_000737ac + 0x73428 /*"reamConfig>
"*/);
  uVar7 = *(undefined4 *)(DAT_000737ac + 0x7342c /*"Config>
"*/);
  puVar10 = (undefined4 *)(DAT_000737ac + 0x73430 /*"ig>
"*/);
  *__ptr = *(undefined4 *)(DAT_000737ac + 0x73420 /*"<MediaStreamConfig>
"*/);
  __ptr[1] = uVar5;
  __ptr[2] = uVar6;
  __ptr[3] = uVar7;
  iVar8 = DAT_000737b4;
  uVar5 = *(undefined4 *)(iVar1 + 0x73434);
  __ptr[4] = *puVar10;
  *(short *)(__ptr + 5) = (short)uVar5;
  snprintf((char *)((int)__ptr + 0x15),0x3ea,(char *)(iVar8 + 0x7343e));
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737b8 + 0x73456 /*"Auth="%d" "*/),
                   param_1[1]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737bc + 0x73462 /*"VideoPort="%d" "*/),
                   param_1[3]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737c0 + 0x73474 /*"RTPOverRTSP="%d" "*/),
                   param_1[2]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737c4 + 0x73484 /*"enable_rtsp="%d" "*/),
                   *param_1);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),param2);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737c8 + 0x734a0 /*"enable_onvif="%d" "*/),
                   param_1[6]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737cc + 0x734b0 /*"enable_web="%d" "*/),
                   param_1[7]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737d0 + 0x734c0 /*"OnvifAuth="%d" "*/),
                   param_1[8]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737d4 + 0x734d0 /*"WEBPort="%d" "*/),
                   param_1[9]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737d8 + 0x734e0 /*"httpsPort="%d" "*/),
                   param_1[10]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737dc + 0x734f0 /*"h5Port="%d" "*/),
                   param_1[0xb]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737e0 + 0x73502 /*"httpsCertificate="%s" "*/),
                   (char *)(param_1 + 0xc));
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737e4 + 0x73514 /*"httpsKey="%s" "*/),
                   (char *)(param_1 + 0x2c));
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),param2);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737e8 + 0x73530 /*"enable_comm="%d" "*/),
                   param_1[4]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737ec + 0x73540 /*"PTZPort="%d" "*/),
                   param_1[5]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),param2);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737f0 + 0x73564 /*"enable_hik="%d" "*/),
                   param_1[0x4c]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737f4 + 0x7357a /*"hik_port="%u" "*/),
                   (uint)*(ushort *)(param_1 + 0x4d));
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737f8 + 0x7358c /*"hik_auth="%d" "*/),
                   (int)*(short *)((int)param_1 + 0x136));
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),param2);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_000737fc + 0x735b0 /*"enable_dh="%d" "*/),
                   param_1[0x4e]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073800 + 0x735c4 /*"dh_port="%u" "*/),
                   (uint)*(ushort *)(param_1 + 0x4f));
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073804 + 0x735d6 /*"dh_auth="%d" "*/),
                   (int)*(short *)((int)param_1 + 0x13e));
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),param2);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073808 + 0x735f4 /*"enable_tst="%d" "*/),
                   param_1[0x50]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),param2);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_0007380c + 0x73618 /*"enable_rtmp="%d" "*/),
                   param_1[0x51]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073810 + 0x7362c /*"rtmp_port="%d" "*/),
                   (uint)*(ushort *)(param_1 + 0x62));
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073814 + 0x7363e /*"streamno="%d" "*/),
                   (int)*(short *)((int)param_1 + 0x18a));
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073818 + 0x73650 /*"rtmp_type="%d" "*/),
                   param_1[0xb3]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_0007381c + 0x73662 /*"rtmp_server="%s" "*/),
                   (char *)(param_1 + 0x52));
  pcVar9 = pcVar9 + iVar1;
  pcVar2 = (char *)copy_with_escape(auStack_410,param_1 + 99);
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073820 + 0x7367e /*"rtmp_appname="%s" "*/),pcVar2
                  );
  pcVar9 = pcVar9 + iVar1;
  pcVar2 = (char *)copy_with_escape(auStack_410,param_1 + 0x73);
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073824 + 0x73698 /*"rtmp_streamid="%s" "*/),pcVar2
                  );
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),param2);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073828 + 0x736b4 /*"Multicast0_enable="%d" "*/),
                   (int)(short)param_1[0xbb]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_0007382c + 0x736c6 /*"Multicast0_port="%u" "*/),
                   (uint)*(ushort *)((int)param_1 + 0x2ee));
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073830 + 0x736d8 /*"Multicast0_IP="%u" "*/),
                   param_1[0xbc]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073834 + 0x736ea /*"Multicast1_enable="%d" "*/),
                   (int)(short)param_1[0xbd]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073838 + 0x736fc /*"Multicast1_port="%u" "*/),
                   (uint)*(ushort *)((int)param_1 + 0x2f6));
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_0007383c + 0x7370e /*"Multicast1_IP="%u" >"*/),
                   param_1[0xbe]);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),param2);
  pcVar9 = pcVar9 + iVar1;
  iVar1 = snprintf(pcVar9,(int)__ptr + (0x3ff - (int)pcVar9),(char *)(DAT_00073840 + 0x73728 /*"<RtmpCfg>
"*/));
  pcVar2 = (char *)FUN_00071250(param_1 + 0xb4);
  pcVar9 = pcVar9 + (iVar1 - (int)__ptr);
  sVar3 = strlen(pcVar2);
  iVar8 = sVar3 + 0x3ff;
  pvVar4 = realloc(__ptr,sVar3 + 0x400);
  sVar3 = strlen(pcVar2);
  memcpy((char *)((int)pvVar4 + (int)pcVar9),pcVar2,sVar3);
  sVar3 = strlen(pcVar2);
  free(pcVar2);
  pcVar2 = (char *)((int)pvVar4 + (int)(pcVar9 + sVar3));
  iVar1 = snprintf(pcVar2,iVar8 - (int)(pcVar9 + sVar3),(char *)(DAT_00073844 + 0x73784 /*"</RtmpCfg>
"*/));
  pcVar2 = pcVar2 + iVar1;
  iVar1 = snprintf(pcVar2,(int)pvVar4 + (iVar8 - (int)pcVar2),(char *)(DAT_00073848 + 0x7378c /*"</StreamAccess>
"*/));
  snprintf(pcVar2 + iVar1,(int)pvVar4 + (iVar8 - (int)(pcVar2 + iVar1)),
           (char *)(DAT_0007384c + 0x7379a /*"</MediaStreamConfig>
"*/));
  return pvVar4;
}


