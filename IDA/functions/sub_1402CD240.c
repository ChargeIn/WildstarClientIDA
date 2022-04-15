#include "../winhttp.h"

//----- (00000001402CD240) ----------------------------------------------------
__int64 __fastcall sub_1402CD240(__int64* a1)
{
	__int64 v1; // rax
	__int64 v3; // rcx
	__int64 v4; // rdi
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v1 + 64))(a1, v6, 3i64);
	v3 = a1[4];
	if (v3)
		v4 = *(unsigned int*)(sub_1402D5890(v3) + 8);
	else
		v4 = 0i64;
	return v4 + sub_1402CD1C0(a1);
}
// 1402CD240: using guessed type int var_18[6];

