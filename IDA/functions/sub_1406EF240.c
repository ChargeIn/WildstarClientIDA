#include "../winhttp.h"

//----- (00000001406EF240) ----------------------------------------------------
__int64 __fastcall sub_1406EF240(__int64 a1)
{
	int v2; // r8d
	_DWORD* v3; // rcx
	__int64 result; // rax
	_DWORD* v5; // rax

	if (qword_140C65970
		&& qword_140C65898
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = 0, *(_DWORD*)(qword_140C65970 + 8) == 2))
	{
		v3 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		LOBYTE(v2) = *(_DWORD*)(qword_140C65970 + 192) != 0;
		v3[2] = 1;
		*v3 = v2;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v5 = *(_DWORD**)(a1 + 16);
		*v5 = 0;
		v5[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 0i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

