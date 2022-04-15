//----- (0000000140147310) ----------------------------------------------------
__int64 __fastcall sub_140147310(_QWORD* a1)
{
	__m128* v2; // rax
	__m128 v3; // xmm7
	__m128 v4; // xmm2
	float v5; // xmm0_4
	__m128 v6; // xmm7
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v11; // [rsp+20h] [rbp-38h] BYREF
	int v12; // [rsp+28h] [rbp-30h]

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = (__m128)0x40400000u;
	v4 = _mm_mul_ps(*v2, *v2);
	v4.m128_f32[0] = (float)(v4.m128_f32[0] + _mm_shuffle_ps(v4, v4, 85).m128_f32[0])
		+ _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
	v5 = 1.0 / fsqrt(v4.m128_f32[0]);
	v3.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v4.m128_f32[0] * v5) * v5)) * 0.5) * v5, 0.0);
	v6 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *v2);
	*(__m128*)sub_140059170(a1, 0x10ui64) = v6;
	v7 = a1[4];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector3", 7ui64);
	v9 = a1[2];
	v11 = v8;
	v12 = 4;
	sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v11, v9);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

