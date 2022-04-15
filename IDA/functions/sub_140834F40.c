#include "../winhttp.h"

//----- (0000000140834F40) ----------------------------------------------------
__int64 __fastcall sub_140834F40(__int64* a1, unsigned __int64 a2)
{
	__int64 v2; // r11
	int v4; // r9d
	int v5; // r8d
	int v6; // eax
	unsigned __int64 v7; // rdx

	v2 = *a1;
	v4 = 0;
	v5 = ((a1[1] - *a1) >> 4) - 1;
	if (v5 < 0)
		return 0i64;
	while (1)
	{
		v6 = v4 + (v5 - v4) / 2;
		v7 = *(_QWORD*)(v2 + 16i64 * v6);
		if (a2 >= v7)
			break;
		v5 = v6 - 1;
	LABEL_6:
		if (v4 > v5)
			return 0i64;
	}
	if (a2 > v7)
	{
		v4 = v6 + 1;
		goto LABEL_6;
	}
	return v2 + 16i64 * v6;
}

