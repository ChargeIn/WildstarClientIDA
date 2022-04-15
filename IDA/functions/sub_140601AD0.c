#include "../winhttp.h"

//----- (0000000140601AD0) ----------------------------------------------------
__int64 __fastcall sub_140601AD0(__int64 a1, unsigned __int64 a2)
{
	_QWORD* v2; // rax
	unsigned __int64 v3; // r9
	unsigned __int64 v4; // rcx
	__int64 v5; // r10
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	__int64 v11; // [rsp+30h] [rbp-18h]

	v2 = *(_QWORD**)(a1 + 64);
	if (!v2)
		return 0i64;
	v3 = v2[12];
	if (a2 >= v3)
		return 0i64;
	v4 = v2[13];
	if (a2)
	{
		if (a2 <= v4)
			--a2;
	}
	else
	{
		a2 = v2[13];
	}
	v5 = v2[11];
	v6 = *(_QWORD*)(v5 + 8 * a2);
	if (!v6)
		return 0i64;
	v7 = v3 ? *(_QWORD*)(v5 + 8 * v4) : 0i64;
	if (v6 == v7)
		return 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v11 = 0i64;
	v9 = v2[9];
	v10 = *(_QWORD*)(v6 + 16);
	v11 = *(_QWORD*)(v6 + 24);
	sub_1403F4740(qword_140C65898, 0x428u, (__int64)&v9);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

