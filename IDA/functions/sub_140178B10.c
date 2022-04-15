//----- (0000000140178B10) ----------------------------------------------------
__int64 __fastcall sub_140178B10(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6)
{
	__int64 v6; // rbx
	void(__fastcall * **v9)(_QWORD); // r12
	__int64 v10; // r8
	bool v11; // zf
	void(__fastcall * **v12)(_QWORD); // rbp
	unsigned int v13; // edx
	int* v14; // rdx
	__int128 v16; // [rsp+40h] [rbp-38h] BYREF
	__int64 v17; // [rsp+80h] [rbp+8h] BYREF

	v6 = 0i64;
	sub_1400C5920(a1, a2, a3, a4, a5, a6, 0i64);
	*(_QWORD*)a1 = off_140B5D890;
	sub_1401095E0(a1 + 1024);
	sub_1401095E0(a1 + 1072);
	*(_DWORD*)(a1 + 1120) = 0;
	*(_BYTE*)(a1 + 1124) = 0;
	*(_DWORD*)(a1 + 1128) = 100;
	*(_DWORD*)(a1 + 1144) = 0;
	*(_BYTE*)(a1 + 1148) = 0;
	*(_QWORD*)(a1 + 1168) = 0i64;
	*(_QWORD*)(a1 + 1176) = 0i64;
	*(_QWORD*)(a1 + 1184) = 0i64;
	*(_QWORD*)(a1 + 1192) = 0i64;
	*(_QWORD*)(a1 + 1208) = 0i64;
	*(_QWORD*)(a1 + 1216) = 0i64;
	*(_QWORD*)(a1 + 1224) = 0i64;
	*(_QWORD*)(a1 + 1240) = 0i64;
	*(_QWORD*)(a1 + 1248) = 0i64;
	*(_QWORD*)(a1 + 1256) = 0i64;
	*(_QWORD*)(a1 + 432) |= 0x1000ui64;
	if (a2)
	{
		if (!*(_QWORD*)(a1 + 1024) || !sub_14002C740(a1 + 1040, L"CRB_ChatLogSprites:sprChatTabSelected"))
		{
			v9 = (void(__fastcall***)(_QWORD))sub_140108E80(
				a2 + 240,
				(const __m128i*)L"CRB_ChatLogSprites:sprChatTabSelected");
			if (v9)
			{
				v10 = 0i64;
				do
					v11 = aCrbChatlogspri[++v10] == 0;
				while (!v11);
				sub_14001C480(a1 + 1040, (int*)L"CRB_ChatLogSprites:sprChatTabSelected", (int*)&aCrbChatlogspri[v10]);
			}
			sub_1401097F0((_QWORD*)(a1 + 1024), v9);
		}
		if (!*(_QWORD*)(a1 + 1072) || !sub_14002C740(a1 + 1088, L"CRB_ChatLogSprites:sprChatTabUnselected"))
		{
			v12 = (void(__fastcall***)(_QWORD))sub_140108E80(
				a2 + 240,
				(const __m128i*)L"CRB_ChatLogSprites:sprChatTabUnselected");
			if (v12)
			{
				do
					v11 = aCrbChatlogspri_0[++v6] == 0;
				while (!v11);
				sub_14001C480(a1 + 1088, (int*)L"CRB_ChatLogSprites:sprChatTabUnselected", (int*)&aCrbChatlogspri_0[v6]);
			}
			sub_1401097F0((_QWORD*)(a1 + 1072), v12);
		}
	}
	v13 = *(_DWORD*)(a1 + 708);
	v16 = xmmword_140C777D0;
	sub_1401429A0(qword_140C63678, v13);
	*(_DWORD*)(a1 + 708) = sub_140141F10(qword_140C63678, (__m128*) & v16);
	v14 = *(int**)(a1 + 1216);
	v17 = a1;
	if (v14 == *(int**)(a1 + 1224))
	{
		sub_1400B9430((_QWORD*)(a1 + 1200), v14, &v17);
		sub_1401795D0(a1);
		return a1;
	}
	else
	{
		if (v14)
			*(_QWORD*)v14 = a1;
		*(_QWORD*)(a1 + 1216) += 8i64;
		sub_1401795D0(a1);
		return a1;
	}
}
// 140178C71: conditional instruction was optimized away because r15.8!=0
// 140A3AD50: using guessed type wchar_t aCrbChatlogspri_0[40];
// 140A3ADA0: using guessed type wchar_t aCrbChatlogspri[38];
// 140B5D890: using guessed type __int64 (__fastcall *off_140B5D890[25])();
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

