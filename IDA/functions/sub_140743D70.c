#include "../winhttp.h"

//----- (0000000140743D70) ----------------------------------------------------
__int64 sub_140743D70()
{
	__int64 v0; // rdx
	__int64 v2; // [rsp+20h] [rbp-18h] BYREF
	__int64 v3; // [rsp+28h] [rbp-10h]

	v0 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v0)
	{
		v2 = 0i64;
		v3 = 0i64;
		v2 = *(_QWORD*)(v0 + 72);
		v3 = *(_DWORD*)(v0 + 8) | 2u;
		sub_1403F4740(qword_140C65898, 0x406u, (__int64)&v2);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

