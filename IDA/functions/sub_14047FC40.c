//----- (000000014047FC40) ----------------------------------------------------
void __fastcall sub_14047FC40(__int64 a1, int a2)
{
	int v2; // eax
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rcx
	unsigned int v7; // r15d
	__m128 v8; // xmm0
	float v9; // xmm0_4
	int* v10; // rax
	__int64 v11; // r14
	unsigned int v12; // ebx
	int* v13; // r9
	unsigned int v14; // eax
	__int64 v15; // rcx
	unsigned int v16; // r14d
	int* v17; // r9
	unsigned int v18; // ebx
	__m128 v19; // xmm6
	unsigned int v20; // eax
	__int64 v21; // rcx
	__m128 v22; // xmm7
	__m128 v23; // xmm4
	__int128 v24; // xmm8
	__m128 v25; // xmm1
	float v26; // xmm2_4
	float v27; // xmm0_4
	__m128 v28; // xmm7
	__m128 v29; // xmm1
	float v30; // xmm2_4
	float v31; // xmm0_4
	__m128 v32; // xmm4
	__m128 v33; // xmm1
	float v34; // xmm2_4
	float v35; // xmm0_4
	__m128 v36; // xmm6
	__m128 v37; // xmm2
	float v38; // xmm0_4
	_DWORD* v39; // rax
	unsigned int v40; // r14d
	unsigned int v41; // r12d
	unsigned int v42; // ebx
	__int64 v43; // r14
	__int64 i; // rbx
	int v45; // [rsp+30h] [rbp-D0h] BYREF
	__int16 v46; // [rsp+34h] [rbp-CCh]
	unsigned int v47; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v48; // [rsp+3Ch] [rbp-C4h]
	int* v49; // [rsp+48h] [rbp-B8h]
	__int64 v50; // [rsp+50h] [rbp-B0h] BYREF
	int v51; // [rsp+58h] [rbp-A8h]
	__int64 v52; // [rsp+5Ch] [rbp-A4h]
	__m128i v53; // [rsp+70h] [rbp-90h] BYREF
	int v54[4]; // [rsp+80h] [rbp-80h] BYREF
	__int128 v55; // [rsp+90h] [rbp-70h]
	int v56; // [rsp+A0h] [rbp-60h]
	int v57; // [rsp+A4h] [rbp-5Ch]
	float v58; // [rsp+A8h] [rbp-58h]
	int v59; // [rsp+ACh] [rbp-54h]
	__int128 v60; // [rsp+B0h] [rbp-50h]
	__m128 v61; // [rsp+C0h] [rbp-40h] BYREF
	__m128 v62; // [rsp+D0h] [rbp-30h]
	__m128 v63; // [rsp+E0h] [rbp-20h]
	__m128 v64; // [rsp+F0h] [rbp-10h] BYREF
	char v65[16]; // [rsp+100h] [rbp+0h] BYREF
	__int128 v66[4]; // [rsp+110h] [rbp+10h] BYREF
	__m128 v67[4]; // [rsp+150h] [rbp+50h] BYREF
	__m128* v68[10]; // [rsp+190h] [rbp+90h] BYREF

	v2 = *(_DWORD*)(a1 + 14240);
	if (v2 != a2)
	{
		if (a2)
		{
			*(_DWORD*)(a1 + 14240) = a2;
			v4 = sub_1403D90D0(qword_140C65898, a2);
			v5 = v4;
			if (v4)
			{
				v6 = *(_QWORD*)(v4 + 5864);
				if (v6)
				{
					if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 848i64))(v6, 193i64)
						&& *(_QWORD*)(qword_140C65898 + 25744) == a1)
					{
						(*(void(__fastcall**)(_QWORD, __int64, __m128*, _QWORD))(**(_QWORD**)(v5 + 5864) + 888i64))(
							*(_QWORD*)(v5 + 5864),
							193i64,
							&v61,
							0i64);
						v7 = 366;
						v8 = _mm_sub_ps(v64, *(__m128*)(v5 + 4576));
						v9 = fabs(_mm_shuffle_ps(v8, v8, 85).m128_f32[0]);
						if (v9 < 1.2)
						{
							if (v9 < 1.0)
							{
								if (v9 < 0.80000001)
								{
									if (v9 >= 0.60000002)
										v7 = 367;
								}
								else
								{
									v7 = 368;
								}
							}
							else
							{
								v7 = 369;
							}
						}
						else
						{
							v7 = 370;
						}
						v48 = 8i64;
						v10 = sub_14018C320(0i64, 0x240ui64, 8u);
						*v10 = 1;
						v47 = 1;
						v10[2] = 0;
						v49 = v10;
						sub_14079A5D0(&v47, &v64, 0);
						v53 = 0i64;
						sub_1401C9800(&v45, &v53);
						v11 = v47;
						v12 = v48;
						if (v47 == (_DWORD)v48)
						{
							if ((_DWORD)v48)
								v12 = 2 * v48;
							else
								v12 = 8;
							LODWORD(v48) = v12;
							v13 = sub_14018C320((__int64)v49, 72i64 * v12, 8u);
							v49 = v13;
						}
						else
						{
							v13 = v49;
						}
						v14 = v45;
						v15 = 9 * v11;
						v53 = 0i64;
						v13[2 * v15] = 8;
						v13[2 * v15 + 2] = v14;
						LOWORD(v13[2 * v15 + 3]) = v46;
						v13[2 * v15 + 4] = 0;
						v16 = v11 + 1;
						sub_1401C9800(&v45, &v53);
						if (v16 == v12)
						{
							if (v12)
								v18 = 2 * v12;
							else
								v18 = 8;
							LODWORD(v48) = v18;
							v17 = sub_14018C320((__int64)v17, 72i64 * v18, 8u);
							v49 = v17;
						}
						v19 = (__m128)0x40400000u;
						v20 = v45;
						v21 = 9i64 * v16;
						v17[2 * v21] = 11;
						v17[2 * v21 + 2] = v20;
						v22 = (__m128)0x40400000u;
						v23 = (__m128)0x40400000u;
						LOWORD(v17[2 * v21 + 3]) = v46;
						v17[2 * v21 + 4] = 0;
						v47 = v16 + 1;
						v24 = xmmword_140C78440;
						v25 = _mm_mul_ps(v63, v63);
						v26 = (float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
							+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
						v27 = fsqrt(v26);
						v22.m128_f32[0] = fmaxf(
							(float)((float)(3.0 - (float)((float)(v26 * (float)(1.0 / v27)) * (float)(1.0 / v27)))
								* 0.5)
							* (float)(1.0 / v27),
							0.0);
						v28 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v63);
						v29 = _mm_mul_ps(v62, v62);
						v30 = (float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0])
							+ _mm_shuffle_ps(v29, v29, 170).m128_f32[0];
						v31 = fsqrt(v30);
						v23.m128_f32[0] = fmaxf(
							(float)((float)(3.0 - (float)((float)(v30 * (float)(1.0 / v31)) * (float)(1.0 / v31)))
								* 0.5)
							* (float)(1.0 / v31),
							0.0);
						v32 = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v62);
						v33 = _mm_mul_ps(v61, v61);
						v34 = (float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
							+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
						v35 = fsqrt(v34);
						v19.m128_f32[0] = fmaxf(
							(float)((float)(3.0 - (float)((float)(v34 * (float)(1.0 / v35)) * (float)(1.0 / v35)))
								* 0.5)
							* (float)(1.0 / v35),
							0.0);
						v36 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v61);
						v66[0] = (__int128)_mm_unpacklo_ps(
							_mm_unpacklo_ps(v36, _mm_shuffle_ps(v36, v36, 170)),
							_mm_unpacklo_ps(_mm_shuffle_ps(v36, v36, 85), (__m128)0i64));
						v66[1] = (__int128)_mm_unpacklo_ps(
							_mm_unpacklo_ps(v32, _mm_shuffle_ps(v32, v32, 170)),
							_mm_unpacklo_ps(_mm_shuffle_ps(v32, v32, 85), (__m128)0i64));
						v37 = _mm_shuffle_ps((__m128)xmmword_140C78440, (__m128)xmmword_140C78440, 170);
						v66[2] = (__int128)_mm_unpacklo_ps(
							_mm_unpacklo_ps(v28, _mm_shuffle_ps(v28, v28, 170)),
							_mm_unpacklo_ps(_mm_shuffle_ps(v28, v28, 85), (__m128)0i64));
						v66[3] = (__int128)_mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128)xmmword_140C78440, v37),
							_mm_unpacklo_ps(
								_mm_shuffle_ps((__m128)xmmword_140C78440, (__m128)xmmword_140C78440, 85),
								(__m128)0x3F800000u));
						v28.m128_i32[0] = sub_1408FE3D0(COERCE_DOUBLE(1078530011i64));
						v38 = sub_1408FC950(COERCE_DOUBLE(1078530011i64));
						v53.m128i_i64[0] = (__int64)v66;
						v56 = v28.m128_i32[0];
						v60 = v24;
						*(float*)v54 = v38;
						v58 = v38;
						*(float*)&v54[2] = -v28.m128_f32[0];
						v68[0] = (__m128*)v66;
						v53.m128i_i64[1] = (__int64)v54;
						v54[1] = 0;
						v55 = xmmword_140B7A4B0;
						v68[1] = (__m128*)v54;
						v54[3] = 0;
						v57 = 0;
						v59 = 0;
						sub_1401AFB10(v68, v67);
						v39 = (_DWORD*)sub_1401B2ED0((__int64)v65, v67[0].m128_f32);
						sub_14079A780(&v47, v39, 0);
						v40 = dword_140C636A8;
						v45 = dword_140C636A8;
						if (*(_DWORD*)(a1 + 3408) || *(_DWORD*)(a1 + 128) == 18)
						{
							v41 = v47;
							v42 = 0;
							if (v47)
							{
								v43 = (__int64)v49;
								while ((int)sub_1405B4AB0(a1, (unsigned int*)&v45, (unsigned int*)(v43 + 72i64 * v42), 0i64, 0i64) >= 0)
								{
									if (++v42 >= v41)
									{
										v40 = v45;
										goto LABEL_38;
									}
								}
							}
							else
							{
							LABEL_38:
								sub_1405B4F50(a1, v40);
								sub_1405B5070(a1, v40);
								sub_1405B82A0(a1, v40, *(double*)v37.m128_u64);
								for (i = *(_QWORD*)(a1 + 3848); i; i = *(_QWORD*)(i + 3864))
									sub_1405B4EF0(i, v40, *(double*)v37.m128_u64);
							}
						}
						sub_14057A190(qword_140C65898, &v47);
						v52 = 0i64;
						v50 = v7;
						v51 = 0;
						HIDWORD(v50) = sub_1401AE6A0(0, 0xFFFF);
						HIDWORD(v52) = 1;
						sub_1404739B0(a1, v50, v51, HIDWORD(v50), v52, 1);
						sub_1403F4900(qword_140C65898, 0x37Eu, (__int64)&v50);
						sub_14079A4F0((__int64)&v47);
						sub_14018B900((__int64)v49, 0);
					}
				}
			}
		}
		else
		{
			if (v2 && *(_DWORD*)(a1 + 460) && *(_QWORD*)(qword_140C65898 + 25744) == a1)
				sub_1403A2550(qword_140C65898);
			*(_DWORD*)(a1 + 14240) = 0;
		}
	}
}
// 14047FEC5: variable 'v17' is possibly undefined
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 14047FC40: using guessed type __m128 var_100[4];
// 14047FC40: using guessed type char var_150[16];

