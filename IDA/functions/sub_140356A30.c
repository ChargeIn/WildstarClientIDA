//----- (0000000140356A30) ----------------------------------------------------
__int64 __fastcall sub_140356A30(__m128* a1)
{
	unsigned __int64 i; // rbx
	__m128* v3; // rax
	float v4; // xmm2_4
	float v5; // xmm2_4
	__m128 v6; // xmm1
	__m128 v7; // xmm3
	float v8; // xmm3_4
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rcx
	__m128* v12; // rcx
	__int64 v13; // rax
	__m128 v14; // xmm2
	int v15; // r10d
	int v16; // eax
	__int64 v17; // rbp
	__int64 j; // rsi
	unsigned __int64 v19; // rbx
	__m128* v20; // rax
	float v21; // xmm2_4
	float v22; // xmm2_4
	__m128 v23; // xmm1
	__m128 v24; // xmm3
	float v25; // xmm3_4
	__int64 v26; // rax
	__m128* v27; // rdx
	__int64 v28; // rax
	__int64 k; // rsi
	unsigned __int64 v30; // rbx
	__m128* v31; // rax
	float v32; // xmm2_4
	float v33; // xmm2_4
	__m128 v34; // xmm1
	__m128 v35; // xmm3
	float v36; // xmm3_4
	__int64 v37; // rcx
	__int64 v38; // rax
	__int64 v39; // rcx
	__m128* v40; // rdx
	__int64 v41; // rax
	unsigned __int64* v42; // r14
	unsigned __int64 v43; // rsi
	unsigned __int64 v44; // rbx
	unsigned __int64 v45; // rcx
	_QWORD* v46; // rdx
	unsigned __int64* v47; // rdx
	__int64 v48; // rcx
	__m128* v49; // rsi
	_QWORD* v50; // rbx
	_QWORD* v51; // rcx
	_QWORD* v52; // rdx
	_QWORD* v53; // r8
	_QWORD* v54; // r8
	__int64 v55; // rcx
	__int64 v56; // rdx
	_QWORD* m; // rcx
	_QWORD* v58; // rdx
	__int64 v59; // rdx
	__int64 v60; // rax
	_QWORD* n; // rcx
	_QWORD* v62; // rdx
	__int64 v63; // rdx
	__int64 v64; // rax
	int v66[4]; // [rsp+20h] [rbp-48h] BYREF

	if ((a1[8].m128_i32[0] & 0x800000) == 0)
	{
		for (i = a1[328].m128_u64[1]; i; i = *(_QWORD*)(i + 1032))
		{
			v3 = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)i + 80i64))(i, 3i64);
			v4 = v3[3].m128_f32[0];
			if (v4 != 0.0)
			{
				v5 = v4 * v4;
				v6 = _mm_sub_ps(a1[54], v3[2]);
				v7 = _mm_mul_ps(v6, v6);
				v8 = (float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0]) + _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
				if (v8 <= (float)(v5 * 1.21))
				{
					if (*(_DWORD*)(i + 232) || v8 > v5)
					{
						v11 = *(_QWORD*)(i + 32);
						if (v11)
							(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v11 + 352i64))(v11, 0i64);
					}
					else
					{
						v9 = *(_QWORD*)(i + 32);
						if (v9)
							(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 352i64))(v9, 1i64);
						v10 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)i + 328i64))(i);
						if (v10)
							(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 296i64))(v10, 1i64);
					}
					v12 = a1 + 331;
					if (!*(_QWORD*)(i + 1104))
					{
						*(_QWORD*)(i + 1104) = v12;
						*(_QWORD*)(i + 1112) = v12->m128_u64[0];
						v12->m128_u64[0] = i;
						v13 = *(_QWORD*)(i + 1112);
						if (v13)
							*(_QWORD*)(v13 + 1104) = i + 1112;
					}
				}
			}
		}
		v14 = _mm_mul_ps(
			_mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(
					_mm_shuffle_ps(a1[54], a1[54], 136),
					_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
			(__m128)xmmword_140B7B490);
		v15 = (int)v14.m128_f32[0];
		v16 = (int)_mm_shuffle_ps(v14, v14, 85).m128_f32[0];
		if ((int)v14.m128_f32[0] >= a1[136].m128_i32[3]
			&& v15 < a1[137].m128_i32[1]
			&& v16 >= a1[137].m128_i32[0]
			&& v16 < a1[137].m128_i32[2])
		{
			v17 = *(_QWORD*)(a1[142].m128_u64[0]
				+ 8i64
				* (v15 % a1[137].m128_i32[3]
					+ a1[137].m128_i32[3]
					* (v16 % a1[138].m128_i32[0] + a1[138].m128_i32[0] * (v16 % a1[138].m128_i32[0] < 0))
					+ a1[137].m128_i32[3] * (unsigned int)(v15 % a1[137].m128_i32[3] < 0)));
			if (v17)
			{
				v66[0] = 0;
				if (!*(_QWORD*)(v17 + 1448) || (unsigned int)sub_14037CC30(v17, (__int64)v66))
				{
					for (j = *(_QWORD*)(*(_QWORD*)(v17 + 24) + 56i64); j; j = *(_QWORD*)(j + 24))
					{
						v19 = *(_QWORD*)(j + 8);
						v20 = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)v19 + 80i64))(v19, 3i64);
						v21 = v20[3].m128_f32[0];
						if (v21 != 0.0)
						{
							v22 = v21 * v21;
							v23 = _mm_sub_ps(a1[54], v20[2]);
							v24 = _mm_mul_ps(v23, v23);
							v25 = (float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0])
								+ _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
							if (v25 <= (float)(v22 * 1.21))
							{
								if (v25 <= v22)
								{
									if (*(_DWORD*)(v19 + 308) != 2)
									{
										(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v19 + 48) + 184i64))(
											*(_QWORD*)(v19 + 48),
											2i64);
										*(_DWORD*)(v19 + 308) = 2;
									}
									v26 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v19 + 336i64))(v19);
									if (v26)
										(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v26 + 296i64))(v26, 1i64);
								}
								else if (*(_DWORD*)(v19 + 308) != 1)
								{
									(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v19 + 48) + 184i64))(
										*(_QWORD*)(v19 + 48),
										1i64);
									*(_DWORD*)(v19 + 308) = 1;
								}
								v27 = a1 + 316;
								if (!*(_QWORD*)(v19 + 1232))
								{
									*(_QWORD*)(v19 + 1232) = v27;
									*(_QWORD*)(v19 + 1240) = v27->m128_u64[0];
									v27->m128_u64[0] = v19;
									v28 = *(_QWORD*)(v19 + 1240);
									if (v28)
										*(_QWORD*)(v28 + 1232) = v19 + 1240;
								}
							}
						}
					}
					for (k = *(_QWORD*)(*(_QWORD*)(v17 + 24) + 64i64); k; k = *(_QWORD*)(k + 24))
					{
						v30 = *(_QWORD*)(k + 8);
						v31 = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)v30 + 80i64))(v30, 3i64);
						v32 = v31[3].m128_f32[0];
						if (v32 != 0.0)
						{
							v33 = v32 * v32;
							v34 = _mm_sub_ps(a1[54], v31[2]);
							v35 = _mm_mul_ps(v34, v34);
							v36 = (float)(v35.m128_f32[0] + _mm_shuffle_ps(v35, v35, 85).m128_f32[0])
								+ _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
							if (v36 <= (float)(v33 * 1.21))
							{
								if (*(_DWORD*)(v30 + 232) || v36 > v33)
								{
									v39 = *(_QWORD*)(v30 + 32);
									if (v39)
										(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v39 + 352i64))(v39, 0i64);
								}
								else
								{
									v37 = *(_QWORD*)(v30 + 32);
									if (v37)
										(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v37 + 352i64))(v37, 1i64);
									v38 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v30 + 328i64))(v30);
									if (v38)
										(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v38 + 296i64))(v38, 1i64);
								}
								v40 = a1 + 331;
								if (!*(_QWORD*)(v30 + 1104))
								{
									*(_QWORD*)(v30 + 1104) = v40;
									*(_QWORD*)(v30 + 1112) = v40->m128_u64[0];
									v40->m128_u64[0] = v30;
									v41 = *(_QWORD*)(v30 + 1112);
									if (v41)
										*(_QWORD*)(v41 + 1104) = v30 + 1112;
								}
							}
						}
					}
				}
			}
		}
	}
	v42 = &a1[315].m128_u64[1];
	v43 = a1[315].m128_u64[1];
	while (v43)
	{
		v44 = v43;
		v45 = v43 + 1224;
		v46 = *(_QWORD**)(v43 + 1232);
		v43 = *(_QWORD*)(v43 + 1224);
		if (v46)
		{
			*v46 = *(_QWORD*)(v44 + 1240);
			v48 = *(_QWORD*)(v44 + 1240);
			if (v48)
				*(_QWORD*)(v48 + 1232) = *(_QWORD*)(v44 + 1232);
			*(_QWORD*)(v44 + 1232) = 0i64;
			*(_QWORD*)(v44 + 1240) = 0i64;
		}
		else
		{
			v47 = *(unsigned __int64**)(v44 + 1216);
			if (v47)
				*v47 = v43;
			if (*(_QWORD*)v45)
				*(_QWORD*)(*(_QWORD*)v45 + 1216i64) = *(_QWORD*)(v44 + 1216);
			*(_QWORD*)(v44 + 1216) = 0i64;
			*(_QWORD*)v45 = 0i64;
			if (*(_DWORD*)(v44 + 308))
			{
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v44 + 48) + 184i64))(*(_QWORD*)(v44 + 48), 0i64);
				*(_DWORD*)(v44 + 308) = 0;
			}
		}
	}
	v49 = a1 + 330;
	v50 = (_QWORD*)a1[330].m128_u64[0];
	while (v50)
	{
		v51 = v50;
		v52 = v50 + 135;
		v53 = (_QWORD*)v50[138];
		v50 = (_QWORD*)v50[135];
		if (v53)
		{
			*v53 = v51[139];
			v56 = v51[139];
			if (v56)
				*(_QWORD*)(v56 + 1104) = v51[138];
			v51[138] = 0i64;
			v51[139] = 0i64;
		}
		else
		{
			v54 = (_QWORD*)v51[134];
			if (v54)
				*v54 = v50;
			if (*v52)
				*(_QWORD*)(*v52 + 1072i64) = v51[134];
			v51[134] = 0i64;
			v55 = v51[4];
			*v52 = 0i64;
			if (v55)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v55 + 352i64))(v55, 0i64);
		}
	}
	for (m = (_QWORD*)a1[316].m128_u64[0]; m; m = (_QWORD*)a1[316].m128_u64[0])
	{
		v58 = (_QWORD*)m[154];
		if (v58)
			*v58 = m[155];
		v59 = m[155];
		if (v59)
			*(_QWORD*)(v59 + 1232) = m[154];
		m[154] = 0i64;
		m[155] = 0i64;
		if (!m[152])
		{
			m[152] = v42;
			m[153] = *v42;
			*v42 = (unsigned __int64)m;
			v60 = m[153];
			if (v60)
				*(_QWORD*)(v60 + 1216) = m + 153;
		}
	}
	for (n = (_QWORD*)a1[331].m128_u64[0]; n; n = (_QWORD*)a1[331].m128_u64[0])
	{
		v62 = (_QWORD*)n[138];
		if (v62)
			*v62 = n[139];
		v63 = n[139];
		if (v63)
			*(_QWORD*)(v63 + 1104) = n[138];
		n[138] = 0i64;
		n[139] = 0i64;
		if (!n[134])
		{
			n[134] = v49;
			n[135] = v49->m128_u64[0];
			v49->m128_u64[0] = (unsigned __int64)n;
			v64 = n[135];
			if (v64)
				*(_QWORD*)(v64 + 1072) = n + 135;
		}
	}
	return 0i64;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140356A30: using guessed type int var_48[4];

