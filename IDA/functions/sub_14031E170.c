//----- (000000014031E170) ----------------------------------------------------
__int64 __fastcall sub_14031E170(__int64 a1, __int64 a2, __m128* a3, __int64 a4, __m128* a5, int a6, int a7)
{
	unsigned __int8 v8; // cl
	unsigned int v11; // edx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int128 v14; // xmm0
	unsigned int i; // ebx
	__m128 v16; // xmm7
	float v17; // xmm1_4
	int v18; // ecx
	unsigned int v19; // r8d
	__m128 v20; // xmm5
	__m128 v21; // xmm2
	__m128 v22; // xmm0
	float v23; // xmm1_4
	__m128 v24; // xmm4
	float v25; // xmm7_4
	__m128 v26; // xmm6
	__int64 v27; // rax
	__m128 v28; // xmm3
	__m128 v29; // xmm0
	__int64 result; // rax
	__m128 v31; // xmm1
	__m128 v32; // xmm2
	float v33; // xmm2_4

	v8 = *(_BYTE*)(*(_QWORD*)(a1 + 1256) + 4i64);
	if (!v8)
	{
		*(_OWORD*)(a2 + 112) = *(_OWORD*)*(_QWORD*)a4;
		goto LABEL_19;
	}
	if (v8 <= 2u)
		goto LABEL_5;
	if (v8 != 3)
	{
		if (v8 != 4)
			goto LABEL_19;
	LABEL_5:
		v11 = 0;
		if (*(_QWORD*)(a4 + 8))
		{
			v12 = 0i64;
			do
			{
				++v11;
				v13 = 2 * (v12 + 7);
				v14 = *(_OWORD*)(*(_QWORD*)a4 + 16 * v12);
				v12 = v11;
				*(_OWORD*)(a2 + 8 * v13) = v14;
			} while ((unsigned __int64)v11 < *(_QWORD*)(a4 + 8));
		}
		goto LABEL_19;
	}
	for (i = 0;
		i < *(_DWORD*)(a1 + 1372);
		*(__m128*)(a2 + 16 * (v27 + 7)) = _mm_add_ps(
			_mm_mul_ps(
				_mm_shuffle_ps(v26, v26, 0),
				*(__m128*)(*(_QWORD*)a4 + 16i64 * (v19 + 3))),
			_mm_add_ps(
				v28,
				_mm_add_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v21, v21, 0),
						*(__m128*)(*(_QWORD*)a4 + 16i64 * (v19 + 1))),
					_mm_mul_ps(
						*(__m128*)(*(_QWORD*)a4 + 16i64 * v19),
						_mm_shuffle_ps(v29, v29, 0))))))
	{
		v16 = 0i64;
		v16.m128_f32[0] = (float)(int)i * *(float*)(a1 + 1352);
		v17 = v16.m128_f32[0];
		v18 = (int)v16.m128_f32[0];
		if ((int)v16.m128_f32[0] != 0x80000000 && (float)v18 != v16.m128_f32[0])
			v17 = (float)(v18 - (_mm_movemask_ps(_mm_unpacklo_ps(v16, v16)) & 1));
		v16.m128_f32[0] = v16.m128_f32[0] - v17;
		v19 = (int)(float)(v17 + 0.5);
		if (v16.m128_f32[0] == 0.0 && v19 >= *(_DWORD*)(*(_QWORD*)(a1 + 1256) + 8i64) - 3)
		{
			--v19;
			v16 = (__m128)0x3F800000u;
		}
		v20 = v16;
		v20.m128_f32[0] = v16.m128_f32[0] * v16.m128_f32[0];
		v21 = v20;
		v22 = v20;
		v21.m128_f32[0] = (float)(v16.m128_f32[0] * v16.m128_f32[0]) * v16.m128_f32[0];
		v22.m128_f32[0] = (float)(v16.m128_f32[0] * v16.m128_f32[0]) * 2.0;
		v23 = (float)(v16.m128_f32[0] * v16.m128_f32[0]) * 0.5;
		v24 = v21;
		v21.m128_f32[0] = v21.m128_f32[0] * 1.5;
		v24.m128_f32[0] = v24.m128_f32[0] * 0.5;
		v25 = v16.m128_f32[0] * 0.5;
		v26 = v24;
		v26.m128_f32[0] = v24.m128_f32[0] - v23;
		v22.m128_f32[0] = (float)(v22.m128_f32[0] - v21.m128_f32[0]) + v25;
		v27 = i++;
		v28 = _mm_mul_ps(*(__m128*)(*(_QWORD*)a4 + 16i64 * (v19 + 2)), _mm_shuffle_ps(v22, v22, 0));
		v29 = v20;
		v29.m128_f32[0] = (float)(v20.m128_f32[0] - v24.m128_f32[0]) - v25;
		v21.m128_f32[0] = (float)(v21.m128_f32[0] - (float)(v20.m128_f32[0] * 2.5)) + 1.0;
	}
LABEL_19:
	*(_DWORD*)(a2 + 24) = a6;
	result = *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 208i64);
	*(_DWORD*)(a2 + 20) = result;
	*(__m128*)(a2 + 80) = *a5;
	*(_OWORD*)(a2 + 64) = 0i64;
	if (a7)
	{
		*(_OWORD*)(a2 + 48) = 0i64;
		*(_OWORD*)(a2 + 32) = 0i64;
		*(_QWORD*)(a2 + 4) = 0i64;
	}
	if (*(_DWORD*)(a1 + 1328) > 1u && a3)
	{
		v31 = _mm_sub_ps(a3[7], *(__m128*)(a2 + 112));
		v32 = _mm_mul_ps(v31, v31);
		v33 = fsqrt(
			(float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
			+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0]);
		*(float*)(a2 + 16) = v33;
		result = *(_QWORD*)(a1 + 1256);
		*(float*)(a2 + 12) = (float)(v33 * *(float*)(result + 948)) + a3->m128_f32[3];
		*(__m128*)(a2 + 96) = _mm_sub_ps(*a5, a3[5]);
		if (fabs(*(float*)(a2 + 96)) < 0.0000099999997)
			*(_DWORD*)(a2 + 96) = 0;
		if (fabs(*(float*)(a2 + 100)) < 0.0000099999997)
			*(_DWORD*)(a2 + 100) = 0;
		if (fabs(*(float*)(a2 + 104)) < 0.0000099999997)
			*(_DWORD*)(a2 + 104) = 0;
		*(float*)(a1 + 1392) = v33 + *(float*)(a1 + 1392);
	}
	else
	{
		*(_QWORD*)(a2 + 12) = 0i64;
		*(_OWORD*)(a2 + 96) = 0i64;
	}
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

