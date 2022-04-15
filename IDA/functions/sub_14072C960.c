#include "../winhttp.h"

//----- (000000014072C960) ----------------------------------------------------
__int64 __fastcall sub_14072C960(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rax
	unsigned int v5; // edx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	int v9; // ebx
	BOOL v10; // eax
	_DWORD* v11; // rcx
	_DWORD* v12; // rax
	__int64 v14; // [rsp+38h] [rbp+10h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (unsigned int*)sub_1401F1860(*(_DWORD*)(v3 + 8))) != 0i64)
	{
		v5 = *v4;
		v6 = *(_QWORD*)(qword_140C65898 + 25360);
		v7 = v6;
		v8 = *(_QWORD*)(v6 + 8);
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < v5)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v7 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v7 == v6 || (v14 = v7, v5 < *(_DWORD*)(v7 + 32)))
			v14 = *(_QWORD*)(qword_140C65898 + 25360);
		v9 = 0;
		v10 = v14 != v6 && sub_1403D6D10(v14 + 40);
		v11 = (_DWORD*)a1[2];
		LOBYTE(v9) = v10;
		v11[2] = 1;
		*v11 = v9;
	}
	else
	{
		v12 = (_DWORD*)a1[2];
		*v12 = 0;
		v12[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

