#include "../winhttp.h"

//----- (0000000140941510) ----------------------------------------------------
__int64 sub_140941510()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7B140;
	v1 = 5i64;
	qword_140C47090 = 0i64;
	dword_140C47098 = 0;
	qword_140C470A0 = 0i64;
	xmmword_140C47080 = xmmword_140B7B140;
	v2 = (__int128*)&unk_140C47010;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C47080;
	}
	return sub_1407DD89C(sub_140951590);
}
// 140B7B140: using guessed type __int128 xmmword_140B7B140;
// 140C47080: using guessed type __int128 xmmword_140C47080;
// 140C47090: using guessed type __int64 qword_140C47090;
// 140C47098: using guessed type int dword_140C47098;
// 140C470A0: using guessed type __int64 qword_140C470A0;

