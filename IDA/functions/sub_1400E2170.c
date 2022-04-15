#include "../winhttp.h"

//----- (00000001400E2170) ----------------------------------------------------
int* __fastcall sub_1400E2170(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	int* result; // rax
	int* v6; // r14
	int* v7; // rdx
	__int64 v8; // rcx

	v2 = *(_QWORD*)(a1 + 768);
	result = sub_14018DB00(*(_QWORD*)(a1 + 760), v2 + 1, 8i64);
	v6 = result;
	*(_QWORD*)&result[2 * v2] = a2;
	v7 = *(int**)(a1 + 760);
	if (v7 != result)
	{
		result = sub_1407DB590(result, v7, 8i64 * *(_QWORD*)(a1 + 768));
		v8 = *(_QWORD*)(a1 + 760);
		if (v8)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		*(_QWORD*)(a1 + 760) = v6;
	}
	*(_QWORD*)(a1 + 768) = v2 + 1;
	return result;
}

