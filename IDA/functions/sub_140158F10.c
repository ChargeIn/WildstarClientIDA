#include "../winhttp.h"

//----- (0000000140158F10) ----------------------------------------------------
void __fastcall sub_140158F10(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx

	*a1 = &off_140B5CAE0;
	v2 = a1[28];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[28] = 0i64;
	}
	v3 = a1[25];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = a1[21];
	if (v4)
		sub_14018B900(v4, 0);
	v5 = a1[17];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[13];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1[6];
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[6] = 0i64;
	}
	v8 = a1[9];
	if (v8)
		sub_14018B900(v8, 0);
	v9 = a1[3];
	if (v9)
		sub_14018B900(v9, 0);
}
// 140B5CAE0: using guessed type __int64 (__fastcall *off_140B5CAE0)();

