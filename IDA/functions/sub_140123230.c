//----- (0000000140123230) ----------------------------------------------------
__int64 __fastcall sub_140123230(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rsi
	__int128* v6; // rdx
	__int64 v7; // rcx
	int v8; // eax
	int* v9; // rax
	__int64 v10; // rdi
	__m128i si128; // xmm1
	__int64 v12; // rcx
	unsigned int* v13; // r14
	unsigned __int64 v14; // rbx
	__int64 v15; // r8
	__int64 v16; // rdx
	__int64 v17; // rcx
	int v18; // r9d
	int* v19; // rax
	__int64* v20; // rcx
	__int64 v21; // rdx
	char v23; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v24; // [rsp+50h] [rbp-B0h]
	__int128 v25; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v26; // [rsp+70h] [rbp-90h]
	_OWORD v27[2]; // [rsp+80h] [rbp-80h]
	int v28; // [rsp+A0h] [rbp-60h]
	__int128 v29[5]; // [rsp+B0h] [rbp-50h] BYREF
	int v30; // [rsp+100h] [rbp+0h]
	char v32[20]; // [rsp+110h] [rbp+10h] BYREF
	int v33; // [rsp+124h] [rbp+24h]
	int v34; // [rsp+128h] [rbp+28h]
	int v35; // [rsp+12Ch] [rbp+2Ch]

	v3 = 0i64;
	v33 = 0;
	v34 = 1065353216;
	*(_QWORD*)&v32[12] = (unsigned int)(a3 + 4);
	v35 = 0;
	*(_DWORD*)v32 = 4;
	*(_DWORD*)&v32[4] = 4;
	*(_DWORD*)&v32[8] = -4;
	v28 = 0;
	v6 = &v25;
	v7 = 0i64;
	do
	{
		v8 = *(_DWORD*)&v32[v7 + 16];
		v7 += 4i64;
		v6 = (__int128*)((char*)v6 + 8);
		*(_DWORD*)((char*)&v26 + v7 + 12) = v8;
		*(_DWORD*)((char*)v27 + v7 + 12) = *(_DWORD*)&v32[v7 - 4];
		*((_QWORD*)v6 - 1) = 0i64;
	} while (v7 < 16);
	v30 = v28 | 0x300;
	v29[0] = v24;
	v29[2] = v26;
	v29[1] = v25;
	v29[3] = v27[0];
	v29[4] = v27[1];
	v9 = sub_14018B280(1408i64, 0);
	if (v9)
		v10 = sub_14010E4A0(
			(__int64)v9,
			*(_QWORD*)(a1 + 32),
			a1,
			*(_QWORD**)(*(_QWORD*)(a1 + 32) + 2928i64),
			v29,
			272i64,
			3i64);
	else
		v10 = 0i64;
	si128 = _mm_load_si128((const __m128i*) & xmmword_140B7B5E0);
	v12 = qword_140C63678;
	*(_DWORD*)(v10 + 704) = 16;
	*(__m128*)v32 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v13 = (unsigned int*)(v10 + 712);
	v14 = (unsigned int)sub_140141F10(v12, (__m128*)v32);
	if ((char*)(v10 + 712) == &v23)
	{
		v15 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v13);
		v15 = qword_140C63678;
		*v13 = v14;
		if (v14 < *(_QWORD*)(v15 + 48))
		{
			v16 = *(_QWORD*)(v15 + 40);
			v17 = 32i64 * (unsigned int)v14;
			v18 = *(_DWORD*)(v17 + v16 + 16);
			if ((unsigned int)(v18 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v17 + v16 + 16) = v18 + 1;
		}
	}
	sub_1401429A0(v15, v14);
	if (!*(_QWORD*)(v10 + 792))
	{
		v19 = sub_14018B280(48i64, 0);
		if (v19)
			v3 = sub_1401095E0((__int64)v19);
		*(_QWORD*)(v10 + 792) = v3;
	}
	v20 = *(__int64**)(v10 + 792);
	if (v20)
	{
		v21 = *(_QWORD*)(v10 + 32);
		if (v21)
			sub_140109710(v20, v21 + 240, (__m128i*)L"WhiteFill", 0);
		*(_DWORD*)(*(_QWORD*)(v10 + 792) + 8i64) = dword_140C63664;
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 80i64))(v10, a2);
	return v10;
}
// 140A1EF68: using guessed type wchar_t aWhitefill_2[10];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B5E0: using guessed type __int128 xmmword_140B7B5E0;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;

