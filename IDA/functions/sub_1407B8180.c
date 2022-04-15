//----- (00000001407B8180) ----------------------------------------------------
void __fastcall sub_1407B8180(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // r13
	int v4; // eax
	__int128 v5; // xmm0
	__int128 v6; // xmm2
	__int128 v7; // xmm1
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	unsigned int v15; // ebx
	unsigned int v16; // edi
	__int64 v17; // r15
	__int64 v18; // r14
	__int64 v19; // r12
	__int64 v20; // rsi
	__int64 v21; // r8
	__m128 v22; // xmm3
	int v23; // ecx
	unsigned int v24; // eax
	__m128* v25; // rdx
	__m128 v26; // xmm1
	int v27; // ecx
	__m128 v28; // xmm10
	__m128 v29; // xmm7
	__m128 v30; // xmm11
	__m128 v31; // xmm5
	float v32; // xmm7_4
	__m128 v33; // xmm12
	__m128 v34; // xmm9
	__m128 v35; // xmm3
	__m128 v36; // xmm2
	float v37; // xmm2_4
	float v38; // xmm0_4
	float v39; // xmm7_4
	__m128 v40; // xmm6
	__m128 v41; // xmm3
	__m128 v42; // xmm5
	__m128 v43; // xmm3
	__m128 v44; // xmm1
	float v45; // xmm2_4
	float v46; // xmm0_4
	__m128 v47; // xmm5
	__m128 v48; // xmm3
	__m128 v49; // xmm2
	float v50; // xmm0_4
	__m128 v51; // xmm6
	__int64 v52; // rcx
	__int128* v53; // rdx
	__m128 v54; // xmm2
	__m128 v55; // xmm9
	__m128 v56; // xmm3
	__m128 v57; // xmm10
	__m128 v58; // xmm3
	__m128 v59; // xmm4
	__m128 v60; // xmm5
	float v61; // xmm4_4
	__m128 v62; // xmm2
	float v63; // xmm2_4
	float v64; // xmm7_4
	__m128 v65; // xmm6
	__m128 v66; // xmm3
	__m128 v67; // xmm5
	__m128 v68; // xmm3
	__m128 v69; // xmm1
	float v70; // xmm2_4
	float v71; // xmm0_4
	__m128 v72; // xmm5
	__m128 v73; // xmm3
	__m128 v74; // xmm2
	float v75; // xmm0_4
	__m128 v77; // [rsp+30h] [rbp-D0h] BYREF
	__m128 v78; // [rsp+40h] [rbp-C0h]
	__m128 v79; // [rsp+50h] [rbp-B0h]
	int v80; // [rsp+60h] [rbp-A0h]
	__int128 v81[3]; // [rsp+70h] [rbp-90h] BYREF
	int v82; // [rsp+A0h] [rbp-60h]
	__int128 v83[3]; // [rsp+B0h] [rbp-50h] BYREF
	int v84; // [rsp+E0h] [rbp-20h]

	sub_1407BCC60();
	v3 = qword_140C7F878;
	if ((unsigned __int64)qword_140C7F878 <= 1)
	{
		*(_DWORD*)(a1 + 356) = 1;
		return;
	}
	v4 = dword_140DC4F38;
	if ((dword_140DC4F38 & 1) != 0)
	{
		v5 = xmmword_140DC4F40;
	}
	else
	{
		v5 = xmmword_140B7A330;
		v4 = dword_140DC4F38 | 1;
		xmmword_140DC4F40 = xmmword_140B7A330;
		dword_140DC4F38 |= 1u;
	}
	if ((v4 & 2) != 0)
	{
		v6 = xmmword_140DC4F50;
	}
	else
	{
		v6 = xmmword_140B7A4B0;
		v4 |= 2u;
		xmmword_140DC4F50 = xmmword_140B7A4B0;
		dword_140DC4F38 = v4;
	}
	if ((v4 & 4) != 0)
	{
		v7 = xmmword_140DC4F60;
	}
	else
	{
		v7 = xmmword_140B7A700;
		xmmword_140DC4F60 = xmmword_140B7A700;
		dword_140DC4F38 = v4 | 4;
	}
	v77 = (__m128)v7;
	v78 = (__m128)v5;
	v80 = 1;
	v79 = (__m128)v6;
	sub_1407BCD40(v2, (__int64)&v77);
	v80 = 1;
	v77 = (__m128)xmmword_140DC4F60;
	v79 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F40);
	v78 = (__m128)xmmword_140DC4F50;
	sub_1407BCD40(v8, (__int64)&v77);
	v80 = 1;
	v78 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F40);
	v79 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F50);
	v77 = (__m128)xmmword_140DC4F60;
	sub_1407BCD40(v9, (__int64)&v77);
	v80 = 1;
	v77 = (__m128)xmmword_140DC4F60;
	v78 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F50);
	v79 = (__m128)xmmword_140DC4F40;
	sub_1407BCD40(v10, (__int64)&v77);
	v80 = 1;
	v79 = (__m128)xmmword_140DC4F40;
	v77 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F60);
	v78 = (__m128)xmmword_140DC4F50;
	sub_1407BCD40(v11, (__int64)&v77);
	v80 = 1;
	v77 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F60);
	v78 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F40);
	v79 = (__m128)xmmword_140DC4F50;
	sub_1407BCD40(v12, (__int64)&v77);
	v80 = 1;
	v78 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F50);
	v79 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F40);
	v77 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F60);
	sub_1407BCD40(v13, (__int64)&v77);
	v80 = 1;
	v77 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F60);
	v78 = (__m128)xmmword_140DC4F40;
	v79 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140DC4F50);
	sub_1407BCD40(v14, (__int64)&v77);
	if (!v3)
	{
		*(_DWORD*)(a1 + 356) = 1;
		return;
	}
	v15 = a1;
	v16 = a1;
	v17 = 0i64;
	do
	{
		v18 = qword_140C7F898;
		v19 = qword_140C7F870;
		if (qword_140C7F898)
		{
			v20 = 0i64;
			do
			{
				v21 = v20 + qword_140C7F890;
				if (*(_DWORD*)(v20 + qword_140C7F890 + 48))
				{
					v22 = *(__m128*)(v17 + v19);
					v23 = 0;
					v24 = 0;
					v25 = (__m128*)(v20 + qword_140C7F890);
					do
					{
						v26 = _mm_mul_ps(*v25, v22);
						if ((float)((float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
							+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0]) < 0.0000099999997)
						{
							v15 = v24;
						}
						else
						{
							++v23;
							v16 = v24;
						}
						++v24;
						++v25;
					} while (v24 < 3);
					if (v23)
					{
						v27 = v23 - 1;
						if (v27)
						{
							if (v27 != 1)
								goto LABEL_41;
							v28 = *(__m128*)(v21 + 16i64 * v15);
							v29 = _mm_mul_ps(v28, v22);
							v30 = *(__m128*)(v21 + 16i64 * ((v15 + 1) % 3));
							v31 = _mm_sub_ps(v30, v28);
							v32 = -(float)((float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0])
								+ _mm_shuffle_ps(v29, v29, 170).m128_f32[0]);
							v33 = *(__m128*)(v21 + 16i64 * ((v15 + 2) % 3));
							v34 = _mm_sub_ps(v33, v28);
							if (v32 < 0.0000099999997)
								goto LABEL_41;
							*(_DWORD*)(v21 + 48) = 0;
							v35 = _mm_mul_ps(v31, *(__m128*)(v17 + v19));
							v35.m128_f32[0] = (float)(v35.m128_f32[0] + _mm_shuffle_ps(v35, v35, 85).m128_f32[0])
								+ _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
							v36 = _mm_mul_ps(v34, *(__m128*)(v17 + v19));
							v37 = (float)(v36.m128_f32[0] + _mm_shuffle_ps(v36, v36, 85).m128_f32[0])
								+ _mm_shuffle_ps(v36, v36, 170).m128_f32[0];
							if (v35.m128_f32[0] < 0.0000099999997)
								v38 = 1.0;
							else
								v38 = v32 / v35.m128_f32[0];
							if (v37 < 0.0000099999997)
								v39 = 1.0;
							else
								v39 = v32 / v37;
							v40 = (__m128)0x40400000u;
							v35.m128_f32[0] = v38;
							v78 = v30;
							v80 = 1;
							v41 = _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), v31);
							v42 = (__m128)0x40400000u;
							v43 = _mm_add_ps(v41, v28);
							v44 = _mm_mul_ps(v43, v43);
							v45 = (float)(v44.m128_f32[0] + _mm_shuffle_ps(v44, v44, 85).m128_f32[0])
								+ _mm_shuffle_ps(v44, v44, 170).m128_f32[0];
							v46 = fsqrt(v45);
							v42.m128_f32[0] = fmaxf(
								(float)((float)(3.0 - (float)((float)(v45 * (float)(1.0 / v46)) * (float)(1.0 / v46)))
									* 0.5)
								* (float)(1.0 / v46),
								0.0);
							v47 = _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v43);
							v43.m128_f32[0] = v39;
							v77 = v47;
							v48 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v34), v28);
							v49 = _mm_mul_ps(v48, v48);
							v49.m128_f32[0] = (float)(v49.m128_f32[0] + _mm_shuffle_ps(v49, v49, 85).m128_f32[0])
								+ _mm_shuffle_ps(v49, v49, 170).m128_f32[0];
							v50 = 1.0 / fsqrt(v49.m128_f32[0]);
							v40.m128_f32[0] = fmaxf(
								(float)((float)(3.0 - (float)((float)(v49.m128_f32[0] * v50) * v50)) * 0.5) * v50,
								0.0);
							v51 = _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v48);
							v79 = v51;
							sub_1407BCD40((v15 + 2) % 3, (__int64)&v77);
							v81[0] = (__int128)v51;
							v82 = 1;
							v53 = v81;
							v81[1] = (__int128)v30;
							v81[2] = (__int128)v33;
						}
						else
						{
							*(_DWORD*)(v21 + 48) = 0;
							v54 = *(__m128*)(v17 + v19);
							v55 = *(__m128*)(v21 + 16i64 * v16);
							v56 = _mm_mul_ps(v55, v54);
							v56.m128_f32[0] = (float)(v56.m128_f32[0] + _mm_shuffle_ps(v56, v56, 85).m128_f32[0])
								+ _mm_shuffle_ps(v56, v56, 170).m128_f32[0];
							v57 = _mm_sub_ps(*(__m128*)(v21 + 16i64 * ((v16 + 1) % 3)), v55);
							v58 = _mm_xor_ps(v56, (__m128)0x80000000);
							v52 = (v16 + 2) % 3;
							v59 = _mm_mul_ps(v57, v54);
							v60 = _mm_sub_ps(*(__m128*)(v21 + 16 * v52), v55);
							v61 = (float)(v59.m128_f32[0] + _mm_shuffle_ps(v59, v59, 85).m128_f32[0])
								+ _mm_shuffle_ps(v59, v59, 170).m128_f32[0];
							v62 = _mm_mul_ps(v60, v54);
							v63 = (float)(v62.m128_f32[0] + _mm_shuffle_ps(v62, v62, 85).m128_f32[0])
								+ _mm_shuffle_ps(v62, v62, 170).m128_f32[0];
							if (v61 > -0.0000099999997)
								v64 = 1.0;
							else
								v64 = v58.m128_f32[0] / v61;
							if (v63 > -0.0000099999997)
								v58 = (__m128)0x3F800000u;
							else
								v58.m128_f32[0] = v58.m128_f32[0] / v63;
							v65 = (__m128)0x40400000u;
							v83[0] = *(_OWORD*)(v21 + 16i64 * v16);
							v66 = _mm_mul_ps(_mm_shuffle_ps(v58, v58, 0), v60);
							v84 = 1;
							v53 = v83;
							v67 = (__m128)0x40400000u;
							v68 = _mm_add_ps(v66, v55);
							v69 = _mm_mul_ps(v68, v68);
							v70 = (float)(v69.m128_f32[0] + _mm_shuffle_ps(v69, v69, 85).m128_f32[0])
								+ _mm_shuffle_ps(v69, v69, 170).m128_f32[0];
							v71 = fsqrt(v70);
							v67.m128_f32[0] = fmaxf(
								(float)((float)(3.0 - (float)((float)(v70 * (float)(1.0 / v71)) * (float)(1.0 / v71)))
									* 0.5)
								* (float)(1.0 / v71),
								0.0);
							v72 = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v68);
							v68.m128_f32[0] = v64;
							v83[2] = (__int128)v72;
							v73 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v57), v55);
							v74 = _mm_mul_ps(v73, v73);
							v74.m128_f32[0] = (float)(v74.m128_f32[0] + _mm_shuffle_ps(v74, v74, 85).m128_f32[0])
								+ _mm_shuffle_ps(v74, v74, 170).m128_f32[0];
							v75 = 1.0 / fsqrt(v74.m128_f32[0]);
							v65.m128_f32[0] = fmaxf(
								(float)((float)(3.0 - (float)((float)(v74.m128_f32[0] * v75) * v75)) * 0.5) * v75,
								0.0);
							v83[1] = (__int128)_mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v73);
						}
						sub_1407BCD40(v52, (__int64)v53);
					}
					else
					{
						*(_DWORD*)(v21 + 48) = 0;
					}
				}
			LABEL_41:
				v20 += 64i64;
				--v18;
			} while (v18);
		}
		v17 += 16i64;
		--v3;
	} while (v3);
	*(_DWORD*)(a1 + 356) = 1;
}
// 1407B8257: variable 'v2' is possibly undefined
// 1407B8295: variable 'v8' is possibly undefined
// 1407B82D3: variable 'v9' is possibly undefined
// 1407B830D: variable 'v10' is possibly undefined
// 1407B8347: variable 'v11' is possibly undefined
// 1407B8385: variable 'v12' is possibly undefined
// 1407B83C7: variable 'v13' is possibly undefined
// 1407B8405: variable 'v14' is possibly undefined
// 1407B88C0: variable 'v52' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C7F870: using guessed type __int64 qword_140C7F870;
// 140C7F878: using guessed type __int64 qword_140C7F878;
// 140C7F890: using guessed type __int64 qword_140C7F890;
// 140C7F898: using guessed type __int64 qword_140C7F898;
// 140DC4F38: using guessed type int dword_140DC4F38;
// 140DC4F40: using guessed type __int128 xmmword_140DC4F40;
// 140DC4F50: using guessed type __int128 xmmword_140DC4F50;
// 140DC4F60: using guessed type __int128 xmmword_140DC4F60;

