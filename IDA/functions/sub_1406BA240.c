#include "../winhttp.h"

//----- (00000001406BA240) ----------------------------------------------------
__int64 __fastcall sub_1406BA240(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	BOOL v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax
	_DWORD* v9; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = sub_1404D1D50(qword_140C65A38, **(_DWORD**)(v4 + 8));
		v6 = (_DWORD*)a1[2];
		v7 = !v5;
		v6[2] = 1;
		result = 1i64;
		*v6 = !v7;
		a1[2] += 16i64;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 0;
		v9[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65A38: using guessed type __int64 qword_140C65A38;

