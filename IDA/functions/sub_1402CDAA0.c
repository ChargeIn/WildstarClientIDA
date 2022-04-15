#include "../winhttp.h"

//----- (00000001402CDAA0) ----------------------------------------------------
__int64 __fastcall sub_1402CDAA0(__int64* a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v5; // rbx
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v7[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v2 + 64))(a1, v7, 2i64);
	v5 = a1[3];
	v7[0] = -1;
	if (*(_DWORD*)(v5 + 24) != 3)
		sub_1402C9AE0(v5, (__int64)v7, 1);
	return *(_QWORD*)(*(_QWORD*)(v5 + 64) + 296i64)
		+ 2i64 * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) + 312i64) + 4 * v3);
}

