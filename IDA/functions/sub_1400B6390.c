#include "../winhttp.h"

//----- (00000001400B6390) ----------------------------------------------------
_QWORD* __fastcall sub_1400B6390(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rax

	a1[1] = 1i64;
	a1[2] = 2i64;
	*a1 = off_140B69300;
	v2 = sub_14018B280(64i64, 0);
	a1[5] = 0i64;
	a1[4] = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[4] + 8i64) = 0i64;
	*(_QWORD*)(a1[4] + 16i64) = a1[4];
	*(_QWORD*)(a1[4] + 24i64) = a1[4];
	v3 = sub_14018B280(96i64, 0);
	a1[9] = 0i64;
	a1[8] = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(a1[8] + 8i64) = 0i64;
	*(_QWORD*)(a1[8] + 16i64) = a1[8];
	*(_QWORD*)(a1[8] + 24i64) = a1[8];
	return a1;
}
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();

