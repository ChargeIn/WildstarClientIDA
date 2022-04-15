#include "../winhttp.h"

//----- (000000014088C9F0) ----------------------------------------------------
__int64 __fastcall sub_14088C9F0(__int64 a1, int a2, int a3, int a4)
{
	int v4; // r10d
	double v5; // xmm1_8
	double v6; // xmm0_8
	__int64 result; // rax

	v4 = *(_DWORD*)(a1 + 32);
	*(_DWORD*)(a1 + 52) = a2;
	if (a4 < v4)
	{
		v5 = (double)(a4 - v4) * 1000.0 / (double)dword_140C110B4;
		if (v5 <= 0.0)
			v6 = -0.5;
		else
			v6 = 0.5;
		a4 = v4;
		result = (unsigned int)(a2 + (int)(v6 + v5));
		*(_DWORD*)(a1 + 52) = result;
	}
	*(_WORD*)(a1 + 60) |= 2u;
	*(_DWORD*)(a1 + 56) = a3;
	*(_DWORD*)(a1 + 48) = a4;
	return result;
}
// 140C110B4: using guessed type int dword_140C110B4;

