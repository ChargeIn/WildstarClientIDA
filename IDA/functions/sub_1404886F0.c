#include "../winhttp.h"

//----- (00000001404886F0) ----------------------------------------------------
__int64 __fastcall sub_1404886F0(_QWORD* a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v4; // r8
	__int64 v5; // r9
	char v7[24]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v8; // [rsp+40h] [rbp+8h]
	unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

	v9 = a2;
	v2 = a1[10];
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v8 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v8 = a1[10];
	if (v8 != v2 || a1[11] >= (unsigned __int64)*(unsigned int*)(*a1 + 12i64))
		return 2147500037i64;
	sub_1400EE810((__int64)(a1 + 1), &v9);
	sub_1400EE810((__int64)(a1 + 5), &v9);
	sub_1400293C0((__int64)(a1 + 9), (__int64)v7, (int*)&v9);
	return 0i64;
}
// 1404886F0: using guessed type char var_18[24];

