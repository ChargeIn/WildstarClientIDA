#include "../winhttp.h"

//----- (00000001402D0E00) ----------------------------------------------------
__int64 __fastcall sub_1402D0E00(__m128* a1, float* a2, __m128* a3, __int64 a4, __int16 a5)
{
	float* v9; // rax
	float v10; // xmm0_4
	float v11; // xmm0_4
	unsigned __int64 v12; // rax
	__int64* v13; // rcx
	__m128 v14; // xmm2
	__m128 v15; // xmm4
	__m128 v16; // xmm3
	__int16 v17; // si
	__m128 v18; // xmm5
	__m128 v19; // xmm2
	unsigned int v20; // ebp
	int v22[4]; // [rsp+30h] [rbp-38h] BYREF
	__m128 v23; // [rsp+40h] [rbp-28h] BYREF
	__m128 v24; // [rsp+50h] [rbp-18h] BYREF
	int v25; // [rsp+70h] [rbp+8h] BYREF

	if ((*(_BYTE*)(a1[2].m128_u64[0] + 48) & 1) != 0)
		return 0i64;
	v9 = (float*)(*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 112))(a1);
	if (*a2 < *v9)
		return 0i64;
	if (*a2 >= v9[4])
		return 0i64;
	v10 = a2[1];
	if (v10 < v9[1])
		return 0i64;
	if (v10 >= v9[5])
		return 0i64;
	v11 = a2[2];
	if (v11 < v9[2] || v11 >= v9[6])
		return 0i64;
	v12 = a1->m128_u64[0];
	v22[0] = -1;
	(*(void(__fastcall**)(__m128*, int*))(v12 + 88))(a1, v22);
	v13 = (__int64*)a1[1].m128_u64[1];
	v14 = *(__m128*)a2;
	v15 = a1[9];
	v16 = a1[8];
	v17 = a5;
	v18 = a1[10];
	v24 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v16), _mm_mul_ps(_mm_shuffle_ps(v14, v14, 85), v15)),
			_mm_mul_ps(_mm_shuffle_ps(v14, v14, 170), v18)),
		a1[11]);
	v19 = _mm_add_ps(
		_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), v16), _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 85), v15)),
		_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 170), v18));
	v25 = 2139095039;
	v23 = v19;
	v20 = sub_1402D4800(v13, (__int64)&v24, &v23, &v25, a4, a5);
	if (v20 && a4)
	{
		if ((v17 & 0x2000) != 0)
			*(_DWORD*)(a4 + 168) = (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 216))(a1);
		if ((v17 & 0x8000) != 0)
		{
			*(_DWORD*)(a4 + 208) = (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 232))(a1);
			*(_QWORD*)(a4 + 212) = 0i64;
			*(_DWORD*)(a4 + 220) = 0;
		}
	}
	return v20;
}
// 1402D0E00: using guessed type int var_38[4];

