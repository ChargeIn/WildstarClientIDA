#include "../winhttp.h"

//----- (00000001406AC8A0) ----------------------------------------------------
__int64 __fastcall sub_1406AC8A0(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rdx
	__int64 v4; // r9
	unsigned int v5; // eax
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rbx
	int v9; // edi
	int v10; // esi
	int v11; // ebp
	int v12; // r14d
	int v13; // r15d
	int v14; // r12d
	int v15; // ebx
	__int64 v16; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = *(_QWORD*)(qword_140C63650 + 768);
		v4 = 0i64;
		v5 = 0;
		if (v3)
		{
			v6 = *(_QWORD*)(qword_140C63650 + 760);
			v7 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
			{
				v7 = ++v5;
				if (v5 >= v3)
					goto LABEL_9;
			}
			v4 = *(_QWORD*)(v6 + 8i64 * v5);
		}
	LABEL_9:
		v8 = v4 + 384;
		v9 = sub_1400F26A0(v4 + 384, 2);
		v10 = sub_1400F26A0(v8, 3);
		v11 = sub_1400F26A0(v8, 4);
		v12 = sub_1400F26A0(v8, 5);
		v13 = sub_1400F26A0(v8, 6);
		v14 = sub_1400F26A0(v8, 7);
		v15 = sub_1400F26A0(v8, 8);
		v16 = sub_1405B1510(&qword_140C7DFB0);
		if (v16)
			sub_1405AA950(v16, v9, v10, v11, v12, v13, v14, v15);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

