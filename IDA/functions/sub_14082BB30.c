#include "../winhttp.h"

//----- (000000014082BB30) ----------------------------------------------------
__int64 __fastcall sub_14082BB30(LPCRITICAL_SECTION lpCriticalSection, int* a2, unsigned int a3)
{
	unsigned int v6; // ebx

	EnterCriticalSection(lpCriticalSection);
	v6 = sub_14082C0F0(lpCriticalSection, a2, a3);
	LeaveCriticalSection(lpCriticalSection);
	return v6;
}

