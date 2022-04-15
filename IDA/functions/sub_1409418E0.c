#include "../winhttp.h"

//----- (00000001409418E0) ----------------------------------------------------
__int64 sub_1409418E0()
{
	__int128 v0; // xmm2
	__m128* v1; // rax
	__int64 v2; // rcx

	v0 = xmmword_140B7AF70;
	qword_140C47A60 = 0i64;
	qword_140C47A70 = 0i64;
	dword_140C47A68 = 1;
	v1 = stru_140C479E0;
	v2 = 5i64;
	xmmword_140C47A40 = xmmword_140B7B240;
	xmmword_140C47A50 = xmmword_140B7AF70;
	xmmword_140C47A30 = 0i64;
	while (1)
	{
		*v1++ = (__m128)v0;
		if (!--v2)
			break;
		v0 = xmmword_140C47A50;
	}
	return sub_1407DD89C(sub_140951BD0);
}
// 140B7AF70: using guessed type __int128 xmmword_140B7AF70;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C479E0: using guessed type __m128 stru_140C479E0[5];
// 140C47A30: using guessed type __int128 xmmword_140C47A30;
// 140C47A40: using guessed type __int128 xmmword_140C47A40;
// 140C47A50: using guessed type __int128 xmmword_140C47A50;
// 140C47A60: using guessed type __int64 qword_140C47A60;
// 140C47A68: using guessed type int dword_140C47A68;
// 140C47A70: using guessed type __int64 qword_140C47A70;

