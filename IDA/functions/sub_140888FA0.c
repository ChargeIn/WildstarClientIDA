#include "../winhttp.h"

//----- (0000000140888FA0) ----------------------------------------------------
void __fastcall sub_140888FA0(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v1; // rcx

	v1 = (struct _RTL_CRITICAL_SECTION*)(a1 + 24);
	v1[-1].OwningThread = &off_1409A8128;
	DeleteCriticalSection(v1);
}
// 1409A8128: using guessed type __int64 (__fastcall *off_1409A8128)();

