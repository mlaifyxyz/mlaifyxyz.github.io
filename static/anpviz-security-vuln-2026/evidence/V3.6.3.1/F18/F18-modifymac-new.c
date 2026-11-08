/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 00056844 */
/* function FUN_00056844 @ 00056844 */

undefined4 FUN_00056844(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  void *__ptr;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  int local_70;
  int local_6c;
  char local_68 [68];
  
  DAT_000b1890 = 0;
  DAT_000b208f = 0;
  FUN_000562b8();
  FUN_00055d50(param_1);
  FUN_00055ab8(param_1);
  FUN_00055b7c(param_1);
  FUN_00055760(param_1);
  FUN_0004f62c("domains_check");
  FUN_0004f62c("arming_daynight");
  FUN_0004f62c("alarm_arming");
  FUN_0004f62c("device_report");
  FUN_0004f62c("create_timelapse");
  FUN_0004f62c("export_record");
  FUN_0004f62c("part_restore");
  FUN_0004f62c("arming_bytime");
  FUN_0004f62c("arming_audiodesc");
  FUN_0004f62c("ioout_arming");
  FUN_0004f62c("P2PNEWROOT");
  FUN_0004f62c("fixipcfg");
  iVar8 = FileExist("/opt/ch/aiot_server");
  if ((iVar8 != 0) && (DAT_000adfa4 != 0x716)) {
    FUN_0004f62c("prop#");
  }
  FUN_0004f62c(&DAT_00089f9c);
  FUN_0004f62c("video_qos");
  FUN_0004f62c("humanmosic");
  iVar8 = FileExist("/opt/ch/audioprompt");
  if (iVar8 != 0) {
    FUN_0004f62c("audioprompt");
  }
  iVar8 = sn_get_dsp_type();
  if (((iVar8 == 0xbc8) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc9)) ||
     (iVar8 = sn_get_dsp_type(), iVar8 == 0xbca)) {
    FUN_0004f62c("hd_disablemd");
    iVar8 = FileExist("/opt/ch/ddns_speco");
  }
  else {
    iVar8 = FileExist("/opt/ch/ddns_speco");
  }
  if (iVar8 != 0) {
    FUN_0004f62c("ddns_cfg");
  }
  iVar8 = FileExist("/opt/ch/aiot_server");
  if (iVar8 != 0) {
    if (DAT_000adfa4 != 0x716) {
      FUN_0004f62c("alarm_push_cloud");
    }
    FUN_0004f62c("connpre");
  }
  if (DAT_000adfa4 == 0x72f) {
    FUN_0004f62c("fixsd");
  }
  if ((DAT_000adfa4 - 0x716 < 0x1a) &&
     ((int)((0x3001011U >> (DAT_000adfa4 - 0x716 & 0xff)) << 0x1f) < 0)) {
    FUN_0004f62c("ptz_lowpower");
  }
  iVar8 = IsMotorVersion();
  if (iVar8 != 0) {
    if (DAT_000b23dc == 0 && DAT_000b1860 == 0) {
      FUN_0004f62c("ptz_autocali");
    }
    iVar8 = FileExist("/opt/ch/dual_sensor.flag");
    if ((DAT_000b1860 == 0 && iVar8 == 0) &&
       ((0x19 < DAT_000adfa4 - 0x716 ||
        (-1 < (int)((0x3001001U >> (DAT_000adfa4 - 0x716 & 0xff)) << 0x1f))))) {
      FUN_0004f62c("ptz_autohome");
    }
  }
  iVar8 = FileExist("/opt/ch/flag.location");
  if (iVar8 != 0) {
    FUN_0004f62c("location");
  }
  iVar8 = FileExist("/opt/ch/flag.led_cfg_new");
  if (iVar8 != 0) {
    FUN_0004f62c("led_new");
  }
  FUN_0004f62c("dhcp_fixtime");
  FUN_0004f62c("multicast");
  FUN_0004f62c("OSD_ANYPOS");
  FUN_0004f62c("ipaddrlimit");
  uVar13 = (uint)(DAT_000adfa4 - 0x1ae < 4);
  if (DAT_000adfa4 - 0x707 < 0x1b) {
    uVar13 = uVar13 | 0x40041c1U >> (DAT_000adfa4 - 0x707 & 0xff) & 1;
  }
  if ((uVar13 != 0) || (iVar8 = GetLedBrGpioPort(), iVar8 != -1)) {
    uVar9 = GetLedBrGpioPort();
    DebugPrint(8,7,"[%s:%u]GetLedBrGpioPort=%d\n",DAT_00056dc4,0x1f86,uVar9);
    FUN_0004f62c("alarm_led");
  }
  if (DAT_000adfa4 - 0x703 < 0x11) {
    uVar13 = 0x100efU >> (DAT_000adfa4 - 0x703 & 0xff) & 1;
  }
  else {
    uVar13 = 0;
  }
  uVar17 = 0x6ad;
  if (((DAT_000adfa4 - 0x622 & 0xfffffffd) == 0 ||
      ((DAT_000adfa4 == 0x6ad || (DAT_000adfa4 == 0x734 || DAT_000adfa4 == 0x689)) ||
      DAT_000adfa4 - 0x68f < 8)) || uVar13 != 0) {
    FUN_0004f62c("alarm_led");
    iVar8 = access("/opt/ch/flag.street_lamp",0);
    if ((iVar8 == 0) || (iVar8 = access("/mnt/nand/flag.street_lamp",0), iVar8 == 0)) {
      FUN_0004f690("alarm_led");
    }
  }
  if (DAT_000b1860 != 0) {
    FUN_0004f62c("alarm_led");
  }
  if ((DAT_000b23e0 != 0) &&
     (DAT_000adfa4 == 0x614 ||
      (DAT_000adfa4 == 0x715 || (DAT_000adfa4 == 0x60e || DAT_000adfa4 == 0x1b0)))) {
    FUN_0004f690("alarm_led");
  }
  FUN_0004f62c("be_set_mtu");
  if (DAT_000adfa4 == 0x1ae || DAT_000adfa4 == 0x199) {
    FUN_0004f62c("manual_set_ptz_speed");
  }
  if (DAT_000b23e4 == 1) {
    FUN_0004f62c("cat_manual_set_ptz_speed");
  }
  FUN_0004f62c("ptz3dlocate");
  iVar8 = access("/opt/ch/af_protocol_4_flag",0);
  if (iVar8 != -1) {
    FUN_0004f62c("af_protocol_4");
  }
  iVar8 = access("/opt/ch/support_ptz_firmware_update.flag",0);
  if (iVar8 != -1) {
    FUN_0004f62c("ptz_firmware_update");
  }
  iVar8 = access("/opt/ch/flag.alarm_pd_semsivity_new",0);
  if (iVar8 != -1) {
    FUN_0004f62c("aiobjectsensivity");
  }
  iVar8 = access("/opt/ch/flag.street_lamp",0);
  if (iVar8 != -1) {
    FUN_0004f62c("streetlamp");
  }
  if (DAT_000b23dc == 0) {
    if (DAT_000b1860 == 0 && DAT_000b23e8 == 0) goto LAB_000588a4;
  }
  else {
    FUN_0004f62c("af_protocol_5");
    if (DAT_000b1860 == 0 && DAT_000b23e8 == 0) {
LAB_000588a4:
      FUN_0004f62c("hikconfig");
    }
  }
  FUN_0004f62c("commenable");
  FUN_0004f62c("TimeSpanNew");
  FUN_0004f62c("scare_off");
  FUN_0004f62c("cloud_authcode");
  if (DAT_000adfa4 == 0x1ad) {
    FUN_0004f62c("pilot_power_light");
  }
  iVar8 = access("/opt/ch/flag.https",0);
  if (iVar8 != -1) {
    FUN_0004f62c("with_https");
  }
  iVar8 = access("/opt/ch/h5live_server",0);
  if (iVar8 != -1) {
    FUN_0004f62c("with_h5");
  }
  iVar8 = access("/opt/ch/dot_server",0);
  if (iVar8 != -1) {
    FUN_0004f62c("audio_aisetting");
    FUN_0004f62c("mute_ptz_turn");
  }
  iVar8 = access("/opt/ch/flag.only_sup_dzoom",0);
  if (iVar8 != -1) {
    FUN_0004f62c("ptz_only_digit_zoom");
  }
  iVar8 = access("/opt/ch/disable_vdf.flag",0);
  if (iVar8 != 0) {
    iVar8 = sn_get_dsp_type();
    if ((((iVar8 == 0xbd0) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbcd)) ||
        (iVar8 = sn_get_dsp_type(), iVar8 == 0xbce)) ||
       ((iVar8 = sn_get_dsp_type(), iVar8 == 0xbd1 || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbd2))))
    {
      DebugPrint(8,7,"[%s:%u]not support alarm cover\n\n",DAT_00058c04,0x2017);
    }
    else {
      FUN_0004f62c("alarm_cover");
    }
  }
  FUN_0004f62c("with_qpsetting");
  iVar8 = access("/opt/ch/flag.fdfr",0);
  if (iVar8 == 0) {
    FUN_0004f62c("face_detect");
    FUN_0004f62c("face_recognize");
  }
  if (DAT_000b23ec != 0) {
    FUN_0004f62c("ircut_by_adc");
  }
  iVar8 = access("/opt/ch/ex_server",0);
  if (iVar8 != -1) {
    FUN_0004f62c("dhconfig");
  }
  FUN_0004f62c("af_setting");
  FUN_0004f62c("af_coordinate");
  FUN_0004f62c("video_crop");
  FUN_0004f62c("antiflicker");
  if (DAT_000adfa4 == 0x1101) {
    FUN_0004f62c("ispmode");
  }
  iVar8 = access("/opt/ch/flag.voip",0);
  if (iVar8 != -1) {
    FUN_0004f62c(&DAT_0008a3c8);
  }
  iVar8 = access("/opt/ch/flag.modifymac",0);
  if (iVar8 != -1) {
    FUN_0004f62c("ModifyMac");
  }
  iVar8 = access("/opt/ch/upnp_port",0);
  if (iVar8 != -1) {
    FUN_0004f62c("enable_upnp");
  }
  iVar8 = access("/opt/ch/flag.pd",0);
  if (((iVar8 == 0) || (iVar8 = access("/opt/ch/flag.pd.madp",0), iVar8 == 0)) &&
     (iVar8 = access("/tmp/flag.dzoom.4mp",0), iVar8 != 0)) {
    FUN_0004f62c("VideoPD");
    iVar8 = access("/opt/ch/flag.ai.fix.icon",0);
    if (iVar8 != 0) {
      FUN_0004f62c("pd2rectconf");
    }
    if (DAT_000adfa4 - 0x199 < 0x19) {
      uVar13 = 0x1fafa21U >> (DAT_000adfa4 - 0x199 & 0xff) & 1;
LAB_00058f7e:
      uVar14 = DAT_000adfa4 - 0x713;
      bVar19 = DAT_000adfa4 - 0x701 < 0xf;
      bVar1 = DAT_000adfa4 - 0x68f < 8;
      bVar2 = DAT_000adfa4 - 0x6ab < 3;
      if (uVar14 < 0x20) {
        uVar17 = 0xd97bdfff;
      }
      bVar3 = DAT_000adfa4 == 0x689;
      bVar4 = DAT_000adfa4 == 0x782;
      if (uVar14 < 0x20) {
        uVar17 = uVar17 >> (uVar14 & 0xff);
      }
      bVar5 = DAT_000adfa4 == 0x734;
      if (uVar14 < 0x20) {
        uVar17 = uVar17 & 1;
      }
      else {
        uVar17 = 0;
      }
    }
    else {
      if (0x1e < DAT_000adfa4 - 0x606) {
        uVar13 = 0;
        goto LAB_00058f7e;
      }
      bVar19 = false;
      bVar1 = false;
      uVar13 = 0x507fdfc3U >> (DAT_000adfa4 - 0x606 & 0xff) & 1;
      bVar2 = false;
      bVar4 = false;
      bVar5 = false;
      bVar3 = false;
      uVar17 = 0;
    }
    bVar2 = (bool)(bVar1 | bVar19 | bVar5 | bVar3 | bVar4 | bVar2);
    if (DAT_000adfa4 - 0x629 < 2) {
      bVar2 = true;
    }
    if (uVar17 != 0 || (bVar2 || uVar13 != 0)) {
      FUN_0004f62c("humantrack");
    }
    iVar8 = access("/opt/ch/flag.pd.madp",0);
    if (iVar8 == 0) {
      FUN_0004f62c("pd_madp");
    }
  }
  if (DAT_000b2344 != 0) {
    FUN_0004f62c("humantrack");
  }
  if ((DAT_000b23f0 == 0) || (FUN_0004f62c("gunballtrack1"), DAT_000adfa4 != 0x71a)) {
LAB_00056e5e:
    if ((DAT_000b23f4 != 0) && (DAT_000adfa4 == 0x1bb)) {
      FUN_0004f62c("VehicleCar");
    }
  }
  else if (DAT_000b2344 != 0) {
    FUN_0004f690("gunballtrack1");
    goto LAB_00056e5e;
  }
  iVar8 = access("/opt/ch/flag.car.sstar",0);
  if (iVar8 == 0) {
    FUN_0004f62c("VehicleCar");
    iVar8 = FileExist("/opt/ch/flag.onlyHumanCarDetect");
    if (iVar8 == 0) {
      FUN_0004f62c("VehicleMoto");
      FUN_0004f62c("VehicleBicycle");
    }
  }
  iVar8 = access("/opt/ch/flag.face.sstar",0);
  if (iVar8 == 0) {
    FUN_0004f62c("face_detect");
  }
  iVar8 = access("/opt/ch/flag.algo.sstar",0);
  if (iVar8 == 0) {
    FUN_0004f62c("AlarmRegionAI");
    FUN_0004f62c("AlarmVG");
    FUN_0004f62c("pd_polygon_area");
    FUN_0004f62c("face_detect");
  }
  iVar8 = access("/opt/ch/flag.pd.non.motion.filter",0);
  if (iVar8 == 0) {
    FUN_0004f62c("nonMotionFilter");
  }
  iVar8 = access("/opt/ch/flag.ridgeOS_config",0);
  if (iVar8 == 0) {
    FUN_0004f62c("ridgeOS_config");
  }
  if (DAT_000adfa4 - 0x70d < 0x1d) {
    uVar13 = 0x1e010003U >> (DAT_000adfa4 - 0x70d & 0xff) & 1;
  }
  else {
    uVar13 = 0;
  }
  if ((DAT_000adfa4 == 0x60d || DAT_000adfa4 - 0x1af < 3) || uVar13 != 0) {
    FUN_0004f62c("device_power_display");
    FUN_0004f62c("low_power_support");
  }
  iVar8 = access("/opt/ch/flag.show_dvfs",0);
  if ((iVar8 != -1) &&
     ((0x19 < DAT_000adfa4 - 0x716 ||
      (-1 < (int)((0x3001011U >> (DAT_000adfa4 - 0x716 & 0xff)) << 0x1f))))) {
    FUN_0004f62c("device_power_display");
  }
  iVar8 = access("/opt/ch/flag.low_power_mode",0);
  if (iVar8 != -1) {
    FUN_0004f62c("low_power_support");
  }
  if (DAT_000adfa4 == 0x485) {
    FUN_0004f62c("brightness_mode1");
  }
  uVar13 = (uint)(DAT_000adfa4 == 0xb028 || DAT_000adfa4 == 0x1ad);
  if (DAT_000adfa4 - 0x707 < 0x1b) {
    uVar13 = uVar13 | 0x4000009U >> (DAT_000adfa4 - 0x707 & 0xff) & 1;
  }
  if (uVar13 != 0) {
    FUN_0004f62c("privacy_protection");
  }
  iVar8 = access("/opt/ch/flag.fire.aiwinn",0);
  if (iVar8 == 0) {
    FUN_0004f62c("VideoPD");
    FUN_0004f62c(&DAT_00080d70);
    FUN_0004f62c("pd2rectconf");
  }
  iVar8 = access("/opt/ch/flag.bresee",0);
  if (iVar8 == 0) {
    FUN_0004f62c("VehicleElectricbicycle");
    FUN_0004f62c("light_action");
  }
  iVar8 = access("/opt/ch/flag.lpr.aw",0);
  if ((iVar8 == 0) || (iVar8 = access("/opt/ch/flag.aiwinn.lpr",0), iVar8 == 0)) {
    FUN_0004f62c("LPRecognition");
    iVar8 = sn_get_dsp_type();
  }
  else {
    iVar8 = sn_get_dsp_type();
  }
  if (iVar8 == 0xbb9) {
    FUN_0004f62c("AudioAlarm");
  }
  iVar8 = access("/opt/ch/flag.vg",0);
  if (iVar8 == 0) {
    FUN_0004f62c("AlarmVG");
  }
  iVar8 = access("/opt/ch/flag.polygon",0);
  if (iVar8 == 0) {
    FUN_0004f62c("pd_polygon_area");
  }
  iVar8 = access("/data/mcv.lpr",0);
  if (iVar8 == 0) {
    FUN_0004f62c("LPRecognition");
    FUN_0004f62c("pd_polygon_area");
  }
  iVar8 = access("/data/mcv.fd",0);
  if (iVar8 == 0) {
    FUN_0004f62c("face_detect");
  }
  iVar8 = access("/data/mcv.fire",0);
  if (iVar8 == 0) {
    FUN_0004f62c(&DAT_00080d70);
    FUN_0004f62c("white_led_panel");
  }
  iVar8 = access("/opt/ch/flag.fire_detector",0);
  if (iVar8 == 0) {
    FUN_0004f62c(&DAT_00080d70);
    FUN_0004f62c("FireDetector");
  }
  iVar8 = access("/data/mcv.area",0);
  if ((iVar8 == 0) || (iVar8 = access("/data/mcv.line",0), iVar8 == 0)) {
    FUN_0004f62c("AlarmRegionAI");
    FUN_0004f62c("AlarmVG");
    FUN_0004f62c("pd_polygon_area");
  }
  iVar8 = access("/data/mcv.ele_gas",0);
  if (iVar8 == 0) {
    FUN_0004f62c("VehicleElectricbicycle");
    FUN_0004f62c("Gastank");
    FUN_0004f62c("pd_polygon_area");
    FUN_0004f62c("alarm_cover");
    FUN_0004f62c("aiobjectsensivity");
    FUN_0004f62c("light_action");
    FUN_0004f62c("pd2rectconf");
  }
  FUN_0004f62c("pd_polygon_area");
  iVar8 = access("/opt/ch/flag.vg",0);
  if (iVar8 == 0) {
    FUN_0004f62c("AlarmVG");
  }
  iVar8 = access("/opt/ch/anko_adaptor",0);
  if (iVar8 == -1) {
    if (DAT_000b23f8 == 0) {
      iVar8 = access("/opt/ch/flag.no.p2p",0);
      if ((iVar8 == -1) && (DAT_000adfa4 != 0x1b4 && DAT_000adfa4 != 0x1ab)) {
        FUN_0004f62c("p2p_config");
        if (DAT_000b23fc != 0) {
          FUN_0004f62c("p2p_aiot");
        }
        if (DAT_000b2400 != 0) {
          FUN_0004f62c("p2p_danale");
        }
        if (DAT_000b2404 != 0) {
          FUN_0004f62c("p2p_skyworth");
        }
        if (DAT_000b2408 != 0) {
          FUN_0004f62c("p2p_ac18pro");
        }
        if (DAT_000b240c != 0) {
          FUN_0004f62c("p2p_tencent");
        }
        if (DAT_000b2410 != 0) {
          FUN_0004f62c("p2p_goolink");
        }
        if (DAT_000b2414 != 0) {
          FUN_0004f62c("p2p_ismart");
        }
        if (DAT_000b2418 != 0) {
          FUN_0004f62c("p2p_qq");
        }
        if (DAT_000b241c != 0) {
          FUN_0004f62c("p2p_eyeplus");
        }
      }
      goto LAB_000570f4;
    }
LAB_000571fa:
    uVar13 = 0;
  }
  else {
LAB_000570f4:
    if (DAT_000adfa4 - 1 < 10) {
      uVar13 = ~(0x217U >> (DAT_000adfa4 - 1 & 0xff)) & 1;
    }
    else {
      uVar13 = 1;
    }
    if (DAT_000b23f8 != 0) goto LAB_000571fa;
    uVar13 = uVar13 & ((DAT_000adfa4 == 0x1201 || DAT_000adfa4 == 0x783) ^ 1);
  }
  iVar8 = access("/opt/ch/flag.no.storage",0);
  if (((iVar8 != 0) &&
      (((DAT_000b21a0 == 0 || ((DAT_000adfa4 & 0xfffffffd) != 0x710)) && (uVar13 != 0)))) ||
     (iVar8 = access("/opt/ch/anko_adaptor",0), iVar8 != -1)) {
    FUN_0004f62c("storage_support");
    FUN_0004f62c("schedule_record");
    FUN_0004f62c("picture_capture");
  }
  if (DAT_000adfa4 - 0x1001 < 3) {
    FUN_0004f62c("ajv_support");
  }
  if (DAT_000b2420 != 0 || DAT_000b2098 != 0) {
    FUN_0004f62c("ajv_support");
  }
  if (DAT_000adfa4 == 0x1106) {
    iVar8 = access("/mnt/nand/cpu_speed.cfg",0);
    if (iVar8 == 0) {
      memset(local_68,0,0x20);
      iVar8 = read_file_to_string("/mnt/nand/cpu_speed.cfg",local_68,0x20);
      if (iVar8 < 1) goto LAB_00058e7a;
      iVar8 = atoi(local_68);
    }
    else {
LAB_00058e7a:
      iVar8 = 0x352;
    }
    mysystem("insmod /opt/ch/ko/hi3516a_pm.ko");
    mysystem("echo userspace > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
    mysystem_with_param("echo %d > /sys/devices/system/cpu/cpu0/cpufreq/scaling_setspeed",iVar8);
  }
  iVar8 = access("/opt/ch/flag.yuv",0);
  if (iVar8 == 0) {
    FUN_0004f62c("yuv_video");
    FUN_0004f62c("yuv_sizecfg");
  }
  iVar8 = sn_get_dsp_type();
  if ((iVar8 == 0xbc2) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc4)) {
LAB_000572b6:
    if (DAT_000adfa4 - 0x354 < 3) {
      FUN_0004f690("picture_capture");
    }
    else {
LAB_00058220:
      FUN_0004f62c("three_video");
    }
  }
  else {
    if ((DAT_000adfa4 - 0x699 < 0xe) &&
       ((int)((0x203dU >> (DAT_000adfa4 - 0x699 & 0xff)) << 0x1f) < 0)) goto LAB_00058220;
    iVar8 = access("/opt/ch/flag.three_video",0);
    if (iVar8 == 0) goto LAB_000572b6;
  }
  uVar13 = DAT_000adfa4 - 0x703;
  if (uVar13 < 0x1d) {
    uVar17 = 0x1080002f >> (uVar13 & 0xff);
  }
  else {
    uVar17 = 0;
  }
  uVar14 = (uint)(LZCOUNT(DAT_000adfa4 - 0x689) | LZCOUNT(DAT_000adfa4 - 0x622)) >> 5;
  if (uVar13 < 0x1d) {
    uVar17 = uVar17 & 1;
  }
  if (DAT_000adfa4 == 0x734) {
    uVar14 = 1;
  }
  if (DAT_000adfa4 == 0x802) {
    uVar14 = 1;
  }
  if ((uVar14 != 0 || DAT_000adfa4 - 0x68f < 8) || uVar17 != 0) {
    FUN_0004f62c("gun_dome_support");
  }
  FUN_0004f62c("forbid_video");
  if (DAT_000b21a0 != 0) {
    FUN_0004f62c("light_action");
    FUN_0004f62c("high_ctrl_ptz");
  }
  if (DAT_000b2420 != 0) {
    FUN_0004f62c("light_action");
  }
  iVar8 = access("/opt/ch/flag.support.lightAction",0);
  if (iVar8 == 0) {
    FUN_0004f62c("light_action");
  }
  FUN_0004f62c("alarm_server");
  FUN_0004f62c("video_roi");
  if (DAT_000adfa4 == 0xb017) {
    FUN_0004f62c("only_audio");
  }
  FUN_0004f62c("mp4_support");
  FUN_0004f62c("audio_Repartition");
  FUN_0004f62c(&DAT_0008a9e8);
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  memset(local_68 + 4,0,0x3c);
  read_file_to_string("/etc/flag.customize",local_68,0x40);
  pcVar10 = strstr(local_68,"_FIX");
  if (pcVar10 != (char *)0x0) {
    FUN_0004f62c("overlayfps");
  }
  pcVar10 = strstr(local_68,"_ESA");
  if (pcVar10 != (char *)0x0) {
    if (DAT_000adfa4 == 0x1103) {
      mysystem("insmod /opt/ch/ko/hi3516a_pm.ko");
      mysystem("echo userspace > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
      mysystem("echo 850 > /sys/devices/system/cpu/cpu0/cpufreq/scaling_setspeed");
    }
    FUN_0004f62c("ESA_VERSION");
    FUN_0004f62c("ipaddrlimit");
    FUN_0004f62c("overlayfps");
    FUN_0004f62c("gainsetting");
    FUN_0004f62c("VideoShutter");
    if (DAT_000adfa4 == 0xb101) {
      FUN_0004f62c("gpio_input");
    }
  }
  FUN_0004f62c("VideoShutter");
  if (DAT_000adfa4 - 0x1002 < 2) {
    FUN_0004f62c("wcdma_support");
  }
  if (1 < DAT_000adfa4 - 0x2001) {
    FUN_0004f62c("audio_support");
  }
  iVar8 = access("/opt/ch/flag.no.chinese",0);
  if (iVar8 == -1) {
    FUN_0004f62c(&DAT_000823e4);
    FUN_0004f62c("zh_tw");
  }
  FUN_0004f62c(&DAT_0008aaa4);
  FUN_0004f62c("rs_py");
  FUN_0004f62c("ko-ko");
  pcVar10 = strstr(DAT_000577fc,"zh_tw");
  if (pcVar10 == (char *)0x0) {
    pcVar10 = strstr(DAT_00058c08,"en_us");
    if (pcVar10 == (char *)0x0) goto LAB_00059186;
    pcVar10 = strstr(DAT_00058c08,"zh_cn");
    if (pcVar10 == (char *)0x0) {
      DebugPrint(8,7,"[%s:%u]Support en_us only.\n\n",DAT_00058c04,&DAT_00002408);
      iVar8 = DAT_000b9380;
      uVar7 = DAT_0008aaa8;
      *(undefined4 *)(DAT_000b9380 + 0x2104) = DAT_0008aaa4;
      *(undefined2 *)(iVar8 + 0x2108) = uVar7;
    }
  }
  else {
    pcVar10 = strstr(DAT_000577fc,"en_us");
    if (pcVar10 == (char *)0x0) {
LAB_00059186:
      DebugPrint(8,7,"[%s:%u]Support zh_cn only.\n\n",DAT_00059548,0x2401);
      iVar8 = DAT_000b9380;
      uVar7 = DAT_000823e8;
      *(undefined4 *)(DAT_000b9380 + 0x2104) = DAT_000823e4;
      *(undefined2 *)(iVar8 + 0x2108) = uVar7;
    }
  }
  iVar8 = access("/opt/ch/flag.no.storage",0);
  if (iVar8 != 0) {
    FUN_0004f62c("front_replay");
  }
  FUN_0004f62c("replay_bytime");
  FUN_0004f62c("media_capabiltiy");
  FUN_0004f62c("profile_setting");
  bVar19 = 0xa000 < DAT_000adfa4;
  if (DAT_000adfa4 != 0xa001) {
    bVar19 = 1 < DAT_000adfa4 - 0xa003;
  }
  if (!bVar19 || (DAT_000adfa4 == 0xa001 || DAT_000adfa4 - 0xa003 == 2)) {
    FUN_0004f62c("wdr_setting");
  }
  FUN_0004f62c("video_mask");
  FUN_0004f62c("system_maitain");
  FUN_0004f62c("ircut_setting");
  FUN_0004f62c("SEARCH_WIFIAP");
  FUN_0004f62c("LONG_TITLE");
  FUN_0004f62c("timezone_halfhour");
  iVar8 = access("/opt/ch/flag.fortinet",0);
  if (iVar8 != 0) {
    FUN_0004f62c("p2p_cfg_support");
  }
  FUN_0004f62c("md_18x22");
  FUN_0004f62c("ONEVIDEOMASK");
  iVar8 = access("/opt/ch/flag.ftp_email",0);
  if ((iVar8 != -1) || (iVar8 = access("/mnt/nand/flag.ftp_email",0), iVar8 != -1)) {
    FUN_0004f62c("ftpemail_aj");
  }
  pcVar10 = strstr(local_68,"_Y_EN");
  if (pcVar10 != (char *)0x0) {
    FUN_0004f62c("only_18x22");
  }
  if (DAT_000adfa4 == 0x1106) {
    FUN_0004f62c("ftpemail_aj");
  }
  pcVar10 = strstr(local_68,"_XZ");
  if ((pcVar10 != (char *)0x0) &&
     (DAT_000adfa4 - 0x1103 < 3 || (DAT_000adfa4 == 0xa003 || DAT_000adfa4 == 0x1101))) {
    FUN_0004f62c("ftpemail_aj");
  }
  iVar8 = access("/opt/ch/gb28181_server",0);
  if (iVar8 != -1) {
    FUN_0004f62c("gb28181");
  }
  iVar8 = access("/opt/ch/gat1400_server",0);
  if (iVar8 != -1) {
    FUN_0004f62c("gat1400");
  }
  iVar8 = access("/opt/ch/ipvs_adaptor",0);
  if (((iVar8 != -1) || (iVar8 = access("/opt/ch/hb_server",0), iVar8 != -1)) ||
     (iVar8 = access("/opt/ch/mqtt_server",0), iVar8 != -1)) {
    FUN_0004f62c(&DAT_0008ac74);
  }
  iVar8 = access("/opt/ch/rtmp_publish",0);
  if (iVar8 != -1) {
    FUN_0004f62c(&DAT_0008acbc);
    FUN_0004f62c("rtmp_timespan");
  }
  FUN_0004f62c("vencodemode_set");
  FUN_0004f62c("wdr_setting");
  if (DAT_000adfa4 - 0x684 < 0x1b) {
    uVar13 = 0x7e8001fU >> (DAT_000adfa4 - 0x684 & 0xff) & 1;
  }
  else {
    uVar13 = 0;
  }
  if (uVar13 != 0 ||
      (DAT_000adfa4 - 0x6a5 < 3 ||
      (DAT_000adfa4 - 0x354 < 3 ||
      (DAT_000adfa4 - 0x484 < 2 ||
      (DAT_000adfa4 - 0x351 < 2 ||
      (DAT_000adfa4 - 0x301 < 5 ||
      ((DAT_000adfa4 & 0xffffff7f) == 0x402 ||
      ((DAT_000adfa4 & 0xfffffffd) == 0x788 || (DAT_000adfa4 == 0x781 || DAT_000adfa4 == 0x62b))))))
      ))) {
    FUN_0004f62c("hdr_setting");
  }
  FUN_0004f62c("ledtype_set");
  FUN_0004f62c("ircut_leddelay");
  if (DAT_000b1860 != 0) {
    FUN_0004f62c("ircut_ledmanualswitch");
  }
  iVar8 = FileExist("/tmp/flag.led.new");
  if ((iVar8 != 0) || (iVar8 = FileExist("/opt/ch/flag.led.new"), iVar8 != 0)) {
    FUN_0004f62c("ircut_ledmanualswitch");
  }
  if (DAT_000adfa4 - 0x604 < 0x1e) {
    uVar13 = 0x24000001U >> (DAT_000adfa4 - 0x604 & 0xff) & 1;
  }
  else {
    uVar13 = 0;
  }
  if ((((DAT_000adfa4 & 0xfffffeff) - 0x61b < 2 ||
       ((DAT_000adfa4 & 0xfffffff7) - 0x781 < 2 ||
       (DAT_000adfa4 - 0x71e < 2 ||
       (DAT_000adfa4 - 0x718 < 2 ||
       (DAT_000adfa4 == 0x787 || (DAT_000adfa4 - 0x623 < 2 || DAT_000adfa4 - 0x6a8 < 7)))))) ||
       uVar13 != 0) ||
     (iVar8 = FileExist("/opt/ch/flag.support_ircut_led_manual_switch"), iVar8 != 0)) {
    FUN_0004f62c("ircut_ledmanualswitch");
  }
  if (DAT_000adfa4 - 0x407 < 2) {
    FUN_0004f62c("ircut_ledmanualswitch");
    FUN_0004f62c("ircut_leddelay");
    FUN_0004f62c("ledtype_set");
    FUN_0004f62c("vencodemode_set");
    FUN_0004f62c("active_call");
  }
  iVar8 = sn_get_dsp_type();
  if ((((iVar8 == 0xbc2) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc3)) ||
      (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc6)) ||
     ((iVar8 = sn_get_dsp_type(), iVar8 == 0xbc5 || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc8)))) {
    if (DAT_000b21a0 == 0) {
      if (DAT_000adfa4 - 0x683 < 0x14) {
        uVar13 = ~(0xff041U >> (DAT_000adfa4 - 0x683 & 0xff)) & 1;
      }
      else {
        uVar13 = 1;
      }
      if (DAT_000adfa4 - 0x503 < 2) {
        uVar13 = 0;
      }
      if (uVar13 != 0) goto LAB_00058402;
    }
    else if (DAT_000adfa4 == 0x301) {
LAB_00058402:
      FUN_0004f62c("fisheye_cover");
    }
    if ((DAT_000b2420 != 0) && (DAT_000adfa4 == 0x68d)) {
      FUN_0004f690("fisheye_cover");
    }
  }
  else {
    iVar8 = sn_get_dsp_type();
    if ((iVar8 == 0xbc9) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbca)) {
      if ((DAT_000b21a0 != 0) && (DAT_000adfa4 == 0x69e || DAT_000adfa4 == 0x69b)) {
        FUN_0004f62c("fisheye_cover");
      }
      if (DAT_000b2420 != 0) {
        FUN_0004f62c("fisheye_cover");
      }
    }
  }
  iVar8 = FileExist("/opt/ch/flag.support.rotate");
  if (iVar8 != 0) {
    GetVideoSize(param_1 + 0x5760,*(undefined1 *)(param_1 + 0x56bc),&local_70,&local_6c);
    iVar8 = sn_get_dsp_type();
    if (((iVar8 == 0xbc8) || (iVar8 = sn_get_dsp_type(), iVar8 == 0xbc9)) ||
       (iVar8 = sn_get_dsp_type(), iVar8 == 0xbca)) {
      if (((0xa00 < local_70) || (0x5a0 < local_6c)) ||
         ((DAT_000adfa4 - 0x683 < 0x14 &&
          ((int)((0xff041U >> (DAT_000adfa4 - 0x683 & 0xff)) << 0x1f) < 0)))) goto LAB_00058582;
    }
    else if ((0x780 < local_70) || (0x438 < local_6c)) {
LAB_00058582:
      FUN_0004f690("rotate_enable");
      goto LAB_00057946;
    }
    FUN_0004f62c("rotate_enable");
  }
