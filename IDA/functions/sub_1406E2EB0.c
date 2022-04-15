//----- (00000001406E2EB0) ----------------------------------------------------
void __fastcall sub_1406E2EB0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rbx
	int v5; // eax
	__m128 v6; // xmm5
	int* v7; // rdx
	int v8; // r9d
	int v9; // ecx
	int v10; // r10d
	__m128 v11; // xmm4
	__m128 v12; // xmm4
	__m128 v13; // xmm2
	float v14; // xmm3_4
	float v15; // xmm1_4
	float v16; // xmm3_4
	int v17; // eax
	__m128 v18; // xmm5
	float v19; // xmm1_4
	__m128 v20; // xmm2
	int v21; // eax
	float v22; // xmm1_4
	__m128i v23; // xmm2
	__m128i v24; // xmm0
	__m128 v25; // xmm2
	int v26; // eax
	float v27; // xmm5_4
	float v28; // xmm4_4
	bool v29; // cc
	float v30; // xmm3_4
	__m128 v31; // xmm0
	__m128 v32; // xmm2
	float v33; // xmm5_4
	__m128 v34; // xmm2
	float v35; // xmm4_4
	float v36; // xmm3_4
	__m128i v37; // xmm0
	int v38; // eax
	float v39; // xmm1_4
	__m128 v40; // xmm0
	__m128 v41; // xmm2
	__int128 v42; // [rsp+60h] [rbp-98h] BYREF
	int v43; // [rsp+74h] [rbp-84h]
	__int64 v44[10]; // [rsp+80h] [rbp-78h] BYREF

	v2 = *(_QWORD*)(a1 + 3816);
	if (v2)
	{
		LODWORD(v42) = 0;
		if ((*(unsigned int(__fastcall**)(__int64, __int128*))(*(_QWORD*)v2 + 32i64))(v2, &v42))
		{
			v3 = *(_QWORD*)(a1 + 3800);
			if (v3)
			{
				LODWORD(v42) = 0;
				if ((*(unsigned int(__fastcall**)(__int64, __int128*, __int64))(*(_QWORD*)v3 + 24i64))(v3, &v42, 1i64))
				{
					if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 3800) + 1056i64))(
						*(_QWORD*)(a1 + 3800),
						5i64))
					{
						v4 = *(_QWORD*)(a1 + 3816);
						(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
						(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
						if ((*(int(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64))(**(_QWORD**)(a1 + 3800) + 1064i64))(
							*(_QWORD*)(a1 + 3800),
							5i64,
							**(_QWORD**)(a1 + 3800),
							0i64,
							a1 + 2992,
							a1 + 2800,
							a1 + 2864,
							a1 + 2928) >= 0)
						{
							v5 = dword_140C545B0;
							v6 = (__m128)0x40400000u;
							v7 = (int*)qword_140C63750;
							v8 = (*(_DWORD*)(a1 + 716) + *(_DWORD*)(a1 + 724)) >> 1;
							v9 = *(_DWORD*)qword_140C63750;
							v10 = (*(_DWORD*)(a1 + 720) + *(_DWORD*)(a1 + 728)) >> 1;
							v11 = _mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(
										_mm_shuffle_ps((__m128)xmmword_140C77880, (__m128)xmmword_140C77880, 85),
										*(__m128*)(a1 + 2816)),
									_mm_mul_ps(
										_mm_shuffle_ps((__m128)xmmword_140C77880, (__m128)xmmword_140C77880, 0),
										*(__m128*)(a1 + 2800))),
								_mm_mul_ps(
									_mm_shuffle_ps((__m128)xmmword_140C77880, (__m128)xmmword_140C77880, 170),
									*(__m128*)(a1 + 2832)));
							if (*(_DWORD*)qword_140C63750 < dword_140C545B0)
								v5 = *(_DWORD*)qword_140C63750;
							v12 = _mm_add_ps(v11, *(__m128*)(a1 + 2848));
							v13 = _mm_mul_ps(v12, v12);
							v14 = (float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
								+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
							v15 = 1.0 / fsqrt(v14);
							v6.m128_f32[0] = 3.0 - (float)((float)(v14 * v15) * v15);
							v16 = dword_140C545C0[v5];
							v17 = dword_140C53BE0;
							if (v9 < dword_140C53BE0)
								v17 = *(_DWORD*)qword_140C63750;
							v6.m128_f32[0] = fmaxf((float)(v6.m128_f32[0] * 0.5) * v15, 0.0);
							v20 = _mm_mul_ps(*(__m128*)(a1 + 2848), *(__m128*)(a1 + 2848));
							v18 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v12);
							v19 = *(float*)(a1 + 1136) / dword_140C53BF0[v17];
							v20.m128_f32[0] = fsqrt(
								(float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
								+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0]);
							v21 = dword_140C54520;
							if (v9 < dword_140C54520)
								v21 = *(_DWORD*)qword_140C63750;
							v20.m128_f32[0] = v20.m128_f32[0] * (float)((float)(v19 * (float)(dword_140C54530[v21] - v16)) + v16);
							v22 = *(float*)(a1 + 1104);
							v23 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v18);
							*(_DWORD*)(a1 + 2848) = _mm_cvtsi128_si32(v23);
							v24 = v23;
							v25 = (__m128)_mm_srli_si128(v23, 8);
							*(_DWORD*)(a1 + 2852) = _mm_cvtsi128_si32(_mm_srli_si128(v24, 4));
							*(_DWORD*)(a1 + 2856) = _mm_cvtsi128_si32((__m128i)v25);
							v26 = dword_140C544C0;
							v27 = *(float*)(a1 + 2848);
							v28 = *(float*)(a1 + 2852);
							v29 = *v7 < dword_140C544C0;
							v44[0] = a1 + 2800;
							v30 = *(float*)(a1 + 2856);
							if (v29)
								v26 = *v7;
							v25.m128_f32[0] = v22 - (float)v8;
							v31 = (__m128)(unsigned int)dword_140C544D0[v26];
							v32 = _mm_div_ps(
								_mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), (__m128)xmmword_140C77860),
								_mm_shuffle_ps(v31, v31, 0));
							v33 = v27 - v32.m128_f32[0];
							*(float*)(a1 + 2848) = v33;
							v31.m128_f32[0] = _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
							v34 = _mm_shuffle_ps(v32, v32, 170);
							v35 = v28 - v31.m128_f32[0];
							v36 = v30 - v34.m128_f32[0];
							v37 = _mm_cvtsi32_si128(v10);
							*(float*)(a1 + 2852) = v35;
							*(float*)(a1 + 2856) = v36;
							v38 = dword_140C544C0;
							if (*v7 < dword_140C544C0)
								v38 = *v7;
							v39 = *(float*)(a1 + 1108) - _mm_cvtepi32_ps(v37).m128_f32[0];
							v40 = (__m128)(unsigned int)dword_140C544D0[v38];
							v34.m128_f32[0] = v39;
							v41 = _mm_div_ps(
								_mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), (__m128)xmmword_140C77870),
								_mm_shuffle_ps(v40, v40, 0));
							*(float*)(a1 + 2848) = v33 + v41.m128_f32[0];
							*(float*)(a1 + 2856) = v36 + _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
							*(float*)(a1 + 2852) = v35 + _mm_shuffle_ps(v41, v41, 85).m128_f32[0];
							sub_1401AFC20(v44, (double*)(a1 + 2864));
						}
					}
					(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 3792) + 48i64))(
						*(_QWORD*)(a1 + 3792),
						(unsigned int)dword_140C636A8,
						0i64);
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 3800) + 296i64))(*(_QWORD*)(a1 + 3800), 1i64);
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 3800) + 320i64))(*(_QWORD*)(a1 + 3800), 1i64);
					(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64, _DWORD))(**(_QWORD**)(a1 + 3792) + 80i64))(
						*(_QWORD*)(a1 + 3792),
						a1 + 2800,
						a1 + 2864,
						a1 + 2992,
						0);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
					*((_QWORD*)&v42 + 1) = *(_QWORD*)(a1 + 3816);
					LODWORD(v42) = 1;
					v43 = 0;
					(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
						qword_140C65670,
						&v42,
						&unk_140C3FE88,
						&unk_140C3FE88,
						&unk_140C3FE88);
					(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
						qword_140C65670,
						&unk_140C3FE88,
						1i64);
					v42 = 0i64;
					(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
						qword_140C65670,
						1i64,
						&v42);
					(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64, int, int, int, _QWORD, _QWORD, int, _DWORD))(**(_QWORD**)(a1 + 3792) + 128i64))(
						*(_QWORD*)(a1 + 3792),
						a1 + 2928,
						a1 + 2992,
						a1 + 3008,
						2,
						3,
						-1,
						*(_QWORD*)(a1 + 3808),
						0i64,
						1065353216,
						0);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
				}
			}
		}
	}
}
// 1406E2FBE: ignored the value written to the shadow area of the succeeding call
// 1406E2F79: ignored the value written to the shadow area of the succeeding call
// 140C53BE0: using guessed type int dword_140C53BE0;
// 140C53BF0: using guessed type float dword_140C53BF0[16];
// 140C544C0: using guessed type int dword_140C544C0;
// 140C544D0: using guessed type int dword_140C544D0[16];
// 140C54520: using guessed type int dword_140C54520;
// 140C54530: using guessed type float dword_140C54530[28];
// 140C545B0: using guessed type int dword_140C545B0;
// 140C545C0: using guessed type float dword_140C545C0[14];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 1406E2EB0: using guessed type __int64 var_78[10];

