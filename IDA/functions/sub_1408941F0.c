#include "../winhttp.h"

//----- (00000001408941F0) ----------------------------------------------------
__int64 __fastcall sub_1408941F0(__int64 a1, __int64 a2)
{
	if (*(_BYTE*)(a2 + 29))
	{
		LOBYTE(a2) = *(_DWORD*)a2 == 1;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 344i64))(a1, a2);
	}
	return 1i64;
}

