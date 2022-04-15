#include "../winhttp.h"

//----- (0000000140685330) ----------------------------------------------------
__int64 __fastcall sub_140685330(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	bool v10; // zf
	int v11; // r11d
	__int64 result; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // [rsp+38h] [rbp+10h]

	if (!*(_QWORD*)(qword_140C65898 + 120))
		goto LABEL_18;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_18;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		goto LABEL_18;
	v4 = *(unsigned int**)(v3 + 8);
	if (!v4)
		goto LABEL_18;
	v5 = *v4;
	v6 = *(_QWORD*)(qword_140C65948 + 48);
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
	if (v7 == v6 || (v15 = v7, v5 < *(_DWORD*)(v7 + 32)))
		v15 = *(_QWORD*)(qword_140C65948 + 48);
	if (v15 != v6 && (v9 = *(_QWORD*)(v15 + 40)) != 0)
	{
		v10 = !sub_14048F880(v9, v5);
		result = 1i64;
		if (!v10)
			v11 = 100;
		v13 = a1[2];
		*(_DWORD*)(v13 + 8) = 3;
		*(double*)v13 = (double)v11;
		a1[2] += 16i64;
	}
	else
	{
	LABEL_18:
		v14 = a1[2];
		*(_DWORD*)(v14 + 8) = 3;
		*(_QWORD*)v14 = 0i64;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140685402: variable 'v11' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;

