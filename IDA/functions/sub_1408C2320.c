#include "../winhttp.h"

//----- (00000001408C2320) ----------------------------------------------------
__int64 __fastcall sub_1408C2320(__int64 a1, __int16 a2, float* a3)
{
	float v4; // edx
	__int64 result; // rax
	float v6; // eax
	float v7; // eax
	float v8; // eax
	double v9; // xmm0_8
	char v10; // al
	char v11; // al

	switch (a2)
	{
	case 0:
		v4 = *a3;
		result = 1i64;
		*(_BYTE*)(a1 + 24) = 1;
		*(float*)(a1 + 8) = v4;
		break;
	case 1:
		v6 = *a3;
		*(_BYTE*)(a1 + 24) = 1;
		*(float*)(a1 + 12) = v6;
		result = 1i64;
		break;
	case 2:
		v7 = *a3;
		*(_BYTE*)(a1 + 34) = 1;
		*(float*)(a1 + 28) = v7;
		result = 1i64;
		break;
	case 3:
		v8 = *a3;
		*(_BYTE*)(a1 + 24) = 1;
		*(float*)(a1 + 16) = v8;
		result = 1i64;
		break;
	case 4:
		v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
		*(_BYTE*)(a1 + 24) = 1;
		result = 1i64;
		*(_DWORD*)(a1 + 20) = LODWORD(v9);
		break;
	case 5:
		v10 = *(_BYTE*)a3;
		*(_BYTE*)(a1 + 34) = 1;
		*(_BYTE*)(a1 + 32) = v10;
		result = 1i64;
		break;
	case 6:
		v11 = *(_BYTE*)a3;
		*(_BYTE*)(a1 + 34) = 1;
		*(_BYTE*)(a1 + 33) = v11;
		result = 1i64;
		break;
	default:
		result = 31i64;
		break;
	}
	return result;
}

