#include "../winhttp.h"

//----- (00000001405BE320) ----------------------------------------------------
void __fastcall sub_1405BE320(__int64 a1, unsigned int a2, __m128* a3, float* a4, float* a5, float* a6, float* a7)
{
	__int64 v9; // rax
	float* v10; // rbx
	__int64 v11; // rsi
	float v12; // xmm0_4
	double v13; // xmm6_8
	float v14; // xmm7_4
	float v15; // xmm0_4
	float v16; // xmm2_4
	float v17; // xmm4_4
	float v18; // xmm1_4

	v9 = sub_140244280(a2);
	if (v9)
	{
		v10 = (float*)(v9 + 32);
		v11 = 5i64;
		do
		{
			switch (*((_DWORD*)v10 - 5))
			{
			case 1:
				a3->m128_f32[0] = a3->m128_f32[0] * *v10;
				break;
			case 2:
				a3->m128_f32[1] = a3->m128_f32[1] * *v10;
				break;
			case 3:
				v12 = a3->m128_f32[0];
				a3->m128_i32[0] = a3->m128_i32[1];
				a3->m128_f32[1] = v12;
				break;
			case 4:
				*(_QWORD*)&v13 = (unsigned int)dword_140C3B438;
				*(float*)&v13 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *v10;
				v14 = sub_1408FE3D0(v13);
				v15 = sub_1408FC950(v13);
				v16 = a3->m128_f32[1];
				v17 = (float)(a3->m128_f32[0] * v15) - (float)(v16 * v14);
				a3->m128_f32[1] = (float)(v16 * v15) + (float)(a3->m128_f32[0] * v14);
				a3->m128_f32[0] = v17;
				break;
			case 5:
				v18 = -a3->m128_f32[1];
				a3->m128_f32[0] = -a3->m128_f32[0];
				a3->m128_f32[1] = v18;
				break;
			case 6:
				*a7 = *a7 * *v10;
				break;
			case 7:
				*a6 = (float)((float)(*a7 - *a6) * *v10) + *a6;
				break;
			case 8:
				*a4 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *v10;
				break;
			case 9:
				*a5 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *v10;
				break;
			case 0xE:
				*a3 = _mm_mul_ps(*a3, _mm_shuffle_ps((__m128) * (unsigned int*)v10, (__m128) * (unsigned int*)v10, 0));
				break;
			default:
				break;
			}
			++v10;
			--v11;
		} while (v11);
	}
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;

