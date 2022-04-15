#include "../winhttp.h"

//----- (0000000140599E60) ----------------------------------------------------
__int64 __fastcall sub_140599E60(__int64 a1)
{
	__int64 v1; // rdi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	unsigned int v7; // ebx
	__int64 v8; // rcx
	__int64 v9; // rax
	unsigned int v10; // r10d
	__int64 v11; // r8
	int v12; // ecx
	__int64 v13; // rdx
	__int64 result; // rax

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = sub_1400F26A0(v1 + 384, 1);
	sub_1400F26A0(v1 + 384, 2);
	v9 = sub_1405BE150(v8, v7);
	if (!v9)
		return 0i64;
	if (v10 > *(_DWORD*)(v9 + 12))
		return 0i64;
	if (!v10)
		return 0i64;
	v11 = v9 + 48i64 * (v10 - 1) + 32;
	if (!v11)
		return 0i64;
	v12 = *(_DWORD*)(v11 + 32);
	v13 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v13 + 8) = 3;
	result = 1i64;
	*(double*)v13 = (double)v12;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140599EDD: variable 'v8' is possibly undefined
// 140599EEB: variable 'v10' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

