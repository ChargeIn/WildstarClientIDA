//----- (00000001404C6490) ----------------------------------------------------
__m128* __fastcall sub_1404C6490(unsigned int* a1, __m128* a2)
{
	__m128 v4; // xmm3
	int v5; // r9d
	__m128* v6; // rcx
	double* v7; // rax
	__m128 v9; // [rsp+20h] [rbp-E0h] BYREF
	_QWORD v10[2]; // [rsp+30h] [rbp-D0h] BYREF
	__int128 v11; // [rsp+40h] [rbp-C0h]
	double v12[8]; // [rsp+70h] [rbp-90h] BYREF
	double v13[8]; // [rsp+B0h] [rbp-50h] BYREF
	char v14[64]; // [rsp+F0h] [rbp-10h] BYREF
	char v15[64]; // [rsp+130h] [rbp+30h] BYREF
	__int128 v16[6]; // [rsp+170h] [rbp+70h] BYREF
	__m128* v17[2]; // [rsp+1D0h] [rbp+D0h] BYREF
	__m128 v18[4]; // [rsp+1E0h] [rbp+E0h] BYREF
	unsigned int* v19; // [rsp+220h] [rbp+120h] BYREF
	double v20[8]; // [rsp+230h] [rbp+130h] BYREF

	v10[1] = 0i64;
	*(_QWORD*)&v11 = a1 + 36;
	v4 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a1[40], (__m128)a1[42]), _mm_unpacklo_ps((__m128)a1[41], (__m128)0i64));
	LODWORD(v10[0]) = a1[43];
	*((_QWORD*)&v11 + 1) = &v9;
	v9 = v4;
	v16[0] = v10[0];
	v16[1] = v11;
	sub_1401B0590((int*)v16, (__int64)v10);
	if (v5)
	{
		*(_QWORD*)&v16[0] = sub_1404C27A0((__int64)a1, (__int64)v14);
		sub_1401AFC20((__int64*)v16, v12);
		v6 = (__m128*)v10;
		v7 = v12;
	}
	else
	{
		*(_QWORD*)&v16[0] = sub_1404C27A0((__int64)a1, (__int64)v15);
		sub_1401AFC20((__int64*)v16, v13);
		v19 = a1 + 44;
		sub_1401AFC20((__int64*)&v19, v20);
		v9.m128_u64[0] = (unsigned __int64)v20;
		v9.m128_u64[1] = (unsigned __int64)v10;
		v17[0] = (__m128*)v20;
		v17[1] = (__m128*)v10;
		sub_1401AFB10(v17, v18);
		v6 = v18;
		v7 = v13;
	}
	v9.m128_u64[1] = (unsigned __int64)v7;
	v9.m128_u64[0] = (unsigned __int64)v6;
	*((_QWORD*)&v16[0] + 1) = v7;
	*(_QWORD*)&v16[0] = v6;
	sub_1401AFB10((__m128**)v16, a2);
	return a2;
}
// 1404C6537: variable 'v5' is possibly undefined
// 1404C6490: using guessed type char var_190[64];
// 1404C6490: using guessed type double var_210[8];
// 1404C6490: using guessed type char var_150[64];
// 1404C6490: using guessed type double var_1D0[8];
// 1404C6490: using guessed type double var_50[8];
// 1404C6490: using guessed type __m128 var_A0[4];

