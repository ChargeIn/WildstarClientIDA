//----- (000000014015BA00) ----------------------------------------------------
_QWORD* __fastcall sub_14015BA00(_QWORD* a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	void(__fastcall * **v8)(_QWORD); // rdi
	int* v9; // rax
	_QWORD* v10; // rsi
	__int64 v11; // rbp
	void(__fastcall * **v12)(_QWORD); // rbp
	__int64 v13; // rcx
	int* v15; // rax

	sub_1400C5920((__int64)a1, a2, a3, a4, a5, a6, a7);
	v8 = 0i64;
	*a1 = off_140B5C890;
	a1[131] = 0i64;
	a1[132] = 0i64;
	a1[133] = 0i64;
	a1[54] |= 0x80ui64;
	a1[82] |= 0x10ui64;
	v9 = sub_14018B280(48i64, 0);
	if (v9)
		v10 = (_QWORD*)sub_1401095E0((__int64)v9);
	else
		v10 = 0i64;
	v11 = a1[4];
	a1[99] = v10;
	if (v11 && (!*v10 || !sub_14002C740((__int64)(v10 + 2), L"WhiteFill")))
	{
		v12 = (void(__fastcall***)(_QWORD))sub_140108E80(v11 + 240, (const __m128i*)L"WhiteFill");
		if (v12)
		{
			v13 = 0i64;
			while (aWhitefill_14[++v13] != 0)
				;
			sub_14001C480((__int64)(v10 + 2), (int*)L"WhiteFill", (int*)&aWhitefill_14[v13]);
		}
		sub_1401097F0(v10, v12);
	}
	v15 = sub_14018B280(384i64, 0);
	if (v15)
		v8 = (void(__fastcall***)(_QWORD))sub_140158FD0((__int64)v15, a1[4]);
	a1[128] = v8;
	a1[129] = v8;
	if (v8)
		(**v8)(v8);
	return a1;
}
// 140A35890: using guessed type wchar_t aWhitefill_14[10];
// 140B5C890: using guessed type __int64 (__fastcall *off_140B5C890[25])();

