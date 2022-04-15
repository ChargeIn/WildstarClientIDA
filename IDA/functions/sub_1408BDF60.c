#include "../winhttp.h"

//----- (00000001408BDF60) ----------------------------------------------------
__int64 __fastcall sub_1408BDF60(__int64 a1, __int16 a2, _DWORD* a3)
{
	__int64 result; // rax
	int v5; // eax
	double v6; // xmm0_8
	double v7; // xmm0_8
	int v8; // eax
	bool v9; // zf
	int v10; // eax

	switch (a2)
	{
	case 0:
		*(_DWORD*)(a1 + 8) = *a3;
		result = 1i64;
		break;
	case 1:
		*(_DWORD*)(a1 + 12) = *a3;
		result = 1i64;
		break;
	case 2:
		v5 = *a3;
		*(_BYTE*)(a1 + 104) = 1;
		*(_DWORD*)(a1 + 24) = v5;
		result = 1i64;
		break;
	case 3:
		v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		*(_DWORD*)(a1 + 16) = LODWORD(v6);
		break;
	case 4:
		v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		*(_DWORD*)(a1 + 20) = LODWORD(v7);
		break;
	case 5:
		v8 = *a3;
		*(_BYTE*)(a1 + 104) = 1;
		*(_DWORD*)(a1 + 28) = v8;
		result = 1i64;
		break;
	case 6:
		v9 = *(_BYTE*)a3 == 0;
		*(_BYTE*)(a1 + 104) = 1;
		*(_DWORD*)(a1 + 32) = !v9;
		result = 1i64;
		break;
	case 7:
		v10 = *a3;
		*(_BYTE*)(a1 + 104) = 1;
		*(_DWORD*)(a1 + 36) = v10;
		result = 1i64;
		break;
	default:
		*(_DWORD*)(a1 + 4i64 * a2 + 8) = *a3;
		*(_BYTE*)(a1 + 104) = 1;
		result = 1i64;
		break;
	}
	return result;
}

