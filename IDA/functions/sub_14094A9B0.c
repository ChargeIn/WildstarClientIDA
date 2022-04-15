#include "../winhttp.h"

//----- (000000014094A9B0) ----------------------------------------------------
__int64 sub_14094A9B0()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7AFE0;
	v1 = 5i64;
	qword_140C542B0 = 0i64;
	dword_140C542B8 = 0;
	qword_140C542C0 = 0i64;
	xmmword_140C542A0 = xmmword_140B7AFE0;
	v2 = (__int128*)&unk_140C54230;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C542A0;
	}
	return sub_1407DD89C(sub_140956630);
}
// 140B7AFE0: using guessed type __int128 xmmword_140B7AFE0;
// 140C542A0: using guessed type __int128 xmmword_140C542A0;
// 140C542B0: using guessed type __int64 qword_140C542B0;
// 140C542B8: using guessed type int dword_140C542B8;
// 140C542C0: using guessed type __int64 qword_140C542C0;

