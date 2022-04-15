#include "../winhttp.h"

//----- (00000001400AAFF0) ----------------------------------------------------
__int64 __fastcall sub_1400AAFF0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 3ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C1C0(a1, a3 + 2);
			if ((int)result >= 0)
			{
				result = sub_14006C1C0(a1, a3 + 3);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 4, 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, a3 + 5, 0x12ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, a3 + 6, 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, a3 + 7, 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, a3 + 8, 1ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, a3 + 9, 1ui64);
										if ((int)result >= 0)
										{
											result = sub_14006C090(a1, a3 + 10, 1ui64);
											if ((int)result >= 0)
											{
												result = sub_14006C090(a1, a3 + 11, 1ui64);
												if ((int)result >= 0)
													return sub_14006C090(a1, a3 + 12, 1ui64);
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

