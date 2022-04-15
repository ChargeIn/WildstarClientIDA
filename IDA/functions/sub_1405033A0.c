#include "../winhttp.h"

//----- (00000001405033A0) ----------------------------------------------------
__int64 __fastcall sub_1405033A0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	bool v4; // al
	_DWORD* v5; // rcx
	_DWORD* v6; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = sub_140056AB0(a1, 2u);
	if (v2 && v3)
	{
		v4 = *(_QWORD*)v2 == *(_QWORD*)v3
			&& *(_DWORD*)(v2 + 8) == *(_DWORD*)(v3 + 8)
			&& *(_DWORD*)(v2 + 12) == *(_DWORD*)(v3 + 12)
			&& *(_DWORD*)(v2 + 16) == *(_DWORD*)(v3 + 16)
			&& *(_DWORD*)(v2 + 20) == *(_DWORD*)(v3 + 20);
		v5 = (_DWORD*)a1[2];
		v5[2] = 1;
		*v5 = v4;
	}
	else
	{
		v6 = (_DWORD*)a1[2];
		*v6 = 0;
		v6[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}

