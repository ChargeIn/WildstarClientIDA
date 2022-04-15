#include "../winhttp.h"

//----- (000000014047A890) ----------------------------------------------------
__int64 __fastcall sub_14047A890(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rax
	unsigned int v3; // edx
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // r9d
	unsigned int v8; // ecx
	unsigned __int64 v9; // r8
	__int64 v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rcx

	result = *(unsigned int*)(a1 + 13836);
	if (!(_DWORD)result)
	{
		v2 = *(_QWORD*)(a1 + 24);
		if (!v2)
			return 0i64;
		v3 = *(_DWORD*)(v2 + 168);
		if (!v3)
			return 0i64;
		if (*(_DWORD*)(a1 + 532))
			return 0i64;
		v4 = sub_140244B00(v3);
		v5 = v4;
		if (!v4)
			return 0i64;
		if (!*(_DWORD*)(v4 + 12))
			return 0i64;
		v6 = sub_140246480(*(_DWORD*)(v4 + 4));
		if (!v6)
			return 0i64;
		v7 = *(_DWORD*)(v6 + 4);
		v8 = 0;
		v9 = *(_QWORD*)(qword_140C65898 + 5792);
		if (!v9)
			return 0i64;
		v10 = *(_QWORD*)(qword_140C65898 + 5784);
		v11 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v10 + 8 * v11) + 8i64) != v7)
		{
			v11 = ++v8;
			if (v8 >= v9)
				return 0i64;
		}
		v12 = *(_QWORD*)(v10 + 8i64 * v8);
		if (v12 && *(_DWORD*)(v12 + 12))
			return *(unsigned int*)(v5 + 12);
		else
			return 0i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

