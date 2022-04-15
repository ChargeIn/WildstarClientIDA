#include "../winhttp.h"

//----- (0000000140379EB0) ----------------------------------------------------
__int64 __fastcall sub_140379EB0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	unsigned __int64 v5; // rbx
	unsigned __int64 i; // rbp

	if (*(_DWORD*)(a1 + 328) != a2)
	{
		sub_1407C2990((__int64**)(a1 + 336), (__int64*)(*(_QWORD*)(a1 + 16) + 5568i64), dword_140B65AD0[a2]);
		*(_DWORD*)(a1 + 328) = a2;
	}
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48));
	v5 = 0i64;
	for (i = result; v5 < i; ++v5)
	{
		result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 48) + 80i64))(
			*(_QWORD*)(a1 + 48),
			v5);
		if (result)
			result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)result + 232i64))(result, a2);
	}
	return result;
}
// 140B65AD0: using guessed type _DWORD dword_140B65AD0[4];

