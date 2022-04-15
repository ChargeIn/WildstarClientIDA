#include "../winhttp.h"

//----- (00000001406AD020) ----------------------------------------------------
__int64 __fastcall sub_1406AD020(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edx
	int v4; // ecx
	__int64 v5; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = 0;
		v4 = *(_DWORD*)(qword_140C65898 + 29976);
		if ((v4 & 2) != 0)
		{
			v3 = 1;
		}
		else if ((v4 & 4) != 0)
		{
			v3 = 2;
		}
		else if ((v4 & 1) != 0)
		{
			v3 = 3;
		}
		v5 = a1[2];
		*(_DWORD*)(v5 + 8) = 3;
		result = 1i64;
		*(double*)v5 = (double)v3;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

