#include "../winhttp.h"

//----- (00000001408F1B40) ----------------------------------------------------
__int64 __fastcall sub_1408F1B40(__int64 a1, float* a2)
{
	float* v3; // rbx
	double v4; // xmm0_8
	double v5; // xmm0_8
	float* v7; // [rsp+30h] [rbp+8h] BYREF

	v3 = a2 + 1;
	v4 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a2 * 0.050000001);
	*(_DWORD*)(a1 + 16) = LODWORD(v4);
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *v3 * 0.050000001);
	v3 = (float*)((char*)v3 + 31);
	v7 = v3;
	*(_DWORD*)(a1 + 20) = LODWORD(v5);
	*(float*)(a1 + 24) = *(float*)((char*)v3 - 27);
	*(float*)(a1 + 28) = *(float*)((char*)v3 - 23);
	*(float*)(a1 + 32) = *(float*)((char*)v3 - 19);
	*(float*)(a1 + 36) = *(float*)((char*)v3 - 15);
	*(float*)(a1 + 40) = *(float*)((char*)v3 - 11);
	*(float*)(a1 + 44) = *(float*)((char*)v3 - 7);
	*(_BYTE*)(a1 + 48) = *((_BYTE*)v3 - 3);
	*(_BYTE*)(a1 + 49) = *((_BYTE*)v3 - 2);
	*(_BYTE*)(a1 + 50) = *((_BYTE*)v3 - 1);
	return sub_1408F2080(a1, (__int64*)&v7);
}

