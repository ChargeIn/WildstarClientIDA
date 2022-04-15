#include "../winhttp.h"

//----- (000000014040BDB0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14040BDB0(unsigned __int8* a1)
{
	unsigned __int8* v1; // r8
	unsigned __int64 result; // rax
	int v3; // edx
	__int64 v4; // rcx

	v1 = a1 + 5;
	result = a1[6] | ((unsigned __int64)a1[8] << 8);
	v3 = 6;
	do
	{
		v4 = *v1--;
		result = v4 | (result << 8);
		--v3;
	} while (v3);
	return result;
}

