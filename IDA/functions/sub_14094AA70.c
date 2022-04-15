#include "../winhttp.h"

//----- (000000014094AA70) ----------------------------------------------------
__int64 sub_14094AA70()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7B1A0;
	v1 = 5i64;
	qword_140C54430 = 0i64;
	dword_140C54438 = 0;
	qword_140C54440 = 0i64;
	xmmword_140C54420 = xmmword_140B7B1A0;
	v2 = xmmword_140C543B0;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C54420;
	}
	return sub_1407DD89C(sub_1409566B0);
}
// 140B7B1A0: using guessed type __int128 xmmword_140B7B1A0;
// 140C543B0: using guessed type _OWORD xmmword_140C543B0[7];
// 140C54420: using guessed type __int128 xmmword_140C54420;
// 140C54430: using guessed type __int64 qword_140C54430;
// 140C54438: using guessed type int dword_140C54438;
// 140C54440: using guessed type __int64 qword_140C54440;

