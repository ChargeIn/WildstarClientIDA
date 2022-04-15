//----- (0000000140307C90) ----------------------------------------------------
unsigned __int64 __fastcall sub_140307C90(__int64 a1, __m128i* a2, __int64 a3)
{
	unsigned int v6; // edi
	__int64 v7; // r14
	unsigned __int64 result; // rax
	float* v9; // rbp
	unsigned int v10; // edx
	__m128 v11; // xmm2
	__m128 v12; // [rsp+30h] [rbp-38h] BYREF

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = (unsigned __int64)sub_1401B1980((__m128i*) & v12, *(unsigned __int16**)(a1 + 16));
			*a2 = (__m128i)v12;
		}
		else
		{
			result = 0i64;
			a2->m128i_i64[0] = 0i64;
			a2->m128i_i64[1] = 0i64;
		}
	}
	else
	{
		v6 = *(_DWORD*)(a3 + 104) - 1;
		v7 = (__int64)a2[1].m128i_i64 + 4 * v6;
		result = sub_1403098C0(a1, *(_DWORD*)(a3 + 24i64 * v6 + 8), a2);
		if (v6)
		{
			v9 = (float*)(a3 + 24i64 * v6 + 12);
			do
			{
				v10 = *((_DWORD*)v9 - 7);
				v9 -= 6;
				v7 -= 4i64;
				result = sub_1403098C0(a1, v10, (__m128i*) & v12);
				v11 = (__m128)0x3F800000u;
				v11.m128_f32[0] = 1.0 - *v9;
				*(__m128*)a2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), _mm_sub_ps(*(__m128*)a2, v12)), v12);
				--v6;
			} while (v6);
		}
	}
	return result;
}

