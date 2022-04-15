#include "../winhttp.h"

//----- (00000001406DAA90) ----------------------------------------------------
__int64 __fastcall sub_1406DAA90(_QWORD* a1)
{
	__int64 result; // rax
	__m128i v3; // xmm0
	__int64 v4; // rax

	result = sub_1406DAEE0(a1);
	if (result)
	{
		v3 = _mm_cvtsi32_si128(*(_DWORD*)(result + 1036));
		v4 = a1[2];
		*(_DWORD*)(v4 + 8) = 3;
		*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v3);
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

