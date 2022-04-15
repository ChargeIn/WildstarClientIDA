#include "../winhttp.h"

//----- (0000000140870860) ----------------------------------------------------
__int16 __fastcall sub_140870860(__int64 a1)
{
	unsigned __int16 v1; // r8
	__int16 result; // ax
	unsigned __int16 v3; // dx
	__int64 v4; // rax

	v1 = 0;
	result = *(_WORD*)(a1 + 54) & 7;
	v3 = result * ((*(_WORD*)(a1 + 54) >> 3) & 7);
	if (v3)
	{
		do
		{
			v4 = v1++;
			v4 <<= 6;
			*(_OWORD*)(v4 + a1 + 96) = *(_OWORD*)(v4 + a1 + 64);
			*(_OWORD*)(v4 + a1 + 112) = *(_OWORD*)(v4 + a1 + 80);
			result = v1;
		} while (v1 < (int)v3);
	}
	return result;
}

