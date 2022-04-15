#include "../winhttp.h"

//----- (0000000140699DD0) ----------------------------------------------------
__int64 __fastcall sub_140699DD0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	unsigned int v6; // ecx
	__int64 result; // rax
	bool v8; // cf
	bool v9; // zf
	_DWORD* v10; // rcx
	_DWORD* v11; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) != 0)
	{
		v6 = *(_DWORD*)(v5 + 16);
		result = 1i64;
		v6 -= 4;
		v8 = v6 < 2;
		v9 = v6 == 2;
		v10 = (_DWORD*)a1[2];
		v10[2] = 1;
		*v10 = v8 || v9;
		a1[2] += 16i64;
	}
	else
	{
		v11 = (_DWORD*)a1[2];
		*v11 = 0;
		v11[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140699DFC: variable 'v3' is possibly undefined

