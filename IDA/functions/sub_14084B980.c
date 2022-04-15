#include "../winhttp.h"

//----- (000000014084B980) ----------------------------------------------------
_QWORD* __fastcall sub_14084B980(_QWORD* a1, char a2)
{
	bool v2; // zf
	_QWORD* v5; // rcx

	v2 = a1[4] == 0i64;
	*a1 = off_1409A3258;
	if (!v2)
	{
		do
		{
			v5 = (_QWORD*)a1[4];
			if (v5)
				a1[4] = v5[4];
			(*(void(__fastcall**)(_QWORD*))(*v5 + 16i64))(v5);
		} while (a1[4]);
	}
	a1[4] = 0i64;
	sub_140865E30(a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A3258: using guessed type __int64 (__fastcall *off_1409A3258[6])();

