#include "../winhttp.h"

//----- (000000014088C4E0) ----------------------------------------------------
__int64 __fastcall sub_14088C4E0(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v2; // rcx

	v2 = (struct _RTL_CRITICAL_SECTION*)(a1 + 24);
	v2[-1].OwningThread = 0i64;
	v2[-1].LockSemaphore = 0i64;
	LODWORD(v2[-1].SpinCount) = 0;
	InitializeCriticalSection(v2);
	return a1;
}

