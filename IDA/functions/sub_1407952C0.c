#include "../winhttp.h"

//----- (00000001407952C0) ----------------------------------------------------
__int64 __fastcall sub_1407952C0(__int64 a1)
{
	__m128i v2; // xmm0
	__int64 v3; // rax

	v2 = _mm_cvtsi32_si128(sub_140901864());
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = _mm_cvtepi32_pd(v2).m128d_f64[0] * 0.001;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

