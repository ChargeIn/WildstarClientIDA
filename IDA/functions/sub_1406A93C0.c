#include "../winhttp.h"

//----- (00000001406A93C0) ----------------------------------------------------
__int64 __fastcall sub_1406A93C0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	__int64 v3; // rax

	v1 = sub_140056AB0(a1, 1u);
	if (!v1)
		return 0i64;
	v2 = *(_QWORD*)(v1 + 8);
	if (!v2)
		return 0i64;
	v3 = xmmword_140C7DFC0;
	if ((_QWORD)xmmword_140C7DFC0 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
		return 0i64;
	while (*(_DWORD*)(*(_QWORD*)v3 + 188i64) != *(_DWORD*)(v2 + 8))
	{
		v3 += 8i64;
		if (v3 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
			return 0i64;
	}
	return *(_QWORD*)v3;
}
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

