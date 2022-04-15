#include "../winhttp.h"

//----- (000000014078C6B0) ----------------------------------------------------
__int64 __fastcall sub_14078C6B0(_QWORD* a1)
{
	_DWORD* v1; // rax

	v1 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || *(_DWORD*)(a1[3] + 40i64) == -1)
		sub_140056570(a1, 3u, aValueExpected);
	return sub_14078C590(a1, 0);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

