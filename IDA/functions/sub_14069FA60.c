#include "../winhttp.h"

//----- (000000014069FA60) ----------------------------------------------------
__int64 __fastcall sub_14069FA60(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	int v4; // edx
	__int64 v5; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
		v4 = *(_DWORD*)(v3 + 8);
	else
		v4 = 0;
	v5 = a1[2];
	result = 1i64;
	*(_DWORD*)(v5 + 8) = 3;
	*(double*)v5 = (double)v4;
	a1[2] += 16i64;
	return result;
}

