#include "../winhttp.h"

//----- (00000001405E4200) ----------------------------------------------------
_QWORD* __fastcall sub_1405E4200(_QWORD* a1)
{
	unsigned __int64 v2; // rax
	__int64 v3; // rax
	unsigned __int64 v4; // kr00_8
	int* v5; // rax
	unsigned __int64 v6; // r8

	*a1 = 0i64;
	v2 = sub_1401A40C0(0x32ui64);
	a1[1] = v2;
	v4 = v2;
	v3 = 8 * v2;
	if (!is_mul_ok(v4, 8ui64))
		v3 = -1i64;
	v5 = sub_14018B280(v3, 0);
	v6 = 8i64 * a1[1];
	a1[2] = v5;
	sub_1407E4830(v5, 0i64, v6);
	a1[3] = sub_1404BC720;
	a1[4] = sub_1404BC740;
	return a1;
}

