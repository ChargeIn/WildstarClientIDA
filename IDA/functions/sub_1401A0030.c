#include "../winhttp.h"

//----- (00000001401A0030) ----------------------------------------------------
BOOL __fastcall sub_1401A0030(__int64 a1)
{
	return ResetEvent(*(HANDLE*)(a1 + 16));
}

