
float10 FUN_009708e0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  double local_44;
  float local_3c;
  double local_38;
  undefined8 local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar6 = param_2;
  pfVar8 = param_1;
  pfVar9 = param_2 + 3;
  pfVar7 = param_2 + 6;
  local_24 = param_2[8] * param_2[4] - param_2[7] * param_2[5];
  local_20 = param_2[5] * *pfVar7 - *pfVar9 * param_2[8];
  local_1c = param_2[7] * *pfVar9 - *pfVar7 * param_2[4];
  local_38 = (double)param_1[4];
  local_30 = (double)param_1[3];
  local_44 = (double)param_1[5];
  local_3c = ABS(local_1c * param_1[5] + param_1[4] * local_20 + param_1[3] * local_24);
  fVar12 = (float10)FUN_00982c30();
  fVar13 = (float10)FUN_00982c30();
  if ((float)fVar13 * (float)fVar12 * 1e-05 < local_3c) {
    local_24 = *param_2 - *param_1;
    local_20 = param_2[1] - param_1[1];
    local_1c = param_2[2] - param_1[2];
    local_48 = param_1[5] * param_1[5] + param_1[3] * param_1[3] + param_1[4] * param_1[4];
    local_54 = -(param_2[5] * param_1[5] + *pfVar9 * param_1[3] + param_2[4] * param_1[4]);
    local_64 = -(param_2[8] * param_1[5] + *pfVar7 * param_1[3] + param_2[7] * param_1[4]);
    fVar1 = param_2[5] * param_2[5] + *pfVar9 * *pfVar9 + param_2[4] * param_2[4];
    local_50 = param_2[8] * param_2[5] + *pfVar7 * *pfVar9 + param_2[7] * param_2[4];
    local_68 = param_2[8] * param_2[8] + *pfVar7 * *pfVar7 + param_2[7] * param_2[7];
    fVar2 = -(local_24 * param_1[3] + local_20 * param_1[4] + local_1c * param_1[5]);
    local_44 = (double)CONCAT44(local_44._4_4_,fVar2);
    local_4c = param_2[5] * local_1c + local_24 * *pfVar9 + param_2[4] * local_20;
    local_3c = local_24 * *pfVar7 + param_2[7] * local_20 + param_2[8] * local_1c;
    local_6c = fVar1 * local_68 - local_50 * local_50;
    local_60 = local_64 * local_50 - local_54 * local_68;
    fVar3 = local_50 * local_54 - local_64 * fVar1;
    local_5c = fVar3 * local_64 + local_60 * local_54 + local_48 * local_6c;
    local_58 = ABS(local_5c);
    if (1e-05 <= local_58) {
      local_58 = local_64 * local_54 - local_48 * local_50;
      local_5c = 1.0 / local_5c;
      fVar4 = local_5c * -fVar2;
      fVar5 = -local_4c * local_5c;
      local_38 = (double)CONCAT44(local_38._4_4_,fVar5);
      local_5c = -local_3c * local_5c;
      *param_3 = local_5c * fVar3 + fVar4 * local_6c + fVar5 * local_60;
      *param_4 = local_5c * local_58 +
                 fVar4 * local_60 + (local_68 * local_48 - local_64 * local_64) * fVar5;
      fVar2 = fVar1 * local_48 - local_54 * local_54;
      local_30 = (double)CONCAT44(local_30._4_4_,fVar2);
      fVar2 = fVar5 * local_58 + fVar3 * fVar4 + fVar2 * local_5c;
      *param_5 = fVar2;
      if (0.0 <= *param_3) {
        if (*param_3 <= 1.0) {
          if (0.0 <= *param_4) {
            if (*param_4 <= 1.0) {
              if (fVar2 < 0.0) {
                local_18 = *param_2;
                local_14 = param_2[1];
                local_10 = param_2[2];
                local_c = *pfVar9;
                local_8 = param_2[4];
                local_4 = param_2[5];
                fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_4);
                *param_5 = 0.0;
                return (float10)(float)fVar12;
              }
              if (1.0 < fVar2) {
                pfVar7 = (float *)FUN_0047d9b0(&local_24,pfVar7);
                local_18 = *pfVar7;
                local_14 = pfVar7[1];
                local_c = *pfVar9;
                local_10 = pfVar7[2];
                local_8 = param_2[4];
                local_4 = param_2[5];
                fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_4);
                *param_5 = 1.0;
                return (float10)(float)fVar12;
              }
              fVar12 = (float10)FUN_0047d9e0(&local_24);
              fVar13 = (float10)fVar2;
              fVar14 = (float10)2.0;
              return (float10)ABS((float)(((float10)*param_4 * (float10)fVar1 +
                                           (float10)local_54 * (float10)*param_3 +
                                           (float10)local_50 * fVar13 + (float10)local_4c * fVar14)
                                          * (float10)*param_4 +
                                          (float10)*param_3 *
                                          ((float10)local_44._0_4_ * fVar14 +
                                          fVar13 * (float10)local_64 +
                                          (float10)*param_3 * (float10)local_48 +
                                          (float10)*param_4 * (float10)local_54) +
                                          fVar13 * (fVar14 * (float10)local_3c +
                                                   fVar13 * (float10)local_68 +
                                                   (float10)*param_3 * (float10)local_64 +
                                                   (float10)*param_4 * (float10)local_50) + fVar12))
              ;
            }
            if (fVar2 < 0.0) {
              pfVar8 = (float *)FUN_0047d9b0(&local_24,pfVar9);
              local_18 = *pfVar8;
              local_14 = pfVar8[1];
              local_c = *pfVar7;
              local_10 = pfVar8[2];
              local_8 = param_2[7];
              local_4 = param_2[8];
              fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
              *param_4 = 1.0;
              local_18 = *param_2;
              local_14 = param_2[1];
              local_10 = param_2[2];
              local_c = *pfVar9;
              local_8 = param_2[4];
              local_4 = param_2[5];
              fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
              param_2 = (float *)(float)fVar12;
              if ((float)fVar13 < (float)fVar12) {
                *param_3 = local_64;
                *param_4 = local_6c;
                *param_5 = 0.0;
                return (float10)(float)fVar13;
              }
              goto LAB_009726c8;
            }
            if (fVar2 <= 1.0) {
              pfVar9 = (float *)FUN_0047d9b0(&local_24,pfVar9);
              local_18 = *pfVar9;
              local_14 = pfVar9[1];
              local_c = *pfVar7;
              local_10 = pfVar9[2];
              local_8 = param_2[7];
              local_4 = param_2[8];
              fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
              *param_4 = 1.0;
              return (float10)(float)fVar12;
            }
            pfVar8 = (float *)FUN_0047d9b0(&local_24,pfVar9);
            local_18 = *pfVar8;
            local_14 = pfVar8[1];
            local_c = *pfVar7;
            local_10 = pfVar8[2];
            local_8 = param_2[7];
            local_4 = param_2[8];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
            *param_4 = 1.0;
          }
          else {
            if (fVar2 < 0.0) {
              local_18 = *param_2;
              local_14 = param_2[1];
              local_10 = param_2[2];
              local_c = *pfVar7;
              local_8 = param_2[7];
              local_4 = param_2[8];
              fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
              *param_4 = 0.0;
              local_18 = *param_2;
              local_14 = param_2[1];
              local_10 = param_2[2];
              local_c = *pfVar9;
              local_8 = param_2[4];
              local_4 = param_2[5];
              fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
              param_2 = (float *)(float)fVar12;
              if ((float)fVar13 < (float)fVar12) {
                *param_3 = local_64;
                *param_4 = local_6c;
                *param_5 = 0.0;
                return (float10)(float)fVar13;
              }
              goto LAB_009726c8;
            }
            if (fVar2 <= 1.0) {
              local_18 = *param_2;
              local_14 = param_2[1];
              local_10 = param_2[2];
              local_c = *pfVar7;
              local_8 = param_2[7];
              local_4 = param_2[8];
              fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
              *param_4 = 0.0;
              return (float10)(float)fVar12;
            }
            local_18 = *param_2;
            local_14 = param_2[1];
            local_10 = param_2[2];
            local_c = *pfVar7;
            local_8 = param_2[7];
            local_4 = param_2[8];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
            *param_4 = 0.0;
          }
          param_2 = (float *)(float)fVar12;
          pfVar7 = (float *)FUN_0047d9b0(&local_24,pfVar7);
          local_18 = *pfVar7;
          local_14 = pfVar7[1];
          local_c = *pfVar9;
          local_10 = pfVar7[2];
          local_8 = pfVar6[4];
          local_4 = pfVar6[5];
          fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
          if ((float)fVar12 < (float)param_2) {
            *param_3 = local_64;
            *param_4 = local_6c;
            *param_5 = 1.0;
            return (float10)(float)fVar12;
          }
          goto LAB_009726c8;
        }
        pfVar10 = param_5;
        if (0.0 <= *param_4) {
          if (*param_4 <= 1.0) {
            if (fVar2 < 0.0) {
              local_18 = *param_2;
              local_14 = param_2[1];
              local_10 = param_2[2];
              local_c = *pfVar9;
              local_8 = param_2[4];
              local_4 = param_2[5];
              fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_4);
              *param_5 = 0.0;
              puVar11 = (undefined8 *)FUN_0047d9b0(&local_24,param_1 + 3);
              local_30 = (double)*puVar11;
              local_28 = *(float *)(puVar11 + 1);
              fVar13 = (float10)FUN_00976b10(&local_30,param_2,&local_6c,&local_68);
              param_2 = (float *)(float)fVar12;
              if ((float)fVar13 < (float)fVar12) {
                *param_3 = 1.0;
                *param_4 = local_6c;
                *param_5 = local_68;
                return (float10)(float)fVar13;
              }
              goto LAB_009726c8;
            }
            if (fVar2 <= 1.0) {
              puVar11 = (undefined8 *)FUN_0047d9b0(&local_24,param_1 + 3);
              local_30 = (double)*puVar11;
              local_28 = *(float *)(puVar11 + 1);
              fVar12 = (float10)FUN_00976b10(&local_30,param_2,param_4,param_5);
              *param_3 = 1.0;
              return (float10)(float)fVar12;
            }
            pfVar7 = (float *)FUN_0047d9b0(&local_24,pfVar7);
            local_18 = *pfVar7;
            local_14 = pfVar7[1];
            local_c = *pfVar9;
            local_10 = pfVar7[2];
            local_8 = param_2[4];
            local_4 = param_2[5];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_4);
          }
          else {
            if (fVar2 < 0.0) {
              pfVar10 = (float *)FUN_0047d9b0(&local_24,pfVar9);
              local_18 = *pfVar10;
              local_14 = pfVar10[1];
              local_10 = pfVar10[2];
              local_c = *pfVar7;
              local_8 = param_2[7];
              local_4 = param_2[8];
              fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
              *param_4 = 1.0;
              local_18 = *param_2;
              local_14 = param_2[1];
              local_10 = param_2[2];
              local_c = *pfVar9;
              local_8 = param_2[4];
              local_4 = param_2[5];
              fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
              local_68 = 0.0;
              goto LAB_0097207f;
            }
            if (1.0 < fVar2) {
              pfVar8 = (float *)FUN_0047d9b0(&local_24,pfVar9);
              local_18 = *pfVar8;
              local_14 = pfVar8[1];
              local_10 = pfVar8[2];
              local_c = *pfVar7;
              local_8 = param_2[7];
              local_4 = param_2[8];
              fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
              *param_4 = 1.0;
              pfVar7 = (float *)FUN_0047d9b0(&local_24,pfVar7);
              local_18 = *pfVar7;
              local_14 = pfVar7[1];
              local_10 = pfVar7[2];
              local_c = *pfVar9;
              local_8 = param_2[4];
              local_4 = param_2[5];
              fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
              local_68 = 1.0;
              param_2 = (float *)(float)fVar12;
              if ((float)fVar13 < (float)fVar12) {
                *param_3 = local_64;
                *param_4 = local_6c;
                *param_5 = 1.0;
                param_2 = (float *)(float)fVar13;
              }
              goto LAB_009721da;
            }
            pfVar9 = (float *)FUN_0047d9b0(&local_24,pfVar9);
            local_18 = *pfVar9;
            local_14 = pfVar9[1];
            local_c = *pfVar7;
            local_10 = pfVar9[2];
            local_8 = param_2[7];
            local_4 = param_2[8];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
            pfVar10 = param_4;
          }
          param_2 = (float *)(float)fVar12;
          fVar1 = 1.0;
LAB_009721cf:
          *pfVar10 = fVar1;
        }
        else {
          if (0.0 <= fVar2) {
            if (fVar2 <= 1.0) {
              local_18 = *param_2;
              local_14 = param_2[1];
              local_10 = param_2[2];
              local_c = *pfVar7;
              local_8 = param_2[7];
              local_4 = param_2[8];
              fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
              *param_4 = 0.0;
              FUN_00976b10(param_1,param_2,&local_6c,&local_68);
              puVar11 = (undefined8 *)FUN_0047d9b0(&local_24,param_1 + 3);
              local_30 = (double)*puVar11;
              local_28 = *(float *)(puVar11 + 1);
              fVar13 = (float10)FUN_00976b10(&local_30,param_2,&local_6c,&local_68);
              param_2 = (float *)(float)fVar12;
              if ((float)fVar13 < (float)fVar12) {
                *param_3 = 1.0;
                *param_4 = local_6c;
                *param_5 = local_68;
                return (float10)(float)fVar13;
              }
              goto LAB_009726c8;
            }
            local_18 = *param_2;
            local_14 = param_2[1];
            local_10 = param_2[2];
            local_c = *pfVar7;
            local_8 = param_2[7];
            local_4 = param_2[8];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
            *param_4 = 0.0;
            pfVar7 = (float *)FUN_0047d9b0(&local_24,pfVar7);
            local_18 = *pfVar7;
            local_14 = pfVar7[1];
            local_c = *pfVar9;
            local_10 = pfVar7[2];
            local_8 = param_2[4];
            local_4 = param_2[5];
            fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
            local_68 = 1.0;
LAB_0097207f:
            param_2 = (float *)(float)fVar12;
            param_1 = (float *)(float)fVar13;
            if ((float)param_1 < (float)param_2) {
              param_2 = param_1;
              *param_3 = local_64;
              *param_4 = local_6c;
              *param_5 = local_68;
            }
            puVar11 = (undefined8 *)FUN_0047d9b0(&local_24,pfVar8 + 3);
            local_30 = (double)*puVar11;
            local_28 = *(float *)(puVar11 + 1);
            fVar12 = (float10)FUN_00976b10(&local_30,pfVar6,&local_6c,&local_68);
            if ((float)fVar12 < (float)param_2) {
              fVar1 = 1.0;
              param_2 = (float *)(float)fVar12;
              goto LAB_00972131;
            }
            goto LAB_009726c8;
          }
          local_18 = *param_2;
          local_14 = param_2[1];
          local_10 = param_2[2];
          local_c = *pfVar7;
          local_8 = param_2[7];
          local_4 = param_2[8];
          fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
          *param_4 = 0.0;
          local_18 = *param_2;
          local_14 = param_2[1];
          local_10 = param_2[2];
          local_c = *pfVar9;
          local_8 = param_2[4];
          local_4 = param_2[5];
          fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
          fVar1 = 0.0;
          local_68 = 0.0;
          param_2 = (float *)(float)fVar12;
          if ((float)fVar13 < (float)fVar12) {
            *param_3 = local_64;
            *param_4 = local_6c;
            param_2 = (float *)(float)fVar13;
            goto LAB_009721cf;
          }
        }
LAB_009721da:
        puVar11 = (undefined8 *)FUN_0047d9b0(&local_24,param_1 + 3);
        local_30 = (double)*puVar11;
        local_28 = *(float *)(puVar11 + 1);
        fVar12 = (float10)FUN_00976b10(&local_30,pfVar6,&local_6c,&local_68);
        if ((float)fVar12 < (float)param_2) {
          fVar1 = 1.0;
          param_2 = (float *)(float)fVar12;
          goto LAB_00972238;
        }
        goto LAB_009726c8;
      }
      if (0.0 <= *param_4) {
        if (1.0 < *param_4) {
          if (fVar2 < 0.0) {
            pfVar8 = (float *)FUN_0047d9b0(&local_24,pfVar9);
            local_18 = *pfVar8;
            local_14 = pfVar8[1];
            local_c = *pfVar7;
            local_10 = pfVar8[2];
            local_8 = param_2[7];
            local_4 = param_2[8];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
            *param_4 = 1.0;
            local_18 = *param_2;
            local_14 = param_2[1];
            local_10 = param_2[2];
            local_c = *pfVar9;
            local_8 = param_2[4];
            local_4 = param_2[5];
            fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
            param_2 = (float *)(float)fVar12;
            if ((float)fVar13 < (float)fVar12) {
              *param_3 = local_64;
              *param_4 = local_6c;
              *param_5 = 0.0;
              param_2 = (float *)(float)fVar13;
            }
            goto LAB_009712db;
          }
          if (1.0 < fVar2) {
            pfVar8 = (float *)FUN_0047d9b0(&local_24,pfVar9);
            local_18 = *pfVar8;
            local_14 = pfVar8[1];
            local_c = *pfVar7;
            local_10 = pfVar8[2];
            local_8 = param_2[7];
            local_4 = param_2[8];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
            *param_4 = 1.0;
            pfVar7 = (float *)FUN_0047d9b0(&local_24,pfVar7);
            local_18 = *pfVar7;
            local_14 = pfVar7[1];
            local_c = *pfVar9;
            local_10 = pfVar7[2];
            local_8 = param_2[4];
            local_4 = param_2[5];
            fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
            local_68 = 1.0;
            param_2 = (float *)(float)fVar12;
            if ((float)fVar13 < (float)fVar12) {
              *param_3 = local_64;
              *param_4 = local_6c;
              *param_5 = 1.0;
              param_2 = (float *)(float)fVar13;
            }
            fVar12 = (float10)FUN_00976b10(param_1,pfVar6,&local_6c,&local_68);
          }
          else {
            pfVar9 = (float *)FUN_0047d9b0(&local_24,pfVar9);
            local_18 = *pfVar9;
            local_14 = pfVar9[1];
            local_10 = pfVar9[2];
            local_c = *pfVar7;
            local_8 = param_2[7];
            local_4 = param_2[8];
            fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
            *param_4 = 1.0;
            fVar12 = (float10)FUN_00976b10(param_1,param_2,&local_6c,&local_68);
            param_2 = (float *)(float)fVar13;
          }
        }
        else {
          if (fVar2 < 0.0) {
            local_18 = *param_2;
            local_14 = param_2[1];
            local_10 = param_2[2];
            local_c = *pfVar9;
            local_8 = param_2[4];
            local_4 = param_2[5];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_4);
            *param_5 = 0.0;
            fVar13 = (float10)FUN_00976b10(param_1,param_2,&local_6c,&local_68);
            param_2 = (float *)(float)fVar12;
            if ((float)fVar13 < (float)fVar12) {
              *param_3 = 0.0;
              *param_4 = local_6c;
              *param_5 = local_68;
              return (float10)(float)fVar13;
            }
            goto LAB_009726c8;
          }
          if (fVar2 <= 1.0) {
            fVar12 = (float10)FUN_00976b10(param_1,param_2,param_4,param_5);
            *param_3 = 0.0;
            return (float10)(float)fVar12;
          }
          pfVar7 = (float *)FUN_0047d9b0(&local_24,pfVar7);
          local_18 = *pfVar7;
          local_14 = pfVar7[1];
          local_10 = pfVar7[2];
          local_c = *pfVar9;
          local_8 = param_2[4];
          local_4 = param_2[5];
          fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_4);
          *param_5 = 1.0;
          fVar12 = (float10)FUN_00976b10(param_1,param_2,&local_6c,&local_68);
          param_2 = (float *)(float)fVar13;
        }
        if ((float)fVar12 < (float)param_2) {
          fVar1 = 0.0;
          param_2 = (float *)(float)fVar12;
LAB_00972131:
          *param_3 = fVar1;
          *param_4 = local_6c;
          *param_5 = local_68;
          return (float10)(float)param_2;
        }
      }
      else {
        if (0.0 <= fVar2) {
          if (1.0 < fVar2) {
            local_18 = *param_2;
            local_14 = param_2[1];
            local_10 = param_2[2];
            local_c = *pfVar7;
            local_8 = param_2[7];
            local_4 = param_2[8];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
            *param_4 = 0.0;
            pfVar7 = (float *)FUN_0047d9b0(&local_24,pfVar7);
            local_18 = *pfVar7;
            local_14 = pfVar7[1];
            local_10 = pfVar7[2];
            local_c = *pfVar9;
            local_8 = param_2[4];
            local_4 = param_2[5];
            fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
            local_68 = 1.0;
            param_2 = (float *)(float)fVar12;
            if ((float)fVar13 < (float)fVar12) {
              *param_3 = local_64;
              *param_4 = local_6c;
              *param_5 = 1.0;
              param_2 = (float *)(float)fVar13;
            }
            fVar12 = (float10)FUN_00976b10(param_1,pfVar6,&local_6c,&local_68);
            if ((float)fVar12 < (float)param_2) {
              *param_3 = 0.0;
              *param_4 = local_6c;
              *param_5 = local_68;
              return (float10)(float)fVar12;
            }
          }
          else {
            local_18 = *param_2;
            local_14 = param_2[1];
            local_10 = param_2[2];
            local_c = *pfVar7;
            local_8 = param_2[7];
            local_4 = param_2[8];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
            *param_4 = 0.0;
            fVar13 = (float10)FUN_00976b10(param_1,param_2,&local_6c,&local_68);
            param_2 = (float *)(float)fVar12;
            if ((float)fVar13 < (float)fVar12) {
              *param_3 = 0.0;
              *param_4 = local_6c;
              *param_5 = local_68;
              return (float10)(float)fVar13;
            }
          }
          goto LAB_009726c8;
        }
        local_18 = *param_2;
        local_14 = param_2[1];
        local_10 = param_2[2];
        local_c = *pfVar7;
        local_8 = param_2[7];
        local_4 = param_2[8];
        fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_5);
        *param_4 = 0.0;
        local_18 = *param_2;
        local_14 = param_2[1];
        local_10 = param_2[2];
        local_c = *pfVar9;
        local_8 = param_2[4];
        local_4 = param_2[5];
        fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
        param_2 = (float *)(float)fVar12;
        if ((float)fVar13 < (float)fVar12) {
          *param_3 = local_64;
          *param_4 = local_6c;
          *param_5 = 0.0;
          param_2 = (float *)(float)fVar13;
        }
LAB_009712db:
        local_68 = 0.0;
        fVar12 = (float10)FUN_00976b10(param_1,pfVar6,&local_6c,&local_68);
        if ((float)fVar12 < (float)param_2) {
          fVar1 = 0.0;
          param_2 = (float *)(float)fVar12;
LAB_00972238:
          *param_3 = fVar1;
          *param_4 = local_6c;
          *param_5 = local_68;
          return (float10)(float)param_2;
        }
      }
      goto LAB_009726c8;
    }
  }
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  local_c = *pfVar9;
  local_8 = param_2[4];
  local_4 = param_2[5];
  fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,param_3,param_4);
  *param_5 = 0.0;
  local_c = *pfVar7;
  local_8 = param_2[7];
  local_4 = param_2[8];
  fVar13 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_68);
  local_6c = 0.0;
  param_2 = (float *)(float)fVar12;
  if ((float)fVar13 < (float)fVar12) {
    *param_3 = local_64;
    *param_4 = 0.0;
    *param_5 = local_68;
    param_2 = (float *)(float)fVar13;
  }
  local_24 = *pfVar7 + *pfVar6;
  local_20 = pfVar6[7] + pfVar6[1];
  local_c = *pfVar9;
  local_1c = pfVar6[8] + pfVar6[2];
  local_8 = pfVar6[4];
  local_4 = pfVar6[5];
  local_18 = local_24;
  local_14 = local_20;
  local_10 = local_1c;
  fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_6c);
  local_68 = 1.0;
  if ((float)fVar12 < (float)param_2) {
    *param_3 = local_64;
    *param_4 = local_6c;
    *param_5 = 1.0;
    param_2 = (float *)(float)fVar12;
  }
  local_24 = *pfVar9 + *pfVar6;
  local_20 = pfVar6[4] + pfVar6[1];
  local_c = *pfVar7;
  local_1c = pfVar6[5] + pfVar6[2];
  local_8 = pfVar6[7];
  local_4 = pfVar6[8];
  local_18 = local_24;
  local_14 = local_20;
  local_10 = local_1c;
  fVar12 = (float10)FUN_0096fcd0(param_1,&local_18,&local_64,&local_68);
  local_6c = 1.0;
  if ((float)fVar12 < (float)param_2) {
    *param_3 = local_64;
    *param_4 = 1.0;
    *param_5 = local_68;
    param_2 = (float *)(float)fVar12;
  }
  fVar12 = (float10)FUN_00976b10(param_1,pfVar6,&local_6c,&local_68);
  local_64 = 0.0;
  if ((float)fVar12 < (float)param_2) {
    *param_3 = 0.0;
    *param_4 = local_6c;
    *param_5 = local_68;
    param_2 = (float *)(float)fVar12;
  }
  local_24 = *param_1 + param_1[3];
  local_20 = param_1[4] + param_1[1];
  local_30 = (double)CONCAT44(local_20,local_24);
  local_28 = param_1[5] + param_1[2];
  local_1c = local_28;
  fVar12 = (float10)FUN_00976b10(&local_30,pfVar6,&local_6c,&local_68);
  if ((float)fVar12 < (float)param_2) {
    *param_3 = 1.0;
    *param_4 = local_6c;
    *param_5 = local_68;
    return (float10)(float)fVar12;
  }
LAB_009726c8:
  return (float10)(float)param_2;
}



