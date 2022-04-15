#include "../winhttp.h"

//----- (0000000140740E80) ----------------------------------------------------
__int64 __fastcall sub_140740E80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r8
	int v4; // eax
	_DWORD* v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rax
	_DWORD* v8; // rcx
	__int64 result; // rax
	_DWORD* v10; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v4 = *(_DWORD*)(v3 + 12);
		v5 = 0i64;
		if (v4)
		{
			if (v4 == 1)
			{
				v7 = *(unsigned int*)(v3 + 8);
				if ((unsigned int)v7 < 5)
					v5 = (_DWORD*)(qword_140C65898 + 8 * (v7 + 8 * v7 + 283));
			}
		}
		else
		{
			v6 = *(int*)(v3 + 8);
			if ((unsigned int)v6 <= 0xB)
				v5 = (_DWORD*)(qword_140C65898 + 8 * (9 * v6 + 175));
		}
		if (*(_DWORD*)(v3 + 8) != -1 && !v5)
		{
			v8 = (_DWORD*)a1[2];
			result = 1i64;
			*v8 = 0;
			v8[2] = 1;
			a1[2] += 16i64;
			return result;
		}
		sub_14073F5C0(v3, v5);
		v10 = (_DWORD*)a1[2];
		*v10 = 1;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 0;
	}
	v10[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

