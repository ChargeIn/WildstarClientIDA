#include "../winhttp.h"

//----- (0000000140889460) ----------------------------------------------------
void __fastcall sub_140889460(__int64 a1)
{
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	if ((*(_DWORD*)(a1 + 96))-- == 1)
		ResetEvent(*(HANDLE*)(a1 + 80));
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}

