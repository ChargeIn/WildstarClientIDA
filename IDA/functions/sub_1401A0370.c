#include "../winhttp.h"

//----- (00000001401A0370) ----------------------------------------------------
BOOL __fastcall sub_1401A0370(__int64 a1)
{
	return ReleaseMutex(*(HANDLE*)(a1 + 16));
}

