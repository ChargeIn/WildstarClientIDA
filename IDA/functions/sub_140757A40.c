#include "../winhttp.h"

//----- (0000000140757A40) ----------------------------------------------------
__int64 __fastcall sub_140757A40(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rcx
	_DWORD* v4; // rdx
	__int64 result; // rax
	_DWORD* v6; // rax

	v2 = sub_140056D60(a1, 1u);
	if ((int)sub_14043CA00(v3, v2) < 0)
	{
		v6 = (_DWORD*)a1[2];
		*v6 = 0;
		v6[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		*v4 = 1;
		v4[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}
// 140757A55: variable 'v3' is possibly undefined

