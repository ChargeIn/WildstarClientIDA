#include "../winhttp.h"

//----- (000000014003AA20) ----------------------------------------------------
_QWORD* __fastcall sub_14003AA20(__int64 a1, _QWORD* a2, int a3)
{
	if (a3 == 1)
	{
		a2[3] = 15i64;
		a2[2] = 0i64;
		*(_BYTE*)a2 = 0;
		sub_14003ADD0(a2, (int*)"iostream stream error", 0x15ui64);
	}
	else
	{
		sub_14003A9C0(a1, a2, a3);
	}
	return a2;
}

