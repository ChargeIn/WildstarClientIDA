#include "../winhttp.h"

//----- (00000001405AB340) ----------------------------------------------------
_DWORD* __fastcall sub_1405AB340(__int64 a1, _DWORD* a2, __int64 a3, __m128* a4)
{
	int v8; // r15d
	__int64 v9; // rcx
	__int64 v10; // rax
	__m128 v11; // xmm1
	__m128 v12; // xmm0
	__m128 v13; // xmm1
	__int128* v14; // rax
	__int128 v15; // xmm1
	__int64 v16; // rax
	__int64 v17; // r14
	__int64 v18; // rax
	int v19; // ecx
	int v20; // edi
	__int64 v21; // rax
	__int64 v22; // rcx
	int v24[4]; // [rsp+70h] [rbp-90h] BYREF
	__m128 v25[4]; // [rsp+80h] [rbp-80h] BYREF
	__int128 v26[4]; // [rsp+C0h] [rbp-40h] BYREF
	__m256 v27[2]; // [rsp+100h] [rbp+0h] BYREF
	double v28[8]; // [rsp+140h] [rbp+40h] BYREF
	__int128 v29[11]; // [rsp+180h] [rbp+80h] BYREF
	__m128* v30[10]; // [rsp+230h] [rbp+130h] BYREF

	v8 = sub_1405B0840(a1, a4);
	if (v8 || (v9 = *(_QWORD*)(a1 + 280)) == 0)
	{
		v14 = (__int128*)sub_1405B0600(a1, v27);
	}
	else
	{
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 56i64))(v9);
		v11 = *(__m128*)(v10 + 16);
		v25[0] = *(__m128*)v10;
		v12 = *(__m128*)(v10 + 32);
		v25[1] = v11;
		v13 = *(__m128*)(v10 + 48);
		v25[2] = v12;
		v14 = (__int128*)v25;
		v25[3] = v13;
	}
	v26[0] = *v14;
	v26[1] = v14[1];
	v26[2] = v14[2];
	v15 = v14[3];
	v30[0] = (__m128*)v26;
	v26[3] = v15;
	sub_1401AFC20((__int64*)v30, v28);
	v25[0].m128_u64[0] = (unsigned __int64)a4;
	v30[0] = a4;
	v25[0].m128_u64[1] = (unsigned __int64)v28;
	v30[1] = (__m128*)v28;
	sub_1401AFB10(v30, (__m128*)v27);
	sub_1404BD000((__int64)v25, (__m128*)v27);
	v16 = sub_14077DD00(a1 + 440, a3);
	v17 = v16;
	if (v16)
	{
		v18 = sub_140203DA0(*(_DWORD*)(v16 + 8));
		if (v18)
		{
			v19 = 5;
			if (*(_DWORD*)(v18 + 8) == 54)
				v19 = 10;
			v20 = 0;
			sub_1404BCB00(
				(__int64)v29,
				a1 + 8,
				a3,
				*(_DWORD*)(v17 + 8),
				0,
				0,
				0,
				v8,
				v19,
				0,
				v25,
				0i64,
				*(_DWORD*)(v17 + 12));
			v21 = sub_140205FA0(*(_DWORD*)(a1 + 184));
			if (v21)
				v20 = *(_DWORD*)(v21 + 4);
			*a2 = *sub_1404C91B0(v22, v24, *(_DWORD*)(a1 + 188), v20, v29);
		}
	}
	return a2;
}
// 1405AB4F9: variable 'v22' is possibly undefined
// 1405AB340: using guessed type __m256 var_1C0[2];
// 1405AB340: using guessed type double var_180[8];
// 1405AB340: using guessed type __int128 var_140[11];
// 1405AB340: using guessed type int var_250[4];

