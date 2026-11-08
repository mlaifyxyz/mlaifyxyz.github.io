/* libtools.so (f8b5d696eeedf96627281df63171e56ec4aa767c44ff4dca16a2615622ef1bd8), Ghidra 12.2 headless; requested 00078bb4 */
/* function FUN_00078bb4 @ 00078bb4 */

void * FUN_00078bb4(int *param_1)

{
  undefined4 *__ptr;
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  char *param2;
  undefined4 *puVar10;
  undefined1 auStack_410 [1004];
  
  __ptr = malloc(0x400);
  iVar1 = DAT_00078f80;
  param2 = (char *)(DAT_00078f84 + 0x78bd8 /*"
"*/);
  pcVar8 = (char *)((int)__ptr + 0x23);
  uVar5 = *(undefined4 *)(DAT_00078f80 + 0x78bda /*"iaStreamConfig>
"*/);
  uVar6 = *(undefined4 *)(DAT_00078f80 + 0x78bde /*"reamConfig>
"*/);
  uVar7 = *(undefined4 *)(DAT_00078f80 + 0x78be2 /*"Config>
"*/);
  puVar10 = (undefined4 *)(DAT_00078f80 + 0x78be6 /*"ig>
"*/);
  *__ptr = *(undefined4 *)(DAT_00078f80 + 0x78bd6 /*"<MediaStreamConfig>
"*/);
  __ptr[1] = uVar5;
  __ptr[2] = uVar6;
  __ptr[3] = uVar7;
  iVar9 = DAT_00078f88;
  uVar5 = *(undefined4 *)(iVar1 + 0x78bea);
  __ptr[4] = *puVar10;
  *(short *)(__ptr + 5) = (short)uVar5;
  snprintf((char *)((int)__ptr + 0x15),0x3ea,(char *)(iVar9 + 0x78bf6));
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078f8c + 0x78c0c /*"Auth="%d" "*/),
                   param_1[1]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078f90 + 0x78c18 /*"VideoPort="%d" "*/),
                   param_1[3]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078f94 + 0x78c28 /*"RTPOverRTSP="%d" "*/),
                   param_1[2]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078f98 + 0x78c38 /*"enable_rtsp="%d" "*/),
                   *param_1);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),param2);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078f9c + 0x78c54 /*"enable_onvif="%d" "*/),
                   param_1[6]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fa0 + 0x78c64 /*"enable_web="%d" "*/),
                   param_1[7]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fa4 + 0x78c74 /*"OnvifAuth="%d" "*/),
                   param_1[8]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fa8 + 0x78c84 /*"WEBPort="%d" "*/),
                   param_1[9]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fac + 0x78c94 /*"httpsPort="%d" "*/),
                   param_1[10]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fb0 + 0x78ca4 /*"h5Port="%d" "*/),
                   param_1[0xb]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fb4 + 0x78cb6 /*"httpsCertificate="%s" "*/),
                   (char *)(param_1 + 0xc));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fb8 + 0x78cc8 /*"httpsKey="%s" "*/),
                   (char *)(param_1 + 0x2c));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),param2);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fbc + 0x78ce4 /*"enable_comm="%d" "*/),
                   param_1[4]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fc0 + 0x78cf4 /*"PTZPort="%d" "*/),
                   param_1[5]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),param2);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fc4 + 0x78d18 /*"enable_hik="%d" "*/),
                   param_1[0x4c]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fc8 + 0x78d2c /*"hik_port="%u" "*/),
                   (uint)*(ushort *)(param_1 + 0x4d));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fcc + 0x78d3e /*"hik_auth="%d" "*/),
                   (int)*(short *)((int)param_1 + 0x136));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),param2);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fd0 + 0x78d5c /*"enable_dh="%d" "*/),
                   param_1[0x4e]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fd4 + 0x78d6e /*"dh_port="%u" "*/),
                   (uint)*(ushort *)(param_1 + 0x4f));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fd8 + 0x78d80 /*"dh_auth="%d" "*/),
                   (int)*(short *)((int)param_1 + 0x13e));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),param2);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fdc + 0x78d9e /*"enable_tst="%d" "*/),
                   (uint)*(byte *)(param_1 + 0x50));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),param2);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fe0 + 0x78dc8 /*"expand="%d" smart="%d" private="%d" "*/),
                   (uint)*(byte *)((int)param_1 + 0x141),(uint)*(byte *)((int)param_1 + 0x142),
                   (uint)*(byte *)((int)param_1 + 0x143));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),param2);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fe4 + 0x78dec /*"enable_rtmp="%d" "*/),
                   param_1[0x51]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fe8 + 0x78e00 /*"rtmp_port="%d" "*/),
                   (uint)*(ushort *)(param_1 + 0x62));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078fec + 0x78e12 /*"streamno="%d" "*/),
                   (int)*(short *)((int)param_1 + 0x18a));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078ff0 + 0x78e24 /*"rtmp_type="%d" "*/),
                   param_1[0xb3]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078ff4 + 0x78e36 /*"rtmp_server="%s" "*/),
                   (char *)(param_1 + 0x52));
  pcVar8 = pcVar8 + iVar1;
  pcVar2 = (char *)copy_with_escape(auStack_410,param_1 + 99);
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078ff8 + 0x78e52 /*"rtmp_appname="%s" "*/),pcVar2
                  );
  pcVar8 = pcVar8 + iVar1;
  pcVar2 = (char *)copy_with_escape(auStack_410,param_1 + 0x73);
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00078ffc + 0x78e6c /*"rtmp_streamid="%s" "*/),pcVar2
                  );
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),param2);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00079000 + 0x78e88 /*"Multicast0_enable="%d" "*/),
                   (int)(short)param_1[0xbb]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00079004 + 0x78e9a /*"Multicast0_port="%u" "*/),
                   (uint)*(ushort *)((int)param_1 + 0x2ee));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00079008 + 0x78eac /*"Multicast0_IP="%u" "*/),
                   param_1[0xbc]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_0007900c + 0x78ebe /*"Multicast1_enable="%d" "*/),
                   (int)(short)param_1[0xbd]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00079010 + 0x78ed0 /*"Multicast1_port="%u" "*/),
                   (uint)*(ushort *)((int)param_1 + 0x2f6));
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00079014 + 0x78ee2 /*"Multicast1_IP="%u" >"*/),
                   param_1[0xbe]);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),param2);
  pcVar8 = pcVar8 + iVar1;
  iVar1 = snprintf(pcVar8,(int)__ptr + (0x3ff - (int)pcVar8),(char *)(DAT_00079018 + 0x78efc /*"<RtmpCfg>
"*/));
  pcVar2 = (char *)FUN_00076810(param_1 + 0xb4);
  pcVar8 = pcVar8 + (iVar1 - (int)__ptr);
  sVar3 = strlen(pcVar2);
  iVar9 = sVar3 + 0x3ff;
  pvVar4 = realloc(__ptr,sVar3 + 0x400);
  sVar3 = strlen(pcVar2);
  memcpy((char *)((int)pvVar4 + (int)pcVar8),pcVar2,sVar3);
  sVar3 = strlen(pcVar2);
  free(pcVar2);
  pcVar2 = (char *)((int)pvVar4 + (int)(pcVar8 + sVar3));
  iVar1 = snprintf(pcVar2,iVar9 - (int)(pcVar8 + sVar3),(char *)(DAT_0007901c + 0x78f58 /*"</RtmpCfg>
"*/));
  pcVar2 = pcVar2 + iVar1;
  iVar1 = snprintf(pcVar2,(int)pvVar4 + (iVar9 - (int)pcVar2),(char *)(DAT_00079020 + 0x78f60 /*"</StreamAccess>
"*/));
  snprintf(pcVar2 + iVar1,(int)pvVar4 + (iVar9 - (int)(pcVar2 + iVar1)),
           (char *)(DAT_00079024 + 0x78f6e /*"</MediaStreamConfig>
"*/));
  return pvVar4;
}


