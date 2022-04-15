#include "../winhttp.h"

//----- (00000001408C37C0) ----------------------------------------------------
__int64 __fastcall sub_1408C37C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
	int v5; // r10d
	float v6; // xmm10_4
	float v7; // xmm5_4
	float v8; // xmm6_4
	unsigned int v9; // edi
	float v13; // xmm9_4
	__int64 result; // rax
	int v15; // r11d
	__int64 v16; // rsi
	unsigned int v17; // ebx
	__int64 v18; // rbp
	float v19; // xmm2_4
	__m128 v20; // xmm1
	__m128 v21; // xmm7
	float v22; // xmm3_4
	int v23; // ecx
	int v24; // r9d
	int v25; // ecx
	int v26; // r8d
	float v27; // xmm7_4
	int v28; // ecx
	float v29; // xmm2_4
	int v30; // edx
	float v31; // xmm3_4
	__int64 v32; // rax
	__int64 v33; // rcx
	float v34; // xmm4_4
	float v35; // xmm0_4
	float v36; // xmm2_4
	float v37; // xmm7_4

	v5 = *(_DWORD*)(a1 + 176);
	v6 = *(float*)(a1 + 168);
	v7 = *(float*)(a1 + 4i64 * a5 + 144);
	v8 = (float)v5;
	v9 = a4;
	v13 = (float)((unsigned int)v5 >> 1);
	result = 3i64 * a5;
	v15 = *(_DWORD*)(a1 + 24i64 * a5 + 12);
	v16 = *(_QWORD*)(a1 + 24i64 * a5);
	v17 = v5 - v15;
	if (a4)
	{
		do
		{
			if (v9 < v17)
				v17 = v9;
			if (v17)
			{
				v18 = v17;
				do
				{
					v7 = v7 + v6;
					v19 = v7 + v13;
					if (v7 >= v8)
						v7 = v7 - v8;
					if (v19 >= v8)
						v19 = v19 - v8;
					if (v7 < 0.0)
						v7 = v7 + v8;
					if (v19 < 0.0)
						v19 = v19 + v8;
					v20 = 0i64;
					v20.m128_f32[0] = (float)v15;
					v21 = v20;
					v21.m128_f32[0] = (float)v15 - v7;
					v22 = v21.m128_f32[0];
					v23 = (int)v21.m128_f32[0];
					if ((int)v21.m128_f32[0] != 0x80000000 && (float)v23 != v21.m128_f32[0])
						v22 = (float)(v23 - (_mm_movemask_ps(_mm_unpacklo_ps(v21, v21)) & 1));
					v20.m128_f32[0] = v20.m128_f32[0] - v19;
					v24 = (int)v22;
					v25 = (int)v20.m128_f32[0];
					if ((int)v20.m128_f32[0] != 0x80000000 && (float)v25 != v20.m128_f32[0])
						v20.m128_f32[0] = (float)(v25 - (_mm_movemask_ps(_mm_unpacklo_ps(v20, v20)) & 1));
					v26 = (int)v20.m128_f32[0];
					if (v24 >= v5)
						v24 -= v5;
					if (v26 >= v5)
						v26 -= v5;
					if (v24 < 0)
						v24 += v5;
					if (v26 < 0)
						v26 += v5;
					v27 = v21.m128_f32[0] - v22;
					v28 = v24 + 1;
					v29 = 1.0 - v27;
					if (v24 + 1 >= v5)
						v28 = 0;
					v30 = v26 + 1;
					if (v26 + 1 >= v5)
						v30 = 0;
					a3 += 4i64;
					a2 += 4i64;
					v31 = v29 * *(float*)(v16 + 4i64 * v24);
					v32 = v28;
					v33 = (unsigned int)v15++;
					v34 = fabs(v7 - v13);
					v35 = v27 * *(float*)(v16 + 4 * v32);
					v36 = v29 * *(float*)(v16 + 4i64 * v26);
					v37 = v27 * *(float*)(v16 + 4i64 * v30);
					*(_DWORD*)(v16 + 4 * v33) = *(_DWORD*)(a2 - 4);
					*(float*)(a3 - 4) = (float)((float)(v31 + v35) * (float)(1.0 - (float)(v34 * (float)(1.0 / v13))))
						+ (float)((float)(v36 + v37) * (float)(v34 * (float)(1.0 / v13)));
					--v18;
				} while (v18);
			}
			if (v15 == v5)
				v15 = 0;
			v9 -= v17;
			v17 = v5 - v15;
		} while (v9);
		result = 3i64 * a5;
		*(_DWORD*)(a1 + 24i64 * a5 + 12) = v15;
		*(float*)(a1 + 4i64 * a5 + 144) = v7;
	}
	else
	{
		*(_DWORD*)(a1 + 24i64 * a5 + 12) = v15;
		*(float*)(a1 + 4i64 * a5 + 144) = v7;
	}
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

