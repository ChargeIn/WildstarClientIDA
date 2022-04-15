#include "../winhttp.h"

//----- (00000001406F09A0) ----------------------------------------------------
__int64 __fastcall sub_1406F09A0(_DWORD* a1)
{
	_QWORD* v1; // rbx
	int v2; // edx
	_DWORD* v3; // rax
	unsigned int v4; // eax
	__int64 v5; // r10
	__m128i v6; // xmm0
	__int64 result; // rax

	v1 = a1;
	if (qword_140C65970 && qword_140C65968)
	{
		v2 = *(_DWORD*)(qword_140C65970 + 8);
		v3 = (_DWORD*)*((_QWORD*)a1 + 3);
		if ((unsigned __int64)v3 < *((_QWORD*)a1 + 2))
		{
			a1 = dword_140A12138;
			if (v3 != dword_140A12138 && (int)v3[2] > 0)
				v2 = sub_140056D60(v1, 1u);
		}
		v4 = sub_140491E30((__int64)a1, v2);
		*(_DWORD*)(v5 + 8) = 3;
		v6 = _mm_cvtsi32_si128(v4);
		result = 1i64;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
		v1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(*((_QWORD*)a1 + 2) + 8i64) = 0;
		*((_QWORD*)a1 + 2) += 16i64;
		return 1i64;
	}
	return result;
}
// 1406F09F1: variable 'a1' is possibly undefined
// 1406F09F6: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

