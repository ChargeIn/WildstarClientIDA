#include "../winhttp.h"

//----- (0000000140661F00) ----------------------------------------------------
__int64 __fastcall sub_140661F00(__int64 a1)
{
	int* v1; // rax
	unsigned int* v2; // rcx
	unsigned int v3; // edx
	__int64 v4; // r8
	__int64(__fastcall * v5)(__int64(__fastcall*)(_QWORD, __int64, __int64), unsigned int, __int64, __int64); // rax
	__int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

	v1 = (int*)sub_1406622C0(a1, 1);
	if (v1)
		v2 = (unsigned int*)sub_1403D90D0(qword_140C65898, *v1);
	else
		v2 = 0i64;
	if (qword_140C65898)
	{
		if (v2)
		{
			v3 = v2[32];
			if (v3 == 20 || v3 == 23)
			{
				v4 = v2[2];
				v5 = sub_140400DF0;
				v7[0] = (__int64)sub_140661FA0;
				if (!sub_140661FA0)
					v5 = 0i64;
				v7[1] = (__int64)v5;
				sub_1403F87B0(qword_140C65898, v2[104], v7, v4);
			}
		}
	}
	return 0i64;
}
// 140661F78: conditional instruction was optimized away because edx.4==17
// 140C65898: using guessed type __int64 qword_140C65898;

