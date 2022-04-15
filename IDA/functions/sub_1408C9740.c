//----- (00000001408C9740) ----------------------------------------------------
__int64 __fastcall sub_1408C9740(__int64 a1, __int16 a2, float* a3)
{
	__int64 result; // rax
	float v5; // eax
	float v6; // eax
	float v7; // eax
	float v8; // eax
	float v9; // eax
	float v10; // eax
	float v11; // eax
	float v12; // eax
	float v13; // eax
	float v14; // eax
	float v15; // eax
	float v16; // eax
	float v17; // eax
	double v18; // xmm0_8
	double v19; // xmm0_8
	double v20; // xmm0_8
	double v21; // xmm0_8
	double v22; // xmm0_8
	double v23; // xmm0_8
	double v24; // xmm0_8
	bool v25; // zf
	float v26; // eax
	float v27; // eax
	float v28; // eax
	float v29; // eax
	float v30; // eax
	float v31; // eax
	float v32; // eax
	double v33; // xmm0_8
	double v34; // xmm0_8
	float v35; // eax
	float v36; // eax
	float v37; // eax
	float v38; // eax
	float v39; // eax
	float v40; // eax

	if (!a3)
		return 31i64;
	switch (a2)
	{
	case 0:
		v26 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 92) = v26;
		result = 1i64;
		break;
	case 1:
		v27 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 96) = v27;
		result = 1i64;
		break;
	case 2:
		v28 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 100) = v28;
		result = 1i64;
		break;
	case 3:
		v29 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 104) = v29;
		result = 1i64;
		break;
	case 4:
		v25 = *(_BYTE*)a3 == 0;
		*(_BYTE*)(a1 + 154) = 1;
		*(_BYTE*)(a1 + 153) = !v25;
		result = 1i64;
		break;
	case 10:
		v5 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 8) = v5;
		result = 1i64;
		break;
	case 11:
		v6 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 12) = v6;
		result = 1i64;
		break;
	case 12:
		v30 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 108) = v30;
		result = 1i64;
		break;
	case 13:
		v31 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 112) = v31;
		result = 1i64;
		break;
	case 14:
		v32 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 116) = v32;
		result = 1i64;
		break;
	case 15:
		v7 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 16) = v7;
		result = 1i64;
		break;
	case 16:
		v8 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 20) = v8;
		result = 1i64;
		break;
	case 20:
		v25 = *(_BYTE*)a3 == 0;
		*(_BYTE*)(a1 + 154) = 1;
		*(_BYTE*)(a1 + 152) = !v25;
		result = 1i64;
		break;
	case 21:
		v35 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 128) = v35;
		result = 1i64;
		break;
	case 22:
		v36 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 132) = v36;
		result = 1i64;
		break;
	case 23:
		v9 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 24) = v9;
		result = 1i64;
		break;
	case 24:
		v10 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 28) = v10;
		result = 1i64;
		break;
	case 25:
		v11 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 32) = v11;
		result = 1i64;
		break;
	case 26:
		v37 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 136) = v37;
		result = 1i64;
		break;
	case 27:
		v38 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 140) = v38;
		result = 1i64;
		break;
	case 28:
		v12 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 36) = v12;
		result = 1i64;
		break;
	case 29:
		v13 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 40) = v13;
		result = 1i64;
		break;
	case 30:
		v14 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 44) = v14;
		result = 1i64;
		break;
	case 31:
		v39 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 144) = v39;
		result = 1i64;
		break;
	case 32:
		v40 = *a3;
		*(_BYTE*)(a1 + 154) = 1;
		*(float*)(a1 + 148) = v40;
		result = 1i64;
		break;
	case 33:
		v15 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 48) = v15;
		result = 1i64;
		break;
	case 34:
		v16 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 52) = v16;
		result = 1i64;
		break;
	case 35:
		v17 = *a3;
		*(_BYTE*)(a1 + 88) = 1;
		*(float*)(a1 + 56) = v17;
		result = 1i64;
		break;
	case 40:
		v33 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 154) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 120) = LODWORD(v33);
		break;
	case 41:
		v34 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 154) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 124) = LODWORD(v34);
		break;
	case 50:
		v18 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 88) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 60) = LODWORD(v18);
		break;
	case 51:
		v19 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 88) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 64) = LODWORD(v19);
		break;
	case 52:
		v20 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 88) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 68) = LODWORD(v20);
		break;
	case 53:
		v21 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 88) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 72) = LODWORD(v21);
		break;
	case 60:
		v22 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 88) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 76) = LODWORD(v22);
		break;
	case 61:
		v23 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 88) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 80) = LODWORD(v23);
		break;
	case 62:
		v24 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), (float)(*a3 - 3.0) * 0.050000001);
		*(_BYTE*)(a1 + 88) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 84) = LODWORD(v24);
		break;
	case 100:
		*(float*)(a1 + 156) = *a3;
		result = 1i64;
		break;
	case 101:
		*(float*)(a1 + 160) = *a3;
		result = 1i64;
		break;
	case 102:
		*(float*)(a1 + 164) = *a3;
		result = 1i64;
		break;
	case 103:
		*(float*)(a1 + 168) = *a3;
		result = 1i64;
		break;
	case 104:
		*(float*)(a1 + 172) = *a3;
		result = 1i64;
		break;
	case 105:
		*(float*)(a1 + 176) = *a3;
		result = 1i64;
		break;
	case 106:
		*(float*)(a1 + 180) = *a3;
		result = 1i64;
		break;
	case 107:
		*(float*)(a1 + 184) = *a3;
		result = 1i64;
		break;
	case 108:
		*(float*)(a1 + 188) = *a3;
		result = 1i64;
		break;
	case 109:
		*(float*)(a1 + 192) = *a3;
		result = 1i64;
		break;
	case 110:
		*(float*)(a1 + 196) = *a3;
		goto LABEL_52;
	default:
	LABEL_52:
		result = 1i64;
		break;
	}
	return result;
}

