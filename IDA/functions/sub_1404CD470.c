#include "../winhttp.h"

//----- (00000001404CD470) ----------------------------------------------------
_QWORD* __fastcall sub_1404CD470(_QWORD* a1, unsigned __int64 a2)
{
	_QWORD* v3; // rcx
	unsigned __int64 v4; // rdx
	unsigned __int64 v5; // rdx

	*a1 = &off_140B68F50;
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[4] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	a1[8] = 0i64;
	v3 = a1 + 9;
	v3[2] = 0i64;
	v3[3] = 0i64;
	v3[4] = 0i64;
	v3[5] = 0i64;
	sub_1403FB7C0(v3, a2);
	a1[17] = 0i64;
	a1[18] = 0i64;
	a1[19] = 0i64;
	a1[20] = 0i64;
	sub_1403FB7C0(a1 + 15, v4);
	a1[23] = 0i64;
	a1[24] = 0i64;
	a1[25] = 0i64;
	a1[26] = 0i64;
	sub_1403FB7C0(a1 + 21, v5);
	return a1;
}
// 1404CD4CE: variable 'v4' is possibly undefined
// 1404CD4EA: variable 'v5' is possibly undefined
// 140B68F50: using guessed type __int64 (__fastcall *off_140B68F50)();

