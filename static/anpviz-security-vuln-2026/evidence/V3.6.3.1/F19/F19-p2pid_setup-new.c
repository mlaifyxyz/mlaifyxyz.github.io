/* mainctrl (2176c0a29a1e2080b0f3462b9751eae6348f85c8bcfe598bf3f7c3c58a2b76ba), Ghidra 12.2 headless; requested 0005d2a0 */
/* function FUN_0005d2a0 @ 0005d2a0 */

void FUN_0005d2a0(void)

{
  char *__dest;
  int iVar1;
  char *__src;
  undefined4 uVar2;
  char local_94 [64];
  undefined4 local_54;
  char acStack_50 [32];
  char acStack_30 [32];
  
  if (*(int *)(DAT_000b9380 + 0x4eb0) == 0) {
    DebugPrint(8,7,"[%s:%u]P2P ENABLE=0\n",DAT_0005d528,0x34b3);
    return;
  }
  if (DAT_000b2400 < 1) {
    if (DAT_000b2410 < 1) {
      if (DAT_000b241c < 1) {
        if (DAT_000b2450 < 1) {
          if (DAT_000b2454 < 1) {
            if (DAT_000b2404 < 1) {
              if (DAT_000b2408 < 1) {
                if (DAT_000b240c < 1) {
                  if (DAT_000b23fc < 1) {
                    if (0 < DAT_000b21a8) {
                      uVar2 = 0x12;
                      iVar1 = access("/mnt/nand/dotid.txt",0);
                      if (iVar1 != 0) goto LAB_0005d36a;
                    }
                  }
                  else {
                    iVar1 = access("/mnt/nand/aiot.id",0);
                    uVar2 = 0x10;
                    if (iVar1 != 0) goto LAB_0005d338;
                  }
                }
                else {
                  iVar1 = access("/mnt/nand/tencentiot.txt",0);
                  if (iVar1 != 0) {
                    uVar2 = 0xf;
                    goto LAB_0005d36a;
                  }
                }
              }
              else {
                iVar1 = access("/mnt/nand/skyworth.txt",0);
                if (iVar1 != 0) {
                  uVar2 = 0xc;
                  iVar1 = access("/opt/ch/flag.cmcc4g",0);
                  if (iVar1 == 0) {
                    uVar2 = 0xd;
                  }
                  goto LAB_0005d474;
                }
              }
            }
            else {
              iVar1 = access("/mnt/nand/skyworth.txt",0);
              if (iVar1 != 0) {
                uVar2 = 6;
LAB_0005d474:
                DebugPrint(8,7,"[%s:%u]TYPE=%d\n",DAT_0005d528,0x3503,uVar2);
                if (DAT_000b2678 == 0) {
                  iVar1 = get_cloud_authcode_needed();
                  if (iVar1 == 0) {
                    return;
                  }
                  if (*(char *)(DAT_000b9380 + 0x4eb8) != '\0') {
                    return;
                  }
                }
                goto LAB_0005d384;
              }
            }
          }
          else {
            iVar1 = access("/mnt/nand/tuya.id",0);
            if (iVar1 != 0) {
              uVar2 = 5;
              goto LAB_0005d36a;
            }
          }
        }
        else {
          iVar1 = access("/mnt/nand/tutkuid.txt",0);
          if (iVar1 != 0) {
            uVar2 = 3;
            goto LAB_0005d36a;
          }
        }
      }
      else {
        iVar1 = access("/mnt/nand/eyeplus_sid.txt",0);
        if (iVar1 != 0) {
          uVar2 = 2;
          goto LAB_0005d36a;
        }
      }
    }
    else {
      iVar1 = access("/mnt/nand/goolinkid.txt",0);
      if (iVar1 != 0) {
        uVar2 = 1;
        goto LAB_0005d36a;
      }
    }
  }
  else {
    iVar1 = access("/mnt/nand/danale.conf",0);
    if (iVar1 != 0) {
      uVar2 = 0;
LAB_0005d36a:
      DebugPrint(8,7,"[%s:%u]TYPE=%d\n",DAT_0005d528,0x3503,uVar2);
LAB_0005d384:
      local_94[8] = '\0';
      local_94[9] = '\0';
      local_94[10] = '\0';
      local_94[0xb] = '\0';
      __dest = local_94 + 0x20;
      local_94[0] = '\0';
      local_94[1] = '\0';
      local_94[2] = '\0';
      local_94[3] = '\0';
      local_94[4] = '\0';
      local_94[5] = '\0';
      local_94[6] = '\0';
      local_94[7] = '\0';
      local_94[0xc] = '\0';
      local_94[0xd] = '\0';
      local_94[0xe] = '\0';
      local_94[0xf] = '\0';
      local_94[0x10] = '\0';
      local_94[0x11] = '\0';
      local_94[0x12] = '\0';
      local_94[0x13] = '\0';
      local_94[0x14] = '\0';
      local_94[0x15] = '\0';
      local_94[0x16] = '\0';
      local_94[0x17] = '\0';
      local_94[0x18] = '\0';
      local_94[0x19] = '\0';
      local_94[0x1a] = '\0';
      local_94[0x1b] = '\0';
      local_94[0x1c] = '\0';
      local_94[0x1d] = '\0';
      local_94[0x1e] = '\0';
      local_94[0x1f] = '\0';
      local_94[0x20] = '\0';
      local_94[0x21] = '\0';
      local_94[0x22] = '\0';
      local_94[0x23] = '\0';
      local_94[0x24] = '\0';
      local_94[0x25] = '\0';
      local_94[0x26] = '\0';
      local_94[0x27] = '\0';
      local_94[0x28] = '\0';
      local_94[0x29] = '\0';
      local_94[0x2a] = '\0';
      local_94[0x2b] = '\0';
      local_94[0x2c] = '\0';
      local_94[0x2d] = '\0';
      local_94[0x2e] = '\0';
      local_94[0x2f] = '\0';
      local_94[0x30] = '\0';
      local_94[0x31] = '\0';
      local_94[0x32] = '\0';
      local_94[0x33] = '\0';
      local_94[0x34] = '\0';
      local_94[0x35] = '\0';
      local_94[0x36] = '\0';
      local_94[0x37] = '\0';
      local_94[0x38] = '\0';
      local_94[0x39] = '\0';
      local_94[0x3a] = '\0';
      local_94[0x3b] = '\0';
      local_94[0x3c] = '\0';
      local_94[0x3d] = '\0';
      local_94[0x3e] = '\0';
      local_94[0x3f] = '\0';
      GetSN_ex(local_94);
      __src = (char *)get_uuid();
      if (__src != (char *)0x0) {
        strncpy(__dest,__src,0x1f);
      }
      printf("[%s:%d]sn: %s, UUID: %s\n\n",DAT_0005d528,0x352f,local_94,__dest);
      strcpy(acStack_50,local_94);
      strcpy(acStack_30,__dest);
      local_54 = uVar2;
      set_p2pid_cb(&DAT_0004ef85);
      start_p2pid_thread(&local_54);
      return;
    }
  }
  uVar2 = 0xffffffff;
LAB_0005d338:
  DebugPrint(8,7,"[%s:%u]TYPE=%d\n",DAT_0005d528,0x3503,uVar2);
  return;
}


