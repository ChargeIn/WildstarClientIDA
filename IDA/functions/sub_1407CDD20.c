#include "../winhttp.h"

//----- (00000001407CDD20) ----------------------------------------------------
__int64 __fastcall sub_1407CDD20(__int64 a1)
{
	__m128 v1; // xmm0
	__m128 v2; // xmm12
	__m128 v3; // xmm14
	__int64 v4; // rdi
	__m128 v5; // xmm9
	unsigned int i; // r15d
	__int64 v8; // rax
	__int64* v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rsi
	unsigned __int64 v13; // r8
	unsigned __int64 v14; // r9
	int m; // r10d
	__m128 v17; // xmm5
	__m128 v18; // xmm4
	unsigned int v19; // ecx
	unsigned __int64 v20; // rdx
	__m128 v21; // xmm3
	int v22; // eax
	__m128i v23; // xmm1
	__m128i v24; // xmm1
	unsigned __int64 v25; // rdi
	int v26; // ebx
	__m128 v27; // xmm8
	__m128 v28; // xmm9
	__m128 v29; // xmm7
	__int64 v30; // r11
	unsigned __int64 v31; // rax
	int j; // r10d
	__m128 v33; // xmm6
	unsigned int v34; // edx
	__m128i v35; // xmm0
	__m128 v36; // xmm3
	int v37; // ecx
	__m128i v38; // xmm1
	__m128i v39; // xmm1
	int v40; // ebx
	__m128 v41; // xmm10
	__m128 v42; // xmm11
	__m128 v43; // xmm12
	unsigned __int64 v44; // rcx
	unsigned __int64 v45; // r8
	__m128 v46; // xmm9
	__int64 v47; // r11
	int v48; // r10d
	__m128 v49; // xmm8
	unsigned int v50; // edx
	__m128i v51; // xmm0
	__m128 v52; // xmm3
	int v53; // eax
	__m128i v54; // xmm1
	__m128i v55; // xmm1
	unsigned __int64 v56; // rcx
	__int64 v57; // rax
	unsigned __int64 v58; // rcx
	__int64 v59; // rax
	int v60; // edi
	__m128 v61; // xmm11
	__m128 v62; // xmm12
	__m128 v63; // xmm13
	__m128 v64; // xmm14
	unsigned __int64 v65; // rcx
	unsigned __int64 v66; // r8
	__int64 v67; // r9
	__m128 v68; // xmm10
	__int64 v69; // rbx
	int v70; // r11d
	__m128 v71; // xmm9
	unsigned int v72; // edx
	unsigned __int64 v73; // r10
	__m128i v74; // xmm0
	__m128 v75; // xmm3
	int v76; // eax
	__m128i v77; // xmm1
	__m128i v78; // xmm1
	unsigned __int64 v79; // rcx
	__int64 v80; // rax
	unsigned __int64 v81; // rcx
	__int64 v82; // rax
	int v83; // r14d
	__m128 v84; // xmm12
	__m128 v85; // xmm13
	__m128 v86; // xmm14
	__m128 v87; // xmm15
	unsigned __int64 v88; // r8
	unsigned __int64 v89; // r9
	__int64 v90; // rcx
	__m128 v91; // xmm9
	__int64 v92; // r10
	__int64 v93; // rbx
	int v94; // edx
	__m128 v95; // xmm8
	__int64 v96; // r10
	unsigned int v97; // edi
	__int64 v98; // r11
	__m128i v99; // xmm0
	__m128 v100; // xmm3
	int v101; // eax
	__m128i v102; // xmm1
	__m128i v103; // xmm1
	unsigned __int64 v104; // rcx
	__int64 v105; // rax
	unsigned __int64 v106; // rcx
	__int64 v107; // rax
	__int64* v108; // rbx
	__int64 v109; // rdi
	unsigned int v110; // [rsp+38h] [rbp-D0h] BYREF
	unsigned int v111; // [rsp+3Ch] [rbp-CCh] BYREF
	__m128 v112; // [rsp+40h] [rbp-C8h]
	__int64 v113; // [rsp+50h] [rbp-B8h]
	__int64 v114; // [rsp+58h] [rbp-B0h]
	__int64 v115; // [rsp+60h] [rbp-A8h]
	__m128 v116; // [rsp+68h] [rbp-A0h] BYREF
	__int64 v117; // [rsp+78h] [rbp-90h]
	__int64 v118[4]; // [rsp+88h] [rbp-80h] BYREF
	__m128 k; // [rsp+A8h] [rbp-60h]
	__int64 v120; // [rsp+B8h] [rbp-50h]
	__int64 v121; // [rsp+C0h] [rbp-48h]
	unsigned int v122[4]; // [rsp+C8h] [rbp-40h] BYREF
	unsigned int v123[4]; // [rsp+D8h] [rbp-30h] BYREF

	v4 = *(_QWORD*)(a1 + 1328);
	v5 = (__m128)0x3F800000u;
	for (i = 0; v4; v4 = *(_QWORD*)(v4 + 136))
	{
		if (i >= 4)
			break;
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 448i64))(v4))
		{
			v8 = *(_QWORD*)v4;
			v116.m128_i32[0] = 0;
			if ((*(unsigned int(__fastcall**)(__int64, __m128*))(v8 + 24))(v4, &v116))
			{
				v9 = *(__int64**)(v4 + 488);
				k.m128_i32[i] = *(_DWORD*)(v4 + 272);
				v10 = *v9;
				v118[i] = v4;
				v11 = (*(__int64(__fastcall**)(__int64*, _QWORD, unsigned int*, unsigned int*, int))(v10 + 72))(
					v9,
					0i64,
					&v122[i],
					&v123[i],
					1);
				v112.m128_u64[i] = v11;
				if (v11)
				{
					v5.m128_f32[0] = v5.m128_f32[0] - *(float*)(v4 + 272);
					++i;
				}
			}
		}
	}
	v12 = (*(__int64(__fastcall**)(_QWORD, _QWORD, unsigned int*, unsigned int*, int))(**(_QWORD**)(a1 + 6584) + 72i64))(
		*(_QWORD*)(a1 + 6584),
		0i64,
		&v111,
		&v110,
		6);
	if (!v12)
		return 2147500037i64;
	if (i)
	{
		switch (i)
		{
		case 1u:
			v25 = v112.m128_u64[0];
			v26 = 0;
			v27 = _mm_shuffle_ps((__m128)k.m128_u32[0], (__m128)k.m128_u32[0], 0);
			v28 = _mm_shuffle_ps(v5, v5, 0);
			do
			{
				v29 = 0i64;
				v30 = v12;
				v31 = v25;
				for (j = 0; (unsigned int)j < 0x10; ++j)
				{
					v33 = 0i64;
					v34 = 0;
					v13 = v30;
					v14 = v31 - v30;
					do
					{
						v35 = _mm_cvtsi32_si128(*(_DWORD*)(v14 + v13));
						v36 = 0i64;
						v37 = v34++;
						v13 += 4i64;
						v36.m128_f32[0] = (float)v37;
						v33.m128_f32[0] = (float)j;
						v29.m128_f32[0] = (float)v26;
						v38 = _mm_shuffle_epi32(
							_mm_cvttps_epi32(
								_mm_add_ps(
									_mm_mul_ps(
										_mm_min_ps(
											_mm_max_ps(
												(__m128)0i64,
												_mm_add_ps(
													_mm_mul_ps(
														_mm_mul_ps(
															_mm_cvtepi32_ps(
																_mm_shuffle_epi32(
																	_mm_unpacklo_epi16(
																		_mm_unpacklo_epi8(_mm_shuffle_epi32(v35, 0), (__m128i)0i64),
																		(__m128i)0i64),
																	198)),
															(__m128)xmmword_140B7AB70),
														v27),
													_mm_mul_ps(
														_mm_div_ps(
															_mm_unpacklo_ps(_mm_unpacklo_ps(v36, v29), _mm_unpacklo_ps(v33, (__m128)0i64)),
															(__m128)xmmword_140B7B3E0),
														v28))),
											(__m128)xmmword_140B7B240),
										(__m128)xmmword_140B7B470),
									(__m128)xmmword_140B7AC50)),
							198);
						v39 = _mm_packus_epi16(v38, v38);
						*(_DWORD*)(v13 - 4) = _mm_cvtsi128_si32(_mm_packus_epi16(v39, v39));
					} while (v34 < 0x10);
					v30 += v111;
					v31 += v122[0];
				}
				++v26;
				v12 += v110;
				v25 += v123[0];
			} while ((unsigned int)v26 < 0x10);
			break;
		case 2u:
			v40 = 0;
			v2.m128_f32[0] = v5.m128_f32[0];
			v41 = _mm_shuffle_ps((__m128)k.m128_u32[1], (__m128)k.m128_u32[1], 0);
			v42 = _mm_shuffle_ps((__m128)k.m128_u32[0], (__m128)k.m128_u32[0], 0);
			v43 = _mm_shuffle_ps(v2, v2, 0);
			do
			{
				v45 = v112.m128_u64[1];
				v44 = v112.m128_u64[0];
				v46 = 0i64;
				v47 = v12;
				v48 = 0;
				for (k = v112; ; v44 = k.m128_u64[0])
				{
					v49 = 0i64;
					v13 = v45 - v44;
					v50 = 0;
					v14 = v47 - v44;
					do
					{
						v51 = _mm_cvtsi32_si128(*(_DWORD*)(v13 + v44));
						v52 = 0i64;
						v53 = v50++;
						v44 += 4i64;
						v52.m128_f32[0] = (float)v53;
						v49.m128_f32[0] = (float)v48;
						v46.m128_f32[0] = (float)v40;
						v54 = _mm_shuffle_epi32(
							_mm_cvttps_epi32(
								_mm_add_ps(
									_mm_mul_ps(
										_mm_min_ps(
											_mm_max_ps(
												(__m128)0i64,
												_mm_add_ps(
													_mm_mul_ps(
														_mm_mul_ps(
															_mm_cvtepi32_ps(
																_mm_shuffle_epi32(
																	_mm_unpacklo_epi16(
																		_mm_unpacklo_epi8(_mm_shuffle_epi32(v51, 0), (__m128i)0i64),
																		(__m128i)0i64),
																	198)),
															(__m128)xmmword_140B7AB70),
														v41),
													_mm_add_ps(
														_mm_mul_ps(
															_mm_mul_ps(
																_mm_cvtepi32_ps(
																	_mm_shuffle_epi32(
																		_mm_unpacklo_epi16(
																			_mm_unpacklo_epi8(
																				_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v44 - 4)), 0),
																				(__m128i)0i64),
																			(__m128i)0i64),
																		198)),
																(__m128)xmmword_140B7AB70),
															v42),
														_mm_mul_ps(
															_mm_div_ps(
																_mm_unpacklo_ps(_mm_unpacklo_ps(v52, v46), _mm_unpacklo_ps(v49, (__m128)0i64)),
																(__m128)xmmword_140B7B3E0),
															v43)))),
											(__m128)xmmword_140B7B240),
										(__m128)xmmword_140B7B470),
									(__m128)xmmword_140B7AC50)),
							198);
						v55 = _mm_packus_epi16(v54, v54);
						*(_DWORD*)(v14 + v44 - 4) = _mm_cvtsi128_si32(_mm_packus_epi16(v55, v55));
					} while (v50 < 0x10);
					v56 = 0i64;
					v47 += v111;
					do
					{
						v57 = v122[v56++];
						v118[v56 + 3] += v57;
					} while (v56 < 2);
					if ((unsigned int)++v48 >= 0x10)
						break;
					v45 = k.m128_u64[1];
				}
				v58 = 0i64;
				v12 += v110;
				do
				{
					v59 = v123[v58++];
					*((_QWORD*)&v110 + v58) += v59;
				} while (v58 < 2);
				++v40;
			} while ((unsigned int)v40 < 0x10);
			break;
		case 3u:
			v60 = 0;
			v61 = _mm_shuffle_ps((__m128)k.m128_u32[2], (__m128)k.m128_u32[2], 0);
			v62 = _mm_shuffle_ps((__m128)k.m128_u32[1], (__m128)k.m128_u32[1], 0);
			v63 = _mm_shuffle_ps((__m128)k.m128_u32[0], (__m128)k.m128_u32[0], 0);
			v3.m128_f32[0] = v5.m128_f32[0];
			v64 = _mm_shuffle_ps(v3, v3, 0);
			do
			{
				v65 = v112.m128_u64[1];
				v66 = v112.m128_u64[0];
				v67 = v113;
				v68 = 0i64;
				v116 = v112;
				v117 = v113;
				v69 = v12;
				v70 = 0;
				while (1)
				{
					v71 = 0i64;
					v14 = v67 - v65;
					v13 = v66 - v65;
					v72 = 0;
					v73 = v69 - v65;
					do
					{
						v74 = _mm_cvtsi32_si128(*(_DWORD*)(v14 + v65));
						v75 = 0i64;
						v76 = v72++;
						v65 += 4i64;
						v75.m128_f32[0] = (float)v76;
						v71.m128_f32[0] = (float)v70;
						v68.m128_f32[0] = (float)v60;
						v77 = _mm_shuffle_epi32(
							_mm_cvttps_epi32(
								_mm_add_ps(
									_mm_mul_ps(
										_mm_min_ps(
											_mm_max_ps(
												(__m128)0i64,
												_mm_add_ps(
													_mm_mul_ps(
														_mm_mul_ps(
															_mm_cvtepi32_ps(
																_mm_shuffle_epi32(
																	_mm_unpacklo_epi16(
																		_mm_unpacklo_epi8(_mm_shuffle_epi32(v74, 0), (__m128i)0i64),
																		(__m128i)0i64),
																	198)),
															(__m128)xmmword_140B7AB70),
														v61),
													_mm_add_ps(
														_mm_mul_ps(
															_mm_mul_ps(
																_mm_cvtepi32_ps(
																	_mm_shuffle_epi32(
																		_mm_unpacklo_epi16(
																			_mm_unpacklo_epi8(
																				_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v65 - 4)), 0),
																				(__m128i)0i64),
																			(__m128i)0i64),
																		198)),
																(__m128)xmmword_140B7AB70),
															v62),
														_mm_add_ps(
															_mm_mul_ps(
																_mm_mul_ps(
																	_mm_cvtepi32_ps(
																		_mm_shuffle_epi32(
																			_mm_unpacklo_epi16(
																				_mm_unpacklo_epi8(
																					_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v13 + v65 - 4)), 0),
																					(__m128i)0i64),
																				(__m128i)0i64),
																			198)),
																	(__m128)xmmword_140B7AB70),
																v63),
															_mm_mul_ps(
																_mm_div_ps(
																	_mm_unpacklo_ps(_mm_unpacklo_ps(v75, v68), _mm_unpacklo_ps(v71, (__m128)0i64)),
																	(__m128)xmmword_140B7B3E0),
																v64))))),
											(__m128)xmmword_140B7B240),
										(__m128)xmmword_140B7B470),
									(__m128)xmmword_140B7AC50)),
							198);
						v78 = _mm_packus_epi16(v77, v77);
						*(_DWORD*)(v73 + v65 - 4) = _mm_cvtsi128_si32(_mm_packus_epi16(v78, v78));
					} while (v72 < 0x10);
					v79 = 0i64;
					v69 += v111;
					do
					{
						v80 = v122[v79++];
						*(&v115 + v79) += v80;
					} while (v79 < 3);
					if ((unsigned int)++v70 >= 0x10)
						break;
					v67 = v117;
					v65 = v116.m128_u64[1];
					v66 = v116.m128_u64[0];
				}
				v81 = 0i64;
				v12 += v110;
				do
				{
					v82 = v123[v81++];
					*((_QWORD*)&v110 + v81) += v82;
				} while (v81 < 3);
				++v60;
			} while ((unsigned int)v60 < 0x10);
			break;
		case 4u:
			v83 = 0;
			v84 = _mm_shuffle_ps((__m128)k.m128_u32[3], (__m128)k.m128_u32[3], 0);
			v85 = _mm_shuffle_ps((__m128)k.m128_u32[2], (__m128)k.m128_u32[2], 0);
			v1.m128_f32[0] = v5.m128_f32[0];
			v86 = _mm_shuffle_ps((__m128)k.m128_u32[1], (__m128)k.m128_u32[1], 0);
			v116 = _mm_shuffle_ps(v1, v1, 0);
			v87 = _mm_shuffle_ps((__m128)k.m128_u32[0], (__m128)k.m128_u32[0], 0);
			do
			{
				v89 = v112.m128_u64[1];
				v88 = v112.m128_u64[0];
				v90 = v113;
				v91 = 0i64;
				v92 = v114;
				k = v112;
				v120 = v113;
				v93 = v12;
				v121 = v114;
				v94 = 0;
				while (1)
				{
					v95 = 0i64;
					v96 = v92 - v90;
					v14 = v89 - v90;
					v13 = v88 - v90;
					v97 = 0;
					v98 = v93 - v90;
					do
					{
						v99 = _mm_cvtsi32_si128(*(_DWORD*)(v96 + v90));
						v100 = 0i64;
						v101 = v97++;
						v90 += 4i64;
						v100.m128_f32[0] = (float)v101;
						v95.m128_f32[0] = (float)v94;
						v91.m128_f32[0] = (float)v83;
						v102 = _mm_shuffle_epi32(
							_mm_cvttps_epi32(
								_mm_add_ps(
									_mm_mul_ps(
										_mm_min_ps(
											_mm_max_ps(
												(__m128)0i64,
												_mm_add_ps(
													_mm_mul_ps(
														_mm_mul_ps(
															_mm_cvtepi32_ps(
																_mm_shuffle_epi32(
																	_mm_unpacklo_epi16(
																		_mm_unpacklo_epi8(_mm_shuffle_epi32(v99, 0), (__m128i)0i64),
																		(__m128i)0i64),
																	198)),
															(__m128)xmmword_140B7AB70),
														v84),
													_mm_add_ps(
														_mm_mul_ps(
															_mm_mul_ps(
																_mm_cvtepi32_ps(
																	_mm_shuffle_epi32(
																		_mm_unpacklo_epi16(
																			_mm_unpacklo_epi8(
																				_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v90 - 4)), 0),
																				(__m128i)0i64),
																			(__m128i)0i64),
																		198)),
																(__m128)xmmword_140B7AB70),
															v85),
														_mm_add_ps(
															_mm_mul_ps(
																_mm_mul_ps(
																	_mm_cvtepi32_ps(
																		_mm_shuffle_epi32(
																			_mm_unpacklo_epi16(
																				_mm_unpacklo_epi8(
																					_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + v90 - 4)), 0),
																					(__m128i)0i64),
																				(__m128i)0i64),
																			198)),
																	(__m128)xmmword_140B7AB70),
																v86),
															_mm_add_ps(
																_mm_mul_ps(
																	_mm_mul_ps(
																		_mm_cvtepi32_ps(
																			_mm_shuffle_epi32(
																				_mm_unpacklo_epi16(
																					_mm_unpacklo_epi8(
																						_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v13 + v90 - 4)), 0),
																						(__m128i)0i64),
																					(__m128i)0i64),
																				198)),
																		(__m128)xmmword_140B7AB70),
																	v87),
																_mm_mul_ps(
																	_mm_div_ps(
																		_mm_unpacklo_ps(
																			_mm_unpacklo_ps(v100, v91),
																			_mm_unpacklo_ps(v95, (__m128)0i64)),
																		(__m128)xmmword_140B7B3E0),
																	v116)))))),
											(__m128)xmmword_140B7B240),
										(__m128)xmmword_140B7B470),
									(__m128)xmmword_140B7AC50)),
							198);
						v103 = _mm_packus_epi16(v102, v102);
						*(_DWORD*)(v98 + v90 - 4) = _mm_cvtsi128_si32(_mm_packus_epi16(v103, v103));
					} while (v97 < 0x10);
					v104 = 0i64;
					v93 += v111;
					do
					{
						v105 = v122[v104++];
						v118[v104 + 3] += v105;
					} while (v104 < 4);
					if ((unsigned int)++v94 >= 0x10)
						break;
					v92 = v121;
					v90 = v120;
					v89 = k.m128_u64[1];
					v88 = k.m128_u64[0];
				}
				v106 = 0i64;
				v12 += v110;
				do
				{
					v107 = v123[v106++];
					*((_QWORD*)&v110 + v106) += v107;
				} while (v106 < 4);
				++v83;
			} while ((unsigned int)v83 < 0x10);
			break;
		}
	}
	else
	{
		for (m = 0; (unsigned int)m < 0x10; ++m)
		{
			v17 = 0i64;
			v14 = v12;
			LODWORD(v13) = 0;
			do
			{
				v18 = 0i64;
				v19 = 0;
				v20 = v14;
				do
				{
					v21 = 0i64;
					v22 = v19++;
					v20 += 4i64;
					v21.m128_f32[0] = (float)v22;
					v18.m128_f32[0] = (float)(int)v13;
					v17.m128_f32[0] = (float)m;
					v23 = _mm_shuffle_epi32(
						_mm_cvttps_epi32(
							_mm_add_ps(
								_mm_mul_ps(
									_mm_min_ps(
										_mm_max_ps(
											(__m128)0i64,
											_mm_div_ps(
												_mm_unpacklo_ps(_mm_unpacklo_ps(v21, v17), _mm_unpacklo_ps(v18, (__m128)0i64)),
												(__m128)xmmword_140B7B3E0)),
										(__m128)xmmword_140B7B240),
									(__m128)xmmword_140B7B470),
								(__m128)xmmword_140B7AC50)),
						198);
					v24 = _mm_packus_epi16(v23, v23);
					*(_DWORD*)(v20 - 4) = _mm_cvtsi128_si32(_mm_packus_epi16(v24, v24));
				} while (v19 < 0x10);
				v13 = (unsigned int)(v13 + 1);
				v14 += v111;
			} while ((unsigned int)v13 < 0x10);
			v12 += v110;
		}
	}
	(*(void(__fastcall**)(_QWORD, _QWORD, unsigned __int64, unsigned __int64))(**(_QWORD**)(a1 + 6584) + 80i64))(
		*(_QWORD*)(a1 + 6584),
		0i64,
		v13,
		v14);
	if (i)
	{
		v108 = v118;
		v109 = i;
		do
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(*v108 + 488) + 80i64))(*(_QWORD*)(*v108 + 488), 0i64);
			++v108;
			--v109;
		} while (v109);
	}
	return 0i64;
}
// 1407CE0EC: variable 'v2' is possibly undefined
// 1407CE2B8: variable 'v3' is possibly undefined
// 1407CE4AA: variable 'v1' is possibly undefined
// 1407CE6E0: variable 'v13' is possibly undefined
// 1407CE6E0: variable 'v14' is possibly undefined
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B3E0: using guessed type __int128 xmmword_140B7B3E0;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 1407CDD20: using guessed type unsigned int var_E0[4];
// 1407CDD20: using guessed type unsigned int var_F0[4];

