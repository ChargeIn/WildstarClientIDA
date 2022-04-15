#include "../winhttp.h"

//----- (0000000140285B20) ----------------------------------------------------
_OWORD* __fastcall sub_140285B20(__int64 a1, _OWORD* a2)
{
	_OWORD* result; // rax

	result = *(_OWORD**)(*(_QWORD*)(a1 + 224) + 56i64);
	*result = *a2;
	return result;
}