float10 FUN_009726e0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  float10 fVar12;
  float10 fVar13;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  double local_40;
  double local_38;
  undefined8 local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar7 = param_2;
  local_24 = *param_2 - *param_1;
  pfVar9 = param_2 + 3;
  pfVar8 = param_2 + 6;
  local_20 = param_2[1] - param_1[1];
  local_1c = param_2[2] - param_1[2];
  local_44 = param_1[5] * param_1[5] + param_1[3] * param_1[3] + param_1[4] * param_1[4];
  local_48 = -(param_2[5] * param_1[5] + *pfVar9 * param_1[3] + param_2[4] * param_1[4]);
  local_5c = -(param_2[8] * param_1[5] + *pfVar8 * param_1[3] + param_2[7] * param_1[4]);
  local_58 = param_2[5] * param_2[5] + *pfVar9 * *pfVar9 + param_2[4] * param_2[4];
  local_50 = param_2[8] * param_2[5] + *pfVar9 * *pfVar8 + param_2[7] * param_2[4];
  local_54 = param_2[8] * param_2[8] + *pfVar8 * *pfVar8 + param_2[7] * param_2[7];
  local_c = param_2[8] * param_2[4] - param_2[7] * param_2[5];
  local_8 = *pfVar8 * param_2[5] - param_2[8] * *pfVar9;
  local_4 = *pfVar9 * param_2[7] - *pfVar8 * param_2[4];
  local_38 = (double)param_1[4];
  local_40 = (double)param_1[3];
  local_30 = (double)param_1[5];
  local_4c = ABS(local_4 * param_1[5] + param_1[4] * local_8 + param_1[3] * local_c);
  fVar12 = (float10)FUN_00982c30();
  fVar13 = (float10)FUN_00982c30();
  if (local_4c <= (float)fVar13 * (float)fVar12 * 1e-05) {
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = param_2[2];
    local_18 = *pfVar9;
    local_14 = param_2[4];
    local_10 = param_2[5];
    fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_4);
    *param_5 = 0.0;
    local_18 = *pfVar8;
    local_14 = param_2[7];
    local_10 = param_2[8];
    fVar13 = (float10)FUN_0096fcd0(param_1,&local_24,&local_54,&local_58);
    local_5c = 0.0;
    param_2 = (float *)(float)fVar12;
    if ((float)fVar13 < (float)fVar12) {
      *param_3 = local_54;
      *param_4 = 0.0;
      *param_5 = local_58;
      param_2 = (float *)(float)fVar13;
    }
    local_24 = local_24 + *pfVar9;
    local_20 = pfVar7[4] + local_20;
    local_1c = pfVar7[5] + local_1c;
    local_18 = local_18 - *pfVar9;
    local_14 = local_14 - pfVar7[4];
    local_10 = local_10 - pfVar7[5];
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,&local_54,&local_58);
    local_5c = 1.0 - local_58;
    if ((float)fVar12 < (float)param_2) {
      *param_3 = local_54;
      *param_4 = local_5c;
      *param_5 = local_58;
      param_2 = (float *)(float)fVar12;
    }
    fVar12 = (float10)FUN_00975df0(param_1,pfVar7,&local_5c,&local_58);
    local_54 = 0.0;
    if ((float)fVar12 < (float)param_2) {
      *param_3 = 0.0;
      *param_4 = local_5c;
      *param_5 = local_58;
      param_2 = (float *)(float)fVar12;
    }
    local_c = *param_1 + param_1[3];
    local_8 = param_1[4] + param_1[1];
    local_30 = (double)CONCAT44(local_8,local_c);
    local_28 = param_1[5] + param_1[2];
    local_4 = local_28;
    fVar12 = (float10)FUN_00975df0(&local_30,pfVar7,&local_5c,&local_58);
    if ((float)fVar12 < (float)param_2) {
      *param_3 = 1.0;
      *param_4 = local_5c;
      *param_5 = local_58;
      return (float10)(float)fVar12;
    }
  }
  else {
    fVar4 = local_58 * local_54 - local_50 * local_50;
    fVar3 = local_5c * local_50 - local_48 * local_54;
    fVar2 = local_50 * local_48 - local_58 * local_5c;
    local_4c = local_5c * local_48 - local_44 * local_50;
    fVar5 = 1.0 / (fVar2 * local_5c + fVar4 * local_44 + fVar3 * local_48);
    local_50 = --(param_1[5] * local_1c + param_1[3] * local_24 + param_1[4] * local_20) * fVar5;
    fVar6 = -(param_2[5] * local_1c + *pfVar9 * local_24 + param_2[4] * local_20) * fVar5;
    fVar5 = -(param_2[8] * local_1c + *pfVar8 * local_24 + param_2[7] * local_20) * fVar5;
    *param_3 = fVar5 * fVar2 + local_50 * fVar4 + fVar6 * fVar3;
    fVar1 = local_44 * local_54 - local_5c * local_5c;
    *param_4 = fVar5 * local_4c + local_50 * fVar3 + fVar6 * fVar1;
    fVar3 = (local_58 * local_44 - local_48 * local_48) * fVar5 +
            local_4c * fVar6 + fVar2 * local_50;
    *param_5 = fVar3;
    local_5c = fVar6;
    local_58 = fVar4;
    local_54 = fVar2;
    local_44 = fVar1;
    if (0.0 <= *param_3) {
      fVar1 = *param_4 + fVar3;
      if (1.0 < *param_3) {
        if (fVar1 < 1.0 == (fVar1 == 1.0)) {
          if (0.0 <= *param_4) {
            if (0.0 <= fVar3) {
              pfVar8 = (float *)FUN_0047d9b0(&local_c,pfVar9);
              local_24 = *pfVar8;
              local_20 = pfVar8[1];
              local_1c = pfVar8[2];
              puVar10 = (undefined4 *)FUN_004121a0(&local_c,pfVar9);
              local_18 = (float)*puVar10;
              local_14 = (float)puVar10[1];
              local_10 = (float)puVar10[2];
              fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
              *param_4 = 1.0 - *param_5;
              puVar11 = (undefined8 *)FUN_0047d9b0(&local_c,param_1 + 3);
              local_30 = (double)*puVar11;
              local_28 = *(float *)(puVar11 + 1);
              fVar13 = (float10)FUN_00975df0(&local_30,param_2,&local_5c,&local_58);
              param_2 = (float *)(float)fVar12;
              if ((float)fVar13 < (float)fVar12) {
                *param_3 = 1.0;
                *param_4 = local_5c;
                *param_5 = local_58;
                return (float10)(float)fVar13;
              }
              goto LAB_0097395f;
            }
            local_24 = *param_2;
            local_20 = param_2[1];
            local_1c = param_2[2];
            local_18 = *pfVar9;
            local_14 = param_2[4];
            local_10 = param_2[5];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_4);
            *param_5 = 0.0;
          }
          else {
            local_24 = *param_2;
            local_20 = param_2[1];
            local_1c = param_2[2];
            local_18 = *pfVar8;
            local_14 = param_2[7];
            local_10 = param_2[8];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
            *param_4 = 0.0;
          }
          param_2 = (float *)(float)fVar12;
          pfVar8 = (float *)FUN_0047d9b0(&local_c,pfVar9);
          local_24 = *pfVar8;
          local_20 = pfVar8[1];
          local_1c = pfVar8[2];
          puVar10 = (undefined4 *)FUN_004121a0(&local_c,pfVar9);
          local_18 = (float)*puVar10;
          local_14 = (float)puVar10[1];
          local_10 = (float)puVar10[2];
          fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,&local_54,&local_58);
          local_5c = 1.0 - local_58;
          if ((float)fVar12 < (float)param_2) {
            *param_3 = local_54;
            *param_4 = local_5c;
            *param_5 = local_58;
            param_2 = (float *)(float)fVar12;
          }
          puVar11 = (undefined8 *)FUN_0047d9b0(&local_c,param_1 + 3);
          local_30 = (double)*puVar11;
          local_28 = *(float *)(puVar11 + 1);
          fVar12 = (float10)FUN_00975df0(&local_30,pfVar7,&local_5c,&local_58);
          if ((float)fVar12 < (float)param_2) {
            *param_3 = 1.0;
            *param_4 = local_5c;
            *param_5 = local_58;
            return (float10)(float)fVar12;
          }
        }
        else if (0.0 <= *param_4) {
          if (0.0 <= fVar3) {
            puVar11 = (undefined8 *)FUN_0047d9b0(&local_c,param_1 + 3);
            local_30 = (double)*puVar11;
            local_28 = *(float *)(puVar11 + 1);
            fVar12 = (float10)FUN_00975df0(&local_30,param_2,param_4,param_5);
            *param_3 = 1.0;
            return (float10)(float)fVar12;
          }
          local_24 = *param_2;
          local_20 = param_2[1];
          local_1c = param_2[2];
          local_14 = param_2[4];
          local_18 = *pfVar9;
          local_10 = param_2[5];
          fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_4);
          *param_5 = 0.0;
          puVar11 = (undefined8 *)FUN_0047d9b0(&local_c,param_1 + 3);
          local_30 = (double)*puVar11;
          local_28 = *(float *)(puVar11 + 1);
          fVar13 = (float10)FUN_00975df0(&local_30,param_2,&local_5c,&local_58);
          param_2 = (float *)(float)fVar12;
          if ((float)fVar13 < (float)fVar12) {
            fVar1 = 1.0;
            param_2 = (float *)(float)fVar13;
            goto LAB_00972cbf;
          }
        }
        else {
          local_24 = *param_2;
          local_20 = param_2[1];
          local_1c = param_2[2];
          local_18 = *pfVar8;
          local_14 = param_2[7];
          local_10 = param_2[8];
          if (0.0 <= fVar3) {
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
            *param_4 = 0.0;
            puVar11 = (undefined8 *)FUN_0047d9b0(&local_c,param_1 + 3);
            local_30 = (double)*puVar11;
            local_28 = *(float *)(puVar11 + 1);
            fVar13 = (float10)FUN_00975df0(&local_30,param_2,&local_5c,&local_58);
            param_2 = (float *)(float)fVar12;
            if ((float)fVar13 < (float)fVar12) {
              fVar1 = 1.0;
              param_2 = (float *)(float)fVar13;
              goto LAB_00972c0d;
            }
          }
          else {
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
            *param_4 = 0.0;
            local_24 = *param_2;
            local_20 = param_2[1];
            local_1c = param_2[2];
            local_18 = *pfVar9;
            local_14 = param_2[4];
            local_10 = param_2[5];
            fVar13 = (float10)FUN_0096fcd0(param_1,&local_24,&local_54,&local_5c);
            local_58 = 0.0;
            param_2 = (float *)(float)fVar12;
            if ((float)fVar13 < (float)fVar12) {
              *param_3 = local_54;
              *param_4 = local_5c;
              *param_5 = 0.0;
              param_2 = (float *)(float)fVar13;
            }
            puVar11 = (undefined8 *)FUN_0047d9b0(&local_c,param_1 + 3);
            local_30 = (double)*puVar11;
            local_28 = *(float *)(puVar11 + 1);
            fVar12 = (float10)FUN_00975df0(&local_30,pfVar7,&local_5c,&local_58);
            if ((float)fVar12 < (float)param_2) {
              fVar1 = 1.0;
              param_2 = (float *)(float)fVar12;
              goto LAB_00972b98;
            }
          }
        }
      }
      else if (fVar1 < 1.0 == (fVar1 == 1.0)) {
        if (0.0 <= *param_4) {
          if (0.0 <= fVar3) {
            pfVar8 = (float *)FUN_0047d9b0(&local_c,pfVar9);
            local_24 = *pfVar8;
            local_20 = pfVar8[1];
            local_1c = pfVar8[2];
            puVar10 = (undefined4 *)FUN_004121a0(&local_c,pfVar9);
            local_18 = (float)*puVar10;
            local_14 = (float)puVar10[1];
            local_10 = (float)puVar10[2];
            fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
            *param_4 = 1.0 - *param_5;
            return (float10)(float)fVar12;
          }
          local_24 = *param_2;
          local_20 = param_2[1];
          local_1c = param_2[2];
          local_14 = param_2[4];
          local_18 = *pfVar9;
          local_10 = param_2[5];
          fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_4);
          pfVar8 = param_5;
        }
        else {
          local_24 = *param_2;
          local_20 = param_2[1];
          local_1c = param_2[2];
          local_18 = *pfVar8;
          local_14 = param_2[7];
          local_10 = param_2[8];
          fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
          pfVar8 = param_4;
        }
        param_2 = (float *)(float)fVar12;
        *pfVar8 = 0.0;
        pfVar8 = (float *)FUN_0047d9b0(&local_c,pfVar9);
        local_24 = *pfVar8;
        local_20 = pfVar8[1];
        local_1c = pfVar8[2];
        puVar10 = (undefined4 *)FUN_004121a0(&local_c,pfVar9);
        local_18 = (float)*puVar10;
        local_14 = (float)puVar10[1];
        local_10 = (float)puVar10[2];
        fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,&local_54,&local_58);
        if ((float)fVar12 < (float)param_2) {
          *param_3 = local_54;
          *param_4 = 1.0 - local_58;
          *param_5 = local_58;
          return (float10)(float)fVar12;
        }
      }
      else {
        if (0.0 <= *param_4) {
          if (0.0 <= fVar3) {
            return (float10)0.0;
          }
          local_24 = *param_2;
          local_20 = param_2[1];
          local_1c = param_2[2];
          local_14 = param_2[4];
          local_18 = *pfVar9;
          local_10 = param_2[5];
          fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_4);
          *param_5 = 0.0;
          return (float10)(float)fVar12;
        }
        local_24 = *param_2;
        local_20 = param_2[1];
        local_1c = param_2[2];
        local_18 = *pfVar8;
        local_14 = param_2[7];
        local_10 = param_2[8];
        if (0.0 <= fVar3) {
          fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
          *param_4 = 0.0;
          return (float10)(float)fVar12;
        }
        fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
        *param_4 = 0.0;
        local_24 = *param_2;
        local_20 = param_2[1];
        local_1c = param_2[2];
        local_18 = *pfVar9;
        local_14 = param_2[4];
        local_10 = param_2[5];
        fVar13 = (float10)FUN_0096fcd0(param_1,&local_24,&local_54,&local_5c);
        param_2 = (float *)(float)fVar12;
        if ((float)fVar13 < (float)fVar12) {
          *param_3 = local_54;
          *param_4 = local_5c;
          *param_5 = 0.0;
          return (float10)(float)fVar13;
        }
      }
    }
    else if (*param_4 + fVar3 < 1.0 == (*param_4 + fVar3 == 1.0)) {
      if (0.0 <= *param_4) {
        if (0.0 <= fVar3) {
          pfVar8 = (float *)FUN_0047d9b0(&local_c,pfVar9);
          local_24 = *pfVar8;
          local_20 = pfVar8[1];
          local_1c = pfVar8[2];
          puVar10 = (undefined4 *)FUN_004121a0(&local_c,pfVar9);
          local_18 = (float)*puVar10;
          local_14 = (float)puVar10[1];
          local_10 = (float)puVar10[2];
          fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
          *param_4 = 1.0 - *param_5;
          fVar13 = (float10)FUN_00975df0(param_1,param_2,&local_5c,&local_58);
          param_2 = (float *)(float)fVar12;
          if ((float)fVar13 < (float)fVar12) {
            *param_3 = 0.0;
            *param_4 = local_5c;
            *param_5 = local_58;
            return (float10)(float)fVar13;
          }
          goto LAB_0097395f;
        }
        local_24 = *param_2;
        local_20 = param_2[1];
        local_1c = param_2[2];
        local_18 = *pfVar9;
        local_14 = param_2[4];
        local_10 = param_2[5];
        fVar13 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_4);
        *param_5 = 0.0;
        pfVar8 = (float *)FUN_0047d9b0(&local_c,pfVar9);
        local_24 = *pfVar8;
        local_20 = pfVar8[1];
        local_1c = pfVar8[2];
        pfVar9 = (float *)FUN_004121a0(&local_c,pfVar9);
        local_18 = *pfVar9;
        local_14 = pfVar9[1];
        local_10 = pfVar9[2];
        fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,&local_54,&local_58);
      }
      else {
        local_24 = *param_2;
        local_20 = param_2[1];
        local_1c = param_2[2];
        local_18 = *pfVar8;
        local_14 = param_2[7];
        local_10 = param_2[8];
        fVar13 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
        *param_4 = 0.0;
        local_24 = *param_2 + *pfVar9;
        local_20 = param_2[4] + param_2[1];
        local_1c = param_2[5] + param_2[2];
        local_18 = *pfVar8 - *pfVar9;
        local_14 = param_2[7] - param_2[4];
        local_10 = param_2[8] - param_2[5];
        local_c = local_18;
        local_8 = local_14;
        local_4 = local_10;
        fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,&local_54,&local_58);
      }
      param_2 = (float *)(float)fVar13;
      local_5c = 1.0 - local_58;
      if ((float)fVar12 < (float)param_2) {
        *param_3 = local_54;
        *param_4 = local_5c;
        *param_5 = local_58;
        param_2 = (float *)(float)fVar12;
      }
      fVar12 = (float10)FUN_00975df0(param_1,pfVar7,&local_5c,&local_58);
      if ((float)fVar12 < (float)param_2) {
        *param_3 = 0.0;
        *param_4 = local_5c;
        *param_5 = local_58;
        return (float10)(float)fVar12;
      }
    }
    else if (0.0 <= *param_4) {
      if (0.0 <= fVar3) {
        fVar12 = (float10)FUN_00975df0(param_1,param_2,param_4,param_5);
        *param_3 = 0.0;
        return (float10)(float)fVar12;
      }
      local_24 = *param_2;
      local_20 = param_2[1];
      local_1c = param_2[2];
      local_14 = param_2[4];
      local_18 = *pfVar9;
      local_10 = param_2[5];
      fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_4);
      *param_5 = 0.0;
      fVar13 = (float10)FUN_00975df0(param_1,param_2,&local_5c,&local_58);
      param_2 = (float *)(float)fVar12;
      if ((float)fVar13 < (float)fVar12) {
        fVar1 = 0.0;
        param_2 = (float *)(float)fVar13;
LAB_00972cbf:
        *param_3 = fVar1;
        *param_4 = local_5c;
        *param_5 = local_58;
        return (float10)(float)param_2;
      }
    }
    else {
      local_24 = *param_2;
      local_20 = param_2[1];
      local_1c = param_2[2];
      local_18 = *pfVar8;
      local_14 = param_2[7];
      local_10 = param_2[8];
      if (0.0 <= fVar3) {
        fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
        *param_4 = 0.0;
        fVar13 = (float10)FUN_00975df0(param_1,param_2,&local_5c,&local_58);
        param_2 = (float *)(float)fVar12;
        if ((float)fVar13 < (float)fVar12) {
          fVar1 = 0.0;
          param_2 = (float *)(float)fVar13;
LAB_00972c0d:
          *param_3 = fVar1;
          *param_4 = local_5c;
          *param_5 = local_58;
          return (float10)(float)param_2;
        }
      }
      else {
        fVar12 = (float10)FUN_0096fcd0(param_1,&local_24,param_3,param_5);
        *param_4 = 0.0;
        local_24 = *param_2;
        local_20 = param_2[1];
        local_1c = param_2[2];
        local_18 = *pfVar9;
        local_14 = param_2[4];
        local_10 = param_2[5];
        fVar13 = (float10)FUN_0096fcd0(param_1,&local_24,&local_54,&local_5c);
        local_58 = 0.0;
        param_2 = (float *)(float)fVar12;
        if ((float)fVar13 < (float)fVar12) {
          *param_3 = local_54;
          *param_4 = local_5c;
          *param_5 = 0.0;
          param_2 = (float *)(float)fVar13;
        }
        fVar12 = (float10)FUN_00975df0(param_1,pfVar7,&local_5c,&local_58);
        if ((float)fVar12 < (float)param_2) {
          fVar1 = 0.0;
          param_2 = (float *)(float)fVar12;
LAB_00972b98:
          *param_3 = fVar1;
          *param_4 = local_5c;
          *param_5 = local_58;
          return (float10)(float)param_2;
        }
      }
    }
  }
LAB_0097395f:
  return (float10)(float)param_2;
}



float10 FUN_00973bf0(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 *param_5
                    ,undefined4 *param_6)

{
  float *pfVar1;
  float10 fVar2;
  float10 fVar3;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = param_1;
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  local_c = param_1[3];
  local_8 = param_1[4];
  local_4 = param_1[5];
  fVar2 = (float10)FUN_009708e0(&local_18,param_2,param_3,param_5,param_6);
  *param_4 = 0.0;
  local_c = param_1[6];
  local_8 = param_1[7];
  local_4 = param_1[8];
  fVar3 = (float10)FUN_009708e0(&local_18,param_2,&local_34,&local_28,&local_2c);
  local_30 = 0.0;
  param_1 = (float *)(float)fVar2;
  if ((float)fVar3 < (float)fVar2) {
    *param_3 = 0.0;
    *param_4 = local_34;
    *param_5 = local_28;
    *param_6 = local_2c;
    param_1 = (float *)(float)fVar3;
  }
  local_18 = pfVar1[3] + local_18;
  local_14 = pfVar1[4] + local_14;
  local_10 = pfVar1[5] + local_10;
  local_24 = local_c - pfVar1[3];
  local_20 = local_8 - pfVar1[4];
  local_1c = local_4 - pfVar1[5];
  local_c = local_24;
  local_8 = local_20;
  local_4 = local_1c;
  fVar2 = (float10)FUN_009708e0(&local_18,param_2,&local_34,&local_28,&local_2c);
  local_30 = 1.0 - local_34;
  if ((float)fVar2 < (float)param_1) {
    *param_3 = local_30;
    *param_4 = local_34;
    *param_5 = local_28;
    *param_6 = local_2c;
    param_1 = (float *)(float)fVar2;
  }
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  local_c = param_2[3];
  local_8 = param_2[4];
  local_4 = param_2[5];
  fVar2 = (float10)FUN_009726e0(&local_18,pfVar1,&local_28,&local_30,&local_34);
  local_2c = 0;
  if ((float)fVar2 < (float)param_1) {
    *param_3 = local_30;
    *param_4 = local_34;
    *param_5 = local_28;
    *param_6 = 0;
    param_1 = (float *)(float)fVar2;
  }
  local_c = param_2[6];
  local_8 = param_2[7];
  local_4 = param_2[8];
  fVar2 = (float10)FUN_009726e0(&local_18,pfVar1,&local_2c,&local_30,&local_34);
  local_28 = 0;
  if ((float)fVar2 < (float)param_1) {
    *param_3 = local_30;
    *param_4 = local_34;
    *param_5 = 0;
    *param_6 = local_2c;
    param_1 = (float *)(float)fVar2;
  }
  local_24 = param_2[6] + *param_2;
  local_20 = param_2[7] + param_2[1];
  local_c = param_2[3];
  local_1c = param_2[8] + param_2[2];
  local_8 = param_2[4];
  local_4 = param_2[5];
  local_18 = local_24;
  local_14 = local_20;
  local_10 = local_1c;
  fVar2 = (float10)FUN_009726e0(&local_18,pfVar1,&local_28,&local_30,&local_34);
  local_2c = 0x3f800000;
  if ((float)fVar2 < (float)param_1) {
    *param_3 = local_30;
    *param_4 = local_34;
    *param_5 = local_28;
    *param_6 = 0x3f800000;
    param_1 = (float *)(float)fVar2;
  }
  local_24 = *param_2 + param_2[3];
  local_20 = param_2[4] + param_2[1];
  local_c = param_2[6];
  local_1c = param_2[5] + param_2[2];
  local_8 = param_2[7];
  local_4 = param_2[8];
  local_18 = local_24;
  local_14 = local_20;
  local_10 = local_1c;
  fVar2 = (float10)FUN_009726e0(&local_18,pfVar1,&local_2c,&local_30,&local_34);
  if ((float10)(float)param_1 <= (float10)(float)fVar2) {
    return (float10)(float)param_1;
  }
  *param_3 = local_30;
  *param_4 = local_34;
  *param_5 = 0x3f800000;
  *param_6 = local_2c;
  return (float10)(float)fVar2;
}



float10 FUN_00974000(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  int in_ECX;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24 [9];
  
  iVar2 = *(int *)(in_ECX + 0x38);
  local_3c = *(float *)(iVar2 + 0x20);
  local_38 = *(float *)(iVar2 + 0x24);
  local_34 = *(float *)(iVar2 + 0x28);
  local_30 = *(undefined4 *)(iVar2 + 0x2c);
  local_2c = *(undefined4 *)(iVar2 + 0x30);
  local_28 = *(undefined4 *)(iVar2 + 0x34);
  fVar1 = *param_1;
  pfVar3 = (float *)(in_ECX + 0x3c);
  pfVar4 = local_24;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  local_3c = param_3 * fVar1 + local_3c;
  local_38 = local_38 + param_1[1] * param_3;
  local_34 = local_34 + param_1[2] * param_3;
  local_24[0] = *param_2 * param_3 + local_24[0];
  local_24[1] = local_24[1] + param_2[1] * param_3;
  local_24[2] = local_24[2] + param_3 * param_2[2];
  fVar5 = (float10)FUN_009726e0(&local_3c,local_24,&param_1,in_ECX + 100,in_ECX + 0x68);
  return (float10)(float)(fVar5 * (float10)*(float *)(in_ECX + 0x60) - (float10)1.0);
}



void FUN_00974110(int param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *in_ECX;
  
  FUN_0096f0e0(param_5,param_6,param_7,param_8);
  *in_ECX = &PTR_FUN_00aa3d90;
  in_ECX[0xe] = param_1;
  in_ECX[0xf] = *param_2;
  in_ECX[0x10] = param_2[1];
  in_ECX[0x11] = param_2[2];
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  in_ECX[0x12] = *param_3 - *param_2;
  in_ECX[0x13] = fVar1 - fVar2;
  in_ECX[0x14] = fVar3 - fVar4;
  fVar1 = param_4[1];
  fVar2 = param_2[1];
  fVar3 = param_4[2];
  fVar4 = param_2[2];
  in_ECX[0x15] = *param_4 - *param_2;
  in_ECX[0x16] = fVar1 - fVar2;
  in_ECX[0x17] = fVar3 - fVar4;
  in_ECX[0x18] = 1.0 / (*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38));
  in_ECX[0x19] = 0x7f7fffff;
  in_ECX[0x1a] = 0x7f7fffff;
  return;
}



float * FUN_009741f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x18);
  fVar2 = *(float *)(in_ECX + 0x14);
  fVar3 = *(float *)(in_ECX + 0x20);
  fVar4 = *(float *)(in_ECX + 0xc);
  fVar5 = *(float *)(in_ECX + 0xc);
  fVar6 = *(float *)(in_ECX + 0x1c);
  fVar7 = *(float *)(in_ECX + 0x18);
  fVar8 = *(float *)(in_ECX + 0x10);
  *param_1 = *(float *)(in_ECX + 0x20) * *(float *)(in_ECX + 0x10) -
             *(float *)(in_ECX + 0x14) * *(float *)(in_ECX + 0x1c);
  param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  FUN_0043f350();
  return param_1;
}



void FUN_00974250(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *in_ECX;
  
  FUN_0096f0e0(param_3,param_4,param_5,param_6);
  in_ECX[0xf] = param_2;
  *in_ECX = &PTR_FUN_00aa3da4;
  in_ECX[0xe] = param_1;
  in_ECX[0x10] = 1.0 / (*(float *)(param_2 + 0x38) * *(float *)(param_2 + 0x38));
  in_ECX[0x11] = 0x7f7fffff;
  in_ECX[0x12] = 0x7f7fffff;
  in_ECX[0x13] = 0x7f7fffff;
  return;
}



float10 FUN_009742c0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c [15];
  
  fVar1 = *param_1;
  pfVar4 = *(float **)(in_ECX + 0x38);
  fVar2 = param_1[1];
  pfVar5 = local_3c;
  for (iVar3 = 0xf; pfVar4 = pfVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar5 = pfVar5 + 1;
  }
  local_3c[0] = param_3 * fVar1 + local_3c[0];
  iVar3 = *(int *)(in_ECX + 0x3c);
  local_3c[1] = local_3c[1] + fVar2 * param_3;
  local_3c[2] = local_3c[2] + param_1[2] * param_3;
  local_48 = *(undefined4 *)(iVar3 + 0x2c);
  local_44 = *(undefined4 *)(iVar3 + 0x30);
  local_40 = *(undefined4 *)(iVar3 + 0x34);
  local_54 = *param_2 * param_3 + *(float *)(iVar3 + 0x20);
  local_50 = *(float *)(iVar3 + 0x24) + param_2[1] * param_3;
  local_4c = *(float *)(iVar3 + 0x28) + param_3 * param_2[2];
  fVar6 = (float10)FUN_00975aa0(&local_54,local_3c,&param_1,in_ECX + 0x44,in_ECX + 0x48,
                                in_ECX + 0x4c);
  return (float10)(float)(fVar6 * (float10)*(float *)(in_ECX + 0x40) - (float10)1.0);
}



void FUN_00974600(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *in_ECX;
  
  FUN_0096f0e0(param_3,param_4,param_5,param_6);
  in_ECX[0xf] = param_2;
  *in_ECX = &PTR_FUN_00aa3db8;
  in_ECX[0xe] = param_1;
  in_ECX[0x10] = 1.0 / (*(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10));
  in_ECX[0x11] = 0x7f7fffff;
  in_ECX[0x12] = 0x7f7fffff;
  in_ECX[0x13] = 0x7f7fffff;
  return;
}



float10 FUN_00974670(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  int in_ECX;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [15];
  
  fVar1 = *param_1;
  pfVar3 = *(float **)(in_ECX + 0x38);
  pfVar4 = local_3c;
  for (iVar2 = 0xf; pfVar3 = pfVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar4 = pfVar4 + 1;
  }
  local_3c[0] = param_3 * fVar1 + local_3c[0];
  local_3c[1] = local_3c[1] + param_1[1] * param_3;
  local_3c[2] = local_3c[2] + param_1[2] * param_3;
  iVar2 = *(int *)(in_ECX + 0x3c);
  local_44 = *(float *)(iVar2 + 8) + param_2[1] * param_3;
  local_40 = *(float *)(iVar2 + 0xc) + param_3 * param_2[2];
  local_48 = *(float *)(iVar2 + 4) + *param_2 * param_3;
  fVar5 = (float10)FUN_00974c80(&local_48,local_3c,in_ECX + 0x44,in_ECX + 0x48,in_ECX + 0x4c);
  return (float10)(float)(fVar5 * (float10)*(float *)(in_ECX + 0x40) - (float10)1.0);
}



void FUN_00974760(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) == 2) {
    fVar1 = *(float *)(in_ECX + 0x1c);
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    iVar6 = *(int *)(in_ECX + 0x38);
    fVar4 = *(float *)(iVar6 + 8);
    fVar5 = *(float *)(iVar6 + 0xc);
    *(float *)(in_ECX + 0x20) = *param_1 * fVar1 + *(float *)(iVar6 + 4);
    *(float *)(in_ECX + 0x24) = fVar4 + fVar2 * fVar1;
    *(float *)(in_ECX + 0x28) = fVar5 + fVar1 * fVar3;
    fVar1 = *(float *)(in_ECX + 0x44);
    fVar2 = *(float *)(iVar6 + 0x14);
    fVar3 = *(float *)(iVar6 + 0x18);
    *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) + *(float *)(iVar6 + 0x10) * fVar1;
    *(float *)(in_ECX + 0x24) = fVar2 * fVar1 + *(float *)(in_ECX + 0x24);
    *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) + fVar1 * fVar3;
    iVar6 = *(int *)(in_ECX + 0x38);
    fVar1 = *(float *)(in_ECX + 0x48);
    fVar2 = *(float *)(iVar6 + 0x20);
    fVar3 = *(float *)(iVar6 + 0x24);
    *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) + *(float *)(iVar6 + 0x1c) * fVar1;
    *(float *)(in_ECX + 0x24) = fVar2 * fVar1 + *(float *)(in_ECX + 0x24);
    *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) + fVar1 * fVar3;
    iVar6 = *(int *)(in_ECX + 0x38);
    fVar1 = *(float *)(in_ECX + 0x4c);
    fVar2 = *(float *)(iVar6 + 0x2c);
    fVar3 = *(float *)(iVar6 + 0x30);
    *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) + *(float *)(iVar6 + 0x28) * fVar1;
    *(float *)(in_ECX + 0x24) = fVar2 * fVar1 + *(float *)(in_ECX + 0x24);
    *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) + fVar1 * fVar3;
    fVar1 = *(float *)(in_ECX + 0x1c);
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    iVar6 = *(int *)(in_ECX + 0x3c);
    fVar4 = *(float *)(iVar6 + 8);
    fVar5 = *(float *)(iVar6 + 0xc);
    *(float *)(in_ECX + 0x2c) =
         (*(float *)(iVar6 + 4) + *param_2 * fVar1) - *(float *)(in_ECX + 0x20);
    *(float *)(in_ECX + 0x30) = (fVar4 + fVar2 * fVar1) - *(float *)(in_ECX + 0x24);
    *(float *)(in_ECX + 0x34) = (fVar5 + fVar1 * fVar3) - *(float *)(in_ECX + 0x28);
    FUN_0043f350();
    return;
  }
  fVar1 = (param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]) -
          (param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2]);
  if (fVar1 < -1e-05) {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    FUN_0043f350();
    iVar6 = *(int *)(in_ECX + 0x3c);
    iVar7 = *(int *)(in_ECX + 0x38);
    fVar4 = *(float *)(iVar6 + 0x10) + *(float *)(iVar6 + 0x10);
    fVar5 = (*(float *)(iVar7 + 4) - fVar1 * fVar4) - *(float *)(iVar6 + 4);
    fVar8 = (*(float *)(iVar7 + 8) - fVar2 * fVar4) - *(float *)(iVar6 + 8);
    fVar4 = (*(float *)(iVar7 + 0xc) - fVar4 * fVar3) - *(float *)(iVar6 + 0xc);
    FUN_0043f350();
    fVar1 = *(float *)(iVar6 + 0x10);
    fVar2 = *(float *)(iVar6 + 8);
    fVar3 = *(float *)(iVar6 + 0xc);
    *(float *)(in_ECX + 0x20) = *(float *)(iVar6 + 4) + fVar5 * fVar1;
    *(float *)(in_ECX + 0x24) = fVar2 + fVar8 * fVar1;
    *(float *)(in_ECX + 0x28) = fVar3 + fVar4 * fVar1;
    *(float *)(in_ECX + 0x2c) = -fVar5;
    *(float *)(in_ECX + 0x30) = -fVar8;
    *(float *)(in_ECX + 0x34) = -fVar4;
    return;
  }
  iVar6 = *(int *)(in_ECX + 0x38);
  if (fVar1 <= 1e-05) {
    iVar7 = *(int *)(in_ECX + 0x3c);
    fVar1 = *(float *)(iVar7 + 8);
    fVar2 = *(float *)(iVar6 + 8);
    fVar3 = *(float *)(iVar7 + 0xc);
    fVar4 = *(float *)(iVar6 + 0xc);
    *(float *)(in_ECX + 0x20) = (*(float *)(iVar7 + 4) + *(float *)(iVar6 + 4)) * 0.5;
    *(float *)(in_ECX + 0x24) = (fVar1 + fVar2) * 0.5;
    *(float *)(in_ECX + 0x28) = (fVar3 + fVar4) * 0.5;
  }
  else {
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(iVar6 + 0xc);
    fVar1 = *(float *)(in_ECX + 0x44);
    fVar2 = *(float *)(iVar6 + 0x14);
    fVar3 = *(float *)(iVar6 + 0x18);
    *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) + *(float *)(iVar6 + 0x10) * fVar1;
    *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) + fVar2 * fVar1;
    *(float *)(in_ECX + 0x28) = fVar1 * fVar3 + *(float *)(in_ECX + 0x28);
    iVar6 = *(int *)(in_ECX + 0x38);
    fVar1 = *(float *)(in_ECX + 0x48);
    fVar2 = *(float *)(iVar6 + 0x20);
    fVar3 = *(float *)(iVar6 + 0x24);
    *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) + *(float *)(iVar6 + 0x1c) * fVar1;
    *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) + fVar2 * fVar1;
    *(float *)(in_ECX + 0x28) = fVar1 * fVar3 + *(float *)(in_ECX + 0x28);
    iVar6 = *(int *)(in_ECX + 0x38);
    fVar1 = *(float *)(in_ECX + 0x4c);
    fVar2 = *(float *)(iVar6 + 0x2c);
    fVar3 = *(float *)(iVar6 + 0x30);
    *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) + *(float *)(iVar6 + 0x28) * fVar1;
    *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) + fVar2 * fVar1;
    *(float *)(in_ECX + 0x28) = fVar1 * fVar3 + *(float *)(in_ECX + 0x28);
  }
  iVar6 = *(int *)(in_ECX + 0x3c);
  fVar1 = *(float *)(iVar6 + 8);
  fVar2 = *(float *)(iVar6 + 0xc);
  *(float *)(in_ECX + 0x2c) = *(float *)(iVar6 + 4) - *(float *)(in_ECX + 0x20);
  *(float *)(in_ECX + 0x30) = fVar1 - *(float *)(in_ECX + 0x24);
  *(float *)(in_ECX + 0x34) = fVar2 - *(float *)(in_ECX + 0x28);
  FUN_0043f350();
  return;
}



