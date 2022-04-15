#include "../winhttp.h"

//----- (00000001407C10D0) ----------------------------------------------------
__int64 __fastcall sub_1407C10D0(__int64* a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v5; // r8
	unsigned int v7; // edx
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v8[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 64))(a1, v8);
	v5 = a1[5];
	if (v5
		&& (unsigned int)v3 < *(_DWORD*)(v5 + 72)
		&& (v7 = *(_DWORD*)(*(_QWORD*)(v5 + 80) + 4 * v3), v7 < *(_DWORD*)(v5 + 48)))
	{
		return *(_QWORD*)(v5 + 64) + v7 * *(_DWORD*)(a1[2] + 8);
	}
	else
	{
		return 0i64;
	}
}
// 1407C10D0: using guessed type int var_18[6];

