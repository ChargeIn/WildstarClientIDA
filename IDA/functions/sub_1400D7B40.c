#include "../winhttp.h"

//----- (00000001400D7B40) ----------------------------------------------------
__int64 __fastcall sub_1400D7B40(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	char* v6; // rbx

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
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = (char*)sub_1400D66A0(a1, 1u);
	if (v6 && (*(unsigned __int8(__fastcall**)(__int64, char*, __int64))(*(_QWORD*)v1 + 88i64))(v1, v6, 3i64))
		sub_1400CA0F0(v6);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

