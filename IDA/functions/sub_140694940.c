#include "../winhttp.h"

//----- (0000000140694940) ----------------------------------------------------
__int64 __fastcall sub_140694940(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // eax
	int v6; // edx
	int v7; // r8d
	int v8; // eax
	_DWORD* v9; // rcx
	bool v10; // zf
	__int64 result; // rax
	_DWORD* v12; // rax

	if (qword_140C65C28
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = sub_140643EA0(qword_140C65C28, ***(_DWORD***)(v3 + 8))) != 0)
	{
		v5 = sub_1406428D0(*(_QWORD*)(v4 + 40));
		v6 = 0;
		if (v5 == 1 || (v7 = v5 - 3, v5 == 3) || (v8 = 0, v7 == 2))
			v8 = 1;
		v9 = (_DWORD*)a1[2];
		v10 = v8 == 0;
		result = 1i64;
		LOBYTE(v6) = !v10;
		v9[2] = 1;
		*v9 = v6;
		a1[2] += 16i64;
	}
	else
	{
		v12 = (_DWORD*)a1[2];
		*v12 = 0;
		v12[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65C28: using guessed type __int64 qword_140C65C28;

