#include "../winhttp.h"

//----- (00000001406F62F0) ----------------------------------------------------
__int64 __fastcall sub_1406F62F0(__int64 a1)
{
	int v1; // r8d
	__int64 v2; // r9
	_DWORD* v3; // rdx
	__int64 result; // rax
	_DWORD* v5; // rax

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C65898 + 29688);
	if (v2)
	{
		v3 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		LOBYTE(v1) = *(_DWORD*)(v2 + 180) == 0;
		v3[2] = 1;
		*v3 = v1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v5 = *(_DWORD**)(a1 + 16);
		*v5 = 0;
		v5[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

