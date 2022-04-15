#include "../winhttp.h"

//----- (0000000140887200) ----------------------------------------------------
void __fastcall sub_140887200(__int64 a1, __int64 a2, int a3)
{
	bool v6; // r8

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	if (a2)
	{
		v6 = a3 == 1 && (*(_DWORD*)(a2 + 20) & 7) != 2;
		sub_140883BA0(a1, a2, v6);
	}
	*(_QWORD*)(a1 + 184) = 0i64;
	sub_140886040(a1, a3);
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
}

