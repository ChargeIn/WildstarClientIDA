#include "../winhttp.h"

//----- (0000000140884F60) ----------------------------------------------------
BOOL __fastcall sub_140884F60(LARGE_INTEGER* a1)
{
	return QueryPerformanceCounter(a1 + 14);
}

