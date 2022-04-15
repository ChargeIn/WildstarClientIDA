#include "../winhttp.h"

//----- (00000001404ABC80) ----------------------------------------------------
_QWORD* __fastcall sub_1404ABC80(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	int* v5; // rax

	sub_1404ABDA0(a1);
	*a1 = off_140B687D0;
	v2 = sub_14018B280(48i64, 0);
	a1[34] = v2;
	a1[35] = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[34] + 8i64) = 0i64;
	*(_QWORD*)(a1[34] + 16i64) = a1[34];
	*(_QWORD*)(a1[34] + 24i64) = a1[34];
	v3 = sub_14018B280(48i64, 0);
	a1[39] = 0i64;
	a1[38] = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(a1[38] + 8i64) = 0i64;
	*(_QWORD*)(a1[38] + 16i64) = a1[38];
	*(_QWORD*)(a1[38] + 24i64) = a1[38];
	v4 = sub_14018B280(48i64, 0);
	a1[43] = 0i64;
	a1[42] = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(a1[42] + 8i64) = 0i64;
	*(_QWORD*)(a1[42] + 16i64) = a1[42];
	*(_QWORD*)(a1[42] + 24i64) = a1[42];
	v5 = sub_14018B280(48i64, 0);
	a1[47] = 0i64;
	a1[46] = v5;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(a1[46] + 8i64) = 0i64;
	*(_QWORD*)(a1[46] + 16i64) = a1[46];
	*(_QWORD*)(a1[46] + 24i64) = a1[46];
	return a1;
}
// 140B687D0: using guessed type __int64 (__fastcall *off_140B687D0[25])();

