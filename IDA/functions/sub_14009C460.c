#include "../winhttp.h"

//----- (000000014009C460) ----------------------------------------------------
__int64 __fastcall sub_14009C460(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_140336A40(a1, a2, (_QWORD*)a3);
	if ((int)result >= 0)
	{
		if (a3 == -8)
		{
			return 2147500037i64;
		}
		else
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xEui64);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0xEui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0xEui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 36), 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0xFui64);
									if ((int)result >= 0)
										return sub_14006C090(a1, (_DWORD*)(a3 + 44), 0xEui64);
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 14009C4D5: variable 'v6' is possibly undefined

