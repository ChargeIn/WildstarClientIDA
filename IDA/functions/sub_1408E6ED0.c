//----- (00000001408E6ED0) ----------------------------------------------------
__int64 __fastcall sub_1408E6ED0(_DWORD* a1, __int16 a2, _DWORD* a3)
{
	__int64 result; // rax
	double v5; // xmm0_8
	double v6; // xmm0_8
	double v7; // xmm0_8
	double v8; // xmm0_8
	double v9; // xmm0_8
	double v10; // xmm0_8
	double v11; // xmm0_8
	double v12; // xmm0_8

	if (!a3)
		return 31i64;
	switch (a2)
	{
	case 0:
		a1[2] = *a3;
		result = 1i64;
		break;
	case 1:
		a1[3] = *a3;
		result = 1i64;
		break;
	case 2:
		a1[4] = *a3;
		result = 1i64;
		break;
	case 10:
		v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		a1[5] = LODWORD(v5);
		break;
	case 11:
		v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		a1[6] = LODWORD(v6);
		break;
	case 20:
		v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		a1[7] = LODWORD(v7);
		break;
	case 21:
		v8 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		a1[8] = LODWORD(v8);
		break;
	case 22:
		v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		a1[9] = LODWORD(v9);
		break;
	case 23:
		v10 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		a1[10] = LODWORD(v10);
		break;
	case 30:
		v11 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		a1[11] = LODWORD(v11);
		break;
	case 31:
		v12 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		a1[12] = LODWORD(v12);
		break;
	case 32:
		a1[13] = *a3;
		goto LABEL_16;
	default:
	LABEL_16:
		result = 1i64;
		break;
	}
	return result;
}

