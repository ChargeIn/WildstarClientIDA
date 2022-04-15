#include "../winhttp.h"

//----- (00000001401741C0) ----------------------------------------------------
__int64 __fastcall sub_1401741C0(_QWORD* a1)
{
	__int64 v2; // rbx
	float v3; // xmm6_4
	double v4; // xmm0_8
	_DWORD* v5; // rax
	float v6; // xmm7_4
	int v7; // eax

	v2 = sub_140174120(a1);
	v3 = sub_140056C40(a1, 2u);
	v4 = sub_140056C40(a1, 3u);
	v5 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
		v7 = 0;
	else
		v7 = sub_140056D60(a1, 4u);
	*(float*)(v2 + 1052) = v3;
	v6 = v4;
	*(float*)(v2 + 1056) = v6;
	*(_DWORD*)(v2 + 1048) = v7;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

