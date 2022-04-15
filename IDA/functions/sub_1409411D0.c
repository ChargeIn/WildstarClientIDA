#include "../winhttp.h"

//----- (00000001409411D0) ----------------------------------------------------
__int64 sub_1409411D0()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7AF00;
	v1 = 5i64;
	qword_140C46A90 = 0i64;
	dword_140C46A98 = 0;
	qword_140C46AA0 = 0i64;
	xmmword_140C46A80 = xmmword_140B7AF00;
	v2 = (__int128*)&unk_140C46A10;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C46A80;
	}
	return sub_1407DD89C(sub_140951390);
}
// 140B7AF00: using guessed type __int128 xmmword_140B7AF00;
// 140C46A80: using guessed type __int128 xmmword_140C46A80;
// 140C46A90: using guessed type __int64 qword_140C46A90;
// 140C46A98: using guessed type int dword_140C46A98;
// 140C46AA0: using guessed type __int64 qword_140C46AA0;

