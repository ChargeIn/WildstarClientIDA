#include "../winhttp.h"

//----- (00000001408890E0) ----------------------------------------------------
void __fastcall sub_1408890E0(__int64 a1)
{
	int v2; // eax

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v2 = *(_DWORD*)(a1 + 8);
	if (-- * (_DWORD*)(a1 + 108) == v2 - 1)
		SetEvent(*(HANDLE*)(a1 + 72));
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}

