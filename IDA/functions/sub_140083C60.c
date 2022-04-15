#include "../winhttp.h"

//----- (0000000140083C60) ----------------------------------------------------
__int64 __fastcall sub_140083C60(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if ((int)result >= 0)
		{
			if (a3 == -16)
			{
				return 2147500037i64;
			}
			else
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0xEui64);
				if ((int)result >= 0)
				{
					result = sub_14006C120(a1, (__int64*)(a3 + 24), v6);
					if ((int)result >= 0)
					{
						result = sub_1400852F0(a1, v7, a3 + 32);
						if ((int)result >= 0)
							return sub_14006C090(a1, (_DWORD*)(a3 + 48), 1ui64);
					}
				}
			}
		}
	}
	return result;
}
// 140083CEA: variable 'v6' is possibly undefined
// 140083CFA: variable 'v7' is possibly undefined

