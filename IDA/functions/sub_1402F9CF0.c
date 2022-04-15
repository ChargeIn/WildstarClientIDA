#include "../winhttp.h"

//----- (00000001402F9CF0) ----------------------------------------------------
_BOOL8 __fastcall sub_1402F9CF0(__int64* a1, int a2)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rbx
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v2 + 16))(a1, v6, 0i64);
	return v3 >> 3 < a1[131] && ((unsigned __int8)(1 << (v3 & 7)) & *(_BYTE*)((v3 >> 3) + a1[130])) != 0;
}
// 1402F9CF0: using guessed type int var_18[6];

