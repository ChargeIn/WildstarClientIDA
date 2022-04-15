#include "../winhttp.h"

//----- (00000001405EB4E0) ----------------------------------------------------
__int64 __fastcall sub_1405EB4E0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	int v6; // r8d
	int v7; // r10d
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // r9
	__int64* v10; // rdx
	__int64 v11; // rax
	bool v12; // zf
	_DWORD* v13; // rcx
	__int64 result; // rax
	_DWORD* v15; // rax

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0
		&& (v6 = 0, (v7 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 4i64)) != 0)
		&& (v8 = 0i64, (v9 = *(_QWORD*)(qword_140C65898 + 2712)) != 0))
	{
		v10 = *(__int64**)(qword_140C65898 + 2704);
		while (1)
		{
			v11 = *v10;
			if (*v10)
			{
				if (*(_DWORD*)(v11 + 64) == v7)
					break;
			}
			++v8;
			++v10;
			if (v8 >= v9)
				goto LABEL_15;
		}
		v12 = *(_DWORD*)(v11 + 72) == 0;
		v13 = (_DWORD*)a1[2];
		result = 1i64;
		LOBYTE(v6) = !v12;
		v13[2] = 1;
		*v13 = v6;
		a1[2] += 16i64;
	}
	else
	{
	LABEL_15:
		v15 = (_DWORD*)a1[2];
		v15[2] = 1;
		*v15 = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

