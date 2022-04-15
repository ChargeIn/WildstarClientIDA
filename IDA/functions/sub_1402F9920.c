#include "../winhttp.h"

//----- (00000001402F9920) ----------------------------------------------------
__int64 __fastcall sub_1402F9920(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v5; // r8
	__int64 v7; // rdx
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v8[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 1400))(a1, v8);
	v5 = a1[8];
	if ((unsigned int)v3 >= *(_DWORD*)(v5 + 528))
		return 0i64;
	v7 = *(unsigned __int16*)(*(_QWORD*)(v5 + 536) + 2 * v3);
	if ((unsigned int)v7 >= *(_DWORD*)(v5 + 512))
		return 0i64;
	else
		return *(unsigned __int16*)(*(_QWORD*)(v5 + 520) + 4 * v7 + 2);
}
// 1402F9920: using guessed type int var_18[6];

