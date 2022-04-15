//----- (00000001407CF2F0) ----------------------------------------------------
void __fastcall sub_1407CF2F0(__int64 a1, __int64 a2, __int128* a3, int a4)
{
	float v4; // xmm1_4
	__int64 v5; // rbx
	__int64 v6; // rdi
	float v11; // xmm6_4
	int v12; // xmm2_4
	unsigned int v13; // eax
	float* v14; // rsi
	__int128 v15; // xmm0
	__int128 v16; // xmm1
	__int128 v17; // xmm0
	__m128* v18; // r8
	__m128 v19; // xmm7
	__m128 v20; // xmm1
	float v21; // xmm2_4
	__m128 v22; // xmm1
	__m128i v23; // xmm1
	__m128 v24; // xmm1
	float v25; // xmm2_4
	__m128 v26; // xmm1
	__m128i v27; // xmm1
	__m128 v28; // xmm2
	__m128i v29; // xmm7
	double v30; // xmm7_8
	double v31; // xmm6_8
	float v32; // xmm9_4
	float v33; // xmm10_4
	float v34; // xmm8_4
	float v35; // xmm5_4
	int v36; // ebx
	__int64 v37; // rax
	int v38; // xmm6_4
	int v39; // xmm7_4
	__int64 v40; // rcx
	__int64 v41; // rcx
	__int64 v42; // rcx
	const void*** v43; // rdx
	int v44; // ecx
	__int64 v45; // rax
	__int64 v46; // rcx
	__int128 v47; // xmm0
	__int128 v48; // xmm1
	__int128 v49; // xmm0
	int* v50; // rax
	int v51; // xmm6_4
	int v52; // xmm7_4
	const void*** v53; // rdx
	char v54[20]; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v55; // [rsp+54h] [rbp-ACh]
	int v56; // [rsp+5Ch] [rbp-A4h]
	__m128 v57; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v58; // [rsp+70h] [rbp-90h]
	__m128 v59; // [rsp+80h] [rbp-80h]
	__int128 v60; // [rsp+90h] [rbp-70h]
	int v61[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int128 v62; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v63; // [rsp+C0h] [rbp-40h]
	__int128 v64; // [rsp+D0h] [rbp-30h]
	int v65; // [rsp+E0h] [rbp-20h]
	__int64 v66; // [rsp+E4h] [rbp-1Ch]
	int v67; // [rsp+ECh] [rbp-14h]
	__int128 v68[3]; // [rsp+F0h] [rbp-10h] BYREF
	int v69; // [rsp+120h] [rbp+20h]
	__int64 v70; // [rsp+124h] [rbp+24h]
	int v71; // [rsp+12Ch] [rbp+2Ch]
	double v72[8]; // [rsp+130h] [rbp+30h] BYREF
	__int64 v73; // [rsp+170h] [rbp+70h] BYREF
	int v74; // [rsp+178h] [rbp+78h]
	int v75; // [rsp+17Ch] [rbp+7Ch]
	char v76[12]; // [rsp+180h] [rbp+80h]
	int v77; // [rsp+18Ch] [rbp+8Ch]
	int v78[4]; // [rsp+190h] [rbp+90h] BYREF
	unsigned __int64 v79; // [rsp+1A0h] [rbp+A0h]
	__m128* v80[18]; // [rsp+1B0h] [rbp+B0h] BYREF
	_QWORD v81[18]; // [rsp+240h] [rbp+140h] BYREF

	v4 = *(float*)(a2 + 40);
	v5 = *(_QWORD*)(a1 + 1328);
	v6 = 0i64;
	v11 = 0.0;
	*(float*)&v12 = *(float*)(a2 + 56) / (float)(v4 + 1.0);
	*(float*)v61 = (float)(*(float*)(a2 + 56) / v4) - 0.0000099999997;
	v61[1] = v12;
	if (v5)
	{
		do
		{
			if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 176i64))(v5) & 1) != 0
				&& (float)(*(float*)(v5 + 468) * *(float*)(v5 + 260)) > v11)
			{
				v11 = *(float*)(v5 + 468) * *(float*)(v5 + 260);
				v6 = v5;
			}
			v5 = *(_QWORD*)(v5 + 136);
		} while (v5);
		if (v6)
		{
			v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 184i64))(v6);
			if (v13 != -1 && *(_QWORD*)(v6 + 288) > (unsigned __int64)v13)
			{
				v14 = (float*)(*(_QWORD*)(v6 + 280) + 32i64 * v13);
				if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)v14 + 848i64))(*(_QWORD*)v14, 9i64))
				{
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)v14 + 880i64))(*(_QWORD*)v14, 9i64, 0i64);
					v15 = *a3;
					v63 = a3[1];
					v16 = a3[3];
					v62 = v15;
					v80[0] = (__m128*) & v62;
					v17 = a3[2];
					v67 = HIDWORD(v16);
					v66 = 0i64;
					v65 = 0;
					v64 = v17;
					sub_1401AFC20((__int64*)v80, (double*)&v62);
					*(_QWORD*)v54 = v18;
					v80[0] = v18;
					*(_QWORD*)&v54[8] = &v62;
					v80[1] = (__m128*) & v62;
					sub_1401AFB10(v80, &v57);
					v19 = (__m128)0x40400000u;
					v20 = _mm_mul_ps(v57, v57);
					v21 = (float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
						+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
					v22 = (__m128)0x40400000u;
					*(float*)&v17 = fsqrt(v21);
					v22.m128_f32[0] = fmaxf(
						(float)((float)(3.0
							- (float)((float)(v21 * (float)(1.0 / *(float*)&v17))
								* (float)(1.0 / *(float*)&v17)))
							* 0.5)
						* (float)(1.0 / *(float*)&v17),
						0.0);
					v23 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v57);
					v57.m128_u64[0] = v23.m128i_i64[0];
					v57.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
					v24 = _mm_mul_ps(v58, v58);
					v25 = (float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0])
						+ _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
					v26 = (__m128)0x40400000u;
					*(float*)&v17 = fsqrt(v25);
					v26.m128_f32[0] = fmaxf(
						(float)((float)(3.0
							- (float)((float)(v25 * (float)(1.0 / *(float*)&v17))
								* (float)(1.0 / *(float*)&v17)))
							* 0.5)
						* (float)(1.0 / *(float*)&v17),
						0.0);
					v27 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v58);
					v58.m128_u64[0] = v27.m128i_i64[0];
					v58.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v27, 8));
					v28 = _mm_mul_ps(v59, v59);
					*(_QWORD*)((char*)&v60 + 4) = 0i64;
					LODWORD(v60) = 0;
					v28.m128_f32[0] = (float)(v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0])
						+ _mm_shuffle_ps(v28, v28, 170).m128_f32[0];
					*(float*)&v17 = 1.0 / fsqrt(v28.m128_f32[0]);
					v19.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v28.m128_f32[0] * *(float*)&v17) * *(float*)&v17))
							* 0.5)
						* *(float*)&v17,
						0.0);
					v29 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v59);
					v59.m128_u64[0] = v29.m128i_i64[0];
					v59.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v29, 8));
				}
				else
				{
					*(_QWORD*)&v30 = (unsigned int)dword_140C3B438;
					*(float*)&v30 = *(float*)&dword_140C3B438 * 0.0055555557;
					v31 = v30;
					*(float*)&v30 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v14[3];
					*(float*)&v31 = *(float*)&v31 * v14[2];
					v32 = sub_1408FE3D0(v31);
					v33 = sub_1408FC950(v31);
					LODWORD(v31) = sub_1408FE3D0(v30);
					v34 = sub_1408FC950(v30);
					LODWORD(v30) = sub_1408FE3D0(0.0);
					v35 = sub_1408FC950(0.0);
					v57.m128_f32[1] = *(float*)&v30 * v34;
					v57.m128_f32[0] = v35 * v34;
					v57.m128_u64[1] = COERCE_UNSIGNED_INT(-*(float*)&v31);
					v58.m128_f32[0] = (float)((float)(v35 * *(float*)&v31) * v32) - (float)(*(float*)&v30 * v33);
					v58.m128_f32[1] = (float)(v35 * v33) + (float)((float)(*(float*)&v30 * *(float*)&v31) * v32);
					v59.m128_f32[0] = (float)((float)(v35 * *(float*)&v31) * v33) + (float)(*(float*)&v30 * v32);
					v58.m128_u64[1] = COERCE_UNSIGNED_INT(v34 * v32);
					v59.m128_u64[1] = COERCE_UNSIGNED_INT(v34 * v33);
					v60 = xmmword_140C78440;
					v59.m128_f32[1] = (float)((float)(*(float*)&v30 * *(float*)&v31) * v33) - (float)(v35 * v32);
				}
				(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 6480) + 72i64))(*(_QWORD*)(a1 + 6480), &v57);
				if (*(_DWORD*)(v6 + 456))
				{
					v36 = 625;
					if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)v14 + 408i64))(*(_QWORD*)v14, 625i64))
					{
						if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)v14 + 408i64))(*(_QWORD*)v14, 150i64))
						{
							*(_DWORD*)(v6 + 456) = 0;
							return;
						}
						v36 = 150;
					}
					v37 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
					v73 = *(_QWORD*)v37;
					v74 = *(_DWORD*)(v37 + 8);
					v75 = *(_DWORD*)(v37 + 12);
					v38 = *(_DWORD*)(v37 + 16);
					*(_DWORD*)v76 = v38;
					v39 = *(_DWORD*)(v37 + 20);
					*(_QWORD*)v76 = 0i64;
					(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v73);
					v40 = *(_QWORD*)v14;
					HIDWORD(v63) = 0;
					(*(void(__fastcall**)(__int64, _QWORD, __int128*))(*(_QWORD*)v40 + 592i64))(v40, 0i64, &v62);
					v41 = *(_QWORD*)v14;
					*(_DWORD*)v54 = v36;
					v55 = 3i64;
					*(_OWORD*)&v54[4] = 0ui64;
					v56 = 0;
					(*(void(__fastcall**)(__int64, _QWORD, char*))(*(_QWORD*)v41 + 584i64))(v41, 0i64, v54);
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)v14 + 320i64))(*(_QWORD*)v14, 1i64);
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)v14 + 296i64))(*(_QWORD*)v14, 1i64);
					(*(void(__fastcall**)(_QWORD, __m256*))(**(_QWORD**)v14 + 72i64))(*(_QWORD*)v14, &ymmword_140C78390);
					(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2984) + 48i64))(
						*(_QWORD*)(a1 + 2984),
						*(unsigned int*)(a1 + 1320),
						0i64);
					v42 = *(_QWORD*)(a1 + 2984);
					*(_DWORD*)v54 = 0;
					*(_DWORD*)&v54[4] = dword_140C54DD8;
					(*(void(__fastcall**)(__int64, __m256*, __m256*, char*, _DWORD))(*(_QWORD*)v42 + 80i64))(
						v42,
						&ymmword_140C78390,
						&ymmword_140C78390,
						v54,
						0);
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 448) + 24i64))(*(_QWORD*)(v6 + 448));
					sub_1407C1FE0(v80);
					(*(void(__fastcall**)(_QWORD, __m128**, __int64, __int64, int, int, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2984)
						+ 120i64))(
							*(_QWORD*)(a1 + 2984),
							v80,
							a2,
							a1 + 1344,
							(a4 != 0 ? 0x100 : 0) | 8,
							3,
							0i64,
							0i64);
					if (v80[13])
						sub_1407C2170(v80, 5, 0xFFFFFFFF);
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 448) + 32i64))(*(_QWORD*)(v6 + 448));
					(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v6 + 448) + 40i64))(
						*(_QWORD*)(v6 + 448),
						v6 + 460,
						1i64);
					if (*(_DWORD*)(v6 + 460))
						*(_DWORD*)(v6 + 456) = 0;
					(*(void(__fastcall**)(_QWORD, _QWORD, __int128*))(**(_QWORD**)v14 + 584i64))(*(_QWORD*)v14, 0i64, &v62);
					*(_DWORD*)v76 = v38;
					*(_DWORD*)&v76[4] = v39;
					(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v73);
					sub_1407C20B0((__int64)v80, v43);
				}
				else
				{
					v44 = *(_DWORD*)(v6 + 460);
					if (v44)
						*(float*)(v6 + 468) = fmaxf(0.0, fminf((float)*(int*)(v6 + 464) / (float)v44, 1.0));
				}
				*(_OWORD*)v54 = 0i64;
				(*(void(__fastcall**)(__int64, __int64, char*))(*(_QWORD*)qword_140C65670 + 624i64))(
					qword_140C65670,
					2i64,
					v54);
				v45 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6480) + 424i64))(
					*(_QWORD*)(a1 + 6480),
					150i64,
					0i64);
				v46 = *(_QWORD*)(a1 + 6480);
				v73 = 150i64;
				LODWORD(v45) = *(_DWORD*)(v45 + 20);
				v74 = 0;
				*(_DWORD*)v76 = 0;
				*(_QWORD*)&v76[4] = 3i64;
				v77 = 0;
				v75 = (int)(float)((float)(int)v45 * *(float*)(v6 + 468));
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v46 + 584i64))(v46, 0i64, &v73);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6480) + 112i64))(*(_QWORD*)(a1 + 6480));
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6480) + 320i64))(*(_QWORD*)(a1 + 6480), 1i64);
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6480) + 296i64))(*(_QWORD*)(a1 + 6480), 1i64);
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6480) + 176i64))(*(_QWORD*)(a1 + 6480), a1 + 6528);
				v47 = *a3;
				v68[1] = a3[1];
				v48 = a3[3];
				v68[0] = v47;
				v80[0] = (__m128*)v68;
				v49 = a3[2];
				v71 = HIDWORD(v48);
				v70 = 0i64;
				v69 = 0;
				v68[2] = v49;
				sub_1401AFC20((__int64*)v80, v72);
				v50 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
				v78[0] = *v50;
				v78[1] = v50[1];
				v78[2] = v50[2];
				v78[3] = v50[3];
				v51 = v50[4];
				LODWORD(v79) = v51;
				v52 = v50[5];
				v79 = 0i64;
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, v78);
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2984) + 48i64))(
					*(_QWORD*)(a1 + 2984),
					*(unsigned int*)(a1 + 1320),
					0i64);
				(*(void(__fastcall**)(_QWORD, __int128*, double*, int*, _DWORD))(**(_QWORD**)(a1 + 2984) + 80i64))(
					*(_QWORD*)(a1 + 2984),
					v68,
					v72,
					v61,
					0);
				sub_1407C1FE0(v81);
				(*(void(__fastcall**)(_QWORD, _QWORD*, __int64, __int64, int, int, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2984)
					+ 120i64))(
						*(_QWORD*)(a1 + 2984),
						v81,
						a2,
						a1 + 1344,
						a4 != 0 ? 0x100 : 0,
						3,
						0i64,
						0i64);
				if (v81[13])
					sub_1407C2170(v81, 5, 0xFFFFFFFF);
				v79 = __PAIR64__(v52, v51);
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, v78);
				sub_1407C20B0((__int64)v81, v53);
			}
		}
	}
}
// 1407CF46C: variable 'v18' is possibly undefined
// 1407CF998: variable 'v43' is possibly undefined
// 1407CFC64: variable 'v53' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C54DD8: using guessed type int dword_140C54DD8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1407CF2F0: using guessed type double var_230[8];

