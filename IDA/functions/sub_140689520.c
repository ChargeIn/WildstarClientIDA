#include "../winhttp.h"

//----- (0000000140689520) ----------------------------------------------------
__int64 __fastcall sub_140689520(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	_DWORD* v4; // rcx
	bool v5; // zf
	__int64 result; // rax
	_DWORD* v7; // rax

	v2 = *(_QWORD*)(qword_140C65980 + 48);
	if (*(_QWORD*)v2 == v2 || (v3 = *(_QWORD*)(*(_QWORD*)v2 + 16i64)) == 0)
	{
		v7 = *(_DWORD**)(a1 + 16);
		*v7 = 0;
		v7[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v4 = *(_DWORD**)(a1 + 16);
		v5 = *(_DWORD*)(v3 + 16) == 0;
		v4[2] = 1;
		result = 1i64;
		*v4 = !v5;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}
// 140C65980: using guessed type __int64 qword_140C65980;

