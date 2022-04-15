#include "../winhttp.h"

//----- (0000000140667EA0) ----------------------------------------------------
__int64 __fastcall sub_140667EA0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	int v4; // r8d

	v2 = sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)a1[2];
	v4 = 0;
	if (v2)
		LOBYTE(v4) = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8i64) + 288i64) != 0;
	*v3 = v4;
	v3[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}

