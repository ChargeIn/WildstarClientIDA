#include "../winhttp.h"

//----- (000000014012F200) ----------------------------------------------------
__int64 __fastcall sub_14012F200(_QWORD* a1)
{
	int v1; // edi
	int v3; // esi
	__int64 v4; // rax
	_DWORD* v5; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = 0;
	v4 = sub_14012AAF0(a1, 1u);
	if (v4 && sub_14012A290(v4))
		v3 = 1;
	v5 = (_DWORD*)a1[2];
	LOBYTE(v1) = v3 != 0;
	v5[2] = 1;
	result = 1i64;
	*v5 = v1;
	a1[2] += 16i64;
	return result;
}

