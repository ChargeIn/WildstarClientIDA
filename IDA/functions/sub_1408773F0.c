#include "../winhttp.h"

//----- (00000001408773F0) ----------------------------------------------------
__int64 __fastcall sub_1408773F0(__int64 a1)
{
	__int64 v2; // rcx
	int v4; // edx
	unsigned int v5; // ebx

	v2 = *(_QWORD*)(a1 + 56);
	if (!v2)
		return 1i64;
	v4 = *(_DWORD*)(a1 + 48);
	*(_DWORD*)(a1 + 42) = v4;
	*(_DWORD*)(a1 + 4) = v4 + 38;
	v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 8i64))(v2, a1);
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 24i64))(*(_QWORD*)(a1 + 56));
	*(_QWORD*)(a1 + 56) = 0i64;
	sub_140881720(dword_140C10F20, a1);
	return v5;
}
// 140C10F20: using guessed type int dword_140C10F20;

