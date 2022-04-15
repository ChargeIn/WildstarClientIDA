//----- (0000000140284710) ----------------------------------------------------
__int64 __fastcall sub_140284710(__int64 a1)
{
	int v2; // esi
	_QWORD* i; // rbx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rax
	__m128 v7; // xmm2
	__m128 v8; // xmm8
	__m128 v9; // xmm4
	__m128 v10; // xmm3
	__m128 v11; // xmm8
	__m128 v12; // xmm6
	__m128 v13; // xmm4
	__m128 v14; // xmm5
	__m128 v15; // xmm1
	__m128 v16; // xmm3
	_OWORD* v17; // rcx
	_OWORD* v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rcx
	__int128 v22[2]; // [rsp+20h] [rbp-58h] BYREF

	v2 = *(_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 720i64))(*(_QWORD*)(a1 + 16));
	if (*(_DWORD*)(a1 + 184) != v2)
	{
		for (i = (_QWORD*)(a1 + 128); *i; (*(void(__fastcall**)(_QWORD))(*(_QWORD*)*i + 8i64))(*i))
			;
		v4 = *i;
		v5 = *(_QWORD*)(a1 + 120);
		*(_QWORD*)(a1 + 120) = *i;
		*i = v5;
		if (v4)
			*(_QWORD*)(v4 + 280) = a1 + 120;
		if (v5)
			*(_QWORD*)(v5 + 280) = i;
		*(_DWORD*)(a1 + 184) = v2;
	}
	v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 584i64))(*(_QWORD*)(a1 + 16));
	v7 = 0i64;
	v8 = 0i64;
	v9 = (__m128)0x3F800000u;
	v10 = (__m128)0x3F800000u;
	v7.m128_f32[0] = (float)*(int*)(v6 + 12);
	v8.m128_f32[0] = (float)*(int*)(v6 + 8);
	v11 = _mm_unpacklo_ps(_mm_unpacklo_ps(v8, (__m128)0i64), _mm_unpacklo_ps(v7, (__m128)0i64));
	v9.m128_f32[0] = 1.0 / v11.m128_f32[0];
	v22[1] = (__int128)v11;
	v10.m128_f32[0] = 1.0 / _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
	v12 = _mm_unpacklo_ps(_mm_unpacklo_ps(v9, (__m128)0i64), _mm_unpacklo_ps(v10, (__m128)0i64));
	v13 = v12;
	v13.m128_f32[0] = v12.m128_f32[0] * 2.0;
	v14 = _mm_shuffle_ps(v12, v12, 85);
	v15 = v14;
	v15.m128_f32[0] = v14.m128_f32[0] * -2.0;
	v14.m128_f32[0] = v14.m128_f32[0] + 1.0;
	v16 = (__m128)0xBF800000;
	v16.m128_f32[0] = -1.0 - v12.m128_f32[0];
	*(__m128*)(a1 + 192) = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v13, (__m128)0x3F800000u),
		_mm_unpacklo_ps(v15, (__m128)0x3F800000u));
	v22[0] = 0i64;
	*(__m128*)(a1 + 208) = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, (__m128)0i64), _mm_unpacklo_ps(v14, (__m128)0i64));
	v17 = *(_OWORD**)(*(_QWORD*)(a1 + 224) + 16i64);
	*v17 = xmmword_140C78390;
	v17[1] = xmmword_140C783A0;
	v17[2] = xmmword_140C783B0;
	v17[3] = xmmword_140C783C0;
	v18 = *(_OWORD**)(*(_QWORD*)(a1 + 224) + 16i64);
	v18[4] = xmmword_140C78390;
	v18[5] = xmmword_140C783A0;
	v18[6] = xmmword_140C783B0;
	v18[7] = xmmword_140C783C0;
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 224) + 16i64) + 128i64) = 1;
	*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 224) + 24i64) + 32i64) = 0i64;
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)a1 + 96i64))(a1, v22);
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 224) + 24i64) + 52i64) = 2;
	**(_DWORD**)(*(_QWORD*)(a1 + 224) + 32i64) = 0;
	v19 = *(_QWORD*)(a1 + 224);
	*(_DWORD*)(a1 + 392) = 0;
	*(_DWORD*)(*(_QWORD*)(v19 + 32) + 4i64) = 0;
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 224) + 32i64) + 8i64) = 0;
	**(_DWORD**)(*(_QWORD*)(a1 + 224) + 40i64) = 1065353216;
	*(_OWORD*)*(_QWORD*)(*(_QWORD*)(a1 + 224) + 48i64) = xmmword_140B7B0C0;
	*(_OWORD*)*(_QWORD*)(*(_QWORD*)(a1 + 224) + 56i64) = 0i64;
	**(_DWORD**)(*(_QWORD*)(a1 + 224) + 64i64) = 0;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 288i64))(*(_QWORD*)(a1 + 16));
	v20 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 180) = 1;
	return (*(__int64(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)v20 + 688i64))(v20, L"GfxUI");
}
// 140AE9490: using guessed type wchar_t aGfxui[6];
// 140B7B0C0: using guessed type __int128 xmmword_140B7B0C0;
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C783A0: using guessed type __int128 xmmword_140C783A0;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

