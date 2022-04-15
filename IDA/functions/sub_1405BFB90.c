#include "../winhttp.h"

//----- (00000001405BFB90) ----------------------------------------------------
__int64 __fastcall sub_1405BFB90(__int64 a1, int a2, int a3)
{
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // [rsp+30h] [rbp+8h]

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
	if (v6 == v4 || (v10 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v10 = *(_QWORD*)(a1 + 72);
	if (v10 == v4 || *(_DWORD*)(v10 + 60))
		return 0i64;
	if (*(_DWORD*)(v10 + 56) == a3)
		return 1i64;
	v8 = 0i64;
	if (!*(_QWORD*)(v10 + 48))
		return 0i64;
	while (1)
	{
		v9 = sub_140215240(*(_DWORD*)(*(_QWORD*)(v10 + 40) + 4 * v8));
		if (v9)
		{
			if (*(_DWORD*)(v9 + 16) == a3)
				break;
		}
		if ((unsigned __int64)++v8 >= *(_QWORD*)(v10 + 48))
			return 0i64;
	}
	return 1i64;
}

