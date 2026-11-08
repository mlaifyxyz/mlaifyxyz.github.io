/* web_server (f79f62acbb821b3cd6c802b7e84a027842f45c56dfe4677b92bffefc6dce3a93), Ghidra 12.2 headless; requested 00052d0c */
/* function FUN_00052d0c @ 00052d0c */

void FUN_00052d0c(void)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined4 local_33c;
  undefined4 uStack_338;
  undefined4 local_334;
  undefined4 uStack_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined4 uStack_320;
  undefined4 local_31c;
  undefined1 auStack_318 [28];
  int local_2fc;
  
  pbVar3 = DAT_00053040;
  DebugPrint(1,7,DAT_00053044,DAT_00053048,0x306f);
  *pbVar3 = *pbVar3 & 0xfe;
  memset(&local_31c,0,0x2fc);
  MsgGetMediaStreamConfig(&local_31c);
  puVar8 = DAT_000530b4;
  puVar4 = DAT_0005304c;
  local_31c = 0;
  if (local_2fc == 1) {
    *pbVar3 = *pbVar3 | 1;
  }
  memset(auStack_318,0,0x3c);
  FUN_0008f834(&local_31c);
  uVar10 = net_get_ifaddr(&local_31c);
  *puVar4 = uVar10;
  uVar10 = net_get_gateway();
  local_33c = 0;
  uStack_338 = 0;
  local_334 = 0;
  uStack_330 = 0;
  local_32c = 0;
  uStack_328 = 0;
  local_324 = 0;
  uStack_320 = 0;
  *puVar8 = uVar10;
  uVar11 = GetIpAddrStr_ex(*puVar4,&local_33c);
  uVar10 = GetIpAddrStr_ex(*puVar8,&local_32c);
  pcVar5 = DAT_00053050;
  DebugPrint(1,7,DAT_00053054,DAT_00053048,0x3084,&local_31c,uVar11,uVar10);
  memset(pcVar5,0,0x80);
  pcVar12 = (char *)GetIpAddrStr_ex(*puVar4,&local_33c);
  strncpy(pcVar5,pcVar12,0x80);
  pcVar12 = pcVar5;
  DebugPrint(1,7,DAT_00053058,DAT_00053048,0x308a,pcVar5);
  FUN_0001e32c(DAT_0005305c,0);
  if ((ushort)(*(short *)(pbVar3 + 0x84) - 1U) < 0xfffe) {
    DebugPrint(1,7,DAT_00053060,DAT_00053048,0x3093,pcVar12);
    uVar2 = *(undefined2 *)(pbVar3 + 0x84);
    *(undefined2 *)(DAT_00053064 + 0x84) = uVar2;
    bVar1 = pcVar5[-4];
    pcVar5[-4] = bVar1 | 8;
    uVar11 = (bVar1 & 0x1f) >> 4;
    uVar10 = 1;
    DebugPrint(1,7,DAT_00053068,DAT_00053048,0x3096,uVar2,uVar11,1);
  }
  piVar7 = DAT_00053074;
  puVar6 = DAT_00053070;
  iVar13 = DAT_0005306c;
  *DAT_00053070 = (uint)(0 < *(int *)(DAT_0005306c + 0x1bc));
  if ((*DAT_00053078 == 1) && (*(int *)(iVar13 + 0x134) == 0 && *(int *)(iVar13 + 0xac) == 0)) {
    *piVar7 = 1;
    FUN_0002d034(10);
  }
  else {
    FUN_0002d000();
  }
  piVar9 = DAT_000530b8;
  DebugPrint(8,7,DAT_0005307c,DAT_00053048,0x30c9,*piVar7,uVar11,uVar10);
  uVar10 = DAT_0005308c;
  pcVar5 = DAT_00053080;
  printf(DAT_00053084,*piVar7,*puVar6,*DAT_00053088,*piVar9);
  DebugPrint(1,7,DAT_00053090,DAT_00053048,0x30d0);
  FUN_0002050c(uVar10);
  FUN_000204a0(pcVar5);
  DebugPrint(1,7,DAT_00053094,DAT_00053048,0x30d3,uVar10,pcVar5);
  *piVar9 = 1;
  FUN_00052874();
  FUN_00052688();
  FUN_000526c0();
  FUN_000528b0();
  if (pbVar3[0x2858] == 0) {
    strncpy(DAT_00053098,pcVar5,0x3f);
  }
  if (*piVar7 == 0) {
    FUN_00051d1c();
    FUN_00051dcc();
    FUN_000509c8();
  }
  else {
    DebugPrint(1,7,DAT_0005309c,DAT_000530a0,0x2421);
    iVar13 = FUN_0004ff7c(DAT_000530a4,0x780,0x438);
    uVar10 = 0x1e;
    iVar14 = FUN_00051c40(DAT_000530a8);
    if ((iVar13 != 0) && (iVar14 != 0)) {
      strcpy((char *)(iVar13 + 0xd4),(char *)(iVar14 + 8));
      strcpy((char *)(iVar13 + 0x180),(char *)(iVar14 + 8));
      *(undefined4 *)(iVar13 + 0x17c) = 1;
    }
    iVar13 = FUN_000508bc(DAT_000530ac,0);
    if (iVar13 != 0) {
      FUN_0004afa8(iVar13,0x500,0x2d0,0x200,0x80,0x1000,uVar10);
    }
    iVar13 = FUN_000508bc(DAT_000530ac,0);
    if (iVar13 != 0) {
      FUN_0004afa8(iVar13,0x280,0x168,0x80,0x40,0x400);
    }
  }
  FUN_0004c15c();
  FUN_0004bd94();
  FUN_0004b510();
  FUN_0004b534();
  FUN_0004fdf4();
  FUN_0004b6fc();
  FUN_0004f1a8();
  FUN_0004f1c4(*(undefined4 *)(pbVar3 + 0x372c));
  FUN_00050c20();
  FUN_00050c78();
  FUN_000512b4();
  FUN_000512c8();
  FUN_0004ec14();
  if (*(int *)(pbVar3 + 0x3720) != 0) {
    FUN_0004e38c(*(int *)(pbVar3 + 0x3720) + 4);
    FUN_0004e6f0(*(int *)(pbVar3 + 0x3720) + 0xa14);
  }
  FUN_0006ccec();
  FUN_0004c4e8();
  FUN_0004c694();
  FUN_000515e8();
  FUN_000495fc();
  FUN_0004f250();
  FUN_0004f264();
  FUN_0004f298();
  FUN_0004f950();
  FUN_0004f744();
  FUN_0004fa9c();
  DebugPrint(1,7,DAT_000530b0,DAT_000530e0,0x3145);
  return;
}