float10 FUN_00974c80(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = 0.0;
  fVar1 = *param_1 - *param_2;
  fVar2 = param_1[1] - param_2[1];
  fVar3 = param_1[2] - param_2[2];
  local_c = param_2[5] * fVar3 + param_2[3] * fVar1 + param_2[4] * fVar2;
  if (-param_2[0xc] <= local_c) {
    if (param_2[0xc] < local_c) {
      local_10 = (local_c - param_2[0xc]) * (local_c - param_2[0xc]) + 0.0;
      local_c = param_2[0xc];
    }
  }
  else {
    local_10 = (local_c + param_2[0xc]) * (local_c + param_2[0xc]) + 0.0;
    local_c = -param_2[0xc];
  }
  local_8 = param_2[8] * fVar3 + param_2[6] * fVar1 + param_2[7] * fVar2;
  if (-param_2[0xd] <= local_8) {
    if (param_2[0xd] < local_8) {
      local_10 = (local_8 - param_2[0xd]) * (local_8 - param_2[0xd]) + local_10;
      local_8 = param_2[0xd];
    }
  }
  else {
    local_10 = (local_8 + param_2[0xd]) * (local_8 + param_2[0xd]) + local_10;
    local_8 = -param_2[0xd];
  }
  local_4 = param_2[10] * fVar2 + param_2[9] * fVar1 + param_2[0xb] * fVar3;
  if (-param_2[0xe] <= local_4) {
    if (param_2[0xe] < local_4) {
      local_10 = (local_4 - param_2[0xe]) * (local_4 - param_2[0xe]) + local_10;
      local_4 = param_2[0xe];
    }
  }
  else {
    local_10 = (local_4 + param_2[0xe]) * (local_4 + param_2[0xe]) + local_10;
    local_4 = -param_2[0xe];
  }
  *param_3 = local_c;
  *param_4 = local_8;
  *param_5 = local_4;
  return (float10)local_10;
}



void FUN_00974e40(int param_1,int param_2,int param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_EDX;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  float afStack_c [3];
  
  afStack_c[in_EDX] = *(float *)(unaff_EBX + in_EDX * 4) + *(float *)(param_1 + 0x30 + in_EDX * 4);
  afStack_c[unaff_ESI] =
       *(float *)(unaff_EBX + unaff_ESI * 4) + *(float *)(param_1 + 0x30 + unaff_ESI * 4);
  fVar1 = *(float *)(unaff_EDI + param_2 * 4) * afStack_c[in_EDX];
  fVar2 = *(float *)(unaff_EDI + in_EDX * 4) * *(float *)(param_3 + param_2 * 4);
  fVar3 = *(float *)(unaff_EDI + param_2 * 4) * afStack_c[unaff_ESI];
  fVar4 = *(float *)(param_3 + param_2 * 4) * *(float *)(unaff_EDI + unaff_ESI * 4);
  if (fVar2 < fVar1 == (fVar2 == fVar1)) {
    fVar1 = *(float *)(unaff_EDI + param_2 * 4);
    if (fVar4 < fVar3 == (fVar4 == fVar3)) {
      fVar2 = *(float *)(unaff_EDI + unaff_ESI * 4);
      fVar2 = fVar2 * fVar2;
      fVar3 = fVar2 + fVar1 * fVar1;
      fVar4 = *(float *)(unaff_EDI + param_2 * 4) * *(float *)(param_3 + param_2 * 4);
      fVar5 = *(float *)(unaff_EDI + unaff_ESI * 4) * afStack_c[unaff_ESI];
      fVar6 = fVar3 * afStack_c[in_EDX] - (fVar5 + fVar4) * *(float *)(unaff_EDI + in_EDX * 4);
      if (0.0 <= fVar6) {
        if (fVar6 <= (fVar3 + fVar3) * *(float *)(param_1 + 0x30 + in_EDX * 4)) {
          fVar7 = afStack_c[in_EDX] - fVar6 / fVar3;
          fVar5 = fVar7 * *(float *)(unaff_EDI + in_EDX * 4) + fVar4 + fVar5;
          fVar1 = *(float *)(unaff_EDI + in_EDX * 4);
          fVar2 = -fVar5 / (fVar1 * fVar1 + fVar3);
          fVar1 = *(float *)(param_3 + param_2 * 4);
          *param_5 = *param_5 +
                     fVar7 * fVar7 + fVar1 * fVar1 + afStack_c[unaff_ESI] * afStack_c[unaff_ESI] +
                     fVar2 * fVar5;
          *param_4 = fVar2;
          *(undefined4 *)(unaff_EBX + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
          *(float *)(unaff_EBX + in_EDX * 4) =
               fVar6 / fVar3 - *(float *)(param_1 + 0x30 + in_EDX * 4);
          *(float *)(unaff_EBX + unaff_ESI * 4) = -*(float *)(param_1 + 0x30 + unaff_ESI * 4);
          return;
        }
        fVar5 = *(float *)(unaff_EDI + in_EDX * 4) * *(float *)(param_3 + in_EDX * 4) + fVar4 +
                fVar5;
        fVar1 = *(float *)(unaff_EDI + in_EDX * 4);
        fVar3 = -fVar5 / (fVar1 * fVar1 + fVar3);
        fVar1 = *(float *)(param_3 + param_2 * 4);
        fVar2 = *(float *)(param_3 + in_EDX * 4);
        *param_5 = *param_5 +
                   afStack_c[unaff_ESI] * afStack_c[unaff_ESI] + fVar2 * fVar2 + fVar1 * fVar1 +
                   fVar3 * fVar5;
        *param_4 = fVar3;
        *(undefined4 *)(unaff_EBX + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
        *(undefined4 *)(unaff_EBX + in_EDX * 4) = *(undefined4 *)(param_1 + 0x30 + in_EDX * 4);
        *(float *)(unaff_EBX + unaff_ESI * 4) = -*(float *)(param_1 + 0x30 + unaff_ESI * 4);
        return;
      }
      fVar3 = *(float *)(unaff_EDI + in_EDX * 4);
      fVar1 = fVar3 * fVar3 + fVar1 * fVar1;
      fVar4 = *(float *)(unaff_EDI + in_EDX * 4) * afStack_c[in_EDX] + fVar4;
      fVar3 = fVar1 * afStack_c[unaff_ESI] - *(float *)(unaff_EDI + unaff_ESI * 4) * fVar4;
      if (fVar3 < 0.0) {
        fVar2 = -(fVar5 + fVar4) / (fVar1 + fVar2);
        fVar1 = *(float *)(param_3 + param_2 * 4);
        *param_5 = *param_5 +
                   fVar1 * fVar1 + afStack_c[in_EDX] * afStack_c[in_EDX] +
                   afStack_c[unaff_ESI] * afStack_c[unaff_ESI] + fVar2 * (fVar5 + fVar4);
        *param_4 = fVar2;
        *(undefined4 *)(unaff_EBX + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
        *(float *)(unaff_EBX + in_EDX * 4) = -*(float *)(param_1 + 0x30 + in_EDX * 4);
        *(float *)(unaff_EBX + unaff_ESI * 4) = -*(float *)(param_1 + 0x30 + unaff_ESI * 4);
        return;
      }
      if ((fVar1 + fVar1) * *(float *)(param_1 + 0x30 + unaff_ESI * 4) < fVar3) {
        fVar4 = *(float *)(unaff_EDI + unaff_ESI * 4) * *(float *)(param_3 + unaff_ESI * 4) + fVar4;
        fVar3 = -fVar4 / (fVar1 + fVar2);
        fVar1 = *(float *)(param_3 + param_2 * 4);
        fVar2 = *(float *)(param_3 + unaff_ESI * 4);
        *param_5 = *param_5 +
                   fVar1 * fVar1 + afStack_c[in_EDX] * afStack_c[in_EDX] + fVar2 * fVar2 +
                   fVar3 * fVar4;
        *param_4 = fVar3;
        *(undefined4 *)(unaff_EBX + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
        *(float *)(unaff_EBX + in_EDX * 4) = -*(float *)(param_1 + 0x30 + in_EDX * 4);
        *(undefined4 *)(unaff_EBX + unaff_ESI * 4) = *(undefined4 *)(param_1 + 0x30 + unaff_ESI * 4)
        ;
        return;
      }
      fVar3 = fVar3 / fVar1;
      fVar5 = afStack_c[unaff_ESI] - fVar3;
      fVar4 = fVar5 * *(float *)(unaff_EDI + unaff_ESI * 4) + fVar4;
      fVar2 = -fVar4 / (fVar1 + fVar2);
      fVar1 = *(float *)(param_3 + param_2 * 4);
      *param_5 = *param_5 +
                 afStack_c[in_EDX] * afStack_c[in_EDX] + fVar1 * fVar1 + fVar5 * fVar5 +
                 fVar2 * fVar4;
    }
    else {
      fVar2 = *(float *)(unaff_EDI + in_EDX * 4);
      fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
      fVar4 = *(float *)(unaff_EDI + in_EDX * 4) * afStack_c[in_EDX] +
              *(float *)(unaff_EDI + param_2 * 4) * *(float *)(param_3 + param_2 * 4);
      fVar3 = fVar1 * afStack_c[unaff_ESI] - *(float *)(unaff_EDI + unaff_ESI * 4) * fVar4;
      if ((fVar1 + fVar1) * *(float *)(param_1 + 0x30 + unaff_ESI * 4) < fVar3) {
        fVar4 = *(float *)(unaff_EDI + unaff_ESI * 4) * *(float *)(param_3 + unaff_ESI * 4) + fVar4;
        fVar2 = *(float *)(unaff_EDI + unaff_ESI * 4);
        fVar3 = -fVar4 / (fVar2 * fVar2 + fVar1);
        fVar1 = *(float *)(param_3 + param_2 * 4);
        fVar2 = *(float *)(param_3 + unaff_ESI * 4);
        *param_5 = *param_5 +
                   fVar1 * fVar1 + afStack_c[in_EDX] * afStack_c[in_EDX] + fVar2 * fVar2 +
                   fVar3 * fVar4;
        *param_4 = fVar3;
        *(undefined4 *)(unaff_EBX + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
        *(float *)(unaff_EBX + in_EDX * 4) = -*(float *)(param_1 + 0x30 + in_EDX * 4);
        *(undefined4 *)(unaff_EBX + unaff_ESI * 4) = *(undefined4 *)(param_1 + 0x30 + unaff_ESI * 4)
        ;
        return;
      }
      fVar3 = fVar3 / fVar1;
      fVar5 = afStack_c[unaff_ESI] - fVar3;
      fVar4 = fVar5 * *(float *)(unaff_EDI + unaff_ESI * 4) + fVar4;
      fVar2 = *(float *)(unaff_EDI + unaff_ESI * 4);
      fVar2 = -fVar4 / (fVar2 * fVar2 + fVar1);
      fVar1 = *(float *)(param_3 + param_2 * 4);
      *param_5 = *param_5 +
                 afStack_c[in_EDX] * afStack_c[in_EDX] + fVar1 * fVar1 + fVar5 * fVar5 +
                 fVar2 * fVar4;
    }
    *param_4 = fVar2;
    *(undefined4 *)(unaff_EBX + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
    *(float *)(unaff_EBX + in_EDX * 4) = -*(float *)(param_1 + 0x30 + in_EDX * 4);
    *(float *)(unaff_EBX + unaff_ESI * 4) = fVar3 - *(float *)(param_1 + 0x30 + unaff_ESI * 4);
    return;
  }
  if (fVar4 < fVar3 != (fVar4 == fVar3)) {
    *(undefined4 *)(unaff_EBX + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
    fVar1 = 1.0 / *(float *)(unaff_EDI + param_2 * 4);
    *(float *)(unaff_EBX + in_EDX * 4) =
         *(float *)(unaff_EBX + in_EDX * 4) -
         fVar1 * *(float *)(unaff_EDI + in_EDX * 4) * *(float *)(param_3 + param_2 * 4);
    *(float *)(unaff_EBX + unaff_ESI * 4) =
         *(float *)(unaff_EBX + unaff_ESI * 4) -
         *(float *)(param_3 + param_2 * 4) * *(float *)(unaff_EDI + unaff_ESI * 4) * fVar1;
    *param_4 = -*(float *)(param_3 + param_2 * 4) * fVar1;
    return;
  }
  fVar1 = *(float *)(unaff_EDI + param_2 * 4);
  fVar2 = *(float *)(unaff_EDI + unaff_ESI * 4);
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar2 = *(float *)(unaff_EDI + param_2 * 4) * *(float *)(param_3 + param_2 * 4);
  fVar3 = *(float *)(unaff_EDI + unaff_ESI * 4) * afStack_c[unaff_ESI];
  fVar4 = fVar1 * afStack_c[in_EDX] - (fVar3 + fVar2) * *(float *)(unaff_EDI + in_EDX * 4);
  if (fVar4 <= (fVar1 + fVar1) * *(float *)(param_1 + 0x30 + in_EDX * 4)) {
    fVar4 = fVar4 / fVar1;
    fVar5 = afStack_c[in_EDX] - fVar4;
    fVar3 = fVar5 * *(float *)(unaff_EDI + in_EDX * 4) + fVar2 + fVar3;
    fVar2 = *(float *)(unaff_EDI + in_EDX * 4);
    fVar2 = -fVar3 / (fVar2 * fVar2 + fVar1);
    fVar1 = *(float *)(param_3 + param_2 * 4);
    *param_5 = fVar5 * fVar5 + fVar1 * fVar1 + afStack_c[unaff_ESI] * afStack_c[unaff_ESI] +
               fVar2 * fVar3 + *param_5;
    *param_4 = fVar2;
    *(undefined4 *)(unaff_EBX + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
    *(float *)(unaff_EBX + in_EDX * 4) = fVar4 - *(float *)(param_1 + 0x30 + in_EDX * 4);
    *(float *)(unaff_EBX + unaff_ESI * 4) = -*(float *)(param_1 + 0x30 + unaff_ESI * 4);
    return;
  }
  fVar3 = *(float *)(unaff_EDI + in_EDX * 4) * *(float *)(param_3 + in_EDX * 4) + fVar2 + fVar3;
  fVar2 = *(float *)(unaff_EDI + in_EDX * 4);
  fVar4 = -fVar3 / (fVar2 * fVar2 + fVar1);
  fVar1 = *(float *)(param_3 + param_2 * 4);
  fVar2 = *(float *)(param_3 + in_EDX * 4);
  *param_5 = *param_5 +
             afStack_c[unaff_ESI] * afStack_c[unaff_ESI] + fVar2 * fVar2 + fVar1 * fVar1 +
             fVar4 * fVar3;
  *param_4 = fVar4;
  *(undefined4 *)(unaff_EBX + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
  *(undefined4 *)(unaff_EBX + in_EDX * 4) = *(undefined4 *)(param_1 + 0x30 + in_EDX * 4);
  *(float *)(unaff_EBX + unaff_ESI * 4) = -*(float *)(param_1 + 0x30 + unaff_ESI * 4);
  return;
}



void FUN_00975580(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  
  fVar1 = *param_1 - *(float *)(in_ECX + 0x30);
  fVar2 = param_1[1] - *(float *)(in_ECX + 0x34);
  fVar3 = param_1[2] - *(float *)(in_ECX + 0x38);
  fVar4 = fVar1 * param_2[1];
  fVar5 = fVar2 * *param_2;
  if (fVar5 < fVar4 == (fVar5 == fVar4)) {
    fVar2 = fVar2 * param_2[2];
    fVar3 = param_2[1] * fVar3;
    if (fVar3 < fVar2 != (fVar3 == fVar2)) {
      FUN_00974e40();
      return;
    }
  }
  else {
    fVar1 = fVar1 * param_2[2];
    fVar3 = *param_2 * fVar3;
    if (fVar3 < fVar1 != (fVar3 == fVar1)) {
      FUN_00974e40();
      return;
    }
  }
  FUN_00974e40();
  return;
}



void FUN_00975690(int param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  int in_EDX;
  int unaff_ESI;
  int unaff_EDI;
  
  fVar4 = *(float *)(unaff_EDI + in_EDX * 4) - *(float *)(param_1 + 0x30 + in_EDX * 4);
  fVar5 = *(float *)(unaff_EDI + in_ECX * 4) - *(float *)(param_1 + 0x30 + in_ECX * 4);
  fVar1 = fVar4 * *(float *)(unaff_ESI + in_ECX * 4);
  fVar3 = fVar5 * *(float *)(unaff_ESI + in_EDX * 4);
  if ((NAN(fVar3) || NAN(fVar1)) || fVar3 < fVar1 == (fVar3 == fVar1)) {
    *(undefined4 *)(unaff_EDI + in_ECX * 4) = *(undefined4 *)(param_1 + 0x30 + in_ECX * 4);
    fVar1 = *(float *)(param_1 + 0x30 + in_EDX * 4) + *(float *)(unaff_EDI + in_EDX * 4);
    fVar4 = fVar3 - fVar1 * *(float *)(unaff_ESI + in_ECX * 4);
    if (0.0 <= fVar4) {
      fVar3 = *(float *)(unaff_ESI + in_EDX * 4);
      fVar2 = *(float *)(unaff_ESI + in_ECX * 4);
      fVar3 = 1.0 / (fVar2 * fVar2 + fVar3 * fVar3);
      *param_4 = *param_4 + fVar3 * fVar4 * fVar4;
      *(float *)(unaff_EDI + in_EDX * 4) = -*(float *)(param_1 + 0x30 + in_EDX * 4);
      *param_3 = -((fVar1 * *(float *)(unaff_ESI + in_EDX * 4) +
                   *(float *)(unaff_ESI + in_ECX * 4) * fVar5) * fVar3);
      goto LAB_00975854;
    }
    fVar4 = 1.0 / *(float *)(unaff_ESI + in_ECX * 4);
    *(float *)(unaff_EDI + in_EDX * 4) = *(float *)(unaff_EDI + in_EDX * 4) - fVar4 * fVar3;
    fVar4 = -fVar5 * fVar4;
  }
  else {
    *(undefined4 *)(unaff_EDI + in_EDX * 4) = *(undefined4 *)(param_1 + 0x30 + in_EDX * 4);
    fVar3 = *(float *)(unaff_EDI + in_ECX * 4) + *(float *)(param_1 + 0x30 + in_ECX * 4);
    fVar5 = fVar1 - fVar3 * *(float *)(unaff_ESI + in_EDX * 4);
    if (fVar5 < 0.0) {
      fVar5 = 1.0 / *(float *)(unaff_ESI + in_EDX * 4);
      *(float *)(unaff_EDI + in_ECX * 4) = *(float *)(unaff_EDI + in_ECX * 4) - fVar5 * fVar1;
      *param_3 = -fVar4 * fVar5;
      goto LAB_00975854;
    }
    fVar1 = *(float *)(unaff_ESI + in_EDX * 4);
    fVar2 = *(float *)(unaff_ESI + in_ECX * 4);
    fVar1 = 1.0 / (fVar2 * fVar2 + fVar1 * fVar1);
    *param_4 = *param_4 + fVar1 * fVar5 * fVar5;
    *(float *)(unaff_EDI + in_ECX * 4) = -*(float *)(param_1 + 0x30 + in_ECX * 4);
    fVar4 = -(fVar1 * (fVar3 * *(float *)(unaff_ESI + in_ECX * 4) +
                      *(float *)(unaff_ESI + in_EDX * 4) * fVar4));
  }
  *param_3 = fVar4;
LAB_00975854:
  fVar4 = *(float *)(unaff_EDI + param_2 * 4);
  if (*(float *)(unaff_EDI + param_2 * 4) < -*(float *)(param_1 + 0x30 + param_2 * 4)) {
    fVar4 = fVar4 + *(float *)(param_1 + 0x30 + param_2 * 4);
    *param_4 = fVar4 * fVar4 + *param_4;
    *(float *)(unaff_EDI + param_2 * 4) = -*(float *)(param_1 + 0x30 + param_2 * 4);
    return;
  }
  if (*(float *)(param_1 + 0x30 + param_2 * 4) < fVar4) {
    fVar4 = *(float *)(unaff_EDI + param_2 * 4) - *(float *)(param_1 + 0x30 + param_2 * 4);
    *param_4 = fVar4 * fVar4 + *param_4;
    *(undefined4 *)(unaff_EDI + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
  }
  return;
}



void FUN_009758c0(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  int in_ECX;
  float *unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  
  *param_4 = (*(float *)(param_1 + 0x30 + param_2 * 4) - *(float *)(in_ECX + param_2 * 4)) /
             *(float *)(param_3 + param_2 * 4);
  *(undefined4 *)(in_ECX + param_2 * 4) = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
  fVar1 = *(float *)(in_ECX + unaff_ESI * 4);
  if (-*(float *)(param_1 + 0x30 + unaff_ESI * 4) <= *(float *)(in_ECX + unaff_ESI * 4)) {
    if (fVar1 <= *(float *)(param_1 + 0x30 + unaff_ESI * 4)) goto LAB_0097593f;
    fVar1 = *(float *)(in_ECX + unaff_ESI * 4) - *(float *)(param_1 + 0x30 + unaff_ESI * 4);
    *unaff_EBX = fVar1 * fVar1 + *unaff_EBX;
    fVar1 = *(float *)(param_1 + 0x30 + unaff_ESI * 4);
  }
  else {
    fVar1 = fVar1 + *(float *)(param_1 + 0x30 + unaff_ESI * 4);
    *unaff_EBX = fVar1 * fVar1 + *unaff_EBX;
    fVar1 = -*(float *)(param_1 + 0x30 + unaff_ESI * 4);
  }
  *(float *)(in_ECX + unaff_ESI * 4) = fVar1;
LAB_0097593f:
  if (*(float *)(in_ECX + unaff_EDI * 4) < -*(float *)(param_1 + 0x30 + unaff_EDI * 4)) {
    fVar1 = *(float *)(param_1 + 0x30 + unaff_EDI * 4) + *(float *)(in_ECX + unaff_EDI * 4);
    *unaff_EBX = fVar1 * fVar1 + *unaff_EBX;
    *(float *)(in_ECX + unaff_EDI * 4) = -*(float *)(param_1 + 0x30 + unaff_EDI * 4);
    return;
  }
  if (*(float *)(param_1 + 0x30 + unaff_EDI * 4) < *(float *)(in_ECX + unaff_EDI * 4)) {
    fVar1 = *(float *)(in_ECX + unaff_EDI * 4) - *(float *)(param_1 + 0x30 + unaff_EDI * 4);
    *unaff_EBX = fVar1 * fVar1 + *unaff_EBX;
    *(undefined4 *)(in_ECX + unaff_EDI * 4) = *(undefined4 *)(param_1 + 0x30 + unaff_EDI * 4);
  }
  return;
}



void FUN_009759a0(void)

{
  float fVar1;
  float *in_ECX;
  int in_EDX;
  float *unaff_ESI;
  
  if (-*(float *)(in_EDX + 0x30) <= *in_ECX) {
    if (*(float *)(in_EDX + 0x30) < *in_ECX) {
      fVar1 = *in_ECX - *(float *)(in_EDX + 0x30);
      *unaff_ESI = fVar1 * fVar1 + *unaff_ESI;
      fVar1 = *(float *)(in_EDX + 0x30);
      goto LAB_009759eb;
    }
  }
  else {
    fVar1 = *(float *)(in_EDX + 0x30) + *in_ECX;
    *unaff_ESI = fVar1 * fVar1 + *unaff_ESI;
    fVar1 = -*(float *)(in_EDX + 0x30);
LAB_009759eb:
    *in_ECX = fVar1;
  }
  if (-*(float *)(in_EDX + 0x34) <= in_ECX[1]) {
    if (in_ECX[1] <= *(float *)(in_EDX + 0x34)) goto LAB_00975a3e;
    fVar1 = in_ECX[1] - *(float *)(in_EDX + 0x34);
    *unaff_ESI = fVar1 * fVar1 + *unaff_ESI;
    fVar1 = *(float *)(in_EDX + 0x34);
  }
  else {
    fVar1 = *(float *)(in_EDX + 0x34) + in_ECX[1];
    *unaff_ESI = fVar1 * fVar1 + *unaff_ESI;
    fVar1 = -*(float *)(in_EDX + 0x34);
  }
  in_ECX[1] = fVar1;
LAB_00975a3e:
  if (in_ECX[2] < -*(float *)(in_EDX + 0x38)) {
    fVar1 = *(float *)(in_EDX + 0x38) + in_ECX[2];
    *unaff_ESI = fVar1 * fVar1 + *unaff_ESI;
    in_ECX[2] = -*(float *)(in_EDX + 0x38);
    return;
  }
  if (*(float *)(in_EDX + 0x38) < in_ECX[2]) {
    fVar1 = in_ECX[2] - *(float *)(in_EDX + 0x38);
    *unaff_ESI = fVar1 * fVar1 + *unaff_ESI;
    in_ECX[2] = *(float *)(in_EDX + 0x38);
  }
  return;
}



float10 FUN_00975aa0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                    float *param_6)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  undefined4 uVar9;
  float local_1c;
  float local_18 [6];
  
  pfVar7 = param_3;
  pfVar5 = param_2;
  fVar1 = *param_1 - *param_2;
  iVar6 = 0;
  fVar3 = param_1[1] - param_2[1];
  fVar4 = param_1[2] - param_2[2];
  local_18[0] = param_2[5] * fVar4 + param_2[3] * fVar1 + param_2[4] * fVar3;
  local_18[1] = param_2[8] * fVar4 + param_2[6] * fVar1 + param_2[7] * fVar3;
  local_18[2] = param_2[10] * fVar3 + param_2[9] * fVar1 + param_2[0xb] * fVar4;
  local_18[3] = param_2[5] * param_1[5] + param_2[3] * param_1[3] + param_2[4] * param_1[4];
  local_18[4] = param_2[8] * param_1[5] + param_2[6] * param_1[3] + param_2[7] * param_1[4];
  local_18[5] = param_2[0xb] * param_1[5] + param_2[9] * param_1[3] + param_2[10] * param_1[4];
  do {
    if (0.0 <= local_18[iVar6 + 3]) {
      *(undefined1 *)((int)&param_2 + iVar6) = 0;
    }
    else {
      fVar1 = local_18[iVar6];
      *(undefined1 *)((int)&param_2 + iVar6) = 1;
      local_18[iVar6] = -fVar1;
      local_18[iVar6 + 3] = -local_18[iVar6 + 3];
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  local_1c = 0.0;
  *param_3 = 0.0;
  bVar2 = 0.0 < local_18[5];
  if (local_18[3] <= 0.0) {
    if (0.0 < local_18[4]) {
      if (bVar2) {
        FUN_00975690(pfVar5,0,param_3,&local_1c);
        pfVar7 = param_3;
        goto LAB_00975cd2;
      }
      uVar9 = 1;
    }
    else {
      if (!bVar2) {
        FUN_009759a0();
        goto LAB_00975cd2;
      }
      uVar9 = 2;
    }
  }
  else {
    if (0.0 < local_18[4]) {
      if (bVar2) {
        FUN_00975580(local_18,local_18 + 3);
      }
      else {
        FUN_00975690(pfVar5,2,param_3,&local_1c);
        pfVar7 = param_3;
      }
      goto LAB_00975cd2;
    }
    if (bVar2) {
      FUN_00975690(pfVar5,1,param_3,&local_1c);
      pfVar7 = param_3;
      goto LAB_00975cd2;
    }
    uVar9 = 0;
  }
  FUN_009758c0(pfVar5,uVar9,local_18 + 3,param_3);
  pfVar7 = param_3;
LAB_00975cd2:
  if (*pfVar7 < 0.0) {
    *pfVar7 = 0.0;
  }
  else {
    if (*pfVar7 <= 1.0) {
      if ((char)param_2 != '\0') {
        local_18[0] = -local_18[0];
      }
      if (param_2._1_1_ != '\0') {
        local_18[1] = -local_18[1];
      }
      if (param_2._2_1_ != '\0') {
        local_18[2] = -local_18[2];
      }
      *param_4 = local_18[0];
      *param_5 = local_18[1];
      *param_6 = local_18[2];
      return (float10)local_1c;
    }
    *pfVar7 = 1.0;
    local_18[3] = *param_1 + param_1[3];
    local_18[4] = param_1[4] + param_1[1];
    local_18[5] = param_1[5] + param_1[2];
    param_1 = local_18 + 3;
  }
  fVar8 = (float10)FUN_00974c80(param_1,pfVar5,param_4,param_5,param_6);
  return (float10)(float)fVar8;
}



void FUN_00975db0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00709430(param_1);
  FUN_006be9d0(param_1,in_ECX + 0xc);
  return;
}



void FUN_00975dd0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_007094a0(param_1);
  FUN_006d3660(param_1,in_ECX + 0xc);
  return;
}



float10 FUN_00975df0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar4 = param_2[5] * param_2[5] + param_2[3] * param_2[3] + param_2[4] * param_2[4];
  fVar5 = param_2[8] * param_2[5] + param_2[6] * param_2[3] + param_2[7] * param_2[4];
  fVar6 = param_2[8] * param_2[8] + param_2[6] * param_2[6] + param_2[7] * param_2[7];
  fVar7 = fVar2 * param_2[4] + fVar1 * param_2[3] + fVar3 * param_2[5];
  fVar8 = param_2[8] * fVar3 + param_2[6] * fVar1 + param_2[7] * fVar2;
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar3 = ABS(fVar4 * fVar6 - fVar5 * fVar5);
  *param_3 = fVar8 * fVar5 - fVar7 * fVar6;
  fVar2 = fVar7 * fVar5 - fVar8 * fVar4;
  *param_4 = fVar2;
  if (fVar3 < fVar2 + *param_3) {
    if (*param_3 < 0.0) {
      fVar2 = fVar8 + fVar6;
      if (fVar7 + fVar5 < fVar2) {
        fVar2 = fVar2 - (fVar7 + fVar5);
        fVar3 = fVar6 + (fVar4 - fVar5 * 2.0);
        if (fVar3 < fVar2 != (fVar3 == fVar2)) {
          *param_3 = 1.0;
          *param_4 = 0.0;
          return (float10)ABS(fVar4 + fVar7 * 2.0 + fVar1);
        }
        *param_3 = fVar2 / fVar3;
        *param_4 = 1.0 - fVar2 / fVar3;
        return (float10)ABS((fVar1 + fVar6 + fVar8 * 2.0) - fVar2 * *param_3);
      }
      *param_3 = 0.0;
      if (fVar2 <= 0.0) {
        *param_4 = 1.0;
        return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar1);
      }
      if (0.0 <= fVar8) {
        *param_4 = 0.0;
        return (float10)ABS(fVar1);
      }
      *param_4 = -fVar8 / fVar6;
      return (float10)ABS((-fVar8 / fVar6) * fVar8 + fVar1);
    }
    if (0.0 <= fVar2) {
      fVar2 = (fVar8 + fVar6) - (fVar7 + fVar5);
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        *param_3 = 0.0;
        *param_4 = 1.0;
        return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar1);
      }
      fVar3 = fVar6 + (fVar4 - fVar5 * 2.0);
      if (fVar3 < fVar2 != (fVar3 == fVar2)) {
        *param_3 = 1.0;
        *param_4 = 0.0;
        return (float10)ABS(fVar4 + fVar7 * 2.0 + fVar1);
      }
      *param_3 = fVar2 / fVar3;
      *param_4 = 1.0 - fVar2 / fVar3;
      return (float10)ABS((fVar1 + fVar6 + fVar8 * 2.0) - fVar2 * *param_3);
    }
    fVar2 = fVar7 + fVar4;
    if (fVar8 + fVar5 < fVar2) {
      fVar2 = fVar2 - (fVar8 + fVar5);
      fVar3 = fVar6 + (fVar4 - fVar5 * 2.0);
      if (fVar3 < fVar2 != (fVar3 == fVar2)) {
        *param_4 = 1.0;
        *param_3 = 0.0;
        return (float10)ABS(fVar6 + fVar8 * 2.0 + fVar1);
      }
      *param_4 = fVar2 / fVar3;
      *param_3 = 1.0 - fVar2 / fVar3;
      return (float10)ABS((fVar7 * 2.0 + fVar4 + fVar1) - *param_4 * fVar2);
    }
    *param_4 = 0.0;
    if (fVar2 <= 0.0) {
      *param_3 = 1.0;
      return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar1);
    }
    if (0.0 <= fVar7) {
      *param_3 = 0.0;
      return (float10)ABS(fVar1);
    }
    *param_3 = -fVar7 / fVar4;
    return (float10)ABS((-fVar7 / fVar4) * fVar7 + fVar1);
  }
  if (0.0 <= *param_3) {
    if (0.0 <= fVar2) {
      fVar3 = 1.0 / fVar3;
      *param_3 = fVar3 * *param_3;
      fVar3 = fVar3 * *param_4;
      *param_4 = fVar3;
      return (float10)ABS(fVar3 * (*param_3 * fVar5 + fVar3 * fVar6 + fVar8 * 2.0) +
                          *param_3 * (fVar7 * 2.0 + *param_3 * fVar4 + *param_4 * fVar5) + fVar1);
    }
    *param_4 = 0.0;
    if (!NAN(fVar7) && 0.0 < fVar7 != (fVar7 == 0.0)) {
      *param_3 = 0.0;
      return (float10)ABS(fVar1);
    }
    if (fVar4 <= -fVar7) {
      *param_3 = 1.0;
      return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar1);
    }
    fVar4 = -fVar7 / fVar4;
    *param_3 = fVar4;
    return (float10)ABS(fVar4 * fVar7 + fVar1);
  }
  if (fVar2 < 0.0) {
    if (fVar7 < 0.0) {
      *param_4 = 0.0;
      if (fVar4 <= -fVar7) {
        *param_3 = 1.0;
        return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar1);
      }
      fVar4 = -fVar7 / fVar4;
      *param_3 = fVar4;
      return (float10)ABS(fVar4 * fVar7 + fVar1);
    }
    *param_3 = 0.0;
    if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
      *param_4 = 0.0;
      return (float10)ABS(fVar1);
    }
    if (fVar6 <= -fVar8) {
      *param_4 = 1.0;
      return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar1);
    }
    fVar6 = -fVar8 / fVar6;
    *param_4 = fVar6;
    return (float10)ABS(fVar6 * fVar8 + fVar1);
  }
  *param_3 = 0.0;
  if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
    *param_4 = 0.0;
    return (float10)ABS(fVar1);
  }
  if (fVar6 <= -fVar8) {
    *param_4 = 1.0;
    return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar1);
  }
  fVar6 = -fVar8 / fVar6;
  *param_4 = fVar6;
  return (float10)ABS(fVar6 * fVar8 + fVar1);
}



