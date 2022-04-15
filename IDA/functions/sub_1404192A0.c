#include "../winhttp.h"

//----- (00000001404192A0) ----------------------------------------------------
__int64 __fastcall sub_1404192A0(_QWORD* a1)
{
	int* v2; // rax
	__m128i v3; // xmm0
	__int64 v4; // rdx
	__int64 result; // rax
	int* v6; // rax
	__m128i v7; // xmm0
	__int64 v8; // rcx
	__int64 v9; // rax

	v2 = sub_140417C90(a1, 1u);
	if (v2)
	{
		v3 = _mm_cvtsi32_si128(*v2);
		v4 = a1[2];
		result = 1i64;
		*(_DWORD*)(v4 + 8) = 3;
		*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v3);
		a1[2] += 16i64;
	}
	else
	{
		v6 = sub_140417BF0(a1, 1u);
		if (v6)
		{
			v7 = _mm_cvtsi32_si128(v6[86]);
			v8 = a1[2];
			result = 1i64;
			*(_DWORD*)(v8 + 8) = 3;
			*(_QWORD*)v8 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
			a1[2] += 16i64;
		}
		else
		{
			v9 = a1[2];
			*(_QWORD*)v9 = 0x3FF0000000000000i64;
			*(_DWORD*)(v9 + 8) = 3;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	return result;
}

