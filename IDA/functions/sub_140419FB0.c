#include "../winhttp.h"

//----- (0000000140419FB0) ----------------------------------------------------
__int64 __fastcall sub_140419FB0(_QWORD* a1)
{
	unsigned int v2; // edx
	_DWORD* v3; // rdx
	__int64 v5; // rdi
	int* v6; // rax
	int v7; // ecx
	__int64 v8; // rax
	int v9; // edx
	_DWORD* v10; // rax

	v2 = sub_140417B50(a1, 1u);
	if (v2)
	{
		v5 = qword_140C65898;
		v6 = sub_1400B5DF0(qword_140C658F0, v2, 0i64);
		v7 = 0;
		if (v6 && (v8 = (unsigned int)v6[114], (_DWORD)v8))
			v9 = *(unsigned __int16*)(v5 + 2 * v8 + 328);
		else
			v9 = 0;
		v10 = (_DWORD*)a1[2];
		LOBYTE(v7) = v9 != 0;
		v10[2] = 1;
		*v10 = v7;
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
// 140C658F0: using guessed type __int64 qword_140C658F0;

