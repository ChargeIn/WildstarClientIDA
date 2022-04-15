//----- (0000000140528590) ----------------------------------------------------
float __fastcall sub_140528590(__int64 a1)
{
	__int64 v1; // r8
	int v2; // ecx
	__int32 v3; // eax
	float v4; // xmm1_4
	float v5; // xmm2_4
	__m128 v6; // xmm2
	float v7; // xmm0_4
	__m128 v9; // [rsp+20h] [rbp-68h] BYREF
	__m128 v10; // [rsp+30h] [rbp-58h]
	__m128 v11[4]; // [rsp+40h] [rbp-48h] BYREF

	v9 = *(__m128*)(a1 + 36);
	sub_14044A2D0((int*)&v9, (__int128*)v11);
	v2 = v9.m128_i32[2] - qword_140C77768;
	v3 = v9.m128_i32[3];
	v10 = (__m128)xmmword_140C7CE30;
	v9 = (__m128)xmmword_140C7CE20;
	v4 = (float)((float)(*(float*)&xmmword_140C7CE00 * 3.0) * 0.25) * (float)v2;
	v9.m128_f32[0] = (float)(*(float*)&xmmword_140C7CE20 - (float)(*(float*)&xmmword_140C7CE00 * 0.5)) + v4;
	v5 = (float)(*((float*)&xmmword_140C7CE20 + 2) - (float)(*((float*)&xmmword_140C7CE00 + 1) * 0.5))
		+ (float)((float)(v3 - HIDWORD(qword_140C77768)) * *((float*)&xmmword_140C7CE00 + 1));
	v9.m128_f32[2] = v5;
	if (v2 % 2 == 1)
	{
		v5 = v5 + (float)(*((float*)&xmmword_140C7CE00 + 1) * 0.5);
		v9.m128_f32[2] = v5;
	}
	v11[2] = v9;
	v10.m128_f32[2] = v5 + *((float*)&xmmword_140C7CE00 + 1);
	v10.m128_f32[0] = (float)((float)(*(float*)&xmmword_140C7CE20 - (float)(*(float*)&xmmword_140C7CE00 * 0.5)) + v4)
		+ *(float*)&xmmword_140C7CE00;
	v6 = _mm_sub_ps(v10, v11[0]);
	v7 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
	if (v6.m128_f32[0] <= v7)
		return v7 / (float)*(int*)(v1 + 68);
	else
		return v6.m128_f32[0] / (float)*(int*)(v1 + 64);
}
// 1405286B9: variable 'v1' is possibly undefined
// 140C77768: using guessed type __int64 qword_140C77768;
// 140C7CE00: using guessed type __int128 xmmword_140C7CE00;
// 140C7CE20: using guessed type __int128 xmmword_140C7CE20;
// 140C7CE30: using guessed type __int128 xmmword_140C7CE30;

