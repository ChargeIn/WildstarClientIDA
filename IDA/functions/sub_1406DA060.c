#include "../winhttp.h"

//----- (00000001406DA060) ----------------------------------------------------
int* __fastcall sub_1406DA060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	int* result; // rax
	int* v9; // rbx
	_OWORD v10[6]; // [rsp+40h] [rbp-88h] BYREF

	sub_1400D45E0((__int64)v10, a1, a2, a5, 0i64);
	result = sub_14018B280(1040i64, 0);
	v9 = result;
	if (result)
	{
		sub_1400C5920((__int64)result, a1, a2, 0i64, v10, a4, 0i64);
		v9[256] = 0;
		*(_QWORD*)v9 = off_140B71570;
		*((_QWORD*)v9 + 54) |= 0x200000000ui64;
		return v9;
	}
	return result;
}
// 140B71570: using guessed type __int64 (__fastcall *off_140B71570[25])();
// 1406DA060: using guessed type _OWORD var_88[6];

