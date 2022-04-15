#include "../winhttp.h"

//----- (0000000140732450) ----------------------------------------------------
__int64 sub_140732450()
{
	__int64 v0; // rax
	__int64 v2; // [rsp+20h] [rbp-18h] BYREF
	__int64 v3; // [rsp+28h] [rbp-10h]

	if (sub_1404B9A20())
	{
		v0 = sub_1405B1510(&qword_140C7DFB0);
		v2 = 0i64;
		v3 = 0i64;
		v2 = *(_QWORD*)(v0 + 8);
		v3 = *(_QWORD*)(v0 + 16);
		sub_1403F4900(qword_140C65898, 0x4ECu, (__int64)&v2);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

