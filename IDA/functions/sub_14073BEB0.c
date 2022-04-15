#include "../winhttp.h"

//----- (000000014073BEB0) ----------------------------------------------------
__int64 __fastcall sub_14073BEB0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // ecx
	_DWORD* v4; // rdx
	__int64 result; // rax
	int v6; // edx
	_DWORD* v7; // rax

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	v3 = 0;
	if (v2)
	{
		if (*(_QWORD*)(v2 + 16) || (v6 = 1, *(_QWORD*)(v2 + 24)))
			v6 = 0;
		v7 = (_DWORD*)a1[2];
		LOBYTE(v3) = v6 != 0;
		v7[2] = 1;
		*v7 = v3;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}

