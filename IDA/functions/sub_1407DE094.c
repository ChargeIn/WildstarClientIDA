#include "../winhttp.h"

//----- (00000001407DE094) ----------------------------------------------------
void __fastcall sub_1407DE094(int a1, __int64 a2)
{
	if (a1 >= 20)
	{
		LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 48));
	}
	else
	{
		*(_DWORD*)(a2 + 24) &= ~0x8000u;
		sub_1407E2528(a1 + 16);
	}
}

