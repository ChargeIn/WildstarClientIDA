#include "../winhttp.h"

//----- (00000001400BF950) ----------------------------------------------------
_QWORD* __fastcall sub_1400BF950(__int64 a1, _QWORD* a2, float a3, int a4)
{
	float v5; // xmm2_4
	unsigned int v6; // r10d
	int v7; // r9d

	if (a3 >= 0.0)
		v5 = a3 + 0.000049999999;
	else
		v5 = a3 + -0.000049999999;
	if (a4)
		v5 = fabs(v5);
	v6 = 0;
	v7 = (int)(float)(v5 * 1000.0);
	if (v7 == 10 * (v7 / 10))
	{
		if (v7 / 10 == 10 * (v7 / 10 / 10))
		{
			if (v7 / 100 != 10 * (v7 / 100 / 10))
				v6 = 1;
		}
		else
		{
			v6 = 2;
		}
	}
	else
	{
		v6 = 3;
	}
	sub_14034C700(a2, (__int64)L"%.*f", v6, v5);
	return a2;
}
// 140A145D0: using guessed type wchar_t asc_140A145D0[5];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

