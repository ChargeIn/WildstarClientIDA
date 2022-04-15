//----- (00000001401107E0) ----------------------------------------------------
char __fastcall sub_1401107E0(__int64 a1)
{
	__m128i v2; // xmm2
	__m128 v3; // xmm5
	__m128i v4; // xmm3
	__m128i v5; // xmm1
	__m128 v6; // xmm4
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // rcx
	__int64 v10; // rdx
	__m128 v11; // xmm2
	float* v12; // rbp
	_QWORD* v13; // rcx
	_QWORD* v14; // rbx
	__int64 v15; // rax
	float v16; // xmm0_4
	__m128i v17; // xmm1
	__m128i v18; // xmm3
	__m128 v19; // xmm3
	__m128 v20; // xmm2
	unsigned __int64 v21; // rax
	__int64 v22; // rax
	__m128 v24; // [rsp+50h] [rbp-48h] BYREF
	__m128 v25; // [rsp+60h] [rbp-38h]
	__m128 v26; // [rsp+70h] [rbp-28h]
	__m128 v27; // [rsp+80h] [rbp-18h]

	v2 = _mm_cvtsi32_si128(0);
	v3 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), v2),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), v2)));
	v4 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 716));
	v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 720)), v2);
	v25 = v3;
	v6 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v4, v2), v5));
	v24 = v6;
	v7 = *(_QWORD*)(a1 + 472);
	if (v7)
		v8 = *(_DWORD*)(v7 + 1300);
	else
		v8 = 0;
	v9 = *(_QWORD*)(a1 + 1080);
	v10 = *(_QWORD*)(a1 + 696);
	v11 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v8), (__m128)0i64));
	v24 = _mm_sub_ps(v6, v11);
	v25 = _mm_sub_ps(v3, v11);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 40i64))(v9, *(_QWORD*)(v10 + 96));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 24i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	v12 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	sub_14010FFB0(a1);
	v13 = *(_QWORD**)(a1 + 1224);
	*(_DWORD*)(a1 + 1068) = 0;
	v14 = (_QWORD*)*v13;
	if ((_QWORD*)*v13 != v13)
	{
		do
		{
			sub_140110150(a1, &v24, *(_QWORD*)v14[2], *(_QWORD*)(v14[2] + 8i64), (unsigned int*)(a1 + 1164), 0);
			v14 = (_QWORD*)*v14;
		} while (v14 != *(_QWORD**)(a1 + 1224));
	}
	sub_140110150(a1, &v24, *(_QWORD*)(a1 + 1040), *(_QWORD*)(a1 + 1048), (unsigned int*)(a1 + 1160), 1);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v15 = *(_QWORD*)(a1 + 1248);
	v16 = (float)(int)v15;
	if (v15 < 0)
		v16 = v16 + 1.8446744e19;
	v17 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 728));
	v18 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 724));
	v25.m128_f32[1] = (float)(v16 * *v12) + v24.m128_f32[1];
	v19 = _mm_min_ps(
		v25,
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(v18, _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(0)))));
	v20 = _mm_max_ps(
		v24,
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 720)), _mm_cvtsi32_si128(0)))));
	if (v20.m128_f32[0] < v19.m128_f32[0]
		&& _mm_shuffle_ps(v20, v20, 85).m128_f32[0] < _mm_shuffle_ps(v19, v19, 85).m128_f32[0])
	{
		v21 = *(unsigned int*)(a1 + 708);
		v26 = v20;
		v27 = v19;
		if (v21 >= *(_QWORD*)(qword_140C63678 + 48))
			v22 = *(_QWORD*)(qword_140C63678 + 40);
		else
			v22 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v21;
		LOBYTE(v15) = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __m128*, _DWORD, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			*(_QWORD*)(a1 + 1080),
			0i64,
			-1i64,
			&v24,
			*(_DWORD*)(a1 + 704),
			v22,
			1,
			0i64);
	}
	if (*(_BYTE*)(a1 + 1065))
	{
		*(_BYTE*)(a1 + 1065) = 0;
		LOBYTE(v15) = sub_140110AD0(a1, 1);
	}
	return v15;
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

