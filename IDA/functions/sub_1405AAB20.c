#include "../winhttp.h"

//----- (00000001405AAB20) ----------------------------------------------------
_DWORD* __fastcall sub_1405AAB20(__int64 a1, _DWORD* a2, unsigned int a3, __m128* a4)
{
	int v8; // r14d
	__int64 v9; // rcx
	__int64 v10; // rax
	__m128 v11; // xmm1
	__m128 v12; // xmm0
	__m128 v13; // xmm1
	__int128* v14; // rax
	__int128 v15; // xmm1
	int v16; // edi
	__int64 v17; // rax
	__int64 v18; // rcx
	int v19; // ecx
	_DWORD* result; // rax
	int v21[4]; // [rsp+70h] [rbp-90h] BYREF
	__m128 v22[4]; // [rsp+80h] [rbp-80h] BYREF
	__int128 v23[4]; // [rsp+C0h] [rbp-40h] BYREF
	__m256 v24[2]; // [rsp+100h] [rbp+0h] BYREF
	double v25[8]; // [rsp+140h] [rbp+40h] BYREF
	__int128 v26[11]; // [rsp+180h] [rbp+80h] BYREF
	__m128* v27[10]; // [rsp+230h] [rbp+130h] BYREF

	v8 = sub_1405B0840(a1, a4);
	if (v8 || (v9 = *(_QWORD*)(a1 + 280)) == 0)
	{
		v14 = (__int128*)sub_1405B0600(a1, v24);
	}
	else
	{
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 56i64))(v9);
		v11 = *(__m128*)(v10 + 16);
		v22[0] = *(__m128*)v10;
		v12 = *(__m128*)(v10 + 32);
		v22[1] = v11;
		v13 = *(__m128*)(v10 + 48);
		v22[2] = v12;
		v14 = (__int128*)v22;
		v22[3] = v13;
	}
	v23[0] = *v14;
	v23[1] = v14[1];
	v23[2] = v14[2];
	v15 = v14[3];
	v27[0] = (__m128*)v23;
	v23[3] = v15;
	sub_1401AFC20((__int64*)v27, v25);
	v22[0].m128_u64[0] = (unsigned __int64)a4;
	v27[0] = a4;
	v22[0].m128_u64[1] = (unsigned __int64)v25;
	v27[1] = (__m128*)v25;
	sub_1401AFB10(v27, (__m128*)v24);
	sub_1404BD000((__int64)v22, (__m128*)v24);
	v16 = 0;
	sub_1404BCB00((__int64)v26, a1 + 8, 0i64, a3, 0, 0, 0, v8, 9, 0, v22, 0i64, 0);
	v17 = sub_140205FA0(*(_DWORD*)(a1 + 184));
	if (v17)
		v16 = *(_DWORD*)(v17 + 4);
	v19 = *sub_1404C91B0(v18, v21, *(_DWORD*)(a1 + 188), v16, v26);
	result = a2;
	*a2 = v19;
	return result;
}
// 1405AAC99: variable 'v18' is possibly undefined
// 1405AAB20: using guessed type __m256 var_1C0[2];
// 1405AAB20: using guessed type double var_180[8];
// 1405AAB20: using guessed type __int128 var_140[11];
// 1405AAB20: using guessed type int var_250[4];

