/* mainctrl (1237474c62b4e91c4041742bab182538ad3a524c1455d8bd71c4f4559f90a7ff), Ghidra 12.2 headless; requested 000398e0 */
/* function FUN_000398e0 @ 000398e0 */

undefined4 FUN_000398e0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 uStack_440;
  undefined4 local_43c;
  undefined4 uStack_438;
  undefined4 local_434;
  undefined4 uStack_430;
  undefined4 local_42c;
  char local_428 [128];
  int local_3a8;
  char acStack_3a4 [140];
  uint local_318;
  undefined1 auStack_314 [252];
  char local_218 [516];
  
  P2pReadLoginStatus(&local_3a8);
  local_318 = 0;
  memset(auStack_314,0,0xfc);
  read_file_to_buffer("/mnt/nand/bind_user.txt",&local_318,0xff);
  if ((local_318 & 0xff) == 0) {
    DebugPrint(8,7,"[%s:%u]not get bind user\n\n",DAT_00039a7c,0x39c);
    return 0;
  }
  if ((((local_3a8 == 0) || (DAT_000b3164 == '\0')) || (DAT_000aaf28 == '\0')) ||
     (DAT_000aaf48 == '\0')) {
    uVar3 = 0xffffffff;
  }
  else {
    local_428[0] = '\0';
    local_428[1] = '\0';
    local_428[2] = '\0';
    local_428[3] = '\0';
    memset(local_428 + 4,0,0x7c);
    strcpy(local_428,acStack_3a4);
    pcVar1 = strstr(local_428,"@aiot_cam_");
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
    }
    local_448 = 0x31;
    local_444 = 0;
    uStack_440 = 0;
    local_43c = 0;
    uStack_438 = 0;
    local_434 = 0;
    uStack_430 = 0;
    local_42c = 0;
    pcVar1 = strcasestr(DAT_00039a74,"MOBILE");
    if (pcVar1 != (char *)0x0) {
      local_448 = CONCAT22(local_448._2_2_,0x30);
    }
    local_218[0] = '\0';
    local_218[1] = '\0';
    local_218[2] = '\0';
    local_218[3] = '\0';
    memset(local_218 + 4,0,0x1fc);
    snprintf(local_218,0x200,
             "/opt/ch/dev_bind --location --url %s --imei %s --lac %s --ci %s  --mnc %s --dn %s --ua %s --bindtype %d"
             ,"/anjia/apiv2/UploadResetInfo",DAT_00039a80,DAT_00039a78 + -0x20,DAT_00039a78,
             (char *)&local_448,local_428,(char *)&local_318,param_1);
    pcVar1 = local_218;
    DebugPrint(8,7,"[%s:%u]%s\n",DAT_00039a7c,0x3b9,local_218);
    iVar2 = mysystem(local_218);
    if (iVar2 != 0) {
      DebugPrint(8,7,"[%s:%u]upload location info  failed.\n",DAT_00039a7c,0x3be,pcVar1);
      return 0xffffffff;
    }
    DebugPrint(8,7,"[%s:%u]upload location info  success.\n",DAT_00039a7c,0x3c3,pcVar1);
    uVar3 = 0;
  }
  return uVar3;
}


