#include "../winhttp.h"

//----- (000000014078D9E0) ----------------------------------------------------
__int64 __fastcall sub_14078D9E0(_QWORD* a1)
{
	int v2; // ebx
	unsigned int v3; // eax
	int v4; // ebx
	int v5; // ebx
	unsigned int v6; // eax
	__int64 v7; // rcx
	__m128i v8; // xmm0
	__int64 result; // rax

	v2 = sub_140056D60(a1, 2u);
	v3 = sub_140056D60(a1, 1u);
	v4 = -v2;
	if (v4 >= 0)
	{
		if (v4 < 32)
		{
			v6 = v3 << v4;
			goto LABEL_7;
		}
		goto LABEL_5;
	}
	v5 = -v4;
	if (v5 >= 32)
	{
	LABEL_5:
		v6 = 0;
		goto LABEL_7;
	}
	v6 = v3 >> v5;
LABEL_7:
	v7 = a1[2];
	v8 = _mm_cvtsi32_si128(v6);
	*(_DWORD*)(v7 + 8) = 3;
	result = 1i64;
	*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
	a1[2] += 16i64;
	return result;
}

