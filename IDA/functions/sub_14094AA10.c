#include "../winhttp.h"

//----- (000000014094AA10) ----------------------------------------------------
__int64 sub_14094AA10()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7B180;
	v1 = 5i64;
	qword_140C54370 = 0i64;
	dword_140C54378 = 0;
	qword_140C54380 = 0i64;
	xmmword_140C54360 = xmmword_140B7B180;
	v2 = xmmword_140C542F0;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C54360;
	}
	return sub_1407DD89C(sub_140956670);
}
// 140B7B180: using guessed type __int128 xmmword_140B7B180;
// 140C542F0: using guessed type _OWORD xmmword_140C542F0[7];
// 140C54360: using guessed type __int128 xmmword_140C54360;
// 140C54370: using guessed type __int64 qword_140C54370;
// 140C54378: using guessed type int dword_140C54378;
// 140C54380: using guessed type __int64 qword_140C54380;

