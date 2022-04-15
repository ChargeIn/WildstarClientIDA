#include "../winhttp.h"

//----- (00000001402CB390) ----------------------------------------------------
__int64 __fastcall sub_1402CB390(__int64 a1, _OWORD* a2, __int64 a3, __int64 a4)
{
	__int128 v4; // xmm0
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7[10]; // [rsp+20h] [rbp-68h] BYREF

	*(_QWORD*)(a1 + 48) = a4;
	*(_OWORD*)(a1 + 80) = *a2;
	v4 = a2[1];
	v7[0] = a1 + 80;
	*(_OWORD*)(a1 + 96) = v4;
	*(_OWORD*)(a1 + 112) = a2[2];
	*(_OWORD*)(a1 + 128) = a2[3];
	sub_1401AFC20(v7, (double*)(a1 + 144));
	result = 0i64;
	*(_OWORD*)(v6 + 432) = 0i64;
	*(_OWORD*)(v6 + 448) = xmmword_140B7B240;
	*(_QWORD*)(v6 + 464) = 1065353216i64;
	*(_DWORD*)(v6 + 472) = 1065353216;
	*(_QWORD*)(v6 + 476) = 1065353216i64;
	*(_QWORD*)(v6 + 56) = 0i64;
	*(_DWORD*)(v6 + 72) = 0;
	return result;
}
// 1402CB3F1: variable 'v6' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 1402CB390: using guessed type __int64 var_68[10];

