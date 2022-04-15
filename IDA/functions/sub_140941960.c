#include "../winhttp.h"

//----- (0000000140941960) ----------------------------------------------------
__int64 sub_140941960()
{
	__int128 v0; // xmm2
	__int128* v1; // rax
	__int64 v2; // rcx

	v0 = xmmword_140B7B0C0;
	qword_140C47B20 = 0i64;
	qword_140C47B30 = 0i64;
	dword_140C47B28 = 1;
	v1 = (__int128*)&unk_140C47AA0;
	v2 = 5i64;
	xmmword_140C47B00 = xmmword_140B7B240;
	xmmword_140C47B10 = xmmword_140B7B0C0;
	xmmword_140C47AF0 = 0i64;
	while (1)
	{
		*v1++ = v0;
		if (!--v2)
			break;
		v0 = xmmword_140C47B10;
	}
	return sub_1407DD89C(sub_140951C10);
}
// 140B7B0C0: using guessed type __int128 xmmword_140B7B0C0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C47AF0: using guessed type __int128 xmmword_140C47AF0;
// 140C47B00: using guessed type __int128 xmmword_140C47B00;
// 140C47B10: using guessed type __int128 xmmword_140C47B10;
// 140C47B20: using guessed type __int64 qword_140C47B20;
// 140C47B28: using guessed type int dword_140C47B28;
// 140C47B30: using guessed type __int64 qword_140C47B30;

