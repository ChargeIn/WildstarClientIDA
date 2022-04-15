#include "../winhttp.h"

//----- (000000014089CE90) ----------------------------------------------------
__int64 __fastcall sub_14089CE90(__int64 a1)
{
	bool v1; // zf
	double v3; // xmm0_8
	int v4; // eax
	float v5; // xmm2_4
	__int64 v6; // rbx
	__int64 v7; // rdi

	v1 = *(_DWORD*)(a1 + 180) == 1;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_WORD*)(a1 + 100) = 0;
	*(_DWORD*)(a1 + 120) = 0;
	if (v1 || *(_WORD*)(a1 + 12) == 1)
		*(_DWORD*)(a1 + 124) = 0;
	else
		*(_DWORD*)(a1 + 124) = 1065353216;
	v3 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(*(_QWORD*)(a1 + 320) + 8i64) * 0.050000001);
	v4 = *(_DWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 348) = LODWORD(v3);
	*(_DWORD*)(a1 + 344) = LODWORD(v3);
	v5 = 1.0 / (float)((float)v4 * 0.1);
	*(float*)(a1 + 336) = v5;
	*(_DWORD*)(a1 + 356) = (int)(float)(0.0 / v5);
	*(float*)(a1 + 340) = -v5;
	v6 = a1 + 212;
	v7 = 3i64;
	do
	{
		sub_14089D3E0(v6);
		v6 += 36i64;
		--v7;
	} while (v7);
	return 1i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

