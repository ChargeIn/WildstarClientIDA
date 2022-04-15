#include "../winhttp.h"

//----- (00000001400D7FC0) ----------------------------------------------------
__int64 __fastcall sub_1400D7FC0(_QWORD* a1)
{
	__int64* v1; // r14
	unsigned __int64 v2; // r8
	unsigned int v3; // eax
	__int64 v4; // r9
	__int64 v5; // rdx
	__int64 v6; // rbp
	int v7; // esi
	int v8; // edi
	int v9; // ebx
	int v10; // edx
	__int64 v11; // rax
	int v13[10]; // [rsp+20h] [rbp-28h] BYREF

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(__int64**)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = sub_1400D66A0(a1, 1u);
	if (v6)
	{
		v7 = sub_1400F26A0((__int64)(v1 + 48), 2);
		v8 = sub_1400F26A0((__int64)(v1 + 48), 3);
		v9 = sub_1400F26A0((__int64)(v1 + 48), 4) + v7;
		v10 = sub_1400F26A0((__int64)(v1 + 48), 5) + v8;
		v11 = *v1;
		v13[0] = v7;
		v13[3] = v10;
		v13[1] = v8;
		v13[2] = v9;
		if ((*(unsigned __int8(__fastcall**)(__int64*, __int64, __int64))(v11 + 88))(v1, v6, 1i64))
			sub_1400CC7C0(v6, v13);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

