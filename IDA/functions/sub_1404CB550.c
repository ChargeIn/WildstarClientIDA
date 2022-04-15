#include "../winhttp.h"

//----- (00000001404CB550) ----------------------------------------------------
_QWORD* __fastcall sub_1404CB550(_QWORD* a1)
{
	unsigned __int64 v2; // r9
	unsigned int v3; // ecx
	__int64 v4; // rax
	int* v5; // rax
	unsigned __int64 v6; // r8

	*a1 = 0i64;
	v2 = sub_1401A40C0(8ui64);
	a1[1] = v2;
	v4 = v2 * v3;
	if (!is_mul_ok(v2, v3))
		v4 = -1i64;
	v5 = sub_14018B280(v4, 0);
	v6 = 8i64 * a1[1];
	a1[2] = v5;
	sub_1407E4830(v5, 0i64, v6);
	a1[3] = sub_1404BC720;
	a1[4] = sub_1404BC740;
	return a1;
}
// 1404CB57A: variable 'v3' is possibly undefined

