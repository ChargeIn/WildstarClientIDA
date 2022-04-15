#include "../winhttp.h"

//----- (00000001409414B0) ----------------------------------------------------
__int64 sub_1409414B0()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7B240;
	v1 = 5i64;
	qword_140C46FD0 = 0i64;
	dword_140C46FD8 = 0;
	qword_140C46FE0 = 0i64;
	xmmword_140C46FC0 = xmmword_140B7B240;
	v2 = (__int128*)&unk_140C46F50;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C46FC0;
	}
	return sub_1407DD89C(sub_140951550);
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C46FC0: using guessed type __int128 xmmword_140C46FC0;
// 140C46FD0: using guessed type __int64 qword_140C46FD0;
// 140C46FD8: using guessed type int dword_140C46FD8;
// 140C46FE0: using guessed type __int64 qword_140C46FE0;

