#include "../winhttp.h"

//----- (00000001408631F0) ----------------------------------------------------
__int64 __fastcall sub_1408631F0(__int64 a1)
{
	double v2; // xmm0_8
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 1064) != 1)
	{
		v2 = sub_14085CF60((__int64*)(a1 + 1056), 0);
		sub_140833A10(a1, *(float*)&v2);
		*(_DWORD*)(a1 + 784) = *(_DWORD*)(a1 + 780);
		result = *(unsigned int*)(a1 + 788);
		*(_DWORD*)(a1 + 792) = result;
	}
	return result;
}

