#include "../winhttp.h"

//----- (000000014017B8F0) ----------------------------------------------------
_QWORD* __fastcall sub_14017B8F0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	sub_1400C6B20(*a1);
	if (*a1)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
		*a1 = 0i64;
	}
	sub_1401429A0(qword_140C63678, *((_DWORD*)a1 + 24));
	v2 = a1[6];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[6] = 0i64;
	}
	v3 = a1[9];
	if (v3)
		sub_14018B900(v3, 0);
	sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140C63678: using guessed type __int64 qword_140C63678;

