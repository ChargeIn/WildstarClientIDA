//----- (00000001408E8C80) ----------------------------------------------------
__int64 __fastcall sub_1408E8C80(int** a1, __m128* a2, __int64 a3)
{
	int* v4; // rcx
	__int64 v6; // rsi
	int* v7; // r10
	int* v8; // rbx
	unsigned int i; // r9d
	__int64 v10; // rdx
	__m128 v11; // xmm3
	__int64 v12; // r8
	__int64 v13; // rax
	__m128 v14; // xmm0
	__m128 v15; // xmm4
	__m128 v16; // xmm3
	__m128 v17; // xmm2
	__m128 v18; // xmm4
	__int64 result; // rax
	__int64 v20; // [rsp+50h] [rbp+8h]

	v4 = *a1;
	v6 = *v4;
	sub_1408E90D0((__int64)v4, a2, (__int64)a1[1]);
	v7 = a1[1];
	v8 = a1[2];
	for (i = 1; i <= (int)v6 / 2; *(__m128*)(a3 + 8 * v12) = _mm_shuffle_ps(v18, v18, 78))
	{
		v10 = i;
		v11 = *(__m128*) & v7[2 * i];
		v12 = (unsigned int)v6 - i - 1;
		v13 = i - 1;
		i += 2;
		v14 = _mm_mul_ps(_mm_shuffle_ps(*(__m128*) & v7[2 * v12], *(__m128*) & v7[2 * v12], 78), (__m128)xmmword_1409A9FA0);
		v15 = _mm_add_ps(v14, v11);
		v16 = _mm_sub_ps(v11, v14);
		v17 = _mm_add_ps(
			_mm_mul_ps(
				_mm_mul_ps(_mm_shuffle_ps(v16, v16, 245), (__m128)xmmword_1409B44B0),
				_mm_shuffle_ps(*(__m128*) & v8[2 * v13], *(__m128*) & v8[2 * v13], 177)),
			_mm_mul_ps(_mm_shuffle_ps(v16, v16, 160), *(__m128*) & v8[2 * v13]));
		*(__m128*)(a3 + 8 * v10) = _mm_mul_ps(_mm_add_ps(v17, v15), (__m128)xmmword_140B7AC50);
		v18 = _mm_mul_ps(_mm_mul_ps(_mm_sub_ps(v15, v17), (__m128)xmmword_1409A9FA0), (__m128)xmmword_140B7AC50);
	}
	result = *(_QWORD*)v7;
	v20 = *(_QWORD*)v7;
	*(float*)a3 = COERCE_FLOAT(HIDWORD(*(_QWORD*)v7)) + COERCE_FLOAT(*(_QWORD*)v7);
	*(float*)(a3 + 8 * v6) = *(float*)&v20 - *((float*)&v20 + 1);
	*(_DWORD*)(a3 + 4) = 0;
	*(_DWORD*)(a3 + 8 * v6 + 4) = 0;
	return result;
}
// 1409A9FA0: using guessed type __int128 xmmword_1409A9FA0;
// 1409B44B0: using guessed type __int128 xmmword_1409B44B0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;

