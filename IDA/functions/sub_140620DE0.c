//----- (0000000140620DE0) ----------------------------------------------------
__int64 __fastcall sub_140620DE0(__m128* a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // r14
	__int64 v5; // r13
	double v6; // xmm6_8
	float v7; // xmm8_4
	float v8; // xmm9_4
	float v9; // xmm7_4
	float v10; // xmm0_4
	__int64* v11; // rcx
	__int64 v12; // rdx
	__m128 v13; // xmm10
	__int64 v14; // rax
	__m128 v15; // xmm7
	__m128 v16; // xmm8
	__m128 v17; // xmm9
	_QWORD* i; // rsi
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64* v23; // rbx
	__int64 v24; // rdi
	__int64 v25; // rax
	unsigned __int64 v26; // rbx
	int v27; // edx
	__m128 v28; // xmm12
	float v29; // xmm11_4
	float v30; // xmm5_4
	float v31; // xmm7_4
	float v32; // xmm8_4
	float v33; // xmm2_4
	float v34; // xmm6_4
	float v35; // xmm10_4
	float v36; // xmm9_4
	float v37; // xmm4_4
	float v38; // xmm9_4
	float v39; // xmm7_4
	float v40; // xmm11_4
	unsigned __int32 v41; // xmm0_4
	__int32 v42; // xmm1_4
	__int64 v43; // rax
	__int64 v44; // rbx
	__m128 v45; // [rsp+20h] [rbp-E0h] BYREF
	__m128 v46; // [rsp+30h] [rbp-D0h]
	__m128 v47; // [rsp+40h] [rbp-C0h]
	__m128 v48; // [rsp+50h] [rbp-B0h]
	__m128 v49; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v50; // [rsp+70h] [rbp-90h]
	__m128 v51; // [rsp+80h] [rbp-80h]
	__m128 v52; // [rsp+90h] [rbp-70h]
	__int128 v53[3]; // [rsp+A0h] [rbp-60h] BYREF
	__m128 v54; // [rsp+D0h] [rbp-30h]
	__int64 v55; // [rsp+E0h] [rbp-20h]
	__int64 v56[10]; // [rsp+F0h] [rbp-10h] BYREF

	result = a1[56].m128_u32[2];
	if ((_DWORD)result == a2)
	{
		result = sub_1403D90D0(qword_140C65898, result);
		v4 = result;
		if (result)
		{
			if (*(_QWORD*)(result + 5864))
			{
				if (a1[8].m128_u64[1])
				{
					result = sub_140237680(a1[62].m128_u32[1]);
					v5 = result;
					if (result)
					{
						*(_QWORD*)&v6 = (unsigned int)sub_14046BEC0(v4, a1[62].m128_u32[2])[3];
						*(float*)&v6 = (float)(*(float*)&v6 * 6.2831855) + a1[92].m128_f32[3];
						v7 = sub_1408FE3D0(0.0);
						v8 = sub_1408FC950(0.0);
						v9 = sub_1408FE3D0(v6);
						v10 = sub_1408FC950(v6);
						v11 = *(__int64**)(v4 + 5864);
						v12 = *(unsigned int*)(v5 + 68);
						v13 = (__m128)xmmword_140C78440;
						v14 = *v11;
						v46.m128_i32[3] = 0;
						v45.m128_f32[0] = v8 * v10;
						v45.m128_f32[1] = v7 * v10;
						v46.m128_f32[0] = (float)((float)(v8 * v9) * v7) - (float)(v7 * v8);
						v45.m128_u64[1] = COERCE_UNSIGNED_INT(-v9);
						v46.m128_f32[1] = (float)((float)(v7 * v9) * v7) + (float)(v8 * v8);
						v46.m128_f32[2] = v10 * v7;
						v47.m128_f32[0] = (float)(v7 * v7) + (float)((float)(v8 * v9) * v8);
						v47.m128_u64[1] = COERCE_UNSIGNED_INT(v10 * v8);
						v47.m128_f32[1] = (float)((float)(v7 * v9) * v8) - (float)(v8 * v7);
						result = (*(__int64(__fastcall**)(__int64*, __int64))(v14 + 848))(v11, v12);
						if ((_DWORD)result)
						{
							(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, __int64))(**(_QWORD**)(v4 + 5864) + 888i64))(
								*(_QWORD*)(v4 + 5864),
								*(unsigned int*)(v5 + 68),
								v53,
								1i64);
							v54.m128_u64[0] = 0i64;
							v54.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
							v56[0] = (__int64)v53;
							result = sub_1401AFC20(v56, (double*)v49.m128_u64);
							v15 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v45, v45, 85), v50),
										_mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v49)),
									_mm_mul_ps(_mm_shuffle_ps(v45, v45, 170), v51)),
								_mm_mul_ps(_mm_shuffle_ps(v45, v45, 255), v52));
							v16 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v46, v46, 85), v50),
										_mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v49)),
									_mm_mul_ps(_mm_shuffle_ps(v46, v46, 170), v51)),
								_mm_mul_ps(_mm_shuffle_ps(v46, v46, 255), v52));
							v17 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v47, v47, 85), v50),
										_mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v49)),
									_mm_mul_ps(_mm_shuffle_ps(v47, v47, 170), v51)),
								_mm_mul_ps(_mm_shuffle_ps(v47, v47, 255), v52));
							v13 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v13, v13, 85), v50),
										_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v49)),
									_mm_mul_ps(_mm_shuffle_ps(v13, v13, 170), v51)),
								_mm_mul_ps(_mm_shuffle_ps(v13, v13, 255), v52));
						}
						else
						{
							v17 = v47;
							v16 = v46;
							v15 = v45;
						}
						for (i = (_QWORD*)a1[8].m128_u64[1]; i; i = (_QWORD*)i[3])
						{
							if (*i)
							{
								result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*i + 328i64))(*i);
								if (result)
								{
									v19 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*i + 328i64))(*i);
									result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 944i64))(v19);
									if ((_DWORD)result)
									{
										v20 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*i + 328i64))(*i);
										result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 960i64))(v20);
										if (*(_QWORD*)(v4 + 5864) == result)
										{
											v21 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*i + 328i64))(*i);
											(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 936i64))(v21);
											v22 = *i;
											v53[0] = (__int128)v15;
											v53[1] = (__int128)v16;
											v53[2] = (__int128)v17;
											v54 = v13;
											v55 = 0i64;
											(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v22 + 320i64))(v22, v53);
											result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v4 + 5864) + 848i64))(
												*(_QWORD*)(v4 + 5864),
												*(unsigned int*)(v5 + 68));
											if ((_DWORD)result)
											{
												v23 = *(__int64**)(v4 + 5864);
												v24 = *v23;
												v25 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*i + 328i64))(*i);
												result = (*(__int64(__fastcall**)(__int64*, _QWORD, __int64))(v24 + 896))(
													v23,
													*(unsigned int*)(v5 + 68),
													v25);
											}
										}
									}
								}
							}
						}
					}
				}
				v26 = a1[5].m128_u64[0];
				if (v26)
				{
					result = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v26 + 968i64))(a1[5].m128_u64[0]);
					if (result != v26)
					{
						v27 = a1[56].m128_i32[2];
						v28 = a1[40];
						v46.m128_i32[3] = 0;
						v47.m128_i32[3] = 0;
						v29 = _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
						v30 = v28.m128_f32[0] * (float)(v28.m128_f32[0] * 2.0);
						v31 = _mm_shuffle_ps(v28, v28, 255).m128_f32[0];
						v32 = v31 * (float)(v29 * 2.0);
						v33 = v28.m128_f32[0] * (float)(v29 * 2.0);
						v34 = v29 * (float)(v29 * 2.0);
						v35 = v31 * (float)(v28.m128_f32[0] * 2.0);
						v36 = _mm_shuffle_ps(v28, v28, 170).m128_f32[0];
						v37 = v36 * 2.0;
						v38 = v36 * (float)(v36 * 2.0);
						v39 = v31 * v37;
						v45.m128_f32[0] = (float)(1.0 - v34) - v38;
						v28.m128_f32[0] = v28.m128_f32[0] * v37;
						v40 = v29 * v37;
						v45.m128_f32[1] = v33 + v39;
						v45.m128_u64[1] = COERCE_UNSIGNED_INT(v28.m128_f32[0] - v32);
						v46.m128_f32[1] = (float)(1.0 - v30) - v38;
						v48.m128_i32[0] = a1[22].m128_i32[0];
						v41 = a1[22].m128_u32[2];
						v46.m128_f32[2] = v40 + v35;
						v42 = a1[22].m128_i32[1];
						v48.m128_u64[1] = v41 | 0x3F80000000000000i64;
						v46.m128_f32[0] = v33 - v39;
						v47.m128_f32[0] = v28.m128_f32[0] + v32;
						v47.m128_f32[1] = v40 - v35;
						v47.m128_f32[2] = (float)(1.0 - v30) - v34;
						v48.m128_i32[1] = v42;
						v43 = sub_1403D90D0(qword_140C65898, v27);
						if (v43)
						{
							v44 = *(_QWORD*)(v43 + 5864);
							if (v44)
							{
								if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v44 + 848i64))(
									v44,
									a1[59].m128_u32[0]))
								{
									(*(void(__fastcall**)(__int64, _QWORD, __int128*, __int64))(*(_QWORD*)v44 + 888i64))(
										v44,
										a1[59].m128_u32[0],
										v53,
										1i64);
									v56[0] = (__int64)v53;
									sub_1401AFC20(v56, (double*)v49.m128_u64);
									v45 = _mm_add_ps(
										_mm_add_ps(
											_mm_add_ps(
												_mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v49),
												_mm_mul_ps(_mm_shuffle_ps(v45, v45, 85), v50)),
											_mm_mul_ps(_mm_shuffle_ps(v45, v45, 170), v51)),
										_mm_mul_ps(_mm_shuffle_ps(v45, v45, 255), v52));
									v46 = _mm_add_ps(
										_mm_add_ps(
											_mm_add_ps(
												_mm_mul_ps(_mm_shuffle_ps(v46, v46, 85), v50),
												_mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v49)),
											_mm_mul_ps(_mm_shuffle_ps(v46, v46, 170), v51)),
										_mm_mul_ps(_mm_shuffle_ps(v46, v46, 255), v52));
									v47 = _mm_add_ps(
										_mm_add_ps(
											_mm_add_ps(
												_mm_mul_ps(_mm_shuffle_ps(v47, v47, 85), v50),
												_mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v49)),
											_mm_mul_ps(_mm_shuffle_ps(v47, v47, 170), v51)),
										_mm_mul_ps(_mm_shuffle_ps(v47, v47, 255), v52));
									v48 = _mm_add_ps(
										_mm_add_ps(
											_mm_add_ps(
												_mm_mul_ps(_mm_shuffle_ps(v48, v48, 85), v50),
												_mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v49)),
											_mm_mul_ps(_mm_shuffle_ps(v48, v48, 170), v51)),
										_mm_mul_ps(_mm_shuffle_ps(v48, v48, 255), v52));
								}
							}
						}
						return (*(__int64(__fastcall**)(unsigned __int64, __m128*))(*(_QWORD*)a1[5].m128_u64[0] + 72i64))(
							a1[5].m128_u64[0],
							&v45);
					}
				}
			}
		}
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78440: using guessed type __int128 xmmword_140C78440;

