#include "../winhttp.h"

//----- (000000014071E210) ----------------------------------------------------
_QWORD* __fastcall sub_14071E210(_QWORD* a1, char a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B74060;
	v4 = a1[94];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[94] = 0i64;
	}
	v5 = a1[94];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	sub_14071BF80((__int64)a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B74060: using guessed type __int64 (__fastcall *off_140B74060[17])();

