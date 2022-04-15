//----- (0000000140609D70) ----------------------------------------------------
void __fastcall sub_140609D70(__int64 a1, __m128* a2, __m128* a3, __int64 a4, float a5)
{
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // esi
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // r8
	int v18; // esi
	int v19; // eax
	int v20; // eax
	__int64 v21; // rcx
	__int64* v22; // rsi
	bool v23; // zf
	__int64 v24; // rax
	__int64 v25; // r15
	__m128* v26; // rax
	__m128 v27; // xmm6
	__m128* v28; // rax
	__m128 v29; // xmm2
	__m128 v30; // xmm1
	__int64 v31; // rax
	int v32; // edx
	int v33; // r8d
	unsigned __int64 v34; // r9
	int v35; // eax
	__int64 v36; // rcx
	int v37; // eax
	float v38; // xmm0_4
	int v39; // eax
	float v40; // xmm8_4
	__m128 v41; // xmm3
	__m128 v42; // xmm2
	__m128 v43; // xmm1
	__m128 v44; // xmm0
	__int64 v45; // r14
	_QWORD* v46; // rsi
	__int64 v47; // r15
	_QWORD* v48; // rsi
	__int64 v49; // r15
	__m128 v50; // xmm3
	__m128 v51; // xmm7
	__m128 v52; // xmm3
	float v53; // xmm0_4
	__m128 v54; // xmm7
	float v55; // xmm6_4
	float v56; // xmm0_4
	_QWORD* v57; // rsi
	__int64 v58; // rcx
	__int64 v59; // rcx
	__int64 v60; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v61; // [rsp+28h] [rbp-D8h]
	__int128 v62; // [rsp+30h] [rbp-D0h]
	__m128 v63; // [rsp+40h] [rbp-C0h]
	int v64[4]; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v65; // [rsp+60h] [rbp-A0h] BYREF
	char v66[64]; // [rsp+70h] [rbp-90h] BYREF
	__int128 v67[6]; // [rsp+B0h] [rbp-50h] BYREF

	if (!*(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29080) + 24i64))
	{
		v8 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 232));
		v9 = v8;
		if (v8)
		{
			if (!*(_DWORD*)(v8 + 592))
				goto LABEL_24;
			v10 = *(_QWORD*)(v8 + 6408);
			v11 = 0;
			if (*(_BYTE*)(v10 + 4)
				&& (unsigned int)(*(_DWORD*)v10 - 89) <= 1
				&& (*(_DWORD*)(v9 + 304)
					|| (v12 = *(_QWORD*)(qword_140C65898 + 120)) != 0
					&& (*(_DWORD*)(v9 + 292) == *(_DWORD*)(v12 + 8)
						|| (v13 = *(_QWORD*)(v9 + 296)) != 0 && *(_QWORD*)(v12 + 6304) == v13)
					|| *(_QWORD*)(v9 + 24) && !(unsigned int)sub_14045BD30(v9) && (*(_DWORD*)(v9 + 292) || *(_QWORD*)(v9 + 296))))
			{
				v11 = 1;
			}
			if ((v14 = *(_QWORD*)(v9 + 6408), *(_BYTE*)(v14 + 4))
				&& v9 != *(_QWORD*)(qword_140C65898 + 120)
				&& ((v15 = *(_QWORD*)(qword_140C65898 + 25744)) == 0 || !*(_DWORD*)(v15 + 684))
				&& *(_DWORD*)v14 == 77
				&& (*(_BYTE*)(qword_140C65898 + 7020) & 4) != 0
				&& !*(_DWORD*)(qword_140C65898 + 7044)
				|| v11)
			{
			LABEL_24:
				v16 = *(int*)(a1 + 236);
				v17 = *(_QWORD*)a1;
				v18 = *(_DWORD*)(a1 + 416);
				v19 = *(_DWORD*)(*(_QWORD*)a1 + 4 * v16 + 152);
				*(_DWORD*)(a1 + 416) = v19;
				if (!v19)
				{
					if ((int)v16 >= 3)
					{
						v20 = *(_DWORD*)(v17 + 4 * v16 + 204);
						*(_DWORD*)(a1 + 416) = v20;
						if (v20)
						{
							v21 = *(_QWORD*)(v9 + 5872);
							if (!v21)
							{
								v21 = *(_QWORD*)(v9 + 5880);
								if (!v21)
									return;
							}
							if ((*(unsigned int(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v21 + 264i64))(v21, 0i64, 1i64) == 1)
								return;
							*(_DWORD*)(a1 + 416) = 0;
						}
					}
					if (v18)
						sub_140609900(a1);
					if (*(_QWORD*)(qword_140C65898 + 25744))
					{
						v22 = *(__int64**)(v9 + 5864);
						if (v22)
						{
							v23 = (*(unsigned int(__fastcall**)(__int64*, __int64))(*v22 + 848))(v22, 169i64) == 0;
							v24 = *v22;
							if (!v23)
							{
								v63 = *(__m128*)(*(__int64(__fastcall**)(__int64*, __int64*, __int64, _QWORD))(v24 + 856))(
									v22,
									&v60,
									169i64,
									0i64);
							LABEL_45:
								v31 = *(_QWORD*)(qword_140C65898 + 29096);
								if (!v31)
									v31 = *(_QWORD*)(qword_140C65898 + 29088);
								if ((float)-v63.m128_f32[2] >= *(float*)(v31 + 24))
								{
									v32 = dword_140C45630;
									v33 = *(_DWORD*)qword_140C63750;
									v34 = 0x140000000ui64;
									v35 = dword_140C45630;
									if (*(_DWORD*)qword_140C63750 < dword_140C45630)
										v35 = *(_DWORD*)qword_140C63750;
									v36 = v35;
									v37 = dword_140C45690;
									if (v33 < dword_140C45690)
										v37 = *(_DWORD*)qword_140C63750;
									if (v33 < dword_140C45630)
										v32 = *(_DWORD*)qword_140C63750;
									v38 = dword_140C456A0[v37] - dword_140C45640[v32];
									v39 = dword_140C456F0;
									if (v33 < dword_140C456F0)
										v39 = *(_DWORD*)qword_140C63750;
									v40 = (float)((float)(dword_140C45700[v39] - 1.0)
										* fmaxf(0.0, fminf((float)((float)-v63.m128_f32[2] - dword_140C45640[v36]) / v38, 1.0)))
										+ 1.0;
									v41 = _mm_unpacklo_ps(
										_mm_unpacklo_ps((__m128)v63.m128_u32[0], (__m128)v63.m128_u32[2]),
										_mm_unpacklo_ps((__m128)v63.m128_u32[1], (__m128)0x3F800000u));
									v42 = _mm_add_ps(
										_mm_add_ps(
											_mm_add_ps(
												_mm_mul_ps(_mm_shuffle_ps(v41, v41, 85), a3[1]),
												_mm_mul_ps(_mm_shuffle_ps(v41, v41, 0), *a3)),
											_mm_mul_ps(_mm_shuffle_ps(v41, v41, 170), a3[2])),
										_mm_mul_ps(_mm_shuffle_ps(v41, v41, 255), a3[3]));
									v43 = _mm_shuffle_ps(v42, v42, 255);
									v44 = _mm_and_ps(v43, (__m128)xmmword_140B7B500);
									if (v44.m128_f32[0] >= 0.0000099999997)
									{
										v44.m128_f32[0] = v43.m128_f32[0];
										v45 = 13i64;
										v60 = 1219i64;
										v61 = 1065353216i64;
										v62 = 0ui64;
										v46 = (_QWORD*)(a1 + 120);
										v47 = 13i64;
										v63 = _mm_div_ps(v42, _mm_shuffle_ps(v44, v44, 0));
										do
										{
											if (*v46)
												(*(void(__fastcall**)(_QWORD, _QWORD, __int64*, unsigned __int64))(*(_QWORD*)*v46 + 584i64))(
													*v46,
													0i64,
													&v60,
													v34);
											++v46;
											--v47;
										} while (v47);
										if (!*(_BYTE*)(a1 + 412))
										{
											v60 = 1219i64;
											v61 = 1065353216i64;
											v62 = 0ui64;
											v48 = (_QWORD*)(a1 + 8);
											v49 = 13i64;
											do
											{
												if (*v48)
													(*(void(__fastcall**)(_QWORD, _QWORD, __int64*, unsigned __int64))(*(_QWORD*)*v48 + 584i64))(
														*v48,
														0i64,
														&v60,
														v34);
												++v48;
												--v49;
											} while (v49);
										}
										v50 = (__m128)v63.m128_u32[1];
										v51 = (__m128)0x40400000u;
										v50.m128_f32[0] = v63.m128_f32[1] / (float)(a3[1].m128_f32[1] / a3->m128_f32[0]);
										v65 = _mm_unpacklo_ps(
											_mm_unpacklo_ps((__m128)v63.m128_u32[0], (__m128)0i64),
											_mm_unpacklo_ps(v50, (__m128)0i64));
										v52 = _mm_mul_ps((__m128)xmmword_140C77880, (__m128)xmmword_140C77880);
										v52.m128_f32[0] = (float)(v52.m128_f32[0] + _mm_shuffle_ps(v52, v52, 85).m128_f32[0])
											+ _mm_shuffle_ps(v52, v52, 170).m128_f32[0];
										v53 = 1.0 / fsqrt(v52.m128_f32[0]);
										v51.m128_f32[0] = fmaxf(
											(float)((float)(3.0 - (float)((float)(v52.m128_f32[0] * v53) * v53)) * 0.5)
											* v53,
											0.0);
										v54 = _mm_mul_ps(_mm_shuffle_ps(v51, v51, 0), (__m128)xmmword_140C77880);
										v55 = sub_1408FE3D0(0.0);
										v56 = sub_1408FC950(0.0);
										*(float*)&v60 = v40;
										v61 = 0i64;
										*(_QWORD*)&v62 = v64;
										*(float*)&v64[3] = v56;
										*(float*)v64 = v54.m128_f32[0] * v55;
										v67[0] = (unsigned __int64)v60;
										*((_QWORD*)&v62 + 1) = &v65;
										*(float*)&v64[1] = _mm_shuffle_ps(v54, v54, 85).m128_f32[0] * v55;
										*(float*)&v64[2] = _mm_shuffle_ps(v54, v54, 170).m128_f32[0] * v55;
										v67[1] = v62;
										sub_1401B0590((int*)v67, (__int64)v66);
										v57 = (_QWORD*)(a1 + 8);
										do
										{
											if (*v57)
												(*(void(__fastcall**)(_QWORD, char*))(*(_QWORD*)*v57 + 72i64))(*v57, v66);
											++v57;
											--v45;
										} while (v45);
										v58 = *(_QWORD*)(a1 + 8i64 * *(int*)(a1 + 112) + 8);
										if (v58)
											(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v58 + 296i64))(v58, 1i64);
										v59 = *(_QWORD*)(a1 + 8i64 * *(int*)(a1 + 112) + 8);
										if (v59)
											(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v59 + 320i64))(v59, 1i64);
										*(_BYTE*)(a1 + 420) = 0;
										sub_140609C20(a1, (float*)v9, a5);
									}
								}
								return;
							}
							if ((*(unsigned int(__fastcall**)(__int64*, __int64))(v24 + 848))(v22, 46i64))
							{
								v63 = *(__m128*)(*(__int64(__fastcall**)(__int64*, __int64*, __int64))(*v22 + 856))(
									v22,
									&v60,
									46i64);
								goto LABEL_45;
							}
							v25 = *(_QWORD*)(v9 + 5872);
							if (v25 || (v25 = *(_QWORD*)(v9 + 5880)) != 0)
							{
								v26 = (__m128*)(*(__int64(__fastcall**)(__int64*, __int64, _QWORD))(*v22 + 424))(v22, 150i64, 0i64);
								v27 = _mm_mul_ps(_mm_add_ps(v26[5], v26[4]), (__m128)xmmword_140B7AC50);
								v28 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 56i64))(v25);
								v29 = _mm_add_ps(
									_mm_add_ps(
										_mm_add_ps(
											_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), v28[1]),
											_mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), *v28)),
										_mm_mul_ps(_mm_shuffle_ps(v27, v27, 170), v28[2])),
									v28[3]);
								if (*(_DWORD*)(a1 + 236) == 7)
									v29 = _mm_add_ps((__m128)xmmword_140B7A4B0, v29);
								v63 = _mm_add_ps(
									_mm_add_ps(
										_mm_add_ps(
											_mm_mul_ps(_mm_shuffle_ps(v29, v29, 85), a2[1]),
											_mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), *a2)),
										_mm_mul_ps(_mm_shuffle_ps(v29, v29, 170), a2[2])),
									a2[3]);
								goto LABEL_45;
							}
						}
						v30 = *(__m128*)(v9 + 4576);
						v63 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), a2[1]),
									_mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), *a2)),
								_mm_mul_ps(_mm_shuffle_ps(v30, v30, 170), a2[2])),
							a2[3]);
						goto LABEL_45;
					}
				}
			}
		}
	}
}
// 14060A282: variable 'v34' is possibly undefined
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C45630: using guessed type int dword_140C45630;
// 140C45640: using guessed type float dword_140C45640[14];
// 140C45690: using guessed type int dword_140C45690;
// 140C456A0: using guessed type float dword_140C456A0[14];
// 140C456F0: using guessed type int dword_140C456F0;
// 140C45700: using guessed type float dword_140C45700[14];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77880: using guessed type __int128 xmmword_140C77880;

