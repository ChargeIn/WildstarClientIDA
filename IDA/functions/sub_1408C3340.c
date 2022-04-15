#include "../winhttp.h"

//----- (00000001408C3340) ----------------------------------------------------
__int64 __fastcall sub_1408C3340(__int64 a1, __int16 a2, _DWORD* a3)
{
	__int64 result; // rax
	int v5; // edi
	double v6; // xmm0_8
	double v7; // xmm0_8
	double v8; // xmm0_8

	if (!a3)
		return 31i64;
	v5 = a2;
	switch (a2)
	{
	case 0:
		*(_DWORD*)(a1 + 32) = *a3;
		break;
	case 1:
		*(_BYTE*)(a1 + 48) = *(_BYTE*)a3;
		break;
	case 2:
		*(_BYTE*)(a1 + 49) = *(_BYTE*)a3;
		break;
	case 3:
		v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		*(_DWORD*)(a1 + 36) = LODWORD(v6);
		break;
	case 4:
		v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		*(_DWORD*)(a1 + 40) = LODWORD(v7);
		break;
	case 5:
		*(_DWORD*)(a1 + 44) = *a3;
		break;
	case 6:
		v8 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), *(float*)a3 * 0.00083333335);
		*(_DWORD*)(a1 + 28) = LODWORD(v8);
		break;
	case 7:
		*(_DWORD*)(a1 + 12) = (int)*(float*)a3;
		break;
	case 8:
		*(_DWORD*)(a1 + 16) = *a3;
		break;
	case 9:
		*(_DWORD*)(a1 + 20) = *a3;
		break;
	case 10:
		*(_DWORD*)(a1 + 24) = *a3;
		break;
	default:
		break;
	}
	result = 1i64;
	*(_BYTE*)((unsigned int)(v5 / 8) + a1 + 8) |= 1 << (v5 % 8);
	return result;
}

