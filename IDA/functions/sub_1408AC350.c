#include "../winhttp.h"

//----- (00000001408AC350) ----------------------------------------------------
__int64 __fastcall sub_1408AC350(__int64 a1, __int16 a2, _DWORD* a3)
{
	__int64 result; // rax
	int v5; // edi
	double v6; // xmm0_8
	double v7; // xmm0_8
	double v8; // xmm0_8
	double v9; // xmm0_8
	double v10; // xmm0_8
	double v11; // xmm0_8

	if (!a3)
		return 31i64;
	v5 = a2;
	switch (a2)
	{
	case 0:
		*(_DWORD*)(a1 + 68) = *a3;
		break;
	case 1:
		*(_BYTE*)(a1 + 84) = *(_BYTE*)a3;
		break;
	case 2:
		*(_BYTE*)(a1 + 85) = *(_BYTE*)a3;
		break;
	case 3:
		v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		*(_DWORD*)(a1 + 72) = LODWORD(v6);
		break;
	case 4:
		v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		*(_DWORD*)(a1 + 76) = LODWORD(v7);
		break;
	case 5:
		*(_DWORD*)(a1 + 80) = *a3;
		break;
	case 6:
		*(_BYTE*)(a1 + 36) = *(_BYTE*)a3;
		break;
	case 7:
		v8 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), *(float*)a3 * 0.00083333335);
		*(_DWORD*)(a1 + 28) = LODWORD(v8);
		break;
	case 8:
		v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		*(_DWORD*)(a1 + 32) = LODWORD(v9);
		break;
	case 9:
		*(_DWORD*)(a1 + 12) = (int)*(float*)a3;
		break;
	case 10:
		*(_DWORD*)(a1 + 16) = *a3;
		break;
	case 11:
		*(_DWORD*)(a1 + 20) = *a3;
		break;
	case 12:
		*(_DWORD*)(a1 + 24) = *a3;
		break;
	case 13:
		*(_BYTE*)(a1 + 64) = *(_BYTE*)a3;
		break;
	case 14:
		v10 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), *(float*)a3 * 0.00083333335);
		*(_DWORD*)(a1 + 56) = LODWORD(v10);
		break;
	case 15:
		v11 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		*(_DWORD*)(a1 + 60) = LODWORD(v11);
		break;
	case 16:
		*(_DWORD*)(a1 + 40) = (int)*(float*)a3;
		break;
	case 17:
		*(_DWORD*)(a1 + 44) = *a3;
		break;
	case 18:
		*(_DWORD*)(a1 + 48) = *a3;
		break;
	case 19:
		*(_DWORD*)(a1 + 52) = *a3;
		break;
	default:
		break;
	}
	result = 1i64;
	*(_BYTE*)((unsigned int)(v5 / 8) + a1 + 8) |= 1 << (v5 % 8);
	return result;
}

