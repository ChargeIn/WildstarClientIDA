//----- (0000000140150530) ----------------------------------------------------
__int64 __fastcall sub_140150530(__int64 a1, float* a2)
{
	int v2; // r9d
	int v3; // r10d
	unsigned int* v6; // rax
	__m128i v7; // xmm2
	__m128 v8; // xmm5
	__m128i v9; // xmm1
	__m128 v10; // xmm3
	__m128 v11; // xmm3
	float v12; // xmm0_4
	__int64 v13; // rcx
	unsigned __int64 v14; // r8
	__m128* v15; // r8
	__int64 v16; // rdx
	unsigned __int64 v17; // rax
	__int64 v18; // rax
	unsigned int v20[4]; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v21; // [rsp+60h] [rbp-A0h] BYREF
	float v22; // [rsp+70h] [rbp-90h]
	float v23; // [rsp+74h] [rbp-8Ch]
	_QWORD v24[2]; // [rsp+80h] [rbp-80h] BYREF
	__int128 v25; // [rsp+90h] [rbp-70h]
	__m128 v26; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v27[6]; // [rsp+D0h] [rbp-30h] BYREF

	v2 = (int)a2[4];
	v3 = (int)a2[5];
	v20[0] = (int)*a2;
	v20[2] = v2;
	v20[3] = v3;
	v20[1] = (int)a2[1];
	v6 = sub_14014E8D0(a1 + 32, v24, v20);
	v7 = _mm_cvtsi32_si128(0);
	v8 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6[2]), v7),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6[3]), v7)));
	v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6[1]), v7);
	v7.m128i_i32[0] = *(_DWORD*)(a1 + 132);
	v26 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v6), _mm_cvtsi32_si128(0)), v9));
	v21.m128_f32[1] = *(float*)v7.m128i_i32 * -0.5;
	v10 = _mm_sub_ps(v26, v8);
	v23 = *(float*)v7.m128i_i32 + (float)(*(float*)v7.m128i_i32 * -0.5);
	v11 = _mm_mul_ps(v10, v10);
	v21.m128_i32[0] = 0;
	v22 = fsqrt(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0]);
	v12 = sub_1408FD190(
		_mm_shuffle_ps(v8, v8, 85).m128_f32[0] - _mm_shuffle_ps(v26, v26, 85).m128_f32[0],
		v8.m128_f32[0] - v26.m128_f32[0]);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
	LODWORD(v24[0]) = 1065353216;
	*(float*)&v25 = v12;
	v24[1] = 0i64;
	*((_QWORD*)&v25 + 1) = &v26;
	v27[0] = v24[0];
	v27[1] = v25;
	sub_1401B0840((int*)v27, (__int64)v24);
	(*(void(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, v24);
	v13 = qword_140C63678;
	v14 = *(unsigned int*)(a1 + 12);
	if (v14 >= *(_QWORD*)(qword_140C63678 + 48))
		v15 = *(__m128**)(qword_140C63678 + 40);
	else
		v15 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v14);
	if (*(_QWORD*)(a1 + 136))
	{
		sub_140103E60(
			*(_QWORD**)(a1 + 136),
			&v21,
			v15,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 144)) * *(float*)(a1 + 148)));
		v13 = qword_140C63678;
	}
	v16 = *(_QWORD*)(a1 + 184);
	if (v16)
	{
		v17 = *(unsigned int*)(a1 + 16);
		v23 = v23 + (float)(a2[5] - a2[1]);
		if (v17 >= *(_QWORD*)(v13 + 48))
			v18 = *(_QWORD*)(v13 + 40);
		else
			v18 = *(_QWORD*)(v13 + 40) + 32 * v17;
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, _DWORD, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			v16,
			0i64,
			-1i64,
			&v21,
			*(_DWORD*)(a1 + 192),
			v18,
			1,
			0i64);
	}
	return (*(__int64(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65680 + 72i64))(
		qword_140C65680,
		v16,
		v15);
}
// 14015078E: variable 'v16' is possibly undefined
// 14015078E: variable 'v15' is possibly undefined
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

