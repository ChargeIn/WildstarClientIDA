#include "../winhttp.h"

//----- (00000001401AE170) ----------------------------------------------------
__int64 __fastcall sub_1401AE170(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)(*(_DWORD*)(a1 + 8) + 1);
	*(_DWORD*)(a1 + 8) = result;
	return result;
}

