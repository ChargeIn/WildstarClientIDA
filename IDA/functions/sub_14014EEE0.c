#include "../winhttp.h"

//----- (000000014014EEE0) ----------------------------------------------------
__int64 __fastcall sub_14014EEE0(__int64 a1)
{
	__int64 result; // rax
	unsigned int* v3; // rcx
	__m128i v4; // xmm0
	__int64 v5; // rax
	__m128i v6; // xmm0
	__int64 v7; // rax
	__int64 v8; // rax
	__m128i v9; // xmm0
	__int64 v10; // rax
	__m128i v11; // xmm0

	result = sub_14014EBC0(a1, 1);
	v3 = (unsigned int*)result;
	if (result)
	{
		v4 = _mm_cvtsi32_si128(*(_DWORD*)(result + 64));
		v5 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
		*(_QWORD*)(a1 + 16) += 16i64;
		v6 = _mm_cvtsi32_si128(v3[17]);
		v7 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v7 + 8) = 3;
		*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
		*(_QWORD*)(a1 + 16) += 16i64;
		v8 = *(_QWORD*)(a1 + 16);
		v9 = _mm_cvtsi32_si128(v3[18]);
		*(_DWORD*)(v8 + 8) = 3;
		*(_QWORD*)v8 = *(_OWORD*)&_mm_cvtepi32_pd(v9);
		*(_QWORD*)(a1 + 16) += 16i64;
		v10 = *(_QWORD*)(a1 + 16);
		v11 = _mm_cvtsi32_si128(v3[19]);
		*(_DWORD*)(v10 + 8) = 3;
		*(_QWORD*)v10 = *(_OWORD*)&_mm_cvtepi32_pd(v11);
		*(_QWORD*)(a1 + 16) += 16i64;
		return 4i64;
	}
	return result;
}

