#include "../winhttp.h"

//----- (000000014010BFF0) ----------------------------------------------------
void __fastcall sub_14010BFF0(_QWORD* a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx

	v2 = a1[119];
	v3 = 0i64;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[119] = 0i64;
	}
	v4 = a1[120];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[120] = 0i64;
	}
	v5 = a1[121];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[121] = 0i64;
	}
	v6 = a1[123];
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[123] = 0i64;
	}
	v7 = a1[122];
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[122] = 0i64;
	}
	if (a1[118])
	{
		do
			sub_14018B900(*(_QWORD*)(a1[117] + 8 * v3++), 0);
		while (v3 < a1[118]);
	}
	v8 = a1[117];
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	v9 = a1[7];
	if (v9)
		sub_14018B900(v9, 0);
	v10 = a1[3];
	if (v10)
		sub_14018B900(v10, 0);
}

