#include "../winhttp.h"

//----- (0000000140092060) ----------------------------------------------------
__int64 __fastcall sub_140092060(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
		if ((int)result >= 0)
		{
			result = sub_140090590(a1, a2, a3 + 16);
			if ((int)result >= 0)
			{
				result = sub_14006BF60(a1, (_WORD*)(a3 + 96), 0x10ui64);
				if ((int)result >= 0)
					return sub_14006BF60(a1, (_WORD*)(a3 + 98), 0x10ui64);
			}
		}
	}
	return result;
}
// 1400920AB: variable 'v7' is possibly undefined

