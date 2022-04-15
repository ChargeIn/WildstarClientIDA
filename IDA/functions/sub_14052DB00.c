//----- (000000014052DB00) ----------------------------------------------------
__int64 __fastcall sub_14052DB00(__int64 a1)
{
	unsigned int v2; // ebp
	__int64 v3; // r15
	int* v4; // rax
	int v5; // ebx
	int v6; // edi
	int* v7; // rsi
	__m128 v8; // xmm0
	__m128i v9; // xmm4
	__m128 v10; // xmm7
	__m128 v11; // xmm5
	__m128i v12; // xmm2
	__m128 v13; // xmm1
	__m128 v14; // xmm4
	__m128 v15; // xmm2
	__m128 v16; // xmm3
	__m128 v17; // xmm1
	__m128 v18; // xmm2
	__m128 v19; // xmm1
	int v20; // eax
	__m128 v22; // [rsp+30h] [rbp-58h] BYREF
	__m128 v23[2]; // [rsp+40h] [rbp-48h] BYREF
	__int64 v24; // [rsp+90h] [rbp+8h]

	v2 = 0;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 1416),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		1i64,
		*(_QWORD*)(a1 + 1424),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		2i64,
		*(_QWORD*)(a1 + 1432),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		1i64,
		5i64,
		0i64);
	v3 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		52i64,
		0i64,
		0i64,
		0);
	if (v3)
	{
		v4 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 88i64))(*(_QWORD*)(a1 + 1152));
		v5 = v4[2] - *v4;
		v6 = v4[3] - v4[1];
		v7 = v4;
		sub_14044A3B0((__int64)v23, v4);
		sub_14052B810(a1, &v22);
		v8 = sub_14052B130(a1);
		v9 = _mm_cvtsi32_si128(v22.m128_u32[0]);
		v10 = (__m128)0x3F800000u;
		v11 = (__m128)0x3F800000u;
		v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22.m128_u32[1]), _mm_cvtsi32_si128(0));
		*(float*)&v24 = v8.m128_f32[0] * 2048.0;
		*((float*)&v24 + 1) = v8.m128_f32[0] * 2048.0;
		*(_QWORD*)v3 = v24;
		v13 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v9, _mm_cvtsi32_si128(0)), v12));
		v14 = (__m128)0x3F800000u;
		*(_QWORD*)(v3 + 8) = _mm_sub_ps(_mm_shuffle_ps(v23[0], v23[0], 136), _mm_mul_ps(v13, _mm_shuffle_ps(v8, v8, 0))).m128_u64[0];
		v14.m128_f32[0] = 1.0 / (float)v5;
		v11.m128_f32[0] = 1.0 / (float)v6;
		v15 = (__m128)0x3F000000u;
		v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v14, (__m128)0i64), _mm_unpacklo_ps(v11, (__m128)0i64));
		v16 = (__m128)0x3F000000u;
		*(_QWORD*)(v3 + 16) = v22.m128_u64[0];
		v16.m128_f32[0] = (float)(0.5 - (float)*v7) * v14.m128_f32[0];
		v15.m128_f32[0] = (float)(0.5 - (float)v7[1]) * v11.m128_f32[0];
		v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, (__m128)0i64), _mm_unpacklo_ps(v15, (__m128)0i64));
		*(_QWORD*)(v3 + 24) = v22.m128_u64[0];
		v10.m128_f32[0] = 1.0 / (float)(*(_DWORD*)(a1 + 1408) + 3);
		v17 = v10;
		v17.m128_f32[0] = v10.m128_f32[0] * 255.0;
		v18 = v17;
		v19 = 0i64;
		v22 = _mm_unpacklo_ps((__m128)xmmword_140B7A310, _mm_unpacklo_ps(v18, (__m128)0i64));
		*(_QWORD*)(v3 + 32) = v22.m128_u64[0];
		v19.m128_f32[0] = (float)((float)*(int*)(a1 + 1408) * v10.m128_f32[0]) + (float)(v10.m128_f32[0] * 0.5);
		v22 = _mm_unpacklo_ps((__m128)xmmword_140B7A300, _mm_unpacklo_ps(v19, (__m128)0i64));
		*(_QWORD*)(v3 + 40) = v22.m128_u64[0];
		*(_DWORD*)(v3 + 48) = sub_1400C9F70(*(_QWORD*)(a1 + 16)).m128_u32[0];
		if (*(_DWORD*)(a1 + 1216))
		{
			v2 = 1;
			v20 = dword_140C4A0A0;
			if (*(_DWORD*)qword_140C63750 < dword_140C4A0A0)
				v20 = *(_DWORD*)qword_140C63750;
			*(_DWORD*)(v3 + 48) = *((_DWORD*)&xmmword_140C4A0B0 + v20);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 1464),
		v2);
}
// 140B7A300: using guessed type __int128 xmmword_140B7A300;
// 140B7A310: using guessed type __int128 xmmword_140B7A310;
// 140C4A0A0: using guessed type int dword_140C4A0A0;
// 140C4A0B0: using guessed type __int128 xmmword_140C4A0B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 14052DB00: using guessed type __m128 var_48[2];

