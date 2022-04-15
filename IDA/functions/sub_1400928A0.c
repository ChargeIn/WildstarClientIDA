#include "../winhttp.h"

//----- (00000001400928A0) ----------------------------------------------------
__int64 __fastcall sub_1400928A0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	_DWORD* v7; // rbx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v6);
		if ((int)result >= 0)
		{
			v7 = (_DWORD*)(a3 + 16);
			if (!v7)
				return 2147500037i64;
			result = sub_14006C090(a1, v7, 0xEui64);
			if ((int)result >= 0)
				return sub_14006C1C0(a1, v7 + 1);
		}
	}
	return result;
}
// 1400928CE: variable 'v6' is possibly undefined

