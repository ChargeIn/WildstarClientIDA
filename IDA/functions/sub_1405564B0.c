#include "../winhttp.h"

//----- (00000001405564B0) ----------------------------------------------------
__int64 __fastcall sub_1405564B0(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rax
	unsigned int* v3; // rax

	result = *(unsigned int*)(a1 + 8);
	if (!(_DWORD)result)
	{
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 4));
		if (v2 && (v3 = *(unsigned int**)(v2 + 24)) != 0i64)
			return *v3;
		else
			return 0i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

