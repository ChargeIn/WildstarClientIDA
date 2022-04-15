#include "../winhttp.h"

//----- (000000014088FDC0) ----------------------------------------------------
__int64 __fastcall sub_14088FDC0(_QWORD* a1, __int64 a2)
{
	__int64 i; // rdi
	__int64 v5; // rcx
	__int64 v6; // rsi
	__int64 v7; // rbp
	int v8; // eax
	unsigned int v9; // ebx
	char v11[264]; // [rsp+20h] [rbp-138h] BYREF
	__int64 v12; // [rsp+128h] [rbp-30h]
	__int64 v13; // [rsp+130h] [rbp-28h]

	sub_140890370((__int64)v11, (__int64)a1, 1);
	for (i = v12; v12 != a2; i = v12)
		(*(void(__fastcall**)(_QWORD*, char*, _QWORD))(*a1 + 96i64))(a1, v11, 0i64);
	v5 = a1[2];
	v6 = a1[14];
	v7 = *(_QWORD*)(a1[13] + 8i64);
	if (v5)
		v6 += sub_14088C230(v5);
	if (*(_QWORD*)(i + 24))
	{
		v8 = sub_1408904A0((__int64)v11, 0);
		v9 = v7 - v6 - v8 + *(_DWORD*)(v13 + 144) - *(_DWORD*)(v12 + 8);
	}
	else
	{
		v9 = 0;
	}
	nullsub_1(v11);
	return v9;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);

