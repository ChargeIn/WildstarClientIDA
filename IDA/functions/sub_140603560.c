#include "../winhttp.h"

//----- (0000000140603560) ----------------------------------------------------
__int64 __fastcall sub_140603560(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx

	v3 = *(_QWORD*)(a1 + 64);
	if (v3 && *(_QWORD*)(v3 + 72) == *(_QWORD*)a2)
	{
		*(_DWORD*)(v3 + 40) = *(_DWORD*)(a2 + 16);
		*(_DWORD*)(*(_QWORD*)(a1 + 64) + 44i64) = *(_DWORD*)(a2 + 20);
		*(_DWORD*)(*(_QWORD*)(a1 + 64) + 48i64) = *(_DWORD*)(a2 + 24);
		*(_DWORD*)(*(_QWORD*)(a1 + 64) + 52i64) = *(_DWORD*)(a2 + 28);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Group_LootRulesChanged", byte_1409D0E6F);
		return 0i64;
	}
	else
	{
		v5 = *(_QWORD*)(a1 + 72);
		if (v5)
		{
			if (*(_QWORD*)(v5 + 72) == *(_QWORD*)a2)
			{
				*(_DWORD*)(v5 + 40) = *(_DWORD*)(a2 + 16);
				*(_DWORD*)(*(_QWORD*)(a1 + 72) + 44i64) = *(_DWORD*)(a2 + 20);
				*(_DWORD*)(*(_QWORD*)(a1 + 72) + 48i64) = *(_DWORD*)(a2 + 24);
				*(_DWORD*)(*(_QWORD*)(a1 + 72) + 52i64) = *(_DWORD*)(a2 + 28);
			}
		}
		return 0i64;
	}
}
// 1409D0E6F: using guessed type _BYTE byte_1409D0E6F[15];
// 140C65898: using guessed type __int64 qword_140C65898;

