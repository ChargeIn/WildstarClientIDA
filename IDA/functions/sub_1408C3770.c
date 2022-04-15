#include "../winhttp.h"

//----- (00000001408C3770) ----------------------------------------------------
__int64 __fastcall sub_1408C3770(__int64 a1, float a2)
{
	unsigned int i; // ecx
	__int64 result; // rax

	if (a2 == 1.0)
	{
		*(_DWORD*)(a1 + 168) = 0;
		for (i = 0; i < *(_DWORD*)(a1 + 172); *(_DWORD*)(a1 + 4 * result + 144) = 0)
			result = i++;
	}
	else
	{
		*(float*)(a1 + 168) = 1.0 - a2;
	}
	return result;
}

