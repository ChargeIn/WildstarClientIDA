#include "../winhttp.h"

//----- (0000000140007180) ----------------------------------------------------
__int64 __fastcall sub_140007180(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rax
	__int64* v5; // rcx
	__int64 v6; // rdi
	BOOL v8; // [rsp+28h] [rbp-10h]

	v2 = (int)*a2;
	if ((int)v2 < 4)
	{
		v5 = (__int64*)(a1 + 8 * (v2 + 61));
		if (v5)
			sub_1401E82F0(v5, *((float*)a2 + 1));
		if (qword_140C65898)
		{
			v6 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v6)
			{
				v8 = sub_140007220(a1, *a2);
				Apollo_LUAEvent(v6, "AccountPrivilegeRestrictionUpdate", "ifb", *a2, (float)(*((float*)a2 + 1) * 86400.0), v8);
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

