#include "../winhttp.h"

//----- (00000001406F8880) ----------------------------------------------------
__int64 __fastcall sub_1406F8880(_QWORD* a1)
{
	__int64 result; // rax
	int v3; // [rsp+38h] [rbp+10h] BYREF

	result = sub_140056D60(a1, 1u);
	v3 = result;
	if ((_DWORD)result)
	{
		sub_1403D3470(a1, &v3);
		return 1i64;
	}
	return result;
}

