//----- (0000000140394A10) ----------------------------------------------------
void __fastcall sub_140394A10(__int64 a1, int a2)
{
	__int64 v3; // rax
	__int64* v4; // rax
	int v5; // eax
	int v6; // eax
	int v7; // ebx
	__m128 v8; // xmm10
	__m128 v9; // xmm13
	float v10; // xmm13_4
	__m128 v11; // xmm3
	__m128 v12; // xmm2
	__m128 v13; // xmm0
	__m128 v14; // xmm10
	__m128 v15; // xmm10
	float v16; // xmm12_4
	__m128 v17; // xmm2
	__m128 v18; // xmm0
	__m128 v19; // xmm0
	__m128 v20; // xmm8
	__m128 v21; // xmm1
	__m128 v22; // xmm8
	__m128 v23; // xmm2
	__m128 v24; // xmm0
	__m128 v25; // xmm1
	__m128 v26; // xmm0
	__m128 v27; // xmm10
	int v28; // ecx
	__int64 v29; // rcx
	int v30; // ecx
	__int64 v31; // rcx
	float v32; // xmm0_4
	__int64 v33; // rcx
	float v34; // xmm0_4
	__int64 v35; // rcx
	float v36; // xmm0_4
	float v37; // xmm11_4
	int v38; // ebx
	float v39; // xmm0_4
	__int64 v40; // rcx
	__m128 v41; // [rsp+20h] [rbp-89h] BYREF
	__int64 v42; // [rsp+30h] [rbp-79h] BYREF
	float v43; // [rsp+38h] [rbp-71h]
	int v44; // [rsp+3Ch] [rbp-6Dh]
	int v45; // [rsp+40h] [rbp-69h]
	__int64 v46; // [rsp+44h] [rbp-65h]
	char v47[12]; // [rsp+50h] [rbp-59h] BYREF
	int v48; // [rsp+5Ch] [rbp-4Dh]

	if (a2)
	{
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 296i64))(*(_QWORD*)(a1 + 16), 1i64);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 320i64))(*(_QWORD*)(a1 + 16), 1i64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 112i64))(*(_QWORD*)(a1 + 16));
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 128i64))(*(_QWORD*)(a1 + 16));
		v3 = *(_QWORD*)(a1 + 8);
		if (!*(_DWORD*)(v3 + 104))
			v3 = *(_QWORD*)(v3 + 32);
		v4 = (__int64*)(v3 + 336);
		if (*v4)
			sub_1407C2C10(*v4, *(_QWORD*)(*(_QWORD*)*v4 + 8 * v4[2]));
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 256i64))(*(_QWORD*)(a1 + 16));
		(*(void(__fastcall**)(_QWORD, bool))(**(_QWORD**)(a1 + 16) + 336i64))(
			*(_QWORD*)(a1 + 16),
			(*(_DWORD*)(*(_QWORD*)(a1 + 8) + 360i64) & 0x100) == 0);
		v5 = *(_DWORD*)(a1 + 24);
		if ((v5 & 2) != 0 || (v5 & 4) != 0)
		{
			v6 = dword_140C44400;
			if (*(_DWORD*)qword_140C63750 < dword_140C44400)
				v6 = *(_DWORD*)qword_140C63750;
			if (byte_140C44410[v6] && (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) + 128i64) & 0x8000000) != 0)
			{
				v7 = 1;
				if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 1352i64))(*(_QWORD*)(a1 + 16)))
				{
					(*(void(__fastcall**)(_QWORD, __int64, __m128*, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 16i64)
						+ 448i64))(
							*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64),
							*(_QWORD*)(a1 + 8) + 224i64,
							&v41,
							3i64);
					v8 = (__m128)0x40400000u;
					v9 = _mm_mul_ps(v41, v41);
					v10 = fsqrt(
						(float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
						+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
					v11 = _mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v41, v41, 85), *(__m128*)(*(_QWORD*)(a1 + 8) + 256i64)),
							_mm_mul_ps(_mm_shuffle_ps(v41, v41, 0), *(__m128*)(*(_QWORD*)(a1 + 8) + 240i64))),
						_mm_mul_ps(_mm_shuffle_ps(v41, v41, 170), *(__m128*)(*(_QWORD*)(a1 + 8) + 272i64)));
					v12 = _mm_mul_ps(v11, v11);
					v12.m128_f32[0] = (float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
						+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
					v13 = v12;
					v13.m128_f32[0] = 1.0 / fsqrt(v12.m128_f32[0]);
					v8.m128_f32[0] = (float)((float)(3.0 - (float)((float)(v12.m128_f32[0] * v13.m128_f32[0]) * v13.m128_f32[0]))
						* 0.5)
						* v13.m128_f32[0];
					v13.m128_f32[0] = v10;
					v8.m128_f32[0] = fmaxf(v8.m128_f32[0], 0.0);
					v14 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v11), _mm_shuffle_ps(v13, v13, 0));
					v15 = _mm_shuffle_ps(v14, v14, 136);
				LABEL_16:
					v16 = fminf(*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) + 892i64), 0.050000001);
					if ((*(_BYTE*)(a1 + 24) & 2) != 0)
					{
						v17 = (__m128)0x3F800000u;
						v17.m128_f32[0] = 1.0
							- (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 1376i64))(*(_QWORD*)(a1 + 16));
						v18 = _mm_mul_ps(*(__m128*)(a1 + 32), _mm_shuffle_ps(v17, v17, 0));
						*(__m128*)(a1 + 32) = v18;
						*(double*)v18.m128_u64 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 1368i64))(*(_QWORD*)(a1 + 16));
						v19 = _mm_shuffle_ps(v18, v18, 0);
						v20 = _mm_mul_ps(*(__m128*)(a1 + 48), v19);
						*(double*)v19.m128_u64 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 1360i64))(*(_QWORD*)(a1 + 16));
						v21 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v15), v20);
						v20.m128_f32[0] = v16;
						v22 = _mm_shuffle_ps(v20, v20, 0);
						*(__m128*)(a1 + 32) = _mm_add_ps(*(__m128*)(a1 + 32), _mm_mul_ps(v21, v22));
						v23 = (__m128)0x3F800000u;
						v23.m128_f32[0] = 1.0
							- (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 1376i64))(*(_QWORD*)(a1 + 16));
						v24 = _mm_mul_ps(*(__m128*)(a1 + 48), _mm_shuffle_ps(v23, v23, 0));
						*(__m128*)(a1 + 48) = v24;
						v25 = _mm_mul_ps(*(__m128*)(a1 + 32), v22);
						v26 = _mm_add_ps(v24, v25);
						*(__m128*)(a1 + 48) = v26;
						v25.m128_f32[0] = *(float*)&dword_140C1E5DC * 0.5;
						v27 = _mm_add_ps((__m128)xmmword_140B7AC50, _mm_mul_ps(v26, _mm_shuffle_ps(v25, v25, 0)));
						v28 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 16) + 456i64))(
							*(_QWORD*)(a1 + 16),
							169i64,
							0i64)
							+ 8);
						v42 = 169i64;
						v43 = 0.0;
						v45 = 1065353216;
						v46 = 17i64;
						v26.m128_f32[0] = (float)v28;
						v29 = *(_QWORD*)(a1 + 16);
						v44 = (int)(float)(fmaxf(0.0, fminf(v27.m128_f32[0], 1.0)) * v26.m128_f32[0]);
						(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v29 + 600i64))(v29, 1i64, &v42);
						v30 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 16) + 456i64))(
							*(_QWORD*)(a1 + 16),
							170i64,
							0i64)
							+ 8);
						v42 = 170i64;
						v43 = 0.0;
						v45 = 1065353216;
						v46 = 17i64;
						v26.m128_f32[0] = (float)v30;
						v31 = *(_QWORD*)(a1 + 16);
						v44 = (int)(float)(fmaxf(0.0, fminf(_mm_shuffle_ps(v27, v27, 85).m128_f32[0], 1.0)) * v26.m128_f32[0]);
						(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v31 + 600i64))(v31, 2i64, &v42);
					}
					if (v7)
					{
						if ((*(_BYTE*)(a1 + 24) & 4) != 0)
						{
							v32 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 1376i64))(*(_QWORD*)(a1 + 16));
							v33 = *(_QWORD*)(a1 + 16);
							*(float*)(a1 + 28) = (float)(1.0 - v32) * *(float*)(a1 + 28);
							v34 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v33 + 1384i64))(v33);
							v35 = *(_QWORD*)(a1 + 16);
							v36 = (float)((float)(v34 * v10) * v16) + *(float*)(a1 + 28);
							*(float*)(a1 + 28) = v36;
							v37 = fmaxf(0.0, fminf(v36 * *(float*)&dword_140C1E5DC, 1.0));
							(*(void(__fastcall**)(__int64, __int64, char*))(*(_QWORD*)v35 + 608i64))(v35, 3i64, v47);
							v38 = v48;
							v39 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 1392i64))(*(_QWORD*)(a1 + 16));
							v40 = *(_QWORD*)(a1 + 16);
							v45 = LODWORD(v37);
							v42 = 171i64;
							v44 = v38;
							v46 = 19i64;
							v43 = v39 * v37;
							(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v40 + 600i64))(v40, 3i64, &v42);
						}
					}
					return;
				}
			}
			else
			{
				v7 = 0;
			}
			v10 = 0.0;
			v41 = 0i64;
			v15 = 0i64;
			goto LABEL_16;
		}
	}
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C1E5DC: using guessed type int dword_140C1E5DC;
// 140C44400: using guessed type int dword_140C44400;
// 140C44410: using guessed type _BYTE byte_140C44410[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140394A10: using guessed type char var_B0[12];

