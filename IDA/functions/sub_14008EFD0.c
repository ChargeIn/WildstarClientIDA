#include "../winhttp.h"

//----- (000000014008EFD0) ----------------------------------------------------
__int64 __fastcall sub_14008EFD0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 2ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xBui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 2ui64);
				if ((int)result >= 0)
				{
					result = sub_14006BE30(a1, (_BYTE*)(a3 + 16), 8ui64);
					if ((int)result >= 0)
					{
						result = sub_14006BE30(a1, (_BYTE*)(a3 + 17), 8ui64);
						if ((int)result >= 0)
						{
							result = sub_14006BE30(a1, (_BYTE*)(a3 + 18), 8ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 1ui64);
								if ((int)result >= 0)
								{
									result = sub_14006BE30(a1, (_BYTE*)(a3 + 24), 8ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 1ui64);
										if ((int)result >= 0)
											return sub_14006C090(a1, (_DWORD*)(a3 + 32), 1ui64);
									}
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

