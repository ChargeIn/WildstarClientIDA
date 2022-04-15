#include "../winhttp.h"

//----- (00000001406A0D50) ----------------------------------------------------
__int64 __fastcall sub_1406A0D50(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && *(_QWORD*)(v3 + 8))
	{
		sub_140184510(a1, *(_QWORD*)(v3 + 48));
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

