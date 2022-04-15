#include "../winhttp.h"

//----- (0000000140601DF0) ----------------------------------------------------
__int64 __fastcall sub_140601DF0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
	_QWORD* v3; // r9
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // r11
	__int64 v7; // r10
	__int64 v8; // rcx
	__int64 v10; // [rsp+20h] [rbp-38h] BYREF
	__int64 v11; // [rsp+28h] [rbp-30h]
	__int64 v12; // [rsp+30h] [rbp-28h]
	__int64 v13; // [rsp+38h] [rbp-20h]
	__int64 v14; // [rsp+40h] [rbp-18h]

	v3 = *(_QWORD**)(a1 + 64);
	if (!v3)
		return 0i64;
	v4 = v3[12];
	if (a2 >= v4)
		return 0i64;
	v5 = v3[13];
	if (a2)
	{
		if (a2 <= v5)
			--a2;
	}
	else
	{
		a2 = v3[13];
	}
	v6 = v3[11];
	v7 = *(_QWORD*)(v6 + 8 * a2);
	if (!v7 || a3 >= v4)
		return 0i64;
	if (a3)
	{
		if (a3 <= v5)
			--a3;
	}
	else
	{
		a3 = v3[13];
	}
	v8 = *(_QWORD*)(v6 + 8 * a3);
	if (!v8 || v7 == v8)
		return 0i64;
	v10 = 0i64;
	v11 = 0i64;
	v12 = 0i64;
	v13 = 0i64;
	v14 = 0i64;
	v10 = v3[9];
	v11 = *(_QWORD*)(v7 + 16);
	v12 = *(_QWORD*)(v7 + 24);
	v13 = *(_QWORD*)(v8 + 16);
	v14 = *(_QWORD*)(v8 + 24);
	sub_1403F4740(qword_140C65898, 0x463u, (__int64)&v10);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

