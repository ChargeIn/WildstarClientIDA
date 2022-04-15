#include "../winhttp.h"

//----- (00000001404DDF50) ----------------------------------------------------
_QWORD* __fastcall sub_1404DDF50(_QWORD* a1, int a2)
{
	int* v3; // rax

	sub_1400B7090((__int64)a1, a2);
	*a1 = off_140B69230;
	a1[24] = 0i64;
	a1[25] = 0i64;
	a1[26] = 0i64;
	v3 = sub_14018B280(16i64, 0);
	a1[24] = v3;
	a1[25] = v3;
	a1[26] = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	return a1;
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();

