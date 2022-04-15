#include "../winhttp.h"

//----- (00000001408708C0) ----------------------------------------------------
unsigned __int16 __fastcall sub_1408708C0(__int64 a1)
{
	unsigned __int16 v2; // dx
	unsigned __int16 result; // ax
	__int64 v4; // rcx
	__int64 v5; // rcx

	v2 = (*(_WORD*)(a1 + 54) & 7) * ((*(_WORD*)(a1 + 54) >> 3) & 7);
	result = 0;
	if (v2)
	{
		do
		{
			v4 = result++;
			v5 = (v4 + 1) << 6;
			*(_OWORD*)(v5 + a1) = 0i64;
			*(_OWORD*)(v5 + a1 + 16) = 0i64;
		} while (result < (int)v2);
	}
	return result;
}

