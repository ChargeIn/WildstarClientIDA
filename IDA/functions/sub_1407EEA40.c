//----- (00000001407EEA40) ----------------------------------------------------
__int64 __fastcall sub_1407EEA40(const WCHAR* a1, _WORD* a2, int a3, __int64 a4)
{
	_WORD* v6; // rbx
	int v8; // r9d
	int v9; // r10d
	int i; // r11d
	int v11; // eax
	__int64 result; // rax
	int v13; // edi
	unsigned int v14; // esi
	unsigned __int16* v15; // rbx
	int v16; // edx
	unsigned __int16 v17; // ax
	WCHAR* j; // rbx
	int v19; // eax
	int v20; // [rsp+68h] [rbp+10h] BYREF

	v6 = a2;
	v8 = 0;
	v9 = 0;
	for (i = 0; *v6 == 32; ++v6)
		;
	v11 = (unsigned __int16)*v6;
	switch (v11)
	{
	case 'a':
		v13 = 265;
		break;
	case 'r':
		v13 = 0;
		v14 = dword_140C60870 | 1;
		goto LABEL_12;
	case 'w':
		v13 = 769;
		break;
	default:
	LABEL_6:
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0i64;
	}
	v14 = dword_140C60870 | 2;
LABEL_12:
	v15 = v6 + 1;
	v16 = 1;
	v17 = *v15;
	if (!*v15)
		goto LABEL_66;
	while (v16)
	{
		if (v17 > 0x53u)
		{
			switch (v17)
			{
			case 'T':
				if ((v13 & 0x1000) == 0)
				{
					v13 |= 0x1000u;
					break;
				}
				goto LABEL_46;
			case 'b':
				if ((v13 & 0xC000) != 0)
					goto LABEL_46;
				v13 |= 0x8000u;
				break;
			case 'c':
				if (v8)
					goto LABEL_46;
				v8 = 1;
				v14 |= 0x4000u;
				break;
			case 'n':
				if (v8)
					goto LABEL_46;
				v8 = 1;
				v14 &= ~0x4000u;
				break;
			case 't':
				if ((v13 & 0xC000) != 0)
					goto LABEL_46;
				v13 |= 0x4000u;
				break;
			default:
				goto LABEL_6;
			}
		}
		else if (v17 == 83)
		{
			if (v9)
				goto LABEL_46;
			v9 = 1;
			v13 |= 0x20u;
		}
		else if (v17 != 32)
		{
			switch (v17)
			{
			case '+':
				if ((v13 & 2) != 0)
					goto LABEL_46;
				v13 = v13 & 0xFFFFFFFC | 2;
				v14 = v14 & 0xFFFFFF7C | 0x80;
				break;
			case ',':
				i = 1;
			LABEL_46:
				v16 = 0;
				break;
			case 'D':
				if ((v13 & 0x40) != 0)
					goto LABEL_46;
				v13 |= 0x40u;
				break;
			case 'N':
				v13 |= 0x80u;
				break;
			case 'R':
				if (v9)
					goto LABEL_46;
				v9 = 1;
				v13 |= 0x10u;
				break;
			default:
				goto LABEL_6;
			}
		}
		v17 = *++v15;
		if (!*v15)
			break;
	}
	if (!i)
		goto LABEL_66;
	while (*v15 == 32)
		++v15;
	if ((unsigned int)sub_1407E6CDC(L"ccs", v15, 3i64))
		goto LABEL_6;
	for (j = v15 + 3; *j == 32; ++j)
		;
	if (*j != 61)
		goto LABEL_6;
	do
		++j;
	while (*j == 32);
	if (!(unsigned int)sub_1407F0D9C(j, L"UTF-8", 5i64))
	{
		v15 = j + 5;
		v13 |= 0x40000u;
		goto LABEL_66;
	}
	if (!(unsigned int)sub_1407F0D9C(j, L"UTF-16LE", 8i64))
	{
		v15 = j + 8;
		v13 |= 0x20000u;
		goto LABEL_66;
	}
	if ((unsigned int)sub_1407F0D9C(j, L"UNICODE", 7i64))
		goto LABEL_6;
	v15 = j + 7;
	v13 |= 0x10000u;
LABEL_66:
	while (*v15 == 32)
		++v15;
	if (*v15)
		goto LABEL_6;
	if ((unsigned int)sub_1407F5234(&v20, a1, v13, a3, 384))
		return 0i64;
	++dword_140C5F564;
	v19 = v20;
	*(_DWORD*)(a4 + 24) = v14;
	*(_DWORD*)(a4 + 28) = v19;
	*(_DWORD*)(a4 + 8) = 0;
	*(_QWORD*)a4 = 0i64;
	result = a4;
	*(_QWORD*)(a4 + 16) = 0i64;
	*(_QWORD*)(a4 + 40) = 0i64;
	return result;
}
// 1409639E0: using guessed type wchar_t aCcs[4];
// 1409639E8: using guessed type wchar_t aUtf8[6];
// 1409639F8: using guessed type wchar_t aUtf16le[9];
// 140963A10: using guessed type wchar_t aUnicode[8];
// 140C5F564: using guessed type int dword_140C5F564;
// 140C60870: using guessed type int dword_140C60870;

