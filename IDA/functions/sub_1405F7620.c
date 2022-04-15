#include "../winhttp.h"

//----- (00000001405F7620) ----------------------------------------------------
void __fastcall sub_1405F7620(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	*a1 = &off_140B6E880;
	v2 = a1[16];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	sub_140019490(a1 + 11);
	sub_14018B900(a1[13], 0);
	a1[13] = 0i64;
	v3 = a1[9];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
}
// 140B6E880: using guessed type __int64 (__fastcall *off_140B6E880)();

