#include "../winhttp.h"

//----- (000000014066A3E0) ----------------------------------------------------
__int64 __fastcall sub_14066A3E0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rax
	__int64 v4; // rax
	int v5; // edx
	BOOL v6; // r8d
	_DWORD* v7; // rcx
	_DWORD* v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = (__int64*)sub_140056AB0(a1, 2u);
	if (v2 && v3)
	{
		if (*(_QWORD*)v2 && (v4 = *v3) != 0)
		{
			v5 = 0;
			v6 = **(_DWORD**)(*(_QWORD*)v2 + 8i64) == **(_DWORD**)(v4 + 8);
		}
		else
		{
			v5 = 0;
			v6 = 0;
		}
		v7 = (_DWORD*)a1[2];
		LOBYTE(v5) = v6;
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

