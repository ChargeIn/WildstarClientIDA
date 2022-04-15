#include "../winhttp.h"

//----- (0000000140685210) ----------------------------------------------------
__int64 __fastcall sub_140685210(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	unsigned int v5; // edx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // r11
	int v10; // edi
	unsigned int v11; // edx
	__int64 v12; // rcx
	__int64 v13; // r11
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v17; // [rsp+38h] [rbp+10h]

	if (!*(_QWORD*)(qword_140C65898 + 120))
		goto LABEL_20;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_20;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		goto LABEL_20;
	v4 = *(_QWORD*)(v3 + 8);
	if (!v4)
		goto LABEL_20;
	v5 = *(_DWORD*)v4;
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
	if (v7 == v6 || (v17 = v7, v5 < *(_DWORD*)(v7 + 32)))
		v17 = *(_QWORD*)(qword_140C65948 + 48);
	if (v17 != v6 && (v9 = *(_QWORD*)(v17 + 40)) != 0)
	{
		v10 = *(_DWORD*)(v9 + 20);
		if (sub_14048F880(v7, v5))
		{
			if ((*(_BYTE*)(v4 + 12) & 8) != 0)
				v10 = *(_DWORD*)(v13 + 28);
			else
				v10 = sub_14048F9F0(v12, v11);
		}
		v14 = a1[2];
		*(_DWORD*)(v14 + 8) = 3;
		*(double*)v14 = (double)v10;
	}
	else
	{
	LABEL_20:
		v15 = a1[2];
		*(_DWORD*)(v15 + 8) = 3;
		*(_QWORD*)v15 = 0i64;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1406852D9: variable 'v13' is possibly undefined
// 1406852DF: variable 'v12' is possibly undefined
// 1406852DF: variable 'v11' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;

