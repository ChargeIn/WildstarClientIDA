#include "../winhttp.h"

//----- (0000000140744610) ----------------------------------------------------
__int64 sub_140744610()
{
	__int64 v0; // rbx
	__int64 v2; // [rsp+38h] [rbp+10h] BYREF

	if (*(_QWORD*)(qword_140C65898 + 27728))
	{
		v0 = qword_140C65898 + 27664;
		if (sub_140601FB0(qword_140C65898 + 27664))
		{
			v2 = 0i64;
			v2 = *(_QWORD*)(*(_QWORD*)(v0 + 64) + 72i64);
			sub_1403F4740(qword_140C65898, 0x411u, (__int64)&v2);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

