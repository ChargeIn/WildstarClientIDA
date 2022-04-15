#include "../winhttp.h"

//----- (00000001408D4FB0) ----------------------------------------------------
__int64 __fastcall sub_1408D4FB0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	float v7; // xmm6_4
	float v8; // xmm3_4
	float v9; // xmm3_4
	float v10; // xmm0_4
	float v11; // xmm2_4
	float v12; // xmm3_4
	float v13; // xmm4_4
	__m128 v14; // xmm5
	float v15; // xmm1_4
	int v16; // ecx
	float v17; // xmm3_4
	__int64 result; // rax
	float v19; // xmm2_4
	float v20; // xmm1_4
	float v21; // xmm4_4
	float v22; // xmm2_4
	float v23; // xmm4_4
	float v24; // xmm1_4
	float v25; // xmm4_4
	float v26; // xmm4_4
	float v27; // xmm4_4
	float v28; // xmm3_4
	float v29; // xmm4_4
	float v30; // xmm0_4
	float v31; // xmm4_4
	float v32; // xmm1_4
	float v33; // xmm0_4
	float v34; // xmm4_4

	for (;
		a4;
		*(float*)(a3 - 4) = (float)(v7 * *(float*)(a1 + 148))
		+ (float)(*(float*)(a1 + 144) * (float)(v34 * *(float*)(a1 + 140))))
	{
		--a4;
		a2 += 4i64;
		v7 = *(float*)(a1 + 80) * *(float*)(a2 - 4);
		*(float*)(a1 + 84) = v7;
		v8 = fabs(v7);
		if (v8 >= 1.0)
			v8 = 1.0;
		v9 = v8 - *(float*)(a1 + 8);
		if (v9 <= 0.0)
			v9 = 0.0;
		v14 = (__m128) * (unsigned int*)(a1 + 88);
		v10 = *(float*)(a1 + 24);
		v11 = v9;
		v12 = v9 * *(float*)(a1 + 16);
		v14.m128_f32[0] = v14.m128_f32[0] * *(float*)(a1 + 20);
		*(float*)(a1 + 88) = v11;
		v14.m128_f32[0] = (float)((float)(v14.m128_f32[0] + v12) * 0.5) - (float)(v10 * *(float*)(a1 + 92));
		*(_DWORD*)(a1 + 92) = v14.m128_i32[0];
		v13 = v14.m128_f32[0];
		v14.m128_f32[0] = v14.m128_f32[0] * 255.0;
		v15 = v14.m128_f32[0];
		v16 = (int)v14.m128_f32[0];
		if ((int)v14.m128_f32[0] != 0x80000000 && (float)v16 != v14.m128_f32[0])
			v15 = (float)(v16 - (_mm_movemask_ps(_mm_unpacklo_ps(v14, v14)) & 1));
		v17 = *(float*)(a1 + 100);
		result = (unsigned int)((int)v14.m128_f32[0] + 18);
		v19 = *(float*)(a1 + 28);
		v20 = (float)((float)((float)(v14.m128_f32[0] - v15) * *(float*)(a1 + 4i64 * (int)result + 84))
			- (float)((float)((float)(v14.m128_f32[0] - v15) - *(float*)(a1 + 96))
				* *(float*)(a1 + 4i64 * (int)result + 80)))
			- v17;
		if (v20 < 0.0)
			v19 = *(float*)(a1 + 32);
		v21 = (float)(v13 * *(float*)(a1 + 36)) + v19;
		v22 = 0.0;
		v23 = v21 * v20;
		v24 = *(float*)(a1 + 44);
		v25 = v23 + v17;
		*(float*)(a1 + 100) = v25;
		v26 = (float)(v25 * v7) * *(float*)(a1 + 108);
		if (v24 > v26)
			v22 = *(float*)(a1 + 112);
		v27 = v26 + (float)(v22 * v26);
		if (v27 < 1.0)
		{
			if (v27 <= -1.0)
				v27 = -1.0;
		}
		else
		{
			v27 = 1.0;
		}
		v28 = *(float*)(a1 + 116);
		*(float*)(a1 + 116) = v27;
		a3 += 4i64;
		v29 = (float)(v27 * *(float*)(a1 + 48)) + (float)(v28 * *(float*)(a1 + 52));
		v30 = *(float*)(a1 + 120);
		*(float*)(a1 + 120) = v28;
		v31 = v29 + (float)(v30 * *(float*)(a1 + 56));
		v32 = *(float*)(a1 + 128) * *(float*)(a1 + 64);
		v33 = *(float*)(a1 + 124) * *(float*)(a1 + 60);
		*(_DWORD*)(a1 + 128) = *(_DWORD*)(a1 + 124);
		v34 = (float)(v31 - v33) - v32;
		*(float*)(a1 + 124) = v34;
	}
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

