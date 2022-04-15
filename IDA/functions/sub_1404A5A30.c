#include "../winhttp.h"

//----- (00000001404A5A30) ----------------------------------------------------
_QWORD* __fastcall sub_1404A5A30(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax

	*a1 = off_140B78370;
	v2 = sub_14018B280(48i64, 0);
	a1[2] = v2;
	a1[3] = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[2] + 8i64) = 0i64;
	*(_QWORD*)(a1[2] + 16i64) = a1[2];
	*(_QWORD*)(a1[2] + 24i64) = a1[2];
	sub_140008410((__int64)(a1 + 1));
	*a1 = off_140B686E0;
	v3 = sub_14018B280(48i64, 0);
	a1[8] = 0i64;
	a1[7] = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(a1[7] + 8i64) = 0i64;
	*(_QWORD*)(a1[7] + 16i64) = a1[7];
	*(_QWORD*)(a1[7] + 24i64) = a1[7];
	a1[11] = 0i64;
	a1[10] = 0i64;
	v4 = sub_14018B280(48i64, 0);
	a1[14] = 0i64;
	a1[13] = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(a1[13] + 8i64) = 0i64;
	*(_QWORD*)(a1[13] + 16i64) = a1[13];
	*(_QWORD*)(a1[13] + 24i64) = a1[13];
	return a1;
}
// 140B686E0: using guessed type __int64 (__fastcall *off_140B686E0[4])();
// 140B78370: using guessed type __int64 (__fastcall *off_140B78370[4])();

