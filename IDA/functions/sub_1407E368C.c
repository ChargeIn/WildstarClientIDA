//----- (00000001407E368C) ----------------------------------------------------
__int64 __fastcall sub_1407E368C(UINT a1, __int64 a2)
{
	const wchar_t* v3; // rsi
	UINT v4; // edi
	unsigned int v5; // ebp
	_DWORD* v6; // rax
	BYTE* i; // rdx
	unsigned int v8; // r8d
	unsigned int v9; // edi
	_BYTE* v10; // rax
	__int64 v11; // rcx
	_BYTE* v12; // rax
	__int64 v13; // rcx
	const wchar_t* v14; // rax
	_WORD* v15; // rdi
	__int64 j; // rcx
	__int64 v18; // r11
	_BYTE* v19; // r14
	__int64 v20; // rbp
	__int64 v21; // r11
	char* v22; // r9
	unsigned __int8* v23; // rdx
	unsigned int v24; // r8d
	__int64 v25; // r10
	UINT v26; // edi
	UINT v27; // edi
	UINT v28; // edi
	_WORD* v29; // rcx
	__int64 v30; // rdx
	struct _cpinfo CPInfo; // [rsp+20h] [rbp-48h] BYREF

	v3 = 0i64;
	v4 = sub_1407E3080(a1);
	if (v4)
	{
		v5 = 0;
		v6 = &unk_140C0FA80;
		while (*v6 != v4)
		{
			++v5;
			v6 += 12;
			if (v5 >= 5)
			{
				if (v4 - 65000 > 1 && IsValidCodePage((unsigned __int16)v4))
				{
					if (GetCPInfo(v4, &CPInfo))
					{
						sub_1407E4830((int*)(a2 + 24), 0i64, 0x101ui64);
						*(_DWORD*)(a2 + 4) = v4;
						*(_QWORD*)(a2 + 544) = 0i64;
						if (CPInfo.MaxCharSize <= 1)
						{
							*(_DWORD*)(a2 + 8) = 0;
						}
						else
						{
							for (i = CPInfo.LeadByte; *i; i += 2)
							{
								if (!i[1])
									break;
								v8 = *i;
								v9 = i[1];
								if (v8 <= v9)
								{
									v10 = (_BYTE*)(v8 + 1 + a2 + 24);
									v11 = v9 - v8 + 1;
									do
									{
										*v10++ |= 4u;
										--v11;
									} while (v11);
								}
							}
							v12 = (_BYTE*)(a2 + 26);
							v13 = 254i64;
							do
							{
								*v12++ |= 8u;
								--v13;
							} while (v13);
							switch (*(_DWORD*)(a2 + 4))
							{
							case 0x3A4:
								v14 = L"ja-JP";
								break;
							case 0x3A8:
								v14 = L"zh-CN";
								break;
							case 0x3B5:
								v14 = L"ko-KR";
								break;
							case 0x3B6:
								v14 = L"zh-TW";
								break;
							default:
								v14 = 0i64;
								break;
							}
							*(_QWORD*)(a2 + 544) = v14;
							*(_DWORD*)(a2 + 8) = 1;
						}
						v15 = (_WORD*)(a2 + 12);
						for (j = 6i64; j; --j)
							*v15++ = 0;
						goto LABEL_54;
					}
					if (dword_140C603EC)
						goto LABEL_2;
				}
				return 0xFFFFFFFFi64;
			}
		}
		sub_1407E4830((int*)(a2 + 24), 0i64, 0x101ui64);
		v18 = 3i64 * v5;
		v19 = &unk_140C0FA70;
		v20 = 4i64;
		v21 = 16 * v18;
		v22 = (char*)&unk_140C0FA80 + v21 + 16;
		do
		{
			v23 = (unsigned __int8*)v22;
			if (*v22)
			{
				do
				{
					if (!v23[1])
						break;
					v24 = *v23;
					if (v24 <= v23[1])
					{
						v25 = v24 + 1;
						do
						{
							if ((unsigned int)v25 >= 0x101)
								break;
							++v24;
							*(_BYTE*)(v25 + a2 + 24) |= *v19;
							v25 = (unsigned int)(v25 + 1);
						} while (v24 <= v23[1]);
					}
					v23 += 2;
				} while (*v23);
			}
			v22 += 8;
			++v19;
			--v20;
		} while (v20);
		*(_DWORD*)(a2 + 4) = v4;
		*(_DWORD*)(a2 + 8) = 1;
		v26 = v4 - 932;
		if (v26)
		{
			v27 = v26 - 4;
			if (v27)
			{
				v28 = v27 - 13;
				if (v28)
				{
					if (v28 == 1)
						v3 = L"zh-TW";
				}
				else
				{
					v3 = L"ko-KR";
				}
			}
			else
			{
				v3 = L"zh-CN";
			}
		}
		else
		{
			v3 = L"ja-JP";
		}
		*(_QWORD*)(a2 + 544) = v3;
		v29 = (_WORD*)(a2 + 12);
		v30 = 6i64;
		do
		{
			*v29 = *(_WORD*)((char*)v29 + (_QWORD)&unk_140C0FA80 + v21 - a2 - 8);
			++v29;
			--v30;
		} while (v30);
	LABEL_54:
		sub_1407E3190(a2);
	}
	else
	{
	LABEL_2:
		sub_1407E3100(a2);
	}
	return 0i64;
}
// 14095E468: using guessed type wchar_t aJaJp[6];
// 14095E478: using guessed type wchar_t aZhCn[6];
// 14095E488: using guessed type wchar_t aKoKr[6];
// 14095E498: using guessed type wchar_t aZhTw[6];
// 140C603EC: using guessed type int dword_140C603EC;

