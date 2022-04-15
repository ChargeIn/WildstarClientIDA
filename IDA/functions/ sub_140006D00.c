#include "../winhttp.h"

//----- (0000000140006D00) ----------------------------------------------------
__int64 __fastcall sub_140006D00(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // r9
	__int64 v3; // r8
	_QWORD* i; // rax
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 112);
	v3 = 0i64;
	if (!v2)
		return 2147500037i64;
	for (i = *(_QWORD**)(a1 + 104); *i != a2; i += 8)
	{
		if (++v3 >= v2)
			return 2147500037i64;
	}
	v6 = a2;
	sub_140016010(qword_140C635F0, 0x839u, (__int64)&v6);
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

