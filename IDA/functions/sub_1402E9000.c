#include "../winhttp.h"

//----- (00000001402E9000) ----------------------------------------------------
_BOOL8 __fastcall sub_1402E9000(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 48))(a1, v6);
	return !a1[v3 + 7]
		&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[3] + 64i64))(a1[3], (unsigned int)v3);
}
// 1402E9000: using guessed type int var_18[6];

