#include "../winhttp.h"

//----- (00000001406DD2E0) ----------------------------------------------------
__int64 __fastcall sub_1406DD2E0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v9; // rbx
	int* v10; // rax
	_OWORD v12[6]; // [rsp+30h] [rbp-98h] BYREF

	v9 = 0i64;
	sub_1400D45E0((__int64)v12, a1, a2, a5, 0i64);
	v10 = sub_14018B280(2096i64, 0);
	if (v10)
		v9 = sub_1406DB520((__int64)v10, a1, a2, a3, v12, a4);
	if (a2)
		sub_1400C7780(a2, v9);
	return v9;
}
// 1406DD2E0: using guessed type _OWORD var_98[6];

