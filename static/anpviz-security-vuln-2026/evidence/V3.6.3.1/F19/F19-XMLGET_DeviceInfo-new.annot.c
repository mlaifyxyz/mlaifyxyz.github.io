/* libtools.so (f8b5d696eeedf96627281df63171e56ec4aa767c44ff4dca16a2615622ef1bd8), Ghidra 12.2 headless; requested 00085c50 */
/* function XMLGET_DeviceInfo @ 00085c50 */

undefined4 * XMLGET_DeviceInfo(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char local_60 [68];
  
  local_60[0] = '\0';
  local_60[1] = '\0';
  local_60[2] = '\0';
  local_60[3] = '\0';
  local_60[4] = '\0';
  local_60[5] = '\0';
  local_60[6] = '\0';
  local_60[7] = '\0';
  local_60[8] = '\0';
  local_60[9] = '\0';
  local_60[10] = '\0';
  local_60[0xb] = '\0';
  local_60[0xc] = '\0';
  local_60[0xd] = '\0';
  local_60[0xe] = '\0';
  local_60[0xf] = '\0';
  local_60[0x10] = '\0';
  local_60[0x11] = '\0';
  local_60[0x12] = '\0';
  local_60[0x13] = '\0';
  local_60[0x14] = '\0';
  local_60[0x15] = '\0';
  local_60[0x16] = '\0';
  local_60[0x17] = '\0';
  local_60[0x18] = '\0';
  local_60[0x19] = '\0';
  local_60[0x1a] = '\0';
  local_60[0x1b] = '\0';
  local_60[0x1c] = '\0';
  local_60[0x1d] = '\0';
  local_60[0x1e] = '\0';
  local_60[0x1f] = '\0';
  local_60[0x20] = '\0';
  local_60[0x21] = '\0';
  local_60[0x22] = '\0';
  local_60[0x23] = '\0';
  local_60[0x24] = '\0';
  local_60[0x25] = '\0';
  local_60[0x26] = '\0';
  local_60[0x27] = '\0';
  local_60[0x28] = '\0';
  local_60[0x29] = '\0';
  local_60[0x2a] = '\0';
  local_60[0x2b] = '\0';
  local_60[0x2c] = '\0';
  local_60[0x2d] = '\0';
  local_60[0x2e] = '\0';
  local_60[0x2f] = '\0';
  local_60[0x30] = '\0';
  local_60[0x31] = '\0';
  local_60[0x32] = '\0';
  local_60[0x33] = '\0';
  local_60[0x34] = '\0';
  local_60[0x35] = '\0';
  local_60[0x36] = '\0';
  local_60[0x37] = '\0';
  local_60[0x38] = '\0';
  local_60[0x39] = '\0';
  local_60[0x3a] = '\0';
  local_60[0x3b] = '\0';
  local_60[0x3c] = '\0';
  local_60[0x3d] = '\0';
  local_60[0x3e] = '\0';
  local_60[0x3f] = '\0';
  pcVar1 = (char *)get_uuid();
  if (pcVar1 != (char *)0x0) {
    strncpy(local_60 + 0x20,pcVar1,0x1f);
  }
  GetSN(local_60);
  DebugPrint(8,7,DAT_00085d0c + 0x85cae /*"[%s:%u]Get device SN:%s, UUID:%s

"*/,DAT_00085d08 + 0x85ca8 /*"MakeDeviceInfo"*/,0x456d,local_60,local_60 + 0x20);
  puVar2 = malloc(1000);
  uVar4 = *(undefined4 *)(DAT_00085d10 + 0x85cc2 /*"iceInfo
"*/);
  uVar5 = *(undefined4 *)(DAT_00085d10 + 0x85cc6 /*"nfo
"*/);
  uVar6 = *(undefined4 *)(DAT_00085d10 + 0x85cca /*"
"*/);
  *puVar2 = *(undefined4 *)(DAT_00085d10 + 0x85cbe /*"<DeviceInfo
"*/);
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  iVar3 = DAT_00085d14;
  *(short *)(puVar2 + 3) = (short)uVar6;
  iVar3 = snprintf((char *)((int)puVar2 + 0xd),0x3da,(char *)(iVar3 + 0x85cdc),local_60);
  pcVar1 = (char *)((int)puVar2 + 0xd) + iVar3;
  iVar3 = snprintf(pcVar1,(int)puVar2 + (999 - (int)pcVar1),(char *)(DAT_00085d18 + 0x85ce6 /*"UUID="%s"
"*/),
                   local_60 + 0x20);
  snprintf(pcVar1 + iVar3,(int)puVar2 + (999 - (int)(pcVar1 + iVar3)),
           (char *)(DAT_00085d1c + 0x85cf6 /*"/>
"*/));
  return puVar2;
}


