#include "../winhttp.h"

//----- (00000001408FA040) ----------------------------------------------------
__int64 __fastcall sub_1408FA040(__int64 a1, int a2)
{
	unsigned int v2; // r15d
	__int64 result; // rax
	unsigned int v4; // ebp
	__int64 v6; // r14
	float v7; // xmm10_4
	__m128 v8; // xmm1
	__int64 v9; // rsi
	float v10; // xmm7_4
	double v11; // xmm2_8
	float v12; // xmm0_4
	double v13; // xmm0_8
	double v14; // xmm0_8
	__int64 v15; // rbx
	float v16; // xmm6_4
	double v17; // xmm0_8
	double v18; // xmm0_8
	__int64 v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rdx
	float v22; // xmm6_4

	v2 = *(_DWORD*)(a1 + 464);
	result = (unsigned int)a2;
	v4 = 0;
	if (v2)
	{
		v6 = 0i64;
		v7 = 1.0 / (float)a2;
		do
		{
			v8 = (__m128) * (unsigned int*)(a1 + 504);
			v9 = *(_QWORD*)(a1 + 24);
			v10 = 1.0;
			v8.m128_f32[0] = (float)(v8.m128_f32[0] * v8.m128_f32[0]) + (float)(*(float*)(a1 + 508) * *(float*)(a1 + 508));
			*(_QWORD*)&v11 = _mm_sqrt_ps(v8).m128_u64[0];
			if (*(_BYTE*)(v9 + 84))
			{
				v12 = *(float*)(v9 + 12) * 0.0099999998;
				if (*(float*)&v11 > v12)
				{
					*(float*)&v11 = *(float*)&v11 / v12;
					v13 = sub_1408FE170(v11);
					v14 = sub_1408FBFC0(
						COERCE_DOUBLE(1092616192i64),
						(float)((float)(*(float*)&v13 * 1.442695) * (float)(*(float*)(v9 + 16) * -6.0)) * 0.050000001);
					v10 = *(float*)&v14;
				}
			}
			v15 = *(_QWORD*)(a1 + 40);
			v16 = sub_1408FAD00(a1, COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v15 + v6 + 4)), *(float*)(v15 + v6 + 8));
			*(_QWORD*)&v17 = *(unsigned int*)(v15 + v6);
			*(float*)&v17 = *(float*)&v17 * 0.0625;
			v18 = sub_1408FBFC0(v17, (float)((float)(*(float*)(v9 + 20) + 1.0) * 48.0) * 0.041524101);
			*(float*)&v18 = *(float*)&v18 * *(float*)(v15 + v6 + 12);
			v19 = v4 & 3;
			v20 = v4++ >> 2;
			v6 += 28i64;
			v21 = v19 + 28 * v20;
			v22 = v16 * (float)(*(float*)&v18 * v10);
			*(float*)(*(_QWORD*)(a1 + 48) + 4 * v21 + 16) = (float)(v22 - *(float*)(*(_QWORD*)(a1 + 48) + 4 * v21)) * v7;
			result = *(_QWORD*)(a1 + 48);
			*(float*)(result + 4 * v21 + 32) = v22;
		} while (v4 < v2);
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

