#include "../winhttp.h"

//----- (00000001407960A0) ----------------------------------------------------
__int64 __fastcall sub_1407960A0(_QWORD* a1)
{
	const char* v2; // rbx
	int v3; // r9d
	unsigned __int64 v5; // rax
	unsigned __int64 i; // r8
	__int64 v7; // rcx
	char* v8; // rdx
	unsigned __int64 v9; // r8

	v2 = (const char*)sub_140056BB0(a1, 1u, 0i64);
	sub_140056BB0(a1, 2u, 0i64);
	v3 = sub_140795FD0(a1, v2);
	if (!v3)
		return 1i64;
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	v5 = a1[2];
	for (i = v5 - 32; v5 > i; v5 -= 16i64)
	{
		*(_QWORD*)v5 = *(_QWORD*)(v5 - 16);
		*(_DWORD*)(v5 + 8) = *(_DWORD*)(v5 - 8);
	}
	v7 = a1[2];
	v8 = aInit;
	*(_QWORD*)i = *(_QWORD*)v7;
	*(_DWORD*)(i + 8) = *(_DWORD*)(v7 + 8);
	if (v3 == 1)
		v8 = aAbsent;
	if (v8)
	{
		v9 = -1i64;
		do
			++v9;
		while (v8[v9]);
		sub_140058710((__int64)a1, (unsigned __int64*)v8, v9);
		return 3i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 3i64;
	}
}

