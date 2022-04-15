#include "../winhttp.h"

//----- (00000001402706E0) ----------------------------------------------------
__int64 __fastcall sub_1402706E0(__int64 a1, int a2)
{
	__int64 result; // rax
	int v3; // r8d

	result = a2;
	v3 = dword_140AE7C90[a2];
	if (*(_DWORD*)(a1 + 7836) != v3)
	{
		*(_DWORD*)(a1 + 7836) = v3;
		return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			22i64);
	}
	return result;
}
// 140AE7C90: using guessed type _DWORD dword_140AE7C90[4];

