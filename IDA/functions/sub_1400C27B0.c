#include "../winhttp.h"

//----- (00000001400C27B0) ----------------------------------------------------
_QWORD* __fastcall sub_1400C27B0(__int64 a1, _QWORD* a2, int a3, int a4)
{
	int v4; // r10d

	v4 = a3;
	if (a4)
		v4 = abs32(a3);
	sub_14034C700(a2, (__int64)L"%.*f%%", v4 != 10 * (v4 / 10), (float)((float)v4 * 0.1));
	return a2;
}
// 140A14808: using guessed type wchar_t asc_140A14808[7];

