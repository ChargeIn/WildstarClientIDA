//----- (0000000140871D50) ----------------------------------------------------
__int64 __fastcall sub_140871D50(__int64 a1, float* a2, unsigned int a3, unsigned int a4)
{
	__int64 v5; // r14
	unsigned int v6; // ebp
	float* v7; // rsi
	__int64 v8; // rbx
	unsigned int v9; // eax
	__int64 v10; // rcx
	__int64 result; // rax
	int v12; // r8d
	__m128 v13; // xmm6
	__m128 v14; // xmm8
	float* v15; // rdx
	__m128 v16; // xmm7
	__m128 v17; // xmm6
	__m128 v18; // xmm8
	__m128 v19; // xmm5
	__m128 v20; // xmm5
	__m128 v21; // xmm9
	__m128 v22; // xmm10
	__m128 v23; // xmm11
	__m128 v24; // xmm12
	__m128 v25; // xmm13
	__m128 v26; // xmm14
	__m128 v27; // xmm15
	__m128 v28; // xmm4
	__m128 v29; // xmm2
	__m128 v30; // xmm2
	__m128 v31; // xmm5
	__int32 v32; // [rsp+20h] [rbp-E8h]
	__int32 v33; // [rsp+30h] [rbp-D8h]
	__int32 v34; // [rsp+40h] [rbp-C8h]
	__int32 v35; // [rsp+50h] [rbp-B8h]

	v5 = a4;
	v6 = a3;
	v7 = a2;
	if (((unsigned __int8)a2 & 0xF) != 0)
	{
		v8 = a3;
		v9 = (16 - ((unsigned __int8)a2 & 0xFu)) >> 2;
		if (v9 < a3)
			v8 = v9;
		sub_140871FC0(a1, a2, v8, a4);
		v7 += v8;
		v6 -= v8;
	}
	v10 = *(_QWORD*)(a1 + 160);
	result = 2 * v5;
	v12 = v6 & 3;
	v13 = (__m128) * (unsigned int*)(v10 + 16 * v5 + 4);
	v14 = (__m128) * (unsigned int*)(v10 + 16 * v5 + 8);
	v15 = &v7[v6 - v12];
	v16 = _mm_shuffle_ps((__m128) * (unsigned int*)(v10 + 16 * v5), (__m128) * (unsigned int*)(v10 + 16 * v5), 0);
	v17 = _mm_shuffle_ps(v13, v13, 0);
	v18 = _mm_shuffle_ps(v14, v14, 0);
	v19 = (__m128) * (unsigned int*)(v10 + 16 * v5 + 12);
	v32 = v16.m128_i32[0];
	v33 = v17.m128_i32[0];
	v34 = v18.m128_i32[0];
	v20 = _mm_shuffle_ps(v19, v19, 0);
	v35 = v20.m128_i32[0];
	if (v7 < v15)
	{
		v21 = *(__m128*)(a1 + 64);
		v22 = *(__m128*)(a1 + 80);
		v23 = *(__m128*)(a1 + 112);
		v24 = *(__m128*)(a1 + 96);
		v25 = *(__m128*)(a1 + 16);
		v26 = *(__m128*)a1;
		v27 = *(__m128*)(a1 + 32);
		do
		{
			v28 = *(__m128*)v7;
			v7 += 4;
			v29 = _mm_mul_ps(v22, v17);
			v17 = _mm_shuffle_ps(v28, v28, 170);
			v30 = _mm_add_ps(v29, _mm_mul_ps(v21, v16));
			v16 = _mm_shuffle_ps(v28, v28, 255);
			v31 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(_mm_add_ps(_mm_mul_ps(v20, v23), _mm_mul_ps(v24, v18)), _mm_mul_ps(v25, v17)),
					_mm_add_ps(_mm_mul_ps(v26, v28), v30)),
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), *(__m128*)(a1 + 48)),
					_mm_mul_ps(_mm_shuffle_ps(v28, v28, 85), v27)));
			*((__m128*)v7 - 1) = v31;
			v18 = _mm_shuffle_ps(v31, v31, 255);
			v20 = _mm_shuffle_ps(v31, v31, 170);
		} while (v7 < v15);
		v35 = v20.m128_i32[0];
		v33 = v17.m128_i32[0];
		v32 = v16.m128_i32[0];
		v34 = v18.m128_i32[0];
	}
	*(_DWORD*)(v10 + 16 * v5) = v32;
	*(_DWORD*)(v10 + 16 * v5 + 4) = v33;
	*(_DWORD*)(v10 + 16 * v5 + 8) = v34;
	*(_DWORD*)(v10 + 16 * v5 + 12) = v35;
	if ((v6 & 3) != 0)
		return sub_140871FC0(a1, v7, v12, v5);
	return result;
}

