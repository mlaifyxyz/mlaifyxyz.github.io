/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 00052998 */
/* function FUN_00052998 @ 00052998 */

undefined4 FUN_00052998(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  void *__ptr;
  uint uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [64];
  
  DAT_000ab9fc = 0;
  DAT_000ac1fb = 0;
  FUN_0005248c();
  FUN_00051f20(param_1);
  FUN_00051ca0(param_1);
  FUN_00051d4c(param_1);
  FUN_00051948(param_1);
  FUN_00051604("domains_check");
  FUN_00051604("arming_daynight");
  FUN_00051604("alarm_arming");
  FUN_00051604("device_report");
  FUN_00051604("create_timelapse");
  FUN_00051604("export_record");
  FUN_00051604("part_restore");
  FUN_00051604("arming_bytime");
  FUN_00051604("arming_audiodesc");
  FUN_00051604("ioout_arming");
  FUN_00051604("P2PNEWROOT");
  FUN_00051604("fixipcfg");
  FUN_00051604("video_qos");
  FUN_00051604("humanmosic");
  iVar8 = FileExist("/opt/ch/audioprompt");
  if (iVar8 != 0) {
    FUN_00051604("audioprompt");
  }
  iVar8 = sn_get_dsp_type();
  if ((iVar8 == 0xbc8) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc9)) {
    FUN_00051604("hd_disablemd");
    iVar8 = FileExist("/opt/ch/ddns_speco");
  }
  else {
    iVar8 = FileExist("/opt/ch/ddns_speco");
  }
  if (iVar8 != 0) {
    FUN_00051604("ddns_cfg");
  }
  iVar8 = FileExist("/opt/ch/aiot_server");
  if (iVar8 != 0) {
    if (DAT_000a8ec0 != 0x716) {
      FUN_00051604("alarm_push_cloud");
    }
    FUN_00051604("connpre");
  }
  if ((DAT_000a8ec0 - 0x716 < 0x1a) &&
     ((int)((0x3001011U >> (DAT_000a8ec0 - 0x716 & 0xff)) << 0x1f) < 0)) {
    FUN_00051604("ptz_lowpower");
  }
  iVar8 = IsMotorVersion();
  if (iVar8 != 0) {
    if (DAT_000ac558 == 0 && DAT_000ab9cc == 0) {
      FUN_00051604("ptz_autocali");
    }
    FUN_00051604("ptz_autohome");
  }
  iVar8 = FileExist("/opt/ch/flag.location");
  if (iVar8 != 0) {
    FUN_00051604("location");
  }
  FUN_00051604("dhcp_fixtime");
  iVar8 = access("/opt/ch/rtsp_server",0);
  if (iVar8 != -1) {
    FUN_00051604("multicast");
  }
  FUN_00051604("OSD_ANYPOS");
  FUN_00051604("ipaddrlimit");
  uVar13 = (uint)(DAT_000a8ec0 - 0x1ae < 4);
  if (DAT_000a8ec0 - 0x707 < 0x1b) {
    uVar13 = uVar13 | 0x40041c1U >> (DAT_000a8ec0 - 0x707 & 0xff) & 1;
  }
  if ((uVar13 != 0) || (iVar8 = GetLedBrGpioPort(), iVar8 != -1)) {
    uVar9 = GetLedBrGpioPort();
    DebugPrint(8,7,"[%s:%u]GetLedBrGpioPort=%d\n",DAT_00052f30,0x1fa2,uVar9);
    FUN_00051604("alarm_led");
  }
  if (DAT_000a8ec0 - 0x703 < 0x11) {
    uVar13 = 0x100efU >> (DAT_000a8ec0 - 0x703 & 0xff) & 1;
  }
  else {
    uVar13 = 0;
  }
  if (((DAT_000a8ec0 - 0x68e < 8 || (DAT_000a8ec0 == 0x6aa || DAT_000a8ec0 == 0x688)) ||
      (DAT_000a8ec0 - 0x622 & 0xfffffffd) == 0) || uVar13 != 0) {
    FUN_00051604("alarm_led");
  }
  if (DAT_000ab9cc != 0) {
    FUN_00051604("alarm_led");
  }
  if ((DAT_000ac55c != 0) &&
     (DAT_000a8ec0 == 0x614 ||
      (DAT_000a8ec0 == 0x715 || (DAT_000a8ec0 == 0x60e || DAT_000a8ec0 == 0x1b0)))) {
    FUN_0004b460("alarm_led");
  }
  FUN_00051604("be_set_mtu");
  if (DAT_000a8ec0 == 0x1ae || DAT_000a8ec0 == 0x199) {
    FUN_00051604("manual_set_ptz_speed");
  }
  if (DAT_000ac560 == 1) {
    FUN_00051604("cat_manual_set_ptz_speed");
  }
  FUN_00051604("ptz3dlocate");
  iVar8 = access("/opt/ch/af_protocol_4_flag",0);
  if (iVar8 != -1) {
    FUN_00051604("af_protocol_4");
  }
  iVar8 = access("/opt/ch/support_ptz_firmware_update.flag",0);
  if (iVar8 != -1) {
    FUN_00051604("ptz_firmware_update");
  }
  iVar8 = access("/opt/ch/flag.alarm_pd_semsivity_new",0);
  if (iVar8 != -1) {
    FUN_00051604("aiobjectsensivity");
  }
  iVar8 = access("/opt/ch/flag.street_lamp",0);
  if (iVar8 != -1) {
    FUN_00051604("streetlamp");
  }
  if (DAT_000ac558 == 0) {
    if (DAT_000ab9cc == 0 && DAT_000ac564 == 0) goto LAB_00054952;
  }
  else {
    FUN_00051604("af_protocol_5");
    if (DAT_000ab9cc == 0 && DAT_000ac564 == 0) {
LAB_00054952:
      FUN_00051604("hikconfig");
    }
  }
  FUN_00051604("commenable");
  FUN_00051604("TimeSpanNew");
  FUN_00051604("scare_off");
  FUN_00051604("cloud_authcode");
  if (DAT_000a8ec0 == 0x1ad) {
    FUN_00051604("pilot_power_light");
  }
  iVar8 = access("/opt/ch/flag.https",0);
  if (iVar8 != -1) {
    FUN_00051604("with_https");
  }
  iVar8 = access("/opt/ch/h5live_server",0);
  if (iVar8 != -1) {
    FUN_00051604("with_h5");
  }
  iVar8 = access("/opt/ch/dot_server",0);
  if (iVar8 != -1) {
    FUN_00051604("audio_aisetting");
    FUN_00051604("mute_ptz_turn");
  }
  iVar8 = access("/opt/ch/flag.only_sup_dzoom",0);
  if (iVar8 != -1) {
    FUN_00051604("ptz_only_digit_zoom");
  }
  iVar8 = access("/opt/ch/disable_vdf.flag",0);
  if (iVar8 != 0) {
    iVar8 = sn_get_dsp_type();
    if ((((iVar8 == 0xbcf) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbcc)) ||
        (iVar8 = sn_get_dsp_type(), iVar8 == 0xbcd)) ||
       ((iVar8 = sn_get_dsp_type(), iVar8 == 0xbd0 || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbd1))))
    {
      DebugPrint(8,7,"[%s:%u]not support alarm cover\n\n",DAT_00054a5c,0x202e);
    }
    else {
      FUN_00051604("alarm_cover");
    }
  }
  FUN_00051604("with_qpsetting");
  iVar8 = access("/opt/ch/flag.fdfr",0);
  if (iVar8 == 0) {
    FUN_00051604("face_detect");
    FUN_00051604("face_recognize");
  }
  if (DAT_000ac568 != 0) {
    FUN_00051604("ircut_by_adc");
  }
  iVar8 = access("/opt/ch/ex_server",0);
  if (iVar8 != -1) {
    FUN_00051604("dhconfig");
  }
  FUN_00051604("af_setting");
  FUN_00051604("af_coordinate");
  FUN_00051604("video_crop");
  FUN_00051604("antiflicker");
  if (DAT_000a8ec0 == 0x1101) {
    FUN_00051604("ispmode");
  }
  iVar8 = access("/opt/ch/flag.voip",0);
  if (iVar8 != -1) {
    FUN_00051604(&DAT_00084d60);
  }
  iVar8 = access("/opt/ch/flag.modifymac",0);
  if (iVar8 != -1) {
    FUN_00051604("ModifyMac");
  }
  iVar8 = access("/opt/ch/upnp_port",0);
  if (iVar8 != -1) {
    FUN_00051604("enable_upnp");
  }
  iVar8 = access("/opt/ch/flag.pd",0);
  if (((iVar8 == 0) || (iVar8 = access("/opt/ch/flag.pd.madp",0), iVar8 == 0)) &&
     (iVar8 = access("/tmp/flag.dzoom.4mp",0), iVar8 != 0)) {
    FUN_00051604("VideoPD");
    iVar8 = access("/opt/ch/flag.ai.fix.icon",0);
    if (iVar8 != 0) {
      FUN_00051604("pd2rectconf");
    }
    if (DAT_000a8ec0 - 0x199 < 0x19) {
      uVar13 = 0x1fafa21U >> (DAT_000a8ec0 - 0x199 & 0xff) & 1;
LAB_00054e1e:
      bVar17 = DAT_000a8ec0 - 0x701 < 0xf;
      bVar1 = DAT_000a8ec0 - 0x68e < 8;
      bVar2 = DAT_000a8ec0 - 0x6a8 < 3;
      bVar16 = DAT_000a8ec0 == 0x688;
      bVar5 = DAT_000a8ec0 == 0x782;
      if (DAT_000a8ec0 - 0x713 < 0x1d) {
        uVar11 = 0x197bdfffU >> (DAT_000a8ec0 - 0x713 & 0xff) & 1;
      }
      else {
        uVar11 = 0;
      }
    }
    else {
      if (0x1e < DAT_000a8ec0 - 0x606) {
        uVar13 = 0;
        goto LAB_00054e1e;
      }
      bVar17 = false;
      bVar1 = false;
      uVar13 = 0x507fdfc3U >> (DAT_000a8ec0 - 0x606 & 0xff) & 1;
      bVar2 = false;
      bVar5 = false;
      bVar16 = false;
      uVar11 = 0;
    }
    bVar2 = (bool)(bVar1 | bVar17 | bVar5 | bVar16 | bVar2);
    if (DAT_000a8ec0 - 0x629 < 2) {
      bVar2 = true;
    }
    if (uVar11 != 0 || (bVar2 || uVar13 != 0)) {
      FUN_00051604("humantrack");
    }
    iVar8 = access("/opt/ch/flag.pd.madp",0);
    if (iVar8 == 0) {
      FUN_00051604("pd_madp");
    }
  }
  if (DAT_000ac2ac != 0) {
    FUN_00051604("humantrack");
  }
  if (DAT_000ac56c != 0) {
    FUN_00051604("gunballtrack1");
  }
  iVar8 = access("/opt/ch/flag.car.sstar",0);
  if (iVar8 == 0) {
    FUN_00051604("VehicleCar");
    iVar8 = FileExist("/opt/ch/flag.onlyHumanCarDetect");
    if (iVar8 == 0) {
      FUN_00051604("VehicleMoto");
      FUN_00051604("VehicleBicycle");
    }
  }
  iVar8 = access("/opt/ch/flag.face.sstar",0);
  if (iVar8 == 0) {
    FUN_00051604("face_detect");
  }
  iVar8 = access("/opt/ch/flag.algo.sstar",0);
  if (iVar8 == 0) {
    FUN_00051604("AlarmRegionAI");
    FUN_00051604("AlarmVG");
    FUN_00051604("pd_polygon_area");
    FUN_00051604("face_detect");
  }
  iVar8 = access("/opt/ch/flag.pd.non.motion.filter",0);
  if (iVar8 == 0) {
    FUN_00051604("nonMotionFilter");
  }
  iVar8 = access("/opt/ch/flag.ridgeOS_config",0);
  if (iVar8 == 0) {
    FUN_00051604("ridgeOS_config");
  }
  if (DAT_000a8ec0 - 0x70d < 0x1d) {
    uVar13 = 0x1e010003U >> (DAT_000a8ec0 - 0x70d & 0xff) & 1;
  }
  else {
    uVar13 = 0;
  }
  if ((DAT_000a8ec0 == 0x60d || DAT_000a8ec0 - 0x1af < 3) || uVar13 != 0) {
    FUN_00051604("device_power_display");
    FUN_00051604("low_power_support");
  }
  iVar8 = access("/opt/ch/flag.show_dvfs",0);
  if ((iVar8 != -1) &&
     ((0x19 < DAT_000a8ec0 - 0x716 ||
      (-1 < (int)((0x3001011U >> (DAT_000a8ec0 - 0x716 & 0xff)) << 0x1f))))) {
    FUN_00051604("device_power_display");
  }
  iVar8 = access("/opt/ch/flag.low_power_mode",0);
  if (iVar8 != -1) {
    FUN_00051604("low_power_support");
  }
  if (DAT_000a8ec0 == 0x485) {
    FUN_00051604("brightness_mode1");
  }
  uVar13 = (uint)(DAT_000a8ec0 == 0xb028 || DAT_000a8ec0 == 0x1ad);
  if (DAT_000a8ec0 - 0x707 < 0x1b) {
    uVar13 = uVar13 | 0x4000009U >> (DAT_000a8ec0 - 0x707 & 0xff) & 1;
  }
  if (uVar13 != 0) {
    FUN_00051604("privacy_protection");
  }
  iVar8 = access("/opt/ch/flag.fire.aiwinn",0);
  if (iVar8 == 0) {
    FUN_00051604("VideoPD");
    FUN_00051604(&DAT_0007c1a8);
    FUN_00051604("pd2rectconf");
  }
  iVar8 = access("/opt/ch/flag.bresee",0);
  if (iVar8 == 0) {
    FUN_00051604("VehicleElectricbicycle");
    FUN_00051604("light_action");
  }
  iVar8 = access("/opt/ch/flag.lpr.aw",0);
  if ((iVar8 == 0) || (iVar8 = access("/opt/ch/flag.aiwinn.lpr",0), iVar8 == 0)) {
    FUN_00051604("LPRecognition");
    iVar8 = sn_get_dsp_type();
  }
  else {
    iVar8 = sn_get_dsp_type();
  }
  if (iVar8 == 0xbb9) {
    FUN_00051604("AudioAlarm");
  }
  iVar8 = access("/opt/ch/flag.vg",0);
  if (iVar8 == 0) {
    FUN_00051604("AlarmVG");
  }
  iVar8 = access("/opt/ch/flag.polygon",0);
  if (iVar8 == 0) {
    FUN_00051604("pd_polygon_area");
  }
  iVar8 = access("/data/mcv.lpr",0);
  if (iVar8 == 0) {
    FUN_00051604("LPRecognition");
    FUN_00051604("pd_polygon_area");
  }
  iVar8 = access("/data/mcv.fd",0);
  if (iVar8 == 0) {
    FUN_00051604("face_detect");
  }
  iVar8 = access("/data/mcv.fire",0);
  if (iVar8 == 0) {
    FUN_00051604(&DAT_0007c1a8);
    FUN_00051604("white_led_panel");
  }
  iVar8 = access("/opt/ch/flag.fire_detector",0);
  if (iVar8 == 0) {
    FUN_00051604(&DAT_0007c1a8);
    FUN_00051604("FireDetector");
  }
  iVar8 = access("/data/mcv.area",0);
  if ((iVar8 == 0) || (iVar8 = access("/data/mcv.line",0), iVar8 == 0)) {
    FUN_00051604("AlarmRegionAI");
    FUN_00051604("AlarmVG");
    FUN_00051604("pd_polygon_area");
  }
  iVar8 = access("/data/mcv.ele_gas",0);
  if (iVar8 == 0) {
    FUN_00051604("VehicleElectricbicycle");
    FUN_00051604("Gastank");
    FUN_00051604("pd_polygon_area");
    FUN_00051604("alarm_cover");
    FUN_00051604("aiobjectsensivity");
    FUN_00051604("light_action");
    FUN_00051604("pd2rectconf");
  }
  FUN_00051604("pd_polygon_area");
  iVar8 = access("/opt/ch/flag.vg",0);
  if (iVar8 == 0) {
    FUN_00051604("AlarmVG");
  }
  iVar8 = access("/opt/ch/anko_adaptor",0);
  if (iVar8 == -1) {
    if (DAT_000ac570 == 0) {
      iVar8 = access("/opt/ch/flag.no.p2p",0);
      if ((iVar8 == -1) && (DAT_000a8ec0 != 0x1b4 && DAT_000a8ec0 != 0x1ab)) {
        FUN_00051604("p2p_config");
        if (DAT_000ac574 != 0) {
          FUN_00051604("p2p_aiot");
        }
        if (DAT_000ac578 != 0) {
          FUN_00051604("p2p_danale");
        }
        if (DAT_000ac57c != 0) {
          FUN_00051604("p2p_skyworth");
        }
        if (DAT_000ac580 != 0) {
          FUN_00051604("p2p_ac18pro");
        }
        if (DAT_000ac584 != 0) {
          FUN_00051604("p2p_tencent");
        }
        if (DAT_000ac588 != 0) {
          FUN_00051604("p2p_goolink");
        }
        if (DAT_000ac58c != 0) {
          FUN_00051604("p2p_ismart");
        }
        if (DAT_000ac590 != 0) {
          FUN_00051604("p2p_qq");
        }
        if (DAT_000ac594 != 0) {
          FUN_00051604("p2p_eyeplus");
        }
      }
      goto LAB_000531cc;
    }
LAB_0005416c:
    uVar13 = 0;
  }
  else {
LAB_000531cc:
    if (DAT_000a8ec0 - 1 < 10) {
      uVar13 = ~(0x217U >> (DAT_000a8ec0 - 1 & 0xff)) & 1;
    }
    else {
      uVar13 = 1;
    }
    if (DAT_000ac570 != 0) goto LAB_0005416c;
    uVar13 = uVar13 & ((DAT_000a8ec0 == 0x1201 || DAT_000a8ec0 == 0x783) ^ 1);
  }
  iVar8 = access("/opt/ch/flag.no.storage",0);
  if (((iVar8 != 0) &&
      (((DAT_000ac334 == 0 || ((DAT_000a8ec0 & 0xfffffffd) != 0x710)) && (uVar13 != 0)))) ||
     (iVar8 = access("/opt/ch/anko_adaptor",0), iVar8 != -1)) {
    FUN_00051604("storage_support");
    FUN_00051604("schedule_record");
    FUN_00051604("picture_capture");
  }
  if (DAT_000a8ec0 - 0x1001 < 3) {
    FUN_00051604("ajv_support");
  }
  if (DAT_000ac598 != 0 || DAT_000ac204 != 0) {
    FUN_00051604("ajv_support");
  }
  if (DAT_000a8ec0 == 0x1106) {
    iVar8 = access("/mnt/nand/cpu_speed.cfg",0);
    if (iVar8 == 0) {
      memset(&local_68,0,0x20);
      iVar8 = read_file_to_string("/mnt/nand/cpu_speed.cfg",&local_68,0x20);
      if (iVar8 < 1) goto LAB_00054d1c;
      iVar8 = atoi((char *)&local_68);
    }
    else {
LAB_00054d1c:
      iVar8 = 0x352;
    }
    mysystem("insmod /opt/ch/ko/hi3516a_pm.ko");
    mysystem("echo userspace > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
    mysystem_with_param("echo %d > /sys/devices/system/cpu/cpu0/cpufreq/scaling_setspeed",iVar8);
  }
  iVar8 = access("/opt/ch/flag.yuv",0);
  if (iVar8 == 0) {
    FUN_00051604("yuv_video");
    FUN_00051604("yuv_sizecfg");
  }
  iVar8 = sn_get_dsp_type();
  if ((((iVar8 == 0xbc2) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc4)) ||
      ((DAT_000a8ec0 - 0x698 < 0xc && ((int)((0x80dU >> (DAT_000a8ec0 - 0x698 & 0xff)) << 0x1f) < 0)
       ))) || (iVar8 = access("/opt/ch/flag.three_video",0), iVar8 == 0)) {
    FUN_00051604("three_video");
  }
  if (DAT_000a8ec0 - 0x703 < 0x1d) {
    uVar13 = 0x1080000fU >> (DAT_000a8ec0 - 0x703 & 0xff) & 1;
  }
  else {
    uVar13 = 0;
  }
  if ((((DAT_000a8ec0 == 0x802 || DAT_000a8ec0 == 0x622) || DAT_000a8ec0 - 0x68e < 8) ||
      (DAT_000a8ec0 - 0x688 & 0xffffff7f) == 0) || uVar13 != 0) {
    FUN_00051604("gun_dome_support");
  }
  FUN_00051604("forbid_video");
  if (DAT_000ac334 != 0) {
    FUN_00051604("light_action");
    FUN_00051604("high_ctrl_ptz");
  }
  if (DAT_000ac598 != 0) {
    FUN_00051604("light_action");
  }
  iVar8 = access("/opt/ch/flag.support.lightAction",0);
  if (iVar8 == 0) {
    FUN_00051604("light_action");
  }
  FUN_00051604("alarm_server");
  if (DAT_000a8ec0 == 0xb017) {
    FUN_00051604("only_audio");
  }
  FUN_00051604("mp4_support");
  FUN_00051604("audio_Repartition");
  local_68 = 0;
  memset(auStack_64,0,0x3c);
  read_file_to_string("/etc/filesys.ver",&local_68,0x40);
  pcVar10 = strstr((char *)&local_68,"_FIX");
  if (pcVar10 != (char *)0x0) {
    FUN_00051604("overlayfps");
  }
  pcVar10 = strstr((char *)&local_68,"_ESA");
  if (pcVar10 != (char *)0x0) {
    if (DAT_000a8ec0 == 0x1103) {
      mysystem("insmod /opt/ch/ko/hi3516a_pm.ko");
      mysystem("echo userspace > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
      mysystem("echo 850 > /sys/devices/system/cpu/cpu0/cpufreq/scaling_setspeed");
    }
    FUN_00051604("ESA_VERSION");
    FUN_00051604("ipaddrlimit");
    FUN_00051604("overlayfps");
    FUN_00051604("gainsetting");
    FUN_00051604("VideoShutter");
    if (DAT_000a8ec0 == 0xb101) {
      FUN_00051604("gpio_input");
    }
  }
  FUN_00051604("VideoShutter");
  if (DAT_000a8ec0 - 0x1002 < 2) {
    FUN_00051604("wcdma_support");
  }
  if (1 < DAT_000a8ec0 - 0x2001) {
    FUN_00051604("audio_support");
  }
  iVar8 = access("/opt/ch/flag.no.chinese",0);
  if (iVar8 == -1) {
    FUN_00051604(&DAT_0007db3c);
    FUN_00051604("zh_tw");
  }
  FUN_00051604(&DAT_0008542c);
  FUN_00051604("rs_py");
  FUN_00051604("ko-ko");
  pcVar10 = strstr(DAT_00053840,"zh_tw");
  if (pcVar10 == (char *)0x0) {
    pcVar10 = strstr(DAT_00054df8,"en_us");
    if (pcVar10 == (char *)0x0) goto LAB_00054fa6;
    pcVar10 = strstr(DAT_00054df8,"zh_cn");
    if (pcVar10 == (char *)0x0) {
      DebugPrint(8,7,"[%s:%u]Support en_us only.\n\n",DAT_00054dfc,0x2400);
      iVar8 = DAT_000b3620;
      uVar7 = DAT_00085430;
      *(undefined4 *)(DAT_000b3620 + 0x2104) = DAT_0008542c;
      *(undefined2 *)(iVar8 + 0x2108) = uVar7;
    }
  }
  else {
    pcVar10 = strstr(DAT_00053840,"en_us");
    if (pcVar10 == (char *)0x0) {
LAB_00054fa6:
      DebugPrint(8,7,"[%s:%u]Support zh_cn only.\n\n",DAT_0005536c,0x23f9);
      iVar8 = DAT_000b3620;
      uVar7 = DAT_0007db40;
      *(undefined4 *)(DAT_000b3620 + 0x2104) = DAT_0007db3c;
      *(undefined2 *)(iVar8 + 0x2108) = uVar7;
    }
  }
  iVar8 = access("/opt/ch/flag.no.storage",0);
  if (iVar8 != 0) {
    FUN_00051604("front_replay");
  }
  FUN_00051604("replay_bytime");
  FUN_00051604("media_capabiltiy");
  FUN_00051604("profile_setting");
  bVar17 = 0xa000 < DAT_000a8ec0;
  if (DAT_000a8ec0 != 0xa001) {
    bVar17 = 1 < DAT_000a8ec0 - 0xa003;
  }
  if (!bVar17 || (DAT_000a8ec0 == 0xa001 || DAT_000a8ec0 - 0xa003 == 2)) {
    FUN_00051604("wdr_setting");
  }
  FUN_00051604("video_mask");
  FUN_00051604("system_maitain");
  FUN_00051604("ircut_setting");
  FUN_00051604("SEARCH_WIFIAP");
  FUN_00051604("LONG_TITLE");
  FUN_00051604("timezone_halfhour");
  iVar8 = access("/opt/ch/flag.fortinet",0);
  if (iVar8 != 0) {
    FUN_00051604("p2p_cfg_support");
  }
  FUN_00051604("md_18x22");
  FUN_00051604("ONEVIDEOMASK");
  iVar8 = access("/opt/ch/flag.ftp_email",0);
  if ((iVar8 != -1) || (iVar8 = access("/mnt/nand/flag.ftp_email",0), iVar8 != -1)) {
    FUN_00051604("ftpemail_aj");
  }
  pcVar10 = strstr((char *)&local_68,"_Y_EN");
  if (pcVar10 != (char *)0x0) {
    FUN_00051604("only_18x22");
  }
  if (DAT_000a8ec0 == 0x1106) {
    FUN_00051604("ftpemail_aj");
  }
  pcVar10 = strstr((char *)&local_68,"_XZ");
  if ((pcVar10 != (char *)0x0) &&
     (DAT_000a8ec0 - 0x1103 < 3 || (DAT_000a8ec0 == 0xa003 || DAT_000a8ec0 == 0x1101))) {
    FUN_00051604("ftpemail_aj");
  }
  iVar8 = access("/opt/ch/gb28181_server",0);
  if (iVar8 != -1) {
    FUN_00051604("gb28181");
  }
  iVar8 = access("/opt/ch/gat1400_server",0);
  if (iVar8 != -1) {
    FUN_00051604("gat1400");
  }
  iVar8 = access("/opt/ch/ipvs_adaptor",0);
  if (((iVar8 != -1) || (iVar8 = access("/opt/ch/hb_server",0), iVar8 != -1)) ||
     (iVar8 = access("/opt/ch/mqtt_server",0), iVar8 != -1)) {
    FUN_00051604(&DAT_000855fc);
  }
  iVar8 = access("/opt/ch/rtmp_publish",0);
  if (iVar8 != -1) {
    FUN_00051604(&DAT_00085644);
    FUN_00051604("rtmp_timespan");
  }
  FUN_00051604("vencodemode_set");
  FUN_00051604("wdr_setting");
  bVar17 = DAT_000a8ec0 - 0x301 < 5;
  bVar1 = DAT_000a8ec0 - 0x351 < 2;
  bVar2 = DAT_000a8ec0 - 0x484 < 2;
  bVar16 = (DAT_000a8ec0 - 0x787 & 0xfffffffd) == 0;
  if (DAT_000a8ec0 - 0x684 < 0x18) {
    if (((bVar2 || (bVar1 || (DAT_000a8ec0 == 0x62b || bVar17))) || bVar16) ||
        (0xf4000fU >> (DAT_000a8ec0 - 0x684 & 0xff) & 1) != 0) goto LAB_00053766;
  }
  else {
    if ((DAT_000a8ec0 - 0x6a2 < 3 ||
        ((bVar1 || (bVar17 || ((DAT_000a8ec0 & 0xffffff7f) == 0x402 || DAT_000a8ec0 == 0x62b))) ||
        bVar2)) || bVar16) {
LAB_00053766:
      FUN_00051604("hdr_setting");
    }
    if ((DAT_000a8ec0 == 0x781) && (iVar8 = FileExist("/opt/ch/hw_vesion_1"), iVar8 != 0)) {
      FUN_00051604("hdr_setting");
    }
  }
  FUN_00051604("ledtype_set");
  FUN_00051604("ircut_leddelay");
  if (DAT_000ab9cc != 0) {
    FUN_00051604("ircut_ledmanualswitch");
  }
  iVar8 = FileExist("/tmp/flag.led.new");
  if ((iVar8 != 0) || (iVar8 = FileExist("/opt/ch/flag.led.new"), iVar8 != 0)) {
    FUN_00051604("ircut_ledmanualswitch");
  }
  uVar13 = (uint)(DAT_000a8ec0 - 0x6a5 < 6);
  if (DAT_000a8ec0 - 0x781 < 9) {
    uVar11 = 0;
    uVar13 = uVar13 | 0x1a3U >> (DAT_000a8ec0 - 0x781 & 0xff) & 1;
  }
  else if (DAT_000a8ec0 - 0x604 < 0x1e) {
    uVar11 = 0x24000001U >> (DAT_000a8ec0 - 0x604 & 0xff) & 1;
  }
  else {
    uVar11 = 0;
  }
  uVar4 = DAT_000a8ec0 - 0x718;
  if (1 < DAT_000a8ec0 - 0x718) {
    uVar4 = DAT_000a8ec0 - 0x623;
  }
  if (((((DAT_000a8ec0 & 0xfffffeff) - 0x61b < 2 || (DAT_000a8ec0 - 0x71e < 2 || uVar4 < 2)) ||
       uVar13 != 0) || uVar11 != 0) ||
     (iVar8 = FileExist("/opt/ch/flag.support_ircut_led_manual_switch"), iVar8 != 0)) {
    FUN_00051604("ircut_ledmanualswitch");
  }
  if (DAT_000a8ec0 - 0x407 < 2) {
    FUN_00051604("ircut_ledmanualswitch");
    FUN_00051604("ircut_leddelay");
    FUN_00051604("ledtype_set");
    FUN_00051604("vencodemode_set");
    FUN_00051604("active_call");
  }
  iVar8 = sn_get_dsp_type();
  if ((((iVar8 == 0xbc2) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc3)) ||
      (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc6)) ||
     ((iVar8 = sn_get_dsp_type(), iVar8 == 0xbc5 || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc8)))) {
    if (DAT_000ac334 == 0) {
      if (DAT_000a8ec0 - 0x683 < 0x13) {
        uVar13 = ~(0x7f821U >> (DAT_000a8ec0 - 0x683 & 0xff)) & 1;
      }
      else {
        uVar13 = 1;
      }
      if (DAT_000a8ec0 - 0x503 < 2) {
        uVar13 = 0;
      }
      if (uVar13 != 0) goto LAB_0005417c;
    }
    else if (DAT_000a8ec0 == 0x301) {
LAB_0005417c:
      FUN_00051604("fisheye_cover");
    }
    if ((DAT_000ac598 != 0) && (DAT_000a8ec0 == 0x68c)) {
      FUN_0004b460("fisheye_cover");
    }
  }
  else {
    iVar8 = sn_get_dsp_type();
    if (iVar8 == 0xbc9) {
      if ((DAT_000ac334 != 0) && (DAT_000a8ec0 == 0x69a)) {
        FUN_00051604("fisheye_cover");
      }
      if (DAT_000ac598 != 0) {
        FUN_00051604("fisheye_cover");
      }
    }
  }
  iVar8 = FileExist("/opt/ch/flag.support.rotate");
  if (iVar8 != 0) {
    GetVideoSize(param_1 + 0x575c,*(undefined1 *)(param_1 + 0x56bc),&local_70,&local_6c);
    iVar8 = sn_get_dsp_type();
    if ((iVar8 == 0xbc8) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc9)) {
      if (((0xa00 < local_70) || (0x5a0 < local_6c)) ||
         ((DAT_000a8ec0 - 0x683 < 0x13 &&
          ((int)((0x7f821U >> (DAT_000a8ec0 - 0x683 & 0xff)) << 0x1f) < 0)))) goto LAB_00054530;
    }
    else if ((0x780 < local_70) || (0x438 < local_6c)) {
LAB_00054530:
      FUN_0004b460("rotate_enable");
      goto LAB_000538b4;
    }
    FUN_00051604("rotate_enable");
  }
