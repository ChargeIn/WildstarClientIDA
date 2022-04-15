#include "../winhttp.h"

//----- (00000001407641F0) ----------------------------------------------------
__int64 __fastcall sub_1407641F0(_DWORD* a1)
{
	_DWORD* v1; // rax
	_QWORD* v2; // rbx
	int v3; // eax
	unsigned int v4; // eax
	__int64 v5; // rcx
	__m128i v6; // xmm3
	__int64 result; // rax

	v1 = (_DWORD*)*((_QWORD*)a1 + 3);
	v2 = a1;
	if ((unsigned __int64)v1 >= *((_QWORD*)a1 + 2) || (a1 = dword_140A12138, v1 == dword_140A12138) || (int)v1[2] <= 0)
		v3 = 1;
	else
		v3 = sub_140056D60(v2, 1u);
	v4 = sub_1406304A0((__int64)a1, v3);
	v5 = v2[2];
	*(_DWORD*)(v5 + 8) = 3;
	v6 = _mm_cvtsi32_si128(v4);
	result = 1i64;
	*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
	v2[2] += 16i64;
	return result;
}
// 14076422B: variable 'a1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

