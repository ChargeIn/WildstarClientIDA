#include "../winhttp.h"

//----- (00000001400C2EB0) ----------------------------------------------------
__int64 __fastcall sub_1400C2EB0(__int64* a1, __int64 a2, __int64 a3)
{
	__int64* v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rax
	int* v7; // rax
	__int64 v8; // rcx
	__int64 result; // rax
	_QWORD v10[16]; // [rsp+20h] [rbp-98h] BYREF

	if (!a1 || !a3)
		return 2147500037i64;
	v4 = v10;
	v5 = 16i64;
	v6 = 2860486313i64 * (a3 + 0x718DA9074F2DEB91i64);
	do
	{
		*v4++ = v6;
		v6 = 2860486313i64 * (a3 + v6);
		--v5;
	} while (v5);
	v7 = sub_14018B280(176i64, 0);
	if (v7)
		v8 = sub_1400C2BD0((__int64)v7, v10);
	else
		v8 = 0i64;
	result = 2147500037i64;
	*a1 = v8;
	if (v8)
		return 0i64;
	return result;
}
// 1400C2EB0: using guessed type _QWORD var_98[16];

