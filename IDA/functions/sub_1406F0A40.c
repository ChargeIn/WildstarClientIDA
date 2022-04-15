#include "../winhttp.h"

//----- (00000001406F0A40) ----------------------------------------------------
__int64 __fastcall sub_1406F0A40(_QWORD* a1)
{
	__int64 v2; // rcx
	int v3; // edi
	_DWORD* v4; // rax
	int v5; // eax
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rcx
	__m128i v10; // xmm0
	__int64 result; // rax

	if (qword_140C65970 && qword_140C65968 && (v2 = qword_140C65898) != 0)
	{
		v3 = *(_DWORD*)(qword_140C65970 + 8);
		v4 = (_DWORD*)a1[3];
		if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && (int)v4[2] > 0)
		{
			v5 = sub_140056D60(a1, 1u);
			v2 = qword_140C65898;
			v3 = v5;
		}
		if ((unsigned int)sub_1403D2140(v2, 0xAu))
		{
			v7 = sub_140491E30(v6, v3);
		}
		else
		{
			v8 = sub_140200220(0x45Au);
			if (v8)
				v7 = *(_DWORD*)(v8 + 4);
			else
				v7 = 1;
		}
		v9 = a1[2];
		v10 = _mm_cvtsi32_si128(v7);
		*(_DWORD*)(v9 + 8) = 3;
		result = 1i64;
		*(_QWORD*)v9 = *(_OWORD*)&_mm_cvtepi32_pd(v10);
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1406F0AC1: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

