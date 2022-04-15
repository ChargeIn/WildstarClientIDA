#include "../winhttp.h"

//----- (0000000140040E30) ----------------------------------------------------
__int64 __fastcall sub_140040E30(_QWORD* a1)
{
	__int64 v1; // r10
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax

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
			{
				sub_1400E9D50(0i64, a1);
				return 0i64;
			}
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	sub_1400E9D50(v1, a1);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

