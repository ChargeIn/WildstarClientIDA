#include "../winhttp.h"

//----- (000000014072CA50) ----------------------------------------------------
__int64 __fastcall sub_14072CA50(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	_DWORD* v4; // rax
	int v5; // edx
	__int64 v6; // r8
	_DWORD* v7; // rcx
	_DWORD* v9; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (_DWORD*)sub_1401F1860(*(_DWORD*)(v3 + 8))) != 0i64)
	{
		v5 = 0;
		v6 = *(_QWORD*)(qword_140C65898 + 120);
		v7 = (_DWORD*)a1[2];
		if (v6)
			LOBYTE(v5) = *(_DWORD*)(v6 + 360) == *v4;
		*v7 = v5;
		v7[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 0;
		v9[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

