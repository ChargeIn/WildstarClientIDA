#include "../winhttp.h"

//----- (000000014073F250) ----------------------------------------------------
__int64 __fastcall sub_14073F250(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // esi
	__int64 v4; // rbp
	__int64 v5; // rax
	__int64 v6; // rdx
	_DWORD* v7; // rbx
	int v8; // eax
	_DWORD* v9; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	v4 = 0i64;
	if (v2)
		v4 = *(_QWORD*)(v2 + 8);
	v5 = sub_140056AB0(a1, 2u);
	v6 = 0i64;
	if (v5)
		v6 = *(_QWORD*)(v5 + 8);
	if (v4 && v6)
	{
		v7 = (_DWORD*)a1[2];
		v8 = sub_14073F4C0(v4, v6);
		v7[2] = 1;
		LOBYTE(v3) = v8 != 0;
		*v7 = v3;
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

