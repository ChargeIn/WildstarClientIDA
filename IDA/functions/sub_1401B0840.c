#include "../winhttp.h"

//----- (00000001401B0840) ----------------------------------------------------
float* __fastcall sub_1401B0840(int* a1, __int64 a2)
{
	int v2; // xmm0_4
	double v4; // xmm7_8
	float v6; // xmm6_4
	float v7; // xmm0_4
	float* v8; // rax
	float v9; // xmm1_4
	float* result; // rax
	__m128* v11; // [rsp+20h] [rbp-78h] BYREF
	int* v12; // [rsp+28h] [rbp-70h]
	int v13[2]; // [rsp+30h] [rbp-68h] BYREF
	__int64 v14; // [rsp+38h] [rbp-60h]
	float v15; // [rsp+40h] [rbp-58h]
	float v16; // [rsp+44h] [rbp-54h]
	__int64 v17; // [rsp+48h] [rbp-50h]
	__int128 v18; // [rsp+50h] [rbp-48h]
	__int128 v19; // [rsp+60h] [rbp-38h]

	*(_QWORD*)(a2 + 52) = 0i64;
	*(_QWORD*)(a2 + 44) = 0i64;
	*(_QWORD*)(a2 + 32) = 0i64;
	*(_QWORD*)(a2 + 24) = 0i64;
	*(_QWORD*)(a2 + 12) = 0i64;
	*(_QWORD*)(a2 + 4) = 0i64;
	v2 = *a1;
	*(_DWORD*)(a2 + 20) = *a1;
	*(_DWORD*)a2 = v2;
	*(_DWORD*)(a2 + 60) = 1065353216;
	*(_DWORD*)(a2 + 40) = 1065353216;
	*(_QWORD*)&v4 = (unsigned int)a1[4];
	if (*(float*)&v4 != 0.0)
	{
		v6 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)a1[4]));
		v7 = sub_1408FC950(v4);
		v8 = (float*)*((_QWORD*)a1 + 1);
		*(float*)&v13[1] = v6;
		v14 = 0i64;
		*(float*)v13 = v7;
		v16 = v7;
		v19 = xmmword_140C78440;
		v17 = 0i64;
		v11 = (__m128*)a2;
		v15 = -v6;
		v18 = xmmword_140B7A700;
		if (v8)
		{
			*(float*)(a2 + 48) = -*v8;
			v9 = *(float*)(*((_QWORD*)a1 + 1) + 4i64);
			v12 = v13;
			*(float*)(a2 + 52) = -v9;
			sub_1401AFB10(&v11, (__m128*)a2);
			*(float*)(a2 + 48) = **((float**)a1 + 1) + *(float*)(a2 + 48);
			*(float*)(a2 + 52) = *(float*)(*((_QWORD*)a1 + 1) + 4i64) + *(float*)(a2 + 52);
		}
		else
		{
			v12 = v13;
			sub_1401AFB10(&v11, (__m128*)a2);
		}
	}
	result = (float*)*((_QWORD*)a1 + 3);
	if (result)
	{
		*(float*)(a2 + 48) = *result + *(float*)(a2 + 48);
		result = (float*)*((_QWORD*)a1 + 3);
		*(float*)(a2 + 52) = result[1] + *(float*)(a2 + 52);
	}
	return result;
}
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78440: using guessed type __int128 xmmword_140C78440;

