#include "../winhttp.h"

//----- (00000001408B5610) ----------------------------------------------------
__int64 __fastcall sub_1408B5610(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // r14
	float* v4; // r9
	float* v5; // r15
	unsigned int* v6; // rbx
	unsigned __int64 v7; // rsi
	__int64 v9; // rdx
	float v10; // xmm7_4
	float v11; // xmm6_4
	__m128 v12; // xmm9
	float v13; // xmm10_4
	int v14; // ebp
	float* v15; // r13
	float v16; // xmm12_4
	float v17; // xmm13_4
	float v18; // xmm14_4
	__int64 result; // rax
	float v21; // xmm15_4
	unsigned int* v22; // rdi
	unsigned int* v23; // r10
	unsigned int* v24; // r11
	__m128 v25; // xmm4
	__m128 v26; // xmm5
	__m128 v27; // xmm11
	__m128 v28; // xmm0
	__m128 v29; // xmm1
	float v30; // xmm2_4
	__m128 v31; // xmm0
	unsigned int* v32; // rdx
	unsigned int* v33; // rcx
	__m128 v34; // xmm1
	__m128 v35; // xmm2
	__m128 v36; // xmm0
	__m128 v37; // xmm3
	__m128 v38; // xmm11
	float v39; // xmm5_4
	__m128 v40; // xmm1
	float v41; // xmm4_4
	__m128 v42; // xmm2
	__m128 v43; // xmm3
	__m128 v44; // xmm2
	__m128 v45; // xmm3
	__m128 v46; // xmm0
	__m128 v47; // xmm8
	float v48; // xmm5_4
	__m128 v49; // xmm8
	__m128 v50; // xmm8
	float v51; // xmm2_4
	__m128 v52; // xmm1
	float v53; // xmm0_4
	float v54; // [rsp+0h] [rbp-118h]
	float v55; // [rsp+10h] [rbp-108h]
	__m128 v56; // [rsp+20h] [rbp-F8h]
	__m128 v57; // [rsp+30h] [rbp-E8h]
	__m128 v58; // [rsp+40h] [rbp-D8h]

	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 40);
	v4 = *(float**)(a1 + 48);
	v5 = *(float**)(a1 + 56);
	v6 = *(unsigned int**)(a1 + 272);
	v7 = *(_QWORD*)(a1 + 336);
	v9 = *(_QWORD*)(a1 + 16);
	LODWORD(v10) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v12 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v13) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v14 = *(unsigned __int16*)(a2 + 18);
	v15 = *(float**)a2;
	LODWORD(v16) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0).m128_u32[0];
	LODWORD(v17) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0).m128_u32[0];
	LODWORD(v18) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	result = *(unsigned __int16*)(a2 + 16);
	LODWORD(v21) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v22 = *(unsigned int**)(a1 + 152);
	v23 = *(unsigned int**)(a1 + 160);
	v24 = *(unsigned int**)(a1 + 168);
	v25 = *(__m128*)(a1 + 368);
	v26 = *(__m128*)(a1 + 432);
	v27 = *(__m128*)(a1 + 496);
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v9 + 24);
	v57 = v25;
	v58 = v26;
	v28 = v2;
	v29 = (__m128) * (unsigned int*)(v9 + 16);
	v56 = _mm_shuffle_ps(v28, v28, 0);
	v30 = 1.0 / (float)*(unsigned __int16*)(a2 + 16);
	v29.m128_f32[0] = (float)(v29.m128_f32[0] - *(float*)(a1 + 572)) * v30;
	LODWORD(v54) = _mm_shuffle_ps(v29, v29, 0).m128_u32[0];
	v31 = (__m128) * (unsigned int*)(v9 + 20);
	v32 = *(unsigned int**)(a1 + 144);
	v31.m128_f32[0] = v31.m128_f32[0] - *(float*)(a1 + 576);
	v33 = *(unsigned int**)(a1 + 304);
	v31.m128_f32[0] = v31.m128_f32[0] * v30;
	LODWORD(v55) = _mm_shuffle_ps(v31, v31, 0).m128_u32[0];
	if (*(_WORD*)(a2 + 18))
	{
		do
		{
			v34 = (__m128) * v32;
			v35 = (__m128) * v22;
			v36 = (__m128) * v23;
			v32 += 4;
			if ((unsigned __int64)v32 >= v7)
				v32 = v6;
			v22 += 4;
			v37 = (__m128) * v24;
			if ((unsigned __int64)v22 >= v7)
				v22 = v6 + 1;
			v23 += 4;
			if ((unsigned __int64)v23 >= v7)
				v23 = v6 + 2;
			v24 += 4;
			if ((unsigned __int64)v24 >= v7)
				v24 = v6 + 3;
			v16 = v16 + v54;
			v17 = v17 + v55;
			result = *(unsigned __int16*)(a2 + 16);
			v38 = _mm_mul_ps(v27, v26);
			v39 = *v15;
			v40 = _mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v34, v35), _mm_unpacklo_ps(v36, v37)), v25);
			v41 = v15[result];
			++v15;
			v27 = _mm_add_ps(v40, v38);
			v42 = _mm_mul_ps(v27, (__m128)xmmword_1409AA0F0);
			v43 = _mm_mul_ps(v27, (__m128)xmmword_1409AA100);
			v44 = _mm_add_ps(v42, _mm_movehl_ps(v42, v42));
			v45 = _mm_add_ps(v43, _mm_movehl_ps(v43, v43));
			v46 = _mm_add_ps(_mm_movehl_ps(v27, v27), v27);
			v47 = _mm_add_ps(_mm_shuffle_ps(v46, v46, 85), v46);
			v46.m128_f32[0] = v39;
			v48 = v39 + v41;
			*(v15 - 1) = (float)(v46.m128_f32[0] * v16)
				+ (float)((float)(_mm_shuffle_ps(v44, v44, 85).m128_f32[0] + v44.m128_f32[0]) * v17);
			v49 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v56), v27);
			v15[result - 1] = (float)(v41 * v16)
				+ (float)((float)(_mm_shuffle_ps(v45, v45, 85).m128_f32[0] + v45.m128_f32[0]) * v17);
			v50 = _mm_shuffle_ps(v49, _mm_shuffle_ps(v49, v49, 15), 201);
			v11 = (float)((float)(v21 * v11) + v48) - v18;
			v18 = v48;
			if (v3)
			{
				v51 = *v4;
				*v4++ = v11;
				if (v4 == v5)
					v4 = v3;
			}
			else
			{
				v51 = v11;
			}
			v25 = v57;
			v26 = v58;
			v33 += 4;
			v52 = v12;
			v53 = v13 * v10;
			v10 = v51;
			v52.m128_f32[0] = (float)(v12.m128_f32[0] * v51) + v53;
			*((__m128*)v33 - 1) = _mm_add_ps(_mm_shuffle_ps(v52, v52, 0), v50);
			if ((unsigned __int64)v33 >= v7)
				v33 = v6;
			--v14;
		} while (v14);
	}
	*(float*)(a1 + 76) = v10;
	*(float*)(a1 + 560) = v18;
	*(float*)(a1 + 564) = v11;
	*(_QWORD*)(a1 + 48) = v4;
	*(_QWORD*)(a1 + 168) = v24;
	*(__m128*)(a1 + 496) = v27;
	*(_QWORD*)(a1 + 304) = v33;
	*(_QWORD*)(a1 + 144) = v32;
	*(_QWORD*)(a1 + 152) = v22;
	*(_QWORD*)(a1 + 160) = v23;
	return result;
}
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;

