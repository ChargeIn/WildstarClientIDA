#include "../winhttp.h"

//----- (00000001400A9450) ----------------------------------------------------
__int64 __fastcall sub_1400A9450(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x12ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C120(a1, (__int64*)(a3 + 32), v7);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0x12ui64);
							if ((int)result >= 0)
							{
								result = sub_140337160(a1, (_BYTE*)(a3 + 44), 20i64);
								if ((int)result >= 0)
									return sub_140337160(a1, (_BYTE*)(a3 + 64), 32i64);
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 1400A94C2: variable 'v6' is possibly undefined
// 1400A94E8: variable 'v7' is possibly undefined

