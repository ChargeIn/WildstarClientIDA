#include "../winhttp.h"

//----- (0000000140501EB0) ----------------------------------------------------
__int64 __fastcall sub_140501EB0(_QWORD* a1)
{
	__int64 v2; // rax
	int* v4; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v2 + 16), 0i64);
		sub_140415C70(a1, (__int64)v4);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

