#include "../winhttp.h"

//----- (0000000140732390) ----------------------------------------------------
__int64 __fastcall sub_140732390(__int64 a1)
{
	__int64 v1; // r10
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rcx

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = sub_1400F26A0(v1 + 384, 1);
	sub_1404B8F30(v7, v6, 0);
	return 0i64;
}
// 1407323F6: variable 'v7' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

