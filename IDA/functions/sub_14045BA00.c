#include "../winhttp.h"

//----- (000000014045BA00) ----------------------------------------------------
int* __fastcall sub_14045BA00(_DWORD* a1)
{
	int* result; // rax

	if ((a1[10] & 0x100) != 0)
	{
		a1[1234] = 1;
		a1[16] = 0;
		return sub_1407E4830(a1 + 135, 0i64, 0x2Cui64);
	}
	else
	{
		a1[1234] = 0;
	}
	return result;
}

