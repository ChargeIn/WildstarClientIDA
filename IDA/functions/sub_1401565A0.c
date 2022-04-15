#include "../winhttp.h"

//----- (00000001401565A0) ----------------------------------------------------
__int64 __fastcall sub_1401565A0(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rcx

	v2 = a1 - 8;
	result = (unsigned int)(*(_DWORD*)(v2 + 24) + 1);
	*(_DWORD*)(v2 + 24) = result;
	return result;
}

