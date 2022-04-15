#include "../winhttp.h"

//----- (00000001406EFF70) ----------------------------------------------------
__int64 __fastcall sub_1406EFF70(_QWORD* a1)
{
	__int64 v3; // rax

	if (qword_140C65970)
	{
		v3 = sub_1405721C0((__int64)a1);
		if (v3)
		{
			sub_140432AC0(a1, *(_QWORD*)(v3 + 48));
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65970: using guessed type __int64 qword_140C65970;

