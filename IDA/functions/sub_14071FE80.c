#include "../winhttp.h"

//----- (000000014071FE80) ----------------------------------------------------
__int64 __fastcall sub_14071FE80(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rcx

	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 376));
	if (result)
	{
		++* (_DWORD*)(result + 4920);
		v2 = *(_QWORD*)(result + 5864);
		if (v2)
			return (*(__int64(__fastcall**)(__int64, bool))(*(_QWORD*)v2 + 392i64))(v2, *(_DWORD*)(result + 4920) != 0);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

