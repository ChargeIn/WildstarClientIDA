#include "../winhttp.h"

//----- (0000000140740C00) ----------------------------------------------------
__int64 __fastcall sub_140740C00(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned int* v3; // rdi
	int v4; // ecx
	unsigned int v5; // ecx
	_DWORD* v6; // rax
	_DWORD* v8; // r8
	_DWORD* v9; // rdx
	int v10; // eax
	BOOL v11; // eax
	unsigned int v12; // edx
	int v13; // edx
	_DWORD* v14; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_5;
	v3 = *(unsigned int**)(v2 + 8);
	if (!v3)
		goto LABEL_5;
	v4 = sub_140056D60(a1, 2u);
	if ((unsigned int)(v4 - 1) > 5)
	{
		if (v4 != 20)
			goto LABEL_5;
		LOBYTE(v5) = 6;
	}
	else
	{
		v5 = v4 - 1;
		if (v5 >= 7)
		{
		LABEL_5:
			v6 = (_DWORD*)a1[2];
			*v6 = 0;
			v6[2] = 1;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	v8 = (_DWORD*)a1[2];
	v9 = dword_140A12138;
	if (a1[3] + 32i64 < (unsigned __int64)v8)
		v9 = (_DWORD*)(a1[3] + 32i64);
	v10 = v9[2];
	v11 = v10 && (v10 != 1 || *v9);
	v12 = v3[13];
	if (v11)
		v13 = (1 << v5) | v12;
	else
		v13 = ~(1 << v5) & v12;
	if (v13 == v3[13])
	{
		*v8 = 0;
		v8[2] = 1;
	}
	else
	{
		v3[13] = v13;
		v14 = (_DWORD*)a1[2];
		*v14 = 1;
		v14[2] = 1;
	}
	a1[2] += 16i64;
	sub_14073FA10(v3);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

