#include "../winhttp.h"

//----- (00000001406DECF0) ----------------------------------------------------
int* __fastcall sub_1406DECF0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	int* result; // rax
	_OWORD v10[6]; // [rsp+40h] [rbp-88h] BYREF

	sub_1400D45E0((__int64)v10, a1, a2, a5, 0i64);
	result = sub_14018B280(1200i64, 0);
	if (result)
		return (int*)sub_1406DDEC0((__int64)result, a1, a2, a3, v10, a4);
	return result;
}
// 1406DECF0: using guessed type _OWORD var_88[6];

