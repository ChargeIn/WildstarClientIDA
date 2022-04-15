#include "../winhttp.h"

//----- (0000000140058190) ----------------------------------------------------
__int64 __fastcall sub_140058190(__int64 a1, int a2)
{
	__int64 v3; // rdi
	int v4; // eax
	int v5; // edx
	__int64 v6; // rcx
	unsigned __int64 v7; // rdx
	__int64 result; // rax

	if (a2 > 8000)
		return 0i64;
	v3 = a2;
	if (a2 + ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 24)) >> 4) > 8000)
		return 0i64;
	if (a2 <= 0)
		return 1i64;
	if (*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16) <= 16 * a2)
	{
		v4 = *(_DWORD*)(a1 + 88);
		if (a2 > v4)
			v5 = v4 + a2;
		else
			v5 = 2 * v4;
		sub_140061210(a1, v5);
	}
	v6 = *(_QWORD*)(a1 + 40);
	v7 = 16 * v3 + *(_QWORD*)(a1 + 16);
	result = 1i64;
	if (*(_QWORD*)(v6 + 16) < v7)
		*(_QWORD*)(v6 + 16) = v7;
	return result;
}

