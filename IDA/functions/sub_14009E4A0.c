#include "../winhttp.h"

//----- (000000014009E4A0) ----------------------------------------------------
__int64 __fastcall sub_14009E4A0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_140337160(a1, (_BYTE*)(a3 + 16), 20i64);
					if ((int)result >= 0)
					{
						result = sub_140337160(a1, (_BYTE*)(a3 + 36), 20i64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 56), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C1C0(a1, (_DWORD*)(a3 + 60));
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 64), 3ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, (_DWORD*)(a3 + 68), 0x20ui64);
										if ((int)result >= 0)
										{
											result = sub_14006C1C0(a1, (_DWORD*)(a3 + 72));
											if ((int)result >= 0)
												return sub_14006C1C0(a1, (_DWORD*)(a3 + 76));
										}
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

