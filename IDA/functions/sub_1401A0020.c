#include "../winhttp.h"

//----- (00000001401A0020) ----------------------------------------------------
BOOL __fastcall sub_1401A0020(__int64 a1)
{
	return SetEvent(*(HANDLE*)(a1 + 16));
}

