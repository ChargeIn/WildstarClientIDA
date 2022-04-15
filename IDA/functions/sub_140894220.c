#include "../winhttp.h"

//----- (0000000140894220) ----------------------------------------------------
__int64 __fastcall sub_140894220(__int64 a1, __int64 a2)
{
	if (!*(_QWORD*)(a2 + 16))
	{
		LOBYTE(a2) = *(_DWORD*)a2 == 1;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 344i64))(a1, a2);
	}
	return 1i64;
}

