#include "../winhttp.h"

//----- (0000000140599F50) ----------------------------------------------------
__int64 __fastcall sub_140599F50(__int64 a1)
{
	int v1; // esi
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rdi
	unsigned int v8; // ebx
	__int64 v9; // rcx
	__int64 v10; // rax
	int v11; // r11d
	unsigned int v12; // edx
	__int64 v13; // rcx
	__int64 result; // rax
	__int64 v15; // rdx

	v1 = 0;
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
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	sub_1400F26A0(v7 + 384, 2);
	v10 = sub_1405BE150(v9, v8);
	if (!v10)
		return 0i64;
	v12 = *(_DWORD*)(v10 + 12);
	if (!v12)
		return 0i64;
	while (1)
	{
		if (v1)
		{
			v13 = 48i64 * (unsigned int)(v1 - 1) + v10 + 32;
			if (v13)
			{
				if (*(_DWORD*)(v13 + 32) == v11)
					break;
			}
		}
		if (++v1 >= v12)
			return 0i64;
	}
	v15 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v15 + 8) = 3;
	result = 1i64;
	*(double*)v15 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140599FDA: variable 'v9' is possibly undefined
// 14059A00F: variable 'v11' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

