#include "../winhttp.h"

//----- (000000014069B980) ----------------------------------------------------
__int64 __fastcall sub_14069B980(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 result; // rax
	double v8; // xmm0_8
	float v9; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) != 0)
	{
		sub_1401E83A0(&v9, *(_QWORD*)(v5 + 568));
		v6 = a1[2];
		result = 1i64;
		v8 = v9;
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = v8;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 14069B9AC: variable 'v3' is possibly undefined

