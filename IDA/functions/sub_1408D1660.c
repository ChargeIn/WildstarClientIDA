//----- (00000001408D1660) ----------------------------------------------------
__int64 __fastcall sub_1408D1660(__int64 a1, __int16 a2, float* a3)
{
	__int64 result; // rax
	float v5; // xmm0_4
	float v6; // eax
	int v7; // eax
	float v8; // xmm0_4
	float v9; // xmm0_4
	double v10; // xmm0_8
	bool v11; // zf

	if (!a3)
		return 31i64;
	switch (a2)
	{
	case 1:
		v5 = *a3;
		result = 1i64;
		*(_BYTE*)(a1 + 44) = 1;
		*(float*)(a1 + 8) = v5 * 0.0099999998;
		break;
	case 2:
		v6 = *a3;
		*(_BYTE*)(a1 + 44) = 1;
		*(float*)(a1 + 16) = v6;
		result = 1i64;
		break;
	case 3:
		v7 = (int)*a3;
		*(_BYTE*)(a1 + 44) = 1;
		*(_DWORD*)(a1 + 12) = v7;
		result = 1i64;
		break;
	case 4:
		v8 = *a3;
		result = 1i64;
		*(_BYTE*)(a1 + 44) = 1;
		*(float*)(a1 + 20) = v8 * 0.0099999998;
		break;
	case 5:
		v9 = *a3;
		result = 1i64;
		*(_BYTE*)(a1 + 44) = 1;
		*(float*)(a1 + 24) = v9 * 0.0099999998;
		break;
	case 6:
		*(float*)(a1 + 28) = *a3;
		result = 1i64;
		break;
	case 7:
		*(_DWORD*)(a1 + 36) = (int)*a3;
		result = 1i64;
		break;
	case 8:
		*(float*)(a1 + 32) = *a3;
		result = 1i64;
		break;
	case 9:
		v10 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 44) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 40) = LODWORD(v10);
		break;
	case 10:
		v11 = *(_BYTE*)a3 == 0;
		*(_BYTE*)(a1 + 50) = 1;
		*(_BYTE*)(a1 + 48) = !v11;
		result = 1i64;
		break;
	case 11:
		v11 = *(_BYTE*)a3 == 0;
		*(_BYTE*)(a1 + 50) = 1;
		*(_BYTE*)(a1 + 49) = !v11;
		goto LABEL_15;
	default:
	LABEL_15:
		result = 1i64;
		break;
	}
	return result;
}

