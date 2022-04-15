#include "../winhttp.h"

//----- (00000001408FA640) ----------------------------------------------------
__int64 __fastcall sub_1408FA640(unsigned int* a1)
{
	__int64 result; // rax
	unsigned int* v3; // r14
	unsigned int* v4; // rsi
	unsigned int* v5; // rdi
	unsigned int* v6; // rdi

	result = *a1;
	if ((_DWORD)result == 2)
	{
		v6 = a1 + 34;
		sub_1408FA420(
			(__int64)a1,
			*((float*)a1 + 126),
			COERCE_DOUBLE((unsigned __int64)a1[127]),
			(float*)a1 + 33,
			a1 + 34);
		*(_QWORD*)(a1 + 29) = 0i64;
		a1[25] = a1[33];
		result = *v6;
		a1[26] = result;
	}
	else if ((_DWORD)result == 4)
	{
		v3 = a1 + 36;
		v4 = a1 + 35;
		v5 = a1 + 34;
		sub_1408FA4E0(
			(__int64)a1,
			*((float*)a1 + 126),
			COERCE_DOUBLE((unsigned __int64)a1[127]),
			(float*)a1 + 33,
			(float*)a1 + 34,
			(float*)a1 + 35,
			(float*)a1 + 36);
		*(_QWORD*)(a1 + 29) = 0i64;
		*(_QWORD*)(a1 + 31) = 0i64;
		a1[25] = a1[33];
		a1[26] = *v5;
		a1[27] = *v4;
		result = *v3;
		a1[28] = result;
	}
	return result;
}

