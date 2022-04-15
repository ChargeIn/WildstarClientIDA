#include "../winhttp.h"

//----- (00000001406EE080) ----------------------------------------------------
__int64 __fastcall sub_1406EE080(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	int v4; // edx
	unsigned int v5; // edi
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v9; // rax

	if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120) && (v2 = qword_140C65970) != 0)
	{
		v3 = (_DWORD*)a1[3];
		v4 = *(_DWORD*)(qword_140C65970 + 8);
		if ((unsigned __int64)v3 < a1[2] && v3 != dword_140A12138 && (int)v3[2] > 0)
		{
			v4 = sub_140056D60(a1, 1u);
			v2 = qword_140C65970;
		}
		if ((unsigned __int64)v4 >= 4)
			v5 = 0;
		else
			v5 = *(_DWORD*)(v2 + 4i64 * v4 + 16);
		v6 = sub_140491D60(v4, v4, v5);
		v7 = a1[2];
		if (v6)
			*(double*)v7 = (double)(int)(v5 - *(_DWORD*)(*(_QWORD*)v6 + 12i64));
		else
			*(_QWORD*)v7 = 0x3FF0000000000000i64;
		*(_DWORD*)(v7 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v9 = a1[2];
		*(_QWORD*)v9 = 0x3FF0000000000000i64;
		*(_DWORD*)(v9 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

