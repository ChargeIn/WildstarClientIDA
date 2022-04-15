#include "../winhttp.h"

//----- (000000014093EAF0) ----------------------------------------------------
__int64 sub_14093EAF0()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__m128* v2; // rax

	v0 = xmmword_140B7A560;
	v1 = 5i64;
	qword_140C45C60 = 0i64;
	dword_140C45C68 = 0;
	qword_140C45C70 = 0i64;
	xmmword_140C45C50 = xmmword_140B7A560;
	v2 = stru_140C45BE0;
	while (1)
	{
		*v2++ = (__m128)v0;
		if (!--v1)
			break;
		v0 = xmmword_140C45C50;
	}
	return sub_1407DD89C(sub_140950930);
}
// 140B7A560: using guessed type __int128 xmmword_140B7A560;
// 140C45BE0: using guessed type __m128 stru_140C45BE0[7];
// 140C45C50: using guessed type __int128 xmmword_140C45C50;
// 140C45C60: using guessed type __int64 qword_140C45C60;
// 140C45C68: using guessed type int dword_140C45C68;
// 140C45C70: using guessed type __int64 qword_140C45C70;

