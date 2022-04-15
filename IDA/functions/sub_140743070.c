#include "../winhttp.h"

//----- (0000000140743070) ----------------------------------------------------
__int64 sub_140743070()
{
	__int64 v0; // rax
	__int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

	v0 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v0)
	{
		v2[0] = 0i64;
		v2[1] = 0i64;
		v2[0] = *(_QWORD*)(v0 + 72);
		sub_1403F4740(qword_140C65898, 0x42Bu, (__int64)v2);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

