//----- (00000001407F7684) ----------------------------------------------------
__int64 __fastcall sub_1407F7684(int a1, WCHAR* a2, DWORD a3)
{
	int v4; // edi
	int v5; // r8d
	__int64 v7; // r13
	__int64 v8; // rcx
	__int64 v9; // rsi
	char v10; // al
	int v11; // r14d
	char v12; // dl
	CHAR* v13; // r15
	LARGE_INTEGER v14; // rax
	__int64 v15; // rax
	CHAR* v16; // r12
	CHAR v17; // cl
	CHAR v18; // cl
	CHAR v19; // cl
	__int64 v20; // rcx
	int LastError; // eax
	unsigned int v22; // ebx
	DWORD v23; // edx
	__int64 v24; // rcx
	char v25; // al
	char v26; // al
	CHAR* v27; // rbx
	CHAR* v28; // r12
	CHAR v29; // al
	__int64 v30; // rcx
	char v31; // al
	char* v32; // rbx
	int i; // edx
	__int64 v34; // rcx
	__int64 v35; // rax
	char v36; // al
	char v37; // al
	WCHAR* v38; // r12
	int v39; // ebx
	int v40; // eax
	int v41; // eax
	bool v42; // zf
	char* v43; // r8
	CHAR* v44; // r9
	CHAR* v45; // rdx
	__int16 v46; // ax
	char v48; // al
	CHAR* v49; // rbx
	CHAR* v50; // r12
	__int16 v51; // ax
	__int64 v52; // rcx
	char v53; // al
	__int16 v54; // [rsp+30h] [rbp-28h] BYREF
	DWORD NumberOfCharsRead; // [rsp+34h] [rbp-24h] BYREF
	unsigned int v56; // [rsp+38h] [rbp-20h]
	DWORD Mode[2]; // [rsp+40h] [rbp-18h] BYREF
	unsigned int v58; // [rsp+48h] [rbp-10h]
	char Buffer; // [rsp+B0h] [rbp+58h] BYREF
	unsigned __int64 v62; // [rsp+B8h] [rbp+60h]

	v4 = 0;
	v5 = a1;
	v56 = -2;
	Mode[0] = 0;
	v58 = a3;
	if (a1 == -2)
	{
		*(_DWORD*)sub_1407DE140() = 0;
		*(_DWORD*)sub_1407DE1B0() = 9;
		return 0xFFFFFFFFi64;
	}
	if (a1 < 0
		|| a1 >= (unsigned int)dword_140DC523C
		|| (v7 = (__int64)a1 >> 5,
			v8 = qword_140C60410[v7],
			v9 = 88i64 * (v5 & 0x1F),
			v10 = *(_BYTE*)(v8 + v9 + 8),
			(v10 & 1) == 0))
	{
		*(_DWORD*)sub_1407DE140() = 0;
		*(_DWORD*)sub_1407DE1B0() = 9;
		goto LABEL_155;
	}
	if (a3 > 0x7FFFFFFF)
		goto LABEL_7;
	v11 = 0;
	if (!a3 || (v10 & 2) != 0)
		return 0i64;
	if (!a2)
		goto LABEL_7;
	v12 = (char)(2 * *(_BYTE*)(v8 + v9 + 56)) >> 1;
	LOBYTE(v62) = v12;
	if (v12 != 1)
	{
		if (v12 != 2)
		{
		LABEL_15:
			v13 = (CHAR*)a2;
			goto LABEL_22;
		}
		if ((a3 & 1) == 0)
		{
			a3 &= ~1u;
			goto LABEL_15;
		}
		goto LABEL_7;
	}
	if ((a3 & 1) != 0)
	{
	LABEL_7:
		*(_DWORD*)sub_1407DE140() = 0;
		*(_DWORD*)sub_1407DE1B0() = 22;
	LABEL_155:
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
	a3 >>= 1;
	if (a3 < 4)
		a3 = 4;
	v13 = (CHAR*)sub_1407E2C30(a3);
	if (!v13)
	{
		*(_DWORD*)sub_1407DE1B0() = 12;
		*(_DWORD*)sub_1407DE140() = 8;
		return 0xFFFFFFFFi64;
	}
	v14 = sub_1407F1094(a1, 0i64, 1u);
	v12 = v62;
	v5 = a1;
	*(LARGE_INTEGER*)(qword_140C60410[v7] + v9 + 64) = v14;
LABEL_22:
	v15 = qword_140C60410[v7];
	v16 = v13;
	if ((*(_BYTE*)(v15 + v9 + 8) & 0x48) != 0)
	{
		v17 = *(_BYTE*)(v15 + v9 + 9);
		if (v17 != 10)
		{
			if (a3)
			{
				*v13 = v17;
				--a3;
				v16 = v13 + 1;
				v11 = 1;
				*(_BYTE*)(qword_140C60410[v7] + v9 + 9) = 10;
				if (v12)
				{
					v18 = *(_BYTE*)(qword_140C60410[v7] + v9 + 57);
					if (v18 != 10)
					{
						if (a3)
						{
							*v16 = v18;
							--a3;
							v16 = v13 + 2;
							v11 = 2;
							*(_BYTE*)(qword_140C60410[v7] + v9 + 57) = 10;
							if (v12 == 1)
							{
								v19 = *(_BYTE*)(qword_140C60410[v7] + v9 + 58);
								if (v19 != 10)
								{
									if (a3)
									{
										*v16 = v19;
										v16 = v13 + 3;
										v11 = 3;
										--a3;
										*(_BYTE*)(qword_140C60410[v7] + v9 + 58) = 10;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!(unsigned int)sub_1407F0A90(v5)
		|| (v20 = qword_140C60410[v7], *(char*)(v20 + v9 + 8) >= 0)
		|| (Mode[0] = GetConsoleMode(*(HANDLE*)(v20 + v9), Mode)) == 0
		|| (_BYTE)v62 != 2)
	{
		if (!ReadFile(*(HANDLE*)(qword_140C60410[v7] + v9), v16, a3, &NumberOfCharsRead, 0i64)
			|| (v23 = NumberOfCharsRead, (NumberOfCharsRead & 0x80000000) != 0)
			|| (int)NumberOfCharsRead > (unsigned __int64)a3)
		{
			LastError = GetLastError();
			if (LastError == 5)
			{
				*(_DWORD*)sub_1407DE1B0() = 9;
				*(_DWORD*)sub_1407DE140() = 5;
				goto LABEL_39;
			}
			if (LastError == 109)
			{
				v22 = 0;
				goto LABEL_113;
			}
			goto LABEL_38;
		}
		goto LABEL_44;
	}
	if (ReadConsoleW(*(HANDLE*)(qword_140C60410[v7] + v9), v16, a3 >> 1, &NumberOfCharsRead, 0i64))
	{
		v23 = 2 * NumberOfCharsRead;
		NumberOfCharsRead *= 2;
	LABEL_44:
		v11 += v23;
		v24 = qword_140C60410[v7];
		v25 = *(_BYTE*)(v24 + v9 + 8);
		if (v25 >= 0)
			goto LABEL_112;
		if ((_BYTE)v62 != 2)
		{
			if (v23 && *v13 == 10)
				v26 = v25 | 4;
			else
				v26 = v25 & 0xFB;
			*(_BYTE*)(v24 + v9 + 8) = v26;
			v27 = v13;
			v28 = v13;
			*(_QWORD*)Mode = &v13[v11];
			if ((unsigned __int64)v13 < *(_QWORD*)Mode)
			{
				do
				{
					v29 = *v28;
					if (*v28 == 26)
					{
						v30 = qword_140C60410[v7];
						v31 = *(_BYTE*)(v30 + v9 + 8);
						if ((v31 & 0x40) != 0)
							*v27++ = *v28;
						else
							*(_BYTE*)(v30 + v9 + 8) = v31 | 2;
						break;
					}
					if (v29 == 13)
					{
						if ((unsigned __int64)v28 < *(_QWORD*)Mode - 1i64)
						{
							if (v28[1] != 10)
							{
								++v28;
							LABEL_68:
								*v27 = 13;
							LABEL_69:
								++v27;
								continue;
							}
							v28 += 2;
							goto LABEL_66;
						}
						++v28;
						if (!ReadFile(*(HANDLE*)(qword_140C60410[v7] + v9), &Buffer, 1u, &NumberOfCharsRead, 0i64)
							&& GetLastError()
							|| !NumberOfCharsRead)
						{
							goto LABEL_68;
						}
						if ((*(_BYTE*)(qword_140C60410[v7] + v9 + 8) & 0x48) != 0)
						{
							if (Buffer != 10)
							{
								*v27 = 13;
								*(_BYTE*)(qword_140C60410[v7] + v9 + 9) = Buffer;
								goto LABEL_69;
							}
						LABEL_66:
							*v27 = 10;
							goto LABEL_69;
						}
						if (v27 == v13 && Buffer == 10)
							goto LABEL_66;
						sub_1407F1094(a1, (LARGE_INTEGER)-1i64, 1u);
						if (Buffer != 10)
							goto LABEL_68;
					}
					else
					{
						*v27++ = v29;
						++v28;
					}
				} while ((unsigned __int64)v28 < *(_QWORD*)Mode);
			}
			v11 = (_DWORD)v27 - (_DWORD)v13;
			if ((_BYTE)v62 == 1 && v11)
			{
				v32 = v27 - 1;
				if (*v32 < 0)
				{
					for (i = 1; !byte_140C10980[(unsigned __int8)*v32] && i <= 4 && v32 >= v13; ++i)
						--v32;
					v34 = (unsigned __int8)*v32;
					if (!byte_140C10980[v34])
					{
						*(_DWORD*)sub_1407DE1B0() = 42;
						goto LABEL_39;
					}
					if (byte_140C10980[v34] + 1 == i)
					{
						LODWORD(v32) = i + (_DWORD)v32;
					}
					else
					{
						v35 = qword_140C60410[v7];
						if ((*(_BYTE*)(v35 + v9 + 8) & 0x48) != 0)
						{
							++v32;
							*(_BYTE*)(v35 + v9 + 9) = v34;
							if (i >= 2)
							{
								v36 = *v32++;
								*(_BYTE*)(qword_140C60410[v7] + v9 + 57) = v36;
							}
							if (i == 3)
							{
								v37 = *v32;
								LODWORD(v32) = (_DWORD)v32 + 1;
								*(_BYTE*)(qword_140C60410[v7] + v9 + 58) = v37;
							}
							LODWORD(v32) = (_DWORD)v32 - i;
						}
						else
						{
							sub_1407F1094(a1, (LARGE_INTEGER)-i, 1u);
						}
					}
				}
				else
				{
					LODWORD(v32) = (_DWORD)v32 + 1;
				}
				v38 = a2;
				v39 = (_DWORD)v32 - (_DWORD)v13;
				v40 = MultiByteToWideChar(0xFDE9u, 0, v13, v39, a2, v58 >> 1);
				v11 = v40;
				if (v40)
				{
					v42 = v40 == v39;
					v22 = v56;
					LOBYTE(v4) = !v42;
					v11 = 2 * v40;
					*(_DWORD*)(qword_140C60410[v7] + v9 + 72) = v4;
				}
				else
				{
					v41 = GetLastError();
					sub_1407DE160(v41);
					v22 = -1;
				}
				goto LABEL_114;
			}
		LABEL_112:
			v22 = v56;
			goto LABEL_113;
		}
		if (Mode[0])
		{
			v43 = v13;
			v44 = v13;
			v45 = &v13[2 * (v11 / 2)];
			if (v13 < v45)
			{
				while (1)
				{
					v46 = *(_WORD*)v44;
					if (*(_WORD*)v44 == 26)
						break;
					if (v46 == 13)
					{
						if (v44 < v45 - 2)
						{
							v44 += 2;
							if (*(_WORD*)v44 == 10)
								*(_WORD*)v43 = 10;
							else
								*(_WORD*)v43 = 13;
							v43 += 2;
						}
					}
					else
					{
						*(_WORD*)v43 = v46;
						v43 += 2;
						v44 += 2;
					}
					if (v44 >= v45)
						goto LABEL_111;
				}
				*(_BYTE*)(qword_140C60410[v7] + v9 + 8) |= 2u;
			}
		LABEL_111:
			v11 = 2 * ((v43 - v13) >> 1);
			goto LABEL_112;
		}
		if (v23 && *(_WORD*)v13 == 10)
			v48 = v25 | 4;
		else
			v48 = v25 & 0xFB;
		*(_BYTE*)(v24 + v9 + 8) = v48;
		v49 = v13;
		v50 = v13;
		v62 = (unsigned __int64)&v13[v11];
		if ((unsigned __int64)v13 >= v62)
		{
		LABEL_148:
			v11 = (_DWORD)v49 - (_DWORD)v13;
			goto LABEL_112;
		}
		while (1)
		{
			v51 = *(_WORD*)v50;
			if (*(_WORD*)v50 == 26)
			{
				v52 = qword_140C60410[v7];
				v53 = *(_BYTE*)(v52 + v9 + 8);
				if ((v53 & 0x40) != 0)
				{
					*(_WORD*)v49 = *(_WORD*)v50;
					LODWORD(v49) = (_DWORD)v49 + 2;
				}
				else
				{
					*(_BYTE*)(v52 + v9 + 8) = v53 | 2;
				}
				goto LABEL_148;
			}
			if (v51 == 13)
			{
				if ((unsigned __int64)v50 < v62 - 2)
				{
					if (*((_WORD*)v50 + 1) != 10)
					{
						v50 += 2;
					LABEL_141:
						*(_WORD*)v49 = 13;
					LABEL_142:
						v49 += 2;
						goto LABEL_143;
					}
					v50 += 4;
					goto LABEL_139;
				}
				v50 += 2;
				if (!ReadFile(*(HANDLE*)(qword_140C60410[v7] + v9), &v54, 2u, &NumberOfCharsRead, 0i64) && GetLastError()
					|| !NumberOfCharsRead)
				{
					goto LABEL_141;
				}
				if ((*(_BYTE*)(qword_140C60410[v7] + v9 + 8) & 0x48) != 0)
				{
					if (v54 != 10)
					{
						*(_WORD*)v49 = 13;
						*(_BYTE*)(qword_140C60410[v7] + v9 + 9) = v54;
						*(_BYTE*)(qword_140C60410[v7] + v9 + 57) = HIBYTE(v54);
						*(_BYTE*)(qword_140C60410[v7] + v9 + 58) = 10;
						goto LABEL_142;
					}
				LABEL_139:
					*(_WORD*)v49 = 10;
					goto LABEL_142;
				}
				if (v49 == v13 && v54 == 10)
					goto LABEL_139;
				sub_1407F1094(a1, (LARGE_INTEGER)-2i64, 1u);
				if (v54 != 10)
					goto LABEL_141;
			}
			else
			{
				*(_WORD*)v49 = v51;
				v49 += 2;
				v50 += 2;
			}
		LABEL_143:
			if ((unsigned __int64)v50 >= v62)
				goto LABEL_148;
		}
	}
	LastError = GetLastError();
LABEL_38:
	sub_1407DE160(LastError);
LABEL_39:
	v22 = -1;
LABEL_113:
	v38 = a2;
LABEL_114:
	if (v13 != (CHAR*)v38)
		sub_1407E14C0(v13);
	if (v22 == -2)
		return (unsigned int)v11;
	return v22;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 140DC523C: using guessed type int dword_140DC523C;

