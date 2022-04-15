#include "../winhttp.h"

//----- (0000000140826F50) ----------------------------------------------------
void __fastcall sub_140826F50(__int64 a1)
{
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 15920));
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 14328));
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 12736));
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 11144));
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 9552));
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 7960));
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 6368));
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 4776));
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 3184));
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 1592));
	DeleteCriticalSection((LPCRITICAL_SECTION)a1);
}

