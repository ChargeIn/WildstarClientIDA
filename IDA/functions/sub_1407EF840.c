#include "../winhttp.h"

//----- (00000001407EF840) ----------------------------------------------------
__int64 __fastcall sub_1407EF840(const CHAR* a1, _BYTE* a2, int a3, __int64 a4)
{
	int v5; // r9d
	int v6; // r10d
	int v7; // r11d
	_BYTE* i; // rbx
	int v12; // edi
	unsigned int v13; // esi
	_BYTE* v14; // rbx
	int v15; // edx
	char v16; // al
	unsigned __int8* j; // rbx
	int v18; // eax
	int v19; // [rsp+68h] [rbp+10h] BYREF

	v5 = 0;
	v6 = 0;
	v7 = 0;
	for (i = a2; *i == 32; ++i)
		;
	switch (*i)
	{
	case 'a':
		v12 = 265;
		break;
	case 'r':
		v12 = 0;
		v13 = dword_140C60870 | 1;
		goto LABEL_12;
	case 'w':
		v12 = 769;
		break;
	default:
	LABEL_6:
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0i64;
	}
	v13 = dword_140C60870 | 2;
LABEL_12:
	v14 = i + 1;
	v15 = 1;
	v16 = *v14;
	if (!*v14)
		goto LABEL_66;
	while (v15)
	{
		if (v16 > 83)
		{
			switch (v16)
			{
			case 'T':
				if ((v12 & 0x1000) == 0)
				{
					v12 |= 0x1000u;
					break;
				}
				goto LABEL_46;
			case 'b':
				if ((v12 & 0xC000) != 0)
					goto LABEL_46;
				v12 |= 0x8000u;
				break;
			case 'c':
				if (v5)
					goto LABEL_46;
				v5 = 1;
				v13 |= 0x4000u;
				break;
			case 'n':
				if (v5)
					goto LABEL_46;
				v5 = 1;
				v13 &= ~0x4000u;
				break;
			case 't':
				if ((v12 & 0xC000) != 0)
					goto LABEL_46;
				v12 |= 0x4000u;
				break;
			default:
				goto LABEL_6;
			}
		}
		else if (v16 == 83)
		{
			if (v6)
				goto LABEL_46;
			v6 = 1;
			v12 |= 0x20u;
		}
		else if (v16 != 32)
		{
			switch (v16)
			{
			case '+':
				if ((v12 & 2) != 0)
					goto LABEL_46;
				v12 = v12 & 0xFFFFFFFC | 2;
				v13 = v13 & 0xFFFFFF7C | 0x80;
				break;
			case ',':
				v7 = 1;
			LABEL_46:
				v15 = 0;
				break;
			case 'D':
				if ((v12 & 0x40) != 0)
					goto LABEL_46;
				v12 |= 0x40u;
				break;
			case 'N':
				v12 |= 0x80u;
				break;
			case 'R':
				if (v6)
					goto LABEL_46;
				v6 = 1;
				v12 |= 0x10u;
				break;
			default:
				goto LABEL_6;
			}
		}
		v16 = *++v14;
		if (!*v14)
			break;
	}
	if (!v7)
		goto LABEL_66;
	while (*v14 == 32)
		++v14;
	if ((unsigned int)sub_1407F58E8("ccs", v14, 3ui64))
		goto LABEL_6;
	for (j = v14 + 3; *j == 32; ++j)
		;
	if (*j != 61)
		goto LABEL_6;
	do
		++j;
	while (*j == 32);
	if (!(unsigned int)sub_1407F5A1C(j, "UTF-8", 5ui64))
	{
		v14 = j + 5;
		v12 |= 0x40000u;
		goto LABEL_66;
	}
	if (!(unsigned int)sub_1407F5A1C(j, "UTF-16LE", 8ui64))
	{
		v14 = j + 8;
		v12 |= 0x20000u;
		goto LABEL_66;
	}
	if ((unsigned int)sub_1407F5A1C(j, "UNICODE", 7ui64))
		goto LABEL_6;
	v14 = j + 7;
	v12 |= 0x10000u;
LABEL_66:
	while (*v14 == 32)
		++v14;
	if (*v14)
		goto LABEL_6;
	if ((unsigned int)sub_1407F58B4(&v19, a1, v12, a3, 384))
		return 0i64;
	++dword_140C5F564;
	*(_DWORD*)(a4 + 8) = 0;
	v18 = v19;
	*(_QWORD*)a4 = 0i64;
	*(_QWORD*)(a4 + 16) = 0i64;
	*(_QWORD*)(a4 + 40) = 0i64;
	*(_DWORD*)(a4 + 28) = v18;
	*(_DWORD*)(a4 + 24) = v13;
	return a4;
}
// 140C5F564: using guessed type int dword_140C5F564;
// 140C60870: using guessed type int dword_140C60870;

