//----- (000000014071CFE0) ----------------------------------------------------
void __fastcall sub_14071CFE0(__m128* a1, __int64 a2, __int64 a3)
{
	unsigned __int64 v6; // rax
	int v7; // r12d
	int v8; // esi
	__int64 v9; // rax
	__int64 v10; // rcx
	__int32 v11; // eax
	__int64 v12; // rdx
	int v13; // edx
	__int64 v14; // r14
	__int64 v15; // rax
	__m128* v16; // r13
	__int64 v17; // r14
	__int64 v18; // rax
	__m128 v19; // xmm2
	__m128i v20; // xmm0
	__m128* v21; // rsi
	__m128* v22; // rax
	float v23; // xmm11_4
	__m128 v24; // xmm6
	__int64 v25; // rsi
	float v26; // xmm9_4
	__int64 v27; // rax
	bool v28; // zf
	__m128 v29; // xmm5
	__m128 v30; // xmm4
	__m128 v31; // xmm3
	__m128 v32; // xmm2
	__m128 v33; // xmm0
	__m128 v34; // xmm0
	__m128 v35; // xmm4
	__m128 v36; // xmm4
	__m128i v37; // xmm7
	__m128i v38; // xmm4
	__m128 v39; // xmm6
	__m128 v40; // xmm1
	float v41; // xmm2_4
	__m128 v42; // xmm1
	float v43; // xmm0_4
	__m128i v44; // xmm1
	__m128 v45; // xmm3
	__m128 v46; // xmm1
	float v47; // xmm2_4
	float v48; // xmm0_4
	__m128 v49; // xmm0
	__m128i v50; // xmm5
	__m128 v51; // xmm1
	__m128 v52; // xmm2
	__int64 v53; // rax
	__m128 v54; // xmm2
	__m128i v55; // xmm0
	unsigned __int64 v56; // rax
	int v57; // ecx
	__m128 v58; // xmm3
	__m128 v59; // xmm6
	__m128 v60; // xmm3
	__m128 v61; // xmm1
	float v62; // xmm2_4
	__m128 v63; // xmm1
	float v64; // xmm0_4
	__m128i v65; // xmm1
	__m128 v66; // xmm3
	__m128 v67; // xmm1
	float v68; // xmm2_4
	float v69; // xmm0_4
	__m128i v70; // xmm6
	__m128i v71; // xmm2
	__m128i v72; // xmm0
	float v73; // xmm0_4
	float v74; // xmm2_4
	double v75; // xmm6_8
	double v76; // xmm7_8
	double v77; // xmm8_8
	float v78; // xmm0_4
	__m128 v79; // xmm6
	__m128 v80; // xmm1
	__m128 v81; // xmm1
	__m128 v82; // xmm7
	__m128 v83; // xmm4
	__m128 v84; // xmm5
	__m128 v85; // xmm2
	__m128 v86; // xmm0
	__m128 v87; // xmm3
	__m128 v88; // xmm2
	__m128 v89; // xmm0
	__m128 v90; // xmm0
	__m128 v91; // xmm7
	__m128 v92; // xmm4
	float v93; // xmm7_4
	float v94; // xmm0_4
	__m128 v95; // xmm2
	float v96; // xmm0_4
	__m128 v97; // xmm3
	unsigned __int64 v98; // rcx
	__m128 v99; // [rsp+28h] [rbp-E0h] BYREF
	__m128 v100; // [rsp+38h] [rbp-D0h]
	__m128 v101; // [rsp+48h] [rbp-C0h]
	__m128 v102; // [rsp+58h] [rbp-B0h]
	__m128 v103; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v104; // [rsp+78h] [rbp-90h] BYREF
	__m128 v105; // [rsp+88h] [rbp-80h] BYREF
	__m128 v106; // [rsp+98h] [rbp-70h] BYREF
	__m128 v107; // [rsp+A8h] [rbp-60h]
	__m128 v108; // [rsp+B8h] [rbp-50h]
	__int128 v109; // [rsp+C8h] [rbp-40h]
	__m128 v110[2]; // [rsp+D8h] [rbp-30h] BYREF
	__m128 v111; // [rsp+F8h] [rbp-10h]
	__m128 v112; // [rsp+108h] [rbp+0h]
	__m128* v113; // [rsp+128h] [rbp+20h] BYREF

	if (!a1[14].m128_u64[0] || !a3)
		return;
	v6 = a1->m128_u64[0];
	v7 = 0;
	v8 = 0;
	v104 = 0i64;
	v9 = (*(__int64 (**)(void))(v6 + 136))();
	v10 = v9;
	if (!a1[35].m128_i32[1] && v9)
	{
		v11 = a1[35].m128_i32[3];
		if (v11 == 84)
		{
			v12 = 1i64;
		LABEL_10:
			v8 = (*(__int64(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)v10 + 136i64))(v10, v12, &v104);
			goto LABEL_11;
		}
		if (v11 == 85 || v11 == 187)
		{
			v12 = 0i64;
			goto LABEL_10;
		}
	}
LABEL_11:
	v13 = a1[37].m128_i32[0];
	v99 = *(__m128*)ymmword_140C78390.m256_f32;
	v100 = *(__m128*) & ymmword_140C78390.m256_f32[4];
	v101 = (__m128)xmmword_140C783B0;
	v102 = (__m128)xmmword_140C783C0;
	v14 = sub_1403D90D0(qword_140C65898, v13);
	v15 = sub_1403D90D0(qword_140C65898, a1[37].m128_i32[1]);
	v16 = (__m128*)v15;
	if (a1[36].m128_i32[3])
	{
		if (v14)
		{
			if (a2)
			{
				v17 = *(_QWORD*)(v14 + 5864);
				if (v17)
				{
					if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v17 + 848i64))(v17, a1[37].m128_u32[2]))
					{
						(*(void(__fastcall**)(__int64, _QWORD, __m128*, __int64))(*(_QWORD*)a3 + 888i64))(
							a3,
							a1[35].m128_u32[3],
							v110,
							1i64);
						if (v8)
						{
							v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 80i64))(a3);
							v19 = _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0), *(__m128*)v18);
							v108.m128_i32[3] = HIDWORD(*(_OWORD*)(v18 + 48));
							v108.m128_u64[0] = 0i64;
							v108.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
							v20 = (__m128i)_mm_add_ps(
								v112,
								_mm_add_ps(
									_mm_add_ps(
										_mm_add_ps(v19, _mm_mul_ps(_mm_shuffle_ps(v104, v104, 85), *(__m128*)(v18 + 16))),
										_mm_mul_ps(_mm_shuffle_ps(v104, v104, 170), *(__m128*)(v18 + 32))),
									v108));
							v112.m128_u64[0] = v20.m128i_i64[0];
							v112.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v20, 8));
						}
						v21 = *(__m128**)(qword_140C65898 + 29096);
						if (!v21)
							v21 = *(__m128**)(qword_140C65898 + 29088);
						v22 = (__m128*)(*(__int64(__fastcall**)(__int64, __m128*, _QWORD, _QWORD))(*(_QWORD*)v17 + 856i64))(
							v17,
							&v103,
							a1[37].m128_u32[2],
							0i64);
						v23 = *(float*)(a2 + 4804);
						v24 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(*v22, *v22, 85), v21[11]),
									_mm_mul_ps(_mm_shuffle_ps(*v22, *v22, 0), v21[10])),
								_mm_mul_ps(_mm_shuffle_ps(*v22, *v22, 170), v21[12])),
							v21[13]);
						v25 = *(_QWORD*)(a2 + 3336);
						v103 = v24;
						if (v25)
						{
							v26 = sub_14047A940((_QWORD*)a2) * *(float*)(v25 + 140);
						}
						else
						{
							v27 = sub_14022D500(*(_DWORD*)(a2 + 216));
							if (v27)
								v26 = *(float*)(v27 + 40);
							else
								v26 = 0.0;
						}
						v28 = a1[36].m128_i32[3] == 1;
						v29 = (__m128)0x40400000u;
						v30 = (__m128)0x40400000u;
						v31 = _mm_sub_ps(v112, v24);
						v32 = _mm_mul_ps(v31, v31);
						v32.m128_f32[0] = (float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
							+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0];
						v33 = v32;
						v100 = *(__m128*) & ymmword_140C78390.m256_f32[4];
						v33.m128_f32[0] = 1.0 / fsqrt(v32.m128_f32[0]);
						v102 = (__m128)xmmword_140C783C0;
						v30.m128_f32[0] = (float)((float)(3.0 - (float)((float)(v32.m128_f32[0] * v33.m128_f32[0]) * v33.m128_f32[0]))
							* 0.5)
							* v33.m128_f32[0];
						v33.m128_f32[0] = v26;
						v34 = _mm_shuffle_ps(v33, v33, 0);
						v30.m128_f32[0] = fmaxf(v30.m128_f32[0], 0.0);
						v35 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v31), v34);
						v34.m128_f32[0] = v23;
						v36 = _mm_mul_ps(v35, _mm_shuffle_ps(v34, v34, 0));
						v99 = *(__m128*)ymmword_140C78390.m256_f32;
						v101 = (__m128)xmmword_140C783B0;
						if (v28)
						{
							v37 = (__m128i)_mm_sub_ps(v112, v36);
							v102.m128_u64[0] = v37.m128i_i64[0];
							v102.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v37, 8));
						}
						else
						{
							v38 = (__m128i)_mm_add_ps(v36, v112);
							v102.m128_u64[0] = v38.m128i_i64[0];
							v102.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v38, 8));
						}
						if (!a1[36].m128_i32[1]
							|| fabs(v103.m128_f32[0] - v102.m128_f32[0]) <= 0.0000099999997
							&& fabs(v103.m128_f32[2] - v102.m128_f32[2]) <= 0.0000099999997)
						{
							goto LABEL_41;
						}
						v39 = _mm_sub_ps(v24, v102);
						v40 = _mm_mul_ps(v39, v39);
						v41 = (float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
							+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
						v42 = (__m128)0x40400000u;
						v43 = fsqrt(v41);
						v42.m128_f32[0] = fmaxf(
							(float)((float)(3.0 - (float)((float)(v41 * (float)(1.0 / v43)) * (float)(1.0 / v43)))
								* 0.5)
							* (float)(1.0 / v43),
							0.0);
						v44 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v39);
						v101.m128_u64[0] = v44.m128i_i64[0];
						v101.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v44, 8));
						v45 = _mm_sub_ps(
							_mm_mul_ps(
								_mm_shuffle_ps(v101, v101, 210),
								_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 201)),
							_mm_mul_ps(
								_mm_shuffle_ps(v101, v101, 201),
								_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 210)));
						v46 = _mm_mul_ps(v45, v45);
						v47 = (float)(v46.m128_f32[0] + _mm_shuffle_ps(v46, v46, 85).m128_f32[0])
							+ _mm_shuffle_ps(v46, v46, 170).m128_f32[0];
						v48 = fsqrt(v47);
						v29.m128_f32[0] = (float)((float)(3.0 - (float)((float)(v47 * (float)(1.0 / v48)) * (float)(1.0 / v48)))
							* 0.5)
							* (float)(1.0 / v48);
						v49 = _mm_shuffle_ps(v101, v101, 210);
						v29.m128_f32[0] = fmaxf(v29.m128_f32[0], 0.0);
						v50 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v45);
						v99.m128_u64[0] = v50.m128i_i64[0];
						v99.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v50, 8));
						v51 = _mm_shuffle_ps(v99, v99, 201);
						v52 = _mm_mul_ps(_mm_shuffle_ps(v99, v99, 210), _mm_shuffle_ps(v101, v101, 201));
					LABEL_40:
						v71 = (__m128i)_mm_sub_ps(v52, _mm_mul_ps(v51, v49));
						v100.m128_u64[0] = v71.m128i_i64[0];
						v100.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v71, 8));
					LABEL_41:
						v113 = v110;
						sub_1401AFC20((__int64*)&v113, (double*)v105.m128_u64);
						v7 = 1;
						v99 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v99, v99, 85), v106),
									_mm_mul_ps(_mm_shuffle_ps(v99, v99, 0), v105)),
								_mm_mul_ps(_mm_shuffle_ps(v99, v99, 170), v107)),
							_mm_mul_ps(_mm_shuffle_ps(v99, v99, 255), v108));
						v100 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v100, v100, 85), v106),
									_mm_mul_ps(_mm_shuffle_ps(v100, v100, 0), v105)),
								_mm_mul_ps(_mm_shuffle_ps(v100, v100, 170), v107)),
							_mm_mul_ps(_mm_shuffle_ps(v100, v100, 255), v108));
						v101 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v101, v101, 85), v106),
									_mm_mul_ps(_mm_shuffle_ps(v101, v101, 0), v105)),
								_mm_mul_ps(_mm_shuffle_ps(v101, v101, 170), v107)),
							_mm_mul_ps(_mm_shuffle_ps(v101, v101, 255), v108));
						v102 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v102, v102, 85), v106),
									_mm_mul_ps(_mm_shuffle_ps(v102, v102, 0), v105)),
								_mm_mul_ps(_mm_shuffle_ps(v102, v102, 170), v107)),
							_mm_mul_ps(_mm_shuffle_ps(v102, v102, 255), v108));
					}
				}
			}
		}
	}
	else if (a1[36].m128_i32[2] && v15)
	{
		(*(void(__fastcall**)(__int64, _QWORD, __m128*, __int64))(*(_QWORD*)a3 + 888i64))(
			a3,
			a1[35].m128_u32[3],
			v110,
			1i64);
		if (v8)
		{
			v53 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 80i64))(a3);
			v54 = _mm_mul_ps(_mm_shuffle_ps(v104, v104, 85), *(__m128*)(v53 + 16));
			v108.m128_i32[3] = HIDWORD(*(_OWORD*)(v53 + 48));
			v108.m128_u64[0] = 0i64;
			v108.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
			v55 = (__m128i)_mm_add_ps(
				v112,
				_mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(v54, _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0), *(__m128*)v53)),
						_mm_mul_ps(_mm_shuffle_ps(v104, v104, 170), *(__m128*)(v53 + 32))),
					v108));
			v56 = v55.m128i_i64[0];
			v57 = _mm_cvtsi128_si32(_mm_srli_si128(v55, 8));
			v112.m128_u64[0] = v55.m128i_i64[0];
			v112.m128_i32[2] = v57;
		}
		else
		{
			v57 = v112.m128_i32[2];
			v56 = v112.m128_u64[0];
		}
		v58 = v16[291];
		if (fabs(v58.m128_f32[0] - v112.m128_f32[0]) > 0.0000099999997
			|| fabs(_mm_shuffle_ps(v58, v58, 170).m128_f32[0] - v112.m128_f32[2]) > 0.0000099999997)
		{
			v59 = (__m128)0x40400000u;
			v102.m128_u64[0] = v56;
			v102.m128_i32[2] = v57;
			v60 = _mm_sub_ps(v58, v102);
			v61 = _mm_mul_ps(v60, v60);
			v62 = (float)(v61.m128_f32[0] + _mm_shuffle_ps(v61, v61, 85).m128_f32[0])
				+ _mm_shuffle_ps(v61, v61, 170).m128_f32[0];
			v63 = (__m128)0x40400000u;
			v64 = fsqrt(v62);
			v63.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v62 * (float)(1.0 / v64)) * (float)(1.0 / v64))) * 0.5)
				* (float)(1.0 / v64),
				0.0);
			v65 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v63, v63, 0), v60);
			v101.m128_u64[0] = v65.m128i_i64[0];
			v101.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v65, 8));
			v66 = _mm_sub_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(v101, v101, 210),
					_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 201)),
				_mm_mul_ps(
					_mm_shuffle_ps(v101, v101, 201),
					_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 210)));
			v67 = _mm_mul_ps(v66, v66);
			v68 = (float)(v67.m128_f32[0] + _mm_shuffle_ps(v67, v67, 85).m128_f32[0])
				+ _mm_shuffle_ps(v67, v67, 170).m128_f32[0];
			v69 = fsqrt(v68);
			v59.m128_f32[0] = (float)((float)(3.0 - (float)((float)(v68 * (float)(1.0 / v69)) * (float)(1.0 / v69))) * 0.5)
				* (float)(1.0 / v69);
			v49 = _mm_shuffle_ps(v101, v101, 210);
			v59.m128_f32[0] = fmaxf(v59.m128_f32[0], 0.0);
			v70 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v59, v59, 0), v66);
			v99.m128_u64[0] = v70.m128i_i64[0];
			v99.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v70, 8));
			v51 = _mm_shuffle_ps(v99, v99, 201);
			v52 = _mm_mul_ps(_mm_shuffle_ps(v99, v99, 210), _mm_shuffle_ps(v101, v101, 201));
			goto LABEL_40;
		}
	}
	else if (v8)
	{
		v72 = (__m128i)_mm_add_ps(v102, v104);
		v102.m128_u64[0] = v72.m128i_i64[0];
		v102.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v72, 8));
	}
	v73 = a1[36].m128_f32[0];
	v74 = a1[32].m128_f32[0];
	if (v73 != 0.0)
		v74 = v74 * v73;
	*(_QWORD*)&v75 = a1[32].m128_u32[1];
	*(_QWORD*)&v76 = a1[32].m128_u32[2];
	*(_QWORD*)&v77 = a1[32].m128_u32[3];
	v99.m128_f32[0] = v99.m128_f32[0] * v74;
	v99.m128_f32[1] = v99.m128_f32[1] * v74;
	v99.m128_f32[2] = v99.m128_f32[2] * v74;
	v100.m128_f32[0] = v100.m128_f32[0] * v74;
	v100.m128_f32[1] = v100.m128_f32[1] * v74;
	v101.m128_f32[0] = v101.m128_f32[0] * v74;
	v100.m128_f32[2] = v100.m128_f32[2] * v74;
	v101.m128_f32[2] = v101.m128_f32[2] * v74;
	v105.m128_u64[0] = __PAIR64__(LODWORD(v76), LODWORD(v75));
	v105.m128_i32[2] = LODWORD(v77);
	v101.m128_f32[1] = v101.m128_f32[1] * v74;
	sub_1408FE3D0(v75);
	sub_1408FC950(v75);
	sub_1408FE3D0(v76);
	sub_1408FC950(v76);
	sub_1408FE3D0(v77);
	v78 = sub_1408FC950(v77);
	v106.m128_f32[0] = (float)((float)(*(float*)&v76 * *(float*)&v75) * *(float*)&v77) + (float)(v78 * *(float*)&v76);
	v106.m128_f32[1] = *(float*)&v77 * *(float*)&v75;
	v106.m128_u64[1] = COERCE_UNSIGNED_INT(
		(float)((float)(*(float*)&v76 * *(float*)&v75) * *(float*)&v77)
		- (float)(v78 * *(float*)&v76));
	v107.m128_f32[1] = *(float*)&v77 * *(float*)&v75;
	v107.m128_f32[0] = (float)((float)(*(float*)&v76 * *(float*)&v75) * *(float*)&v77)
		- (float)(*(float*)&v77 * *(float*)&v76);
	v103.m128_u64[0] = (unsigned __int64)&v106;
	v109 = xmmword_140C78440;
	v107.m128_u64[1] = COERCE_UNSIGNED_INT(
		(float)((float)(*(float*)&v76 * *(float*)&v75) * *(float*)&v77)
		+ (float)(*(float*)&v77 * *(float*)&v76));
	v103.m128_u64[1] = (unsigned __int64)&v99;
	v108.m128_f32[0] = *(float*)&v76 * *(float*)&v75;
	v108.m128_u64[1] = COERCE_UNSIGNED_INT(*(float*)&v76 * *(float*)&v75);
	v110[0].m128_u64[0] = (unsigned __int64)&v106;
	v108.m128_f32[1] = -*(float*)&v75;
	v110[0].m128_u64[1] = (unsigned __int64)&v99;
	sub_1401AFB10((__m128**)v110, &v99);
	if (!*(_DWORD*)((*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 16))(a1) + 56) || v7)
	{
		if (*(_DWORD*)((*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 16))(a1) + 56) || !v7)
			goto LABEL_53;
		(*(void(__fastcall**)(__int64, _QWORD, __m128*, __int64))(*(_QWORD*)a3 + 888i64))(
			a3,
			a1[35].m128_u32[3],
			&v105,
			1i64);
		v79 = (__m128)xmmword_140C78440;
		v88 = _mm_mul_ps(v105, v105);
		v89 = _mm_shuffle_ps(v88, v88, 85);
		v89.m128_f32[0] = fsqrt((float)(v88.m128_f32[0] + v89.m128_f32[0]) + _mm_shuffle_ps(v88, v88, 170).m128_f32[0]);
		v90 = _mm_shuffle_ps(v89, v89, 0);
		v84 = _mm_mul_ps((__m128)xmmword_140C78430, v90);
		v91 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v90);
		v92 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v90);
		v99 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v99, v99, 85), v92), _mm_mul_ps(_mm_shuffle_ps(v99, v99, 0), v91)),
				_mm_mul_ps(_mm_shuffle_ps(v99, v99, 170), v84)),
			_mm_mul_ps(_mm_shuffle_ps(v99, v99, 255), (__m128)xmmword_140C78440));
		v100 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v100, v100, 0), v91),
					_mm_mul_ps(_mm_shuffle_ps(v100, v100, 85), v92)),
				_mm_mul_ps(_mm_shuffle_ps(v100, v100, 170), v84)),
			_mm_mul_ps(_mm_shuffle_ps(v100, v100, 255), (__m128)xmmword_140C78440));
		v85 = v102;
		v101 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v101, v101, 0), v91),
					_mm_mul_ps(_mm_shuffle_ps(v101, v101, 85), v92)),
				_mm_mul_ps(_mm_shuffle_ps(v101, v101, 170), v84)),
			_mm_mul_ps(_mm_shuffle_ps(v101, v101, 255), (__m128)xmmword_140C78440));
		v86 = _mm_mul_ps(_mm_shuffle_ps(v102, v102, 0), v91);
		v87 = _mm_mul_ps(_mm_shuffle_ps(v102, v102, 85), v92);
	}
	else
	{
		(*(void(__fastcall**)(__int64, _QWORD, __m128*, __int64))(*(_QWORD*)a3 + 888i64))(
			a3,
			a1[35].m128_u32[3],
			&v105,
			1i64);
		v79 = (__m128)xmmword_140C78440;
		v80 = _mm_mul_ps(v105, v105);
		v80.m128_f32[0] = 1.0
			/ fsqrt(
				(float)(v80.m128_f32[0] + _mm_shuffle_ps(v80, v80, 85).m128_f32[0])
				+ _mm_shuffle_ps(v80, v80, 170).m128_f32[0]);
		v81 = _mm_shuffle_ps(v80, v80, 0);
		v82 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v81);
		v83 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v81);
		v84 = _mm_mul_ps((__m128)xmmword_140C78430, v81);
		v99 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v99, v99, 85), v83), _mm_mul_ps(_mm_shuffle_ps(v99, v99, 0), v82)),
				_mm_mul_ps(_mm_shuffle_ps(v99, v99, 170), v84)),
			_mm_mul_ps(_mm_shuffle_ps(v99, v99, 255), (__m128)xmmword_140C78440));
		v100 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v100, v100, 85), v83),
					_mm_mul_ps(_mm_shuffle_ps(v100, v100, 0), v82)),
				_mm_mul_ps(_mm_shuffle_ps(v100, v100, 170), v84)),
			_mm_mul_ps(_mm_shuffle_ps(v100, v100, 255), (__m128)xmmword_140C78440));
		v85 = v102;
		v101 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v101, v101, 85), v83),
					_mm_mul_ps(_mm_shuffle_ps(v101, v101, 0), v82)),
				_mm_mul_ps(_mm_shuffle_ps(v101, v101, 170), v84)),
			_mm_mul_ps(_mm_shuffle_ps(v101, v101, 255), (__m128)xmmword_140C78440));
		v86 = _mm_mul_ps(_mm_shuffle_ps(v102, v102, 85), v83);
		v87 = _mm_mul_ps(_mm_shuffle_ps(v102, v102, 0), v82);
	}
	v102 = _mm_add_ps(
		_mm_add_ps(_mm_add_ps(v87, v86), _mm_mul_ps(_mm_shuffle_ps(v85, v85, 170), v84)),
		_mm_mul_ps(_mm_shuffle_ps(v85, v85, 255), v79));
