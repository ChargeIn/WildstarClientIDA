#include "../winhttp.h"

//----- (0000000140090530) ----------------------------------------------------
__int64 __fastcall sub_140090530(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_140090470(a1, a2, a3);
	if ((int)result >= 0)
	{
		result = sub_140090470(a1, v6, a3 + 4);
		if ((int)result >= 0)
			return sub_140090470(a1, v7, a3 + 8);
	}
	return result;
}
// 140090565: variable 'v6' is possibly undefined
// 140090575: variable 'v7' is possibly undefined

