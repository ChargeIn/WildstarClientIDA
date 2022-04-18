#include "../winhttp.h"

//----- (00000001403A9F00) ----------------------------------------------------
__int64 __fastcall sub_1403A9F00(__int64 a1, unsigned int a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rbp
	float v8; // xmm6_4
	unsigned int* v9; // r14
	unsigned int* v10; // rdi
	__int64 v11; // rsi
	unsigned int* v12; // rax
	__m128 v13; // xmm1
	__m128 v14; // xmm2
	float v15; // xmm2_4
	__int64 v16; // rcx
	__int64 v17; // rcx

	v2 = qword_140C65898;
	if (!*(_DWORD*)(qword_140C65898 + 26176) || *(_DWORD*)(qword_140C65898 + 26180) != 81)
		return 0i64;
	v4 = sub_1401F2DA0(a2);
	v6 = v4;
	if (!v4 || !(unsigned int)sub_1403C9450(v5, *(_DWORD*)(v2 + 29008), *(_DWORD*)(v4 + 12)))
		return 0i64;
	v8 = 0.0;
	v9 = 0i64;
	v10 = (unsigned int*)(v6 + 16);
	v11 = 4i64;
	do
	{
		v12 = (unsigned int*)sub_14024B980(*v10);
		if (v12)
		{
			v13 = _mm_sub_ps(
				*(__m128*)(*(_QWORD*)(v2 + 120) + 4576i64),
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v12[3], (__m128)v12[5]),
					_mm_unpacklo_ps((__m128)v12[4], (__m128)0i64)));
			v14 = _mm_mul_ps(v13, v13);
			v15 = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
				+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
			if (!v9 || v8 > v15)
			{
				v9 = v12;
				v8 = v15;
			}
		}
		++v10;
		--v11;
	} while (v11);
	if (!v9)
		return 0i64;
	if (*(_DWORD*)(v2 + 32464))
	{
		v16 = *(_QWORD*)(v2 + 29504);
		*(_QWORD*)(v2 + 32464) = 0i64;
		Apollo_LUAEvent(v16, "CityDirectionClear", "i");
	}
	v17 = *(_QWORD*)(v2 + 29504);
	*(_DWORD*)(v2 + 32464) = a2;
	*(_DWORD*)(v2 + 32468) = *v9;
	sub_14042F9D0(v17, v6, v9);
	sub_1403A71F0(v2, 0, 0x65u, 1);
	return 1i64;
}
// 1403A9F4A: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

