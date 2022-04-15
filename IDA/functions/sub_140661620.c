#include "../winhttp.h"

//----- (0000000140661620) ----------------------------------------------------
__int64 __fastcall sub_140661620(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	int v4; // eax
	int v5; // eax
	_DWORD* v6; // rcx
	_DWORD* v7; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = sub_140056D60(a1, 2u);
		v5 = sub_1406020B0(qword_140C65898 + 27664, v4, *(_DWORD*)(v3 + 8));
		v6 = (_DWORD*)a1[2];
		v6[2] = 1;
		*v6 = v5 != 0;
	}
	else
	{
		v7 = (_DWORD*)a1[2];
		*v7 = 0;
		v7[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

