#include "../winhttp.h"

//----- (00000001405519F0) ----------------------------------------------------
__int64 __fastcall sub_1405519F0(__int64 a1, unsigned int a2, unsigned int* a3)
{
	__int64 v3; // rbx
	BOOL v6; // r9d
	unsigned int v7; // eax
	__int64 v8; // rcx
	unsigned int v9; // eax

	v3 = a2;
	*a3 = a2;
	sub_140551D40(a1, a2, (__int64)(a3 + 2), 0);
	v6 = 0;
	a3[12] = v3 == *(_DWORD*)(a1 + 16);
	v7 = *(_DWORD*)(a1 + 16);
	if ((_DWORD)v3 != v7 && (unsigned int)v3 <= v7)
	{
		v8 = *(_QWORD*)(a1 + 8 * v3 + 24);
		if (v8)
			v6 = (*(_DWORD*)(v8 + 8) & 0x20) == 0;
	}
	a3[13] = v6;
	if ((unsigned int)v3 >= *(_DWORD*)(a1 + 16)
		|| (unsigned int)sub_140551840(a1, v3) <= 1
		|| (*(_DWORD*)(*(_QWORD*)(a1 + 8 * v3 + 24) + 8i64) & 0x400) != 0)
	{
		a3[11] = sub_1405515C0(a1, v3);
		a3[10] = sub_140551840(a1, v3);
	}
	else
	{
		v9 = sub_140551630(a1, v3);
		a3[10] = 100;
		a3[11] = v9;
	}
	return 1i64;
}

