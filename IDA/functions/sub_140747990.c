#include "../winhttp.h"

//----- (0000000140747990) ----------------------------------------------------
__int64 __fastcall sub_140747990(_QWORD* a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rdi
	unsigned int v7; // esi
	int v8; // eax
	__int64 v9; // r8
	int v10; // edi
	__int64 v11; // rax

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = sub_1400F26A0(v6 + 384, 2);
	v9 = *(_QWORD*)(qword_140C65898 + 120);
	v10 = v8;
	if (!v9)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_12:
		a1[2] += 16i64;
		return 1i64;
	}
	v11 = sub_1403ACD90(qword_140C65B70, v7, v9);
	if (!v11 || !(unsigned int)sub_1403BBB90(qword_140C65898, a1, *(_DWORD*)(*(_QWORD*)(v11 + 112) + 4i64), v10))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_12;
	}
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

