//----- (0000000140307720) ----------------------------------------------------
unsigned int* __fastcall sub_140307720(__int64 a1, __m128* a2, __int64 a3, __int64 a4)
{
	unsigned int v7; // edi
	char* v8; // r14
	unsigned int* result; // rax
	__int64 v10; // r9
	float* v11; // rbp
	unsigned int v12; // edx
	__m128 v13; // xmm2
	__m128 v14; // [rsp+30h] [rbp-38h] BYREF

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(unsigned int**)(a1 + 16);
			*a2 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * result, (__m128)result[2]),
				_mm_unpacklo_ps((__m128)result[1], (__m128)0i64));
		}
		else
		{
			result = 0i64;
			a2->m128_u64[0] = 0i64;
			a2->m128_u64[1] = 0i64;
		}
	}
	else
	{
		v7 = *(_DWORD*)(a3 + 104) - 1;
		v8 = &a2[1].m128_i8[4 * v7];
		result = (unsigned int*)sub_140307830((int*)a1, *(_DWORD*)(a3 + 24i64 * v7 + 8), a2, a4, v8);
		if (v7)
		{
			v11 = (float*)(a3 + 24i64 * v7 + 12);
			do
			{
				v12 = *((_DWORD*)v11 - 7);
				v11 -= 6;
				v8 -= 4;
				result = (unsigned int*)sub_140307830((int*)a1, v12, &v14, v10, v8);
				v13 = (__m128)0x3F800000u;
				v13.m128_f32[0] = 1.0 - *v11;
				*a2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), _mm_sub_ps(*a2, v14)), v14);
				--v7;
			} while (v7);
		}
	}
	return result;
}
// 1403077A8: variable 'v10' is possibly undefined
