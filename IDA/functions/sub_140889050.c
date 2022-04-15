#include "../winhttp.h"

//----- (0000000140889050) ----------------------------------------------------
void __fastcall sub_140889050(__int64 a1)
{
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	if ((*(_DWORD*)(a1 + 100))-- == 1)
		ResetEvent(*(HANDLE*)(a1 + 88));
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}

