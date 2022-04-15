#include "../winhttp.h"

//----- (00000001408EEA90) ----------------------------------------------------
__int64 __fastcall sub_1408EEA90(int a1, int a2, int a3, int a4, __int64 a5)
{
	int v5; // r9d
	__int64 v6; // rbp
	__int64 v7; // rdi
	int v8; // r10d
	unsigned int v9; // r11d
	int v10; // eax
	bool v11; // sf
	__int64 v12; // rbx
	int v13; // r9d
	int v14; // ecx
	__int64 v15; // rdx
	unsigned int v16; // r11d
	__int64 result; // rax
	__int64 v18; // r8
	unsigned __int64 v19; // rdi
	int v20; // ecx
	__int64 v21; // rdx
	int v22; // ecx
	__int64 v23; // rdx
	int v24; // ecx
	__int64 v25; // rdx
	__m128i v26; // xmm0
	__int64 v27; // rbx
	__int64 v28; // r9
	__m128i v29; // xmm0

	v5 = a4 - a3;
	v6 = a2;
	v7 = a1;
	v8 = a2 - a1;
	v9 = abs32(v5);
	v10 = v5 / (a2 - a1);
	v11 = v5 < 0;
	v12 = v10;
	v13 = v10 - 1;
	if (!v11)
		v13 = v10 + 1;
	v14 = 0;
	v15 = a3;
	v16 = v9 - abs32(v8 * v10);
	result = (unsigned int)(v7 + 1);
	v18 = (int)result;
	*(float*)(a5 + 4 * v7) = (float)*(int*)(a5 + 4 * v7) * flt_140C1A4F0[v15];
	if ((int)result < v6)
	{
		result = v6 - (int)result;
		if (v6 - v18 >= 4)
		{
			result = a5 + 8 + 4 * v18;
			v19 = ((unsigned __int64)(v6 - v18 - 4) >> 2) + 1;
			v18 += 4 * v19;
			do
			{
				v20 = v16 + v14;
				if (v20 < v8)
				{
					v21 = v12 + v15;
				}
				else
				{
					v20 -= v8;
					v21 = v13 + v15;
				}
				v22 = v16 + v20;
				*(float*)(result - 8) = (float)*(int*)(result - 8) * flt_140C1A4F0[v21];
				if (v22 < v8)
				{
					v23 = v12 + v21;
				}
				else
				{
					v22 -= v8;
					v23 = v13 + v21;
				}
				v24 = v16 + v22;
				*(float*)(result - 4) = (float)*(int*)(result - 4) * flt_140C1A4F0[v23];
				if (v24 < v8)
				{
					v25 = v12 + v23;
				}
				else
				{
					v24 -= v8;
					v25 = v13 + v23;
				}
				v14 = v16 + v24;
				*(float*)result = (float)*(int*)result * flt_140C1A4F0[v25];
				if (v14 < v8)
				{
					v15 = v12 + v25;
				}
				else
				{
					v14 -= v8;
					v15 = v13 + v25;
				}
				v26 = _mm_cvtsi32_si128(*(_DWORD*)(result + 4));
				result += 16i64;
				*(float*)(result - 12) = _mm_cvtepi32_ps(v26).m128_f32[0] * flt_140C1A4F0[v15];
				--v19;
			} while (v19);
		}
		if (v18 < v6)
		{
			v27 = 4 * v12;
			v28 = 4i64 * v13;
			result = (__int64)&flt_140C1A4F0[v15];
			do
			{
				v14 += v16;
				if (v14 < v8)
				{
					result += v27;
				}
				else
				{
					v14 -= v8;
					result += v28;
				}
				v29 = _mm_cvtsi32_si128(*(_DWORD*)(a5 + 4 * v18++));
				*(float*)(a5 + 4 * v18 - 4) = _mm_cvtepi32_ps(v29).m128_f32[0] * *(float*)result;
			} while (v18 < v6);
		}
	}
	return result;
}
// 140C1A4F0: using guessed type float flt_140C1A4F0[284];

