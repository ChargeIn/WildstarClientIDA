#include "../winhttp.h"

//----- (00000001406D55C0) ----------------------------------------------------
char __fastcall sub_1406D55C0(__int64 a1)
{
	unsigned int v2; // edx
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax
	int v6; // ecx
	__int64 v7; // rax
	char* v8; // rcx
	__int64 v9; // rdx
	char* v10; // rax
	__int64 v12; // [rsp+40h] [rbp+8h]

	v2 = (unsigned __int16)*(_QWORD*)(*(_QWORD*)(a1 + 32) + 3488i64);
	v3 = *(_QWORD*)(qword_140C65898 + 29656);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v12 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v12 = *(_QWORD*)(qword_140C65898 + 29656);
	if (v12 != v3)
	{
		v6 = *(_DWORD*)(v12 + 36);
		if (v6)
			*(_DWORD*)(v12 + 36) = v6 - 1;
	}
	v7 = *(_QWORD*)(a1 + 32);
	v8 = *(char**)(v7 + 3440);
	v9 = *(_QWORD*)(v7 + 3488);
	v10 = &byte_140B7B700;
	if (v8)
		v10 = v8;
	return sub_1400D4070(a1, 0x17u, (char*)a1, byte_1409D2FFC, v10, v9);
}
// 1409D2FFC: using guessed type _BYTE byte_1409D2FFC[24];
// 140B7B700: using guessed type char byte_140B7B700;
// 140C65898: using guessed type __int64 qword_140C65898;

