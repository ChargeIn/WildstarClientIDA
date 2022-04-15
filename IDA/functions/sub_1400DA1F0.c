#include "../winhttp.h"

//----- (00000001400DA1F0) ----------------------------------------------------
__int64 __fastcall sub_1400DA1F0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v4; // rdx

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 16);
		if (v4)
		{
			return sub_1400D62A0(a1, v4);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

