#include "../winhttp.h"

//----- (0000000140941230) ----------------------------------------------------
__int64 sub_140941230()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7AEE0;
	v1 = 5i64;
	qword_140C46B50 = 0i64;
	dword_140C46B58 = 0;
	qword_140C46B60 = 0i64;
	xmmword_140C46B40 = xmmword_140B7AEE0;
	v2 = (__int128*)&unk_140C46AD0;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C46B40;
	}
	return sub_1407DD89C(sub_1409513D0);
}
// 140B7AEE0: using guessed type __int128 xmmword_140B7AEE0;
// 140C46B40: using guessed type __int128 xmmword_140C46B40;
// 140C46B50: using guessed type __int64 qword_140C46B50;
// 140C46B58: using guessed type int dword_140C46B58;
// 140C46B60: using guessed type __int64 qword_140C46B60;

