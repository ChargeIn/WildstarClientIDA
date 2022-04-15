#include "../winhttp.h"

//----- (00000001403C5AF0) ----------------------------------------------------
__int64 __fastcall sub_1403C5AF0(__int64 a1, _DWORD* a2)
{
	__int64 result; // rax

	*(_DWORD*)(a1 + 16) = *a2;
	result = (unsigned int)a2[1];
	*(_DWORD*)(a1 + 20) = result;
	return result;
}

