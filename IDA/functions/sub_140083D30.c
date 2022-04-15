#include "../winhttp.h"

//----- (0000000140083D30) ----------------------------------------------------
__int64 __fastcall sub_140083D30(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rsi
	__int64 i; // rbp

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		if (a3 == -8)
			return 2147500037i64;
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xEui64);
		if ((int)result >= 0)
		{
			result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
			if ((int)result >= 0)
			{
				result = sub_14006BE30(a1, (_BYTE*)(a3 + 24), 7ui64);
				if ((int)result >= 0)
				{
					result = sub_14006BE30(a1, (_BYTE*)(a3 + 25), 7ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x11ui64);
						if ((int)result >= 0)
						{
							if (a3 == -32)
								return 2147500037i64;
							result = sub_14006BF60(a1, (_WORD*)(a3 + 32), 0x10ui64);
							if ((int)result >= 0)
							{
								v8 = 0i64;
								for (i = a3 + 34; ; i += 4i64)
								{
									result = sub_1400823C0(a1, v7, i);
									if ((int)result < 0)
										break;
									if ((unsigned __int64)++v8 >= 5)
									{
										if (a3 == -54)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 54), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -56)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 56), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -58)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 58), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -60)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 60), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -62)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 62), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -64)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 64), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -66)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 66), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -68)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 68), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -70)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 70), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -72)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 72), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -74)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 74), 0x10ui64);
										if ((int)result < 0)
											return result;
										if (a3 == -76)
											return 2147500037i64;
										result = sub_14006BF60(a1, (_WORD*)(a3 + 76), 0x10ui64);
										if ((int)result >= 0)
										{
											result = sub_14006C090(a1, (_DWORD*)(a3 + 80), 0x20ui64);
											if ((int)result >= 0)
											{
												result = sub_14006C090(a1, (_DWORD*)(a3 + 84), 0x20ui64);
												if ((int)result >= 0)
													return sub_14006C090(a1, (_DWORD*)(a3 + 88), 3ui64);
											}
										}
										return result;
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
// 140083D97: variable 'v6' is possibly undefined
// 140083E37: variable 'v7' is possibly undefined

