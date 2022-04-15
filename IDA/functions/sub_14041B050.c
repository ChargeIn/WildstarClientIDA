#include "../winhttp.h"

//----- (000000014041B050) ----------------------------------------------------
__int64 __fastcall sub_14041B050(__int64 a1)
{
	float** v2; // rax
	__int64 v3; // rcx
	float* v4; // rdx
	__int64 v5; // r8
	unsigned int v6; // eax
	__int64 v7; // rcx
	__m128i v8; // xmm0
	__int64 result; // rax
	__int64 v10; // rax

	v2 = (float**)sub_140417660(a1, 1);
	if (!v2)
		goto LABEL_8;
	v4 = *v2;
	if (*v2)
		v4 = *(float**)v4;
	if (v4)
	{
		v5 = *((_QWORD*)v4 + 9);
		if (!v5)
			v5 = *((_QWORD*)v4 + 8) + 8i64;
		v6 = sub_1403B5360(v3, *((_QWORD*)v4 + 8), v5, v4[33]);
		v7 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v7 + 8) = 3;
		v8 = _mm_cvtsi32_si128(v6);
		result = 1i64;
		*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
	LABEL_8:
		v10 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v10 = 0i64;
		*(_DWORD*)(v10 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 14041B095: variable 'v3' is possibly undefined

