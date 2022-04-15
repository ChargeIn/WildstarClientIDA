#include "../winhttp.h"

//----- (00000001406AA960) ----------------------------------------------------
__int64 __fastcall sub_1406AA960(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r14
	unsigned int v4; // ebp
	unsigned __int64 v5; // rdx
	unsigned int v6; // ecx
	__int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rdi
	int v11; // eax
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v15; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v4 = 0;
		v5 = *(_QWORD*)(qword_140C63650 + 768);
		v6 = 0;
		if (v5)
		{
			v7 = *(_QWORD*)(qword_140C63650 + 760);
			v8 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
			{
				v8 = ++v6;
				if (v6 >= v5)
					goto LABEL_7;
			}
			v9 = *(_QWORD*)(v7 + 8i64 * v6);
		}
		else
		{
		LABEL_7:
			v9 = 0i64;
		}
		v10 = (int)sub_1400F26A0(v9 + 384, 2);
		v11 = sub_1400F26A0(v9 + 384, 3);
		v13 = sub_1404C9E20(v12, *(_DWORD*)(v3 + 8), v10 | ((__int64)v11 << 32));
		if (v13)
			v4 = *(_DWORD*)(v13 + 496);
		return sub_1406AE160(a1, v4);
	}
	else
	{
		v15 = a1[2];
		*(_QWORD*)v15 = 0i64;
		*(_DWORD*)(v15 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406AAA20: variable 'v12' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

