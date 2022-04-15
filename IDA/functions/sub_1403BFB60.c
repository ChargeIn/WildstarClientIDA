#include "../winhttp.h"

//----- (00000001403BFB60) ----------------------------------------------------
__int64 __fastcall sub_1403BFB60(__int64 a1, unsigned int a2, int a3)
{
	__int64 result; // rax
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	int v8; // ecx
	__int64 v9; // [rsp+8h] [rbp+8h]

	if (a3 == -1)
		return 1i64;
	v5 = *(_QWORD*)(qword_140C65898 + 5512);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v9 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v9 = *(_QWORD*)(qword_140C65898 + 5512);
	if (v9 == v5)
		return 0i64;
	result = 1i64;
	v8 = **(_DWORD**)(v9 + 40);
	if (v8 != -1)
		return a3 & (unsigned int)(1 << v8);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

