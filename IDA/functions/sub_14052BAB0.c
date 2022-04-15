#include "../winhttp.h"

//----- (000000014052BAB0) ----------------------------------------------------
__int64 __fastcall sub_14052BAB0(__int64 a1, __int64 a2)
{
	unsigned int* v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // r8d
	__int64 v7; // rdx
	__int64(__fastcall * **v8)(_QWORD); // rax
	__m128 v10; // [rsp+40h] [rbp-18h] BYREF
	__int64 v11; // [rsp+68h] [rbp+10h] BYREF

	if (a2
		&& (v4 = (unsigned int*)sub_14024B980(*(_DWORD*)(*(_QWORD*)(a2 + 8) + 60i64))) != 0i64
		&& (v5 = *(_QWORD*)(a1 + 1152),
			v6 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 56i64),
			v10 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)v4[3], (__m128)v4[5]),
				_mm_unpacklo_ps((__m128)v4[4], (__m128)0i64)),
			qword_140C658F8)
		&& (v7 = v4[10],
			v11 = qword_140C77760,
			(v8 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(v5, v7, v6, v10.m128_f32, v5, 1, &v11)) != 0i64))
	{
		return (**v8)(v8);
	}
	else
	{
		return 0i64;
	}
}
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;
// 14052BAB0: using guessed type __m128 var_18;

