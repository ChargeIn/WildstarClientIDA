#include "../winhttp.h"

//----- (0000000140103B20) ----------------------------------------------------
__int64 __fastcall sub_140103B20(_QWORD* a1, __m128* a2, __m128* a3, double a4)
{
	__m128* v4; // r9
	__int64 v6; // rcx
	int v7; // esi
	__int64 i; // rdi
	bool v9; // sf
	_QWORD* v10; // rcx
	__int64 result; // rax
	__int64 v12; // rax
	__m128i v13; // xmm2
	float v14; // xmm1_4
	__m128i v15; // xmm0
	float v16; // [rsp+30h] [rbp-78h] BYREF
	__m128* v17; // [rsp+38h] [rbp-70h]
	__m128* v18; // [rsp+40h] [rbp-68h]
	__m128 v19; // [rsp+50h] [rbp-58h] BYREF
	float v20; // [rsp+60h] [rbp-48h]
	float v21; // [rsp+64h] [rbp-44h]

	v4 = a2;
	v17 = a2;
	v6 = a1[8] - a1[7];
	v18 = a3;
	if (!(unsigned int)(v6 / 304))
	{
		v7 = 0;
		for (i = 0i64; v7 < (int)((__int64)(a1[12] - a1[11]) >> 3); ++i)
		{
			v9 = i < 0;
			if (i > 0)
			{
				(*(void(__fastcall**)(__int64, __int64, __m128*, __m128*))(*(_QWORD*)qword_140C65680 + 144i64))(
					qword_140C65680,
					1i64,
					a3,
					v4);
				v4 = v17;
				v9 = i < 0;
			}
			if (v9)
			{
				v10 = 0i64;
			}
			else if (v7 < (int)((__int64)(a1[12] - a1[11]) >> 3))
			{
				v10 = *(_QWORD**)(a1[11] + 8 * i);
			}
			else
			{
				v10 = a1;
			}
			sub_140103B20(v10, v4);
			a3 = v18;
			v4 = v17;
			++v7;
		}
		return 0i64;
	}
	v16 = 0.0;
	v12 = sub_140101260((__int64)a1, a4, &v16);
	if (!v12)
		return 2147942413i64;
	v13 = _mm_cvtsi32_si128(0);
	v14 = (float)*(int*)(v12 + 68);
	v15 = _mm_cvtsi32_si128(*(_DWORD*)(v12 + 64));
	v19 = _mm_sub_ps(
		*v17,
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v12 + 72)), v13),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v12 + 76)), v13))));
	v20 = _mm_cvtepi32_ps(v15).m128_f32[0] + v19.m128_f32[0];
	v21 = v14 + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
	if (!*(_QWORD*)v12)
		return 0i64;
	result = sub_140100010(v12, &v19, v18, v16, 0);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 140C65680: using guessed type __int64 qword_140C65680;

