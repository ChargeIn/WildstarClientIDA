#include "../winhttp.h"

//----- (000000014094A7D0) ----------------------------------------------------
__int64 sub_14094A7D0()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140C77820;
	v1 = 5i64;
	qword_140C53EF0 = 0i64;
	dword_140C53EF8 = 0;
	qword_140C53F00 = 0i64;
	xmmword_140C53EE0 = xmmword_140C77820;
	v2 = (__int128*)&unk_140C53E70;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C53EE0;
	}
	return sub_1407DD89C(sub_1409564F0);
}
// 140C53EE0: using guessed type __int128 xmmword_140C53EE0;
// 140C53EF0: using guessed type __int64 qword_140C53EF0;
// 140C53EF8: using guessed type int dword_140C53EF8;
// 140C53F00: using guessed type __int64 qword_140C53F00;
// 140C77820: using guessed type __int128 xmmword_140C77820;

