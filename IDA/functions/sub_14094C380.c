#include "../winhttp.h"

//----- (000000014094C380) ----------------------------------------------------
__int64 sub_14094C380()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__m128* v2; // rax

	v0 = xmmword_140B7B240;
	v1 = 5i64;
	qword_140C55CA0 = 0i64;
	dword_140C55CA8 = 0;
	qword_140C55CB0 = 0i64;
	xmmword_140C55C90 = xmmword_140B7B240;
	v2 = stru_140C55C20;
	while (1)
	{
		*v2++ = (__m128)v0;
		if (!--v1)
			break;
		v0 = xmmword_140C55C90;
	}
	return sub_1407DD89C(sub_140957590);
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C55C20: using guessed type __m128 stru_140C55C20[7];
// 140C55C90: using guessed type __int128 xmmword_140C55C90;
// 140C55CA0: using guessed type __int64 qword_140C55CA0;
// 140C55CA8: using guessed type int dword_140C55CA8;
// 140C55CB0: using guessed type __int64 qword_140C55CB0;

