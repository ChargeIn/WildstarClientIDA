#include "../winhttp.h"

//----- (000000014084CA80) ----------------------------------------------------
_QWORD* __fastcall sub_14084CA80(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rdi
	_QWORD* result; // rax

	v4 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 3;
	if (v4 >= *(unsigned int*)(a1 + 16) && !sub_140892EF0(a1, 4) || v4 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	result = *(_QWORD**)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 1;
	if (result)
		*result = a2;
	return result;
}

