#include "../winhttp.h"

//----- (000000014013D840) ----------------------------------------------------
_OWORD* __fastcall sub_14013D840(__int64 a1, _OWORD* a2)
{
	_OWORD* result; // rax

	result = a2;
	*a2 = *(_OWORD*)(a1 + 80);
	a2[1] = *(_OWORD*)(a1 + 96);
	return result;
}