LAB_000538b4:
  pcVar10 = strstr(DAT_00053c08,"three_video");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x5864) = 0;
  }
  iVar8 = DAT_000b3620;
  pcVar10 = DAT_00053c08;
  iVar15 = 0;
  iVar14 = DAT_000b3620 + 0x5754;
  do {
    if (iVar15 == 2) {
      pcVar12 = strstr(pcVar10,"three_video");
      if (pcVar12 == (char *)0x0) {
        *(undefined4 *)(iVar8 + 0x5864) = 0;
        break;
      }
      pcVar12 = strstr(pcVar10,"forbid_video");
      if (pcVar12 != (char *)0x0) break;
LAB_000541d6:
      *(undefined4 *)(iVar14 + iVar15 * 0x88) = 1;
    }
    else {
      pcVar12 = strstr(pcVar10,"forbid_video");
      if (pcVar12 == (char *)0x0) goto LAB_000541d6;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 3);
  iVar8 = access("/opt/ch/VoiceTimeMp3/TIMENOW.mp3",0);
  if (iVar8 != -1) {
    FUN_00051604("alarmclock");
  }
  pcVar10 = strstr(DAT_00053c08,"ftpemail_aj");
  if (pcVar10 == (char *)0x0) {
    DebugPrint(8,7,"[%s:%u]Function %s is disabled for this device.\n\n",DAT_0005536c,0x26cd,
               "ftpemail_aj");
    *(undefined4 *)(param_1 + 0x3d6c) = 0;
    *(undefined4 *)(param_1 + 0x3d8c) = 0;
    *(undefined4 *)(param_1 + 0x3df4) = 0;
    *(undefined4 *)(param_1 + 0x3e14) = 0;
    *(undefined4 *)(param_1 + 0x3d68) = 0;
    *(undefined4 *)(param_1 + 0x3d88) = 0;
    *(undefined4 *)(param_1 + 0x3df0) = 0;
    *(undefined4 *)(param_1 + 0x3e10) = 0;
  }
  pcVar10 = strstr(DAT_00053c08,"rotate_enable");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x56cc) = 0;
  }
  pcVar10 = strstr(DAT_00053c08,"picture_capture");
  if (pcVar10 == (char *)0x0) {
    DebugPrint(8,7,"[%s:%u]Function %s is disabled for this device.\n\n",DAT_0005536c,0x26e2,
               "picture_capture");
    *(undefined4 *)(param_1 + 0x58fc) = 0;
    *(undefined4 *)(param_1 + 0x3d80) = 0;
    *(undefined4 *)(param_1 + 0x3d84) = 0;
    *(undefined4 *)(param_1 + 0x3e08) = 0;
    *(undefined4 *)(param_1 + 0x3e0c) = 0;
  }
  pcVar10 = strstr(DAT_00053c08,"evdo_support");
  if ((((pcVar10 == (char *)0x0) &&
       (pcVar10 = strstr(DAT_00054df8,"wcdma_support"), pcVar10 == (char *)0x0)) &&
      (pcVar10 = strstr(DAT_00054df8,"tdscdma_support"), pcVar10 == (char *)0x0)) &&
     (DebugPrint(8,7,"[%s:%u]Function 3G is disabled for this device.\n\n",DAT_00054dfc,0x26f2),
     *(int *)(param_1 + 0x483c) != 0)) {
    *(undefined4 *)(param_1 + 0x483c) = 0;
  }
  pcVar10 = strstr(DAT_00053c08,"ipaddrlimit");
  if ((pcVar10 == (char *)0x0) && (*(int *)(param_1 + 0x2130) != 0)) {
    DebugPrint(8,7,"[%s:%u]Function IP limitation is disabled for this device.\n\n",DAT_00054a5c,
               0x26fe);
    *(undefined4 *)(param_1 + 0x2130) = 0;
  }
  pcVar10 = strstr(DAT_00053c08,"overlayfps");
  if (pcVar10 == (char *)0x0) {
    *(undefined2 *)(param_1 + 0x5a14) = 0;
  }
  pcVar10 = strstr(DAT_00053c08,"gainsetting");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x56e4) = 0;
  }
  pcVar10 = strstr(DAT_00053c08,"VideoPD");
  pcVar12 = strstr(DAT_00053c08,"AlarmVG");
  if (pcVar10 == (char *)0x0) {
LAB_000542c4:
    if ((pcVar12 == (char *)0x0) &&
       (pcVar10 = strstr(DAT_000545b0,"AlarmPdVG"), pcVar10 == (char *)0x0)) {
      memset((void *)(param_1 + 0x61e8),0,500);
    }
  }
  else if (pcVar12 == (char *)0x0) {
    if ((DAT_000ab9cc == 0) || (DAT_000a8ec0 != 0x688)) {
      FUN_00051604("AlarmPdVG");
      if (DAT_000a8ec0 - 0x703 < 0x1d) {
        uVar13 = 0x1080000fU >> (DAT_000a8ec0 - 0x703 & 0xff) & 1;
      }
      else {
        uVar13 = 0;
      }
      if (uVar13 != 0 ||
          ((DAT_000a8ec0 - 0x68e < 8 || (DAT_000a8ec0 == 0x802 || DAT_000a8ec0 == 0x622)) ||
          (DAT_000a8ec0 - 0x688 & 0xffffff7f) == 0)) goto LAB_0005428a;
    }
    else {
LAB_0005428a:
      FUN_0004b460("AlarmPdVG");
      FUN_00051604("ptz_re_calibrat");
    }
    iVar8 = FileExist("/opt/ch/flag.remove_function_gate");
    if (iVar8 != 0) {
      FUN_0004b460("AlarmPdVG");
    }
    pcVar12 = strstr(DAT_000545b0,"AlarmVG");
    goto LAB_000542c4;
  }
  pcVar10 = strstr(DAT_00053c08,"AlarmRegionAI");
  if (pcVar10 == (char *)0x0) {
    memset((void *)(param_1 + 0x63dc),0,0x204);
  }
  pcVar10 = strstr(DAT_00053c08,"VideoPD");
  if ((pcVar10 == (char *)0x0) && (iVar8 = access("/data/mcv.ele_gas",0), iVar8 != 0)) {
    *(undefined4 *)(param_1 + 0x5fdc) = 0;
  }
  pcVar10 = strstr(DAT_00053c08,"temp_humidity");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x78c8) = 0;
    *(undefined4 *)(param_1 + 0x78cc) = 0;
    *(undefined4 *)(param_1 + 0x78dc) = 0;
    *(undefined4 *)(param_1 + 0x78e0) = 0;
  }
  pcVar10 = strstr(DAT_00053c08,"face_detect");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x65e0) = 0;
  }
  FUN_00051604("ssl_email");
  iVar8 = access("/opt/ch/flag.pre.record",0);
  if (iVar8 != -1) {
    FUN_00051604("pre_record");
  }
  iVar8 = access("/opt/ch/flag.osd.gb28181",0);
  if (iVar8 != -1) {
    FUN_00051604("osd_gb");
  }
  iVar8 = access("/opt/ch/smart265.flag",0);
  if (iVar8 != -1) {
    FUN_00051604("smart265");
  }
  iVar8 = access("/opt/ch/flag.zoom_track",0);
  if ((iVar8 != -1) || (iVar8 = access("/opt/ch/flag.zoom_track_noptz",0), iVar8 != -1)) {
    FUN_00051604("zoom_track");
  }
  iVar8 = access("/opt/ch/flag.digital_zoom",0);
  if (iVar8 != -1) {
    FUN_00051604("zoom_track");
  }
  iVar8 = access("/opt/ch/flag.only_digital_zoom",0);
  if (iVar8 != -1) {
    FUN_00051604("ptz_only_digit_zoom");
  }
  iVar8 = access("/opt/ch/flag.ptz_scan_cfg",0);
  if (iVar8 != -1) {
    FUN_00051604("ptz_scan_cfg");
  }
  if (DAT_000a8ec0 - 0x1a7 < 4 ||
      (DAT_000a8ec0 == 0x629 || (DAT_000a8ec0 == 0x6aa || DAT_000a8ec0 == 0x624))) {
    FUN_00051604("ele_zoom");
  }
  else if (DAT_000a8ec0 == 0x1a4) {
    FUN_00051604("zoom_track");
  }
  if (DAT_000a8ec0 == 0x488) {
    FUN_00051604("twolens_stitch");
    pcVar10 = strstr((char *)&local_68,"_FN");
    if (pcVar10 == (char *)0x0) {
      FUN_00051604("audio_aisetting");
    }
    FUN_0004b460("video_crop");
    if (DAT_000ac334 == 0) {
      FUN_0004b460("aec_enable");
    }
  }
  if (DAT_000a8ec0 - 0x503 < 3) {
    FUN_00051604("twolens_stitch");
    FUN_0004b460("video_crop");
    if (DAT_000ac570 != 0) goto LAB_000545d6;
LAB_00053b7e:
    iVar8 = FileExist("/mnt/nand/cust/default_2_priority.xml");
  }
  else {
    if (DAT_000ac570 == 0) goto LAB_00053b7e;
LAB_000545d6:
    FUN_0004b460("picture_capture");
    iVar8 = access("/opt/ch/hx_version.flag",0);
    if (iVar8 == 0) {
      FUN_0004b460("af_setting");
      FUN_0004b460("audio_support");
      FUN_0004b460("gpio_input");
      FUN_0004b460("gpio_output");
      FUN_0004b460("audio_action");
      FUN_0004b460("audio_action_daynight");
      FUN_0004b460("one_output");
      FUN_0004b460("two_output");
      FUN_0004b460("three_output");
      FUN_0004b460("four_output");
      FUN_0004b460("one_input");
      FUN_0004b460("two_input");
      FUN_0004b460("three_input");
      FUN_0004b460("four_input");
      FUN_0004b460("io_output_set");
    }
    iVar8 = access("/opt/ch/hx_show_audio.flag",0);
    if (iVar8 != 0) goto LAB_00053b7e;
    FUN_00051604("af_setting");
    FUN_00051604("audio_support");
    FUN_00051604("audio_action_daynight");
    iVar8 = FileExist("/mnt/nand/cust/default_2_priority.xml");
  }
  if ((iVar8 != 0) &&
     ((iVar8 = FileExist("/mnt/nand/cust/first_init_second_config_flag"), iVar8 != 0 ||
      (((iVar8 = FileExist("/tmp/flag.mode.factory"), iVar8 == 0 &&
        (iVar8 = FileExist("/mnt/nand/cust/specific.xml"), iVar8 == 0)) &&
       (iVar8 = FileExist("/mnt/nand/cust/config.default.xml"), iVar8 == 0)))))) {
    __ptr = calloc(0x3b4,1);
    Init_SecondConfig();
    if (*(int *)((int)__ptr + 0x388) == 1) {
      FUN_00051604("ptz_control");
    }
    else if (*(int *)((int)__ptr + 0x388) == 0) {
      FUN_0004b460("ptz_control");
    }
    if (*(int *)((int)__ptr + 0x38c) == 1) {
      FUN_00051604("ptz_zoom");
    }
    else if (*(int *)((int)__ptr + 0x38c) == 0) {
      FUN_0004b460("ptz_zoom");
    }
    if (*(int *)((int)__ptr + 0x390) == 1) {
      FUN_00051604("ptz_focus");
      FUN_00051604("ptz_iris");
    }
    else if (*(int *)((int)__ptr + 0x390) == 0) {
      FUN_0004b460("ptz_focus");
      FUN_0004b460("ptz_iris");
    }
    if (*(uint *)((int)__ptr + 0x39c) < 2) {
      FUN_00051604("privacy_protection");
    }
    else if (*(uint *)((int)__ptr + 0x39c) == 0xffffffff) {
      FUN_0004b460("privacy_protection");
    }
    if (*(int *)((int)__ptr + 0x3a4) == 1) {
      FUN_00051604("low_power_support");
      puts("Capability_add_function low");
    }
    else if (*(int *)((int)__ptr + 0x3a4) == 0) {
      FUN_0004b460("low_power_support");
      puts("Capability_remove_function low");
    }
    if (*(int *)((int)__ptr + 0x394) == 1) {
      FUN_00051604("humantrack");
    }
    else if (*(int *)((int)__ptr + 0x394) == 0) {
      FUN_0004b460("humantrack");
    }
    iVar8 = *(int *)((int)__ptr + 0x3a8);
    if (iVar8 != 0xffff) {
      if (iVar8 == 1) {
        *(undefined4 *)(DAT_000b3620 + 0x572c) = 0;
        FUN_00051604("ir_led_panel");
        FUN_0004b460("white_led_panel");
        FUN_0004b460("double_led_panel");
      }
      else if (iVar8 == 2) {
        *(undefined4 *)(DAT_000b3620 + 0x572c) = 1;
        FUN_00051604("white_led_panel");
        FUN_0004b460("ir_led_panel");
        FUN_0004b460("double_led_panel");
      }
      else if (iVar8 == 3) {
        FUN_00051604("double_led_panel");
        FUN_0004b460("ir_led_panel");
        FUN_0004b460("white_led_panel");
      }
    }
    if (*(int *)((int)__ptr + 0x3b0) != 0xffff) {
      if (*(int *)((int)__ptr + 0x3b0) == 1) {
        DebugPrint(8,7,"[%s:%u]#########Street lamp capability enable.\n\n",DAT_0005536c,0x2824);
        iVar8 = FileExist("/mnt/nand/flag.street_lamp");
        if (iVar8 == 0) {
          mysystem("touch /mnt/nand/flag.street_lamp");
        }
        FUN_00051604("streetlamp");
      }
      else {
        DebugPrint(8,7,"[%s:%u]#########Street lamp capability disable.\n\n",DAT_00054a5c,0x282d);
        mysystem("rm /mnt/nand/flag.street_lamp");
        FUN_0004b460("streetlamp");
      }
    }
    free(__ptr);
    FUN_0004b5d4();
    DebugPrint(8,7,"[%s:%u]g_system_control_string:%s\n\n",DAT_00054a5c,0x2846,DAT_00054a60);
  }
  uVar13 = (uint)(DAT_000a8ec0 == 0x604);
  if (DAT_000a8ec0 - 0x68b < 0x20) {
    uVar11 = 0;
    uVar13 = uVar13 | 0x9c000005U >> (DAT_000a8ec0 - 0x68b & 0xff) & 1;
  }
  else if (DAT_000a8ec0 - 0x61e < 0xc) {
    uVar11 = 0x969U >> (DAT_000a8ec0 - 0x61e & 0xff) & 1;
  }
  else {
    uVar11 = 0;
  }
  if ((((((DAT_000a8ec0 == 0x786 || DAT_000a8ec0 == 0x781) || uVar13 != 0) || uVar11 != 0) ||
       (iVar8 = access("/opt/ch/flag.led.j40",0), iVar8 == 0)) || (DAT_000ac5a0 != 0)) &&
     ((DAT_000ac59c == 0 && DAT_000ac598 == 0 &&
      (iVar8 = FileExist("/opt/ch/flag.support.ir.white.led"), iVar8 == 0)))) {
    FUN_00051604("white_led_panel");
    FUN_0004b460("ir_led_panel");
    FUN_0004b460("double_led_panel");
    *(undefined4 *)(DAT_000b3620 + 0x572c) = 1;
  }
  if ((((DAT_000a8ec0 == 0x60e) || (DAT_000ac5a4 != 0)) && (DAT_000ab9cc != 0)) ||
     (iVar8 = access("/opt/ch/flag.battery_mode",0), iVar8 == 0)) {
    FUN_00051604("battery_mode");
    DAT_000ac5a8 = 1;
  }
  if (((DAT_000ac5a4 != 0) && (DAT_000ab9cc != 0)) ||
     (iVar8 = access("/opt/ch/high_speed_ptz",0), iVar8 == 0)) {
    FUN_00051604("high_speed_ptz");
  }
  if (DAT_000a8ec0 - 0x716 < 0x1a) {
    if ((int)((0x3001001U >> (DAT_000a8ec0 - 0x716 & 0xff)) << 0x1f) < 0) {
      FUN_00051604("aov_support");
    }
    if (DAT_000a8ec0 == 0x71a) {
      FUN_00051604("aov_support");
    }
  }
  iVar8 = access("/opt/ch/alarmlist",0);
  if (iVar8 == 0) {
    FUN_00051604("record_alarmlist_support");
  }
  FUN_000516dc();
  if ((DAT_000a8ec0 == 0x71c) && (DAT_000ac55c != 0)) {
    FUN_0004b460("alarm_led");
  }
  iVar8 = access("/opt/ch/flag.usb.4g",0);
  if ((((iVar8 == 0) || (iVar8 = access("/opt/ch/flag.yuga.4g",0), iVar8 == 0)) ||
      (iVar8 = access("/opt/ch/flag.quectel.4g",0), iVar8 == 0)) ||
     ((iVar8 = access("/opt/ch/flag.simcom.4g",0), iVar8 == 0 ||
      (iVar8 = access("/opt/ch/flag.um.4g",0), iVar8 == 0)))) {
    FUN_0004b460("SEARCH_WIFIAP");
    FUN_0004b460("ipaddrlimit");
    FUN_0004b460("ssl_email");
    FUN_0004b460("alarm_server");
    FUN_0004b460("humanmosic");
    FUN_0004b460("video_qos");
  }
  if (DAT_000a8ec0 == 0x783) {
    FUN_0004b460("pd_polygon_area");
    FUN_0004b460("AlarmPdVG");
    FUN_0004b460("alarm_cover");
  }
  iVar8 = 4;
  pcVar10 = strstr(DAT_00053ff4,"four_input");
  if (pcVar10 == (char *)0x0) {
    iVar8 = 3;
    pcVar10 = strstr(DAT_00054a60,"three_input");
    if (pcVar10 != (char *)0x0) goto LAB_00053d2a;
    iVar8 = 2;
    pcVar10 = strstr(DAT_00054a60,"two_input");
    if (pcVar10 != (char *)0x0) goto LAB_00053d2a;
    pcVar10 = strstr(DAT_00054a60,"one_input");
    *(uint *)(param_1 + 0x69d4) = (uint)(pcVar10 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_00053d5e;
    iVar8 = 1;
  }
  else {
LAB_00053d2a:
    *(int *)(param_1 + 0x69d4) = iVar8;
  }
  pcVar10 = (char *)(param_1 + 0x6a00);
  iVar14 = 0;
  do {
    iVar15 = iVar14 + 1;
    *(int *)(pcVar10 + -0x24) = iVar15;
    if (1 < *(uint *)(pcVar10 + -0x28)) {
      pcVar10[-0xffffffff00000028] = '\0';
      pcVar10[-0xffffffff00000027] = '\0';
      pcVar10[-0xffffffff00000026] = '\0';
      pcVar10[-0xffffffff00000025] = '\0';
    }
    cVar6 = s_HIGH_LOW_0007c2a4[8];
    uVar9 = s_HIGH_LOW_0007c2a4._4_4_;
    if (*pcVar10 == '\0') {
      *(undefined4 *)pcVar10 = s_HIGH_LOW_0007c2a4._0_4_;
      *(undefined4 *)(pcVar10 + 4) = uVar9;
      pcVar10[8] = cVar6;
    }
    bVar17 = SBORROW4(iVar15,3);
    iVar3 = iVar14 + -2;
    if (iVar15 < 4) {
      bVar17 = SBORROW4(iVar15,iVar8);
      iVar3 = iVar15 - iVar8;
    }
    pcVar10 = pcVar10 + 0x210;
    iVar14 = iVar15;
  } while (iVar3 < 0 != bVar17);
LAB_00053d5e:
  pcVar10 = strstr(DAT_00053ff4,"four_output");
  if (pcVar10 == (char *)0x0) {
    pcVar10 = strstr(DAT_00054a60,"three_output");
    if (pcVar10 == (char *)0x0) {
      pcVar10 = strstr(DAT_00055370,"two_output");
      if (pcVar10 == (char *)0x0) {
        pcVar10 = strstr(DAT_00055560,"one_output");
        uVar13 = (uint)(pcVar10 != (char *)0x0);
      }
      else {
        uVar13 = 2;
      }
    }
    else {
      uVar13 = 3;
    }
  }
  else {
    uVar13 = 4;
  }
  iVar8 = 0;
  do {
    if ((int)uVar13 <= iVar8) {
      *(undefined4 *)(param_1 + 0x73f0 + iVar8 * 8) = 0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  iVar8 = param_1 + 0x6a40;
  do {
    iVar14 = 0;
    do {
      if ((int)uVar13 <= iVar14) {
        *(undefined4 *)(iVar8 + iVar14 * 8) = 0;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 4);
    iVar8 = iVar8 + 0x210;
  } while (param_1 + 0x7280 != iVar8);
  iVar8 = 0;
  do {
    if ((int)uVar13 <= iVar8) {
      *(undefined4 *)(param_1 + 0x75dc + iVar8 * 8) = 0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  iVar8 = 0;
  do {
    if ((int)uVar13 <= iVar8) {
      *(undefined4 *)(param_1 + 0x762c + iVar8 * 8) = 0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  iVar8 = 0;
  do {
    if ((int)uVar13 <= iVar8) {
      *(undefined4 *)(param_1 + 0x7700 + iVar8 * 8) = 0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  iVar8 = 0;
  do {
    if ((int)uVar13 <= iVar8) {
      *(undefined4 *)(param_1 + 0x6004 + iVar8 * 8) = 0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  iVar8 = 0;
  do {
    if ((int)uVar13 <= iVar8) {
      *(undefined4 *)(param_1 + 0x62f8 + iVar8 * 8) = 0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  iVar8 = 0;
  do {
    if ((int)uVar13 <= iVar8) {
      *(undefined4 *)(param_1 + 0x6600 + iVar8 * 8) = 0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  pcVar10 = strstr(DAT_00053ff4,"pd_polygon_area");
  if ((pcVar10 != (char *)0x0) && (*(int *)(param_1 + 0x61c4) == 0)) {
    iVar8 = *(int *)(param_1 + 0x5fe8);
    iVar15 = *(int *)(param_1 + 0x5fec);
    *(undefined4 *)(param_1 + 0x61c4) = 4;
    *(int *)(param_1 + 0x6174) = iVar8;
    iVar14 = iVar8 + *(int *)(param_1 + 0x5ff0);
    *(int *)(param_1 + 0x617c) = iVar14;
    *(int *)(param_1 + 0x6178) = iVar15;
    *(int *)(param_1 + 0x6180) = iVar15;
    *(int *)(param_1 + 0x618c) = iVar8;
    *(int *)(param_1 + 0x6184) = iVar14;
    iVar15 = iVar15 + *(int *)(param_1 + 0x5ff4);
    *(int *)(param_1 + 0x6188) = iVar15;
    *(int *)(param_1 + 0x6190) = iVar15;
  }
  pcVar10 = strstr(DAT_00053ff4,"wdr_setting");
  if (pcVar10 == (char *)0x0) {
    if (0 < *(int *)(DAT_000b3620 + 0x56ec)) {
      *(undefined4 *)(DAT_000b3620 + 0x56ec) = 0;
    }
  }
  else {
    pcVar10 = strstr(DAT_00053ff4,"hdr_setting");
    if ((pcVar10 == (char *)0x0) && (*(int *)(DAT_000b3620 + 0x56ec) == 3)) {
      *(undefined4 *)(DAT_000b3620 + 0x56ec) = 1;
    }
  }
  pcVar10 = strstr(DAT_00053ff4,"yuv_sizecfg");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(DAT_000b3620 + 0x5f68) = 0;
  }
  FUN_000517d4();
  pcVar10 = strstr(DAT_00053ff4,"VehicleCar");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b3620 + 0x5fe4) = *(uint *)(DAT_000b3620 + 0x5fe4) & 0xfffffffe;
  }
  pcVar10 = strstr(DAT_00053ff4,"VehicleMoto");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b3620 + 0x5fe4) = *(uint *)(DAT_000b3620 + 0x5fe4) & 0xfffffffd;
  }
  pcVar10 = strstr(DAT_00053ff4,"VehicleElectricbicycle");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b3620 + 0x5fe4) = *(uint *)(DAT_000b3620 + 0x5fe4) & 0xfffffffb;
  }
  pcVar10 = strstr(DAT_00053ff4,"VehicleBicycle");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b3620 + 0x5fe4) = *(uint *)(DAT_000b3620 + 0x5fe4) & 0xfffffff7;
  }
  pcVar10 = strstr(DAT_00053ff4,"VideoPD");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b3620 + 0x5fe4) = *(uint *)(DAT_000b3620 + 0x5fe4) & 0xffffffef;
  }
  pcVar10 = strstr(DAT_00053ff4,"face_detect");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b3620 + 0x5fe4) = *(uint *)(DAT_000b3620 + 0x5fe4) & 0xffffffdf;
  }
  pcVar10 = strstr(DAT_00053ff4,"fisheye_cover");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(DAT_000b3620 + 0x5738) = 0;
  }
  pcVar10 = strstr(DAT_00053ff4,"video_qos");
  iVar8 = DAT_000b3620;
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(DAT_000b3620 + 0x2164) = 0;
    *(undefined4 *)(iVar8 + 0x2168) = 0;
    *(undefined4 *)(iVar8 + 0x216c) = 0;
    *(undefined4 *)(iVar8 + 0x2170) = 0;
  }
  pcVar10 = strstr(DAT_00053ff4,"ptz_autohome");
  if (pcVar10 == (char *)0x0) {
    *(undefined1 *)(DAT_000b3620 + 0x71) = 1;
  }
  pcVar10 = strstr(DAT_00053ff4,"ptz_autocali");
  if (pcVar10 == (char *)0x0) {
    *(undefined1 *)(DAT_000b3620 + 0x72) = 1;
  }
  pcVar10 = strstr(DAT_00053ff4,"ptz_lowpower");
  if (pcVar10 == (char *)0x0) {
    *(undefined1 *)(DAT_000b3620 + 0x73) = 0;
    return 1;
  }
  return 1;
}