float10 FUN_00976590(float *param_1,float *param_2,float param_3)

{
  int in_ECX;
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24 [9];
  
  iVar1 = *(int *)(in_ECX + 0x38);
  local_2c = *(float *)(iVar1 + 8) + param_1[1] * param_3;
  local_28 = *(float *)(iVar1 + 0xc) + param_1[2] * param_3;
  local_30 = *(float *)(iVar1 + 4) + param_3 * *param_1;
  pfVar2 = (float *)(in_ECX + 0x3c);
  pfVar3 = local_24;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  local_24[0] = *param_2 * param_3 + local_24[0];
  local_24[1] = local_24[1] + param_2[1] * param_3;
  local_24[2] = local_24[2] + param_3 * param_2[2];
  fVar4 = (float10)FUN_00975df0(&local_30,local_24,in_ECX + 100,in_ECX + 0x68);
  return (float10)(float)(fVar4 * (float10)*(float *)(in_ECX + 0x60) - (float10)1.0);
}



void FUN_00976680(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int in_ECX;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_4 = *(float *)(in_ECX + 0x68);
  local_c = local_4 * *(float *)(in_ECX + 0x54);
  local_8 = *(float *)(in_ECX + 0x58) * local_4;
  local_4 = local_4 * *(float *)(in_ECX + 0x5c);
  fVar1 = *(float *)(in_ECX + 100);
  local_18 = *(float *)(in_ECX + 0x3c) + fVar1 * *(float *)(in_ECX + 0x48);
  local_14 = *(float *)(in_ECX + 0x40) + *(float *)(in_ECX + 0x4c) * fVar1;
  local_10 = *(float *)(in_ECX + 0x44) + fVar1 * *(float *)(in_ECX + 0x50);
  *(float *)(in_ECX + 0x20) = local_18 + local_c;
  *(float *)(in_ECX + 0x24) = local_14 + local_8;
  *(float *)(in_ECX + 0x28) = local_10 + local_4;
  pfVar4 = (float *)FUN_009741f0(&local_18);
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  *(float *)(in_ECX + 0x2c) = -*pfVar4;
  *(float *)(in_ECX + 0x30) = -fVar1;
  *(float *)(in_ECX + 0x34) = -fVar2;
  if (*(int *)(in_ECX + 0x18) == 2) {
    fVar1 = *(float *)(in_ECX + 0x1c);
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) + fVar1 * *param_2;
    *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) + fVar2 * fVar1;
    *(float *)(in_ECX + 0x28) = fVar1 * fVar3 + *(float *)(in_ECX + 0x28);
  }
  return;
}



void FUN_009767d0(int param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *in_ECX;
  
  FUN_0096f0e0(param_5,param_6,param_7,param_8);
  *in_ECX = &PTR_FUN_00aa3dd4;
  in_ECX[0xe] = param_1;
  in_ECX[0xf] = *param_2;
  in_ECX[0x10] = param_2[1];
  in_ECX[0x11] = param_2[2];
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  in_ECX[0x12] = *param_3 - *param_2;
  in_ECX[0x13] = fVar1 - fVar2;
  in_ECX[0x14] = fVar3 - fVar4;
  fVar1 = param_4[1];
  fVar2 = param_2[1];
  fVar3 = param_4[2];
  fVar4 = param_2[2];
  in_ECX[0x15] = *param_4 - *param_2;
  in_ECX[0x16] = fVar1 - fVar2;
  in_ECX[0x17] = fVar3 - fVar4;
  in_ECX[0x18] = 1.0 / (*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10));
  in_ECX[0x19] = 0x7f7fffff;
  in_ECX[0x1a] = 0x7f7fffff;
  return;
}



void FUN_009768b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa3de8;
  if ((ushort)param_1 < 2) {
    iVar1 = FUN_00401f00(0x98);
    if (iVar1 != 0) {
      uVar2 = FUN_00977530(in_ECX,param_2,param_3,param_4,0);
      goto LAB_00976922;
    }
  }
  else {
    iVar1 = FUN_00401f00(0x8c);
    if (iVar1 != 0) {
      uVar2 = FUN_0097abe0(in_ECX,param_1,param_2,param_3,param_4,param_5);
      goto LAB_00976922;
    }
  }
  uVar2 = 0;
LAB_00976922:
  in_ECX[2] = uVar2;
  in_ECX[1] = 0;
  in_ECX[4] = DAT_00b3f9a8;
  in_ECX[5] = DAT_00b3f9ac;
  in_ECX[6] = DAT_00b3f9b0;
  FUN_00718a50();
  *(undefined1 *)(in_ECX + 3) = 0;
  in_ECX[0x14] = 0;
  return;
}



void FUN_00976960(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa3de8;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  return;
}



void FUN_00976a30(byte param_1)

{
  FUN_00976960();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00976a50(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  fVar1 = in_ECX[4];
  fVar2 = in_ECX[5];
  *param_1 = *in_ECX + param_2 * in_ECX[3];
  param_1[1] = in_ECX[1] + fVar1 * param_2;
  param_1[2] = in_ECX[2] + param_2 * fVar2;
  return;
}



undefined4 FUN_00976aa0(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     (((param_1[3] == in_ECX[3] && (param_1[4] == in_ECX[4])) && (param_1[5] == in_ECX[5])))) {
    return 1;
  }
  return 0;
}



float10 FUN_00976b10(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  undefined8 local_18;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar4 = param_2[5] * param_2[5] + param_2[3] * param_2[3] + param_2[4] * param_2[4];
  fVar5 = param_2[8] * param_2[5] + param_2[6] * param_2[3] + param_2[7] * param_2[4];
  fVar6 = param_2[8] * param_2[8] + param_2[6] * param_2[6] + param_2[7] * param_2[7];
  fVar7 = fVar2 * param_2[4] + fVar1 * param_2[3] + fVar3 * param_2[5];
  fVar8 = param_2[8] * fVar3 + param_2[6] * fVar1 + param_2[7] * fVar2;
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar2 = ABS(fVar4 * fVar6 - fVar5 * fVar5);
  if (NAN(fVar2) || 1e-05 < fVar2 == (fVar2 == 1e-05)) {
    local_18 = *(undefined8 *)param_2;
    local_10 = param_2[2];
    if (fVar6 <= fVar4) {
      local_c = param_2[3];
      local_8 = param_2[4];
      local_4 = param_2[5];
      *param_4 = 0.0;
      fVar9 = (float10)FUN_0096fbb0(param_1,&local_18,param_3);
      return fVar9;
    }
    local_c = param_2[6];
    local_8 = param_2[7];
    local_4 = param_2[8];
    *param_3 = 0.0;
    fVar9 = (float10)FUN_0096fbb0(param_1,&local_18,param_4);
    return fVar9;
  }
  *param_3 = fVar8 * fVar5 - fVar7 * fVar6;
  fVar3 = fVar7 * fVar5 - fVar8 * fVar4;
  *param_4 = fVar3;
  if (*param_3 < 0.0) {
    if (fVar3 < 0.0) {
      if (fVar7 < 0.0) {
        *param_4 = 0.0;
        if (fVar4 <= -fVar7) {
          *param_3 = 1.0;
          return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar1);
        }
        fVar4 = -fVar7 / fVar4;
        *param_3 = fVar4;
        return (float10)ABS(fVar4 * fVar7 + fVar1);
      }
      *param_3 = 0.0;
      if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
        *param_4 = 0.0;
        return (float10)ABS(fVar1);
      }
      if (fVar6 <= -fVar8) {
        *param_4 = 1.0;
        return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar1);
      }
      fVar6 = -fVar8 / fVar6;
      *param_4 = fVar6;
      return (float10)ABS(fVar6 * fVar8 + fVar1);
    }
    if (fVar2 < fVar3) {
      fVar7 = fVar7 + fVar5;
      if (fVar7 < 0.0) {
        *param_4 = 1.0;
        if (fVar4 <= -fVar7) {
          *param_3 = 1.0;
          return (float10)ABS(fVar8 + fVar7 + fVar8 + fVar7 + fVar1 + fVar6 + fVar4);
        }
        fVar4 = -fVar7 / fVar4;
        *param_3 = fVar4;
        return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar4 * fVar7 + fVar1);
      }
      *param_3 = 0.0;
      if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
        *param_4 = 0.0;
        return (float10)ABS(fVar1);
      }
      if (fVar6 <= -fVar8) {
        *param_4 = 1.0;
        return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar1);
      }
      fVar6 = -fVar8 / fVar6;
      *param_4 = fVar6;
      return (float10)ABS(fVar6 * fVar8 + fVar1);
    }
    *param_3 = 0.0;
    if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
      *param_4 = 0.0;
      return (float10)ABS(fVar1);
    }
    if (fVar6 <= -fVar8) {
      *param_4 = 1.0;
      return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar1);
    }
    fVar6 = -fVar8 / fVar6;
    *param_4 = fVar6;
    return (float10)ABS(fVar6 * fVar8 + fVar1);
  }
  if (fVar2 < *param_3) {
    if (fVar3 < 0.0) {
      if (-fVar7 < fVar4) {
        *param_4 = 0.0;
        if (!NAN(fVar7) && 0.0 < fVar7 != (fVar7 == 0.0)) {
          *param_3 = 0.0;
          return (float10)ABS(fVar1);
        }
        fVar4 = -fVar7 / fVar4;
        *param_3 = fVar4;
        return (float10)ABS(fVar4 * fVar7 + fVar1);
      }
      *param_3 = 1.0;
      fVar2 = fVar8 + fVar5;
      if (0.0 <= fVar2) {
        *param_4 = 0.0;
        return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar1);
      }
      if (fVar6 <= -fVar2) {
        *param_4 = 1.0;
        fVar8 = fVar8 + fVar7 + fVar5;
        return (float10)ABS(fVar6 + fVar4 + fVar1 + fVar8 + fVar8);
      }
      fVar6 = -fVar2 / fVar6;
      *param_4 = fVar6;
      return (float10)ABS(fVar7 + fVar7 + fVar6 * fVar2 + fVar4 + fVar1);
    }
    if (fVar2 < fVar3) {
      fVar2 = fVar7 + fVar5;
      if (-fVar2 < fVar4) {
        *param_4 = 1.0;
        if (0.0 <= fVar2) {
          *param_3 = 0.0;
          return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar1);
        }
        fVar4 = -fVar2 / fVar4;
        *param_3 = fVar4;
        return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar4 * fVar2 + fVar1);
      }
      *param_3 = 1.0;
      fVar5 = fVar8 + fVar5;
      if (0.0 <= fVar5) {
        *param_4 = 0.0;
        return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar1);
      }
      if (fVar6 <= -fVar5) {
        *param_4 = 1.0;
        return (float10)ABS(fVar8 + fVar2 + fVar8 + fVar2 + fVar6 + fVar4 + fVar1);
      }
      fVar6 = -fVar5 / fVar6;
      *param_4 = fVar6;
      return (float10)ABS(fVar7 + fVar7 + fVar6 * fVar5 + fVar4 + fVar1);
    }
    *param_3 = 1.0;
    fVar2 = fVar8 + fVar5;
    if (0.0 <= fVar2) {
      *param_4 = 0.0;
      return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar1);
    }
    if (fVar6 <= -fVar2) {
      *param_4 = 1.0;
      fVar8 = fVar8 + fVar7 + fVar5;
      return (float10)ABS(fVar6 + fVar4 + fVar1 + fVar8 + fVar8);
    }
    fVar6 = -fVar2 / fVar6;
    *param_4 = fVar6;
    return (float10)ABS(fVar7 + fVar7 + fVar6 * fVar2 + fVar4 + fVar1);
  }
  if (fVar3 >= 0.0) {
    if (fVar3 <= fVar2) {
      *param_3 = (1.0 / fVar2) * *param_3;
      fVar2 = (1.0 / fVar2) * *param_4;
      *param_4 = fVar2;
      return (float10)ABS(fVar2 * (*param_3 * fVar5 + fVar2 * fVar6 + fVar8 * 2.0) +
                          *param_3 * (fVar7 * 2.0 + *param_3 * fVar4 + *param_4 * fVar5) + fVar1);
    }
    *param_4 = 1.0;
    fVar7 = fVar7 + fVar5;
    if (0.0 <= fVar7) {
      *param_3 = 0.0;
      return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar1);
    }
    if (fVar4 <= -fVar7) {
      *param_3 = 1.0;
      return (float10)ABS(fVar8 + fVar7 + fVar8 + fVar7 + fVar1 + fVar6 + fVar4);
    }
    fVar4 = -fVar7 / fVar4;
    *param_3 = fVar4;
    return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar4 * fVar7 + fVar1);
  }
  *param_4 = 0.0;
  if (!NAN(fVar7) && 0.0 < fVar7 != (fVar7 == 0.0)) {
    *param_3 = 0.0;
    return (float10)ABS(fVar1);
  }
  if (fVar4 <= -fVar7) {
    *param_3 = 1.0;
    return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar1);
  }
  fVar4 = -fVar7 / fVar4;
  *param_3 = fVar4;
  return (float10)ABS(fVar4 * fVar7 + fVar1);
}



undefined4 FUN_00977510(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x80) == 0) && (*(int *)(in_ECX + 0x84) == 0)) {
    return 0;
  }
  return 1;
}



void FUN_00977530(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  undefined4 *in_ECX;
  uint uVar19;
  float *pfVar20;
  float local_90;
  float local_8c;
  float local_88;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_34 [52];
  
  in_ECX[0x1f] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  uVar19 = param_5 * 3 & 0xffff;
  *in_ECX = &PTR_FUN_00aa3e14;
  iVar11 = (uint)*(ushort *)(param_2 + uVar19 * 2) * 0xc;
  in_ECX[0x23] = iVar11 + param_4;
  iVar12 = (uint)*(ushort *)(param_2 + (uVar19 + 1 & 0xffff) * 2) * 0xc;
  in_ECX[0x24] = param_4 + iVar12;
  pfVar18 = (float *)(iVar12 + param_3);
  pfVar20 = (float *)(iVar11 + param_3);
  iVar11 = (uint)*(ushort *)(param_2 + (uVar19 + 2 & 0xffff) * 2) * 0xc;
  in_ECX[0x25] = param_4 + iVar11;
  pfVar3 = (float *)(iVar11 + 4 + param_3);
  pfVar1 = (float *)(in_ECX + 4);
  fVar5 = pfVar18[1];
  fVar6 = pfVar20[1];
  fVar7 = pfVar18[2];
  fVar8 = pfVar20[2];
  pfVar4 = (float *)(iVar11 + 8 + param_3);
  fVar9 = *pfVar3;
  fVar10 = *pfVar4;
  in_ECX[1] = (*(float *)(iVar11 + param_3) + *pfVar18 + *pfVar20) * 0.33333334;
  in_ECX[2] = (fVar9 + fVar5 + fVar6) * 0.33333334;
  in_ECX[3] = (fVar7 + fVar8 + fVar10) * 0.33333334;
  fVar5 = pfVar18[1];
  fVar6 = pfVar20[1];
  fVar7 = pfVar18[2];
  fVar8 = pfVar20[2];
  *pfVar1 = *pfVar18 - *pfVar20;
  in_ECX[5] = fVar5 - fVar6;
  in_ECX[6] = fVar7 - fVar8;
  FUN_0043f350();
  pfVar2 = (float *)(in_ECX + 7);
  fVar5 = *pfVar3;
  fVar6 = pfVar20[1];
  fVar7 = *pfVar4;
  fVar8 = pfVar20[2];
  *pfVar2 = *(float *)(iVar11 + param_3) - *pfVar20;
  in_ECX[8] = fVar5 - fVar6;
  in_ECX[9] = fVar7 - fVar8;
  fVar5 = (float)in_ECX[9] * (float)in_ECX[6] +
          *pfVar2 * *pfVar1 + (float)in_ECX[8] * (float)in_ECX[5];
  *pfVar2 = *pfVar2 - fVar5 * *pfVar1;
  in_ECX[8] = (float)in_ECX[8] - fVar5 * (float)in_ECX[5];
  in_ECX[9] = (float)in_ECX[9] - fVar5 * (float)in_ECX[6];
  FUN_0043f350();
  fVar5 = (float)in_ECX[5];
  fVar6 = (float)in_ECX[6];
  in_ECX[10] = (float)in_ECX[9] * fVar5 - (float)in_ECX[8] * fVar6;
  fVar7 = *pfVar1;
  in_ECX[0xb] = *pfVar2 * fVar6 - (float)in_ECX[9] * fVar7;
  in_ECX[0xc] = (float)in_ECX[8] * fVar7 - *pfVar2 * fVar5;
  local_90 = 0.0;
  local_8c = 0.0;
  local_88 = 0.0;
  local_78 = 0.0;
  local_74 = 0.0;
  local_70 = 0.0;
  fVar8 = (float)in_ECX[1];
  fVar14 = *pfVar20 - fVar8;
  fVar9 = (float)in_ECX[2];
  fVar16 = pfVar20[1] - fVar9;
  fVar10 = (float)in_ECX[3];
  fVar17 = pfVar20[2] - fVar10;
  fVar13 = fVar6 * fVar17 + fVar5 * fVar16 + fVar7 * fVar14;
  fVar15 = (float)in_ECX[9] * fVar17 + *pfVar2 * fVar14 + (float)in_ECX[8] * fVar16;
  fVar14 = (float)in_ECX[0xb] * fVar16 + (float)in_ECX[10] * fVar14 + (float)in_ECX[0xc] * fVar17;
  fVar16 = fVar13;
  if ((0.0 <= fVar13) && (fVar16 = local_90, 0.0 < fVar13)) {
    local_78 = fVar13;
  }
  local_90 = fVar16;
  fVar13 = fVar15;
  if ((0.0 <= fVar15) && (fVar13 = local_8c, 0.0 < fVar15)) {
    local_74 = fVar15;
  }
  local_8c = fVar13;
  fVar13 = fVar14;
  if ((0.0 <= fVar14) && (fVar13 = local_88, 0.0 < fVar14)) {
    local_70 = fVar14;
  }
  local_88 = fVar13;
  fVar14 = *pfVar18 - fVar8;
  fVar16 = pfVar18[1] - fVar9;
  fVar17 = pfVar18[2] - fVar10;
  fVar13 = fVar6 * fVar17 + fVar5 * fVar16 + fVar7 * fVar14;
  fVar15 = (float)in_ECX[9] * fVar17 + *pfVar2 * fVar14 + (float)in_ECX[8] * fVar16;
  fVar14 = (float)in_ECX[0xb] * fVar16 + (float)in_ECX[10] * fVar14 + (float)in_ECX[0xc] * fVar17;
  fVar16 = fVar13;
  if ((local_90 <= fVar13) && (fVar16 = local_90, local_78 < fVar13)) {
    local_78 = fVar13;
  }
  local_90 = fVar16;
  fVar13 = fVar15;
  if ((local_8c <= fVar15) && (fVar13 = local_8c, local_74 < fVar15)) {
    local_74 = fVar15;
  }
  local_8c = fVar13;
  fVar13 = fVar14;
  if ((local_88 <= fVar14) && (fVar13 = local_88, local_70 < fVar14)) {
    local_70 = fVar14;
  }
  local_88 = fVar13;
  fVar8 = *(float *)(iVar11 + param_3) - fVar8;
  fVar9 = *pfVar3 - fVar9;
  fVar10 = *pfVar4 - fVar10;
  fVar5 = fVar6 * fVar10 + fVar5 * fVar9 + fVar7 * fVar8;
  fVar7 = (float)in_ECX[9] * fVar10 + *pfVar2 * fVar8 + (float)in_ECX[8] * fVar9;
  fVar6 = fVar8 * (float)in_ECX[10] + (float)in_ECX[0xb] * fVar9 + (float)in_ECX[0xc] * fVar10;
  fVar8 = fVar5;
  if ((local_90 <= fVar5) && (fVar8 = local_90, local_78 < fVar5)) {
    local_78 = fVar5;
  }
  local_90 = fVar8;
  fVar5 = fVar7;
  if ((local_8c <= fVar7) && (fVar5 = local_8c, local_74 < fVar7)) {
    local_74 = fVar7;
  }
  local_8c = fVar5;
  fVar5 = fVar6;
  if ((local_88 <= fVar6) && (fVar5 = local_88, local_70 < fVar6)) {
    local_70 = fVar6;
  }
  local_88 = fVar5;
  in_ECX[0xd] = (local_78 - local_90) * 0.5;
  in_ECX[0xe] = (local_74 - local_8c) * 0.5;
  in_ECX[0xf] = (local_70 - local_88) * 0.5;
  fVar5 = (local_78 + local_90) * 0.5;
  fVar6 = (local_74 + local_8c) * 0.5;
  fVar7 = (local_70 + local_88) * 0.5;
  in_ECX[1] = (float)in_ECX[1] + *pfVar1 * fVar5 + *pfVar2 * fVar6 + (float)in_ECX[10] * fVar7;
  in_ECX[2] = (float)in_ECX[2] +
              (float)in_ECX[5] * fVar5 + (float)in_ECX[8] * fVar6 + (float)in_ECX[0xb] * fVar7;
  in_ECX[3] = fVar5 * (float)in_ECX[6] + fVar6 * (float)in_ECX[9] + fVar7 * (float)in_ECX[0xc] +
              (float)in_ECX[3];
  FUN_00718a50();
  FUN_0097aec0(local_34);
  in_ECX[0x1f] = param_1;
  return;
}



undefined1 FUN_00977c50(void)

{
  return 1;
}



void FUN_00977c60(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_1 - *param_3;
  fVar2 = param_1[1] - param_3[1];
  fVar3 = param_1[2] - param_3[2];
  fVar4 = *param_2 - *param_3;
  fVar5 = param_2[1] - param_3[1];
  fVar6 = param_2[2] - param_3[2];
  fVar10 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  fVar9 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
  fVar7 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
  fVar8 = (*param_4 - *param_3) * fVar1 + (param_4[1] - param_3[1]) * fVar2 +
          (param_4[2] - param_3[2]) * fVar3;
  fVar3 = (*param_4 - *param_3) * fVar4 + (param_4[1] - param_3[1]) * fVar5 +
          fVar6 * (param_4[2] - param_3[2]);
  fVar1 = 1.0 / (fVar10 * fVar7 - fVar9 * fVar9);
  fVar2 = fVar1 * (fVar8 * fVar7 - fVar3 * fVar9);
  *param_5 = fVar2;
  fVar1 = (fVar3 * fVar10 - fVar8 * fVar9) * fVar1;
  param_5[1] = fVar1;
  param_5[2] = (1.0 - fVar2) - fVar1;
  return;
}



