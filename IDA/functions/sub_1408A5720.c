//----- (00000001408A5720) ----------------------------------------------------
__int64 __fastcall sub_1408A5720(__int64 a1, __int16 a2, float* a3)
{
	__int64 result; // rax
	float v5; // eax
	float v6; // eax
	float v7; // eax
	float v8; // xmm0_4
	float v9; // eax
	int v10; // eax
	float v11; // xmm0_4
	float v12; // xmm0_4
	double v13; // xmm0_8
	float v14; // eax
	bool v15; // zf
	float v16; // eax

	if (!a3)
		return 31i64;
	switch (a2)
	{
	case 0:
		v16 = *a3;
		*(_BYTE*)(a1 + 71) = 1;
		*(float*)(a1 + 64) = v16;
		goto LABEL_21;
	case 1:
		v14 = *a3;
		*(_BYTE*)(a1 + 60) = 1;
		*(float*)(a1 + 56) = v14;
		result = 1i64;
		break;
	case 2:
		v15 = *(_BYTE*)a3 == 0;
		*(_BYTE*)(a1 + 71) = 1;
		*(_BYTE*)(a1 + 70) = !v15;
		result = 1i64;
		break;
	case 5:
		v5 = *a3;
		*(_BYTE*)(a1 + 60) = 1;
		*(float*)(a1 + 8) = v5;
		result = 1i64;
		break;
	case 6:
		v6 = *a3;
		*(_BYTE*)(a1 + 60) = 1;
		*(float*)(a1 + 12) = v6;
		result = 1i64;
		break;
	case 7:
		v7 = *a3;
		*(_BYTE*)(a1 + 60) = 1;
		*(float*)(a1 + 16) = v7;
		result = 1i64;
		break;
	case 8:
		v10 = (int)*a3;
		*(_BYTE*)(a1 + 60) = 1;
		*(_DWORD*)(a1 + 24) = v10;
		result = 1i64;
		break;
	case 9:
		v9 = *a3;
		*(_BYTE*)(a1 + 60) = 1;
		*(float*)(a1 + 28) = v9;
		result = 1i64;
		break;
	case 10:
		v8 = *a3;
		result = 1i64;
		*(_BYTE*)(a1 + 60) = 1;
		*(float*)(a1 + 20) = v8 * 0.0099999998;
		break;
	case 14:
		v15 = *(_BYTE*)a3 == 0;
		*(_BYTE*)(a1 + 71) = 1;
		*(_BYTE*)(a1 + 68) = !v15;
		result = 1i64;
		break;
	case 16:
		v13 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 60) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 52) = LODWORD(v13);
		break;
	case 17:
		v15 = *(_BYTE*)a3 == 0;
		*(_BYTE*)(a1 + 71) = 1;
		*(_BYTE*)(a1 + 69) = !v15;
		result = 1i64;
		break;
	case 18:
		v11 = *a3;
		result = 1i64;
		*(_BYTE*)(a1 + 60) = 1;
		*(float*)(a1 + 32) = v11 * 0.0099999998;
		break;
	case 19:
		v12 = *a3;
		result = 1i64;
		*(_BYTE*)(a1 + 60) = 1;
		*(float*)(a1 + 36) = v12 * 0.0099999998;
		break;
	case 20:
		*(float*)(a1 + 40) = *a3;
		result = 1i64;
		break;
	case 21:
		*(_DWORD*)(a1 + 48) = (int)*a3;
		result = 1i64;
		break;
	case 22:
		*(float*)(a1 + 44) = *a3;
		result = 1i64;
		break;
	default:
	LABEL_21:
		result = 1i64;
		break;
	}
	return result;
}

