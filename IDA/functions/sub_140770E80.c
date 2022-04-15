#include "../winhttp.h"

//----- (0000000140770E80) ----------------------------------------------------
_OWORD* __fastcall sub_140770E80(__int64 a1, _OWORD* a2)
{
	_OWORD* result; // rax

	result = a2;
	*a2 = *(_OWORD*)(a1 + 16);
	return result;
}

