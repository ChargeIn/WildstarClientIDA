#include "../winhttp.h"

//----- (00000001402FCBA0) ----------------------------------------------------
void __fastcall sub_1402FCBA0(__int64 a1, _OWORD* a2)
{
	*(_OWORD*)(a1 + 256) = *a2;
	if (*(float*)(a1 + 268) != 0.0)
		*(_DWORD*)(a1 + 272) = 1;
}

