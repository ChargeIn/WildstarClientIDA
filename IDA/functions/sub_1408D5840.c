#include "../winhttp.h"

//----- (00000001408D5840) ----------------------------------------------------
__int64 __fastcall sub_1408D5840(__int64 a1, int* a2)
{
	__int64 result; // rax
	int v4[10]; // [rsp+20h] [rbp-28h] BYREF

	v4[0] = *a2;
	v4[1] = a2[1];
	v4[2] = a2[2];
	v4[3] = a2[3];
	v4[4] = a2[4];
	result = (unsigned int)(int)(sub_1408D9A30((__int64)v4) * 6.91);
	*(_DWORD*)(a1 + 16) = result;
	return result;
}

