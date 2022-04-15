#include "../winhttp.h"

//----- (0000000140172160) ----------------------------------------------------
__int64 __fastcall sub_140172160(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx

	v2 = sub_140171EB0(a1);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
	{
		*(_DWORD*)(v2 + 1568) = 0;
		return 0i64;
	}
	else
	{
		*(_DWORD*)(v2 + 1568) = sub_140056D60(a1, 2u);
		return 0i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

