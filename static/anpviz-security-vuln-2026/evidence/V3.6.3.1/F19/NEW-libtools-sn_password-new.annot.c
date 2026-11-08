/* ===== sn_password @ 0009aed4 ===== */

void sn_password(char *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  byte *pbVar13;
  char *__format;
  byte bStack_235;
  byte local_234 [32];
  char local_214 [63];
  byte local_1d5;
  undefined1 auStack_1d0 [168];
  char local_128 [4];
  undefined4 auStack_124 [64];
  
  local_128[0] = '\0';
  local_128[1] = '\0';
  local_128[2] = '\0';
  local_128[3] = '\0';
  memset(auStack_124,0,0xfc);
  local_214[0] = '\0';
  local_214[1] = '\0';
  local_214[2] = '\0';
  local_214[3] = '\0';
  memset(local_214 + 4,0,0x3d);
  sVar1 = strlen(param_1);
  sVar2 = strlen(param_2);
  if ((int)sVar1 < 1 && (int)sVar2 < 1) {
    iVar6 = 0;
  }
  else {
    iVar8 = 0;
    iVar10 = 0;
    iVar12 = 0;
    do {
      iVar6 = iVar10 + 1;
      iVar4 = iVar12 + 1;
      if (iVar12 < (int)sVar1) {
        local_128[iVar10] = param_1[iVar12];
        if (0xe5 < iVar6) break;
        if (iVar8 < (int)sVar2) goto LAB_0009af64;
      }
      else {
        iVar6 = iVar10;
        iVar4 = iVar12;
        if ((int)sVar2 <= iVar8) break;
LAB_0009af64:
        pcVar11 = param_2 + iVar8;
        iVar10 = iVar6 + 1;
        iVar8 = iVar8 + 1;
        local_128[iVar6] = *pcVar11;
        iVar6 = iVar10;
        if (0xe5 < iVar10) break;
      }
      iVar10 = iVar6;
      iVar12 = iVar4;
    } while (iVar4 < (int)sVar1 || iVar8 < (int)sVar2);
  }
  local_128[iVar6] = '\0';
  sVar1 = strlen(local_128);
  __format = (char *)(DAT_0009b024 + 0x9af92 /*"%02x"*/);
  uVar5 = *(undefined4 *)(DAT_0009b020 + 0x9af94 /*"<embedded constant redacted>"*/);
  uVar7 = *(undefined4 *)(DAT_0009b020 + 0x9af98 /*"<embedded constant redacted>"*/);
  uVar9 = *(undefined4 *)(DAT_0009b020 + 0x9af9c /*"<embedded constant redacted>"*/);
  *(undefined4 *)(local_128 + sVar1) = *(undefined4 *)(DAT_0009b020 + 0x9af90 /*"<embedded constant redacted>"*/);
  pbVar13 = &bStack_235;
  uVar3 = *(undefined4 *)(DAT_0009b020 + 0x9afa0 /*"<embedded constant redacted>"*/);
  *(undefined4 *)((int)auStack_124 + sVar1) = uVar5;
  *(undefined4 *)((int)auStack_124 + sVar1 + 4) = uVar7;
  *(undefined4 *)((int)auStack_124 + sVar1 + 0xc) = uVar3;
  *(undefined4 *)((int)auStack_124 + sVar1 + 8) = uVar9;
  sn_sha256_init(auStack_1d0);
  sVar1 = strlen(local_128);
  sn_sha256_update(auStack_1d0,local_128,sVar1);
  sn_sha256_final(auStack_1d0,local_234);
  pcVar11 = local_214;
  do {
    pbVar13 = pbVar13 + 1;
    sprintf(pcVar11,__format,(uint)*pbVar13);
    pcVar11 = pcVar11 + 2;
  } while (pbVar13 != local_234 + 0x1f);
  strncpy(param_3,local_214 + (local_1d5 & 0xf),0xc);
  iVar6 = 0;
  param_3[0xc] = '\0';
  do {
    if (-1 < iVar6 << 0x1f) {
      if ((byte)param_3[iVar6] - 0x61 < 0x1a) {
        param_3[iVar6] = param_3[iVar6] - 0x20;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xc);
  return;
}


