#include "../winhttp.h"

//----- (0000000140445D00) ----------------------------------------------------
void __fastcall sub_140445D00(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // r8
	__int64 v4; // rdx
	__int64 v5; // rcx
	int v6; // edx
	_QWORD* i; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx

	v2 = a1[1];
	if (v2)
		sub_140445E50(v2);
	v3 = a1[2];
	if (v3)
	{
		v4 = *(int*)(v3 - 8);
		v5 = 3 * v4;
		v6 = v4 - 1;
		for (i = (_QWORD*)(v3 + 8 * v5); v6 >= 0; *i = off_140B73A90)
		{
			--v6;
			i -= 3;
		}
		sub_14018B900(v3 - 8, 0);
	}
	if (a1[5])
	{
		sub_140032150((__int64)(a1 + 3), *(_QWORD**)(a1[4] + 8i64));
		*(_QWORD*)(a1[4] + 16i64) = a1[4];
		*(_QWORD*)(a1[4] + 8i64) = 0i64;
		*(_QWORD*)(a1[4] + 24i64) = a1[4];
		a1[5] = 0i64;
	}
	v8 = a1[14];
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	v9 = a1[13];
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
	v10 = a1[12];
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
	v11 = a1[11];
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	v12 = a1[10];
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	v13 = a1[9];
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
	v14 = a1[8];
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
	v15 = a1[7];
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
	if (a1[5])
	{
		sub_140032150((__int64)(a1 + 3), *(_QWORD**)(a1[4] + 8i64));
		*(_QWORD*)(a1[4] + 16i64) = a1[4];
		*(_QWORD*)(a1[4] + 8i64) = 0i64;
		*(_QWORD*)(a1[4] + 24i64) = a1[4];
		a1[5] = 0i64;
	}
	sub_14018B900(a1[4], 0);
}
// 140B73A90: using guessed type __int64 (__fastcall *off_140B73A90[71])();

