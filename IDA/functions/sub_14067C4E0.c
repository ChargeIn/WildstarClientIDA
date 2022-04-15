#include "../winhttp.h"

//----- (000000014067C4E0) ----------------------------------------------------
__int64 __fastcall sub_14067C4E0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	__int64 result; // rax
	int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf

	v2 = sub_14067B760(a1);
	if (v2)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2);
		v6 = (_DWORD*)a1[2];
		v7 = v5 == 3;
		v6[2] = 1;
		result = 1i64;
		*v6 = v7;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		result = 1i64;
		*v3 = 0;
		v3[2] = 1;
	}
	a1[2] += 16i64;
	return result;
}

