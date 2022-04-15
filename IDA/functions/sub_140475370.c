//----- (0000000140475370) ----------------------------------------------------
__int64 __fastcall sub_140475370(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
	float v8; // xmm10_4
	float v9; // xmm10_4
	__int64 v10; // r15
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned int v13; // esi
	__int64 v14; // r13
	__m128 v15; // xmm6
	__m128* v16; // rax
	__m128 v17; // xmm1
	__m128 v18; // xmm2
	__m128* v19; // rax
	__m128 v20; // xmm1
	__m128 v21; // xmm6
	__m128* v22; // rax
	float* v23; // rax
	float v24; // xmm0_4
	__int64 v25; // rax
	__m128 v26; // xmm1
	unsigned int* v27; // rax
	unsigned __int64 v28; // r10
	__m128i v29; // xmm2
	__m128 v30; // xmm0
	__m128 v31; // xmm5
	__m128 v32; // xmm4
	__int64 v33; // r11
	unsigned __int64 v34; // r8
	__m128 v35; // xmm0
	__int64 v36; // r11
	__int64 v37; // rdx
	_QWORD* v38; // rcx
	_QWORD* v39; // rax
	_DWORD* v40; // rax
	int* v41; // rax
	__m128 v42; // xmm11
	float v43; // xmm7_4
	float v44; // xmm8_4
	double v45; // xmm0_8
	float v46; // xmm6_4
	__int64 v47; // rax
	__m128 v48; // xmm4
	__m128i v49; // xmm3
	int* v50; // rbx
	float v51; // xmm6_4
	float v52; // xmm7_4
	float v53; // xmm8_4
	float v54; // xmm9_4
	int v55; // r9d
	int v56; // r10d
	int v57; // eax
	int v58; // ecx
	float v59; // xmm1_4
	float v60; // xmm0_4
	float v61; // xmm1_4
	__int64 v62; // rax
	__m128 v63; // xmm1
	__int64 v64; // r15
	__int64 v65; // rbx
	int* v66; // rax
	int* v67; // rsi
	int* v68; // r14
	void(__fastcall * **v69)(_QWORD); // rcx
	void(__fastcall * **v70)(_QWORD); // rcx
	int v71; // ecx
	int v72; // r8d
	int v73; // r9d
	_DWORD* v74; // rdx
	int v75; // eax
	int* v76; // rax
	unsigned __int64 v77; // rcx
	_QWORD* v78; // rbx
	_QWORD* i; // rax
	int v80; // ecx
	_QWORD* v81; // rax
	int v82; // ecx
	__int64 v83; // rsi
	_QWORD** v84; // rdx
	unsigned __int64 v85; // r8
	_QWORD* v86; // rax
	_QWORD* j; // rcx
	int k; // ecx
	_QWORD* v89; // rbx
	int v90; // ecx
	__int64 v91; // rdi
	__int64 v92; // rbx
	__int64 v93; // rcx
	__m128 v95; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v96; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v97; // [rsp+68h] [rbp-A0h]
	__int128 v98; // [rsp+78h] [rbp-90h] BYREF
	__m128 v99; // [rsp+88h] [rbp-80h]
	int v100[4]; // [rsp+98h] [rbp-70h] BYREF
	int* v101; // [rsp+A8h] [rbp-60h]
	__int64 v102; // [rsp+B0h] [rbp-58h]
	__int64 v103; // [rsp+C0h] [rbp-48h]
	float v104; // [rsp+C8h] [rbp-40h]
	__int64 v105; // [rsp+D0h] [rbp-38h]
	__int64 v106; // [rsp+D8h] [rbp-30h]
	int v107; // [rsp+E0h] [rbp-28h]
	int v108; // [rsp+E4h] [rbp-24h]
	int v109; // [rsp+E8h] [rbp-20h]
	int v110; // [rsp+ECh] [rbp-1Ch]
	int v111; // [rsp+F0h] [rbp-18h]
	__int128 v112; // [rsp+F8h] [rbp-10h]
	__m128 v113; // [rsp+108h] [rbp+0h] BYREF
	__m128 v114; // [rsp+118h] [rbp+10h]
	int v115; // [rsp+1C8h] [rbp+C0h] BYREF
	int v116; // [rsp+1CCh] [rbp+C4h]
	unsigned int v117; // [rsp+1D0h] [rbp+C8h] BYREF

	v117 = a2;
	sub_140474E10((__int64)v100, a3);
	v8 = (float)(dword_140C636A8 - v100[0]);
	v9 = v8 / (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v106 + 48i64))(v106);
	v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v106 + 96i64))(v106);
	v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v12 = *(_QWORD*)(a1 + 5864);
	v13 = 0;
	v14 = v11;
	if (v12)
	{
		if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v12 + 848i64))(v12, a2))
		{
			v15 = *(__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 856i64))(
				*(_QWORD*)(a1 + 5864),
				&v95,
				a2,
				0i64);
		}
		else
		{
			v16 = *(__m128**)(qword_140C65898 + 29096);
			if (!v16)
				v16 = *(__m128**)(qword_140C65898 + 29088);
			v17 = *(__m128*)(a1 + 4656);
			v15 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v16[7]),
						_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v16[6])),
					_mm_mul_ps(_mm_shuffle_ps(v17, v17, 170), v16[8])),
				v16[9]);
		}
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 848i64))(
			*(_QWORD*)(a1 + 5864),
			1i64))
		{
			v18 = *(__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*, __int64))(**(_QWORD**)(a1 + 5864) + 856i64))(
				*(_QWORD*)(a1 + 5864),
				&v95,
				1i64);
		}
		else
		{
			v19 = *(__m128**)(qword_140C65898 + 29096);
			if (!v19)
				v19 = *(__m128**)(qword_140C65898 + 29088);
			v20 = *(__m128*)(a1 + 4656);
			v18 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v20, v20, 85), v19[7]),
						_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v19[6])),
					_mm_mul_ps(_mm_shuffle_ps(v20, v20, 170), v19[8])),
				v19[9]);
		}
		v21 = _mm_sub_ps(v15, v18);
		v117 = 1;
		*(float*)&v103 = *(float*)&v103 + v21.m128_f32[0];
		*((float*)&v103 + 1) = *((float*)&v103 + 1) + _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
		v104 = v104 + _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
		if (v107 < 0)
		{
			if (v105)
			{
				sub_140141100(v105, (float)*(int*)(v14 + 8));
				v23 = sub_140141910(v105, v95.m128_f32);
				v96.m128_u64[0] = 0i64;
				v24 = (float)(int)v23[1];
				v97.m128_f32[0] = (float)(int)*v23;
				v97.m128_f32[1] = v24;
				v98 = (__int128)v96;
				v99 = v97;
			}
			else
			{
				v99 = (__m128)xmmword_140C784F0;
				v98 = xmmword_140C784E0;
				v95 = _mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6F0), (__m128i)0i64),
								(__m128i)0i64),
							198)),
					(__m128)xmmword_140B7AB70);
				(*(void(__fastcall**)(__int64, __int64, int*, __int64, __int128*, int, __m128*, int))(*(_QWORD*)qword_140C65680
					+ 264i64))(
						qword_140C65680,
						v10,
						v101,
						-1i64,
						&v98,
						1285,
						&v95,
						1);
			}
		}
		else
		{
			v22 = (__m128*)sub_1404778C0((__int64)&v113, v107, v101, v108);
			v98 = (__int128)*v22;
			v99 = v22[1];
		}
		v25 = sub_140475020(
			a1,
			(__int64)&v113,
			(__int64)v100,
			1u,
			v99.m128_f32[0] - *(float*)&v98,
			v99.m128_f32[1] - *((float*)&v98 + 1),
			LODWORD(v9));
		v26 = *(__m128*)(v25 + 16);
		v96 = *(__m128*)v25;
		v97 = v26;
		if (a4 && (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a3 + 64) + 16i64))(*(_QWORD*)(a3 + 64)))
		{
			v27 = (unsigned int*)(*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v106 + 24i64))(v106, &v95);
			v28 = 0i64;
			v29 = _mm_cvtsi32_si128(0);
			v30 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v27), v29),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v27[1]), v29)));
			v31 = _mm_add_ps(v99, v30);
			v32 = _mm_add_ps((__m128)v98, v30);
			v33 = *(_QWORD*)(qword_140C65898 + 29504);
			v34 = *(_QWORD*)(v33 + 3208);
			v35 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + 8) >> 1), v29),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + 12) >> 1), v29)));
			v96 = _mm_add_ps(v32, v35);
			v97 = _mm_add_ps(v31, v35);
			v113 = v96;
			v114 = v97;
			if (v34)
			{
				v36 = *(_QWORD*)(v33 + 3200);
				v37 = v36;
				while (1)
				{
					v38 = *(_QWORD**)(*(_QWORD*)v37 + 56i64);
					v39 = (_QWORD*)*v38;
					if ((_QWORD*)*v38 != v38)
						break;
				LABEL_24:
					++v28;
					v37 += 8i64;
					if (v28 >= v34)
						goto LABEL_25;
				}
				while (v39[2])
				{
					v39 = (_QWORD*)*v39;
					if (v39 == v38)
						goto LABEL_24;
				}
				sub_140157910(*(_QWORD*)(v36 + 8 * v28), &v95, (__int64)&v96, 0i64);
			}
			else
			{
			LABEL_25:
				v95 = 0i64;
			}
			v115 = (int)v95.m128_f32[0];
			v116 = (int)v95.m128_f32[1];
			v40 = (_DWORD*)(*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v106 + 24i64))(v106, &v95);
			v115 += *v40;
			v116 += v40[1];
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v106 + 32i64))(v106, &v115);
		}
		v41 = sub_1404802D0(a1 + 6200, (int*)&v117);
		if (**((_QWORD**)v41 + 1) == *((_QWORD*)v41 + 1))
		{
			(*(void(__fastcall**)(_QWORD, __int64, __int64, _BOOL8(__fastcall*)(__int64*, unsigned int, __m128*), void(__fastcall*)(__int64*, int, __int64, double), __int64))(**(_QWORD**)(a1 + 5864) + 1016i64))(
				*(_QWORD*)(a1 + 5864),
				1i64,
				1i64,
				sub_140477460,
				sub_140477A10,
				a1);
		}
		else if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a3 + 64) + 16i64))(*(_QWORD*)(a3 + 64)))
		{
			v42 = _mm_cvtepi32_ps((__m128i)0i64);
		LABEL_32:
			v43 = v99.m128_f32[1] - *((float*)&v98 + 1);
			v44 = v99.m128_f32[0] - *(float*)&v98;
			v45 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v106 + 160i64))(v106);
			v46 = *(float*)&v45 * v43;
			*(float*)&v45 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v106 + 152i64))(v106);
			v47 = sub_140475020(a1, (__int64)&v113, (__int64)v100, 1u, *(float*)&v45 * v44, v46, LODWORD(v9));
			v48 = *(__m128*)(v47 + 16);
			v49 = _mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + 8)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + 12)), _mm_cvtsi32_si128(0)));
			v96 = *(__m128*)v47;
			v97 = v48;
			v113 = _mm_max_ps(v96, v42);
			v114 = _mm_min_ps(v48, _mm_cvtepi32_ps(v49));
			if (v113.m128_f32[0] < v114.m128_f32[0] && v113.m128_f32[1] < v114.m128_f32[1])
			{
				v50 = (int*)qword_140C7CF78;
				v51 = v97.m128_f32[1];
				v52 = v97.m128_f32[0];
				v53 = v96.m128_f32[1];
				v54 = v96.m128_f32[0];
				while (v50 != (int*)qword_140C7CF80)
				{
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v106 + 144i64))(v106) != 2)
					{
						v95.m128_i32[2] = (int)v52;
						v95.m128_i32[3] = (int)v51;
						v95.m128_i32[0] = (int)v54;
						v95.m128_i32[1] = (int)v53;
						v55 = v50[2];
						v56 = v50[3];
						if ((int)v52 < v55)
							v55 = (int)v52;
						v57 = *v50;
						if ((int)v51 < v56)
							v56 = (int)v51;
						v58 = v50[1];
						if (v57 < (int)v54)
							v57 = (int)v54;
						if (v58 < (int)v53)
							v58 = (int)v53;
						if (v57 < v55 && v58 < v56)
						{
							if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v106 + 144i64))(v106))
							{
								LODWORD(v61) = _mm_shuffle_ps((__m128)xmmword_140B7A470, (__m128)xmmword_140B7A470, 85).m128_u32[0];
								if (*(_DWORD*)(a1 + 6232))
								{
									*(float*)&v103 = *(float*)&v103 - 0.0;
									*((float*)&v103 + 1) = *((float*)&v103 + 1) - v61;
									v60 = v104 - 0.0;
								}
								else
								{
									*(float*)&v103 = *(float*)&v103 + 0.0;
									*((float*)&v103 + 1) = *((float*)&v103 + 1) + v61;
									v60 = v104 + 0.0;
								}
							}
							else
							{
								LODWORD(v59) = _mm_shuffle_ps((__m128)xmmword_140B7A300, (__m128)xmmword_140B7A300, 85).m128_u32[0];
								if (*(_DWORD*)(a1 + 6232))
								{
									*(float*)&v103 = *(float*)&v103 - 0.25;
									*((float*)&v103 + 1) = *((float*)&v103 + 1) - v59;
									v60 = v104 - 0.0;
								}
								else
								{
									*(float*)&v103 = *(float*)&v103 + 0.25;
									*((float*)&v103 + 1) = *((float*)&v103 + 1) + v59;
									v60 = v104 + 0.0;
								}
							}
							++v13;
							v104 = v60;
							if (v13 <= 0x32)
								goto LABEL_32;
							break;
						}
					}
					v50 += 4;
				}
			}
			v62 = sub_140475020(
				a1,
				(__int64)&v113,
				(__int64)v100,
				1u,
				v99.m128_f32[0] - *(float*)&v98,
				v99.m128_f32[1] - *((float*)&v98 + 1),
				LODWORD(v9));
			v63 = *(__m128*)(v62 + 16);
			v96 = *(__m128*)v62;
			v97 = v63;
			v95 = 0i64;
			if (v103 || LODWORD(v104) != v95.m128_i32[2])
				*(_DWORD*)(a1 + 6232) = *(_DWORD*)(a1 + 6232) == 0;
		}
	}
	v64 = a1 + 6200;
	v65 = *((_QWORD*)sub_1404802D0(a1 + 6200, (int*)&v117) + 1);
	v66 = sub_14018B280(128i64, 0);
	v67 = v66 + 4;
	v68 = v66;
	if (v66 != (int*)-16i64)
	{
		*v67 = v100[0];
		*((_QWORD*)v66 + 4) = 0i64;
		*((_QWORD*)v66 + 5) = 0i64;
		*((_QWORD*)v66 + 6) = 0i64;
		sub_14001C1B0((_QWORD*)v66 + 3, v101, v102);
		*((_QWORD*)v67 + 5) = v103;
		*((float*)v67 + 12) = v104;
		*((_QWORD*)v67 + 7) = v105;
		*((_QWORD*)v67 + 8) = v106;
		v67[18] = v107;
		v67[19] = v108;
		v67[20] = v109;
		v67[21] = v110;
		v67[22] = v111;
		*((_OWORD*)v67 + 6) = v112;
		v69 = (void(__fastcall***)(_QWORD)) * ((_QWORD*)v67 + 7);
		if (v69)
			(**v69)(v69);
		v70 = (void(__fastcall***)(_QWORD)) * ((_QWORD*)v67 + 8);
		if (v70)
			(**v70)(v70);
	}
	v71 = (int)v97.m128_f32[1];
	v72 = (int)v96.m128_f32[0];
	v73 = (int)v96.m128_f32[1];
	*(_QWORD*)v68 = v65;
	*((_QWORD*)v68 + 1) = *(_QWORD*)(v65 + 8);
	**(_QWORD**)(v65 + 8) = v68;
	*(_QWORD*)(v65 + 8) = v68;
	v74 = (_DWORD*)qword_140C7CF80;
	v95.m128_u64[0] = __PAIR64__(v73, v72);
	v75 = (int)v97.m128_f32[0];
	v95.m128_i32[3] = v71;
	v95.m128_i32[2] = (int)v97.m128_f32[0];
	if (qword_140C7CF80 == qword_140C7CF88)
	{
		sub_14015C990(&qword_140C7CF70, (int*)qword_140C7CF80, (int*)&v95);
	}
	else
	{
		if (qword_140C7CF80)
		{
			*(_DWORD*)qword_140C7CF80 = v72;
			v74[1] = v73;
			v74[2] = v75;
			v74[3] = v71;
			v74 = (_DWORD*)qword_140C7CF80;
		}
		qword_140C7CF80 = (__int64)(v74 + 4);
	}
	v76 = sub_1404802D0(a1 + 6200, (int*)&v117);
	sub_140476990(a1, *(_QWORD*)(*((_QWORD*)v76 + 1) + 8i64) + 16i64);
	v77 = 0i64;
	v78 = *(_QWORD**)qword_140C7CF68;
	for (i = *(_QWORD**)qword_140C7CF68; i != (_QWORD*)qword_140C7CF68; ++v77)
		i = (_QWORD*)*i;
	if (v77 > (unsigned int)dword_140C1E6C4)
	{
		v80 = 0;
		v81 = *(_QWORD**)qword_140C7CF68;
		if (v78 != (_QWORD*)qword_140C7CF68)
		{
			do
			{
				v81 = (_QWORD*)*v81;
				++v80;
			} while (v81 != (_QWORD*)qword_140C7CF68);
		}
		v82 = v80 - dword_140C1E6C4;
		if (v82 > 0)
		{
			v83 = (unsigned int)v82;
			do
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v78[2] + 64i64) + 168i64))(*(_QWORD*)(v78[2] + 64i64));
				v78 = (_QWORD*)*v78;
				--v83;
			} while (v83);
		}
	}
	v84 = *(_QWORD***)(a1 + 6248);
	v85 = 0i64;
	v86 = *v84;
	for (j = *v84; j != v84; ++v85)
		j = (_QWORD*)*j;
	if (v85 > (unsigned int)dword_140C1E6A4)
	{
		for (k = 0; v86 != v84; ++k)
			v86 = (_QWORD*)*v86;
		v89 = *v84;
		v90 = k - dword_140C1E6A4;
		if (v90 > 0)
		{
			v91 = (unsigned int)v90;
			do
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v89[2] + 64i64) + 168i64))(*(_QWORD*)(v89[2] + 64i64));
				v89 = (_QWORD*)*v89;
				--v91;
			} while (v91);
		}
	}
	v92 = *(_QWORD*)(*((_QWORD*)sub_1404802D0(v64, (int*)&v117) + 1) + 8i64);
	if (qword_140C65898)
	{
		v93 = *(_QWORD*)(qword_140C65898 + 29504);
		if (v93)
			sub_1400EA3E0(v93, "MessageFinished", byte_1409EB834, v100);
	}
	if (v105)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v105 + 8i64))(v105);
		v105 = 0i64;
	}
	if (v106)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v106 + 8i64))(v106);
		v106 = 0i64;
	}
	if (v101)
		sub_14018B900((__int64)v101, 0);
	return v92 + 16;
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140B7A300: using guessed type __int128 xmmword_140B7A300;
// 140B7A470: using guessed type __int128 xmmword_140B7A470;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C1E6A4: using guessed type int dword_140C1E6A4;
// 140C1E6C4: using guessed type int dword_140C1E6C4;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;
// 140C7CF68: using guessed type __int64 qword_140C7CF68;
// 140C7CF70: using guessed type _QWORD qword_140C7CF70;
// 140C7CF78: using guessed type __int64 qword_140C7CF78;
// 140C7CF80: using guessed type __int64 qword_140C7CF80;
// 140C7CF88: using guessed type __int64 qword_140C7CF88;

