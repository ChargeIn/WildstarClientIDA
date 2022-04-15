#include "../winhttp.h"

//----- (0000000140355BF0) ----------------------------------------------------
__int64 __fastcall sub_140355BF0(__m128* a1)
{
	__int32 v1; // eax
	__m128 v3; // xmm2
	int v4; // r9d
	int v5; // edx
	__m128 v6; // xmm1
	int v7; // ecx
	int v8; // eax
	int v9; // ecx
	int v10; // r11d
	int v11; // r10d
	int v12; // r9d
	int v13; // edx
	int v14; // eax
	__int64 result; // rax
	unsigned __int64 v16; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v17; // [rsp+28h] [rbp-10h]

	v1 = a1[8].m128_i32[0];
	if ((v1 & 1) == 0)
		return 0i64;
	v3 = _mm_mul_ps(
		_mm_add_ps(
			(__m128)xmmword_140B7AC50,
			_mm_mul_ps(
				_mm_shuffle_ps(a1[57], a1[57], 136),
				_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
		(__m128)xmmword_140B7B490);
	v4 = (int)v3.m128_f32[0];
	v5 = (int)_mm_shuffle_ps(v3, v3, 85).m128_f32[0];
	if ((v1 & 0x4000) != 0)
	{
		v6 = (__m128)a1[9].m128_u32[1];
		v6.m128_f32[0] = fminf(v6.m128_f32[0], a1[8].m128_f32[2]) / *(float*)&dword_140C44018;
		v7 = (int)v6.m128_f32[0];
		if ((int)v6.m128_f32[0] != 0x80000000 && (float)v7 != v6.m128_f32[0])
			v6.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v6, v6)) & 1) + v7);
		v8 = (int)v6.m128_f32[0] + 2;
		v9 = (int)v6.m128_f32[0] + 1;
		v10 = v8 + v4;
		v11 = v8 + v5;
		v12 = v4 - v9;
		v13 = v5 - v9;
		v17 = __PAIR64__(v11, v10);
		v16 = __PAIR64__(v13, v12);
		if (a1[156].m128_i32[0] >= v12)
			LODWORD(v17) = v10 + 1;
		else
			LODWORD(v16) = v12 - 1;
		if (a1[156].m128_i32[1] < v13)
		{
			HIDWORD(v16) = v13 - 1;
			goto LABEL_14;
		}
		v14 = v11 + 1;
	}
	else
	{
		v16 = qword_140C784C0;
		LODWORD(v17) = qword_140C784C8;
		v14 = HIDWORD(qword_140C784C8);
	}
	HIDWORD(v17) = v14;
LABEL_14:
	if (v16 == a1[156].m128_u64[0] && v17 == a1[156].m128_u64[1])
		return 0i64;
	result = sub_140355D50((__int64)a1, (__int64)&v16);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44018: using guessed type int dword_140C44018;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;

