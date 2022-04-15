#include "../winhttp.h"

//----- (00000001403D2140) ----------------------------------------------------
__int64 __fastcall sub_1403D2140(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	unsigned int v5; // r8d
	unsigned __int64 v6; // rdx
	int v7; // r9d
	unsigned __int64 v8; // rax
	__int64 v9; // r10
	_DWORD* v10; // rcx
	int v11; // r10d
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	unsigned __int64 v14; // rdx
	__int64 v15; // r11
	_DWORD* v16; // rcx

	v4 = sub_1401FE020(a2);
	if (!v4 || (v5 = *(_DWORD*)(v4 + 4)) == 0)
		v5 = -1;
	v6 = *(_QWORD*)(a1 + 32608);
	v7 = 0;
	v8 = 0i64;
	if (v6)
	{
		v9 = *(_QWORD*)(a1 + 32600);
		v10 = (_DWORD*)(v9 + 8);
		while (*v10 != a2)
		{
			++v8;
			v10 += 4;
			if (v8 >= v6)
				goto LABEL_8;
		}
		v11 = *(_DWORD*)(v9 + 16 * v8 + 12);
	}
	else
	{
	LABEL_8:
		v11 = 0;
	}
	v12 = *(_QWORD*)(qword_140C635F0 + 5584);
	v13 = 0i64;
	v14 = *(_QWORD*)(v12 + 160);
	if (v14)
	{
		v15 = *(_QWORD*)(v12 + 152);
		v16 = (_DWORD*)(v15 + 8);
		while (*v16 != a2)
		{
			++v13;
			v16 += 4;
			if (v13 >= v14)
				goto LABEL_16;
		}
		v7 = *(_DWORD*)(v15 + 16 * v13 + 12);
	}
LABEL_16:
	if (v7 + v11 < v5)
		return (unsigned int)(v7 + v11);
	return v5;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

