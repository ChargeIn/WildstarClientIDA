//----- (0000000140175DE0) ----------------------------------------------------
__int64 __fastcall sub_140175DE0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v8; // rdi
	__int64 v9; // rsi
	unsigned __int64 i; // rbx
	wchar_t* v11; // rdx
	__int64 v12; // rax
	wchar_t* v13; // rax
	int* v14; // rax
	__int64 v15; // rbx
	float v16; // xmm1_4
	void(__fastcall * **v17)(_QWORD); // rbp
	bool v20; // [rsp+40h] [rbp-C8h] BYREF
	_QWORD* v21; // [rsp+48h] [rbp-C0h]
	_OWORD v22[6]; // [rsp+50h] [rbp-B8h] BYREF

	v21 = a3;
	v8 = 0i64;
	sub_1400D45E0((__int64)v22, a1, a2, a5, 0i64);
	v9 = 0i64;
	for (i = 0i64; i < 4; ++i)
	{
		v11 = off_140C2CA98[i];
		v20 = 0;
		v12 = sub_1401A6B80(a5, v11);
		if (v12)
		{
			v13 = (wchar_t*)sub_1401A4F40(v12 + 32);
			sub_1401A52E0(v13, &v20);
			if (v20)
				v9 |= 1i64 << i;
		}
	}
	v14 = sub_14018B280(2496i64, 0);
	if (v14)
		v15 = sub_140174660((__int64)v14, a1, a2, v21, v22, a4, v9);
	else
		v15 = 0i64;
	v16 = fminf(100.0, *(float*)(v15 + 1032));
	*(_DWORD*)(v15 + 1024) = 0;
	*(_DWORD*)(v15 + 1028) = 1120403456;
	*(_DWORD*)(v15 + 1036) = 1065353216;
	*(float*)(v15 + 1032) = fmaxf(0.0, v16);
	sub_140174900(v15, 0.0);
	*(_DWORD*)(v15 + 1052) = -1;
	if (a1 && (!*(_QWORD*)(v15 + 2448) || !sub_14002C740(v15 + 2464, L"WhiteFill")))
	{
		v17 = (void(__fastcall***)(_QWORD))sub_140108E80(a1 + 240, (const __m128i*)L"WhiteFill");
		if (v17)
		{
			while (aWhitefill_28[++v8] != 0)
				;
			sub_14001C480(v15 + 2464, (int*)L"WhiteFill", (int*)&aWhitefill_28[v8]);
		}
		sub_1401097F0((_QWORD*)(v15 + 2448), v17);
	}
	*(_DWORD*)(v15 + 1048) = 1;
	return v15;
}
// 140A398E0: using guessed type wchar_t aWhitefill_28[10];
// 140C2CA98: using guessed type wchar_t *off_140C2CA98[9];
// 140175DE0: using guessed type _OWORD var_B8[6];

