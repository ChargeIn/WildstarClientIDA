#include "../winhttp.h"

//----- (0000000140090840) ----------------------------------------------------
__int64 __fastcall sub_140090840(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	unsigned int v7; // esi
	__int64 v8; // r14
	unsigned __int64 v9; // rbp
	__int64 v10; // rdx
	__int64 v11; // r8
	unsigned __int64 v12; // rbp
	_QWORD* v13; // r14
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 4ui64);
				if ((int)result >= 0)
				{
					v7 = 0;
					v8 = a3 + 24;
					v9 = 0i64;
					while (1)
					{
						result = sub_1400901B0(a1, a2, v8);
						if ((int)result < 0)
							break;
						++v9;
						v8 += 40i64;
						if (v9 >= 0xA)
						{
							result = sub_140090530(a1, v10, (_DWORD*)(a3 + 424));
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 472), 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 476), 0x20ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, (_DWORD*)(a3 + 480), 0x20ui64);
										if ((int)result >= 0)
										{
											result = sub_14006C090(a1, (_DWORD*)(a3 + 484), 0x20ui64);
											if ((int)result >= 0)
											{
												result = sub_14006C120(a1, (__int64*)(a3 + 488), v11);
												if ((int)result >= 0)
												{
													result = sub_14006C090(a1, (_DWORD*)(a3 + 496), 0x20ui64);
													if ((int)result >= 0)
													{
														result = sub_14006C090(a1, (_DWORD*)(a3 + 500), 0x20ui64);
														if ((int)result >= 0)
														{
															v12 = 0i64;
															v13 = (_QWORD*)(a3 + 504);
															while (1)
															{
																result = sub_140336A40(a1, a2, v13);
																if ((int)result < 0)
																	break;
																++v12;
																++v13;
																if (v12 >= 0xA)
																{
																	result = sub_140337160(a1, (_BYTE*)(a3 + 584), 16i64);
																	if ((int)result >= 0)
																	{
																		result = sub_14006C090(a1, (_DWORD*)(a3 + 600), 0x20ui64);
																		if ((int)result >= 0)
																		{
																			v14 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 600));
																			*(_QWORD*)(a3 + 608) = v14;
																			if (v14)
																			{
																				if (*(_DWORD*)(a3 + 600))
																				{
																					while (1)
																					{
																						result = sub_14008D430(
																							a1,
																							v15,
																							(_DWORD*)(*(_QWORD*)(a3 + 608) + 8i64 * v7));
																						if ((int)result < 0)
																							break;
																						if (++v7 >= *(_DWORD*)(a3 + 600))
																							goto LABEL_28;
																					}
																				}
																				else
																				{
																				LABEL_28:
																					result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 616));
																					if ((int)result >= 0)
																					{
																						result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 624));
																						if ((int)result >= 0)
																						{
																							result = sub_14006C090(a1, (_DWORD*)(a3 + 632), 3ui64);
																							if ((int)result >= 0)
																							{
																								result = sub_140090790(a1, v16, (_DWORD*)(a3 + 636));
																								if ((int)result >= 0)
																									return sub_14006C1C0(a1, (_DWORD*)(a3 + 660));
																							}
																						}
																					}
																				}
																			}
																			else
																			{
																				return 2147500037i64;
																			}
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
							}
							return result;
						}
					}
				}
			}
		}
	}
	return result;
}
// 14009090D: variable 'v10' is possibly undefined
// 140090998: variable 'v11' is possibly undefined
// 140090AA0: variable 'v15' is possibly undefined
// 140090B02: variable 'v16' is possibly undefined

