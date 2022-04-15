#include "../winhttp.h"

//----- (00000001406FDF20) ----------------------------------------------------
__int64 __fastcall sub_1406FDF20(_QWORD* a1)
{
	__m128* v2; // rax
	__int64 v3; // rdx
	__m128 v4; // xmm1
	__m128* v5; // rax
	__m128 v6; // xmm5
	__m128 v7; // xmm0
	__m128 v8; // xmm5
	float v9; // xmm3_4
	float v10; // xmm2_4
	float v11; // xmm1_4
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // r9
	__int128 v16; // [rsp+20h] [rbp-18h] BYREF

	if (!qword_140C65898 || !*(_QWORD*)(qword_140C65898 + 29504))
		return 0i64;
	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = *(_QWORD*)(qword_140C65898 + 29096);
	v4 = *v2;
	if (!v3)
		v3 = *(_QWORD*)(qword_140C65898 + 29088);
	v5 = *(__m128**)(qword_140C65898 + 29096);
	if (!v5)
		v5 = *(__m128**)(qword_140C65898 + 29088);
	v6 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), v5[23]), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v5[22])),
			_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), v5[24])),
		v5[25]);
	v7 = _mm_and_ps(_mm_shuffle_ps(v6, v6, 255), (__m128)xmmword_140B7B500);
	v8 = _mm_div_ps(v6, _mm_shuffle_ps(v7, v7, 0));
	v9 = 1.0 / *(float*)(*(_QWORD*)(qword_140C65898 + 29504) + 88i64);
	v7.m128_i32[0] = *(_DWORD*)(v3 + 496);
	v10 = (float)((float)(0.5 - (float)(_mm_shuffle_ps(v8, v8, 85).m128_f32[0] * 0.5)) * (float)*(int*)(v3 + 492))
		+ (float)*(int*)(v3 + 484);
	v11 = *(float*)(v3 + 500);
	*(float*)&v16 = (float)((float)((float)((float)(v8.m128_f32[0] + 1.0) * 0.5) * (float)*(int*)(v3 + 488))
		+ (float)*(int*)(v3 + 480))
		* v9;
	*((float*)&v16 + 1) = v10 * v9;
	*((float*)&v16 + 2) = (float)((float)(v11 - v7.m128_f32[0]) * _mm_shuffle_ps(v8, v8, 170).m128_f32[0])
		+ v7.m128_f32[0];
	*(_OWORD*)sub_140059170(a1, 0x10ui64) = v16;
	v12 = a1[4];
	v13 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector3", 7ui64);
	v14 = a1[2];
	*(_QWORD*)&v16 = v13;
	DWORD2(v16) = 4;
	sub_14005E8E0((__int64)a1, v12 + 160, (int*)&v16, v14);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;

