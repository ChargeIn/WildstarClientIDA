//----- (0000000140609470) ----------------------------------------------------
__int64 __fastcall sub_140609470(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // rsi
	__int64 v4; // rbp
	__int64 v7; // r12
	wchar_t** v8; // rdi
	__int64 v9; // rbx
	char* v10; // rbx
	__int64 v11; // r13
	wchar_t** v12; // rdi
	__int64 v13; // rdi

	v3 = (_QWORD*)(a1 + 8);
	*(_QWORD*)a1 = a2;
	v4 = 13i64;
	v7 = 13i64;
	memset((void*)(a1 + 8), 0, 0x68ui64);
	*(_DWORD*)(a1 + 112) = 2;
	v8 = off_140C391A0;
	v9 = 0i64;
	do
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD*, _QWORD))(*(_QWORD*)a3 + 40i64))(a3, *v8++, &v3[v9++], 0i64);
		--v7;
	} while (v7);
	v10 = (char*)(a1 + 120);
	v11 = 13i64;
	memset((void*)(a1 + 120), 0, 0x68ui64);
	*(_DWORD*)(a1 + 224) = 2;
	v12 = off_140C39210;
	do
	{
		(*(void(__fastcall**)(__int64, wchar_t*, char*, _QWORD))(*(_QWORD*)a3 + 40i64))(a3, *v12, &v10[v7], 0i64);
		v7 += 8i64;
		++v12;
		--v11;
	} while (v11);
	sub_14060A500((__int64*)(a1 + 240), a3);
	sub_14060A500((__int64*)(a1 + 296), a3);
	sub_14060A500((__int64*)(a1 + 352), a3);
	*(_DWORD*)(a1 + 424) = 2139095039;
	*(_QWORD*)(a1 + 432) = 0i64;
	*(_QWORD*)(a1 + 440) = 0i64;
	v13 = 13i64;
	do
	{
		if (*v3)
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64*, __int64, int*, int, int, __int64), __int64))(*(_QWORD*)*v3 + 648i64))(
				*v3,
				sub_140607A00,
				a1);
		++v3;
		--v13;
	} while (v13);
	do
	{
		if (*(_QWORD*)v10)
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64*, __int64, _DWORD*, int, int, __int64), __int64))(**(_QWORD**)v10 + 648i64))(
				*(_QWORD*)v10,
				sub_140607D10,
				a1);
		v10 += 8;
		--v4;
	} while (v4);
	return a1;
}
// 140C391A0: using guessed type wchar_t *off_140C391A0[27];
// 140C39210: using guessed type wchar_t *off_140C39210[13];

