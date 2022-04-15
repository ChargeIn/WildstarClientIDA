//----- (000000014072B2B0) ----------------------------------------------------
__int64 __fastcall sub_14072B2B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r9
	__int64 v4; // rdi
	unsigned __int64 v5; // rax
	unsigned int v6; // edx
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rbx
	unsigned int v10; // r15d
	unsigned int v11; // r12d
	int v12; // eax
	__m128* v13; // rsi
	__int64 v14; // rbx
	__int64 v15; // r14
	unsigned __int64 v16; // rdx
	__int64 v17; // rbx
	__m128 v18; // xmm3
	__m128 v19; // xmm0
	__m128 v20; // xmm3
	int v21; // eax
	unsigned __int64 v22; // rax
	float v23; // xmm1_4
	__int64 v24; // rcx
	__m128 v25; // xmm1
	__m128 v26; // xmm3
	__m128 v27; // xmm0
	__m128 v28; // xmm3
	__m128 v29; // xmm0
	__m128 v30; // xmm3
	int v31; // eax
	unsigned __int64 v32; // rax
	float v33; // xmm1_4
	__int64 v34; // rcx
	__m128 v35; // xmm3
	__m128 v36; // xmm0
	__m128 v37; // xmm3
	int v38; // eax
	float v39; // xmm1_4
	float v40; // xmm8_4
	float v41; // xmm7_4
	float v42; // xmm1_4
	__int128 v43; // xmm1
	__m128 v45; // [rsp+20h] [rbp-79h] BYREF
	__m128 v46; // [rsp+30h] [rbp-69h] BYREF
	__int128 v47[4]; // [rsp+40h] [rbp-59h] BYREF
	int v48; // [rsp+80h] [rbp-19h]
	int v49; // [rsp+84h] [rbp-15h]
	int v50; // [rsp+88h] [rbp-11h]
	int v51; // [rsp+8Ch] [rbp-Dh]
	int v52; // [rsp+90h] [rbp-9h]

	v2 = sub_1400D66A0(a1, 1u);
	v3 = 0i64;
	v4 = v2;
	v5 = *(_QWORD*)(qword_140C63650 + 768);
	v6 = 0;
	if (v5)
	{
		v7 = *(_QWORD*)(qword_140C63650 + 760);
		v8 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
		{
			v8 = ++v6;
			if (v6 >= v5)
				goto LABEL_7;
		}
		v3 = *(_QWORD*)(v7 + 8i64 * v6);
	}
