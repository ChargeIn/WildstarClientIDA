//----- (0000000140307280) ----------------------------------------------------
__m128* __fastcall sub_140307280(__int64 a1, __m128* a2, __int64 a3, __int64 a4)
{
	unsigned int v7; // edi
	__int64* v8; // rbp
	__m128* result; // rax
	__int64 v10; // r9
	float* v11; // rsi
	unsigned int v12; // edx
	__m128i v13; // xmm0
	__m128 v14; // [rsp+30h] [rbp-48h] BYREF
	__m128 v15; // [rsp+40h] [rbp-38h] BYREF

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(__m128**)(a1 + 16);
			v13 = _mm_loadl_epi64((const __m128i*)result);
			*a2 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v13, v13), 0x10u)), (__m128)xmmword_140B7AB20);
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
		v8 = (__int64*)((char*)a2[1].m128_i64 + 4 * v7);
		result = sub_1403073A0(a1, *(_DWORD*)(a3 + 24i64 * v7 + 8), a2, a4, v8);
		if (v7)
		{
			v11 = (float*)(a3 + 24i64 * v7 + 12);
			do
			{
				v12 = *((_DWORD*)v11 - 7);
				v11 -= 6;
				v8 = (__int64*)((char*)v8 - 4);
				sub_1403073A0(a1, v12, &v14, v10, v8);
				result = sub_1401B1EE0(&v15, &v14, a2, COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(1.0 - *v11)));
				*a2 = *result;
				--v7;
			} while (v7);
		}
	}
	return result;
}
// 140307308: variable 'v10' is possibly undefined
// 140B7AB20: using guessed type __int128 xmmword_140B7AB20;

