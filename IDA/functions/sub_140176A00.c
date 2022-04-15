#include "../winhttp.h"

//----- (0000000140176A00) ----------------------------------------------------
__int64 __fastcall sub_140176A00(_QWORD* a1)
{
	float* v2; // rbx
	float v3; // xmm6_4
	double v4; // xmm0_8
	_DWORD* v5; // rcx
	float v6; // xmm7_4
	double v7; // xmm0_8
	float v8; // xmm4_4
	float v9; // xmm0_4
	__int64 result; // rax

	v2 = (float*)sub_1401768E0(a1);
	v3 = sub_140056C40(a1, 2u);
	v4 = sub_140056C40(a1, 3u);
	v5 = (_DWORD*)(a1[3] + 48i64);
	v6 = v4;
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
		v7 = 1.0;
	else
		v7 = sub_140056C40(a1, 4u);
	v2[256] = v3;
	v8 = fminf(v6, v2[258]);
	v2[257] = v6;
	v9 = v7;
	result = 0i64;
	v2[259] = v9;
	v2[258] = fmaxf(v3, v8);
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

