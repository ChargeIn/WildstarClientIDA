//----- (00000001407E7EFC) ----------------------------------------------------
__int64 __fastcall sub_1407E7EFC(__int64 a1, signed int* a2, __int64 a3)
{
	_QWORD* v6; // rdi
	_QWORD* v7; // rbx
	_WORD* v8; // rax
	_QWORD* v9; // rbx
	UINT v10; // eax
	signed int v11; // ebx
	int v13; // [rsp+20h] [rbp-20h] BYREF
	LCID Locale; // [rsp+24h] [rbp-1Ch]
	LCID v15; // [rsp+28h] [rbp-18h]

	v6 = sub_1407E3D94();
	sub_1407E4830(&v13, 0i64, 0xCui64);
	sub_1407E3D94()[142] = &v13;
	if (!a1)
	{
		v13 |= 0x104u;
	LABEL_23:
		Locale = GetUserDefaultLCID();
		v15 = Locale;
		goto LABEL_24;
	}
	v7 = v6 + 41;
	v6[40] = a1;
	v6[41] = a1 + 128;
	if (a1 != -128 && *(_WORD*)(a1 + 128))
		sub_1407E74CC((__int64)&off_14095FD90, 22, (WCHAR**)v6 + 41);
	v13 = 0;
	v8 = (_WORD*)v6[40];
	if (!v8 || !*v8)
	{
		if (!*v7 || !*(_WORD*)*v7)
		{
			v13 = 260;
			goto LABEL_23;
		}
		v9 = sub_1407E3D94();
		*((_DWORD*)v9 + 87) = sub_1407E6CA0((_WORD*)v9[41]) == 3;
		EnumSystemLocalesW((LOCALE_ENUMPROCW)sub_1407E77F4, 1u);
		if ((v13 & 4) == 0)
			v13 = 0;
	LABEL_24:
		if (!v13)
			return 0i64;
		goto LABEL_25;
	}
	if (*v7 && *(_WORD*)*v7)
		sub_1407E78E0(&v13);
	else
		sub_1407E7994(&v13);
	if (!v13)
	{
		if ((unsigned int)sub_1407E74CC((__int64)&off_14095F150, 64, (WCHAR**)v6 + 40))
		{
			if (*v7 && *(_WORD*)*v7)
				sub_1407E78E0(&v13);
			else
				sub_1407E7994(&v13);
		}
		goto LABEL_24;
	}
LABEL_25:
	v10 = sub_1407E7DA4((WCHAR*)((a1 + 256) & -(__int64)(a1 != 0)), (__int64)&v13);
	v11 = v10;
	if (v10 && v10 - 65000 > 1 && IsValidCodePage((unsigned __int16)v10) && IsValidLocale(Locale, 1u))
	{
		if (a2)
			*a2 = v11;
		sub_1407E84D8(Locale, (char*)v6 + 920, 85);
		if (!a3)
			return 1i64;
		sub_1407E84D8(Locale, (char*)(a3 + 288), 85);
		if (GetLocaleInfoW(Locale, 0x1001u, (LPWSTR)a3, 64) && GetLocaleInfoW(v15, 0x1002u, (LPWSTR)(a3 + 128), 64))
		{
			sub_1407F0AF0(v11, (__int16*)(a3 + 256), 0x10ui64, 0xAu);
			return 1i64;
		}
	}
	return 0i64;
}
// 14095F150: using guessed type wchar_t *off_14095F150;
// 14095FD90: using guessed type wchar_t *off_14095FD90;

