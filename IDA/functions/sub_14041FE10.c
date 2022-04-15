#include "../winhttp.h"

//----- (000000014041FE10) ----------------------------------------------------
__int64 __fastcall sub_14041FE10(__int64 a1, __int64 a2, int a3, __int64* a4)
{
	int* v5; // rax
	int v6; // ebx
	__int64 v7; // rax
	__int64 result; // rax

	v5 = (int*)sub_1406622C0(a2, a3);
	v6 = 0;
	if (v5)
		v7 = sub_1403D90D0(qword_140C65898, *v5);
	else
		v7 = 0i64;
	if (v7)
		v6 = *(_DWORD*)(v7 + 8);
	*a4 += 8i64;
	result = *a4;
	**(_DWORD**)(*a4 - 8) = v6;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

