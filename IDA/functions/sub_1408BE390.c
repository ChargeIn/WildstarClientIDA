#include "../winhttp.h"

//----- (00000001408BE390) ----------------------------------------------------
__m128 __fastcall sub_1408BE390(__int64 a1, unsigned int* a2, float* a3)
{
	int v3; // r9d
	__int64 v4; // rbp
	unsigned int i; // edi
	__m128 v9; // xmm9
	__m128 v10; // xmm9
	__m128 v11; // xmm8
	float* v12; // rbx
	__int64 v13; // rsi
	__m128 v14; // xmm7
	__m128 v15; // xmm6
	float* v16; // rcx
	__int64 v17; // rax
	float* v18; // rdi
	float v19; // xmm0_4
	float v20; // xmm0_4
	float v21; // xmm0_4
	double v22; // xmm0_8
	double v23; // xmm0_8
	float v24; // xmm7_4
	float* v25; // rbx
	__int64 v26; // rsi
	__int64 v27; // r8
	double v28; // xmm6_8
	float* v29; // rcx
	float* v30; // rdi
	__int64 v31; // xmm0_8
	float v32; // xmm1_4
	float v33; // xmm2_4
	float v34; // xmm3_4
	float v35; // xmm0_4
	double v36; // xmm0_8
	__int64 v37; // rcx
	float* v38; // rdi
	__m128 result; // xmm0

	v3 = *(_DWORD*)(a1 + 8);
	v4 = 0i64;
	for (i = 0; v3; v3 &= v3 - 1)
		++i;
	v9 = 0i64;
	if (*(_WORD*)(a1 + 18))
	{
		if (a2[5])
		{
			v24 = -2147483600.0;
			if (i)
			{
				v25 = a3;
				v26 = i;
				do
				{
					v27 = *(unsigned __int16*)(a1 + 18);
					v28 = 0.0;
					v29 = (float*)(*(_QWORD*)a1 + 4 * v4 * *(unsigned __int16*)(a1 + 16));
					v30 = &v29[v27];
					if (v29 < v30)
					{
						if ((4 * v27 + 3) / 4 >= 4)
						{
							do
							{
								v31 = *(unsigned int*)v29;
								v32 = v29[1] * v29[1];
								v33 = v29[2] * v29[2];
								v34 = v29[3];
								v29 += 4;
								HIDWORD(v28) = HIDWORD(v31);
								*(float*)&v28 = (float)((float)((float)((float)(*(float*)&v31 * *(float*)&v31) + *(float*)&v28) + v32)
									+ v33)
									+ (float)(v34 * v34);
							} while ((__int64)v29 < (__int64)(v30 - 3));
						}
						for (; v29 < v30; *(float*)&v28 = *(float*)&v28 + (float)(v35 * v35))
							v35 = *v29++;
					}
					*(float*)&v28 = *(float*)&v28 / (float)(int)v27;
					if (a3)
					{
						v36 = sub_1408FDC10(v28);
						*v25 = *(float*)&v36 * 10.0;
					}
					if (v24 <= *(float*)&v28)
						v24 = *(float*)&v28;
					++v4;
					++v25;
					--v26;
				} while (v26);
			}
			v9 = 0i64;
			v9.m128_f32[0] = fsqrt(v24);
		}
		else
		{
			v10 = (__m128)0x4F000000u;
			v11 = (__m128)0xCF000000;
			if (i)
			{
				v12 = a3;
				v13 = i;
				do
				{
					v14 = (__m128)0x4F000000u;
					v15 = (__m128)0xCF000000;
					v16 = (float*)(*(_QWORD*)a1 + 4 * v4 * *(unsigned __int16*)(a1 + 16));
					v17 = *(unsigned __int16*)(a1 + 18);
					v18 = &v16[v17];
					if (v16 < v18)
					{
						if ((4 * v17 + 3) / 4 >= 4)
						{
							do
							{
								if (v14.m128_f32[0] >= *v16)
									v14 = (__m128) * (unsigned int*)v16;
								if (v15.m128_f32[0] <= *v16)
									v15 = (__m128) * (unsigned int*)v16;
								v19 = v16[1];
								if (v14.m128_f32[0] >= v19)
									v14 = (__m128) * ((unsigned int*)v16 + 1);
								if (v15.m128_f32[0] <= v19)
									v15 = (__m128) * ((unsigned int*)v16 + 1);
								v20 = v16[2];
								if (v14.m128_f32[0] >= v20)
									v14 = (__m128) * ((unsigned int*)v16 + 2);
								if (v15.m128_f32[0] <= v20)
									v15 = (__m128) * ((unsigned int*)v16 + 2);
								v21 = v16[3];
								if (v14.m128_f32[0] >= v21)
									v14 = (__m128) * ((unsigned int*)v16 + 3);
								if (v15.m128_f32[0] <= v21)
									v15 = (__m128) * ((unsigned int*)v16 + 3);
								v16 += 4;
							} while ((__int64)v16 < (__int64)(v18 - 3));
						}
						for (; v16 < v18; ++v16)
						{
							if (v14.m128_f32[0] >= *v16)
								v14 = (__m128) * (unsigned int*)v16;
							if (v15.m128_f32[0] <= *v16)
								v15 = (__m128) * (unsigned int*)v16;
						}
					}
					if (a3)
					{
						*(_QWORD*)&v22 = COERCE_UNSIGNED_INT(fabs(v14.m128_f32[0]));
						if (fabs(v14.m128_f32[0]) <= v15.m128_f32[0])
							v22 = *(double*)v15.m128_u64;
						v23 = sub_1408FDC10(v22);
						*v12 = *(float*)&v23 * 20.0;
					}
					if (v10.m128_f32[0] >= v14.m128_f32[0])
						v10 = v14;
					if (v11.m128_f32[0] <= v15.m128_f32[0])
						v11 = v15;
					++v4;
					++v12;
					--v13;
				} while (v13);
			}
			v9 = _mm_and_ps(v10, (__m128)0x7FFFFFFFu);
			if (v9.m128_f32[0] <= v11.m128_f32[0])
				v9 = v11;
		}
	}
	else if (a3 && i)
	{
		v37 = i;
		v38 = a3;
		while (v37)
		{
			*v38++ = -96.300003;
			--v37;
		}
	}
	result.m128_u64[1] = v9.m128_u64[1];
	*(double*)result.m128_u64 = sub_1408FDC10(*(double*)v9.m128_u64);
	result.m128_f32[0] = result.m128_f32[0] * 20.0;
	if (*((float*)a2 + 2) > result.m128_f32[0])
		result = (__m128)a2[2];
	if (*((float*)a2 + 3) < result.m128_f32[0])
		return (__m128)a2[3];
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