undefined4
FUN_00977df0(float param_1,float *param_2,float param_3,float *param_4,float *param_5,float *param_6
            ,float *param_7,float *param_8,float *param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  float fVar12;
  float local_38;
  float local_34;
  float local_24;
  float local_20;
  
  fVar2 = ((param_5[2] + param_4[2] * 0.0) * param_2[2] +
          (*param_5 + *param_4 * 0.0) * *param_2 + (param_5[1] + param_4[1] * 0.0) * param_2[1]) -
          param_3;
  fVar12 = ((param_4[2] * 0.0 + param_6[2]) * param_2[2] +
           (param_6[1] + param_4[1] * 0.0) * param_2[1] + (*param_6 + *param_4 * 0.0) * *param_2) -
           param_3;
  bVar11 = false;
  fVar1 = ((param_4[2] * param_1 + param_5[2]) * param_2[2] +
          (param_5[1] + param_4[1] * param_1) * param_2[1] +
          (*param_5 + *param_4 * param_1) * *param_2) - param_3;
  param_3 = ((param_4[2] * param_1 + param_6[2]) * param_2[2] +
            (param_6[1] + param_4[1] * param_1) * param_2[1] +
            (*param_6 + *param_4 * param_1) * *param_2) - param_3;
  if (fVar2 * fVar12 < 0.0 != (fVar2 * fVar12 == 0.0)) {
    if ((fVar2 == 0.0) && (fVar12 == 0.0)) {
      *param_7 = 0.0;
      *param_9 = 0.0;
      fVar1 = *param_7;
      fVar2 = param_4[1];
      fVar12 = param_4[2];
      fVar3 = param_5[1];
      fVar4 = param_5[2];
      *param_8 = *param_5 + fVar1 * *param_4;
      param_8[1] = fVar3 + fVar2 * fVar1;
      param_8[2] = fVar1 * fVar12 + fVar4;
      fVar1 = *param_9;
      fVar2 = param_4[1];
      fVar12 = param_4[2];
      fVar3 = param_6[1];
      fVar4 = param_6[2];
      *param_10 = *param_6 + fVar1 * *param_4;
      param_10[1] = fVar3 + fVar2 * fVar1;
      param_10[2] = fVar1 * fVar12 + fVar4;
      return 1;
    }
    *param_7 = 0.0;
    bVar11 = true;
    fVar9 = fVar2 / (fVar2 - fVar12);
    fVar3 = param_4[1];
    fVar4 = param_4[2];
    fVar5 = param_6[1];
    fVar6 = param_6[2];
    fVar10 = 1.0 - fVar9;
    fVar7 = param_5[1];
    fVar8 = param_5[2];
    *param_8 = fVar10 * *param_5 + fVar9 * *param_6 + *param_4 * 0.0;
    param_8[1] = fVar7 * fVar10 + fVar5 * fVar9 + fVar3 * 0.0;
    param_8[2] = fVar10 * fVar8 + fVar6 * fVar9 + fVar4 * 0.0;
  }
  if (fVar1 * fVar2 < 0.0 != (fVar1 * fVar2 == 0.0)) {
    if ((fVar2 == 0.0) && (fVar1 == 0.0)) {
      *param_7 = 0.0;
      *param_9 = param_1;
      fVar1 = *param_7;
      fVar2 = param_4[1];
      fVar12 = param_4[2];
      fVar3 = param_5[1];
      fVar4 = param_5[2];
      *param_8 = *param_5 + fVar1 * *param_4;
      param_8[1] = fVar3 + fVar2 * fVar1;
      param_8[2] = fVar1 * fVar12 + fVar4;
      fVar1 = *param_9;
      local_24 = *param_5 + fVar1 * *param_4;
      local_20 = param_5[1] + fVar1 * param_4[1];
      fVar1 = fVar1 * param_4[2] + param_5[2];
      goto LAB_0097828f;
    }
    fVar2 = (fVar2 * (param_1 - 0.0)) / (fVar2 - fVar1) + 0.0;
    fVar3 = *param_5 + fVar2 * *param_4;
    fVar4 = param_5[1] + param_4[1] * fVar2;
    fVar5 = param_4[2] * fVar2 + param_5[2];
    if (bVar11) {
      *param_9 = fVar2;
      *param_10 = fVar3;
      param_10[1] = fVar4;
      param_10[2] = fVar5;
      if (*param_9 < *param_7) {
        fVar1 = *param_7;
        *param_7 = *param_9;
        *param_9 = fVar1;
        fVar1 = *param_8;
        fVar2 = param_8[1];
        fVar12 = param_8[2];
        *param_8 = *param_10;
        param_8[1] = param_10[1];
        param_8[2] = param_10[2];
        *param_10 = fVar1;
        param_10[1] = fVar2;
        param_10[2] = fVar12;
      }
      return 1;
    }
    *param_7 = fVar2;
    *param_8 = fVar3;
    param_8[1] = fVar4;
    param_8[2] = fVar5;
    bVar11 = true;
  }
  if (param_3 * fVar12 < 0.0 != (param_3 * fVar12 == 0.0)) {
    if ((fVar12 == 0.0) && (param_3 == 0.0)) {
      *param_7 = 0.0;
      *param_9 = param_1;
      fVar1 = *param_7;
      fVar2 = param_4[1];
      fVar12 = param_4[2];
      fVar3 = param_6[1];
      fVar4 = param_6[2];
      *param_8 = *param_6 + fVar1 * *param_4;
      param_8[1] = fVar3 + fVar1 * fVar2;
      param_8[2] = fVar1 * fVar12 + fVar4;
      fVar1 = *param_9;
      local_24 = *param_6 + fVar1 * *param_4;
      local_20 = param_6[1] + fVar1 * param_4[1];
      fVar1 = fVar1 * param_4[2] + param_6[2];
      goto LAB_0097828f;
    }
    fVar2 = (fVar12 * (param_1 - 0.0)) / (fVar12 - param_3) + 0.0;
    fVar12 = *param_6 + fVar2 * *param_4;
    local_38 = param_6[1] + param_4[1] * fVar2;
    local_34 = param_4[2] * fVar2 + param_6[2];
    if (bVar11) goto LAB_009784eb;
    *param_7 = fVar2;
    *param_8 = fVar12;
    param_8[1] = local_38;
    param_8[2] = local_34;
    bVar11 = true;
  }
  if (param_3 * fVar1 < 0.0 == (param_3 * fVar1 == 0.0)) {
    if (!bVar11) {
      return 0;
    }
  }
  else {
    if ((fVar1 == 0.0) && (param_3 == 0.0)) {
      *param_7 = param_1;
      *param_9 = param_1;
      fVar1 = *param_7;
      fVar2 = param_4[1];
      fVar12 = param_4[2];
      fVar3 = param_5[1];
      fVar4 = param_5[2];
      *param_8 = *param_5 + fVar1 * *param_4;
      param_8[1] = fVar3 + fVar1 * fVar2;
      param_8[2] = fVar1 * fVar12 + fVar4;
      fVar1 = *param_9;
      local_24 = *param_6 + fVar1 * *param_4;
      local_20 = param_6[1] + fVar1 * param_4[1];
      fVar1 = fVar1 * param_4[2] + param_6[2];
LAB_0097828f:
      *param_10 = local_24;
      param_10[1] = local_20;
      param_10[2] = fVar1;
      return 1;
    }
    fVar1 = fVar1 / (fVar1 - param_3);
    fVar2 = 1.0 - fVar1;
    fVar12 = fVar2 * *param_5 + fVar1 * *param_6 + *param_4 * param_1;
    local_38 = param_5[1] * fVar2 + param_6[1] * fVar1 + param_4[1] * param_1;
    local_34 = fVar2 * param_5[2] + param_6[2] * fVar1 + param_4[2] * param_1;
    fVar2 = param_1;
    if (bVar11) {
LAB_009784eb:
      *param_9 = fVar2;
      *param_10 = fVar12;
      param_10[1] = local_38;
      param_10[2] = local_34;
      if (*param_7 <= *param_9) {
        return 1;
      }
      fVar1 = *param_7;
      *param_7 = *param_9;
      *param_9 = fVar1;
      fVar1 = *param_8;
      fVar2 = param_8[1];
      fVar12 = param_8[2];
      *param_8 = *param_10;
      param_8[1] = param_10[1];
      param_8[2] = param_10[2];
      *param_10 = fVar1;
      param_10[1] = fVar2;
      param_10[2] = fVar12;
      return 1;
    }
    *param_7 = param_1;
    *param_8 = fVar12;
    param_8[1] = local_38;
    param_8[2] = local_34;
  }
  *param_9 = *param_7;
  *param_10 = *param_8;
  param_10[1] = param_8[1];
  param_10[2] = param_8[2];
  return 1;
}



undefined4
FUN_00978770(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,float *param_8,float *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 extraout_EDX;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar5 = FUN_00977df0(param_7,param_4,param_5,param_6,param_1,param_2,&local_38,&local_30,&local_34
                       ,&local_24);
  if (iVar5 == 0) {
    return 0;
  }
  uVar1 = param_3[1];
  uVar2 = *param_3;
  FUN_00977c60(uVar2,uVar1,param_3[2],&local_30,&local_c);
  FUN_00977c60(uVar2,uVar1,extraout_EDX,&local_24,&local_18);
  if (0.0 <= local_c) {
    if (0.0 <= local_8) {
      if (0.0 <= local_4) {
        if (*param_8 <= local_38) {
          return 1;
        }
        *param_8 = local_38;
        *param_9 = local_30;
        param_9[1] = local_2c;
        param_9[2] = local_28;
        return 1;
      }
      if (local_10 < 0.0) {
        return 0;
      }
      local_4 = local_4 / (local_4 - local_10);
      fVar4 = 1.0 - local_4;
      if (local_c * fVar4 + local_4 * local_18 < 0.0) {
        return 0;
      }
      if (0.0 <= local_8 * fVar4 + local_14 * local_4) {
        fVar3 = local_38 * fVar4 + local_4 * local_34;
        if (*param_8 <= fVar3) {
          return 1;
        }
        *param_8 = fVar3;
        *param_9 = fVar4 * local_30 + local_24 * local_4;
        param_9[1] = local_2c * fVar4 + local_20 * local_4;
        param_9[2] = fVar4 * local_28 + local_1c * local_4;
        return 1;
      }
    }
    else {
      if (local_14 < 0.0) {
        return 0;
      }
      local_8 = local_8 / (local_8 - local_14);
      fVar4 = 1.0 - local_8;
      if ((0.0 <= local_c * fVar4 + local_8 * local_18) &&
         (0.0 <= local_4 * fVar4 + local_10 * local_8)) {
        fVar3 = local_38 * fVar4 + local_8 * local_34;
        if (*param_8 <= fVar3) {
          return 1;
        }
        *param_8 = fVar3;
        *param_9 = fVar4 * local_30 + local_24 * local_8;
        param_9[1] = local_2c * fVar4 + local_20 * local_8;
        param_9[2] = fVar4 * local_28 + local_1c * local_8;
        return 1;
      }
    }
  }
  else if (0.0 <= local_18) {
    local_c = local_c / (local_c - local_18);
    fVar4 = 1.0 - local_c;
    if (local_8 * fVar4 + local_14 * local_c < 0.0) {
      return 0;
    }
    if (local_4 * fVar4 + local_10 * local_c < 0.0) {
      return 0;
    }
    fVar3 = local_38 * fVar4 + local_c * local_34;
    if (*param_8 <= fVar3) {
      return 1;
    }
    *param_8 = fVar3;
    *param_9 = fVar4 * local_30 + local_24 * local_c;
    param_9[1] = local_2c * fVar4 + local_20 * local_c;
    param_9[2] = fVar4 * local_28 + local_c * local_1c;
    return 1;
  }
  return 0;
}



uint FUN_00978c00(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)*param_2;
  pfVar2 = (float *)param_2[1];
  local_c = *pfVar2 - *pfVar1;
  local_8 = pfVar2[1] - pfVar1[1];
  pfVar3 = (float *)param_2[2];
  local_4 = pfVar2[2] - pfVar1[2];
  local_18 = *pfVar3 - *pfVar1;
  local_14 = pfVar3[1] - pfVar1[1];
  local_10 = pfVar3[2] - pfVar1[2];
  local_24 = local_8 * local_10 - local_4 * local_14;
  local_20 = local_18 * local_4 - local_c * local_10;
  local_1c = local_14 * local_c - local_8 * local_18;
  fVar4 = pfVar1[2] * local_1c + *pfVar1 * local_24 + pfVar1[1] * local_20;
  uVar5 = FUN_00978770(*param_1,param_1[1],param_2,&local_24,fVar4,param_3,param_4,param_5,param_6);
  uVar6 = FUN_00978770(*param_1,param_1[2],param_2,&local_24,fVar4,param_3,param_4,param_5,param_6);
  uVar7 = FUN_00978770(param_1[1],param_1[2],param_2,&local_24,fVar4,param_3,param_4,param_5,param_6
                      );
  return uVar7 | uVar5 | uVar6;
}



undefined4 FUN_00978d60(float param_1,float param_2,float *param_3,float *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = *(int *)((int)param_2 + 0x7c);
  iVar4 = *(int *)((int)param_1 + 0x7c);
  uVar2 = *(undefined4 *)(iVar4 + 4);
  pfVar7 = (float *)(iVar3 + 0x10);
  iVar6 = (int)param_1 + 0x8c;
  iVar1 = (int)param_2 + 0x8c;
  param_1 = 3.4028235e+38;
  local_24 = *(float *)(iVar4 + 0x10) - *pfVar7;
  local_20 = *(float *)(iVar4 + 0x14) - *(float *)(iVar3 + 0x14);
  local_1c = *(float *)(iVar4 + 0x18) - *(float *)(iVar3 + 0x18);
  local_c = local_24;
  local_8 = local_20;
  local_4 = local_1c;
  iVar5 = FUN_00978c00(iVar6,iVar1,&local_24,uVar2,&param_1,&local_18);
  param_2 = 3.4028235e+38;
  local_24 = *pfVar7 - *(float *)(iVar4 + 0x10);
  local_20 = *(float *)(iVar3 + 0x14) - *(float *)(iVar4 + 0x14);
  local_1c = *(float *)(iVar3 + 0x18) - *(float *)(iVar4 + 0x18);
  local_c = local_24;
  local_8 = local_20;
  local_4 = local_1c;
  iVar6 = FUN_00978c00(iVar1,iVar6,&local_24,uVar2,&param_2,&local_c);
  if (iVar5 == 0) {
    if (iVar6 == 0) {
      return 0;
    }
    *param_3 = param_2;
    local_18 = *(float *)(iVar4 + 0x10) * param_2;
    local_14 = *(float *)(iVar4 + 0x14) * param_2;
    local_10 = param_2 * *(float *)(iVar4 + 0x18);
LAB_00978e8f:
    local_24 = local_18 + local_c;
    local_20 = local_14 + local_8;
    local_10 = local_10 + local_4;
  }
  else {
    if (iVar6 == 0) {
      *param_3 = param_1;
      local_c = *pfVar7 * param_1;
      local_8 = *(float *)(iVar3 + 0x14) * param_1;
      local_4 = param_1 * *(float *)(iVar3 + 0x18);
    }
    else {
      if (param_1 <= param_2) {
        *param_3 = param_1;
        local_c = *pfVar7 * param_1;
        local_8 = *(float *)(iVar3 + 0x14) * param_1;
        local_4 = param_1 * *(float *)(iVar3 + 0x18);
        goto LAB_00978e8f;
      }
      *param_3 = param_2;
      local_18 = *(float *)(iVar4 + 0x10) * param_2;
      local_14 = *(float *)(iVar4 + 0x14) * param_2;
      local_10 = param_2 * *(float *)(iVar4 + 0x18);
    }
    local_24 = local_c + local_18;
    local_20 = local_8 + local_14;
    local_10 = local_4 + local_10;
  }
  *param_4 = local_24;
  param_4[1] = local_20;
  param_4[2] = local_10;
  return 1;
}



undefined4
FUN_00978f80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  int local_4;
  
  local_3c = param_3;
  local_38 = param_4;
  local_8 = 0;
  local_4 = 0;
  local_40 = param_2;
  local_34 = param_5;
  iVar1 = FUN_00978d60();
  if (iVar1 != 0) {
    *param_6 = 1;
    local_8 = in_ECX + 0x8c;
    local_4 = param_1 + 0x8c;
    FUN_00980240(local_2c,local_20);
    FUN_00980240(local_2c,local_14);
    uVar2 = FUN_0097a470(&local_40);
    return uVar2;
  }
  return 0;
}



undefined4
FUN_00979030(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            int param_7)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  if (param_6 != in_ECX[0x22]) {
    FUN_0097aec0(param_2 + 100);
    in_ECX[0x22] = param_6;
  }
  if (param_7 != param_1[0x22]) {
    FUN_0097aec0(param_3 + 100);
    param_1[0x22] = param_7;
  }
  iVar2 = FUN_0097afc0(param_1 + 1);
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 4))();
  if (((cVar1 == '\0') && (param_5 != 0)) && ((param_1[0x20] != 0 || (param_1[0x21] != 0)))) {
    iVar2 = param_7;
    cVar1 = (**(code **)(*in_ECX + 8))
                      (param_1[0x20],param_2,param_3,param_4,param_5 + -1,param_6,param_7);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*in_ECX + 8))
                        (param_1[0x21],iVar2,unaff_EDI,unaff_ESI,param_5 + -1,unaff_EBX,param_7);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    return 1;
  }
  return 1;
}



uint FUN_00979140(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9,undefined4 param_10)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  
  if (param_8 != in_ECX[0x22]) {
    FUN_0097aec0(param_4 + 100);
    in_ECX[0x22] = param_8;
  }
  if (param_9 != param_1[0x22]) {
    FUN_0097aec0(param_5 + 100);
    param_1[0x22] = param_9;
  }
  iVar2 = FUN_0097afc0(param_1 + 1);
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 4))();
  if (cVar1 == '\0') {
    if ((param_7 == 0) || ((param_1[0x20] == 0 && (param_1[0x21] == 0)))) {
      uVar3 = FUN_0097a530(param_1,param_2,param_3,param_4,param_5,param_10);
      return uVar3;
    }
    param_7 = param_7 + -1;
    iVar2 = param_7;
    uVar3 = (**(code **)(*in_ECX + 0xc))
                      (param_1[0x20],param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                       ,param_10);
    if ((int)uVar3 < 1) {
      uVar3 = (**(code **)(*in_ECX + 0xc))
                        (param_1[0x21],iVar2,param_8,param_9,param_5,unaff_EDI,param_7,unaff_EBP,
                         unaff_EBX,unaff_retaddr);
      return uVar3 & ((int)uVar3 < 1) - 1;
    }
  }
  else {
    if ((param_6 < 0) && (param_7 < 0)) {
      uVar3 = FUN_00978f80(param_1,param_2,param_3,param_4,param_5,param_10);
      return uVar3;
    }
    uVar3 = FUN_0097a530(param_1,param_2,param_3,param_4,param_5,param_10);
  }
  return uVar3;
}



void FUN_009792e0(byte param_1)

{
  FUN_009794a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4
FUN_00979300(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5,int param_6
            )

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = param_6;
  iVar6 = param_5;
  if (param_6 != *(int *)(in_ECX + 0x88)) {
    FUN_0097aec0(param_5 + 100);
    *(int *)(in_ECX + 0x88) = iVar5;
  }
  param_6 = CONCAT31(param_6._1_3_,*(undefined1 *)(param_3 + 0x10));
  cVar4 = FUN_0096e5e0(param_1,param_2,*(undefined4 *)(in_ECX + 0x8c),*(undefined4 *)(in_ECX + 0x90)
                       ,*(undefined4 *)(in_ECX + 0x94),param_6,&local_c,&param_5,local_34,local_38);
  *param_4 = cVar4;
  if (cVar4 != '\0') {
    iVar5 = FUN_00401f00(0x44);
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0095a2d0(iVar6);
    }
    *(undefined4 *)(iVar6 + 8) = local_c;
    *(undefined4 *)(iVar6 + 0xc) = local_8;
    *(undefined4 *)(iVar6 + 0x10) = local_4;
    *(int *)(iVar6 + 0x14) = param_5;
    if (*(char *)(param_3 + 0x2d) != '\0') {
      pfVar1 = *(float **)(in_ECX + 0x8c);
      pfVar2 = *(float **)(in_ECX + 0x90);
      pfVar3 = *(float **)(in_ECX + 0x94);
      local_18 = *pfVar2 - *pfVar1;
      local_14 = pfVar2[1] - pfVar1[1];
      local_10 = pfVar2[2] - pfVar1[2];
      local_24 = *pfVar3 - *pfVar1;
      local_20 = pfVar3[1] - pfVar1[1];
      local_1c = pfVar3[2] - pfVar1[2];
      local_30 = local_14 * local_1c - local_10 * local_20;
      local_2c = local_24 * local_10 - local_18 * local_1c;
      local_28 = local_20 * local_18 - local_14 * local_24;
      FUN_0043f350();
      *(float *)(iVar6 + 0x28) = local_30;
      *(float *)(iVar6 + 0x2c) = local_2c;
      *(float *)(iVar6 + 0x30) = local_28;
    }
    *(int *)(param_3 + 0x28) = iVar6;
    param_6 = iVar6;
    FUN_004baca0(&param_6);
  }
  return 0;
}



void FUN_009794a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa3dfc;
  if ((undefined4 *)in_ECX[0x20] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x20])(1);
    if ((undefined4 *)in_ECX[0x21] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0x21])(1);
    }
  }
  return;
}



void FUN_009794d0(float *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int in_ECX;
  uint uVar10;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_30 = 0.0;
  uVar10 = param_6 & 0xffff;
  local_2c = 0.0;
  local_28 = 0.0;
  local_38 = 0.0;
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  while ((int)(param_6 & 0xffff) <= param_7) {
    iVar6 = *(int *)(param_8 + (param_6 & 0xffff) * 4);
    pfVar2 = (float *)(param_3 + (uint)*(ushort *)(param_2 + 2 + (iVar6 * 3 + 1) * 2) * 0xc);
    pfVar1 = (float *)(param_5 + iVar6 * 0xc);
    pfVar3 = (float *)(param_3 + (uint)*(ushort *)(param_2 + iVar6 * 6) * 0xc);
    fVar5 = *(float *)(param_4 + iVar6 * 4);
    pfVar4 = (float *)(param_3 + (uint)*(ushort *)(param_2 + 2 + iVar6 * 6) * 0xc);
    local_38 = fVar5 + local_38;
    local_30 = *pfVar1 * fVar5 + local_30;
    local_2c = fVar5 * pfVar1[1] + local_2c;
    local_28 = pfVar1[2] * fVar5 + local_28;
    local_18 = (*pfVar2 * *pfVar2 + *pfVar4 * *pfVar4 + *pfVar3 * *pfVar3 + *pfVar1 * *pfVar1) *
               fVar5 + local_18;
    local_14 = (*pfVar2 * pfVar2[1] +
               *pfVar4 * pfVar4[1] + pfVar3[1] * *pfVar3 + *pfVar1 * pfVar1[1]) * fVar5 + local_14;
    local_10 = (*pfVar2 * pfVar2[2] +
               *pfVar4 * pfVar4[2] + pfVar3[2] * *pfVar3 + *pfVar1 * pfVar1[2]) * fVar5 + local_10;
    local_c = (pfVar2[1] * pfVar2[1] +
              pfVar4[1] * pfVar4[1] + pfVar3[1] * pfVar3[1] + pfVar1[1] * pfVar1[1]) * fVar5 +
              local_c;
    local_8 = (pfVar2[2] * pfVar2[1] +
              pfVar4[2] * pfVar4[1] + pfVar3[2] * pfVar3[1] + pfVar1[2] * pfVar1[1]) * fVar5 +
              local_8;
    local_4 = (pfVar2[2] * pfVar2[2] +
              pfVar4[2] * pfVar4[2] + pfVar3[2] * pfVar3[2] + pfVar1[2] * pfVar1[2]) * fVar5 +
              local_4;
    uVar10 = uVar10 + 1;
    param_6 = uVar10;
  }
  local_38 = 1.0 / local_38;
  fVar5 = local_38 * 0.25;
  *(float *)(in_ECX + 4) = local_30 * local_38;
  *(float *)(in_ECX + 8) = local_2c * local_38;
  *(float *)(in_ECX + 0xc) = local_38 * local_28;
  *param_1 = fVar5 * local_18 - *(float *)(in_ECX + 4) * *(float *)(in_ECX + 4);
  fVar9 = fVar5 * local_14 - *(float *)(in_ECX + 8) * *(float *)(in_ECX + 4);
  param_1[1] = fVar9;
  fVar8 = fVar5 * local_10 - *(float *)(in_ECX + 4) * *(float *)(in_ECX + 0xc);
  param_1[2] = fVar8;
  param_1[4] = fVar5 * local_c - *(float *)(in_ECX + 8) * *(float *)(in_ECX + 8);
  fVar7 = fVar5 * local_8 - *(float *)(in_ECX + 8) * *(float *)(in_ECX + 0xc);
  param_1[5] = fVar7;
  param_1[8] = local_4 * fVar5 - *(float *)(in_ECX + 0xc) * *(float *)(in_ECX + 0xc);
  param_1[3] = fVar9;
  param_1[6] = fVar8;
  param_1[7] = fVar7;
  return;
}



void FUN_009797b0(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
                 int *param_7)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  float *pfVar8;
  int local_18;
  int local_10;
  
  iVar4 = (int)param_7;
  piVar3 = param_6;
  *param_5 = param_2 + -1;
  iVar5 = (param_2 + param_3) / 2;
  *param_6 = param_3 + 1;
  local_10 = 0;
  pfVar8 = (float *)(in_ECX + 0x18);
  do {
    if ((param_2 <= *param_5) && (*piVar3 <= param_3)) break;
    *param_5 = param_2 + -1;
    *piVar3 = param_3 + 1;
    param_6 = (int *)param_2;
    if (3 < (param_3 - param_2) + 1) {
      local_18 = param_2 + 2;
      param_7 = (int *)(param_4 + local_18 * 4);
      do {
        iVar1 = param_7[-2];
        iVar6 = param_1 + iVar1 * 0xc;
        fVar2 = (*(float *)(iVar6 + 8) - *(float *)(in_ECX + 0xc)) * *pfVar8 +
                pfVar8[-2] * (*(float *)(param_1 + iVar1 * 0xc) - *(float *)(in_ECX + 4)) +
                pfVar8[-1] * (*(float *)(iVar6 + 4) - *(float *)(in_ECX + 8));
        if (fVar2 <= 0.0) {
          if ((fVar2 < 0.0) || (iVar5 < (int)param_6)) {
            *piVar3 = *piVar3 + -1;
            iVar6 = *piVar3;
          }
          else {
            *param_5 = *param_5 + 1;
            iVar6 = *param_5;
          }
        }
        else {
          *param_5 = *param_5 + 1;
          iVar6 = *param_5;
        }
        *(int *)(iVar4 + iVar6 * 4) = iVar1;
        iVar1 = param_7[-1];
        iVar6 = param_1 + iVar1 * 0xc;
        fVar2 = (*(float *)(iVar6 + 8) - *(float *)(in_ECX + 0xc)) * *pfVar8 +
                pfVar8[-2] * (*(float *)(param_1 + iVar1 * 0xc) - *(float *)(in_ECX + 4)) +
                pfVar8[-1] * (*(float *)(iVar6 + 4) - *(float *)(in_ECX + 8));
        if (fVar2 <= 0.0) {
          if ((fVar2 < 0.0) || (iVar5 < local_18 + -1)) {
            *piVar3 = *piVar3 + -1;
            iVar6 = *piVar3;
          }
          else {
            *param_5 = *param_5 + 1;
            iVar6 = *param_5;
          }
        }
        else {
          *param_5 = *param_5 + 1;
          iVar6 = *param_5;
        }
        *(int *)(iVar4 + iVar6 * 4) = iVar1;
        iVar1 = *param_7;
        iVar6 = param_1 + iVar1 * 0xc;
        fVar2 = (*(float *)(iVar6 + 8) - *(float *)(in_ECX + 0xc)) * *pfVar8 +
                pfVar8[-2] * (*(float *)(param_1 + iVar1 * 0xc) - *(float *)(in_ECX + 4)) +
                pfVar8[-1] * (*(float *)(iVar6 + 4) - *(float *)(in_ECX + 8));
        if (fVar2 <= 0.0) {
          if ((fVar2 < 0.0) || (iVar5 < local_18)) {
            *piVar3 = *piVar3 + -1;
            iVar6 = *piVar3;
          }
          else {
            *param_5 = *param_5 + 1;
            iVar6 = *param_5;
          }
        }
        else {
          *param_5 = *param_5 + 1;
          iVar6 = *param_5;
        }
        *(int *)(iVar4 + iVar6 * 4) = iVar1;
        iVar1 = param_7[1];
        iVar6 = param_1 + iVar1 * 0xc;
        fVar2 = (*(float *)(iVar6 + 8) - *(float *)(in_ECX + 0xc)) * *pfVar8 +
                pfVar8[-2] * (*(float *)(param_1 + iVar1 * 0xc) - *(float *)(in_ECX + 4)) +
                pfVar8[-1] * (*(float *)(iVar6 + 4) - *(float *)(in_ECX + 8));
        if (fVar2 <= 0.0) {
          if ((fVar2 < 0.0) || (iVar5 < local_18 + 1)) {
            *piVar3 = *piVar3 + -1;
            iVar6 = *piVar3;
          }
          else {
            *param_5 = *param_5 + 1;
            iVar6 = *param_5;
          }
        }
        else {
          *param_5 = *param_5 + 1;
          iVar6 = *param_5;
        }
        param_7 = param_7 + 4;
        local_18 = local_18 + 4;
        *(int *)(iVar4 + iVar6 * 4) = iVar1;
        param_6 = (int *)((int)param_6 + 4);
      } while ((int)param_6 <= param_3 + -3);
    }
    for (; (int)param_6 <= param_3; param_6 = (int *)((int)param_6 + 1)) {
      iVar1 = *(int *)(param_4 + (int)param_6 * 4);
      iVar6 = param_1 + iVar1 * 0xc;
      fVar2 = (*(float *)(iVar6 + 8) - *(float *)(in_ECX + 0xc)) * *pfVar8 +
              pfVar8[-2] * (*(float *)(param_1 + iVar1 * 0xc) - *(float *)(in_ECX + 4)) +
              pfVar8[-1] * (*(float *)(iVar6 + 4) - *(float *)(in_ECX + 8));
      if (fVar2 <= 0.0) {
        if ((fVar2 < 0.0) || (iVar5 < (int)param_6)) {
          *piVar3 = *piVar3 + -1;
          iVar6 = *piVar3;
        }
        else {
          *param_5 = *param_5 + 1;
          iVar6 = *param_5;
        }
      }
      else {
        *param_5 = *param_5 + 1;
        iVar6 = *param_5;
      }
      *(int *)(iVar4 + iVar6 * 4) = iVar1;
    }
    local_10 = local_10 + 1;
    pfVar8 = pfVar8 + 3;
  } while (local_10 < 3);
  if ((local_10 == 3) && ((*param_5 < param_2 || (param_3 < *piVar3)))) {
    *param_5 = iVar5;
    *piVar3 = iVar5 + 1;
    if (param_2 <= param_3) {
      puVar7 = (undefined4 *)(iVar4 + param_2 * 4);
      iVar5 = (param_3 - param_2) + 1;
      do {
        *puVar7 = *(undefined4 *)((param_4 - iVar4) + (int)puVar7);
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}



undefined4
FUN_00979b90(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_6 != in_ECX[0x22]) {
    FUN_0097aec0(param_2 + 100);
    in_ECX[0x22] = param_6;
  }
  if (param_7 != param_1[0x22]) {
    FUN_0097aec0(param_3 + 100);
    param_1[0x22] = param_7;
  }
  iVar3 = FUN_0097afc0(param_1 + 1);
  if (iVar3 == 0) {
    return 0;
  }
  if ((param_4 != 0) && (param_5 != 0)) {
    cVar2 = (**(code **)(*in_ECX + 4))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 4))();
      piVar1 = (int *)in_ECX[0x20];
      if (cVar2 == '\0') {
        if ((piVar1 != (int *)0x0) && (in_ECX[0x21] != 0)) {
          param_4 = param_4 + -1;
          iVar3 = param_7;
          cVar2 = (**(code **)(*piVar1 + 8))
                            (param_1[0x20],param_2,param_3,param_4,param_5 + -1,param_6,param_7);
          if (cVar2 != '\0') {
            return 1;
          }
          iVar5 = param_7;
          cVar2 = (**(code **)(*(int *)in_ECX[0x20] + 8))
                            (param_1[0x21],iVar3,param_3,param_6,unaff_EBX,unaff_ESI,param_7);
          if (cVar2 != '\0') {
            return 1;
          }
          iVar4 = param_7;
          cVar2 = (**(code **)(*(int *)in_ECX[0x21] + 8))
                            (param_1[0x20],iVar5,param_3,unaff_ESI,param_2,param_4,param_7);
          if (cVar2 != '\0') {
            return 1;
          }
          cVar2 = (**(code **)(*(int *)in_ECX[0x21] + 8))
                            (param_1[0x21],iVar4,param_3,param_4,iVar3,param_6,param_7);
          if (cVar2 != '\0') {
            return 1;
          }
          return 0;
        }
      }
      else if ((piVar1 != (int *)0x0) && (in_ECX[0x21] != 0)) {
        iVar3 = param_7;
        cVar2 = (**(code **)(*piVar1 + 8))
                          (param_1,param_2,param_3,param_4 + -1,param_5,param_6,param_7);
        if ((cVar2 == '\0') &&
           (cVar2 = (**(code **)(*(int *)in_ECX[0x21] + 8))
                              (param_1,iVar3,param_3,unaff_EBX,unaff_EDI,unaff_ESI,param_7),
           cVar2 == '\0')) {
          return 0;
        }
        return 1;
      }
    }
    else {
      cVar2 = (**(code **)(*param_1 + 4))();
      if ((cVar2 == '\0') && (cVar2 = FUN_00977510(), cVar2 != '\0')) {
        iVar3 = param_7;
        cVar2 = (**(code **)(*in_ECX + 8))
                          (param_1[0x20],param_2,param_3,param_4,param_5 + -1,param_6,param_7);
        if (cVar2 != '\0') {
          return 1;
        }
        cVar2 = (**(code **)(*in_ECX + 8))
                          (param_1[0x21],iVar3,param_3,unaff_EBX,unaff_EDI,unaff_ESI,param_7);
        if (cVar2 == '\0') {
          return 0;
        }
        return 1;
      }
    }
  }
  return 1;
}



