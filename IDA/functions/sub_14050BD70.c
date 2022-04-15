#include "../winhttp.h"

//----- (000000014050BD70) ----------------------------------------------------
__int64 __fastcall sub_14050BD70(__int64 a1)
{
	__int64 v1; // rax
	unsigned __int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v8; // [rsp+38h] [rbp+10h] BYREF

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = *(_QWORD*)(qword_140C63650 + 760);
		v4 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v3 + 8 * v4) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v4 = (unsigned int)v1;
			if ((unsigned int)v1 >= v2)
				goto LABEL_5;
		}
		v5 = *(_QWORD*)(v3 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v5 = 0i64;
	}
	sub_1400F26A0(v5 + 384, 1);
	v6 = qword_140C65898;
	v8 = 0i64;
	*(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29080) + 120i64) = 0;
	sub_1403F4900(v6, 0x720u, (__int64)&v8);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

