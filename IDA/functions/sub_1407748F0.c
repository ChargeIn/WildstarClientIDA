#include "../winhttp.h"

//----- (00000001407748F0) ----------------------------------------------------
void __fastcall sub_1407748F0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = a1[22];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[22] = 0i64;
	}
	v3 = a1[25];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = a1[16];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[16] = 0i64;
	}
	v5 = a1[19];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[10];
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[10] = 0i64;
	}
	v7 = a1[13];
	if (v7)
		sub_14018B900(v7, 0);
}

