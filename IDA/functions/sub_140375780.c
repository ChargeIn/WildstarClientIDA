#include "../winhttp.h"

//----- (0000000140375780) ----------------------------------------------------
__int64 __fastcall sub_140375780(unsigned int* a1)
{
	return a1[2]
		+ 0x3F7B69F4E4E9F0B9i64 * *a1
		+ 2860486313u * (*((unsigned __int8*)a1 + 7) + 2860486313i64 * (a1[1] & 0xFFFFFF));
}