LAB_00057946:
  pcVar10 = strstr(DAT_00057c34,"three_video");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x5868) = 0;
  }
  iVar8 = DAT_000b9380;
  pcVar10 = DAT_00057c34;
  iVar18 = 0;
  iVar15 = DAT_000b9380 + 0x5758;
  do {
    if (iVar18 == 2) {
      pcVar11 = strstr(pcVar10,"three_video");
      if (pcVar11 == (char *)0x0) {
        *(undefined4 *)(iVar8 + 0x5868) = 0;
        break;
      }
      pcVar11 = strstr(pcVar10,"forbid_video");
      if (pcVar11 != (char *)0x0) break;
LAB_000582ba:
      *(undefined4 *)(iVar15 + iVar18 * 0x88) = 1;
    }
    else {
      pcVar11 = strstr(pcVar10,"forbid_video");
      if (pcVar11 == (char *)0x0) goto LAB_000582ba;
    }
    iVar18 = iVar18 + 1;
  } while (iVar18 != 3);
  iVar8 = FileExist("/opt/ch/VoiceTimeMp3/dingdang.mp3");
  if (iVar8 != 0) {
    FUN_0004f62c("alarmclock");
  }
  pcVar10 = strstr(DAT_00057c34,"ftpemail_aj");
  if (pcVar10 == (char *)0x0) {
    DebugPrint(8,7,"[%s:%u]Function %s is disabled for this device.\n\n",DAT_00059548,0x26df,
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
  pcVar10 = strstr(DAT_00057c34,"rotate_enable");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x56cc) = 0;
  }
  pcVar10 = strstr(DAT_00057c34,"picture_capture");
  if (pcVar10 == (char *)0x0) {
    DebugPrint(8,7,"[%s:%u]Function %s is disabled for this device.\n\n",DAT_00059548,0x26f4,
               "picture_capture");
    *(undefined4 *)(param_1 + 0x5900) = 0;
    *(undefined4 *)(param_1 + 0x3d80) = 0;
    *(undefined4 *)(param_1 + 0x3d84) = 0;
    *(undefined4 *)(param_1 + 0x3e08) = 0;
    *(undefined4 *)(param_1 + 0x3e0c) = 0;
  }
  pcVar10 = strstr(DAT_00057c34,"evdo_support");
  if ((((pcVar10 == (char *)0x0) &&
       (pcVar10 = strstr(DAT_00058c08,"wcdma_support"), pcVar10 == (char *)0x0)) &&
      (pcVar10 = strstr(DAT_00058c08,"tdscdma_support"), pcVar10 == (char *)0x0)) &&
     (DebugPrint(8,7,"[%s:%u]Function 3G is disabled for this device.\n\n",DAT_00058c04,0x2704),
     *(int *)(param_1 + 0x483c) != 0)) {
    *(undefined4 *)(param_1 + 0x483c) = 0;
  }
  pcVar10 = strstr(DAT_00057c34,"ipaddrlimit");
  if ((pcVar10 == (char *)0x0) && (*(int *)(param_1 + 0x2130) != 0)) {
    DebugPrint(8,7,"[%s:%u]Function IP limitation is disabled for this device.\n\n",DAT_00058c04,
               10000);
    *(undefined4 *)(param_1 + 0x2130) = 0;
  }
  pcVar10 = strstr(DAT_00057c34,"overlayfps");
  if (pcVar10 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0x5a18) = 0;
  }
  pcVar10 = strstr(DAT_00057c34,"tz#");
  if (pcVar10 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0x5a19) = 0;
  }
  pcVar10 = strstr(DAT_00057c34,"gainsetting");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x56e4) = 0;
  }
  pcVar10 = strstr(DAT_00057c34,"VideoPD");
  pcVar11 = strstr(DAT_00057c34,"AlarmVG");
  if (pcVar10 == (char *)0x0) {
LAB_000583c8:
    if ((pcVar11 == (char *)0x0) &&
       (pcVar10 = strstr(DAT_0005876c,"AlarmPdVG"), pcVar10 == (char *)0x0)) {
      memset((void *)(param_1 + 0x61f0),0,500);
    }
  }
  else if (pcVar11 == (char *)0x0) {
    if ((DAT_000b1860 == 0) || (DAT_000adfa4 != 0x689)) {
      uVar13 = FUN_0004f62c("AlarmPdVG");
      uVar17 = DAT_000adfa4 - 0x703;
      if (uVar17 < 0x1d) {
        uVar13 = 0x2f;
      }
      uVar14 = (uint)(LZCOUNT(DAT_000adfa4 - 0x689) | LZCOUNT(DAT_000adfa4 - 0x622)) >> 5;
      if (uVar17 < 0x1d) {
        uVar13 = (uVar13 & 0xffff | 0x10800000) >> (uVar17 & 0xff) & 1;
      }
      else {
        uVar13 = 0;
      }
      if (DAT_000adfa4 == 0x734) {
        uVar14 = 1;
      }
      if (DAT_000adfa4 == 0x802) {
        uVar14 = 1;
      }
      if ((uVar14 != 0 || DAT_000adfa4 - 0x68f < 8) || uVar13 != 0) goto LAB_00058382;
    }
    else {
LAB_00058382:
      FUN_0004f690("AlarmPdVG");
      FUN_0004f62c("ptz_re_calibrat");
      if ((DAT_000adfa4 == 0x71a) && (DAT_000b2344 != 0)) {
        FUN_0004f690("ptz_re_calibrat");
      }
    }
    iVar8 = FileExist("/opt/ch/flag.remove_function_gate");
    if (iVar8 != 0) {
      FUN_0004f690("AlarmPdVG");
    }
    pcVar11 = strstr(DAT_0005876c,"AlarmVG");
    goto LAB_000583c8;
  }
  pcVar10 = strstr(DAT_00057c34,"AlarmRegionAI");
  if (pcVar10 == (char *)0x0) {
    memset((void *)(param_1 + 0x63e4),0,0x204);
  }
  pcVar10 = strstr(DAT_00057c34,"VideoPD");
  if ((pcVar10 == (char *)0x0) && (iVar8 = access("/data/mcv.ele_gas",0), iVar8 != 0)) {
    *(undefined4 *)(param_1 + 0x5fe0) = 0;
  }
  pcVar10 = strstr(DAT_00057c34,"temp_humidity");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x7938) = 0;
    *(undefined4 *)(param_1 + 0x793c) = 0;
    *(undefined4 *)(param_1 + 0x794c) = 0;
    *(undefined4 *)(param_1 + 0x7950) = 0;
  }
  pcVar10 = strstr(DAT_00057c34,"face_detect");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x65e8) = 0;
  }
  FUN_0004f62c("ssl_email");
  iVar8 = access("/opt/ch/flag.pre.record",0);
  if (iVar8 != -1) {
    FUN_0004f62c("pre_record");
  }
  iVar8 = access("/opt/ch/flag.osd.gb28181",0);
  if (iVar8 != -1) {
    FUN_0004f62c("osd_gb");
  }
  iVar8 = access("/opt/ch/smart265.flag",0);
  if (iVar8 != -1) {
    FUN_0004f62c("smart265");
  }
  iVar8 = access("/opt/ch/flag.zoom_track",0);
  if ((iVar8 != -1) || (iVar8 = access("/opt/ch/flag.zoom_track_noptz",0), iVar8 != -1)) {
    FUN_0004f62c("zoom_track");
  }
  iVar8 = access("/opt/ch/flag.digital_zoom",0);
  if (iVar8 != -1) {
    FUN_0004f62c("zoom_track");
  }
  iVar8 = access("/opt/ch/flag.only_digital_zoom",0);
  if (iVar8 != -1) {
    FUN_0004f62c("ptz_only_digit_zoom");
  }
  iVar8 = access("/opt/ch/flag.ptz_scan_cfg",0);
  if (iVar8 != -1) {
    FUN_0004f62c("ptz_scan_cfg");
  }
  if (DAT_000adfa4 - 0x1a7 < 4 ||
      (DAT_000adfa4 == 0x629 || (DAT_000adfa4 == 0x6ad || DAT_000adfa4 == 0x624))) {
    FUN_0004f62c("ele_zoom");
  }
  else if (DAT_000adfa4 == 0x1a4) {
    FUN_0004f62c("zoom_track");
  }
  if (DAT_000adfa4 == 0x488) {
    FUN_0004f62c("twolens_stitch");
    pcVar10 = strstr(local_68,"_FN");
    if (pcVar10 == (char *)0x0) {
      FUN_0004f62c("audio_aisetting");
    }
    FUN_0004f690("video_crop");
    if (DAT_000b21a0 == 0) {
      FUN_0004f690("aec_enable");
    }
  }
  if (DAT_000adfa4 - 0x503 < 3) {
    FUN_0004f62c("twolens_stitch");
    FUN_0004f690("video_crop");
  }
  if (DAT_000b23f8 != 0) {
    FUN_0004f690("picture_capture");
    iVar8 = access("/opt/ch/hx_version.flag",0);
    if (iVar8 == 0) {
      FUN_0004f690("af_setting");
      FUN_0004f690("audio_support");
      FUN_0004f690("gpio_input");
      FUN_0004f690("gpio_output");
      FUN_0004f690("audio_action");
      FUN_0004f690("audio_action_daynight");
      FUN_0004f690("one_output");
      FUN_0004f690("two_output");
      FUN_0004f690("three_output");
      FUN_0004f690("four_output");
      FUN_0004f690("one_input");
      FUN_0004f690("two_input");
      FUN_0004f690("three_input");
      FUN_0004f690("four_input");
      FUN_0004f690("io_output_set");
    }
    iVar8 = access("/opt/ch/hx_show_audio.flag",0);
    if (iVar8 == 0) {
      FUN_0004f62c("af_setting");
      FUN_0004f62c("audio_support");
      FUN_0004f62c("audio_action_daynight");
    }
  }
  iVar8 = FileExist("/mnt/nand/cust/default_2_priority.xml");
  if ((iVar8 != 0) &&
     ((iVar8 = FileExist("/mnt/nand/cust/first_init_second_config_flag"), iVar8 != 0 ||
      (((iVar8 = FileExist("/tmp/flag.mode.factory"), iVar8 == 0 &&
        (iVar8 = FileExist("/mnt/nand/cust/specific.xml"), iVar8 == 0)) &&
       (iVar8 = FileExist("/mnt/nand/cust/config.default.xml"), iVar8 == 0)))))) {
    __ptr = calloc(0x3b8,1);
    Init_SecondConfig();
    if (*(int *)((int)__ptr + 0x388) == 1) {
      FUN_0004f62c("ptz_control");
    }
    else if (*(int *)((int)__ptr + 0x388) == 0) {
      FUN_0004f690("ptz_control");
    }
    if (*(int *)((int)__ptr + 0x38c) == 1) {
      FUN_0004f62c("ptz_zoom");
    }
    else if (*(int *)((int)__ptr + 0x38c) == 0) {
      FUN_0004f690("ptz_zoom");
    }
    if (*(int *)((int)__ptr + 0x390) == 1) {
      FUN_0004f62c("ptz_focus");
      FUN_0004f62c("ptz_iris");
    }
    else if (*(int *)((int)__ptr + 0x390) == 0) {
      FUN_0004f690("ptz_focus");
      FUN_0004f690("ptz_iris");
    }
    if (*(uint *)((int)__ptr + 0x39c) < 2) {
      FUN_0004f62c("privacy_protection");
    }
    else if (*(uint *)((int)__ptr + 0x39c) == 0xffffffff) {
      FUN_0004f690("privacy_protection");
    }
    if (*(int *)((int)__ptr + 0x3a4) == 1) {
      FUN_0004f62c("low_power_support");
      puts("Capability_add_function low");
    }
    else if (*(int *)((int)__ptr + 0x3a4) == 0) {
      FUN_0004f690("low_power_support");
      puts("Capability_remove_function low");
    }
    if (*(int *)((int)__ptr + 0x394) == 1) {
      FUN_0004f62c("humantrack");
    }
    else if (*(int *)((int)__ptr + 0x394) == 0) {
      FUN_0004f690("humantrack");
    }
    iVar8 = *(int *)((int)__ptr + 0x3a8);
    if (iVar8 != 0xffff) {
      if (iVar8 == 1) {
        *(undefined4 *)(DAT_000b9380 + 0x572c) = 0;
        FUN_0004f62c("ir_led_panel");
        FUN_0004f690("white_led_panel");
        FUN_0004f690("double_led_panel");
      }
      else if (iVar8 == 2) {
        *(undefined4 *)(DAT_000b9380 + 0x572c) = 1;
        FUN_0004f62c("white_led_panel");
        FUN_0004f690("ir_led_panel");
        FUN_0004f690("double_led_panel");
      }
      else if (iVar8 == 3) {
        FUN_0004f62c("double_led_panel");
        FUN_0004f690("ir_led_panel");
        FUN_0004f690("white_led_panel");
      }
    }
    if (*(int *)((int)__ptr + 0x3b0) != 0xffff) {
      if (*(int *)((int)__ptr + 0x3b0) == 1) {
        DebugPrint(8,7,"[%s:%u]#########Street lamp capability enable.\n\n",DAT_00059754,0x2858);
        iVar8 = FileExist("/mnt/nand/flag.street_lamp");
        if (iVar8 == 0) {
          mysystem("touch /mnt/nand/flag.street_lamp");
        }
        FUN_0004f62c("streetlamp");
      }
      else {
        DebugPrint(8,7,"[%s:%u]#########Street lamp capability disable.\n\n",DAT_00058c04,0x2861);
        mysystem("rm /mnt/nand/flag.street_lamp");
        FUN_0004f690("streetlamp");
      }
    }
    free(__ptr);
    FUN_0004fa04();
    DebugPrint(8,7,"[%s:%u]g_system_control_string:%s\n\n",DAT_00058c04,0x287a,DAT_00058c08);
  }
  uVar17 = DAT_000adfa4 - 0x61e;
  uVar13 = uVar17;
  if (uVar17 < 0xc) {
    uVar13 = 0x969 >> (uVar17 & 0xff);
  }
  if (uVar17 < 0xc) {
    uVar13 = uVar13 & 1;
  }
  else {
    uVar13 = 0;
  }
  if (((((DAT_000adfa4 - 0x6ad < 2 ||
         (DAT_000adfa4 - 0x6a8 < 3 ||
         ((DAT_000adfa4 & 0xfffffffd) == 0x68c ||
         (DAT_000adfa4 == 0x787 || (DAT_000adfa4 == 0x781 || DAT_000adfa4 == 0x604))))) ||
         uVar13 != 0) || (iVar8 = access("/opt/ch/flag.led.j40",0), iVar8 == 0)) ||
      (DAT_000b2428 != 0)) &&
     ((DAT_000b2424 == 0 && DAT_000b2420 == 0 &&
      (iVar8 = FileExist("/opt/ch/flag.support.ir.white.led"), iVar8 == 0)))) {
    FUN_0004f62c("white_led_panel");
    FUN_0004f690("ir_led_panel");
    FUN_0004f690("double_led_panel");
    *(undefined4 *)(DAT_000b9380 + 0x572c) = 1;
  }
  if ((((DAT_000adfa4 == 0x60e) || (DAT_000b242c != 0)) && (DAT_000b1860 != 0)) ||
     (iVar8 = access("/opt/ch/flag.battery_mode",0), iVar8 == 0)) {
    FUN_0004f62c("battery_mode");
    DAT_000b2430 = 1;
  }
  if (((DAT_000b242c != 0) && (DAT_000b1860 != 0)) ||
     (iVar8 = access("/opt/ch/high_speed_ptz",0), iVar8 == 0)) {
    FUN_0004f62c("high_speed_ptz");
  }
  if (((DAT_000adfa4 - 0x716 < 0x1a) &&
      ((int)((0x3001011U >> (DAT_000adfa4 - 0x716 & 0xff)) << 0x1f) < 0)) &&
     (FUN_0004f62c("aov_support"), *(int *)(param_1 + 0x574c) == 0)) {
    FUN_0004f690("aov_support");
  }
  iVar8 = access("/opt/ch/alarmlist",0);
  if (iVar8 == 0) {
    FUN_0004f62c("record_alarmlist_support");
  }
  FUN_000554f4();
  if ((DAT_000adfa4 == 0x71c) && (DAT_000b23e0 != 0)) {
    FUN_0004f690("alarm_led");
  }
  iVar8 = access("/opt/ch/flag.usb.4g",0);
  if ((((iVar8 == 0) || (iVar8 = access("/opt/ch/flag.yuga.4g",0), iVar8 == 0)) ||
      (iVar8 = access("/opt/ch/flag.quectel.4g",0), iVar8 == 0)) ||
     ((iVar8 = access("/opt/ch/flag.simcom.4g",0), iVar8 == 0 ||
      (iVar8 = access("/opt/ch/flag.um.4g",0), iVar8 == 0)))) {
    FUN_0004f690("SEARCH_WIFIAP");
    FUN_0004f690("ipaddrlimit");
    FUN_0004f690("ssl_email");
    FUN_0004f690("alarm_server");
    FUN_0004f690("humanmosic");
    FUN_0004f690("video_qos");
    FUN_0004f690(&DAT_00089f9c);
    FUN_0004f690("bmplogo_set");
    FUN_0004f690("fixipcfg");
    FUN_0004f690("multicast");
    FUN_0004f690("rs_py");
    FUN_0004f690("tr-tr");
    FUN_0004f690("ko-ko");
    FUN_0004f690("cz-czekh");
  }
  if (DAT_000adfa4 == 0x783) {
    FUN_0004f690("pd_polygon_area");
    FUN_0004f690("AlarmPdVG");
    FUN_0004f690("alarm_cover");
  }
  if ((DAT_000adfa4 == 0x69c) && (DAT_000b2098 != 0)) {
    FUN_0004f690("alarm_cover");
    if (DAT_000b23d0 == 0) goto LAB_00057e4e;
LAB_0005848e:
    FUN_0004f690("fixipcfg");
    FUN_0004f690("alarm_server");
  }
  else {
    if (DAT_000b23d0 != 0) goto LAB_0005848e;
LAB_00057e4e:
    if (DAT_000b2434 != 0) {
      FUN_0004f690("fixipcfg");
    }
  }
  iVar8 = 4;
  pcVar10 = strstr(DAT_000581a8,"four_input");
  if (pcVar10 == (char *)0x0) {
    iVar8 = 3;
    pcVar10 = strstr(DAT_00058c08,"three_input");
    if (pcVar10 != (char *)0x0) goto LAB_00057e6e;
    iVar8 = 2;
    pcVar10 = strstr(DAT_00058c08,"two_input");
    if (pcVar10 != (char *)0x0) goto LAB_00057e6e;
    pcVar10 = strstr(DAT_00058c08,"one_input");
    *(uint *)(param_1 + 0x6a44) = (uint)(pcVar10 != (char *)0x0);
    if (pcVar10 != (char *)0x0) {
      iVar8 = 1;
      goto LAB_00057e74;
    }
  }
  else {
LAB_00057e6e:
    *(int *)(param_1 + 0x6a44) = iVar8;
LAB_00057e74:
    pcVar10 = (char *)(param_1 + 0x6a70);
    iVar15 = 0;
    do {
      iVar18 = iVar15 + 1;
      *(int *)(pcVar10 + -0x24) = iVar18;
      if (1 < *(uint *)(pcVar10 + -0x28)) {
        pcVar10[-0xffffffff00000028] = '\0';
        pcVar10[-0xffffffff00000027] = '\0';
        pcVar10[-0xffffffff00000026] = '\0';
        pcVar10[-0xffffffff00000025] = '\0';
      }
      cVar6 = s_HIGH_LOW_00080e7c[8];
      uVar9 = s_HIGH_LOW_00080e7c._4_4_;
      if (*pcVar10 == '\0') {
        *(undefined4 *)pcVar10 = s_HIGH_LOW_00080e7c._0_4_;
        *(undefined4 *)(pcVar10 + 4) = uVar9;
        pcVar10[8] = cVar6;
      }
      bVar19 = SBORROW4(iVar18,3);
      iVar16 = iVar15 + -2;
      if (iVar18 < 4) {
        bVar19 = SBORROW4(iVar18,iVar8);
        iVar16 = iVar18 - iVar8;
      }
      pcVar10 = pcVar10 + 0x210;
      iVar15 = iVar18;
    } while (iVar16 < 0 != bVar19);
  }
  pcVar10 = strstr(DAT_000581a8,"four_output");
  iVar8 = 4;
  if (pcVar10 == (char *)0x0) {
    pcVar10 = strstr(DAT_00058f6c,"three_output");
    iVar8 = 3;
    if (pcVar10 != (char *)0x0) goto LAB_00057eba;
    pcVar10 = strstr(DAT_00058f6c,"two_output");
    iVar8 = 2;
    if (pcVar10 != (char *)0x0) goto LAB_00057eba;
    pcVar10 = strstr(DAT_00058f6c,"one_output");
    *(uint *)(param_1 + 0x7790) = (uint)(pcVar10 != (char *)0x0);
    iVar8 = 0;
    if (pcVar10 == (char *)0x0) goto LAB_00057ed6;
    iVar8 = 1;
  }
  else {
LAB_00057eba:
    *(int *)(param_1 + 0x7790) = iVar8;
  }
  piVar12 = (int *)(param_1 + 0x7794);
  iVar15 = 0;
  do {
    iVar16 = iVar15 + 1;
    *piVar12 = iVar16;
    bVar19 = SBORROW4(iVar16,3);
    iVar18 = iVar15 + -2;
    if (iVar16 < 4) {
      bVar19 = SBORROW4(iVar16,iVar8);
      iVar18 = iVar16 - iVar8;
    }
    piVar12 = piVar12 + 0x1a;
    iVar15 = iVar16;
  } while (iVar18 < 0 != bVar19);
