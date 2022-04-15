#include "../winhttp.h"

//----- (00000001402CD310) ----------------------------------------------------
__int64 __fastcall sub_1402CD310(__int64* a1, unsigned __int64 a2)
{
	__int64 v2; // rax
	__int64 v5; // rsi
	__int64 v6; // r8
	unsigned __int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // rsi
	__int64 v12; // rcx
	__int64 v13; // rax
	unsigned __int64 v14; // rbx
	int v15[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v15[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v2 + 64))(a1, v15, 3i64);
	v5 = a1[3];
	v15[0] = -1;
	if (*(_DWORD*)(v5 + 24) != 3)
		sub_1402C9AE0(v5, (__int64)v15, 3);
	v6 = *(_QWORD*)(v5 + 64);
	v7 = a1[8];
	if (v7 >= *(unsigned int*)(v6 + 112))
		return 0i64;
	v8 = *(_QWORD*)(v6 + 120);
	v9 = 5 * v7;
	v10 = *(unsigned int*)(v8 + 8 * v9 + 24);
	if (a2 < v10)
		return *(_QWORD*)(v6 + 296)
		+ 2i64
		* *(unsigned int*)(*(_QWORD*)(v6 + 312)
			+ 4i64
			* *(unsigned int*)(((unsigned __int64)*(unsigned __int16*)(*(_QWORD*)(v8 + 8 * v9 + 32)
				+ 2 * a2) << 6)
				+ *(_QWORD*)(v6 + 104)
				+ 4));
	v12 = a1[4];
	if (v12 && (v13 = sub_1402D5890(v12), v14 = a2 - v10, v14 < *(unsigned int*)(v13 + 8)))
		return *(_QWORD*)((v14 << 7) + *(_QWORD*)(v13 + 16) + 16);
	else
		return 0i64;
}

