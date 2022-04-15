#include "../winhttp.h"

//----- (0000000140760F10) ----------------------------------------------------
__int64 __fastcall sub_140760F10(_QWORD* a1)
{
	__int64 v2; // rcx
	_DWORD* v3; // rax
	unsigned int v4; // edx
	unsigned int v5; // eax
	__int64 v6; // rax
	int v7; // r9d
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rcx
	__int64 result; // rax
	__int64 v14; // [rsp+30h] [rbp+8h]

	v2 = qword_140C658C8;
	v3 = (_DWORD*)a1[3];
	v4 = *(_DWORD*)(qword_140C658C8 + 4);
	if ((unsigned __int64)v3 < a1[2] && v3 != dword_140A12138 && (int)v3[2] > 0)
	{
		v5 = sub_140056D60(a1, 1u);
		v2 = qword_140C658C8;
		v4 = v5;
	}
	if (v4 > *(_DWORD*)(v2 + 4))
		v4 = *(_DWORD*)(v2 + 4);
	v6 = sub_140436D70(v2, v4);
	v7 = 0;
	v8 = *(_QWORD*)(v6 + 8);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(int*)(v10 + 32) < 16)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v11 = *(_DWORD*)(v9 + 32), v11 > 16) || v11 >= 16 && *(_DWORD*)(v9 + 36))
		v14 = v8;
	else
		v14 = v9;
	if (v14 != v8 && *(_DWORD*)(v14 + 48) == 1)
		v7 = *(_DWORD*)(v14 + 52);
	v12 = a1[2];
	result = 1i64;
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = (double)v7;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658C8: using guessed type __int64 qword_140C658C8;

