#include "../winhttp.h"

//----- (00000001406C37A0) ----------------------------------------------------
__int64 __fastcall sub_1406C37A0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdx

	result = sub_1406C3560(a1);
	if (result)
	{
		v3 = *(_QWORD*)(result + 1072);
		if (v3)
			v3 = *(_QWORD*)(v3 + 16);
		if (v3)
		{
			sub_140649930(a1, v3);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	return result;
}

