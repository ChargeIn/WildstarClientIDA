#include "../winhttp.h"

//----- (00000001407E88B0) ----------------------------------------------------
SIZE_T __fastcall sub_1407E88B0(const void* a1)
{
	if (a1)
		return HeapSize(hHeap, 0, a1);
	*(_DWORD*)sub_1407DE1B0() = 22;
	sub_1407DC370();
	return -1i64;
}

