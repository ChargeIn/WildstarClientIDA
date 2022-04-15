#include "../winhttp.h"

//----- (00000001405BFC70) ----------------------------------------------------
__int64 __fastcall sub_1405BFC70(__int64 a1, int a2, int a3)
{
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // r9
	unsigned __int64 v7; // r8
	unsigned int v8; // r9d
	__int64 v9; // rdx
	_DWORD* i; // rcx
	__int64 v12; // [rsp+8h] [rbp+8h]

	v4 = *(_QWORD*)(a1 + 72);
	v5 = *(_QWORD*)(v4 + 8);
	v6 = v4;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v4 || (v12 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v12 = *(_QWORD*)(a1 + 72);
	if (v12 == v4 || *(_DWORD*)(v12 + 60))
		return 0i64;
	v7 = *(_QWORD*)(v12 + 48);
	v8 = 0;
	v9 = 0i64;
	if (v7)
	{
		for (i = *(_DWORD**)(v12 + 40); *i != a3; ++i)
		{
			if (++v9 >= v7)
				return 0i64;
		}
		return 1;
	}
	return v8;
}

