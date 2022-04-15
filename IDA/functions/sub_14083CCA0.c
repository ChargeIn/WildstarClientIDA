#include "../winhttp.h"

//----- (000000014083CCA0) ----------------------------------------------------
__int64 __fastcall sub_14083CCA0(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v2; // rcx

	v2 = (struct _RTL_CRITICAL_SECTION*)(a1 + 24);
	v2[-1].OwningThread = 0i64;
	v2[-1].LockSemaphore = 0i64;
	LODWORD(v2[-1].SpinCount) = 0;
	InitializeCriticalSection(v2);
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 64) = CreateEventW(0i64, 1, 0, 0i64);
	return a1;
}