void FUN_00979ef0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,int param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int in_ECX;
  uint uVar15;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 local_64 [12];
  undefined1 local_58 [36];
  undefined1 local_34 [52];
  
  pfVar1 = (float *)(in_ECX + 4);
  pfVar2 = (float *)(in_ECX + 0x10);
  FUN_009794d0(local_58,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_00711ae0(local_64,pfVar2);
  local_ac = 0.0;
  uVar15 = param_6 & 0xffff;
  local_a8 = 0.0;
  local_a4 = 0.0;
  local_a0 = 0.0;
  local_9c = 0.0;
  local_98 = 0.0;
  fVar12 = local_ac;
  fVar13 = local_a8;
  fVar14 = local_a4;
  while ((int)(param_6 & 0xffff) <= param_7) {
    iVar6 = *(int *)(param_8 + (param_6 & 0xffff) * 4);
    pfVar3 = (float *)(param_3 + (uint)*(ushort *)(param_2 + iVar6 * 6) * 0xc);
    fVar7 = *pfVar3 - *pfVar1;
    fVar8 = pfVar3[1] - *(float *)(in_ECX + 8);
    pfVar4 = (float *)(param_3 + (uint)*(ushort *)(param_2 + 2 + (iVar6 * 3 + 1) * 2) * 0xc);
    pfVar5 = (float *)(param_3 + (uint)*(ushort *)(param_2 + 2 + iVar6 * 6) * 0xc);
    fVar9 = pfVar3[2] - *(float *)(in_ECX + 0xc);
    fVar10 = fVar9 * *(float *)(in_ECX + 0x18) + fVar8 * *(float *)(in_ECX + 0x14) + fVar7 * *pfVar2
    ;
    fVar11 = *(float *)(in_ECX + 0x24) * fVar9 +
             *(float *)(in_ECX + 0x1c) * fVar7 + *(float *)(in_ECX + 0x20) * fVar8;
    fVar7 = fVar8 * *(float *)(in_ECX + 0x2c) + *(float *)(in_ECX + 0x28) * fVar7 +
            *(float *)(in_ECX + 0x30) * fVar9;
    local_ac = fVar10;
    if ((fVar12 <= fVar10) && (local_ac = fVar12, local_a0 < fVar10)) {
      local_a0 = fVar10;
    }
    local_a8 = fVar11;
    if ((fVar13 <= fVar11) && (local_a8 = fVar13, local_9c < fVar11)) {
      local_9c = fVar11;
    }
    local_a4 = fVar7;
    if ((fVar14 <= fVar7) && (local_a4 = fVar14, local_98 < fVar7)) {
      local_98 = fVar7;
    }
    fVar12 = *pfVar5 - *pfVar1;
    fVar13 = pfVar5[1] - *(float *)(in_ECX + 8);
    fVar14 = pfVar5[2] - *(float *)(in_ECX + 0xc);
    fVar7 = fVar14 * *(float *)(in_ECX + 0x18) +
            fVar13 * *(float *)(in_ECX + 0x14) + fVar12 * *pfVar2;
    fVar8 = *(float *)(in_ECX + 0x24) * fVar14 +
            *(float *)(in_ECX + 0x1c) * fVar12 + *(float *)(in_ECX + 0x20) * fVar13;
    fVar12 = fVar13 * *(float *)(in_ECX + 0x2c) + *(float *)(in_ECX + 0x28) * fVar12 +
             *(float *)(in_ECX + 0x30) * fVar14;
    fVar13 = fVar7;
    if ((local_ac <= fVar7) && (fVar13 = local_ac, local_a0 < fVar7)) {
      local_a0 = fVar7;
    }
    local_ac = fVar13;
    fVar13 = fVar8;
    if ((local_a8 <= fVar8) && (fVar13 = local_a8, local_9c < fVar8)) {
      local_9c = fVar8;
    }
    local_a8 = fVar13;
    fVar13 = fVar12;
    if ((local_a4 <= fVar12) && (fVar13 = local_a4, local_98 < fVar12)) {
      local_98 = fVar12;
    }
    local_a4 = fVar13;
    fVar12 = *pfVar4 - *pfVar1;
    fVar13 = pfVar4[1] - *(float *)(in_ECX + 8);
    fVar14 = pfVar4[2] - *(float *)(in_ECX + 0xc);
    fVar7 = fVar14 * *(float *)(in_ECX + 0x18) +
            fVar13 * *(float *)(in_ECX + 0x14) + fVar12 * *pfVar2;
    fVar8 = *(float *)(in_ECX + 0x24) * fVar14 +
            *(float *)(in_ECX + 0x1c) * fVar12 + *(float *)(in_ECX + 0x20) * fVar13;
    fVar12 = fVar13 * *(float *)(in_ECX + 0x2c) + *(float *)(in_ECX + 0x28) * fVar12 +
             *(float *)(in_ECX + 0x30) * fVar14;
    fVar13 = fVar7;
    if ((local_ac <= fVar7) && (fVar13 = local_ac, local_a0 < fVar7)) {
      local_a0 = fVar7;
    }
    local_ac = fVar13;
    fVar13 = fVar8;
    if ((local_a8 <= fVar8) && (fVar13 = local_a8, local_9c < fVar8)) {
      local_9c = fVar8;
    }
    local_a8 = fVar13;
    fVar13 = fVar12;
    if ((local_a4 <= fVar12) && (fVar13 = local_a4, local_98 < fVar12)) {
      local_98 = fVar12;
    }
    local_a4 = fVar13;
    uVar15 = uVar15 + 1;
    fVar12 = local_ac;
    fVar13 = local_a8;
    fVar14 = local_a4;
    param_6 = uVar15;
  }
  *(float *)(in_ECX + 0x34) = (local_a0 - fVar12) * 0.5;
  *(float *)(in_ECX + 0x38) = (local_9c - fVar13) * 0.5;
  *(float *)(in_ECX + 0x3c) = (local_98 - fVar14) * 0.5;
  fVar12 = (local_a0 + fVar12) * 0.5;
  fVar13 = (local_9c + fVar13) * 0.5;
  fVar14 = (local_98 + fVar14) * 0.5;
  *pfVar1 = fVar12 * *pfVar2 + fVar13 * *(float *)(in_ECX + 0x1c) +
            fVar14 * *(float *)(in_ECX + 0x28) + *pfVar1;
  *(float *)(in_ECX + 8) =
       *(float *)(in_ECX + 0x14) * fVar12 + *(float *)(in_ECX + 0x20) * fVar13 +
       *(float *)(in_ECX + 0x2c) * fVar14 + *(float *)(in_ECX + 8);
  *(float *)(in_ECX + 0xc) =
       *(float *)(in_ECX + 0xc) +
       fVar12 * *(float *)(in_ECX + 0x18) + fVar13 * *(float *)(in_ECX + 0x24) +
       fVar14 * *(float *)(in_ECX + 0x30);
  FUN_00718a50();
  FUN_0097aec0(local_34);
  *(undefined4 *)(in_ECX + 0x7c) = param_1;
  return;
}



undefined4 FUN_0097a470(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  if ((*param_1 != 0) &&
     (((iVar2 = *(int *)(*param_1 + 0xa8), iVar2 != 0 ||
       (iVar2 = *(int *)(param_1[2] + 0xa8), iVar2 != 0)) &&
      (*(code **)(iVar2 + 0x38) != (code *)0x0)))) {
    iVar5 = (**(code **)(iVar2 + 0x38))(param_1);
  }
  iVar2 = param_1[1];
  if (((iVar2 != 0) &&
      ((iVar3 = *(int *)(iVar2 + 0xa8), iVar3 != 0 ||
       (iVar3 = *(int *)(param_1[3] + 0xa8), iVar3 != 0)))) &&
     (pcVar1 = *(code **)(iVar3 + 0x38), pcVar1 != (code *)0x0)) {
    iVar4 = *param_1;
    iVar3 = param_1[10];
    *param_1 = iVar2;
    iVar2 = param_1[9];
    param_1[1] = iVar4;
    iVar4 = param_1[8];
    param_1[8] = param_1[0xb];
    param_1[9] = param_1[0xc];
    param_1[0xb] = iVar4;
    param_1[0xc] = iVar2;
    param_1[10] = param_1[0xd];
    param_1[0xd] = iVar3;
    iVar4 = (*pcVar1)(param_1);
  }
  if (iVar5 == 0) {
    if (iVar4 == 0) {
      return 0;
    }
  }
  else if (iVar5 == 2) {
    return 2;
  }
  if (iVar4 == 2) {
    return 2;
  }
  return 1;
}



undefined4
FUN_0097a530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 local_4;
  
  local_40 = param_2;
  local_34 = param_5;
  iVar2 = *(int *)(in_ECX + 0x7c);
  local_8 = 0;
  local_4 = 0;
  local_3c = param_3;
  local_38 = param_4;
  iVar1 = *(int *)(param_1 + 0x7c);
  if ((((DAT_00b3f9a8 == *(float *)(iVar2 + 0x10)) && (DAT_00b3f9ac == *(float *)(iVar2 + 0x14))) &&
      (DAT_00b3f9b0 == *(float *)(iVar2 + 0x18))) &&
     (((*(float *)(iVar1 + 0x10) == DAT_00b3f9a8 && (*(float *)(iVar1 + 0x14) == DAT_00b3f9ac)) &&
      (*(float *)(iVar1 + 0x18) == DAT_00b3f9b0)))) {
    local_30 = 0;
    local_2c = (*(float *)(param_1 + 0x40) + *(float *)(in_ECX + 0x40)) * 0.5;
    local_28 = (*(float *)(param_1 + 0x44) + *(float *)(in_ECX + 0x44)) * 0.5;
    local_24 = (*(float *)(param_1 + 0x48) + *(float *)(in_ECX + 0x48)) * 0.5;
  }
  else {
    iVar2 = FUN_0097cbe0(param_1 + 4,&local_30,&local_2c);
    if (iVar2 == 0) {
      return 0;
    }
  }
  *param_6 = 1;
  FUN_00980240(&local_2c,local_20);
  FUN_00980240(&local_2c,local_14);
  uVar3 = FUN_0097a470(&local_40);
  return uVar3;
}



void FUN_0097a9d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8,int param_9,
                 int param_10,int param_11)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar2 = param_9;
  iVar6 = param_8;
  iVar3 = param_7;
  FUN_00979ef0(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9);
  iVar7 = param_10;
  puVar8 = in_ECX;
  if (param_11 <= iVar6 - iVar3) {
    do {
      iVar6 = iVar2;
      FUN_009797b0(param_6,iVar3,param_8,iVar6,&param_9,&param_7,iVar7);
      if (iVar3 < param_9) {
        puVar1 = (undefined4 *)FUN_00401f00(0x8c);
        puVar5 = (undefined4 *)0x0;
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = &PTR_FUN_00aa3dfc;
          puVar1[0x1f] = 0;
          puVar1[0x20] = 0;
          puVar1[0x21] = 0;
          puVar1[0x22] = 0;
          puVar5 = puVar1;
        }
        puVar8[0x20] = puVar5;
        FUN_0097a9d0(param_1,param_2,param_3,param_4,param_5,param_6,iVar3,param_9,iVar7,iVar6,
                     param_11);
      }
      else if (iVar3 == param_9) {
        iVar2 = FUN_00401f00(0x98);
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_00977530(param_1,param_2,param_3,param_4,*(undefined2 *)(iVar7 + iVar3 * 4));
        }
        puVar8[0x20] = uVar4;
      }
      iVar3 = param_7;
      if (param_8 <= param_7) {
        if (param_7 == param_8) {
          iVar3 = FUN_00401f00(0x98);
          if (iVar3 != 0) {
            uVar4 = FUN_00977530(param_1,param_2,param_3,param_4,
                                 *(undefined2 *)(iVar7 + param_8 * 4));
            puVar8[0x21] = uVar4;
            return;
          }
          puVar8[0x21] = 0;
        }
        return;
      }
      in_ECX = (undefined4 *)FUN_00401f00(0x8c);
      if (in_ECX == (undefined4 *)0x0) {
        in_ECX = (undefined4 *)0x0;
      }
      else {
        *in_ECX = &PTR_FUN_00aa3dfc;
        in_ECX[0x1f] = 0;
        in_ECX[0x20] = 0;
        in_ECX[0x21] = 0;
        in_ECX[0x22] = 0;
      }
      puVar8[0x21] = in_ECX;
      FUN_00979ef0(param_1,param_2,param_3,param_5,param_6,iVar3,param_8,iVar7);
      iVar2 = iVar7;
      iVar7 = iVar6;
      puVar8 = in_ECX;
    } while (param_11 <= param_8 - param_7);
  }
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  return;
}



undefined4 *
FUN_0097abe0(undefined4 param_1,ushort param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *in_ECX;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  float10 fVar18;
  float *local_64;
  uint local_60;
  
  uVar16 = (uint)param_2;
  *in_ECX = &PTR_FUN_00aa3dfc;
  in_ECX[0x1f] = 0;
  pfVar10 = (float *)FUN_00401f00(uVar16 * 4);
  pfVar11 = (float *)FUN_00401f00(uVar16 * 0xc);
  uVar15 = 0;
  bVar17 = param_2 != 0;
  _param_2 = pfVar10;
  local_64 = pfVar11;
  local_60 = uVar16;
  if (bVar17) {
    do {
      pfVar1 = (float *)(param_4 + (uint)*(ushort *)(param_3 + (uVar15 & 0xffff) * 2) * 0xc);
      pfVar2 = (float *)(param_4 + (uint)*(ushort *)(param_3 + (uVar15 + 1 & 0xffff) * 2) * 0xc);
      pfVar3 = (float *)(param_4 + (uint)*(ushort *)(param_3 + (uVar15 + 2 & 0xffff) * 2) * 0xc);
      uVar15 = uVar15 + 3;
      fVar18 = (float10)FUN_00982c30();
      *_param_2 = (float)fVar18 * 0.5;
      local_60 = local_60 - 1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar2[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar2[2];
      fVar8 = pfVar3[1];
      fVar9 = pfVar3[2];
      *local_64 = (*pfVar3 + *pfVar1 + *pfVar2) * 0.33333334;
      local_64[1] = (fVar8 + fVar4 + fVar5) * 0.33333334;
      local_64[2] = (fVar9 + fVar6 + fVar7) * 0.33333334;
      _param_2 = _param_2 + 1;
      local_64 = local_64 + 3;
    } while (local_60 != 0);
  }
  iVar12 = FUN_00401f00(uVar16 * 4);
  iVar13 = 0;
  if (uVar16 != 0) {
    do {
      *(int *)(iVar12 + iVar13 * 4) = iVar13;
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)uVar16);
  }
  uVar14 = FUN_00401f00(uVar16 * 4);
  FUN_0097a9d0(param_1,param_3,param_4,param_5,pfVar10,pfVar11,0,uVar16 - 1,iVar12,uVar14,param_6);
  FUN_00401f20(uVar14);
  FUN_00401f20(iVar12);
  FUN_00401f20(pfVar11);
  FUN_00401f20(pfVar10);
  in_ECX[0x22] = 0;
  return in_ECX;
}



void FUN_0097aec0(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = (float *)FUN_007101f0(&local_c,in_ECX);
  fVar1 = *(float *)(param_1 + 0x30);
  fVar2 = pfVar3[2];
  local_c = *(float *)(param_1 + 0x24) + fVar1 * *pfVar3;
  local_8 = *(float *)(param_1 + 0x28) + pfVar3[1] * fVar1;
  local_4 = *(float *)(param_1 + 0x2c);
  *(float *)(in_ECX + 0x3c) = local_c;
  local_4 = local_4 + fVar1 * fVar2;
  *(float *)(in_ECX + 0x40) = local_8;
  *(float *)(in_ECX + 0x44) = local_4;
  puVar4 = (undefined4 *)FUN_007101f0(&local_c,in_ECX + 0xc);
  *(undefined4 *)(in_ECX + 0x48) = *puVar4;
  *(undefined4 *)(in_ECX + 0x4c) = puVar4[1];
  *(undefined4 *)(in_ECX + 0x50) = puVar4[2];
  puVar4 = (undefined4 *)FUN_007101f0(&local_c,in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x54) = *puVar4;
  *(undefined4 *)(in_ECX + 0x58) = puVar4[1];
  *(undefined4 *)(in_ECX + 0x5c) = puVar4[2];
  puVar4 = (undefined4 *)FUN_007101f0(&local_c,in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x60) = *puVar4;
  *(undefined4 *)(in_ECX + 100) = puVar4[1];
  *(undefined4 *)(in_ECX + 0x68) = puVar4[2];
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x30) * *(float *)(param_1 + 0x30);
  *(float *)(in_ECX + 0x70) = *(float *)(in_ECX + 0x34) * *(float *)(param_1 + 0x30);
  *(float *)(in_ECX + 0x74) = *(float *)(in_ECX + 0x38) * *(float *)(param_1 + 0x30);
  return;
}



