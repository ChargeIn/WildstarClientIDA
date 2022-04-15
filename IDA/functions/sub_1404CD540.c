#include "../winhttp.h"

//----- (00000001404CD540) ----------------------------------------------------
void __fastcall sub_1404CD540(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = a1 + 21;
	*(v2 - 21) = &off_140B68F50;
	sub_1404CE030(v2);
	v3 = a1[23];
	if (v3)
		sub_14018B900(v3, 0);
	sub_1404CE030(a1 + 15);
	v4 = a1[17];
	if (v4)
		sub_14018B900(v4, 0);
	sub_1404CE030(a1 + 9);
	v5 = a1[11];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[6];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1[2];
	if (v7)
		sub_14018B900(v7, 0);
}
// 140B68F50: using guessed type __int64 (__fastcall *off_140B68F50)();

