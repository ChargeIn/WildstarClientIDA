#include "../winhttp.h"

//----- (00000001403DB4A0) ----------------------------------------------------
__int64 __fastcall sub_1403DB4A0(__int64 a1, unsigned int* a2)
{
	unsigned int v2; // r8d
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v7; // [rsp+8h] [rbp+8h]

	v2 = *a2;
	v3 = *(_QWORD*)(*(_QWORD*)(a1 + 32144) + 40i64);
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
	if (v4 == v3 || (v7 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v7 = v3;
	if (v7 != v3)
		*(_DWORD*)(v7 + 116) = 1;
	return 0i64;
}

