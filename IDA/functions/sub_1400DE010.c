#include "../winhttp.h"

//----- (00000001400DE010) ----------------------------------------------------
__int64 __fastcall sub_1400DE010(_QWORD* a1)
{
	__int64 result; // rax
	_DWORD* v3; // rax
	__int64 v4; // rdx
	int v5; // ecx
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = sub_1400CB3D0(result, v6);
		v4 = a1[2];
		v5 = v3[3] - v3[1];
		*(_DWORD*)(v4 + 8) = 3;
		result = 1i64;
		*(double*)v4 = (double)v5;
		a1[2] += 16i64;
	}
	return result;
}
// 1400DE010: using guessed type int var_18[6];

