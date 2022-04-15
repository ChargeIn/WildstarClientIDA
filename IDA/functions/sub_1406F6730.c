#include "../winhttp.h"

//----- (00000001406F6730) ----------------------------------------------------
__int64 __fastcall sub_1406F6730(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = *(_QWORD*)(qword_140C65898 + 25744)) != 0
		&& (v3 = *(_DWORD*)(v2 + 264)) != 0
		&& (v4 = sub_1403D90D0(qword_140C65898, v3)) != 0)
	{
		return sub_140649930(a1, v4);
	}
	else
	{
		return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

