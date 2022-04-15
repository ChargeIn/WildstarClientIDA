#include "../winhttp.h"

//----- (00000001407B93E0) ----------------------------------------------------
void** __fastcall sub_1407B93E0(__int64 a1)
{
	void** result; // rax
	__m128 v3; // xmm6
	float v4; // xmm6_4
	__m128 v5; // xmm1
	__m128 v6; // xmm1
	__m128 v7; // xmm1
	__m128 v8; // xmm2
	__m128 v9; // xmm4
	__m128 v10; // xmm1
	__int64 v11; // rbp
	unsigned __int64 v12; // rdi
	void** v13; // rbp
	__m128 v14; // xmm1
	unsigned __int64 v15; // rcx
	__m128 v16; // [rsp+20h] [rbp-48h] BYREF
	__m128 v17; // [rsp+30h] [rbp-38h] BYREF
	void* retaddr; // [rsp+68h] [rbp+0h] BYREF

	result = &retaddr;
	v3 = _mm_mul_ps(*(__m128*)(a1 + 400), *(__m128*)(a1 + 400));
	v4 = (float)(v3.m128_f32[0] + _mm_shuffle_ps(v3, v3, 85).m128_f32[0]) + _mm_shuffle_ps(v3, v3, 170).m128_f32[0];
	if (v4 >= *(float*)&dword_140C54B18)
	{
		sub_1401AE000(&v16, &v17, (__m128*)(a1 + 400));
		v5 = _mm_mul_ps(*(__m128*)(a1 + 368), v16);
		v5.m128_f32[0] = (float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
			+ _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
		*(__m128*)(a1 + 928) = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v16, _mm_shuffle_ps(v16, v16, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v16, v16, 85), _mm_xor_ps(v5, (__m128)0x80000000)));
		v6 = _mm_mul_ps(*(__m128*)(a1 + 368), v17);
		v6.m128_f32[0] = (float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
			+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
		v7 = _mm_unpacklo_ps(_mm_shuffle_ps(v17, v17, 85), _mm_xor_ps(v6, (__m128)0x80000000));
		v8 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, _mm_shuffle_ps(v17, v17, 170)), v7);
		v7.m128_f32[0] = fsqrt(v4) + (float)(v4 * 0.5);
		*(__m128*)(a1 + 944) = v8;
		v9 = _mm_div_ps(*(__m128*)(a1 + 400), _mm_shuffle_ps(v7, v7, 0));
		v10 = _mm_mul_ps(
			_mm_mul_ps(_mm_add_ps(*(__m128*)(a1 + 384), *(__m128*)(a1 + 368)), (__m128)xmmword_140B7AC50),
			v9);
		v10.m128_f32[0] = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
			+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
		*(__m128*)(a1 + 960) = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v9, _mm_shuffle_ps(v9, v9, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v9, v9, 85), _mm_xor_ps(v10, (__m128)0x80000000)));
		result = *(void***)(a1 + 904);
		v11 = 2i64 * *(_QWORD*)(a1 + 912);
		*(_DWORD*)(a1 + 1152) = 1065353216;
		v12 = qword_140C7F868;
		v13 = &result[v11];
		*(_QWORD*)(a1 + 976) = result;
		if (result < v13)
		{
			do
			{
				result = (void**)sub_1407B6F20(a1);
				if ((_DWORD)result)
				{
					v14 = _mm_mul_ps(*(__m128*)(a1 + 992), *(__m128*)(a1 + 400));
					if ((float)((float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
						+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0]) <= -0.0000099999997)
					{
						v15 = 0i64;
						if (!v12)
							goto LABEL_12;
						result = (void**)(qword_140C7F860 + 16);
						while (*(void**)(a1 + 976) != *result)
						{
							++v15;
							result += 4;
							if (v15 >= v12)
								goto LABEL_12;
						}
						if (v15 >= v12)
						{
						LABEL_12:
							result = (void**)sub_1407B9670((__m128*)a1);
							if ((_DWORD)result && *(float*)(a1 + 1152) == 0.0)
								return result;
						}
					}
				}
				*(_QWORD*)(a1 + 976) += 48i64;
			} while (*(_QWORD*)(a1 + 976) < (unsigned __int64)v13);
		}
	}
	else
	{
		*(_DWORD*)(a1 + 1152) = 0;
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C54B18: using guessed type int dword_140C54B18;
// 140C7F860: using guessed type __int64 qword_140C7F860;
// 140C7F868: using guessed type __int64 qword_140C7F868;

