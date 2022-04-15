//----- (00000001403174A0) ----------------------------------------------------
__int64 __fastcall sub_1403174A0(__int64 a1, unsigned int* a2, int a3, __int64 a4, __int64 a5)
{
	__m128 v5; // xmm6
	int v6; // r11d
	__int16 v7; // r15
	unsigned int* v8; // r14
	__m128* v10; // rsi
	__m128 v11; // xmm12
	__m128 v12; // xmm9
	__m128 v13; // xmm0
	__m128* v14; // rbx
	__m128* v15; // rax
	unsigned __int64 v16; // rcx
	__m128 v17; // xmm15
	__int64 v18; // rbx
	__m128 v19; // xmm15
	unsigned __int16 v20; // ax
	__m128 v21; // xmm6
	__m128 v22; // xmm15
	unsigned __int64 v23; // r15
	__int64 v24; // r13
	__m128 v25; // xmm14
	unsigned int v26; // r10d
	int v27; // r8d
	unsigned int v28; // r14d
	__m128 v29; // xmm4
	float v30; // xmm5_4
	__int64 v31; // r9
	unsigned int* v32; // rdx
	int v33; // r12d
	__int64 v34; // r11
	__int64 v35; // rax
	float v36; // xmm9_4
	float v37; // xmm8_4
	__m128 v38; // xmm4
	float v39; // xmm4_4
	float v40; // xmm0_4
	__m128 v41; // xmm2
	__m128* v42; // rax
	__m128 v43; // xmm6
	__m128 v44; // xmm1
	__m128 v45; // xmm3
	__m128 v46; // xmm0
	float v47; // xmm3_4
	__m128 v48; // xmm1
	unsigned __int64 v49; // rdx
	__int64* v50; // rcx
	__m128 v51; // xmm3
	__int64 v52; // rax
	__m128 v53; // xmm1
	float v54; // xmm4_4
	__m128 v55; // xmm2
	bool v56; // zf
	__m128 v57; // xmm2
	float v58; // xmm1_4
	float* v59; // rax
	float v60; // xmm6_4
	float v61; // xmm8_4
	float v62; // xmm6_4
	__m128 v63; // xmm0
	float v64; // xmm10_4
	float v65; // xmm12_4
	__m128 v66; // xmm2
	float v67; // xmm0_4
	float v68; // xmm1_4
	float v69; // xmm1_4
	unsigned __int64 v70; // rax
	__m128 v71; // xmm3
	__m128 v72; // xmm1
	__m128 v73; // xmm0
	float v74; // xmm1_4
	__m128 v75; // xmm3
	float v76; // xmm0_4
	float v77; // xmm1_4
	float v78; // xmm1_4
	unsigned __int64 v79; // rcx
	__int64 result; // rax
	float v81; // xmm1_4
	float v82; // xmm1_4
	__int32 v83; // [rsp+38h] [rbp-D0h]
	__m128 v84; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v85; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v86; // [rsp+68h] [rbp-A0h] BYREF
	__m128* v87; // [rsp+168h] [rbp+60h] BYREF
	float v88; // [rsp+170h] [rbp+68h] BYREF
	float v89; // [rsp+178h] [rbp+70h]
	__int64 v90; // [rsp+180h] [rbp+78h]

	v90 = a4;
	v89 = *(float*)&a3;
	v87 = (__m128*)a1;
	v6 = *((__int16*)a2 + 11);
	v7 = a3;
	v8 = a2 + 3;
	v10 = (__m128*)a1;
	v11 = (__m128)COERCE_UNSIGNED_INT((float)a3);
	v11.m128_f32[0] = v11.m128_f32[0] * 0.001;
	v12 = (__m128)COERCE_UNSIGNED_INT((float)(v6 - *((__int16*)a2 + 10)));
	v12.m128_f32[0] = v12.m128_f32[0] / (float)v6;
	v83 = v12.m128_i32[0];
	sub_1401ADB90((__m128i*) & v85, (unsigned __int16*)a2 + 6);
	v13 = v12;
	sub_140318840(
		v12.m128_f32[0],
		v10[75].m128_i64[1],
		v10[75].m128_i64[0],
		&v88,
		*(unsigned __int16*)(v10[26].m128_u64[0] + 1520));
	v14 = (__m128*)(*(__int64(__fastcall**)(__m128*))(v10->m128_u64[0] + 144))(v10);
	v15 = (__m128*)(*(__int64(__fastcall**)(__m128*))(v10->m128_u64[0] + 104))(v10);
	v16 = v10->m128_u64[1];
	v17 = *v14;
	v18 = 0i64;
	v84.m128_u64[0] = v16;
	v19 = _mm_add_ps(v17, *v15);
	v5.m128_f32[0] = v11.m128_f32[0];
	v20 = *(_WORD*)(v16 + 104);
	v21 = _mm_shuffle_ps(v5, v5, 0);
	v86 = v21;
	v22 = _mm_add_ps(_mm_mul_ps(v19, v21), v85);
	v85 = v22;
	if (v20)
	{
		v23 = v10[2].m128_u64[1];
		v24 = *(_QWORD*)(v23 + 64);
		v25 = 0i64;
		v26 = 0;
		v27 = 1;
		v28 = *(_DWORD*)(v24 + 776);
		if (v28)
		{
			v29 = v86;
			v30 = v89;
			v31 = 0i64;
			v32 = (unsigned int*)(a5 + 8);
			v33 = v20;
			do
			{
				if ((v33 & v27) != 0)
				{
					v34 = *(_QWORD*)(v23 + 1416);
					v35 = *(_QWORD*)(v24 + 784);
					v36 = *(float*)(v34 + v31 + 28);
					v37 = *(float*)(v34 + v31 + 48) - v36;
					if (*(_WORD*)(v35 + v18 + 2))
					{
						if (*(_WORD*)(v35 + v18 + 2) == 1)
						{
							v38 = _mm_mul_ps(
								_mm_unpacklo_ps(
									_mm_unpacklo_ps((__m128) * a2, (__m128)a2[2]),
									_mm_unpacklo_ps((__m128)a2[1], (__m128)0i64)),
								*(__m128*)(a5 + 16i64 * v26));
							v39 = (float)((float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
								+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0])
								+ *(float*)(a5 + 16i64 * v26 + 12);
							v40 = fabs(v39);
							if (v37 == 0.0)
							{
								if (v40 >= v36)
									v30 = 0.0;
								else
									v30 = 1.0;
							}
							else
							{
								v30 = fmaxf(0.0, fminf((float)(*(float*)(v34 + v31 + 48) - v40) / v37, 1.0));
							}
							v13 = (__m128) * v32;
							v41 = _mm_unpacklo_ps((__m128) * (v32 - 1), (__m128)0i64);
							if (v39 >= 0.0)
								v29 = _mm_sub_ps((__m128)0i64, _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (v32 - 2), v13), v41));
							else
								v29 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (v32 - 2), v13), v41);
						}
					}
					else
					{
						v42 = (__m128*)(v90 + 16i64 * v26);
						v43 = _mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128) * a2, (__m128)a2[2]),
							_mm_unpacklo_ps((__m128)a2[1], (__m128)0i64));
						v44 = _mm_sub_ps(*v42, v43);
						v45 = _mm_mul_ps(v44, v44);
						v46 = _mm_shuffle_ps(v45, v45, 85);
						v47 = fsqrt((float)(v45.m128_f32[0] + v46.m128_f32[0]) + _mm_shuffle_ps(v45, v45, 170).m128_f32[0]);
						if (v37 == 0.0)
						{
							if (v47 >= v36)
								v30 = 0.0;
							else
								v30 = 1.0;
						}
						else
						{
							v46 = (__m128)0x3F800000u;
							v30 = 1.0 - fmaxf(0.0, fminf((float)(v47 - v36) / v37, 1.0));
						}
						v46.m128_f32[0] = v47;
						v13 = _mm_shuffle_ps(v46, v46, 0);
						v29 = _mm_div_ps(_mm_sub_ps(*v42, v43), v13);
					}
					v21 = v86;
					v13.m128_f32[0] = v30;
					v48 = _mm_mul_ps(v29, _mm_shuffle_ps(v13, v13, 0));
					v13 = v25;
					v25 = _mm_add_ps(
						_mm_mul_ps(
							_mm_mul_ps(
								_mm_shuffle_ps(
									(__m128) * (unsigned int*)(v34 + v31 + 8),
									(__m128) * (unsigned int*)(v34 + v31 + 8),
									0),
								v48),
							v86),
						v25);
				}
				v27 = __ROL4__(v27, 1);
				++v26;
				v18 += 80i64;
				v32 += 4;
				v31 += 72i64;
			} while (v26 < v28);
			v12.m128_i32[0] = v83;
			v10 = v87;
			v16 = v84.m128_u64[0];
			LODWORD(v18) = 0;
		}
		v7 = LOWORD(v89);
		v8 = a2 + 3;
		v22 = _mm_add_ps(v25, v22);
		v85 = v22;
	}
	if (*(float*)(v16 + 48) > 0.0 && (*(_DWORD*)(v16 + 8) == 2 || *(_BYTE*)v10[26].m128_u64[0] == 2))
	{
		v49 = v10[2].m128_u64[1];
		v50 = *(__int64**)(*(_QWORD*)(v49 + 16) + 488i64);
		if (v50)
		{
			v51 = (__m128) * a2;
			v52 = *v50;
			if (*(_BYTE*)v10[26].m128_u64[0] == 2)
				v86 = _mm_add_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v49 + 128), (__m128) * (unsigned int*)(v49 + 136)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v49 + 132), (__m128)0i64)),
					_mm_unpacklo_ps(_mm_unpacklo_ps(v51, (__m128)a2[2]), _mm_unpacklo_ps((__m128)a2[1], (__m128)0i64)));
			else
				v86 = _mm_unpacklo_ps(_mm_unpacklo_ps(v51, (__m128)a2[2]), _mm_unpacklo_ps((__m128)a2[1], (__m128)0i64));
			(*(void(__fastcall**)(__int64*, __m128*, __m128*, __int64))(v52 + 448))(v50, &v86, &v84, 3i64);
			v53 = v11;
			v53.m128_f32[0] = v11.m128_f32[0] * *(float*)(v10->m128_u64[1] + 48);
			v85 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), v84), v22);
		}
	}
	sub_1401C9800(&v87, (__m128i*) & v85);
	*v8 = (unsigned int)v87;
	*((_WORD*)v8 + 2) = WORD2(v87);
	v54 = *(float*)a2;
	v55 = _mm_unpacklo_ps((__m128)a2[1], (__m128)0i64);
	v56 = *(_BYTE*)v10[26].m128_u64[0] == 2;
	v84 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * a2, (__m128)a2[2]), v55);
	if (v56)
	{
		v57 = _mm_mul_ps(
			_mm_add_ps(v10[85], _mm_mul_ps(v85, _mm_shuffle_ps((__m128)LODWORD(v88), (__m128)LODWORD(v88), 0))),
			v21);
	}
	else
	{
		v55.m128_f32[0] = v88 * v11.m128_f32[0];
		v57 = _mm_mul_ps(_mm_shuffle_ps(v55, v55, 0), v85);
	}
	*(float*)a2 = v57.m128_f32[0] + v54;
	v58 = _mm_shuffle_ps(v57, v57, 85).m128_f32[0] + *((float*)a2 + 1);
	*((float*)a2 + 2) = _mm_shuffle_ps(v57, v57, 170).m128_f32[0] + *((float*)a2 + 2);
	*((float*)a2 + 1) = v58;
	if (*(_DWORD*)(v10->m128_u64[1] + 108)
		&& (*(float(__fastcall**)(unsigned __int64))(*(_QWORD*)v10[2].m128_u64[1] + 88i64))(v10[2].m128_u64[1]) > 0.0)
	{
		v59 = (float*)v10->m128_u64[1];
		v60 = v11.m128_f32[0] * v59[28];
		v61 = 1.0 - (float)((float)((float)(v59[30] - v59[29]) * v12.m128_f32[0]) + v59[29]);
		v62 = v60 / (*(float(__fastcall**)(unsigned __int64))(*(_QWORD*)v10[2].m128_u64[1] + 88i64))(v10[2].m128_u64[1]);
		v63 = (__m128)0x3F800000u;
		if ((float)(1.0 - (float)(v62 * v61)) >= 0.0)
		{
			v65 = v11.m128_f32[0] * *(float*)(v10->m128_u64[1] + 112);
			v64 = 1.0
				- (float)((float)(v65
					/ (*(float(__fastcall**)(unsigned __int64))(*(_QWORD*)v10[2].m128_u64[1] + 88i64))(v10[2].m128_u64[1]))
					* v61);
		}
		else
		{
			v64 = 0.0;
		}
		v63.m128_f32[0] = v64;
		v66 = _mm_mul_ps(*(__m128*)(v10[2].m128_u64[1] + 176), _mm_shuffle_ps(v63, v63, 0));
		v67 = v66.m128_f32[0] + *(float*)a2;
		v68 = _mm_shuffle_ps(v66, v66, 85).m128_f32[0];
		v66.m128_f32[0] = _mm_shuffle_ps(v66, v66, 170).m128_f32[0] + *((float*)a2 + 2);
		v69 = v68 + *((float*)a2 + 1);
		*(float*)a2 = v67;
		a2[2] = v66.m128_i32[0];
		*((float*)a2 + 1) = v69;
	}
	v70 = v10->m128_u64[1];
	if (*(_DWORD*)(v70 + 124))
	{
		v71 = v10[18];
		v72 = _mm_mul_ps(v71, v71);
		if ((float)((float)(v72.m128_f32[0] + _mm_shuffle_ps(v72, v72, 85).m128_f32[0])
			+ _mm_shuffle_ps(v72, v72, 170).m128_f32[0]) > 0.0)
		{
			v73 = (__m128) * (unsigned int*)(v70 + 128);
			v74 = (float)((float)(*(float*)(v70 + 132) - v73.m128_f32[0]) * v12.m128_f32[0]) + v73.m128_f32[0];
			if (v74 < 0.0)
				v74 = 0.0;
			if (*(_DWORD*)(v70 + 8) == 2)
				v71 = _mm_sub_ps(v71, v10[12]);
			v73.m128_f32[0] = v74;
			v75 = _mm_mul_ps(v71, _mm_shuffle_ps(v73, v73, 0));
			v76 = v75.m128_f32[0] + *(float*)a2;
			v77 = _mm_shuffle_ps(v75, v75, 85).m128_f32[0];
			v75.m128_f32[0] = _mm_shuffle_ps(v75, v75, 170).m128_f32[0] + *((float*)a2 + 2);
			v78 = v77 + *((float*)a2 + 1);
			*(float*)a2 = v76;
			a2[2] = v75.m128_i32[0];
			*((float*)a2 + 1) = v78;
		}
	}
	v79 = v10[26].m128_u64[0];
	result = *(unsigned int*)(v79 + 2128);
	if (!(_DWORD)result)
		goto LABEL_64;
	if ((result & 1) != 0
		&& ((float)(v84.m128_f32[0] * *(float*)a2) <= 0.0
			|| fabs(*(float*)a2 - v10[60].m128_f32[0]) <= *(float*)(v79 + 2132)))
	{
		LODWORD(v18) = 1;
	}
	if ((result & 2) != 0)
	{
		v81 = *((float*)a2 + 1);
		if ((float)(v84.m128_f32[1] * v81) <= 0.0 || fabs(v81 - v10[60].m128_f32[1]) <= *(float*)(v79 + 2132))
			LODWORD(v18) = v18 + 1;
	}
	if ((result & 4) != 0)
	{
		v82 = *((float*)a2 + 2);
		if ((float)(v84.m128_f32[2] * v82) <= 0.0 || fabs(v82 - v10[60].m128_f32[2]) <= *(float*)(v79 + 2132))
			LODWORD(v18) = v18 + 1;
	}
	result = (*(__int64(__fastcall**)(__m128*))(v10->m128_u64[0] + 128))(v10);
	if ((_DWORD)v18 == (_DWORD)result)
	{
		result = 0i64;
		*((_WORD*)a2 + 10) = 0;
	}
	else
	{
	LABEL_64:
		*((_WORD*)a2 + 10) -= v7;
	}
	return result;
}
// 1403175C5: variable 'v5' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

