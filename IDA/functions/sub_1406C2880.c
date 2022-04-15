#include "../winhttp.h"

//----- (00000001406C2880) ----------------------------------------------------
__int64 __fastcall sub_1406C2880(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	unsigned int v4; // eax

	v2 = sub_1406C01C0(a1);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v4 = 0;
		else
			v4 = sub_140056D60(a1, 2u);
		sub_140774850(v2 + 1024, v4);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

