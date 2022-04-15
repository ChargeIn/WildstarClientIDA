//----- (00000001407D6920) ----------------------------------------------------
__int64 __fastcall sub_1407D6920(__int64 a1, __int64 a2, __int128* a3)
{
	__int64 result; // rax
	float* v6; // rdi
	__int128 v7; // xmm0
	__int128 v8; // xmm1
	__int128 v9; // xmm0
	__m128* v10; // r8
	__m128 v11; // xmm7
	__m128 v12; // xmm1
	float v13; // xmm2_4
	__m128 v14; // xmm1
	__m128i v15; // xmm1
	__m128 v16; // xmm1
	float v17; // xmm2_4
	__m128 v18; // xmm1
	__m128i v19; // xmm1
	__m128 v20; // xmm2
	__m128i v21; // xmm7
	double v22; // xmm7_8
	double v23; // xmm6_8
	float v24; // xmm9_4
	float v25; // xmm10_4
	float v26; // xmm8_4
	float v27; // xmm5_4
	__m128 v28; // [rsp+20h] [rbp-E0h] BYREF
	__m128 v29; // [rsp+30h] [rbp-D0h]
	__m128 v30; // [rsp+40h] [rbp-C0h]
	__int128 v31; // [rsp+50h] [rbp-B0h]
	__m128* v32; // [rsp+60h] [rbp-A0h]
	__int128* v33; // [rsp+68h] [rbp-98h]
	__int128 v34[3]; // [rsp+70h] [rbp-90h] BYREF
	int v35; // [rsp+A0h] [rbp-60h]
	__int64 v36; // [rsp+A4h] [rbp-5Ch]
	int v37; // [rsp+ACh] [rbp-54h]
	__m128* v38[10]; // [rsp+B0h] [rbp-50h] BYREF

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 176i64))(a1);
	if ((result & 1) != 0)
	{
		if (*(_QWORD*)(a1 + 424))
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 184i64))(a1);
			if ((_DWORD)result != -1 && *(_QWORD*)(a1 + 288) > (unsigned __int64)(unsigned int)result)
			{
				v6 = (float*)(*(_QWORD*)(a1 + 280) + 32i64 * (unsigned int)result);
				if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)v6 + 848i64))(*(_QWORD*)v6, 9i64))
				{
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)v6 + 880i64))(*(_QWORD*)v6, 9i64);
					v7 = *a3;
					v34[1] = a3[1];
					v8 = a3[3];
					v34[0] = v7;
					v38[0] = (__m128*)v34;
					v9 = a3[2];
					v37 = HIDWORD(v8);
					v36 = 0i64;
					v35 = 0;
					v34[2] = v9;
					sub_1401AFC20((__int64*)v38, (double*)v34);
					v32 = v10;
					v38[0] = v10;
					v33 = v34;
					v38[1] = (__m128*)v34;
					sub_1401AFB10(v38, &v28);
					v11 = (__m128)0x40400000u;
					v12 = _mm_mul_ps(v28, v28);
					v13 = (float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
						+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
					v14 = (__m128)0x40400000u;
					*(float*)&v9 = fsqrt(v13);
					v14.m128_f32[0] = fmaxf(
						(float)((float)(3.0
							- (float)((float)(v13 * (float)(1.0 / *(float*)&v9))
								* (float)(1.0 / *(float*)&v9)))
							* 0.5)
						* (float)(1.0 / *(float*)&v9),
						0.0);
					v15 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v28);
					v28.m128_u64[0] = v15.m128i_i64[0];
					v28.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
					v16 = _mm_mul_ps(v29, v29);
					v17 = (float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
						+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
					v18 = (__m128)0x40400000u;
					*(float*)&v9 = fsqrt(v17);
					v18.m128_f32[0] = fmaxf(
						(float)((float)(3.0
							- (float)((float)(v17 * (float)(1.0 / *(float*)&v9))
								* (float)(1.0 / *(float*)&v9)))
							* 0.5)
						* (float)(1.0 / *(float*)&v9),
						0.0);
					v19 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v29);
					v29.m128_u64[0] = v19.m128i_i64[0];
					v29.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v19, 8));
					v20 = _mm_mul_ps(v30, v30);
					*(_QWORD*)((char*)&v31 + 4) = 0i64;
					LODWORD(v31) = 0;
					v20.m128_f32[0] = (float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
						+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
					*(float*)&v9 = 1.0 / fsqrt(v20.m128_f32[0]);
					v11.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v20.m128_f32[0] * *(float*)&v9) * *(float*)&v9))
							* 0.5)
						* *(float*)&v9,
						0.0);
					v21 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v30);
					v30.m128_u64[0] = v21.m128i_i64[0];
					v30.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
				}
				else
				{
					*(_QWORD*)&v22 = (unsigned int)dword_140C3B438;
					*(float*)&v22 = *(float*)&dword_140C3B438 * 0.0055555557;
					v23 = v22;
					*(float*)&v22 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v6[3];
					*(float*)&v23 = *(float*)&v23 * v6[2];
					v24 = sub_1408FE3D0(v23);
					v25 = sub_1408FC950(v23);
					LODWORD(v23) = sub_1408FE3D0(v22);
					v26 = sub_1408FC950(v22);
					LODWORD(v22) = sub_1408FE3D0(0.0);
					v27 = sub_1408FC950(0.0);
					v28.m128_f32[1] = *(float*)&v22 * v26;
					v28.m128_f32[0] = v27 * v26;
					v28.m128_u64[1] = COERCE_UNSIGNED_INT(-*(float*)&v23);
					v29.m128_f32[0] = (float)((float)(v27 * *(float*)&v23) * v24) - (float)(*(float*)&v22 * v25);
					v29.m128_f32[1] = (float)(v27 * v25) + (float)((float)(*(float*)&v22 * *(float*)&v23) * v24);
					v30.m128_f32[0] = (float)((float)(v27 * *(float*)&v23) * v25) + (float)(*(float*)&v22 * v24);
					v29.m128_u64[1] = COERCE_UNSIGNED_INT(v26 * v24);
					v30.m128_u64[1] = COERCE_UNSIGNED_INT(v26 * v25);
					v31 = xmmword_140C78440;
					v30.m128_f32[1] = (float)((float)(*(float*)&v22 * *(float*)&v23) * v25) - (float)(v27 * v24);
				}
				(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 424) + 72i64))(*(_QWORD*)(a1 + 424), &v28);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 424) + 112i64))(*(_QWORD*)(a1 + 424));
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 424) + 320i64))(*(_QWORD*)(a1 + 424), 1i64);
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 424) + 296i64))(*(_QWORD*)(a1 + 424), 1i64);
				return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 424) + 176i64))(
					*(_QWORD*)(a1 + 424),
					a1 + 2736);
			}
		}
	}
	return result;
}
// 1407D6A2B: variable 'v10' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C78440: using guessed type __int128 xmmword_140C78440;

