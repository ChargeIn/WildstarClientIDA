#include "../winhttp.h"

//----- (0000000140030080) ----------------------------------------------------
__int64 __fastcall sub_140030080(__int64 a1, __int64 a2)
{
	if (!a2
		|| *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2) + 12) != *(_DWORD*)(a1 + 4852)
		|| *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2) + 16) != *(_DWORD*)(a1 + 4856))
	{
		return 2147500037i64;
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 304i64))(a2, a1 + 4784);
	return 0i64;
}

