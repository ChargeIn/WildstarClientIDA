#include "../winhttp.h"

//----- (0000000140888070) ----------------------------------------------------
void __fastcall sub_140888070(__int64 a1)
{
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	*(_BYTE*)(a1 - 3) = *(_BYTE*)(a1 - 3) & 0xB7 | 8;
	sub_140885D10(a1 - 120, 3);
	if (*(_QWORD*)(a1 + 64) || *(_QWORD*)(a1 + 80))
	{
		sub_140889400(a1 - 120);
		sub_1408877C0(a1 - 120, (__int64*)(a1 + 64), 1);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
		sub_140889590(*(_QWORD*)(a1 - 24), a1 - 120);
	}
	else
	{
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	}
}

