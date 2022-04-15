#include "../winhttp.h"

//----- (000000014073A060) ----------------------------------------------------
__int64 __fastcall sub_14073A060(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rcx
	int v5; // edx
	int v6; // eax
	_DWORD* v7; // rcx
	_DWORD* v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = sub_140056AB0(a1, 2u);
	v4 = v3;
	if (v2 && v3)
	{
		v5 = 0;
		if (*(_QWORD*)(v2 + 16) != *(_QWORD*)(v3 + 16)
			|| *(_QWORD*)(v2 + 24) != *(_QWORD*)(v3 + 24)
			|| *(_DWORD*)v2 != *(_DWORD*)v3
			|| (v6 = 1, *(_DWORD*)(v2 + 4) != *(_DWORD*)(v4 + 4)))
		{
			v6 = 0;
		}
		v7 = (_DWORD*)a1[2];
		LOBYTE(v5) = v6 != 0;
		v7[2] = 1;
		*v7 = v5;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}

