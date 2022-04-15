#include "../winhttp.h"

//----- (00000001402CD130) ----------------------------------------------------
__int64 __fastcall sub_1402CD130(__int64* a1, unsigned __int64 a2)
{
	__int64 v2; // rax
	__int64 v5; // rdi
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v7[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v2 + 64))(a1, v7, 2i64);
	v5 = a1[3];
	v7[0] = -1;
	if (*(_DWORD*)(v5 + 24) != 3)
		sub_1402C9AE0(v5, (__int64)v7, 3);
	if (a2 >= *(unsigned int*)(*(_QWORD*)(v5 + 64) + 112i64))
		return 2147942487i64;
	a1[8] = a2;
	return 0i64;
}

