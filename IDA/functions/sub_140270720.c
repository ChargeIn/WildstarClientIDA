#include "../winhttp.h"

//----- (0000000140270720) ----------------------------------------------------
__int64 __fastcall sub_140270720(__int64 a1, int a2)
{
	__int64 result; // rax
	int v3; // r8d

	result = a2;
	v3 = dword_140AE7CA0[a2];
	if (*(_DWORD*)(a1 + 7780) != v3)
	{
		*(_DWORD*)(a1 + 7780) = v3;
		return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			8i64);
	}
	return result;
}
// 140AE7CA0: using guessed type _DWORD dword_140AE7CA0[2];