LABEL_7:
	v9 = v3 + 384;
	v10 = sub_1400F26A0(v3 + 384, 2);
	v11 = sub_1400F26A0(v9, 3);
	v12 = sub_1400F26A0(v9, 4);
	v13 = (__m128*)qword_140C665E0;
	v14 = v12;
	if (v4 && v10 && v11 && qword_140C665E0)
	{
		v15 = (*(__int64 (**)(void))(*(_QWORD*)qword_140C65670 + 584i64))();
		if ((_DWORD)v14)
		{
			v16 = v13[79].m128_u64[1];
			if (*(_DWORD*)(152 * v14 + v16 - 60) != 5 || !*(_QWORD*)(152 * v14 + v16 - 16))
				return 0i64;
			v17 = 152i64 * ((int)v14 - 1);
			(*(void(__fastcall**)(_QWORD, __m128*, _QWORD, _QWORD))(**(_QWORD**)(v17 + v16 + 136) + 856i64))(
				*(_QWORD*)(v17 + v16 + 136),
				&v46,
				v10,
				0i64);
			v18 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v13[63]),
						_mm_mul_ps(_mm_shuffle_ps(v46, v46, 85), v13[64])),
					_mm_mul_ps(_mm_shuffle_ps(v46, v46, 170), v13[65])),
				v13[66]);
			v19 = _mm_and_ps(_mm_shuffle_ps(v18, v18, 255), (__m128)xmmword_140B7B500);
			v20 = _mm_div_ps(v18, _mm_shuffle_ps(v19, v19, 0));
			v21 = *(_DWORD*)(v15 + 12);
			v45.m128_f32[0] = (float)((float)((float)(v20.m128_f32[0] + 1.0) * 0.5) * (float)*(int*)(v15 + 8))
				+ (float)*(int*)v15;
			v19.m128_f32[0] = (float)v21;
			v22 = v13[79].m128_u64[1];
			v23 = *(float*)(v15 + 20) - *(float*)(v15 + 16);
			v45.m128_f32[1] = (float)((float)(0.5 - (float)(_mm_shuffle_ps(v20, v20, 85).m128_f32[0] * 0.5)) * v19.m128_f32[0])
				+ (float)*(int*)(v15 + 4);
			v45.m128_f32[2] = (float)(v23 * _mm_shuffle_ps(v20, v20, 170).m128_f32[0]) + *(float*)(v15 + 16);
			v24 = *(_QWORD*)(v17 + v22 + 136);
			v46 = v45;
			(*(void(__fastcall**)(__int64, __m128*, _QWORD, _QWORD))(*(_QWORD*)v24 + 856i64))(v24, &v45, v11, 0i64);
			v25 = v45;
			v26 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v13[63]);
			v27 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 85), v13[64]);
		}
		else
		{
			(*(void(__fastcall**)(_QWORD, __m128*, _QWORD, _QWORD))(**(_QWORD**)(v13[74].m128_u64[0] + 80) + 856i64))(
				*(_QWORD*)(v13[74].m128_u64[0] + 80),
				&v46,
				v10,
				0i64);
			v28 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v13[63]),
						_mm_mul_ps(_mm_shuffle_ps(v46, v46, 85), v13[64])),
					_mm_mul_ps(_mm_shuffle_ps(v46, v46, 170), v13[65])),
				v13[66]);
			v29 = _mm_and_ps(_mm_shuffle_ps(v28, v28, 255), (__m128)xmmword_140B7B500);
			v30 = _mm_div_ps(v28, _mm_shuffle_ps(v29, v29, 0));
			v31 = *(_DWORD*)(v15 + 12);
			v45.m128_f32[0] = (float)((float)((float)(v30.m128_f32[0] + 1.0) * 0.5) * (float)*(int*)(v15 + 8))
				+ (float)*(int*)v15;
			v29.m128_f32[0] = (float)v31;
			v32 = v13[74].m128_u64[0];
			v33 = *(float*)(v15 + 20) - *(float*)(v15 + 16);
			v45.m128_f32[1] = (float)((float)(0.5 - (float)(_mm_shuffle_ps(v30, v30, 85).m128_f32[0] * 0.5)) * v29.m128_f32[0])
				+ (float)*(int*)(v15 + 4);
			v45.m128_f32[2] = (float)(v33 * _mm_shuffle_ps(v30, v30, 170).m128_f32[0]) + *(float*)(v15 + 16);
			v34 = *(_QWORD*)(v32 + 80);
			v46 = v45;
			(*(void(__fastcall**)(__int64, __m128*, _QWORD, _QWORD))(*(_QWORD*)v34 + 856i64))(v34, &v45, v11, 0i64);
			v25 = v45;
			v26 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 85), v13[64]);
			v27 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v13[63]);
		}
		v35 = _mm_add_ps(_mm_add_ps(_mm_add_ps(v26, v27), _mm_mul_ps(_mm_shuffle_ps(v25, v25, 170), v13[65])), v13[66]);
		v36 = _mm_and_ps(_mm_shuffle_ps(v35, v35, 255), (__m128)xmmword_140B7B500);
		v37 = _mm_div_ps(v35, _mm_shuffle_ps(v36, v36, 0));
		v38 = *(_DWORD*)(v15 + 12);
		v45.m128_f32[0] = (float)((float)((float)(v37.m128_f32[0] + 1.0) * 0.5) * (float)*(int*)(v15 + 8))
			+ (float)*(int*)v15;
		v39 = (float)*(int*)(v15 + 4);
		v40 = 1.0 / *(float*)(v13[89].m128_u64[0] + 88);
		v52 = *(_DWORD*)(v4 + 144);
		v41 = (float)((float)(0.5 - (float)(_mm_shuffle_ps(v37, v37, 85).m128_f32[0] * 0.5)) * (float)v38) + v39;
		v42 = *(float*)(v15 + 20) - *(float*)(v15 + 16);
		v45.m128_f32[1] = v41;
		v45.m128_f32[2] = (float)(v42 * _mm_shuffle_ps(v37, v37, 170).m128_f32[0]) + *(float*)(v15 + 16);
		v43 = *(_OWORD*)(v4 + 96);
		v47[0] = *(_OWORD*)(v4 + 64);
		v47[2] = v43;
		v47[1] = *(_OWORD*)(v4 + 80);
		v47[3] = *(_OWORD*)(v4 + 112);
		v48 = (int)(float)(v46.m128_f32[0] * v40);
		v49 = (int)(float)(v46.m128_f32[1] * v40);
		v50 = (int)(float)(v45.m128_f32[0] * v40);
		v51 = (int)(float)(v41 * v40);
		sub_1400CC740(v4, (__int64)v47);
		return 0i64;
	}
	return 0i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C665E0: using guessed type __int64 qword_140C665E0;

