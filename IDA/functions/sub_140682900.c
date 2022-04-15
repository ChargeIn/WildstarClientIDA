#include "../winhttp.h"

//----- (0000000140682900) ----------------------------------------------------
__int64 __fastcall sub_140682900(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // r10
	__int64 v5; // r10
	__int64 v6; // rax
	unsigned int* v7; // r10
	__int64 v8; // rdx
	__int64 v9; // rax
	unsigned int v10; // r8d
	__int64 v11; // rcx
	__int64 v12; // rdx
	_DWORD* v13; // rcx
	bool v14; // zf
	__int64 result; // rax
	_DWORD* v16; // rax
	__int64 v17; // [rsp+38h] [rbp+10h]

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = *(_QWORD*)(v4 + 8)) != 0
		&& (v6 = sub_140617410(v3, *(_DWORD*)(v5 + 4)), (v8 = v6) != 0)
		&& *(_DWORD*)(*(_QWORD*)(v6 + 152) + 4i64) == 4
		&& *(_DWORD*)v6 == 1)
	{
		v9 = *(_QWORD*)(v6 + 80);
		v10 = *v7;
		v11 = *(_QWORD*)(v9 + 8);
		v12 = *(_QWORD*)(v8 + 80);
		while (v11)
		{
			if (*(_DWORD*)(v11 + 32) < v10)
			{
				v11 = *(_QWORD*)(v11 + 24);
			}
			else
			{
				v12 = v11;
				v11 = *(_QWORD*)(v11 + 16);
			}
		}
		if (v12 == v9 || (v17 = v12, v10 < *(_DWORD*)(v12 + 32)))
			v17 = v9;
		v13 = (_DWORD*)a1[2];
		v14 = v17 == v9;
		v13[2] = 1;
		result = 1i64;
		*v13 = !v14;
		a1[2] += 16i64;
	}
	else
	{
		v16 = (_DWORD*)a1[2];
		v16[2] = 1;
		*v16 = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140682961: variable 'v3' is possibly undefined
// 140682984: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

