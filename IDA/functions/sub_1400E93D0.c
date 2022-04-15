#include "../winhttp.h"

//----- (00000001400E93D0) ----------------------------------------------------
__int64 __fastcall sub_1400E93D0(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // rax

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 760);
	v4 = 0i64;
	while (*(_QWORD*)(*(_QWORD*)(v3 + 8 * v4) + 400i64) != a1)
	{
		v1 = (unsigned int)(v1 + 1);
		v4 = (unsigned int)v1;
		if ((unsigned int)v1 >= v2)
			return 0i64;
	}
	return *(_QWORD*)(v3 + 8 * v1);
}
// 140C63650: using guessed type __int64 qword_140C63650;

