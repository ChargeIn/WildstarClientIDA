#include "../winhttp.h"

//----- (00000001406EE560) ----------------------------------------------------
__int64 __fastcall sub_1406EE560(_QWORD* a1)
{
	__int64 v1; // rax
	int v3; // edx
	_DWORD* v4; // rcx
	__int64* v5; // rax
	__int64 v7; // rax

	v1 = qword_140C65898;
	if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120) && qword_140C65970)
	{
		v3 = *(_DWORD*)(qword_140C65970 + 8);
		v4 = (_DWORD*)a1[3];
		if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && (int)v4[2] > 0)
		{
			v3 = sub_140056D60(a1, 1u);
			v1 = qword_140C65898;
		}
		v5 = sub_140491A20((__int64)v4, v3, *(_DWORD*)(v1 + 29932), 0);
		if (v5)
		{
			v7 = sub_140491BD0(qword_140C65968, *(_DWORD*)*v5);
			sub_140432BA0(a1, v7);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406EE5D3: variable 'v4' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

