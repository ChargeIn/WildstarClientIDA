//----- (00000001404F5AA0) ----------------------------------------------------
__int64 __fastcall sub_1404F5AA0(__int64 a1)
{
	_QWORD* v2; // rcx
	int v3; // xmm0_4
	int v4; // ecx
	__m128* v5; // rdx
	__m128 v6; // xmm7
	__m128 v7; // xmm1
	float v8; // xmm4_4
	__m128 v9; // xmm3
	__m128 v10; // xmm1
	float v11; // xmm2_4
	float v12; // xmm0_4
	__m128 v13; // xmm2
	__m128 v14; // xmm7
	__m128i v15; // xmm2
	__m128i v16; // xmm0
	__m128 v17; // xmm2
	__m128 v18; // xmm2
	double v19; // xmm6_8
	float v20; // xmm9_4
	float v21; // xmm8_4
	float v22; // xmm7_4
	float v23; // xmm0_4
	float v24; // xmm11_4
	float v25; // xmm9_4
	float v26; // xmm4_4
	float v27; // xmm2_4
	float v28; // xmm8_4
	float v29; // xmm7_4
	float v30; // xmm10_4
	float v31; // xmm5_4
	float v32; // xmm9_4
	float v33; // xmm12_4
	float v34; // xmm8_4
	float v35; // xmm11_4
	__m128 v37; // [rsp+58h] [rbp-B0h] BYREF
	int v38; // [rsp+68h] [rbp-A0h]
	__m128* v39; // [rsp+78h] [rbp-90h] BYREF
	float v40; // [rsp+80h] [rbp-88h]
	int v41; // [rsp+84h] [rbp-84h]
	float v42; // [rsp+88h] [rbp-80h]
	float v43; // [rsp+8Ch] [rbp-7Ch]
	float v44; // [rsp+90h] [rbp-78h]
	int v45; // [rsp+94h] [rbp-74h]
	float v46; // [rsp+98h] [rbp-70h]
	float v47; // [rsp+9Ch] [rbp-6Ch]
	float v48; // [rsp+A0h] [rbp-68h]
	int v49; // [rsp+A4h] [rbp-64h]
	__int128 v50; // [rsp+A8h] [rbp-60h]

	if (!*(_DWORD*)(a1 + 2272))
	{
		v2 = *(_QWORD**)(a1 + 2312);
		if (v2)
		{
			if ((*(int(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64, __int64))(*v2 + 1064i64))(
				v2,
				*(unsigned int*)(a1 + 2320),
				*v2,
				0i64,
				a1 + 1216,
				0i64,
				a1 + 1152,
				a1 + 1232) >= 0)
			{
				if (*(_DWORD*)(a1 + 2320) == 5
					&& *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2168) + 16i64))(*(_QWORD*)(a1 + 2168))
						+ 8) != 1)
				{
					if ((*(_BYTE*)(a1 + 664) & 2) == 0)
						goto LABEL_10;
					v3 = *(_DWORD*)(a1 + 2304);
					v38 = 0;
					v4 = v3;
					if (v3 < 0)
						v4 = 0x80000000 - v3;
					if ((int)abs32(v4) > 84)
					{
					LABEL_10:
						v39 = (__m128*)(a1 + 1152);
						sub_1401AFC20((__int64*)&v39, (double*)(a1 + 1088));
						v39 = v5;
						v6 = (__m128)0x40400000u;
						v7 = _mm_mul_ps(*(__m128*)(a1 + 1136), *(__m128*)(a1 + 1136));
						v8 = fsqrt(
							(float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
							+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0]);
						v9 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C77880, (__m128)xmmword_140C77880, 85), v5[1]),
									_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C77880, (__m128)xmmword_140C77880, 0), *v5)),
								_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C77880, (__m128)xmmword_140C77880, 170), v5[2])),
							v5[3]);
						v10 = _mm_mul_ps(v9, v9);
						v11 = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
							+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
						v10.m128_i32[0] = *(_DWORD*)(a1 + 2308);
						v12 = 1.0 / fsqrt(v11);
						v6.m128_f32[0] = 3.0 - (float)((float)(v11 * v12) * v12);
						v13 = (__m128)0x3F800000u;
						v6.m128_f32[0] = fmaxf((float)(v6.m128_f32[0] * 0.5) * v12, 0.0);
						v14 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v9);
						v9.m128_i32[0] = *(_DWORD*)(a1 + 2304);
						v13.m128_f32[0] = (float)(1.0 - (float)(v9.m128_f32[0] * 0.69999999)) * v8;
						v15 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v14);
						*(_DWORD*)(a1 + 1136) = _mm_cvtsi128_si32(v15);
						v16 = v15;
						v17 = (__m128)_mm_srli_si128(v15, 8);
						*(_DWORD*)(a1 + 1140) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 4));
						*(_DWORD*)(a1 + 1144) = _mm_cvtsi128_si32((__m128i)v17);
						v17.m128_f32[0] = (float)((float)(v10.m128_f32[0] - (float)-(float)(v10.m128_f32[0] * 0.1)) * v9.m128_f32[0])
							- (float)(v10.m128_f32[0] * 0.1);
						v10.m128_i32[0] = *(_DWORD*)(a1 + 1140);
						v18 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), (__m128)xmmword_140C77870);
						*(float*)(a1 + 1136) = *(float*)(a1 + 1136) - v18.m128_f32[0];
						*(float*)v16.m128i_i32 = *(float*)(a1 + 1144) - _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
						*(float*)(a1 + 1140) = v10.m128_f32[0] - _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
						*(_DWORD*)(a1 + 1144) = v16.m128i_i32[0];
						sub_1401AFC20((__int64*)&v39, (double*)(a1 + 1152));
					}
				}
				*(_QWORD*)&v19 = *(unsigned int*)(a1 + 2288) ^ 0x80000000i64;
				v20 = sub_1408FE3D0(0.0);
				*(float*)&v19 = *(float*)&v19 * 0.5;
				v21 = sub_1408FC950(0.0);
				v22 = sub_1408FE3D0(v19);
				v23 = sub_1408FC950(v19);
				v41 = 0;
				v37.m128_f32[0] = (float)((float)(v23 * v20) * v21) + (float)((float)(v22 * v21) * v20);
				v37.m128_f32[2] = (float)((float)(v23 * v21) * v20) - (float)((float)(v22 * v20) * v21);
				v37.m128_f32[1] = (float)((float)(v22 * v21) * v21) - (float)((float)(v23 * v20) * v20);
				v37.m128_f32[3] = (float)((float)(v22 * v20) * v20) + (float)((float)(v23 * v21) * v21);
				v24 = _mm_shuffle_ps(v37, v37, 85).m128_f32[0];
				v25 = _mm_shuffle_ps(v37, v37, 170).m128_f32[0];
				v26 = v25 * 2.0;
				v27 = v37.m128_f32[0] * (float)(v24 * 2.0);
				v28 = _mm_shuffle_ps(v37, v37, 255).m128_f32[0];
				v29 = v28 * (float)(v25 * 2.0);
				v30 = v28 * (float)(v37.m128_f32[0] * 2.0);
				v31 = v37.m128_f32[0] * (float)(v37.m128_f32[0] * 2.0);
				*(float*)&v19 = v24 * (float)(v24 * 2.0);
				v32 = v25 * (float)(v25 * 2.0);
				v33 = v37.m128_f32[0] * v26;
				*(float*)&v39 = (float)(1.0 - *(float*)&v19) - v32;
				v34 = v28 * (float)(v24 * 2.0);
				v35 = v24 * v26;
				*((float*)&v39 + 1) = v27 + v29;
				v40 = (float)(v37.m128_f32[0] * v26) - v34;
				v42 = v27 - v29;
				v45 = 0;
				v49 = 0;
				v37.m128_u64[0] = a1 + 1152;
				v37.m128_u64[1] = (unsigned __int64)&v39;
				v43 = (float)(1.0 - v31) - v32;
				v44 = v35 + v30;
				v50 = xmmword_140B7AD00;
				v46 = v33 + v34;
				v47 = v35 - v30;
				v48 = (float)(1.0 - v31) - *(float*)&v19;
				sub_1401AFB10((__m128**) & v37, (__m128*)(a1 + 1152));
				v39 = (__m128*)(a1 + 1152);
				sub_1401AFC20((__int64*)&v39, (double*)(a1 + 1088));
			}
		}
	}
	(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD, _DWORD))(**(_QWORD**)(a1 + 2168) + 48i64))(
		*(_QWORD*)(a1 + 2168),
		a1 + 1200,
		a1 + 1232,
		*(unsigned int*)(a1 + 1068),
		0);
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2168) + 344i64))(*(_QWORD*)(a1 + 2168));
	return (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2168) + 352i64))(*(_QWORD*)(a1 + 2168), 0i64);
}
// 1404F5C27: variable 'v5' is possibly undefined
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;

