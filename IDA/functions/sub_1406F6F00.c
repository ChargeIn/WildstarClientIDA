#include "../winhttp.h"

//----- (00000001406F6F00) ----------------------------------------------------
__int64 __fastcall sub_1406F6F00(__int64 a1)
{
	int v1; // ebx
	__int64 v3; // rcx
	BOOL v4; // edx
	__int64 v5; // r8
	_DWORD* v6; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C65898 + 28048);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C65898 + 120);
		if (v5)
			v4 = sub_140469920(v5, *(_DWORD*)(v3 + 4i64 * *(_QWORD*)(v3 + 48) + 8)) != 0i64;
	}
	v6 = *(_DWORD**)(a1 + 16);
	result = 1i64;
	LOBYTE(v1) = v4;
	v6[2] = 1;
	*v6 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

