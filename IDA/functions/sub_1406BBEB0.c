#include "../winhttp.h"

//----- (00000001406BBEB0) ----------------------------------------------------
__int64 __fastcall sub_1406BBEB0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // ebx
	__int64 v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	BOOL v9; // edx
	_DWORD* v10; // rcx
	_DWORD* v11; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	v4 = 0i64;
	if (v2)
		v4 = *(_QWORD*)(v2 + 8);
	v5 = sub_140056AB0(a1, 2u);
	if (v5)
		v6 = *(_QWORD*)(v5 + 8);
	else
		v6 = 0i64;
	if (v4 && v6)
	{
		v7 = *(_QWORD*)(v4 + 8);
		v9 = v7 && (v8 = *(_QWORD*)(v6 + 8)) != 0 && **(_DWORD**)(v7 + 8) == **(_DWORD**)(v8 + 8);
		v10 = (_DWORD*)a1[2];
		LOBYTE(v3) = v9;
		v10[2] = 1;
		*v10 = v3;
	}
	else
	{
		v11 = (_DWORD*)a1[2];
		*v11 = 0;
		v11[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}

