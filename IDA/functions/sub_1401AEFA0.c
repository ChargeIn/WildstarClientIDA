//----- (00000001401AEFA0) ----------------------------------------------------
__int64 __fastcall sub_1401AEFA0(__int64 a1, __int64 a2)
{
	float* v2; // rdx
	__m128 v3; // xmm7
	float* v4; // rax
	float v5; // xmm5_4
	float v6; // xmm4_4
	float v7; // xmm6_4
	__m128 v8; // xmm2
	__int64 result; // rax
	float v10; // xmm4_4
	float v11; // xmm6_4
	__m128 v12; // xmm1
	__m128 v13; // xmm7
	float v14; // xmm3_4

	v2 = (float*)(a2 + 112);
	v3 = *(__m128*) * (_QWORD*)a1;
	v4 = *(float**)(a1 + 16);
	v5 = v4[2];
	v6 = v4[1];
	v7 = *v4;
	v8 = _mm_mul_ps(_mm_add_ps(*(__m128*) * (_QWORD*)(a1 + 8), v3), (__m128)xmmword_140B7AC50);
	result = 5i64;
	v10 = -v6;
	v11 = -v7;
	v12 = _mm_mul_ps((__m128)xmmword_140B7B390, v8);
	*(v2 - 28) = v12.m128_f32[0];
	v13 = _mm_mul_ps(_mm_sub_ps(v3, v8), (__m128)xmmword_140B7B340);
	*((_DWORD*)v2 - 16) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
	*((_DWORD*)v2 - 4) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
	v14 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
	*(v2 - 27) = v13.m128_f32[0] * v10;
	*(v2 - 26) = v13.m128_f32[0] * v5;
	*(v2 - 15) = v14 * v10;
	v12.m128_f32[0] = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
	*(v2 - 25) = v13.m128_f32[0] * v11;
	*(v2 - 3) = v12.m128_f32[0] * v10;
	*(v2 - 2) = v12.m128_f32[0] * v5;
	*(v2 - 1) = v12.m128_f32[0] * v11;
	*(v2 - 14) = v14 * v5;
	*(v2 - 13) = v14 * v11;
	do
	{
		*(v2 - 24) = 0.0;
		*(v2 - 12) = 0.0;
		*v2++ = 0.0;
		--result;
	} while (result);
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B340: using guessed type __int128 xmmword_140B7B340;
// 140B7B390: using guessed type __int128 xmmword_140B7B390;

