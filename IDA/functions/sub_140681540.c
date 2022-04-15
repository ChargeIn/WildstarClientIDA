#include "../winhttp.h"

//----- (0000000140681540) ----------------------------------------------------
__int64 __fastcall sub_140681540(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	_DWORD* v4; // rax
	_DWORD* v5; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 24i64) + 32i64) != -1)
		{
			v5 = (_DWORD*)a1[2];
			result = 1i64;
			*v5 = 0;
			v5[2] = 1;
			a1[2] += 16i64;
			return result;
		}
		v4 = (_DWORD*)a1[2];
		*v4 = 1;
	}
	else
	{
		v4 = (_DWORD*)a1[2];
		*v4 = 0;
	}
	v4[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}

