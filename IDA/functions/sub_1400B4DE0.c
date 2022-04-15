#include "../winhttp.h"

//----- (00000001400B4DE0) ----------------------------------------------------
int* __fastcall sub_1400B4DE0(__int64* a1, __int64 a2, _QWORD* a3)
{
	unsigned __int64 v6; // rbp
	int* v7; // r14
	int* result; // rax

	v6 = a1[1] + 1;
	v7 = sub_14018DB00(*a1, v6, 8i64);
	result = sub_1407DB590(&v7[2 * a2 + 2], (int*)(8 * a2 + *a1), 8 * (a1[1] - a2));
	*(_QWORD*)&v7[2 * a2] = *a3;
	if ((int*)*a1 != v7)
	{
		result = sub_1407DB590(v7, (int*)*a1, 8 * a2);
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v7;
	}
	a1[1] = v6;
	return result;
}

