#include "../winhttp.h"

//----- (00000001404CD1B0) ----------------------------------------------------
__int64 __fastcall sub_1404CD1B0(__int64 a1, int a2, int a3)
{
	int v3; // r8d
	int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v9; // [rsp+8h] [rbp+8h]

	v3 = a3 - a2;
	v4 = *(_DWORD*)(a1 + 72);
	if (v3 >= v4)
	{
		v4 = v3;
		if (v3 > *(_DWORD*)(a1 + 76))
			v4 = *(_DWORD*)(a1 + 76);
	}
	v5 = *(_QWORD*)(a1 + 48);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v4)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v9 = v6, v4 < *(_DWORD*)(v6 + 32)))
		v9 = v5;
	if (v9 == v5)
		return 1i64;
	else
		return **(unsigned int**)(v9 + 40);
}

