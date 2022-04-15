#include "../winhttp.h"

//----- (00000001400D7810) ----------------------------------------------------
__int64 __fastcall sub_1400D7810(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 v5; // rdi
	int v6; // ebx
	__int64 v7; // rdx
	__int64 v8; // rax
	_DWORD* v9; // r8
	int v10; // eax

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = *(_QWORD*)(qword_140C63650 + 760);
		v4 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v3 + 8 * v4) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v4 = (unsigned int)v1;
			if ((unsigned int)v1 >= v2)
				goto LABEL_5;
		}
		v5 = *(_QWORD*)(v3 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v5 = 0i64;
	}
	v6 = 1;
	v7 = sub_1400D66A0(a1, 1u);
	if (v7)
	{
		v8 = *(_QWORD*)(v5 + 400);
		v9 = dword_140A12138;
		if ((unsigned __int64)(*(_QWORD*)(v8 + 24) + 16i64) < *(_QWORD*)(v8 + 16))
			v9 = (_DWORD*)(*(_QWORD*)(v8 + 24) + 16i64);
		v10 = v9[2];
		if (!v10 || v10 == 1 && !*v9)
			v6 = 0;
		*(_BYTE*)(v7 + 28) &= ~4u;
		*(_BYTE*)(v7 + 28) |= 4 * (v6 != 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

