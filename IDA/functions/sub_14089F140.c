//----- (000000014089F140) ----------------------------------------------------
__int64 __fastcall sub_14089F140(unsigned int a1, unsigned int a2, const __m128i** a3, __int64 a4)
{
	__int64 result; // rax
	const __m128i* v5; // r10
	unsigned int v6; // r11d
	float v7; // xmm2_4
	unsigned int v8; // edi
	__int64 v9; // rbx
	unsigned int v10; // ecx
	__m128 v11; // xmm3
	__m128i v12; // xmm0
	unsigned int v13; // eax
	__int64 v14; // r8
	__m128i v15; // xmm0
	int v16; // eax
	int v17; // eax
	int v18; // eax
	__int64 v19; // rcx
	__m128i v20; // xmm0

	v5 = *a3;
	if (a1)
	{
		v6 = *(_DWORD*)(a4 + 16);
		v7 = *(float*)(a4 + 12);
		v8 = *(_DWORD*)(a4 + 20);
		v9 = a1;
		do
		{
			if (v6 < v8)
			{
				v7 = v7 + *(float*)(a4 + 4);
				++v6;
			}
			else
			{
				v7 = *(float*)(a4 + 8);
			}
			v10 = 0;
			if (a2)
			{
				if (a2 >= 4)
				{
					result = a2 & 3;
					v11 = _mm_shuffle_ps((__m128)LODWORD(v7), (__m128)LODWORD(v7), 0);
					do
					{
						v12 = _mm_loadu_si128(v5);
						v10 += 4;
						++v5;
						v5[-1] = _mm_cvttps_epi32(_mm_mul_ps(_mm_cvtepi32_ps(v12), v11));
					} while (v10 < a2 - (unsigned int)result);
				}
				if (v10 < a2)
				{
					result = a2 - v10;
					if ((int)result >= 4)
					{
						v13 = ((a2 - v10 - 4) >> 2) + 1;
						v14 = v13;
						v10 += 4 * v13;
						do
						{
							v15 = _mm_cvtsi32_si128(v5->m128i_i32[0]);
							++v5;
							v16 = (int)(float)(_mm_cvtepi32_ps(v15).m128_f32[0] * v7);
							*(float*)v15.m128i_i32 = (float)v5[-1].m128i_i32[1];
							v5[-1].m128i_i32[0] = v16;
							v17 = (int)(float)(*(float*)v15.m128i_i32 * v7);
							*(float*)v15.m128i_i32 = (float)v5[-1].m128i_i32[2];
							v5[-1].m128i_i32[1] = v17;
							v18 = (int)(float)(*(float*)v15.m128i_i32 * v7);
							*(float*)v15.m128i_i32 = (float)v5[-1].m128i_i32[3];
							v5[-1].m128i_i32[2] = v18;
							result = (unsigned int)(int)(float)(*(float*)v15.m128i_i32 * v7);
							v5[-1].m128i_i32[3] = result;
							--v14;
						} while (v14);
					}
					if (v10 < a2)
					{
						v19 = (int)(a2 - v10);
						do
						{
							v20 = _mm_cvtsi32_si128(v5->m128i_i32[0]);
							v5 = (const __m128i*)((char*)v5 + 4);
							result = (unsigned int)(int)(float)(_mm_cvtepi32_ps(v20).m128_f32[0] * v7);
							v5[-1].m128i_i32[3] = result;
							--v19;
						} while (v19);
					}
				}
			}
			--v9;
		} while (v9);
		*(float*)(a4 + 12) = v7;
		*(_DWORD*)(a4 + 16) = v6;
	}
	return result;
}

