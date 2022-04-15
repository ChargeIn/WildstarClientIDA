#include "../winhttp.h"

//----- (00000001406A3280) ----------------------------------------------------
__int64 __fastcall sub_1406A3280(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	int v8; // edx
	__int64 v9; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = sub_1405A8A40(v3, *(_DWORD*)(v4 + 8))) != 0
		&& (v6 = *(_QWORD*)(v5 + 8)) != 0
		&& (v7 = sub_140489580(qword_140C65930, *(_DWORD*)(v6 + 428))) != 0)
	{
		v8 = 5;
		if (*(_DWORD*)(*(_QWORD*)v7 + 20i64) == 1)
		{
			v8 = 0;
		}
		else if (*(_DWORD*)(*(_QWORD*)v7 + 20i64) == 2)
		{
			v8 = 1;
		}
		v9 = a1[2];
		result = 1i64;
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)v8;
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
// 1406A32AB: variable 'v3' is possibly undefined
// 140C65930: using guessed type __int64 qword_140C65930;

