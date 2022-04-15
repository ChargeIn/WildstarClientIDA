//----- (00000001404C5DF0) ----------------------------------------------------
__int64 __fastcall sub_1404C5DF0(unsigned int* a1)
{
	__m128 v2; // xmm3
	__m128 v3; // xmm2
	__int64 v4; // r10
	__m128 v5; // xmm2
	__m128 v6; // xmm3
	__m128 v7; // xmm3
	int v8; // r9d
	__int128 v9; // xmm0
	__int128 v10; // xmm1
	__int128* v11; // rax
	__int128 v12; // xmm0
	unsigned __int64 v13; // r10
	__int128 v14; // xmm1
	__int128 v15; // xmm0
	__int128 v16; // xmm1
	__int64 result; // rax
	__m128 v18; // [rsp+20h] [rbp-E0h] BYREF
	__int128 v19; // [rsp+30h] [rbp-D0h] BYREF
	__int128 v20; // [rsp+40h] [rbp-C0h]
	__int128 v21; // [rsp+50h] [rbp-B0h]
	__m128 v22; // [rsp+60h] [rbp-A0h]
	__m128 v23[4]; // [rsp+70h] [rbp-90h] BYREF
	__int128 v24[6]; // [rsp+B0h] [rbp-50h] BYREF
	unsigned int* v25; // [rsp+110h] [rbp+10h] BYREF
	double v26[8]; // [rsp+120h] [rbp+20h] BYREF

	LODWORD(v19) = 1065353216;
	*(_QWORD*)&v20 = a1 + 128;
	*((_QWORD*)&v19 + 1) = 0i64;
	v2 = _mm_unpacklo_ps((__m128)a1[132], (__m128)a1[134]);
	v3 = _mm_unpacklo_ps((__m128)a1[133], (__m128)0i64);
	*((_QWORD*)&v20 + 1) = &v18;
	v18 = _mm_unpacklo_ps(v2, v3);
	v24[0] = (unsigned __int64)v19;
	v24[1] = v20;
	sub_1401B0590((int*)v24, (__int64)&v19);
	v5 = (__m128)v22.m128_u32[1];
	v6 = (__m128)v22.m128_u32[0];
	*(__m256*)v4 = ymmword_140C78410;
	*(_OWORD*)(v4 + 32) = xmmword_140C78430;
	v7 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, (__m128)v22.m128_u32[2]), _mm_unpacklo_ps(v5, (__m128)0x3F800000u));
	*(__m128*)(v4 + 48) = v7;
	if (v8)
	{
		v9 = *(_OWORD*)v4;
		v10 = *(_OWORD*)(v4 + 16);
		v22 = v7;
		v11 = &v19;
		v19 = v9;
		v12 = *(_OWORD*)(v4 + 32);
		v20 = v10;
		v21 = v12;
	}
	else
	{
		v25 = a1 + 136;
		sub_1401AFC20((__int64*)&v25, v26);
		v18.m128_u64[0] = (unsigned __int64)v26;
		v18.m128_u64[1] = v13;
		*(_QWORD*)&v24[0] = v26;
		*((_QWORD*)&v24[0] + 1) = v13;
		sub_1401AFB10((__m128**)v24, v23);
		v11 = (__int128*)v23;
	}
	v14 = v11[1];
	*(_OWORD*)v4 = *v11;
	v15 = v11[2];
	*(_OWORD*)(v4 + 16) = v14;
	v16 = v11[3];
	*(_OWORD*)(v4 + 32) = v15;
	result = v4;
	*(_OWORD*)(v4 + 48) = v16;
	return result;
}
// 1404C5E93: variable 'v4' is possibly undefined
// 1404C5ECE: variable 'v8' is possibly undefined
// 1404C5F1D: variable 'v13' is possibly undefined
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 1404C5DF0: using guessed type double var_50[8];
// 1404C5DF0: using guessed type __m128 var_100[4];

