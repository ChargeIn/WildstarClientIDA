#include "../winhttp.h"

//----- (000000014091B4D0) ----------------------------------------------------
_QWORD* __fastcall sub_14091B4D0(__int64 a1, int a2)
{
	unsigned int* v2; // rbx
	_QWORD* result; // rax
	unsigned int* v5; // rsi
	_QWORD* v6; // rbp
	_QWORD* v7; // rbx

	v2 = *(unsigned int**)a1;
	sub_140932A90(*(unsigned int**)a1, 25, 2, 0i64, 2, 0i64, 512, 8i64 * a2);
	result = sub_140931B80(v2, 4, 2, 0i64, 8, 0i64);
	v5 = *(unsigned int**)a1;
	v6 = result;
	if (!**(_DWORD**)a1)
	{
		result = sub_14092D590(*(_QWORD*)a1, 32i64);
		v7 = result;
		if (result)
		{
			*result = 0i64;
			result[1] = v6;
			result = sub_140932570((__int64)v5);
			v7[2] = result;
			v7[3] = *(_QWORD*)(a1 + 192);
			*(_QWORD*)(a1 + 192) = v7;
		}
	}
	return result;
}

