#include "../winhttp.h"

//----- (00000001403CAB70) ----------------------------------------------------
__int64 __fastcall sub_1403CAB70(__int64 a1, __int64 a2)
{
	__int64 i; // rdi
	unsigned int* v6; // rbx

	if (!*(_QWORD*)(a1 + 120))
		return 2147500037i64;
	for (i = 0i64; (unsigned int)i < *(unsigned __int16*)(a2 + 4); i = (unsigned int)(i + 1))
	{
		v6 = (unsigned int*)(*(_QWORD*)(a2 + 8) + 8 * i);
		*sub_1403D2690(a1 + 7056, v6) = v6[1];
		sub_1403CADA0(a1, *v6);
	}
	return 0i64;
}

