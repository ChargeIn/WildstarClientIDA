#include "../winhttp.h"

//----- (0000000140668470) ----------------------------------------------------
__int64 __fastcall sub_140668470(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	unsigned int* v5; // rcx
	int v6; // eax
	int v7; // r8d
	BOOL v8; // ecx
	_DWORD* v9; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		if (*(_QWORD*)(qword_140C65898 + 27728) && (v5 = *(unsigned int**)(*(_QWORD*)v2 + 8i64), v5[74]))
		{
			v6 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, *v5);
			v7 = 0;
			v8 = (unsigned int)(v6 - 1) <= 2;
		}
		else
		{
			v7 = 0;
			v8 = 0;
		}
		v9 = (_DWORD*)a1[2];
		LOBYTE(v7) = v8;
		v9[2] = 1;
		*v9 = v7;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

