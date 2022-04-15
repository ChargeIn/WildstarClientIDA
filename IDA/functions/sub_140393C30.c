#include "../winhttp.h"

//----- (0000000140393C30) ----------------------------------------------------
_OWORD* __fastcall sub_140393C30(__int64 a1, _OWORD* a2)
{
	_OWORD* result; // rax

	result = a2;
	*a2 = *(_OWORD*)(a1 + 112);
	a2[1] = *(_OWORD*)(a1 + 128);
	return result;
}

