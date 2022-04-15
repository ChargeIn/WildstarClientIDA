#include "../winhttp.h"

//----- (00000001402FB070) ----------------------------------------------------
__int64 __fastcall sub_1402FB070(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	unsigned int v5; // r8d
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // rdx
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v10[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 1400))(a1, v10);
	v5 = 0;
	if ((_DWORD)v3
		&& (v7 = a1[8], (unsigned int)v3 < *(_DWORD*)(v7 + 624))
		&& (v8 = *(unsigned __int16*)(*(_QWORD*)(v7 + 632) + 2 * v3), (unsigned int)v8 < *(_DWORD*)(v7 + 608)))
	{
		v6 = *(_QWORD*)(v7 + 616) + 4 * v8;
	}
	else
	{
		v6 = 0i64;
	}
	LOBYTE(v5) = v6 != 0;
	return v5;
}
// 1402FB070: using guessed type int var_18[6];

