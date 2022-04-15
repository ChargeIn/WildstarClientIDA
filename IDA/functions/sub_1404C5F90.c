#include "../winhttp.h"

//----- (00000001404C5F90) ----------------------------------------------------
__int64 __fastcall sub_1404C5F90(unsigned int* a1)
{
	__m128 v2; // xmm3
	__int64 v3; // r10
	int v4; // r9d
	__int64 result; // rax
	__m128 v6; // [rsp+20h] [rbp-E0h] BYREF
	__m128 v7; // [rsp+30h] [rbp-D0h] BYREF
	__int128 v8; // [rsp+40h] [rbp-C0h]
	__int128 v9; // [rsp+50h] [rbp-B0h]
	__int128 v10; // [rsp+60h] [rbp-A0h]
	__m128 v11; // [rsp+70h] [rbp-90h] BYREF
	__int128 v12; // [rsp+80h] [rbp-80h]
	__int128 v13; // [rsp+90h] [rbp-70h]
	__int128 v14; // [rsp+A0h] [rbp-60h]
	__int128 v15[6]; // [rsp+B0h] [rbp-50h] BYREF
	unsigned int* v16; // [rsp+110h] [rbp+10h] BYREF
	double v17[8]; // [rsp+120h] [rbp+20h] BYREF

	v7.m128_u64[1] = 0i64;
	*(_QWORD*)&v8 = a1 + 128;
	v2 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)a1[132], (__m128)a1[134]),
		_mm_unpacklo_ps((__m128)a1[133], (__m128)0i64));
	v7.m128_i32[0] = 1065353216;
	*((_QWORD*)&v8 + 1) = &v6;
	v6 = v2;
	v15[0] = v7.m128_u64[0];
	v15[1] = v8;
	sub_1401B0590((int*)v15, (__int64)&v7);
	if (v4)
	{
		v11 = v7;
		v12 = v8;
		v13 = v9;
		v14 = v10;
	}
	else
	{
		v16 = a1 + 136;
		sub_1401AFC20((__int64*)&v16, v17);
		v6.m128_u64[0] = (unsigned __int64)v17;
		*(_QWORD*)&v15[0] = v17;
		v6.m128_u64[1] = (unsigned __int64)&v7;
		*((_QWORD*)&v15[0] + 1) = &v7;
		sub_1401AFB10((__m128**)v15, &v11);
	}
	*(__m128*)v3 = v11;
	*(_OWORD*)(v3 + 16) = v12;
	*(_OWORD*)(v3 + 32) = v13;
	result = v3;
	*(_OWORD*)(v3 + 48) = v14;
	return result;
}
// 1404C6029: variable 'v4' is possibly undefined
// 1404C60A9: variable 'v3' is possibly undefined
// 1404C5F90: using guessed type double var_50[8];

