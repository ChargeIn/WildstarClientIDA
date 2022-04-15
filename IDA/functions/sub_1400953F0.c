//----- (00000001400953F0) ----------------------------------------------------
__int64 __fastcall sub_1400953F0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rdx
	__int64 v8; // rax
	unsigned __int8 v9; // di
	__int64 v10; // rax
	__int64 v11; // rdx
	unsigned __int8 v12; // di
	__int64 v13; // rax
	__int64 v14; // rdx
	unsigned __int8 v15; // di
	__int64 v16; // rax
	__int64 v17; // rdx
	unsigned __int8 v18; // di

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 1ui64);
		if ((int)result >= 0)
		{
			result = sub_1400A8A30(a1, v7, (_DWORD*)(a3 + 8));
			if ((int)result >= 0)
			{
				result = sub_14006BE30(a1, (_BYTE*)(a3 + 20), 8ui64);
				if ((int)result >= 0)
				{
					v8 = sub_1403374E0(a2, 24i64 * *(unsigned __int8*)(a3 + 20));
					*(_QWORD*)(a3 + 24) = v8;
					if (v8)
					{
						v9 = 0;
						if (*(_BYTE*)(a3 + 20))
						{
							do
							{
								result = sub_140094AA0(a1, a2, *(_QWORD*)(a3 + 24) + 24i64 * v9);
								if ((int)result < 0)
									return result;
							} while (++v9 < *(_BYTE*)(a3 + 20));
						}
						result = sub_14006BE30(a1, (_BYTE*)(a3 + 32), 8ui64);
						if ((int)result < 0)
							return result;
						v10 = sub_1403374E0(a2, 28i64 * *(unsigned __int8*)(a3 + 32));
						*(_QWORD*)(a3 + 40) = v10;
						if (v10)
						{
							v12 = 0;
							if (*(_BYTE*)(a3 + 32))
							{
								do
								{
									result = sub_140094970(a1, v11, *(_QWORD*)(a3 + 40) + 28i64 * v12);
									if ((int)result < 0)
										return result;
								} while (++v12 < *(_BYTE*)(a3 + 32));
							}
							result = sub_14006BE30(a1, (_BYTE*)(a3 + 48), 8ui64);
							if ((int)result < 0)
								return result;
							v13 = sub_1403374E0(a2, 32i64 * *(unsigned __int8*)(a3 + 48));
							*(_QWORD*)(a3 + 56) = v13;
							if (v13)
							{
								v15 = 0;
								if (*(_BYTE*)(a3 + 48))
								{
									do
									{
										result = sub_140094A00(a1, v14, *(_QWORD*)(a3 + 56) + 32i64 * v15);
										if ((int)result < 0)
											return result;
									} while (++v15 < *(_BYTE*)(a3 + 48));
								}
								result = sub_14006BE30(a1, (_BYTE*)(a3 + 64), 8ui64);
								if ((int)result < 0)
									return result;
								v16 = sub_1403374E0(a2, 36i64 * *(unsigned __int8*)(a3 + 64));
								*(_QWORD*)(a3 + 72) = v16;
								if (v16)
								{
									v18 = 0;
									if (!*(_BYTE*)(a3 + 64))
										return sub_14006BE30(a1, (_BYTE*)(a3 + 80), 8ui64);
									while (1)
									{
										result = sub_140095340(a1, v17, (_DWORD*)(*(_QWORD*)(a3 + 72) + 36i64 * v18));
										if ((int)result < 0)
											break;
										if (++v18 >= *(_BYTE*)(a3 + 64))
											return sub_14006BE30(a1, (_BYTE*)(a3 + 80), 8ui64);
									}
									return result;
								}
							}
						}
					}
					return 2147500037i64;
				}
			}
		}
	}
	return result;
}
// 140095465: variable 'v7' is possibly undefined
// 14009553F: variable 'v11' is possibly undefined
// 1400955A0: variable 'v14' is possibly undefined
// 140095613: variable 'v17' is possibly undefined

