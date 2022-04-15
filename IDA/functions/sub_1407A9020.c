#include "../winhttp.h"

//----- (00000001407A9020) ----------------------------------------------------
int* __fastcall sub_1407A9020(__int64 a1, int a2)
{
	unsigned __int64 v2; // rdi
	unsigned __int64 v3; // r8
	int* result; // rax
	int* v7; // r14
	int* v8; // rdx
	__int64 v9; // rcx

	v2 = *(_QWORD*)(a1 + 436152);
	v3 = 0i64;
	if (v2)
	{
		result = *(int**)(a1 + 436144);
		while (*result != a2)
		{
			++v3;
			++result;
			if (v3 >= v2)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		result = sub_14018DB00(*(_QWORD*)(a1 + 436144), v2 + 1, 4i64);
		v7 = result;
		result[v2] = a2;
		v8 = *(int**)(a1 + 436144);
		if (v8 != result)
		{
			result = sub_1407DB590(result, v8, 4i64 * *(_QWORD*)(a1 + 436152));
			v9 = *(_QWORD*)(a1 + 436144);
			if (v9)
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
			*(_QWORD*)(a1 + 436144) = v7;
		}
		*(_QWORD*)(a1 + 436152) = v2 + 1;
	}
	return result;
}

