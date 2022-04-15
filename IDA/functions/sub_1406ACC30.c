#include "../winhttp.h"

//----- (00000001406ACC30) ----------------------------------------------------
__int64 __fastcall sub_1406ACC30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r9
	unsigned __int64 v4; // rdx
	unsigned int v5; // ecx
	__int64 v6; // r8
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = 0i64;
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
					goto LABEL_9;
			}
			v3 = *(_QWORD*)(v6 + 8i64 * v5);
		}
	LABEL_9:
		v8 = sub_1400F26A0(v3 + 384, 2);
		v9 = (unsigned int)(v8 - 1);
		if ((unsigned int)v9 <= 5)
			sub_1404B7BC0(v9, v8);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

