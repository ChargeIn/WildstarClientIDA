#include "../winhttp.h"

//----- (00000001404E50F0) ----------------------------------------------------
__int64 __fastcall sub_1404E50F0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned __int64 v7; // rdx
	__int64 v8; // rcx
	__int64* v9; // rdx

	if (qword_140C65898)
	{
		v2 = 0i64;
		v3 = *(_QWORD*)(qword_140C63650 + 768);
		if (v3)
		{
			v4 = *(_QWORD*)(qword_140C63650 + 760);
			v5 = 0i64;
			while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
			{
				v2 = (unsigned int)(v2 + 1);
				v5 = (unsigned int)v2;
				if ((unsigned int)v2 >= v3)
					goto LABEL_6;
			}
			v6 = *(_QWORD*)(v4 + 8 * v2);
		}
		else
		{
		LABEL_6:
			v6 = 0i64;
		}
		v7 = (int)(sub_1400F26A0(v6 + 384, 1) - 1);
		v8 = *(_QWORD*)(qword_140C635F0 + 5584);
		if (v7 < *(_QWORD*)(v8 + 112))
		{
			v9 = (__int64*)(*(_QWORD*)(v8 + 104) + (v7 << 6));
			if (v9)
				sub_140006D00(v8, *v9);
		}
	}
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

