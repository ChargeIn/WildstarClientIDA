#include "../winhttp.h"

//----- (000000014079AE70) ----------------------------------------------------
_QWORD* __fastcall sub_14079AE70(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rax

	*a1 = off_140B78240;
	v2 = sub_14018B280(72i64, 0);
	a1[2] = v2;
	a1[3] = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[2] + 8i64) = 0i64;
	*(_QWORD*)(a1[2] + 16i64) = a1[2];
	*(_QWORD*)(a1[2] + 24i64) = a1[2];
	v3 = sub_14018B280(72i64, 0);
	a1[7] = 0i64;
	a1[6] = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(a1[6] + 8i64) = 0i64;
	*(_QWORD*)(a1[6] + 16i64) = a1[6];
	*(_QWORD*)(a1[6] + 24i64) = a1[6];
	return a1;
}
// 140B78240: using guessed type __int64 (__fastcall *off_140B78240[4])();

