#include "../winhttp.h"

//----- (0000000140386040) ----------------------------------------------------
int* __fastcall sub_140386040(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	__int64 v4; // rbx
	int* result; // rax
	int* v6; // r14
	int* v7; // rdx
	__int64 v8; // rcx

	(**a2)(a2);
	v4 = *(_QWORD*)(a1 + 80);
	result = sub_14018DB00(*(_QWORD*)(a1 + 72), v4 + 1, 8i64);
	v6 = result;
	*(_QWORD*)&result[2 * v4] = a2;
	v7 = *(int**)(a1 + 72);
	if (v7 != result)
	{
		result = sub_1407DB590(result, v7, 8i64 * *(_QWORD*)(a1 + 80));
		v8 = *(_QWORD*)(a1 + 72);
		if (v8)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		*(_QWORD*)(a1 + 72) = v6;
	}
	*(_QWORD*)(a1 + 80) = v4 + 1;
	return result;
}

