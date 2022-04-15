#include "../winhttp.h"

//----- (0000000140114F00) ----------------------------------------------------
__int64 __fastcall sub_140114F00(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	_QWORD* v4; // rsi
	int v5; // ebx
	int v6; // eax

	v2 = sub_140114A30(a1);
	v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = (_QWORD*)v2;
	v5 = 31744;
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v6 = 31744;
	else
		v6 = sub_140056D60(a1, 2u);
	if (v6 < 31744)
		v5 = v6;
	sub_14010F000(v4, v5);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

