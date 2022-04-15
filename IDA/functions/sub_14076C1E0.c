#include "../winhttp.h"

//----- (000000014076C1E0) ----------------------------------------------------
__int64 __fastcall sub_14076C1E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	_DWORD* v7; // rax
	int v8; // eax
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rax
	__m128i v12; // xmm0

	if ((dword_140DC4DA0 & 1) == 0)
	{
		dword_140DC4DA0 |= 1u;
		v2 = sub_140200220(0x4BAu);
		if (v2)
			LODWORD(v2) = *(_DWORD*)(v2 + 4);
		dword_140C8B140[0] = v2;
		v3 = sub_140200220(0x4BAu);
		if (v3)
			LODWORD(v3) = *(_DWORD*)(v3 + 4);
		dword_140C8B144 = v3;
		v4 = sub_140200220(0x4BAu);
		if (v4)
			LODWORD(v4) = *(_DWORD*)(v4 + 4);
		dword_140C8B148 = v4;
		v5 = sub_140200220(0x4BAu);
		if (v5)
			LODWORD(v5) = *(_DWORD*)(v5 + 4);
		dword_140C8B14C = v5;
		v6 = sub_140200220(0x4BAu);
		if (v6)
			LODWORD(v6) = *(_DWORD*)(v6 + 8);
		dword_140C8B150 = v6;
	}
	v7 = (_DWORD*)a1[3];
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || (int)v7[2] <= 0)
		v8 = 3;
	else
		v8 = sub_140056D60(a1, 1u);
	v9 = v8;
	if ((unsigned __int64)v8 < 5)
	{
		v11 = a1[2];
		v12 = _mm_cvtsi32_si128(dword_140C8B140[v9]);
		*(_DWORD*)(v11 + 8) = 3;
		*(_QWORD*)v11 = *(_OWORD*)&_mm_cvtepi32_pd(v12);
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C8B140: using guessed type int dword_140C8B140[];
// 140C8B144: using guessed type int dword_140C8B144;
// 140C8B148: using guessed type int dword_140C8B148;
// 140C8B14C: using guessed type int dword_140C8B14C;
// 140C8B150: using guessed type int dword_140C8B150;
// 140DC4DA0: using guessed type int dword_140DC4DA0;

