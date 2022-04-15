#include "../winhttp.h"

//----- (0000000140685540) ----------------------------------------------------
__int64 __fastcall sub_140685540(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	int v9; // edx
	__int64 v10; // rcx
	__int64 result; // rax
	__int64 v12; // rax
	__int64 v13; // [rsp+38h] [rbp+10h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(unsigned int**)(v3 + 8)) != 0i64)
	{
		v5 = *v4;
		v6 = *(_QWORD*)(qword_140C65948 + 208);
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
		if (v7 == v6 || (v13 = v7, v5 < *(_DWORD*)(v7 + 32)))
			v13 = *(_QWORD*)(qword_140C65948 + 208);
		if (v13 == v6)
			v9 = 0;
		else
			v9 = *(_DWORD*)(v13 + 36);
		v10 = a1[2];
		result = 1i64;
		*(_DWORD*)(v10 + 8) = 3;
		*(double*)v10 = (double)v9;
		a1[2] += 16i64;
	}
	else
	{
		v12 = a1[2];
		*(_QWORD*)v12 = 0i64;
		*(_DWORD*)(v12 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;

