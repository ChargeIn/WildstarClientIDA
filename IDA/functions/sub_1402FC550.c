#include "../winhttp.h"

//----- (00000001402FC550) ----------------------------------------------------
__int64 __fastcall sub_1402FC550(
	__int64* a1,
	int a2,
	float a3,
	_DWORD* a4,
	__m128** a5,
	__m128* a6,
	__m128* a7,
	__int64 a8)
{
	__int64 v9; // r14
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64 v13; // r14
	__int64 result; // rax
	__int64 v15; // r8
	__int64 v16; // r14
	__int64 v17; // r8
	int v18; // xmm1_4
	__int64 v19; // rax
	double v20; // xmm6_8
	float v21; // xmm8_4
	float v22; // xmm9_4
	float v23; // xmm7_4
	float v24; // xmm0_4
	float v25; // xmm7_4
	float v26; // xmm9_4
	float v27; // xmm3_4
	float v28; // xmm5_4
	float v29; // xmm4_4
	float v30; // xmm1_4
	__m128* v31; // [rsp+20h] [rbp-E0h] BYREF
	double* v32; // [rsp+28h] [rbp-D8h]
	double v33[8]; // [rsp+30h] [rbp-D0h] BYREF
	__m128* v34; // [rsp+70h] [rbp-90h] BYREF
	double* v35; // [rsp+78h] [rbp-88h]

	v9 = a2;
	if (!a2)
		return 2147500037i64;
	if (a2 >= 61)
		return 2147500037i64;
	v11 = *a1;
	LODWORD(v31) = -1;
	(*(void(__fastcall**)(__int64*, __m128**, _QWORD))(v11 + 16))(a1, &v31, 0i64);
	v12 = a1[8];
	if ((unsigned int)v9 >= *(_DWORD*)(v12 + 824))
		return 2147500037i64;
	v13 = *(unsigned __int16*)(*(_QWORD*)(v12 + 832) + 2 * v9);
	if ((unsigned int)v13 >= *(_DWORD*)(v12 + 808))
		return 2147500037i64;
	result = sub_140300DD0((__int64)a1, 0xCu);
	if ((int)result < 0)
		return result;
	v15 = (unsigned int)v13;
	v16 = a1[92] + 32 * v13;
	v17 = *(_QWORD*)(a1[8] + 816) + 56 * v15;
	if (a5)
	{
		v18 = *(_DWORD*)(v17 + 48);
		LODWORD(v31) = *(_DWORD*)(v17 + 44);
		HIDWORD(v31) = v18;
		*a5 = v31;
	}
	if (a6)
	{
		v34 = (__m128*)(a1[103] + ((unsigned __int64)*(unsigned __int16*)(v17 + 2) << 6));
		sub_1401AFC20((__int64*)&v34, v33);
		v31 = (__m128*)(a1[2] + 240);
		v32 = v33;
		v34 = v31;
		v35 = v33;
		sub_1401AFB10(&v34, a6);
	}
	if (a7)
	{
		v31 = (__m128*)(a1[103] + ((unsigned __int64)*(unsigned __int16*)(v17 + 2) << 6));
		v19 = a1[2] + 304;
		v34 = v31;
		v32 = (double*)v19;
		v35 = (double*)v19;
		sub_1401AFB10(&v34, a7);
	}
	if (*(_DWORD*)(v17 + 4))
	{
		if (a8)
		{
			v27 = *(float*)(v17 + 40);
			v28 = *(float*)(v17 + 44);
			v29 = *(float*)(v17 + 48);
			*(_QWORD*)(a8 + 4) = 0i64;
			*(_QWORD*)(a8 + 12) = 0i64;
			*(_QWORD*)(a8 + 24) = 0i64;
			*(_QWORD*)(a8 + 32) = 0i64;
			*(_QWORD*)(a8 + 44) = 0i64;
			*(_DWORD*)(a8 + 52) = 0;
			*(_DWORD*)(a8 + 60) = 1065353216;
			*(float*)a8 = 2.0 / (float)(v27 / a3);
			*(float*)(a8 + 20) = 2.0 / v27;
			v30 = 1.0 / (float)(v28 - v29);
			*(float*)(a8 + 40) = v30;
			*(float*)(a8 + 56) = v30 * v28;
		}
		if (a4)
			*a4 = 0;
	}
	else
	{
		if (a8)
		{
			*(_QWORD*)&v20 = *(unsigned int*)(v16 + 8);
			*(float*)&v20 = *(float*)&v20 * 0.5;
			v21 = *(float*)(v17 + 44);
			v22 = *(float*)(v17 + 48);
			v23 = sub_1408FC950(v20);
			v24 = sub_1408FE3D0(v20);
			*(_QWORD*)(a8 + 4) = 0i64;
			*(_QWORD*)(a8 + 12) = 0i64;
			*(_QWORD*)(a8 + 24) = 0i64;
			v25 = v23 / v24;
			*(_QWORD*)(a8 + 32) = 0i64;
			*(_DWORD*)(a8 + 44) = -1082130432;
			*(_QWORD*)(a8 + 48) = 0i64;
			v26 = v22 / (float)(v21 - v22);
			*(float*)(a8 + 20) = v25;
			*(_DWORD*)(a8 + 60) = 0;
			*(float*)(a8 + 40) = v26;
			*(float*)a8 = v25 / a3;
			*(float*)(a8 + 56) = v26 * v21;
		}
		if (a4)
		{
			*a4 = *(_DWORD*)(v16 + 8);
			return 0i64;
		}
	}
	return 0i64;
}
// 1402FC6C3: variable 'v17' is possibly undefined
// 1402FC550: using guessed type double var_120[8];

