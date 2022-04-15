#include "../winhttp.h"

//----- (000000014050CE40) ----------------------------------------------------
__int64 sub_14050CE40()
{
	__int64 v0; // rbx
	char v2; // [rsp+38h] [rbp+10h] BYREF

	v0 = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& *(_DWORD*)(qword_140C65898 + 26180) == 49
		&& sub_1403D90D0(qword_140C65898, *(_DWORD*)(qword_140C65898 + 26176)))
	{
		v2 = 0;
		sub_1403F4900(v0, 0x167u, (__int64)&v2);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

