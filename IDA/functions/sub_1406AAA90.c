#include "../winhttp.h"

//----- (00000001406AAA90) ----------------------------------------------------
__int64 __fastcall sub_1406AAA90(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned int v3; // edi
	unsigned __int64 v4; // rdx
	unsigned int v5; // ecx
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // rcx
	unsigned int v9; // eax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v13; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = 0;
		v4 = *(_QWORD*)(qword_140C63650 + 768);
		v5 = 0;
		if (v4)
		{
			v6 = *(_QWORD*)(qword_140C63650 + 760);
			v7 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
			{
				v7 = ++v5;
				if (v5 >= v4)
					goto LABEL_7;
			}
			v8 = *(_QWORD*)(v6 + 8i64 * v5);
		}
		else
		{
		LABEL_7:
			v8 = 0i64;
		}
		v9 = sub_1400F26A0(v8 + 384, 2);
		v11 = sub_1404C9B90(v10, v9);
		if (v11)
			v3 = *(_DWORD*)(v11 + 496);
		return sub_1406AE160(a1, v3);
	}
	else
	{
		v13 = a1[2];
		*(_QWORD*)v13 = 0i64;
		*(_DWORD*)(v13 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406AAB10: variable 'v10' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

