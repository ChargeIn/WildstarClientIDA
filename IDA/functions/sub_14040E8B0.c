#include "../winhttp.h"

//----- (000000014040E8B0) ----------------------------------------------------
int* __fastcall sub_14040E8B0(__int64 a1, __int64* a2, int a3)
{
	__int64 v4; // rbp
	int v6; // esi
	int* result; // rax
	int* v8; // rdi
	__int64 i; // r15
	__int64 v10; // rdi
	__int64 v11; // r12
	int* v12; // rsi
	int* v13; // r14
	__int64 v14; // [rsp+20h] [rbp-38h]

	v4 = 0i64;
	a2[1] = 0i64;
	v6 = a3;
	result = sub_14018DBC0(*a2, *(_QWORD*)(a1 + 376), 16i64);
	v8 = result;
	if ((int*)*a2 != result)
	{
		result = sub_1407DB590(result, (int*)*a2, 16 * a2[1]);
		if (*a2)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
		*a2 = (__int64)v8;
	}
	for (i = *(_QWORD*)(a1 + 376); i; --i)
	{
		result = *(int**)(a1 + 368);
		if ((result[v4] & v6) != 0)
		{
			v10 = a2[1];
			LODWORD(v14) = result[v4];
			v11 = v10 + 1;
			v12 = &result[v4 + 2];
			result = sub_14018DB00(*a2, v10 + 1, 16i64);
			v10 *= 2i64;
			*(_QWORD*)&result[2 * v10] = v14;
			*(_QWORD*)&result[2 * v10 + 2] = v12;
			v13 = result;
			if ((int*)*a2 != result)
			{
				result = sub_1407DB590(result, (int*)*a2, 16 * a2[1]);
				if (*a2)
					result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
				*a2 = (__int64)v13;
			}
			v6 = a3;
			a2[1] = v11;
		}
		v4 += 6i64;
	}
	return result;
}
// 14040E96C: variable 'v14' is possibly undefined

