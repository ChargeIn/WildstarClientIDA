#include "../winhttp.h"

//----- (0000000140698590) ----------------------------------------------------
__int64 __fastcall sub_140698590(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax
	_DWORD* v9; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) != 0)
	{
		v6 = (_DWORD*)a1[2];
		v7 = *(_DWORD*)(v5 + 768) == 0;
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
// 1406985BC: variable 'v3' is possibly undefined

