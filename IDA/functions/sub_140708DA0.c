#include "../winhttp.h"

//----- (0000000140708DA0) ----------------------------------------------------
__int64 __fastcall sub_140708DA0(__int64 a1)
{
	__int64 v1; // rdx
	__m128i v2; // xmm0
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	v2 = _mm_cvtsi32_si128(*(_DWORD*)(qword_140C65898 + 25640));
	*(_DWORD*)(v1 + 8) = 3;
	result = 1i64;
	*(_QWORD*)v1 = *(_OWORD*)&_mm_cvtepi32_pd(v2);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

