#include "../winhttp.h"

//----- (00000001400ED8F0) ----------------------------------------------------
_QWORD* __fastcall sub_1400ED8F0(_QWORD* a1, unsigned __int64 a2)
{
	unsigned __int64 v3; // rax
	__int64 v4; // rax
	unsigned __int64 v5; // kr00_8
	int* v6; // rax
	unsigned __int64 v7; // r8

	*a1 = 0i64;
	v3 = sub_1401A40C0(a2);
	a1[1] = v3;
	v5 = v3;
	v4 = 8 * v3;
	if (!is_mul_ok(v5, 8ui64))
		v4 = -1i64;
	v6 = sub_14018B280(v4, 0);
	v7 = 8i64 * a1[1];
	a1[2] = v6;
	sub_1407E4830(v6, 0i64, v7);
	a1[3] = sub_1400EDC70;
	a1[4] = sub_1400EDCB0;
	return a1;
}

