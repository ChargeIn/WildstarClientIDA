#include "../winhttp.h"

//----- (00000001408CCC50) ----------------------------------------------------
__int64 __fastcall sub_1408CCC50(__int64 a1, __int16 a2, float* a3)
{
	int v3; // edi
	double v5; // xmm0_8
	double v6; // xmm0_8
	double v7; // xmm0_8
	double v8; // xmm0_8
	double v9; // xmm0_8
	double v10; // xmm0_8
	__int64 result; // rax

	v3 = a2;
	switch (a2)
	{
	case 0:
		*(_BYTE*)(a1 + 73) = *a3 != 0.0;
		goto LABEL_23;
	case 1:
		*(_BYTE*)(a1 + 72) = *a3 != 0.0;
		goto LABEL_23;
	case 2:
		v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_DWORD*)(a1 + 60) = LODWORD(v5);
		goto LABEL_23;
	case 3:
		v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_DWORD*)(a1 + 64) = LODWORD(v6);
		goto LABEL_23;
	case 4:
		*(float*)(a1 + 68) = *a3;
		goto LABEL_23;
	case 5:
		*(_DWORD*)(a1 + 44) = (int)*a3;
		goto LABEL_23;
	case 6:
		*(float*)(a1 + 48) = *a3;
		goto LABEL_23;
	case 7:
		*(float*)(a1 + 52) = *a3;
		goto LABEL_23;
	case 8:
		*(float*)(a1 + 56) = *a3;
		goto LABEL_23;
	case 9:
		*(float*)(a1 + 36) = *a3;
		goto LABEL_23;
	case 10:
		*(float*)(a1 + 12) = *a3;
		goto LABEL_23;
	case 11:
		v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_DWORD*)(a1 + 16) = LODWORD(v7);
		goto LABEL_23;
	case 12:
		v8 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_DWORD*)(a1 + 20) = LODWORD(v8);
		goto LABEL_23;
	case 13:
		*(float*)(a1 + 40) = *a3;
		goto LABEL_23;
	case 14:
		*(float*)(a1 + 24) = *a3;
		goto LABEL_23;
	case 15:
		v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_DWORD*)(a1 + 28) = LODWORD(v9);
		goto LABEL_23;
	case 16:
		v10 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_DWORD*)(a1 + 32) = LODWORD(v10);
	LABEL_23:
		*(_BYTE*)((unsigned int)(v3 / 8) + a1 + 8) |= 1 << (v3 % 8);
		result = 1i64;
		break;
	default:
		result = 31i64;
		break;
	}
	return result;
}

