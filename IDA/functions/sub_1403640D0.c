//----- (00000001403640D0) ----------------------------------------------------
__int64 __fastcall sub_1403640D0(__m128* a1)
{
	float v2; // xmm1_4
	int v3; // eax
	float v4; // xmm11_4
	float v5; // xmm14_4
	unsigned __int64 i; // r10
	__int64 j; // r8
	unsigned __int64 v8; // rdx
	float v9; // xmm0_4
	float v10; // xmm0_4
	__int64 v11; // rax
	__m128** v12; // rsi
	__m128* v13; // r11
	__int64 v14; // r9
	__int64 v15; // r10
	__m128** v16; // rcx
	unsigned __int64 k; // r14
	__m128* v18; // rbx
	__int64 v19; // rax
	__int64 m; // r9
	__m128* v21; // r8
	__m128* v22; // rdx
	__m128* v23; // rcx
	unsigned __int64 v24; // rax
	__m128 v25; // xmm2
	unsigned __int64 v26; // rax
	__m128 v27; // xmm2
	__m128 v28; // xmm1
	unsigned __int64 v29; // rax
	unsigned __int64 v30; // rcx
	_QWORD* v31; // rdx
	__int64 v32; // rdx
	__m128* v33; // rbx
	_QWORD* v34; // rcx
	__int64 v35; // rcx
	unsigned __int64 v36; // rax
	__int64 v37; // rax
	int v38; // eax
	int v39; // eax
	bool v40; // zf
	__m128 v41; // xmm1
	__m128 v42; // xmm2
	float v43; // xmm2_4
	float v44; // xmm0_4
	float v45; // xmm3_4
	__m128 v46; // xmm4
	__m128 v47; // xmm4
	__m128 v48; // xmm4
	float v50; // [rsp+E0h] [rbp+8h]

	v2 = a1[266].m128_f32[0];
	v3 = dword_140C43F10;
	if (*(_DWORD*)qword_140C63750 < dword_140C43F10)
		v3 = *(_DWORD*)qword_140C63750;
	v4 = *((float*)&xmmword_140C43F20 + v3) * 0.0099999998;
	if (v2 <= 0.0)
	{
		v50 = 0.0;
		v5 = 1.0;
	}
	else
	{
		v50 = 1.0 / (float)((float)(v2 * 0.94999999) - v2);
		v5 = -(float)(v50 * v2);
	}
	for (i = a1[146].m128_u64[0]; i; i = *(_QWORD*)(i + 1424))
	{
		for (j = *(_QWORD*)(*(_QWORD*)(i + 24) + 48i64); j; j = *(_QWORD*)(j + 24))
		{
			v8 = *(_QWORD*)(j + 8);
			if (!*(_QWORD*)(v8 + 1232) && *(_DWORD*)(v8 + 1048))
			{
				if (!a1[53].m128_i32[1]
					|| ((v9 = *(float*)(v8 + 644) - a1[57].m128_f32[1], v9 <= 0.0)
						? (v10 = v9 * *(float*)(i + 1304))
						: (v10 = v9 * *(float*)(i + 1300)),
						v10 >= *(float*)(i + 1296)))
				{
					*(_QWORD*)(v8 + 1232) = a1 + 316;
					*(_QWORD*)(v8 + 1240) = a1[316].m128_u64[0];
					a1[316].m128_u64[0] = v8;
					v11 = *(_QWORD*)(v8 + 1240);
					if (v11)
						*(_QWORD*)(v11 + 1232) = v8 + 1240;
				}
			}
		}
	}
	v12 = (__m128**) & a1[316];
	v13 = (__m128*)a1[316].m128_u64[0];
	while (v13)
	{
		if (!(unsigned int)sub_14035BDF0(a1, v13 + 39))
		{
			v16 = *(__m128***)(v15 + 1232);
			if (v16)
				*v16 = v13;
			if (*(_QWORD*)v14)
				*(_QWORD*)(*(_QWORD*)v14 + 1232i64) = *(_QWORD*)(v15 + 1232);
			*(_QWORD*)(v15 + 1232) = 0i64;
			*(_QWORD*)v14 = 0i64;
		}
	}
	for (k = a1[341].m128_u64[1]; k; k = *(_QWORD*)(k + 328))
	{
		if (a1[385].m128_i32[2] != 2 || (*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)k + 24i64))(k))
		{
			v18 = *(__m128**)(k + 8);
			if (v18 != (__m128*)a1[52].m128_u64[0])
			{
				if ((a1[8].m128_i8[0] & 0x40) != 0)
					(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(k + 16) + 160i64))(
						*(_QWORD*)(k + 16),
						1i64,
						1i64);
				if (!v18[77].m128_u64[0])
				{
					v18[77].m128_u64[0] = (unsigned __int64)v12;
					v18[77].m128_u64[1] = (unsigned __int64)*v12;
					*v12 = v18;
					v19 = v18[77].m128_i64[1];
					if (v19)
						*(_QWORD*)(v19 + 1232) = (char*)v18 + 1240;
				}
				for (m = *(_QWORD*)(k + 120); m; m = *(_QWORD*)(m + 24))
				{
					v21 = *(__m128**)(m + 8);
					if (!v21[77].m128_u64[0])
					{
						v22 = (__m128*)(k + 208);
						v23 = (__m128*)(k + 208);
						v24 = 0i64;
						while (1)
						{
							v25 = _mm_mul_ps(v21[41], *v23);
							if ((float)((float)((float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
								+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0])
								+ v23->m128_f32[3]) > v21[42].m128_f32[0])
								break;
							++v24;
							++v23;
							if (v24 >= 6)
							{
								v26 = 0i64;
								while (1)
								{
									v27 = _mm_cmplt_ps((__m128)0i64, *v22);
									v28 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v27, v21[40]), _mm_and_ps(v27, v21[39])), *v22);
									if ((float)((float)((float)(v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0])
										+ _mm_shuffle_ps(v28, v28, 170).m128_f32[0])
										+ v22->m128_f32[3]) > 0.0)
										goto LABEL_46;
									++v26;
									++v22;
									if (v26 >= 6)
									{
										v21[77].m128_u64[0] = (unsigned __int64)v12;
										v21[77].m128_u64[1] = (unsigned __int64)*v12;
										*v12 = v21;
										v29 = v21[77].m128_u64[1];
										if (v29)
											*(_QWORD*)(v29 + 1232) = (char*)v21 + 1240;
										goto LABEL_46;
									}
								}
							}
						}
					}
				LABEL_46:
					;
				}
			}
		}
	}
	v30 = a1[52].m128_u64[0];
	if (v30)
	{
		v31 = *(_QWORD**)(v30 + 1232);
		if (v31)
			*v31 = *(_QWORD*)(v30 + 1240);
		v32 = *(_QWORD*)(v30 + 1240);
		if (v32)
			*(_QWORD*)(v32 + 1232) = *(_QWORD*)(v30 + 1232);
		*(_QWORD*)(v30 + 1232) = 0i64;
		*(_QWORD*)(v30 + 1240) = 0i64;
	}
	v33 = *v12;
	if (*v12)
	{
		while (1)
		{
			v34 = (_QWORD*)v33[77].m128_u64[0];
			if (v34)
				*v34 = v33[77].m128_u64[1];
			v35 = v33[77].m128_i64[1];
			if (v35)
				*(_QWORD*)(v35 + 1232) = v33[77].m128_u64[0];
			v36 = v33->m128_u64[0];
			v33[77].m128_u64[0] = 0i64;
			v33[77].m128_u64[1] = 0i64;
			v37 = (*(__int64(__fastcall**)(__m128*))(v36 + 344))(v33);
			if (v37)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 128i64))(v37);
			v38 = (*(__int64(__fastcall**)(__m128*))(v33->m128_u64[0] + 312))(v33);
			if (!v38)
				break;
			v39 = v38 - 1;
			if (!v39)
			{
				v40 = (a1[8].m128_i8[0] & 0x40) == 0;
				goto LABEL_69;
			}
			if (v39 != 1 || (a1[8].m128_i8[0] & 0x20) != 0 && (a1[8].m128_i32[1] & 0x100) != 0)
			{
			LABEL_70:
				if ((a1[385].m128_i32[2] != 2
					|| (~((unsigned __int32)v33[22].m128_i32[2] >> 7) & 1) != 0 && v33[8].m128_f32[0] != 0.0)
					&& (v33[7].m128_f32[0] != 0.0 || v33[7].m128_f32[2] != 0.0))
				{
					if (a1[82].m128_f32[3] == 0.0
						|| (v41 = _mm_sub_ps(v33[41], a1[57]),
							v42 = _mm_mul_ps(v41, v41),
							v43 = (float)(v42.m128_f32[0] + _mm_shuffle_ps(v42, v42, 85).m128_f32[0])
							+ _mm_shuffle_ps(v42, v42, 170).m128_f32[0],
							v43 <= *(float*)&dword_140C44288)
						|| (v44 = 1.0 / fsqrt(v43),
							v45 = (float)((float)((float)((float)(v44 * v43) * v44) - 3.0) * (float)(v44 * -0.5))
							* (float)((float)(v33[42].m128_f32[0] * 2.0) * a1[81].m128_f32[1]),
							v45 > (float)(v4 * 0.75)))
					{
						v46 = _mm_sub_ps(_mm_max_ps(v33[43], _mm_min_ps(a1[54], v33[44])), a1[54]);
						v47 = _mm_shuffle_ps(v46, v46, 136);
						v48 = _mm_mul_ps(v47, v47);
						if (fmaxf(
							0.0,
							fminf((float)(fsqrt(v48.m128_f32[0] + _mm_shuffle_ps(v48, v48, 85).m128_f32[0]) * v50) + v5, 1.0)) > 0.0)
						{
							(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v33[3].m128_u64[0] + 200i64))(
								v33[3].m128_i64[0],
								1i64);
							if (a1[385].m128_i32[2] == 1)
								v33[70].m128_i32[3] = a1[53].m128_i32[0];
						}
					}
				}
			}
		LABEL_81:
			v33 = *v12;
			if (!*v12)
				return 0i64;
		}
		v40 = (a1[8].m128_i8[0] & 0x20) == 0;
	LABEL_69:
		if (!v40)
			goto LABEL_70;
		goto LABEL_81;
	}
	return 0i64;
}
// 1403642B0: variable 'v13' is possibly undefined
// 1403642C0: variable 'v15' is possibly undefined
// 1403642CF: variable 'v14' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C43F10: using guessed type int dword_140C43F10;
// 140C43F20: using guessed type __int128 xmmword_140C43F20;
// 140C44288: using guessed type int dword_140C44288;
// 140C63750: using guessed type __int64 qword_140C63750;

