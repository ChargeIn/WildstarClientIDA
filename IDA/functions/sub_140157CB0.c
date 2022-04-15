#include "../winhttp.h"

//----- (0000000140157CB0) ----------------------------------------------------
__int64 __fastcall sub_140157CB0(__int64 a1, __m128* a2, __int64 a3, __m128* a4, __int64 a5)
{
	__int64 v9; // rax
	__m128 v10; // xmm3
	float v12; // xmm2_4
	int v13; // xmm0_4
	int v14[8]; // [rsp+30h] [rbp-48h] BYREF
	__m128 v15; // [rsp+50h] [rbp-28h] BYREF
	__m128 v16; // [rsp+60h] [rbp-18h]

	*a4 = 0i64;
	a4->m128_f32[0] = (float)(*(float*)a3 - a2[1].m128_f32[0]) - 10.0;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v10 = _mm_add_ps(*a2, *a4);
	v16 = _mm_add_ps(a2[1], *a4);
	v15 = v10;
	if ((float)(v10.m128_f32[0] - 10.0) < 0.0)
		return 0i64;
	v12 = (float)*(int*)(v9 + 12);
	if (*(float*)(a3 + 20) <= v12)
		v12 = *(float*)(a3 + 20);
	v13 = *(_DWORD*)(a3 + 4);
	v14[0] = v10.m128_i32[0];
	v14[1] = v13;
	*(float*)&v14[4] = v16.m128_f32[0] + 10.0;
	*(float*)&v14[5] = v12;
	return sub_1401580E0(a1, (__int64)&v15, (__int64)v14, &a4->m128_f32[1], a5);
}
// 140C65670: using guessed type __int64 qword_140C65670;

