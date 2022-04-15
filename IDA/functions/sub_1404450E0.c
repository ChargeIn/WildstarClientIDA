#include "../winhttp.h"

//----- (00000001404450E0) ----------------------------------------------------
__int64 __fastcall sub_1404450E0(__int64 a1, _DWORD* a2)
{
	__int64 result; // rax

	result = sub_1403D8D00(a1, a2);
	if (result)
		return *(unsigned int*)(result + 36);
	return result;
}

