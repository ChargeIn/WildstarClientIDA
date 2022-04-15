#include "../winhttp.h"

//----- (000000014053C030) ----------------------------------------------------
__int64 __fastcall sub_14053C030(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 i; // rbx
	__int64 result; // rax

	v6 = sub_14053C2D0(a3, *(_QWORD*)(a1 + 16), a2);
	v7 = *(_QWORD*)(a1 + 16);
	for (i = v6; i != v7; i += 112i64)
		sub_1403F6EE0(i);
	result = a2;
	*(_QWORD*)(a1 + 16) += 112 * ((a3 - a2) / -112);
	return result;
}

