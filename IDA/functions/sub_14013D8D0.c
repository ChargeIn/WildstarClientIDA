#include "../winhttp.h"

//----- (000000014013D8D0) ----------------------------------------------------
_OWORD* __fastcall sub_14013D8D0(__int64 a1, _OWORD* a2)
{
	_OWORD* result; // rax

	result = a2;
	*a2 = *(_OWORD*)(a1 + 96);
	a2[1] = *(_OWORD*)(a1 + 112);
	return result;
}

