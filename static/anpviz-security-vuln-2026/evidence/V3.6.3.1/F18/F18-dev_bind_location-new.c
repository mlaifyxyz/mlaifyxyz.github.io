/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 0003b520 */
/* function FUN_0003b520 @ 0003b520 */

undefined4 FUN_0003b520(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 uStack_448;
  undefined4 local_444;
  undefined4 uStack_440;
  undefined4 local_43c;
  undefined4 uStack_438;
  undefined4 local_434;
  char local_430 [128];
  int local_3b0;
  char acStack_3ac [140];
  char local_320 [256];
  char local_220 [512];
  
  P2pReadLoginStatus(&local_3b0);
  local_320[0] = '\0';
  local_320[1] = '\0';
  local_320[2] = '\0';
  local_320[3] = '\0';
  memset(local_320 + 4,0,0xfc);
  read_file_to_buffer("/mnt/nand/bind_user.txt",local_320,0xff);
  pcVar3 = DAT_0003b6f0;
  if (local_320[0] == '\0') {
    uVar4 = 0x3f4;
    pcVar3 = "[%s:%u]not get bind user\n\n";
  }
  else {
    DebugPrint(8,7,
               "[%s:%u]logined=%d, imei=%s, last lac=%s,  last ci=%s, cur lac = %s, cur ci = %s,  binduser=%s, bind_type=%d\n"
               ,DAT_0003b6f4,0x3f8,local_3b0,DAT_0003b6f0,&DAT_000b11b8,&DAT_000b11d8,&DAT_000b1238,
               &DAT_000b1218,local_320,param_1);
    if ((((local_3b0 == 0) || (*pcVar3 == '\0')) || (DAT_000b11b8 == '\0')) ||
       ((DAT_000b11d8 == '\0' || (local_320[0] == '\0')))) {
      return 0xffffffff;
    }
    local_430[0] = '\0';
    local_430[1] = '\0';
    local_430[2] = '\0';
    local_430[3] = '\0';
    memset(local_430 + 4,0,0x7c);
    strcpy(local_430,acStack_3ac);
    pcVar1 = strstr(local_430,"@aiot_cam_");
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
    }
    local_450 = 0x31;
    local_44c = 0;
    uStack_448 = 0;
    local_444 = 0;
    uStack_440 = 0;
    local_43c = 0;
    uStack_438 = 0;
    local_434 = 0;
    pcVar1 = strcasestr(DAT_0003b6f8,"MOBILE");
    if (pcVar1 != (char *)0x0) {
      local_450 = CONCAT22(local_450._2_2_,0x30);
    }
    local_220[0] = '\0';
    local_220[1] = '\0';
    local_220[2] = '\0';
    local_220[3] = '\0';
    memset(local_220 + 4,0,0x1fc);
    snprintf(local_220,0x200,
             "/opt/ch/dev_bind --location --url %s --imei %s --lac %s --ci %s  --mnc %s --dn %s --ua %s --bindtype %d"
             ,"/anjia/apiv2/UploadResetInfo",pcVar3,&DAT_000b11b8,&DAT_000b11d8,(char *)&local_450,
             local_430,local_320,param_1);
    pcVar3 = local_220;
    DebugPrint(8,7,"[%s:%u]%s\n",DAT_0003b6f4,0x413,local_220);
    iVar2 = mysystem(local_220);
    if (iVar2 == 0) {
      DebugPrint(8,7,"[%s:%u]upload location info  success.\n",DAT_0003b6f4,0x41d,pcVar3);
      return 0;
    }
    pcVar3 = "[%s:%u]upload location info  failed.\n";
    uVar4 = 0x418;
  }
  DebugPrint(8,7,pcVar3,DAT_0003b6f4,uVar4);
  return 0xffffffff;
}


