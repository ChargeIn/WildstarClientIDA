#include "../winhttp.h"

//----- (00000001400BED00) ----------------------------------------------------
_QWORD* __fastcall sub_1400BED00(__int64 a1, _QWORD* a2, int a3, int a4)
{
	int v4; // r10d
	__int64 v6; // r8
	int v8; // [rsp+20h] [rbp-18h]

	v4 = a3;
	if (a4)
		v4 = abs32(a3);
	v6 = 0i64;
	v8 = 160;
	if (v4 != 10 * (v4 / 10))
		v6 = 1i64;
	sub_14034C700(a2, (__int64)L"%.*f%c%%", v6, (float)((float)v4 * 0.1), v8);
	return a2;
}
// 140A14538: using guessed type wchar_t aFC[9];

