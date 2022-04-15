#include "../winhttp.h"

//----- (000000014073D7A0) ----------------------------------------------------
__int64 __fastcall sub_14073D7A0(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rax
	_DWORD* v4; // rcx
	__int64 result; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 i; // r8
	__int64 v10; // rax
	_DWORD* v11; // rax

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = (_DWORD*)sub_140056AB0(a1, 1u)) != 0i64)
	{
		v6 = qword_140C659E0;
		v7 = *(_QWORD*)(qword_140C659E0 + 8);
		v8 = *(_QWORD*)(qword_140C659E0 + 16);
		if (v7 != v8)
		{
			while (*(_DWORD*)v7 != *v3 || *(_DWORD*)(v7 + 4) != v3[1])
			{
				v7 += 8i64;
				if (v7 == v8)
					goto LABEL_15;
			}
			if (v7 + 8 != v8)
			{
				for (i = (v8 - (v7 + 8)) >> 3; i > 0; *(_QWORD*)(v7 - 8) = v10)
				{
					v10 = *(_QWORD*)(v7 + 8);
					--i;
					v7 += 8i64;
				}
			}
			*(_QWORD*)(v6 + 16) -= 8i64;
		}
	LABEL_15:
		v11 = (_DWORD*)a1[2];
		*v11 = 1;
		v11[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C659E0: using guessed type __int64 qword_140C659E0;