LAB_00057ed6:
  iVar15 = 0;
  do {
    if (iVar8 <= iVar15) {
      *(undefined4 *)(param_1 + 0x7460 + iVar15 * 8) = 0;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 4);
  iVar15 = param_1 + 0x6ab0;
  do {
    iVar18 = 0;
    do {
      if (iVar8 <= iVar18) {
        *(undefined4 *)(iVar15 + iVar18 * 8) = 0;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != 4);
    iVar15 = iVar15 + 0x210;
  } while (param_1 + 0x72f0 != iVar15);
  iVar15 = 0;
  do {
    if (iVar8 <= iVar15) {
      *(undefined4 *)(param_1 + 0x764c + iVar15 * 8) = 0;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 4);
  iVar15 = 0;
  do {
    if (iVar8 <= iVar15) {
      *(undefined4 *)(param_1 + 0x769c + iVar15 * 8) = 0;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 4);
  iVar15 = 0;
  do {
    if (iVar8 <= iVar15) {
      *(undefined4 *)(param_1 + 0x7770 + iVar15 * 8) = 0;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 4);
  iVar15 = 0;
  do {
    if (iVar8 <= iVar15) {
      *(undefined4 *)(param_1 + 0x600c + iVar15 * 8) = 0;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 4);
  iVar15 = 0;
  do {
    if (iVar8 <= iVar15) {
      *(undefined4 *)(param_1 + 0x6300 + iVar15 * 8) = 0;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 4);
  iVar15 = 0;
  do {
    if (iVar8 <= iVar15) {
      *(undefined4 *)(param_1 + 0x6608 + iVar15 * 8) = 0;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 4);
  pcVar10 = strstr(DAT_000581a8,"pd_polygon_area");
  if ((pcVar10 != (char *)0x0) && (*(int *)(param_1 + 0x61cc) == 0)) {
    iVar18 = *(int *)(param_1 + 0x5fec);
    iVar8 = *(int *)(param_1 + 0x5ff0);
    *(undefined4 *)(param_1 + 0x61cc) = 4;
    *(int *)(param_1 + 0x617c) = iVar18;
    *(int *)(param_1 + 0x6180) = iVar8;
    *(int *)(param_1 + 0x6194) = iVar18;
    iVar18 = iVar18 + *(int *)(param_1 + 0x5ff4);
    iVar15 = *(int *)(param_1 + 0x5ff8) + iVar8;
    *(int *)(param_1 + 0x6184) = iVar18;
    *(int *)(param_1 + 0x618c) = iVar18;
    *(int *)(param_1 + 0x6188) = iVar8;
    *(int *)(param_1 + 0x6190) = iVar15;
    *(int *)(param_1 + 0x6198) = iVar15;
  }
  pcVar10 = strstr(DAT_000581a8,"wdr_setting");
  if (pcVar10 == (char *)0x0) {
    if (0 < *(int *)(DAT_000b9380 + 0x56ec)) {
      *(undefined4 *)(DAT_000b9380 + 0x56ec) = 0;
    }
  }
  else {
    pcVar10 = strstr(DAT_000581a8,"hdr_setting");
    if ((pcVar10 == (char *)0x0) && (*(int *)(DAT_000b9380 + 0x56ec) == 3)) {
      *(undefined4 *)(DAT_000b9380 + 0x56ec) = 1;
    }
  }
  pcVar10 = strstr(DAT_000581a8,"yuv_sizecfg");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(DAT_000b9380 + 0x5f6c) = 0;
  }
  FUN_000555ec();
  pcVar10 = strstr(DAT_000581a8,"VehicleCar");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b9380 + 0x5fe8) = *(uint *)(DAT_000b9380 + 0x5fe8) & 0xfffffffe;
  }
  pcVar10 = strstr(DAT_000581a8,"VehicleMoto");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b9380 + 0x5fe8) = *(uint *)(DAT_000b9380 + 0x5fe8) & 0xfffffffd;
  }
  pcVar10 = strstr(DAT_000581a8,"VehicleElectricbicycle");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b9380 + 0x5fe8) = *(uint *)(DAT_000b9380 + 0x5fe8) & 0xfffffffb;
  }
  pcVar10 = strstr(DAT_000581a8,"VehicleBicycle");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b9380 + 0x5fe8) = *(uint *)(DAT_000b9380 + 0x5fe8) & 0xfffffff7;
  }
  pcVar10 = strstr(DAT_000581a8,"VideoPD");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b9380 + 0x5fe8) = *(uint *)(DAT_000b9380 + 0x5fe8) & 0xffffffef;
  }
  pcVar10 = strstr(DAT_000581a8,"face_detect");
  if (pcVar10 == (char *)0x0) {
    *(uint *)(DAT_000b9380 + 0x5fe8) = *(uint *)(DAT_000b9380 + 0x5fe8) & 0xffffffdf;
  }
  pcVar10 = strstr(DAT_000581a8,"fisheye_cover");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(DAT_000b9380 + 0x5738) = 0;
  }
  pcVar10 = strstr(DAT_000581a8,"video_qos");
  iVar8 = DAT_000b9380;
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(DAT_000b9380 + 0x2164) = 0;
    *(undefined4 *)(iVar8 + 0x2168) = 0;
    *(undefined4 *)(iVar8 + 0x216c) = 0;
    *(undefined4 *)(iVar8 + 0x2170) = 0;
  }
  pcVar10 = strstr(DAT_000581a8,"ptz_autohome");
  if (pcVar10 == (char *)0x0) {
    *(undefined1 *)(DAT_000b9380 + 0x71) = 1;
  }
  pcVar10 = strstr(DAT_000581a8,"ptz_autocali");
  if (pcVar10 == (char *)0x0) {
    *(undefined1 *)(DAT_000b9380 + 0x72) = 1;
  }
  pcVar10 = strstr(DAT_000581a8,"ptz_lowpower");
  if (pcVar10 == (char *)0x0) {
    *(undefined1 *)(DAT_000b9380 + 0x73) = 0;
  }
  pcVar10 = strstr(DAT_000581a8,"unv#");
  iVar8 = DAT_000b9380;
  if (pcVar10 == (char *)0x0) {
    *(undefined1 *)(DAT_000b9380 + 0x3785) = 0;
    *(undefined2 *)(iVar8 + 0x3786) = 0;
  }
  pcVar10 = strstr(DAT_000581a8,"video_roi");
  if (pcVar10 == (char *)0x0) {
    *(undefined4 *)(DAT_000b9380 + 0x5aa0) = 0;
    return 1;
  }
  return 1;
}


