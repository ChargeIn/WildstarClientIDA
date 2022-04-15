#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A46B0) ----------------------------------------------------
__int64 __fastcall sub_1400A46B0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xFui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v6);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_140337160(a1, (_BYTE*)(a3 + 32), 20i64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 52), 0x12ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C1C0(a1, (_DWORD*)(a3 + 56));
									if ((int)result >= 0)
									{
										result = sub_14006C1C0(a1, (_DWORD*)(a3 + 60));
										if ((int)result >= 0)
										{
											result = sub_14006C1C0(a1, (_DWORD*)(a3 + 64));
											if ((int)result >= 0)
											{
												result = sub_14006C1C0(a1, (_DWORD*)(a3 + 68));
												if ((int)result >= 0)
													return sub_14006C1C0(a1, (_DWORD*)(a3 + 72));
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
	}
	return result;
}
// 1400A46F2: variable 'v6' is possibly undefined

