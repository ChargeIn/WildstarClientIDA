#include "../winhttp.h"

//----- (000000014055B860) ----------------------------------------------------
_QWORD* __fastcall sub_14055B860(_QWORD* a1, char a2)
{
	__int64 v3; // rcx

	v3 = a1[3];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	*a1 = off_140B55048;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();

