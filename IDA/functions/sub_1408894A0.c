#include "../winhttp.h"

//----- (00000001408894A0) ----------------------------------------------------
void __fastcall sub_1408894A0(__int64 a1)
{
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	if (++ * (_DWORD*)(a1 + 96) == 1)
		SetEvent(*(HANDLE*)(a1 + 80));
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}