undefined4 FUN_0097afc0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int in_ECX;
  float10 fVar12;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar7 = *(int *)(param_1 + 0x78);
  local_30 = *(float *)(param_1 + 0x3c) - *(float *)(in_ECX + 0x3c);
  iVar8 = *(int *)(in_ECX + 0x78);
  pfVar1 = (float *)(in_ECX + 0x48);
  pfVar2 = (float *)(param_1 + 0x60);
  local_2c = *(float *)(param_1 + 0x40) - *(float *)(in_ECX + 0x40);
  local_28 = *(float *)(param_1 + 0x44) - *(float *)(in_ECX + 0x44);
  local_3c = *(float *)(iVar7 + 0x10) - *(float *)(iVar8 + 0x10);
  local_38 = *(float *)(iVar7 + 0x14) - *(float *)(iVar8 + 0x14);
  local_34 = *(float *)(iVar7 + 0x18) - *(float *)(iVar8 + 0x18);
  fVar6 = *(float *)(iVar8 + 4);
  pfVar3 = (float *)(param_1 + 0x54);
  local_24 = *(float *)(param_1 + 0x50) * *(float *)(in_ECX + 0x50) +
             *(float *)(param_1 + 0x48) * *pfVar1 +
             *(float *)(param_1 + 0x4c) * *(float *)(in_ECX + 0x4c);
  local_20 = *(float *)(param_1 + 0x5c) * *(float *)(in_ECX + 0x50) +
             *pfVar3 * *pfVar1 + *(float *)(param_1 + 0x58) * *(float *)(in_ECX + 0x4c);
  local_1c = *(float *)(param_1 + 0x68) * *(float *)(in_ECX + 0x50) +
             *pfVar2 * *pfVar1 + *(float *)(param_1 + 100) * *(float *)(in_ECX + 0x4c);
  local_54 = local_2c * *(float *)(in_ECX + 0x4c) + local_30 * *pfVar1 +
             local_28 * *(float *)(in_ECX + 0x50);
  local_48 = (*(float *)(in_ECX + 0x50) * local_34 +
             local_38 * *(float *)(in_ECX + 0x4c) + local_3c * *pfVar1) * fVar6 + local_54;
  fVar9 = ABS(*(float *)(param_1 + 0x6c) * local_24) + ABS(*(float *)(param_1 + 0x70) * local_20) +
          ABS(local_1c * *(float *)(param_1 + 0x74)) + ABS(*(float *)(in_ECX + 0x6c));
  if ((fVar9 < local_54) && (fVar9 < local_48)) {
    return 0;
  }
  if ((local_54 < -fVar9) && (local_48 < -fVar9)) {
    return 0;
  }
  pfVar4 = (float *)(in_ECX + 0x54);
  local_18 = *(float *)(in_ECX + 0x5c) * *(float *)(param_1 + 0x50) +
             *(float *)(param_1 + 0x48) * *pfVar4 +
             *(float *)(in_ECX + 0x58) * *(float *)(param_1 + 0x4c);
  local_14 = *(float *)(param_1 + 0x5c) * *(float *)(in_ECX + 0x5c) +
             *pfVar3 * *pfVar4 + *(float *)(param_1 + 0x58) * *(float *)(in_ECX + 0x58);
  local_10 = *(float *)(param_1 + 0x68) * *(float *)(in_ECX + 0x5c) +
             *pfVar2 * *pfVar4 + *(float *)(param_1 + 100) * *(float *)(in_ECX + 0x58);
  local_50 = *(float *)(in_ECX + 0x5c) * local_28 +
             *pfVar4 * local_30 + *(float *)(in_ECX + 0x58) * local_2c;
  local_44 = (*(float *)(in_ECX + 0x5c) * local_34 +
             local_3c * *pfVar4 + *(float *)(in_ECX + 0x58) * local_38) * fVar6 + local_50;
  fVar9 = ABS(*(float *)(param_1 + 0x6c) * local_18) + ABS(*(float *)(param_1 + 0x70) * local_14) +
          ABS(local_10 * *(float *)(param_1 + 0x74)) + ABS(*(float *)(in_ECX + 0x70));
  if ((fVar9 < local_50) && (fVar9 < local_44)) {
    return 0;
  }
  if ((local_50 < -fVar9) && (local_44 < -fVar9)) {
    return 0;
  }
  pfVar5 = (float *)(in_ECX + 0x60);
  local_c = *(float *)(in_ECX + 0x68) * *(float *)(param_1 + 0x50) +
            *pfVar5 * *(float *)(param_1 + 0x48) +
            *(float *)(in_ECX + 100) * *(float *)(param_1 + 0x4c);
  local_8 = *(float *)(param_1 + 0x5c) * *(float *)(in_ECX + 0x68) +
            *pfVar3 * *pfVar5 + *(float *)(param_1 + 0x58) * *(float *)(in_ECX + 100);
  local_4 = *(float *)(param_1 + 0x68) * *(float *)(in_ECX + 0x68) +
            *pfVar2 * *pfVar5 + *(float *)(param_1 + 100) * *(float *)(in_ECX + 100);
  local_4c = *(float *)(in_ECX + 0x68) * local_28 +
             *pfVar5 * local_30 + *(float *)(in_ECX + 100) * local_2c;
  local_40 = (*(float *)(in_ECX + 0x68) * local_34 +
             *pfVar5 * local_3c + *(float *)(in_ECX + 100) * local_38) * fVar6 + local_4c;
  fVar9 = ABS(*(float *)(param_1 + 0x6c) * local_c) + ABS(*(float *)(param_1 + 0x70) * local_8) +
          ABS(local_4 * *(float *)(param_1 + 0x74)) + ABS(*(float *)(in_ECX + 0x74));
  if ((fVar9 < local_4c) && (fVar9 < local_40)) {
    return 0;
  }
  if ((local_4c < -fVar9) && (local_40 < -fVar9)) {
    return 0;
  }
  fVar10 = ABS(*(float *)(in_ECX + 0x6c) * local_24) + ABS(*(float *)(in_ECX + 0x70) * local_18) +
           ABS(*(float *)(in_ECX + 0x74) * local_c) + ABS(*(float *)(param_1 + 0x6c));
  fVar9 = *(float *)(param_1 + 0x50) * local_28 +
          *(float *)(param_1 + 0x48) * local_30 + local_2c * *(float *)(param_1 + 0x4c);
  fVar11 = fVar9 + (*(float *)(param_1 + 0x50) * local_34 +
                   *(float *)(param_1 + 0x48) * local_3c + local_38 * *(float *)(param_1 + 0x4c)) *
                   fVar6;
  if ((fVar10 < fVar9) && (fVar10 < fVar11)) {
    return 0;
  }
  if ((fVar9 < -fVar10) && (fVar11 < -fVar10)) {
    return 0;
  }
  fVar10 = ABS(*(float *)(in_ECX + 0x6c) * local_20) + ABS(*(float *)(in_ECX + 0x70) * local_14) +
           ABS(*(float *)(in_ECX + 0x74) * local_8) + ABS(*(float *)(param_1 + 0x70));
  fVar9 = *(float *)(param_1 + 0x5c) * local_28 +
          local_30 * *pfVar3 + *(float *)(param_1 + 0x58) * local_2c;
  fVar11 = fVar9 + (*(float *)(param_1 + 0x5c) * local_34 +
                   local_3c * *pfVar3 + *(float *)(param_1 + 0x58) * local_38) * fVar6;
  if ((fVar10 < fVar9) && (fVar10 < fVar11)) {
    return 0;
  }
  if ((fVar9 < -fVar10) && (fVar11 < -fVar10)) {
    return 0;
  }
  fVar10 = ABS(*(float *)(in_ECX + 0x6c) * local_1c) + ABS(*(float *)(in_ECX + 0x70) * local_10) +
           ABS(*(float *)(in_ECX + 0x74) * local_4) + ABS(*(float *)(param_1 + 0x74));
  fVar9 = *(float *)(param_1 + 100) * local_2c + *pfVar2 * local_30 +
          *(float *)(param_1 + 0x68) * local_28;
  fVar6 = fVar9 + (*(float *)(param_1 + 0x68) * local_34 +
                  local_38 * *(float *)(param_1 + 100) + *pfVar2 * local_3c) * fVar6;
  if ((fVar10 < fVar9) && (fVar10 < fVar6)) {
    return 0;
  }
  if ((fVar9 < -fVar10) && (fVar6 < -fVar10)) {
    return 0;
  }
  fVar6 = ABS(local_18 * *(float *)(in_ECX + 0x74)) + ABS(local_c * *(float *)(in_ECX + 0x70)) +
          ABS(local_1c * *(float *)(param_1 + 0x70)) + ABS(local_20 * *(float *)(param_1 + 0x74));
  fVar9 = local_4c * local_18 - local_c * local_50;
  if (fVar9 <= fVar6) {
    if ((fVar9 < -fVar6) && (local_40 * local_18 - local_44 * local_c < -fVar6)) {
      return 0;
    }
  }
  else if (fVar6 < local_40 * local_18 - local_44 * local_c) {
    return 0;
  }
  fVar9 = ABS(local_14 * *(float *)(in_ECX + 0x74)) + ABS(local_8 * *(float *)(in_ECX + 0x70)) +
          ABS(local_24 * *(float *)(param_1 + 0x74)) + ABS(*(float *)(param_1 + 0x6c) * local_1c);
  fVar6 = local_4c * local_14 - local_8 * local_50;
  if (fVar6 <= fVar9) {
    if ((fVar6 < -fVar9) && (local_40 * local_14 - local_44 * local_8 < -fVar9)) {
      return 0;
    }
  }
  else if (fVar9 < local_40 * local_14 - local_44 * local_8) {
    return 0;
  }
  fVar9 = ABS(local_10 * *(float *)(in_ECX + 0x74)) + ABS(local_4 * *(float *)(in_ECX + 0x70)) +
          ABS(*(float *)(param_1 + 0x6c) * local_20) + ABS(*(float *)(param_1 + 0x70) * local_24);
  fVar6 = local_4c * local_10 - local_4 * local_50;
  if (fVar6 <= fVar9) {
    if ((fVar6 < -fVar9) && (local_40 * local_10 - local_4 * local_44 < -fVar9)) {
      return 0;
    }
  }
  else if (fVar9 < local_40 * local_10 - local_4 * local_44) {
    return 0;
  }
  fVar9 = ABS(*(float *)(in_ECX + 0x6c) * local_c) + ABS(*(float *)(in_ECX + 0x74) * local_24) +
          ABS(*(float *)(param_1 + 0x70) * local_10) + ABS(local_14 * *(float *)(param_1 + 0x74));
  fVar6 = local_c * local_54 - local_4c * local_24;
  if (fVar6 <= fVar9) {
    if ((fVar6 < -fVar9) && (local_48 * local_c - local_40 * local_24 < -fVar9)) {
      return 0;
    }
  }
  else if (fVar9 < local_48 * local_c - local_40 * local_24) {
    return 0;
  }
  fVar9 = ABS(*(float *)(param_1 + 0x6c) * local_10) + ABS(local_18 * *(float *)(param_1 + 0x74)) +
          ABS(*(float *)(in_ECX + 0x6c) * local_8) + ABS(*(float *)(in_ECX + 0x74) * local_20);
  fVar6 = local_8 * local_54 - local_4c * local_20;
  if (fVar6 <= fVar9) {
    if ((fVar6 < -fVar9) && (local_48 * local_8 - local_40 * local_20 < -fVar9)) {
      return 0;
    }
  }
  else if (fVar9 < local_48 * local_8 - local_40 * local_20) {
    return 0;
  }
  fVar9 = ABS(*(float *)(param_1 + 0x6c) * local_14) + ABS(*(float *)(param_1 + 0x70) * local_18) +
          ABS(*(float *)(in_ECX + 0x6c) * local_4) + ABS(*(float *)(in_ECX + 0x74) * local_1c);
  fVar6 = local_4 * local_54 - local_1c * local_4c;
  if (fVar6 <= fVar9) {
    if ((fVar6 < -fVar9) && (local_4 * local_48 - local_40 * local_1c < -fVar9)) {
      return 0;
    }
  }
  else if (fVar9 < local_4 * local_48 - local_40 * local_1c) {
    return 0;
  }
  fVar9 = ABS(local_18 * *(float *)(in_ECX + 0x6c)) + ABS(*(float *)(in_ECX + 0x70) * local_24) +
          ABS(*(float *)(param_1 + 0x70) * local_4) + ABS(local_8 * *(float *)(param_1 + 0x74));
  fVar6 = local_50 * local_24 - local_18 * local_54;
  if (fVar6 <= fVar9) {
    if ((fVar6 < -fVar9) && (local_44 * local_24 - local_48 * local_18 < -fVar9)) {
      return 0;
    }
  }
  else if (fVar9 < local_44 * local_24 - local_48 * local_18) {
    return 0;
  }
  fVar9 = ABS(local_20 * *(float *)(in_ECX + 0x70)) + ABS(local_14 * *(float *)(in_ECX + 0x6c)) +
          ABS(*(float *)(param_1 + 0x6c) * local_4) + ABS(local_c * *(float *)(param_1 + 0x74));
  fVar6 = local_50 * local_20 - local_14 * local_54;
  if (fVar6 <= fVar9) {
    if ((fVar6 < -fVar9) && (local_44 * local_20 - local_48 * local_14 < -fVar9)) {
      return 0;
    }
  }
  else if (fVar9 < local_44 * local_20 - local_48 * local_14) {
    return 0;
  }
  fVar9 = ABS(local_1c * *(float *)(in_ECX + 0x70)) + ABS(local_10 * *(float *)(in_ECX + 0x6c)) +
          ABS(*(float *)(param_1 + 0x6c) * local_8) + ABS(*(float *)(param_1 + 0x70) * local_c);
  fVar6 = local_50 * local_1c - local_10 * local_54;
  if (fVar6 <= fVar9) {
    if ((fVar6 < -fVar9) && (local_44 * local_1c - local_10 * local_48 < -fVar9)) {
      return 0;
    }
  }
  else if (fVar9 < local_44 * local_1c - local_10 * local_48) {
    return 0;
  }
  FUN_00498fe0(&local_54,&local_30);
  fVar12 = (float10)FUN_0047d9e0(pfVar4);
  local_44 = (float)fVar12;
  fVar12 = (float10)FUN_0047d9e0(pfVar5);
  local_40 = (float)fVar12;
  fVar6 = ABS(local_40);
  fVar9 = ABS(local_44);
  fVar12 = (float10)FUN_0047d9e0(&local_54);
  if ((float)ABS(fVar12) <=
      ABS(local_10 * local_40 - local_4 * local_44) * *(float *)(param_1 + 0x74) +
      ABS(local_40 * local_18 - local_44 * local_c) * *(float *)(param_1 + 0x6c) +
      ABS(local_40 * local_14 - local_44 * local_8) * *(float *)(param_1 + 0x70) +
      *(float *)(in_ECX + 0x74) * fVar9 + fVar6 * *(float *)(in_ECX + 0x70)) {
    fVar12 = (float10)FUN_0047d9e0(pfVar1);
    local_48 = (float)fVar12;
    fVar10 = ABS(local_48);
    fVar12 = (float10)FUN_0047d9e0(&local_54);
    if (((float)ABS(fVar12) <=
         ABS(local_4 * local_48 - local_1c * local_40) * *(float *)(param_1 + 0x74) +
         ABS(local_48 * local_c - local_40 * local_24) * *(float *)(param_1 + 0x6c) +
         ABS(local_48 * local_8 - local_40 * local_20) * *(float *)(param_1 + 0x70) +
         fVar10 * *(float *)(in_ECX + 0x74) + *(float *)(in_ECX + 0x6c) * fVar6) &&
       (fVar12 = (float10)FUN_0047d9e0(&local_54),
       (float)ABS(fVar12) <=
       ABS(local_1c * local_44 - local_10 * local_48) * *(float *)(param_1 + 0x74) +
       ABS(local_44 * local_24 - local_48 * local_18) * *(float *)(param_1 + 0x6c) +
       ABS(local_44 * local_20 - local_48 * local_14) * *(float *)(param_1 + 0x70) +
       fVar10 * *(float *)(in_ECX + 0x70) + *(float *)(in_ECX + 0x6c) * fVar9)) {
      fVar12 = (float10)FUN_0047d9e0(pfVar3);
      local_44 = (float)fVar12;
      fVar12 = (float10)FUN_0047d9e0(pfVar2);
      local_40 = (float)fVar12;
      fVar6 = ABS(local_40);
      fVar9 = ABS(local_44);
      fVar12 = (float10)FUN_0047d9e0(&local_54);
      if ((float)ABS(fVar12) <=
          ABS(local_8 * local_40 - local_4 * local_44) * *(float *)(in_ECX + 0x74) +
          ABS(local_40 * local_14 - local_44 * local_10) * *(float *)(in_ECX + 0x70) +
          ABS(local_40 * local_20 - local_44 * local_1c) * *(float *)(in_ECX + 0x6c) +
          fVar6 * *(float *)(param_1 + 0x70) + fVar9 * *(float *)(param_1 + 0x74)) {
        fVar12 = (float10)FUN_0047d9e0(param_1 + 0x48);
        local_48 = (float)fVar12;
        fVar10 = ABS(local_48);
        fVar12 = (float10)FUN_0047d9e0(&local_54);
        if (((float)ABS(fVar12) <=
             ABS(local_4 * local_48 - local_c * local_40) * *(float *)(in_ECX + 0x74) +
             ABS(local_48 * local_10 - local_40 * local_18) * *(float *)(in_ECX + 0x70) +
             ABS(local_48 * local_1c - local_40 * local_24) * *(float *)(in_ECX + 0x6c) +
             *(float *)(param_1 + 0x6c) * fVar6 + fVar10 * *(float *)(param_1 + 0x74)) &&
           (fVar12 = (float10)FUN_0047d9e0(&local_54),
           (float)ABS(fVar12) <=
           ABS(local_c * local_44 - local_8 * local_48) * *(float *)(in_ECX + 0x74) +
           ABS(local_44 * local_18 - local_48 * local_14) * *(float *)(in_ECX + 0x70) +
           ABS(local_44 * local_24 - local_48 * local_20) * *(float *)(in_ECX + 0x6c) +
           *(float *)(param_1 + 0x6c) * fVar9 + fVar10 * *(float *)(param_1 + 0x70))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0097cbe0(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 *puVar22;
  float *pfVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int in_ECX;
  int iVar28;
  float *pfVar29;
  int iVar30;
  float10 fVar31;
  double *pdVar32;
  double *pdVar33;
  double *pdVar34;
  double *pdVar35;
  float local_4f8;
  int local_4f4;
  undefined8 local_4f0;
  float local_4e8;
  int local_4dc;
  float local_4d8;
  undefined4 uStack_4d4;
  undefined8 local_4c8;
  float local_4c0;
  float *local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  undefined8 local_4a8;
  float local_4a0;
  int local_494;
  double local_490;
  float local_488 [3];
  float *local_47c [5];
  float local_468;
  float local_464;
  float local_460;
  float local_45c;
  float local_458;
  float *local_454;
  double local_450 [2];
  double local_440 [2];
  double local_430 [2];
  double local_420 [2];
  float local_40c;
  float local_408;
  float local_404;
  double local_400 [2];
  double local_3f0 [2];
  double local_3e0 [2];
  double local_3d0 [2];
  double local_3c0 [2];
  double local_3b0 [2];
  double local_3a0 [2];
  double local_390 [2];
  double local_380 [2];
  double local_370 [2];
  double local_360 [2];
  double local_350 [2];
  double local_340 [2];
  double local_330 [2];
  double local_320 [2];
  double local_310 [2];
  undefined1 local_2fc [12];
  double local_2f0;
  undefined1 local_2e4 [12];
  undefined1 local_2d8 [12];
  double local_2cc;
  undefined1 local_2c0 [12];
  undefined1 local_2b4 [12];
  undefined1 local_2a8 [12];
  double local_29c;
  undefined1 local_290 [12];
  undefined1 local_284 [12];
  undefined1 local_278 [12];
  double local_26c;
  double local_260;
  undefined1 local_254 [12];
  undefined1 local_248 [12];
  double local_23c;
  undefined1 local_230 [12];
  undefined1 local_224 [12];
  undefined1 local_218 [12];
  double local_20c;
  undefined1 local_200 [12];
  undefined1 local_1f4 [12];
  undefined1 local_1e8 [12];
  double local_1dc;
  undefined1 local_1d0 [12];
  undefined1 local_1c4 [12];
  undefined1 local_1b8 [12];
  double local_1ac;
  undefined1 local_1a0 [12];
  undefined1 local_194 [12];
  undefined1 local_188 [12];
  double local_17c;
  double local_170;
  undefined1 local_164 [12];
  double local_158;
  double local_14c;
  double local_140;
  undefined1 local_134 [12];
  double local_128;
  double local_11c;
  double local_110;
  undefined1 local_104 [12];
  double local_f8;
  double local_ec;
  double local_e0;
  undefined1 local_d4 [12];
  double local_c8;
  double local_bc;
  double local_b0;
  undefined1 local_a4 [12];
  double local_98;
  double local_8c;
  double local_80;
  undefined1 local_74 [12];
  double local_68;
  double local_5c;
  double local_50;
  undefined1 local_44 [12];
  double local_38;
  double local_2c;
  double local_20;
  undefined1 local_14 [16];
  
  fVar15 = *(float *)(param_1 + 0x3c) - *(float *)(in_ECX + 0x3c);
  pfVar23 = (float *)(in_ECX + 0x48);
  local_494 = in_ECX + 0x3c;
  fVar16 = *(float *)(param_1 + 0x40) - *(float *)(in_ECX + 0x40);
  local_454 = (float *)(param_1 + 0x48);
  pfVar29 = (float *)(param_1 + 0x54);
  iVar30 = 0;
  iVar13 = *(int *)(param_1 + 0x78);
  fVar17 = *(float *)(param_1 + 0x44) - *(float *)(in_ECX + 0x44);
  iVar14 = *(int *)(in_ECX + 0x78);
  local_450[0] = (double)CONCAT44(local_450[0]._4_4_,(float *)(iVar13 + 0x10));
  local_40c = *(float *)(iVar13 + 0x10) - *(float *)(iVar14 + 0x10);
  local_408 = *(float *)(iVar13 + 0x14) - *(float *)(iVar14 + 0x14);
  iVar28 = 0;
  local_404 = *(float *)(iVar13 + 0x18) - *(float *)(iVar14 + 0x18);
  local_4f4 = 0;
  fVar1 = *(float *)(iVar14 + 4);
  local_4f8 = 0.0;
  fVar2 = *(float *)(param_1 + 0x4c);
  fVar3 = *(float *)(in_ECX + 0x4c);
  fVar4 = *(float *)(param_1 + 0x48);
  fVar5 = *pfVar23;
  fVar6 = *(float *)(param_1 + 0x50);
  fVar7 = *(float *)(in_ECX + 0x50);
  local_47c[0] = (float *)(param_1 + 0x60);
  local_47c[1] = (float *)(fVar5 * fVar4 + fVar3 * fVar2 + fVar7 * fVar6);
  local_47c[2] = (float *)(*(float *)(param_1 + 0x5c) * fVar7 +
                          *pfVar29 * fVar5 + *(float *)(param_1 + 0x58) * fVar3);
  local_47c[3] = (float *)(*(float *)(param_1 + 0x68) * fVar7 +
                          *local_47c[0] * fVar5 + *(float *)(param_1 + 100) * fVar3);
  local_350[0] = (double)fVar16;
  local_430[0] = (double)fVar15;
  local_420[0] = (double)fVar17;
  fVar19 = fVar17 * fVar7 + fVar16 * fVar3 + fVar15 * fVar5;
  local_4b4 = (local_40c * fVar5 + local_408 * fVar3 + local_404 * fVar7) * fVar1 + fVar19;
  fVar3 = *(float *)(param_1 + 0x70);
  dVar11 = (double)fVar3;
  local_3b0[0] = (double)(float)local_47c[2];
  fVar5 = *(float *)(param_1 + 0x6c);
  local_320[0] = (double)fVar5;
  local_3a0[0] = (double)(float)local_47c[1];
  fVar7 = *(float *)(param_1 + 0x74);
  local_330[0] = (double)fVar7;
  local_3c0[0] = (double)(float)local_47c[3];
  fVar8 = ABS(fVar5 * (float)local_47c[1]) + ABS((float)local_47c[2] * fVar3) +
          ABS((float)local_47c[3] * fVar7) + ABS(*(float *)(in_ECX + 0x6c));
  if (fVar19 <= fVar8) {
    fVar8 = -fVar8;
    if (fVar19 < fVar8) {
      if (local_4b4 < fVar8) {
        return 0;
      }
      fVar8 = ((fVar8 - fVar19) * fVar1) / (local_4b4 - fVar19);
      if (0.0 < fVar8) {
        iVar28 = -1;
        iVar30 = 1;
        local_4f4 = -1;
        local_4f8 = fVar8;
      }
    }
  }
  else {
    if (fVar8 < local_4b4) {
      return 0;
    }
    fVar8 = ((fVar8 - fVar19) * fVar1) / (local_4b4 - fVar19);
    if (0.0 < fVar8) {
      iVar30 = 1;
      iVar28 = 1;
      local_4f4 = 1;
      local_4f8 = fVar8;
    }
  }
  local_47c[4] = (float *)(*(float *)(in_ECX + 0x5c) * fVar6 +
                          *(float *)(in_ECX + 0x54) * fVar4 + *(float *)(in_ECX + 0x58) * fVar2);
  local_468 = *(float *)(param_1 + 0x5c) * *(float *)(in_ECX + 0x5c) +
              *pfVar29 * *(float *)(in_ECX + 0x54) +
              *(float *)(param_1 + 0x58) * *(float *)(in_ECX + 0x58);
  local_464 = *(float *)(param_1 + 0x68) * *(float *)(in_ECX + 0x5c) +
              *local_47c[0] * *(float *)(in_ECX + 0x54) +
              *(float *)(param_1 + 100) * *(float *)(in_ECX + 0x58);
  fVar21 = *(float *)(in_ECX + 0x5c) * fVar17 +
           *(float *)(in_ECX + 0x54) * fVar15 + *(float *)(in_ECX + 0x58) * fVar16;
  local_310[0] = (double)fVar21;
  local_4b0 = (*(float *)(in_ECX + 0x5c) * local_404 +
              *(float *)(in_ECX + 0x54) * local_40c + *(float *)(in_ECX + 0x58) * local_408) * fVar1
              + fVar21;
  local_440[0] = (double)local_468;
  local_3d0[0] = (double)(float)local_47c[4];
  local_340[0] = (double)local_464;
  fVar8 = ABS(local_468 * fVar3) + ABS((float)local_47c[4] * fVar5) + ABS(local_464 * fVar7) +
          ABS(*(float *)(in_ECX + 0x70));
  if (fVar19 <= fVar8) {
    fVar8 = -fVar8;
    if (fVar19 < fVar8) {
      if (local_4b4 < fVar8) {
        return 0;
      }
      fVar8 = ((fVar8 - fVar19) * fVar1) / (local_4b4 - fVar19);
      if (local_4f8 < fVar8) {
        iVar28 = -1;
        iVar30 = 2;
        local_4f4 = -1;
        local_4f8 = fVar8;
      }
    }
  }
  else {
    if (fVar8 < local_4b4) {
      return 0;
    }
    fVar8 = ((fVar8 - fVar19) * fVar1) / (local_4b4 - fVar19);
    if (local_4f8 < fVar8) {
      iVar28 = 1;
      iVar30 = 2;
      local_4f4 = 1;
      local_4f8 = fVar8;
    }
  }
  local_460 = *(float *)(in_ECX + 0x68) * fVar6 +
              *(float *)(in_ECX + 0x60) * fVar4 + *(float *)(in_ECX + 100) * fVar2;
  local_45c = *(float *)(param_1 + 0x5c) * *(float *)(in_ECX + 0x68) +
              *pfVar29 * *(float *)(in_ECX + 0x60) +
              *(float *)(param_1 + 0x58) * *(float *)(in_ECX + 100);
  local_458 = *(float *)(param_1 + 0x68) * *(float *)(in_ECX + 0x68) +
              *(float *)(in_ECX + 0x60) * *local_47c[0] +
              *(float *)(param_1 + 100) * *(float *)(in_ECX + 100);
  local_488[0] = *(float *)(in_ECX + 0x68) * fVar17 +
                 *(float *)(in_ECX + 0x60) * fVar15 + *(float *)(in_ECX + 100) * fVar16;
  local_380[0] = (double)local_488[0];
  local_4ac = (*(float *)(in_ECX + 0x68) * local_404 +
              *(float *)(in_ECX + 0x60) * local_40c + *(float *)(in_ECX + 100) * local_408) * fVar1
              + local_488[0];
  local_400[0] = (double)local_45c;
  local_3e0[0] = (double)local_460;
  local_370[0] = (double)local_458;
  fVar2 = ABS(local_45c * fVar3) + ABS(local_460 * fVar5) + ABS(local_458 * fVar7) +
          ABS(*(float *)(in_ECX + 0x74));
  if (fVar19 <= fVar2) {
    fVar2 = -fVar2;
    if (fVar19 < fVar2) {
      if (local_4b4 < fVar2) {
        return 0;
      }
      fVar2 = ((fVar2 - fVar19) * fVar1) / (local_4b4 - fVar19);
      if (local_4f8 < fVar2) {
        iVar28 = -1;
        iVar30 = 3;
        local_4f4 = -1;
        local_4f8 = fVar2;
      }
    }
  }
  else {
    if (fVar2 < local_4b4) {
      return 0;
    }
    fVar2 = ((fVar2 - fVar19) * fVar1) / (local_4b4 - fVar19);
    if (local_4f8 < fVar2) {
      iVar28 = 1;
      iVar30 = 3;
      local_4f4 = 1;
      local_4f8 = fVar2;
    }
  }
  fVar2 = *(float *)(in_ECX + 0x70);
  local_3f0[0] = (double)fVar2;
  fVar6 = *(float *)(in_ECX + 0x6c);
  local_390[0] = (double)fVar6;
  fVar8 = *(float *)(in_ECX + 0x74);
  fVar18 = ABS(local_460 * fVar8) +
           ABS(fVar2 * (float)local_47c[4]) + ABS(fVar6 * (float)local_47c[1]) +
           ABS(*(float *)(param_1 + 0x6c));
  fVar9 = *(float *)(param_1 + 0x4c);
  fVar10 = *(float *)(param_1 + 0x50);
  local_490 = (double)fVar10;
  fVar20 = fVar10 * fVar17 + fVar15 * fVar4 + fVar9 * fVar16;
  fVar4 = (fVar10 * local_404 + fVar9 * local_408 + local_40c * fVar4) * fVar1 + fVar20;
  uStack_4d4 = (undefined4)((ulonglong)(double)fVar9 >> 0x20);
  if (fVar20 <= fVar18) {
    fVar18 = -fVar18;
    if (fVar20 < fVar18) {
      if (fVar4 < fVar18) {
        return 0;
      }
      fVar4 = ((fVar18 - fVar20) * fVar1) / (fVar4 - fVar20);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 4;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar18 < fVar4) {
      return 0;
    }
    fVar4 = ((fVar18 - fVar20) * fVar1) / (fVar4 - fVar20);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 4;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar4 = ABS(fVar6 * (float)local_47c[2]) + ABS(fVar2 * local_468) + ABS(fVar8 * local_45c) +
          ABS(*(float *)(param_1 + 0x70));
  fVar9 = *(float *)(param_1 + 0x5c) * fVar17 +
          *pfVar29 * fVar15 + *(float *)(param_1 + 0x58) * fVar16;
  fVar10 = (*(float *)(param_1 + 0x5c) * local_404 +
           *pfVar29 * local_40c + *(float *)(param_1 + 0x58) * local_408) * fVar1 + fVar9;
  if (fVar9 <= fVar4) {
    fVar4 = -fVar4;
    if (fVar9 < fVar4) {
      if (fVar10 < fVar4) {
        return 0;
      }
      fVar4 = ((fVar4 - fVar9) * fVar1) / (fVar10 - fVar9);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 5;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar4 < fVar10) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar9) * fVar1) / (fVar10 - fVar9);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 5;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar4 = ABS(fVar8 * local_458) + ABS(local_464 * fVar2) + ABS(fVar6 * (float)local_47c[3]) +
          ABS(*(float *)(param_1 + 0x74));
  fVar15 = *(float *)(param_1 + 0x68) * fVar17 +
           *local_47c[0] * fVar15 + *(float *)(param_1 + 100) * fVar16;
  fVar16 = (*(float *)(param_1 + 0x68) * local_404 +
           *local_47c[0] * local_40c + *(float *)(param_1 + 100) * local_408) * fVar1 + fVar15;
  if (fVar15 <= fVar4) {
    fVar4 = -fVar4;
    if (fVar15 < fVar4) {
      if (fVar16 < fVar4) {
        return 0;
      }
      fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar16 - fVar15);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 6;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar4 < fVar16) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar16 - fVar15);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 6;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar4 = ABS(fVar8 * (float)local_47c[4]) + ABS(fVar2 * local_460) +
          ABS((float)local_47c[3] * fVar3) + ABS(fVar7 * (float)local_47c[2]);
  fVar16 = local_488[0] * (float)local_47c[4] - local_460 * fVar21;
  dVar12 = (double)local_4ac;
  local_4a8 = (double)local_4b0;
  fVar15 = local_4ac * (float)local_47c[4] - local_4b0 * local_460;
  if (fVar16 <= fVar4) {
    fVar4 = -fVar4;
    if (fVar16 < fVar4) {
      if (fVar15 < fVar4) {
        return 0;
      }
      fVar4 = ((fVar4 - fVar16) * fVar1) / (fVar15 - fVar16);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 7;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar4 < fVar15) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar16) * fVar1) / (fVar15 - fVar16);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 7;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar4 = ABS(fVar8 * local_468) + ABS(fVar2 * local_45c) +
          ABS(fVar7 * (float)local_47c[1]) + ABS((float)local_47c[3] * fVar5);
  fVar16 = local_488[0] * local_468 - fVar21 * local_45c;
  fVar15 = local_4ac * local_468 - local_45c * local_4b0;
  if (fVar16 <= fVar4) {
    fVar4 = -fVar4;
    if (fVar16 < fVar4) {
      if (fVar15 < fVar4) {
        return 0;
      }
      fVar4 = ((fVar4 - fVar16) * fVar1) / (fVar15 - fVar16);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 8;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar4 < fVar15) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar16) * fVar1) / (fVar15 - fVar16);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 8;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar4 = ABS(fVar8 * local_464) + ABS(fVar2 * local_458) +
          ABS(fVar5 * (float)local_47c[2]) + ABS((float)local_47c[1] * fVar3);
  fVar16 = local_488[0] * local_464 - fVar21 * local_458;
  fVar15 = local_4ac * local_464 - local_4b0 * local_458;
  local_360[0] = (double)fVar4;
  if (fVar16 <= fVar4) {
    fVar4 = -fVar4;
    local_490 = (double)fVar4;
    if (fVar16 < fVar4) {
      if (fVar15 < fVar4) {
        return 0;
      }
      fVar4 = ((fVar4 - fVar16) * fVar1) / (fVar15 - fVar16);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 9;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar4 < fVar15) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar16) * fVar1) / (fVar15 - fVar16);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 9;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar4 = ABS(fVar6 * local_460) + ABS(fVar8 * (float)local_47c[1]) +
          ABS(local_464 * fVar3) + ABS(local_468 * fVar7);
  fVar15 = local_460 * fVar19 - local_488[0] * (float)local_47c[1];
  fVar16 = local_460 * local_4b4 - local_4ac * (float)local_47c[1];
  if (fVar15 <= fVar4) {
    fVar4 = -fVar4;
    if (fVar15 < fVar4) {
      if (fVar16 < fVar4) {
        return 0;
      }
      fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar16 - fVar15);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 10;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar4 < fVar16) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar16 - fVar15);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 10;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar4 = ABS(fVar6 * local_45c) + ABS(fVar8 * (float)local_47c[2]) +
          ABS(local_464 * fVar5) + ABS((float)local_47c[4] * fVar7);
  fVar15 = local_45c * fVar19 - local_488[0] * (float)local_47c[2];
  fVar16 = local_45c * local_4b4 - local_4ac * (float)local_47c[2];
  if (fVar15 <= fVar4) {
    fVar4 = -fVar4;
    if (fVar15 < fVar4) {
      if (fVar16 < fVar4) {
        return 0;
      }
      fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar16 - fVar15);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 0xb;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar4 < fVar16) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar16 - fVar15);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 0xb;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar4 = ABS(fVar8 * (float)local_47c[3]) + ABS(fVar6 * local_458) +
          ABS(local_468 * fVar5) + ABS((float)local_47c[4] * fVar3);
  fVar15 = local_458 * fVar19 - local_488[0] * (float)local_47c[3];
  fVar16 = local_458 * local_4b4 - local_4ac * (float)local_47c[3];
  if (fVar15 <= fVar4) {
    fVar4 = -fVar4;
    if (fVar15 < fVar4) {
      if (fVar16 < fVar4) {
        return 0;
      }
      fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar16 - fVar15);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 0xc;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar4 < fVar16) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar16 - fVar15);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 0xc;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar4 = ABS(fVar2 * (float)local_47c[1]) + ABS(fVar6 * (float)local_47c[4]) +
          ABS(local_458 * fVar3) + ABS(local_45c * fVar7);
  fVar15 = fVar21 * (float)local_47c[1] - (float)local_47c[4] * fVar19;
  fVar16 = local_4b0 * (float)local_47c[1] - (float)local_47c[4] * local_4b4;
  if (fVar15 <= fVar4) {
    fVar4 = -fVar4;
    if (fVar15 < fVar4) {
      if (fVar16 < fVar4) {
        return 0;
      }
      fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar16 - fVar15);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 0xd;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar4 < fVar16) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar16 - fVar15);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 0xd;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar4 = ABS(fVar2 * (float)local_47c[2]) + ABS(fVar6 * local_468) +
          ABS(local_458 * fVar5) + ABS(local_460 * fVar7);
  fVar15 = fVar21 * (float)local_47c[2] - local_468 * fVar19;
  fVar7 = local_4b0 * (float)local_47c[2] - local_468 * local_4b4;
  if (fVar15 <= fVar4) {
    fVar4 = -fVar4;
    if (fVar15 < fVar4) {
      if (fVar7 < fVar4) {
        return 0;
      }
      fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar7 - fVar15);
      if (local_4f8 < fVar4) {
        iVar28 = -1;
        iVar30 = 0xe;
        local_4f4 = -1;
        local_4f8 = fVar4;
      }
    }
  }
  else {
    if (fVar4 < fVar7) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar15) * fVar1) / (fVar7 - fVar15);
    if (local_4f8 < fVar4) {
      iVar28 = 1;
      iVar30 = 0xe;
      local_4f4 = 1;
      local_4f8 = fVar4;
    }
  }
  fVar2 = ABS(fVar2 * (float)local_47c[3]) + ABS(fVar6 * local_464) +
          ABS(local_45c * fVar5) + ABS(local_460 * fVar3);
  fVar4 = fVar21 * (float)local_47c[3] - local_464 * fVar19;
  fVar3 = local_4b0 * (float)local_47c[3] - local_464 * local_4b4;
  _local_4d8 = CONCAT44(uStack_4d4,fVar3);
  if (fVar4 <= fVar2) {
    fVar2 = -fVar2;
    if (fVar4 < fVar2) {
      if (fVar3 < fVar2) {
        return 0;
      }
      fVar1 = ((fVar2 - fVar4) * fVar1) / (fVar3 - fVar4);
      _local_4d8 = CONCAT44(uStack_4d4,fVar1);
      if (local_4f8 < fVar1) {
        iVar28 = -1;
        iVar30 = 0xf;
        local_4f4 = -1;
        local_4f8 = fVar1;
      }
    }
  }
  else {
    if (fVar2 < fVar3) {
      return 0;
    }
    fVar1 = ((fVar2 - fVar4) * fVar1) / (fVar3 - fVar4);
    _local_4d8 = CONCAT44(uStack_4d4,fVar1);
    if (local_4f8 < fVar1) {
      iVar28 = 1;
      iVar30 = 0xf;
      local_4f4 = 1;
      local_4f8 = fVar1;
    }
  }
  *param_2 = local_4f8;
  local_4dc = *(int *)(in_ECX + 0x78) + 0x10;
  iVar13 = iVar30 + -1;
  local_4f0._0_4_ = SUB84(dVar12,0);
  local_4f0._4_4_ = (float)((ulonglong)dVar12 >> 0x20);
  local_4c8._0_4_ = SUB84(dVar11,0);
  local_4c8._4_4_ = (float)((ulonglong)dVar11 >> 0x20);
  local_4b8 = pfVar23;
  switch(iVar13) {
  case 0:
  case 1:
  case 2:
    local_4c0 = 0.0;
    if ((float)local_47c[iVar13 * 3 + 1] <= 0.0) {
      if (0.0 <= (float)local_47c[iVar13 * 3 + 1]) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = (float)local_4f4 * *(float *)(param_1 + 0x6c);
      }
    }
    else {
      local_494 = -iVar28;
      fVar1 = (float)local_494 * *(float *)(param_1 + 0x6c);
    }
    if ((float)local_47c[iVar13 * 3 + 2] <= 0.0) {
      if (0.0 <= (float)local_47c[iVar13 * 3 + 2]) {
        local_4c8 = (double)(ulonglong)(uint)fVar1;
      }
      else {
        local_4c8 = (double)CONCAT44((float)local_4f4 * *(float *)(param_1 + 0x70),fVar1);
      }
    }
    else {
      local_494 = -iVar28;
      local_4c8 = (double)CONCAT44((float)local_494 * *(float *)(param_1 + 0x70),fVar1);
    }
    if ((float)local_47c[iVar13 * 3 + 3] <= 0.0) {
      if ((float)local_47c[iVar13 * 3 + 3] < 0.0) goto LAB_0097e6c8;
    }
    else {
      local_4f4 = -iVar28;
      local_494 = local_4f4;
LAB_0097e6c8:
      local_4c0 = (float)local_4f4 * *(float *)(param_1 + 0x74);
    }
    local_4f0 = dVar12;
    uVar24 = FUN_0047da10(&local_4b4,local_4c0,local_47c[0]);
    pdVar35 = (double *)&local_40c;
    uVar25 = FUN_0047da10(&local_490,local_4c8._4_4_,pfVar29,pdVar35,uVar24);
    pdVar34 = (double *)&local_4f0;
    uVar26 = FUN_0047da10(&local_4c8,(float)local_4c8,local_454,pdVar34,uVar25);
    pdVar33 = (double *)&local_4a8;
    uVar27 = FUN_0047da10(local_360,local_4f8,local_450[0]._0_4_,pdVar33,uVar26);
    pdVar32 = local_310;
    break;
  case 3:
  case 4:
  case 5:
    local_4e8 = 0.0;
    if (local_488[iVar30] <= 0.0) {
      if (0.0 <= local_488[iVar30]) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = (float)-iVar28 * *(float *)(in_ECX + 0x6c);
      }
    }
    else {
      fVar1 = (float)local_4f4 * *(float *)(in_ECX + 0x6c);
    }
    if ((float)local_47c[iVar30] <= 0.0) {
      if (0.0 <= (float)local_47c[iVar30]) {
        local_4f0 = (double)(ulonglong)(uint)fVar1;
      }
      else {
        local_4f0 = (double)CONCAT44((float)-iVar28 * *(float *)(in_ECX + 0x70),fVar1);
      }
    }
    else {
      local_4f0 = (double)CONCAT44((float)local_4f4 * *(float *)(in_ECX + 0x70),fVar1);
    }
    if ((float)local_47c[iVar30 + 3] <= 0.0) {
      if ((float)local_47c[iVar30 + 3] < 0.0) {
        local_4f4 = -iVar28;
        goto LAB_0097e85d;
      }
    }
    else {
LAB_0097e85d:
      local_4e8 = (float)local_4f4 * *(float *)(in_ECX + 0x74);
    }
    local_4c8 = dVar11;
    uVar24 = FUN_0047da10(local_3f0,local_4e8,in_ECX + 0x60);
    pdVar35 = local_380;
    uVar25 = FUN_0047da10(local_390,local_4f0._4_4_,in_ECX + 0x54,pdVar35,uVar24);
    pdVar34 = local_320;
    uVar26 = FUN_0047da10(local_340,(float)local_4f0,pfVar23,pdVar34,uVar25);
    pdVar33 = local_350;
    uVar27 = FUN_0047da10(local_330,local_4f8,local_4dc,pdVar33,uVar26);
    pdVar32 = local_370;
    break;
  case 6:
    fVar31 = (float10)0;
    if ((float10)local_460 <= fVar31) {
      if (fVar31 <= (float10)local_460) {
        local_4f0._4_4_ = (float)fVar31;
      }
      else {
        local_4f0._4_4_ = (float)local_4f4 * *(float *)(in_ECX + 0x70);
      }
    }
    else {
      local_4f0._4_4_ = (float)-iVar28 * *(float *)(in_ECX + 0x70);
    }
    if ((float10)(float)local_47c[4] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[4]) {
        local_4e8 = (float)fVar31;
      }
      else {
        local_4e8 = (float)-iVar28 * *(float *)(in_ECX + 0x74);
      }
    }
    else {
      local_4e8 = (float)local_4f4 * *(float *)(in_ECX + 0x74);
    }
    if ((float10)(float)local_47c[3] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[3]) {
        local_4c8 = (double)CONCAT44((float)fVar31,(float)local_4c8);
      }
      else {
        local_4c8 = (double)CONCAT44((float)local_4f4 * *(float *)(param_1 + 0x70),(float)local_4c8)
        ;
      }
    }
    else {
      local_4c8 = (double)CONCAT44((float)-iVar28 * *(float *)(param_1 + 0x70),(float)local_4c8);
    }
    if ((float10)(float)local_47c[2] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[2]) {
        local_4c0 = (float)fVar31;
      }
      else {
        local_4c0 = (float)-iVar28 * *(float *)(param_1 + 0x74);
      }
    }
    else {
      local_4c0 = (float)local_4f4 * *(float *)(param_1 + 0x74);
    }
    fVar1 = 1.0 - (float)local_47c[1] * (float)local_47c[1];
    local_450[0] = (double)fVar1;
    if (1e-06 < ABS(fVar1)) {
      pfVar23 = (float *)FUN_0047da10(local_440,local_4f8,&local_40c);
      local_4b4 = *pfVar23 + (float)local_430[0];
      local_4b0 = pfVar23[1] + (float)local_350[0];
      local_4ac = pfVar23[2] + (float)local_420[0];
      local_4a8 = (double)CONCAT44(local_4b0,local_4b4);
      local_490 = (double)(local_4f0._4_4_ * (float)local_3d0[0] + local_4e8 * (float)local_3e0[0]);
      local_4a0 = local_4ac;
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      pfVar23 = local_4b8;
      local_490 = (double)((float)((float10)local_490 - fVar31) * (float)local_3a0[0]);
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      fVar31 = ((float10)local_4c0 * (float10)local_3c0[0] +
               (float10)local_4c8._4_4_ * (float10)local_3b0[0] + fVar31 + (float10)local_490) /
               (float10)local_450[0];
    }
    local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)fVar31);
    uVar24 = FUN_0047da10(local_3a0,local_4e8,pfVar23 + 6);
    pdVar35 = local_3e0;
    uVar25 = FUN_0047da10(local_3c0,local_4f0._4_4_,pfVar23 + 3,pdVar35,uVar24);
    pdVar34 = local_3b0;
    uVar26 = FUN_0047da10(local_3d0,(float)local_4f0,pfVar23,pdVar34,uVar25);
    pdVar33 = local_400;
    uVar27 = FUN_0047da10(local_420,local_4f8,local_4dc,pdVar33,uVar26);
    pdVar32 = local_430;
    break;
  case 7:
    fVar31 = (float10)0;
    if ((float10)local_45c <= fVar31) {
      if (fVar31 <= (float10)local_45c) {
        local_4f0._4_4_ = (float)fVar31;
      }
      else {
        local_4f0._4_4_ = (float)local_4f4 * *(float *)(in_ECX + 0x70);
      }
    }
    else {
      local_4f0._4_4_ = (float)-iVar28 * *(float *)(in_ECX + 0x70);
    }
    if ((float10)local_468 <= fVar31) {
      if (fVar31 <= (float10)local_468) {
        local_4e8 = (float)fVar31;
      }
      else {
        local_4e8 = (float)-iVar28 * *(float *)(in_ECX + 0x74);
      }
    }
    else {
      local_4e8 = (float)local_4f4 * *(float *)(in_ECX + 0x74);
    }
    if ((float10)(float)local_47c[3] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[3]) {
        local_4c8 = (double)CONCAT44(local_4c8._4_4_,(float)fVar31);
      }
      else {
        local_4c8 = (double)CONCAT44(local_4c8._4_4_,(float)-iVar28 * *(float *)(param_1 + 0x6c));
      }
    }
    else {
      local_4c8 = (double)CONCAT44(local_4c8._4_4_,(float)local_4f4 * *(float *)(param_1 + 0x6c));
    }
    if ((float10)(float)local_47c[1] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[1]) {
        local_4c0 = (float)fVar31;
      }
      else {
        local_4c0 = (float)local_4f4 * *(float *)(param_1 + 0x74);
      }
    }
    else {
      local_4c0 = (float)-iVar28 * *(float *)(param_1 + 0x74);
    }
    fVar1 = 1.0 - (float)local_47c[2] * (float)local_47c[2];
    local_450[0] = (double)fVar1;
    if (1e-06 < ABS(fVar1)) {
      pfVar23 = (float *)FUN_0047da10(&local_4d8,local_4f8,&local_40c);
      local_4b4 = *pfVar23 + (float)local_430[0];
      local_4b0 = pfVar23[1] + (float)local_350[0];
      local_4ac = pfVar23[2] + (float)local_420[0];
      local_4a8 = (double)CONCAT44(local_4b0,local_4b4);
      local_490 = (double)(local_4f0._4_4_ * (float)local_440[0] + local_4e8 * (float)local_400[0]);
      local_4a0 = local_4ac;
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      pfVar23 = local_4b8;
      local_490 = (double)((float)((float10)local_490 - fVar31) * (float)local_3b0[0]);
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      fVar31 = ((float10)local_4c0 * (float10)local_3c0[0] +
               (float10)(float)local_4c8 * (float10)local_3a0[0] + fVar31 + (float10)local_490) /
               (float10)local_450[0];
    }
    local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)fVar31);
    uVar24 = FUN_0047da10(local_450,local_4e8,pfVar23 + 6);
    pdVar35 = &local_260;
    uVar25 = FUN_0047da10(local_14,local_4f0._4_4_,pfVar23 + 3,pdVar35,uVar24);
    pdVar34 = &local_c8;
    uVar26 = FUN_0047da10(local_2d8,(float)local_4f0,pfVar23,pdVar34,uVar25);
    pdVar33 = &local_170;
    uVar27 = FUN_0047da10(local_2c0,local_4f8,local_4dc,pdVar33,uVar26);
    pdVar32 = &local_68;
    break;
  case 8:
    fVar31 = (float10)0;
    if ((float10)local_458 <= fVar31) {
      if (fVar31 <= (float10)local_458) {
        local_4f0._4_4_ = (float)fVar31;
      }
      else {
        local_4f0._4_4_ = (float)local_4f4 * *(float *)(in_ECX + 0x70);
      }
    }
    else {
      local_4f0._4_4_ = (float)-iVar28 * *(float *)(in_ECX + 0x70);
    }
    if ((float10)local_464 <= fVar31) {
      if (fVar31 <= (float10)local_464) {
        local_4e8 = (float)fVar31;
      }
      else {
        local_4e8 = (float)-iVar28 * *(float *)(in_ECX + 0x74);
      }
    }
    else {
      local_4e8 = (float)local_4f4 * *(float *)(in_ECX + 0x74);
    }
    if ((float10)(float)local_47c[2] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[2]) {
        fVar1 = (float)fVar31;
      }
      else {
        fVar1 = (float)local_4f4 * *(float *)(param_1 + 0x6c);
      }
    }
    else {
      fVar1 = (float)-iVar28 * *(float *)(param_1 + 0x6c);
    }
    if ((float10)(float)local_47c[1] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[1]) {
        local_4c8 = (double)CONCAT44((float)fVar31,fVar1);
      }
      else {
        local_4c8 = (double)CONCAT44((float)-iVar28 * *(float *)(param_1 + 0x70),fVar1);
      }
    }
    else {
      local_4c8 = (double)CONCAT44((float)local_4f4 * *(float *)(param_1 + 0x70),fVar1);
    }
    fVar1 = 1.0 - (float)local_47c[3] * (float)local_47c[3];
    local_450[0] = (double)fVar1;
    if (1e-06 < ABS(fVar1)) {
      pfVar23 = (float *)FUN_0047da10(local_440,local_4f8,&local_40c);
      local_4b4 = *pfVar23 + (float)local_430[0];
      local_4b0 = pfVar23[1] + (float)local_350[0];
      local_4ac = pfVar23[2] + (float)local_420[0];
      local_4a8 = (double)CONCAT44(local_4b0,local_4b4);
      local_490 = (double)(local_4e8 * (float)local_370[0] + local_4f0._4_4_ * (float)local_340[0]);
      local_4a0 = local_4ac;
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      pfVar23 = local_4b8;
      local_490 = (double)((float)((float10)local_490 - fVar31) * (float)local_3c0[0]);
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      fVar31 = ((float10)local_4c8._4_4_ * (float10)local_3b0[0] +
               (float10)(float)local_4c8 * (float10)local_3a0[0] + fVar31 + (float10)local_490) /
               (float10)local_450[0];
    }
    local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)fVar31);
    uVar24 = FUN_0047da10(local_2a8,local_4e8,pfVar23 + 6);
    pdVar35 = &local_158;
    uVar25 = FUN_0047da10(local_290,local_4f0._4_4_,pfVar23 + 3,pdVar35,uVar24);
    pdVar34 = &local_b0;
    uVar26 = FUN_0047da10(local_278,(float)local_4f0,pfVar23,pdVar34,uVar25);
    pdVar33 = &local_140;
    uVar27 = FUN_0047da10(local_2fc,local_4f8,local_4dc,pdVar33,uVar26);
    pdVar32 = &local_38;
    break;
  case 9:
    fVar31 = (float10)0;
    if ((float10)local_460 <= fVar31) {
      if (fVar31 <= (float10)local_460) {
        local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)fVar31);
      }
      else {
        local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)-iVar28 * *(float *)(in_ECX + 0x6c));
      }
    }
    else {
      local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)local_4f4 * *(float *)(in_ECX + 0x6c));
    }
    if ((float10)(float)local_47c[1] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[1]) {
        local_4e8 = (float)fVar31;
      }
      else {
        local_4e8 = (float)local_4f4 * *(float *)(in_ECX + 0x74);
      }
    }
    else {
      local_4e8 = (float)-iVar28 * *(float *)(in_ECX + 0x74);
    }
    if ((float10)local_464 <= fVar31) {
      if (fVar31 <= (float10)local_464) {
        local_4c8 = (double)CONCAT44((float)fVar31,(float)local_4c8);
      }
      else {
        local_4c8 = (double)CONCAT44((float)local_4f4 * *(float *)(param_1 + 0x70),(float)local_4c8)
        ;
      }
    }
    else {
      local_4c8 = (double)CONCAT44((float)-iVar28 * *(float *)(param_1 + 0x70),(float)local_4c8);
    }
    if ((float10)local_468 <= fVar31) {
      if (fVar31 <= (float10)local_468) {
        local_4c0 = (float)fVar31;
      }
      else {
        local_4c0 = (float)-iVar28 * *(float *)(param_1 + 0x74);
      }
    }
    else {
      local_4c0 = (float)local_4f4 * *(float *)(param_1 + 0x74);
    }
    fVar1 = 1.0 - (float)local_47c[4] * (float)local_47c[4];
    local_450[0] = (double)fVar1;
    if (1e-06 < ABS(fVar1)) {
      pfVar23 = (float *)FUN_0047da10(&local_4d8,local_4f8,&local_40c);
      local_4b4 = *pfVar23 + (float)local_430[0];
      local_4b0 = pfVar23[1] + (float)local_350[0];
      local_4ac = pfVar23[2] + (float)local_420[0];
      local_4a8 = (double)CONCAT44(local_4b0,local_4b4);
      local_490 = (double)((float)local_4f0 * (float)local_3a0[0] + local_4e8 * (float)local_3e0[0])
      ;
      local_4a0 = local_4ac;
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      pfVar23 = local_4b8;
      local_490 = (double)((float)((float10)local_490 - fVar31) * (float)local_3d0[0]);
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      fVar31 = ((float10)local_4c0 * (float10)local_340[0] +
               (float10)local_4c8._4_4_ * (float10)local_440[0] + fVar31 + (float10)local_490) /
               (float10)local_450[0];
    }
    local_4f0 = (double)CONCAT44((float)fVar31,(float)local_4f0);
    uVar24 = FUN_0047da10(local_248,local_4e8,pfVar23 + 6);
    pdVar35 = &local_128;
    uVar25 = FUN_0047da10(local_230,local_4f0._4_4_,pfVar23 + 3,pdVar35,uVar24);
    pdVar34 = &local_98;
    uVar26 = FUN_0047da10(local_218,(float)local_4f0,pfVar23,pdVar34,uVar25);
    pdVar33 = &local_110;
    uVar27 = FUN_0047da10(local_200,local_4f8,local_4dc,pdVar33,uVar26);
    pdVar32 = &local_50;
    break;
  case 10:
    fVar31 = (float10)0;
    if ((float10)local_45c <= fVar31) {
      if (fVar31 <= (float10)local_45c) {
        local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)fVar31);
      }
      else {
        local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)-iVar28 * *(float *)(in_ECX + 0x6c));
      }
    }
    else {
      local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)local_4f4 * *(float *)(in_ECX + 0x6c));
    }
    if ((float10)(float)local_47c[2] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[2]) {
        local_4e8 = (float)fVar31;
      }
      else {
        local_4e8 = (float)local_4f4 * *(float *)(in_ECX + 0x74);
      }
    }
    else {
      local_4e8 = (float)-iVar28 * *(float *)(in_ECX + 0x74);
    }
    if ((float10)local_464 <= fVar31) {
      if (fVar31 <= (float10)local_464) {
        local_4c8 = (double)CONCAT44(local_4c8._4_4_,(float)fVar31);
      }
      else {
        local_4c8 = (double)CONCAT44(local_4c8._4_4_,(float)-iVar28 * *(float *)(param_1 + 0x6c));
      }
    }
    else {
      local_4c8 = (double)CONCAT44(local_4c8._4_4_,(float)local_4f4 * *(float *)(param_1 + 0x6c));
    }
    if ((float10)(float)local_47c[4] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[4]) {
        local_4c0 = (float)fVar31;
      }
      else {
        local_4c0 = (float)local_4f4 * *(float *)(param_1 + 0x74);
      }
    }
    else {
      local_4c0 = (float)-iVar28 * *(float *)(param_1 + 0x74);
    }
    fVar1 = 1.0 - local_468 * local_468;
    local_450[0] = (double)fVar1;
    if (1e-06 < ABS(fVar1)) {
      pfVar23 = (float *)FUN_0047da10(&local_4d8,local_4f8,&local_40c);
      local_4b4 = *pfVar23 + (float)local_430[0];
      local_4b0 = pfVar23[1] + (float)local_350[0];
      local_4ac = pfVar23[2] + (float)local_420[0];
      local_4a8 = (double)CONCAT44(local_4b0,local_4b4);
      local_490 = (double)((float)local_4f0 * (float)local_3b0[0] + local_4e8 * (float)local_400[0])
      ;
      local_4a0 = local_4ac;
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      pfVar23 = local_4b8;
      local_490 = (double)((float)((float10)local_490 - fVar31) * (float)local_440[0]);
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      fVar31 = ((float10)local_4c0 * (float10)local_340[0] +
               (float10)(float)local_4c8 * (float10)local_3d0[0] + fVar31 + (float10)local_490) /
               (float10)local_450[0];
    }
    local_4f0 = (double)CONCAT44((float)fVar31,(float)local_4f0);
    uVar24 = FUN_0047da10(local_1e8,local_4e8,pfVar23 + 6);
    pdVar35 = &local_f8;
    uVar25 = FUN_0047da10(local_1d0,local_4f0._4_4_,pfVar23 + 3,pdVar35,uVar24);
    pdVar34 = &local_80;
    uVar26 = FUN_0047da10(local_1b8,(float)local_4f0,pfVar23,pdVar34,uVar25);
    pdVar33 = &local_e0;
    uVar27 = FUN_0047da10(local_1a0,local_4f8,local_4dc,pdVar33,uVar26);
    pdVar32 = &local_20;
    break;
  case 0xb:
    fVar31 = (float10)0;
    if ((float10)local_458 <= fVar31) {
      if (fVar31 <= (float10)local_458) {
        local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)fVar31);
      }
      else {
        local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)-iVar28 * *(float *)(in_ECX + 0x6c));
      }
    }
    else {
      local_4f0 = (double)CONCAT44(local_4f0._4_4_,(float)local_4f4 * *(float *)(in_ECX + 0x6c));
    }
    if ((float10)(float)local_47c[3] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[3]) {
        local_4e8 = (float)fVar31;
      }
      else {
        local_4e8 = (float)local_4f4 * *(float *)(in_ECX + 0x74);
      }
    }
    else {
      local_4e8 = (float)-iVar28 * *(float *)(in_ECX + 0x74);
    }
    if ((float10)local_468 <= fVar31) {
      if (fVar31 <= (float10)local_468) {
        fVar1 = (float)fVar31;
      }
      else {
        fVar1 = (float)local_4f4 * *(float *)(param_1 + 0x6c);
      }
    }
    else {
      fVar1 = (float)-iVar28 * *(float *)(param_1 + 0x6c);
    }
    if ((float10)(float)local_47c[4] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[4]) {
        local_4c8 = (double)CONCAT44((float)fVar31,fVar1);
      }
      else {
        local_4c8 = (double)CONCAT44((float)-iVar28 * *(float *)(param_1 + 0x70),fVar1);
      }
    }
    else {
      local_4c8 = (double)CONCAT44((float)local_4f4 * *(float *)(param_1 + 0x70),fVar1);
    }
    fVar1 = 1.0 - local_464 * local_464;
    local_450[0] = (double)fVar1;
    if (1e-06 < ABS(fVar1)) {
      pfVar23 = (float *)FUN_0047da10(&local_4d8,local_4f8,&local_40c);
      local_4b4 = *pfVar23 + (float)local_430[0];
      local_4b0 = pfVar23[1] + (float)local_350[0];
      local_4ac = pfVar23[2] + (float)local_420[0];
      local_4a8 = (double)CONCAT44(local_4b0,local_4b4);
      local_490 = (double)(local_4e8 * (float)local_370[0] + (float)local_4f0 * (float)local_3c0[0])
      ;
      local_4a0 = local_4ac;
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      pfVar23 = local_4b8;
      local_490 = (double)((float)((float10)local_490 - fVar31) * (float)local_340[0]);
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      fVar31 = ((float10)local_4c8._4_4_ * (float10)local_440[0] +
               (float10)(float)local_4c8 * (float10)local_3d0[0] + fVar31 + (float10)local_490) /
               (float10)local_450[0];
    }
    local_4f0 = (double)CONCAT44((float)fVar31,(float)local_4f0);
    uVar24 = FUN_0047da10(local_188,local_4e8,pfVar23 + 6);
    pdVar35 = &local_2f0;
    uVar25 = FUN_0047da10(local_2e4,local_4f0._4_4_,pfVar23 + 3,pdVar35,uVar24);
    pdVar34 = &local_2cc;
    uVar26 = FUN_0047da10(local_2b4,(float)local_4f0,pfVar23,pdVar34,uVar25);
    pdVar33 = &local_29c;
    uVar27 = FUN_0047da10(local_284,local_4f8,local_4dc,pdVar33,uVar26);
    pdVar32 = &local_26c;
    break;
  case 0xc:
    fVar31 = (float10)0;
    if ((float10)(float)local_47c[4] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[4]) {
        fVar1 = (float)fVar31;
      }
      else {
        fVar1 = (float)local_4f4 * *(float *)(in_ECX + 0x6c);
      }
    }
    else {
      fVar1 = (float)-iVar28 * *(float *)(in_ECX + 0x6c);
    }
    if ((float10)(float)local_47c[1] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[1]) {
        local_4f0 = (double)CONCAT44((float)fVar31,fVar1);
      }
      else {
        local_4f0 = (double)CONCAT44((float)-iVar28 * *(float *)(in_ECX + 0x70),fVar1);
      }
    }
    else {
      local_4f0 = (double)CONCAT44((float)local_4f4 * *(float *)(in_ECX + 0x70),fVar1);
    }
    if ((float10)local_458 <= fVar31) {
      if (fVar31 <= (float10)local_458) {
        local_4c8 = (double)CONCAT44((float)fVar31,(float)local_4c8);
      }
      else {
        local_4c8 = (double)CONCAT44((float)local_4f4 * *(float *)(param_1 + 0x70),(float)local_4c8)
        ;
      }
    }
    else {
      local_4c8 = (double)CONCAT44((float)-iVar28 * *(float *)(param_1 + 0x70),(float)local_4c8);
    }
    if ((float10)local_45c <= fVar31) {
      if (fVar31 <= (float10)local_45c) {
        local_4c0 = (float)fVar31;
      }
      else {
        local_4c0 = (float)-iVar28 * *(float *)(param_1 + 0x74);
      }
    }
    else {
      local_4c0 = (float)local_4f4 * *(float *)(param_1 + 0x74);
    }
    fVar1 = 1.0 - local_460 * local_460;
    local_450[0] = (double)fVar1;
    if (1e-06 < ABS(fVar1)) {
      pfVar23 = (float *)FUN_0047da10(local_440,local_4f8,&local_40c);
      local_4b4 = *pfVar23 + (float)local_430[0];
      local_4b0 = pfVar23[1] + (float)local_350[0];
      local_4ac = pfVar23[2] + (float)local_420[0];
      local_4a8 = (double)CONCAT44(local_4b0,local_4b4);
      local_490 = (double)((float)local_4f0 * (float)local_3a0[0] +
                          local_4f0._4_4_ * (float)local_3d0[0]);
      local_4a0 = local_4ac;
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      pfVar23 = local_4b8;
      local_490 = (double)((float)((float10)local_490 - fVar31) * (float)local_3e0[0]);
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      fVar31 = ((float10)local_4c0 * (float10)local_370[0] +
               (float10)local_4c8._4_4_ * (float10)local_400[0] + fVar31 + (float10)local_490) /
               (float10)local_450[0];
    }
    local_4e8 = (float)fVar31;
    uVar24 = FUN_0047da10(local_254,local_4e8,pfVar23 + 6);
    pdVar35 = &local_23c;
    uVar25 = FUN_0047da10(local_224,local_4f0._4_4_,pfVar23 + 3,pdVar35,uVar24);
    pdVar34 = &local_20c;
    uVar26 = FUN_0047da10(local_1f4,(float)local_4f0,pfVar23,pdVar34,uVar25);
    pdVar33 = &local_1dc;
    uVar27 = FUN_0047da10(local_1c4,local_4f8,local_4dc,pdVar33,uVar26);
    pdVar32 = &local_1ac;
    break;
  case 0xd:
    fVar31 = (float10)0;
    if ((float10)local_468 <= fVar31) {
      if (fVar31 <= (float10)local_468) {
        fVar1 = (float)fVar31;
      }
      else {
        fVar1 = (float)local_4f4 * *(float *)(in_ECX + 0x6c);
      }
    }
    else {
      fVar1 = (float)-iVar28 * *(float *)(in_ECX + 0x6c);
    }
    if ((float10)(float)local_47c[2] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[2]) {
        local_4f0 = (double)CONCAT44((float)fVar31,fVar1);
      }
      else {
        local_4f0 = (double)CONCAT44((float)-iVar28 * *(float *)(in_ECX + 0x70),fVar1);
      }
    }
    else {
      local_4f0 = (double)CONCAT44((float)local_4f4 * *(float *)(in_ECX + 0x70),fVar1);
    }
    if ((float10)local_458 <= fVar31) {
      if (fVar31 <= (float10)local_458) {
        local_4c8 = (double)CONCAT44(local_4c8._4_4_,(float)fVar31);
      }
      else {
        local_4c8 = (double)CONCAT44(local_4c8._4_4_,(float)-iVar28 * *(float *)(param_1 + 0x6c));
      }
    }
    else {
      local_4c8 = (double)CONCAT44(local_4c8._4_4_,(float)local_4f4 * *(float *)(param_1 + 0x6c));
    }
    if ((float10)local_460 <= fVar31) {
      if (fVar31 <= (float10)local_460) {
        local_4c0 = (float)fVar31;
      }
      else {
        local_4c0 = (float)local_4f4 * *(float *)(param_1 + 0x74);
      }
    }
    else {
      local_4c0 = (float)-iVar28 * *(float *)(param_1 + 0x74);
    }
    fVar1 = 1.0 - local_45c * local_45c;
    local_450[0] = (double)fVar1;
    if (1e-06 < ABS(fVar1)) {
      pfVar23 = (float *)FUN_0047da10(&local_4d8,local_4f8,&local_40c);
      local_4b4 = *pfVar23 + (float)local_430[0];
      local_4b0 = pfVar23[1] + (float)local_350[0];
      local_4ac = pfVar23[2] + (float)local_420[0];
      local_4a8 = (double)CONCAT44(local_4b0,local_4b4);
      local_490 = (double)((float)local_4f0 * (float)local_3b0[0] +
                          local_4f0._4_4_ * (float)local_440[0]);
      local_4a0 = local_4ac;
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      pfVar23 = local_4b8;
      local_490 = (double)((float)((float10)local_490 - fVar31) * (float)local_400[0]);
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      fVar31 = ((float10)local_4c0 * (float10)local_370[0] +
               (float10)(float)local_4c8 * (float10)local_3e0[0] + fVar31 + (float10)local_490) /
               (float10)local_450[0];
    }
    local_4e8 = (float)fVar31;
    uVar24 = FUN_0047da10(local_194,local_4e8,pfVar23 + 6);
    pdVar35 = &local_17c;
    uVar25 = FUN_0047da10(local_164,local_4f0._4_4_,pfVar23 + 3,pdVar35,uVar24);
    pdVar34 = &local_14c;
    uVar26 = FUN_0047da10(local_134,(float)local_4f0,pfVar23,pdVar34,uVar25);
    pdVar33 = &local_11c;
    uVar27 = FUN_0047da10(local_104,local_4f8,local_4dc,pdVar33,uVar26);
    pdVar32 = &local_ec;
    break;
  case 0xe:
    fVar31 = (float10)0;
    if ((float10)local_464 <= fVar31) {
      if (fVar31 <= (float10)local_464) {
        fVar1 = (float)fVar31;
      }
      else {
        fVar1 = (float)local_4f4 * *(float *)(in_ECX + 0x6c);
      }
    }
    else {
      fVar1 = (float)-iVar28 * *(float *)(in_ECX + 0x6c);
    }
    if ((float10)(float)local_47c[3] <= fVar31) {
      if (fVar31 <= (float10)(float)local_47c[3]) {
        local_4f0 = (double)CONCAT44((float)fVar31,fVar1);
      }
      else {
        local_4f0 = (double)CONCAT44((float)-iVar28 * *(float *)(in_ECX + 0x70),fVar1);
      }
    }
    else {
      local_4f0 = (double)CONCAT44((float)local_4f4 * *(float *)(in_ECX + 0x70),fVar1);
    }
    if ((float10)local_45c <= fVar31) {
      if (fVar31 <= (float10)local_45c) {
        fVar1 = (float)fVar31;
      }
      else {
        fVar1 = (float)local_4f4 * *(float *)(param_1 + 0x6c);
      }
    }
    else {
      fVar1 = (float)-iVar28 * *(float *)(param_1 + 0x6c);
    }
    if ((float10)local_460 <= fVar31) {
      if (fVar31 <= (float10)local_460) {
        local_4c8 = (double)CONCAT44((float)fVar31,fVar1);
      }
      else {
        local_4c8 = (double)CONCAT44((float)-iVar28 * *(float *)(param_1 + 0x70),fVar1);
      }
    }
    else {
      local_4c8 = (double)CONCAT44((float)local_4f4 * *(float *)(param_1 + 0x70),fVar1);
    }
    fVar1 = 1.0 - local_458 * local_458;
    local_450[0] = (double)fVar1;
    if (1e-06 < ABS(fVar1)) {
      pfVar23 = (float *)FUN_0047da10(local_440,local_4f8,&local_40c);
      local_4b4 = *pfVar23 + (float)local_430[0];
      local_4b0 = pfVar23[1] + (float)local_350[0];
      local_4ac = pfVar23[2] + (float)local_420[0];
      local_4a8 = (double)CONCAT44(local_4b0,local_4b4);
      local_490 = (double)((float)local_4f0 * (float)local_3c0[0] +
                          local_4f0._4_4_ * (float)local_340[0]);
      local_4a0 = local_4ac;
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      pfVar23 = local_4b8;
      local_490 = (double)((float)((float10)local_490 - fVar31) * (float)local_370[0]);
      fVar31 = (float10)FUN_0047d9e0(&local_4a8);
      fVar31 = ((float10)local_4c8._4_4_ * (float10)local_400[0] +
               (float10)(float)local_4c8 * (float10)local_3e0[0] + fVar31 + (float10)local_490) /
               (float10)local_450[0];
    }
    local_4e8 = (float)fVar31;
    uVar24 = FUN_0047da10(local_d4,local_4e8,pfVar23 + 6);
    pdVar35 = &local_bc;
    uVar25 = FUN_0047da10(local_a4,local_4f0._4_4_,pfVar23 + 3,pdVar35,uVar24);
    pdVar34 = &local_8c;
    uVar26 = FUN_0047da10(local_74,(float)local_4f0,pfVar23,pdVar34,uVar25);
    pdVar33 = &local_5c;
    uVar27 = FUN_0047da10(local_44,local_4f8,local_4dc,pdVar33,uVar26);
    pdVar32 = &local_2c;
    break;
  default:
    return 1;
  }
  FUN_0047d9b0(pdVar32,uVar27);
  FUN_0047d9b0(pdVar33,uVar26);
  FUN_0047d9b0(pdVar34,uVar25);
  puVar22 = (undefined4 *)FUN_0047d9b0(pdVar35,uVar24);
  *param_3 = *puVar22;
  param_3[1] = puVar22[1];
  param_3[2] = puVar22[2];
  return 1;
}


