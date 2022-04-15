#include "../winhttp.h"

//----- (0000000140736CB0) ----------------------------------------------------
__int64 __fastcall sub_140736CB0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__m128i v4; // xmm0
	__int64 result; // rax
	__int64 v6; // rax

	v2 = sub_1405B1510(&qword_140C7DFB0);
	if (!v2 || *(_DWORD*)(v2 + 192) == 4)
	{
		v6 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v6 = 0x3FF0000000000000i64;
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v3 = *(_QWORD*)(a1 + 16);
		v4 = _mm_cvtsi32_si128(*(_DWORD*)(qword_140C659F8 + 212));
		*(_DWORD*)(v3 + 8) = 3;
		result = 1i64;
		*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

