//----- (0000000140505860) ----------------------------------------------------
__int64 __fastcall sub_140505860(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	_QWORD* v8; // r14
	_QWORD* v9; // rdi
	int i; // esi
	__int64 v11; // rsi
	__int64* v12; // rdi
	int* v13; // rax
	__int64 v14; // rax
	unsigned __int64 v15; // rcx
	bool v16; // zf
	char v17; // al
	__int64 v18; // rax
	__int64 v19; // rdi
	void(__fastcall * **v20)(_QWORD); // rdi
	__int64 v21; // rcx

	sub_1400C5920(a1, a2, a3, a4, a5, a6, a7);
	v8 = (_QWORD*)(a1 + 1024);
	*(_QWORD*)a1 = off_140B6A1E0;
	sub_1401095E0(a1 + 1024);
	v9 = (_QWORD*)(a1 + 1080);
	for (i = 1; i >= 0; --i)
	{
		sub_140508CB0(v9);
		v9 += 29;
	}
	*(_QWORD*)(a1 + 432) |= 0x40000ui64;
	v11 = 2i64;
	*(_DWORD*)(a1 + 676) = 0;
	*(_DWORD*)(a1 + 1072) = 0;
	*(_BYTE*)(a1 + 1076) = 0;
	*(_DWORD*)(a1 + 704) = 2;
	v12 = (__int64*)(a1 + 1112);
	do
	{
		*(v12 - 3) = -1i64;
		v13 = sub_14018B280(392i64, 0);
		if (v13)
			v14 = sub_140503450((__int64)v13);
		else
			v14 = 0i64;
		*v12 = v14;
		sub_140505BB0(a1, 1u, 0, 0, 0, 0);
		v15 = *(v12 - 4);
		if (v15 > *(_QWORD*)(a1 + 1088))
			v15 = *(_QWORD*)(a1 + 1088);
		v16 = v15 == *(_QWORD*)(a1 + 1080);
		v17 = 0;
		*(_QWORD*)(a1 + 1080) = v15;
		if (!v16)
			v17 = 1;
		if (v17)
		{
			*(_QWORD*)(a1 + 1104) = *(_QWORD*)(a1 + 1096);
			*(_BYTE*)(a1 + 1076) = 0;
			*(_DWORD*)(a1 + 1072) = 0;
		}
		v18 = *(_QWORD*)(a1 + 1080);
		*(_QWORD*)(a1 + 1096) = v18;
		*(_QWORD*)(a1 + 1104) = v18;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 568i64))(a1);
		v12 += 29;
		--v11;
	} while (v11);
	*(_BYTE*)(a1 + 1076) = 0;
	sub_140505E40(a1);
	v19 = *(_QWORD*)(a1 + 32);
	if (v19 && (!*v8 || !sub_14002C740(a1 + 1040, L"WhiteFill")))
	{
		v20 = (void(__fastcall***)(_QWORD))sub_140108E80(v19 + 240, (const __m128i*)L"WhiteFill");
		if (v20)
		{
			v21 = 0i64;
			do
				v16 = aWhitefill_30[++v21] == 0;
			while (!v16);
			sub_14001C480(a1 + 1040, (int*)L"WhiteFill", (int*)&aWhitefill_30[v21]);
		}
		if (v20 != (void(__fastcall***)(_QWORD)) * v8)
		{
			if (v20)
				(**v20)(v20);
			if (*v8)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v8 + 8i64))(*v8);
				*v8 = 0i64;
			}
			*v8 = v20;
		}
	}
	return a1;
}
// 140B10180: using guessed type wchar_t aWhitefill_30[10];
// 140B6A1E0: using guessed type __int64 (__fastcall *off_140B6A1E0[25])();

