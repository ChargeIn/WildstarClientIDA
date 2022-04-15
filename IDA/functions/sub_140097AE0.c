#include "../winhttp.h"

//----- (0000000140097AE0) ----------------------------------------------------
__int64 __fastcall sub_140097AE0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	unsigned __int64 v7; // rsi
	_DWORD* v8; // rbx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 4ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 0x11ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C120(a1, (__int64*)(a3 + 40), v6);
										if ((int)result >= 0)
										{
											result = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x20ui64);
											if ((int)result >= 0)
											{
												v7 = 0i64;
												v8 = (_DWORD*)(a3 + 52);
												while (v8)
												{
													result = sub_14006C090(a1, v8, 3ui64);
													if ((int)result >= 0)
													{
														result = sub_14006C090(a1, v8 + 1, 0x20ui64);
														if ((int)result >= 0)
														{
															result = sub_14006C090(a1, v8 + 2, 0x20ui64);
															if ((int)result >= 0)
															{
																++v7;
																v8 += 3;
																if (v7 < 2)
																	continue;
															}
														}
													}
													return result;
												}
												return 2147500037i64;
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
// 140097BF2: variable 'v6' is possibly undefined

