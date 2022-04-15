#include "../winhttp.h"

//----- (0000000140795D50) ----------------------------------------------------
__int64 __fastcall sub_140795D50(_QWORD* a1)
{
	_DWORD* v2; // rax
	double v3; // xmm6_8
	double v4; // xmm0_8
	__int64 v5; // rcx
	__int64 result; // rax

	v2 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v2 >= a1[2] || v2 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v3 = 0.0;
	else
		v3 = sub_140056C40(a1, 2u);
	v4 = sub_140056C40(a1, 1u);
	sub_140901DBC((unsigned int)(int)v4, (unsigned int)(int)v3);
	v5 = a1[2];
	*(_DWORD*)(v5 + 8) = 3;
	result = 1i64;
	*(double*)v5 = v4;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

