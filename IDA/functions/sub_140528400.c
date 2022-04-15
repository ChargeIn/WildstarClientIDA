#include "../winhttp.h"

//----- (0000000140528400) ----------------------------------------------------
_DWORD* __fastcall sub_140528400(_DWORD* a1, _DWORD* a2)
{
	__int64 v2; // r8
	float v3; // xmm2_4
	__m128 v4; // xmm6
	float v5; // xmm0_4
	__m128 v6; // xmm6
	_DWORD* v7; // r9
	int v9[2]; // [rsp+20h] [rbp-98h] BYREF
	int v10; // [rsp+28h] [rbp-90h]
	int v11; // [rsp+2Ch] [rbp-8Ch]
	__m128 v12; // [rsp+30h] [rbp-88h]
	__m128 v13; // [rsp+40h] [rbp-78h]
	__m128 v14[4]; // [rsp+50h] [rbp-68h] BYREF

	*a2 = a1[16];
	a2[1] = a1[17];
	v9[0] = a1[9];
	v9[1] = a1[10];
	v10 = a1[11];
	v11 = a1[12];
	sub_14044A2D0(v9, (__int128*)v14);
	v12 = (__m128)xmmword_140C7CE20;
	v13 = (__m128)xmmword_140C7CE30;
	v12.m128_f32[0] = (float)(*(float*)&xmmword_140C7CE20 - (float)(*(float*)&xmmword_140C7CE00 * 0.5))
		+ (float)((float)((float)(*(float*)&xmmword_140C7CE00 * 3.0) * 0.25) * (float)(v10 - qword_140C77768));
	v3 = (float)(*((float*)&xmmword_140C7CE20 + 2) - (float)(*((float*)&xmmword_140C7CE00 + 1) * 0.5))
		+ (float)((float)(v11 - HIDWORD(qword_140C77768)) * *((float*)&xmmword_140C7CE00 + 1));
	v12.m128_f32[2] = v3;
	if ((v10 - (int)qword_140C77768) % 2 == 1)
	{
		v3 = v3 + (float)(*((float*)&xmmword_140C7CE00 + 1) * 0.5);
		v12.m128_f32[2] = v3;
	}
	v14[2] = v12;
	v13.m128_f32[0] = (float)((float)(*(float*)&xmmword_140C7CE20 - (float)(*(float*)&xmmword_140C7CE00 * 0.5))
		+ (float)((float)((float)(*(float*)&xmmword_140C7CE00 * 3.0) * 0.25)
			* (float)(v10 - qword_140C77768)))
		+ *(float*)&xmmword_140C7CE00;
	v13.m128_f32[2] = v3 + *((float*)&xmmword_140C7CE00 + 1);
	v4 = v13;
	v5 = sub_140528590(v2);
	v6 = _mm_sub_ps(v4, v14[0]);
	*v7 = (int)(float)((float)((float)(1.0 / v5) * v6.m128_f32[0]) + 0.5);
	v7[1] = (int)(float)((float)((float)(1.0 / v5) * _mm_shuffle_ps(v6, v6, 170).m128_f32[0]) + 0.5);
	return v7;
}
// 14052852F: variable 'v2' is possibly undefined
// 140528570: variable 'v7' is possibly undefined
// 140C77768: using guessed type __int64 qword_140C77768;
// 140C7CE00: using guessed type __int128 xmmword_140C7CE00;
// 140C7CE20: using guessed type __int128 xmmword_140C7CE20;
// 140C7CE30: using guessed type __int128 xmmword_140C7CE30;

