#include "../winhttp.h"

//----- (0000000140117B90) ----------------------------------------------------
__int64 __fastcall sub_140117B90(_QWORD* a1)
{
	__int64 v2; // rax
	float* v3; // rax
	int v4; // edx
	int v5; // r8d
	__int64 v6; // rax
	__int64 v7; // rax
	float v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = sub_140117A50(a1);
	v3 = sub_140141910(v2 + 1024, v9);
	v4 = (int)*v3;
	v5 = (int)v3[1];
	v6 = a1[2];
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (double)v4;
	a1[2] += 16i64;
	v7 = a1[2];
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = (double)v5;
	a1[2] += 16i64;
	return 2i64;
}
// 140117B90: using guessed type float var_18[6];

