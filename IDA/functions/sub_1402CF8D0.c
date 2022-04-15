#include "../winhttp.h"

//----- (00000001402CF8D0) ----------------------------------------------------
__int64 __fastcall sub_1402CF8D0(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int128* a5)
{
	__int64 v5; // rsi
	bool v6; // zf
	__int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rdi
	int v17[6]; // [rsp+20h] [rbp-18h] BYREF

	a1[1] = a2;
	a1[2] = a3;
	v5 = *(_QWORD*)(a2 + 24);
	v6 = *(_DWORD*)(v5 + 24) == 3;
	v17[0] = -1;
	if (!v6)
		sub_1402C9AE0(v5, (__int64)v17, 3);
	v10 = a1[1];
	v17[0] = -1;
	a1[3] = *(_QWORD*)(v5 + 88) + 176 * a3;
	v11 = *(_QWORD*)(v10 + 24);
	if (*(_DWORD*)(v11 + 24) != 3)
		sub_1402C9AE0(*(_QWORD*)(v10 + 24), (__int64)v17, 3);
	v12 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 40i64) + (a1[2] << 6);
	a1[28] = 0i64;
	v13 = *a1;
	a1[4] = v12;
	(*(void(__fastcall**)(__int64*, _QWORD))(v13 + 200))(a1, 0i64);
	(*(void(__fastcall**)(__int64*, _QWORD))(*a1 + 208))(a1, 0i64);
	sub_1402D02D0((__int64)a1, a5);
	v14 = a1[1];
	v17[0] = -1;
	v15 = *(_QWORD*)(v14 + 24);
	if (*(_DWORD*)(v15 + 24) != 3)
		sub_1402C9AE0(*(_QWORD*)(v14 + 24), (__int64)v17, 1);
	sub_1402D1520(a1 + 37, *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) + 72i64) + 24i64));
	(*(void(__fastcall**)(__int64*, __int64, __int64))(*a1 + 56))(a1, a4, 0xFFFFFFFFi64);
	return 0i64;
}

