#include "../winhttp.h"

//----- (000000014014D1E0) ----------------------------------------------------
__int64 __fastcall sub_14014D1E0(_QWORD* a1)
{
	float v2; // xmm6_4
	double v3; // xmm8_8
	double v4; // xmm7_8
	int v5; // ecx
	__m128* v6; // rax
	__m128* v7; // r9
	__m128 v8; // xmm6
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__m128 v13; // [rsp+20h] [rbp-78h] BYREF
	__m128 v14; // [rsp+30h] [rbp-68h] BYREF
	__m128 v15; // [rsp+40h] [rbp-58h] BYREF
	__m128 v16[2]; // [rsp+50h] [rbp-48h] BYREF

	v13 = *(__m128*)sub_140056AB0(a1, 1u);
	v15 = *(__m128*)sub_140056AB0(a1, 2u);
	v14 = *(__m128*)sub_140056AB0(a1, 3u);
	v2 = sub_140056C40(a1, 4u);
	HIDWORD(v3) = 0;
	*(float*)&v3 = sub_140056C40(a1, 5u);
	HIDWORD(v4) = 0;
	*(float*)&v4 = *(float*)&v3 + v2;
	*(float*)&v5 = *(float*)&v3 + v2;
	if (COERCE_INT(*(float*)&v3 + v2) < 0)
		v5 = 0x80000000 - v5;
	if ((int)abs32(v5) <= 84)
	{
		v8 = v16[0];
	}
	else
	{
		*(float*)&v3 = *(float*)&v3 / *(float*)&v4;
		sub_1401B1EE0(v16, &v13, &v14, v4);
		v6 = sub_1401B1EE0(&v14, &v13, &v15, v4);
		v8 = *sub_1401B1EE0(&v15, v6, v7, v3);
	}
	*(__m128*)sub_140059170(a1, 0x10ui64) = v8;
	v9 = a1[4];
	v10 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
	v11 = a1[2];
	v13.m128_u64[0] = v10;
	v13.m128_i32[2] = 4;
	sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v13, v11);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 14014D307: variable 'v7' is possibly undefined
// 14014D1E0: using guessed type __m128 var_48[2];

