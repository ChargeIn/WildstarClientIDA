//----- (000000014052DE20) ----------------------------------------------------
void __fastcall sub_14052DE20(__int64 a1)
{
	unsigned int v2; // r14d
	__int64 v3; // r15
	int* v4; // rax
	int v5; // ebx
	int v6; // edi
	int* v7; // rsi
	__m128 v8; // xmm0
	__m128 v9; // xmm7
	__m128 v10; // xmm2
	__m128 v11; // xmm5
	__m128i v12; // xmm4
	unsigned __int64 v13; // rax
	__m128i v14; // xmm2
	__m128 v15; // xmm1
	__m128 v16; // xmm4
	__m128 v17; // xmm2
	__m128 v18; // xmm3
	__m128 v19; // xmm1
	int v20; // eax
	unsigned int v21[4]; // [rsp+30h] [rbp-68h] BYREF
	__m128 v22; // [rsp+40h] [rbp-58h]
	__m128 v23[2]; // [rsp+50h] [rbp-48h] BYREF

	if (*(_QWORD*)(a1 + 1448))
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			*(_QWORD*)(a1 + 1416),
			0i64,
			0i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			1i64,
			*(_QWORD*)(a1 + 1448),
			0i64,
			0i64);
		v2 = 2;
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			2i64,
			*(_QWORD*)(a1 + 1432),
			0i64,
			0i64);
		(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
			qword_140C65670,
			4i64,
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
			sub_14052B810(a1, v21);
			v8 = sub_14052B130(a1);
			v9 = (__m128)0x3F800000u;
			v10 = v8;
			v11 = (__m128)0x3F800000u;
			v10.m128_f32[0] = v8.m128_f32[0] * 2048.0;
			v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21[0]), _mm_cvtsi32_si128(0));
			v13 = _mm_shuffle_ps(v10, v10, 0).m128_u64[0];
			v14 = _mm_cvtsi32_si128(v21[1]);
			*(_QWORD*)v3 = v13;
			v15 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v12, _mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(0))));
			v16 = (__m128)0x3F800000u;
			*(_QWORD*)(v3 + 8) = _mm_sub_ps(_mm_shuffle_ps(v23[0], v23[0], 136), _mm_mul_ps(v15, _mm_shuffle_ps(v8, v8, 0))).m128_u64[0];
			v16.m128_f32[0] = 1.0 / (float)v5;
			v11.m128_f32[0] = 1.0 / (float)v6;
			v17 = (__m128)0x3F000000u;
			v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, (__m128)0i64), _mm_unpacklo_ps(v11, (__m128)0i64));
			v18 = (__m128)0x3F000000u;
			*(_QWORD*)(v3 + 16) = v22.m128_u64[0];
			v18.m128_f32[0] = (float)(0.5 - (float)*v7) * v16.m128_f32[0];
			v17.m128_f32[0] = (float)(0.5 - (float)v7[1]) * v11.m128_f32[0];
			v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, (__m128)0i64), _mm_unpacklo_ps(v17, (__m128)0i64));
			*(_QWORD*)(v3 + 24) = v22.m128_u64[0];
			v9.m128_f32[0] = 1.0 / (float)(*(_DWORD*)(a1 + 1408) + 3);
			v19 = v9;
			v19.m128_f32[0] = v9.m128_f32[0] * 255.0;
			v9.m128_f32[0] = v9.m128_f32[0] * 0.5;
			v22 = _mm_unpacklo_ps((__m128)xmmword_140B7A300, _mm_unpacklo_ps(v9, (__m128)0i64));
			*(_QWORD*)(v3 + 32) = _mm_unpacklo_ps((__m128)xmmword_140B7A310, _mm_unpacklo_ps(v19, (__m128)0i64)).m128_u64[0];
			*(_QWORD*)(v3 + 40) = v22.m128_u64[0];
			*(_DWORD*)(v3 + 48) = sub_1400C9F70(*(_QWORD*)(a1 + 16)).m128_u32[0];
			if (*(_DWORD*)(a1 + 1216))
			{
				v2 = 3;
				v20 = dword_140C4A0A0;
				if (*(_DWORD*)qword_140C63750 < dword_140C4A0A0)
					v20 = *(_DWORD*)qword_140C63750;
				*(_DWORD*)(v3 + 48) = *((_DWORD*)&xmmword_140C4A0B0 + v20);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 1464),
			v2);
	}
}
// 140B7A300: using guessed type __int128 xmmword_140B7A300;
// 140B7A310: using guessed type __int128 xmmword_140B7A310;
// 140C4A0A0: using guessed type int dword_140C4A0A0;
// 140C4A0B0: using guessed type __int128 xmmword_140C4A0B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 14052DE20: using guessed type __m128 var_48[2];

