#include "../winhttp.h"

//----- (00000001406CD6A0) ----------------------------------------------------
__int64 __fastcall sub_1406CD6A0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	__int64 v4; // rdi
	int v5; // ecx
	_QWORD* v6; // rax

	v2 = sub_1406CD790(a1);
	v3 = dword_140A12138;
	*(_QWORD*)(v2 + 1616) = 0i64;
	v4 = v2;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	v5 = v3[2];
	if (v5 == 7 || v5 == 2)
	{
		v6 = (_QWORD*)sub_140056AB0(a1, 2u);
		if (v6)
			*(_QWORD*)(v4 + 1616) = *v6;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

