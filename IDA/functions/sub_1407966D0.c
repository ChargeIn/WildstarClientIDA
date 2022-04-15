#include "../winhttp.h"

//----- (00000001407966D0) ----------------------------------------------------
__int64 __fastcall sub_1407966D0(_QWORD* a1)
{
	const __m128i* v2; // rsi
	const char* v3; // rdi

	v2 = (const __m128i*)sub_140056BB0(a1, 1u, 0i64);
	v3 = sub_140796230((__int64)a1, v2, (unsigned __int64*)aCpath);
	if (v3)
	{
		sub_140796640(a1, (__int64)v2);
		if ((unsigned int)sub_140795FD0(a1, v3))
			sub_1407964F0(a1, v3);
	}
	return 1i64;
}

