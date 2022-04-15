//----- (0000000140180BE0) ----------------------------------------------------
__int64 __fastcall sub_140180BE0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6)
{
	__int64 v6; // rbx
	__int64 v8; // r14
	void(__fastcall * **v9)(_QWORD); // r14
	__int64 v10; // r8
	bool v11; // zf
	__int64 v12; // rsi
	void(__fastcall * **v13)(_QWORD); // rsi

	v6 = 0i64;
	sub_1400C5920(a1, a2, a3, a4, a5, a6, 0i64);
	*(_QWORD*)a1 = off_140B5DF50;
	sub_1401095E0(a1 + 1032);
	*(_QWORD*)(a1 + 1080) = 0i64;
	*(_DWORD*)(a1 + 1096) = 0;
	*(_DWORD*)(a1 + 1100) = 16;
	*(_DWORD*)(a1 + 1104) = 5;
	sub_1401095E0(a1 + 1112);
	*(_QWORD*)(a1 + 1160) = 0i64;
	*(_QWORD*)(a1 + 432) |= 0x800ui64;
	*(_DWORD*)(a1 + 1192) = 0;
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		360i64,
		360i64,
		1i64,
		0,
		1,
		0,
		256,
		0,
		a1 + 1184);
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		16i64,
		360i64,
		1i64,
		0,
		1,
		0,
		256,
		0,
		a1 + 1088);
	v8 = *(_QWORD*)(a1 + 32);
	if (v8 && (!*(_QWORD*)(a1 + 1112) || !sub_14002C740(a1 + 1128, L"WhiteCircle")))
	{
		v9 = (void(__fastcall***)(_QWORD))sub_140108E80(v8 + 240, (const __m128i*)L"WhiteCircle");
		if (v9)
		{
			v10 = 0i64;
			do
				v11 = aWhitecircle[++v10] == 0;
			while (!v11);
			sub_14001C480(a1 + 1128, (int*)L"WhiteCircle", (int*)&aWhitecircle[v10]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1112), v9);
	}
	v12 = *(_QWORD*)(a1 + 32);
	if (v12 && (!*(_QWORD*)(a1 + 1032) || !sub_14002C740(a1 + 1048, L"WhiteFill")))
	{
		v13 = (void(__fastcall***)(_QWORD))sub_140108E80(v12 + 240, (const __m128i*)L"WhiteFill");
		if (v13)
		{
			do
				v11 = aWhitefill_29[++v6] == 0;
			while (!v11);
			sub_14001C480(a1 + 1048, (int*)L"WhiteFill", (int*)&aWhitefill_29[v6]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1032), v13);
	}
	return a1;
}
// 140A3D5C8: using guessed type wchar_t aWhitefill_29[10];
// 140A3D620: using guessed type wchar_t aWhitecircle[12];
// 140B5DF50: using guessed type __int64 (__fastcall *off_140B5DF50[25])();
// 140C65670: using guessed type __int64 qword_140C65670;

