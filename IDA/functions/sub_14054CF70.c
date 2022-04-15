#include "../winhttp.h"

//----- (000000014054CF70) ----------------------------------------------------
__int64 __fastcall sub_14054CF70(__int64 a1)
{
	unsigned int v2; // ebx
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rdi
	int v12; // eax
	__int64 v13; // [rsp+30h] [rbp+8h]

	v2 = 3;
	if ((*(_BYTE*)(a1 + 140) & 1) != 0)
	{
		if (((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4i64) - 1) & 0xFFFFFFFD) == 0)
			return 1i64;
		return v2;
	}
	v4 = *(_DWORD*)(a1 + 116);
	v5 = *(_QWORD*)(qword_140C65898 + 28584);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v4)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v13 = v6, v4 < *(_DWORD*)(v6 + 32)))
		v13 = *(_QWORD*)(qword_140C65898 + 28584);
	if (v13 != v5)
		return 2i64;
	v8 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v8)
	{
		if (*(_DWORD*)(v8 + 8) == v4)
			return 2i64;
	}
	v9 = *(_QWORD*)(qword_140C65898 + 120);
	if (v9)
	{
		if (*(_DWORD*)(v9 + 8) == v4)
			return 2i64;
		if ((unsigned int)sub_14045A950(v9, v4) == 2)
			return 1i64;
		v10 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 116));
		v11 = v10;
		if (v10)
		{
			if (*(_DWORD*)(v10 + 3408) || (v12 = *(_DWORD*)(v10 + 128), v12 == 20) || v12 == 23)
			{
				if (*(_DWORD*)(a1 + 136) != 2 && ((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4i64) - 1) & 0xFFFFFFFD) == 0
					|| sub_1403B48B0(*(_QWORD*)(qword_140C65898 + 120)) && sub_1403B48B0(v11))
				{
					return 0i64;
				}
				return 4;
			}
		}
	}
	return v2;
}
// 140C65898: using guessed type __int64 qword_140C65898;

