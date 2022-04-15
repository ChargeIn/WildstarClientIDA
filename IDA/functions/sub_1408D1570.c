#include "../winhttp.h"

//----- (00000001408D1570) ----------------------------------------------------
__int64 __fastcall sub_1408D1570(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	float v4; // xmm8_4
	float v5; // xmm7_4
	float v6; // xmm6_4
	double v7; // xmm0_8
	char v8; // al
	__int64 result; // rax

	v2 = a2 + 4;
	v4 = *(float*)a2;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 8);
	v5 = *(float*)(a2 + 12);
	*(float*)(a1 + 20) = v5;
	v6 = *(float*)(a2 + 16);
	*(float*)(a1 + 24) = v6;
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 28);
	v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 32) * 0.050000001);
	*(_DWORD*)(a1 + 40) = LODWORD(v7);
	*(_BYTE*)(a1 + 48) = *(_BYTE*)(v2 + 32);
	v8 = *(_BYTE*)(v2 + 33);
	*(float*)(a1 + 8) = v4 * 0.0099999998;
	*(float*)(a1 + 20) = v5 * 0.0099999998;
	*(_BYTE*)(a1 + 49) = v8;
	*(_BYTE*)(a1 + 50) = 1;
	*(float*)(a1 + 24) = v6 * 0.0099999998;
	result = 1i64;
	*(_BYTE*)(a1 + 44) = 1;
	return result;
}

