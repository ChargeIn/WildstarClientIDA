#include "../winhttp.h"

//----- (0000000140095110) ----------------------------------------------------
__int64 __fastcall sub_140095110(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned __int8 v10; // bl
	__int64 v11; // rax
	__int64 v12; // rdx
	unsigned __int8 v13; // bl

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x12ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x12ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x12ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006BF60(a1, (_WORD*)(a3 + 20), 0x10ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_1400A8A30(a1, v7, (_DWORD*)(a3 + 28));
								if ((int)result >= 0)
								{
									result = sub_14006C1C0(a1, (_DWORD*)(a3 + 40));
									if ((int)result >= 0)
									{
										result = sub_14006BE30(a1, (_BYTE*)(a3 + 44), 8ui64);
										if ((int)result >= 0)
										{
											v8 = sub_1403374E0(a2, 28i64 * *(unsigned __int8*)(a3 + 44));
											*(_QWORD*)(a3 + 48) = v8;
											if (v8)
											{
												v10 = 0;
												if (*(_BYTE*)(a3 + 44))
												{
													do
													{
														result = sub_140094970(a1, v9, *(_QWORD*)(a3 + 48) + 28i64 * v10);
														if ((int)result < 0)
															return result;
													} while (++v10 < *(_BYTE*)(a3 + 44));
												}
												result = sub_14006BE30(a1, (_BYTE*)(a3 + 56), 8ui64);
												if ((int)result < 0)
													return result;
												v11 = sub_1403374E0(a2, 32i64 * *(unsigned __int8*)(a3 + 56));
												*(_QWORD*)(a3 + 64) = v11;
												if (v11)
												{
													v13 = 0;
													if (*(_BYTE*)(a3 + 56))
													{
														while (1)
														{
															result = sub_140094A00(a1, v12, *(_QWORD*)(a3 + 64) + 32i64 * v13);
															if ((int)result < 0)
																break;
															if (++v13 >= *(_BYTE*)(a3 + 56))
																goto LABEL_23;
														}
													}
													else
													{
													LABEL_23:
														result = sub_14006C090(a1, (_DWORD*)(a3 + 72), 1ui64);
														if ((int)result >= 0)
															return sub_14006C090(a1, (_DWORD*)(a3 + 76), 1ui64);
													}
													return result;
												}
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
	return result;
}
// 140095207: variable 'v7' is possibly undefined
// 14009527F: variable 'v9' is possibly undefined
// 1400952DF: variable 'v12' is possibly undefined

