//----- (00000001406DB520) ----------------------------------------------------
__int64 __fastcall sub_1406DB520(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6)
{
	__int64 v6; // rbx
	void(__fastcall * **v9)(_QWORD); // rbp

	v6 = 0i64;
	sub_1400C5920(a1, a2, a3, a4, a5, a6, 0i64);
	*(_QWORD*)a1 = off_140B719F0;
	sub_1401095E0(a1 + 1024);
	sub_1401095E0(a1 + 1072);
	*(_OWORD*)(a1 + 1168) = 0i64;
	*(_DWORD*)(a1 + 1184) = 0x40000000;
	*(_QWORD*)(a1 + 1200) = 0i64;
	*(_QWORD*)(a1 + 1192) = 0i64;
	sub_140771790((__int64*)(a1 + 1216), a2);
	*(_QWORD*)(a1 + 2072) = 0i64;
	*(_QWORD*)(a1 + 2080) = 0i64;
	if (a2 && (!*(_QWORD*)(a1 + 1024) || !sub_14002C740(a1 + 1040, L"WhiteFill")))
	{
		v9 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"WhiteFill");
		if (v9)
		{
			while (aWhitefill_33[++v6] != 0)
				;
			sub_14001C480(a1 + 1040, (int*)L"WhiteFill", (int*)&aWhitefill_33[v6]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1024), v9);
	}
	*(_WORD*)(a1 + 2065) = 256;
	*(_BYTE*)(a1 + 2064) = 0;
	*(_DWORD*)(a1 + 1188) = 0x40000000;
	return a1;
}
// 140B3D5A0: using guessed type wchar_t aWhitefill_33[10];
// 140B719F0: using guessed type __int64 (__fastcall *off_140B719F0[25])();

