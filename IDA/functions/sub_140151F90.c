#include "../winhttp.h"

//----- (0000000140151F90) ----------------------------------------------------
char __fastcall sub_140151F90(__int64 a1)
{
	char result; // al

	if (*(_QWORD*)(a1 + 48))
	{
		*(_DWORD*)(a1 + 16) = 1;
		sub_140151FE0(a1, 0.0);
		return sub_1400D4070(
			*(_QWORD*)(a1 + 48),
			0x4Cu,
			*(char**)(a1 + 48),
			"s",
			*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64));
	}
	return result;
}

