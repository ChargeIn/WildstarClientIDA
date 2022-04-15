#include "../winhttp.h"

//----- (00000001408ADC30) ----------------------------------------------------
__int64 __fastcall sub_1408ADC30(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 8))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		result = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)a1 = 0;
	}
	else
	{
		result = 0i64;
		*(_DWORD*)a1 = 0;
	}
	return result;
}

