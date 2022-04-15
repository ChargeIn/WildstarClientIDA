//----- (00000001401B5110) ----------------------------------------------------
__int64 __fastcall sub_1401B5110(__int64 a1, _BYTE* a2, __int64 a3, __int64 a4)
{
	WCHAR v7; // ax
	__int64 v9; // rbx
	unsigned __int16 v10; // dx
	__int64 v11; // r11
	unsigned __int16* v12; // rdi
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // r8
	__int64 v15; // rax
	unsigned __int16 v16; // r9
	unsigned __int16 v17; // cx
	unsigned __int64 v18; // r8
	unsigned __int64 v19; // r9
	__int64 v20; // rax
	unsigned __int16 v21; // r10
	WCHAR* v22; // rdi
	WCHAR v23[264]; // [rsp+20h] [rbp-248h] BYREF

	if (!*(_QWORD*)(a1 + 2120))
	{
		*(_WORD*)a2 = 0;
		return 0i64;
	}
	v7 = *(_WORD*)a4;
	if (*(_WORD*)a4 == 92 || v7 && *(_WORD*)(a4 + 2) == 58 || v7 == 46)
	{
		sub_1401B5020(a1, v23, a3, (const WCHAR*)a4);
		v10 = v23[0];
		v9 = 0i64;
		v11 = 0i64;
		if (v23[0])
		{
			v12 = (unsigned __int16*)(a1 + 1600);
			do
			{
				if (v10 >= 0x80u)
				{
					v13 = 0i64;
					v14 = 977i64;
					while (1)
					{
						v15 = v13 + ((v14 - v13) >> 1);
						v16 = word_140A41A80[v15];
						if (v10 >= v16)
						{
							if (v10 <= v16)
							{
								v10 = word_140A40AF0[v15];
								goto LABEL_26;
							}
							v13 = v15 + 1;
						}
						else
						{
							v14 = v13 + ((v14 - v13) >> 1);
						}
						if (v13 >= v14)
							goto LABEL_26;
					}
				}
				if ((unsigned __int16)(v10 - 65) <= 0x19u)
					v10 += 32;
			LABEL_26:
				v17 = *v12;
				if (*v12 >= 0x80u)
				{
					v18 = 0i64;
					v19 = 977i64;
					while (1)
					{
						v20 = v18 + ((v19 - v18) >> 1);
						v21 = word_140A41A80[v20];
						if (v17 >= v21)
						{
							if (v17 <= v21)
							{
								v17 = word_140A40AF0[v20];
								goto LABEL_37;
							}
							v18 = v20 + 1;
						}
						else
						{
							v19 = v18 + ((v19 - v18) >> 1);
						}
						if (v18 >= v19)
							goto LABEL_37;
					}
				}
				if ((unsigned __int16)(v17 - 65) <= 0x19u)
					v17 += 32;
			LABEL_37:
				if (v10 != v17)
					break;
				v10 = v23[++v11];
				++v12;
			} while (v10);
		}
		if (*(_WORD*)(a1 + 2 * v11 + 1600) || v23[v11] != 92)
			goto LABEL_8;
		v22 = &v23[v11 + 1];
		sub_14001B370(a2, 260i64, L"%s", v22);
		for (; *v22; ++v9)
			++v22;
		return v9;
	}
	if (!(unsigned int)sub_14018E3E0(a4, L"http", 4ui64))
	{
	LABEL_8:
		*(_WORD*)a2 = 0;
		return 0i64;
	}
	sub_14001B370(a2, 260i64, L"%s", a4);
	v9 = 0i64;
	if (!*(_WORD*)a4)
		return v9;
	do
		++v9;
	while (*(_WORD*)(a4 + 2 * v9));
	return v9;
}
// 1409E4EEC: using guessed type wchar_t aS_27[3];
// 1409E4F94: using guessed type wchar_t aS_26[3];
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];
// 140A47368: using guessed type wchar_t aHttp[5];

