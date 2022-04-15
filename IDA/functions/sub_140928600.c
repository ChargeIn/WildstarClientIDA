#include "../winhttp.h"

//----- (0000000140928600) ----------------------------------------------------
_QWORD* __fastcall sub_140928600(__int64 a1)
{
	unsigned int* v1; // rdi
	_QWORD* result; // rax
	_QWORD* v4; // rsi
	__int64 v5; // rcx

	v1 = *(unsigned int**)a1;
	sub_140932A90(*(unsigned int**)a1, 539, 10, 0i64, 10, 0i64, 512, 1i64);
	result = sub_140932450((__int64)v1, 0);
	v4 = result;
	if (!*v1)
	{
		result = sub_14092D590((__int64)v1, 16i64);
		if (result)
		{
			v5 = *(_QWORD*)(a1 + 240);
			*result = v4;
			result[1] = v5;
			*(_QWORD*)(a1 + 240) = result;
		}
	}
	return result;
}

