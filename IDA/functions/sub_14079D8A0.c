#include "../winhttp.h"

//----- (000000014079D8A0) ----------------------------------------------------
__int64 __fastcall sub_14079D8A0(__int64* a1)
{
	__int64 v1; // rax
	__int64 result; // rax

	if (*((_DWORD*)a1 + 6))
	{
		v1 = *a1;
		*((_DWORD*)a1 + 6) = 0;
		return (*(__int64(__fastcall**)(__int64*, _QWORD))(v1 + 144))(a1, 0i64);
	}
	return result;
}

