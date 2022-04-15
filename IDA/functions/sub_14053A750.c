#include "../winhttp.h"

//----- (000000014053A750) ----------------------------------------------------
int* sub_14053A750()
{
	__int64 v0; // rdi
	__int64 v1; // rsi
	unsigned __int64 v2; // rcx
	unsigned __int64 v3; // rdx
	int* result; // rax
	unsigned __int64 v5; // rbp
	__int64 v6; // rbx
	int* v7; // r14
	int* v8; // rdx
	__int64 v9; // rcx

	v0 = qword_140C65898;
	v1 = qword_140C65A58;
	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C65898 + 29992);
	if (v3)
	{
		result = *(int**)(qword_140C65898 + 29984);
		while (qword_140C65A58 != *(_QWORD*)result)
		{
			++v2;
			result += 2;
			if (v2 >= v3)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v5 = v3 + 1;
		v6 = *(_QWORD*)(qword_140C65898 + 29992);
		result = sub_14018DB00(*(_QWORD*)(qword_140C65898 + 29984), v3 + 1, 8i64);
		v7 = result;
		*(_QWORD*)&result[2 * v6] = v1;
		v8 = *(int**)(v0 + 29984);
		if (v8 != result)
		{
			result = sub_1407DB590(result, v8, 8i64 * *(_QWORD*)(v0 + 29992));
			v9 = *(_QWORD*)(v0 + 29984);
			if (v9)
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
			*(_QWORD*)(v0 + 29984) = v7;
		}
		*(_QWORD*)(v0 + 29992) = v5;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A58: using guessed type __int64 qword_140C65A58;

