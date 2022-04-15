#include "../winhttp.h"

//----- (0000000140889250) ----------------------------------------------------
void __fastcall sub_140889250(__int64 a1)
{
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	if (++ * (_DWORD*)(a1 + 108) >= *(_DWORD*)(a1 + 8))
		ResetEvent(*(HANDLE*)(a1 + 72));
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}

