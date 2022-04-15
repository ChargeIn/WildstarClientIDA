#include "../winhttp.h"

//----- (0000000140701290) ----------------------------------------------------
__int64 __fastcall sub_140701290(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // eax
	__int64 v3; // r9
	int v4; // edx
	int v5; // ecx
	unsigned int v6; // eax
	int v8; // [rsp+38h] [rbp+10h] BYREF

	v1 = dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = v1[2];
	if (v2 && (v2 != 1 || *v1))
	{
		v3 = qword_140C65898;
		v4 = 1;
		v5 = *(_DWORD*)(qword_140C65898 + 25384);
		v6 = v5 | 8;
	}
	else
	{
		v3 = qword_140C65898;
		v4 = 0;
		v5 = *(_DWORD*)(qword_140C65898 + 25384);
		v6 = v5 & 0xFFFFFFF7;
	}
	if (v6 != v5)
	{
		v8 = v4;
		sub_1403F4900(v3, 0x170u, (__int64)&v8);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

