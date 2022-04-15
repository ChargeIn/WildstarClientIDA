#include "../winhttp.h"

//----- (0000000140601F00) ----------------------------------------------------
__int64 __fastcall sub_140601F00(__int64 a1, unsigned __int64 a2, int a3)
{
	_QWORD* v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	int v6; // ecx
	int v7; // eax
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	__int64 v11; // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	v3 = *(_QWORD**)(a1 + 64);
	if (!v3 || a2 >= v3[12])
		return 0i64;
	if (a2)
	{
		if (a2 <= v3[13])
			--a2;
	}
	else
	{
		a2 = v3[13];
	}
	v4 = *(_QWORD*)(v3[11] + 8 * a2);
	if (!v4)
		return 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v11 = 0i64;
	v12 = 0i64;
	v9 = v3[9];
	v10 = *(_QWORD*)(v4 + 16);
	v5 = *(_QWORD*)(v4 + 24);
	v6 = -1;
	v11 = v5;
	if (a3 != -1)
		v6 = a3;
	v7 = 0;
	if (v6)
		v7 = v6;
	LODWORD(v12) = v7;
	sub_1403F4740(qword_140C65898, 0x45Cu, (__int64)&v9);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

