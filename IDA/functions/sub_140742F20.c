#include "../winhttp.h"

//----- (0000000140742F20) ----------------------------------------------------
__int64 __fastcall sub_140742F20(__int64 a1)
{
	unsigned int v1; // edx
	unsigned __int64 v2; // r8
	__int64 v3; // rax
	int* v4; // rax
	__int64 v5; // rax

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = 0i64;
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v3) + 400i64) == a1)
				break;
			v3 = ++v1;
		} while (v1 < v2);
	}
	v4 = (int*)sub_1406622C0(a1, 1);
	if (v4)
	{
		v5 = sub_1403D90D0(qword_140C65898, *v4);
		if (v5)
			sub_1406050E0(qword_140C65898 + 27664, (__int64*)(v5 + 416));
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

