#include "../winhttp.h"

//----- (00000001400F96D0) ----------------------------------------------------
__int64 __fastcall sub_1400F96D0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	_WORD* v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rax
	int v9; // [rsp+20h] [rbp-28h]
	_WORD* v10[3]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v11; // [rsp+50h] [rbp+8h] BYREF
	__int64 v12; // [rsp+58h] [rbp+10h] BYREF
	__int64 v13; // [rsp+60h] [rbp+18h] BYREF

	v13 = a3;
	v3 = *(_QWORD*)(a1 + 8);
	v4 = *(_WORD**)(a2 + 8);
	v5 = *(_QWORD*)(a1 + 16) - v3;
	v13 = -1i64;
	v6 = v5 >> 1;
	if (!v6)
		return -1i64;
	v7 = *(_QWORD*)(a2 + 16);
	v10[0] = v4;
	v10[1] = &v4[(v7 - (__int64)v4) >> 1];
	v13 = v3;
	v11 = v3 + 2 * v6;
	sub_1400F94D0(&v12, &v11, &v13, v10, v9);
	if (v12 == v3)
		return -1i64;
	else
		return (v12 - v3 - 2) >> 1;
}
// 1400F9756: variable 'v9' is possibly undefined