LABEL_53:
	if (*(_DWORD*)((*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 16))(a1) + 60))
	{
		v93 = sub_1408FE3D0(COERCE_DOUBLE(1078530011i64));
		v94 = sub_1408FC950(COERCE_DOUBLE(1078530011i64));
		v111.m128_u64[0] = LODWORD(v93);
		v110[0].m128_u64[0] = LODWORD(v94);
		v111.m128_u64[1] = LODWORD(v94);
		v110[0].m128_u64[1] = LODWORD(v93) ^ 0x80000000i64;
		v99 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v99, v99, 85), (__m128)xmmword_140B7A4B0),
					_mm_mul_ps(_mm_shuffle_ps(v99, v99, 0), v110[0])),
				_mm_mul_ps(_mm_shuffle_ps(v99, v99, 170), v111)),
			_mm_mul_ps(_mm_shuffle_ps(v99, v99, 255), (__m128)xmmword_140C78440));
		v100 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v100, v100, 85), (__m128)xmmword_140B7A4B0),
					_mm_mul_ps(_mm_shuffle_ps(v100, v100, 0), v110[0])),
				_mm_mul_ps(_mm_shuffle_ps(v100, v100, 170), v111)),
			_mm_mul_ps(_mm_shuffle_ps(v100, v100, 255), (__m128)xmmword_140C78440));
		v101 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v101, v101, 85), (__m128)xmmword_140B7A4B0),
					_mm_mul_ps(_mm_shuffle_ps(v101, v101, 0), v110[0])),
				_mm_mul_ps(_mm_shuffle_ps(v101, v101, 170), v111)),
			_mm_mul_ps(_mm_shuffle_ps(v101, v101, 255), (__m128)xmmword_140C78440));
		v102 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v102, v102, 0), v110[0]),
					_mm_mul_ps(_mm_shuffle_ps(v102, v102, 85), (__m128)xmmword_140B7A4B0)),
				_mm_mul_ps(_mm_shuffle_ps(v102, v102, 170), v111)),
			_mm_mul_ps(_mm_shuffle_ps(v102, v102, 255), (__m128)xmmword_140C78440));
	}
	if (*(_DWORD*)((*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 16))(a1) + 52))
	{
		v95 = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(a1[33], a1[33], 85), v100),
				_mm_mul_ps(_mm_shuffle_ps(a1[33], a1[33], 0), v99)),
			_mm_mul_ps(_mm_shuffle_ps(a1[33], a1[33], 170), v101));
		v102.m128_f32[0] = v102.m128_f32[0] + v95.m128_f32[0];
		v102.m128_f32[1] = v102.m128_f32[1] + _mm_shuffle_ps(v95, v95, 85).m128_f32[0];
		v96 = v102.m128_f32[2] + _mm_shuffle_ps(v95, v95, 170).m128_f32[0];
	}
	else
	{
		v97 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)a1[33].m128_u32[0], (__m128)a1[33].m128_u32[2]),
			_mm_unpacklo_ps((__m128)a1[33].m128_u32[1], (__m128)0i64));
		v102.m128_f32[0] = v102.m128_f32[0] + v97.m128_f32[0];
		v102.m128_f32[1] = v102.m128_f32[1] + _mm_shuffle_ps(v97, v97, 85).m128_f32[0];
		v96 = v102.m128_f32[2] + _mm_shuffle_ps(v97, v97, 170).m128_f32[0];
	}
	v98 = a1[14].m128_u64[0];
	v102.m128_f32[2] = v96;
	(*(void(__fastcall**)(unsigned __int64, __m128*))(*(_QWORD*)v98 + 72i64))(v98, &v99);
}
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 14071CFE0: using guessed type __m128 var_120;

