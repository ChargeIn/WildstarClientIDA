//----- (00000001401224C0) ----------------------------------------------------
__int64 __fastcall sub_1401224C0(__int64 a1, __int64 a2, _DWORD* a3, int a4, int a5)
{
	int* v8; // rax
	_QWORD* v9; // rbx
	__int64 v10; // rsi
	void(__fastcall * **v11)(_QWORD); // rsi
	__int64 v12; // rax
	unsigned int* v14; // rsi
	unsigned __int64 v15; // rbx
	__int64 v16; // r8
	__int64 v17; // rdx
	__int64 v18; // rcx
	int v19; // r9d
	unsigned __int64 v20; // rbx
	unsigned int* v21; // rsi
	__int64 v22; // r8
	__int64 v23; // rdx
	__int64 v24; // rcx
	int v25; // r9d
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64 v28; // rcx
	int v29; // edx
	__int64 v30; // rax
	__m128 v32; // [rsp+40h] [rbp-B8h] BYREF
	int v33[4]; // [rsp+50h] [rbp-A8h] BYREF
	char v34[96]; // [rsp+60h] [rbp-98h] BYREF

	sub_1400C5920(a1, a2, 0i64, 0i64, &xmmword_140C67280, 24i64, 0i64);
	*(_QWORD*)a1 = off_140B576C0;
	*(_QWORD*)(a1 + 1120) = 0i64;
	*(_DWORD*)(a1 + 1128) = a4;
	*(_DWORD*)(a1 + 1136) = 0;
	*(_DWORD*)(a1 + 1132) = a5;
	v8 = sub_14018B280(48i64, 0);
	if (v8)
		v9 = (_QWORD*)sub_1401095E0((__int64)v8);
	else
		v9 = 0i64;
	v10 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 792) = v9;
	if (v10 && (!*v9 || !sub_14002C740((__int64)(v9 + 2), L"WhiteFill")))
	{
		v11 = (void(__fastcall***)(_QWORD))sub_140108E80(v10 + 240, (const __m128i*)L"WhiteFill");
		if (v11)
		{
			v12 = 0i64;
			while (aWhitefill_1[++v12] != 0)
				;
			sub_14001C480((__int64)(v9 + 2), (int*)L"WhiteFill", (int*)&aWhitefill_1[v12]);
		}
		sub_1401097F0(v9, v11);
	}
	v32 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6A0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v14 = (unsigned int*)(a1 + 712);
	v15 = (unsigned int)sub_140141F10(qword_140C63678, &v32);
	if ((__m128*)(a1 + 712) == &v32)
	{
		v16 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v14);
		v16 = qword_140C63678;
		*v14 = v15;
		if (v15 < *(_QWORD*)(v16 + 48))
		{
			v17 = *(_QWORD*)(v16 + 40);
			v18 = 32i64 * (unsigned int)v15;
			v19 = *(_DWORD*)(v18 + v17 + 16);
			if ((unsigned int)(v19 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v18 + v17 + 16) = v19 + 1;
		}
	}
	sub_1401429A0(v16, v15);
	v32 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B610), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v20 = (unsigned int)sub_140141F10(qword_140C63678, &v32);
	v21 = (unsigned int*)(a1 + 708);
	if ((__m128*)(a1 + 708) == &v32)
	{
		v22 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v21);
		v22 = qword_140C63678;
		*v21 = v20;
		if (v20 < *(_QWORD*)(v22 + 48))
		{
			v23 = *(_QWORD*)(v22 + 40);
			v24 = 32i64 * (unsigned int)v20;
			v25 = *(_DWORD*)(v24 + v23 + 16);
			if ((unsigned int)(v25 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v24 + v23 + 16) = v25 + 1;
		}
	}
	sub_1401429A0(v22, v20);
	v26 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 432) |= 0x100ui64;
	v27 = sub_1400E58C0(v26, (int*)L"Chat");
	v28 = *(_QWORD*)(a1 + 688);
	*(_QWORD*)(a1 + 696) = v27;
	if (v28)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v28 + 40i64))(v28, *(_QWORD*)(v27 + 96));
	*(_QWORD*)(a1 + 1024) = 0i64;
	*(_QWORD*)(a1 + 1032) = 0i64;
	*(_QWORD*)(a1 + 1040) = 0i64;
	*(_QWORD*)(a1 + 1048) = 0i64;
	*(_QWORD*)(a1 + 1056) = 0i64;
	*(_QWORD*)(a1 + 1064) = 0i64;
	*(_QWORD*)(a1 + 1096) = 0i64;
	*(_QWORD*)(a1 + 1072) = 0i64;
	*(_QWORD*)(a1 + 1080) = 0i64;
	*(_QWORD*)(a1 + 1104) = 0i64;
	*(_QWORD*)(a1 + 1088) = 0i64;
	*(_QWORD*)(a1 + 1112) = 0i64;
	sub_1400CA590(a1, (__int64)v33);
	v29 = a3[1];
	v32.m128_i32[0] = v33[0] + *a3;
	v32.m128_i32[1] = v33[1] + v29;
	v30 = sub_1401223B0((__int64)v34, (int*)&v32);
	sub_1400CC680(a1, v30);
	sub_1400E8B00(*(_QWORD*)(a1 + 32), a1);
	return a1;
}
// 140A1EEC0: using guessed type wchar_t aWhitefill_1[10];
// 140A1EED8: using guessed type wchar_t aChat[5];
// 140B576C0: using guessed type __int64 (__fastcall *off_140B576C0[25])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B610: using guessed type __int128 xmmword_140B7B610;
// 140B7B6A0: using guessed type __int128 xmmword_140B7B6A0;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C67280: using guessed type __int128 xmmword_140C67280;
// 1401224C0: using guessed type char var_98[96];

