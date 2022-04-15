#include "../winhttp.h"

//----- (0000000140686730) ----------------------------------------------------
__int64 __fastcall sub_140686730(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	int v5; // eax
	BOOL* v6; // rcx
	BOOL v7; // edx
	__int64 result; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(unsigned int**)(v3 + 8)) != 0i64)
	{
		v5 = sub_14048D940(qword_140C65948, *v4);
		v6 = (BOOL*)a1[2];
		v6[2] = 1;
		v7 = v5 != 0;
		result = 1i64;
		*v6 = v7;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;

