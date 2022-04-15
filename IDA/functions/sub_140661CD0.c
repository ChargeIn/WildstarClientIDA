#include "../winhttp.h"

//----- (0000000140661CD0) ----------------------------------------------------
__int64 __fastcall sub_140661CD0(__int64 a1)
{
	int* v1; // rax
	__int64 v2; // rax
	int v4; // [rsp+38h] [rbp+10h] BYREF

	v1 = (int*)sub_1406622C0(a1, 1);
	if (v1)
	{
		v2 = sub_1403D90D0(qword_140C65898, *v1);
		if (v2)
		{
			v4 = *(_DWORD*)(v2 + 8);
			sub_1403F4900(qword_140C65898, 0x552u, (__int64)&v4);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

