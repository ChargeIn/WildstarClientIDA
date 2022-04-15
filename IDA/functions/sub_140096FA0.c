//----- (0000000140096FA0) ----------------------------------------------------
__int64 __fastcall sub_140096FA0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	unsigned __int64 v7; // rax
	__int64 v8; // rax
	unsigned __int8 v9; // si
	__int64 v10; // rax
	unsigned __int16 v11; // bp
	unsigned __int16 v12; // si
	__int64 v13; // rax
	__int64 v14; // rdx
	unsigned __int8 v15; // si
	__int64 v16; // rax
	__int64 v17; // rdx
	unsigned __int8 v18; // si
	__int64 v19; // rax
	__int64 v20; // r8
	unsigned __int64 v21; // rax
	unsigned __int64 v22; // rax
	unsigned __int64 v23; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 6ui64);
		if ((int)result >= 0)
		{
			v7 = *(int*)(a3 + 4);
			if (v7 < 0x25)
			{
				result = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_14009702A[v7])(
					a1,
					(__int64)a2,
					(_DWORD*)(a3 + 8));
				if ((int)result < 0)
					return result;
				result = sub_14006BE30(a1, (_BYTE*)(a3 + 128), 8ui64);
				if ((int)result < 0)
					return result;
				result = sub_14006BE30(a1, (_BYTE*)(a3 + 129), 5ui64);
				if ((int)result < 0)
					return result;
				v8 = sub_1403374E0(a2, 16i64 * *(unsigned __int8*)(a3 + 129));
				*(_QWORD*)(a3 + 136) = v8;
				if (v8)
				{
					v9 = 0;
					if (*(_BYTE*)(a3 + 129))
					{
						do
						{
							result = sub_140096230(a1, (__int64)a2, (_DWORD*)(*(_QWORD*)(a3 + 136) + 16i64 * v9));
							if ((int)result < 0)
								return result;
						} while (++v9 < *(_BYTE*)(a3 + 129));
					}
					result = sub_14006C090(a1, (_DWORD*)(a3 + 144), 0x20ui64);
					if ((int)result < 0)
						return result;
					result = sub_14006BF60(a1, (_WORD*)(a3 + 148), 5ui64);
					if ((int)result < 0)
						return result;
					v10 = sub_1403374E0(a2, 72i64 * *(unsigned __int16*)(a3 + 148));
					*(_QWORD*)(a3 + 152) = v10;
					if (v10)
					{
						v11 = 0;
						v12 = 0;
						if (*(_WORD*)(a3 + 148))
						{
							do
							{
								result = sub_1400AF930(a1, (__int64)a2, (int*)(*(_QWORD*)(a3 + 152) + 72i64 * v12));
								if ((int)result < 0)
									return result;
							} while (++v12 < *(_WORD*)(a3 + 148));
						}
						result = sub_14006BE30(a1, (_BYTE*)(a3 + 160), 8ui64);
						if ((int)result < 0)
							return result;
						v13 = sub_1403374E0(a2, 12i64 * *(unsigned __int8*)(a3 + 160));
						*(_QWORD*)(a3 + 168) = v13;
						if (v13)
						{
							v15 = 0;
							if (*(_BYTE*)(a3 + 160))
							{
								do
								{
									result = sub_1400961D0(a1, v14, (_DWORD*)(*(_QWORD*)(a3 + 168) + 12i64 * v15));
									if ((int)result < 0)
										return result;
								} while (++v15 < *(_BYTE*)(a3 + 160));
							}
							result = sub_14006BE30(a1, (_BYTE*)(a3 + 176), 7ui64);
							if ((int)result < 0)
								return result;
							v16 = sub_1403374E0(a2, 16i64 * *(unsigned __int8*)(a3 + 176));
							*(_QWORD*)(a3 + 184) = v16;
							if (v16)
							{
								v18 = 0;
								if (*(_BYTE*)(a3 + 176))
								{
									do
									{
										result = sub_1400AB890(a1, v17, (_DWORD*)(*(_QWORD*)(a3 + 184) + 16i64 * v18));
										if ((int)result < 0)
											return result;
									} while (++v18 < *(_BYTE*)(a3 + 176));
								}
								result = sub_14006BF60(a1, (_WORD*)(a3 + 192), 9ui64);
								if ((int)result < 0)
									return result;
								v19 = sub_1403374E0(a2, (unsigned __int64)*(unsigned __int16*)(a3 + 192) << 6);
								*(_QWORD*)(a3 + 200) = v19;
								if (v19)
								{
									if (*(_WORD*)(a3 + 192))
									{
										do
										{
											result = sub_140094BF0(a1, a2, *(_QWORD*)(a3 + 200) + ((unsigned __int64)v11 << 6));
											if ((int)result < 0)
												return result;
										} while (++v11 < *(_WORD*)(a3 + 192));
									}
									result = sub_14006C090(a1, (_DWORD*)(a3 + 208), 0x20ui64);
									if ((int)result < 0)
										return result;
									result = sub_14006C090(a1, (_DWORD*)(a3 + 212), 0xEui64);
									if ((int)result < 0)
										return result;
									result = sub_14006C090(a1, (_DWORD*)(a3 + 216), 0xEui64);
									if ((int)result < 0)
										return result;
									result = sub_14006C090(a1, (_DWORD*)(a3 + 220), 0x20ui64);
									if ((int)result < 0)
										return result;
									result = sub_14006C120(a1, (__int64*)(a3 + 224), v20);
									if ((int)result < 0)
										return result;
									result = sub_14006C090(a1, (_DWORD*)(a3 + 232), 2ui64);
									if ((int)result < 0)
										return result;
									v21 = *(int*)(a3 + 232);
									if (v21 < 2)
									{
										result = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_1400973C4[v21])(
											a1,
											(__int64)a2,
											(_DWORD*)(a3 + 236));
										if ((int)result < 0)
											return result;
										result = sub_14006C090(a1, (_DWORD*)(a3 + 240), 2ui64);
										if ((int)result < 0)
											return result;
										v22 = *(int*)(a3 + 240);
										if (v22 < 2)
										{
											result = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_14009740B[v22])(
												a1,
												(__int64)a2,
												(_DWORD*)(a3 + 248));
											if ((int)result < 0)
												return result;
											result = sub_14006C090(a1, (_DWORD*)(a3 + 264), 2ui64);
											if ((int)result < 0)
												return result;
											v23 = *(int*)(a3 + 264);
											if (v23 < 2)
											{
												result = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_140097455[v23])(
													a1,
													(__int64)a2,
													(_DWORD*)(a3 + 268));
												if ((int)result >= 0)
												{
													result = sub_14006C090(a1, (_DWORD*)(a3 + 276), 0xEui64);
													if ((int)result >= 0)
													{
														result = sub_14006C090(a1, (_DWORD*)(a3 + 280), 0x11ui64);
														if ((int)result >= 0)
															return sub_14006C090(a1, (_DWORD*)(a3 + 284), 0xFui64);
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
			return 2147500037i64;
		}
	}
	return result;
}
// 1400971E7: variable 'v14' is possibly undefined
// 140097262: variable 'v17' is possibly undefined
// 14009737C: variable 'v20' is possibly undefined
// 140C1EA30: using guessed type __int64 (__fastcall *funcs_14009702A[51])();
// 140C1EB58: using guessed type __int64 (__fastcall *funcs_140097455[14])();
// 140C1EB68: using guessed type __int64 (__fastcall *funcs_14009740B[12])();
// 140C1EB78: using guessed type __int64 (__fastcall *funcs_1400973C4[10])();

