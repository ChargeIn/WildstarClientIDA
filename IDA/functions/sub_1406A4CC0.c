#include "../winhttp.h"

//----- (00000001406A4CC0) ----------------------------------------------------
__int64 __fastcall sub_1406A4CC0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	_DWORD* v4; // rcx
	_DWORD* v5; // r8
	int v6; // edx
	int v7; // eax
	_DWORD* v8; // rcx
	_DWORD* v9; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = sub_140056AB0(a1, 2u);
	if (v2 && v3)
	{
		v4 = *(_DWORD**)(v3 + 8);
		v5 = *(_DWORD**)(v2 + 8);
		v6 = 0;
		if (*v5 != *v4 || (v7 = 1, v5[1] != v4[1]))
			v7 = 0;
		v8 = (_DWORD*)a1[2];
		LOBYTE(v6) = v7 != 0;
		v8[2] = 1;
		*v8 = v6;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 0;
		v9[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}

