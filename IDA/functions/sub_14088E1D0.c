#include "../winhttp.h"

//----- (000000014088E1D0) ----------------------------------------------------
void __fastcall sub_14088E1D0(__int64 a1, int a2, int a3, int a4)
{
	*(_WORD*)(a1 + 60) |= 1u;
	*(_DWORD*)(a1 + 36) = a2;
	*(_DWORD*)(a1 + 40) = a3;
	*(_DWORD*)(a1 + 44) = a4;
}

