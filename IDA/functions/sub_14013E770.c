#include "../winhttp.h"

//----- (000000014013E770) ----------------------------------------------------
void** __fastcall sub_14013E770(__m128* a1, __m128* a2, float a3)
{
	void** result; // rax
	float v5; // xmm14_4
	unsigned __int64 v6; // rdi
	__int64 v7; // rbp
	__m128 v8; // xmm10
	unsigned __int64 v9; // rsi
	__m128 v10; // xmm11
	float v11; // xmm12_4
	unsigned __int64 v12; // rcx
	float v13; // xmm13_4
	unsigned __int64 v14; // rcx
	float v15; // xmm8_4
	__int64 v16; // rax
	__m128 v17; // [rsp+20h] [rbp-E8h]
	__m128 v18; // [rsp+30h] [rbp-D8h] BYREF
	__int128 v19[2]; // [rsp+40h] [rbp-C8h] BYREF
	void* retaddr; // [rsp+108h] [rbp+0h] BYREF

	result = &retaddr;
	v5 = a3;
	if (a3 >= 0.0)
	{
		v6 = 0i64;
		v7 = 0i64;
		v8 = _mm_add_ps(a1[11], *a2);
		v17 = v8;
		if (a1[4].m128_u64[1])
		{
			result = (void**)a1[4].m128_u64[0];
			while (1)
			{
				v9 = 0i64;
				v10 = v8;
				v11 = 0.0;
				if (result[v6])
				{
					v12 = a1[6].m128_u64[0];
					v13 = v17.m128_f32[0];
					while (1)
					{
						sub_140141910(*(_QWORD*)(v12 + 8 * v7), v18.m128_f32);
						v14 = a1[6].m128_u64[0];
						v15 = *(float*)(a1[5].m128_u64[0] + 4 * v9);
						v19[0] = (__int128)v8;
						v18.m128_f32[0] = v15;
						v19[1] = (__int128)_mm_add_ps(v18, v8);
						sub_140141820(*(_QWORD*)(v14 + 8 * v7), v19, v5);
						v12 = a1[6].m128_u64[0];
						++v9;
						v13 = v13 + v15;
						v16 = *(_QWORD*)(v12 + 8 * v7++);
						v11 = fmaxf(v11, v18.m128_f32[1]);
						v17.m128_f32[0] = v13;
						v5 = v5 - *(float*)(v16 + 828);
						result = (void**)a1[4].m128_u64[0];
						if (v9 >= (unsigned __int64)result[v6])
							break;
						v8 = v17;
					}
				}
				v17 = v10;
				++v6;
				v17.m128_f32[1] = _mm_shuffle_ps(v10, v10, 85).m128_f32[0] + v11;
				if (v6 >= a1[4].m128_u64[1])
					break;
				v8 = v17;
			}
		}
	}
	return result;
}

