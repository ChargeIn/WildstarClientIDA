//----- (00000001404C3B50) ----------------------------------------------------
void __fastcall sub_1404C3B50(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__m128 v4; // xmm7
	__m128 v5; // xmm9
	__m128 v6; // xmm5
	__m128 v7; // xmm4
	__m128 v8; // xmm1
	float v9; // xmm2_4
	float v10; // xmm0_4
	__m128 v11; // xmm9
	__m128 v12; // xmm1
	float v13; // xmm2_4
	float v14; // xmm0_4
	__m128 v15; // xmm5
	__m128 v16; // xmm1
	float v17; // xmm2_4
	float v18; // xmm0_4
	__m128 v19; // xmm4
	__m128 v20; // xmm1
	float v21; // xmm2_4
	float v22; // xmm0_4
	__m128 v23; // xmm7
	__int64 v24; // rax
	__m128 v25; // xmm1
	__int64 v26; // rcx
	unsigned __int64 v27; // rax
	bool v28; // zf
	__int64 v29; // rax
	__m128 v30; // xmm1
	__m128 v31; // xmm0
	__m128 v32; // xmm6
	__m128 v33; // xmm1
	__m128 v34; // xmm2
	float v35; // xmm2_4
	bool v36; // cf
	float v37; // xmm0_4
	__m128 v38; // [rsp+30h] [rbp-D0h] BYREF
	__m128 v39; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v40; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v41; // [rsp+60h] [rbp-A0h]
	__m128 v42; // [rsp+70h] [rbp-90h]
	__m128 v43; // [rsp+80h] [rbp-80h]
	__m128 v44; // [rsp+90h] [rbp-70h] BYREF
	__m128 v45; // [rsp+A0h] [rbp-60h]
	__m128 v46; // [rsp+B0h] [rbp-50h]
	__m128 v47; // [rsp+C0h] [rbp-40h]
	__int64* v48; // [rsp+120h] [rbp+20h] BYREF
	int v49; // [rsp+128h] [rbp+28h] BYREF
	int v50; // [rsp+12Ch] [rbp+2Ch]

	v2 = a1[36];
	if (v2 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 336i64))(v2) && *((_DWORD*)a1 + 163))
	{
		v3 = *a1;
		*((_DWORD*)a1 + 164) = 1;
		(*(void(__fastcall**)(__int64*, __m128*, _QWORD))(v3 + 144))(a1, &v44, 0i64);
		v4 = (__m128)0x40400000u;
		v47.m128_u64[0] = 0i64;
		v5 = (__m128)0x40400000u;
		v6 = (__m128)0x40400000u;
		v7 = (__m128)0x40400000u;
		v47.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
		v8 = _mm_mul_ps(v47, v47);
		v9 = (float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
		v10 = fsqrt(v9);
		v5.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v9 * (float)(1.0 / v10)) * (float)(1.0 / v10))) * 0.5)
			* (float)(1.0 / v10),
			0.0);
		v11 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v47);
		v12 = _mm_mul_ps(v46, v46);
		v13 = (float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
			+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
		v14 = fsqrt(v13);
		v6.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v13 * (float)(1.0 / v14)) * (float)(1.0 / v14))) * 0.5)
			* (float)(1.0 / v14),
			0.0);
		v15 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v46);
		v16 = _mm_mul_ps(v45, v45);
		v17 = (float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
			+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
		v18 = fsqrt(v17);
		v7.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v17 * (float)(1.0 / v18)) * (float)(1.0 / v18))) * 0.5)
			* (float)(1.0 / v18),
			0.0);
		v19 = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v45);
		v20 = _mm_mul_ps(v44, v44);
		v21 = (float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
			+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
		v22 = fsqrt(v21);
		v4.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v21 * (float)(1.0 / v22)) * (float)(1.0 / v22))) * 0.5)
			* (float)(1.0 / v22),
			0.0);
		v23 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v44);
		v40 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v23, _mm_shuffle_ps(v23, v23, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v23, v23, 85), (__m128)0i64));
		v41 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v19, _mm_shuffle_ps(v19, v19, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v19, v19, 85), (__m128)0i64));
		v42 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v15, _mm_shuffle_ps(v15, v15, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v15, v15, 85), (__m128)0i64));
		v43 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v11, _mm_shuffle_ps(v11, v11, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v11, v11, 85), (__m128)0x3F800000u));
		sub_1401B2ED0((__int64)&v39, v40.m128_f32);
		if (fabs(v39.m128_f32[1]) > 0.1 || fabs(v39.m128_f32[2]) > 0.1)
			*((_DWORD*)a1 + 164) = 0;
		v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[36] + 336i64))(a1[36]);
		(*(void(__fastcall**)(__int64, __int64, __m128*, _QWORD))(*(_QWORD*)v24 + 872i64))(v24, 193i64, &v38, 0i64);
		v48 = 0i64;
		v25 = (__m128)v38.m128_u32[1];
		v26 = *(_QWORD*)(qword_140C65898 + 29256);
		v27 = a1[36];
		v25.m128_f32[0] = v38.m128_f32[1] - 2.0;
		v40.m128_u64[0] = 0x100008009i64;
		v40.m128_i32[2] = 1;
		v41 = 0ui64;
		v39 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v38.m128_u32[0], (__m128)v38.m128_u32[2]),
			_mm_unpacklo_ps(v25, (__m128)0i64));
		v42.m128_i32[0] = 0;
		v42.m128_u64[1] = v27;
		v49 = 0;
		v50 = 1065353216;
		if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64**, __m128*))(*(_QWORD*)v26
			+ 424i64))(
				v26,
				&v38,
				&v39,
				&v49,
				&v48,
				&v40))
		{
			v28 = (*(__int64(__fastcall**)(__int64*))(*v48 + 24))(v48) == 0;
			v29 = *v48;
			if (v28)
			{
				v37 = v38.m128_f32[1] - *(float*)((*(__int64 (**)(void))(v29 + 40))() + 32);
				if (v37 > 1.8)
					goto LABEL_14;
				v36 = v37 < 0.30000001;
			}
			else
			{
				v30 = (__m128)v38.m128_u32[1];
				v31 = (__m128)v38.m128_u32[2];
				v30.m128_f32[0] = v38.m128_f32[1] - 2.0;
				v32 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v38.m128_u32[0], (__m128)v38.m128_u32[2]),
					_mm_unpacklo_ps(v30, (__m128)0i64));
				*(double*)v31.m128_u64 = (*(double (**)(void))(v29 + 16))();
				v33 = _mm_sub_ps(v38, _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v38), _mm_shuffle_ps(v31, v31, 0)), v38));
				v34 = _mm_mul_ps(v33, v33);
				v35 = fsqrt(
					(float)(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0])
					+ _mm_shuffle_ps(v34, v34, 170).m128_f32[0]);
				if (v35 > 1.8)
					goto LABEL_14;
				v36 = v35 < 0.30000001;
			}
			if (!v36)
			{
			LABEL_15:
				(*(void(__fastcall**)(__int64*))(*v48 + 8))(v48);
				return;
			}
		LABEL_14:
			*((_DWORD*)a1 + 164) = 0;
			goto LABEL_15;
		}
		*((_DWORD*)a1 + 164) = 0;
	}
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;

