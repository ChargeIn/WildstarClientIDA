#include "../winhttp.h"

//----- (00000001406A3550) ----------------------------------------------------
__int64 __fastcall sub_1406A3550(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	int v4; // eax
	BOOL* v5; // rcx
	BOOL v6; // edx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v4 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, *(_DWORD*)(v3 + 8));
		v5 = (BOOL*)a1[2];
		v5[2] = 1;
		v6 = v4 == 1;
		result = 1i64;
		*v5 = v6;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

