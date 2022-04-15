//----- (00000001408D2DC0) ----------------------------------------------------
__int64 __fastcall sub_1408D2DC0(__int64 a1, __int16 a2, _BYTE* a3)
{
	__int64 result; // rax
	bool v5; // zf
	int v6; // eax
	int v7; // eax
	int v8; // eax
	int v9; // eax
	int v10; // eax
	int v11; // eax
	int v12; // eax
	int v13; // eax
	int v14; // eax
	int v15; // eax
	int v16; // eax
	int v17; // eax
	int v18; // eax
	int v19; // eax
	int v20; // eax
	int v21; // eax
	int v22; // eax
	int v23; // eax
	int v24; // eax
	int v25; // eax
	int v26; // eax
	int v27; // eax
	int v28; // eax
	int v29; // eax
	int v30; // eax
	int v31; // eax
	int v32; // eax
	int v33; // eax
	int v34; // eax
	int v35; // eax
	double v36; // xmm0_8
	double v37; // xmm0_8
	int v38; // eax

	if (!a3)
		return 31i64;
	switch (a2)
	{
	case 0:
		v5 = *a3 == 0;
		*(_BYTE*)(a1 + 52) = 1;
		*(_BYTE*)(a1 + 53) = !v5;
		result = 1i64;
		break;
	case 1:
		v12 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 52) = 1;
		*(_DWORD*)(a1 + 36) = v12;
		result = 1i64;
		break;
	case 2:
		v13 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 52) = 1;
		*(_DWORD*)(a1 + 40) = v13;
		result = 1i64;
		break;
	case 3:
		v14 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 52) = 1;
		*(_DWORD*)(a1 + 44) = v14;
		result = 1i64;
		break;
	case 4:
		v15 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 52) = 1;
		*(_DWORD*)(a1 + 48) = v15;
		result = 1i64;
		break;
	case 10:
		v5 = *a3 == 0;
		*(_BYTE*)(a1 + 124) = 1;
		*(_BYTE*)(a1 + 125) = !v5;
		result = 1i64;
		break;
	case 11:
		v28 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 124) = 1;
		*(_DWORD*)(a1 + 104) = v28;
		result = 1i64;
		break;
	case 12:
		v29 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 124) = 1;
		*(_DWORD*)(a1 + 108) = v29;
		result = 1i64;
		break;
	case 13:
		v30 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 124) = 1;
		*(_DWORD*)(a1 + 112) = v30;
		result = 1i64;
		break;
	case 14:
		v31 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 124) = 1;
		*(_DWORD*)(a1 + 116) = v31;
		result = 1i64;
		break;
	case 15:
		v32 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 124) = 1;
		*(_DWORD*)(a1 + 120) = v32;
		result = 1i64;
		break;
	case 20:
		v5 = *a3 == 0;
		*(_BYTE*)(a1 + 136) = 1;
		*(_BYTE*)(a1 + 137) = !v5;
		result = 1i64;
		break;
	case 21:
		v26 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 136) = 1;
		*(_DWORD*)(a1 + 128) = v26;
		result = 1i64;
		break;
	case 22:
		v27 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 136) = 1;
		*(_DWORD*)(a1 + 132) = v27;
		result = 1i64;
		break;
	case 30:
		v5 = *a3 == 0;
		*(_BYTE*)(a1 + 152) = 1;
		*(_BYTE*)(a1 + 153) = !v5;
		result = 1i64;
		break;
	case 31:
		v33 = (int)*(float*)a3;
		*(_BYTE*)(a1 + 152) = 1;
		*(_DWORD*)(a1 + 140) = v33;
		result = 1i64;
		break;
	case 32:
		v34 = (int)*(float*)a3;
		*(_BYTE*)(a1 + 152) = 1;
		*(_DWORD*)(a1 + 144) = v34;
		result = 1i64;
		break;
	case 33:
		v35 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 152) = 1;
		*(_DWORD*)(a1 + 148) = v35;
		result = 1i64;
		break;
	case 40:
		v36 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		*(_BYTE*)(a1 + 168) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 156) = LODWORD(v36);
		break;
	case 41:
		v37 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		*(_BYTE*)(a1 + 168) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 160) = LODWORD(v37);
		break;
	case 42:
		v38 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 168) = 1;
		*(_DWORD*)(a1 + 164) = v38;
		result = 1i64;
		break;
	case 50:
		v5 = *a3 == 0;
		*(_BYTE*)(a1 + 32) = 1;
		*(_BYTE*)(a1 + 33) = !v5;
		result = 1i64;
		break;
	case 51:
		v6 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 32) = 1;
		*(_DWORD*)(a1 + 8) = v6;
		result = 1i64;
		break;
	case 52:
		v7 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 32) = 1;
		*(_DWORD*)(a1 + 12) = v7;
		result = 1i64;
		break;
	case 53:
		v8 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 32) = 1;
		*(_DWORD*)(a1 + 16) = v8;
		result = 1i64;
		break;
	case 54:
		v9 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 32) = 1;
		*(_DWORD*)(a1 + 20) = v9;
		result = 1i64;
		break;
	case 55:
		v10 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 32) = 1;
		*(_DWORD*)(a1 + 24) = v10;
		result = 1i64;
		break;
	case 56:
		v11 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 32) = 1;
		*(_DWORD*)(a1 + 28) = v11;
		result = 1i64;
		break;
	case 60:
		v5 = *a3 == 0;
		*(_BYTE*)(a1 + 72) = 1;
		*(_BYTE*)(a1 + 73) = !v5;
		result = 1i64;
		break;
	case 61:
		v16 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 72) = 1;
		*(_DWORD*)(a1 + 56) = v16;
		result = 1i64;
		break;
	case 62:
		v17 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 72) = 1;
		*(_DWORD*)(a1 + 60) = v17;
		result = 1i64;
		break;
	case 63:
		v18 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 72) = 1;
		*(_DWORD*)(a1 + 64) = v18;
		result = 1i64;
		break;
	case 64:
		v19 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 72) = 1;
		*(_DWORD*)(a1 + 68) = v19;
		result = 1i64;
		break;
	case 70:
		v5 = *a3 == 0;
		*(_BYTE*)(a1 + 100) = 1;
		*(_BYTE*)(a1 + 101) = !v5;
		result = 1i64;
		break;
	case 71:
		v20 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 100) = 1;
		*(_DWORD*)(a1 + 76) = v20;
		result = 1i64;
		break;
	case 72:
		v21 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 100) = 1;
		*(_DWORD*)(a1 + 80) = v21;
		result = 1i64;
		break;
	case 73:
		v22 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 100) = 1;
		*(_DWORD*)(a1 + 84) = v22;
		result = 1i64;
		break;
	case 74:
		v23 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 100) = 1;
		*(_DWORD*)(a1 + 88) = v23;
		result = 1i64;
		break;
	case 75:
		v24 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 100) = 1;
		*(_DWORD*)(a1 + 92) = v24;
		result = 1i64;
		break;
	case 76:
		v25 = *(_DWORD*)a3;
		*(_BYTE*)(a1 + 100) = 1;
		*(_DWORD*)(a1 + 96) = v25;
		result = 1i64;
		break;
	default:
		result = 31i64;
		break;
	}
	return result;
}

