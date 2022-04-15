#include "../winhttp.h"

//----- (00000001405D9D40) ----------------------------------------------------
__int64 __fastcall sub_1405D9D40(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	if (result)
		result = sub_14045B030(result, *(int**)(a1 + 336));
	v3 = *(_QWORD*)(a1 + 336);
	*(_QWORD*)(a1 + 336) = 0i64;
	if (v3)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

