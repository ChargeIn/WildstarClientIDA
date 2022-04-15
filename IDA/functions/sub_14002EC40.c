//----- (000000014002EC40) ----------------------------------------------------
__int64 __fastcall sub_14002EC40(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v7; // rcx
	unsigned __int64 v8; // rdx
	_DWORD* i; // rax

	if (!*(_QWORD*)(a1 + 4712))
		return 0i64;
	if ((dword_140C8B1D4 & 1) == 0)
	{
		dword_140C8B1D4 |= 1u;
		sub_1401AD620((__int64)&unk_140C8B1E0, L"Customize Slider Id");
	}
	sub_1401ADA40((__int64)&unk_140C8B1E0, a2);
	if ((dword_140C8B1D4 & 2) == 0)
	{
		dword_140C8B1D4 |= 2u;
		sub_1401AD740((__int64)&unk_140C8B300, L"Customize Slider value");
	}
	sub_1401ADA40((__int64)&unk_140C8B300, a3);
	v7 = 0i64;
	v8 = *(_QWORD*)(qword_140C63600 + 40);
	if (!v8)
		return sub_1400310B0(a1 + 4696, a2, a3);
	for (i = *(_DWORD**)(qword_140C63600 + 32); *i != a2; ++i)
	{
		if (++v7 >= v8)
			return sub_1400310B0(a1 + 4696, a2, a3);
	}
	return sub_14002EAF0((_DWORD*)a1, a3);
}
// 1409EEC80: using guessed type wchar_t aCustomizeSlide[20];
// 1409EECC0: using guessed type wchar_t aCustomizeSlide_0[23];
// 140C63600: using guessed type __int64 qword_140C63600;
// 140C8B1D4: using guessed type int dword_140C8B1D4;

