#include "../winhttp.h"

//----- (000000014027FDD0) ----------------------------------------------------
char __fastcall sub_14027FDD0(__int64 a1, unsigned int a2)
{
	char result; // al

	*(_DWORD*)(a1 + 7176) |= 4u;
	*(_BYTE*)(a1 + 7436) = a2 & 0xF;
	*(_BYTE*)(a1 + 7468) = (a2 >> 4) & 0xF;
	result = BYTE1(a2) & 0xF;
	*(_BYTE*)(a1 + 7532) = (a2 >> 12) & 0xF;
	*(_BYTE*)(a1 + 7500) = BYTE1(a2) & 0xF;
	return result;
}

