#include "../winhttp.h"

//----- (000000014012A060) ----------------------------------------------------
__int64 __fastcall sub_14012A060(__int64 a1, unsigned int a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx
	signed __int32 v6; // ecx
	__int64 v8; // rcx

	v3 = *(_QWORD*)(a1 + 744);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 744) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 752);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 752) = 0i64;
	}
	*(_DWORD*)(a1 + 776) = a2;
	v6 = *(_DWORD*)(a1 + 760);
	if (v6)
	{
		while (v6 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 760), v6 - 1, v6))
		{
			v6 = *(_DWORD*)(a1 + 760);
			if (!v6)
				return a2;
		}
		if (v6 == 1)
		{
			v8 = *(_QWORD*)(a1 + 768);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(a1 + 768) = 0i64;
			}
		}
	}
	return a2;
}

