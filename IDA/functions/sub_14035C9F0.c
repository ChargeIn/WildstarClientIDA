#include "../winhttp.h"

//----- (000000014035C9F0) ----------------------------------------------------
int* __fastcall sub_14035C9F0(__int64 a1, __m128* a2, __m128* a3, float* a4)
{
	float v4; // xmm4_4
	float v5; // xmm5_4
	__m128 v6; // xmm6
	float v7; // xmm1_4
	float v8; // xmm3_4
	__m128 v9; // xmm0
	int v10; // r11d
	int v11; // eax
	__int64 v12; // rdx
	int* result; // rax

	v4 = a3->m128_f32[1];
	v5 = a2->m128_f32[1];
	v6 = (__m128)0xC47A0000;
	v7 = (float)(*a4 * v4) + v5;
	v8 = (float)(a4[1] * v4) + v5;
	if (fminf(v7, v8) >= -1000.0)
		return 0i64;
	if (fmaxf(v7, v8) <= -1000.0)
		return 0i64;
	v6.m128_f32[0] = (float)(-1000.0 - v5) / v4;
	if (v6.m128_f32[0] < *a4)
		return 0i64;
	if (v6.m128_f32[0] >= a4[1])
		return 0i64;
	v9 = _mm_add_ps(*a2, _mm_mul_ps(*a3, _mm_shuffle_ps(v6, v6, 0)));
	v10 = (int)v9.m128_f32[0];
	v11 = (int)_mm_shuffle_ps(v9, v9, 170).m128_f32[0];
	if ((int)v9.m128_f32[0] < *(_DWORD*)(a1 + 2188))
		return 0i64;
	if (v10 >= *(_DWORD*)(a1 + 2196))
		return 0i64;
	if (v11 < *(_DWORD*)(a1 + 2192))
		return 0i64;
	if (v11 >= *(_DWORD*)(a1 + 2200))
		return 0i64;
	v12 = *(_QWORD*)(*(_QWORD*)(a1 + 2272)
		+ 8i64
		* (v10 % *(_DWORD*)(a1 + 2204)
			+ *(_DWORD*)(a1 + 2204)
			* (v11 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v11 % *(_DWORD*)(a1 + 2208) < 0))
			+ *(_DWORD*)(a1 + 2204) * (unsigned int)(v10 % *(_DWORD*)(a1 + 2204) < 0)));
	if (!v12)
		return 0i64;
	if ((*(_BYTE*)(v12 + 1120) & 1) == 0)
		return 0i64;
	result = sub_14018B280(256i64, 0);
	if (!result)
		return 0i64;
	result[3] = v6.m128_i32[0];
	result[2] = 1;
	*((_QWORD*)result + 2) = 0i64;
	*((_QWORD*)result + 3) = 0i64;
	*(_QWORD*)result = off_140B65FC8;
	return result;
}
// 140B65FC8: using guessed type __int64 (__fastcall *off_140B65FC8[10])();

