#include "../winhttp.h"

//----- (0000000140445120) ----------------------------------------------------
__int64 __fastcall sub_140445120(__int64 a1, int a2)
{
	__int64 result; // rax

	result = sub_1403D8F70(a1, a2);
	if (result)
		return *(unsigned int*)(result + 36);
	return result;
}

