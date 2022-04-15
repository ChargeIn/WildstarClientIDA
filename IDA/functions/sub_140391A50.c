#include "../winhttp.h"

//----- (0000000140391A50) ----------------------------------------------------
__int64 __fastcall sub_140391A50(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	float v4; // xmm4_4
	float v5; // xmm0_4
	float v6; // xmm1_4
	float v7; // xmm0_4
	float v8; // xmm1_4
	float v9; // xmm0_4
	float v10; // xmm4_4
	float v11; // xmm2_4
	__m128 v12; // xmm3
	__m128 v13; // xmm3
	__m128 v14; // [rsp+0h] [rbp-28h]
	__m128 v15; // [rsp+10h] [rbp-18h]

	if (*(int*)a3 >= 2)
		return 2147942487i64;
	*(_QWORD*)(a1 + 144) = a2;
	*(_DWORD*)(a1 + 152) = *(_DWORD*)(a2 + 880);
	*(_DWORD*)a1 = *(_DWORD*)a3;
	*(_DWORD*)(a1 + 4) = *(_DWORD*)(a3 + 4);
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a3 + 8);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a3 + 12);
	*(_OWORD*)(a1 + 16) = *(_OWORD*)(a3 + 16);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a3 + 32);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a3 + 36);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a3 + 40);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(a3 + 44);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a3 + 48);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a3 + 52);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(a3 + 56);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a3 + 60);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a3 + 64);
	*(_QWORD*)(a1 + 52) = *(_QWORD*)(a3 + 52);
	if (*(float*)(a1 + 8) > 1.0)
		*(_DWORD*)(a1 + 8) = 1065353216;
	v4 = *(float*)(a1 + 8);
	if ((float)(v4 + *(float*)(a1 + 12)) > 1.0)
		*(float*)(a1 + 12) = 1.0 - v4;
	*(float*)(a1 + 160) = 1.0 / (float)*(int*)(a1 + 48);
	if (v4 == 0.0)
		v5 = 0.0;
	else
		v5 = 1.0 / v4;
	v6 = *(float*)(a1 + 12);
	*(float*)(a1 + 164) = v5;
	if (v6 == 0.0)
		v7 = 0.0;
	else
		v7 = 1.0 / v6;
	v8 = *(float*)(a1 + 60);
	*(float*)(a1 + 168) = v7;
	if (v8 == 0.0)
		v9 = 1000000.0;
	else
		v9 = 3.1415927 / v8;
	v10 = *(float*)(a1 + 32);
	*(float*)(a1 + 172) = v9;
	if (v10 == 0.0)
		v11 = 100000.0;
	else
		v11 = 1.0 / (float)(v10 * *(float*)(a2 + 5508));
	*(float*)(a1 + 176) = v11;
	v15.m128_f32[0] = v10;
	v15.m128_f32[1] = v10;
	result = 0i64;
	v12 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 16), (__m128)0i64);
	*(float*)(a1 + 180) = v10 * v10;
	v13 = _mm_unpacklo_ps(v12, _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 24), (__m128)0i64));
	v14.m128_f32[0] = -v10;
	v14.m128_f32[1] = -v10;
	*(__m128*)(a1 + 80) = _mm_add_ps(v14, v13);
	*(__m128*)(a1 + 96) = _mm_add_ps(v15, v13);
	return result;
}
// 140391C12: variable 'v14' is possibly undefined
// 140391C00: variable 'v15' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140391A50: using guessed type __m128 var_18;

