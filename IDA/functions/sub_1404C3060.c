#include "../winhttp.h"

//----- (00000001404C3060) ----------------------------------------------------
__int64 __fastcall sub_1404C3060(__int64 a1)
{
	__int64 v1; // r14
	unsigned int v3; // ebx
	__int64 v4; // rsi
	int v5; // eax
	__int64 v6; // rcx
	__int64 v7; // rax
	__m128* v8; // rax
	float v9; // xmm4_4
	__m128 v10; // xmm2
	__m128 v11; // xmm3
	__m128 v12; // xmm0
	float v13; // xmm0_4
	float v14; // xmm4_4
	float v15; // xmm3_4
	float v16; // xmm1_4
	float v17; // xmm0_4
	float v18; // xmm3_4
	float v19; // xmm2_4
	float v20; // xmm3_4
	float v21; // xmm1_4
	float v22; // xmm0_4
	float v23; // xmm3_4
	float v24; // xmm2_4
	float v25; // xmm3_4
	float v26; // xmm0_4
	float v27; // xmm3_4
	float v28; // xmm2_4
	float v29; // xmm3_4
	float v30; // xmm1_4
	float v31; // xmm0_4
	float v32; // xmm3_4
	float v33; // xmm2_4
	float v34; // xmm3_4
	float v35; // xmm1_4
	float v36; // xmm0_4
	float v37; // xmm3_4
	float v38; // xmm2_4
	float v39; // xmm3_4
	float v40; // xmm0_4
	float v41; // xmm3_4
	float v42; // xmm2_4
	float v43; // xmm3_4
	float v44; // xmm1_4
	float v45; // xmm0_4
	float v46; // xmm3_4
	float v47; // xmm2_4
	float v48; // xmm3_4
	float v49; // xmm1_4
	float v50; // xmm0_4
	float v51; // xmm3_4
	int* v52; // rax
	int* v53; // rdi
	__m128* v54; // rbx
	__m128* v55; // r12
	unsigned int v56; // r15d
	__int64 v57; // r13
	__m128 v58; // xmm5
	__m128 v59; // xmm7
	__m128 v60; // xmm5
	__m128 v61; // xmm5
	__m128 v62; // xmm1
	__m128 v63; // xmm6
	__m128 v64; // xmm8
	float v65; // xmm0_4
	float v66; // xmm0_4
	float v67; // xmm0_4
	float v68; // xmm0_4
	float v69; // xmm0_4
	__m128 v70; // xmm2
	__m128 v71; // xmm3
	__m128 v72; // xmm4
	float v73; // xmm4_4
	__m128 v74; // xmm2
	float v75; // xmm2_4
	__m128 v76; // [rsp+20h] [rbp-E0h]
	__m128 v77; // [rsp+30h] [rbp-D0h]
	__m128 v78; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v79; // [rsp+50h] [rbp-B0h]
	int i; // [rsp+138h] [rbp+38h]

	v1 = a1;
	if (!*(_QWORD*)(a1 + 608))
		return 0i64;
	v3 = 0;
	v4 = *(_QWORD*)(qword_140C65898 + 28464);
	for (i = 0; v4; v4 = *(_QWORD*)(v4 + 96))
	{
		if (*(_QWORD*)(v4 + 5864))
		{
			v5 = *(_DWORD*)(v4 + 128);
			if (v5 == 20 || v5 == 23)
			{
				v6 = *(_QWORD*)(v4 + 3264);
				if (v6)
				{
					if ((*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 264i64))(v6, 0i64))
					{
						v7 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v4 + 3264) + 264i64))(
							*(_QWORD*)(v4 + 3264),
							0i64);
						v8 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 1216i64))(v7);
						v9 = *(float*)(v4 + 4528);
						v10 = (__m128) * (unsigned int*)(v4 + 4580);
						v11 = (__m128) * (unsigned int*)(v4 + 4576);
						v78 = *v8;
						v12 = (__m128) * (unsigned int*)(v4 + 4584);
						v79 = v8[1];
						v76 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, v12), _mm_unpacklo_ps(v10, (__m128)0i64));
						v77 = v76;
						if (v9 <= 0.0)
						{
							v13 = v9 * v79.m128_f32[0];
							v14 = v9 * v78.m128_f32[0];
						}
						else
						{
							v13 = v9 * v78.m128_f32[0];
							v14 = v9 * v79.m128_f32[0];
						}
						v15 = *(float*)(v4 + 4544);
						v16 = v76.m128_f32[0] + v13;
						if (v15 <= 0.0)
						{
							v17 = v15 * v79.m128_f32[1];
							v18 = v15 * v78.m128_f32[1];
						}
						else
						{
							v17 = v15 * v78.m128_f32[1];
							v18 = v15 * v79.m128_f32[1];
						}
						v19 = (float)(v76.m128_f32[0] + v14) + v18;
						v20 = *(float*)(v4 + 4560);
						v21 = v16 + v17;
						if (v20 <= 0.0)
						{
							v22 = v20 * v79.m128_f32[2];
							v23 = v20 * v78.m128_f32[2];
						}
						else
						{
							v22 = v20 * v78.m128_f32[2];
							v23 = v20 * v79.m128_f32[2];
						}
						v24 = v19 + v23;
						v25 = *(float*)(v4 + 4532);
						v77.m128_f32[0] = v24;
						v76.m128_f32[0] = v21 + v22;
						if (v25 <= 0.0)
						{
							v26 = v25 * v79.m128_f32[0];
							v27 = v25 * v78.m128_f32[0];
						}
						else
						{
							v26 = v25 * v78.m128_f32[0];
							v27 = v25 * v79.m128_f32[0];
						}
						v28 = v77.m128_f32[1] + v27;
						v29 = *(float*)(v4 + 4548);
						v30 = v76.m128_f32[1] + v26;
						if (v29 <= 0.0)
						{
							v31 = v29 * v79.m128_f32[1];
							v32 = v29 * v78.m128_f32[1];
						}
						else
						{
							v31 = v29 * v78.m128_f32[1];
							v32 = v29 * v79.m128_f32[1];
						}
						v33 = v28 + v32;
						v34 = *(float*)(v4 + 4564);
						v35 = v30 + v31;
						if (v34 <= 0.0)
						{
							v36 = v34 * v79.m128_f32[2];
							v37 = v34 * v78.m128_f32[2];
						}
						else
						{
							v36 = v34 * v78.m128_f32[2];
							v37 = v34 * v79.m128_f32[2];
						}
						v38 = v33 + v37;
						v39 = *(float*)(v4 + 4536);
						v77.m128_f32[1] = v38;
						v76.m128_f32[1] = v35 + v36;
						if (v39 <= 0.0)
						{
							v40 = v39 * v79.m128_f32[0];
							v41 = v39 * v78.m128_f32[0];
						}
						else
						{
							v40 = v39 * v78.m128_f32[0];
							v41 = v39 * v79.m128_f32[0];
						}
						v42 = v77.m128_f32[2] + v41;
						v43 = *(float*)(v4 + 4552);
						v44 = v76.m128_f32[2] + v40;
						if (v43 <= 0.0)
						{
							v45 = v43 * v79.m128_f32[1];
							v46 = v43 * v78.m128_f32[1];
						}
						else
						{
							v45 = v43 * v78.m128_f32[1];
							v46 = v43 * v79.m128_f32[1];
						}
						v47 = v42 + v46;
						v48 = *(float*)(v4 + 4568);
						v49 = v44 + v45;
						if (v48 <= 0.0)
						{
							v50 = v48 * v79.m128_f32[2];
							v51 = v48 * v78.m128_f32[2];
						}
						else
						{
							v50 = v48 * v78.m128_f32[2];
							v51 = v48 * v79.m128_f32[2];
						}
						v76.m128_f32[2] = v49 + v50;
						v77.m128_f32[2] = v47 + v51;
						v78 = v76;
						v79 = v77;
						v52 = sub_14018B280(56i64, 0);
						v53 = v52;
						if (v52)
						{
							*(_QWORD*)v52 = off_140B5FE88;
							*((_QWORD*)v52 + 1) = 1i64;
							v52[4] = 0;
							*((_QWORD*)v52 + 3) = 0i64;
							*((_QWORD*)v52 + 4) = 0i64;
							*((_QWORD*)v52 + 5) = 0i64;
							*((_QWORD*)v52 + 6) = 0i64;
						}
						else
						{
							v53 = 0i64;
						}
						(*(void(__fastcall**)(_QWORD, __m128*, __int64, int*))(**(_QWORD**)(v1 + 608) + 1320i64))(
							*(_QWORD*)(v1 + 608),
							&v78,
							4i64,
							v53);
						if (v53 && (*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v53 + 16i64))(v53))
						{
							v54 = (__m128*)(*(__int64(__fastcall**)(int*))(*(_QWORD*)v53 + 24i64))(v53);
							v55 = &v54[3 * (*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v53 + 16i64))(v53)];
							v56 = 0;
							v57 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v53 + 32i64))(v53);
							if (v54 >= v55)
							{
							LABEL_61:
								v3 = i;
							}
							else
							{
								v58 = v79;
								v59 = v78;
								while (1)
								{
									v60 = _mm_sub_ps(v58, v59);
									v61 = _mm_shuffle_ps(v60, v60, 85);
									v61.m128_f32[0] = v61.m128_f32[0] * 0.5;
									v62 = _mm_mul_ps(*(__m128*)(v57 + 16i64 * v56), *v54);
									v62.m128_f32[0] = (float)(v62.m128_f32[0] + _mm_shuffle_ps(v62, v62, 85).m128_f32[0])
										+ _mm_shuffle_ps(v62, v62, 170).m128_f32[0];
									v63 = _mm_unpacklo_ps(
										_mm_unpacklo_ps(
											(__m128) * (unsigned int*)(v57 + 16i64 * v56),
											(__m128) * (unsigned int*)(v57 + 16i64 * v56 + 8)),
										_mm_unpacklo_ps(
											(__m128) * (unsigned int*)(v57 + 16i64 * v56 + 4),
											_mm_xor_ps(v62, (__m128)0x80000000)));
									v64 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v61, (__m128)0i64));
									if ((unsigned int)sub_1401C9B90((__int64)&v78, v54, v54 + 1, 0i64))
										break;
									if (v54->m128_f32[0] >= v78.m128_f32[0] && v54->m128_f32[0] < v79.m128_f32[0])
									{
										v65 = v54->m128_f32[1];
										if (v65 >= v78.m128_f32[1] && v65 < v79.m128_f32[1])
										{
											v66 = v54->m128_f32[2];
											if (v66 >= v78.m128_f32[2] && v66 < v79.m128_f32[2])
											{
												v67 = v54[1].m128_f32[0];
												if (v67 >= v78.m128_f32[0] && v67 < v79.m128_f32[0])
												{
													v68 = v54[1].m128_f32[1];
													if (v68 >= v78.m128_f32[1] && v68 < v79.m128_f32[1])
													{
														v69 = v54[1].m128_f32[2];
														if (v69 >= v78.m128_f32[2] && v69 < v79.m128_f32[2])
															break;
													}
												}
											}
										}
									}
									v58 = v79;
									v59 = v78;
									v70 = _mm_mul_ps(_mm_add_ps(v79, v78), (__m128)xmmword_140B7AC50);
									v71 = _mm_sub_ps(v70, v64);
									v72 = _mm_mul_ps(_mm_sub_ps(v71, _mm_add_ps(v70, v64)), v63);
									v73 = (float)(v72.m128_f32[0] + _mm_shuffle_ps(v72, v72, 85).m128_f32[0])
										+ _mm_shuffle_ps(v72, v72, 170).m128_f32[0];
									if (fabs(v73) >= 0.0000099999997)
									{
										v74 = _mm_mul_ps(v63, v71);
										v75 = (float)((float)((float)(v74.m128_f32[0] + _mm_shuffle_ps(v74, v74, 85).m128_f32[0])
											+ _mm_shuffle_ps(v74, v74, 170).m128_f32[0])
											+ _mm_shuffle_ps(v63, v63, 255).m128_f32[0])
											/ v73;
										if (v75 >= 0.0 && v75 < 1.0)
											break;
									}
									v54 += 3;
									++v56;
									if (v54 >= v55)
									{
										v1 = a1;
										goto LABEL_61;
									}
								}
								v1 = a1;
								v3 = 1;
								i = 1;
							}
						}
						(*(void(__fastcall**)(int*))(*(_QWORD*)v53 + 8i64))(v53);
					}
				}
			}
		}
	}
	return v3;
}
// 140B5FE88: using guessed type __int64 (__fastcall *off_140B5FE88[18])();
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;

