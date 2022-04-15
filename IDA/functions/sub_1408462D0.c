#include "../winhttp.h"

//----- (00000001408462D0) ----------------------------------------------------
char __fastcall sub_1408462D0(__int64 a1)
{
	unsigned __int8 v1; // al

	v1 = 0;
	if (!*(_BYTE*)(a1 + 137))
		return 0;
	while (!(unsigned int)((__int64)(*(_QWORD*)(a1 + 24 * (v1 + 1i64) + 8) - *(_QWORD*)(a1 + 24 * (v1 + 1i64))) >> 4))
	{
		if (++v1 >= (int)*(unsigned __int8*)(a1 + 137))
			return 0;
	}
	return 1;
}

