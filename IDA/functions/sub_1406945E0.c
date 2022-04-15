#include "../winhttp.h"

//----- (00000001406945E0) ----------------------------------------------------
__int64 __fastcall sub_1406945E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0 && qword_140C65C28)
	{
		v5 = *(_QWORD*)(v4 + 8);
		if (v5)
		{
			sub_1404332A0(a1, v5);
			return 1i64;
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65C28: using guessed type __int64 qword_140C65C28;

