#include "../winhttp.h"

//----- (00000001406659F0) ----------------------------------------------------
__int64 __fastcall sub_1406659F0(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	int v4; // eax
	_DWORD* v5; // rcx
	_DWORD* v6; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = -1;
	else
		v4 = sub_140056D60(a1, 2u);
	if (!v2 || v4 < 0 || v4 == *(_DWORD*)(*(_QWORD*)v2 + 16i64))
	{
		v6 = (_DWORD*)a1[2];
		*v6 = 1;
		v6[2] = 1;
	}
	else
	{
		v5 = (_DWORD*)a1[2];
		*v5 = 0;
		v5[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

