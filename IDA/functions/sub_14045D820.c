#include "../winhttp.h"

//----- (000000014045D820) ----------------------------------------------------
_QWORD* __fastcall sub_14045D820(_QWORD* a1, char a2)
{
	const void*** v4; // rbx
	int i; // edi

	v4 = (const void***)(a1 + 9);
	for (i = 2; i >= 0; --i)
	{
		if (*--v4)
			sub_1401A4A00(v4);
	}
	*a1 = off_140B68F20;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();

