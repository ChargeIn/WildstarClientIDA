#include "../winhttp.h"

//----- (000000014041FEA0) ----------------------------------------------------
__int64 __fastcall sub_14041FEA0(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	_DWORD* v5; // rax
	unsigned int v6; // r10d
	_QWORD* v7; // r11
	__int64* v8; // rax
	__int64 result; // rax
	_QWORD* v10; // rdx

	v5 = sub_1400580E0(a2, a3);
	if (v5 == dword_140A12138 || v5[2])
		v8 = (__int64*)sub_140056AB0(v7, v6);
	else
		v8 = 0i64;
	*a4 += 8i64;
	result = *v8;
	v10 = *(_QWORD**)(*a4 - 8i64);
	if (result && *(_DWORD*)(result + 1184))
	{
		result = *(_QWORD*)(result + 8);
		*v10 = result;
	}
	else
	{
		*v10 = 0i64;
	}
	return result;
}
// 14041FEDD: variable 'v7' is possibly undefined
// 14041FEDD: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

