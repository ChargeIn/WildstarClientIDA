//----- (000000014008C0D0) ----------------------------------------------------
__int64 __fastcall sub_14008C0D0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // r8
	unsigned __int64 v11; // rbp
	_DWORD* v12; // rsi
	_BYTE* v13; // rax
	unsigned __int8* v14; // rsi
	_BYTE* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rdx
	unsigned __int8 v18; // si

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x12ui64);
			if ((int)result >= 0)
			{
				result = sub_14008DA10(a1, v8, (_DWORD*)(a3 + 20));
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C120(a1, (__int64*)(a3 + 40), v9);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C120(a1, (__int64*)(a3 + 56), v10);
									if ((int)result >= 0)
									{
										result = sub_14006C1C0(a1, (_DWORD*)(a3 + 64));
										if ((int)result >= 0)
										{
											result = sub_14006C090(a1, (_DWORD*)(a3 + 68), 0x20ui64);
											if ((int)result >= 0)
											{
												result = sub_14006BE30(a1, (_BYTE*)(a3 + 72), 8ui64);
												if ((int)result >= 0)
												{
													result = sub_14006C090(a1, (_DWORD*)(a3 + 76), 0x20ui64);
													if ((int)result >= 0)
													{
														result = sub_14006C090(a1, (_DWORD*)(a3 + 80), 0x20ui64);
														if ((int)result >= 0)
														{
															result = sub_14006C090(a1, (_DWORD*)(a3 + 84), 0x20ui64);
															if ((int)result >= 0)
															{
																v11 = 0i64;
																v12 = (_DWORD*)(a3 + 88);
																do
																{
																	if (!v12)
																		return 2147500037i64;
																	result = sub_14006C090(a1, v12, 3ui64);
																	if ((int)result < 0)
																		return result;
																	result = sub_14006C090(a1, v12 + 1, 0x20ui64);
																	if ((int)result < 0)
																		return result;
																	result = sub_14006C090(a1, v12 + 2, 0x20ui64);
																	if ((int)result < 0)
																		return result;
																	++v11;
																	v12 += 3;
																} while (v11 < 2);
																result = sub_14006C090(a1, (_DWORD*)(a3 + 112), 0x12ui64);
																if ((int)result >= 0)
																{
																	result = sub_14006BE30(a1, (_BYTE*)(a3 + 116), 3ui64);
																	if ((int)result >= 0)
																	{
																		v13 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned __int8*)(a3 + 116));
																		*(_QWORD*)(a3 + 120) = v13;
																		if (!v13)
																			return 2147500037i64;
																		result = sub_140337160(a1, v13, 4i64 * *(unsigned __int8*)(a3 + 116));
																		if ((int)result < 0)
																			return result;
																		v14 = (unsigned __int8*)(a3 + 128);
																		result = sub_14006BE30(a1, (_BYTE*)(a3 + 128), 4ui64);
																		if ((int)result < 0)
																			return result;
																		v15 = (_BYTE*)sub_1403374E0(a2, 4i64 * *v14);
																		*(_QWORD*)(a3 + 136) = v15;
																		if (!v15)
																			return 2147500037i64;
																		result = sub_140337160(a1, v15, 4i64 * *v14);
																		if ((int)result < 0)
																			return result;
																		result = sub_14006BE30(a1, (_BYTE*)(a3 + 144), 6ui64);
																		if ((int)result < 0)
																			return result;
																		v16 = sub_1403374E0(a2, 16i64 * *(unsigned __int8*)(a3 + 144));
																		*(_QWORD*)(a3 + 152) = v16;
																		if (!v16)
																			return 2147500037i64;
																		v18 = 0;
																		if (*(_BYTE*)(a3 + 144))
																		{
																			while (1)
																			{
																				result = sub_1400852F0(a1, v17, *(_QWORD*)(a3 + 152) + 16i64 * v18);
																				if ((int)result < 0)
																					break;
																				if (++v18 >= *(_BYTE*)(a3 + 144))
																					return sub_14006C090(a1, (_DWORD*)(a3 + 160), 0x20ui64);
																			}
																		}
																		else
																		{
																			return sub_14006C090(a1, (_DWORD*)(a3 + 160), 0x20ui64);
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
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 14008C11B: variable 'v7' is possibly undefined
// 14008C149: variable 'v8' is possibly undefined
// 14008C191: variable 'v9' is possibly undefined
// 14008C1BF: variable 'v10' is possibly undefined
// 14008C402: variable 'v17' is possibly undefined

