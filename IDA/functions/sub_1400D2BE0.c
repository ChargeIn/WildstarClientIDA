#include "../winhttp.h"

//----- (00000001400D2BE0) ----------------------------------------------------
__int64 __fastcall sub_1400D2BE0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	int v4; // [rsp+38h] [rbp+10h] BYREF
	__int64 v5; // [rsp+40h] [rbp+18h] BYREF

	result = 0i64;
	if (a2)
	{
		v5 = 0i64;
		v4 = 0;
		(*(void(__fastcall**)(__int64, __int64*, int*))(*(_QWORD*)a1 + 464i64))(a1, &v5, &v4);
		return sub_1400D2A60(v5, v4, a2);
	}
	return result;
}

