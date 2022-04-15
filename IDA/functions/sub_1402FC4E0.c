#include "../winhttp.h"

//----- (00000001402FC4E0) ----------------------------------------------------
_BOOL8 __fastcall sub_1402FC4E0(__int64* a1, int a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	__int64 v5; // r8
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = a2;
	if (a2
		&& a2 < 61
		&& (v4 = *a1,
			v7[0] = -1,
			(*(void(__fastcall**)(__int64*, int*))(v4 + 1400))(a1, v7),
			v5 = a1[8],
			(unsigned int)v2 < *(_DWORD*)(v5 + 824)))
	{
		return (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v5 + 832) + 2 * v2) < *(_DWORD*)(v5 + 808);
	}
	else
	{
		return 0i64;
	}
}
// 1402FC4E0: using guessed type int var_18[6];

