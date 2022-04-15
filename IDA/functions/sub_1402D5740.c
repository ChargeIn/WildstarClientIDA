#include "../winhttp.h"

//----- (00000001402D5740) ----------------------------------------------------
void __fastcall sub_1402D5740(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	int v5[6]; // [rsp+20h] [rbp-18h] BYREF

	*a1 = off_140B62C10;
	sub_14018B900(a1[2], 0);
	v2 = a1[5];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 104i64))(v2);
		v3 = a1[5];
		v5[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v5);
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)a1[5] + 8i64))(a1[5]);
		a1[5] = 0i64;
	}
	v4 = a1[4];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[4] = 0i64;
	}
}
// 140B62C10: using guessed type __int64 (__fastcall *off_140B62C10[19])();
// 1402D5740: using guessed type int var_18[6];

