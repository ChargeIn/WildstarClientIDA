#include "../winhttp.h"

//----- (0000000140122A00) ----------------------------------------------------
int* __fastcall sub_140122A00(int* a1, __int64 a2, __int64 a3)
{
	__m128 v5; // xmm1
	int v6; // ecx
	int v7; // edx
	__m128 v8; // xmm1
	int v9; // ecx
	int v10; // eax
	__int128 v11; // [rsp+40h] [rbp-38h] BYREF
	__int64 v12; // [rsp+50h] [rbp-28h] BYREF
	float v13; // [rsp+60h] [rbp-18h]
	float v14; // [rsp+64h] [rbp-14h]

	if (a3)
	{
		v12 = 0i64;
		v13 = 400.0;
		v11 = xmmword_140B7B240;
		v14 = 0.0;
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64*, int, __int128*, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				a2,
				a3,
				-1i64,
				&v12,
				1040,
				&v11,
				1);
		v5 = (__m128)LODWORD(v13);
		v5.m128_f32[0] = v13 - *(float*)&v12;
		v6 = (int)(float)(v13 - *(float*)&v12);
		if (v6 != 0x80000000 && (float)v6 != v5.m128_f32[0])
			v5.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v5, v5)) & 1) + v6);
		v7 = (int)v5.m128_f32[0];
		v8 = (__m128)LODWORD(v14);
		v8.m128_f32[0] = v14 - *((float*)&v12 + 1);
		v9 = (int)(float)(v14 - *((float*)&v12 + 1));
		if (v9 != 0x80000000 && (float)v9 != v8.m128_f32[0])
			v8.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v8, v8)) & 1) + v9);
		v10 = 200;
		if (v7 >= 200)
		{
			v10 = v7;
			if (v7 > 400)
				v10 = 400;
		}
		*a1 = v10;
		a1[1] = (int)v8.m128_f32[0];
		return a1;
	}
	else
	{
		*(_QWORD*)a1 = qword_140C77760;
		return a1;
	}
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;

