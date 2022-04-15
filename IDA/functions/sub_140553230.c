#include "../winhttp.h"

//----- (0000000140553230) ----------------------------------------------------
__int64 __fastcall sub_140553230(__int64 a1, __int64 a2)
{
	int* v2; // rax
	int v4; // ebp
	__int64* v5; // rdi
	unsigned int v6; // ebx
	__int64 v7; // rax

	v2 = *(int**)(a2 + 24);
	if (!v2)
		return 0i64;
	v4 = *v2;
	if (!*v2)
		return 0i64;
	v5 = (__int64*)(a1 + 24);
	v6 = 0;
	while (1)
	{
		v7 = *v5;
		if (!*v5)
			return 0i64;
		if (*(_DWORD*)(v7 + 4) == 9
			&& *(_DWORD*)(v7 + 12) == v4
			&& !(unsigned int)sub_1405510D0(a1, v6)
			&& (unsigned int)sub_140553790(a1, v6))
		{
			break;
		}
		++v6;
		++v5;
		if (v6 >= 6)
			return 0i64;
	}
	return 1i64;
}

