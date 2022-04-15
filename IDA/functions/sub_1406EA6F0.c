#include "../winhttp.h"

//----- (00000001406EA6F0) ----------------------------------------------------
__int64 __fastcall sub_1406EA6F0(_QWORD* a1)
{
	__int64 v1; // rax
	int v2; // ecx

	v1 = sub_1406E8880(a1, 1u);
	v2 = dword_140C53AC0;
	if (*(_DWORD*)qword_140C63750 < dword_140C53AC0)
		v2 = *(_DWORD*)qword_140C63750;
	sub_1406E47A0(v1, dword_140C53AD0[v2]);
	return 0i64;
}
// 140C53AC0: using guessed type int dword_140C53AC0;
// 140C53AD0: using guessed type float dword_140C53AD0[16];
// 140C63750: using guessed type __int64 qword_140C63750;

