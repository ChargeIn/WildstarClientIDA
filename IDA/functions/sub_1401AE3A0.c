#include "../winhttp.h"

//----- (00000001401AE3A0) ----------------------------------------------------
__int64 __fastcall sub_1401AE3A0(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)(1664525 * *(_DWORD*)(a1 + 16) + 1013904223);
	*(_DWORD*)(a1 + 16) = result;
	return result;
}

