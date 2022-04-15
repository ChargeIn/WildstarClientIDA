#include "../winhttp.h"

//----- (00000001406A30D0) ----------------------------------------------------
__int64 __fastcall sub_1406A30D0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	int v5; // edx
	__int64 v7; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v5 = *(_DWORD*)(v4 + 8);
		if (v5 && (v7 = sub_1405A8A40(v3, v5)) != 0)
			return sub_140663030(a1, v7);
		else
			return 0i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406A3107: variable 'v3' is possibly undefined

