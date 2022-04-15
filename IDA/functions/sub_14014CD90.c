#include "../winhttp.h"

//----- (000000014014CD90) ----------------------------------------------------
__int64 __fastcall sub_14014CD90(_QWORD* a1)
{
	__m128* v2; // rbx
	__m128 v3; // xmm7
	double v4; // xmm8_8
	float v5; // xmm8_4
	__m128 v6; // xmm2
	float v7; // xmm0_4
	__m128 v8; // xmm7
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int128 v13; // [rsp+20h] [rbp-48h] BYREF

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = (__m128)0x40400000u;
	HIDWORD(v4) = 0;
	v5 = sub_140056C40(a1, 2u);
	v6 = _mm_mul_ps(*v2, *v2);
	*(float*)&v4 = v5 * 0.5;
	v6.m128_f32[0] = (float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
	v7 = 1.0 / fsqrt(v6.m128_f32[0]);
	v3.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v6.m128_f32[0] * v7) * v7)) * 0.5) * v7, 0.0);
	v8 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *v2);
	sub_1408FE3D0(v4);
	HIDWORD(v13) = sub_1408FC950(v4);
	*(float*)&v13 = v8.m128_f32[0] * *(float*)&v4;
	*((float*)&v13 + 2) = _mm_shuffle_ps(v8, v8, 170).m128_f32[0] * *(float*)&v4;
	*((float*)&v13 + 1) = _mm_shuffle_ps(v8, v8, 85).m128_f32[0] * *(float*)&v4;
	*(_OWORD*)sub_140059170(a1, 0x10ui64) = v13;
	v9 = a1[4];
	v10 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
	v11 = a1[2];
	*(_QWORD*)&v13 = v10;
	DWORD2(v13) = 4;
	sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v13, v11);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

