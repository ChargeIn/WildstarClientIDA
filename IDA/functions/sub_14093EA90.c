#include "../winhttp.h"

//----- (000000014093EA90) ----------------------------------------------------
__int64 sub_14093EA90()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__m128* v2; // rax

	v0 = xmmword_140B7A570;
	v1 = 5i64;
	qword_140C45BA0 = 0i64;
	dword_140C45BA8 = 0;
	qword_140C45BB0 = 0i64;
	xmmword_140C45B90 = xmmword_140B7A570;
	v2 = stru_140C45B20;
	while (1)
	{
		*v2++ = (__m128)v0;
		if (!--v1)
			break;
		v0 = xmmword_140C45B90;
	}
	return sub_1407DD89C(sub_1409508F0);
}
// 140B7A570: using guessed type __int128 xmmword_140B7A570;
// 140C45B20: using guessed type __m128 stru_140C45B20[7];
// 140C45B90: using guessed type __int128 xmmword_140C45B90;
// 140C45BA0: using guessed type __int64 qword_140C45BA0;
// 140C45BA8: using guessed type int dword_140C45BA8;
// 140C45BB0: using guessed type __int64 qword_140C45BB0;

