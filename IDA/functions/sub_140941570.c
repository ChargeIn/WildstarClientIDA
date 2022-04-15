#include "../winhttp.h"

//----- (0000000140941570) ----------------------------------------------------
__int64 sub_140941570()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7B000;
	v1 = 5i64;
	qword_140C47150 = 0i64;
	dword_140C47158 = 0;
	qword_140C47160 = 0i64;
	xmmword_140C47140 = xmmword_140B7B000;
	v2 = (__int128*)&unk_140C470D0;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C47140;
	}
	return sub_1407DD89C(sub_1409515D0);
}
// 140B7B000: using guessed type __int128 xmmword_140B7B000;
// 140C47140: using guessed type __int128 xmmword_140C47140;
// 140C47150: using guessed type __int64 qword_140C47150;
// 140C47158: using guessed type int dword_140C47158;
// 140C47160: using guessed type __int64 qword_140C47160;

