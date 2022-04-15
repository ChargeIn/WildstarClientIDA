//----- (000000014031E6B0) ----------------------------------------------------
__int64 __fastcall sub_14031E6B0(__int64 a1, __m128* a2, __int64 a3, __int64 a4, float a5)
{
	__m128 v5; // xmm0
	_QWORD* v6; // rsi
	__int64 v7; // r14
	unsigned int v8; // r11d
	unsigned int v9; // ebp
	__m128 v12; // xmm10
	__int64 v13; // r13
	int v14; // r10d
	__int64 v15; // r8
	__int64 v16; // r9
	unsigned int* v17; // rdx
	__int64 v18; // rbx
	__int64 v19; // rax
	float v20; // xmm7_4
	float v21; // xmm5_4
	__m128 v22; // xmm4
	float v23; // xmm5_4
	__m128 v24; // xmm4
	float v25; // xmm4_4
	float v26; // xmm0_4
	__m128 v27; // xmm2
	__m128 v28; // xmm4
	__m128 v29; // xmm3
	__m128 v30; // xmm0
	float v31; // xmm3_4
	__m128 v32; // xmm0
	__m128 v33; // xmm4
	__m128 v34; // xmm1
	__int64 result; // rax
	__int64 v36; // rcx
	__m128 v37; // xmm0
	__m128 v38; // [rsp+20h] [rbp-B8h] BYREF

	v6 = *(_QWORD**)(a1 + 40);
	v7 = v6[8];
	v8 = 0;
	v9 = *(_DWORD*)(v7 + 776);
	v12 = 0i64;
	v13 = a1;
	v14 = 1;
	if (v9)
	{
		v15 = 0i64;
		v16 = 0i64;
		v17 = (unsigned int*)(a4 + 8);
		do
		{
			if ((*(_WORD*)(*(_QWORD*)(a1 + 8) + 104i64) & (unsigned __int16)v14) != 0)
			{
				v18 = v6[177];
				v19 = *(_QWORD*)(v7 + 784);
				v20 = *(float*)(v18 + v15 + 28);
				v21 = *(float*)(v18 + v15 + 48) - v20;
				if (*(_WORD*)(v19 + v16 + 2))
				{
					if (*(_WORD*)(v19 + v16 + 2) == 1)
					{
						v24 = _mm_mul_ps(a2[5], *(__m128*)(a4 + 16i64 * v8));
						v25 = (float)((float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0])
							+ _mm_shuffle_ps(v24, v24, 170).m128_f32[0])
							+ *(float*)(a4 + 16i64 * v8 + 12);
						v26 = fabs(v25);
						if (v21 == 0.0)
						{
							if (v26 >= v20)
								v23 = 0.0;
							else
								v23 = 1.0;
						}
						else
						{
							v23 = fmaxf(0.0, fminf((float)(*(float*)(v18 + v15 + 48) - v26) / v21, 1.0));
						}
						v5 = (__m128) * v17;
						v27 = _mm_unpacklo_ps((__m128) * (v17 - 1), (__m128)0i64);
						if (v25 >= 0.0)
							v22 = _mm_sub_ps((__m128)0i64, _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (v17 - 2), v5), v27));
						else
							v22 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (v17 - 2), v5), v27);
					}
					else
					{
						v22 = 0i64;
						v23 = 0.0;
					}
				}
				else
				{
					v28 = _mm_sub_ps(*(__m128*)(a3 + 16i64 * v8), a2[5]);
					v29 = _mm_mul_ps(v28, v28);
					v30 = _mm_shuffle_ps(v29, v29, 85);
					v31 = fsqrt((float)(v29.m128_f32[0] + v30.m128_f32[0]) + _mm_shuffle_ps(v29, v29, 170).m128_f32[0]);
					if (v21 == 0.0)
					{
						if (v31 >= v20)
							v23 = 0.0;
						else
							v23 = 1.0;
					}
					else
					{
						v30 = (__m128)0x3F800000u;
						v23 = 1.0 - fmaxf(0.0, fminf((float)(v31 - v20) / v21, 1.0));
					}
					v30.m128_f32[0] = v31;
					v5 = _mm_shuffle_ps(v30, v30, 0);
					v22 = _mm_div_ps(v28, v5);
				}
				v5.m128_f32[0] = v23;
				v32 = _mm_shuffle_ps(v5, v5, 0);
				v33 = _mm_mul_ps(v22, v32);
				v32.m128_f32[0] = a5;
				v34 = _mm_mul_ps(
					_mm_mul_ps(
						_mm_shuffle_ps((__m128) * (unsigned int*)(v18 + v15 + 8), (__m128) * (unsigned int*)(v18 + v15 + 8), 0),
						v33),
					_mm_shuffle_ps(v32, v32, 0));
				v5 = v12;
				v12 = _mm_add_ps(v34, v12);
			}
			v14 = __ROL4__(v14, 1);
			++v8;
			v16 += 80i64;
			v17 += 4;
			v15 += 72i64;
		} while (v8 < v9);
		v13 = a1;
	}
	result = *(_QWORD*)(v13 + 8);
	if (*(float*)(result + 48) > 0.0 && *(_DWORD*)(result + 8) == 2)
	{
		result = v6[2];
		v36 = *(_QWORD*)(result + 488);
		if (v36)
		{
			v37 = ((__m128 (__fastcall*)(__int64, __m128*, __m128*, __int64)) * (_QWORD*)(*(_QWORD*)v36 + 448i64))(
				v36,
				&a2[5],
				&v38,
				3i64);
			result = *(_QWORD*)(v13 + 8);
			v37.m128_f32[0] = a5;
			v12 = _mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps((__m128) * (unsigned int*)(result + 48), (__m128) * (unsigned int*)(result + 48), 0),
					_mm_mul_ps(v38, _mm_shuffle_ps(v37, v37, 0))),
				v12);
		}
	}
	a2[4] = _mm_add_ps(a2[4], v12);
	return result;
}
// 14031E8D8: variable 'v5' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

