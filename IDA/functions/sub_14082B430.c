#include "../winhttp.h"

//----- (000000014082B430) ----------------------------------------------------
void __fastcall sub_14082B430(struct _RTL_CRITICAL_SECTION* a1)
{
	HANDLE LockSemaphore; // rcx

	LockSemaphore = a1[5].LockSemaphore;
	if (LockSemaphore)
		CloseHandle(LockSemaphore);
	DeleteCriticalSection(a1);
}

