#include "../winhttp.h"

//----- (000000014087C410) ----------------------------------------------------
__int64 __fastcall sub_14087C410(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbx
	unsigned __int64 v6; // rdi
	_DWORD* v7; // rcx

	v3 = a1 + 8;
	v6 = (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) >> 3;
	if (v6 >= *(unsigned int*)(a1 + 24) && !sub_140892EF0(a1 + 8, 8))
		return 2i64;
	if (v6 >= *(unsigned int*)(v3 + 16))
		return 2i64;
	v7 = *(_DWORD**)(v3 + 8);
	*(_QWORD*)(v3 + 8) = v7 + 2;
	if (!v7)
		return 2i64;
	v7[1] = a3;
	*v7 = a2;
	return 1i64;
}

