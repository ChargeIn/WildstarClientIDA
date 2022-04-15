//----- (0000000140152FD0) ----------------------------------------------------
__int64 __fastcall sub_140152FD0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v6; // rcx
	_DWORD* v7; // rax
	__int64* v8; // rcx
	__int64 v9; // rdx
	_DWORD* v10; // rbx
	_DWORD* v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64* v15; // rcx
	__int64 v16; // r10
	__int64 v17; // rax
	__int64* v18; // rcx
	__int64 v19; // r10
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // r13
	int v23; // r12d
	int v24; // edi
	int v25; // esi
	int v26; // r15d
	unsigned int v27; // ebx
	unsigned int v28; // edi
	unsigned int v29; // eax
	__m128i v30; // xmm0
	__m128 v31; // xmm7
	unsigned int v32; // eax
	__m128 v33; // xmm9
	__m128 v34; // xmm5
	float v35; // xmm2_4
	float v36; // xmm12_4
	float v37; // xmm8_4
	float v38; // xmm10_4
	__m128 v39; // xmm0
	float v40; // xmm3_4
	float v41; // xmm5_4
	__int64 v42; // rax
	__m128i v43; // xmm1
	__m128i v44; // xmm1
	__int64 v45; // rcx
	__int64 v46; // rcx
	__int64 v47; // rcx
	unsigned int v48; // [rsp+20h] [rbp-E0h] BYREF
	unsigned int v49; // [rsp+24h] [rbp-DCh] BYREF
	__int64 v50; // [rsp+28h] [rbp-D8h]
	__m128 v51; // [rsp+30h] [rbp-D0h]
	_DWORD* v52; // [rsp+40h] [rbp-C0h]
	int v53[2]; // [rsp+48h] [rbp-B8h] BYREF
	_DWORD* v54; // [rsp+50h] [rbp-B0h]
	int v55[2]; // [rsp+58h] [rbp-A8h] BYREF
	int v56[2]; // [rsp+60h] [rbp-A0h] BYREF
	int v57[2]; // [rsp+68h] [rbp-98h] BYREF
	int v58[2]; // [rsp+70h] [rbp-90h] BYREF
	int v59[2]; // [rsp+78h] [rbp-88h] BYREF
	__int64 v60; // [rsp+80h] [rbp-80h]
	__int64 v61; // [rsp+88h] [rbp-78h]
	_DWORD* v62; // [rsp+90h] [rbp-70h]
	unsigned int v63; // [rsp+180h] [rbp+80h] BYREF
	int v64; // [rsp+190h] [rbp+90h]
	unsigned int v65; // [rsp+198h] [rbp+98h] BYREF

	v3 = *(_QWORD*)(a1 + 104);
	if (v3 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 32i64))(v3))
		return 0i64;
	v6 = *(_QWORD*)(a1 + 112);
	if (v6)
	{
		if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, a2))
			return 0i64;
	}
	if (!*(_QWORD*)(a1 + 88))
		return 0i64;
	if (*(_QWORD*)(a1 + 104) || *(_QWORD*)(a1 + 112))
	{
		v7 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 112) + 24i64))(*(_QWORD*)(a1 + 112));
		v8 = *(__int64**)(a1 + 104);
		v9 = *v8;
		v10 = v7;
		v52 = v7;
		v11 = (_DWORD*)(*(__int64(__fastcall**)(__int64*))(v9 + 24))(v8);
		v12 = *(_QWORD*)(a1 + 128);
		v62 = v11;
		v54 = 0i64;
		if (v12)
			v54 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 24i64))(v12);
		v13 = *(_QWORD*)(a1 + 88);
		v65 = 0;
		v14 = (*(__int64(__fastcall**)(__int64, unsigned int*, __int64))(*(_QWORD*)v13 + 64i64))(v13, &v65, 2i64);
		v15 = *(__int64**)(a1 + 112);
		v65 >>= 2;
		v63 = 0;
		v16 = *v15;
		v61 = v14;
		v17 = (*(__int64(__fastcall**)(__int64*, _QWORD, unsigned int*, __int64))(v16 + 72))(v15, 0i64, &v63, 1i64);
		v18 = *(__int64**)(a1 + 104);
		v48 = 0;
		v19 = *v18;
		v50 = v17;
		v20 = (*(__int64(__fastcall**)(__int64*, _QWORD, unsigned int*, __int64))(v19 + 72))(v18, 0i64, &v48, 1i64);
		v21 = *(_QWORD*)(a1 + 128);
		v22 = 0i64;
		v60 = v20;
		v49 = 0;
		if (v21)
			v22 = (*(__int64(__fastcall**)(__int64, _QWORD, unsigned int*, __int64))(*(_QWORD*)v21 + 72i64))(
				v21,
				0i64,
				&v49,
				1i64);
		v23 = 0;
		v24 = 0;
		v64 = 0;
		do
		{
			v25 = 0;
			v26 = 0;
			do
			{
				v57[0] = v26 + *(_DWORD*)(a1 + 120);
				v57[1] = v24 + *(_DWORD*)(a1 + 124);
				v27 = sub_1400FF740(v10, v50, v63, v57);
				v58[0] = v26 + *(_DWORD*)(a1 + 120) + 1;
				v58[1] = v24 + *(_DWORD*)(a1 + 124);
				v28 = sub_1400FF740(v52, v50, v63, v58);
				v55[0] = v26 + *(_DWORD*)(a1 + 120);
				v55[1] = v64 + 1 + *(_DWORD*)(a1 + 124);
				v29 = sub_1400FF740(v52, v50, v63, v55);
				v30 = _mm_cvtsi32_si128(v27);
				v10 = v52;
				v53[0] = v26 + *(_DWORD*)(a1 + 120) + 1;
				v53[1] = *(_DWORD*)(a1 + 124) + v64 + 1;
				v31 = _mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v29), 0), (__m128i)0i64),
								(__m128i)0i64),
							198)),
					(__m128)xmmword_140B7AB70);
				v32 = sub_1400FF740(v52, v50, v63, v53);
				v59[0] = v25;
				v59[1] = v23;
				v33 = _mm_mul_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(
									_mm_cvtepi32_ps(
										_mm_shuffle_epi32(
											_mm_unpacklo_epi16(
												_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v28), 0), (__m128i)0i64),
												(__m128i)0i64),
											198)),
									(__m128)xmmword_140B7AB70),
								_mm_mul_ps(
									_mm_cvtepi32_ps(
										_mm_shuffle_epi32(
											_mm_unpacklo_epi16(
												_mm_unpacklo_epi8(_mm_shuffle_epi32(v30, 0), (__m128i)0i64),
												(__m128i)0i64),
											198)),
									(__m128)xmmword_140B7AB70)),
							v31),
						_mm_mul_ps(
							_mm_cvtepi32_ps(
								_mm_shuffle_epi32(
									_mm_unpacklo_epi16(
										_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v32), 0), (__m128i)0i64),
										(__m128i)0i64),
									198)),
							(__m128)xmmword_140B7AB70)),
					(__m128)xmmword_140B7AC00);
				v34 = _mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(
									_mm_shuffle_epi32(_mm_cvtsi32_si128(sub_1400FF740(v62, v60, v48, v59)), 0),
									(__m128i)0i64),
								(__m128i)0i64),
							198)),
					(__m128)xmmword_140B7AB70);
				v35 = _mm_shuffle_ps(v34, v34, 255).m128_f32[0];
				v36 = fmaxf(_mm_shuffle_ps(v33, v33, 255).m128_f32[0], v35);
				v51.m128_f32[0] = (float)(v34.m128_f32[0] * v35) + (float)(v33.m128_f32[0] * (float)(1.0 - v35));
				v37 = (float)(_mm_shuffle_ps(v34, v34, 170).m128_f32[0] * v35)
					+ (float)(_mm_shuffle_ps(v33, v33, 170).m128_f32[0] * (float)(1.0 - v35));
				v38 = (float)(_mm_shuffle_ps(v34, v34, 85).m128_f32[0] * v35)
					+ (float)(_mm_shuffle_ps(v33, v33, 85).m128_f32[0] * (float)(1.0 - v35));
				v51.m128_u64[1] = __PAIR64__(LODWORD(v36), LODWORD(v37));
				v51.m128_f32[1] = v38;
				if (v22)
				{
					v56[0] = v25 + *(_DWORD*)(a1 + 136);
					v56[1] = v23 + *(_DWORD*)(a1 + 140);
					v39 = _mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_shuffle_epi32(
								_mm_unpacklo_epi16(
									_mm_unpacklo_epi8(
										_mm_shuffle_epi32(_mm_cvtsi32_si128(sub_1400FF740(v54, v22, v49, v56)), 0),
										(__m128i)0i64),
									(__m128i)0i64),
								198)),
						(__m128)xmmword_140B7AB70);
					v40 = _mm_shuffle_ps(v39, v39, 255).m128_f32[0];
					v51.m128_i32[3] = fmaxf(v36, v40);
					v51.m128_f32[0] = (float)(v39.m128_f32[0] * v40) + (float)(v41 * (float)(1.0 - v40));
					v51.m128_f32[1] = (float)(_mm_shuffle_ps(v39, v39, 85).m128_f32[0] * v40) + (float)(v38 * (float)(1.0 - v40));
					v51.m128_f32[2] = (float)(_mm_shuffle_ps(v39, v39, 170).m128_f32[0] * v40) + (float)(v37 * (float)(1.0 - v40));
				}
				v24 = v64;
				v26 += 2;
				v42 = v25 + v65 * v23;
				++v25;
				v43 = _mm_shuffle_epi32(
					_mm_cvttps_epi32(
						_mm_add_ps(
							_mm_mul_ps(
								_mm_min_ps(_mm_max_ps((__m128)0i64, v51), (__m128)xmmword_140B7B240),
								(__m128)xmmword_140B7B470),
							(__m128)xmmword_140B7AC50)),
					198);
				v44 = _mm_packus_epi16(v43, v43);
				*(_DWORD*)(v61 + 4 * v42) = _mm_cvtsi128_si32(_mm_packus_epi16(v44, v44));
			} while (v26 < 64);
			v24 += 2;
			++v23;
			v64 = v24;
		} while (v24 < 64);
		if (v22)
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 128) + 80i64))(*(_QWORD*)(a1 + 128), 0i64);
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 104) + 80i64))(*(_QWORD*)(a1 + 104), 0i64);
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 112) + 80i64))(*(_QWORD*)(a1 + 112), 0i64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 72i64))(*(_QWORD*)(a1 + 88));
		v45 = *(_QWORD*)(a1 + 104);
		if (v45)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v45 + 8i64))(v45);
			*(_QWORD*)(a1 + 104) = 0i64;
		}
		v46 = *(_QWORD*)(a1 + 112);
		if (v46)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
			*(_QWORD*)(a1 + 112) = 0i64;
		}
		v47 = *(_QWORD*)(a1 + 128);
		if (v47)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v47 + 8i64))(v47);
			*(_QWORD*)(a1 + 128) = 0i64;
		}
	}
	return 1i64;
}
// 14015348B: variable 'v41' is possibly undefined
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC00: using guessed type __int128 xmmword_140B7AC00;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

