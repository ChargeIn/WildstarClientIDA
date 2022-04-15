#include "../winhttp.h"

//----- (000000014052EAF0) ----------------------------------------------------
__int64 __fastcall sub_14052EAF0(_QWORD* a1)
{
	int v1; // ebx
	int v3; // edi
	__int64 v4; // rax
	_DWORD* v5; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = 0;
	v4 = sub_14052E9B0(a1);
	if (v4 && *(_QWORD*)(v4 + 1152))
		LOBYTE(v3) = *(_DWORD*)(v4 + 1412) == 2;
	v5 = (_DWORD*)a1[2];
	result = 1i64;
	LOBYTE(v1) = v3 != 0;
	v5[2] = 1;
	*v5 = v1;
	a1[2] += 16i64;
	return result;
}

