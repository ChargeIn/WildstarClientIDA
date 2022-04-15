#include "../winhttp.h"

//----- (00000001408A13A0) ----------------------------------------------------
__int64 __fastcall sub_1408A13A0(__int64 a1, __int16 a2, float* a3)
{
	float v4; // ecx
	__int64 result; // rax
	float v6; // xmm0_4
	double v7; // xmm0_8
	char v8; // al

	switch (a2)
	{
	case 0:
		v4 = *a3;
		result = 1i64;
		*(_BYTE*)(a1 + 29) = 1;
		*(float*)(a1 + 24) = v4;
		break;
	case 1:
		v6 = *a3;
		result = 1i64;
		*(_BYTE*)(a1 + 21) = 1;
		*(float*)(a1 + 8) = v6 * 0.0099999998;
		break;
	case 2:
		result = 1i64;
		*(float*)(a1 + 12) = *a3 * 0.0099999998;
		break;
	case 3:
		v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		result = 1i64;
		*(_DWORD*)(a1 + 16) = LODWORD(v7);
		break;
	case 4:
		if (*a3 == 0.0)
		{
			*(_BYTE*)(a1 + 21) = 1;
			*(_BYTE*)(a1 + 20) = 0;
			result = 1i64;
		}
		else
		{
			result = 1i64;
			*(_BYTE*)(a1 + 20) = 1;
			*(_BYTE*)(a1 + 21) = 1;
		}
		break;
	case 5:
		v8 = *(_BYTE*)a3;
		*(_BYTE*)(a1 + 29) = 1;
		*(_BYTE*)(a1 + 28) = v8;
		result = 1i64;
		break;
	default:
		result = 31i64;
		break;
	}
	return result;
}

