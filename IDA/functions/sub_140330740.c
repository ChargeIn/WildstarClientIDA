#include "../winhttp.h"

//----- (0000000140330740) ----------------------------------------------------
void __fastcall sub_140330740(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	*a1 = &off_140B64668;
	v2 = (_QWORD*)a1[97];
	if (v2)
		*v2 = a1[98];
	v3 = a1[98];
	if (v3)
		*(_QWORD*)(v3 + 776) = a1[97];
	a1[97] = 0i64;
	a1[98] = 0i64;
	v4 = a1[16];
	a1[12] = off_140B64640;
	if (v4)
	{
		sub_14018B900(v4, 0);
		a1[16] = 0i64;
	}
	v5 = a1[11];
	a1[5] = off_140B64918;
	if (v5)
	{
		sub_14018B900(v5, 0);
		a1[11] = 0i64;
	}
	v6 = a1[3];
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
}
// 140B64640: using guessed type __int64 (__fastcall *off_140B64640[6])();
// 140B64668: using guessed type __int64 (__fastcall *off_140B64668)();
// 140B64918: using guessed type __int64 (__fastcall *off_140B64918[12])();

